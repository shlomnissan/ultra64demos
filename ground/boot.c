/**************************************************************************
 *                                                                        *
 *               Copyright (C) 1995, Silicon Graphics, Inc.               *
 *                                                                        *
 *  These coded instructions, statements, and computer programs  contain  *
 *  unpublished  proprietary  information of Silicon Graphics, Inc., and  *
 *  are protected by Federal copyright  law.  They  may not be disclosed  *
 *  to  third  parties  or copied or duplicated in any form, in whole or  *
 *  in part, without the prior written consent of Silicon Graphics, Inc.  *
 *                                                                        *
 *************************************************************************/

/*---------------------------------------------------------------------*
        Copyright (C) 1998 Nintendo. (Originated by SGI)
        
        $RCSfile: boot.c,v $
        $Revision: 1.11 $
        $Date: 1998/12/24 12:07:03 $
 *---------------------------------------------------------------------*/

/*
 * File:  boot.c
 * Created: Thu Dec 14 16:48:01 PST 1995
 *
 */

#ifdef SN64
#include "libsn.h"
#endif

#include <ultra64.h>
#include <PR/ramrom.h>		/* needed for argument passing into the app */
#include <assert.h>

#include "game.h"
#include "controller.h"

/*
 * Symbol genererated by "makerom" (RAM)
 */
extern char     _codeSegmentEnd[];
extern char     _zbufferSegmentEnd[];
extern char     _codeSegmentTextEnd[];
extern char     _codeSegmentTextStart[];

/*
 * Symbols generated by "makerom" (ROM)
 */
extern char     _staticSegmentRomStart[],
                _staticSegmentRomEnd[];
extern char     _textureSegmentRomStart[],
                _textureSegmentRomEnd[];

/*
 * Stacks for the threads as well as message queues for synchronization
 * This stack is ridiculously large, and could also be reclaimed once
 * the main thread is started.
 */
/*
 * This stack is used only during boot and could be reclaimed later
 */
u64             bootStack[STACKSIZE / sizeof(u64)];

/*
 * Threads
 */
static void     idle(void *);
static void     mainproc(void *);
extern void	game(void);

static OSThread idleThread;
static u64      idleThreadStack[STACKSIZE / sizeof(u64)];

static OSThread mainThread;
static u64      mainThreadStack[STACKSIZE / sizeof(u64)];

/*
 * Messages and message queues
 */
static OSMesg   PiMessages[NUM_PI_MSGS];
static OSMesgQueue PiMessageQ;

OSMesgQueue     dmaMessageQ,
                rdpMessageQ,
                retraceMessageQ;

OSMesg          dmaMessageBuf,
                rdpMessageBuf,
                retraceMessageBuf;

OSIoMesg        dmaIOMessageBuf;	/* * see man page to understand this */

/*
 * global variables
 */
static int	debugflag = 0;
int		rdp_flag = 0;
char		*staticSegment;
char		*textureSegment;

#ifdef DEBUG
static u32      argbuf[256];
#endif


OSPiHandle	*handler;

void
boot(void)
{
	/*
	 * notice that you can't call osSyncPrintf() until you set
	 * up an idle thread.
	 */

	osInitialize();
#ifdef SN64
        init_debug();
#endif

	handler = osCartRomInit();

	osCreateThread(&idleThread, 1, idle, NULL,
			   idleThreadStack + STACKSIZE / sizeof(u64), 10);

	osStartThread(&idleThread);

	/*
	 * never reached 
	 */
}

static void
idle(void *arg)
{
	/*
	 * Initialize video 
	 */
	osCreateViManager(OS_PRIORITY_VIMGR);
	osViSetMode(&osViModeTable[OS_VI_NTSC_LAN1]);

	/*
	 * Start PI Mgr for access to cartridge
	 */
	osCreatePiManager((OSPri) OS_PRIORITY_PIMGR, &PiMessageQ, PiMessages,
		  NUM_PI_MSGS);

	/*
	 * Create main thread
	 */
	osCreateThread(&mainThread, 3, mainproc, NULL,
		   mainThreadStack + STACKSIZE / sizeof(u64), 10);

	osStartThread(&mainThread);

	/*
	 * Become the idle thread
	 */
	osSetThreadPri(0, 0);

	for (;;) ;
}

/*
 * This is the main routine of the app.
 */
static void
mainproc(void *arg)
{
#ifdef DEBUG
	int             i;
	char           *ap;
	u32            *argp;

	/*
	 * get arguments (options)
	 */
	argp = (u32 *) RAMROM_APP_WRITE_ADDR;
	for (i = 0; i < sizeof(argbuf) / 4; i++, argp++) {
		osEPiReadIo(handler, (u32) argp, &argbuf[i]);	/* Assume no DMA */
	}
	((char *) argbuf)[sizeof(argbuf)-1] = '\0';

	/*
	 * Parse the options 
	 */
	ap = (char *) argbuf;
	position_str = (char *) 0;
	while (*ap != '\0') {
		while (*ap == ' ')
			ap++;
		if (*ap == '-' && *(ap + 1) == 'r') {
			rdp_flag = 1;
			ap += 2;
		} else if (*ap == '-' && *(ap + 1) == 'i') {
			ap += 2;
			position_str = ap;
			break;			/* -i must be last argument */
		} else ap++;
	}
#endif

	/*
	 * Setup the message queues
	 */
	osCreateMesgQueue(&dmaMessageQ, &dmaMessageBuf, 1);

	osCreateMesgQueue(&rdpMessageQ, &rdpMessageBuf, 1);
	osSetEventMesg(OS_EVENT_DP, &rdpMessageQ, NULL);

	osCreateMesgQueue(&retraceMessageQ, &retraceMessageBuf, 1);
	osViSetEvent(&retraceMessageQ, NULL, 1);

	/*
	 * Stick the static segment right after the code/data segment
	 */
	staticSegment = _zbufferSegmentEnd;

	dmaIOMessageBuf.hdr.pri      = OS_MESG_PRI_NORMAL;
	dmaIOMessageBuf.hdr.retQueue = &dmaMessageQ;
	dmaIOMessageBuf.dramAddr     = staticSegment;
	dmaIOMessageBuf.devAddr      = (u32)_staticSegmentRomStart;
	dmaIOMessageBuf.size         = (u32)_staticSegmentRomEnd-(u32)_staticSegmentRomStart;

	osEPiStartDma(handler, &dmaIOMessageBuf, OS_READ);

	/*
	 * Wait for DMA to finish
	 */
	(void) osRecvMesg(&dmaMessageQ, NULL, OS_MESG_BLOCK);

	/*
	 * Stick the texture segment right after the static segment
	 */
	textureSegment = staticSegment + 
		(u32) _staticSegmentRomEnd - (u32) _staticSegmentRomStart;

	dmaIOMessageBuf.hdr.pri      = OS_MESG_PRI_NORMAL;
	dmaIOMessageBuf.hdr.retQueue = &dmaMessageQ;
	dmaIOMessageBuf.dramAddr     = textureSegment;
	dmaIOMessageBuf.devAddr      = (u32)_textureSegmentRomStart;
	dmaIOMessageBuf.size         = (u32)_textureSegmentRomEnd-(u32)_textureSegmentRomStart;

	osEPiStartDma(handler, &dmaIOMessageBuf, OS_READ);

	/*
	 * Wait for DMA to finish
	 */
	(void) osRecvMesg(&dmaMessageQ, NULL, OS_MESG_BLOCK);

	initControllers(MAXCONTROLLERS);

	game();
}

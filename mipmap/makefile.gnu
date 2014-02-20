%.obj: %.c
        ccn64 -c -g -DSN64 -DF3DEX_GBI_2 $*.c -I.

mipmap.bin: boot.obj game.obj controller.obj font.obj dram_stack.obj \
            gfxinit.obj gfxstatic.obj texture.obj cfb.obj rsp_cfb.obj zbuffer.obj \
            mipmap.lk
        psylink /c /s /p /m /g @mipmap.lk,mipmap.bin,mipmap.sym,mipmap.map
        setcsum mipmap.bin 0x80000400

boot.obj: boot.c
game.obj: game.c
controller.obj: controller.c
font.obj: font.c
dram_stack.obj: dram_stack.c
gfxinit.obj: gfxinit.c
gfxstatic.obj: gfxstatic.c
texture.obj: texture.c
cfb.obj: cfb.c
rsp_cfb.obj: rsp_cfb.c
zbuffer.obj: zbuffer.c

clean:
	del *.obj
	del mipmap.bin
	del mipmap.sym
	del mipmap.map

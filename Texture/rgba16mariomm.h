/*
 * Do not edit this file.  It was automatically generated
 * by "rgb2c" from the file "mario.rgb".
 *
/*
 *   Size: 32 x 32
 *   Number of channels: 3
 *   Number of bits per texel: 16 (G_IM_SIZ_16b)
 *   Format of texel: G_IM_FMT_RGBA
 *
 * Example usage:
 *
 *   gsSPTexture (128, 128, (levels-1), G_TX_RENDERTILE, 1),
 *   gsDPPipeSync (),
 *   gsDPSetCombineMode (G_CC_MODULATERGBA, G_CC_MODULATERGBA),
 *   gsDPSetTexturePersp (G_TP_PERSP),
 *   gsDPSetTextureDetail (G_TD_CLAMP),
 *   gsDPSetTextureLOD (G_TL_TILE),
 *   gsDPSetTextureLUT (G_TT_NONE),
 *   gsDPSetTextureFilter (G_TF_BILERP),
 *   gsDPSetTextureConvert(G_TC_FILT),
 *   gsDPLoadTextureBlock (RGBA16marioMM, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0
 *     G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR,
 *     G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
 */

#if 0	/* Image preview */
	+--------------------------------+
	|~~~~+++++++++++++++++++++++~~~~~|
	|~~~~+++++++++++++.,,,+++++++~~~~|
	|~~~++++++++++~..,..,,,...++~~~~~|
	|~+~+++++++++,,,,.......,,.+++~~~|
	|~+++++..+++~,,,,,..,,,....~++~~~|
	|+++++,*o+++.,,..,...,,,,,,.~++~~|
	|+~..,,*o+++.,,.,,...,,,...,.++~~|
	|+.o****o.++....,,,........,.++~~|
	|+.,o****+++,.,..,,...,......~++~|
	|+.o**,**~...,.,,,,,....,....+~++|
	|++~oo+**.,,,..~.......,,...~~+++|
	|++++.,o+,,,,,,........,,,+++++++|
	|++++++.,...,,.+++,,.,...++++++++|
	|++++++++.++.~++..~.,~~o+++++++++|
	|+++++++.++,+++.,..+.++++++++++++|
	|++++++..++,++++...,+.+++++++++++|
	|+++++.,.++++++.....+,o+oo+++++++|
	|+++++.,,....+.......~ooo+o++++++|
	|+,+++,,.....+........oooooo+++++|
	|++,++,,.....+~o+.+o+.ooooo++++++|
	|++++,,,...+++,,++oo+.ooooooo++++|
	|+,++,,,....o+%~+,ooo~ooooooo++++|
	|+++.,,.....o+%~+.ooo.o,ooooo++++|
	|+++.,,.....,~**+~,..oooooooooo++|
	|+++,,*,......ooo*.oooooooooooo++|
	|+++,.o,.......~~oooooooooooooo++|
	|+o+..,,,.,+......**ooooooooooo+o|
	|o+o~,.,,,,oo,...o*oo*oooooooooo+|
	|o+oooo,,,,***...+*o**ooooooooooo|
	|oooooo,,,.***o..*oo*****oooooooo|
	|oooooo+,,,****~********ooooooooo|
	|ooooooo,.****************ooooooo|
	+--------------------------------+
#endif

static Gfx RGBA16marioMM_MIP_dummy_aligner1[] = { gsSPEndDisplayList() };

unsigned short RGBA16marioMM_orig[] = {
0x949d, 0xa465, 0xa461, 0xb463, 0xacdf, 0xa4dd, 0xb4e7, 0x15f, 0x1087, 0xc55f, 0xcceb, 0xd525, 0xd561, 0xb5a3, 0xc567, 0xbd61, 0xb523, 0xbd29, 0xb5ab, 0xc5a5, 0xbd27, 0xa569, 0xad25, 0xbd61, 0xa561, 0xace5, 0xb4e3, 0xbc9f, 0xa521, 0xac9f, 0xb45d, 0x9c9b, 
0xa3e1, 0xac63, 0x9461, 0xb4a5, 0xacd9, 0xaca1, 0x7b9f, 0x70cd, 0x80cd, 0x3901, 0xcd65, 0xb569, 0xcd2f, 0xcd2b, 0x1a9d, 0xa565, 0xd4ef, 0xbd21, 0xc521, 0xa56b, 0xcd2b, 0xbd21, 0xb597, 0xbcd9, 0xa55f, 0xbc9f, 0xb45f, 0xac9d, 0x949d, 0xa463, 0xac5d, 0x8c9b, 
0x9be3, 0xa421, 0x949f, 0xa49d, 0xa4a3, 0xbca9, 0xe1, 0x4151, 0x808f, 0x3813, 0xe51b, 0xc565, 0xdd2b, 0xbc65, 0x1907, 0x20c1, 0xcce9, 0xa4eb, 0xbce3, 0xbd1f, 0xbce5, 0xb563, 0xbce5, 0xb523, 0xace3, 0xac63, 0xac61, 0xa45f, 0x9c9b, 0x949d, 0x941d, 0x9c1f, 
0x8c1d, 0x93dd, 0x9c21, 0xac21, 0xa45f, 0x9d1b, 0x314f, 0x7107, 0x808f, 0x68cf, 0xbce5, 0xc4eb, 0xc55f, 0xdb, 0x10c7, 0xc3, 0x93cb, 0xcce1, 0xad1f, 0xb527, 0xc521, 0xcc9f, 0xb4e1, 0x9d5d, 0xbca3, 0xacdf, 0xacdb, 0xac5d, 0xa41f, 0xa41f, 0x9c1f, 0x8bdb, 
0x9be3, 0x8be1, 0x945d, 0x3a65, 0x40cb, 0x2849, 0x6105, 0x6145, 0x708f, 0x788f, 0xe449, 0xa521, 0x31a1, 0x903, 0x10c9, 0x8c7, 0xa44d, 0xc4ef, 0xa4e3, 0xbca1, 0xad25, 0xace7, 0xa4e5, 0xa4e1, 0xb45f, 0xa49f, 0xa4a1, 0xa45d, 0xabe1, 0x9c1f, 0x93df, 0x93d9, 
0x93df, 0x93dd, 0x83db, 0x10cd, 0x204d, 0x31df, 0x5907, 0x410b, 0x5009, 0x70cd, 0xdb41, 0xd1, 0x8c5, 0x1087, 0x887, 0x885, 0x8c5, 0xe4dd, 0xbd23, 0xa51d, 0xac99, 0xc49d, 0xbc61, 0xac9d, 0xa461, 0xb45f, 0x9c1f, 0xa461, 0xa41d, 0x9bdf, 0x9bdb, 0x9bdb, 
0x7b9d, 0x8419, 0x839d, 0x50cb, 0x1889, 0x6c35, 0x58c9, 0x1089, 0x885, 0x883, 0x883, 0x8c9, 0x47, 0x10c7, 0x7285, 0x6213, 0x8c1f, 0xac51, 0xb4dd, 0xad1f, 0xa45f, 0xaca1, 0x9ca3, 0x9c5d, 0x9c9b, 0xa461, 0x9c23, 0x9421, 0x9c1b, 0xabe1, 0x8be1, 0x93db, 
0x839d, 0x83df, 0x8359, 0x5109, 0x588d, 0xdd57, 0x394b, 0x1009, 0x85, 0x885, 0x8c7, 0x8c7, 0x885, 0x9459, 0x8c53, 0x9c61, 0xad6f, 0xd3, 0xaca3, 0xac65, 0xac5d, 0xac9d, 0xac99, 0xac1f, 0xa421, 0x9c9b, 0x8c5d, 0x9c9d, 0x93e1, 0x9c19, 0x83d7, 0x8bdd, 
0x7bdb, 0x8bdb, 0x839b, 0x3087, 0x608d, 0x608d, 0x1887, 0x80d, 0x85, 0x887, 0x87, 0x2149, 0x4a93, 0xed97, 0xa5ff, 0x9419, 0x2ad7, 0x310b, 0x10c5, 0x889, 0xa44f, 0xa4e3, 0xa461, 0xac9f, 0xb41f, 0xac1b, 0x9c99, 0x9c1b, 0x9c21, 0x8c19, 0x93d9, 0x939b, 
0x8b5f, 0x7be1, 0x835f, 0xd3, 0x604d, 0x608d, 0x180b, 0x849, 0x1085, 0xc7, 0x1087, 0xabd7, 0x9361, 0xcef9, 0x1b25, 0xa3d3, 0x87, 0xabd1, 0xa41f, 0x941f, 0x97, 0xbc1b, 0x19e7, 0xb44d, 0xac63, 0x9c5f, 0x945d, 0x9c1b, 0x8bdd, 0x8c17, 0x83d9, 0x8399, 
0x7b97, 0x2a0f, 0x8b5d, 0x5b5f, 0x5089, 0x50cb, 0x584b, 0x885, 0x1085, 0x8c7, 0x885, 0x9bdd, 0x7bdd, 0xc679, 0x32b, 0xb3c5, 0x2153, 0xab9f, 0xa3df, 0xa3df, 0x3265, 0xac57, 0x9423, 0x9c61, 0x9c1d, 0xab9b, 0x9be1, 0x9c1d, 0x8bdb, 0x9b5f, 0x9359, 0x8b9d, 
0x831b, 0x7b19, 0x9395, 0x839f, 0x15f, 0x50cb, 0x684b, 0x847, 0x887, 0x10c5, 0xa3c9, 0x8bd7, 0xa39d, 0x3101, 0x225, 0xb357, 0x9bdb, 0xa3d3, 0x9c19, 0x9bd9, 0x5d, 0xa419, 0xa3e3, 0x9b9d, 0xa41d, 0x9bdf, 0x93dd, 0x941d, 0x8bd9, 0x73db, 0x8399, 0x8b97, 
0x6b59, 0x830d, 0x997, 0x8b99, 0x6b9b, 0x48c9, 0x588b, 0x1009, 0xc5, 0x887, 0x885, 0x87, 0xab85, 0x631b, 0x8bdd, 0xa3a1, 0xcf, 0x939b, 0x941d, 0x7b5b, 0x87, 0xac5b, 0xa3e3, 0x9c1f, 0xa3e1, 0x93df, 0x9ba1, 0x93df, 0x839b, 0x935b, 0x8b9b, 0x7b59, 
0x735b, 0x19d9, 0x7b97, 0x835f, 0x82dd, 0x38c9, 0x608b, 0x100d, 0x1087, 0x1085, 0x8c5, 0x8c5, 0xab4b, 0x89, 0x885, 0x887, 0x883, 0x885, 0x87, 0x885, 0x885, 0xb457, 0x8c5d, 0xa45d, 0x941b, 0x9c19, 0x93d9, 0x8c1b, 0x935b, 0x8b99, 0x7b97, 0x7b5b, 
0x7319, 0x7355, 0x7ad3, 0x8399, 0x8b5d, 0x18cd, 0x608d, 0x5849, 0x85, 0x85, 0x883, 0x87, 0xa351, 0x89, 0x887, 0xc5, 0x885, 0x85, 0x885, 0x885, 0x3299, 0xa3d5, 0x8c5d, 0xabdd, 0x841f, 0x9c1f, 0x939d, 0x8b9b, 0x8b5f, 0x7b5b, 0x7b57, 0x7359, 
0x8319, 0x835f, 0x835b, 0x8359, 0x8b5d, 0x9d, 0x58c9, 0x3007, 0x9ad9, 0x8b99, 0x7b5b, 0x8b59, 0x9b5f, 0x9321, 0x87, 0x887, 0x45, 0x83, 0x87, 0x9b0d, 0x219b, 0x9c17, 0x8ba1, 0x9c1f, 0x9bdd, 0x83db, 0x9b9f, 0x8b99, 0x7b5d, 0x7b59, 0x7357, 0x7317, 
0x7397, 0x735b, 0x835f, 0x8b9d, 0x83d7, 0x73db, 0x95, 0x10c3, 0x7b57, 0x7355, 0x4141, 0x92db, 0x8395, 0x7b57, 0x6b13, 0x887, 0x2087, 0x18c7, 0x298d, 0x8b93, 0x1909, 0x9b5d, 0x8bdb, 0x839b, 0x8bdd, 0x8b5b, 0x9399, 0x8b5b, 0x8397, 0x7b5b, 0x7b19, 0x7b57, 
0x7b57, 0x7b99, 0x7b57, 0x7b5f, 0x835d, 0x8b5d, 0x83db, 0xdf, 0x8b97, 0x7adf, 0x1a5, 0x8b17, 0x9399, 0x8353, 0xe3, 0x588d, 0x845, 0x1887, 0x9b4b, 0x4f, 0x8c15, 0x839b, 0x73a3, 0x7b95, 0x83db, 0x839b, 0x8bdd, 0x8b99, 0x9321, 0x6b97, 0x7355, 0x7315, 
0x7b5f, 0x7b5d, 0x839d, 0x7b99, 0x8321, 0x7b9d, 0x935d, 0x7b59, 0x2101, 0x8317, 0x8319, 0xc9, 0x8295, 0x8adb, 0x8319, 0x2849, 0x480d, 0x424d, 0xd3, 0x6089, 0x7a81, 0x4a09, 0x8c1f, 0x7bdb, 0x7b9d, 0x8b5f, 0x8b99, 0x7bdb, 0x8357, 0x8359, 0x6b55, 0x7317, 
0x7b5b, 0x7b5b, 0x839b, 0x839d, 0x8b5d, 0x839d, 0x10b, 0x5109, 0x87, 0x8cd, 0x10cd, 0x919, 0x917, 0x28cd, 0x92cd, 0x931d, 0x83db, 0x394f, 0x190f, 0x1881, 0x1191, 0x1085, 0x18c7, 0x288b, 0x9b93, 0x8b5f, 0x939d, 0x7b97, 0x7bd5, 0x7b19, 0x7319, 0x6b19, 
0x7359, 0x7b9b, 0x7399, 0x8b1f, 0xcf, 0x2991, 0xc44b, 0x73f1, 0x1151, 0x915, 0x1119, 0x119, 0x955, 0x5089, 0x1047, 0x1083, 0x84d, 0x83, 0x2107, 0x805, 0x18c1, 0x87, 0x608b, 0x604b, 0x3943, 0x839b, 0x8b5d, 0x835b, 0x8319, 0x7b57, 0x7355, 0x7317, 
0x7b57, 0x7b1b, 0x4a17, 0xbc91, 0x74f3, 0x7b59, 0xad71, 0x9d77, 0x97, 0x917, 0x917, 0x917, 0x955, 0x184d, 0x8281, 0x1083, 0x1885, 0x1085, 0x8c3, 0x4049, 0x845, 0x2107, 0x684b, 0x588d, 0x883, 0x47, 0x885, 0x5207, 0x3a19, 0x7355, 0x7359, 0x72d5, 
0x7359, 0x113, 0xacdb, 0x956f, 0xa5b3, 0x16d, 0xb56f, 0xadb5, 0x37f, 0xd1, 0x8b, 0x1909, 0x957, 0x208f, 0x5941, 0x210f, 0x38c7, 0x608d, 0x604d, 0x2007, 0x885, 0x85, 0x843, 0x5089, 0xc5, 0x85, 0x85, 0x43, 0x8305, 0x7acf, 0x7317, 0x7317, 
0x7b17, 0x11b, 0x3213, 0x9ced, 0x9d73, 0xad75, 0x9d75, 0xa531, 0x4375, 0x9397, 0x82df, 0x1911, 0x1117, 0x4885, 0x883, 0x28c7, 0x604b, 0x608b, 0x200b, 0x85, 0x8c5, 0x28c7, 0x20c9, 0x87, 0x85, 0x28c7, 0x885, 0x1887, 0x7b07, 0x7ad9, 0x7317, 0x6ad7, 
0x7319, 0x119, 0xa527, 0x9d33, 0x9d31, 0xa575, 0x9d75, 0x84f1, 0x8c9, 0x83db, 0x7b5d, 0x10c7, 0x45, 0x3089, 0x85, 0x608b, 0x608b, 0x5089, 0x885, 0x8c3, 0x845, 0x28c7, 0x18c5, 0x845, 0x2103, 0x1885, 0x2907, 0x2885, 0x7389, 0x72d9, 0x6315, 0x6315, 
0x7319, 0x6adf, 0x8c7, 0x8cb, 0x2151, 0x2945, 0xad6b, 0x7cad, 0x8399, 0x835b, 0x83d5, 0x8f, 0x588d, 0x588b, 0x1047, 0x5089, 0x5849, 0x180b, 0x885, 0x1887, 0x2905, 0x30c7, 0x2905, 0x847, 0x887, 0x28c5, 0x38c7, 0x847, 0x7355, 0x72d7, 0x62d5, 0x62d3, 
0x72d9, 0x7319, 0x7319, 0x735b, 0x7b1d, 0x91b, 0xb565, 0x8d6f, 0x8b91, 0x7b5d, 0x8b9f, 0xdd, 0x508d, 0x584b, 0x2087, 0x300d, 0x508b, 0x885, 0x2105, 0x28c5, 0x28c7, 0x3907, 0x30c7, 0x2905, 0x28c5, 0x3107, 0x20c7, 0x72d1, 0x72d7, 0x6353, 0x62d3, 0x6ad3, 
0x5ad7, 0x6b19, 0x7319, 0x7319, 0x7b19, 0x735b, 0xcb, 0x8d1, 0x839d, 0x835d, 0x735b, 0x72d5, 0x40c9, 0x5089, 0x508b, 0x508b, 0x40c7, 0x1081, 0x28c5, 0x3107, 0x3107, 0x2907, 0x1049, 0x1087, 0x1885, 0x2085, 0x6a8b, 0x7319, 0x731b, 0x6315, 0x6297, 0x62d7, 
0x62d7, 0x731b, 0x6ad9, 0x6b59, 0x7b17, 0x6b59, 0x7b1b, 0x835f, 0x839b, 0x7359, 0x8b5d, 0x6b5f, 0x197, 0x4889, 0x588b, 0x588d, 0x1087, 0xc5, 0x847, 0x8c7, 0x18c5, 0x1085, 0x20c7, 0x2147, 0x3107, 0x18c7, 0x7395, 0x72d3, 0x6317, 0x62d5, 0x62d5, 0x62d3, 
0x5ad7, 0x72d9, 0x6317, 0x6ad7, 0x731b, 0x6b1d, 0x7359, 0x7b19, 0x735b, 0x835b, 0x6b5f, 0x7b99, 0x7359, 0x52dd, 0x10cf, 0x1089, 0x220f, 0x10c7, 0x2905, 0x3107, 0x38c9, 0x318b, 0x8c7, 0x28c3, 0x1087, 0x6b13, 0x7319, 0x6b17, 0x62d7, 0x6a95, 0x6297, 0x62d3, 
0x5ad7, 0x6315, 0x6ad9, 0x6ad9, 0x6319, 0x7359, 0x7b19, 0x6b1d, 0x735d, 0x731b, 0x8359, 0x831b, 0x735f, 0x735d, 0x8357, 0x7b5b, 0x7355, 0xd3, 0x2903, 0x3107, 0x2149, 0x7b95, 0x6b59, 0x6b15, 0x7317, 0x7319, 0x7319, 0x72d5, 0x5b13, 0x6ad9, 0x5a93, 0x5a93, 
0x5ad5, 0x6ad7, 0x5ad7, 0x62d7, 0x6b19, 0x6319, 0x7b1d, 0x6b5b, 0x7b19, 0x7357, 0x7359, 0x735d, 0x7b15, 0x7359, 0x7b19, 0x735f, 0x8355, 0x7319, 0x5b59, 0x6b17, 0x7b1b, 0x7b5b, 0x8359, 0x731b, 0x7317, 0x7357, 0x7357, 0x62d5, 0x62d7, 0x5ad3, 0x5a95, 0x5a91, 
};

static Gfx RGBA16marioMM_dummy_aligner2[] = { gsSPEndDisplayList() };

unsigned short RGBA16marioMM_buf[] = {
	0x949d, 0xa465, 0xa461, 0xb463, 	0xacdf, 0xa4dd, 0xb4e7, 0x015f, 
	0x1087, 0xc55f, 0xcceb, 0xd525, 	0xd561, 0xb5a3, 0xc567, 0xbd61, 
	0xb523, 0xbd29, 0xb5ab, 0xc5a5, 	0xbd27, 0xa569, 0xad25, 0xbd61, 
	0xa561, 0xace5, 0xb4e3, 0xbc9f, 	0xa521, 0xac9f, 0xb45d, 0x9c9b, 
	0x9461, 0xb4a5, 0xa3e1, 0xac63, 	0x7b9f, 0x70cd, 0xacd9, 0xaca1, 
	0xcd65, 0xb569, 0x80cd, 0x3901, 	0x1a9d, 0xa565, 0xcd2f, 0xcd2b, 
	0xc521, 0xa56b, 0xd4ef, 0xbd21, 	0xb597, 0xbcd9, 0xcd2b, 0xbd21, 
	0xb45f, 0xac9d, 0xa55f, 0xbc9f, 	0xac5d, 0x8c9b, 0x949d, 0xa463, 
	0x9be3, 0xa421, 0x949f, 0xa49d, 	0xa4a3, 0xbca9, 0x00e1, 0x4151, 
	0x808f, 0x3813, 0xe51b, 0xc565, 	0xdd2b, 0xbc65, 0x1907, 0x20c1, 
	0xcce9, 0xa4eb, 0xbce3, 0xbd1f, 	0xbce5, 0xb563, 0xbce5, 0xb523, 
	0xace3, 0xac63, 0xac61, 0xa45f, 	0x9c9b, 0x949d, 0x941d, 0x9c1f, 
	0x9c21, 0xac21, 0x8c1d, 0x93dd, 	0x314f, 0x7107, 0xa45f, 0x9d1b, 
	0xbce5, 0xc4eb, 0x808f, 0x68cf, 	0x10c7, 0x00c3, 0xc55f, 0x00db, 
	0xad1f, 0xb527, 0x93cb, 0xcce1, 	0xb4e1, 0x9d5d, 0xc521, 0xcc9f, 
	0xacdb, 0xac5d, 0xbca3, 0xacdf, 	0x9c1f, 0x8bdb, 0xa41f, 0xa41f, 
	0x9be3, 0x8be1, 0x945d, 0x3a65, 	0x40cb, 0x2849, 0x6105, 0x6145, 
	0x708f, 0x788f, 0xe449, 0xa521, 	0x31a1, 0x0903, 0x10c9, 0x08c7, 
	0xa44d, 0xc4ef, 0xa4e3, 0xbca1, 	0xad25, 0xace7, 0xa4e5, 0xa4e1, 
	0xb45f, 0xa49f, 0xa4a1, 0xa45d, 	0xabe1, 0x9c1f, 0x93df, 0x93d9, 
	0x83db, 0x10cd, 0x93df, 0x93dd, 	0x5907, 0x410b, 0x204d, 0x31df, 
	0xdb41, 0x00d1, 0x5009, 0x70cd, 	0x0887, 0x0885, 0x08c5, 0x1087, 
	0xbd23, 0xa51d, 0x08c5, 0xe4dd, 	0xbc61, 0xac9d, 0xac99, 0xc49d, 
	0x9c1f, 0xa461, 0xa461, 0xb45f, 	0x9bdb, 0x9bdb, 0xa41d, 0x9bdf, 
	0x7b9d, 0x8419, 0x839d, 0x50cb, 	0x1889, 0x6c35, 0x58c9, 0x1089, 
	0x0885, 0x0883, 0x0883, 0x08c9, 	0x0047, 0x10c7, 0x7285, 0x6213, 
	0x8c1f, 0xac51, 0xb4dd, 0xad1f, 	0xa45f, 0xaca1, 0x9ca3, 0x9c5d, 
	0x9c9b, 0xa461, 0x9c23, 0x9421, 	0x9c1b, 0xabe1, 0x8be1, 0x93db, 
	0x8359, 0x5109, 0x839d, 0x83df, 	0x394b, 0x1009, 0x588d, 0xdd57, 
	0x08c7, 0x08c7, 0x0085, 0x0885, 	0x8c53, 0x9c61, 0x0885, 0x9459, 
	0xaca3, 0xac65, 0xad6f, 0x00d3, 	0xac99, 0xac1f, 0xac5d, 0xac9d, 
	0x8c5d, 0x9c9d, 0xa421, 0x9c9b, 	0x83d7, 0x8bdd, 0x93e1, 0x9c19, 
	0x7bdb, 0x8bdb, 0x839b, 0x3087, 	0x608d, 0x608d, 0x1887, 0x080d, 
	0x0085, 0x0887, 0x0087, 0x2149, 	0x4a93, 0xed97, 0xa5ff, 0x9419, 
	0x2ad7, 0x310b, 0x10c5, 0x0889, 	0xa44f, 0xa4e3, 0xa461, 0xac9f, 
	0xb41f, 0xac1b, 0x9c99, 0x9c1b, 	0x9c21, 0x8c19, 0x93d9, 0x939b, 
	0x835f, 0x00d3, 0x8b5f, 0x7be1, 	0x180b, 0x0849, 0x604d, 0x608d, 
	0x1087, 0xabd7, 0x1085, 0x00c7, 	0x1b25, 0xa3d3, 0x9361, 0xcef9, 
	0xa41f, 0x941f, 0x0087, 0xabd1, 	0x19e7, 0xb44d, 0x0097, 0xbc1b, 
	0x945d, 0x9c1b, 0xac63, 0x9c5f, 	0x83d9, 0x8399, 0x8bdd, 0x8c17, 
	0x7b97, 0x2a0f, 0x8b5d, 0x5b5f, 	0x5089, 0x50cb, 0x584b, 0x0885, 
	0x1085, 0x08c7, 0x0885, 0x9bdd, 	0x7bdd, 0xc679, 0x032b, 0xb3c5, 
	0x2153, 0xab9f, 0xa3df, 0xa3df, 	0x3265, 0xac57, 0x9423, 0x9c61, 
	0x9c1d, 0xab9b, 0x9be1, 0x9c1d, 	0x8bdb, 0x9b5f, 0x9359, 0x8b9d, 
	0x9395, 0x839f, 0x831b, 0x7b19, 	0x684b, 0x0847, 0x015f, 0x50cb, 
	0xa3c9, 0x8bd7, 0x0887, 0x10c5, 	0x0225, 0xb357, 0xa39d, 0x3101, 
	0x9c19, 0x9bd9, 0x9bdb, 0xa3d3, 	0xa3e3, 0x9b9d, 0x005d, 0xa419, 
	0x93dd, 0x941d, 0xa41d, 0x9bdf, 	0x8399, 0x8b97, 0x8bd9, 0x73db, 
	0x6b59, 0x830d, 0x0997, 0x8b99, 	0x6b9b, 0x48c9, 0x588b, 0x1009, 
	0x00c5, 0x0887, 0x0885, 0x0087, 	0xab85, 0x631b, 0x8bdd, 0xa3a1, 
	0x00cf, 0x939b, 0x941d, 0x7b5b, 	0x0087, 0xac5b, 0xa3e3, 0x9c1f, 
	0xa3e1, 0x93df, 0x9ba1, 0x93df, 	0x839b, 0x935b, 0x8b9b, 0x7b59, 
	0x7b97, 0x835f, 0x735b, 0x19d9, 	0x608b, 0x100d, 0x82dd, 0x38c9, 
	0x08c5, 0x08c5, 0x1087, 0x1085, 	0x0885, 0x0887, 0xab4b, 0x0089, 
	0x0087, 0x0885, 0x0883, 0x0885, 	0x8c5d, 0xa45d, 0x0885, 0xb457, 
	0x93d9, 0x8c1b, 0x941b, 0x9c19, 	0x7b97, 0x7b5b, 0x935b, 0x8b99, 
	0x7319, 0x7355, 0x7ad3, 0x8399, 	0x8b5d, 0x18cd, 0x608d, 0x5849, 
	0x0085, 0x0085, 0x0883, 0x0087, 	0xa351, 0x0089, 0x0887, 0x00c5, 
	0x0885, 0x0085, 0x0885, 0x0885, 	0x3299, 0xa3d5, 0x8c5d, 0xabdd, 
	0x841f, 0x9c1f, 0x939d, 0x8b9b, 	0x8b5f, 0x7b5b, 0x7b57, 0x7359, 
	0x835b, 0x8359, 0x8319, 0x835f, 	0x58c9, 0x3007, 0x8b5d, 0x009d, 
	0x7b5b, 0x8b59, 0x9ad9, 0x8b99, 	0x0087, 0x0887, 0x9b5f, 0x9321, 
	0x0087, 0x9b0d, 0x0045, 0x0083, 	0x8ba1, 0x9c1f, 0x219b, 0x9c17, 
	0x9b9f, 0x8b99, 0x9bdd, 0x83db, 	0x7357, 0x7317, 0x7b5d, 0x7b59, 
	0x7397, 0x735b, 0x835f, 0x8b9d, 	0x83d7, 0x73db, 0x0095, 0x10c3, 
	0x7b57, 0x7355, 0x4141, 0x92db, 	0x8395, 0x7b57, 0x6b13, 0x0887, 
	0x2087, 0x18c7, 0x298d, 0x8b93, 	0x1909, 0x9b5d, 0x8bdb, 0x839b, 
	0x8bdd, 0x8b5b, 0x9399, 0x8b5b, 	0x8397, 0x7b5b, 0x7b19, 0x7b57, 
	0x7b57, 0x7b5f, 0x7b57, 0x7b99, 	0x83db, 0x00df, 0x835d, 0x8b5d, 
	0x01a5, 0x8b17, 0x8b97, 0x7adf, 	0x00e3, 0x588d, 0x9399, 0x8353, 
	0x9b4b, 0x004f, 0x0845, 0x1887, 	0x73a3, 0x7b95, 0x8c15, 0x839b, 
	0x8bdd, 0x8b99, 0x83db, 0x839b, 	0x7355, 0x7315, 0x9321, 0x6b97, 
	0x7b5f, 0x7b5d, 0x839d, 0x7b99, 	0x8321, 0x7b9d, 0x935d, 0x7b59, 
	0x2101, 0x8317, 0x8319, 0x00c9, 	0x8295, 0x8adb, 0x8319, 0x2849, 
	0x480d, 0x424d, 0x00d3, 0x6089, 	0x7a81, 0x4a09, 0x8c1f, 0x7bdb, 
	0x7b9d, 0x8b5f, 0x8b99, 0x7bdb, 	0x8357, 0x8359, 0x6b55, 0x7317, 
	0x839b, 0x839d, 0x7b5b, 0x7b5b, 	0x010b, 0x5109, 0x8b5d, 0x839d, 
	0x10cd, 0x0919, 0x0087, 0x08cd, 	0x92cd, 0x931d, 0x0917, 0x28cd, 
	0x190f, 0x1881, 0x83db, 0x394f, 	0x18c7, 0x288b, 0x1191, 0x1085, 
	0x939d, 0x7b97, 0x9b93, 0x8b5f, 	0x7319, 0x6b19, 0x7bd5, 0x7b19, 
	0x7359, 0x7b9b, 0x7399, 0x8b1f, 	0x00cf, 0x2991, 0xc44b, 0x73f1, 
	0x1151, 0x0915, 0x1119, 0x0119, 	0x0955, 0x5089, 0x1047, 0x1083, 
	0x084d, 0x0083, 0x2107, 0x0805, 	0x18c1, 0x0087, 0x608b, 0x604b, 
	0x3943, 0x839b, 0x8b5d, 0x835b, 	0x8319, 0x7b57, 0x7355, 0x7317, 
	0x4a17, 0xbc91, 0x7b57, 0x7b1b, 	0xad71, 0x9d77, 0x74f3, 0x7b59, 
	0x0917, 0x0917, 0x0097, 0x0917, 	0x8281, 0x1083, 0x0955, 0x184d, 
	0x08c3, 0x4049, 0x1885, 0x1085, 	0x684b, 0x588d, 0x0845, 0x2107, 
	0x0885, 0x5207, 0x0883, 0x0047, 	0x7359, 0x72d5, 0x3a19, 0x7355, 
	0x7359, 0x0113, 0xacdb, 0x956f, 	0xa5b3, 0x016d, 0xb56f, 0xadb5, 
	0x037f, 0x00d1, 0x008b, 0x1909, 	0x0957, 0x208f, 0x5941, 0x210f, 
	0x38c7, 0x608d, 0x604d, 0x2007, 	0x0885, 0x0085, 0x0843, 0x5089, 
	0x00c5, 0x0085, 0x0085, 0x0043, 	0x8305, 0x7acf, 0x7317, 0x7317, 
	0x3213, 0x9ced, 0x7b17, 0x011b, 	0x9d75, 0xa531, 0x9d73, 0xad75, 
	0x82df, 0x1911, 0x4375, 0x9397, 	0x0883, 0x28c7, 0x1117, 0x4885, 
	0x200b, 0x0085, 0x604b, 0x608b, 	0x20c9, 0x0087, 0x08c5, 0x28c7, 
	0x0885, 0x1887, 0x0085, 0x28c7, 	0x7317, 0x6ad7, 0x7b07, 0x7ad9, 
	0x7319, 0x0119, 0xa527, 0x9d33, 	0x9d31, 0xa575, 0x9d75, 0x84f1, 
	0x08c9, 0x83db, 0x7b5d, 0x10c7, 	0x0045, 0x3089, 0x0085, 0x608b, 
	0x608b, 0x5089, 0x0885, 0x08c3, 	0x0845, 0x28c7, 0x18c5, 0x0845, 
	0x2103, 0x1885, 0x2907, 0x2885, 	0x7389, 0x72d9, 0x6315, 0x6315, 
	0x08c7, 0x08cb, 0x7319, 0x6adf, 	0xad6b, 0x7cad, 0x2151, 0x2945, 
	0x83d5, 0x008f, 0x8399, 0x835b, 	0x1047, 0x5089, 0x588d, 0x588b, 
	0x0885, 0x1887, 0x5849, 0x180b, 	0x2905, 0x0847, 0x2905, 0x30c7, 
	0x38c7, 0x0847, 0x0887, 0x28c5, 	0x62d5, 0x62d3, 0x7355, 0x72d7, 
	0x72d9, 0x7319, 0x7319, 0x735b, 	0x7b1d, 0x091b, 0xb565, 0x8d6f, 
	0x8b91, 0x7b5d, 0x8b9f, 0x00dd, 	0x508d, 0x584b, 0x2087, 0x300d, 
	0x508b, 0x0885, 0x2105, 0x28c5, 	0x28c7, 0x3907, 0x30c7, 0x2905, 
	0x28c5, 0x3107, 0x20c7, 0x72d1, 	0x72d7, 0x6353, 0x62d3, 0x6ad3, 
	0x7319, 0x7319, 0x5ad7, 0x6b19, 	0x00cb, 0x08d1, 0x7b19, 0x735b, 
	0x735b, 0x72d5, 0x839d, 0x835d, 	0x508b, 0x508b, 0x40c9, 0x5089, 
	0x28c5, 0x3107, 0x40c7, 0x1081, 	0x1049, 0x1087, 0x3107, 0x2907, 
	0x6a8b, 0x7319, 0x1885, 0x2085, 	0x6297, 0x62d7, 0x731b, 0x6315, 
	0x62d7, 0x731b, 0x6ad9, 0x6b59, 	0x7b17, 0x6b59, 0x7b1b, 0x835f, 
	0x839b, 0x7359, 0x8b5d, 0x6b5f, 	0x0197, 0x4889, 0x588b, 0x588d, 
	0x1087, 0x00c5, 0x0847, 0x08c7, 	0x18c5, 0x1085, 0x20c7, 0x2147, 
	0x3107, 0x18c7, 0x7395, 0x72d3, 	0x6317, 0x62d5, 0x62d5, 0x62d3, 
	0x6317, 0x6ad7, 0x5ad7, 0x72d9, 	0x7359, 0x7b19, 0x731b, 0x6b1d, 
	0x6b5f, 0x7b99, 0x735b, 0x835b, 	0x10cf, 0x1089, 0x7359, 0x52dd, 
	0x2905, 0x3107, 0x220f, 0x10c7, 	0x08c7, 0x28c3, 0x38c9, 0x318b, 
	0x7319, 0x6b17, 0x1087, 0x6b13, 	0x6297, 0x62d3, 0x62d7, 0x6a95, 
	0x5ad7, 0x6315, 0x6ad9, 0x6ad9, 	0x6319, 0x7359, 0x7b19, 0x6b1d, 
	0x735d, 0x731b, 0x8359, 0x831b, 	0x735f, 0x735d, 0x8357, 0x7b5b, 
	0x7355, 0x00d3, 0x2903, 0x3107, 	0x2149, 0x7b95, 0x6b59, 0x6b15, 
	0x7317, 0x7319, 0x7319, 0x72d5, 	0x5b13, 0x6ad9, 0x5a93, 0x5a93, 
	0x5ad7, 0x62d7, 0x5ad5, 0x6ad7, 	0x7b1d, 0x6b5b, 0x6b19, 0x6319, 
	0x7359, 0x735d, 0x7b19, 0x7357, 	0x7b19, 0x735f, 0x7b15, 0x7359, 
	0x5b59, 0x6b17, 0x8355, 0x7319, 	0x8359, 0x731b, 0x7b1b, 0x7b5b, 
	0x7357, 0x62d5, 0x7317, 0x7357, 	0x5a95, 0x5a91, 0x62d7, 0x5ad3, 
	0x8c1d, 0x941f, 0x9c5d, 0x839f, 	0x5213, 0xac61, 0xb4e3, 0x94a1, 
	0xaca3, 0xa4e3, 0xace5, 0xa4df, 	0x9c9f, 0xa45f, 0x945d, 0x941b, 
	0xaca1, 0x5a5b, 0x9c1f, 0x9c61, 	0xbce7, 0x4211, 0x68cf, 0xac1d, 
	0xbd25, 0xb521, 0x9c1d, 0xb523, 	0x9c5d, 0x9c5d, 0xace1, 0xac9f, 
	0x93df, 0x839f, 0x51d5, 0x514b, 	0x68cd, 0xab53, 0x4a57, 0x08c7, 
	0x7311, 0xb4e3, 0xb4e1, 0xace1, 	0xac9f, 0xa49f, 0xa41f, 0x9bdd, 
	0x4153, 0x5191, 0x8bdd, 0x7317, 	0x10c9, 0x524d, 0x1887, 0x2905, 
	0xac9f, 0xac9f, 0x7359, 0xac9d, 	0x9c1f, 0x93dd, 0xa45f, 0x9c61, 
	0x839d, 0x6ad7, 0x58cd, 0x30cb, 	0x0887, 0x10c9, 0x6b15, 0x9ce5, 
	0x5ad7, 0x5253, 0x7b57, 0x9c1f, 	0xac5d, 0x9c5b, 0x941d, 0x8bd9, 
	0x4951, 0x404b, 0x7b59, 0x6b1b, 	0x9421, 0x5ba3, 0x0887, 0x41cb, 
	0x62dd, 0x93df, 0x72d3, 0xa3dd, 	0x93db, 0x8b9b, 0xa41d, 0x9c1d, 
	0x7319, 0x62d7, 0x6297, 0x488b, 	0x0887, 0x2147, 0x6a8d, 0x5297, 
	0x5213, 0x7315, 0x4a11, 0xa41f, 	0x9c1f, 0x93dd, 0x8b9b, 0x8399, 
	0x6a99, 0x488d, 0x7319, 0x7b17, 	0x6251, 0x10c9, 0x310b, 0x294b, 
	0x4a51, 0x9c1b, 0x0885, 0x10c5, 	0x8b5b, 0x7b59, 0x941d, 0x93dd, 
	0x7b59, 0x835d, 0x7b5b, 0x3993, 	0x6a95, 0x6295, 0x8b59, 0x41d3, 
	0x1887, 0x41cb, 0x5a93, 0x8b9d, 	0x8bdb, 0x8b9b, 0x835b, 0x7b57, 
	0x835d, 0x6ad9, 0x7b5b, 0x7b9b, 	0x5a55, 0x6215, 0x49cf, 0x4217, 
	0x520b, 0x62d5, 0x414f, 0x314d, 	0x8399, 0x7357, 0x7b59, 0x8b9b, 
	0x7359, 0x7b5b, 0x5adb, 0x7b59, 	0x2197, 0x0915, 0x1113, 0x4149, 
	0x290b, 0x18c7, 0x1085, 0x4089, 	0x518d, 0x6ad7, 0x7317, 0x7357, 
	0x84ad, 0x94f1, 0x62d7, 0x6b5b, 	0x1911, 0x3907, 0x3b2b, 0x2153, 
	0x1085, 0x2887, 0x3889, 0x3849, 	0x5a4b, 0x7317, 0x1087, 0x0885, 
	0x5a99, 0x531d, 0x7c29, 0x952f, 	0x631f, 0x62d7, 0x208b, 0x2887, 
	0x588b, 0x1887, 0x18c5, 0x18c7, 	0x1085, 0x20c7, 0x628d, 0x6b17, 
	0x5257, 0x6b9f, 0x6ad7, 0x5a97, 	0x40cf, 0x3889, 0x7b9b, 0x6adb, 
	0x28c7, 0x28c7, 0x3889, 0x18c5, 	0x6ad5, 0x62d5, 0x20c5, 0x4149, 
	0x62d7, 0x6b19, 0x7319, 0x62d9, 	0x7b5b, 0x7b5b, 0x4a15, 0x48cd, 
	0x20c9, 0x18c5, 0x20c7, 0x18c7, 	0x2907, 0x6291, 0x6b17, 0x62d5, 
	0x6b19, 0x731b, 0x62d5, 0x6ad7, 	0x735b, 0x62d7, 0x735b, 0x7b5b, 
	0x4a0f, 0x5ad3, 0x5295, 0x318b, 	0x62d5, 0x6295, 0x6293, 0x7317, 
	0x8bdb, 0x8bdd, 0x72d9, 0x9c1f, 	0x8bdd, 0x945f, 0x941d, 0x8bdb, 
	0x618f, 0x5a53, 0x93dd, 0x6a97, 	0xac9f, 0x9c1f, 0x7357, 0xb4e1, 
	0x839b, 0x5191, 0x20c9, 0x5a95, 	0x7359, 0x8b9b, 0xa45d, 0x941d, 
	0x28c9, 0x5251, 0x7319, 0x5a13, 	0x9c1d, 0x8b9b, 0x5253, 0x6ad7, 
	0x7b59, 0x72d9, 0x5213, 0x5a55, 	0x290b, 0x5a51, 0x8b9b, 0x835b, 
	0x425b, 0x2951, 0x7359, 0x735f, 	0x49cf, 0x6ad5, 0x390b, 0x2909, 
	0x62d9, 0x73e5, 0x6b61, 0x310f, 	0x3889, 0x20c7, 0x18c7, 0x524f, 
	0x735b, 0x5a15, 0x62d7, 0x6ad9, 	0x418b, 0x62d5, 0x310b, 0x2909, 
	0x839b, 0x72d9, 0x7359, 0x8399, 	0x7317, 0x9c1d, 0x7b59, 0x498f, 
	0x7319, 0x5215, 0x41cf, 0x7317, 	0x310b, 0x398b, 0x6b19, 0x5adb, 
	0x7319, 0x6ad5, 0x0000, 0x0000, 	0x0000, 0x0000, 0x6ad7, 0x5253, 
	0x6ad7, 0x0000, 0x0000, 0x0000, };

Gfx RGBA16marioMM_dl[] = {
	gsDPSetTextureImage( 0, 2, 1, RGBA16marioMM_buf),
	gsDPSetTile( 0, 2, 0, 0, G_TX_LOADTILE, 0, 0, 0, 0, 0, 0, 0),
	gsDPLoadBlock( G_TX_LOADTILE, 0, 0, 1372, 0),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
	gsDPSetTileSize( 0,  0, 0, 31 << G_TEXTURE_IMAGE_FRAC, 31 << G_TEXTURE_IMAGE_FRAC),
	gsDPSetTile(0, 2, 4, 256, 1, 0, 0, 4, 1, 0, 4, 1),
	gsDPSetTileSize( 1,  0, 0, 15 << G_TEXTURE_IMAGE_FRAC, 15 << G_TEXTURE_IMAGE_FRAC),
	gsDPSetTile(0, 2, 2, 320, 2, 0, 0, 3, 2, 0, 3, 2),
	gsDPSetTileSize( 2,  0, 0, 7 << G_TEXTURE_IMAGE_FRAC, 7 << G_TEXTURE_IMAGE_FRAC),
	gsDPSetTile(0, 2, 1, 336, 3, 0, 0, 2, 3, 0, 2, 3),
	gsDPSetTileSize( 3,  0, 0, 3 << G_TEXTURE_IMAGE_FRAC, 3 << G_TEXTURE_IMAGE_FRAC),
	gsDPSetTile(0, 2, 1, 340, 4, 0, 0, 1, 4, 0, 1, 4),
	gsDPSetTileSize( 4,  0, 0, 1 << G_TEXTURE_IMAGE_FRAC, 1 << G_TEXTURE_IMAGE_FRAC),
	gsDPSetTile(0, 2, 1, 342, 5, 0, 0, 0, 5, 0, 0, 5),
	gsDPSetTileSize( 5,  0, 0, 0 << G_TEXTURE_IMAGE_FRAC, 0 << G_TEXTURE_IMAGE_FRAC),
	gsSPEndDisplayList(),
};
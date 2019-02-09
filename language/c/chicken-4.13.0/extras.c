/* Generated from extras.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: extras.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file extras.c
   unit: extras
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[136];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,23),40,100,111,108,111,111,112,56,53,32,120,56,55,32,105,56,56,32,120,115,56,57,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,14),40,115,108,117,114,112,32,112,111,114,116,56,52,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,21),40,114,101,97,100,45,102,105,108,101,32,46,32,116,109,112,54,57,55,48,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,17),40,114,97,110,100,111,109,105,122,101,32,46,32,110,57,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,13),40,114,97,110,100,111,109,32,110,49,48,49,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,12),40,103,49,49,54,32,114,108,49,49,56,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,49,50,50,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,21),40,114,101,97,100,45,108,105,110,101,32,46,32,97,114,103,115,49,48,52,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,110,115,49,52,55,32,110,49,52,56,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,16),40,100,111,114,101,97,100,32,112,111,114,116,49,52,53,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,30),40,114,101,97,100,45,108,105,110,101,115,32,46,32,112,111,114,116,45,97,110,100,45,109,97,120,49,51,57,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,29),40,119,114,105,116,101,45,108,105,110,101,32,115,116,114,49,53,55,32,46,32,112,111,114,116,49,53,56,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,115,116,97,114,116,49,55,54,32,110,49,55,55,32,109,49,55,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,115,116,97,114,116,49,57,49,32,110,49,57,50,32,109,49,57,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,50),40,35,35,115,121,115,35,114,101,97,100,45,115,116,114,105,110,103,33,32,110,49,54,54,32,100,101,115,116,49,54,55,32,112,111,114,116,49,54,56,32,115,116,97,114,116,49,54,57,41,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,39),40,114,101,97,100,45,115,116,114,105,110,103,33,32,110,50,49,49,32,100,101,115,116,50,49,50,32,46,32,116,109,112,50,49,48,50,49,51,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,114,101,97,100,45,115,116,114,105,110,103,47,112,111,114,116,32,110,50,51,50,32,112,50,51,51,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,25),40,114,101,97,100,45,115,116,114,105,110,103,32,46,32,116,109,112,50,53,53,50,53,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,27),40,114,101,97,100,45,98,117,102,102,101,114,101,100,32,46,32,116,109,112,50,55,49,50,55,50,41,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,30),40,114,101,97,100,45,116,111,107,101,110,32,112,114,101,100,50,56,49,32,46,32,112,111,114,116,50,56,50,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,22),40,98,111,100,121,51,48,48,32,110,51,48,57,32,112,111,114,116,51,49,48,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,22),40,100,101,102,45,112,111,114,116,51,48,51,32,37,110,50,57,56,51,49,55,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,10),40,100,101,102,45,110,51,48,50,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,29),40,119,114,105,116,101,45,115,116,114,105,110,103,32,115,50,57,54,32,46,32,109,111,114,101,50,57,55,41,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,23),40,114,101,97,100,45,98,121,116,101,32,46,32,116,109,112,51,50,56,51,50,57,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,32),40,119,114,105,116,101,45,98,121,116,101,32,98,121,116,101,51,52,50,32,46,32,116,109,112,51,52,49,51,52,51,41};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,18),40,114,101,97,100,45,109,97,99,114,111,63,32,108,51,54,50,41,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,19),40,114,101,97,100,45,109,97,99,114,111,45,112,114,101,102,105,120,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,19),40,111,117,116,32,115,116,114,51,57,52,32,99,111,108,51,57,53,41,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,24),40,119,114,45,101,120,112,114,32,101,120,112,114,52,48,54,32,99,111,108,52,48,55,41};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,52,49,49,32,99,111,108,52,49,50,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,20),40,119,114,45,108,115,116,32,108,52,48,56,32,99,111,108,52,48,57,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,11),40,103,52,52,52,32,97,52,52,54,41,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,105,52,50,50,32,106,52,50,51,32,99,111,108,52,50,52,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,12),40,103,52,53,53,32,99,110,52,53,55,41,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,52,54,52,32,105,52,54,54,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,18),40,119,114,32,111,98,106,51,57,56,32,99,111,108,51,57,57,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,20),40,115,112,97,99,101,115,32,110,53,48,48,32,99,111,108,53,48,49,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,21),40,105,110,100,101,110,116,32,116,111,53,48,50,32,99,111,108,53,48,51,41,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,14),40,97,50,56,48,57,32,115,116,114,53,49,53,41,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,38),40,112,114,32,111,98,106,53,48,54,32,99,111,108,53,48,55,32,101,120,116,114,97,53,48,56,32,112,112,45,112,97,105,114,53,48,57,41,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,33),40,112,112,45,101,120,112,114,32,101,120,112,114,53,49,57,32,99,111,108,53,50,48,32,101,120,116,114,97,53,50,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,44),40,112,112,45,99,97,108,108,32,101,120,112,114,53,50,52,32,99,111,108,53,50,53,32,101,120,116,114,97,53,50,54,32,112,112,45,105,116,101,109,53,50,55,41,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,41),40,112,112,45,108,105,115,116,32,108,53,51,48,32,99,111,108,53,51,49,32,101,120,116,114,97,53,51,50,32,112,112,45,105,116,101,109,53,51,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,53,52,49,32,99,111,108,53,52,50,41,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,50),40,112,112,45,100,111,119,110,32,108,53,51,53,32,99,111,108,49,53,51,54,32,99,111,108,50,53,51,55,32,101,120,116,114,97,53,51,56,32,112,112,45,105,116,101,109,53,51,57,41,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,39),40,116,97,105,108,49,32,114,101,115,116,53,54,49,32,99,111,108,49,53,54,50,32,99,111,108,50,53,54,51,32,99,111,108,51,53,54,52,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,39),40,116,97,105,108,50,32,114,101,115,116,53,54,57,32,99,111,108,49,53,55,48,32,99,111,108,50,53,55,49,32,99,111,108,51,53,55,50,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,31),40,116,97,105,108,51,32,114,101,115,116,53,55,55,32,99,111,108,49,53,55,56,32,99,111,108,50,53,55,57,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,70),40,112,112,45,103,101,110,101,114,97,108,32,101,120,112,114,53,53,49,32,99,111,108,53,53,50,32,101,120,116,114,97,53,53,51,32,110,97,109,101,100,63,53,53,52,32,112,112,45,49,53,53,53,32,112,112,45,50,53,53,54,32,112,112,45,51,53,53,55,41,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,35),40,112,112,45,101,120,112,114,45,108,105,115,116,32,108,53,57,48,32,99,111,108,53,57,49,32,101,120,116,114,97,53,57,50,41,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,35),40,112,112,45,108,97,109,98,100,97,32,101,120,112,114,53,57,51,32,99,111,108,53,57,52,32,101,120,116,114,97,53,57,53,41,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,31),40,112,112,45,105,102,32,101,120,112,114,53,57,54,32,99,111,108,53,57,55,32,101,120,116,114,97,53,57,56,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,33),40,112,112,45,99,111,110,100,32,101,120,112,114,53,57,57,32,99,111,108,54,48,48,32,101,120,116,114,97,54,48,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,33),40,112,112,45,99,97,115,101,32,101,120,112,114,54,48,50,32,99,111,108,54,48,51,32,101,120,116,114,97,54,48,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,32),40,112,112,45,97,110,100,32,101,120,112,114,54,48,53,32,99,111,108,54,48,54,32,101,120,116,114,97,54,48,55,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,32),40,112,112,45,108,101,116,32,101,120,112,114,54,48,56,32,99,111,108,54,48,57,32,101,120,116,114,97,54,49,48,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,34),40,112,112,45,98,101,103,105,110,32,101,120,112,114,54,49,52,32,99,111,108,54,49,53,32,101,120,116,114,97,54,49,54,41,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,31),40,112,112,45,100,111,32,101,120,112,114,54,49,55,32,99,111,108,54,49,56,32,101,120,116,114,97,54,49,57,41,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,15),40,115,116,121,108,101,32,104,101,97,100,54,50,48,41,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,18),40,112,112,32,111,98,106,52,55,55,32,99,111,108,52,55,56,41,0,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,53),40,103,101,110,101,114,105,99,45,119,114,105,116,101,32,111,98,106,51,53,50,32,100,105,115,112,108,97,121,63,51,53,51,32,119,105,100,116,104,51,53,52,32,111,117,116,112,117,116,51,53,53,41,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,12),40,97,51,51,56,51,32,115,54,55,55,41,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,30),40,112,114,101,116,116,121,45,112,114,105,110,116,32,111,98,106,54,55,52,32,46,32,111,112,116,54,55,53,41,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,6),40,110,101,120,116,41,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,6),40,115,107,105,112,41,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,20),40,114,101,99,32,109,115,103,54,56,57,32,97,114,103,115,54,57,48,41,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,40),40,102,112,114,105,110,116,102,48,32,108,111,99,54,56,50,32,112,111,114,116,54,56,51,32,109,115,103,54,56,52,32,97,114,103,115,54,56,53,41};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,35),40,102,112,114,105,110,116,102,32,112,111,114,116,55,51,50,32,102,115,116,114,55,51,51,32,46,32,97,114,103,115,55,51,52,41,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,26),40,112,114,105,110,116,102,32,102,115,116,114,55,51,54,32,46,32,97,114,103,115,55,51,55,41,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,27),40,115,112,114,105,110,116,102,32,102,115,116,114,55,51,57,32,46,32,97,114,103,115,55,52,48,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,32),40,102,111,114,109,97,116,32,102,109,116,45,111,114,45,100,115,116,55,52,50,32,46,32,97,114,103,115,55,52,51,41};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1208)
static void C_ccall f_1208(C_word c,C_word *av) C_noret;
C_noret_decl(f_2388)
static void C_ccall f_2388(C_word c,C_word *av) C_noret;
C_noret_decl(f_2759)
static void C_fcall f_2759(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3230)
static void C_fcall f_3230(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2587)
static void C_ccall f_2587(C_word c,C_word *av) C_noret;
C_noret_decl(f_2810)
static void C_ccall f_2810(C_word c,C_word *av) C_noret;
C_noret_decl(f_2294)
static void C_ccall f_2294(C_word c,C_word *av) C_noret;
C_noret_decl(f_1328)
static void C_ccall f_1328(C_word c,C_word *av) C_noret;
C_noret_decl(f_2434)
static void C_ccall f_2434(C_word c,C_word *av) C_noret;
C_noret_decl(f_2597)
static void C_ccall f_2597(C_word c,C_word *av) C_noret;
C_noret_decl(f_3043)
static void C_ccall f_3043(C_word c,C_word *av) C_noret;
C_noret_decl(f_2590)
static void C_ccall f_2590(C_word c,C_word *av) C_noret;
C_noret_decl(f_1226)
static void C_ccall f_1226(C_word c,C_word *av) C_noret;
C_noret_decl(f_3139)
static void C_ccall f_3139(C_word c,C_word *av) C_noret;
C_noret_decl(f_3047)
static void C_ccall f_3047(C_word c,C_word *av) C_noret;
C_noret_decl(f_2772)
static void C_ccall f_2772(C_word c,C_word *av) C_noret;
C_noret_decl(f_2775)
static void C_ccall f_2775(C_word c,C_word *av) C_noret;
C_noret_decl(f_1839)
static void C_ccall f_1839(C_word c,C_word *av) C_noret;
C_noret_decl(f_1259)
static void C_ccall f_1259(C_word c,C_word *av) C_noret;
C_noret_decl(f_2788)
static void C_ccall f_2788(C_word c,C_word *av) C_noret;
C_noret_decl(f_2804)
static void C_ccall f_2804(C_word c,C_word *av) C_noret;
C_noret_decl(f_2808)
static void C_ccall f_2808(C_word c,C_word *av) C_noret;
C_noret_decl(f_3776)
static void C_ccall f_3776(C_word c,C_word *av) C_noret;
C_noret_decl(f_2393)
static void C_ccall f_2393(C_word c,C_word *av) C_noret;
C_noret_decl(f_2394)
static void C_fcall f_2394(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3402)
static void C_ccall f_3402(C_word c,C_word *av) C_noret;
C_noret_decl(f_3405)
static void C_ccall f_3405(C_word c,C_word *av) C_noret;
C_noret_decl(f_2689)
static void C_fcall f_2689(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2680)
static void C_ccall f_2680(C_word c,C_word *av) C_noret;
C_noret_decl(f_3100)
static void C_fcall f_3100(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1157)
static void C_ccall f_1157(C_word c,C_word *av) C_noret;
C_noret_decl(f_2692)
static void C_fcall f_2692(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2456)
static void C_ccall f_2456(C_word c,C_word *av) C_noret;
C_noret_decl(f_2452)
static void C_ccall f_2452(C_word c,C_word *av) C_noret;
C_noret_decl(f_3733)
static void C_ccall f_3733(C_word c,C_word *av) C_noret;
C_noret_decl(f_3579)
static void C_ccall f_3579(C_word c,C_word *av) C_noret;
C_noret_decl(f_2143)
static void C_ccall f_2143(C_word c,C_word *av) C_noret;
C_noret_decl(f_2145)
static void C_fcall f_2145(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1811)
static void C_ccall f_1811(C_word c,C_word *av) C_noret;
C_noret_decl(f_2424)
static void C_ccall f_2424(C_word c,C_word *av) C_noret;
C_noret_decl(f_3562)
static void C_ccall f_3562(C_word c,C_word *av) C_noret;
C_noret_decl(f_1818)
static void C_ccall f_1818(C_word c,C_word *av) C_noret;
C_noret_decl(f_3766)
static void C_ccall f_3766(C_word c,C_word *av) C_noret;
C_noret_decl(f_1139)
static void C_ccall f_1139(C_word c,C_word *av) C_noret;
C_noret_decl(f_3566)
static void C_ccall f_3566(C_word c,C_word *av) C_noret;
C_noret_decl(f_2118)
static void C_ccall f_2118(C_word c,C_word *av) C_noret;
C_noret_decl(f_1802)
static void C_ccall f_1802(C_word c,C_word *av) C_noret;
C_noret_decl(f_1808)
static void C_ccall f_1808(C_word c,C_word *av) C_noret;
C_noret_decl(f_2973)
static void C_ccall f_2973(C_word c,C_word *av) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word *av) C_noret;
C_noret_decl(f_3221)
static void C_ccall f_3221(C_word c,C_word *av) C_noret;
C_noret_decl(f_2946)
static void C_fcall f_2946(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2941)
static void C_ccall f_2941(C_word c,C_word *av) C_noret;
C_noret_decl(f_1143)
static void C_ccall f_1143(C_word c,C_word *av) C_noret;
C_noret_decl(f_2100)
static void C_fcall f_2100(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2107)
static void C_ccall f_2107(C_word c,C_word *av) C_noret;
C_noret_decl(f_2245)
static void C_ccall f_2245(C_word c,C_word *av) C_noret;
C_noret_decl(f_2249)
static void C_ccall f_2249(C_word c,C_word *av) C_noret;
C_noret_decl(f_2935)
static void C_ccall f_2935(C_word c,C_word *av) C_noret;
C_noret_decl(f_2937)
static void C_fcall f_2937(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3741)
static void C_ccall f_3741(C_word c,C_word *av) C_noret;
C_noret_decl(f_2741)
static void C_ccall f_2741(C_word c,C_word *av) C_noret;
C_noret_decl(f_2748)
static void C_ccall f_2748(C_word c,C_word *av) C_noret;
C_noret_decl(f_3111)
static void C_ccall f_3111(C_word c,C_word *av) C_noret;
C_noret_decl(f_3427)
static void C_ccall f_3427(C_word c,C_word *av) C_noret;
C_noret_decl(f_1668)
static void C_ccall f_1668(C_word c,C_word *av) C_noret;
C_noret_decl(f_2202)
static void C_ccall f_2202(C_word c,C_word *av) C_noret;
C_noret_decl(f_3124)
static void C_ccall f_3124(C_word c,C_word *av) C_noret;
C_noret_decl(f_2952)
static void C_fcall f_2952(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2357)
static void C_ccall f_2357(C_word c,C_word *av) C_noret;
C_noret_decl(f_3433)
static void C_fcall f_3433(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2097)
static void C_fcall f_2097(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1655)
static void C_ccall f_1655(C_word c,C_word *av) C_noret;
C_noret_decl(f_3442)
static C_word C_fcall f_3442(C_word t0);
C_noret_decl(f_3449)
static void C_fcall f_3449(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1713)
static void C_ccall f_1713(C_word c,C_word *av) C_noret;
C_noret_decl(f_1686)
static void C_ccall f_1686(C_word c,C_word *av) C_noret;
C_noret_decl(f_1683)
static void C_ccall f_1683(C_word c,C_word *av) C_noret;
C_noret_decl(f_2569)
static void C_ccall f_2569(C_word c,C_word *av) C_noret;
C_noret_decl(f_1185)
static void C_fcall f_1185(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2078)
static void C_fcall f_2078(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1671)
static void C_ccall f_1671(C_word c,C_word *av) C_noret;
C_noret_decl(f_2307)
static void C_ccall f_2307(C_word c,C_word *av) C_noret;
C_noret_decl(f_2088)
static void C_ccall f_2088(C_word c,C_word *av) C_noret;
C_noret_decl(f_1707)
static void C_ccall f_1707(C_word c,C_word *av) C_noret;
C_noret_decl(f_3506)
static void C_ccall f_3506(C_word c,C_word *av) C_noret;
C_noret_decl(f_1691)
static void C_fcall f_1691(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1695)
static void C_ccall f_1695(C_word c,C_word *av) C_noret;
C_noret_decl(f_2673)
static void C_ccall f_2673(C_word c,C_word *av) C_noret;
C_noret_decl(f_2670)
static void C_ccall f_2670(C_word c,C_word *av) C_noret;
C_noret_decl(f_3646)
static C_word C_fcall f_3646(C_word t0,C_word t1);
C_noret_decl(f_2326)
static void C_ccall f_2326(C_word c,C_word *av) C_noret;
C_noret_decl(f_2328)
static void C_fcall f_2328(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2127)
static void C_fcall f_2127(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3356)
static void C_ccall f_3356(C_word c,C_word *av) C_noret;
C_noret_decl(f_1075)
static void C_ccall f_1075(C_word c,C_word *av) C_noret;
C_noret_decl(f_2335)
static void C_fcall f_2335(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1468)
static void C_ccall f_1468(C_word c,C_word *av) C_noret;
C_noret_decl(f_1464)
static void C_fcall f_1464(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1095)
static void C_ccall f_1095(C_word c,C_word *av) C_noret;
C_noret_decl(f_3601)
static void C_ccall f_3601(C_word c,C_word *av) C_noret;
C_noret_decl(f_3086)
static void C_ccall f_3086(C_word c,C_word *av) C_noret;
C_noret_decl(f_3604)
static void C_ccall f_3604(C_word c,C_word *av) C_noret;
C_noret_decl(f_3061)
static void C_fcall f_3061(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3610)
static void C_ccall f_3610(C_word c,C_word *av) C_noret;
C_noret_decl(f_1755)
static void C_ccall f_1755(C_word c,C_word *av) C_noret;
C_noret_decl(f_2716)
static void C_ccall f_2716(C_word c,C_word *av) C_noret;
C_noret_decl(f_2479)
static void C_ccall f_2479(C_word c,C_word *av) C_noret;
C_noret_decl(f_2723)
static void C_ccall f_2723(C_word c,C_word *av) C_noret;
C_noret_decl(f_2725)
static void C_fcall f_2725(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3519)
static void C_ccall f_3519(C_word c,C_word *av) C_noret;
C_noret_decl(f_1798)
static void C_fcall f_1798(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1793)
static void C_ccall f_1793(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externexport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_1783)
static void C_ccall f_1783(C_word c,C_word *av) C_noret;
C_noret_decl(f_3532)
static void C_ccall f_3532(C_word c,C_word *av) C_noret;
C_noret_decl(f_2906)
static void C_ccall f_2906(C_word c,C_word *av) C_noret;
C_noret_decl(f_3082)
static void C_ccall f_3082(C_word c,C_word *av) C_noret;
C_noret_decl(f_3549)
static void C_ccall f_3549(C_word c,C_word *av) C_noret;
C_noret_decl(f_3545)
static void C_ccall f_3545(C_word c,C_word *av) C_noret;
C_noret_decl(f_1277)
static void C_fcall f_1277(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2551)
static void C_ccall f_2551(C_word c,C_word *av) C_noret;
C_noret_decl(f_1024)
static void C_ccall f_1024(C_word c,C_word *av) C_noret;
C_noret_decl(f_3727)
static void C_ccall f_3727(C_word c,C_word *av) C_noret;
C_noret_decl(f_1022)
static void C_ccall f_1022(C_word c,C_word *av) C_noret;
C_noret_decl(f_3721)
static void C_ccall f_3721(C_word c,C_word *av) C_noret;
C_noret_decl(f_1363)
static void C_ccall f_1363(C_word c,C_word *av) C_noret;
C_noret_decl(f_1055)
static void C_fcall f_1055(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1053)
static void C_ccall f_1053(C_word c,C_word *av) C_noret;
C_noret_decl(f_2915)
static void C_ccall f_2915(C_word c,C_word *av) C_noret;
C_noret_decl(f_1578)
static void C_ccall f_1578(C_word c,C_word *av) C_noret;
C_noret_decl(f_2911)
static void C_fcall f_2911(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2514)
static void C_ccall f_2514(C_word c,C_word *av) C_noret;
C_noret_decl(f_1045)
static void C_ccall f_1045(C_word c,C_word *av) C_noret;
C_noret_decl(f_2521)
static void C_ccall f_2521(C_word c,C_word *av) C_noret;
C_noret_decl(f_2644)
static void C_ccall f_2644(C_word c,C_word *av) C_noret;
C_noret_decl(f_2647)
static void C_ccall f_2647(C_word c,C_word *av) C_noret;
C_noret_decl(f_3715)
static void C_ccall f_3715(C_word c,C_word *av) C_noret;
C_noret_decl(f_2530)
static void C_ccall f_2530(C_word c,C_word *av) C_noret;
C_noret_decl(f_2537)
static void C_ccall f_2537(C_word c,C_word *av) C_noret;
C_noret_decl(f_2658)
static void C_ccall f_2658(C_word c,C_word *av) C_noret;
C_noret_decl(f_2880)
static void C_ccall f_2880(C_word c,C_word *av) C_noret;
C_noret_decl(f_3159)
static void C_ccall f_3159(C_word c,C_word *av) C_noret;
C_noret_decl(f_3157)
static void C_ccall f_3157(C_word c,C_word *av) C_noret;
C_noret_decl(f_2005)
static void C_fcall f_2005(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2626)
static void C_ccall f_2626(C_word c,C_word *av) C_noret;
C_noret_decl(f_2620)
static void C_ccall f_2620(C_word c,C_word *av) C_noret;
C_noret_decl(f_1019)
static void C_ccall f_1019(C_word c,C_word *av) C_noret;
C_noret_decl(f_2853)
static void C_ccall f_2853(C_word c,C_word *av) C_noret;
C_noret_decl(f_1163)
static void C_ccall f_1163(C_word c,C_word *av) C_noret;
C_noret_decl(f_1844)
static void C_fcall f_1844(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3171)
static void C_ccall f_3171(C_word c,C_word *av) C_noret;
C_noret_decl(f_2631)
static void C_fcall f_2631(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2864)
static void C_ccall f_2864(C_word c,C_word *av) C_noret;
C_noret_decl(f_1527)
static void C_ccall f_1527(C_word c,C_word *av) C_noret;
C_noret_decl(f_1195)
static void C_fcall f_1195(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3177)
static void C_ccall f_3177(C_word c,C_word *av) C_noret;
C_noret_decl(f_1949)
static void C_ccall f_1949(C_word c,C_word *av) C_noret;
C_noret_decl(f_1523)
static void C_fcall f_1523(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3704)
static void C_ccall f_3704(C_word c,C_word *av) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word *av) C_noret;
C_noret_decl(f_3165)
static void C_ccall f_3165(C_word c,C_word *av) C_noret;
C_noret_decl(f_3371)
static void C_ccall f_3371(C_word c,C_word *av) C_noret;
C_noret_decl(f_1977)
static void C_fcall f_1977(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1974)
static void C_fcall f_1974(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3375)
static void C_fcall f_3375(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3378)
static void C_ccall f_3378(C_word c,C_word *av) C_noret;
C_noret_decl(f_2610)
static void C_ccall f_2610(C_word c,C_word *av) C_noret;
C_noret_decl(f_3468)
static void C_fcall f_3468(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2846)
static void C_ccall f_2846(C_word c,C_word *av) C_noret;
C_noret_decl(f_1175)
static void C_ccall f_1175(C_word c,C_word *av) C_noret;
C_noret_decl(f_3360)
static void C_ccall f_3360(C_word c,C_word *av) C_noret;
C_noret_decl(f_3369)
static void C_ccall f_3369(C_word c,C_word *av) C_noret;
C_noret_decl(f_3183)
static void C_ccall f_3183(C_word c,C_word *av) C_noret;
C_noret_decl(f_3189)
static void C_ccall f_3189(C_word c,C_word *av) C_noret;
C_noret_decl(f_2487)
static void C_ccall f_2487(C_word c,C_word *av) C_noret;
C_noret_decl(f_2494)
static void C_fcall f_2494(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2490)
static void C_ccall f_2490(C_word c,C_word *av) C_noret;
C_noret_decl(f_3195)
static void C_ccall f_3195(C_word c,C_word *av) C_noret;
C_noret_decl(f_1418)
static void C_ccall f_1418(C_word c,C_word *av) C_noret;
C_noret_decl(f_1922)
static void C_ccall f_1922(C_word c,C_word *av) C_noret;
C_noret_decl(f_2193)
static void C_ccall f_2193(C_word c,C_word *av) C_noret;
C_noret_decl(f_3001)
static void C_ccall f_3001(C_word c,C_word *av) C_noret;
C_noret_decl(f_3005)
static void C_ccall f_3005(C_word c,C_word *av) C_noret;
C_noret_decl(f_2167)
static void C_ccall f_2167(C_word c,C_word *av) C_noret;
C_noret_decl(f_3013)
static void C_ccall f_3013(C_word c,C_word *av) C_noret;
C_noret_decl(f_3017)
static void C_ccall f_3017(C_word c,C_word *av) C_noret;
C_noret_decl(f_3583)
static void C_ccall f_3583(C_word c,C_word *av) C_noret;
C_noret_decl(f_3019)
static void C_fcall f_3019(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_1434)
static void C_ccall f_1434(C_word c,C_word *av) C_noret;
C_noret_decl(f_1861)
static void C_ccall f_1861(C_word c,C_word *av) C_noret;
C_noret_decl(f_1864)
static void C_fcall f_1864(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2039)
static C_word C_fcall f_2039(C_word t0);
C_noret_decl(f_3022)
static void C_fcall f_3022(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3481)
static void C_ccall f_3481(C_word c,C_word *av) C_noret;
C_noret_decl(f_1932)
static void C_ccall f_1932(C_word c,C_word *av) C_noret;
C_noret_decl(f_2189)
static void C_ccall f_2189(C_word c,C_word *av) C_noret;
C_noret_decl(f_1615)
static void C_fcall f_1615(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1882)
static void C_fcall f_1882(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1887)
static void C_fcall f_1887(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1446)
static void C_ccall f_1446(C_word c,C_word *av) C_noret;
C_noret_decl(f_1268)
static void C_ccall f_1268(C_word c,C_word *av) C_noret;
C_noret_decl(f_1299)
static void C_ccall f_1299(C_word c,C_word *av) C_noret;
C_noret_decl(f_1291)
static void C_ccall f_1291(C_word c,C_word *av) C_noret;
C_noret_decl(f_2412)
static void C_ccall f_2412(C_word c,C_word *av) C_noret;
C_noret_decl(f_2173)
static void C_ccall f_2173(C_word c,C_word *av) C_noret;
C_noret_decl(f_2416)
static void C_ccall f_2416(C_word c,C_word *av) C_noret;
C_noret_decl(f_2287)
static void C_ccall f_2287(C_word c,C_word *av) C_noret;
C_noret_decl(f_2284)
static void C_ccall f_2284(C_word c,C_word *av) C_noret;
C_noret_decl(f_1350)
static void C_fcall f_1350(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3395)
static void C_fcall f_3395(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1530)
static void C_fcall f_1530(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3240)
static void C_fcall f_3240(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3399)
static void C_fcall f_3399(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1340)
static void C_ccall f_1340(C_word c,C_word *av) C_noret;
C_noret_decl(f_2365)
static void C_ccall f_2365(C_word c,C_word *av) C_noret;
C_noret_decl(f_3382)
static void C_ccall f_3382(C_word c,C_word *av) C_noret;
C_noret_decl(f_2361)
static void C_ccall f_2361(C_word c,C_word *av) C_noret;
C_noret_decl(f_3384)
static void C_ccall f_3384(C_word c,C_word *av) C_noret;
C_noret_decl(f_2268)
static void C_ccall f_2268(C_word c,C_word *av) C_noret;
C_noret_decl(f_3215)
static void C_ccall f_3215(C_word c,C_word *av) C_noret;
C_noret_decl(f_3388)
static void C_ccall f_3388(C_word c,C_word *av) C_noret;
C_noret_decl(f_1213)
static void C_fcall f_1213(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2275)
static void C_ccall f_2275(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2759)
static void C_ccall trf_2759(C_word c,C_word *av) C_noret;
static void C_ccall trf_2759(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_2759(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3230)
static void C_ccall trf_3230(C_word c,C_word *av) C_noret;
static void C_ccall trf_3230(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3230(t0,t1,t2);}

C_noret_decl(trf_2394)
static void C_ccall trf_2394(C_word c,C_word *av) C_noret;
static void C_ccall trf_2394(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2394(t0,t1,t2);}

C_noret_decl(trf_2689)
static void C_ccall trf_2689(C_word c,C_word *av) C_noret;
static void C_ccall trf_2689(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2689(t0,t1,t2,t3);}

C_noret_decl(trf_3100)
static void C_ccall trf_3100(C_word c,C_word *av) C_noret;
static void C_ccall trf_3100(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3100(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2692)
static void C_ccall trf_2692(C_word c,C_word *av) C_noret;
static void C_ccall trf_2692(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2692(t0,t1,t2,t3);}

C_noret_decl(trf_2145)
static void C_ccall trf_2145(C_word c,C_word *av) C_noret;
static void C_ccall trf_2145(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2145(t0,t1,t2,t3);}

C_noret_decl(trf_2946)
static void C_ccall trf_2946(C_word c,C_word *av) C_noret;
static void C_ccall trf_2946(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_2946(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2100)
static void C_ccall trf_2100(C_word c,C_word *av) C_noret;
static void C_ccall trf_2100(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2100(t0,t1,t2,t3);}

C_noret_decl(trf_2937)
static void C_ccall trf_2937(C_word c,C_word *av) C_noret;
static void C_ccall trf_2937(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_2937(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2952)
static void C_ccall trf_2952(C_word c,C_word *av) C_noret;
static void C_ccall trf_2952(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2952(t0,t1,t2,t3);}

C_noret_decl(trf_3433)
static void C_ccall trf_3433(C_word c,C_word *av) C_noret;
static void C_ccall trf_3433(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3433(t0,t1,t2,t3);}

C_noret_decl(trf_2097)
static void C_ccall trf_2097(C_word c,C_word *av) C_noret;
static void C_ccall trf_2097(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2097(t0,t1,t2,t3);}

C_noret_decl(trf_3449)
static void C_ccall trf_3449(C_word c,C_word *av) C_noret;
static void C_ccall trf_3449(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3449(t0,t1);}

C_noret_decl(trf_1185)
static void C_ccall trf_1185(C_word c,C_word *av) C_noret;
static void C_ccall trf_1185(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1185(t0,t1);}

C_noret_decl(trf_2078)
static void C_ccall trf_2078(C_word c,C_word *av) C_noret;
static void C_ccall trf_2078(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2078(t0,t1,t2,t3);}

C_noret_decl(trf_1691)
static void C_ccall trf_1691(C_word c,C_word *av) C_noret;
static void C_ccall trf_1691(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1691(t0,t1);}

C_noret_decl(trf_2328)
static void C_ccall trf_2328(C_word c,C_word *av) C_noret;
static void C_ccall trf_2328(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2328(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2127)
static void C_ccall trf_2127(C_word c,C_word *av) C_noret;
static void C_ccall trf_2127(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2127(t0,t1,t2,t3);}

C_noret_decl(trf_2335)
static void C_ccall trf_2335(C_word c,C_word *av) C_noret;
static void C_ccall trf_2335(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2335(t0,t1);}

C_noret_decl(trf_1464)
static void C_ccall trf_1464(C_word c,C_word *av) C_noret;
static void C_ccall trf_1464(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1464(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3061)
static void C_ccall trf_3061(C_word c,C_word *av) C_noret;
static void C_ccall trf_3061(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_3061(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2725)
static void C_ccall trf_2725(C_word c,C_word *av) C_noret;
static void C_ccall trf_2725(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2725(t0,t1,t2,t3);}

C_noret_decl(trf_1798)
static void C_ccall trf_1798(C_word c,C_word *av) C_noret;
static void C_ccall trf_1798(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1798(t0,t1);}

C_noret_decl(trf_1277)
static void C_ccall trf_1277(C_word c,C_word *av) C_noret;
static void C_ccall trf_1277(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1277(t0,t1);}

C_noret_decl(trf_1055)
static void C_ccall trf_1055(C_word c,C_word *av) C_noret;
static void C_ccall trf_1055(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1055(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2911)
static void C_ccall trf_2911(C_word c,C_word *av) C_noret;
static void C_ccall trf_2911(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_2911(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2005)
static void C_ccall trf_2005(C_word c,C_word *av) C_noret;
static void C_ccall trf_2005(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2005(t0,t1);}

C_noret_decl(trf_1844)
static void C_ccall trf_1844(C_word c,C_word *av) C_noret;
static void C_ccall trf_1844(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1844(t0,t1,t2,t3);}

C_noret_decl(trf_2631)
static void C_ccall trf_2631(C_word c,C_word *av) C_noret;
static void C_ccall trf_2631(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2631(t0,t1,t2);}

C_noret_decl(trf_1195)
static void C_ccall trf_1195(C_word c,C_word *av) C_noret;
static void C_ccall trf_1195(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1195(t0,t1,t2);}

C_noret_decl(trf_1523)
static void C_ccall trf_1523(C_word c,C_word *av) C_noret;
static void C_ccall trf_1523(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1523(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1977)
static void C_ccall trf_1977(C_word c,C_word *av) C_noret;
static void C_ccall trf_1977(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1977(t0,t1);}

C_noret_decl(trf_1974)
static void C_ccall trf_1974(C_word c,C_word *av) C_noret;
static void C_ccall trf_1974(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1974(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3375)
static void C_ccall trf_3375(C_word c,C_word *av) C_noret;
static void C_ccall trf_3375(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3375(t0,t1);}

C_noret_decl(trf_3468)
static void C_ccall trf_3468(C_word c,C_word *av) C_noret;
static void C_ccall trf_3468(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3468(t0,t1);}

C_noret_decl(trf_2494)
static void C_ccall trf_2494(C_word c,C_word *av) C_noret;
static void C_ccall trf_2494(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2494(t0,t1,t2);}

C_noret_decl(trf_3019)
static void C_ccall trf_3019(C_word c,C_word *av) C_noret;
static void C_ccall trf_3019(C_word c,C_word *av){
C_word t0=av[8];
C_word t1=av[7];
C_word t2=av[6];
C_word t3=av[5];
C_word t4=av[4];
C_word t5=av[3];
C_word t6=av[2];
C_word t7=av[1];
C_word t8=av[0];
f_3019(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_1864)
static void C_ccall trf_1864(C_word c,C_word *av) C_noret;
static void C_ccall trf_1864(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1864(t0,t1);}

C_noret_decl(trf_3022)
static void C_ccall trf_3022(C_word c,C_word *av) C_noret;
static void C_ccall trf_3022(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_3022(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1615)
static void C_ccall trf_1615(C_word c,C_word *av) C_noret;
static void C_ccall trf_1615(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1615(t0,t1);}

C_noret_decl(trf_1882)
static void C_ccall trf_1882(C_word c,C_word *av) C_noret;
static void C_ccall trf_1882(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1882(t0,t1,t2);}

C_noret_decl(trf_1887)
static void C_ccall trf_1887(C_word c,C_word *av) C_noret;
static void C_ccall trf_1887(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1887(t0,t1);}

C_noret_decl(trf_1350)
static void C_ccall trf_1350(C_word c,C_word *av) C_noret;
static void C_ccall trf_1350(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1350(t0,t1,t2,t3);}

C_noret_decl(trf_3395)
static void C_ccall trf_3395(C_word c,C_word *av) C_noret;
static void C_ccall trf_3395(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3395(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1530)
static void C_ccall trf_1530(C_word c,C_word *av) C_noret;
static void C_ccall trf_1530(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1530(t0,t1);}

C_noret_decl(trf_3240)
static void C_ccall trf_3240(C_word c,C_word *av) C_noret;
static void C_ccall trf_3240(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3240(t0,t1);}

C_noret_decl(trf_3399)
static void C_ccall trf_3399(C_word c,C_word *av) C_noret;
static void C_ccall trf_3399(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3399(t0,t1);}

C_noret_decl(trf_1213)
static void C_ccall trf_1213(C_word c,C_word *av) C_noret;
static void C_ccall trf_1213(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1213(t0,t1,t2);}

/* k1206 in k1183 in read-line in k1020 in k1017 */
static void C_ccall f_1208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_1208,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1213,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[4],a[7]=((C_word)li6),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_1213(t7,((C_word*)t0)[5],C_fix(0));}

/* k2386 in k2333 in loop in k2324 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2388(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_2388,2,av);}
a=C_alloc(12);
t2=t1;
t3=C_u_i_assq(((C_word*)t0)[2],lf[59]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2393,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2394,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word)li34),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:343: g444 */
t6=t5;
f_2394(t6,t4,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2412,a[2]=((C_word*)t0)[7],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=C_fix(C_character_code(((C_word*)t0)[2]));
/* extras.scm:356: number->string */
t7=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* pr in pp in generic-write in k1020 in k1017 */
static void C_fcall f_2759(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(26,0,3)))){
C_save_and_reclaim_args((void *)trf_2759,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(26);
t6=C_i_pairp(t2);
t7=(C_truep(t6)?t6:C_i_vectorp(t2));
if(C_truep(t7)){
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2772,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t9,a[6]=t2,a[7]=t5,a[8]=t4,a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],tmp=(C_word)a,a+=12,tmp);
t11=C_a_i_minus(&a,2,((C_word*)t0)[6],t3);
t12=C_a_i_minus(&a,2,t11,t4);
t13=C_a_i_plus(&a,2,t12,C_fix(1));
/* extras.scm:419: max */
t14=*((C_word*)lf[91]+1);{
C_word av2[4];
av2[0]=t14;
av2[1]=t10;
av2[2]=t13;
av2[3]=C_fix(50);
((C_proc)(void*)(*((C_word*)t14+1)))(4,av2);}}
else{
/* extras.scm:430: wr */
t8=((C_word*)((C_word*)t0)[7])[1];
f_2097(t8,t1,t2,t3);}}

/* style in pp in generic-write in k1020 in k1017 */
static void C_fcall f_3230(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_3230,3,t0,t1,t2);}
a=C_alloc(12);
t3=t2;
t4=C_eqp(t3,lf[100]);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3240,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t4)){
t6=t5;
f_3240(t6,t4);}
else{
t6=C_eqp(t3,lf[110]);
if(C_truep(t6)){
t7=t5;
f_3240(t7,t6);}
else{
t7=C_eqp(t3,lf[111]);
if(C_truep(t7)){
t8=t5;
f_3240(t8,t7);}
else{
t8=C_eqp(t3,lf[112]);
t9=t5;
f_3240(t9,(C_truep(t8)?t8:C_eqp(t3,lf[113])));}}}}

/* k2585 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2587,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2590,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:382: ##sys#user-print-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[75]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[75]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=t2;
tp(5,av2);}}

/* a2809 in k2770 in pr in pp in generic-write in k1020 in k1017 */
static void C_ccall f_2810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_2810,3,av);}
a=C_alloc(7);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_i_string_length(t2);
t6=C_a_i_minus(&a,2,((C_word*)((C_word*)t0)[3])[1],t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t6);
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_i_greaterp(((C_word*)((C_word*)t0)[3])[1],C_fix(0));
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k2292 in k2285 in k2282 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2294,2,av);}
/* extras.scm:323: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* read-lines in k1020 in k1017 */
static void C_ccall f_1328(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_1328,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_slot(t2,C_fix(0)):*((C_word*)lf[2]+1));
t5=C_i_pairp(t2);
t6=(C_truep(t5)?C_slot(t2,C_fix(1)):C_SCHEME_FALSE);
t7=C_i_pairp(t6);
t8=(C_truep(t7)?C_slot(t6,C_fix(0)):C_SCHEME_FALSE);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1340,a[2]=t9,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_stringp(t4))){
/* extras.scm:124: call-with-input-file */
t11=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t11;
av2[1]=t1;
av2[2]=t4;
av2[3]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
t11=C_i_check_port_2(t4,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[18]);
/* extras.scm:127: doread */
t12=t10;{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t1;
av2[2]=t4;
f_1340(3,av2);}}}

/* k2432 in k2333 in loop in k2324 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2434,2,av);}
/* extras.scm:344: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2595 in k2588 in k2585 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2597,2,av);}
/* extras.scm:383: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3041 in tail1 in pp-general in pp in generic-write in k1020 in k1017 */
static void C_ccall f_3043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3043,2,av);}
/* extras.scm:488: tail2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3061(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6]);}

/* k2588 in k2585 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2590,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2597,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:383: get-output-string */
t3=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1224 in loop in k1206 in k1183 in read-line in k1020 in k1017 */
static void C_ccall f_1226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_1226,2,av);}
a=C_alloc(16);
t2=t1;
if(C_truep(C_eofp(t2))){
t3=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* extras.scm:92: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}}
else{
switch(t2){
case C_make_character(10):
/* extras.scm:94: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[2];
tp(5,av2);}
case C_make_character(13):
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1259,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:96: peek-char */
t4=*((C_word*)lf[14]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}
default:
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1277,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t0)[2],((C_word*)((C_word*)t0)[7])[1]))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1291,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1299,a[2]=t4,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:104: make-string */
t6=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)((C_word*)t0)[7])[1];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t4=t3;
f_1277(t4,C_SCHEME_UNDEFINED);}}}}

/* k3137 in k3109 in pp-general in pp in generic-write in k1020 in k1017 */
static void C_ccall f_3139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3139,2,av);}
/* extras.scm:508: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2097(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3045 in tail1 in pp-general in pp in generic-write in k1020 in k1017 */
static void C_ccall f_3047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3047,2,av);}
/* extras.scm:488: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2759(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2770 in pr in pp in generic-write in k1020 in k1017 */
static void C_ccall f_2772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,5)))){
C_save_and_reclaim((void *)f_2772,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2775,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2810,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:420: generic-write */
f_1974(t4,((C_word*)t0)[6],((C_word*)t0)[11],C_SCHEME_FALSE,t5);}

/* k2773 in k2770 in pr in pp in generic-write in k1020 in k1017 */
static void C_ccall f_2775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2775,2,av);}
a=C_alloc(8);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2788,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:426: reverse-string-append */
t3=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[7]))){
/* extras.scm:428: pp-pair */
t2=((C_word*)t0)[8];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[9];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2804,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:429: vector->list */
t3=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}

/* write-string in k1020 in k1017 */
static void C_ccall f_1839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +12,c,4)))){
C_save_and_reclaim((void*)f_1839,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+12);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
t4=C_i_check_string_2(t2,lf[27]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1844,a[2]=t2,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1882,a[2]=t5,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1887,a[2]=t6,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* extras.scm:236: def-n302 */
t8=t7;
f_1887(t8,t1);}
else{
t8=C_i_car(t3);
t9=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t9))){
/* extras.scm:236: def-port303 */
t10=t6;
f_1882(t10,t1,t8);}
else{
t10=C_i_car(t9);
t11=C_u_i_cdr(t9);
/* extras.scm:236: body300 */
t12=t5;
f_1844(t12,t1,t8,t10);}}}

/* k1257 in k1224 in loop in k1206 in k1183 in read-line in k1020 in k1017 */
static void C_ccall f_1259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1259,2,av);}
a=C_alloc(5);
if(C_truep(C_i_char_equalp(t1,C_make_character(10)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1268,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:98: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
/* extras.scm:100: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}}

/* k2786 in k2773 in k2770 in pr in pp in generic-write in k1020 in k1017 */
static void C_ccall f_2788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2788,2,av);}
/* extras.scm:426: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2802 in k2773 in k2770 in pr in pp in generic-write in k1020 in k1017 */
static void C_ccall f_2804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2804,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:429: out */
t4=((C_word*)((C_word*)t0)[6])[1];
f_2078(t4,t3,lf[90],((C_word*)t0)[7]);}

/* k2806 in k2802 in k2773 in k2770 in pr in pp in generic-write in k1020 in k1017 */
static void C_ccall f_2808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2808,2,av);}
/* extras.scm:429: pp-list */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2937(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* k3774 in k3367 in k1020 in k1017 */
static void C_ccall f_3776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3776,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2391 in k2386 in k2333 in loop in k2324 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2393,2,av);}
/* extras.scm:341: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2328(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* g444 in k2386 in k2333 in loop in k2324 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_fcall f_2394(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_2394,3,t0,t1,t2);}
t3=C_i_cdr(t2);
/* extras.scm:354: out */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2078(t4,t1,t3,((C_word*)t0)[3]);}

/* k3400 in k3397 in fprintf0 in k3367 in k1020 in k1017 */
static void C_ccall f_3402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_3402,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3405,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3433,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t5,a[5]=((C_word)li69),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3433(t7,t3,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3403 in k3400 in k3397 in fprintf0 in k3367 in k1020 in k1017 */
static void C_ccall f_3405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3405,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
if(C_truep(t2)){
t3=C_eqp(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t3)){
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3427,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:633: get-output-string */
t5=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
/* extras.scm:631: get-output-string */
t3=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* pp in generic-write in k1020 in k1017 */
static void C_fcall f_2689(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(152,0,9)))){
C_save_and_reclaim_args((void *)trf_2689,4,t0,t1,t2,t3);}
a=C_alloc(152);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_SCHEME_UNDEFINED;
t29=(*a=C_VECTOR_TYPE|1,a[1]=t28,tmp=(C_word)a,a+=2,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_SCHEME_UNDEFINED;
t33=(*a=C_VECTOR_TYPE|1,a[1]=t32,tmp=(C_word)a,a+=2,tmp);
t34=C_SCHEME_UNDEFINED;
t35=(*a=C_VECTOR_TYPE|1,a[1]=t34,tmp=(C_word)a,a+=2,tmp);
t36=C_SCHEME_UNDEFINED;
t37=(*a=C_VECTOR_TYPE|1,a[1]=t36,tmp=(C_word)a,a+=2,tmp);
t38=C_SCHEME_UNDEFINED;
t39=(*a=C_VECTOR_TYPE|1,a[1]=t38,tmp=(C_word)a,a+=2,tmp);
t40=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2692,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp));
t41=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2725,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp));
t42=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2759,a[2]=((C_word*)t0)[2],a[3]=t15,a[4]=t11,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li42),tmp=(C_word)a,a+=9,tmp));
t43=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2846,a[2]=t9,a[3]=t11,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=t19,a[7]=t13,a[8]=t39,a[9]=t15,a[10]=((C_word*)t0)[7],a[11]=((C_word)li43),tmp=(C_word)a,a+=12,tmp));
t44=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2911,a[2]=t17,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp));
t45=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2937,a[2]=t17,a[3]=((C_word*)t0)[2],a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp));
t46=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2946,a[2]=t9,a[3]=t7,a[4]=((C_word*)t0)[2],a[5]=((C_word)li47),tmp=(C_word)a,a+=6,tmp));
t47=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3019,a[2]=t9,a[3]=t7,a[4]=t17,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word)li51),tmp=(C_word)a,a+=8,tmp));
t48=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3159,a[2]=t15,a[3]=t11,a[4]=((C_word)li52),tmp=(C_word)a,a+=5,tmp));
t49=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3165,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li53),tmp=(C_word)a,a+=6,tmp));
t50=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3171,a[2]=t19,a[3]=t11,a[4]=((C_word)li54),tmp=(C_word)a,a+=5,tmp));
t51=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3177,a[2]=t13,a[3]=t21,a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp));
t52=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3183,a[2]=t19,a[3]=t11,a[4]=t21,a[5]=((C_word)li56),tmp=(C_word)a,a+=6,tmp));
t53=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3189,a[2]=t13,a[3]=t11,a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp));
t54=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3195,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li58),tmp=(C_word)a,a+=6,tmp));
t55=C_set_block_item(t35,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3215,a[2]=t19,a[3]=t11,a[4]=((C_word)li59),tmp=(C_word)a,a+=5,tmp));
t56=C_set_block_item(t37,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3221,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li60),tmp=(C_word)a,a+=6,tmp));
t57=C_set_block_item(t39,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3230,a[2]=t23,a[3]=t25,a[4]=t27,a[5]=t29,a[6]=t31,a[7]=t33,a[8]=t35,a[9]=t37,a[10]=((C_word)li61),tmp=(C_word)a,a+=11,tmp));
/* extras.scm:561: pr */
t58=((C_word*)t9)[1];
f_2759(t58,t1,t2,t3,C_fix(0),((C_word*)t11)[1]);}

/* k2678 in k2668 in k2601 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2680,2,av);}
/* extras.scm:397: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* tail3 in pp-general in pp in generic-write in k1020 in k1017 */
static void C_fcall f_3100(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_3100,5,t0,t1,t2,t3,t4);}
/* extras.scm:500: pp-down */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2946(t5,t1,t2,t4,t3,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k1155 in randomize in k1020 in k1017 */
static void C_ccall f_1157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1157,2,av);}
a=C_alloc(4);
t2=C_a_i_flonum_quotient(&a,2,t1,lf[7]);
/* extras.scm:60: ##sys#flo2fix */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
tp(3,av2);}}

/* spaces in pp in generic-write in k1020 in k1017 */
static void C_fcall f_2692(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_2692,4,t0,t1,t2,t3);}
a=C_alloc(9);
if(C_truep(C_i_greaterp(t2,C_fix(0)))){
if(C_truep(C_i_greaterp(t2,C_fix(7)))){
t4=C_a_i_minus(&a,2,t2,C_fix(8));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2716,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:406: out */
t7=((C_word*)((C_word*)t0)[3])[1];
f_2078(t7,t6,lf[87],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2723,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:407: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t4;
av2[2]=lf[88];
av2[3]=C_fix(0);
av2[4]=t2;
tp(5,av2);}}}
else{
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2454 in k2333 in loop in k2324 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2456,2,av);}
/* extras.scm:361: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2450 in k2333 in loop in k2324 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2452,2,av);}
/* extras.scm:360: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],lf[64],t1);}

/* format in k3367 in k1020 in k1017 */
static void C_ccall f_3733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +12,c,3)))){
C_save_and_reclaim((void*)f_3733,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+12);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3741,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=t2;
if(C_truep(t6)){
if(C_truep(C_booleanp(t2))){{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[127]+1);
av2[3]=((C_word*)t4)[1];
C_apply(4,av2);}}
else{
if(C_truep(C_i_stringp(t2))){
t7=C_a_i_cons(&a,2,t2,((C_word*)t4)[1]);
t8=C_set_block_item(t4,0,t7);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[128]+1);
av2[3]=((C_word*)t4)[1];
C_apply(4,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3766,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:649: output-port? */
t8=*((C_word*)lf[131]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}}
else{{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[128]+1);
av2[3]=((C_word*)t4)[1];
C_apply(4,av2);}}}

/* k3577 in loop in rec in k3400 in k3397 in fprintf0 in k3367 in k1020 in k1017 */
static void C_ccall f_3579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3579,2,av);}
/* extras.scm:613: display */
t2=*((C_word*)lf[116]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2141 in wr-lst in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2143,2,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2145,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li32),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2145(t5,((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* loop in k2141 in wr-lst in wr in generic-write in k1020 in k1017 */
static void C_fcall f_2145(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_2145,4,t0,t1,t2,t3);}
a=C_alloc(10);
t4=t3;
if(C_truep(t4)){
if(C_truep(C_i_pairp(t2))){
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2167,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=t2;
t9=C_u_i_car(t8);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2173,a[2]=((C_word*)t0)[3],a[3]=t7,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:309: out */
t11=((C_word*)((C_word*)t0)[4])[1];
f_2078(t11,t10,lf[44],t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:310: out */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2078(t5,t1,lf[45],t3);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2189,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2193,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:311: out */
t7=((C_word*)((C_word*)t0)[4])[1];
f_2078(t7,t6,lf[47],t3);}}}
else{
t5=t3;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k1809 in k1806 in k1800 in loop in k1791 in read-token in k1020 in k1017 */
static void C_ccall f_1811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1811,2,av);}
/* extras.scm:230: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1798(t2,((C_word*)t0)[3]);}

/* k2422 in k2410 in k2386 in k2333 in loop in k2324 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2424,2,av);}
/* extras.scm:357: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3560 in loop in rec in k3400 in k3397 in fprintf0 in k3367 in k1020 in k1017 */
static void C_ccall f_3562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3562,2,av);}
/* extras.scm:612: display */
t2=*((C_word*)lf[116]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1816 in k1806 in k1800 in loop in k1791 in read-token in k1020 in k1017 */
static void C_ccall f_1818(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1818,2,av);}
/* extras.scm:229: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k3764 in format in k3367 in k1020 in k1017 */
static void C_ccall f_3766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3766,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=*((C_word*)lf[126]+1);
av2[3]=((C_word*)((C_word*)t0)[3])[1];
C_apply(4,av2);}}
else{
/* extras.scm:651: ##sys#error */
t2=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[129];
av2[3]=lf[130];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* randomize in k1020 in k1017 */
static void C_ccall f_1139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_1139,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1143,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1157,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:60: current-seconds */
t5=*((C_word*)lf[9]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_check_exact_2(t4,lf[6]);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_randomize(t4);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3564 in loop in rec in k3400 in k3397 in fprintf0 in k3367 in k1020 in k1017 */
static void C_ccall f_3566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3566,2,av);}
/* extras.scm:612: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[55]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(8);
tp(4,av2);}}

/* k2116 in k2105 in wr-expr in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2118,2,av);}
/* extras.scm:300: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2097(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1800 in loop in k1791 in read-token in k1020 in k1017 */
static void C_ccall f_1802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1802,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_eofp(t1))){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_1808(2,av2);}}
else{
/* extras.scm:227: pred */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}}

/* k1806 in k1800 in loop in k1791 in read-token in k1020 in k1017 */
static void C_ccall f_1808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1808,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1811,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1818,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:229: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
/* extras.scm:231: get-output-string */
t2=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k2971 in loop in pp-down in pp in generic-write in k1020 in k1017 */
static void C_ccall f_2973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2973,2,av);}
/* extras.scm:470: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2952(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2977 in loop in pp-down in pp in generic-write in k1020 in k1017 */
static void C_ccall f_2979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2979,2,av);}
/* extras.scm:471: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2759(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* pp-do in pp in generic-write in k1020 in k1017 */
static void C_ccall f_3221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_3221,5,av);}
/* extras.scm:539: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3019(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);}

/* pp-down in pp in generic-write in k1020 in k1017 */
static void C_fcall f_2946(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_2946,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(12);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2952,a[2]=t5,a[3]=t8,a[4]=((C_word*)t0)[2],a[5]=t6,a[6]=((C_word*)t0)[3],a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=((C_word)li46),tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_2952(t10,t1,t2,t3);}

/* k2939 in pp-list in pp in generic-write in k1020 in k1017 */
static void C_ccall f_2941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2941,2,av);}
/* extras.scm:462: pp-down */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2946(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k1141 in randomize in k1020 in k1017 */
static void C_ccall f_1143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1143,2,av);}
t2=C_i_check_exact_2(t1,lf[6]);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_randomize(t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* wr-expr in wr in generic-write in k1020 in k1017 */
static void C_fcall f_2100(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_2100,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2107,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* extras.scm:299: read-macro? */
f_1977(t4,t2);}

/* k2105 in wr-expr in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2107,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_cadr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2118,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(
  /* extras.scm:300: read-macro-prefix */
  f_2039(((C_word*)t0)[2])
);
/* extras.scm:300: out */
t7=((C_word*)((C_word*)t0)[6])[1];
f_2078(t7,t5,t6,((C_word*)t0)[7]);}
else{
/* extras.scm:301: wr-lst */
t2=((C_word*)((C_word*)t0)[8])[1];
f_2127(t2,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[7]);}}

/* k2243 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2245,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2249,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:317: out */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2078(t4,t3,lf[51],((C_word*)t0)[5]);}

/* k2247 in k2243 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2249,2,av);}
/* extras.scm:317: wr-lst */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2127(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2933 in pp-call in pp in generic-write in k1020 in k1017 */
static void C_ccall f_2935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2935,2,av);}
/* extras.scm:453: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2097(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* pp-list in pp in generic-write in k1020 in k1017 */
static void C_fcall f_2937(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_2937,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2941,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:461: out */
t7=((C_word*)((C_word*)t0)[3])[1];
f_2078(t7,t6,lf[94],t3);}

/* k3739 in format in k3367 in k1020 in k1017 */
static void C_ccall f_3741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3741,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)((C_word*)t0)[3])[1];
C_apply(4,av2);}}

/* k2739 in indent in pp in generic-write in k1020 in k1017 */
static void C_ccall f_2741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2741,2,av);}
if(C_truep(t1)){
/* extras.scm:413: spaces */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2692(t2,((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0));}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2746 in indent in pp in generic-write in k1020 in k1017 */
static void C_ccall f_2748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2748,2,av);}
/* extras.scm:413: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3109 in pp-general in pp in generic-write in k1020 in k1017 */
static void C_ccall f_3111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_3111,2,av);}
a=C_alloc(11);
t2=(C_truep(((C_word*)t0)[2])?C_i_pairp(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[3]);
t4=t3;
t5=C_u_i_cdr(((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3124,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3139,a[2]=((C_word*)t0)[7],a[3]=t6,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:508: out */
t8=((C_word*)((C_word*)t0)[8])[1];
f_2078(t8,t7,lf[98],t1);}
else{
t3=C_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(2));
t4=C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:510: tail1 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3022(t5,((C_word*)t0)[6],((C_word*)t0)[3],t3,t1,t4);}}

/* k3425 in k3403 in k3400 in k3397 in fprintf0 in k3367 in k1020 in k1017 */
static void C_ccall f_3427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3427,2,av);}
/* extras.scm:633: ##sys#print */
t2=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k1666 in read-string/port in k1020 in k1017 */
static void C_ccall f_1668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_1668,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1671,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:184: ##sys#read-string! */
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=((C_word*)t0)[4];
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}

/* k2200 in wr-lst in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2202,2,av);}
/* extras.scm:306: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2097(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3122 in k3109 in pp-general in pp in generic-write in k1020 in k1017 */
static void C_ccall f_3124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_3124,2,av);}
a=C_alloc(8);
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(2));
t3=C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:509: tail1 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3022(t4,((C_word*)t0)[4],((C_word*)t0)[5],t2,t1,t3);}

/* loop in pp-down in pp in generic-write in k1020 in k1017 */
static void C_fcall f_2952(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,0,3)))){
C_save_and_reclaim_args((void *)trf_2952,4,t0,t1,t2,t3);}
a=C_alloc(20);
if(C_truep(t3)){
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1)):C_fix(0));
t8=t7;
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2973,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t10=t2;
t11=C_u_i_car(t10);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2979,a[2]=((C_word*)t0)[4],a[3]=t9,a[4]=t11,a[5]=t8,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:471: indent */
t13=((C_word*)((C_word*)t0)[6])[1];
f_2725(t13,t12,((C_word*)t0)[7],t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:473: out */
t4=((C_word*)((C_word*)t0)[8])[1];
f_2078(t4,t1,lf[95],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3001,a[2]=((C_word*)t0)[8],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3005,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3013,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3017,a[2]=((C_word*)t0)[8],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:477: indent */
t8=((C_word*)((C_word*)t0)[6])[1];
f_2725(t8,t7,((C_word*)t0)[7],t3);}}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2355 in k2333 in loop in k2324 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2357,2,av);}
/* extras.scm:334: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2328(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* rec in k3400 in k3397 in fprintf0 in k3367 in k1020 in k1017 */
static void C_fcall f_3433(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(30,0,2)))){
C_save_and_reclaim_args((void *)trf_3433,4,t0,t1,t2,t3);}
a=C_alloc(30);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_i_check_string_2(t2,((C_word*)t0)[2]);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_block_size(t2);
t9=t8;
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3442,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t15=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3449,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word)li66),tmp=(C_word)a,a+=5,tmp));
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3468,a[2]=t7,a[3]=t9,a[4]=t11,a[5]=t17,a[6]=((C_word*)t0)[3],a[7]=t13,a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[4],a[10]=((C_word)li68),tmp=(C_word)a,a+=11,tmp));
t19=((C_word*)t17)[1];
f_3468(t19,t1);}

/* wr in generic-write in k1020 in k1017 */
static void C_fcall f_2097(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,0,4)))){
C_save_and_reclaim_args((void *)trf_2097,4,t0,t1,t2,t3);}
a=C_alloc(22);
t4=C_SCHEME_UNDEFINED;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2100,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=((C_word*)t0)[5],a[7]=((C_word)li31),tmp=(C_word)a,a+=8,tmp);
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2127,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp));
if(C_truep(C_i_pairp(t2))){
/* extras.scm:314: wr-expr */
t9=t4;
f_2100(t9,t1,t2,t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:315: wr-lst */
t9=((C_word*)t6)[1];
f_2127(t9,t1,t2,t3);}
else{
if(C_truep(C_eofp(t2))){
/* extras.scm:316: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_2078(t9,t1,lf[50],t3);}
else{
if(C_truep(C_i_vectorp(t2))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2245,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:317: vector->list */
t10=*((C_word*)lf[52]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
if(C_truep(C_booleanp(t2))){
if(C_truep(t2)){
/* extras.scm:318: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_2078(t9,t1,lf[53],t3);}
else{
/* extras.scm:318: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_2078(t9,t1,lf[54],t3);}}
else{
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2268,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:319: ##sys#number? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[86]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[86]+1);
av2[1]=t9;
av2[2]=t2;
tp(3,av2);}}}}}}}

/* ##sys#read-string/port in k1020 in k1017 */
static void C_ccall f_1655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1655,4,av);}
a=C_alloc(5);
t4=t3;
t5=C_i_check_port_2(t4,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[25]);
if(C_truep(t2)){
t6=C_i_check_exact_2(t2,lf[25]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1668,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:183: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t7;
av2[2]=t2;
tp(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1683,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:189: open-output-string */
t7=*((C_word*)lf[28]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* fetch in rec in k3400 in k3397 in fprintf0 in k3367 in k1020 in k1017 */
static C_word C_fcall f_3442(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t1=C_subchar(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_set_block_item(((C_word*)t0)[3],0,t2);
return(t1);}

/* next in rec in k3400 in k3397 in fprintf0 in k3367 in k1020 in k1017 */
static void C_fcall f_3449(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_3449,2,t0,t1);}
if(C_truep(C_eqp(((C_word*)((C_word*)t0)[2])[1],C_SCHEME_END_OF_LIST))){
/* extras.scm:598: ##sys#error */
t2=*((C_word*)lf[119]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[120];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(0));
t3=C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* read-string in k1020 in k1017 */
static void C_ccall f_1713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,3)))){
C_save_and_reclaim((void*)f_1713,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t7=C_i_nullp(t6);
t8=(C_truep(t7)?*((C_word*)lf[2]+1):C_i_car(t6));
if(C_truep(C_i_nullp(t6))){
/* extras.scm:201: ##sys#read-string/port */
t9=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t1;
av2[2]=t4;
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t9=C_i_cdr(t6);
/* extras.scm:201: ##sys#read-string/port */
t10=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t1;
av2[2]=t4;
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}

/* k1684 in k1681 in read-string/port in k1020 in k1017 */
static void C_ccall f_1686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1686,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1691,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word)li16),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_1691(t6,((C_word*)t0)[4]);}

/* k1681 in read-string/port in k1020 in k1017 */
static void C_ccall f_1683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1683,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1686,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t3;
av2[2]=C_fix(2048);
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k2567 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2569,2,av);}
/* extras.scm:377: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1183 in read-line in k1020 in k1017 */
static void C_fcall f_1185(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_1185,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=C_i_check_port_2(((C_word*)t0)[2],C_SCHEME_TRUE,C_SCHEME_TRUE,lf[11]);
t4=C_slot(((C_word*)t0)[2],C_fix(2));
t5=C_slot(t4,C_fix(8));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1195,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:81: g116 */
t7=t6;
f_1195(t7,((C_word*)t0)[3],t5);}
else{
t6=(C_truep(t2)?t2:C_fix(256));
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1208,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t8,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:84: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t9;
av2[2]=((C_word*)t8)[1];
tp(3,av2);}}}

/* out in generic-write in k1020 in k1017 */
static void C_fcall f_2078(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2078,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2088,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:294: output */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1669 in k1666 in read-string/port in k1020 in k1017 */
static void C_ccall f_1671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1671,2,av);}
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* extras.scm:187: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=t1;
tp(5,av2);}}}

/* k2305 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2307(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2307,2,av);}
/* extras.scm:324: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2086 in out in generic-write in k1020 in k1017 */
static void C_ccall f_2088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_2088,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=C_i_string_length(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_plus(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1705 in k1693 in loop in k1684 in k1681 in read-string/port in k1020 in k1017 */
static void C_ccall f_1707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1707,2,av);}
/* extras.scm:198: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1691(t2,((C_word*)t0)[3]);}

/* k3504 in loop in rec in k3400 in k3397 in fprintf0 in k3367 in k1020 in k1017 */
static void C_ccall f_3506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3506,2,av);}
/* extras.scm:608: write */
t2=*((C_word*)lf[121]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* loop in k1684 in k1681 in read-string/port in k1020 in k1017 */
static void C_fcall f_1691(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,5)))){
C_save_and_reclaim_args((void *)trf_1691,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1695,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:192: ##sys#read-string! */
t3=*((C_word*)lf[22]+1);{
C_word av2[6];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(2048);
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k1693 in loop in k1684 in k1681 in read-string/port in k1020 in k1017 */
static void C_ccall f_1695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1695,2,av);}
a=C_alloc(4);
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
/* extras.scm:195: get-output-string */
t3=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1707,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:197: write-string */
t4=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=t1;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k2671 in k2668 in k2601 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2673,2,av);}
/* extras.scm:398: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],lf[82],((C_word*)t0)[4]);}

/* k2668 in k2601 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2670,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2673,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2680,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:397: ##sys#lambda-info->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[83]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[83]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* skip in loop in rec in k3400 in k3397 in fprintf0 in k3367 in k1020 in k1017 */
static C_word C_fcall f_3646(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_u_i_char_whitespacep(t1))){
t2=(
  /* extras.scm:626: fetch */
  f_3442(((C_word*)((C_word*)t0)[2])[1])
);
t5=t2;
t1=t5;
goto loop;}
else{
t2=C_fixnum_difference(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_set_block_item(((C_word*)t0)[3],0,t2);
return(t3);}}

/* k2324 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2326,2,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2328,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word)li35),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2328(t5,((C_word*)t0)[4],C_fix(0),C_fix(0),t1);}

/* loop in k2324 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_fcall f_2328(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_2328,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2335,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=t4,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
t6=C_i_string_length(((C_word*)t0)[2]);
t7=t5;
f_2335(t7,C_fixnum_lessp(t3,t6));}
else{
t6=t5;
f_2335(t6,C_SCHEME_FALSE);}}

/* wr-lst in wr in generic-write in k1020 in k1017 */
static void C_fcall f_2127(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_2127,4,t0,t1,t2,t3);}
a=C_alloc(11);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2143,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t7=t2;
t8=C_u_i_car(t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2202,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:306: out */
t10=((C_word*)((C_word*)t0)[3])[1];
f_2078(t10,t9,lf[48],t3);}
else{
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_2143(2,av2);}}}
else{
/* extras.scm:312: out */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2078(t4,t1,lf[49],t3);}}

/* k3354 in generic-write in k1020 in k1017 */
static void C_ccall f_3356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3356,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3360,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:564: pp */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2689(t4,t3,((C_word*)t0)[5],C_fix(0));}

/* k1073 in doloop85 in k1051 in slurp in read-file in k1020 in k1017 */
static void C_ccall f_1075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_1075,2,av);}
a=C_alloc(3);
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[5])[1];
f_1055(t4,((C_word*)t0)[6],t1,t2,t3);}

/* k2333 in loop in k2324 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_fcall f_2335(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,4)))){
C_save_and_reclaim_args((void *)trf_2335,2,t0,t1);}
a=C_alloc(19);
if(C_truep(t1)){
t2=C_i_string_ref(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=C_u_i_char_equalp(t3,C_make_character(92));
t5=(C_truep(t4)?t4:C_u_i_char_equalp(t3,C_make_character(34)));
if(C_truep(t5)){
t6=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2357,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2361,a[2]=((C_word*)t0)[6],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2365,a[2]=((C_word*)t0)[6],a[3]=t9,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:337: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t10;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[8];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}
else{
t6=C_u_i_char_lessp(t3,C_make_character(32));
t7=(C_truep(t6)?t6:C_u_i_char_equalp(t3,C_make_character(127)));
if(C_truep(t7)){
t8=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t9=t8;
t10=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t11=t10;
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2388,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t9,a[6]=t11,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2434,a[2]=((C_word*)t0)[6],a[3]=t12,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:344: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t13;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[8];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}
else{
t8=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* extras.scm:359: loop */
t9=((C_word*)((C_word*)t0)[4])[1];
f_2328(t9,((C_word*)t0)[5],((C_word*)t0)[8],t8,((C_word*)t0)[7]);}}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2452,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2456,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:361: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[8];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}}

/* k1466 in loop in read-string! in k1020 in k1017 */
static void C_ccall f_1468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1468,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(5));
t3=C_fixnum_plus(t2,t1);
t4=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),t3);
t5=C_eqp(t1,C_fix(0));
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=C_i_not(((C_word*)t0)[5]);
t7=(C_truep(t6)?t6:C_fixnum_lessp(t1,((C_word*)t0)[5]));
if(C_truep(t7)){
t8=C_fixnum_plus(((C_word*)t0)[6],t1);
t9=(C_truep(((C_word*)t0)[5])?C_fixnum_difference(((C_word*)t0)[5],t1):C_SCHEME_FALSE);
t10=C_fixnum_plus(((C_word*)t0)[3],t1);
/* extras.scm:153: loop */
t11=((C_word*)((C_word*)t0)[7])[1];
f_1464(t11,((C_word*)t0)[4],t8,t9,t10);}
else{
t8=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_fixnum_plus(t1,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}

/* loop in read-string! in k1020 in k1017 */
static void C_fcall f_1464(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,5)))){
C_save_and_reclaim_args((void *)trf_1464,5,t0,t1,t2,t3,t4);}
a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1468,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:148: rdstring */
t6=((C_word*)t0)[4];{
C_word av2[6];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=((C_word*)t0)[5];
av2[5]=t2;
((C_proc)C_fast_retrieve_proc(t6))(6,av2);}}

/* k1093 in read-file in k1020 in k1017 */
static void C_ccall f_1095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1095,2,av);}
if(C_truep(t1)){
/* extras.scm:52: slurp */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
f_1045(3,av2);}}
else{
/* extras.scm:53: call-with-input-file */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k3599 in loop in rec in k3400 in k3397 in fprintf0 in k3367 in k1020 in k1017 */
static void C_ccall f_3601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3601,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3604,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:617: next */
t4=((C_word*)((C_word*)t0)[6])[1];
f_3449(t4,t3);}

/* k3084 in tail2 in pp-general in pp in generic-write in k1020 in k1017 */
static void C_ccall f_3086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3086,2,av);}
/* extras.scm:496: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2759(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3602 in k3599 in loop in rec in k3400 in k3397 in fprintf0 in k3367 in k1020 in k1017 */
static void C_ccall f_3604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3604,2,av);}
a=C_alloc(4);
t2=C_i_check_list_2(t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3610,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:619: rec */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3433(t4,t3,((C_word*)t0)[6],t1);}

/* tail2 in pp-general in pp in generic-write in k1020 in k1017 */
static void C_fcall f_3061(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,4)))){
C_save_and_reclaim_args((void *)trf_3061,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(17);
t6=(C_truep(((C_word*)t0)[2])?C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=t7;
t9=t2;
t10=C_u_i_cdr(t9);
t11=C_i_nullp(t10);
t12=(C_truep(t11)?C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1)):C_fix(0));
t13=t12;
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3082,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t10,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3086,a[2]=((C_word*)t0)[5],a[3]=t14,a[4]=t8,a[5]=t13,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:496: indent */
t16=((C_word*)((C_word*)t0)[6])[1];
f_2725(t16,t15,t5,t4);}
else{
/* extras.scm:497: tail3 */
t7=((C_word*)((C_word*)t0)[4])[1];
f_3100(t7,t1,t2,t3,t4);}}

/* k3608 in k3602 in k3599 in loop in rec in k3400 in k3397 in fprintf0 in k3367 in k1020 in k1017 */
static void C_ccall f_3610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3610,2,av);}
/* extras.scm:630: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3468(t2,((C_word*)t0)[3]);}

/* read-buffered in k1020 in k1017 */
static void C_ccall f_1755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_1755,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[2]+1):C_i_car(t2));
t5=C_i_check_port_2(t4,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[29]);
t6=C_slot(t4,C_fix(2));
t7=C_slot(t6,C_fix(9));
if(C_truep(t7)){
/* extras.scm:214: rb */
t8=t7;{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t1;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t8))(3,av2);}}
else{
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=lf[30];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k2714 in spaces in pp in generic-write in k1020 in k1017 */
static void C_ccall f_2716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2716,2,av);}
/* extras.scm:406: spaces */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2692(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2477 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2479,2,av);}
/* extras.scm:363: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2721 in spaces in pp in generic-write in k1020 in k1017 */
static void C_ccall f_2723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2723,2,av);}
/* extras.scm:407: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* indent in pp in generic-write in k1020 in k1017 */
static void C_fcall f_2725(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_2725,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(t3)){
if(C_truep(C_i_lessp(t2,t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2741,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2748,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t5;
av2[2]=C_fix(1);
av2[3]=C_make_character(10);
tp(4,av2);}}
else{
t4=C_a_i_minus(&a,2,t2,t3);
/* extras.scm:414: spaces */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2692(t5,t1,t4,t3);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3517 in loop in rec in k3400 in k3397 in fprintf0 in k3367 in k1020 in k1017 */
static void C_ccall f_3519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3519,2,av);}
/* extras.scm:609: display */
t2=*((C_word*)lf[116]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* loop in k1791 in read-token in k1020 in k1017 */
static void C_fcall f_1798(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_1798,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1802,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:226: ##sys#peek-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[32]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[32]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k1791 in read-token in k1020 in k1017 */
static void C_ccall f_1793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1793,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1798,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word)li20),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_1798(t6,((C_word*)t0)[4]);}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_extras_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("extras_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_extras_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(634))){
C_save(t1);
C_rereclaim2(634*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,136);
lf[0]=C_h_intern(&lf[0],4,"read");
lf[1]=C_h_intern(&lf[1],9,"read-file");
lf[2]=C_h_intern(&lf[2],18,"\003sysstandard-input");
lf[3]=C_h_intern(&lf[3],16,"\003sysfast-reverse");
lf[4]=C_h_intern(&lf[4],20,"call-with-input-file");
lf[5]=C_h_intern(&lf[5],5,"port\077");
lf[6]=C_h_intern(&lf[6],9,"randomize");
lf[7]=C_decode_literal(C_heaptop,"\376U1000.0\000");
lf[8]=C_h_intern(&lf[8],11,"\003sysflo2fix");
lf[9]=C_h_intern(&lf[9],15,"current-seconds");
lf[10]=C_h_intern(&lf[10],6,"random");
lf[11]=C_h_intern(&lf[11],9,"read-line");
lf[12]=C_h_intern(&lf[12],13,"\003syssubstring");
lf[13]=C_h_intern(&lf[13],15,"\003sysread-char-0");
lf[14]=C_h_intern(&lf[14],9,"peek-char");
lf[15]=C_h_intern(&lf[15],17,"\003sysstring-append");
lf[16]=C_h_intern(&lf[16],11,"make-string");
lf[17]=C_h_intern(&lf[17],15,"\003sysmake-string");
lf[18]=C_h_intern(&lf[18],10,"read-lines");
lf[19]=C_h_intern(&lf[19],10,"write-line");
lf[20]=C_h_intern(&lf[20],19,"\003sysstandard-output");
lf[21]=C_h_intern(&lf[21],16,"\003syswrite-char-0");
lf[22]=C_h_intern(&lf[22],16,"\003sysread-string!");
lf[23]=C_h_intern(&lf[23],12,"read-string!");
lf[24]=C_h_intern(&lf[24],20,"\003sysread-string/port");
lf[25]=C_h_intern(&lf[25],11,"read-string");
lf[26]=C_h_intern(&lf[26],17,"get-output-string");
lf[27]=C_h_intern(&lf[27],12,"write-string");
lf[28]=C_h_intern(&lf[28],18,"open-output-string");
lf[29]=C_h_intern(&lf[29],13,"read-buffered");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[31]=C_h_intern(&lf[31],10,"read-token");
lf[32]=C_h_intern(&lf[32],15,"\003syspeek-char-0");
lf[33]=C_h_intern(&lf[33],9,"read-byte");
lf[34]=C_h_intern(&lf[34],10,"write-byte");
lf[36]=C_h_intern(&lf[36],5,"quote");
lf[37]=C_h_intern(&lf[37],10,"quasiquote");
lf[38]=C_h_intern(&lf[38],7,"unquote");
lf[39]=C_h_intern(&lf[39],16,"unquote-splicing");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\001`");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\002,@");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\003 . ");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\002()");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\005#!eof");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\001#");
lf[52]=C_h_intern(&lf[52],12,"vector->list");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\002#t");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\002#f");
lf[55]=C_h_intern(&lf[55],18,"\003sysnumber->string");
lf[56]=C_h_intern(&lf[56],9,"\003sysprint");
lf[57]=C_h_intern(&lf[57],21,"\003sysprocedure->string");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[59]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\011\376B\000\000\002\134t\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\012\376B\000\000\002\134n\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\015\376B\000\000\002\134r\376\003\000\000\002\376\003\000\000\002\376"
"\377\012\000\000\013\376B\000\000\002\134v\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\014\376B\000\000\002\134f\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\007\376B\000\000\002\134a\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\010\376B\000\000\002\134"
"b\376\377\016");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\002\134x");
lf[63]=C_h_intern(&lf[63],14,"number->string");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\001x");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\001U");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\001u");
lf[69]=C_h_intern(&lf[69],9,"char-name");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\002#\134");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\016#<unspecified>");
lf[72]=C_h_intern(&lf[72],19,"\003syspointer->string");
lf[73]=C_h_intern(&lf[73],28,"\003sysarbitrary-unbound-symbol");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\020#<unbound value>");
lf[75]=C_h_intern(&lf[75],19,"\003sysuser-print-hook");
lf[76]=C_h_intern(&lf[76],13,"string-append");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\007#<port ");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\001>");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\001}");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\003#${");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\001>");
lf[83]=C_h_intern(&lf[83],23,"\003syslambda-info->string");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\016#<lambda info ");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\025#<unprintable object>");
lf[86]=C_h_intern(&lf[86],11,"\003sysnumber\077");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\010        ");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\010        ");
lf[89]=C_h_intern(&lf[89],21,"reverse-string-append");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\001#");
lf[91]=C_h_intern(&lf[91],3,"max");
lf[92]=C_h_intern(&lf[92],28,"\003syssymbol->qualified-string");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[100]=C_h_intern(&lf[100],6,"lambda");
lf[101]=C_h_intern(&lf[101],2,"if");
lf[102]=C_h_intern(&lf[102],4,"set!");
lf[103]=C_h_intern(&lf[103],4,"cond");
lf[104]=C_h_intern(&lf[104],4,"case");
lf[105]=C_h_intern(&lf[105],3,"and");
lf[106]=C_h_intern(&lf[106],2,"or");
lf[107]=C_h_intern(&lf[107],3,"let");
lf[108]=C_h_intern(&lf[108],5,"begin");
lf[109]=C_h_intern(&lf[109],2,"do");
lf[110]=C_h_intern(&lf[110],4,"let\052");
lf[111]=C_h_intern(&lf[111],6,"letrec");
lf[112]=C_h_intern(&lf[112],7,"letrec\052");
lf[113]=C_h_intern(&lf[113],6,"define");
lf[114]=C_h_intern(&lf[114],18,"pretty-print-width");
lf[115]=C_h_intern(&lf[115],12,"pretty-print");
lf[116]=C_h_intern(&lf[116],7,"display");
lf[117]=C_h_intern(&lf[117],2,"pp");
lf[119]=C_h_intern(&lf[119],9,"\003syserror");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000/too few arguments to formatted output procedure");
lf[121]=C_h_intern(&lf[121],5,"write");
lf[122]=C_h_intern(&lf[122],16,"\003sysflush-output");
lf[123]=C_h_intern(&lf[123],7,"newline");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\037illegal format-string character");
lf[125]=C_h_intern(&lf[125],13,"\003systty-port\077");
lf[126]=C_h_intern(&lf[126],7,"fprintf");
lf[127]=C_h_intern(&lf[127],6,"printf");
lf[128]=C_h_intern(&lf[128],7,"sprintf");
lf[129]=C_h_intern(&lf[129],6,"format");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\023illegal destination");
lf[131]=C_h_intern(&lf[131],12,"output-port\077");
lf[132]=C_h_intern(&lf[132],17,"register-feature!");
lf[133]=C_h_intern(&lf[133],7,"srfi-28");
lf[134]=C_h_intern(&lf[134],14,"make-parameter");
lf[135]=C_h_intern(&lf[135],6,"extras");
C_register_lf2(lf,136,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1019,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* read-token in k1020 in k1017 */
static void C_ccall f_1783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_1783,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[2]+1):C_i_car(t3));
t6=t5;
t7=C_i_check_port_2(t6,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[31]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1793,a[2]=t6,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:224: open-output-string */
t9=*((C_word*)lf[28]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* k3530 in loop in rec in k3400 in k3397 in fprintf0 in k3367 in k1020 in k1017 */
static void C_ccall f_3532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3532,2,av);}
/* extras.scm:610: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k2904 in k2878 in k2851 in pp-expr in pp in generic-write in k1020 in k1017 */
static void C_ccall f_2906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_2906,2,av);}
t2=C_i_string_length(t1);
if(C_truep(C_i_greaterp(t2,C_fix(5)))){
/* extras.scm:445: pp-general */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3019(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[7])[1]);}
else{
/* extras.scm:446: pp-call */
t3=((C_word*)((C_word*)t0)[8])[1];
f_2911(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)((C_word*)t0)[7])[1]);}}

/* k3080 in tail2 in pp-general in pp in generic-write in k1020 in k1017 */
static void C_ccall f_3082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3082,2,av);}
/* extras.scm:496: tail3 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3100(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k3547 in loop in rec in k3400 in k3397 in fprintf0 in k3367 in k1020 in k1017 */
static void C_ccall f_3549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3549,2,av);}
/* extras.scm:611: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[55]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(2);
tp(4,av2);}}

/* k3543 in loop in rec in k3400 in k3397 in fprintf0 in k3367 in k1020 in k1017 */
static void C_ccall f_3545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3545,2,av);}
/* extras.scm:611: display */
t2=*((C_word*)lf[116]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1275 in k1224 in loop in k1206 in k1183 in read-line in k1020 in k1017 */
static void C_fcall f_1277(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_1277,2,t0,t1);}
t2=C_setsubchar(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* extras.scm:107: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1213(t4,((C_word*)t0)[6],t3);}

/* k2549 in k2488 in k2485 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2551,2,av);}
/* extras.scm:375: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* read-file in k1020 in k1017 */
static void C_ccall f_1024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_1024,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+10);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[2]+1):C_i_car(t2));
t5=t4;
t6=C_i_nullp(t2);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?((C_word*)t0)[2]:C_i_car(t7));
t10=t9;
t11=C_i_nullp(t7);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
t15=t14;
t16=C_i_nullp(t12);
t17=(C_truep(t16)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
t18=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1045,a[2]=t15,a[3]=t10,a[4]=((C_word)li1),tmp=(C_word)a,a+=5,tmp);
t19=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1095,a[2]=t18,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:51: port? */
t20=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t20;
av2[1]=t19;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t20+1)))(3,av2);}}

/* sprintf in k3367 in k1020 in k1017 */
static void C_ccall f_3727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_3727,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
/* extras.scm:642: fprintf0 */
f_3395(t1,lf[128],C_SCHEME_FALSE,t2,t3);}

/* k1020 in k1017 */
static void C_ccall f_1022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(52,c,6)))){
C_save_and_reclaim((void *)f_1022,2,av);}
a=C_alloc(52);
t2=*((C_word*)lf[0]+1);
t3=C_mutate2((C_word*)lf[1]+1 /* (set! read-file ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1024,a[2]=t2,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate2((C_word*)lf[6]+1 /* (set! randomize ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1139,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[10]+1 /* (set! random ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1163,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[11]+1 /* (set! read-line ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1175,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[18]+1 /* (set! read-lines ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1328,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[19]+1 /* (set! write-line ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1418,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[22]+1 /* (set! ##sys#read-string! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1446,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[23]+1 /* (set! read-string! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1578,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[24]+1 /* (set! ##sys#read-string/port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1655,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[25]+1 /* (set! read-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1713,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[29]+1 /* (set! read-buffered ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1755,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[31]+1 /* (set! read-token ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1783,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[27]+1 /* (set! write-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1839,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[33]+1 /* (set! read-byte ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1922,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[34]+1 /* (set! write-byte ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1949,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2(&lf[35] /* (set! generic-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1974,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3369,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:570: make-parameter */
t20=*((C_word*)lf[134]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t20;
av2[1]=t19;
av2[2]=C_fix(79);
((C_proc)(void*)(*((C_word*)t20+1)))(3,av2);}}

/* printf in k3367 in k1020 in k1017 */
static void C_ccall f_3721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_3721,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
/* extras.scm:639: fprintf0 */
f_3395(t1,lf[127],*((C_word*)lf[20]+1),t2,t3);}

/* k1361 in loop in doread in read-lines in k1020 in k1017 */
static void C_ccall f_1363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1363,2,av);}
a=C_alloc(3);
if(C_truep(C_eofp(t1))){
/* extras.scm:121: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t3=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* extras.scm:122: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1350(t4,((C_word*)t0)[2],t2,t3);}}

/* doloop85 in k1051 in slurp in read-file in k1020 in k1017 */
static void C_fcall f_1055(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_1055,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
t5=C_eofp(t2);
t6=(C_truep(t5)?t5:(C_truep(((C_word*)t0)[2])?C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]):C_SCHEME_FALSE));
if(C_truep(t6)){
/* extras.scm:50: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t4;
tp(3,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1075,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:47: reader */
t8=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t8))(3,av2);}}}

/* k1051 in slurp in read-file in k1020 in k1017 */
static void C_ccall f_1053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_1053,2,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1055,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li0),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1055(t5,((C_word*)t0)[5],t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* k2913 in pp-call in pp in generic-write in k1020 in k1017 */
static void C_ccall f_2915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_2915,2,av);}
a=C_alloc(4);
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
t4=C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:455: pp-down */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2946(t5,((C_word*)t0)[5],t3,t1,t4,((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* read-string! in k1020 in k1017 */
static void C_ccall f_1578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +10,c,2)))){
C_save_and_reclaim((void*)f_1578,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+10);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t6=C_i_nullp(t4);
t7=(C_truep(t6)?*((C_word*)lf[2]+1):C_i_car(t4));
t8=t7;
t9=C_i_nullp(t4);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t11=C_i_nullp(t10);
t12=(C_truep(t11)?C_fix(0):C_i_car(t10));
t13=t12;
t14=C_i_nullp(t10);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t10));
t16=C_i_check_port_2(t8,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[23]);
t17=C_i_check_string_2(t3,lf[23]);
t18=(C_truep(((C_word*)t5)[1])?C_i_check_exact_2(((C_word*)t5)[1],lf[23]):C_SCHEME_UNDEFINED);
t19=C_block_size(t3);
t20=t19;
t21=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1615,a[2]=t13,a[3]=t1,a[4]=t5,a[5]=t3,a[6]=t8,a[7]=t20,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t5)[1])){
t22=C_fixnum_plus(t13,((C_word*)t5)[1]);
t23=t21;
f_1615(t23,C_fixnum_less_or_equal_p(t22,t20));}
else{
t22=t21;
f_1615(t22,C_SCHEME_FALSE);}}

/* pp-call in pp in generic-write in k1020 in k1017 */
static void C_fcall f_2911(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_2911,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(13);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2915,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
t7=C_i_car(t2);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2935,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:453: out */
t10=((C_word*)((C_word*)t0)[4])[1];
f_2078(t10,t9,lf[93],t3);}

/* k2512 in k2488 in k2485 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2514,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2521,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:371: number->string */
t3=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* slurp in read-file in k1020 in k1017 */
static void C_ccall f_1045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1045,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1053,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:47: reader */
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k2519 in k2512 in k2488 in k2485 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2521,2,av);}
/* extras.scm:371: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2642 in doloop464 in k2618 in k2601 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2644,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2647,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2658,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:393: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[55]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
av2[3]=C_fix(16);
tp(4,av2);}}

/* k2645 in k2642 in doloop464 in k2618 in k2601 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2647,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2631(t3,((C_word*)t0)[4],t2);}

/* fprintf in k3367 in k1020 in k1017 */
static void C_ccall f_3715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_3715,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+0);
t4=C_build_rest(&a,c,4,av);
C_word t5;
/* extras.scm:636: fprintf0 */
f_3395(t1,lf[126],t2,t3,t4);}

/* k2528 in k2488 in k2485 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2530,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2537,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:374: number->string */
t3=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2535 in k2528 in k2488 in k2485 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2537,2,av);}
/* extras.scm:374: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2656 in k2642 in doloop464 in k2618 in k2601 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2658,2,av);}
/* extras.scm:393: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2878 in k2851 in pp-expr in pp in generic-write in k1020 in k1017 */
static void C_ccall f_2880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_2880,2,av);}
a=C_alloc(9);
if(C_truep(t1)){
/* extras.scm:442: proc */
t2=t1;{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2906,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* extras.scm:443: ##sys#symbol->qualified-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[92]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[92]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
tp(3,av2);}}}

/* pp-expr-list in pp in generic-write in k1020 in k1017 */
static void C_ccall f_3159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3159,5,av);}
/* extras.scm:513: pp-list */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2937(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* k3155 in pp-general in pp in generic-write in k1020 in k1017 */
static void C_ccall f_3157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3157,2,av);}
/* extras.scm:504: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2097(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2003 in read-macro? in generic-write in k1020 in k1017 */
static void C_fcall f_2005(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_2005,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=t2;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_nullp(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2624 in k2618 in k2601 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2626,2,av);}
/* extras.scm:394: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],lf[79],((C_word*)t0)[4]);}

/* k2618 in k2601 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_2620,2,av);}
a=C_alloc(15);
t2=C_block_size(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2626,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2631,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=((C_word)li37),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_2631(t8,t4,C_fix(0));}

/* k1017 */
static void C_ccall f_1019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1019,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1022,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:37: register-feature! */
t3=*((C_word*)lf[132]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[135];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2851 in pp-expr in pp in generic-write in k1020 in k1017 */
static void C_ccall f_2853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_2853,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_cadr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2864,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t6=(
  /* extras.scm:435: read-macro-prefix */
  f_2039(((C_word*)t0)[2])
);
/* extras.scm:435: out */
t7=((C_word*)((C_word*)t0)[8])[1];
f_2078(t7,t5,t6,((C_word*)t0)[9]);}
else{
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
if(C_truep(C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2880,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[11],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* extras.scm:440: style */
t5=((C_word*)((C_word*)t0)[12])[1];
f_3230(t5,t4,t3);}
else{
/* extras.scm:447: pp-list */
t4=((C_word*)((C_word*)t0)[13])[1];
f_2937(t4,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[9],((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}}}

/* random in k1020 in k1017 */
static void C_ccall f_1163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1163,3,av);}
t3=C_i_check_exact_2(t2,lf[10]);
t4=C_eqp(t2,C_fix(0));
if(C_truep(t4)){
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_random_fixnum(t2);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* body300 in write-string in k1020 in k1017 */
static void C_fcall f_1844(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_1844,4,t0,t1,t2,t3);}
a=C_alloc(13);
t4=t3;
t5=C_i_check_port_2(t4,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[27]);
t6=(C_truep(t2)?C_i_check_exact_2(t2,lf[27]):C_SCHEME_UNDEFINED);
t7=C_slot(t3,C_fix(2));
t8=C_slot(t7,C_fix(3));
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1861,a[2]=t9,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1864,a[2]=t10,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t9,a[6]=t1,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t12=C_block_size(((C_word*)t0)[2]);
t13=t11;
f_1864(t13,C_fixnum_lessp(t2,t12));}
else{
t12=t11;
f_1864(t12,C_SCHEME_FALSE);}}

/* pp-if in pp in generic-write in k1020 in k1017 */
static void C_ccall f_3171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_3171,5,av);}
/* extras.scm:519: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3019(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}

/* doloop464 in k2618 in k2601 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_fcall f_2631(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_2631,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_subbyte(((C_word*)t0)[3],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2644,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_lessp(t4,C_fix(16)))){
/* extras.scm:392: out */
t6=((C_word*)((C_word*)t0)[5])[1];
f_2078(t6,t5,lf[80],((C_word*)t0)[6]);}
else{
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_2644(2,av2);}}}}

/* k2862 in k2851 in pp-expr in pp in generic-write in k1020 in k1017 */
static void C_ccall f_2864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2864,2,av);}
/* extras.scm:434: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2759(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* k1525 in loop in read-string! in k1020 in k1017 */
static void C_ccall f_1527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1527,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1530,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_eofp(t1))){
t3=t2;
f_1530(t3,C_fix(0));}
else{
t3=C_setsubchar(((C_word*)t0)[7],((C_word*)t0)[5],t1);
t4=t2;
f_1530(t4,C_fix(1));}}

/* g116 in k1183 in read-line in k1020 in k1017 */
static void C_fcall f_1195(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1195,3,t0,t1,t2);}
/* extras.scm:81: rl */
t3=t2;{
C_word av2[4];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* pp-cond in pp in generic-write in k1020 in k1017 */
static void C_ccall f_3177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3177,5,av);}
/* extras.scm:522: pp-call */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2911(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* write-byte in k1020 in k1017 */
static void C_ccall f_1949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,3)))){
C_save_and_reclaim((void*)f_1949,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[20]+1):C_i_car(t3));
t6=C_i_check_exact_2(t2,lf[34]);
t7=C_i_check_port_2(t5,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[34]);
t8=C_make_character(C_unfix(t2));
/* extras.scm:258: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=t1;
av2[2]=t8;
av2[3]=t5;
tp(4,av2);}}

/* loop in read-string! in k1020 in k1017 */
static void C_fcall f_1523(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_1523,5,t0,t1,t2,t3,t4);}
a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1527,a[2]=t4,a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:156: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k3702 in k3397 in fprintf0 in k3367 in k1020 in k1017 */
static void C_ccall f_3704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3704,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_3402(2,av2);}}
else{
/* extras.scm:587: open-output-string */
t2=*((C_word*)lf[28]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2601 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2603,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2610,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[5],C_fix(3));
/* extras.scm:384: string-append */
t4=*((C_word*)lf[76]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[77];
av2[3]=t3;
av2[4]=lf[78];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
if(C_truep(C_bytevectorp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2620,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:386: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2078(t3,t2,lf[81],((C_word*)t0)[4]);}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2670,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:396: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2078(t3,t2,lf[84],((C_word*)t0)[4]);}
else{
/* extras.scm:399: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],lf[85],((C_word*)t0)[4]);}}}}

/* pp-lambda in pp in generic-write in k1020 in k1017 */
static void C_ccall f_3165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_3165,5,av);}
/* extras.scm:516: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3019(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}

/* pretty-print in k3367 in k1020 in k1017 */
static void C_ccall f_3371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_3371,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3375,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_3375(t6,C_u_i_car(t5));}
else{
t5=t4;
f_3375(t5,*((C_word*)lf[20]+1));}}

/* read-macro? in generic-write in k1020 in k1017 */
static void C_fcall f_1977(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1977,2,t1,t2);}
a=C_alloc(4);
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_eqp(t3,lf[36]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2005,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t6)){
t8=t7;
f_2005(t8,t6);}
else{
t8=C_eqp(t3,lf[37]);
if(C_truep(t8)){
t9=t7;
f_2005(t9,t8);}
else{
t9=C_eqp(t3,lf[38]);
t10=t7;
f_2005(t10,(C_truep(t9)?t9:C_eqp(t3,lf[39])));}}}

/* generic-write in k1020 in k1017 */
static void C_fcall f_1974(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(43,0,4)))){
C_save_and_reclaim_args((void *)trf_1974,5,t1,t2,t3,t4,t5);}
a=C_alloc(43);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1977,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t17=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2039,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t18=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2078,a[2]=t5,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp));
t19=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2097,a[2]=t13,a[3]=t9,a[4]=t11,a[5]=t7,a[6]=t3,a[7]=((C_word)li38),tmp=(C_word)a,a+=8,tmp));
t20=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2689,a[2]=t11,a[3]=t3,a[4]=t4,a[5]=t13,a[6]=t9,a[7]=t7,a[8]=((C_word)li62),tmp=(C_word)a,a+=9,tmp));
if(C_truep(t4)){
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3356,a[2]=t11,a[3]=t1,a[4]=t15,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t21;
av2[2]=C_fix(1);
av2[3]=C_make_character(10);
tp(4,av2);}}
else{
/* extras.scm:565: wr */
t21=((C_word*)t13)[1];
f_2097(t21,t1,t2,C_fix(0));}}

/* k3373 in pretty-print in k3367 in k1020 in k1017 */
static void C_fcall f_3375(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3375,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3378,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3382,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:574: pretty-print-width */
t5=*((C_word*)lf[114]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k3376 in k3373 in pretty-print in k3367 in k1020 in k1017 */
static void C_ccall f_3378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3378,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2608 in k2601 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2610,2,av);}
/* extras.scm:384: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* loop in rec in k3400 in k3397 in fprintf0 in k3367 in k1020 in k1017 */
static void C_fcall f_3468(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_3468,2,t0,t1);}
a=C_alloc(11);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]))){
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(
  /* extras.scm:604: fetch */
  f_3442(((C_word*)((C_word*)t0)[4])[1])
);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3481,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(t2,C_make_character(126));
t5=(C_truep(t4)?C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(
  /* extras.scm:606: fetch */
  f_3442(((C_word*)((C_word*)t0)[4])[1])
);
t7=C_u_i_char_upcase(t6);
switch(t7){
case C_make_character(83):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3506,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:608: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3449(t9,t8);
case C_make_character(65):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3519,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:609: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3449(t9,t8);
case C_make_character(67):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3532,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:610: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3449(t9,t8);
case C_make_character(66):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3545,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3549,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:611: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_3449(t10,t9);
case C_make_character(79):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3562,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3566,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:612: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_3449(t10,t9);
case C_make_character(88):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3579,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3583,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:613: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_3449(t10,t9);
case C_make_character(33):
/* extras.scm:614: ##sys#flush-output */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[122]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[122]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}
case C_make_character(63):
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3601,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:616: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3449(t9,t8);
case C_make_character(126):
/* extras.scm:620: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[21]+1);
av2[1]=t3;
av2[2]=C_make_character(126);
av2[3]=((C_word*)t0)[6];
tp(4,av2);}
default:
t8=C_eqp(t7,C_make_character(37));
t9=(C_truep(t8)?t8:C_eqp(t7,C_make_character(78)));
if(C_truep(t9)){
/* extras.scm:621: newline */
t10=*((C_word*)lf[123]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
if(C_truep(C_u_i_char_whitespacep(t6))){
t10=(
  /* extras.scm:624: fetch */
  f_3442(((C_word*)((C_word*)t0)[4])[1])
);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3646,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word)li67),tmp=(C_word)a,a+=5,tmp);
t12=(
  f_3646(t11,t10)
);
/* extras.scm:630: loop */
t24=t1;
t1=t24;
goto loop;}
else{
/* extras.scm:628: ##sys#error */
t10=*((C_word*)lf[119]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=lf[124];
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}}}
else{
/* extras.scm:629: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[21]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}}}

/* pp-expr in pp in generic-write in k1020 in k1017 */
static void C_ccall f_2846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_2846,5,av);}
a=C_alloc(14);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2853,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t3,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],tmp=(C_word)a,a+=14,tmp);
/* extras.scm:433: read-macro? */
f_1977(t5,t2);}

/* read-line in k1020 in k1017 */
static void C_ccall f_1175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_1175,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_i_car(t2):*((C_word*)lf[2]+1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1185,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t7=C_i_cdr(t2);
t8=C_i_pairp(t7);
t9=t6;
f_1185(t9,(C_truep(t8)?C_i_cadr(t2):C_SCHEME_FALSE));}
else{
t7=t6;
f_1185(t7,C_SCHEME_FALSE);}}

/* k3358 in k3354 in generic-write in k1020 in k1017 */
static void C_ccall f_3360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3360,2,av);}
/* extras.scm:564: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3367 in k1020 in k1017 */
static void C_ccall f_3369(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,6)))){
C_save_and_reclaim((void *)f_3369,2,av);}
a=C_alloc(21);
t2=C_mutate2((C_word*)lf[114]+1 /* (set! pretty-print-width ...) */,t1);
t3=C_mutate2((C_word*)lf[115]+1 /* (set! pretty-print ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3371,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[117]+1 /* (set! pp ...) */,*((C_word*)lf[115]+1));
t5=C_mutate2(&lf[118] /* (set! fprintf0 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3395,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[126]+1 /* (set! fprintf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3715,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[127]+1 /* (set! printf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3721,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[128]+1 /* (set! sprintf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3727,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[129]+1 /* (set! format ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3733,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3776,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:654: register-feature! */
t11=*((C_word*)lf[132]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[133];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}

/* pp-case in pp in generic-write in k1020 in k1017 */
static void C_ccall f_3183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_3183,5,av);}
/* extras.scm:525: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3019(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}

/* pp-and in pp in generic-write in k1020 in k1017 */
static void C_ccall f_3189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3189,5,av);}
/* extras.scm:528: pp-call */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2911(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* k2485 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2487,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2490,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:366: char-name */
t3=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* g455 in k2488 in k2485 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_fcall f_2494(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_2494,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
/* extras.scm:368: out */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2078(t4,t1,t3,((C_word*)t0)[3]);}

/* k2488 in k2485 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2490,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2494,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:366: g455 */
t3=t2;
f_2494(t3,((C_word*)t0)[4],t1);}
else{
if(C_truep(C_fixnum_lessp(((C_word*)t0)[5],C_fix(32)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:370: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2078(t3,t2,lf[66],((C_word*)t0)[3]);}
else{
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[5],C_fix(255)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2530,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[5],C_fix(65535)))){
/* extras.scm:373: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2078(t3,t2,lf[67],((C_word*)t0)[3]);}
else{
/* extras.scm:373: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2078(t3,t2,lf[68],((C_word*)t0)[3]);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2551,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[6];
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t2;
av2[2]=C_fix(1);
av2[3]=t3;
tp(4,av2);}}}}}

/* pp-let in pp in generic-write in k1020 in k1017 */
static void C_ccall f_3195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_3195,5,av);}
t5=C_i_cdr(t2);
if(C_truep(C_i_pairp(t5))){
t6=C_u_i_car(t5);
t7=C_i_symbolp(t6);
/* extras.scm:533: pp-general */
t8=((C_word*)((C_word*)t0)[2])[1];
f_3019(t8,t1,t2,t3,t4,t7,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}
else{
/* extras.scm:533: pp-general */
t6=((C_word*)((C_word*)t0)[2])[1];
f_3019(t6,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}}

/* write-line in k1020 in k1017 */
static void C_ccall f_1418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_1418,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t4=(C_truep(C_eqp(t3,C_SCHEME_END_OF_LIST))?*((C_word*)lf[20]+1):C_slot(t3,C_fix(0)));
t5=t4;
t6=C_i_check_port_2(t5,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[19]);
t7=C_i_check_string_2(t2,lf[19]);
t8=C_slot(t5,C_fix(2));
t9=C_slot(t8,C_fix(3));
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1434,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:130: g160 */
t11=t9;{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=t5;
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t11))(4,av2);}}

/* read-byte in k1020 in k1017 */
static void C_ccall f_1922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_1922,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[2]+1):C_i_car(t2));
t5=C_i_check_port_2(t4,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[33]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1932,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:250: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t6;
av2[2]=t4;
tp(3,av2);}}

/* k2191 in loop in k2141 in wr-lst in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2193(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2193,2,av);}
/* extras.scm:311: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2097(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2999 in loop in pp-down in pp in generic-write in k1020 in k1017 */
static void C_ccall f_3001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3001,2,av);}
/* extras.scm:475: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],lf[96],t1);}

/* k3003 in loop in pp-down in pp in generic-write in k1020 in k1017 */
static void C_ccall f_3005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3005,2,av);}
a=C_alloc(4);
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* extras.scm:476: pr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2759(t3,((C_word*)t0)[4],((C_word*)t0)[5],t1,t2,((C_word*)t0)[6]);}

/* k2165 in loop in k2141 in wr-lst in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2167,2,av);}
/* extras.scm:309: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2145(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3011 in loop in pp-down in pp in generic-write in k1020 in k1017 */
static void C_ccall f_3013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3013,2,av);}
/* extras.scm:477: indent */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2725(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3015 in loop in pp-down in pp in generic-write in k1020 in k1017 */
static void C_ccall f_3017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3017,2,av);}
/* extras.scm:477: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],lf[97],t1);}

/* k3581 in loop in rec in k3400 in k3397 in fprintf0 in k3367 in k1020 in k1017 */
static void C_ccall f_3583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3583,2,av);}
/* extras.scm:613: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[55]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(16);
tp(4,av2);}}

/* pp-general in pp in generic-write in k1020 in k1017 */
static void C_fcall f_3019(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(42,0,6)))){
C_save_and_reclaim_args((void *)trf_3019,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
a=C_alloc(42);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3022,a[2]=t6,a[3]=t4,a[4]=t12,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word)li48),tmp=(C_word)a,a+=8,tmp));
t16=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3061,a[2]=t7,a[3]=t4,a[4]=t14,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word)li49),tmp=(C_word)a,a+=8,tmp));
t17=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3100,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t8,a[5]=((C_word)li50),tmp=(C_word)a,a+=6,tmp));
t18=C_i_car(t2);
t19=t18;
t20=t2;
t21=C_u_i_cdr(t20);
t22=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3111,a[2]=t5,a[3]=t21,a[4]=t3,a[5]=t10,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t23=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3157,a[2]=((C_word*)t0)[5],a[3]=t22,a[4]=t19,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:504: out */
t24=((C_word*)((C_word*)t0)[6])[1];
f_2078(t24,t23,lf[99],t3);}

/* k1432 in write-line in k1020 in k1017 */
static void C_ccall f_1434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1434,2,av);}
/* extras.scm:137: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k1859 in body300 in write-string in k1020 in k1017 */
static void C_ccall f_1861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1861,2,av);}
/* extras.scm:236: g311 */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* k1862 in body300 in write-string in k1020 in k1017 */
static void C_fcall f_1864(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1864,2,t0,t1);}
if(C_truep(t1)){
/* extras.scm:242: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}
else{
t2=((C_word*)t0)[3];
/* extras.scm:236: g311 */
t3=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t3;
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)t0)[7];
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* read-macro-prefix in generic-write in k1020 in k1017 */
static C_word C_fcall f_2039(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;{}
t2=C_i_car(t1);
t3=t1;
t4=C_u_i_cdr(t3);
t5=C_eqp(t2,lf[36]);
if(C_truep(t5)){
return(lf[40]);}
else{
t6=C_eqp(t2,lf[37]);
if(C_truep(t6)){
return(lf[41]);}
else{
t7=C_eqp(t2,lf[38]);
if(C_truep(t7)){
return(lf[42]);}
else{
t8=C_eqp(t2,lf[39]);
return((C_truep(t8)?lf[43]:C_SCHEME_UNDEFINED));}}}}

/* tail1 in pp-general in pp in generic-write in k1020 in k1017 */
static void C_fcall f_3022(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,5)))){
C_save_and_reclaim_args((void *)trf_3022,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(18);
t6=(C_truep(((C_word*)t0)[2])?C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=t7;
t9=t2;
t10=C_u_i_cdr(t9);
t11=C_i_nullp(t10);
t12=(C_truep(t11)?C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1)):C_fix(0));
t13=t12;
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3043,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t10,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3047,a[2]=((C_word*)t0)[5],a[3]=t14,a[4]=t8,a[5]=t13,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:488: indent */
t16=((C_word*)((C_word*)t0)[6])[1];
f_2725(t16,t15,t5,t4);}
else{
/* extras.scm:489: tail2 */
t7=((C_word*)((C_word*)t0)[4])[1];
f_3061(t7,t1,t2,t3,t4,t5);}}

/* k3479 in loop in rec in k3400 in k3397 in fprintf0 in k3367 in k1020 in k1017 */
static void C_ccall f_3481(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3481,2,av);}
/* extras.scm:630: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3468(t2,((C_word*)t0)[3]);}

/* k1930 in read-byte in k1020 in k1017 */
static void C_ccall f_1932(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1932,2,av);}
t2=C_eofp(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(C_truep(t2)?t1:C_fix(C_character_code(t1)));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2187 in loop in k2141 in wr-lst in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2189,2,av);}
/* extras.scm:311: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],lf[46],t1);}

/* k1613 in read-string! in k1020 in k1017 */
static void C_fcall f_1615(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_1615,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[23]);
/* extras.scm:175: ##sys#read-string! */
t3=*((C_word*)lf[22]+1);{
C_word av2[6];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t2=C_fixnum_difference(((C_word*)t0)[7],((C_word*)t0)[2]);
t3=C_set_block_item(((C_word*)t0)[4],0,t2);
t4=C_i_check_exact_2(((C_word*)t0)[2],lf[23]);
/* extras.scm:175: ##sys#read-string! */
t5=*((C_word*)lf[22]+1);{
C_word av2[6];
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}

/* def-port303 in write-string in k1020 in k1017 */
static void C_fcall f_1882(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1882,3,t0,t1,t2);}
/* extras.scm:236: body300 */
t3=((C_word*)t0)[2];
f_1844(t3,t1,t2,*((C_word*)lf[20]+1));}

/* def-n302 in write-string in k1020 in k1017 */
static void C_fcall f_1887(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_1887,2,t0,t1);}
/* extras.scm:236: def-port303 */
t2=((C_word*)t0)[2];
f_1882(t2,t1,C_SCHEME_FALSE);}

/* ##sys#read-string! in k1020 in k1017 */
static void C_ccall f_1446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_1446,6,av);}
a=C_alloc(9);
t6=C_eqp(t2,C_fix(0));
if(C_truep(t6)){
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_slot(t4,C_fix(2));
t8=C_slot(t7,C_fix(7));
t9=t8;
if(C_truep(t9)){
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1464,a[2]=t4,a[3]=t11,a[4]=t9,a[5]=t3,a[6]=((C_word)li12),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_1464(t13,t1,t5,t2,C_fix(0));}
else{
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1523,a[2]=t11,a[3]=t3,a[4]=t4,a[5]=((C_word)li13),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_1523(t13,t1,t5,t2,C_fix(0));}}}

/* k1266 in k1257 in k1224 in loop in k1206 in k1183 in read-line in k1020 in k1017 */
static void C_ccall f_1268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1268,2,av);}
/* extras.scm:99: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* k1297 in k1224 in loop in k1206 in k1183 in read-line in k1020 in k1017 */
static void C_ccall f_1299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1299,2,av);}
/* extras.scm:104: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[15]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=t1;
tp(4,av2);}}

/* k1289 in k1224 in loop in k1206 in k1183 in read-line in k1020 in k1017 */
static void C_ccall f_1291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1291,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1]);
t4=C_set_block_item(((C_word*)t0)[3],0,t3);
t5=((C_word*)t0)[4];
f_1277(t5,t4);}

/* k2410 in k2386 in k2333 in loop in k2324 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2412,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2416,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(C_u_i_char_lessp(((C_word*)t0)[4],C_make_character(16)))?lf[60]:lf[61]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2424,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:358: out */
t7=((C_word*)((C_word*)t0)[2])[1];
f_2078(t7,t6,lf[62],((C_word*)t0)[5]);}

/* k2171 in loop in k2141 in wr-lst in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2173,2,av);}
/* extras.scm:309: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2097(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2414 in k2410 in k2386 in k2333 in loop in k2324 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2416,2,av);}
/* extras.scm:356: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2285 in k2282 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2287,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2294,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:323: get-output-string */
t3=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2282 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2284,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:322: ##sys#print */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* loop in doread in read-lines in k1020 in k1017 */
static void C_fcall f_1350(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1350,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
/* extras.scm:118: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1363,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:119: read-line */
t6=*((C_word*)lf[11]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* fprintf0 in k3367 in k1020 in k1017 */
static void C_fcall f_3395(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3395,5,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3399,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t3)){
t7=t3;
t8=t2;
t9=t6;
f_3399(t9,C_i_check_port_2(t7,C_SCHEME_FALSE,C_SCHEME_TRUE,t8));}
else{
t7=t6;
f_3399(t7,C_SCHEME_UNDEFINED);}}

/* k1528 in k1525 in loop in read-string! in k1020 in k1017 */
static void C_fcall f_1530(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1530,2,t0,t1);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_not(((C_word*)t0)[4]);
t4=(C_truep(t3)?t3:C_fixnum_lessp(t1,((C_word*)t0)[4]));
if(C_truep(t4)){
t5=C_fixnum_plus(((C_word*)t0)[5],t1);
t6=(C_truep(((C_word*)t0)[4])?C_fixnum_difference(((C_word*)t0)[4],t1):C_SCHEME_FALSE);
t7=C_fixnum_plus(((C_word*)t0)[2],t1);
/* extras.scm:164: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_1523(t8,((C_word*)t0)[3],t5,t6,t7);}
else{
t5=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_fixnum_plus(t1,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}

/* k3238 in style in pp in generic-write in k1020 in k1017 */
static void C_fcall f_3240(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_3240,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[101]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[102]));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[5])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[4],lf[103]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t5;
av2[1]=((C_word*)((C_word*)t0)[6])[1];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(((C_word*)t0)[4],lf[104]);
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=((C_word*)((C_word*)t0)[7])[1];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(((C_word*)t0)[4],lf[105]);
t7=(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[106]));
if(C_truep(t7)){
t8=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t8;
av2[1]=((C_word*)((C_word*)t0)[8])[1];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_eqp(((C_word*)t0)[4],lf[107]);
if(C_truep(t8)){
t9=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t9;
av2[1]=((C_word*)((C_word*)t0)[9])[1];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=C_eqp(((C_word*)t0)[4],lf[108]);
if(C_truep(t9)){
t10=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t10;
av2[1]=((C_word*)((C_word*)t0)[10])[1];
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t10=C_eqp(((C_word*)t0)[4],lf[109]);
t11=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t11;
av2[1]=(C_truep(t10)?((C_word*)((C_word*)t0)[11])[1]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}}}}}}}

/* k3397 in fprintf0 in k3367 in k1020 in k1017 */
static void C_fcall f_3399(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_3399,2,t0,t1);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3402,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3704,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
/* extras.scm:585: ##sys#tty-port? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[125]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
/* extras.scm:587: open-output-string */
t4=*((C_word*)lf[28]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* doread in read-lines in k1020 in k1017 */
static void C_ccall f_1340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1340,3,av);}
a=C_alloc(7);
t3=(C_truep(((C_word*)t0)[2])?((C_word*)t0)[2]:C_fix(1000000000));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1350,a[2]=t5,a[3]=t2,a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1350(t7,t1,C_SCHEME_END_OF_LIST,t3);}

/* k2363 in k2333 in loop in k2324 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2365,2,av);}
/* extras.scm:337: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3380 in k3373 in pretty-print in k3367 in k1020 in k1017 */
static void C_ccall f_3382(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3382,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3384,a[2]=((C_word*)t0)[2],a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp);
/* extras.scm:574: generic-write */
f_1974(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,t1,t2);}

/* k2359 in k2333 in loop in k2324 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2361(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2361,2,av);}
/* extras.scm:336: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],lf[58],t1);}

/* a3383 in k3380 in k3373 in pretty-print in k3367 in k1020 in k1017 */
static void C_ccall f_3384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3384,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3388,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:574: display */
t4=*((C_word*)lf[116]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2268,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2275,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:319: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[55]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2284,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:321: open-output-string */
t3=*((C_word*)lf[28]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_closurep(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2307,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:324: ##sys#procedure->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[57]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[5]))){
if(C_truep(((C_word*)t0)[6])){
/* extras.scm:327: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2326,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:328: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2078(t3,t2,lf[65],((C_word*)t0)[4]);}}
else{
if(C_truep(C_charp(((C_word*)t0)[5]))){
if(C_truep(((C_word*)t0)[6])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2479,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t2;
av2[2]=C_fix(1);
av2[3]=t3;
tp(4,av2);}}
else{
t2=C_fix(C_character_code(((C_word*)t0)[5]));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2487,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:365: out */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2078(t5,t4,lf[70],((C_word*)t0)[4]);}}
else{
if(C_truep(C_undefinedp(((C_word*)t0)[5]))){
/* extras.scm:376: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],lf[71],((C_word*)t0)[4]);}
else{
if(C_truep(C_anypointerp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:377: ##sys#pointer->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[72]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[72]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
t2=C_slot(lf[73],C_fix(0));
t3=C_eqp(((C_word*)t0)[5],t2);
if(C_truep(t3)){
/* extras.scm:379: out */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2078(t4,((C_word*)t0)[3],lf[74],((C_word*)t0)[4]);}
else{
if(C_truep(C_structurep(((C_word*)t0)[5]))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2587,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:381: open-output-string */
t5=*((C_word*)lf[28]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2603,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:384: port? */
t5=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}}}}}}}}}

/* pp-begin in pp in generic-write in k1020 in k1017 */
static void C_ccall f_3215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_3215,5,av);}
/* extras.scm:536: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3019(t5,t1,t2,t3,t4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}

/* k3386 in a3383 in k3380 in k3373 in pretty-print in k3367 in k1020 in k1017 */
static void C_ccall f_3388(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3388,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k1206 in k1183 in read-line in k1020 in k1017 */
static void C_fcall f_1213(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_1213,3,t0,t1,t2);}
a=C_alloc(8);
t3=(C_truep(((C_word*)t0)[2])?C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t3)){
/* extras.scm:87: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_fix(0);
av2[4]=t2;
tp(5,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1226,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:88: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}

/* k2273 in k2266 in wr in generic-write in k1020 in k1017 */
static void C_ccall f_2275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2275,2,av);}
/* extras.scm:319: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[225] = {
{"f_1208:extras_2escm",(void*)f_1208},
{"f_2388:extras_2escm",(void*)f_2388},
{"f_2759:extras_2escm",(void*)f_2759},
{"f_3230:extras_2escm",(void*)f_3230},
{"f_2587:extras_2escm",(void*)f_2587},
{"f_2810:extras_2escm",(void*)f_2810},
{"f_2294:extras_2escm",(void*)f_2294},
{"f_1328:extras_2escm",(void*)f_1328},
{"f_2434:extras_2escm",(void*)f_2434},
{"f_2597:extras_2escm",(void*)f_2597},
{"f_3043:extras_2escm",(void*)f_3043},
{"f_2590:extras_2escm",(void*)f_2590},
{"f_1226:extras_2escm",(void*)f_1226},
{"f_3139:extras_2escm",(void*)f_3139},
{"f_3047:extras_2escm",(void*)f_3047},
{"f_2772:extras_2escm",(void*)f_2772},
{"f_2775:extras_2escm",(void*)f_2775},
{"f_1839:extras_2escm",(void*)f_1839},
{"f_1259:extras_2escm",(void*)f_1259},
{"f_2788:extras_2escm",(void*)f_2788},
{"f_2804:extras_2escm",(void*)f_2804},
{"f_2808:extras_2escm",(void*)f_2808},
{"f_3776:extras_2escm",(void*)f_3776},
{"f_2393:extras_2escm",(void*)f_2393},
{"f_2394:extras_2escm",(void*)f_2394},
{"f_3402:extras_2escm",(void*)f_3402},
{"f_3405:extras_2escm",(void*)f_3405},
{"f_2689:extras_2escm",(void*)f_2689},
{"f_2680:extras_2escm",(void*)f_2680},
{"f_3100:extras_2escm",(void*)f_3100},
{"f_1157:extras_2escm",(void*)f_1157},
{"f_2692:extras_2escm",(void*)f_2692},
{"f_2456:extras_2escm",(void*)f_2456},
{"f_2452:extras_2escm",(void*)f_2452},
{"f_3733:extras_2escm",(void*)f_3733},
{"f_3579:extras_2escm",(void*)f_3579},
{"f_2143:extras_2escm",(void*)f_2143},
{"f_2145:extras_2escm",(void*)f_2145},
{"f_1811:extras_2escm",(void*)f_1811},
{"f_2424:extras_2escm",(void*)f_2424},
{"f_3562:extras_2escm",(void*)f_3562},
{"f_1818:extras_2escm",(void*)f_1818},
{"f_3766:extras_2escm",(void*)f_3766},
{"f_1139:extras_2escm",(void*)f_1139},
{"f_3566:extras_2escm",(void*)f_3566},
{"f_2118:extras_2escm",(void*)f_2118},
{"f_1802:extras_2escm",(void*)f_1802},
{"f_1808:extras_2escm",(void*)f_1808},
{"f_2973:extras_2escm",(void*)f_2973},
{"f_2979:extras_2escm",(void*)f_2979},
{"f_3221:extras_2escm",(void*)f_3221},
{"f_2946:extras_2escm",(void*)f_2946},
{"f_2941:extras_2escm",(void*)f_2941},
{"f_1143:extras_2escm",(void*)f_1143},
{"f_2100:extras_2escm",(void*)f_2100},
{"f_2107:extras_2escm",(void*)f_2107},
{"f_2245:extras_2escm",(void*)f_2245},
{"f_2249:extras_2escm",(void*)f_2249},
{"f_2935:extras_2escm",(void*)f_2935},
{"f_2937:extras_2escm",(void*)f_2937},
{"f_3741:extras_2escm",(void*)f_3741},
{"f_2741:extras_2escm",(void*)f_2741},
{"f_2748:extras_2escm",(void*)f_2748},
{"f_3111:extras_2escm",(void*)f_3111},
{"f_3427:extras_2escm",(void*)f_3427},
{"f_1668:extras_2escm",(void*)f_1668},
{"f_2202:extras_2escm",(void*)f_2202},
{"f_3124:extras_2escm",(void*)f_3124},
{"f_2952:extras_2escm",(void*)f_2952},
{"f_2357:extras_2escm",(void*)f_2357},
{"f_3433:extras_2escm",(void*)f_3433},
{"f_2097:extras_2escm",(void*)f_2097},
{"f_1655:extras_2escm",(void*)f_1655},
{"f_3442:extras_2escm",(void*)f_3442},
{"f_3449:extras_2escm",(void*)f_3449},
{"f_1713:extras_2escm",(void*)f_1713},
{"f_1686:extras_2escm",(void*)f_1686},
{"f_1683:extras_2escm",(void*)f_1683},
{"f_2569:extras_2escm",(void*)f_2569},
{"f_1185:extras_2escm",(void*)f_1185},
{"f_2078:extras_2escm",(void*)f_2078},
{"f_1671:extras_2escm",(void*)f_1671},
{"f_2307:extras_2escm",(void*)f_2307},
{"f_2088:extras_2escm",(void*)f_2088},
{"f_1707:extras_2escm",(void*)f_1707},
{"f_3506:extras_2escm",(void*)f_3506},
{"f_1691:extras_2escm",(void*)f_1691},
{"f_1695:extras_2escm",(void*)f_1695},
{"f_2673:extras_2escm",(void*)f_2673},
{"f_2670:extras_2escm",(void*)f_2670},
{"f_3646:extras_2escm",(void*)f_3646},
{"f_2326:extras_2escm",(void*)f_2326},
{"f_2328:extras_2escm",(void*)f_2328},
{"f_2127:extras_2escm",(void*)f_2127},
{"f_3356:extras_2escm",(void*)f_3356},
{"f_1075:extras_2escm",(void*)f_1075},
{"f_2335:extras_2escm",(void*)f_2335},
{"f_1468:extras_2escm",(void*)f_1468},
{"f_1464:extras_2escm",(void*)f_1464},
{"f_1095:extras_2escm",(void*)f_1095},
{"f_3601:extras_2escm",(void*)f_3601},
{"f_3086:extras_2escm",(void*)f_3086},
{"f_3604:extras_2escm",(void*)f_3604},
{"f_3061:extras_2escm",(void*)f_3061},
{"f_3610:extras_2escm",(void*)f_3610},
{"f_1755:extras_2escm",(void*)f_1755},
{"f_2716:extras_2escm",(void*)f_2716},
{"f_2479:extras_2escm",(void*)f_2479},
{"f_2723:extras_2escm",(void*)f_2723},
{"f_2725:extras_2escm",(void*)f_2725},
{"f_3519:extras_2escm",(void*)f_3519},
{"f_1798:extras_2escm",(void*)f_1798},
{"f_1793:extras_2escm",(void*)f_1793},
{"toplevel:extras_2escm",(void*)C_extras_toplevel},
{"f_1783:extras_2escm",(void*)f_1783},
{"f_3532:extras_2escm",(void*)f_3532},
{"f_2906:extras_2escm",(void*)f_2906},
{"f_3082:extras_2escm",(void*)f_3082},
{"f_3549:extras_2escm",(void*)f_3549},
{"f_3545:extras_2escm",(void*)f_3545},
{"f_1277:extras_2escm",(void*)f_1277},
{"f_2551:extras_2escm",(void*)f_2551},
{"f_1024:extras_2escm",(void*)f_1024},
{"f_3727:extras_2escm",(void*)f_3727},
{"f_1022:extras_2escm",(void*)f_1022},
{"f_3721:extras_2escm",(void*)f_3721},
{"f_1363:extras_2escm",(void*)f_1363},
{"f_1055:extras_2escm",(void*)f_1055},
{"f_1053:extras_2escm",(void*)f_1053},
{"f_2915:extras_2escm",(void*)f_2915},
{"f_1578:extras_2escm",(void*)f_1578},
{"f_2911:extras_2escm",(void*)f_2911},
{"f_2514:extras_2escm",(void*)f_2514},
{"f_1045:extras_2escm",(void*)f_1045},
{"f_2521:extras_2escm",(void*)f_2521},
{"f_2644:extras_2escm",(void*)f_2644},
{"f_2647:extras_2escm",(void*)f_2647},
{"f_3715:extras_2escm",(void*)f_3715},
{"f_2530:extras_2escm",(void*)f_2530},
{"f_2537:extras_2escm",(void*)f_2537},
{"f_2658:extras_2escm",(void*)f_2658},
{"f_2880:extras_2escm",(void*)f_2880},
{"f_3159:extras_2escm",(void*)f_3159},
{"f_3157:extras_2escm",(void*)f_3157},
{"f_2005:extras_2escm",(void*)f_2005},
{"f_2626:extras_2escm",(void*)f_2626},
{"f_2620:extras_2escm",(void*)f_2620},
{"f_1019:extras_2escm",(void*)f_1019},
{"f_2853:extras_2escm",(void*)f_2853},
{"f_1163:extras_2escm",(void*)f_1163},
{"f_1844:extras_2escm",(void*)f_1844},
{"f_3171:extras_2escm",(void*)f_3171},
{"f_2631:extras_2escm",(void*)f_2631},
{"f_2864:extras_2escm",(void*)f_2864},
{"f_1527:extras_2escm",(void*)f_1527},
{"f_1195:extras_2escm",(void*)f_1195},
{"f_3177:extras_2escm",(void*)f_3177},
{"f_1949:extras_2escm",(void*)f_1949},
{"f_1523:extras_2escm",(void*)f_1523},
{"f_3704:extras_2escm",(void*)f_3704},
{"f_2603:extras_2escm",(void*)f_2603},
{"f_3165:extras_2escm",(void*)f_3165},
{"f_3371:extras_2escm",(void*)f_3371},
{"f_1977:extras_2escm",(void*)f_1977},
{"f_1974:extras_2escm",(void*)f_1974},
{"f_3375:extras_2escm",(void*)f_3375},
{"f_3378:extras_2escm",(void*)f_3378},
{"f_2610:extras_2escm",(void*)f_2610},
{"f_3468:extras_2escm",(void*)f_3468},
{"f_2846:extras_2escm",(void*)f_2846},
{"f_1175:extras_2escm",(void*)f_1175},
{"f_3360:extras_2escm",(void*)f_3360},
{"f_3369:extras_2escm",(void*)f_3369},
{"f_3183:extras_2escm",(void*)f_3183},
{"f_3189:extras_2escm",(void*)f_3189},
{"f_2487:extras_2escm",(void*)f_2487},
{"f_2494:extras_2escm",(void*)f_2494},
{"f_2490:extras_2escm",(void*)f_2490},
{"f_3195:extras_2escm",(void*)f_3195},
{"f_1418:extras_2escm",(void*)f_1418},
{"f_1922:extras_2escm",(void*)f_1922},
{"f_2193:extras_2escm",(void*)f_2193},
{"f_3001:extras_2escm",(void*)f_3001},
{"f_3005:extras_2escm",(void*)f_3005},
{"f_2167:extras_2escm",(void*)f_2167},
{"f_3013:extras_2escm",(void*)f_3013},
{"f_3017:extras_2escm",(void*)f_3017},
{"f_3583:extras_2escm",(void*)f_3583},
{"f_3019:extras_2escm",(void*)f_3019},
{"f_1434:extras_2escm",(void*)f_1434},
{"f_1861:extras_2escm",(void*)f_1861},
{"f_1864:extras_2escm",(void*)f_1864},
{"f_2039:extras_2escm",(void*)f_2039},
{"f_3022:extras_2escm",(void*)f_3022},
{"f_3481:extras_2escm",(void*)f_3481},
{"f_1932:extras_2escm",(void*)f_1932},
{"f_2189:extras_2escm",(void*)f_2189},
{"f_1615:extras_2escm",(void*)f_1615},
{"f_1882:extras_2escm",(void*)f_1882},
{"f_1887:extras_2escm",(void*)f_1887},
{"f_1446:extras_2escm",(void*)f_1446},
{"f_1268:extras_2escm",(void*)f_1268},
{"f_1299:extras_2escm",(void*)f_1299},
{"f_1291:extras_2escm",(void*)f_1291},
{"f_2412:extras_2escm",(void*)f_2412},
{"f_2173:extras_2escm",(void*)f_2173},
{"f_2416:extras_2escm",(void*)f_2416},
{"f_2287:extras_2escm",(void*)f_2287},
{"f_2284:extras_2escm",(void*)f_2284},
{"f_1350:extras_2escm",(void*)f_1350},
{"f_3395:extras_2escm",(void*)f_3395},
{"f_1530:extras_2escm",(void*)f_1530},
{"f_3240:extras_2escm",(void*)f_3240},
{"f_3399:extras_2escm",(void*)f_3399},
{"f_1340:extras_2escm",(void*)f_1340},
{"f_2365:extras_2escm",(void*)f_2365},
{"f_3382:extras_2escm",(void*)f_3382},
{"f_2361:extras_2escm",(void*)f_2361},
{"f_3384:extras_2escm",(void*)f_3384},
{"f_2268:extras_2escm",(void*)f_2268},
{"f_3215:extras_2escm",(void*)f_3215},
{"f_3388:extras_2escm",(void*)f_3388},
{"f_1213:extras_2escm",(void*)f_1213},
{"f_2275:extras_2escm",(void*)f_2275},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
o|eliminated procedure checks: 37 
o|specializations:
o|  11 (eqv? (not float) *)
o|  1 (current-output-port)
o|  4 (make-string fixnum char)
o|  1 (assq * (list-of pair))
o|  2 (char<? char char)
o|  3 (char=? char char)
o|  5 (car pair)
o|  13 (cdr pair)
o|  1 (make-string fixnum)
o|  4 (##sys#check-output-port * * *)
o|  24 (eqv? * (not float))
o|  7 (##sys#check-input-port * * *)
o|  1 (fp/ float float)
(o e)|safe calls: 309 
(o e)|assignments to immediate values: 7 
o|Removed `not' forms: 5 
o|inlining procedure: k1057 
o|inlining procedure: k1057 
o|inlining procedure: k1084 
o|inlining procedure: k1084 
o|inlining procedure: k1090 
o|inlining procedure: k1090 
o|substituted constant variable: a1158 
o|inlining procedure: k1168 
o|inlining procedure: k1168 
o|substituted constant variable: a1187 
o|substituted constant variable: a1188 
o|inlining procedure: k1192 
o|inlining procedure: k1192 
o|inlining procedure: k1215 
o|inlining procedure: k1215 
o|inlining procedure: k1233 
o|inlining procedure: k1233 
o|inlining procedure: k1242 
o|inlining procedure: k1242 
o|inlining procedure: k1260 
o|inlining procedure: k1260 
o|substituted constant variable: a1301 
o|substituted constant variable: a1303 
o|inlining procedure: k1311 
o|inlining procedure: k1311 
o|inlining procedure: k1352 
o|inlining procedure: k1352 
o|inlining procedure: k1384 
o|substituted constant variable: a1394 
o|substituted constant variable: a1395 
o|inlining procedure: k1384 
o|substituted constant variable: a1424 
o|substituted constant variable: a1425 
o|inlining procedure: k1448 
o|inlining procedure: k1448 
o|inlining procedure: k1472 
o|inlining procedure: k1472 
o|inlining procedure: k1531 
o|inlining procedure: k1531 
o|substituted constant variable: a1593 
o|substituted constant variable: a1594 
o|substituted constant variable: a1658 
o|substituted constant variable: a1659 
o|inlining procedure: k1660 
o|inlining procedure: k1660 
o|inlining procedure: k1696 
o|inlining procedure: k1696 
o|substituted constant variable: a1711 
o|inlining procedure: k1724 
o|inlining procedure: k1724 
o|substituted constant variable: a1761 
o|substituted constant variable: a1762 
o|inlining procedure: k1766 
o|inlining procedure: k1766 
o|substituted constant variable: a1789 
o|substituted constant variable: a1790 
o|inlining procedure: k1803 
o|inlining procedure: k1803 
o|contracted procedure: k1822 
o|substituted constant variable: a1847 
o|substituted constant variable: a1848 
o|inlining procedure: k1859 
o|inlining procedure: k1859 
o|inlining procedure: k1892 
o|inlining procedure: k1892 
o|substituted constant variable: a1928 
o|substituted constant variable: a1929 
o|inlining procedure: k1933 
o|inlining procedure: k1933 
o|substituted constant variable: a1958 
o|substituted constant variable: a1959 
o|inlining procedure: k1997 
o|contracted procedure: "(extras.scm:279) length1?363" 
o|inlining procedure: k1982 
o|inlining procedure: k1982 
o|inlining procedure: k1997 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|substituted constant variable: a2025 
o|substituted constant variable: a2027 
o|substituted constant variable: a2029 
o|substituted constant variable: a2031 
o|inlining procedure: k2045 
o|inlining procedure: k2045 
o|inlining procedure: k2057 
o|inlining procedure: k2057 
o|substituted constant variable: a2070 
o|substituted constant variable: a2072 
o|substituted constant variable: a2074 
o|substituted constant variable: a2076 
o|inlining procedure: k2080 
o|inlining procedure: k2080 
o|inlining procedure: k2102 
o|inlining procedure: "(extras.scm:300) read-macro-body357" 
o|inlining procedure: k2102 
o|inlining procedure: k2129 
o|contracted procedure: k2150 
o|inlining procedure: k2147 
o|inlining procedure: k2174 
o|inlining procedure: k2174 
o|inlining procedure: k2147 
o|inlining procedure: k2129 
o|inlining procedure: k2206 
o|inlining procedure: k2206 
o|inlining procedure: k2224 
o|inlining procedure: k2224 
o|inlining procedure: k2250 
o|inlining procedure: k2260 
o|inlining procedure: k2260 
o|inlining procedure: k2250 
o|inlining procedure: k2276 
o|inlining procedure: k2276 
o|inlining procedure: k2308 
o|inlining procedure: k2330 
o|substituted constant variable: a2343 
o|substituted constant variable: a2370 
o|inlining procedure: k2366 
o|substituted constant variable: a2390 
o|inlining procedure: k2391 
o|inlining procedure: k2391 
o|substituted constant variable: a2426 
o|inlining procedure: k2366 
o|substituted constant variable: a2443 
o|substituted constant variable: a2445 
o|inlining procedure: k2330 
o|inlining procedure: k2308 
o|inlining procedure: k2470 
o|substituted constant variable: a2480 
o|inlining procedure: k2470 
o|inlining procedure: k2506 
o|inlining procedure: k2506 
o|inlining procedure: k2539 
o|inlining procedure: k2539 
o|substituted constant variable: a2552 
o|inlining procedure: k2554 
o|inlining procedure: k2554 
o|inlining procedure: k2570 
o|inlining procedure: k2570 
o|inlining procedure: k2598 
o|inlining procedure: k2598 
o|inlining procedure: k2633 
o|inlining procedure: k2633 
o|inlining procedure: k2665 
o|inlining procedure: k2665 
o|inlining procedure: k2694 
o|inlining procedure: k2694 
o|inlining procedure: k2727 
o|inlining procedure: k2736 
o|inlining procedure: k2736 
o|substituted constant variable: a2749 
o|substituted constant variable: a2750 
o|inlining procedure: k2727 
o|inlining procedure: k2761 
o|inlining procedure: k2789 
o|inlining procedure: k2789 
o|substituted constant variable: max-expr-width498 
o|inlining procedure: k2761 
o|inlining procedure: k2848 
o|inlining procedure: "(extras.scm:434) read-macro-body357" 
o|inlining procedure: k2848 
o|inlining procedure: k2881 
o|inlining procedure: k2881 
o|substituted constant variable: max-call-head-width497 
o|inlining procedure: k2916 
o|inlining procedure: k2916 
o|inlining procedure: k2954 
o|inlining procedure: k2986 
o|inlining procedure: k2986 
o|inlining procedure: k2954 
o|inlining procedure: k3024 
o|inlining procedure: k3024 
o|inlining procedure: k3063 
o|inlining procedure: k3063 
o|inlining procedure: k3112 
o|substituted constant variable: indent-general496 
o|inlining procedure: k3112 
o|substituted constant variable: indent-general496 
o|inlining procedure: k3232 
o|inlining procedure: k3232 
o|inlining procedure: k3250 
o|inlining procedure: k3250 
o|inlining procedure: k3262 
o|inlining procedure: k3262 
o|inlining procedure: k3277 
o|inlining procedure: k3277 
o|substituted constant variable: a3290 
o|substituted constant variable: a3292 
o|substituted constant variable: a3294 
o|substituted constant variable: a3299 
o|substituted constant variable: a3301 
o|substituted constant variable: a3303 
o|substituted constant variable: a3305 
o|substituted constant variable: a3310 
o|substituted constant variable: a3312 
o|inlining procedure: k3316 
o|inlining procedure: k3316 
o|inlining procedure: k3328 
o|inlining procedure: k3328 
o|substituted constant variable: a3335 
o|substituted constant variable: a3337 
o|substituted constant variable: a3339 
o|substituted constant variable: a3341 
o|substituted constant variable: a3343 
o|inlining procedure: k3347 
o|substituted constant variable: a3361 
o|substituted constant variable: a3362 
o|inlining procedure: k3347 
o|contracted procedure: k3409 
o|inlining procedure: k3406 
o|contracted procedure: k3418 
o|inlining procedure: k3406 
o|inlining procedure: k3451 
o|inlining procedure: k3451 
o|inlining procedure: k3470 
o|inlining procedure: k3470 
o|inlining procedure: k3494 
o|inlining procedure: k3494 
o|inlining procedure: k3520 
o|inlining procedure: k3520 
o|inlining procedure: k3550 
o|inlining procedure: k3550 
o|inlining procedure: k3584 
o|inlining procedure: k3584 
o|inlining procedure: k3611 
o|inlining procedure: k3611 
o|inlining procedure: k3632 
o|inlining procedure: k3648 
o|inlining procedure: k3648 
o|inlining procedure: k3632 
o|substituted constant variable: a3672 
o|substituted constant variable: a3674 
o|substituted constant variable: a3676 
o|substituted constant variable: a3678 
o|substituted constant variable: a3680 
o|substituted constant variable: a3682 
o|substituted constant variable: a3684 
o|substituted constant variable: a3686 
o|substituted constant variable: a3688 
o|substituted constant variable: a3690 
o|substituted constant variable: a3692 
o|substituted constant variable: a3712 
o|contracted procedure: k3742 
o|inlining procedure: k3739 
o|inlining procedure: k3751 
o|propagated global variable: r37523965 sprintf 
o|inlining procedure: k3751 
o|inlining procedure: k3739 
o|propagated global variable: r37403967 sprintf 
o|replaced variables: 575 
o|removed binding forms: 131 
o|substituted constant variable: r10853780 
o|converted assignments to bindings: (slurp83) 
o|substituted constant variable: r11693783 
o|substituted constant variable: r13123796 
o|converted assignments to bindings: (doread144) 
o|substituted constant variable: r14493801 
o|substituted constant variable: r17673822 
o|substituted constant variable: r19833835 
o|substituted constant variable: r19983836 
o|removed side-effect free assignment to unused variable: read-macro-body357 
o|substituted constant variable: r20463839 
o|substituted constant variable: r20583841 
o|substituted constant variable: r20813844 
o|substituted constant variable: r22613863 
o|substituted constant variable: r22613863 
o|substituted constant variable: r22613865 
o|substituted constant variable: r22613865 
o|substituted constant variable: r25403884 
o|substituted constant variable: r25403884 
o|substituted constant variable: r25403886 
o|substituted constant variable: r25403886 
o|substituted constant variable: r27373902 
o|substituted constant variable: r27283903 
o|substituted constant variable: r29173918 
o|substituted constant variable: r29553922 
o|removed side-effect free assignment to unused variable: indent-general496 
o|removed side-effect free assignment to unused variable: max-call-head-width497 
o|removed side-effect free assignment to unused variable: max-expr-width498 
o|inlining procedure: k3479 
o|inlining procedure: k3739 
o|propagated global variable: r37404028 printf 
o|propagated global variable: r37404028 printf 
o|inlining procedure: k3739 
o|propagated global variable: r37404030 sprintf 
o|propagated global variable: r37404030 sprintf 
o|inlining procedure: k3739 
o|propagated global variable: r37404032 fprintf 
o|propagated global variable: r37404032 fprintf 
o|propagated global variable: a37383968 sprintf 
o|simplifications: ((let . 2)) 
o|replaced variables: 13 
o|removed binding forms: 592 
o|inlining procedure: k3200 
o|inlining procedure: k3702 
o|replaced variables: 2 
o|removed binding forms: 53 
o|substituted constant variable: r32014056 
o|substituted constant variable: r37034063 
o|replaced variables: 2 
o|removed binding forms: 2 
o|removed conditional forms: 1 
o|removed binding forms: 4 
o|simplifications: ((if . 52) (##core#call . 269)) 
o|  call simplifications:
o|    apply	5
o|    char-upcase
o|    char-whitespace?	2
o|    ##sys#check-list
o|    <
o|    >	5
o|    -	5
o|    vector?	2
o|    boolean?	2
o|    symbol?	3
o|    procedure?
o|    char?
o|    ##sys#generic-structure?
o|    ##sys#byte
o|    fx>	2
o|    string-ref
o|    string-length	4
o|    +	12
o|    integer->char
o|    char->integer	3
o|    ##sys#size	4
o|    fx<=
o|    ##sys#setislot
o|    not	2
o|    fx<	7
o|    ##sys#check-string	4
o|    string?	3
o|    fx-	5
o|    pair?	17
o|    cadr	3
o|    ##sys#slot	20
o|    char=?
o|    fx=
o|    eq?	45
o|    ##sys#check-exact	7
o|    car	23
o|    null?	28
o|    cdr	10
o|    eof-object?	7
o|    fx>=	5
o|    fx+	16
o|    cons	5
o|contracted procedure: k1132 
o|contracted procedure: k1026 
o|contracted procedure: k1126 
o|contracted procedure: k1029 
o|contracted procedure: k1120 
o|contracted procedure: k1032 
o|contracted procedure: k1114 
o|contracted procedure: k1035 
o|contracted procedure: k1108 
o|contracted procedure: k1038 
o|contracted procedure: k1102 
o|contracted procedure: k1041 
o|contracted procedure: k1060 
o|contracted procedure: k1063 
o|contracted procedure: k1077 
o|contracted procedure: k1081 
o|contracted procedure: k1144 
o|contracted procedure: k1147 
o|contracted procedure: k1165 
o|contracted procedure: k1171 
o|contracted procedure: k1177 
o|contracted procedure: k1180 
o|contracted procedure: k1308 
o|contracted procedure: k1189 
o|contracted procedure: k1203 
o|contracted procedure: k1218 
o|contracted procedure: k1230 
o|contracted procedure: k1236 
o|contracted procedure: k1245 
o|contracted procedure: k1254 
o|contracted procedure: k1263 
o|contracted procedure: k1282 
o|contracted procedure: k1285 
o|contracted procedure: k1293 
o|contracted procedure: k1321 
o|contracted procedure: k1314 
o|contracted procedure: k1411 
o|contracted procedure: k1330 
o|contracted procedure: k1405 
o|contracted procedure: k1333 
o|contracted procedure: k1399 
o|contracted procedure: k1336 
o|contracted procedure: k1346 
o|contracted procedure: k1355 
o|contracted procedure: k1367 
o|contracted procedure: k1377 
o|contracted procedure: k1381 
o|contracted procedure: k1387 
o|contracted procedure: k1420 
o|contracted procedure: k1426 
o|contracted procedure: k1439 
o|contracted procedure: k1429 
o|contracted procedure: k1451 
o|contracted procedure: k1574 
o|contracted procedure: k1454 
o|contracted procedure: k1516 
o|contracted procedure: k1512 
o|contracted procedure: k1469 
o|contracted procedure: k1475 
o|contracted procedure: k1481 
o|contracted procedure: k1484 
o|contracted procedure: k1491 
o|contracted procedure: k1495 
o|contracted procedure: k1499 
o|contracted procedure: k1534 
o|contracted procedure: k1540 
o|contracted procedure: k1543 
o|contracted procedure: k1550 
o|contracted procedure: k1554 
o|contracted procedure: k1558 
o|contracted procedure: k1570 
o|contracted procedure: k1648 
o|contracted procedure: k1580 
o|contracted procedure: k1642 
o|contracted procedure: k1583 
o|contracted procedure: k1636 
o|contracted procedure: k1586 
o|contracted procedure: k1630 
o|contracted procedure: k1589 
o|contracted procedure: k1595 
o|contracted procedure: k1598 
o|contracted procedure: k1601 
o|contracted procedure: k1607 
o|contracted procedure: k1617 
o|contracted procedure: k1624 
o|contracted procedure: k1663 
o|contracted procedure: k1675 
o|contracted procedure: k1699 
o|contracted procedure: k1748 
o|contracted procedure: k1715 
o|contracted procedure: k1742 
o|contracted procedure: k1718 
o|contracted procedure: k1736 
o|contracted procedure: k1721 
o|contracted procedure: k1730 
o|contracted procedure: k1724 
o|contracted procedure: k1776 
o|contracted procedure: k1757 
o|contracted procedure: k1773 
o|contracted procedure: k1763 
o|contracted procedure: k1832 
o|contracted procedure: k1785 
o|contracted procedure: k1829 
o|contracted procedure: k1841 
o|contracted procedure: k1849 
o|contracted procedure: k1876 
o|contracted procedure: k1852 
o|contracted procedure: k1872 
o|contracted procedure: k1895 
o|contracted procedure: k1901 
o|contracted procedure: k1908 
o|contracted procedure: k1914 
o|contracted procedure: k1942 
o|contracted procedure: k1924 
o|contracted procedure: k1936 
o|contracted procedure: k1967 
o|contracted procedure: k1951 
o|contracted procedure: k1954 
o|contracted procedure: k1964 
o|contracted procedure: k1993 
o|contracted procedure: k2000 
o|contracted procedure: k1985 
o|contracted procedure: k2009 
o|contracted procedure: k2015 
o|contracted procedure: k2041 
o|contracted procedure: k2048 
o|contracted procedure: k2054 
o|contracted procedure: k2060 
o|contracted procedure: k2066 
o|contracted procedure: k2093 
o|contracted procedure: k2112 
o|contracted procedure: k2132 
o|contracted procedure: k2156 
o|contracted procedure: k2177 
o|contracted procedure: k2209 
o|contracted procedure: k2218 
o|contracted procedure: k2227 
o|contracted procedure: k2236 
o|contracted procedure: k2253 
o|contracted procedure: k2279 
o|contracted procedure: k2298 
o|contracted procedure: k2311 
o|contracted procedure: k2336 
o|contracted procedure: k2344 
o|contracted procedure: k2351 
o|contracted procedure: k2371 
o|contracted procedure: k2378 
o|contracted procedure: k2382 
o|contracted procedure: k2400 
o|contracted procedure: k2418 
o|contracted procedure: k2428 
o|contracted procedure: k2439 
o|contracted procedure: k2461 
o|contracted procedure: k2467 
o|contracted procedure: k2482 
o|contracted procedure: k2500 
o|contracted procedure: k2509 
o|contracted procedure: k2525 
o|contracted procedure: k2542 
o|contracted procedure: k2685 
o|contracted procedure: k2573 
o|contracted procedure: k2582 
o|contracted procedure: k2612 
o|contracted procedure: k2621 
o|contracted procedure: k2636 
o|contracted procedure: k2639 
o|contracted procedure: k2652 
o|contracted procedure: k2659 
o|contracted procedure: k2697 
o|contracted procedure: k2703 
o|contracted procedure: k2710 
o|contracted procedure: k2733 
o|contracted procedure: k2755 
o|contracted procedure: k2764 
o|contracted procedure: k2767 
o|contracted procedure: k2779 
o|contracted procedure: k2792 
o|contracted procedure: k2813 
o|contracted procedure: k2824 
o|contracted procedure: k2817 
o|contracted procedure: k2836 
o|contracted procedure: k2832 
o|contracted procedure: k2828 
o|contracted procedure: k2858 
o|contracted procedure: k2869 
o|contracted procedure: k2875 
o|contracted procedure: k2900 
o|contracted procedure: k2890 
o|contracted procedure: k2925 
o|contracted procedure: k2929 
o|contracted procedure: k2960 
o|contracted procedure: k2980 
o|contracted procedure: k2964 
o|contracted procedure: k2989 
o|contracted procedure: k3007 
o|contracted procedure: k3027 
o|contracted procedure: k3030 
o|contracted procedure: k3048 
o|contracted procedure: k3034 
o|contracted procedure: k3066 
o|contracted procedure: k3069 
o|contracted procedure: k3087 
o|contracted procedure: k3073 
o|contracted procedure: k3105 
o|contracted procedure: k3115 
o|contracted procedure: k3118 
o|contracted procedure: k3129 
o|contracted procedure: k3133 
o|contracted procedure: k3144 
o|contracted procedure: k3148 
o|contracted procedure: k3197 
o|contracted procedure: k3206 
o|contracted procedure: k3200 
o|contracted procedure: k3235 
o|contracted procedure: k3244 
o|contracted procedure: k3247 
o|contracted procedure: k3253 
o|contracted procedure: k3259 
o|contracted procedure: k3265 
o|contracted procedure: k3268 
o|contracted procedure: k3274 
o|contracted procedure: k3280 
o|contracted procedure: k3286 
o|contracted procedure: k3313 
o|contracted procedure: k3319 
o|contracted procedure: k3325 
o|contracted procedure: k3389 
o|contracted procedure: k3429 
o|contracted procedure: k3435 
o|contracted procedure: k3438 
o|contracted procedure: k3445 
o|contracted procedure: k3457 
o|contracted procedure: k3461 
o|contracted procedure: k3473 
o|contracted procedure: k3696 
o|contracted procedure: k3485 
o|contracted procedure: k3491 
o|contracted procedure: k3497 
o|contracted procedure: k3510 
o|contracted procedure: k3523 
o|contracted procedure: k3536 
o|contracted procedure: k3553 
o|contracted procedure: k3570 
o|contracted procedure: k3587 
o|contracted procedure: k3596 
o|contracted procedure: k3605 
o|contracted procedure: k3614 
o|contracted procedure: k3623 
o|contracted procedure: k3626 
o|contracted procedure: k3635 
o|contracted procedure: k3651 
o|contracted procedure: k3662 
o|contracted procedure: k3748 
o|contracted procedure: k3754 
o|contracted procedure: k3758 
o|contracted procedure: k3768 
o|simplifications: ((let . 55)) 
o|removed binding forms: 256 
o|inlining procedure: k1141 
o|inlining procedure: k1604 
o|inlining procedure: k1604 
o|replaced variables: 130 
o|simplifications: ((if . 1)) 
o|replaced variables: 2 
o|removed binding forms: 58 
o|removed binding forms: 1 
o|direct leaf routine/allocation: read-macro-prefix358 0 
o|direct leaf routine/allocation: fetch693 0 
o|contracted procedure: "(extras.scm:300) k2120" 
o|contracted procedure: "(extras.scm:435) k2866" 
o|contracted procedure: "(extras.scm:604) k3476" 
o|contracted procedure: "(extras.scm:606) k3488" 
o|contracted procedure: "(extras.scm:624) k3642" 
o|contracted procedure: "(extras.scm:626) k3658" 
o|removed binding forms: 6 
o|direct leaf routine/allocation: skip716 0 
o|inlining procedure: k3479 
o|converted assignments to bindings: (skip716) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (fprintf0 k3397 rec688 next694 loop699 k3373 pp361 k3238 tail1558 tail3560 tail2559 indent480 loop540 pp-down485 style499 pp-call483 pp-general486 pr481 generic-write pp-list484 spaces479 doloop464465 g455456 k2333 g444445 loop421 wr-expr404 loop410 read-macro?356 wr-lst405 out359 wr360 k2003 def-n302318 def-port303316 body300308 k1862 loop289 loop242 k1613 k1528 loop190 loop175 loop146 k1183 k1275 loop121 g116117 doloop8586) 
o|calls to known targets: 195 
o|identified direct recursive calls: f_3646 1 
o|identified direct recursive calls: f_3468 1 
o|fast box initializations: 43 
o|fast global references: 5 
o|fast global assignments: 2 
o|dropping unused closure argument: f_1977 
o|dropping unused closure argument: f_1974 
o|dropping unused closure argument: f_2039 
o|dropping unused closure argument: f_3395 
*/
/* end of file */

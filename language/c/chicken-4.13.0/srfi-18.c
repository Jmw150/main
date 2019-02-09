/* Generated from srfi-18.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:51
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: srfi-18.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file srfi-18.c
   unit: srfi_2d18
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[113];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,31),40,99,111,109,112,117,116,101,45,116,105,109,101,45,108,105,109,105,116,32,116,109,57,49,32,108,111,99,57,50,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,14),40,99,117,114,114,101,110,116,45,116,105,109,101,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,20),40,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,57,57,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,20),40,115,101,99,111,110,100,115,45,62,116,105,109,101,32,110,49,48,50,41,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,12),40,116,105,109,101,63,32,120,49,48,53,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,30),40,106,111,105,110,45,116,105,109,101,111,117,116,45,101,120,99,101,112,116,105,111,110,63,32,120,49,48,56,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,33),40,97,98,97,110,100,111,110,101,100,45,109,117,116,101,120,45,101,120,99,101,112,116,105,111,110,63,32,120,49,49,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,35),40,116,101,114,109,105,110,97,116,101,100,45,116,104,114,101,97,100,45,101,120,99,101,112,116,105,111,110,63,32,120,49,49,52,41,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,26),40,117,110,99,97,117,103,104,116,45,101,120,99,101,112,116,105,111,110,63,32,120,49,49,55,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,19),40,97,56,54,49,32,46,32,114,101,115,117,108,116,115,49,50,52,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,6),40,97,56,53,53,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,32),40,109,97,107,101,45,116,104,114,101,97,100,32,116,104,117,110,107,49,50,49,32,46,32,110,97,109,101,49,50,50,41};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,14),40,116,104,114,101,97,100,63,32,120,49,50,57,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,16),40,99,117,114,114,101,110,116,45,116,104,114,101,97,100,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,24),40,116,104,114,101,97,100,45,115,116,97,116,101,32,116,104,114,101,97,100,49,51,50,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,37),40,116,104,114,101,97,100,45,115,112,101,99,105,102,105,99,45,115,101,116,33,32,116,104,114,101,97,100,49,51,53,32,120,49,51,54,41,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,26),40,116,104,114,101,97,100,45,113,117,97,110,116,117,109,32,116,104,114,101,97,100,49,52,50,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,36),40,116,104,114,101,97,100,45,113,117,97,110,116,117,109,45,115,101,116,33,32,116,104,114,101,97,100,49,52,53,32,113,49,52,54,41,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,18),40,116,104,114,101,97,100,45,110,97,109,101,32,120,49,53,48,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,25),40,116,104,114,101,97,100,45,115,116,97,114,116,33,32,116,104,114,101,97,100,49,53,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,7),40,97,49,48,50,55,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,17),40,97,49,48,49,50,32,114,101,116,117,114,110,49,55,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,37),40,116,104,114,101,97,100,45,106,111,105,110,33,32,116,104,114,101,97,100,49,54,48,32,46,32,116,105,109,101,111,117,116,49,54,49,41,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,29),40,116,104,114,101,97,100,45,116,101,114,109,105,110,97,116,101,33,32,116,104,114,101,97,100,49,57,49,41,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,7),40,97,49,50,51,52,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,17),40,97,49,50,50,53,32,114,101,116,117,114,110,50,48,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,27),40,116,104,114,101,97,100,45,115,117,115,112,101,110,100,33,32,116,104,114,101,97,100,50,48,48,41,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,26),40,116,104,114,101,97,100,45,114,101,115,117,109,101,33,32,116,104,114,101,97,100,50,48,54,41,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,7),40,97,49,50,56,51,41,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,17),40,97,49,50,55,49,32,114,101,116,117,114,110,50,49,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,21),40,116,104,114,101,97,100,45,115,108,101,101,112,33,32,116,109,50,49,48,41,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,13),40,109,117,116,101,120,63,32,120,50,50,48,41,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,24),40,109,97,107,101,45,109,117,116,101,120,32,46,32,116,109,112,50,50,53,50,50,54,41};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,17),40,109,117,116,101,120,45,110,97,109,101,32,120,50,51,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,25),40,109,117,116,101,120,45,115,112,101,99,105,102,105,99,32,109,117,116,101,120,50,51,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,35),40,109,117,116,101,120,45,115,112,101,99,105,102,105,99,45,115,101,116,33,32,109,117,116,101,120,50,51,57,32,120,50,52,48,41,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,22),40,109,117,116,101,120,45,115,116,97,116,101,32,109,117,116,101,120,50,52,51,41,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,8),40,115,119,105,116,99,104,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,7),40,99,104,101,99,107,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,8),40,97,115,115,105,103,110,41};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,7),40,97,49,53,53,52,41,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,17),40,97,49,52,48,49,32,114,101,116,117,114,110,50,54,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,36),40,109,117,116,101,120,45,108,111,99,107,33,32,109,117,116,101,120,50,53,51,32,46,32,109,115,45,97,110,100,45,116,50,53,52,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,7),40,97,49,55,51,52,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,7),40,97,49,55,55,50,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,17),40,97,49,54,51,50,32,114,101,116,117,114,110,51,49,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,41),40,109,117,116,101,120,45,117,110,108,111,99,107,33,32,109,117,116,101,120,51,48,52,32,46,32,99,118,97,114,45,97,110,100,45,116,111,51,48,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,32,46,32,110,97,109,101,51,52,57,41,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,26),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,63,32,120,51,53,49,41,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,31),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,110,97,109,101,32,99,118,51,53,51,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,35),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,115,112,101,99,105,102,105,99,32,99,118,51,53,54,41,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,45),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,115,112,101,99,105,102,105,99,45,115,101,116,33,32,99,118,51,53,57,32,120,51,54,48,41,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,36),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,115,105,103,110,97,108,33,32,99,118,97,114,51,54,51,41,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,55,54,32,103,51,56,51,51,57,50,41,0,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,39),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,98,114,111,97,100,99,97,115,116,33,32,99,118,97,114,51,55,51,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,7),40,97,50,48,48,57,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,33),40,116,104,114,101,97,100,45,115,105,103,110,97,108,33,32,116,104,114,101,97,100,51,57,57,32,101,120,110,52,48,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,24),40,35,35,115,121,115,35,114,101,97,100,45,112,114,111,109,112,116,45,104,111,111,107,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,40),40,116,104,114,101,97,100,45,119,97,105,116,45,102,111,114,45,105,47,111,33,32,102,100,52,50,51,32,46,32,116,109,112,52,50,50,52,50,52,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,17),40,97,50,49,49,49,32,116,104,114,101,97,100,49,51,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1873)
static void C_ccall f_1873(C_word c,C_word *av) C_noret;
C_noret_decl(f_1831)
static void C_ccall f_1831(C_word c,C_word *av) C_noret;
C_noret_decl(f_1615)
static void C_ccall f_1615(C_word c,C_word *av) C_noret;
C_noret_decl(f_1443)
static void C_ccall f_1443(C_word c,C_word *av) C_noret;
C_noret_decl(f_723)
static void C_ccall f_723(C_word c,C_word *av) C_noret;
C_noret_decl(f_1582)
static void C_ccall f_1582(C_word c,C_word *av) C_noret;
C_noret_decl(f_986)
static void C_ccall f_986(C_word c,C_word *av) C_noret;
C_noret_decl(f_1429)
static void C_fcall f_1429(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1108)
static void C_ccall f_1108(C_word c,C_word *av) C_noret;
C_noret_decl(f_755)
static void C_ccall f_755(C_word c,C_word *av) C_noret;
C_noret_decl(f_811)
static void C_ccall f_811(C_word c,C_word *av) C_noret;
C_noret_decl(f_1405)
static void C_fcall f_1405(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1402)
static void C_ccall f_1402(C_word c,C_word *av) C_noret;
C_noret_decl(f_827)
static void C_ccall f_827(C_word c,C_word *av) C_noret;
C_noret_decl(f_766)
static void C_ccall f_766(C_word c,C_word *av) C_noret;
C_noret_decl(f_1457)
static void C_ccall f_1457(C_word c,C_word *av) C_noret;
C_noret_decl(f_732)
static void C_ccall f_732(C_word c,C_word *av) C_noret;
C_noret_decl(f_847)
static void C_ccall f_847(C_word c,C_word *av) C_noret;
C_noret_decl(f_845)
static void C_ccall f_845(C_word c,C_word *av) C_noret;
C_noret_decl(f_740)
static void C_ccall f_740(C_word c,C_word *av) C_noret;
C_noret_decl(f_742)
static void C_ccall f_742(C_word c,C_word *av) C_noret;
C_noret_decl(f_856)
static void C_ccall f_856(C_word c,C_word *av) C_noret;
C_noret_decl(f_851)
static void C_ccall f_851(C_word c,C_word *av) C_noret;
C_noret_decl(f_1575)
static void C_ccall f_1575(C_word c,C_word *av) C_noret;
C_noret_decl(f_869)
static void C_ccall f_869(C_word c,C_word *av) C_noret;
C_noret_decl(f_862)
static void C_ccall f_862(C_word c,C_word *av) C_noret;
C_noret_decl(f_1388)
static void C_ccall f_1388(C_word c,C_word *av) C_noret;
C_noret_decl(f_1284)
static void C_ccall f_1284(C_word c,C_word *av) C_noret;
C_noret_decl(f_909)
static void C_ccall f_909(C_word c,C_word *av) C_noret;
C_noret_decl(f_900)
static void C_ccall f_900(C_word c,C_word *av) C_noret;
C_noret_decl(f_1291)
static void C_ccall f_1291(C_word c,C_word *av) C_noret;
C_noret_decl(f_1298)
static void C_ccall f_1298(C_word c,C_word *av) C_noret;
C_noret_decl(f_692)
static void C_ccall f_692(C_word c,C_word *av) C_noret;
C_noret_decl(f_1544)
static void C_ccall f_1544(C_word c,C_word *av) C_noret;
C_noret_decl(f_694)
static void C_fcall f_694(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1263)
static void C_ccall f_1263(C_word c,C_word *av) C_noret;
C_noret_decl(f_1550)
static void C_ccall f_1550(C_word c,C_word *av) C_noret;
C_noret_decl(f_1555)
static void C_ccall f_1555(C_word c,C_word *av) C_noret;
C_noret_decl(f_1226)
static void C_ccall f_1226(C_word c,C_word *av) C_noret;
C_noret_decl(f_1279)
static void C_ccall f_1279(C_word c,C_word *av) C_noret;
C_noret_decl(f_1272)
static void C_ccall f_1272(C_word c,C_word *av) C_noret;
C_noret_decl(f_1964)
static void C_ccall f_1964(C_word c,C_word *av) C_noret;
C_noret_decl(f_1235)
static void C_ccall f_1235(C_word c,C_word *av) C_noret;
C_noret_decl(f_1846)
static void C_ccall f_1846(C_word c,C_word *av) C_noret;
C_noret_decl(f_1241)
static void C_ccall f_1241(C_word c,C_word *av) C_noret;
C_noret_decl(f_1840)
static void C_ccall f_1840(C_word c,C_word *av) C_noret;
C_noret_decl(f_1977)
static void C_ccall f_1977(C_word c,C_word *av) C_noret;
C_noret_decl(f_1773)
static void C_ccall f_1773(C_word c,C_word *av) C_noret;
C_noret_decl(f_1345)
static void C_ccall f_1345(C_word c,C_word *av) C_noret;
C_noret_decl(f_1208)
static void C_ccall f_1208(C_word c,C_word *av) C_noret;
C_noret_decl(f_1419)
static void C_ccall f_1419(C_word c,C_word *av) C_noret;
C_noret_decl(f_1203)
static void C_ccall f_1203(C_word c,C_word *av) C_noret;
C_noret_decl(f_1855)
static void C_ccall f_1855(C_word c,C_word *av) C_noret;
C_noret_decl(f_1309)
static void C_ccall f_1309(C_word c,C_word *av) C_noret;
C_noret_decl(f_1088)
static void C_fcall f_1088(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1303)
static void C_ccall f_1303(C_word c,C_word *av) C_noret;
C_noret_decl(f_1354)
static void C_ccall f_1354(C_word c,C_word *av) C_noret;
C_noret_decl(f_1799)
static void C_ccall f_1799(C_word c,C_word *av) C_noret;
C_noret_decl(f_1999)
static void C_fcall f_1999(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1098)
static void C_ccall f_1098(C_word c,C_word *av) C_noret;
C_noret_decl(f_1313)
static void C_ccall f_1313(C_word c,C_word *av) C_noret;
C_noret_decl(f_2101)
static void C_ccall f_2101(C_word c,C_word *av) C_noret;
C_noret_decl(f_1067)
static void C_ccall f_1067(C_word c,C_word *av) C_noret;
C_noret_decl(f_1327)
static void C_ccall f_1327(C_word c,C_word *av) C_noret;
C_noret_decl(f_1378)
static void C_ccall f_1378(C_word c,C_word *av) C_noret;
C_noret_decl(f_1028)
static void C_ccall f_1028(C_word c,C_word *av) C_noret;
C_noret_decl(f_1023)
static void C_ccall f_1023(C_word c,C_word *av) C_noret;
C_noret_decl(f_1336)
static void C_ccall f_1336(C_word c,C_word *av) C_noret;
C_noret_decl(f_1041)
static void C_ccall f_1041(C_word c,C_word *av) C_noret;
C_noret_decl(f_1781)
static void C_ccall f_1781(C_word c,C_word *av) C_noret;
C_noret_decl(f_2112)
static void C_ccall f_2112(C_word c,C_word *av) C_noret;
C_noret_decl(f_1017)
static void C_ccall f_1017(C_word c,C_word *av) C_noret;
C_noret_decl(f_1013)
static void C_ccall f_1013(C_word c,C_word *av) C_noret;
C_noret_decl(f_2027)
static void C_ccall f_2027(C_word c,C_word *av) C_noret;
C_noret_decl(f_689)
static void C_ccall f_689(C_word c,C_word *av) C_noret;
C_noret_decl(f_1916)
static void C_ccall f_1916(C_word c,C_word *av) C_noret;
C_noret_decl(f_2044)
static void C_ccall f_2044(C_word c,C_word *av) C_noret;
C_noret_decl(f_2014)
static void C_ccall f_2014(C_word c,C_word *av) C_noret;
C_noret_decl(f_2010)
static void C_ccall f_2010(C_word c,C_word *av) C_noret;
C_noret_decl(f_956)
static void C_ccall f_956(C_word c,C_word *av) C_noret;
C_noret_decl(f_2067)
static void C_ccall f_2067(C_word c,C_word *av) C_noret;
C_noret_decl(f_2061)
static void C_ccall f_2061(C_word c,C_word *av) C_noret;
C_noret_decl(f_2091)
static void C_ccall f_2091(C_word c,C_word *av) C_noret;
C_noret_decl(f_1949)
static void C_ccall f_1949(C_word c,C_word *av) C_noret;
C_noret_decl(f_795)
static void C_ccall f_795(C_word c,C_word *av) C_noret;
C_noret_decl(f_920)
static void C_ccall f_920(C_word c,C_word *av) C_noret;
C_noret_decl(f_1954)
static void C_fcall f_1954(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_922)
static void C_ccall f_922(C_word c,C_word *av) C_noret;
C_noret_decl(f_931)
static void C_ccall f_931(C_word c,C_word *av) C_noret;
C_noret_decl(f_876)
static void C_ccall f_876(C_word c,C_word *av) C_noret;
C_noret_decl(f_779)
static void C_ccall f_779(C_word c,C_word *av) C_noret;
C_noret_decl(f_2077)
static void C_ccall f_2077(C_word c,C_word *av) C_noret;
C_noret_decl(f_770)
static void C_ccall f_770(C_word c,C_word *av) C_noret;
C_noret_decl(f_772)
static void C_ccall f_772(C_word c,C_word *av) C_noret;
C_noret_decl(f_2080)
static void C_ccall f_2080(C_word c,C_word *av) C_noret;
C_noret_decl(f_2083)
static void C_ccall f_2083(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d18_toplevel)
C_externexport void C_ccall C_srfi_2d18_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_897)
static void C_ccall f_897(C_word c,C_word *av) C_noret;
C_noret_decl(f_999)
static void C_ccall f_999(C_word c,C_word *av) C_noret;
C_noret_decl(f_891)
static void C_ccall f_891(C_word c,C_word *av) C_noret;
C_noret_decl(f_992)
static void C_ccall f_992(C_word c,C_word *av) C_noret;
C_noret_decl(f_1640)
static void C_ccall f_1640(C_word c,C_word *av) C_noret;
C_noret_decl(f_969)
static void C_ccall f_969(C_word c,C_word *av) C_noret;
C_noret_decl(f_963)
static void C_ccall f_963(C_word c,C_word *av) C_noret;
C_noret_decl(f_960)
static void C_fcall f_960(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1762)
static void C_ccall f_1762(C_word c,C_word *av) C_noret;
C_noret_decl(f_1658)
static void C_ccall f_1658(C_word c,C_word *av) C_noret;
C_noret_decl(f_1652)
static void C_fcall f_1652(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1655)
static void C_ccall f_1655(C_word c,C_word *av) C_noret;
C_noret_decl(f_1164)
static void C_ccall f_1164(C_word c,C_word *av) C_noret;
C_noret_decl(f_1735)
static void C_ccall f_1735(C_word c,C_word *av) C_noret;
C_noret_decl(f_1622)
static void C_fcall f_1622(C_word t0,C_word t1) C_noret;
C_noret_decl(f_947)
static void C_ccall f_947(C_word c,C_word *av) C_noret;
C_noret_decl(f_1171)
static void C_ccall f_1171(C_word c,C_word *av) C_noret;
C_noret_decl(f_1467)
static void C_ccall f_1467(C_word c,C_word *av) C_noret;
C_noret_decl(f_1464)
static void C_ccall f_1464(C_word c,C_word *av) C_noret;
C_noret_decl(f_1180)
static void C_ccall f_1180(C_word c,C_word *av) C_noret;
C_noret_decl(f_1864)
static void C_ccall f_1864(C_word c,C_word *av) C_noret;
C_noret_decl(f_1633)
static void C_ccall f_1633(C_word c,C_word *av) C_noret;
C_noret_decl(f_1823)
static void C_ccall f_1823(C_word c,C_word *av) C_noret;
C_noret_decl(f_1755)
static void C_ccall f_1755(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1429)
static void C_ccall trf_1429(C_word c,C_word *av) C_noret;
static void C_ccall trf_1429(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1429(t0,t1);}

C_noret_decl(trf_1405)
static void C_ccall trf_1405(C_word c,C_word *av) C_noret;
static void C_ccall trf_1405(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1405(t0,t1);}

C_noret_decl(trf_694)
static void C_ccall trf_694(C_word c,C_word *av) C_noret;
static void C_ccall trf_694(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_694(t0,t1,t2);}

C_noret_decl(trf_1088)
static void C_ccall trf_1088(C_word c,C_word *av) C_noret;
static void C_ccall trf_1088(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1088(t0,t1);}

C_noret_decl(trf_1999)
static void C_ccall trf_1999(C_word c,C_word *av) C_noret;
static void C_ccall trf_1999(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1999(t0,t1);}

C_noret_decl(trf_1954)
static void C_ccall trf_1954(C_word c,C_word *av) C_noret;
static void C_ccall trf_1954(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1954(t0,t1,t2);}

C_noret_decl(trf_960)
static void C_ccall trf_960(C_word c,C_word *av) C_noret;
static void C_ccall trf_960(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_960(t0,t1);}

C_noret_decl(trf_1652)
static void C_ccall trf_1652(C_word c,C_word *av) C_noret;
static void C_ccall trf_1652(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1652(t0,t1);}

C_noret_decl(trf_1622)
static void C_ccall trf_1622(C_word c,C_word *av) C_noret;
static void C_ccall trf_1622(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1622(t0,t1);}

/* condition-variable-signal! in k918 in k843 in k690 in k687 */
static void C_ccall f_1873(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1873,3,av);}
t3=C_i_check_structure_2(t2,lf[86],lf[95]);
t4=C_slot(t2,C_fix(2));
if(C_truep(C_i_nullp(t4))){
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_slot(t4,C_fix(0));
t6=C_slot(t5,C_fix(3));
t7=C_slot(t4,C_fix(1));
t8=C_i_setslot(t2,C_fix(2),t7);
t9=C_eqp(t6,lf[55]);
if(C_truep(t9)){
if(C_truep(t9)){
/* srfi-18.scm:416: ##sys#thread-basic-unblock! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[96]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[96]+1);
av2[1]=t1;
av2[2]=t5;
tp(3,av2);}}
else{
t10=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}
else{
t10=C_eqp(t6,lf[59]);
if(C_truep(t10)){
/* srfi-18.scm:416: ##sys#thread-basic-unblock! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[96]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[96]+1);
av2[1]=t1;
av2[2]=t5;
tp(3,av2);}}
else{
t11=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}}}

/* k1829 in make-condition-variable in k918 in k843 in k690 in k687 */
static void C_ccall f_1831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_1831,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_record4(&a,4,lf[86],t1,C_SCHEME_END_OF_LIST,C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* mutex-unlock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_1615,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+6);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_check_structure_2(t2,lf[71],lf[85]);
t5=*((C_word*)lf[30]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1622,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t3))){
t7=t3;
t8=t6;
f_1622(t8,C_u_i_car(t7));}
else{
t7=t6;
f_1622(t7,C_SCHEME_FALSE);}}

/* k1441 in check in a1401 in k1386 in mutex-lock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1443,2,av);}
/* srfi-18.scm:282: return */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k721 in compute-time-limit in k690 in k687 */
static void C_ccall f_723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_723,2,av);}
a=C_alloc(8);
t2=C_a_i_times(&a,2,((C_word*)t0)[2],C_fix(1000));
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_plus(&a,2,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1580 in a1554 in k1542 in a1401 in k1386 in mutex-lock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1582,2,av);}
/* srfi-18.scm:318: assign */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_1457(2,av2);}}

/* k984 in thread-start! in k918 in k843 in k690 in k687 */
static void C_ccall f_986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_986,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_960(t3,t2);}

/* check in a1401 in k1386 in mutex-lock! in k918 in k843 in k690 in k687 */
static void C_fcall f_1429(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_1429,2,t0,t1);}
a=C_alloc(11);
if(C_truep(C_slot(((C_word*)t0)[2],C_fix(4)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1443,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_a_i_list1(&a,1,t3);
t5=C_a_i_record3(&a,3,lf[17],lf[83],t4);
/* srfi-18.scm:282: ##sys#signal */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[15]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=t5;
tp(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1106 in k1086 in a1027 in k1015 in a1012 in k997 in thread-join! in k918 in k843 in k690 in k687 */
static void C_ccall f_1108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1108,2,av);}
/* srfi-18.scm:195: ##sys#schedule */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[27]+1);
av2[1]=((C_word*)t0)[2];
tp(2,av2);}}

/* seconds->time in k690 in k687 */
static void C_ccall f_755(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_755,3,av);}
a=C_alloc(6);
t3=C_i_check_number_2(t2,lf[10]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_766,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_770,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:66: ##sys#exact->inexact */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t5;
av2[2]=t2;
tp(3,av2);}}

/* terminated-thread-exception? in k690 in k687 */
static void C_ccall f_811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_811,3,av);}
if(C_truep(C_i_structurep(t2,lf[17]))){
t3=C_slot(t2,C_fix(1));
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_memq(lf[22],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* switch in a1401 in k1386 in mutex-lock! in k918 in k843 in k690 in k687 */
static void C_fcall f_1405(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_1405,2,t0,t1);}
a=C_alloc(7);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(11),((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1419,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[3],C_fix(3));
t5=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* srfi-18.scm:278: ##sys#append */
t6=*((C_word*)lf[82]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* a1401 in k1386 in mutex-lock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1402(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(34,c,2)))){
C_save_and_reclaim((void *)f_1402,3,av);}
a=C_alloc(34);
t3=*((C_word*)lf[30]+1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1405,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp));
t11=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1429,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp));
t12=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1457,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=t7,a[8]=((C_word)li39),tmp=(C_word)a,a+=9,tmp));
if(C_truep(C_slot(((C_word*)t0)[2],C_fix(5)))){
if(C_truep(((C_word*)t0)[5])){
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1544,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t9,a[6]=t5,a[7]=t1,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* srfi-18.scm:307: check */
t14=((C_word*)t7)[1];
f_1429(t14,t13);}
else{
t13=C_i_setslot(t3,C_fix(3),lf[59]);
t14=C_i_setslot(t3,C_fix(1),((C_word*)t9)[1]);
/* srfi-18.scm:324: switch */
t15=((C_word*)t5)[1];
f_1405(t15,t1);}}
else{
/* srfi-18.scm:305: assign */
t13=((C_word*)t9)[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=t1;
f_1457(2,av2);}}}

/* uncaught-exception? in k690 in k687 */
static void C_ccall f_827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_827,3,av);}
if(C_truep(C_i_structurep(t2,lf[17]))){
t3=C_slot(t2,C_fix(1));
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_memq(lf[24],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k764 in seconds->time in k690 in k687 */
static void C_ccall f_766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_766,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_record2(&a,2,lf[1],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* assign in a1401 in k1386 in mutex-lock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1457,2,av);}
a=C_alloc(9);
t2=C_i_set_i_slot(((C_word*)t0)[2],C_fix(11),C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1464,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* srfi-18.scm:285: check */
t4=((C_word*)((C_word*)t0)[7])[1];
f_1429(t4,t3);}

/* current-time in k690 in k687 */
static void C_ccall f_732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_732,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_740,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:58: current-milliseconds */
t3=*((C_word*)lf[2]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* make-thread in k843 in k690 in k687 */
static void C_ccall f_847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,5)))){
C_save_and_reclaim((void*)f_847,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+7);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_851,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_876,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(t3))){
t6=C_slot(t3,C_fix(0));
t7=C_slot(*((C_word*)lf[30]+1),C_fix(9));
/* srfi-18.scm:100: ##sys#make-thread */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t4;
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[32];
av2[4]=t6;
av2[5]=t7;
tp(6,av2);}}
else{
/* srfi-18.scm:103: gensym */
t6=*((C_word*)lf[33]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[34];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k843 in k690 in k687 */
static void C_ccall f_845(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_845,2,av);}
a=C_alloc(21);
t2=C_mutate2((C_word*)lf[25]+1 /* (set! uncaught-exception-reason ...) */,t1);
t3=C_mutate2((C_word*)lf[26]+1 /* (set! make-thread ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_847,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[35]+1 /* (set! thread? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_891,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[36]+1 /* (set! current-thread ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_897,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[37]+1 /* (set! thread-state ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_900,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[38]+1 /* (set! thread-specific-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_909,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_920,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2112,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:128: getter-with-setter */
t10=*((C_word*)lf[108]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t8;
av2[2]=t9;
av2[3]=*((C_word*)lf[38]+1);
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}

/* k738 in current-time in k690 in k687 */
static void C_ccall f_740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_740,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_record2(&a,2,lf[1],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* time->seconds in k690 in k687 */
static void C_ccall f_742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_742,3,av);}
t3=C_i_check_structure_2(t2,lf[1],lf[7]);
t4=C_slot(t2,C_fix(1));
/* srfi-18.scm:62: fp/ */
t5=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t4;
av2[3]=lf[9];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a855 in k849 in make-thread in k843 in k690 in k687 */
static void C_ccall f_856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_856,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_862,a[2]=((C_word*)t0)[2],a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:108: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
C_call_with_values(4,av2);}}

/* k849 in make-thread in k843 in k690 in k687 */
static void C_ccall f_851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_851,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_856,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp);
t4=C_i_setslot(t2,C_fix(1),t3);
t5=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k1573 in a1554 in k1542 in a1401 in k1386 in mutex-lock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1575,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),t1);
t3=C_i_set_i_slot(((C_word*)t0)[3],C_fix(11),C_SCHEME_FALSE);
/* srfi-18.scm:315: return */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[5];
av2[2]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k867 in a861 in a855 in k849 in make-thread in k843 in k690 in k687 */
static void C_ccall f_869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_869,2,av);}
/* srfi-18.scm:113: ##sys#schedule */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[27]+1);
av2[1]=((C_word*)t0)[2];
tp(2,av2);}}

/* a861 in a855 in k849 in make-thread in k843 in k690 in k687 */
static void C_ccall f_862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,3)))){
C_save_and_reclaim((void*)f_862,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=C_i_setslot(((C_word*)t0)[2],C_fix(2),t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_869,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:112: ##sys#thread-kill! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[29];
tp(4,av2);}}

/* k1386 in mutex-lock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1388(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1388,2,av);}
a=C_alloc(7);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_u_i_length(t3);
t5=C_fixnum_greaterp(t4,C_fix(1));
t6=t5;
t7=(C_truep(t6)?C_i_cadr(((C_word*)t0)[2]):C_SCHEME_FALSE);
t8=t7;
t9=(C_truep(t8)?C_i_check_structure_2(t8,lf[34],lf[81]):C_SCHEME_UNDEFINED);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1402,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=t8,a[5]=t2,a[6]=((C_word)li41),tmp=(C_word)a,a+=7,tmp);
/* srfi-18.scm:272: ##sys#call-with-current-continuation */{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t10;
C_call_cc(3,av2);}}

/* a1283 in a1271 in k1296 in k1289 in thread-sleep! in k918 in k843 in k690 in k687 */
static void C_ccall f_1284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1284,2,av);}
/* srfi-18.scm:232: return */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=C_SCHEME_UNDEFINED;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* thread-specific-set! in k843 in k690 in k687 */
static void C_ccall f_909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_909,4,av);}
t4=C_i_check_structure_2(t2,lf[34],lf[38]);
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_i_setslot(t2,C_fix(10),t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* thread-state in k843 in k690 in k687 */
static void C_ccall f_900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_900,3,av);}
t3=C_i_check_structure_2(t2,lf[34],lf[37]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(3));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1289 in thread-sleep! in k918 in k843 in k690 in k687 */
static void C_ccall f_1291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1291,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1298,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:236: compute-time-limit */
f_694(t2,((C_word*)t0)[3],lf[68]);}

/* k1296 in k1289 in thread-sleep! in k918 in k843 in k690 in k687 */
static void C_ccall f_1298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1298,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=t1;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1272,a[2]=t3,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:229: ##sys#call-with-current-continuation */{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=t2;
av2[2]=t4;
C_call_cc(3,av2);}}

/* k690 in k687 */
static void C_ccall f_692(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,4)))){
C_save_and_reclaim((void *)f_692,2,av);}
a=C_alloc(30);
t2=C_mutate2(&lf[0] /* (set! compute-time-limit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_694,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[6]+1 /* (set! current-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_732,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[7]+1 /* (set! time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_742,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[10]+1 /* (set! seconds->time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_755,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[13]+1 /* (set! time? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_772,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[14]+1 /* (set! raise ...) */,*((C_word*)lf[15]+1));
t8=C_mutate2((C_word*)lf[16]+1 /* (set! join-timeout-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_779,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[19]+1 /* (set! abandoned-mutex-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_795,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[21]+1 /* (set! terminated-thread-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_811,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[23]+1 /* (set! uncaught-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_827,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_845,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:92: condition-property-accessor */
t13=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t13;
av2[1]=t12;
av2[2]=lf[24];
av2[3]=lf[110];
((C_proc)(void*)(*((C_word*)t13+1)))(4,av2);}}

/* k1542 in a1401 in k1386 in mutex-lock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1544,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1555,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li40),tmp=(C_word)a,a+=7,tmp);
t3=C_i_setslot(((C_word*)t0)[2],C_fix(1),t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1550,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:319: ##sys#thread-block-for-timeout! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[60]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[60]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[8];
tp(4,av2);}}

/* compute-time-limit in k690 in k687 */
static void C_fcall f_694(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_694,3,t1,t2,t3);}
a=C_alloc(4);
t4=t2;
if(C_truep(t4)){
if(C_truep(C_i_structurep(t2,lf[1]))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_i_numberp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_723,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:51: current-milliseconds */
t6=*((C_word*)lf[2]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
/* srfi-18.scm:52: ##sys#signal-hook */
t5=*((C_word*)lf[3]+1);{
C_word av2[6];
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[4];
av2[3]=t3;
av2[4]=lf[5];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* thread-sleep! in k918 in k843 in k690 in k687 */
static void C_ccall f_1263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_1263,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1291,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1291(2,av2);}}
else{
/* srfi-18.scm:235: ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[4];
av2[3]=lf[68];
av2[4]=lf[69];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}

/* k1548 in k1542 in a1401 in k1386 in mutex-lock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1550,2,av);}
/* srfi-18.scm:320: switch */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1405(t2,((C_word*)t0)[3]);}

/* a1554 in k1542 in a1401 in k1386 in mutex-lock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1555,2,av);}
a=C_alloc(6);
if(C_truep(C_slot(((C_word*)t0)[2],C_fix(13)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1575,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(3));
/* srfi-18.scm:313: ##sys#delq */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[84]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
tp(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1582,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:317: ##sys#remove-from-timeout-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[51]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[51]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}

/* a1225 in thread-suspend! in k918 in k843 in k690 in k687 */
static void C_ccall f_1226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1226,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1235,a[2]=t2,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
t4=C_i_setslot(((C_word*)t0)[2],C_fix(1),t3);
/* srfi-18.scm:219: ##sys#schedule */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t1;
tp(2,av2);}}

/* k1277 in a1271 in k1296 in k1289 in thread-sleep! in k918 in k843 in k690 in k687 */
static void C_ccall f_1279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1279,2,av);}
/* srfi-18.scm:234: ##sys#schedule */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[27]+1);
av2[1]=((C_word*)t0)[2];
tp(2,av2);}}

/* a1271 in k1296 in k1289 in thread-sleep! in k918 in k843 in k690 in k687 */
static void C_ccall f_1272(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1272,3,av);}
a=C_alloc(7);
t3=*((C_word*)lf[30]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1284,a[2]=t2,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp);
t5=C_i_setslot(*((C_word*)lf[30]+1),C_fix(1),t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1279,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:233: ##sys#thread-block-for-timeout! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[60]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[60]+1);
av2[1]=t6;
av2[2]=*((C_word*)lf[30]+1);
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}

/* k1962 in for-each-loop376 in condition-variable-broadcast! in k918 in k843 in k690 in k687 */
static void C_ccall f_1964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1964,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1954(t3,((C_word*)t0)[4],t2);}

/* a1234 in a1225 in thread-suspend! in k918 in k843 in k690 in k687 */
static void C_ccall f_1235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1235,2,av);}
/* srfi-18.scm:218: return */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=C_SCHEME_UNDEFINED;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* condition-variable-name in k918 in k843 in k690 in k687 */
static void C_ccall f_1846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1846,3,av);}
t3=C_i_check_structure_2(t2,lf[86],lf[92]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* thread-resume! in k918 in k843 in k690 in k687 */
static void C_ccall f_1241(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1241,3,av);}
t3=C_i_check_structure_2(t2,lf[34],lf[67]);
t4=C_slot(t2,C_fix(3));
t5=C_eqp(t4,lf[66]);
if(C_truep(t5)){
t6=C_i_setslot(t2,C_fix(3),lf[44]);
/* srfi-18.scm:225: ##sys#add-to-ready-queue */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[45]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* condition-variable? in k918 in k843 in k690 in k687 */
static void C_ccall f_1840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1840,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[86]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* thread-signal! in k918 in k843 in k690 in k687 */
static void C_ccall f_1977(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1977,4,av);}
a=C_alloc(10);
t4=C_i_check_structure_2(t2,lf[34],lf[99]);
t5=C_eqp(t2,*((C_word*)lf[30]+1));
if(C_truep(t5)){
/* srfi-18.scm:436: ##sys#signal */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[15]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}
else{
t6=C_slot(t2,C_fix(1));
t7=t6;
t8=C_slot(t2,C_fix(11));
t9=t8;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1999,a[2]=t7,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_structurep(t9,lf[86]))){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2027,a[2]=t10,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t12=C_slot(t9,C_fix(2));
/* srfi-18.scm:441: ##sys#delq */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[84]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t11;
av2[2]=t2;
av2[3]=t12;
tp(4,av2);}}
else{
if(C_truep(C_i_structurep(t9,lf[71]))){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2044,a[2]=t10,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t12=C_slot(t9,C_fix(3));
/* srfi-18.scm:443: ##sys#delq */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[84]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t11;
av2[2]=t2;
av2[3]=t12;
tp(4,av2);}}
else{
if(C_truep(C_i_structurep(t9,lf[34]))){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2061,a[2]=t10,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t12=C_slot(t9,C_fix(12));
/* srfi-18.scm:445: ##sys#delq */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[84]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t11;
av2[2]=t2;
av2[3]=t12;
tp(4,av2);}}
else{
t11=t10;
f_1999(t11,C_SCHEME_UNDEFINED);}}}}}

/* a1772 in k1779 in k1650 in k1638 in a1632 in k1620 in mutex-unlock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1773,2,av);}
/* srfi-18.scm:362: return */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* mutex-specific-set! in k918 in k843 in k690 in k687 */
static void C_ccall f_1345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1345,4,av);}
t4=C_i_check_structure_2(t2,lf[71],lf[76]);
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_i_setslot(t2,C_fix(6),t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* thread-suspend! in k918 in k843 in k690 in k687 */
static void C_ccall f_1208(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1208,3,av);}
a=C_alloc(4);
t3=C_i_check_structure_2(t2,lf[34],lf[65]);
t4=C_i_setslot(t2,C_fix(3),lf[66]);
t5=C_eqp(t2,*((C_word*)lf[30]+1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1226,a[2]=t2,a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:216: ##sys#call-with-current-continuation */{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=0;
av2[1]=t1;
av2[2]=t6;
C_call_cc(3,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k1417 in switch in a1401 in k1386 in mutex-lock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1419(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1419,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),t1);
/* srfi-18.scm:279: ##sys#schedule */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[27]+1);
av2[1]=((C_word*)t0)[3];
tp(2,av2);}}

/* k1201 in thread-terminate! in k918 in k843 in k690 in k687 */
static void C_ccall f_1203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1203,2,av);}
/* srfi-18.scm:205: g192 */
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* condition-variable-specific in k918 in k843 in k690 in k687 */
static void C_ccall f_1855(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1855,3,av);}
t3=C_i_check_structure_2(t2,lf[86],lf[93]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(3));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* make-mutex in k918 in k843 in k690 in k687 */
static void C_ccall f_1309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,3)))){
C_save_and_reclaim((void*)f_1309,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1313,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* srfi-18.scm:243: gensym */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[71];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=C_i_car(t2);
/* srfi-18.scm:244: ##sys#make-mutex */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[73]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t1;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}}

/* k1086 in a1027 in k1015 in a1012 in k997 in thread-join! in k918 in k843 in k690 in k687 */
static void C_fcall f_1088(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,5)))){
C_save_and_reclaim_args((void *)trf_1088,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1098,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[5])){
/* srfi-18.scm:188: return */
t3=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}
else{
t3=C_a_i_record3(&a,3,lf[17],lf[56],C_SCHEME_END_OF_LIST);
/* srfi-18.scm:191: ##sys#signal */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[15]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=t3;
tp(3,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1108,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:194: ##sys#thread-block-for-termination! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[57]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[57]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[8];
tp(4,av2);}}}
else{
t2=C_slot(((C_word*)t0)[8],C_fix(3));
/* srfi-18.scm:197: ##sys#error */
t3=*((C_word*)lf[46]+1);{
C_word av2[6];
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[50];
av2[3]=lf[58];
av2[4]=((C_word*)t0)[7];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}

/* mutex? in k918 in k843 in k690 in k687 */
static void C_ccall f_1303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1303,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[71]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* mutex-state in k918 in k843 in k690 in k687 */
static void C_ccall f_1354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1354,3,av);}
t3=C_i_check_structure_2(t2,lf[71],lf[77]);
if(C_truep(C_slot(t2,C_fix(5)))){
t4=C_slot(t2,C_fix(2));
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=(C_truep(t4)?t4:lf[78]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_slot(t2,C_fix(4));
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=(C_truep(t4)?lf[79]:lf[80]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k1797 in k1638 in a1632 in k1620 in mutex-unlock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1799,2,av);}
t2=((C_word*)t0)[2];
f_1652(t2,C_i_setslot(((C_word*)t0)[3],C_fix(8),t1));}

/* k1997 in thread-signal! in k918 in k843 in k690 in k687 */
static void C_fcall f_1999(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1999,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2010,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp);
t3=C_i_setslot(((C_word*)t0)[4],C_fix(1),t2);
t4=C_i_setslot(((C_word*)t0)[4],C_fix(3),lf[55]);
/* srfi-18.scm:452: ##sys#thread-unblock! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[100]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[100]+1);
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k1096 in k1086 in a1027 in k1015 in a1012 in k997 in thread-join! in k918 in k843 in k690 in k687 */
static void C_ccall f_1098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1098,2,av);}
/* srfi-18.scm:188: return */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k1311 in make-mutex in k918 in k843 in k690 in k687 */
static void C_ccall f_1313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1313,2,av);}
/* srfi-18.scm:244: ##sys#make-mutex */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[73]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[73]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}

/* k2099 in thread-wait-for-i/o! in k918 in k843 in k690 in k687 */
static void C_ccall f_2101(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2101,2,av);}
/* srfi-18.scm:471: thread-yield! */
t2=*((C_word*)lf[48]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1065 in a1027 in k1015 in a1012 in k997 in thread-join! in k918 in k843 in k690 in k687 */
static void C_ccall f_1067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1067,2,av);}
/* srfi-18.scm:181: return */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* mutex-name in k918 in k843 in k690 in k687 */
static void C_ccall f_1327(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1327,3,av);}
t3=C_i_check_structure_2(t2,lf[71],lf[74]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* mutex-lock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_1378,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_check_structure_2(t2,lf[71],lf[81]);
t5=C_i_pairp(t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1388,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=C_i_car(t3);
/* srfi-18.scm:268: compute-time-limit */
f_694(t6,t7,lf[81]);}
else{
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_1388(2,av2);}}}

/* a1027 in k1015 in a1012 in k997 in thread-join! in k918 in k843 in k690 in k687 */
static void C_ccall f_1028(C_word c,C_word *av){
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
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_1028,2,av);}
a=C_alloc(14);
t2=C_slot(((C_word*)t0)[2],C_fix(3));
t3=C_eqp(t2,lf[29]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1041,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_slot(((C_word*)t0)[4],C_fix(13)))){
t5=C_slot(((C_word*)t0)[2],C_fix(2));{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=t5;
C_apply(4,av2);}}
else{
/* srfi-18.scm:178: ##sys#remove-from-timeout-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[51]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[51]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}
else{
t4=C_eqp(t2,lf[52]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1067,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_slot(((C_word*)t0)[2],C_fix(7));
t7=C_a_i_list2(&a,2,lf[53],t6);
t8=C_a_i_record3(&a,3,lf[17],lf[54],t7);
/* srfi-18.scm:182: ##sys#signal */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[15]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t5;
av2[2]=t8;
tp(3,av2);}}
else{
t5=C_eqp(t2,lf[55]);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1088,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t5)){
t7=t6;
f_1088(t7,t5);}
else{
t7=C_eqp(t2,lf[44]);
t8=t6;
f_1088(t8,(C_truep(t7)?t7:C_eqp(t2,lf[59])));}}}}

/* k1021 in k1015 in a1012 in k997 in thread-join! in k918 in k843 in k690 in k687 */
static void C_ccall f_1023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1023,2,av);}
/* srfi-18.scm:201: ##sys#schedule */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[27]+1);
av2[1]=((C_word*)t0)[2];
tp(2,av2);}}

/* mutex-specific in k918 in k843 in k690 in k687 */
static void C_ccall f_1336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1336,3,av);}
t3=C_i_check_structure_2(t2,lf[71],lf[75]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(6));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1039 in a1027 in k1015 in a1012 in k997 in thread-join! in k918 in k843 in k690 in k687 */
static void C_ccall f_1041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1041,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
C_apply(4,av2);}}

/* k1779 in k1650 in k1638 in a1632 in k1620 in mutex-unlock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1781,2,av);}
a=C_alloc(6);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(2),t1);
t3=C_i_setslot(((C_word*)t0)[3],C_fix(11),((C_word*)t0)[2]);
if(C_truep(((C_word*)t0)[4])){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1735,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word)li43),tmp=(C_word)a,a+=6,tmp);
t5=C_i_setslot(((C_word*)t0)[3],C_fix(1),t4);
/* srfi-18.scm:360: ##sys#thread-block-for-timeout! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[60]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[60]+1);
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1773,a[2]=((C_word*)t0)[5],a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp);
t5=C_i_setslot(((C_word*)t0)[3],C_fix(1),t4);
t6=((C_word*)t0)[6];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_i_setslot(((C_word*)t0)[3],C_fix(3),lf[59]);
f_1655(2,av2);}}}

/* a2111 in k843 in k690 in k687 */
static void C_ccall f_2112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2112,3,av);}
t3=C_i_check_structure_2(t2,lf[34],lf[39]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(10));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1015 in a1012 in k997 in thread-join! in k918 in k843 in k690 in k687 */
static void C_ccall f_1017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_1017,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1028,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li20),tmp=(C_word)a,a+=9,tmp);
t3=C_i_setslot(((C_word*)t0)[4],C_fix(1),t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1023,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:200: ##sys#thread-block-for-termination! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[57]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}

/* a1012 in k997 in thread-join! in k918 in k843 in k690 in k687 */
static void C_ccall f_1013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1013,3,av);}
a=C_alloc(9);
t3=*((C_word*)lf[30]+1);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1017,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[3])){
/* srfi-18.scm:171: ##sys#thread-block-for-timeout! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[60]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[60]+1);
av2[1]=t4;
av2[2]=*((C_word*)lf[30]+1);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_1017(2,av2);}}}

/* k2025 in thread-signal! in k918 in k843 in k690 in k687 */
static void C_ccall f_2027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2027,2,av);}
t2=((C_word*)t0)[2];
f_1999(t2,C_i_setslot(((C_word*)t0)[3],C_fix(2),t1));}

/* k687 */
static void C_ccall f_689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_689,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_692,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:36: register-feature! */
t3=*((C_word*)lf[111]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[112];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* condition-variable-broadcast! in k918 in k843 in k690 in k687 */
static void C_ccall f_1916(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1916,3,av);}
a=C_alloc(10);
t3=C_i_check_structure_2(t2,lf[86],lf[97]);
t4=C_slot(t2,C_fix(2));
t5=C_i_check_list_2(t4,lf[98]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1949,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1954,a[2]=t8,a[3]=((C_word)li53),tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_1954(t10,t6,t4);}

/* k2042 in thread-signal! in k918 in k843 in k690 in k687 */
static void C_ccall f_2044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2044,2,av);}
t2=((C_word*)t0)[2];
f_1999(t2,C_i_setslot(((C_word*)t0)[3],C_fix(3),t1));}

/* k2012 in a2009 in k1997 in thread-signal! in k918 in k843 in k690 in k687 */
static void C_ccall f_2014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2014,2,av);}
/* srfi-18.scm:450: old */
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a2009 in k1997 in thread-signal! in k918 in k843 in k690 in k687 */
static void C_ccall f_2010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2010,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2014,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:449: ##sys#signal */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[15]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* thread-start! in k918 in k843 in k690 in k687 */
static void C_ccall f_956(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_956,3,av);}
a=C_alloc(10);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_960,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_closurep(((C_word*)t3)[1]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_986,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:150: make-thread */
t6=*((C_word*)lf[26]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t3)[1];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=t4;
f_960(t5,C_i_check_structure_2(((C_word*)t3)[1],lf[34],lf[43]));}}

/* ##sys#read-prompt-hook in k918 in k843 in k690 in k687 */
static void C_ccall f_2067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2067,2,av);}
a=C_alloc(4);
t2=C_fudge(C_fix(12));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2077,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
f_2077(2,av2);}}
else{
/* srfi-18.scm:460: ##sys#tty-port? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[104]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[104]+1);
av2[1]=t3;
av2[2]=*((C_word*)lf[105]+1);
tp(3,av2);}}}

/* k2059 in thread-signal! in k918 in k843 in k690 in k687 */
static void C_ccall f_2061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2061,2,av);}
t2=((C_word*)t0)[2];
f_1999(t2,C_i_setslot(((C_word*)t0)[3],C_fix(12),t1));}

/* thread-wait-for-i/o! in k918 in k843 in k690 in k687 */
static void C_ccall f_2091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +3,c,4)))){
C_save_and_reclaim((void*)f_2091,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+3);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?lf[107]:C_i_car(t3));
t6=C_i_check_exact_2(t2,lf[106]);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2101,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:470: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[102]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[102]+1);
av2[1]=t7;
av2[2]=*((C_word*)lf[30]+1);
av2[3]=t2;
av2[4]=t5;
tp(5,av2);}}

/* k1947 in condition-variable-broadcast! in k918 in k843 in k690 in k687 */
static void C_ccall f_1949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1949,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_set_i_slot(((C_word*)t0)[3],C_fix(2),C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* abandoned-mutex-exception? in k690 in k687 */
static void C_ccall f_795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_795,3,av);}
if(C_truep(C_i_structurep(t2,lf[17]))){
t3=C_slot(t2,C_fix(1));
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_memq(lf[20],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k918 in k843 in k690 in k687 */
static void C_ccall f_920(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(82,c,4)))){
C_save_and_reclaim((void *)f_920,2,av);}
a=C_alloc(82);
t2=C_mutate2((C_word*)lf[39]+1 /* (set! thread-specific ...) */,t1);
t3=C_mutate2((C_word*)lf[40]+1 /* (set! thread-quantum ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_922,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[41]+1 /* (set! thread-quantum-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_931,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[42]+1 /* (set! thread-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_947,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[43]+1 /* (set! thread-start! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_956,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[48]+1 /* (set! thread-yield! ...) */,*((C_word*)lf[49]+1));
t8=C_mutate2((C_word*)lf[50]+1 /* (set! thread-join! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_992,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[61]+1 /* (set! thread-terminate! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1164,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[65]+1 /* (set! thread-suspend! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1208,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[67]+1 /* (set! thread-resume! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1241,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[68]+1 /* (set! thread-sleep! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1263,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[70]+1 /* (set! mutex? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1303,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[72]+1 /* (set! make-mutex ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1309,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[74]+1 /* (set! mutex-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1327,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[75]+1 /* (set! mutex-specific ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1336,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[76]+1 /* (set! mutex-specific-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1345,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[77]+1 /* (set! mutex-state ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1354,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[81]+1 /* (set! mutex-lock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1378,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[85]+1 /* (set! mutex-unlock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1615,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[90]+1 /* (set! make-condition-variable ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1823,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate2((C_word*)lf[91]+1 /* (set! condition-variable? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1840,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate2((C_word*)lf[92]+1 /* (set! condition-variable-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1846,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate2((C_word*)lf[93]+1 /* (set! condition-variable-specific ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1855,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate2((C_word*)lf[94]+1 /* (set! condition-variable-specific-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1864,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate2((C_word*)lf[95]+1 /* (set! condition-variable-signal! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1873,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate2((C_word*)lf[97]+1 /* (set! condition-variable-broadcast! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1916,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate2((C_word*)lf[99]+1 /* (set! thread-signal! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1977,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t29=*((C_word*)lf[101]+1);
t30=C_mutate2((C_word*)lf[101]+1 /* (set! ##sys#read-prompt-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2067,a[2]=t29,a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp));
t31=C_mutate2((C_word*)lf[106]+1 /* (set! thread-wait-for-i/o! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2091,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t32=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t32;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t32+1)))(2,av2);}}

/* for-each-loop376 in condition-variable-broadcast! in k918 in k843 in k690 in k687 */
static void C_fcall f_1954(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1954,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1964,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_slot(t4,C_fix(3));
t6=C_eqp(t5,lf[55]);
if(C_truep(t6)){
if(C_truep(t6)){
/* srfi-18.scm:425: ##sys#thread-basic-unblock! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[96]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[96]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}
else{
t7=C_slot(t2,C_fix(1));
t10=t1;
t11=t7;
t1=t10;
t2=t11;
goto loop;}}
else{
t7=C_eqp(t5,lf[59]);
if(C_truep(t7)){
/* srfi-18.scm:425: ##sys#thread-basic-unblock! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[96]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[96]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}
else{
t8=C_slot(t2,C_fix(1));
t10=t1;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* thread-quantum in k918 in k843 in k690 in k687 */
static void C_ccall f_922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_922,3,av);}
t3=C_i_check_structure_2(t2,lf[34],lf[40]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(9));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* thread-quantum-set! in k918 in k843 in k690 in k687 */
static void C_ccall f_931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_931,4,av);}
t4=C_i_check_structure_2(t2,lf[34],lf[41]);
t5=C_i_check_exact_2(t3,lf[41]);
t6=C_i_fixnum_max(t3,C_fix(10));
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_i_set_i_slot(t2,C_fix(9),t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k874 in make-thread in k843 in k690 in k687 */
static void C_ccall f_876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_876,2,av);}
t2=C_slot(*((C_word*)lf[30]+1),C_fix(9));
/* srfi-18.scm:100: ##sys#make-thread */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[32];
av2[4]=t1;
av2[5]=t2;
tp(6,av2);}}

/* join-timeout-exception? in k690 in k687 */
static void C_ccall f_779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_779,3,av);}
if(C_truep(C_i_structurep(t2,lf[17]))){
t3=C_slot(t2,C_fix(1));
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_memq(lf[18],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2075 in read-prompt-hook in k918 in k843 in k690 in k687 */
static void C_ccall f_2077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2077,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2080,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:461: old */
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k768 in seconds->time in k690 in k687 */
static void C_ccall f_770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_770,2,av);}
/* srfi-18.scm:66: fp* */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[9];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* time? in k690 in k687 */
static void C_ccall f_772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_772,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[1]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2078 in k2075 in read-prompt-hook in k918 in k843 in k690 in k687 */
static void C_ccall f_2080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2080,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2083,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:462: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[102]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[102]+1);
av2[1]=t2;
av2[2]=*((C_word*)lf[30]+1);
av2[3]=C_fix(0);
av2[4]=lf[103];
tp(5,av2);}}

/* k2081 in k2078 in k2075 in read-prompt-hook in k918 in k843 in k690 in k687 */
static void C_ccall f_2083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2083,2,av);}
/* srfi-18.scm:463: thread-yield! */
t2=*((C_word*)lf[48]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_srfi_2d18_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("srfi_2d18_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_srfi_2d18_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(768))){
C_save(t1);
C_rereclaim2(768*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,113);
lf[1]=C_h_intern(&lf[1],4,"time");
lf[2]=C_h_intern(&lf[2],20,"current-milliseconds");
lf[3]=C_h_intern(&lf[3],15,"\003syssignal-hook");
lf[4]=C_h_intern(&lf[4],11,"\000type-error");
lf[5]=C_decode_literal(C_heaptop,"\376B\000\000\030invalid timeout argument");
lf[6]=C_h_intern(&lf[6],12,"current-time");
lf[7]=C_h_intern(&lf[7],13,"time->seconds");
lf[8]=C_h_intern(&lf[8],3,"fp/");
lf[9]=C_decode_literal(C_heaptop,"\376U1000.0\000");
lf[10]=C_h_intern(&lf[10],13,"seconds->time");
lf[11]=C_h_intern(&lf[11],3,"fp\052");
lf[12]=C_h_intern(&lf[12],18,"\003sysexact->inexact");
lf[13]=C_h_intern(&lf[13],5,"time\077");
lf[14]=C_h_intern(&lf[14],5,"raise");
lf[15]=C_h_intern(&lf[15],10,"\003syssignal");
lf[16]=C_h_intern(&lf[16],23,"join-timeout-exception\077");
lf[17]=C_h_intern(&lf[17],9,"condition");
lf[18]=C_h_intern(&lf[18],22,"join-timeout-exception");
lf[19]=C_h_intern(&lf[19],26,"abandoned-mutex-exception\077");
lf[20]=C_h_intern(&lf[20],25,"abandoned-mutex-exception");
lf[21]=C_h_intern(&lf[21],28,"terminated-thread-exception\077");
lf[22]=C_h_intern(&lf[22],27,"terminated-thread-exception");
lf[23]=C_h_intern(&lf[23],19,"uncaught-exception\077");
lf[24]=C_h_intern(&lf[24],18,"uncaught-exception");
lf[25]=C_h_intern(&lf[25],25,"uncaught-exception-reason");
lf[26]=C_h_intern(&lf[26],11,"make-thread");
lf[27]=C_h_intern(&lf[27],12,"\003sysschedule");
lf[28]=C_h_intern(&lf[28],16,"\003systhread-kill!");
lf[29]=C_h_intern(&lf[29],4,"dead");
lf[30]=C_h_intern(&lf[30],18,"\003syscurrent-thread");
lf[31]=C_h_intern(&lf[31],15,"\003sysmake-thread");
lf[32]=C_h_intern(&lf[32],7,"created");
lf[33]=C_h_intern(&lf[33],6,"gensym");
lf[34]=C_h_intern(&lf[34],6,"thread");
lf[35]=C_h_intern(&lf[35],7,"thread\077");
lf[36]=C_h_intern(&lf[36],14,"current-thread");
lf[37]=C_h_intern(&lf[37],12,"thread-state");
lf[38]=C_h_intern(&lf[38],20,"thread-specific-set!");
lf[39]=C_h_intern(&lf[39],15,"thread-specific");
lf[40]=C_h_intern(&lf[40],14,"thread-quantum");
lf[41]=C_h_intern(&lf[41],19,"thread-quantum-set!");
lf[42]=C_h_intern(&lf[42],11,"thread-name");
lf[43]=C_h_intern(&lf[43],13,"thread-start!");
lf[44]=C_h_intern(&lf[44],5,"ready");
lf[45]=C_h_intern(&lf[45],22,"\003sysadd-to-ready-queue");
lf[46]=C_h_intern(&lf[46],9,"\003syserror");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000&thread cannot be started a second time");
lf[48]=C_h_intern(&lf[48],13,"thread-yield!");
lf[49]=C_h_intern(&lf[49],17,"\003systhread-yield!");
lf[50]=C_h_intern(&lf[50],12,"thread-join!");
lf[51]=C_h_intern(&lf[51],28,"\003sysremove-from-timeout-list");
lf[52]=C_h_intern(&lf[52],10,"terminated");
lf[53]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\022uncaught-exception\376\001\000\000\006reason");
lf[54]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\022uncaught-exception\376\377\016");
lf[55]=C_h_intern(&lf[55],7,"blocked");
lf[56]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\026join-timeout-exception\376\377\016");
lf[57]=C_h_intern(&lf[57],33,"\003systhread-block-for-termination!");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000.Internal scheduler error: unknown thread state");
lf[59]=C_h_intern(&lf[59],8,"sleeping");
lf[60]=C_h_intern(&lf[60],29,"\003systhread-block-for-timeout!");
lf[61]=C_h_intern(&lf[61],17,"thread-terminate!");
lf[62]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\033terminated-thread-exception\376\377\016");
lf[63]=C_h_intern(&lf[63],21,"\003sysprimordial-thread");
lf[64]=C_h_intern(&lf[64],16,"\003sysexit-handler");
lf[65]=C_h_intern(&lf[65],15,"thread-suspend!");
lf[66]=C_h_intern(&lf[66],9,"suspended");
lf[67]=C_h_intern(&lf[67],14,"thread-resume!");
lf[68]=C_h_intern(&lf[68],13,"thread-sleep!");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\030invalid timeout argument");
lf[70]=C_h_intern(&lf[70],6,"mutex\077");
lf[71]=C_h_intern(&lf[71],5,"mutex");
lf[72]=C_h_intern(&lf[72],10,"make-mutex");
lf[73]=C_h_intern(&lf[73],14,"\003sysmake-mutex");
lf[74]=C_h_intern(&lf[74],10,"mutex-name");
lf[75]=C_h_intern(&lf[75],14,"mutex-specific");
lf[76]=C_h_intern(&lf[76],19,"mutex-specific-set!");
lf[77]=C_h_intern(&lf[77],11,"mutex-state");
lf[78]=C_h_intern(&lf[78],9,"not-owned");
lf[79]=C_h_intern(&lf[79],9,"abandoned");
lf[80]=C_h_intern(&lf[80],13,"not-abandoned");
lf[81]=C_h_intern(&lf[81],11,"mutex-lock!");
lf[82]=C_h_intern(&lf[82],10,"\003sysappend");
lf[83]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\031abandoned-mutex-exception\376\377\016");
lf[84]=C_h_intern(&lf[84],8,"\003sysdelq");
lf[85]=C_h_intern(&lf[85],13,"mutex-unlock!");
lf[86]=C_h_intern(&lf[86],18,"condition-variable");
lf[87]=C_h_intern(&lf[87],7,"running");
lf[88]=C_h_intern(&lf[88],12,"mutex-unlock");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000.Internal scheduler error: unknown thread state");
lf[90]=C_h_intern(&lf[90],23,"make-condition-variable");
lf[91]=C_h_intern(&lf[91],19,"condition-variable\077");
lf[92]=C_h_intern(&lf[92],23,"condition-variable-name");
lf[93]=C_h_intern(&lf[93],27,"condition-variable-specific");
lf[94]=C_h_intern(&lf[94],32,"condition-variable-specific-set!");
lf[95]=C_h_intern(&lf[95],26,"condition-variable-signal!");
lf[96]=C_h_intern(&lf[96],25,"\003systhread-basic-unblock!");
lf[97]=C_h_intern(&lf[97],29,"condition-variable-broadcast!");
lf[98]=C_h_intern(&lf[98],8,"for-each");
lf[99]=C_h_intern(&lf[99],14,"thread-signal!");
lf[100]=C_h_intern(&lf[100],19,"\003systhread-unblock!");
lf[101]=C_h_intern(&lf[101],20,"\003sysread-prompt-hook");
lf[102]=C_h_intern(&lf[102],25,"\003systhread-block-for-i/o!");
lf[103]=C_h_intern(&lf[103],6,"\000input");
lf[104]=C_h_intern(&lf[104],13,"\003systty-port\077");
lf[105]=C_h_intern(&lf[105],18,"\003sysstandard-input");
lf[106]=C_h_intern(&lf[106],20,"thread-wait-for-i/o!");
lf[107]=C_h_intern(&lf[107],4,"\000all");
lf[108]=C_h_intern(&lf[108],18,"getter-with-setter");
lf[109]=C_h_intern(&lf[109],27,"condition-property-accessor");
lf[110]=C_h_intern(&lf[110],6,"reason");
lf[111]=C_h_intern(&lf[111],17,"register-feature!");
lf[112]=C_h_intern(&lf[112],7,"srfi-18");
C_register_lf2(lf,113,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_689,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_scheduler_toplevel(2,av2);}}

/* current-thread in k843 in k690 in k687 */
static void C_ccall f_897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_897,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=*((C_word*)lf[30]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k997 in thread-join! in k918 in k843 in k690 in k687 */
static void C_ccall f_999(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_999,2,av);}
a=C_alloc(7);
t2=t1;
t3=C_i_pairp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_slot(((C_word*)t0)[2],C_fix(1)):C_SCHEME_FALSE);
t5=(C_truep(t4)?C_i_pairp(t4):C_SCHEME_FALSE);
t6=t5;
t7=(C_truep(t6)?C_slot(t4,C_fix(0)):C_SCHEME_FALSE);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1013,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t6,a[5]=t8,a[6]=((C_word)li21),tmp=(C_word)a,a+=7,tmp);
/* srfi-18.scm:168: ##sys#call-with-current-continuation */{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t9;
C_call_cc(3,av2);}}

/* thread? in k843 in k690 in k687 */
static void C_ccall f_891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_891,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[34]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* thread-join! in k918 in k843 in k690 in k687 */
static void C_ccall f_992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_992,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_i_check_structure_2(t2,lf[34],lf[50]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_999,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t3))){
t6=C_slot(t3,C_fix(0));
/* srfi-18.scm:164: compute-time-limit */
f_694(t5,t6,lf[50]);}
else{
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_999(2,av2);}}}

/* k1638 in a1632 in k1620 in mutex-unlock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1640(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_1640,2,av);}
a=C_alloc(13);
t2=t1;
t3=C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),C_SCHEME_FALSE);
t4=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),C_SCHEME_FALSE);
t5=C_slot(((C_word*)t0)[2],C_fix(2));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1652,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t6)){
t8=C_i_set_i_slot(((C_word*)t0)[2],C_fix(2),C_SCHEME_FALSE);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1799,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t10=C_slot(t6,C_fix(8));
/* srfi-18.scm:344: ##sys#delq */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[84]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t9;
av2[2]=((C_word*)t0)[2];
av2[3]=t10;
tp(4,av2);}}
else{
t8=t7;
f_1652(t8,C_SCHEME_UNDEFINED);}}

/* k967 in k961 in k958 in thread-start! in k918 in k843 in k690 in k687 */
static void C_ccall f_969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_969,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k961 in k958 in thread-start! in k918 in k843 in k690 in k687 */
static void C_ccall f_963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_963,2,av);}
a=C_alloc(4);
t2=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(3),lf[44]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_969,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:155: ##sys#add-to-ready-queue */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[45]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
tp(3,av2);}}

/* k958 in thread-start! in k918 in k843 in k690 in k687 */
static void C_fcall f_960(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_960,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_963,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(3));
t4=C_eqp(lf[32],t3);
if(C_truep(t4)){
t5=t2;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_963(2,av2);}}
else{
/* srfi-18.scm:153: ##sys#error */
t5=*((C_word*)lf[46]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t2;
av2[2]=lf[43];
av2[3]=lf[47];
av2[4]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k1760 in a1734 in k1779 in k1650 in k1638 in a1632 in k1620 in mutex-unlock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1762(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1762,2,av);}
/* srfi-18.scm:359: return */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k1656 in k1653 in k1650 in k1638 in a1632 in k1620 in mutex-unlock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1658,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(3));
t3=C_eqp(t2,lf[87]);
if(C_truep(t3)){
/* srfi-18.scm:377: return */
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
/* srfi-18.scm:378: ##sys#schedule */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[27]+1);
av2[1]=((C_word*)t0)[4];
tp(2,av2);}}}

/* k1650 in k1638 in a1632 in k1620 in mutex-unlock! in k918 in k843 in k690 in k687 */
static void C_fcall f_1652(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,3)))){
C_save_and_reclaim_args((void *)trf_1652,2,t0,t1);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1655,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1781,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=C_slot(((C_word*)t0)[7],C_fix(2));
t5=C_a_i_list(&a,1,((C_word*)t0)[2]);
/* srfi-18.scm:346: ##sys#append */
t6=*((C_word*)lf[82]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_1655(2,av2);}}}

/* k1653 in k1650 in k1638 in a1632 in k1620 in mutex-unlock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1655(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_1655,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1658,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[5]))){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_1658(2,av2);}}
else{
t3=C_slot(((C_word*)t0)[5],C_fix(0));
t4=C_slot(t3,C_fix(3));
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=C_i_setslot(((C_word*)t0)[6],C_fix(3),t5);
t7=C_i_set_i_slot(((C_word*)t0)[6],C_fix(5),C_SCHEME_TRUE);
t8=C_eqp(t4,lf[55]);
t9=(C_truep(t8)?t8:C_eqp(t4,lf[59]));
if(C_truep(t9)){
t10=C_i_set_i_slot(t3,C_fix(11),C_SCHEME_FALSE);
/* srfi-18.scm:372: ##sys#add-to-ready-queue */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[45]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t2;
av2[2]=t3;
tp(3,av2);}}
else{
/* srfi-18.scm:374: ##sys#error */
t10=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t10;
av2[1]=t2;
av2[2]=lf[88];
av2[3]=lf[89];
av2[4]=t3;
av2[5]=t4;
((C_proc)(void*)(*((C_word*)t10+1)))(6,av2);}}}}

/* thread-terminate! in k918 in k843 in k690 in k687 */
static void C_ccall f_1164(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1164,3,av);}
a=C_alloc(7);
t3=C_i_check_structure_2(t2,lf[34],lf[61]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1171,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_eqp(t2,*((C_word*)lf[63]+1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1203,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm:206: ##sys#exit-handler */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[64]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[64]+1);
av2[1]=t6;
tp(2,av2);}}
else{
t6=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_1171(2,av2);}}}

/* a1734 in k1779 in k1650 in k1638 in a1632 in k1620 in mutex-unlock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1735,2,av);}
a=C_alloc(5);
t2=C_i_set_i_slot(((C_word*)t0)[2],C_fix(11),C_SCHEME_FALSE);
if(C_truep(C_slot(((C_word*)t0)[2],C_fix(13)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1755,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(((C_word*)t0)[3],C_fix(2));
/* srfi-18.scm:355: ##sys#delq */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[84]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=t4;
tp(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1762,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:358: ##sys#remove-from-timeout-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[51]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[51]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}

/* k1620 in mutex-unlock! in k918 in k843 in k690 in k687 */
static void C_fcall f_1622(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_1622,2,t0,t1);}
a=C_alloc(7);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_u_i_length(t3);
t5=C_fixnum_greaterp(t4,C_fix(1));
t6=(C_truep(t5)?C_i_cadr(((C_word*)t0)[2]):C_SCHEME_FALSE);
t7=t6;
t8=(C_truep(t2)?C_i_check_structure_2(t2,lf[86],lf[85]):C_SCHEME_UNDEFINED);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1633,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t7,a[6]=((C_word)li45),tmp=(C_word)a,a+=7,tmp);
/* srfi-18.scm:335: ##sys#call-with-current-continuation */{
C_word av2[3];
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=t9;
C_call_cc(3,av2);}}

/* thread-name in k918 in k843 in k690 in k687 */
static void C_ccall f_947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_947,3,av);}
t3=C_i_check_structure_2(t2,lf[34],lf[42]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(6));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1169 in thread-terminate! in k918 in k843 in k690 in k687 */
static void C_ccall f_1171(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1171,2,av);}
a=C_alloc(11);
t2=C_a_i_list1(&a,1,C_SCHEME_UNDEFINED);
t3=C_i_setslot(((C_word*)t0)[2],C_fix(2),t2);
t4=C_a_i_record3(&a,3,lf[17],lf[62],C_SCHEME_END_OF_LIST);
t5=C_i_setslot(((C_word*)t0)[2],C_fix(7),t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1180,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm:209: ##sys#thread-kill! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[52];
tp(4,av2);}}

/* k1465 in k1462 in assign in a1401 in k1386 in mutex-lock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1467,2,av);}
/* srfi-18.scm:302: return */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k1462 in assign in a1401 in k1386 in mutex-lock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1464(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1464,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1467,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_truep(((C_word*)t0)[4])?C_i_not(((C_word*)t0)[5]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),C_SCHEME_FALSE);
t5=C_i_set_i_slot(((C_word*)t0)[6],C_fix(5),C_SCHEME_TRUE);
/* srfi-18.scm:302: return */
t6=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}
else{
t4=(C_truep(((C_word*)t0)[5])?((C_word*)t0)[5]:((C_word*)t0)[7]);
t5=C_slot(t4,C_fix(3));
t6=C_eqp(lf[52],t5);
t7=(C_truep(t6)?t6:C_eqp(lf[29],t5));
if(C_truep(t7)){
t8=C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),C_SCHEME_FALSE);
t9=C_i_set_i_slot(((C_word*)t0)[6],C_fix(5),C_SCHEME_FALSE);
t10=C_i_set_i_slot(((C_word*)t0)[6],C_fix(4),C_SCHEME_TRUE);
/* srfi-18.scm:297: check */
t11=((C_word*)((C_word*)t0)[8])[1];
f_1429(t11,t2);}
else{
t8=C_i_setslot(((C_word*)t0)[6],C_fix(2),t4);
t9=C_i_set_i_slot(((C_word*)t0)[6],C_fix(5),C_SCHEME_TRUE);
t10=C_slot(t4,C_fix(8));
t11=C_a_i_cons(&a,2,((C_word*)t0)[6],t10);
t12=C_i_setslot(t4,C_fix(8),t11);
/* srfi-18.scm:302: return */
t13=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t13;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t13))(3,av2);}}}}

/* k1178 in k1169 in thread-terminate! in k918 in k843 in k690 in k687 */
static void C_ccall f_1180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1180,2,av);}
t2=C_eqp(((C_word*)t0)[2],*((C_word*)lf[30]+1));
if(C_truep(t2)){
/* srfi-18.scm:210: ##sys#schedule */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[27]+1);
av2[1]=((C_word*)t0)[3];
tp(2,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* condition-variable-specific-set! in k918 in k843 in k690 in k687 */
static void C_ccall f_1864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1864,4,av);}
t4=C_i_check_structure_2(t2,lf[86],lf[94]);
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_i_setslot(t2,C_fix(3),t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* a1632 in k1620 in mutex-unlock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1633(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1633,3,av);}
a=C_alloc(8);
t3=C_slot(((C_word*)t0)[2],C_fix(3));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1640,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=t4,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
/* srfi-18.scm:338: compute-time-limit */
f_694(t5,((C_word*)t0)[5],lf[85]);}
else{
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_1640(2,av2);}}}

/* make-condition-variable in k918 in k843 in k690 in k687 */
static void C_ccall f_1823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +8,c,2)))){
C_save_and_reclaim((void*)f_1823,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+8);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1831,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_car(t4);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_record4(&a,4,lf[86],t5,C_SCHEME_END_OF_LIST,C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
/* srfi-18.scm:388: gensym */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[86];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k1753 in a1734 in k1779 in k1650 in k1638 in a1632 in k1620 in mutex-unlock! in k918 in k843 in k690 in k687 */
static void C_ccall f_1755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1755,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(2),t1);
/* srfi-18.scm:356: return */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[122] = {
{"f_1873:srfi_2d18_2escm",(void*)f_1873},
{"f_1831:srfi_2d18_2escm",(void*)f_1831},
{"f_1615:srfi_2d18_2escm",(void*)f_1615},
{"f_1443:srfi_2d18_2escm",(void*)f_1443},
{"f_723:srfi_2d18_2escm",(void*)f_723},
{"f_1582:srfi_2d18_2escm",(void*)f_1582},
{"f_986:srfi_2d18_2escm",(void*)f_986},
{"f_1429:srfi_2d18_2escm",(void*)f_1429},
{"f_1108:srfi_2d18_2escm",(void*)f_1108},
{"f_755:srfi_2d18_2escm",(void*)f_755},
{"f_811:srfi_2d18_2escm",(void*)f_811},
{"f_1405:srfi_2d18_2escm",(void*)f_1405},
{"f_1402:srfi_2d18_2escm",(void*)f_1402},
{"f_827:srfi_2d18_2escm",(void*)f_827},
{"f_766:srfi_2d18_2escm",(void*)f_766},
{"f_1457:srfi_2d18_2escm",(void*)f_1457},
{"f_732:srfi_2d18_2escm",(void*)f_732},
{"f_847:srfi_2d18_2escm",(void*)f_847},
{"f_845:srfi_2d18_2escm",(void*)f_845},
{"f_740:srfi_2d18_2escm",(void*)f_740},
{"f_742:srfi_2d18_2escm",(void*)f_742},
{"f_856:srfi_2d18_2escm",(void*)f_856},
{"f_851:srfi_2d18_2escm",(void*)f_851},
{"f_1575:srfi_2d18_2escm",(void*)f_1575},
{"f_869:srfi_2d18_2escm",(void*)f_869},
{"f_862:srfi_2d18_2escm",(void*)f_862},
{"f_1388:srfi_2d18_2escm",(void*)f_1388},
{"f_1284:srfi_2d18_2escm",(void*)f_1284},
{"f_909:srfi_2d18_2escm",(void*)f_909},
{"f_900:srfi_2d18_2escm",(void*)f_900},
{"f_1291:srfi_2d18_2escm",(void*)f_1291},
{"f_1298:srfi_2d18_2escm",(void*)f_1298},
{"f_692:srfi_2d18_2escm",(void*)f_692},
{"f_1544:srfi_2d18_2escm",(void*)f_1544},
{"f_694:srfi_2d18_2escm",(void*)f_694},
{"f_1263:srfi_2d18_2escm",(void*)f_1263},
{"f_1550:srfi_2d18_2escm",(void*)f_1550},
{"f_1555:srfi_2d18_2escm",(void*)f_1555},
{"f_1226:srfi_2d18_2escm",(void*)f_1226},
{"f_1279:srfi_2d18_2escm",(void*)f_1279},
{"f_1272:srfi_2d18_2escm",(void*)f_1272},
{"f_1964:srfi_2d18_2escm",(void*)f_1964},
{"f_1235:srfi_2d18_2escm",(void*)f_1235},
{"f_1846:srfi_2d18_2escm",(void*)f_1846},
{"f_1241:srfi_2d18_2escm",(void*)f_1241},
{"f_1840:srfi_2d18_2escm",(void*)f_1840},
{"f_1977:srfi_2d18_2escm",(void*)f_1977},
{"f_1773:srfi_2d18_2escm",(void*)f_1773},
{"f_1345:srfi_2d18_2escm",(void*)f_1345},
{"f_1208:srfi_2d18_2escm",(void*)f_1208},
{"f_1419:srfi_2d18_2escm",(void*)f_1419},
{"f_1203:srfi_2d18_2escm",(void*)f_1203},
{"f_1855:srfi_2d18_2escm",(void*)f_1855},
{"f_1309:srfi_2d18_2escm",(void*)f_1309},
{"f_1088:srfi_2d18_2escm",(void*)f_1088},
{"f_1303:srfi_2d18_2escm",(void*)f_1303},
{"f_1354:srfi_2d18_2escm",(void*)f_1354},
{"f_1799:srfi_2d18_2escm",(void*)f_1799},
{"f_1999:srfi_2d18_2escm",(void*)f_1999},
{"f_1098:srfi_2d18_2escm",(void*)f_1098},
{"f_1313:srfi_2d18_2escm",(void*)f_1313},
{"f_2101:srfi_2d18_2escm",(void*)f_2101},
{"f_1067:srfi_2d18_2escm",(void*)f_1067},
{"f_1327:srfi_2d18_2escm",(void*)f_1327},
{"f_1378:srfi_2d18_2escm",(void*)f_1378},
{"f_1028:srfi_2d18_2escm",(void*)f_1028},
{"f_1023:srfi_2d18_2escm",(void*)f_1023},
{"f_1336:srfi_2d18_2escm",(void*)f_1336},
{"f_1041:srfi_2d18_2escm",(void*)f_1041},
{"f_1781:srfi_2d18_2escm",(void*)f_1781},
{"f_2112:srfi_2d18_2escm",(void*)f_2112},
{"f_1017:srfi_2d18_2escm",(void*)f_1017},
{"f_1013:srfi_2d18_2escm",(void*)f_1013},
{"f_2027:srfi_2d18_2escm",(void*)f_2027},
{"f_689:srfi_2d18_2escm",(void*)f_689},
{"f_1916:srfi_2d18_2escm",(void*)f_1916},
{"f_2044:srfi_2d18_2escm",(void*)f_2044},
{"f_2014:srfi_2d18_2escm",(void*)f_2014},
{"f_2010:srfi_2d18_2escm",(void*)f_2010},
{"f_956:srfi_2d18_2escm",(void*)f_956},
{"f_2067:srfi_2d18_2escm",(void*)f_2067},
{"f_2061:srfi_2d18_2escm",(void*)f_2061},
{"f_2091:srfi_2d18_2escm",(void*)f_2091},
{"f_1949:srfi_2d18_2escm",(void*)f_1949},
{"f_795:srfi_2d18_2escm",(void*)f_795},
{"f_920:srfi_2d18_2escm",(void*)f_920},
{"f_1954:srfi_2d18_2escm",(void*)f_1954},
{"f_922:srfi_2d18_2escm",(void*)f_922},
{"f_931:srfi_2d18_2escm",(void*)f_931},
{"f_876:srfi_2d18_2escm",(void*)f_876},
{"f_779:srfi_2d18_2escm",(void*)f_779},
{"f_2077:srfi_2d18_2escm",(void*)f_2077},
{"f_770:srfi_2d18_2escm",(void*)f_770},
{"f_772:srfi_2d18_2escm",(void*)f_772},
{"f_2080:srfi_2d18_2escm",(void*)f_2080},
{"f_2083:srfi_2d18_2escm",(void*)f_2083},
{"toplevel:srfi_2d18_2escm",(void*)C_srfi_2d18_toplevel},
{"f_897:srfi_2d18_2escm",(void*)f_897},
{"f_999:srfi_2d18_2escm",(void*)f_999},
{"f_891:srfi_2d18_2escm",(void*)f_891},
{"f_992:srfi_2d18_2escm",(void*)f_992},
{"f_1640:srfi_2d18_2escm",(void*)f_1640},
{"f_969:srfi_2d18_2escm",(void*)f_969},
{"f_963:srfi_2d18_2escm",(void*)f_963},
{"f_960:srfi_2d18_2escm",(void*)f_960},
{"f_1762:srfi_2d18_2escm",(void*)f_1762},
{"f_1658:srfi_2d18_2escm",(void*)f_1658},
{"f_1652:srfi_2d18_2escm",(void*)f_1652},
{"f_1655:srfi_2d18_2escm",(void*)f_1655},
{"f_1164:srfi_2d18_2escm",(void*)f_1164},
{"f_1735:srfi_2d18_2escm",(void*)f_1735},
{"f_1622:srfi_2d18_2escm",(void*)f_1622},
{"f_947:srfi_2d18_2escm",(void*)f_947},
{"f_1171:srfi_2d18_2escm",(void*)f_1171},
{"f_1467:srfi_2d18_2escm",(void*)f_1467},
{"f_1464:srfi_2d18_2escm",(void*)f_1464},
{"f_1180:srfi_2d18_2escm",(void*)f_1180},
{"f_1864:srfi_2d18_2escm",(void*)f_1864},
{"f_1633:srfi_2d18_2escm",(void*)f_1633},
{"f_1823:srfi_2d18_2escm",(void*)f_1823},
{"f_1755:srfi_2d18_2escm",(void*)f_1755},
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
S|applied compiler syntax:
S|  ##sys#for-each		1
o|eliminated procedure checks: 127 
o|specializations:
o|  2 (car pair)
o|  2 (length list)
o|  7 (eqv? * (not float))
(o e)|safe calls: 127 
o|Removed `not' forms: 2 
o|contracted procedure: k699 
o|inlining procedure: k696 
o|inlining procedure: k711 
o|inlining procedure: k711 
o|inlining procedure: k696 
o|inlining procedure: k781 
o|inlining procedure: k781 
o|inlining procedure: k797 
o|inlining procedure: k797 
o|inlining procedure: k813 
o|inlining procedure: k813 
o|inlining procedure: k829 
o|inlining procedure: k829 
o|inlining procedure: k1033 
o|inlining procedure: k1033 
o|inlining procedure: k1080 
o|inlining procedure: k1096 
o|inlining procedure: k1096 
o|inlining procedure: k1080 
o|inlining procedure: k1122 
o|inlining procedure: k1122 
o|substituted constant variable: a1129 
o|substituted constant variable: a1131 
o|substituted constant variable: a1133 
o|substituted constant variable: a1135 
o|substituted constant variable: a1137 
o|propagated global variable: ct171 ##sys#current-thread 
o|inlining procedure: k1181 
o|inlining procedure: k1181 
o|inlining procedure: k1216 
o|inlining procedure: k1216 
o|inlining procedure: k1246 
o|inlining procedure: k1246 
o|contracted procedure: "(srfi-18.scm:236) sleep211" 
o|propagated global variable: ct214 ##sys#current-thread 
o|inlining procedure: k1311 
o|inlining procedure: k1311 
o|inlining procedure: k1359 
o|inlining procedure: k1359 
o|inlining procedure: k1431 
o|inlining procedure: k1431 
o|inlining procedure: k1465 
o|inlining procedure: k1465 
o|contracted procedure: k1533 
o|inlining procedure: k1530 
o|inlining procedure: k1557 
o|inlining procedure: k1557 
o|inlining procedure: k1530 
o|inlining procedure: k1659 
o|inlining procedure: k1659 
o|inlining procedure: k1690 
o|inlining procedure: k1690 
o|substituted constant variable: a1712 
o|substituted constant variable: a1714 
o|inlining procedure: k1725 
o|inlining procedure: k1740 
o|inlining procedure: k1740 
o|inlining procedure: k1725 
o|inlining procedure: k1829 
o|inlining procedure: k1829 
o|inlining procedure: k1881 
o|inlining procedure: k1881 
o|inlining procedure: k1956 
o|contracted procedure: "(srfi-18.scm:421) g377384" 
o|inlining procedure: k1926 
o|inlining procedure: k1926 
o|inlining procedure: k1956 
o|inlining procedure: k1982 
o|inlining procedure: k1982 
o|inlining procedure: k2032 
o|inlining procedure: k2032 
o|inlining procedure: k2069 
o|inlining procedure: k2069 
o|replaced variables: 220 
o|removed binding forms: 152 
o|substituted constant variable: r6972123 
o|substituted constant variable: r7822125 
o|substituted constant variable: r7982127 
o|substituted constant variable: r8142129 
o|substituted constant variable: r8302131 
o|replaced variables: 3 
o|removed binding forms: 228 
o|inlining procedure: k1902 
o|inlining procedure: k1932 
o|replaced variables: 1 
o|removed binding forms: 8 
o|removed binding forms: 1 
o|simplifications: ((if . 14) (##core#call . 224)) 
o|  call simplifications:
o|    ##sys#fudge
o|    ##sys#check-list
o|    ##sys#list
o|    fx>	2
o|    cadr	2
o|    not
o|    cons
o|    null?	4
o|    car	3
o|    ##sys#call-with-current-continuation	5
o|    list	4
o|    apply
o|    procedure?
o|    eq?	20
o|    ##sys#check-exact	2
o|    fxmax
o|    ##sys#setislot	15
o|    pair?	8
o|    ##sys#call-with-values
o|    ##sys#setslot	36
o|    memq	4
o|    ##sys#check-number
o|    ##sys#check-structure	26
o|    ##sys#make-structure	8
o|    ##sys#structure?	12
o|    number?
o|    *
o|    +
o|    ##sys#slot	60
o|contracted procedure: k705 
o|contracted procedure: k714 
o|contracted procedure: k725 
o|contracted procedure: k744 
o|contracted procedure: k751 
o|contracted procedure: k757 
o|contracted procedure: k784 
o|contracted procedure: k791 
o|contracted procedure: k800 
o|contracted procedure: k807 
o|contracted procedure: k816 
o|contracted procedure: k823 
o|contracted procedure: k832 
o|contracted procedure: k839 
o|contracted procedure: k864 
o|contracted procedure: k852 
o|contracted procedure: k878 
o|contracted procedure: k881 
o|contracted procedure: k902 
o|contracted procedure: k911 
o|contracted procedure: k924 
o|contracted procedure: k933 
o|contracted procedure: k936 
o|contracted procedure: k943 
o|contracted procedure: k949 
o|contracted procedure: k964 
o|contracted procedure: k977 
o|contracted procedure: k970 
o|contracted procedure: k980 
o|contracted procedure: k994 
o|contracted procedure: k1147 
o|contracted procedure: k1000 
o|contracted procedure: k1003 
o|contracted procedure: k1006 
o|contracted procedure: k1030 
o|contracted procedure: k1036 
o|contracted procedure: k1046 
o|contracted procedure: k1049 
o|contracted procedure: k1058 
o|contracted procedure: k1077 
o|contracted procedure: k1073 
o|contracted procedure: k1069 
o|contracted procedure: k1083 
o|contracted procedure: k1103 
o|contracted procedure: k1116 
o|contracted procedure: k1119 
o|contracted procedure: k1018 
o|contracted procedure: k1153 
o|contracted procedure: k1160 
o|contracted procedure: k1166 
o|contracted procedure: k1195 
o|contracted procedure: k1172 
o|contracted procedure: k1191 
o|contracted procedure: k1175 
o|contracted procedure: k1184 
o|contracted procedure: k1198 
o|contracted procedure: k1210 
o|contracted procedure: k1213 
o|contracted procedure: k1219 
o|contracted procedure: k1228 
o|contracted procedure: k1243 
o|contracted procedure: k1259 
o|contracted procedure: k1249 
o|contracted procedure: k1252 
o|contracted procedure: k1274 
o|propagated global variable: ct214 ##sys#current-thread 
o|contracted procedure: k1317 
o|inlining procedure: k1311 
o|contracted procedure: k1329 
o|contracted procedure: k1338 
o|contracted procedure: k1347 
o|contracted procedure: k1356 
o|contracted procedure: k1362 
o|contracted procedure: k1365 
o|contracted procedure: k1374 
o|contracted procedure: k1380 
o|contracted procedure: k1383 
o|contracted procedure: k1389 
o|contracted procedure: k1392 
o|contracted procedure: k1395 
o|contracted procedure: k1407 
o|contracted procedure: k1410 
o|contracted procedure: k1421 
o|contracted procedure: k1425 
o|contracted procedure: k1434 
o|contracted procedure: k1453 
o|contracted procedure: k1449 
o|contracted procedure: k1445 
o|contracted procedure: k1459 
o|contracted procedure: k1471 
o|contracted procedure: k1474 
o|inlining procedure: k1465 
o|contracted procedure: k1480 
o|contracted procedure: k1483 
o|contracted procedure: k1489 
o|contracted procedure: k1492 
o|contracted procedure: k1495 
o|contracted procedure: k1498 
o|contracted procedure: k1501 
o|contracted procedure: k1507 
o|contracted procedure: k1510 
o|contracted procedure: k1521 
o|contracted procedure: k1517 
o|inlining procedure: k1465 
o|contracted procedure: k1596 
o|contracted procedure: k1560 
o|contracted procedure: k1563 
o|contracted procedure: k1566 
o|contracted procedure: k1577 
o|contracted procedure: k1545 
o|contracted procedure: k1586 
o|contracted procedure: k1589 
o|contracted procedure: k1611 
o|contracted procedure: k1617 
o|contracted procedure: k1810 
o|contracted procedure: k1623 
o|contracted procedure: k1626 
o|contracted procedure: k1635 
o|contracted procedure: k1641 
o|contracted procedure: k1644 
o|contracted procedure: k1647 
o|contracted procedure: k1672 
o|contracted procedure: k1662 
o|contracted procedure: k1675 
o|contracted procedure: k1678 
o|contracted procedure: k1681 
o|contracted procedure: k1716 
o|contracted procedure: k1684 
o|contracted procedure: k1687 
o|contracted procedure: k1693 
o|contracted procedure: k1696 
o|contracted procedure: k1699 
o|contracted procedure: k1719 
o|contracted procedure: k1722 
o|contracted procedure: k1737 
o|contracted procedure: k1743 
o|contracted procedure: k1746 
o|contracted procedure: k1757 
o|contracted procedure: k1728 
o|contracted procedure: k1766 
o|contracted procedure: k1783 
o|contracted procedure: k1787 
o|contracted procedure: k1790 
o|contracted procedure: k1801 
o|contracted procedure: k1818 
o|contracted procedure: k1832 
o|contracted procedure: k1848 
o|contracted procedure: k1857 
o|contracted procedure: k1866 
o|contracted procedure: k1875 
o|contracted procedure: k1878 
o|contracted procedure: k1884 
o|contracted procedure: k1887 
o|contracted procedure: k1890 
o|contracted procedure: k1912 
o|contracted procedure: k1893 
o|contracted procedure: k1899 
o|contracted procedure: k1902 
o|contracted procedure: k1918 
o|contracted procedure: k1941 
o|contracted procedure: k1944 
o|contracted procedure: k1959 
o|contracted procedure: k1969 
o|contracted procedure: k1973 
o|contracted procedure: k1923 
o|contracted procedure: k1929 
o|contracted procedure: k1932 
o|contracted procedure: k1979 
o|contracted procedure: k1985 
o|contracted procedure: k1991 
o|contracted procedure: k1994 
o|contracted procedure: k2000 
o|contracted procedure: k2003 
o|contracted procedure: k2018 
o|contracted procedure: k2029 
o|contracted procedure: k2035 
o|contracted procedure: k2046 
o|contracted procedure: k2052 
o|contracted procedure: k2063 
o|contracted procedure: k2072 
o|contracted procedure: k2105 
o|contracted procedure: k2093 
o|contracted procedure: k2096 
o|contracted procedure: k2114 
o|simplifications: ((let . 24)) 
o|removed binding forms: 180 
o|inlining procedure: k874 
o|inlining procedure: k1039 
o|replaced variables: 53 
o|inlining procedure: k1962 
o|inlining procedure: k1962 
o|simplifications: ((if . 1)) 
o|replaced variables: 1 
o|removed binding forms: 25 
o|removed binding forms: 3 
o|removed binding forms: 2 
o|customizable procedures: (k1997 for-each-loop376391 k1620 k1650 switch263 check264 compute-time-limit k1086 k958) 
o|calls to known targets: 38 
o|identified direct recursive calls: f_1954 2 
o|fast box initializations: 4 
o|fast global references: 4 
o|fast global assignments: 1 
o|dropping unused closure argument: f_694 
*/
/* end of file */

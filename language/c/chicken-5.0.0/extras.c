/* Generated from extras.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: extras.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file extras.c -emit-import-library chicken.format -emit-import-library chicken.io -emit-import-library chicken.pretty-print -emit-import-library chicken.random
   unit: extras
   uses: data-structures library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[164];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,17),40,100,111,108,111,111,112,57,54,32,120,32,105,32,120,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,105,111,35,114,101,97,100,45,108,105,115,116,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,9),40,103,49,50,48,32,114,108,41,0,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,105,111,35,114,101,97,100,45,108,105,110,101,32,46,32,97,114,103,115,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,108,110,115,32,110,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,30),40,99,104,105,99,107,101,110,46,105,111,35,114,101,97,100,45,108,105,110,101,115,32,46,32,114,101,115,116,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,105,111,35,119,114,105,116,101,45,108,105,110,101,32,115,116,114,32,46,32,112,111,114,116,41,0,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,115,116,97,114,116,32,110,32,109,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,115,116,97,114,116,32,110,32,109,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,105,111,35,114,101,97,100,45,115,116,114,105,110,103,33,47,112,111,114,116,32,110,32,100,101,115,116,32,112,111,114,116,32,115,116,97,114,116,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,105,111,35,114,101,97,100,45,115,116,114,105,110,103,33,32,110,32,100,101,115,116,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,105,111,35,114,101,97,100,45,115,116,114,105,110,103,47,112,111,114,116,32,110,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,105,111,35,114,101,97,100,45,115,116,114,105,110,103,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,105,111,35,114,101,97,100,45,98,117,102,102,101,114,101,100,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,105,111,35,114,101,97,100,45,116,111,107,101,110,32,112,114,101,100,32,46,32,112,111,114,116,41,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,16),40,98,111,100,121,51,49,53,32,110,32,112,111,114,116,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,16),40,100,101,102,45,112,111,114,116,51,49,56,32,37,110,41};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,10),40,100,101,102,45,110,51,49,55,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,105,111,35,119,114,105,116,101,45,115,116,114,105,110,103,32,115,32,46,32,109,111,114,101,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,105,111,35,114,101,97,100,45,98,121,116,101,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,105,111,35,119,114,105,116,101,45,98,121,116,101,32,98,121,116,101,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,15),40,114,101,97,100,45,109,97,99,114,111,63,32,108,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,19),40,114,101,97,100,45,109,97,99,114,111,45,112,114,101,102,105,120,41,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,13),40,111,117,116,32,115,116,114,32,99,111,108,41,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,18),40,119,114,45,101,120,112,114,32,101,120,112,114,32,99,111,108,41,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,108,32,99,111,108,41,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,14),40,119,114,45,108,115,116,32,108,32,99,111,108,41,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,8),40,103,52,56,56,32,97,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,105,32,106,32,99,111,108,41,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,9),40,103,52,57,57,32,99,110,41,0,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,53,48,56,32,105,41,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,12),40,119,114,32,111,98,106,32,99,111,108,41,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,14),40,115,112,97,99,101,115,32,110,32,99,111,108,41,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,15),40,105,110,100,101,110,116,32,116,111,32,99,111,108,41,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,11),40,97,50,56,50,48,32,115,116,114,41,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,26),40,112,114,32,111,98,106,32,99,111,108,32,101,120,116,114,97,32,112,112,45,112,97,105,114,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,24),40,112,112,45,101,120,112,114,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,32),40,112,112,45,99,97,108,108,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,32,112,112,45,105,116,101,109,41};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,29),40,112,112,45,108,105,115,116,32,108,32,99,111,108,32,101,120,116,114,97,32,112,112,45,105,116,101,109,41,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,108,32,99,111,108,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,35),40,112,112,45,100,111,119,110,32,108,32,99,111,108,49,32,99,111,108,50,32,101,120,116,114,97,32,112,112,45,105,116,101,109,41,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,27),40,116,97,105,108,49,32,114,101,115,116,32,99,111,108,49,32,99,111,108,50,32,99,111,108,51,41,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,27),40,116,97,105,108,50,32,114,101,115,116,32,99,111,108,49,32,99,111,108,50,32,99,111,108,51,41,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,22),40,116,97,105,108,51,32,114,101,115,116,32,99,111,108,49,32,99,111,108,50,41,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,49),40,112,112,45,103,101,110,101,114,97,108,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,32,110,97,109,101,100,63,32,112,112,45,49,32,112,112,45,50,32,112,112,45,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,26),40,112,112,45,101,120,112,114,45,108,105,115,116,32,108,32,99,111,108,32,101,120,116,114,97,41,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,26),40,112,112,45,108,97,109,98,100,97,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,22),40,112,112,45,105,102,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,24),40,112,112,45,99,111,110,100,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,24),40,112,112,45,99,97,115,101,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,23),40,112,112,45,97,110,100,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,23),40,112,112,45,108,101,116,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,25),40,112,112,45,98,101,103,105,110,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,22),40,112,112,45,100,111,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,12),40,115,116,121,108,101,32,104,101,97,100,41,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,12),40,112,112,32,111,98,106,32,99,111,108,41,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,62),40,99,104,105,99,107,101,110,46,112,114,101,116,116,121,45,112,114,105,110,116,35,103,101,110,101,114,105,99,45,119,114,105,116,101,32,111,98,106,32,100,105,115,112,108,97,121,63,32,119,105,100,116,104,32,111,117,116,112,117,116,41,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,9),40,97,51,51,55,53,32,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,112,114,101,116,116,121,45,112,114,105,110,116,35,112,114,101,116,116,121,45,112,114,105,110,116,32,111,98,106,32,46,32,111,112,116,41,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,6),40,110,101,120,116,41,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,6),40,115,107,105,112,41,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,14),40,114,101,99,32,109,115,103,32,97,114,103,115,41,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,111,114,109,97,116,35,102,112,114,105,110,116,102,48,32,108,111,99,32,112,111,114,116,32,109,115,103,32,97,114,103,115,41,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,102,111,114,109,97,116,35,102,112,114,105,110,116,102,32,112,111,114,116,32,102,115,116,114,32,46,32,97,114,103,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,102,111,114,109,97,116,35,112,114,105,110,116,102,32,102,115,116,114,32,46,32,97,114,103,115,41,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,102,111,114,109,97,116,35,115,112,114,105,110,116,102,32,102,115,116,114,32,46,32,97,114,103,115,41,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,102,111,114,109,97,116,35,102,111,114,109,97,116,32,102,109,116,45,111,114,45,100,115,116,32,46,32,97,114,103,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,114,97,110,100,111,109,35,115,101,116,45,112,115,101,117,100,111,45,114,97,110,100,111,109,45,115,101,101,100,33,32,98,117,102,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,114,97,110,100,111,109,35,112,115,101,117,100,111,45,114,97,110,100,111,109,45,105,110,116,101,103,101,114,32,110,41};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,114,97,110,100,111,109,35,112,115,101,117,100,111,45,114,97,110,100,111,109,45,114,101,97,108,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,114,97,110,100,111,109,35,114,97,110,100,111,109,45,98,121,116,101,115,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1071)
static void C_ccall f_1071(C_word c,C_word *av) C_noret;
C_noret_decl(f_1074)
static void C_ccall f_1074(C_word c,C_word *av) C_noret;
C_noret_decl(f_1076)
static void C_ccall f_1076(C_word c,C_word *av) C_noret;
C_noret_decl(f_1105)
static void C_ccall f_1105(C_word c,C_word *av) C_noret;
C_noret_decl(f_1107)
static void C_fcall f_1107(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1127)
static void C_ccall f_1127(C_word c,C_word *av) C_noret;
C_noret_decl(f_1179)
static void C_ccall f_1179(C_word c,C_word *av) C_noret;
C_noret_decl(f_1189)
static void C_fcall f_1189(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1199)
static void C_fcall f_1199(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1212)
static void C_ccall f_1212(C_word c,C_word *av) C_noret;
C_noret_decl(f_1217)
static void C_fcall f_1217(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1230)
static void C_ccall f_1230(C_word c,C_word *av) C_noret;
C_noret_decl(f_1263)
static void C_ccall f_1263(C_word c,C_word *av) C_noret;
C_noret_decl(f_1272)
static void C_ccall f_1272(C_word c,C_word *av) C_noret;
C_noret_decl(f_1281)
static void C_fcall f_1281(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1295)
static void C_ccall f_1295(C_word c,C_word *av) C_noret;
C_noret_decl(f_1303)
static void C_ccall f_1303(C_word c,C_word *av) C_noret;
C_noret_decl(f_1332)
static void C_ccall f_1332(C_word c,C_word *av) C_noret;
C_noret_decl(f_1357)
static void C_fcall f_1357(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1370)
static void C_ccall f_1370(C_word c,C_word *av) C_noret;
C_noret_decl(f_1416)
static void C_ccall f_1416(C_word c,C_word *av) C_noret;
C_noret_decl(f_1432)
static void C_ccall f_1432(C_word c,C_word *av) C_noret;
C_noret_decl(f_1444)
static void C_ccall f_1444(C_word c,C_word *av) C_noret;
C_noret_decl(f_1462)
static void C_fcall f_1462(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1466)
static void C_ccall f_1466(C_word c,C_word *av) C_noret;
C_noret_decl(f_1521)
static void C_fcall f_1521(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1525)
static void C_ccall f_1525(C_word c,C_word *av) C_noret;
C_noret_decl(f_1528)
static void C_fcall f_1528(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1576)
static void C_ccall f_1576(C_word c,C_word *av) C_noret;
C_noret_decl(f_1598)
static void C_ccall f_1598(C_word c,C_word *av) C_noret;
C_noret_decl(f_1604)
static void C_fcall f_1604(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1607)
static void C_ccall f_1607(C_word c,C_word *av) C_noret;
C_noret_decl(f_1613)
static void C_fcall f_1613(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1653)
static void C_ccall f_1653(C_word c,C_word *av) C_noret;
C_noret_decl(f_1672)
static void C_ccall f_1672(C_word c,C_word *av) C_noret;
C_noret_decl(f_1675)
static void C_ccall f_1675(C_word c,C_word *av) C_noret;
C_noret_decl(f_1687)
static void C_ccall f_1687(C_word c,C_word *av) C_noret;
C_noret_decl(f_1690)
static void C_ccall f_1690(C_word c,C_word *av) C_noret;
C_noret_decl(f_1695)
static void C_fcall f_1695(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1699)
static void C_ccall f_1699(C_word c,C_word *av) C_noret;
C_noret_decl(f_1702)
static void C_ccall f_1702(C_word c,C_word *av) C_noret;
C_noret_decl(f_1714)
static void C_ccall f_1714(C_word c,C_word *av) C_noret;
C_noret_decl(f_1722)
static void C_ccall f_1722(C_word c,C_word *av) C_noret;
C_noret_decl(f_1724)
static void C_ccall f_1724(C_word c,C_word *av) C_noret;
C_noret_decl(f_1743)
static void C_ccall f_1743(C_word c,C_word *av) C_noret;
C_noret_decl(f_1777)
static void C_ccall f_1777(C_word c,C_word *av) C_noret;
C_noret_decl(f_1805)
static void C_ccall f_1805(C_word c,C_word *av) C_noret;
C_noret_decl(f_1815)
static void C_ccall f_1815(C_word c,C_word *av) C_noret;
C_noret_decl(f_1820)
static void C_fcall f_1820(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1824)
static void C_ccall f_1824(C_word c,C_word *av) C_noret;
C_noret_decl(f_1830)
static void C_ccall f_1830(C_word c,C_word *av) C_noret;
C_noret_decl(f_1833)
static void C_ccall f_1833(C_word c,C_word *av) C_noret;
C_noret_decl(f_1840)
static void C_ccall f_1840(C_word c,C_word *av) C_noret;
C_noret_decl(f_1861)
static void C_ccall f_1861(C_word c,C_word *av) C_noret;
C_noret_decl(f_1866)
static void C_fcall f_1866(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1873)
static void C_ccall f_1873(C_word c,C_word *av) C_noret;
C_noret_decl(f_1883)
static void C_ccall f_1883(C_word c,C_word *av) C_noret;
C_noret_decl(f_1886)
static void C_fcall f_1886(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1904)
static void C_fcall f_1904(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1909)
static void C_fcall f_1909(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1944)
static void C_ccall f_1944(C_word c,C_word *av) C_noret;
C_noret_decl(f_1954)
static void C_ccall f_1954(C_word c,C_word *av) C_noret;
C_noret_decl(f_1971)
static void C_ccall f_1971(C_word c,C_word *av) C_noret;
C_noret_decl(f_1978)
static void C_ccall f_1978(C_word c,C_word *av) C_noret;
C_noret_decl(f_1996)
static void C_fcall f_1996(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1999)
static void C_fcall f_1999(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2027)
static void C_fcall f_2027(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2061)
static C_word C_fcall f_2061(C_word t0);
C_noret_decl(f_2100)
static void C_fcall f_2100(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2110)
static void C_ccall f_2110(C_word c,C_word *av) C_noret;
C_noret_decl(f_2117)
static void C_fcall f_2117(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2120)
static void C_fcall f_2120(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2127)
static void C_ccall f_2127(C_word c,C_word *av) C_noret;
C_noret_decl(f_2138)
static void C_ccall f_2138(C_word c,C_word *av) C_noret;
C_noret_decl(f_2147)
static void C_fcall f_2147(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2163)
static void C_ccall f_2163(C_word c,C_word *av) C_noret;
C_noret_decl(f_2165)
static void C_fcall f_2165(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2187)
static void C_ccall f_2187(C_word c,C_word *av) C_noret;
C_noret_decl(f_2193)
static void C_ccall f_2193(C_word c,C_word *av) C_noret;
C_noret_decl(f_2209)
static void C_ccall f_2209(C_word c,C_word *av) C_noret;
C_noret_decl(f_2213)
static void C_ccall f_2213(C_word c,C_word *av) C_noret;
C_noret_decl(f_2222)
static void C_ccall f_2222(C_word c,C_word *av) C_noret;
C_noret_decl(f_2265)
static void C_ccall f_2265(C_word c,C_word *av) C_noret;
C_noret_decl(f_2269)
static void C_ccall f_2269(C_word c,C_word *av) C_noret;
C_noret_decl(f_2288)
static void C_ccall f_2288(C_word c,C_word *av) C_noret;
C_noret_decl(f_2295)
static void C_ccall f_2295(C_word c,C_word *av) C_noret;
C_noret_decl(f_2304)
static void C_ccall f_2304(C_word c,C_word *av) C_noret;
C_noret_decl(f_2307)
static void C_ccall f_2307(C_word c,C_word *av) C_noret;
C_noret_decl(f_2314)
static void C_ccall f_2314(C_word c,C_word *av) C_noret;
C_noret_decl(f_2327)
static void C_ccall f_2327(C_word c,C_word *av) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346(C_word c,C_word *av) C_noret;
C_noret_decl(f_2348)
static void C_fcall f_2348(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2355)
static void C_fcall f_2355(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2376)
static void C_ccall f_2376(C_word c,C_word *av) C_noret;
C_noret_decl(f_2380)
static void C_ccall f_2380(C_word c,C_word *av) C_noret;
C_noret_decl(f_2384)
static void C_ccall f_2384(C_word c,C_word *av) C_noret;
C_noret_decl(f_2407)
static void C_ccall f_2407(C_word c,C_word *av) C_noret;
C_noret_decl(f_2412)
static void C_ccall f_2412(C_word c,C_word *av) C_noret;
C_noret_decl(f_2413)
static void C_fcall f_2413(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2431)
static void C_ccall f_2431(C_word c,C_word *av) C_noret;
C_noret_decl(f_2435)
static void C_ccall f_2435(C_word c,C_word *av) C_noret;
C_noret_decl(f_2443)
static void C_ccall f_2443(C_word c,C_word *av) C_noret;
C_noret_decl(f_2454)
static void C_ccall f_2454(C_word c,C_word *av) C_noret;
C_noret_decl(f_2472)
static void C_ccall f_2472(C_word c,C_word *av) C_noret;
C_noret_decl(f_2476)
static void C_ccall f_2476(C_word c,C_word *av) C_noret;
C_noret_decl(f_2499)
static void C_ccall f_2499(C_word c,C_word *av) C_noret;
C_noret_decl(f_2507)
static void C_ccall f_2507(C_word c,C_word *av) C_noret;
C_noret_decl(f_2510)
static void C_ccall f_2510(C_word c,C_word *av) C_noret;
C_noret_decl(f_2514)
static void C_fcall f_2514(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2534)
static void C_ccall f_2534(C_word c,C_word *av) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word *av) C_noret;
C_noret_decl(f_2552)
static void C_ccall f_2552(C_word c,C_word *av) C_noret;
C_noret_decl(f_2559)
static void C_ccall f_2559(C_word c,C_word *av) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575(C_word c,C_word *av) C_noret;
C_noret_decl(f_2593)
static void C_ccall f_2593(C_word c,C_word *av) C_noret;
C_noret_decl(f_2608)
static void C_ccall f_2608(C_word c,C_word *av) C_noret;
C_noret_decl(f_2611)
static void C_ccall f_2611(C_word c,C_word *av) C_noret;
C_noret_decl(f_2618)
static void C_ccall f_2618(C_word c,C_word *av) C_noret;
C_noret_decl(f_2624)
static void C_ccall f_2624(C_word c,C_word *av) C_noret;
C_noret_decl(f_2631)
static void C_ccall f_2631(C_word c,C_word *av) C_noret;
C_noret_decl(f_2641)
static void C_ccall f_2641(C_word c,C_word *av) C_noret;
C_noret_decl(f_2647)
static void C_ccall f_2647(C_word c,C_word *av) C_noret;
C_noret_decl(f_2652)
static void C_fcall f_2652(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2665)
static void C_ccall f_2665(C_word c,C_word *av) C_noret;
C_noret_decl(f_2668)
static void C_ccall f_2668(C_word c,C_word *av) C_noret;
C_noret_decl(f_2679)
static void C_ccall f_2679(C_word c,C_word *av) C_noret;
C_noret_decl(f_2691)
static void C_ccall f_2691(C_word c,C_word *av) C_noret;
C_noret_decl(f_2694)
static void C_ccall f_2694(C_word c,C_word *av) C_noret;
C_noret_decl(f_2701)
static void C_ccall f_2701(C_word c,C_word *av) C_noret;
C_noret_decl(f_2706)
static void C_fcall f_2706(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2709)
static void C_fcall f_2709(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2730)
static void C_ccall f_2730(C_word c,C_word *av) C_noret;
C_noret_decl(f_2737)
static void C_ccall f_2737(C_word c,C_word *av) C_noret;
C_noret_decl(f_2739)
static void C_fcall f_2739(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2754)
static void C_ccall f_2754(C_word c,C_word *av) C_noret;
C_noret_decl(f_2761)
static void C_ccall f_2761(C_word c,C_word *av) C_noret;
C_noret_decl(f_2771)
static void C_fcall f_2771(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2784)
static void C_ccall f_2784(C_word c,C_word *av) C_noret;
C_noret_decl(f_2787)
static void C_ccall f_2787(C_word c,C_word *av) C_noret;
C_noret_decl(f_2799)
static void C_ccall f_2799(C_word c,C_word *av) C_noret;
C_noret_decl(f_2815)
static void C_ccall f_2815(C_word c,C_word *av) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word *av) C_noret;
C_noret_decl(f_2821)
static void C_ccall f_2821(C_word c,C_word *av) C_noret;
C_noret_decl(f_2849)
static void C_ccall f_2849(C_word c,C_word *av) C_noret;
C_noret_decl(f_2856)
static void C_ccall f_2856(C_word c,C_word *av) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867(C_word c,C_word *av) C_noret;
C_noret_decl(f_2883)
static void C_ccall f_2883(C_word c,C_word *av) C_noret;
C_noret_decl(f_2907)
static void C_ccall f_2907(C_word c,C_word *av) C_noret;
C_noret_decl(f_2912)
static void C_fcall f_2912(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2916)
static void C_ccall f_2916(C_word c,C_word *av) C_noret;
C_noret_decl(f_2935)
static void C_ccall f_2935(C_word c,C_word *av) C_noret;
C_noret_decl(f_2937)
static void C_fcall f_2937(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2941)
static void C_ccall f_2941(C_word c,C_word *av) C_noret;
C_noret_decl(f_2946)
static void C_fcall f_2946(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2952)
static void C_fcall f_2952(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2966)
static void C_fcall f_2966(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2973)
static void C_ccall f_2973(C_word c,C_word *av) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word *av) C_noret;
C_noret_decl(f_3000)
static void C_ccall f_3000(C_word c,C_word *av) C_noret;
C_noret_decl(f_3004)
static void C_ccall f_3004(C_word c,C_word *av) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011(C_word c,C_word *av) C_noret;
C_noret_decl(f_3015)
static void C_ccall f_3015(C_word c,C_word *av) C_noret;
C_noret_decl(f_3017)
static void C_fcall f_3017(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_3020)
static void C_fcall f_3020(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3034)
static void C_fcall f_3034(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3041)
static void C_ccall f_3041(C_word c,C_word *av) C_noret;
C_noret_decl(f_3045)
static void C_ccall f_3045(C_word c,C_word *av) C_noret;
C_noret_decl(f_3058)
static void C_fcall f_3058(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3072)
static void C_fcall f_3072(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3079)
static void C_ccall f_3079(C_word c,C_word *av) C_noret;
C_noret_decl(f_3083)
static void C_ccall f_3083(C_word c,C_word *av) C_noret;
C_noret_decl(f_3096)
static void C_fcall f_3096(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3107)
static void C_ccall f_3107(C_word c,C_word *av) C_noret;
C_noret_decl(f_3120)
static void C_ccall f_3120(C_word c,C_word *av) C_noret;
C_noret_decl(f_3133)
static void C_ccall f_3133(C_word c,C_word *av) C_noret;
C_noret_decl(f_3149)
static void C_ccall f_3149(C_word c,C_word *av) C_noret;
C_noret_decl(f_3151)
static void C_ccall f_3151(C_word c,C_word *av) C_noret;
C_noret_decl(f_3157)
static void C_ccall f_3157(C_word c,C_word *av) C_noret;
C_noret_decl(f_3163)
static void C_ccall f_3163(C_word c,C_word *av) C_noret;
C_noret_decl(f_3169)
static void C_ccall f_3169(C_word c,C_word *av) C_noret;
C_noret_decl(f_3175)
static void C_ccall f_3175(C_word c,C_word *av) C_noret;
C_noret_decl(f_3181)
static void C_ccall f_3181(C_word c,C_word *av) C_noret;
C_noret_decl(f_3187)
static void C_ccall f_3187(C_word c,C_word *av) C_noret;
C_noret_decl(f_3207)
static void C_ccall f_3207(C_word c,C_word *av) C_noret;
C_noret_decl(f_3213)
static void C_ccall f_3213(C_word c,C_word *av) C_noret;
C_noret_decl(f_3222)
static void C_fcall f_3222(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3232)
static void C_fcall f_3232(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3348)
static void C_ccall f_3348(C_word c,C_word *av) C_noret;
C_noret_decl(f_3352)
static void C_ccall f_3352(C_word c,C_word *av) C_noret;
C_noret_decl(f_3361)
static void C_ccall f_3361(C_word c,C_word *av) C_noret;
C_noret_decl(f_3363)
static void C_ccall f_3363(C_word c,C_word *av) C_noret;
C_noret_decl(f_3367)
static void C_fcall f_3367(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3370)
static void C_ccall f_3370(C_word c,C_word *av) C_noret;
C_noret_decl(f_3374)
static void C_ccall f_3374(C_word c,C_word *av) C_noret;
C_noret_decl(f_3376)
static void C_ccall f_3376(C_word c,C_word *av) C_noret;
C_noret_decl(f_3380)
static void C_ccall f_3380(C_word c,C_word *av) C_noret;
C_noret_decl(f_3387)
static void C_fcall f_3387(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3391)
static void C_fcall f_3391(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3394)
static void C_ccall f_3394(C_word c,C_word *av) C_noret;
C_noret_decl(f_3397)
static void C_ccall f_3397(C_word c,C_word *av) C_noret;
C_noret_decl(f_3419)
static void C_ccall f_3419(C_word c,C_word *av) C_noret;
C_noret_decl(f_3425)
static void C_fcall f_3425(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3434)
static C_word C_fcall f_3434(C_word t0);
C_noret_decl(f_3441)
static void C_fcall f_3441(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3460)
static void C_fcall f_3460(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3473)
static void C_ccall f_3473(C_word c,C_word *av) C_noret;
C_noret_decl(f_3498)
static void C_ccall f_3498(C_word c,C_word *av) C_noret;
C_noret_decl(f_3511)
static void C_ccall f_3511(C_word c,C_word *av) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524(C_word c,C_word *av) C_noret;
C_noret_decl(f_3537)
static void C_ccall f_3537(C_word c,C_word *av) C_noret;
C_noret_decl(f_3541)
static void C_ccall f_3541(C_word c,C_word *av) C_noret;
C_noret_decl(f_3554)
static void C_ccall f_3554(C_word c,C_word *av) C_noret;
C_noret_decl(f_3558)
static void C_ccall f_3558(C_word c,C_word *av) C_noret;
C_noret_decl(f_3571)
static void C_ccall f_3571(C_word c,C_word *av) C_noret;
C_noret_decl(f_3575)
static void C_ccall f_3575(C_word c,C_word *av) C_noret;
C_noret_decl(f_3593)
static void C_ccall f_3593(C_word c,C_word *av) C_noret;
C_noret_decl(f_3596)
static void C_ccall f_3596(C_word c,C_word *av) C_noret;
C_noret_decl(f_3602)
static void C_ccall f_3602(C_word c,C_word *av) C_noret;
C_noret_decl(f_3638)
static C_word C_fcall f_3638(C_word t0,C_word t1);
C_noret_decl(f_3696)
static void C_ccall f_3696(C_word c,C_word *av) C_noret;
C_noret_decl(f_3707)
static void C_ccall f_3707(C_word c,C_word *av) C_noret;
C_noret_decl(f_3713)
static void C_ccall f_3713(C_word c,C_word *av) C_noret;
C_noret_decl(f_3719)
static void C_ccall f_3719(C_word c,C_word *av) C_noret;
C_noret_decl(f_3725)
static void C_ccall f_3725(C_word c,C_word *av) C_noret;
C_noret_decl(f_3733)
static void C_ccall f_3733(C_word c,C_word *av) C_noret;
C_noret_decl(f_3758)
static void C_ccall f_3758(C_word c,C_word *av) C_noret;
C_noret_decl(f_3768)
static void C_ccall f_3768(C_word c,C_word *av) C_noret;
C_noret_decl(f_3770)
static void C_ccall f_3770(C_word c,C_word *av) C_noret;
C_noret_decl(f_3777)
static void C_ccall f_3777(C_word c,C_word *av) C_noret;
C_noret_decl(f_3780)
static void C_ccall f_3780(C_word c,C_word *av) C_noret;
C_noret_decl(f_3791)
static void C_ccall f_3791(C_word c,C_word *av) C_noret;
C_noret_decl(f_3809)
static void C_ccall f_3809(C_word c,C_word *av) C_noret;
C_noret_decl(f_3825)
static void C_ccall f_3825(C_word c,C_word *av) C_noret;
C_noret_decl(f_3828)
static void C_ccall f_3828(C_word c,C_word *av) C_noret;
C_noret_decl(f_3844)
static void C_ccall f_3844(C_word c,C_word *av) C_noret;
C_noret_decl(f_3847)
static void C_ccall f_3847(C_word c,C_word *av) C_noret;
C_noret_decl(f_3854)
static void C_ccall f_3854(C_word c,C_word *av) C_noret;
C_noret_decl(f_3869)
static void C_ccall f_3869(C_word c,C_word *av) C_noret;
C_noret_decl(f_3892)
static void C_ccall f_3892(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externexport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1107)
static void C_ccall trf_1107(C_word c,C_word *av) C_noret;
static void C_ccall trf_1107(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1107(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1189)
static void C_ccall trf_1189(C_word c,C_word *av) C_noret;
static void C_ccall trf_1189(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1189(t0,t1);}

C_noret_decl(trf_1199)
static void C_ccall trf_1199(C_word c,C_word *av) C_noret;
static void C_ccall trf_1199(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1199(t0,t1,t2);}

C_noret_decl(trf_1217)
static void C_ccall trf_1217(C_word c,C_word *av) C_noret;
static void C_ccall trf_1217(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1217(t0,t1,t2);}

C_noret_decl(trf_1281)
static void C_ccall trf_1281(C_word c,C_word *av) C_noret;
static void C_ccall trf_1281(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1281(t0,t1);}

C_noret_decl(trf_1357)
static void C_ccall trf_1357(C_word c,C_word *av) C_noret;
static void C_ccall trf_1357(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1357(t0,t1,t2,t3);}

C_noret_decl(trf_1462)
static void C_ccall trf_1462(C_word c,C_word *av) C_noret;
static void C_ccall trf_1462(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1462(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1521)
static void C_ccall trf_1521(C_word c,C_word *av) C_noret;
static void C_ccall trf_1521(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1521(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1528)
static void C_ccall trf_1528(C_word c,C_word *av) C_noret;
static void C_ccall trf_1528(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1528(t0,t1);}

C_noret_decl(trf_1604)
static void C_ccall trf_1604(C_word c,C_word *av) C_noret;
static void C_ccall trf_1604(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1604(t0,t1);}

C_noret_decl(trf_1613)
static void C_ccall trf_1613(C_word c,C_word *av) C_noret;
static void C_ccall trf_1613(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1613(t0,t1);}

C_noret_decl(trf_1695)
static void C_ccall trf_1695(C_word c,C_word *av) C_noret;
static void C_ccall trf_1695(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1695(t0,t1);}

C_noret_decl(trf_1820)
static void C_ccall trf_1820(C_word c,C_word *av) C_noret;
static void C_ccall trf_1820(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1820(t0,t1);}

C_noret_decl(trf_1866)
static void C_ccall trf_1866(C_word c,C_word *av) C_noret;
static void C_ccall trf_1866(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1866(t0,t1,t2,t3);}

C_noret_decl(trf_1886)
static void C_ccall trf_1886(C_word c,C_word *av) C_noret;
static void C_ccall trf_1886(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1886(t0,t1);}

C_noret_decl(trf_1904)
static void C_ccall trf_1904(C_word c,C_word *av) C_noret;
static void C_ccall trf_1904(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1904(t0,t1,t2);}

C_noret_decl(trf_1909)
static void C_ccall trf_1909(C_word c,C_word *av) C_noret;
static void C_ccall trf_1909(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1909(t0,t1);}

C_noret_decl(trf_1996)
static void C_ccall trf_1996(C_word c,C_word *av) C_noret;
static void C_ccall trf_1996(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1996(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1999)
static void C_ccall trf_1999(C_word c,C_word *av) C_noret;
static void C_ccall trf_1999(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1999(t0,t1);}

C_noret_decl(trf_2027)
static void C_ccall trf_2027(C_word c,C_word *av) C_noret;
static void C_ccall trf_2027(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2027(t0,t1);}

C_noret_decl(trf_2100)
static void C_ccall trf_2100(C_word c,C_word *av) C_noret;
static void C_ccall trf_2100(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2100(t0,t1,t2,t3);}

C_noret_decl(trf_2117)
static void C_ccall trf_2117(C_word c,C_word *av) C_noret;
static void C_ccall trf_2117(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2117(t0,t1,t2,t3);}

C_noret_decl(trf_2120)
static void C_ccall trf_2120(C_word c,C_word *av) C_noret;
static void C_ccall trf_2120(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2120(t0,t1,t2,t3);}

C_noret_decl(trf_2147)
static void C_ccall trf_2147(C_word c,C_word *av) C_noret;
static void C_ccall trf_2147(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2147(t0,t1,t2,t3);}

C_noret_decl(trf_2165)
static void C_ccall trf_2165(C_word c,C_word *av) C_noret;
static void C_ccall trf_2165(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2165(t0,t1,t2,t3);}

C_noret_decl(trf_2348)
static void C_ccall trf_2348(C_word c,C_word *av) C_noret;
static void C_ccall trf_2348(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2348(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2355)
static void C_ccall trf_2355(C_word c,C_word *av) C_noret;
static void C_ccall trf_2355(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2355(t0,t1);}

C_noret_decl(trf_2413)
static void C_ccall trf_2413(C_word c,C_word *av) C_noret;
static void C_ccall trf_2413(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2413(t0,t1,t2);}

C_noret_decl(trf_2514)
static void C_ccall trf_2514(C_word c,C_word *av) C_noret;
static void C_ccall trf_2514(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2514(t0,t1,t2);}

C_noret_decl(trf_2652)
static void C_ccall trf_2652(C_word c,C_word *av) C_noret;
static void C_ccall trf_2652(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2652(t0,t1,t2);}

C_noret_decl(trf_2706)
static void C_ccall trf_2706(C_word c,C_word *av) C_noret;
static void C_ccall trf_2706(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2706(t0,t1,t2,t3);}

C_noret_decl(trf_2709)
static void C_ccall trf_2709(C_word c,C_word *av) C_noret;
static void C_ccall trf_2709(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2709(t0,t1,t2,t3);}

C_noret_decl(trf_2739)
static void C_ccall trf_2739(C_word c,C_word *av) C_noret;
static void C_ccall trf_2739(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2739(t0,t1,t2,t3);}

C_noret_decl(trf_2771)
static void C_ccall trf_2771(C_word c,C_word *av) C_noret;
static void C_ccall trf_2771(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_2771(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2912)
static void C_ccall trf_2912(C_word c,C_word *av) C_noret;
static void C_ccall trf_2912(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_2912(t0,t1,t2,t3,t4,t5);}

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

C_noret_decl(trf_2952)
static void C_ccall trf_2952(C_word c,C_word *av) C_noret;
static void C_ccall trf_2952(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2952(t0,t1,t2,t3);}

C_noret_decl(trf_2966)
static void C_ccall trf_2966(C_word c,C_word *av) C_noret;
static void C_ccall trf_2966(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2966(t0,t1);}

C_noret_decl(trf_3017)
static void C_ccall trf_3017(C_word c,C_word *av) C_noret;
static void C_ccall trf_3017(C_word c,C_word *av){
C_word t0=av[8];
C_word t1=av[7];
C_word t2=av[6];
C_word t3=av[5];
C_word t4=av[4];
C_word t5=av[3];
C_word t6=av[2];
C_word t7=av[1];
C_word t8=av[0];
f_3017(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_3020)
static void C_ccall trf_3020(C_word c,C_word *av) C_noret;
static void C_ccall trf_3020(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_3020(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3034)
static void C_ccall trf_3034(C_word c,C_word *av) C_noret;
static void C_ccall trf_3034(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3034(t0,t1);}

C_noret_decl(trf_3058)
static void C_ccall trf_3058(C_word c,C_word *av) C_noret;
static void C_ccall trf_3058(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_3058(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3072)
static void C_ccall trf_3072(C_word c,C_word *av) C_noret;
static void C_ccall trf_3072(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3072(t0,t1);}

C_noret_decl(trf_3096)
static void C_ccall trf_3096(C_word c,C_word *av) C_noret;
static void C_ccall trf_3096(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3096(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3222)
static void C_ccall trf_3222(C_word c,C_word *av) C_noret;
static void C_ccall trf_3222(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3222(t0,t1,t2);}

C_noret_decl(trf_3232)
static void C_ccall trf_3232(C_word c,C_word *av) C_noret;
static void C_ccall trf_3232(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3232(t0,t1);}

C_noret_decl(trf_3367)
static void C_ccall trf_3367(C_word c,C_word *av) C_noret;
static void C_ccall trf_3367(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3367(t0,t1);}

C_noret_decl(trf_3387)
static void C_ccall trf_3387(C_word c,C_word *av) C_noret;
static void C_ccall trf_3387(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3387(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3391)
static void C_ccall trf_3391(C_word c,C_word *av) C_noret;
static void C_ccall trf_3391(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3391(t0,t1);}

C_noret_decl(trf_3425)
static void C_ccall trf_3425(C_word c,C_word *av) C_noret;
static void C_ccall trf_3425(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3425(t0,t1,t2,t3);}

C_noret_decl(trf_3441)
static void C_ccall trf_3441(C_word c,C_word *av) C_noret;
static void C_ccall trf_3441(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3441(t0,t1);}

C_noret_decl(trf_3460)
static void C_ccall trf_3460(C_word c,C_word *av) C_noret;
static void C_ccall trf_3460(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3460(t0,t1);}

/* k1069 */
static void C_ccall f_1071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1071,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1074,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k1072 in k1069 */
static void C_ccall f_1074(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(70,c,6)))){
C_save_and_reclaim((void *)f_1074,2,av);}
a=C_alloc(70);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=*((C_word*)lf[2]+1);
t5=C_mutate((C_word*)lf[3]+1 /* (set! chicken.io#read-list ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1076,a[2]=t4,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp));
t6=C_mutate((C_word*)lf[7]+1 /* (set! chicken.io#read-line ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1179,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[15]+1 /* (set! chicken.io#read-lines ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1332,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[18]+1 /* (set! chicken.io#write-line ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1416,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[22]+1 /* (set! chicken.io#read-string!/port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1444,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[23]+1 /* (set! chicken.io#read-string! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1576,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[26]+1 /* (set! chicken.io#read-string/port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1653,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[32]+1 /* (set! chicken.io#read-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1724,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[26]+1 /* (set! chicken.io#read-string/port ...) */,*((C_word*)lf[26]+1));
t14=C_mutate((C_word*)lf[22]+1 /* (set! chicken.io#read-string!/port ...) */,*((C_word*)lf[22]+1));
t15=C_mutate((C_word*)lf[34]+1 /* (set! chicken.io#read-buffered ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1777,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[37]+1 /* (set! chicken.io#read-token ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1805,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[29]+1 /* (set! chicken.io#write-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1861,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[40]+1 /* (set! chicken.io#read-byte ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1944,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[42]+1 /* (set! chicken.io#write-byte ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1971,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t20=C_a_i_provide(&a,1,lf[44]);
t21=C_mutate(&lf[45] /* (set! chicken.pretty-print#generic-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1996,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3361,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:551: chicken.base#make-parameter */
t23=*((C_word*)lf[163]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t23;
av2[1]=t22;
av2[2]=C_fix(79);
((C_proc)(void*)(*((C_word*)t23+1)))(3,av2);}}

/* chicken.io#read-list in k1072 in k1069 */
static void C_ccall f_1076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_1076,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
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
t4=(C_truep(t3)?*((C_word*)lf[4]+1):C_i_car(t2));
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
t18=C_i_check_port_2(t5,C_fix(1),C_SCHEME_TRUE,lf[5]);
t19=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1105,a[2]=t15,a[3]=t10,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:48: reader */
t20=t10;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t20;
av2[1]=t19;
av2[2]=t5;
((C_proc)C_fast_retrieve_proc(t20))(3,av2);}}

/* k1103 in chicken.io#read-list in k1072 in k1069 */
static void C_ccall f_1105(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1105,2,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1107,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li0),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1107(t5,((C_word*)t0)[5],t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* doloop96 in k1103 in chicken.io#read-list in k1072 in k1069 */
static void C_fcall f_1107(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_1107,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
t5=C_eofp(t2);
t6=(C_truep(t5)?t5:(C_truep(((C_word*)t0)[2])?C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]):C_SCHEME_FALSE));
if(C_truep(t6)){
/* extras.scm:52: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[6]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t1;
av2[2]=t4;
tp(3,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1127,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:48: reader */
t8=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t8))(3,av2);}}}

/* k1125 in doloop96 in k1103 in chicken.io#read-list in k1072 in k1069 */
static void C_ccall f_1127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_1127,2,av);}
a=C_alloc(3);
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[5])[1];
f_1107(t4,((C_word*)t0)[6],t1,t2,t3);}

/* chicken.io#read-line in k1072 in k1069 */
static void C_ccall f_1179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_1179,c,av);}
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
t4=(C_truep(t3)?C_i_car(t2):*((C_word*)lf[4]+1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1189,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t7=C_i_cdr(t2);
t8=C_i_pairp(t7);
t9=t6;
f_1189(t9,(C_truep(t8)?C_i_cadr(t2):C_SCHEME_FALSE));}
else{
t7=t6;
f_1189(t7,C_SCHEME_FALSE);}}

/* k1187 in chicken.io#read-line in k1072 in k1069 */
static void C_fcall f_1189(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_1189,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=C_i_check_port_2(((C_word*)t0)[2],C_fix(1),C_SCHEME_TRUE,lf[8]);
t4=C_slot(((C_word*)t0)[2],C_fix(2));
t5=C_slot(t4,C_fix(8));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1199,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li2),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:64: g120 */
t7=t6;
f_1199(t7,((C_word*)t0)[3],t5);}
else{
t6=(C_truep(t2)?t2:C_fix(256));
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1212,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t8,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:67: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t9;
av2[2]=((C_word*)t8)[1];
tp(3,av2);}}}

/* g120 in k1187 in chicken.io#read-line in k1072 in k1069 */
static void C_fcall f_1199(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1199,3,t0,t1,t2);}
/* extras.scm:64: rl */
t3=t2;{
C_word av2[4];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k1210 in k1187 in chicken.io#read-line in k1072 in k1069 */
static void C_ccall f_1212(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1212,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1217,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[4],a[7]=((C_word)li3),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_1217(t7,((C_word*)t0)[5],C_fix(0));}

/* loop in k1210 in k1187 in chicken.io#read-line in k1072 in k1069 */
static void C_fcall f_1217(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_1217,3,t0,t1,t2);}
a=C_alloc(8);
t3=(C_truep(((C_word*)t0)[2])?C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t3)){
/* extras.scm:70: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_fix(0);
av2[4]=t2;
tp(5,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1230,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:71: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}

/* k1228 in loop in k1210 in k1187 in chicken.io#read-line in k1072 in k1069 */
static void C_ccall f_1230(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1230,2,av);}
a=C_alloc(16);
t2=t1;
if(C_truep(C_eofp(t2))){
t3=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* extras.scm:75: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}}
else{
switch(t2){
case C_make_character(10):
/* extras.scm:77: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[2];
tp(5,av2);}
case C_make_character(13):
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1263,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:79: scheme#peek-char */
t4=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}
default:
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1281,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t0)[2],((C_word*)((C_word*)t0)[7])[1]))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1295,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1303,a[2]=t4,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:87: scheme#make-string */
t6=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)((C_word*)t0)[7])[1];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t4=t3;
f_1281(t4,C_SCHEME_UNDEFINED);}}}}

/* k1261 in k1228 in loop in k1210 in k1187 in chicken.io#read-line in k1072 in k1069 */
static void C_ccall f_1263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1263,2,av);}
a=C_alloc(5);
if(C_truep(C_i_char_equalp(t1,C_make_character(10)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1272,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:81: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
/* extras.scm:83: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}}

/* k1270 in k1261 in k1228 in loop in k1210 in k1187 in chicken.io#read-line in k1072 in k1069 */
static void C_ccall f_1272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1272,2,av);}
/* extras.scm:82: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* k1279 in k1228 in loop in k1210 in k1187 in chicken.io#read-line in k1072 in k1069 */
static void C_fcall f_1281(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_1281,2,t0,t1);}
t2=C_setsubchar(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* extras.scm:90: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1217(t4,((C_word*)t0)[6],t3);}

/* k1293 in k1228 in loop in k1210 in k1187 in chicken.io#read-line in k1072 in k1069 */
static void C_ccall f_1295(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1295,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1]);
t4=C_set_block_item(((C_word*)t0)[3],0,t3);
t5=((C_word*)t0)[4];
f_1281(t5,t4);}

/* k1301 in k1228 in loop in k1210 in k1187 in chicken.io#read-line in k1072 in k1069 */
static void C_ccall f_1303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1303,2,av);}
/* extras.scm:87: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=t1;
tp(4,av2);}}

/* chicken.io#read-lines in k1072 in k1069 */
static void C_ccall f_1332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +7,c,4)))){
C_save_and_reclaim((void*)f_1332,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+7);
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
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[4]+1):C_i_car(t2));
t5=t4;
t6=C_i_nullp(t2);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?*((C_word*)lf[16]+1):C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_check_port_2(t5,C_fix(1),C_SCHEME_TRUE,lf[17]);
t13=(C_truep(t9)?t9:C_fix(1000000000));
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1357,a[2]=t15,a[3]=t5,a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp));
t17=((C_word*)t15)[1];
f_1357(t17,t1,C_SCHEME_END_OF_LIST,t13);}

/* loop in chicken.io#read-lines in k1072 in k1069 */
static void C_fcall f_1357(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1357,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
/* extras.scm:98: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[6]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1370,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:99: read-line */
t6=*((C_word*)lf[7]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k1368 in loop in chicken.io#read-lines in k1072 in k1069 */
static void C_ccall f_1370(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1370,2,av);}
a=C_alloc(3);
if(C_truep(C_eofp(t1))){
/* extras.scm:101: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[6]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t3=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* extras.scm:102: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1357(t4,((C_word*)t0)[2],t2,t3);}}

/* chicken.io#write-line in k1072 in k1069 */
static void C_ccall f_1416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_1416,c,av);}
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
t4=(C_truep(C_eqp(t3,C_SCHEME_END_OF_LIST))?*((C_word*)lf[19]+1):C_slot(t3,C_fix(0)));
t5=t4;
t6=C_i_check_port_2(t5,C_fix(2),C_SCHEME_TRUE,lf[20]);
t7=C_i_check_string_2(t2,lf[20]);
t8=C_slot(t5,C_fix(2));
t9=C_slot(t8,C_fix(3));
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1432,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:106: g171 */
t11=t9;{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=t5;
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t11))(4,av2);}}

/* k1430 in chicken.io#write-line in k1072 in k1069 */
static void C_ccall f_1432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1432,2,av);}
/* extras.scm:112: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* chicken.io#read-string!/port in k1072 in k1069 */
static void C_ccall f_1444(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1444,6,av);}
a=C_alloc(9);
t6=C_eqp(t2,C_fix(0));
if(C_truep(t6)){
t7=t1;{
C_word *av2=av;
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
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1462,a[2]=t4,a[3]=t11,a[4]=t9,a[5]=t3,a[6]=((C_word)li8),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_1462(t13,t1,t5,t2,C_fix(0));}
else{
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1521,a[2]=t11,a[3]=t3,a[4]=t4,a[5]=((C_word)li9),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_1521(t13,t1,t5,t2,C_fix(0));}}}

/* loop in chicken.io#read-string!/port in k1072 in k1069 */
static void C_fcall f_1462(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,5)))){
C_save_and_reclaim_args((void *)trf_1462,5,t0,t1,t2,t3,t4);}
a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1466,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:123: rdstring */
t6=((C_word*)t0)[4];{
C_word av2[6];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=((C_word*)t0)[5];
av2[5]=t2;
((C_proc)C_fast_retrieve_proc(t6))(6,av2);}}

/* k1464 in loop in chicken.io#read-string!/port in k1072 in k1069 */
static void C_ccall f_1466(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1466,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(5));
t3=C_fixnum_plus(t2,t1);
t4=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),t3);
t5=C_eqp(t1,C_fix(0));
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=((C_word*)t0)[4];{
C_word *av2=av;
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
/* extras.scm:128: loop */
t11=((C_word*)((C_word*)t0)[7])[1];
f_1462(t11,((C_word*)t0)[4],t8,t9,t10);}
else{
t8=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_fixnum_plus(t1,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}

/* loop in chicken.io#read-string!/port in k1072 in k1069 */
static void C_fcall f_1521(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_1521,5,t0,t1,t2,t3,t4);}
a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1525,a[2]=t4,a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:131: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k1523 in loop in chicken.io#read-string!/port in k1072 in k1069 */
static void C_ccall f_1525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1525,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1528,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_eofp(t1))){
t3=t2;
f_1528(t3,C_fix(0));}
else{
t3=C_setsubchar(((C_word*)t0)[7],((C_word*)t0)[5],t1);
t4=t2;
f_1528(t4,C_fix(1));}}

/* k1526 in k1523 in loop in chicken.io#read-string!/port in k1072 in k1069 */
static void C_fcall f_1528(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_1528,2,t0,t1);}
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
/* extras.scm:139: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_1521(t8,((C_word*)t0)[3],t5,t6,t7);}
else{
t5=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_fixnum_plus(t1,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}

/* chicken.io#read-string! in k1072 in k1069 */
static void C_ccall f_1576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +9,c,3)))){
C_save_and_reclaim((void*)f_1576,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+9);
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
t5=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t6=C_i_nullp(t4);
t7=(C_truep(t6)?*((C_word*)lf[4]+1):C_i_car(t4));
t8=t7;
t9=C_i_nullp(t4);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t11=C_i_nullp(t10);
t12=(C_truep(t11)?C_fix(0):C_i_car(t10));
t13=t12;
t14=C_i_nullp(t10);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t10));
t16=C_i_check_port_2(t8,C_fix(1),C_SCHEME_TRUE,lf[24]);
t17=C_i_check_string_2(t3,lf[24]);
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1598,a[2]=t3,a[3]=t1,a[4]=t5,a[5]=t8,a[6]=t13,tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t5)[1])){
/* extras.scm:145: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t18;
av2[2]=((C_word*)t5)[1];
av2[3]=lf[24];
tp(4,av2);}}
else{
t19=t18;{
C_word *av2=av;
av2[0]=t19;
av2[1]=C_SCHEME_UNDEFINED;
f_1598(2,av2);}}}

/* k1596 in chicken.io#read-string! in k1072 in k1069 */
static void C_ccall f_1598(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_1598,2,av);}
a=C_alloc(13);
t2=C_block_size(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1604,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1613,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=C_fixnum_plus(((C_word*)t0)[6],((C_word*)((C_word*)t0)[4])[1]);
t7=t5;
f_1613(t7,C_fixnum_less_or_equal_p(t6,t3));}
else{
t6=t5;
f_1613(t6,C_SCHEME_FALSE);}}

/* k1602 in k1596 in chicken.io#read-string! in k1072 in k1069 */
static void C_fcall f_1604(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_1604,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1607,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:149: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[24];
tp(4,av2);}}

/* k1605 in k1602 in k1596 in chicken.io#read-string! in k1072 in k1069 */
static void C_ccall f_1607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1607,2,av);}
/* extras.scm:150: read-string!/port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[22]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
tp(6,av2);}}

/* k1611 in k1596 in chicken.io#read-string! in k1072 in k1069 */
static void C_fcall f_1613(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_1613,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_1604(t2,C_SCHEME_UNDEFINED);}
else{
t2=C_fixnum_difference(((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_set_block_item(((C_word*)t0)[5],0,t2);
t4=((C_word*)t0)[2];
f_1604(t4,t3);}}

/* chicken.io#read-string/port in k1072 in k1069 */
static void C_ccall f_1653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1653,4,av);}
a=C_alloc(5);
t4=C_eqp(t2,C_fix(0));
if(C_truep(t4)){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=lf[27];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1722,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:157: ##sys#peek-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t5;
av2[2]=t3;
tp(3,av2);}}}

/* k1670 in k1720 in chicken.io#read-string/port in k1072 in k1069 */
static void C_ccall f_1672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_1672,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1675,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:159: read-string!/port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[22]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=((C_word*)t0)[4];
av2[5]=C_fix(0);
tp(6,av2);}}

/* k1673 in k1670 in k1720 in chicken.io#read-string/port in k1072 in k1069 */
static void C_ccall f_1675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1675,2,av);}
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* extras.scm:162: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=t1;
tp(5,av2);}}}

/* k1685 in k1720 in chicken.io#read-string/port in k1072 in k1069 */
static void C_ccall f_1687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1687,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1690,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t3;
av2[2]=C_fix(2048);
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k1688 in k1685 in k1720 in chicken.io#read-string/port in k1072 in k1069 */
static void C_ccall f_1690(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1690,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1695,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word)li12),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_1695(t6,((C_word*)t0)[4]);}

/* loop in k1688 in k1685 in k1720 in chicken.io#read-string/port in k1072 in k1069 */
static void C_fcall f_1695(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_1695,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1699,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:167: scheme#peek-char */
t3=*((C_word*)lf[11]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1697 in loop in k1688 in k1685 in k1720 in chicken.io#read-string/port in k1072 in k1069 */
static void C_ccall f_1699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_1699,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1702,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:168: read-string!/port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[22]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t2;
av2[2]=C_fix(2048);
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
av2[5]=C_fix(0);
tp(6,av2);}}

/* k1700 in k1697 in loop in k1688 in k1685 in k1720 in chicken.io#read-string/port in k1072 in k1069 */
static void C_ccall f_1702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1702,2,av);}
a=C_alloc(4);
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
/* extras.scm:170: chicken.base#get-output-string */
t3=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1714,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:172: write-string */
t4=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=t1;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k1712 in k1700 in k1697 in loop in k1688 in k1685 in k1720 in chicken.io#read-string/port in k1072 in k1069 */
static void C_ccall f_1714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1714,2,av);}
/* extras.scm:173: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1695(t2,((C_word*)t0)[3]);}

/* k1720 in chicken.io#read-string/port in k1072 in k1069 */
static void C_ccall f_1722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1722,2,av);}
a=C_alloc(5);
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[3])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1672,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:158: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1687,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:164: chicken.base#open-output-string */
t3=*((C_word*)lf[30]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* chicken.io#read-string in k1072 in k1069 */
static void C_ccall f_1724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_1724,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
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
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=t4;
t6=C_i_nullp(t2);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?*((C_word*)lf[4]+1):C_i_car(t7));
t10=t9;
t11=C_i_nullp(t7);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t13=C_i_check_port_2(t10,C_fix(1),C_SCHEME_TRUE,lf[33]);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1743,a[2]=t1,a[3]=t5,a[4]=t10,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
/* extras.scm:177: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t14;
av2[2]=t5;
av2[3]=lf[33];
tp(4,av2);}}
else{
/* extras.scm:178: read-string/port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t1;
av2[2]=t5;
av2[3]=t10;
tp(4,av2);}}}

/* k1741 in chicken.io#read-string in k1072 in k1069 */
static void C_ccall f_1743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1743,2,av);}
/* extras.scm:178: read-string/port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* chicken.io#read-buffered in k1072 in k1069 */
static void C_ccall f_1777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_1777,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[4]+1):C_i_car(t2));
t5=C_i_check_port_2(t4,C_fix(1),C_SCHEME_TRUE,lf[35]);
t6=C_slot(t4,C_fix(2));
t7=C_slot(t6,C_fix(9));
if(C_truep(t7)){
/* extras.scm:190: rb */
t8=t7;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t1;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t8))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=lf[36];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* chicken.io#read-token in k1072 in k1069 */
static void C_ccall f_1805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_1805,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[4]+1):C_i_car(t3));
t6=t5;
t7=C_i_check_port_2(t6,C_fix(1),C_SCHEME_TRUE,lf[38]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1815,a[2]=t6,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:200: chicken.base#open-output-string */
t9=*((C_word*)lf[30]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* k1813 in chicken.io#read-token in k1072 in k1069 */
static void C_ccall f_1815(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1815,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1820,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word)li16),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_1820(t6,((C_word*)t0)[4]);}

/* loop in k1813 in chicken.io#read-token in k1072 in k1069 */
static void C_fcall f_1820(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_1820,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1824,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:202: ##sys#peek-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k1822 in loop in k1813 in chicken.io#read-token in k1072 in k1069 */
static void C_ccall f_1824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1824,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1830,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_eofp(t1);
if(C_truep(C_i_not(t3))){
/* extras.scm:203: pred */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_1830(2,av2);}}}

/* k1828 in k1822 in loop in k1813 in chicken.io#read-token in k1072 in k1069 */
static void C_ccall f_1830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1830,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1833,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1840,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:205: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
/* extras.scm:207: chicken.base#get-output-string */
t2=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k1831 in k1828 in k1822 in loop in k1813 in chicken.io#read-token in k1072 in k1069 */
static void C_ccall f_1833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1833,2,av);}
/* extras.scm:206: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1820(t2,((C_word*)t0)[3]);}

/* k1838 in k1828 in k1822 in loop in k1813 in chicken.io#read-token in k1072 in k1069 */
static void C_ccall f_1840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1840,2,av);}
/* extras.scm:205: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* chicken.io#write-string in k1072 in k1069 */
static void C_ccall f_1861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +12,c,4)))){
C_save_and_reclaim((void*)f_1861,c,av);}
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
t4=C_i_check_string_2(t2,lf[39]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1866,a[2]=t2,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1904,a[2]=t5,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1909,a[2]=t6,a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* extras.scm:212: def-n317 */
t8=t7;
f_1909(t8,t1);}
else{
t8=C_i_car(t3);
t9=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t9))){
/* extras.scm:212: def-port318 */
t10=t6;
f_1904(t10,t1,t8);}
else{
t10=C_i_car(t9);
t11=C_u_i_cdr(t9);
/* extras.scm:212: body315 */
t12=t5;
f_1866(t12,t1,t8,t10);}}}

/* body315 in chicken.io#write-string in k1072 in k1069 */
static void C_fcall f_1866(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1866,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=t3;
t5=C_i_check_port_2(t4,C_fix(2),C_SCHEME_TRUE,lf[39]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1873,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
/* extras.scm:214: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=lf[39];
tp(4,av2);}}
else{
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_1873(2,av2);}}}

/* k1871 in body315 in chicken.io#write-string in k1072 in k1069 */
static void C_ccall f_1873(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_1873,2,av);}
a=C_alloc(13);
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_slot(t2,C_fix(3));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1883,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1886,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
t7=C_block_size(((C_word*)t0)[4]);
t8=t6;
f_1886(t8,C_fixnum_lessp(((C_word*)t0)[5],t7));}
else{
t7=t6;
f_1886(t7,C_SCHEME_FALSE);}}

/* k1881 in k1871 in body315 in chicken.io#write-string in k1072 in k1069 */
static void C_ccall f_1883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1883,2,av);}
/* extras.scm:212: g327 */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* k1884 in k1871 in body315 in chicken.io#write-string in k1072 in k1069 */
static void C_fcall f_1886(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1886,2,t0,t1);}
if(C_truep(t1)){
/* extras.scm:218: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}
else{
t2=((C_word*)t0)[3];
/* extras.scm:212: g327 */
t3=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t3;
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)t0)[7];
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* def-port318 in chicken.io#write-string in k1072 in k1069 */
static void C_fcall f_1904(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1904,3,t0,t1,t2);}
/* extras.scm:212: body315 */
t3=((C_word*)t0)[2];
f_1866(t3,t1,t2,*((C_word*)lf[19]+1));}

/* def-n317 in chicken.io#write-string in k1072 in k1069 */
static void C_fcall f_1909(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_1909,2,t0,t1);}
/* extras.scm:212: def-port318 */
t2=((C_word*)t0)[2];
f_1904(t2,t1,C_SCHEME_FALSE);}

/* chicken.io#read-byte in k1072 in k1069 */
static void C_ccall f_1944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_1944,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[4]+1):C_i_car(t2));
t5=C_i_check_port_2(t4,C_fix(1),C_SCHEME_TRUE,lf[41]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1954,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:226: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t6;
av2[2]=t4;
tp(3,av2);}}

/* k1952 in chicken.io#read-byte in k1072 in k1069 */
static void C_ccall f_1954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1954,2,av);}
t2=C_eofp(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?t1:C_fix(C_character_code(t1)));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.io#write-byte in k1072 in k1069 */
static void C_ccall f_1971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_1971,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[19]+1):C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1978,a[2]=t6,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:232: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t7;
av2[2]=t2;
av2[3]=lf[43];
tp(4,av2);}}

/* k1976 in chicken.io#write-byte in k1072 in k1069 */
static void C_ccall f_1978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1978,2,av);}
t2=C_i_check_port_2(((C_word*)t0)[2],C_fix(2),C_SCHEME_TRUE,lf[43]);
t3=C_make_character(C_unfix(((C_word*)t0)[3]));
/* extras.scm:234: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t3;
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}

/* chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_1996(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_save_and_reclaim_args((void *)trf_1996,5,t1,t2,t3,t4,t5);}
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
t16=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1999,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t17=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2061,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t18=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2100,a[2]=t5,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp));
t19=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2117,a[2]=t13,a[3]=t9,a[4]=t11,a[5]=t7,a[6]=t3,a[7]=((C_word)li34),tmp=(C_word)a,a+=8,tmp));
t20=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2706,a[2]=t11,a[3]=t3,a[4]=t4,a[5]=t13,a[6]=t9,a[7]=t7,a[8]=((C_word)li58),tmp=(C_word)a,a+=9,tmp));
if(C_truep(t4)){
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3348,a[2]=t11,a[3]=t1,a[4]=t15,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t21;
av2[2]=C_fix(1);
av2[3]=C_make_character(10);
tp(4,av2);}}
else{
/* extras.scm:546: wr */
t21=((C_word*)t13)[1];
f_2117(t21,t1,t2,C_fix(0));}}

/* read-macro? in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_1999(C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1999,2,t1,t2);}
a=C_alloc(4);
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_eqp(t3,lf[46]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2027,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t6)){
t8=t7;
f_2027(t8,t6);}
else{
t8=C_eqp(t3,lf[47]);
if(C_truep(t8)){
t9=t7;
f_2027(t9,t8);}
else{
t9=C_eqp(t3,lf[48]);
t10=t7;
f_2027(t10,(C_truep(t9)?t9:C_eqp(t3,lf[49])));}}}

/* k2025 in read-macro? in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_2027(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_2027,2,t0,t1);}
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

/* read-macro-prefix in chicken.pretty-print#generic-write in k1072 in k1069 */
static C_word C_fcall f_2061(C_word t1){
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
t5=C_eqp(t2,lf[46]);
if(C_truep(t5)){
return(lf[50]);}
else{
t6=C_eqp(t2,lf[47]);
if(C_truep(t6)){
return(lf[51]);}
else{
t7=C_eqp(t2,lf[48]);
if(C_truep(t7)){
return(lf[52]);}
else{
t8=C_eqp(t2,lf[49]);
return((C_truep(t8)?lf[53]:C_SCHEME_UNDEFINED));}}}}

/* out in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_2100(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2100,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2110,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:275: output */
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

/* k2108 in out in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_2110,2,av);}
a=C_alloc(29);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_string_length(((C_word*)t0)[3]);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_s_a_i_plus(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_2117(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_2117,4,t0,t1,t2,t3);}
a=C_alloc(22);
t4=C_SCHEME_UNDEFINED;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2120,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=((C_word*)t0)[5],a[7]=((C_word)li27),tmp=(C_word)a,a+=8,tmp);
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2147,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp));
if(C_truep(C_i_pairp(t2))){
/* extras.scm:295: wr-expr */
t9=t4;
f_2120(t9,t1,t2,t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:296: wr-lst */
t9=((C_word*)t6)[1];
f_2147(t9,t1,t2,t3);}
else{
if(C_truep(C_eofp(t2))){
/* extras.scm:297: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_2100(t9,t1,lf[60],t3);}
else{
if(C_truep(C_i_vectorp(t2))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2265,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:298: scheme#vector->list */
t10=*((C_word*)lf[62]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
if(C_truep(C_booleanp(t2))){
if(C_truep(t2)){
/* extras.scm:299: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_2100(t9,t1,lf[63],t3);}
else{
/* extras.scm:299: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_2100(t9,t1,lf[64],t3);}}
else{
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2288,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:300: ##sys#number? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[96]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[96]+1);
av2[1]=t9;
av2[2]=t2;
tp(3,av2);}}}}}}}

/* wr-expr in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_2120(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_2120,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2127,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* extras.scm:280: read-macro? */
f_1999(t4,t2);}

/* k2125 in wr-expr in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2127(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2127,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_cadr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2138,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(
  /* extras.scm:281: read-macro-prefix */
  f_2061(((C_word*)t0)[2])
);
/* extras.scm:281: out */
t7=((C_word*)((C_word*)t0)[6])[1];
f_2100(t7,t5,t6,((C_word*)t0)[7]);}
else{
/* extras.scm:282: wr-lst */
t2=((C_word*)((C_word*)t0)[8])[1];
f_2147(t2,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[7]);}}

/* k2136 in k2125 in wr-expr in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2138,2,av);}
/* extras.scm:281: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2117(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* wr-lst in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_2147(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_2147,4,t0,t1,t2,t3);}
a=C_alloc(11);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2163,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t7=t2;
t8=C_u_i_car(t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2222,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:287: out */
t10=((C_word*)((C_word*)t0)[3])[1];
f_2100(t10,t9,lf[58],t3);}
else{
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_2163(2,av2);}}}
else{
/* extras.scm:293: out */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2100(t4,t1,lf[59],t3);}}

/* k2161 in wr-lst in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2163(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2163,2,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2165,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2165(t5,((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* loop in k2161 in wr-lst in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_2165(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_2165,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_i_not(t3))){
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2187,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=t2;
t8=C_u_i_car(t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2193,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:290: out */
t10=((C_word*)((C_word*)t0)[4])[1];
f_2100(t10,t9,lf[54],t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:291: out */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2100(t4,t1,lf[55],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2209,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2213,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:292: out */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2100(t6,t5,lf[57],t3);}}}}

/* k2185 in loop in k2161 in wr-lst in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2187,2,av);}
/* extras.scm:290: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2165(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2191 in loop in k2161 in wr-lst in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2193(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2193,2,av);}
/* extras.scm:290: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2117(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2207 in loop in k2161 in wr-lst in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2209,2,av);}
/* extras.scm:292: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],lf[56],t1);}

/* k2211 in loop in k2161 in wr-lst in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2213,2,av);}
/* extras.scm:292: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2117(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2220 in wr-lst in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2222,2,av);}
/* extras.scm:287: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2117(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2263 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2265,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2269,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:298: out */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2100(t4,t3,lf[61],((C_word*)t0)[5]);}

/* k2267 in k2263 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2269,2,av);}
/* extras.scm:298: wr-lst */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2147(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2288(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2288,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2295,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:300: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[65]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:302: chicken.base#open-output-string */
t3=*((C_word*)lf[30]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_closurep(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2327,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:305: ##sys#procedure->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[5]))){
if(C_truep(((C_word*)t0)[6])){
/* extras.scm:308: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2346,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:309: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2100(t3,t2,lf[75],((C_word*)t0)[4]);}}
else{
if(C_truep(C_charp(((C_word*)t0)[5]))){
if(C_truep(((C_word*)t0)[6])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2499,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t2;
av2[2]=C_fix(1);
av2[3]=t3;
tp(4,av2);}}
else{
t2=C_fix(C_character_code(((C_word*)t0)[5]));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2507,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:346: out */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2100(t5,t4,lf[80],((C_word*)t0)[4]);}}
else{
if(C_truep(C_undefinedp(((C_word*)t0)[5]))){
/* extras.scm:357: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],lf[81],((C_word*)t0)[4]);}
else{
if(C_truep(C_anypointerp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2593,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:358: ##sys#pointer->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[82]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[82]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
if(C_truep(C_unboundvaluep(((C_word*)t0)[5]))){
/* extras.scm:360: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],lf[83],((C_word*)t0)[4]);}
else{
if(C_truep(C_structurep(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2608,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:362: chicken.base#open-output-string */
t3=*((C_word*)lf[30]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2624,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:365: chicken.base#port? */
t3=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}}}}}}}}

/* k2293 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2295,2,av);}
/* extras.scm:300: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2302 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2304,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2307,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:303: ##sys#print */
t4=*((C_word*)lf[66]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2305 in k2302 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2307(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2307,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:304: chicken.base#get-output-string */
t3=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2312 in k2305 in k2302 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2314,2,av);}
/* extras.scm:304: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2325 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2327(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2327,2,av);}
/* extras.scm:305: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2344 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2346(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2346,2,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2348,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2348(t5,((C_word*)t0)[4],C_fix(0),C_fix(0),t1);}

/* loop in k2344 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_2348(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_2348,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2355,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=t4,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
t6=C_i_string_length(((C_word*)t0)[2]);
t7=t5;
f_2355(t7,C_fixnum_lessp(t3,t6));}
else{
t6=t5;
f_2355(t6,C_SCHEME_FALSE);}}

/* k2353 in loop in k2344 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_2355(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,0,4)))){
C_save_and_reclaim_args((void *)trf_2355,2,t0,t1);}
a=C_alloc(20);
if(C_truep(t1)){
t2=C_i_string_ref(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=C_u_i_char_equalp(t3,C_make_character(92));
t5=(C_truep(t4)?t4:C_u_i_char_equalp(t3,C_make_character(34)));
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=C_a_i_fixnum_plus(&a,2,t6,C_fix(1));
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2376,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2380,a[2]=((C_word*)t0)[6],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2384,a[2]=((C_word*)t0)[6],a[3]=t9,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:318: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
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
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2407,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t9,a[6]=t11,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2454,a[2]=((C_word*)t0)[6],a[3]=t12,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:325: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t13;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[8];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}
else{
t8=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* extras.scm:340: loop */
t9=((C_word*)((C_word*)t0)[4])[1];
f_2348(t9,((C_word*)t0)[5],((C_word*)t0)[8],t8,((C_word*)t0)[7]);}}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2472,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2476,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:342: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[8];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}}

/* k2374 in k2353 in loop in k2344 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2376,2,av);}
/* extras.scm:315: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2348(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2378 in k2353 in loop in k2344 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2380,2,av);}
/* extras.scm:317: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],lf[68],t1);}

/* k2382 in k2353 in loop in k2344 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2384,2,av);}
/* extras.scm:318: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2405 in k2353 in loop in k2344 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2407(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2407,2,av);}
a=C_alloc(12);
t2=t1;
t3=C_u_i_assq(((C_word*)t0)[2],lf[69]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2412,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2413,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word)li30),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:326: g488 */
t6=t5;
f_2413(t6,t4,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2431,a[2]=((C_word*)t0)[7],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=C_fix(C_character_code(((C_word*)t0)[2]));
/* ##sys#fixnum->string */
t7=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k2410 in k2405 in k2353 in loop in k2344 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2412,2,av);}
/* extras.scm:322: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2348(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* g488 in k2405 in k2353 in loop in k2344 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_2413(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_2413,3,t0,t1,t2);}
t3=C_i_cdr(t2);
/* extras.scm:335: out */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2100(t4,t1,t3,((C_word*)t0)[3]);}

/* k2429 in k2405 in k2353 in loop in k2344 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2431(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2431,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2435,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(C_u_i_char_lessp(((C_word*)t0)[4],C_make_character(16)))?lf[70]:lf[71]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2443,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:339: out */
t7=((C_word*)((C_word*)t0)[2])[1];
f_2100(t7,t6,lf[72],((C_word*)t0)[5]);}

/* k2433 in k2429 in k2405 in k2353 in loop in k2344 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2435,2,av);}
/* extras.scm:337: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2441 in k2429 in k2405 in k2353 in loop in k2344 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2443,2,av);}
/* extras.scm:338: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2452 in k2353 in loop in k2344 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2454,2,av);}
/* extras.scm:325: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2470 in k2353 in loop in k2344 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2472,2,av);}
/* extras.scm:341: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],lf[74],t1);}

/* k2474 in k2353 in loop in k2344 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2476,2,av);}
/* extras.scm:342: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2497 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2499(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2499,2,av);}
/* extras.scm:344: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2505 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2507,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2510,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:347: chicken.base#char-name */
t3=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2508 in k2505 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2510,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li32),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:347: g499 */
t3=t2;
f_2514(t3,((C_word*)t0)[4],t1);}
else{
if(C_truep(C_fixnum_lessp(((C_word*)t0)[5],C_fix(32)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2534,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:351: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2100(t3,t2,lf[76],((C_word*)t0)[3]);}
else{
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[5],C_fix(255)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2552,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[5],C_fix(65535)))){
/* extras.scm:354: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2100(t3,t2,lf[77],((C_word*)t0)[3]);}
else{
/* extras.scm:354: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2100(t3,t2,lf[78],((C_word*)t0)[3]);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[6];
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t2;
av2[2]=C_fix(1);
av2[3]=t3;
tp(4,av2);}}}}}

/* g499 in k2508 in k2505 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_2514(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_2514,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
/* extras.scm:349: out */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2100(t4,t1,t3,((C_word*)t0)[3]);}

/* k2532 in k2508 in k2505 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2534,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2541,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* ##sys#fixnum->string */
t3=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2539 in k2532 in k2508 in k2505 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2541,2,av);}
/* extras.scm:352: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2550 in k2508 in k2505 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2552,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2559,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* ##sys#fixnum->string */
t3=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2557 in k2550 in k2508 in k2505 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2559,2,av);}
/* extras.scm:355: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2573 in k2508 in k2505 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2575,2,av);}
/* extras.scm:356: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2591 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2593,2,av);}
/* extras.scm:358: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2606 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2608,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2611,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:363: ##sys#user-print-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[84]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=t2;
tp(5,av2);}}

/* k2609 in k2606 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2611,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2618,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:364: chicken.base#get-output-string */
t3=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2616 in k2609 in k2606 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2618,2,av);}
/* extras.scm:364: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2622 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2624,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2631,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[5],C_fix(3));
/* extras.scm:365: scheme#string-append */
t4=*((C_word*)lf[85]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[86];
av2[3]=t3;
av2[4]=lf[87];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
if(C_truep(C_bytevectorp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2641,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:367: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2100(t3,t2,lf[90],((C_word*)t0)[4]);}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2691,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:377: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2100(t3,t2,lf[93],((C_word*)t0)[4]);}
else{
/* extras.scm:380: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],lf[94],((C_word*)t0)[4]);}}}}

/* k2629 in k2622 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2631,2,av);}
/* extras.scm:365: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2639 in k2622 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2641(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2641,2,av);}
a=C_alloc(15);
t2=C_block_size(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2647,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2652,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=((C_word)li33),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_2652(t8,t4,C_fix(0));}

/* k2645 in k2639 in k2622 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2647,2,av);}
/* extras.scm:375: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],lf[88],((C_word*)t0)[4]);}

/* doloop508 in k2639 in k2622 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_2652(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_2652,3,t0,t1,t2);}
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
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2665,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_lessp(t4,C_fix(16)))){
/* extras.scm:373: out */
t6=((C_word*)((C_word*)t0)[5])[1];
f_2100(t6,t5,lf[89],((C_word*)t0)[6]);}
else{
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_2665(2,av2);}}}}

/* k2663 in doloop508 in k2639 in k2622 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2665,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2668,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2679,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:374: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[65]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
av2[3]=C_fix(16);
tp(4,av2);}}

/* k2666 in k2663 in doloop508 in k2639 in k2622 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2668,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2652(t3,((C_word*)t0)[4],t2);}

/* k2677 in k2663 in doloop508 in k2639 in k2622 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2679,2,av);}
/* extras.scm:374: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2689 in k2622 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2691,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2694,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2701,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:378: ##sys#lambda-info->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[92]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[92]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k2692 in k2689 in k2622 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2694,2,av);}
/* extras.scm:379: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],lf[91],((C_word*)t0)[4]);}

/* k2699 in k2689 in k2622 in k2286 in wr in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2701,2,av);}
/* extras.scm:378: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_2706(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_2706,4,t0,t1,t2,t3);}
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
t40=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2709,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp));
t41=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2739,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp));
t42=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2771,a[2]=((C_word*)t0)[2],a[3]=t15,a[4]=t11,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li38),tmp=(C_word)a,a+=9,tmp));
t43=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2849,a[2]=t9,a[3]=t11,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=t19,a[7]=t13,a[8]=t39,a[9]=t15,a[10]=((C_word*)t0)[7],a[11]=((C_word)li39),tmp=(C_word)a,a+=12,tmp));
t44=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2912,a[2]=t17,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word)li40),tmp=(C_word)a,a+=6,tmp));
t45=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2937,a[2]=t17,a[3]=((C_word*)t0)[2],a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp));
t46=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2946,a[2]=t9,a[3]=t7,a[4]=((C_word*)t0)[2],a[5]=((C_word)li43),tmp=(C_word)a,a+=6,tmp));
t47=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3017,a[2]=t9,a[3]=t7,a[4]=t17,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word)li47),tmp=(C_word)a,a+=8,tmp));
t48=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3151,a[2]=t15,a[3]=t11,a[4]=((C_word)li48),tmp=(C_word)a,a+=5,tmp));
t49=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3157,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li49),tmp=(C_word)a,a+=6,tmp));
t50=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3163,a[2]=t19,a[3]=t11,a[4]=((C_word)li50),tmp=(C_word)a,a+=5,tmp));
t51=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3169,a[2]=t13,a[3]=t21,a[4]=((C_word)li51),tmp=(C_word)a,a+=5,tmp));
t52=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3175,a[2]=t19,a[3]=t11,a[4]=t21,a[5]=((C_word)li52),tmp=(C_word)a,a+=6,tmp));
t53=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3181,a[2]=t13,a[3]=t11,a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp));
t54=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3187,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li54),tmp=(C_word)a,a+=6,tmp));
t55=C_set_block_item(t35,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3207,a[2]=t19,a[3]=t11,a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp));
t56=C_set_block_item(t37,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3213,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li56),tmp=(C_word)a,a+=6,tmp));
t57=C_set_block_item(t39,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3222,a[2]=t23,a[3]=t25,a[4]=t27,a[5]=t29,a[6]=t31,a[7]=t33,a[8]=t35,a[9]=t37,a[10]=((C_word)li57),tmp=(C_word)a,a+=11,tmp));
/* extras.scm:542: pr */
t58=((C_word*)t9)[1];
f_2771(t58,t1,t2,t3,C_fix(0),((C_word*)t11)[1]);}

/* spaces in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_2709(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(34,0,4)))){
C_save_and_reclaim_args((void *)trf_2709,4,t0,t1,t2,t3);}
a=C_alloc(34);
t4=t2;
if(C_truep(C_i_greaterp(t4,C_fix(0)))){
t5=t2;
if(C_truep(C_i_greaterp(t5,C_fix(7)))){
t6=t2;
t7=C_s_a_i_minus(&a,2,t6,C_fix(8));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2730,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:387: out */
t9=((C_word*)((C_word*)t0)[3])[1];
f_2100(t9,t8,lf[97],t3);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2737,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:388: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t6;
av2[2]=lf[98];
av2[3]=C_fix(0);
av2[4]=t2;
tp(5,av2);}}}
else{
t5=t3;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k2728 in spaces in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2730,2,av);}
/* extras.scm:387: spaces */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2709(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2735 in spaces in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2737,2,av);}
/* extras.scm:388: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* indent in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_2739(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,0,3)))){
C_save_and_reclaim_args((void *)trf_2739,4,t0,t1,t2,t3);}
a=C_alloc(29);
if(C_truep(t3)){
t4=t2;
t5=t3;
if(C_truep(C_i_lessp(t4,t5))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2754,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2761,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t7;
av2[2]=C_fix(1);
av2[3]=C_make_character(10);
tp(4,av2);}}
else{
t6=t2;
t7=t3;
t8=C_s_a_i_minus(&a,2,t6,t7);
/* extras.scm:395: spaces */
t9=((C_word*)((C_word*)t0)[2])[1];
f_2709(t9,t1,t8,t3);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2752 in indent in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2754,2,av);}
if(C_truep(t1)){
/* extras.scm:394: spaces */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2709(t2,((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0));}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2759 in indent in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2761,2,av);}
/* extras.scm:394: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* pr in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_2771(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(101,0,3)))){
C_save_and_reclaim_args((void *)trf_2771,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(101);
t6=C_i_pairp(t2);
t7=(C_truep(t6)?t6:C_i_vectorp(t2));
if(C_truep(t7)){
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2784,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t9,a[6]=t2,a[7]=t5,a[8]=t4,a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],tmp=(C_word)a,a+=12,tmp);
t11=((C_word*)t0)[6];
t12=t3;
t13=C_s_a_i_minus(&a,2,t11,t12);
t14=t4;
t15=C_s_a_i_minus(&a,2,t13,t14);
t16=C_s_a_i_plus(&a,2,t15,C_fix(1));
/* extras.scm:400: scheme#max */
t17=*((C_word*)lf[101]+1);{
C_word av2[4];
av2[0]=t17;
av2[1]=t10;
av2[2]=t16;
av2[3]=C_fix(50);
((C_proc)(void*)(*((C_word*)t17+1)))(4,av2);}}
else{
/* extras.scm:411: wr */
t8=((C_word*)((C_word*)t0)[7])[1];
f_2117(t8,t1,t2,t3);}}

/* k2782 in pr in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2784(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2784,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2787,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2821,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:401: generic-write */
f_1996(t4,((C_word*)t0)[6],((C_word*)t0)[11],C_SCHEME_FALSE,t5);}

/* k2785 in k2782 in pr in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2787,2,av);}
a=C_alloc(8);
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(C_i_greaterp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2799,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:407: chicken.string#reverse-string-append */
t4=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[7]))){
/* extras.scm:409: pp-pair */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[9];
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2815,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:410: scheme#vector->list */
t4=*((C_word*)lf[62]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}}

/* k2797 in k2785 in k2782 in pr in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2799,2,av);}
/* extras.scm:407: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2813 in k2785 in k2782 in pr in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2815(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2815,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2819,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:410: out */
t4=((C_word*)((C_word*)t0)[6])[1];
f_2100(t4,t3,lf[100],((C_word*)t0)[7]);}

/* k2817 in k2813 in k2785 in k2782 in pr in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2819,2,av);}
/* extras.scm:410: pp-list */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2937(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* a2820 in k2782 in pr in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2821(C_word c,C_word *av){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,1)))){
C_save_and_reclaim((void *)f_2821,3,av);}
a=C_alloc(32);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=((C_word*)((C_word*)t0)[3])[1];
t6=C_i_string_length(t2);
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_s_a_i_minus(&a,2,t5,t6));
t8=((C_word*)((C_word*)t0)[3])[1];
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_i_greaterp(t8,C_fix(0));
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* pp-expr in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2849(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2849,5,av);}
a=C_alloc(14);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2856,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t3,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],tmp=(C_word)a,a+=14,tmp);
/* extras.scm:414: read-macro? */
f_1999(t5,t2);}

/* k2854 in pp-expr in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2856(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2856,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_cadr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2867,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t6=(
  /* extras.scm:416: read-macro-prefix */
  f_2061(((C_word*)t0)[2])
);
/* extras.scm:416: out */
t7=((C_word*)((C_word*)t0)[8])[1];
f_2100(t7,t5,t6,((C_word*)t0)[9]);}
else{
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
if(C_truep(C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2883,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[11],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* extras.scm:421: style */
t5=((C_word*)((C_word*)t0)[12])[1];
f_3222(t5,t4,t3);}
else{
/* extras.scm:428: pp-list */
t4=((C_word*)((C_word*)t0)[13])[1];
f_2937(t4,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[9],((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}}}

/* k2865 in k2854 in pp-expr in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2867,2,av);}
/* extras.scm:415: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2771(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* k2881 in k2854 in pp-expr in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_2883,2,av);}
a=C_alloc(9);
if(C_truep(t1)){
/* extras.scm:423: proc */
t2=t1;{
C_word *av2;
if(c >= 5) {
  av2=av;
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
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2907,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* extras.scm:424: ##sys#symbol->qualified-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[102]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[102]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
tp(3,av2);}}}

/* k2905 in k2881 in k2854 in pp-expr in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_2907,2,av);}
t2=C_i_string_length(t1);
if(C_truep(C_i_greaterp(t2,C_fix(5)))){
/* extras.scm:426: pp-general */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3017(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[7])[1]);}
else{
/* extras.scm:427: pp-call */
t3=((C_word*)((C_word*)t0)[8])[1];
f_2912(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)((C_word*)t0)[7])[1]);}}

/* pp-call in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_2912(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_2912,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(13);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2916,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
t7=C_i_car(t2);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2935,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:434: out */
t10=((C_word*)((C_word*)t0)[4])[1];
f_2100(t10,t9,lf[103],t3);}

/* k2914 in pp-call in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,6)))){
C_save_and_reclaim((void *)f_2916,2,av);}
a=C_alloc(29);
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
t4=C_s_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:436: pp-down */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2946(t5,((C_word*)t0)[5],t3,t1,t4,((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2933 in pp-call in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2935,2,av);}
/* extras.scm:434: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2117(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* pp-list in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
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
/* extras.scm:442: out */
t7=((C_word*)((C_word*)t0)[3])[1];
f_2100(t7,t6,lf[104],t3);}

/* k2939 in pp-list in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2941,2,av);}
/* extras.scm:443: pp-down */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2946(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* pp-down in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
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
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2952,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word*)t0)[3],a[6]=t4,a[7]=t5,a[8]=((C_word*)t0)[4],a[9]=((C_word)li42),tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_2952(t10,t1,t2,t3);}

/* loop in pp-down in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_2952(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(40,0,3)))){
C_save_and_reclaim_args((void *)trf_2952,4,t0,t1,t2,t3);}
a=C_alloc(40);
if(C_truep(t3)){
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2966,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=t3,tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_nullp(t5))){
t7=((C_word*)t0)[7];
t8=t6;
f_2966(t8,C_s_a_i_plus(&a,2,t7,C_fix(1)));}
else{
t7=t6;
f_2966(t7,C_fix(0));}}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:454: out */
t4=((C_word*)((C_word*)t0)[8])[1];
f_2100(t4,t1,lf[105],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3000,a[2]=((C_word*)t0)[8],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3004,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3011,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3015,a[2]=((C_word*)t0)[8],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:458: indent */
t8=((C_word*)((C_word*)t0)[5])[1];
f_2739(t8,t7,((C_word*)t0)[6],t3);}}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2964 in loop in pp-down in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_2966(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_2966,2,t0,t1);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2973,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[5];
t5=C_u_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2979,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=t5,a[5]=t2,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:452: indent */
t7=((C_word*)((C_word*)t0)[8])[1];
f_2739(t7,t6,((C_word*)t0)[9],((C_word*)t0)[10]);}

/* k2971 in k2964 in loop in pp-down in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2973,2,av);}
/* extras.scm:451: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2952(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2977 in k2964 in loop in pp-down in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_2979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2979,2,av);}
/* extras.scm:452: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2771(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2998 in loop in pp-down in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3000,2,av);}
/* extras.scm:456: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],lf[106],t1);}

/* k3002 in loop in pp-down in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,5)))){
C_save_and_reclaim((void *)f_3004,2,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
t3=C_s_a_i_plus(&a,2,t2,C_fix(1));
/* extras.scm:457: pr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2771(t4,((C_word*)t0)[4],((C_word*)t0)[5],t1,t3,((C_word*)t0)[6]);}

/* k3009 in loop in pp-down in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3011,2,av);}
/* extras.scm:458: indent */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2739(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3013 in loop in pp-down in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3015,2,av);}
/* extras.scm:458: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],lf[107],t1);}

/* pp-general in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_3017(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
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
C_save_and_reclaim_args((void *)trf_3017,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
a=C_alloc(42);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3020,a[2]=t6,a[3]=t12,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t4,a[7]=((C_word)li44),tmp=(C_word)a,a+=8,tmp));
t16=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3058,a[2]=t7,a[3]=t14,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t4,a[7]=((C_word)li45),tmp=(C_word)a,a+=8,tmp));
t17=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3096,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t8,a[5]=((C_word)li46),tmp=(C_word)a,a+=6,tmp));
t18=C_i_car(t2);
t19=t18;
t20=t2;
t21=C_u_i_cdr(t20);
t22=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3107,a[2]=t5,a[3]=t21,a[4]=t3,a[5]=t10,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t23=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3149,a[2]=((C_word*)t0)[5],a[3]=t22,a[4]=t19,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:485: out */
t24=((C_word*)((C_word*)t0)[6])[1];
f_2100(t24,t23,lf[109],t3);}

/* tail1 in pp-general in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_3020(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(41,0,5)))){
C_save_and_reclaim_args((void *)trf_3020,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(41);
t6=(C_truep(((C_word*)t0)[2])?C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=t7;
t9=t2;
t10=C_u_i_cdr(t9);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3034,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t10,a[5]=t3,a[6]=t5,a[7]=((C_word*)t0)[4],a[8]=t8,a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[5],a[11]=t4,tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_nullp(t10))){
t12=((C_word*)t0)[6];
t13=t11;
f_3034(t13,C_s_a_i_plus(&a,2,t12,C_fix(1)));}
else{
t12=t11;
f_3034(t12,C_fix(0));}}
else{
/* extras.scm:470: tail2 */
t7=((C_word*)((C_word*)t0)[3])[1];
f_3058(t7,t1,t2,t3,t4,t5);}}

/* k3032 in tail1 in pp-general in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_3034(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,3)))){
C_save_and_reclaim_args((void *)trf_3034,2,t0,t1);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3041,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3045,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=t2,a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:469: indent */
t5=((C_word*)((C_word*)t0)[10])[1];
f_2739(t5,t4,((C_word*)t0)[6],((C_word*)t0)[11]);}

/* k3039 in k3032 in tail1 in pp-general in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3041,2,av);}
/* extras.scm:469: tail2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3058(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6]);}

/* k3043 in k3032 in tail1 in pp-general in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3045,2,av);}
/* extras.scm:469: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2771(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* tail2 in pp-general in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_3058(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(41,0,4)))){
C_save_and_reclaim_args((void *)trf_3058,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(41);
t6=(C_truep(((C_word*)t0)[2])?C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=t7;
t9=t2;
t10=C_u_i_cdr(t9);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3072,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t10,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=t8,a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[5],a[10]=t5,a[11]=t4,tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_nullp(t10))){
t12=((C_word*)t0)[6];
t13=t11;
f_3072(t13,C_s_a_i_plus(&a,2,t12,C_fix(1)));}
else{
t12=t11;
f_3072(t12,C_fix(0));}}
else{
/* extras.scm:478: tail3 */
t7=((C_word*)((C_word*)t0)[3])[1];
f_3096(t7,t1,t2,t3,t4);}}

/* k3070 in tail2 in pp-general in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_3072(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_3072,2,t0,t1);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3079,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3083,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[7],a[5]=t2,a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:477: indent */
t5=((C_word*)((C_word*)t0)[9])[1];
f_2739(t5,t4,((C_word*)t0)[10],((C_word*)t0)[11]);}

/* k3077 in k3070 in tail2 in pp-general in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3079,2,av);}
/* extras.scm:477: tail3 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3096(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k3081 in k3070 in tail2 in pp-general in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3083,2,av);}
/* extras.scm:477: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2771(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* tail3 in pp-general in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_3096(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_3096,5,t0,t1,t2,t3,t4);}
/* extras.scm:481: pp-down */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2946(t5,t1,t2,t4,t3,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k3105 in pp-general in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3107(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(58,c,5)))){
C_save_and_reclaim((void *)f_3107,2,av);}
a=C_alloc(58);
t2=(C_truep(((C_word*)t0)[2])?C_i_pairp(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[3]);
t4=t3;
t5=C_u_i_cdr(((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3120,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3133,a[2]=((C_word*)t0)[7],a[3]=t6,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:489: out */
t8=((C_word*)((C_word*)t0)[8])[1];
f_2100(t8,t7,lf[108],t1);}
else{
t3=((C_word*)t0)[4];
t4=C_s_a_i_plus(&a,2,t3,C_fix(2));
t5=C_s_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:491: tail1 */
t6=((C_word*)((C_word*)t0)[5])[1];
f_3020(t6,((C_word*)t0)[6],((C_word*)t0)[3],t4,t1,t5);}}

/* k3118 in k3105 in pp-general in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(58,c,5)))){
C_save_and_reclaim((void *)f_3120,2,av);}
a=C_alloc(58);
t2=((C_word*)t0)[2];
t3=C_s_a_i_plus(&a,2,t2,C_fix(2));
t4=C_s_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:490: tail1 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_3020(t5,((C_word*)t0)[4],((C_word*)t0)[5],t3,t1,t4);}

/* k3131 in k3105 in pp-general in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3133,2,av);}
/* extras.scm:489: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2117(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3147 in pp-general in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3149,2,av);}
/* extras.scm:485: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2117(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* pp-expr-list in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3151(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3151,5,av);}
/* extras.scm:494: pp-list */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2937(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-lambda in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3157(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3157,5,av);}
/* extras.scm:497: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3017(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}

/* pp-if in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3163(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3163,5,av);}
/* extras.scm:500: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3017(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-cond in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3169(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3169,5,av);}
/* extras.scm:503: pp-call */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2912(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-case in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3175(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3175,5,av);}
/* extras.scm:506: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3017(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}

/* pp-and in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3181(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3181,5,av);}
/* extras.scm:509: pp-call */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2912(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-let in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3187(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3187,5,av);}
t5=C_i_cdr(t2);
if(C_truep(C_i_pairp(t5))){
t6=C_u_i_car(t5);
t7=C_i_symbolp(t6);
/* extras.scm:514: pp-general */
t8=((C_word*)((C_word*)t0)[2])[1];
f_3017(t8,t1,t2,t3,t4,t7,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}
else{
/* extras.scm:514: pp-general */
t6=((C_word*)((C_word*)t0)[2])[1];
f_3017(t6,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}}

/* pp-begin in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3207(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3207,5,av);}
/* extras.scm:517: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3017(t5,t1,t2,t3,t4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-do in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3213(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3213,5,av);}
/* extras.scm:520: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3017(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);}

/* style in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_3222(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3222,3,t0,t1,t2);}
a=C_alloc(12);
t3=t2;
t4=C_eqp(t3,lf[110]);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3232,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t4)){
t6=t5;
f_3232(t6,t4);}
else{
t6=C_eqp(t3,lf[120]);
if(C_truep(t6)){
t7=t5;
f_3232(t7,t6);}
else{
t7=C_eqp(t3,lf[121]);
if(C_truep(t7)){
t8=t5;
f_3232(t8,t7);}
else{
t8=C_eqp(t3,lf[122]);
t9=t5;
f_3232(t9,(C_truep(t8)?t8:C_eqp(t3,lf[123])));}}}}

/* k3230 in style in pp in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_fcall f_3232(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_3232,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[111]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[112]));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[5])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[4],lf[113]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t5;
av2[1]=((C_word*)((C_word*)t0)[6])[1];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(((C_word*)t0)[4],lf[114]);
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=((C_word*)((C_word*)t0)[7])[1];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(((C_word*)t0)[4],lf[115]);
t7=(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[116]));
if(C_truep(t7)){
t8=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t8;
av2[1]=((C_word*)((C_word*)t0)[8])[1];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_eqp(((C_word*)t0)[4],lf[117]);
if(C_truep(t8)){
t9=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t9;
av2[1]=((C_word*)((C_word*)t0)[9])[1];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=C_eqp(((C_word*)t0)[4],lf[118]);
if(C_truep(t9)){
t10=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t10;
av2[1]=((C_word*)((C_word*)t0)[10])[1];
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t10=C_eqp(((C_word*)t0)[4],lf[119]);
t11=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t11;
av2[1]=(C_truep(t10)?((C_word*)((C_word*)t0)[11])[1]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}}}}}}}

/* k3346 in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3348,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:545: pp */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2706(t4,t3,((C_word*)t0)[5],C_fix(0));}

/* k3350 in k3346 in chicken.pretty-print#generic-write in k1072 in k1069 */
static void C_ccall f_3352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3352,2,av);}
/* extras.scm:545: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2100(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3359 in k1072 in k1069 */
static void C_ccall f_3361(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,6)))){
C_save_and_reclaim((void *)f_3361,2,av);}
a=C_alloc(29);
t2=C_mutate((C_word*)lf[124]+1 /* (set! chicken.pretty-print#pretty-print-width ...) */,t1);
t3=C_mutate((C_word*)lf[125]+1 /* (set! chicken.pretty-print#pretty-print ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3363,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[127]+1 /* (set! chicken.pretty-print#pp ...) */,*((C_word*)lf[125]+1));
t5=C_a_i_provide(&a,1,lf[128]);
t6=C_mutate(&lf[129] /* (set! chicken.format#fprintf0 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3387,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[137]+1 /* (set! chicken.format#fprintf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3707,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[139]+1 /* (set! chicken.format#printf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3713,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[141]+1 /* (set! chicken.format#sprintf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3719,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[143]+1 /* (set! chicken.format#format ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3725,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3768,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:640: chicken.platform#register-feature! */
t12=*((C_word*)lf[161]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=lf[162];
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}

/* chicken.pretty-print#pretty-print in k3359 in k1072 in k1069 */
static void C_ccall f_3363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_3363,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3367,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_3367(t6,C_u_i_car(t5));}
else{
t5=t4;
f_3367(t5,*((C_word*)lf[19]+1));}}

/* k3365 in chicken.pretty-print#pretty-print in k3359 in k1072 in k1069 */
static void C_fcall f_3367(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3367,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3370,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3374,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:555: pretty-print-width */
t5=*((C_word*)lf[124]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k3368 in k3365 in chicken.pretty-print#pretty-print in k3359 in k1072 in k1069 */
static void C_ccall f_3370(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3370,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3372 in k3365 in chicken.pretty-print#pretty-print in k3359 in k1072 in k1069 */
static void C_ccall f_3374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3374,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3376,a[2]=((C_word*)t0)[2],a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp);
/* extras.scm:555: generic-write */
f_1996(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,t1,t2);}

/* a3375 in k3372 in k3365 in chicken.pretty-print#pretty-print in k3359 in k1072 in k1069 */
static void C_ccall f_3376(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3376,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3380,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:555: scheme#display */
t4=*((C_word*)lf[126]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3378 in a3375 in k3372 in k3365 in chicken.pretty-print#pretty-print in k3359 in k1072 in k1069 */
static void C_ccall f_3380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3380,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static void C_fcall f_3387(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3387,5,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3391,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t3)){
t7=t3;
t8=t2;
t9=t6;
f_3391(t9,C_i_check_port_2(t7,C_fix(2),C_SCHEME_TRUE,t8));}
else{
t7=t6;
f_3391(t7,C_SCHEME_UNDEFINED);}}

/* k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static void C_fcall f_3391(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_3391,2,t0,t1);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3394,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3696,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
/* extras.scm:571: ##sys#tty-port? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[136]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[136]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
/* extras.scm:573: chicken.base#open-output-string */
t4=*((C_word*)lf[30]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3392 in k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static void C_ccall f_3394(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3394,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3397,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3425,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t5,a[5]=((C_word)li65),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3425(t7,t3,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3395 in k3392 in k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static void C_ccall f_3397(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3397,2,av);}
a=C_alloc(4);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
/* extras.scm:617: chicken.base#get-output-string */
t2=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],((C_word*)t0)[2]);
if(C_truep(C_i_not(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3419,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:619: chicken.base#get-output-string */
t4=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* k3417 in k3395 in k3392 in k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static void C_ccall f_3419(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3419,2,av);}
/* extras.scm:619: ##sys#print */
t2=*((C_word*)lf[66]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* rec in k3392 in k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static void C_fcall f_3425(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_3425,4,t0,t1,t2,t3);}
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
t14=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3434,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t15=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3441,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word)li62),tmp=(C_word)a,a+=5,tmp));
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3460,a[2]=t7,a[3]=t9,a[4]=t11,a[5]=t17,a[6]=((C_word*)t0)[3],a[7]=t13,a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[4],a[10]=((C_word)li64),tmp=(C_word)a,a+=11,tmp));
t19=((C_word*)t17)[1];
f_3460(t19,t1);}

/* fetch in rec in k3392 in k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static C_word C_fcall f_3434(C_word t0){
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

/* next in rec in k3392 in k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static void C_fcall f_3441(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_3441,2,t0,t1);}
if(C_truep(C_eqp(((C_word*)((C_word*)t0)[2])[1],C_SCHEME_END_OF_LIST))){
/* extras.scm:584: ##sys#error */
t2=*((C_word*)lf[130]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[131];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(0));
t3=C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* loop in rec in k3392 in k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static void C_fcall f_3460(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_3460,2,t0,t1);}
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
  /* extras.scm:590: fetch */
  f_3434(((C_word*)((C_word*)t0)[4])[1])
);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3473,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(t2,C_make_character(126));
t5=(C_truep(t4)?C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(
  /* extras.scm:592: fetch */
  f_3434(((C_word*)((C_word*)t0)[4])[1])
);
t7=C_u_i_char_upcase(t6);
switch(t7){
case C_make_character(83):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3498,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:594: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3441(t9,t8);
case C_make_character(65):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3511,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:595: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3441(t9,t8);
case C_make_character(67):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3524,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:596: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3441(t9,t8);
case C_make_character(66):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3537,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3541,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:597: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_3441(t10,t9);
case C_make_character(79):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3554,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3558,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:598: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_3441(t10,t9);
case C_make_character(88):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3571,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3575,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:599: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_3441(t10,t9);
case C_make_character(33):
/* extras.scm:600: ##sys#flush-output */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[133]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[133]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}
case C_make_character(63):
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3593,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:602: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3441(t9,t8);
case C_make_character(126):
/* extras.scm:606: ##sys#write-char-0 */
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
/* extras.scm:607: scheme#newline */
t10=*((C_word*)lf[134]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
if(C_truep(C_u_i_char_whitespacep(t6))){
t10=(
  /* extras.scm:610: fetch */
  f_3434(((C_word*)((C_word*)t0)[4])[1])
);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3638,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word)li63),tmp=(C_word)a,a+=5,tmp);
t12=(
  f_3638(t11,t10)
);
/* extras.scm:616: loop */
t24=t1;
t1=t24;
goto loop;}
else{
/* extras.scm:614: ##sys#error */
t10=*((C_word*)lf[130]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=lf[135];
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}}}
else{
/* extras.scm:615: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[21]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}}}

/* k3471 in loop in rec in k3392 in k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static void C_ccall f_3473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3473,2,av);}
/* extras.scm:616: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3460(t2,((C_word*)t0)[3]);}

/* k3496 in loop in rec in k3392 in k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static void C_ccall f_3498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3498,2,av);}
/* extras.scm:594: scheme#write */
t2=*((C_word*)lf[132]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3509 in loop in rec in k3392 in k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static void C_ccall f_3511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3511,2,av);}
/* extras.scm:595: scheme#display */
t2=*((C_word*)lf[126]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3522 in loop in rec in k3392 in k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static void C_ccall f_3524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3524,2,av);}
/* extras.scm:596: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k3535 in loop in rec in k3392 in k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static void C_ccall f_3537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3537,2,av);}
/* extras.scm:597: scheme#display */
t2=*((C_word*)lf[126]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3539 in loop in rec in k3392 in k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static void C_ccall f_3541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3541,2,av);}
/* extras.scm:597: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[65]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(2);
tp(4,av2);}}

/* k3552 in loop in rec in k3392 in k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static void C_ccall f_3554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3554,2,av);}
/* extras.scm:598: scheme#display */
t2=*((C_word*)lf[126]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3556 in loop in rec in k3392 in k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static void C_ccall f_3558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3558,2,av);}
/* extras.scm:598: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[65]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(8);
tp(4,av2);}}

/* k3569 in loop in rec in k3392 in k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static void C_ccall f_3571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3571,2,av);}
/* extras.scm:599: scheme#display */
t2=*((C_word*)lf[126]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3573 in loop in rec in k3392 in k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static void C_ccall f_3575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3575,2,av);}
/* extras.scm:599: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[65]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(16);
tp(4,av2);}}

/* k3591 in loop in rec in k3392 in k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static void C_ccall f_3593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3593,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:603: next */
t4=((C_word*)((C_word*)t0)[6])[1];
f_3441(t4,t3);}

/* k3594 in k3591 in loop in rec in k3392 in k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static void C_ccall f_3596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3596,2,av);}
a=C_alloc(4);
t2=C_i_check_list_2(t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3602,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:605: rec */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3425(t4,t3,((C_word*)t0)[6],t1);}

/* k3600 in k3594 in k3591 in loop in rec in k3392 in k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static void C_ccall f_3602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3602,2,av);}
/* extras.scm:616: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3460(t2,((C_word*)t0)[3]);}

/* skip in loop in rec in k3392 in k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static C_word C_fcall f_3638(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_u_i_char_whitespacep(t1))){
t2=(
  /* extras.scm:612: fetch */
  f_3434(((C_word*)((C_word*)t0)[2])[1])
);
t5=t2;
t1=t5;
goto loop;}
else{
t2=C_fixnum_difference(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_set_block_item(((C_word*)t0)[3],0,t2);
return(t3);}}

/* k3694 in k3389 in chicken.format#fprintf0 in k3359 in k1072 in k1069 */
static void C_ccall f_3696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3696,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_3394(2,av2);}}
else{
/* extras.scm:573: chicken.base#open-output-string */
t2=*((C_word*)lf[30]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.format#fprintf in k3359 in k1072 in k1069 */
static void C_ccall f_3707(C_word c,C_word *av){
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
C_save_and_reclaim((void*)f_3707,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+0);
t4=C_build_rest(&a,c,4,av);
C_word t5;
/* extras.scm:622: fprintf0 */
f_3387(t1,lf[138],t2,t3,t4);}

/* chicken.format#printf in k3359 in k1072 in k1069 */
static void C_ccall f_3713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_3713,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
/* extras.scm:625: fprintf0 */
f_3387(t1,lf[140],*((C_word*)lf[19]+1),t2,t3);}

/* chicken.format#sprintf in k3359 in k1072 in k1069 */
static void C_ccall f_3719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_3719,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
/* extras.scm:628: fprintf0 */
f_3387(t1,lf[142],C_SCHEME_FALSE,t2,t3);}

/* chicken.format#format in k3359 in k1072 in k1069 */
static void C_ccall f_3725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +12,c,3)))){
C_save_and_reclaim((void*)f_3725,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+12);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3733,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_not(t2))){{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[141]+1);
av2[3]=((C_word*)t4)[1];
C_apply(4,av2);}}
else{
if(C_truep(C_booleanp(t2))){{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[139]+1);
av2[3]=((C_word*)t4)[1];
C_apply(4,av2);}}
else{
if(C_truep(C_i_stringp(t2))){
t6=C_a_i_cons(&a,2,t2,((C_word*)t4)[1]);
t7=C_set_block_item(t4,0,t6);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[141]+1);
av2[3]=((C_word*)t4)[1];
C_apply(4,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3758,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:635: scheme#output-port? */
t7=*((C_word*)lf[146]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}}}

/* k3731 in chicken.format#format in k3359 in k1072 in k1069 */
static void C_ccall f_3733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3733,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)((C_word*)t0)[3])[1];
C_apply(4,av2);}}

/* k3756 in chicken.format#format in k3359 in k1072 in k1069 */
static void C_ccall f_3758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3758,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=*((C_word*)lf[137]+1);
av2[3]=((C_word*)((C_word*)t0)[3])[1];
C_apply(4,av2);}}
else{
/* extras.scm:637: ##sys#error */
t2=*((C_word*)lf[130]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[144];
av2[3]=lf[145];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k3766 in k3359 in k1072 in k1069 */
static void C_ccall f_3768(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_3768,2,av);}
a=C_alloc(21);
t2=C_a_i_provide(&a,1,lf[147]);
t3=C_mutate((C_word*)lf[148]+1 /* (set! chicken.random#set-pseudo-random-seed! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3770,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[152]+1 /* (set! chicken.random#pseudo-random-integer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3809,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[155]+1 /* (set! chicken.random#pseudo-random-real ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3825,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t6=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_RANDOM_STATE_SIZE);
t7=C_mutate((C_word*)lf[156]+1 /* (set! chicken.random#random-bytes ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3828,a[2]=t6,a[3]=((C_word)li74),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* chicken.random#set-pseudo-random-seed! in k3766 in k3359 in k1072 in k1069 */
static void C_ccall f_3770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +11,c,3)))){
C_save_and_reclaim((void*)f_3770,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+11);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3777,a[2]=t2,a[3]=t7,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t7)[1])){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3791,a[2]=t7,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:651: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t9;
av2[2]=((C_word*)t7)[1];
av2[3]=lf[149];
tp(4,av2);}}
else{
t9=C_block_size(t2);
t10=C_set_block_item(t7,0,t9);
t11=t8;{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
f_3777(2,av2);}}}

/* k3775 in chicken.random#set-pseudo-random-seed! in k3766 in k3359 in k1072 in k1069 */
static void C_ccall f_3777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3777,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[2]))){
t3=C_block_size(((C_word*)t0)[2]);
t4=C_i_fixnum_min(((C_word*)((C_word*)t0)[3])[1],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_set_random_seed(((C_word*)t0)[2],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* extras.scm:656: ##sys#error */
t3=*((C_word*)lf[130]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[149];
av2[3]=lf[150];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k3778 in k3775 in chicken.random#set-pseudo-random-seed! in k3766 in k3359 in k1072 in k1069 */
static void C_ccall f_3780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3780,2,av);}
t2=C_block_size(((C_word*)t0)[2]);
t3=C_i_fixnum_min(((C_word*)((C_word*)t0)[3])[1],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_set_random_seed(((C_word*)t0)[2],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3789 in chicken.random#set-pseudo-random-seed! in k3766 in k3359 in k1072 in k1069 */
static void C_ccall f_3791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3791,2,av);}
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
/* extras.scm:653: ##sys#error */
t2=*((C_word*)lf[130]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[149];
av2[3]=lf[151];
av2[4]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_3777(2,av2);}}}

/* chicken.random#pseudo-random-integer in k3766 in k3359 in k1072 in k1069 */
static void C_ccall f_3809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_3809,3,av);}
a=C_alloc(2);
if(C_truep(C_fixnump(t2))){
t3=C_random_fixnum(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_bignump(t2);
if(C_truep(C_i_not(t3))){
/* extras.scm:666: ##sys#error */
t4=*((C_word*)lf[130]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[153];
av2[3]=lf[154];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_s_a_u_i_random_int(&a,1,t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* chicken.random#pseudo-random-real in k3766 in k3359 in k1072 in k1069 */
static void C_ccall f_3825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,1)))){
C_save_and_reclaim((void *)f_3825,2,av);}
a=C_alloc(2);
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_random_real(&a,0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.random#random-bytes in k3766 in k3359 in k1072 in k1069 */
static void C_ccall f_3828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_3828,c,av);}
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
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=t4;
t6=C_i_nullp(t2);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=t9;
t11=C_i_nullp(t7);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3844,a[2]=t10,a[3]=t5,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t10)){
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3892,a[2]=t10,a[3]=t13,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:677: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t14;
av2[2]=t10;
av2[3]=lf[157];
tp(4,av2);}}
else{
t14=t13;{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_SCHEME_UNDEFINED;
f_3844(2,av2);}}}

/* k3842 in chicken.random#random-bytes in k3766 in k3359 in k1072 in k1069 */
static void C_ccall f_3844(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_3844,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3847,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3869,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_immp(((C_word*)t0)[3]);
if(C_truep(t4)){
if(C_truep(t4)){
/* extras.scm:683: ##sys#error */
t5=*((C_word*)lf[130]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[157];
av2[3]=lf[159];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
f_3847(2,av2);}}}
else{
t5=C_byteblockp(((C_word*)t0)[3]);
if(C_truep(C_i_not(t5))){
/* extras.scm:683: ##sys#error */
t6=*((C_word*)lf[130]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=lf[157];
av2[3]=lf[159];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t6=t2;{
C_word *av2=av;
av2[0]=t6;
av2[1]=((C_word*)t0)[3];
f_3847(2,av2);}}}}
else{
if(C_truep(((C_word*)t0)[2])){
/* extras.scm:686: scheme#make-string */
t3=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* extras.scm:686: scheme#make-string */
t3=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}

/* k3845 in k3842 in chicken.random#random-bytes in k3766 in k3359 in k1072 in k1069 */
static void C_ccall f_3847(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3847,2,av);}
a=C_alloc(5);
t2=t1;
t3=(C_truep(((C_word*)t0)[2])?((C_word*)t0)[2]:C_block_size(t2));
t4=C_random_bytes(t2,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3854,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_3854(2,av2);}}
else{
/* extras.scm:690: ##sys#error */
t6=*((C_word*)lf[130]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[157];
av2[3]=lf[158];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k3852 in k3845 in k3842 in chicken.random#random-bytes in k3766 in k3359 in k1072 in k1069 */
static void C_ccall f_3854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3854,2,av);}
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_string_to_bytevector(((C_word*)t0)[3]);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3867 in k3842 in chicken.random#random-bytes in k3766 in k3359 in k1072 in k1069 */
static void C_ccall f_3869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3869,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_3847(2,av2);}}

/* k3890 in chicken.random#random-bytes in k3766 in k3359 in k1072 in k1069 */
static void C_ccall f_3892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3892,2,av);}
if(C_truep(C_i_lessp(((C_word*)t0)[2],C_fix(0)))){
/* extras.scm:679: ##sys#error */
t2=*((C_word*)lf[130]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[157];
av2[3]=lf[160];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_3844(2,av2);}}}

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
else C_toplevel_entry(C_text("extras"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_extras_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(784))){
C_save(t1);
C_rereclaim2(784*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,164);
lf[0]=C_h_intern(&lf[0],6, C_text("extras"));
lf[1]=C_h_intern(&lf[1],11, C_text("chicken.io#"));
lf[2]=C_h_intern(&lf[2],11, C_text("scheme#read"));
lf[3]=C_h_intern(&lf[3],20, C_text("chicken.io#read-list"));
lf[4]=C_h_intern(&lf[4],18, C_text("\003sysstandard-input"));
lf[5]=C_h_intern(&lf[5],9, C_text("read-list"));
lf[6]=C_h_intern(&lf[6],16, C_text("\003sysfast-reverse"));
lf[7]=C_h_intern(&lf[7],20, C_text("chicken.io#read-line"));
lf[8]=C_h_intern(&lf[8],9, C_text("read-line"));
lf[9]=C_h_intern(&lf[9],13, C_text("\003syssubstring"));
lf[10]=C_h_intern(&lf[10],15, C_text("\003sysread-char-0"));
lf[11]=C_h_intern(&lf[11],16, C_text("scheme#peek-char"));
lf[12]=C_h_intern(&lf[12],17, C_text("\003sysstring-append"));
lf[13]=C_h_intern(&lf[13],18, C_text("scheme#make-string"));
lf[14]=C_h_intern(&lf[14],15, C_text("\003sysmake-string"));
lf[15]=C_h_intern(&lf[15],21, C_text("chicken.io#read-lines"));
lf[16]=C_h_intern(&lf[16],35, C_text("chicken.fixnum#most-positive-fixnum"));
lf[17]=C_h_intern(&lf[17],10, C_text("read-lines"));
lf[18]=C_h_intern(&lf[18],21, C_text("chicken.io#write-line"));
lf[19]=C_h_intern(&lf[19],19, C_text("\003sysstandard-output"));
lf[20]=C_h_intern(&lf[20],10, C_text("write-line"));
lf[21]=C_h_intern(&lf[21],16, C_text("\003syswrite-char-0"));
lf[22]=C_h_intern(&lf[22],28, C_text("chicken.io#read-string!/port"));
lf[23]=C_h_intern(&lf[23],23, C_text("chicken.io#read-string!"));
lf[24]=C_h_intern(&lf[24],12, C_text("read-string!"));
lf[25]=C_h_intern(&lf[25],16, C_text("\003syscheck-fixnum"));
lf[26]=C_h_intern(&lf[26],27, C_text("chicken.io#read-string/port"));
lf[27]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[28]=C_h_intern(&lf[28],30, C_text("chicken.base#get-output-string"));
lf[29]=C_h_intern(&lf[29],23, C_text("chicken.io#write-string"));
lf[30]=C_h_intern(&lf[30],31, C_text("chicken.base#open-output-string"));
lf[31]=C_h_intern(&lf[31],15, C_text("\003syspeek-char-0"));
lf[32]=C_h_intern(&lf[32],22, C_text("chicken.io#read-string"));
lf[33]=C_h_intern(&lf[33],11, C_text("read-string"));
lf[34]=C_h_intern(&lf[34],24, C_text("chicken.io#read-buffered"));
lf[35]=C_h_intern(&lf[35],13, C_text("read-buffered"));
lf[36]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[37]=C_h_intern(&lf[37],21, C_text("chicken.io#read-token"));
lf[38]=C_h_intern(&lf[38],10, C_text("read-token"));
lf[39]=C_h_intern(&lf[39],12, C_text("write-string"));
lf[40]=C_h_intern(&lf[40],20, C_text("chicken.io#read-byte"));
lf[41]=C_h_intern(&lf[41],9, C_text("read-byte"));
lf[42]=C_h_intern(&lf[42],21, C_text("chicken.io#write-byte"));
lf[43]=C_h_intern(&lf[43],10, C_text("write-byte"));
lf[44]=C_h_intern(&lf[44],21, C_text("chicken.pretty-print#"));
lf[46]=C_h_intern(&lf[46],5, C_text("quote"));
lf[47]=C_h_intern(&lf[47],10, C_text("quasiquote"));
lf[48]=C_h_intern(&lf[48],7, C_text("unquote"));
lf[49]=C_h_intern(&lf[49],16, C_text("unquote-splicing"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\047"));
lf[51]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001`"));
lf[52]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001,"));
lf[53]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002,@"));
lf[54]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001 "));
lf[55]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001)"));
lf[56]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001)"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003 . "));
lf[58]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001("));
lf[59]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002()"));
lf[60]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005#!eof"));
lf[61]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001#"));
lf[62]=C_h_intern(&lf[62],19, C_text("scheme#vector->list"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002#t"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002#f"));
lf[65]=C_h_intern(&lf[65],18, C_text("\003sysnumber->string"));
lf[66]=C_h_intern(&lf[66],9, C_text("\003sysprint"));
lf[67]=C_h_intern(&lf[67],21, C_text("\003sysprocedure->string"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\134"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\011\376B\000\000\002\134t\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\012\376B\000\000\002\134n\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\015\376B\000\000\002\134r\376\003\000\000\002\376\003\000\000\002\376"
"\377\012\000\000\013\376B\000\000\002\134v\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\014\376B\000\000\002\134f\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\007\376B\000\000\002\134a\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\010\376B\000\000\002\134"
"b\376\377\016"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0010"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[72]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002\134x"));
lf[73]=C_h_intern(&lf[73],18, C_text("\003sysfixnum->string"));
lf[74]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\042"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\042"));
lf[76]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001x"));
lf[77]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001U"));
lf[78]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001u"));
lf[79]=C_h_intern(&lf[79],22, C_text("chicken.base#char-name"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002#\134"));
lf[81]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016#<unspecified>"));
lf[82]=C_h_intern(&lf[82],19, C_text("\003syspointer->string"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020#<unbound value>"));
lf[84]=C_h_intern(&lf[84],19, C_text("\003sysuser-print-hook"));
lf[85]=C_h_intern(&lf[85],20, C_text("scheme#string-append"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007#<port "));
lf[87]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001>"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001}"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0010"));
lf[90]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003#${"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001>"));
lf[92]=C_h_intern(&lf[92],23, C_text("\003syslambda-info->string"));
lf[93]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016#<lambda info "));
lf[94]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025#<unprintable object>"));
lf[95]=C_h_intern(&lf[95],18, C_text("chicken.base#port\077"));
lf[96]=C_h_intern(&lf[96],11, C_text("\003sysnumber\077"));
lf[97]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010        "));
lf[98]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010        "));
lf[99]=C_h_intern(&lf[99],36, C_text("chicken.string#reverse-string-append"));
lf[100]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001#"));
lf[101]=C_h_intern(&lf[101],10, C_text("scheme#max"));
lf[102]=C_h_intern(&lf[102],28, C_text("\003syssymbol->qualified-string"));
lf[103]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001("));
lf[104]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001("));
lf[105]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001)"));
lf[106]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001)"));
lf[107]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[108]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001 "));
lf[109]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001("));
lf[110]=C_h_intern(&lf[110],6, C_text("lambda"));
lf[111]=C_h_intern(&lf[111],2, C_text("if"));
lf[112]=C_h_intern(&lf[112],4, C_text("set!"));
lf[113]=C_h_intern(&lf[113],4, C_text("cond"));
lf[114]=C_h_intern(&lf[114],4, C_text("case"));
lf[115]=C_h_intern(&lf[115],3, C_text("and"));
lf[116]=C_h_intern(&lf[116],2, C_text("or"));
lf[117]=C_h_intern(&lf[117],3, C_text("let"));
lf[118]=C_h_intern(&lf[118],5, C_text("begin"));
lf[119]=C_h_intern(&lf[119],2, C_text("do"));
lf[120]=C_h_intern(&lf[120],4, C_text("let\052"));
lf[121]=C_h_intern(&lf[121],6, C_text("letrec"));
lf[122]=C_h_intern(&lf[122],7, C_text("letrec\052"));
lf[123]=C_h_intern(&lf[123],6, C_text("define"));
lf[124]=C_h_intern(&lf[124],39, C_text("chicken.pretty-print#pretty-print-width"));
lf[125]=C_h_intern(&lf[125],33, C_text("chicken.pretty-print#pretty-print"));
lf[126]=C_h_intern(&lf[126],14, C_text("scheme#display"));
lf[127]=C_h_intern(&lf[127],23, C_text("chicken.pretty-print#pp"));
lf[128]=C_h_intern(&lf[128],15, C_text("chicken.format#"));
lf[130]=C_h_intern(&lf[130],9, C_text("\003syserror"));
lf[131]=C_decode_literal(C_heaptop,C_text("\376B\000\000/too few arguments to formatted output procedure"));
lf[132]=C_h_intern(&lf[132],12, C_text("scheme#write"));
lf[133]=C_h_intern(&lf[133],16, C_text("\003sysflush-output"));
lf[134]=C_h_intern(&lf[134],14, C_text("scheme#newline"));
lf[135]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037illegal format-string character"));
lf[136]=C_h_intern(&lf[136],13, C_text("\003systty-port\077"));
lf[137]=C_h_intern(&lf[137],22, C_text("chicken.format#fprintf"));
lf[138]=C_h_intern(&lf[138],7, C_text("fprintf"));
lf[139]=C_h_intern(&lf[139],21, C_text("chicken.format#printf"));
lf[140]=C_h_intern(&lf[140],6, C_text("printf"));
lf[141]=C_h_intern(&lf[141],22, C_text("chicken.format#sprintf"));
lf[142]=C_h_intern(&lf[142],7, C_text("sprintf"));
lf[143]=C_h_intern(&lf[143],21, C_text("chicken.format#format"));
lf[144]=C_h_intern(&lf[144],6, C_text("format"));
lf[145]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023illegal destination"));
lf[146]=C_h_intern(&lf[146],19, C_text("scheme#output-port\077"));
lf[147]=C_h_intern(&lf[147],15, C_text("chicken.random#"));
lf[148]=C_h_intern(&lf[148],38, C_text("chicken.random#set-pseudo-random-seed!"));
lf[149]=C_h_intern(&lf[149],23, C_text("set-pseudo-random-seed!"));
lf[150]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023invalid buffer type"));
lf[151]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014invalid size"));
lf[152]=C_h_intern(&lf[152],36, C_text("chicken.random#pseudo-random-integer"));
lf[153]=C_h_intern(&lf[153],21, C_text("pseudo-random-integer"));
lf[154]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021bad argument type"));
lf[155]=C_h_intern(&lf[155],33, C_text("chicken.random#pseudo-random-real"));
lf[156]=C_h_intern(&lf[156],27, C_text("chicken.random#random-bytes"));
lf[157]=C_h_intern(&lf[157],12, C_text("random-bytes"));
lf[158]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033unable to read random bytes"));
lf[159]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023invalid buffer type"));
lf[160]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014invalid size"));
lf[161]=C_h_intern(&lf[161],34, C_text("chicken.platform#register-feature!"));
lf[162]=C_h_intern(&lf[162],7, C_text("srfi-28"));
lf[163]=C_h_intern(&lf[163],27, C_text("chicken.base#make-parameter"));
C_register_lf2(lf,164,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1071,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[241] = {
{C_text("f_1071:extras_2escm"),(void*)f_1071},
{C_text("f_1074:extras_2escm"),(void*)f_1074},
{C_text("f_1076:extras_2escm"),(void*)f_1076},
{C_text("f_1105:extras_2escm"),(void*)f_1105},
{C_text("f_1107:extras_2escm"),(void*)f_1107},
{C_text("f_1127:extras_2escm"),(void*)f_1127},
{C_text("f_1179:extras_2escm"),(void*)f_1179},
{C_text("f_1189:extras_2escm"),(void*)f_1189},
{C_text("f_1199:extras_2escm"),(void*)f_1199},
{C_text("f_1212:extras_2escm"),(void*)f_1212},
{C_text("f_1217:extras_2escm"),(void*)f_1217},
{C_text("f_1230:extras_2escm"),(void*)f_1230},
{C_text("f_1263:extras_2escm"),(void*)f_1263},
{C_text("f_1272:extras_2escm"),(void*)f_1272},
{C_text("f_1281:extras_2escm"),(void*)f_1281},
{C_text("f_1295:extras_2escm"),(void*)f_1295},
{C_text("f_1303:extras_2escm"),(void*)f_1303},
{C_text("f_1332:extras_2escm"),(void*)f_1332},
{C_text("f_1357:extras_2escm"),(void*)f_1357},
{C_text("f_1370:extras_2escm"),(void*)f_1370},
{C_text("f_1416:extras_2escm"),(void*)f_1416},
{C_text("f_1432:extras_2escm"),(void*)f_1432},
{C_text("f_1444:extras_2escm"),(void*)f_1444},
{C_text("f_1462:extras_2escm"),(void*)f_1462},
{C_text("f_1466:extras_2escm"),(void*)f_1466},
{C_text("f_1521:extras_2escm"),(void*)f_1521},
{C_text("f_1525:extras_2escm"),(void*)f_1525},
{C_text("f_1528:extras_2escm"),(void*)f_1528},
{C_text("f_1576:extras_2escm"),(void*)f_1576},
{C_text("f_1598:extras_2escm"),(void*)f_1598},
{C_text("f_1604:extras_2escm"),(void*)f_1604},
{C_text("f_1607:extras_2escm"),(void*)f_1607},
{C_text("f_1613:extras_2escm"),(void*)f_1613},
{C_text("f_1653:extras_2escm"),(void*)f_1653},
{C_text("f_1672:extras_2escm"),(void*)f_1672},
{C_text("f_1675:extras_2escm"),(void*)f_1675},
{C_text("f_1687:extras_2escm"),(void*)f_1687},
{C_text("f_1690:extras_2escm"),(void*)f_1690},
{C_text("f_1695:extras_2escm"),(void*)f_1695},
{C_text("f_1699:extras_2escm"),(void*)f_1699},
{C_text("f_1702:extras_2escm"),(void*)f_1702},
{C_text("f_1714:extras_2escm"),(void*)f_1714},
{C_text("f_1722:extras_2escm"),(void*)f_1722},
{C_text("f_1724:extras_2escm"),(void*)f_1724},
{C_text("f_1743:extras_2escm"),(void*)f_1743},
{C_text("f_1777:extras_2escm"),(void*)f_1777},
{C_text("f_1805:extras_2escm"),(void*)f_1805},
{C_text("f_1815:extras_2escm"),(void*)f_1815},
{C_text("f_1820:extras_2escm"),(void*)f_1820},
{C_text("f_1824:extras_2escm"),(void*)f_1824},
{C_text("f_1830:extras_2escm"),(void*)f_1830},
{C_text("f_1833:extras_2escm"),(void*)f_1833},
{C_text("f_1840:extras_2escm"),(void*)f_1840},
{C_text("f_1861:extras_2escm"),(void*)f_1861},
{C_text("f_1866:extras_2escm"),(void*)f_1866},
{C_text("f_1873:extras_2escm"),(void*)f_1873},
{C_text("f_1883:extras_2escm"),(void*)f_1883},
{C_text("f_1886:extras_2escm"),(void*)f_1886},
{C_text("f_1904:extras_2escm"),(void*)f_1904},
{C_text("f_1909:extras_2escm"),(void*)f_1909},
{C_text("f_1944:extras_2escm"),(void*)f_1944},
{C_text("f_1954:extras_2escm"),(void*)f_1954},
{C_text("f_1971:extras_2escm"),(void*)f_1971},
{C_text("f_1978:extras_2escm"),(void*)f_1978},
{C_text("f_1996:extras_2escm"),(void*)f_1996},
{C_text("f_1999:extras_2escm"),(void*)f_1999},
{C_text("f_2027:extras_2escm"),(void*)f_2027},
{C_text("f_2061:extras_2escm"),(void*)f_2061},
{C_text("f_2100:extras_2escm"),(void*)f_2100},
{C_text("f_2110:extras_2escm"),(void*)f_2110},
{C_text("f_2117:extras_2escm"),(void*)f_2117},
{C_text("f_2120:extras_2escm"),(void*)f_2120},
{C_text("f_2127:extras_2escm"),(void*)f_2127},
{C_text("f_2138:extras_2escm"),(void*)f_2138},
{C_text("f_2147:extras_2escm"),(void*)f_2147},
{C_text("f_2163:extras_2escm"),(void*)f_2163},
{C_text("f_2165:extras_2escm"),(void*)f_2165},
{C_text("f_2187:extras_2escm"),(void*)f_2187},
{C_text("f_2193:extras_2escm"),(void*)f_2193},
{C_text("f_2209:extras_2escm"),(void*)f_2209},
{C_text("f_2213:extras_2escm"),(void*)f_2213},
{C_text("f_2222:extras_2escm"),(void*)f_2222},
{C_text("f_2265:extras_2escm"),(void*)f_2265},
{C_text("f_2269:extras_2escm"),(void*)f_2269},
{C_text("f_2288:extras_2escm"),(void*)f_2288},
{C_text("f_2295:extras_2escm"),(void*)f_2295},
{C_text("f_2304:extras_2escm"),(void*)f_2304},
{C_text("f_2307:extras_2escm"),(void*)f_2307},
{C_text("f_2314:extras_2escm"),(void*)f_2314},
{C_text("f_2327:extras_2escm"),(void*)f_2327},
{C_text("f_2346:extras_2escm"),(void*)f_2346},
{C_text("f_2348:extras_2escm"),(void*)f_2348},
{C_text("f_2355:extras_2escm"),(void*)f_2355},
{C_text("f_2376:extras_2escm"),(void*)f_2376},
{C_text("f_2380:extras_2escm"),(void*)f_2380},
{C_text("f_2384:extras_2escm"),(void*)f_2384},
{C_text("f_2407:extras_2escm"),(void*)f_2407},
{C_text("f_2412:extras_2escm"),(void*)f_2412},
{C_text("f_2413:extras_2escm"),(void*)f_2413},
{C_text("f_2431:extras_2escm"),(void*)f_2431},
{C_text("f_2435:extras_2escm"),(void*)f_2435},
{C_text("f_2443:extras_2escm"),(void*)f_2443},
{C_text("f_2454:extras_2escm"),(void*)f_2454},
{C_text("f_2472:extras_2escm"),(void*)f_2472},
{C_text("f_2476:extras_2escm"),(void*)f_2476},
{C_text("f_2499:extras_2escm"),(void*)f_2499},
{C_text("f_2507:extras_2escm"),(void*)f_2507},
{C_text("f_2510:extras_2escm"),(void*)f_2510},
{C_text("f_2514:extras_2escm"),(void*)f_2514},
{C_text("f_2534:extras_2escm"),(void*)f_2534},
{C_text("f_2541:extras_2escm"),(void*)f_2541},
{C_text("f_2552:extras_2escm"),(void*)f_2552},
{C_text("f_2559:extras_2escm"),(void*)f_2559},
{C_text("f_2575:extras_2escm"),(void*)f_2575},
{C_text("f_2593:extras_2escm"),(void*)f_2593},
{C_text("f_2608:extras_2escm"),(void*)f_2608},
{C_text("f_2611:extras_2escm"),(void*)f_2611},
{C_text("f_2618:extras_2escm"),(void*)f_2618},
{C_text("f_2624:extras_2escm"),(void*)f_2624},
{C_text("f_2631:extras_2escm"),(void*)f_2631},
{C_text("f_2641:extras_2escm"),(void*)f_2641},
{C_text("f_2647:extras_2escm"),(void*)f_2647},
{C_text("f_2652:extras_2escm"),(void*)f_2652},
{C_text("f_2665:extras_2escm"),(void*)f_2665},
{C_text("f_2668:extras_2escm"),(void*)f_2668},
{C_text("f_2679:extras_2escm"),(void*)f_2679},
{C_text("f_2691:extras_2escm"),(void*)f_2691},
{C_text("f_2694:extras_2escm"),(void*)f_2694},
{C_text("f_2701:extras_2escm"),(void*)f_2701},
{C_text("f_2706:extras_2escm"),(void*)f_2706},
{C_text("f_2709:extras_2escm"),(void*)f_2709},
{C_text("f_2730:extras_2escm"),(void*)f_2730},
{C_text("f_2737:extras_2escm"),(void*)f_2737},
{C_text("f_2739:extras_2escm"),(void*)f_2739},
{C_text("f_2754:extras_2escm"),(void*)f_2754},
{C_text("f_2761:extras_2escm"),(void*)f_2761},
{C_text("f_2771:extras_2escm"),(void*)f_2771},
{C_text("f_2784:extras_2escm"),(void*)f_2784},
{C_text("f_2787:extras_2escm"),(void*)f_2787},
{C_text("f_2799:extras_2escm"),(void*)f_2799},
{C_text("f_2815:extras_2escm"),(void*)f_2815},
{C_text("f_2819:extras_2escm"),(void*)f_2819},
{C_text("f_2821:extras_2escm"),(void*)f_2821},
{C_text("f_2849:extras_2escm"),(void*)f_2849},
{C_text("f_2856:extras_2escm"),(void*)f_2856},
{C_text("f_2867:extras_2escm"),(void*)f_2867},
{C_text("f_2883:extras_2escm"),(void*)f_2883},
{C_text("f_2907:extras_2escm"),(void*)f_2907},
{C_text("f_2912:extras_2escm"),(void*)f_2912},
{C_text("f_2916:extras_2escm"),(void*)f_2916},
{C_text("f_2935:extras_2escm"),(void*)f_2935},
{C_text("f_2937:extras_2escm"),(void*)f_2937},
{C_text("f_2941:extras_2escm"),(void*)f_2941},
{C_text("f_2946:extras_2escm"),(void*)f_2946},
{C_text("f_2952:extras_2escm"),(void*)f_2952},
{C_text("f_2966:extras_2escm"),(void*)f_2966},
{C_text("f_2973:extras_2escm"),(void*)f_2973},
{C_text("f_2979:extras_2escm"),(void*)f_2979},
{C_text("f_3000:extras_2escm"),(void*)f_3000},
{C_text("f_3004:extras_2escm"),(void*)f_3004},
{C_text("f_3011:extras_2escm"),(void*)f_3011},
{C_text("f_3015:extras_2escm"),(void*)f_3015},
{C_text("f_3017:extras_2escm"),(void*)f_3017},
{C_text("f_3020:extras_2escm"),(void*)f_3020},
{C_text("f_3034:extras_2escm"),(void*)f_3034},
{C_text("f_3041:extras_2escm"),(void*)f_3041},
{C_text("f_3045:extras_2escm"),(void*)f_3045},
{C_text("f_3058:extras_2escm"),(void*)f_3058},
{C_text("f_3072:extras_2escm"),(void*)f_3072},
{C_text("f_3079:extras_2escm"),(void*)f_3079},
{C_text("f_3083:extras_2escm"),(void*)f_3083},
{C_text("f_3096:extras_2escm"),(void*)f_3096},
{C_text("f_3107:extras_2escm"),(void*)f_3107},
{C_text("f_3120:extras_2escm"),(void*)f_3120},
{C_text("f_3133:extras_2escm"),(void*)f_3133},
{C_text("f_3149:extras_2escm"),(void*)f_3149},
{C_text("f_3151:extras_2escm"),(void*)f_3151},
{C_text("f_3157:extras_2escm"),(void*)f_3157},
{C_text("f_3163:extras_2escm"),(void*)f_3163},
{C_text("f_3169:extras_2escm"),(void*)f_3169},
{C_text("f_3175:extras_2escm"),(void*)f_3175},
{C_text("f_3181:extras_2escm"),(void*)f_3181},
{C_text("f_3187:extras_2escm"),(void*)f_3187},
{C_text("f_3207:extras_2escm"),(void*)f_3207},
{C_text("f_3213:extras_2escm"),(void*)f_3213},
{C_text("f_3222:extras_2escm"),(void*)f_3222},
{C_text("f_3232:extras_2escm"),(void*)f_3232},
{C_text("f_3348:extras_2escm"),(void*)f_3348},
{C_text("f_3352:extras_2escm"),(void*)f_3352},
{C_text("f_3361:extras_2escm"),(void*)f_3361},
{C_text("f_3363:extras_2escm"),(void*)f_3363},
{C_text("f_3367:extras_2escm"),(void*)f_3367},
{C_text("f_3370:extras_2escm"),(void*)f_3370},
{C_text("f_3374:extras_2escm"),(void*)f_3374},
{C_text("f_3376:extras_2escm"),(void*)f_3376},
{C_text("f_3380:extras_2escm"),(void*)f_3380},
{C_text("f_3387:extras_2escm"),(void*)f_3387},
{C_text("f_3391:extras_2escm"),(void*)f_3391},
{C_text("f_3394:extras_2escm"),(void*)f_3394},
{C_text("f_3397:extras_2escm"),(void*)f_3397},
{C_text("f_3419:extras_2escm"),(void*)f_3419},
{C_text("f_3425:extras_2escm"),(void*)f_3425},
{C_text("f_3434:extras_2escm"),(void*)f_3434},
{C_text("f_3441:extras_2escm"),(void*)f_3441},
{C_text("f_3460:extras_2escm"),(void*)f_3460},
{C_text("f_3473:extras_2escm"),(void*)f_3473},
{C_text("f_3498:extras_2escm"),(void*)f_3498},
{C_text("f_3511:extras_2escm"),(void*)f_3511},
{C_text("f_3524:extras_2escm"),(void*)f_3524},
{C_text("f_3537:extras_2escm"),(void*)f_3537},
{C_text("f_3541:extras_2escm"),(void*)f_3541},
{C_text("f_3554:extras_2escm"),(void*)f_3554},
{C_text("f_3558:extras_2escm"),(void*)f_3558},
{C_text("f_3571:extras_2escm"),(void*)f_3571},
{C_text("f_3575:extras_2escm"),(void*)f_3575},
{C_text("f_3593:extras_2escm"),(void*)f_3593},
{C_text("f_3596:extras_2escm"),(void*)f_3596},
{C_text("f_3602:extras_2escm"),(void*)f_3602},
{C_text("f_3638:extras_2escm"),(void*)f_3638},
{C_text("f_3696:extras_2escm"),(void*)f_3696},
{C_text("f_3707:extras_2escm"),(void*)f_3707},
{C_text("f_3713:extras_2escm"),(void*)f_3713},
{C_text("f_3719:extras_2escm"),(void*)f_3719},
{C_text("f_3725:extras_2escm"),(void*)f_3725},
{C_text("f_3733:extras_2escm"),(void*)f_3733},
{C_text("f_3758:extras_2escm"),(void*)f_3758},
{C_text("f_3768:extras_2escm"),(void*)f_3768},
{C_text("f_3770:extras_2escm"),(void*)f_3770},
{C_text("f_3777:extras_2escm"),(void*)f_3777},
{C_text("f_3780:extras_2escm"),(void*)f_3780},
{C_text("f_3791:extras_2escm"),(void*)f_3791},
{C_text("f_3809:extras_2escm"),(void*)f_3809},
{C_text("f_3825:extras_2escm"),(void*)f_3825},
{C_text("f_3828:extras_2escm"),(void*)f_3828},
{C_text("f_3844:extras_2escm"),(void*)f_3844},
{C_text("f_3847:extras_2escm"),(void*)f_3847},
{C_text("f_3854:extras_2escm"),(void*)f_3854},
{C_text("f_3869:extras_2escm"),(void*)f_3869},
{C_text("f_3892:extras_2escm"),(void*)f_3892},
{C_text("toplevel:extras_2escm"),(void*)C_extras_toplevel},
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
o|hiding unexported module binding: chicken.io#d 
o|hiding unexported module binding: chicken.io#define-alias 
o|hiding unexported module binding: chicken.io#read-string!/port 
o|hiding unexported module binding: chicken.io#read-string/port 
o|hiding unexported module binding: chicken.pretty-print#generic-write 
o|hiding unexported module binding: chicken.format#fprintf0 
o|eliminated procedure checks: 27 
o|specializations:
o|  11 (scheme#eqv? (or eof null fixnum char boolean symbol) *)
o|  1 (scheme#current-output-port)
o|  2 (scheme#< * *)
o|  5 (scheme#- * *)
o|  5 (scheme#> * *)
o|  4 (scheme#make-string fixnum char)
o|  3 (scheme#number->string fixnum fixnum)
o|  1 (scheme#assq * (list-of pair))
o|  2 (scheme#char<? char char)
o|  1 (scheme#+ fixnum fixnum)
o|  3 (scheme#char=? char char)
o|  5 (scheme#car pair)
o|  11 (scheme#+ * *)
o|  13 (scheme#cdr pair)
o|  1 (scheme#make-string fixnum)
o|  4 (##sys#check-output-port * * *)
o|  24 (scheme#eqv? * (or eof null fixnum char boolean symbol))
o|  8 (##sys#check-input-port * * *)
(o e)|safe calls: 314 
(o e)|assignments to immediate values: 8 
o|safe globals: (chicken.pretty-print#generic-write chicken.io#write-byte chicken.io#read-byte chicken.io#write-string chicken.io#read-token chicken.io#read-buffered chicken.io#read-string chicken.io#read-string/port chicken.io#read-string! chicken.io#read-string!/port chicken.io#write-line chicken.io#read-lines chicken.io#read-line chicken.io#read-list) 
o|substituted constant variable: a1097 
o|substituted constant variable: a1098 
o|inlining procedure: k1109 
o|inlining procedure: k1109 
o|inlining procedure: k1136 
o|inlining procedure: k1136 
o|substituted constant variable: a1191 
o|substituted constant variable: a1192 
o|inlining procedure: k1196 
o|inlining procedure: k1196 
o|inlining procedure: k1219 
o|inlining procedure: k1219 
o|inlining procedure: k1237 
o|inlining procedure: k1237 
o|inlining procedure: k1246 
o|inlining procedure: k1246 
o|inlining procedure: k1264 
o|inlining procedure: k1264 
o|substituted constant variable: a1305 
o|substituted constant variable: a1307 
o|inlining procedure: k1315 
o|inlining procedure: k1315 
o|substituted constant variable: a1347 
o|substituted constant variable: a1348 
o|inlining procedure: k1359 
o|inlining procedure: k1359 
o|substituted constant variable: a1422 
o|substituted constant variable: a1423 
o|inlining procedure: k1446 
o|inlining procedure: k1446 
o|inlining procedure: k1470 
o|inlining procedure: k1470 
o|inlining procedure: k1529 
o|inlining procedure: k1529 
o|substituted constant variable: a1591 
o|substituted constant variable: a1592 
o|inlining procedure: k1655 
o|inlining procedure: k1655 
o|inlining procedure: k1667 
o|inlining procedure: k1667 
o|inlining procedure: k1703 
o|inlining procedure: k1703 
o|substituted constant variable: a1718 
o|substituted constant variable: a1739 
o|substituted constant variable: a1740 
o|inlining procedure: k1741 
o|inlining procedure: k1741 
o|substituted constant variable: a1783 
o|substituted constant variable: a1784 
o|inlining procedure: k1788 
o|inlining procedure: k1788 
o|substituted constant variable: a1811 
o|substituted constant variable: a1812 
o|inlining procedure: k1825 
o|inlining procedure: k1825 
o|substituted constant variable: a1869 
o|substituted constant variable: a1870 
o|inlining procedure: k1881 
o|inlining procedure: k1881 
o|inlining procedure: k1914 
o|inlining procedure: k1914 
o|substituted constant variable: a1950 
o|substituted constant variable: a1951 
o|inlining procedure: k1955 
o|inlining procedure: k1955 
o|substituted constant variable: a1980 
o|substituted constant variable: a1981 
o|inlining procedure: k2019 
o|contracted procedure: "(extras.scm:260) length1?407" 
o|inlining procedure: k2004 
o|inlining procedure: k2004 
o|inlining procedure: k2019 
o|inlining procedure: k2034 
o|inlining procedure: k2034 
o|substituted constant variable: a2047 
o|substituted constant variable: a2049 
o|substituted constant variable: a2051 
o|substituted constant variable: a2053 
o|inlining procedure: k2067 
o|inlining procedure: k2067 
o|inlining procedure: k2079 
o|inlining procedure: k2079 
o|substituted constant variable: a2092 
o|substituted constant variable: a2094 
o|substituted constant variable: a2096 
o|substituted constant variable: a2098 
o|inlining procedure: k2102 
o|inlining procedure: k2102 
o|inlining procedure: k2122 
o|inlining procedure: "(extras.scm:281) read-macro-body401" 
o|inlining procedure: k2122 
o|inlining procedure: k2149 
o|inlining procedure: k2167 
o|inlining procedure: k2167 
o|inlining procedure: k2194 
o|inlining procedure: k2194 
o|inlining procedure: k2149 
o|inlining procedure: k2226 
o|inlining procedure: k2226 
o|inlining procedure: k2244 
o|inlining procedure: k2244 
o|inlining procedure: k2270 
o|inlining procedure: k2280 
o|inlining procedure: k2280 
o|inlining procedure: k2270 
o|inlining procedure: k2296 
o|inlining procedure: k2296 
o|inlining procedure: k2328 
o|inlining procedure: k2350 
o|substituted constant variable: a2363 
o|substituted constant variable: a2372 
o|substituted constant variable: a2389 
o|inlining procedure: k2385 
o|substituted constant variable: a2409 
o|inlining procedure: k2410 
o|inlining procedure: k2410 
o|substituted constant variable: a2445 
o|substituted constant variable: a2450 
o|inlining procedure: k2385 
o|substituted constant variable: a2463 
o|substituted constant variable: a2465 
o|inlining procedure: k2350 
o|inlining procedure: k2328 
o|inlining procedure: k2490 
o|substituted constant variable: a2500 
o|inlining procedure: k2490 
o|inlining procedure: k2526 
o|substituted constant variable: a2543 
o|inlining procedure: k2526 
o|substituted constant variable: a2561 
o|inlining procedure: k2563 
o|inlining procedure: k2563 
o|substituted constant variable: a2576 
o|inlining procedure: k2578 
o|inlining procedure: k2578 
o|inlining procedure: k2594 
o|inlining procedure: k2594 
o|inlining procedure: k2619 
o|inlining procedure: k2619 
o|inlining procedure: k2654 
o|inlining procedure: k2654 
o|inlining procedure: k2686 
o|inlining procedure: k2686 
o|substituted constant variable: a2715 
o|inlining procedure: k2711 
o|substituted constant variable: a2720 
o|substituted constant variable: a2726 
o|inlining procedure: k2711 
o|inlining procedure: k2741 
o|inlining procedure: k2749 
o|inlining procedure: k2749 
o|substituted constant variable: a2762 
o|substituted constant variable: a2763 
o|inlining procedure: k2741 
o|inlining procedure: k2773 
o|substituted constant variable: a2792 
o|inlining procedure: k2800 
o|inlining procedure: k2800 
o|substituted constant variable: a2834 
o|substituted constant variable: a2841 
o|substituted constant variable: max-expr-width542 
o|inlining procedure: k2773 
o|inlining procedure: k2851 
o|inlining procedure: "(extras.scm:415) read-macro-body401" 
o|inlining procedure: k2851 
o|inlining procedure: k2884 
o|inlining procedure: k2884 
o|substituted constant variable: max-call-head-width541 
o|substituted constant variable: max-call-head-width541 
o|inlining procedure: k2917 
o|substituted constant variable: a2927 
o|inlining procedure: k2917 
o|inlining procedure: k2954 
o|substituted constant variable: a2984 
o|inlining procedure: k2985 
o|inlining procedure: k2985 
o|substituted constant variable: a3007 
o|inlining procedure: k2954 
o|inlining procedure: k3022 
o|substituted constant variable: a3050 
o|inlining procedure: k3022 
o|inlining procedure: k3060 
o|substituted constant variable: a3088 
o|inlining procedure: k3060 
o|inlining procedure: k3108 
o|substituted constant variable: indent-general540 
o|substituted constant variable: indent-general540 
o|substituted constant variable: a3129 
o|inlining procedure: k3108 
o|substituted constant variable: indent-general540 
o|substituted constant variable: indent-general540 
o|substituted constant variable: a3142 
o|inlining procedure: k3224 
o|inlining procedure: k3224 
o|inlining procedure: k3242 
o|inlining procedure: k3242 
o|inlining procedure: k3254 
o|inlining procedure: k3254 
o|inlining procedure: k3269 
o|inlining procedure: k3269 
o|substituted constant variable: a3282 
o|substituted constant variable: a3284 
o|substituted constant variable: a3286 
o|substituted constant variable: a3291 
o|substituted constant variable: a3293 
o|substituted constant variable: a3295 
o|substituted constant variable: a3297 
o|substituted constant variable: a3302 
o|substituted constant variable: a3304 
o|inlining procedure: k3308 
o|inlining procedure: k3308 
o|inlining procedure: k3320 
o|inlining procedure: k3320 
o|substituted constant variable: a3327 
o|substituted constant variable: a3329 
o|substituted constant variable: a3331 
o|substituted constant variable: a3333 
o|substituted constant variable: a3335 
o|inlining procedure: k3339 
o|substituted constant variable: a3353 
o|substituted constant variable: a3354 
o|inlining procedure: k3339 
o|inlining procedure: k3398 
o|inlining procedure: k3398 
o|inlining procedure: k3443 
o|inlining procedure: k3443 
o|inlining procedure: k3462 
o|inlining procedure: k3462 
o|inlining procedure: k3486 
o|inlining procedure: k3486 
o|inlining procedure: k3512 
o|inlining procedure: k3512 
o|inlining procedure: k3542 
o|inlining procedure: k3542 
o|inlining procedure: k3576 
o|inlining procedure: k3576 
o|inlining procedure: k3603 
o|inlining procedure: k3603 
o|inlining procedure: k3624 
o|inlining procedure: k3640 
o|inlining procedure: k3640 
o|inlining procedure: k3624 
o|substituted constant variable: a3664 
o|substituted constant variable: a3666 
o|substituted constant variable: a3668 
o|substituted constant variable: a3670 
o|substituted constant variable: a3672 
o|substituted constant variable: a3674 
o|substituted constant variable: a3676 
o|substituted constant variable: a3678 
o|substituted constant variable: a3680 
o|substituted constant variable: a3682 
o|substituted constant variable: a3684 
o|substituted constant variable: a3704 
o|inlining procedure: k3731 
o|propagated global variable: r37324107 chicken.format#sprintf 
o|inlining procedure: k3731 
o|inlining procedure: k3743 
o|propagated global variable: r37444111 chicken.format#sprintf 
o|inlining procedure: k3743 
o|inlining procedure: k3792 
o|inlining procedure: k3792 
o|inlining procedure: k3811 
o|inlining procedure: k3811 
o|inlining procedure: k3855 
o|inlining procedure: k3855 
o|inlining procedure: k3867 
o|inlining procedure: k3867 
o|inlining procedure: k3887 
o|inlining procedure: k3887 
o|substituted constant variable: a3897 
o|inlining procedure: k3893 
o|inlining procedure: k3893 
o|replaced variables: 601 
o|removed binding forms: 137 
o|substituted constant variable: r11373928 
o|substituted constant variable: r13163940 
o|substituted constant variable: r14473943 
o|substituted constant variable: r16563949 
o|substituted constant variable: r17893966 
o|substituted constant variable: r20053979 
o|substituted constant variable: r20203980 
o|removed side-effect free assignment to unused variable: read-macro-body401 
o|substituted constant variable: r20683983 
o|substituted constant variable: r20803985 
o|substituted constant variable: r21033988 
o|substituted constant variable: r22814007 
o|substituted constant variable: r22814007 
o|substituted constant variable: r22814009 
o|substituted constant variable: r22814009 
o|substituted constant variable: r25644028 
o|substituted constant variable: r25644028 
o|substituted constant variable: r25644030 
o|substituted constant variable: r25644030 
o|substituted constant variable: r27504046 
o|substituted constant variable: r27424047 
o|substituted constant variable: r29184062 
o|substituted constant variable: r29554066 
o|removed side-effect free assignment to unused variable: indent-general540 
o|removed side-effect free assignment to unused variable: max-call-head-width541 
o|removed side-effect free assignment to unused variable: max-expr-width542 
o|inlining procedure: k3471 
o|propagated global variable: a37304108 chicken.format#sprintf 
o|inlining procedure: k3731 
o|propagated global variable: r37324188 chicken.format#printf 
o|propagated global variable: r37324188 chicken.format#printf 
o|inlining procedure: k3731 
o|propagated global variable: r37324190 chicken.format#sprintf 
o|propagated global variable: r37324190 chicken.format#sprintf 
o|inlining procedure: k3731 
o|propagated global variable: r37324192 chicken.format#fprintf 
o|propagated global variable: r37324192 chicken.format#fprintf 
o|replaced variables: 17 
o|removed binding forms: 633 
o|inlining procedure: k3192 
o|inlining procedure: k3694 
o|removed binding forms: 59 
o|substituted constant variable: r31934216 
o|substituted constant variable: r36954223 
o|inlining procedure: k3873 
o|replaced variables: 2 
o|removed conditional forms: 1 
o|removed binding forms: 4 
o|simplifications: ((if . 55) (##core#call . 259)) 
o|  call simplifications:
o|    ##sys#immediate?
o|    scheme#apply	5
o|    scheme#char-upcase
o|    scheme#char-whitespace?	2
o|    ##sys#check-list
o|    scheme#vector?	2
o|    scheme#boolean?	2
o|    scheme#symbol?	3
o|    scheme#procedure?
o|    scheme#string?	2
o|    scheme#char?
o|    ##sys#generic-structure?
o|    ##sys#byte
o|    chicken.fixnum#fx>	2
o|    scheme#string-ref
o|    scheme#string-length	4
o|    scheme#integer->char
o|    scheme#char->integer	3
o|    ##sys#size	7
o|    chicken.fixnum#fx<=
o|    ##sys#setislot
o|    scheme#not	9
o|    chicken.fixnum#fx<	7
o|    ##sys#check-string	4
o|    chicken.fixnum#fx-	5
o|    scheme#pair?	14
o|    scheme#cadr	3
o|    ##sys#slot	16
o|    scheme#eq?	45
o|    scheme#char=?
o|    chicken.fixnum#fx=
o|    scheme#car	27
o|    scheme#null?	36
o|    scheme#cdr	14
o|    scheme#eof-object?	8
o|    chicken.fixnum#fx>=	5
o|    chicken.fixnum#fx+	16
o|    scheme#cons	5
o|contracted procedure: k1172 
o|contracted procedure: k1078 
o|contracted procedure: k1166 
o|contracted procedure: k1081 
o|contracted procedure: k1160 
o|contracted procedure: k1084 
o|contracted procedure: k1154 
o|contracted procedure: k1087 
o|contracted procedure: k1148 
o|contracted procedure: k1090 
o|contracted procedure: k1142 
o|contracted procedure: k1093 
o|contracted procedure: k1112 
o|contracted procedure: k1115 
o|contracted procedure: k1129 
o|contracted procedure: k1133 
o|contracted procedure: k1181 
o|contracted procedure: k1184 
o|contracted procedure: k1312 
o|contracted procedure: k1193 
o|contracted procedure: k1207 
o|contracted procedure: k1222 
o|contracted procedure: k1234 
o|contracted procedure: k1240 
o|contracted procedure: k1249 
o|contracted procedure: k1258 
o|contracted procedure: k1267 
o|contracted procedure: k1286 
o|contracted procedure: k1289 
o|contracted procedure: k1297 
o|contracted procedure: k1325 
o|contracted procedure: k1318 
o|contracted procedure: k1409 
o|contracted procedure: k1334 
o|contracted procedure: k1403 
o|contracted procedure: k1337 
o|contracted procedure: k1397 
o|contracted procedure: k1340 
o|contracted procedure: k1391 
o|contracted procedure: k1343 
o|contracted procedure: k1353 
o|contracted procedure: k1362 
o|contracted procedure: k1374 
o|contracted procedure: k1384 
o|contracted procedure: k1388 
o|contracted procedure: k1418 
o|contracted procedure: k1424 
o|contracted procedure: k1437 
o|contracted procedure: k1427 
o|contracted procedure: k1449 
o|contracted procedure: k1572 
o|contracted procedure: k1452 
o|contracted procedure: k1514 
o|contracted procedure: k1510 
o|contracted procedure: k1467 
o|contracted procedure: k1473 
o|contracted procedure: k1479 
o|contracted procedure: k1482 
o|contracted procedure: k1489 
o|contracted procedure: k1493 
o|contracted procedure: k1497 
o|contracted procedure: k1532 
o|contracted procedure: k1538 
o|contracted procedure: k1541 
o|contracted procedure: k1548 
o|contracted procedure: k1552 
o|contracted procedure: k1556 
o|contracted procedure: k1568 
o|contracted procedure: k1646 
o|contracted procedure: k1578 
o|contracted procedure: k1640 
o|contracted procedure: k1581 
o|contracted procedure: k1634 
o|contracted procedure: k1584 
o|contracted procedure: k1628 
o|contracted procedure: k1587 
o|contracted procedure: k1593 
o|contracted procedure: k1599 
o|contracted procedure: k1615 
o|contracted procedure: k1622 
o|contracted procedure: k1658 
o|contracted procedure: k1664 
o|contracted procedure: k1679 
o|contracted procedure: k1706 
o|contracted procedure: k1768 
o|contracted procedure: k1726 
o|contracted procedure: k1762 
o|contracted procedure: k1729 
o|contracted procedure: k1756 
o|contracted procedure: k1732 
o|contracted procedure: k1750 
o|contracted procedure: k1735 
o|contracted procedure: k1798 
o|contracted procedure: k1779 
o|contracted procedure: k1795 
o|contracted procedure: k1785 
o|contracted procedure: k1854 
o|contracted procedure: k1807 
o|contracted procedure: k1851 
o|contracted procedure: k1844 
o|contracted procedure: k1863 
o|contracted procedure: k1898 
o|contracted procedure: k1874 
o|contracted procedure: k1894 
o|contracted procedure: k1917 
o|contracted procedure: k1923 
o|contracted procedure: k1930 
o|contracted procedure: k1936 
o|contracted procedure: k1964 
o|contracted procedure: k1946 
o|contracted procedure: k1958 
o|contracted procedure: k1989 
o|contracted procedure: k1973 
o|contracted procedure: k1986 
o|contracted procedure: k2015 
o|contracted procedure: k2022 
o|contracted procedure: k2007 
o|contracted procedure: k2031 
o|contracted procedure: k2037 
o|contracted procedure: k2063 
o|contracted procedure: k2070 
o|contracted procedure: k2076 
o|contracted procedure: k2082 
o|contracted procedure: k2088 
o|contracted procedure: k2113 
o|contracted procedure: k2132 
o|contracted procedure: k2152 
o|contracted procedure: k2170 
o|contracted procedure: k2176 
o|contracted procedure: k2197 
o|contracted procedure: k2229 
o|contracted procedure: k2238 
o|contracted procedure: k2247 
o|contracted procedure: k2256 
o|contracted procedure: k2273 
o|contracted procedure: k2299 
o|contracted procedure: k2318 
o|contracted procedure: k2331 
o|contracted procedure: k2356 
o|contracted procedure: k2364 
o|contracted procedure: k2390 
o|contracted procedure: k2397 
o|contracted procedure: k2401 
o|contracted procedure: k2419 
o|contracted procedure: k2437 
o|contracted procedure: k2447 
o|contracted procedure: k2459 
o|contracted procedure: k2481 
o|contracted procedure: k2487 
o|contracted procedure: k2502 
o|contracted procedure: k2520 
o|contracted procedure: k2529 
o|contracted procedure: k2547 
o|contracted procedure: k2566 
o|contracted procedure: k2603 
o|contracted procedure: k2633 
o|contracted procedure: k2642 
o|contracted procedure: k2657 
o|contracted procedure: k2660 
o|contracted procedure: k2673 
o|contracted procedure: k2680 
o|contracted procedure: k2776 
o|contracted procedure: k2779 
o|contracted procedure: k2803 
o|contracted procedure: k2824 
o|contracted procedure: k2830 
o|contracted procedure: k2861 
o|contracted procedure: k2872 
o|contracted procedure: k2878 
o|contracted procedure: k2894 
o|contracted procedure: k2929 
o|contracted procedure: k2960 
o|contracted procedure: k2980 
o|contracted procedure: k2988 
o|contracted procedure: k3025 
o|contracted procedure: k3028 
o|contracted procedure: k3046 
o|contracted procedure: k3063 
o|contracted procedure: k3066 
o|contracted procedure: k3084 
o|contracted procedure: k3101 
o|contracted procedure: k3111 
o|contracted procedure: k3114 
o|contracted procedure: k3189 
o|contracted procedure: k3198 
o|contracted procedure: k3192 
o|contracted procedure: k3227 
o|contracted procedure: k3236 
o|contracted procedure: k3239 
o|contracted procedure: k3245 
o|contracted procedure: k3251 
o|contracted procedure: k3257 
o|contracted procedure: k3260 
o|contracted procedure: k3266 
o|contracted procedure: k3272 
o|contracted procedure: k3278 
o|contracted procedure: k3305 
o|contracted procedure: k3311 
o|contracted procedure: k3317 
o|contracted procedure: k3381 
o|contracted procedure: k3401 
o|contracted procedure: k3421 
o|contracted procedure: k3410 
o|contracted procedure: k3427 
o|contracted procedure: k3430 
o|contracted procedure: k3437 
o|contracted procedure: k3449 
o|contracted procedure: k3453 
o|contracted procedure: k3465 
o|contracted procedure: k3688 
o|contracted procedure: k3477 
o|contracted procedure: k3483 
o|contracted procedure: k3489 
o|contracted procedure: k3502 
o|contracted procedure: k3515 
o|contracted procedure: k3528 
o|contracted procedure: k3545 
o|contracted procedure: k3562 
o|contracted procedure: k3579 
o|contracted procedure: k3588 
o|contracted procedure: k3597 
o|contracted procedure: k3606 
o|contracted procedure: k3615 
o|contracted procedure: k3618 
o|contracted procedure: k3627 
o|contracted procedure: k3643 
o|contracted procedure: k3654 
o|contracted procedure: k3734 
o|contracted procedure: k3740 
o|contracted procedure: k3746 
o|contracted procedure: k3750 
o|contracted procedure: k3760 
o|contracted procedure: k3802 
o|contracted procedure: k3772 
o|contracted procedure: k3783 
o|contracted procedure: k3799 
o|contracted procedure: k3817 
o|contracted procedure: k3919 
o|contracted procedure: k3830 
o|contracted procedure: k3913 
o|contracted procedure: k3833 
o|contracted procedure: k3907 
o|contracted procedure: k3836 
o|contracted procedure: k3901 
o|contracted procedure: k3839 
o|contracted procedure: k3849 
o|contracted procedure: k3858 
o|contracted procedure: k3870 
o|contracted procedure: k3873 
o|simplifications: ((let . 57)) 
o|removed binding forms: 249 
o|inlining procedure: k3778 
o|replaced variables: 130 
o|simplifications: ((if . 1)) 
o|removed binding forms: 52 
o|direct leaf routine/allocation: read-macro-prefix402 0 
o|direct leaf routine/allocation: fetch758 0 
o|contracted procedure: "(extras.scm:281) k2140" 
o|contracted procedure: "(extras.scm:416) k2869" 
o|contracted procedure: "(extras.scm:590) k3468" 
o|contracted procedure: "(extras.scm:592) k3480" 
o|contracted procedure: "(extras.scm:610) k3634" 
o|contracted procedure: "(extras.scm:612) k3650" 
o|removed binding forms: 6 
o|direct leaf routine/allocation: skip781 0 
o|inlining procedure: k3471 
o|converted assignments to bindings: (skip781) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (chicken.format#fprintf0 k3389 rec753 next759 loop764 k3365 pp405 k3230 tail1602 k3070 tail3604 k3032 tail2603 k2964 indent524 loop584 pp-down529 style543 pp-call527 pp-general530 pr525 chicken.pretty-print#generic-write pp-list528 spaces523 doloop508509 g499500 k2353 g488489 loop465 wr-expr448 loop454 read-macro?400 wr-lst449 out403 wr404 k2025 def-n317334 def-port318332 body315324 k1884 loop304 loop253 k1611 k1602 k1526 loop201 loop186 loop158 k1187 k1279 loop125 g120121 doloop9697) 
o|calls to known targets: 211 
o|identified direct recursive calls: f_3638 1 
o|identified direct recursive calls: f_3460 1 
o|fast box initializations: 43 
o|fast global references: 5 
o|fast global assignments: 2 
o|dropping unused closure argument: f_1996 
o|dropping unused closure argument: f_1999 
o|dropping unused closure argument: f_2061 
o|dropping unused closure argument: f_3387 
*/
/* end of file */

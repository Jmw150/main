/* Generated from data-structures.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: data-structures.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file data-structures.c -emit-import-library chicken.sort -emit-import-library chicken.string
   unit: data-structures
   uses: library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[83];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,107,41};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,23),40,114,101,118,45,115,116,114,105,110,103,45,97,112,112,101,110,100,32,108,32,105,41,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,114,101,118,101,114,115,101,45,115,116,114,105,110,103,45,97,112,112,101,110,100,32,108,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,114,101,118,101,114,115,101,45,108,105,115,116,45,62,115,116,114,105,110,103,32,108,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,27),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,45,62,115,116,114,105,110,103,32,120,41,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,16),40,109,97,112,45,108,111,111,112,56,48,32,103,57,50,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,28),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,99,111,110,99,32,46,32,97,114,103,115,41,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,105,115,116,97,114,116,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,37),40,116,114,97,118,101,114,115,101,32,119,104,105,99,104,32,119,104,101,114,101,32,115,116,97,114,116,32,116,101,115,116,32,108,111,99,41,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,11),40,97,49,48,54,49,32,105,32,108,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,32,119,104,105,99,104,32,119,104,101,114,101,32,115,116,97,114,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,11),40,97,49,48,55,48,32,105,32,108,41,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,45,99,105,32,119,104,105,99,104,32,119,104,101,114,101,32,115,116,97,114,116,41,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,32,119,104,105,99,104,32,119,104,101,114,101,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,54),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,45,99,105,32,119,104,105,99,104,32,119,104,101,114,101,32,46,32,114,101,115,116,41,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,99,111,109,112,97,114,101,51,32,115,49,32,115,50,41,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,99,111,109,112,97,114,101,51,45,99,105,32,115,49,32,115,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,61,63,32,115,49,32,115,50,32,115,116,97,114,116,49,32,115,116,97,114,116,50,32,110,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,117,98,115,116,114,105,110,103,61,63,32,115,49,32,115,50,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,99,105,61,63,32,115,49,32,115,50,32,115,116,97,114,116,49,32,115,116,97,114,116,50,32,110,41,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,117,98,115,116,114,105,110,103,45,99,105,61,63,32,115,49,32,115,50,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,18),40,97,100,100,32,102,114,111,109,32,116,111,32,108,97,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,8),40,115,99,97,110,32,106,41};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,105,32,108,97,115,116,32,102,114,111,109,41,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,115,112,108,105,116,32,115,116,114,32,46,32,100,101,108,115,116,114,45,97,110,100,45,102,108,97,103,41,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,50,32,110,50,41,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,49,32,115,115,32,110,41,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,105,110,116,101,114,115,112,101,114,115,101,32,115,116,114,115,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,10),40,102,95,49,54,48,52,32,99,41,0,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,12),40,105,110,115,116,114,105,110,103,32,115,41,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,105,32,106,41,0,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,10),40,102,95,49,55,55,54,32,99,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,116,114,97,110,115,108,97,116,101,32,115,116,114,32,102,114,111,109,32,46,32,116,111,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,115,109,97,112,41,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,25),40,99,111,108,108,101,99,116,32,105,32,102,114,111,109,32,116,111,116,97,108,32,102,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,116,114,97,110,115,108,97,116,101,42,32,115,116,114,32,115,109,97,112,41,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,116,111,116,97,108,32,112,111,115,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,99,104,111,112,32,115,116,114,32,108,101,110,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,99,104,111,109,112,32,115,116,114,32,46,32,114,101,115,116,41};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,52,54,54,32,105,41,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,97,115,116,32,110,101,120,116,41};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,115,111,114,116,35,115,111,114,116,101,100,63,32,115,101,113,32,108,101,115,115,63,41};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,120,32,97,32,121,32,98,41,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,30),40,99,104,105,99,107,101,110,46,115,111,114,116,35,109,101,114,103,101,32,97,32,98,32,108,101,115,115,63,41,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,114,32,97,32,98,41,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,115,111,114,116,35,109,101,114,103,101,33,32,97,32,98,32,108,101,115,115,63,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,8),40,115,116,101,112,32,110,41};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,53,51,55,32,112,32,105,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,30),40,99,104,105,99,107,101,110,46,115,111,114,116,35,115,111,114,116,33,32,115,101,113,32,108,101,115,115,63,41,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,115,111,114,116,35,115,111,114,116,32,115,101,113,32,108,101,115,115,63,41,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,18),40,119,97,108,107,32,101,100,103,101,115,32,115,116,97,116,101,41,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,33),40,118,105,115,105,116,32,100,97,103,32,110,111,100,101,32,101,100,103,101,115,32,112,97,116,104,32,115,116,97,116,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,100,97,103,32,115,116,97,116,101,41};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,115,111,114,116,35,116,111,112,111,108,111,103,105,99,97,108,45,115,111,114,116,32,100,97,103,32,112,114,101,100,41};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1001)
static void C_ccall f_1001(C_word c,C_word *av) C_noret;
C_noret_decl(f_1024)
static void C_fcall f_1024(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1037)
static void C_ccall f_1037(C_word c,C_word *av) C_noret;
C_noret_decl(f_1056)
static void C_ccall f_1056(C_word c,C_word *av) C_noret;
C_noret_decl(f_1062)
static void C_ccall f_1062(C_word c,C_word *av) C_noret;
C_noret_decl(f_1065)
static void C_ccall f_1065(C_word c,C_word *av) C_noret;
C_noret_decl(f_1071)
static void C_ccall f_1071(C_word c,C_word *av) C_noret;
C_noret_decl(f_1074)
static void C_ccall f_1074(C_word c,C_word *av) C_noret;
C_noret_decl(f_1089)
static void C_ccall f_1089(C_word c,C_word *av) C_noret;
C_noret_decl(f_1104)
static void C_ccall f_1104(C_word c,C_word *av) C_noret;
C_noret_decl(f_1135)
static void C_ccall f_1135(C_word c,C_word *av) C_noret;
C_noret_decl(f_1166)
static void C_ccall f_1166(C_word c,C_word *av) C_noret;
C_noret_decl(f_1176)
static void C_fcall f_1176(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1179)
static void C_ccall f_1179(C_word c,C_word *av) C_noret;
C_noret_decl(f_1182)
static void C_ccall f_1182(C_word c,C_word *av) C_noret;
C_noret_decl(f_1203)
static void C_ccall f_1203(C_word c,C_word *av) C_noret;
C_noret_decl(f_1263)
static void C_ccall f_1263(C_word c,C_word *av) C_noret;
C_noret_decl(f_1273)
static void C_fcall f_1273(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1276)
static void C_ccall f_1276(C_word c,C_word *av) C_noret;
C_noret_decl(f_1279)
static void C_ccall f_1279(C_word c,C_word *av) C_noret;
C_noret_decl(f_1300)
static void C_ccall f_1300(C_word c,C_word *av) C_noret;
C_noret_decl(f_1360)
static void C_ccall f_1360(C_word c,C_word *av) C_noret;
C_noret_decl(f_1381)
static void C_fcall f_1381(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1396)
static void C_ccall f_1396(C_word c,C_word *av) C_noret;
C_noret_decl(f_1401)
static void C_fcall f_1401(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1411)
static void C_ccall f_1411(C_word c,C_word *av) C_noret;
C_noret_decl(f_1428)
static void C_fcall f_1428(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1467)
static void C_ccall f_1467(C_word c,C_word *av) C_noret;
C_noret_decl(f_1494)
static void C_ccall f_1494(C_word c,C_word *av) C_noret;
C_noret_decl(f_1512)
static void C_fcall f_1512(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1522)
static void C_ccall f_1522(C_word c,C_word *av) C_noret;
C_noret_decl(f_1527)
static C_word C_fcall f_1527(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1596)
static void C_ccall f_1596(C_word c,C_word *av) C_noret;
C_noret_decl(f_1599)
static void C_fcall f_1599(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1604)
static void C_ccall f_1604(C_word c,C_word *av) C_noret;
C_noret_decl(f_1610)
static C_word C_fcall f_1610(C_word t0,C_word t1);
C_noret_decl(f_1634)
static void C_ccall f_1634(C_word c,C_word *av) C_noret;
C_noret_decl(f_1637)
static void C_ccall f_1637(C_word c,C_word *av) C_noret;
C_noret_decl(f_1649)
static void C_ccall f_1649(C_word c,C_word *av) C_noret;
C_noret_decl(f_1654)
static void C_fcall f_1654(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1673)
static void C_ccall f_1673(C_word c,C_word *av) C_noret;
C_noret_decl(f_1776)
static void C_ccall f_1776(C_word c,C_word *av) C_noret;
C_noret_decl(f_1793)
static void C_ccall f_1793(C_word c,C_word *av) C_noret;
C_noret_decl(f_1801)
static void C_ccall f_1801(C_word c,C_word *av) C_noret;
C_noret_decl(f_1813)
static void C_fcall f_1813(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1827)
static void C_ccall f_1827(C_word c,C_word *av) C_noret;
C_noret_decl(f_1841)
static void C_ccall f_1841(C_word c,C_word *av) C_noret;
C_noret_decl(f_1846)
static void C_fcall f_1846(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1886)
static void C_fcall f_1886(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1912)
static void C_ccall f_1912(C_word c,C_word *av) C_noret;
C_noret_decl(f_1929)
static void C_ccall f_1929(C_word c,C_word *av) C_noret;
C_noret_decl(f_1936)
static void C_ccall f_1936(C_word c,C_word *av) C_noret;
C_noret_decl(f_1944)
static void C_fcall f_1944(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1964)
static void C_ccall f_1964(C_word c,C_word *av) C_noret;
C_noret_decl(f_1975)
static void C_ccall f_1975(C_word c,C_word *av) C_noret;
C_noret_decl(f_1979)
static void C_ccall f_1979(C_word c,C_word *av) C_noret;
C_noret_decl(f_1993)
static void C_ccall f_1993(C_word c,C_word *av) C_noret;
C_noret_decl(f_2032)
static void C_ccall f_2032(C_word c,C_word *av) C_noret;
C_noret_decl(f_2059)
static void C_fcall f_2059(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2068)
static void C_ccall f_2068(C_word c,C_word *av) C_noret;
C_noret_decl(f_2104)
static void C_fcall f_2104(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2128)
static void C_ccall f_2128(C_word c,C_word *av) C_noret;
C_noret_decl(f_2134)
static void C_ccall f_2134(C_word c,C_word *av) C_noret;
C_noret_decl(f_2164)
static void C_fcall f_2164(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2171)
static void C_ccall f_2171(C_word c,C_word *av) C_noret;
C_noret_decl(f_2191)
static void C_ccall f_2191(C_word c,C_word *av) C_noret;
C_noret_decl(f_2217)
static void C_ccall f_2217(C_word c,C_word *av) C_noret;
C_noret_decl(f_2225)
static void C_ccall f_2225(C_word c,C_word *av) C_noret;
C_noret_decl(f_2228)
static void C_fcall f_2228(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2235)
static void C_ccall f_2235(C_word c,C_word *av) C_noret;
C_noret_decl(f_2303)
static void C_ccall f_2303(C_word c,C_word *av) C_noret;
C_noret_decl(f_2306)
static void C_ccall f_2306(C_word c,C_word *av) C_noret;
C_noret_decl(f_2324)
static void C_ccall f_2324(C_word c,C_word *av) C_noret;
C_noret_decl(f_2349)
static void C_ccall f_2349(C_word c,C_word *av) C_noret;
C_noret_decl(f_2352)
static void C_fcall f_2352(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2363)
static void C_ccall f_2363(C_word c,C_word *av) C_noret;
C_noret_decl(f_2368)
static void C_ccall f_2368(C_word c,C_word *av) C_noret;
C_noret_decl(f_2399)
static void C_ccall f_2399(C_word c,C_word *av) C_noret;
C_noret_decl(f_2432)
static void C_ccall f_2432(C_word c,C_word *av) C_noret;
C_noret_decl(f_2439)
static void C_ccall f_2439(C_word c,C_word *av) C_noret;
C_noret_decl(f_2441)
static void C_fcall f_2441(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2472)
static void C_ccall f_2472(C_word c,C_word *av) C_noret;
C_noret_decl(f_2486)
static void C_ccall f_2486(C_word c,C_word *av) C_noret;
C_noret_decl(f_2490)
static void C_ccall f_2490(C_word c,C_word *av) C_noret;
C_noret_decl(f_2497)
static void C_ccall f_2497(C_word c,C_word *av) C_noret;
C_noret_decl(f_2499)
static void C_ccall f_2499(C_word c,C_word *av) C_noret;
C_noret_decl(f_2502)
static void C_fcall f_2502(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2506)
static void C_ccall f_2506(C_word c,C_word *av) C_noret;
C_noret_decl(f_2543)
static void C_ccall f_2543(C_word c,C_word *av) C_noret;
C_noret_decl(f_2555)
static void C_ccall f_2555(C_word c,C_word *av) C_noret;
C_noret_decl(f_2568)
static void C_ccall f_2568(C_word c,C_word *av) C_noret;
C_noret_decl(f_2574)
static void C_fcall f_2574(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2588)
static void C_ccall f_2588(C_word c,C_word *av) C_noret;
C_noret_decl(f_2610)
static void C_ccall f_2610(C_word c,C_word *av) C_noret;
C_noret_decl(f_2646)
static void C_fcall f_2646(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2667)
static void C_ccall f_2667(C_word c,C_word *av) C_noret;
C_noret_decl(f_809)
static void C_ccall f_809(C_word c,C_word *av) C_noret;
C_noret_decl(f_811)
static void C_ccall f_811(C_word c,C_word *av) C_noret;
C_noret_decl(f_814)
static void C_fcall f_814(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_828)
static void C_ccall f_828(C_word c,C_word *av) C_noret;
C_noret_decl(f_837)
static C_word C_fcall f_837(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_884)
static void C_ccall f_884(C_word c,C_word *av) C_noret;
C_noret_decl(f_890)
static void C_ccall f_890(C_word c,C_word *av) C_noret;
C_noret_decl(f_927)
static void C_ccall f_927(C_word c,C_word *av) C_noret;
C_noret_decl(f_930)
static void C_ccall f_930(C_word c,C_word *av) C_noret;
C_noret_decl(f_935)
static void C_ccall f_935(C_word c,C_word *av) C_noret;
C_noret_decl(f_946)
static void C_ccall f_946(C_word c,C_word *av) C_noret;
C_noret_decl(f_948)
static void C_fcall f_948(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_973)
static void C_ccall f_973(C_word c,C_word *av) C_noret;
C_noret_decl(f_982)
static void C_fcall f_982(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externexport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1024)
static void C_ccall trf_1024(C_word c,C_word *av) C_noret;
static void C_ccall trf_1024(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1024(t0,t1,t2);}

C_noret_decl(trf_1176)
static void C_ccall trf_1176(C_word c,C_word *av) C_noret;
static void C_ccall trf_1176(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1176(t0,t1);}

C_noret_decl(trf_1273)
static void C_ccall trf_1273(C_word c,C_word *av) C_noret;
static void C_ccall trf_1273(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1273(t0,t1);}

C_noret_decl(trf_1381)
static void C_ccall trf_1381(C_word c,C_word *av) C_noret;
static void C_ccall trf_1381(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1381(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1401)
static void C_ccall trf_1401(C_word c,C_word *av) C_noret;
static void C_ccall trf_1401(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1401(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1428)
static void C_ccall trf_1428(C_word c,C_word *av) C_noret;
static void C_ccall trf_1428(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1428(t0,t1,t2);}

C_noret_decl(trf_1512)
static void C_ccall trf_1512(C_word c,C_word *av) C_noret;
static void C_ccall trf_1512(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1512(t0,t1,t2,t3);}

C_noret_decl(trf_1599)
static void C_ccall trf_1599(C_word c,C_word *av) C_noret;
static void C_ccall trf_1599(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1599(t0,t1);}

C_noret_decl(trf_1654)
static void C_ccall trf_1654(C_word c,C_word *av) C_noret;
static void C_ccall trf_1654(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1654(t0,t1,t2,t3);}

C_noret_decl(trf_1813)
static void C_ccall trf_1813(C_word c,C_word *av) C_noret;
static void C_ccall trf_1813(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_1813(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1846)
static void C_ccall trf_1846(C_word c,C_word *av) C_noret;
static void C_ccall trf_1846(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1846(t0,t1,t2);}

C_noret_decl(trf_1886)
static void C_ccall trf_1886(C_word c,C_word *av) C_noret;
static void C_ccall trf_1886(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1886(t0,t1);}

C_noret_decl(trf_1944)
static void C_ccall trf_1944(C_word c,C_word *av) C_noret;
static void C_ccall trf_1944(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1944(t0,t1,t2,t3);}

C_noret_decl(trf_2059)
static void C_ccall trf_2059(C_word c,C_word *av) C_noret;
static void C_ccall trf_2059(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2059(t0,t1,t2);}

C_noret_decl(trf_2104)
static void C_ccall trf_2104(C_word c,C_word *av) C_noret;
static void C_ccall trf_2104(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2104(t0,t1,t2,t3);}

C_noret_decl(trf_2164)
static void C_ccall trf_2164(C_word c,C_word *av) C_noret;
static void C_ccall trf_2164(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_2164(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2228)
static void C_ccall trf_2228(C_word c,C_word *av) C_noret;
static void C_ccall trf_2228(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2228(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2352)
static void C_ccall trf_2352(C_word c,C_word *av) C_noret;
static void C_ccall trf_2352(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2352(t0,t1,t2);}

C_noret_decl(trf_2441)
static void C_ccall trf_2441(C_word c,C_word *av) C_noret;
static void C_ccall trf_2441(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2441(t0,t1,t2,t3);}

C_noret_decl(trf_2502)
static void C_ccall trf_2502(C_word c,C_word *av) C_noret;
static void C_ccall trf_2502(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_2502(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2574)
static void C_ccall trf_2574(C_word c,C_word *av) C_noret;
static void C_ccall trf_2574(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2574(t0,t1,t2,t3);}

C_noret_decl(trf_2646)
static void C_ccall trf_2646(C_word c,C_word *av) C_noret;
static void C_ccall trf_2646(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2646(t0,t1,t2,t3);}

C_noret_decl(trf_814)
static void C_ccall trf_814(C_word c,C_word *av) C_noret;
static void C_ccall trf_814(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_814(t0,t1,t2,t3);}

C_noret_decl(trf_948)
static void C_ccall trf_948(C_word c,C_word *av) C_noret;
static void C_ccall trf_948(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_948(t0,t1,t2);}

C_noret_decl(trf_982)
static void C_ccall trf_982(C_word c,C_word *av) C_noret;
static void C_ccall trf_982(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_982(t0,t1,t2,t3,t4,t5);}

/* k999 in traverse in k807 */
static void C_ccall f_1001(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_1001,2,av);}
a=C_alloc(9);
t2=C_fixnum_greater_or_equal_p(((C_word*)t0)[2],C_fix(0));
t3=(C_truep(t2)?C_fixnum_greater_or_equal_p(((C_word*)t0)[3],((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_eqp(((C_word*)t0)[4],C_fix(0));
if(C_truep(t4)){
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t0)[6],C_fix(0)))){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1024,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],a[6]=((C_word)li7),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_1024(t8,((C_word*)t0)[5],((C_word*)t0)[2]);}
else{
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* data-structures.scm:103: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=((C_word*)t0)[5];
av2[2]=t4;
av2[3]=((C_word*)t0)[8];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)t0)[3];
tp(6,av2);}}}

/* loop in k999 in traverse in k807 */
static void C_fcall f_1024(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1024,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greaterp(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1037,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:101: test */
t4=((C_word*)t0)[4];{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k1035 in loop in k999 in traverse in k807 */
static void C_ccall f_1037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1037,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm:102: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1024(t3,((C_word*)t0)[2],t2);}}

/* ##sys#substring-index in k807 */
static void C_ccall f_1056(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_1056,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1062,a[2]=t2,a[3]=t3,a[4]=((C_word)li9),tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:110: traverse */
f_982(t1,t2,t3,t4,t5,lf[17]);}

/* a1061 in substring-index in k807 */
static void C_ccall f_1062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1062,4,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_substring_compare(((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* ##sys#substring-index-ci in k807 */
static void C_ccall f_1065(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_1065,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1071,a[2]=t2,a[3]=t3,a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:116: traverse */
f_982(t1,t2,t3,t4,t5,lf[19]);}

/* a1070 in substring-index-ci in k807 */
static void C_ccall f_1071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1071,4,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_substring_compare_case_insensitive(((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.string#substring-index in k807 */
static void C_ccall f_1074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_1074,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+0);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* data-structures.scm:122: ##sys#substring-index */
t5=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=C_i_car(t4);
/* data-structures.scm:122: ##sys#substring-index */
t6=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* chicken.string#substring-index-ci in k807 */
static void C_ccall f_1089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_1089,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+0);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* data-structures.scm:125: ##sys#substring-index-ci */
t5=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=C_i_car(t4);
/* data-structures.scm:125: ##sys#substring-index-ci */
t6=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* chicken.string#string-compare3 in k807 */
static void C_ccall f_1104(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1104,4,av);}
t4=C_i_check_string_2(t2,lf[23]);
t5=C_i_check_string_2(t3,lf[23]);
t6=C_block_size(t2);
t7=C_block_size(t3);
t8=C_fixnum_difference(t6,t7);
t9=C_fixnum_lessp(t8,C_fix(0));
t10=(C_truep(t9)?t6:t7);
t11=C_string_compare(t2,t3,t10);
t12=C_eqp(t11,C_fix(0));
t13=t1;{
C_word *av2=av;
av2[0]=t13;
av2[1]=(C_truep(t12)?t8:t11);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}

/* chicken.string#string-compare3-ci in k807 */
static void C_ccall f_1135(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1135,4,av);}
t4=C_i_check_string_2(t2,lf[25]);
t5=C_i_check_string_2(t3,lf[25]);
t6=C_block_size(t2);
t7=C_block_size(t3);
t8=C_fixnum_difference(t6,t7);
t9=C_fixnum_lessp(t8,C_fix(0));
t10=(C_truep(t9)?t6:t7);
t11=C_string_compare_case_insensitive(t2,t3,t10);
t12=C_eqp(t11,C_fix(0));
t13=t1;{
C_word *av2=av;
av2[0]=t13;
av2[1]=(C_truep(t12)?t8:t11);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}

/* ##sys#substring=? in k807 */
static void C_ccall f_1166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1166,7,av);}
a=C_alloc(7);
t7=C_i_check_string_2(t2,lf[27]);
t8=C_i_check_string_2(t3,lf[27]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1176,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t10=t9;
f_1176(t10,t6);}
else{
t10=C_block_size(t2);
t11=C_fixnum_difference(t10,t4);
t12=C_block_size(t3);
t13=C_fixnum_difference(t12,t5);
t14=t9;
f_1176(t14,C_i_fixnum_min(t11,t13));}}

/* k1174 in substring=? in k807 */
static void C_fcall f_1176(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_1176,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1179,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm:161: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word av2[4];
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[27];
tp(4,av2);}}

/* k1177 in k1174 in substring=? in k807 */
static void C_ccall f_1179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1179,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1182,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm:162: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[27];
tp(4,av2);}}

/* k1180 in k1177 in k1174 in substring=? in k807 */
static void C_ccall f_1182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1182,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_substring_compare(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.string#substring=? in k807 */
static void C_ccall f_1203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +0,c,6)))){
C_save_and_reclaim((void*)f_1203,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+0);
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_fix(0):C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_fix(0):C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
if(C_truep(C_i_nullp(t12))){
/* data-structures.scm:166: ##sys#substring=? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t6;
av2[5]=t10;
av2[6]=t14;
tp(7,av2);}}
else{
t15=C_i_cdr(t12);
/* data-structures.scm:166: ##sys#substring=? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t6;
av2[5]=t10;
av2[6]=t14;
tp(7,av2);}}}

/* ##sys#substring-ci=? in k807 */
static void C_ccall f_1263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1263,7,av);}
a=C_alloc(7);
t7=C_i_check_string_2(t2,lf[30]);
t8=C_i_check_string_2(t3,lf[30]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1273,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t10=t9;
f_1273(t10,t6);}
else{
t10=C_block_size(t2);
t11=C_fixnum_difference(t10,t4);
t12=C_block_size(t3);
t13=C_fixnum_difference(t12,t5);
t14=t9;
f_1273(t14,C_i_fixnum_min(t11,t13));}}

/* k1271 in substring-ci=? in k807 */
static void C_fcall f_1273(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_1273,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1276,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm:174: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word av2[4];
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[30];
tp(4,av2);}}

/* k1274 in k1271 in substring-ci=? in k807 */
static void C_ccall f_1276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1276,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1279,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm:175: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[30];
tp(4,av2);}}

/* k1277 in k1274 in k1271 in substring-ci=? in k807 */
static void C_ccall f_1279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1279,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_substring_compare_case_insensitive(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.string#substring-ci=? in k807 */
static void C_ccall f_1300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +0,c,6)))){
C_save_and_reclaim((void*)f_1300,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+0);
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_fix(0):C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_fix(0):C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
if(C_truep(C_i_nullp(t12))){
/* data-structures.scm:180: ##sys#substring-ci=? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t6;
av2[5]=t10;
av2[6]=t14;
tp(7,av2);}}
else{
t15=C_i_cdr(t12);
/* data-structures.scm:180: ##sys#substring-ci=? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t6;
av2[5]=t10;
av2[6]=t14;
tp(7,av2);}}}

/* chicken.string#string-split in k807 */
static void C_ccall f_1360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +20,c,5)))){
C_save_and_reclaim((void*)f_1360,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+20);
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
t4=C_i_check_string_2(t2,lf[33]);
t5=C_i_nullp(t3);
t6=(C_truep(t5)?lf[34]:C_i_car(t3));
t7=t6;
t8=t3;
t9=C_u_i_length(t8);
t10=C_eqp(t9,C_fix(2));
t11=(C_truep(t10)?C_i_cadr(t3):C_SCHEME_FALSE);
t12=t11;
t13=C_block_size(t2);
t14=t13;
t15=C_i_check_string_2(t7,lf[33]);
t16=C_block_size(t7);
t17=t16;
t18=C_SCHEME_FALSE;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1381,a[2]=t19,a[3]=t2,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1401,a[2]=t14,a[3]=t19,a[4]=t12,a[5]=t20,a[6]=t2,a[7]=t17,a[8]=t22,a[9]=t7,a[10]=((C_word)li23),tmp=(C_word)a,a+=11,tmp));
t24=((C_word*)t22)[1];
f_1401(t24,t1,C_fix(0),C_SCHEME_FALSE,C_fix(0));}

/* add in chicken.string#string-split in k807 */
static void C_fcall f_1381(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_1381,5,t0,t1,t2,t3,t4);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1396,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:195: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word av2[5];
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}

/* k1394 in add in chicken.string#string-split in k807 */
static void C_ccall f_1396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1396,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* loop in chicken.string#string-split in k807 */
static void C_fcall f_1401(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_1401,5,t0,t1,t2,t3,t4);}
a=C_alloc(15);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1411,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_fixnum_greaterp(t2,t4);
t7=(C_truep(t6)?t6:((C_word*)t0)[4]);
if(C_truep(t7)){
/* data-structures.scm:202: add */
t8=((C_word*)t0)[5];
f_1381(t8,t5,t4,t2,t3);}
else{
t8=((C_word*)((C_word*)t0)[3])[1];
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=(C_truep(t8)?t8:C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}
else{
t5=C_subchar(((C_word*)t0)[6],t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1428,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[8],a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[9],a[8]=t5,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=t7,a[12]=((C_word)li22),tmp=(C_word)a,a+=13,tmp));
t9=((C_word*)t7)[1];
f_1428(t9,t1,C_fix(0));}}

/* k1409 in loop in chicken.string#string-split in k807 */
static void C_ccall f_1411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1411,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?t2:C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* scan in loop in chicken.string#string-split in k807 */
static void C_fcall f_1428(C_word t0,C_word t1,C_word t2){
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
C_word t12;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_1428,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm:207: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1401(t4,t1,t3,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t3=C_subchar(((C_word*)t0)[7],t2);
t4=C_eqp(((C_word*)t0)[8],t3);
if(C_truep(t4)){
t5=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t6=t5;
t7=C_fixnum_greaterp(((C_word*)t0)[3],((C_word*)t0)[6]);
t8=(C_truep(t7)?t7:((C_word*)t0)[9]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1467,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:211: add */
t10=((C_word*)t0)[10];
f_1381(t10,t9,((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[5]);}
else{
/* data-structures.scm:212: loop */
t9=((C_word*)((C_word*)t0)[4])[1];
f_1401(t9,t1,t6,((C_word*)t0)[5],t6);}}
else{
t5=C_fixnum_plus(t2,C_fix(1));
/* data-structures.scm:213: scan */
t11=t1;
t12=t5;
t1=t11;
t2=t12;
goto loop;}}}

/* k1465 in scan in loop in chicken.string#string-split in k807 */
static void C_ccall f_1467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1467,2,av);}
/* data-structures.scm:211: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1401(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[4]);}

/* chicken.string#string-intersperse in k807 */
static void C_ccall f_1494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +9,c,4)))){
C_save_and_reclaim((void*)f_1494,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+9);
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
C_word t13;
C_word t14;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?lf[37]:C_i_car(t3));
t6=t5;
t7=C_i_check_list_2(t2,lf[38]);
t8=C_i_check_string_2(t6,lf[38]);
t9=C_block_size(t6);
t10=t9;
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1512,a[2]=t2,a[3]=t6,a[4]=t10,a[5]=t12,a[6]=((C_word)li26),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_1512(t14,t1,t2,C_fix(0));}

/* loop1 in chicken.string#string-intersperse in k807 */
static void C_fcall f_1512(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,5)))){
C_save_and_reclaim_args((void *)trf_1512,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
if(C_truep(C_eqp(((C_word*)t0)[2],C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[39];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1522,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t5=C_fixnum_difference(t3,((C_word*)t0)[4]);
/* data-structures.scm:226: ##sys#allocate-vector */
t6=*((C_word*)lf[40]+1);{
C_word av2[6];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_make_character(32);
av2[5]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}}
else{
t4=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_slot(t2,C_fix(0));
t6=C_i_check_string_2(t5,lf[38]);
t7=C_slot(t2,C_fix(1));
t8=C_block_size(t5);
t9=C_fixnum_plus(((C_word*)t0)[4],t3);
t10=C_fixnum_plus(t8,t9);
/* data-structures.scm:241: loop1 */
t12=t1;
t13=t7;
t14=t10;
t1=t12;
t2=t13;
t3=t14;
goto loop;}
else{
/* data-structures.scm:243: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[41]);
C_word av2[3];
av2[0]=*((C_word*)lf[41]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}}

/* k1520 in loop1 in chicken.string#string-intersperse in k807 */
static void C_ccall f_1522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1522,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1527,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li25),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  f_1527(t3,((C_word*)t0)[5],C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* loop2 in k1520 in loop1 in chicken.string#string-intersperse in k807 */
static C_word C_fcall f_1527(C_word t0,C_word t1,C_word t2){
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
C_word t12;
C_stack_overflow_check;
loop:{}
t3=C_slot(t1,C_fix(0));
t4=C_slot(t1,C_fix(1));
t5=C_block_size(t3);
t6=C_substring_copy(t3,((C_word*)t0)[2],C_fix(0),t5,t2);
t7=C_fixnum_plus(t2,t5);
if(C_truep(C_eqp(t4,C_SCHEME_END_OF_LIST))){
return(((C_word*)t0)[2]);}
else{
t8=C_substring_copy(((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),((C_word*)t0)[4],t7);
t9=C_fixnum_plus(t7,((C_word*)t0)[4]);
t11=t4;
t12=t9;
t1=t11;
t2=t12;
goto loop;}}

/* chicken.string#string-translate in k807 */
static void C_ccall f_1596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +12,c,3)))){
C_save_and_reclaim((void*)f_1596,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+12);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1599,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1634,a[2]=t2,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_charp(t3))){
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1776,a[2]=t3,a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
f_1634(2,av2);}}
else{
if(C_truep(C_i_pairp(t3))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1793,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* list->string */
t8=C_fast_retrieve(lf[47]);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t7=C_i_check_string_2(t3,lf[43]);
/* data-structures.scm:264: instring */
f_1599(t6,t3);}}}

/* instring in chicken.string#string-translate in k807 */
static void C_fcall f_1599(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1599,2,t1,t2);}
a=C_alloc(5);
t3=C_block_size(t2);
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1604,a[2]=t4,a[3]=t2,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* f_1604 in instring in chicken.string#string-translate in k807 */
static void C_ccall f_1604(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1604,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1610,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  f_1610(t3,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* loop */
static C_word C_fcall f_1610(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(C_SCHEME_FALSE);}
else{
t2=C_subchar(((C_word*)t0)[3],t1);
t3=C_eqp(((C_word*)t0)[4],t2);
if(C_truep(t3)){
return(t1);}
else{
t4=C_fixnum_plus(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}}}

/* k1632 in chicken.string#string-translate in k807 */
static void C_ccall f_1634(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1634,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1637,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t4=C_slot(((C_word*)t0)[4],C_fix(0));
if(C_truep(C_charp(t4))){
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_1637(2,av2);}}
else{
if(C_truep(C_i_pairp(t4))){
/* list->string */
t5=C_fast_retrieve(lf[47]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=C_i_check_string_2(t4,lf[43]);
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t4;
f_1637(2,av2);}}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_1637(2,av2);}}}

/* k1635 in k1632 in chicken.string#string-translate in k807 */
static void C_ccall f_1637(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1637,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_i_stringp(t2);
t4=(C_truep(t3)?C_block_size(t2):C_SCHEME_FALSE);
t5=t4;
t6=C_i_check_string_2(((C_word*)t0)[2],lf[43]);
t7=C_block_size(((C_word*)t0)[2]);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1649,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t5,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t9;
av2[2]=t8;
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k1647 in k1635 in k1632 in chicken.string#string-translate in k807 */
static void C_ccall f_1649(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1649,2,av);}
a=C_alloc(12);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1654,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word)li31),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_1654(t6,((C_word*)t0)[7],C_fix(0),C_fix(0));}

/* loop in k1647 in k1635 in k1632 in chicken.string#string-translate in k807 */
static void C_fcall f_1654(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_1654,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
if(C_truep(C_fixnum_lessp(t3,t2))){
/* data-structures.scm:280: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word av2[5];
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(0);
av2[4]=t3;
tp(5,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t4=C_subchar(((C_word*)t0)[4],t2);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1673,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* data-structures.scm:283: from */
t6=((C_word*)t0)[8];{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k1671 in loop in k1647 in k1635 in k1632 in chicken.string#string-translate in k807 */
static void C_ccall f_1673(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1673,2,av);}
if(C_truep(C_i_not(t1))){
t2=C_setsubchar(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm:286: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_1654(t5,((C_word*)t0)[7],t3,t4);}
else{
if(C_truep(C_i_not(((C_word*)t0)[8]))){
t2=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* data-structures.scm:287: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_1654(t3,((C_word*)t0)[7],t2,((C_word*)t0)[3]);}
else{
if(C_truep(C_charp(((C_word*)t0)[8]))){
t2=C_setsubchar(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[8]);
t3=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm:290: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_1654(t5,((C_word*)t0)[7],t3,t4);}
else{
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[9]))){
/* data-structures.scm:292: ##sys#error */
t2=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[7];
av2[2]=lf[43];
av2[3]=lf[45];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
t2=C_subchar(((C_word*)t0)[8],t1);
t3=C_setsubchar(((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t5=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm:295: loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_1654(t6,((C_word*)t0)[7],t4,t5);}}}}}

/* f_1776 in chicken.string#string-translate in k807 */
static void C_ccall f_1776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1776,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_eqp(t2,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1791 in chicken.string#string-translate in k807 */
static void C_ccall f_1793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1793,2,av);}
/* data-structures.scm:261: instring */
f_1599(((C_word*)t0)[3],t1);}

/* chicken.string#string-translate* in k807 */
static void C_ccall f_1801(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,6)))){
C_save_and_reclaim((void *)f_1801,4,av);}
a=C_alloc(9);
t4=C_i_check_string_2(t2,lf[49]);
t5=C_i_check_list_2(t3,lf[49]);
t6=C_block_size(t2);
t7=t6;
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1813,a[2]=t7,a[3]=t2,a[4]=t9,a[5]=t3,a[6]=((C_word)li35),tmp=(C_word)a,a+=7,tmp));
/* data-structures.scm:326: collect */
t11=((C_word*)t9)[1];
f_1813(t11,t1,C_fix(0),C_fix(0),C_fix(0),C_SCHEME_END_OF_LIST);}

/* collect in chicken.string#string-translate* in k807 */
static void C_fcall f_1813(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_1813,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(15);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1827,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_greaterp(t2,t3))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1841,a[2]=t6,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:307: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word av2[5];
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t8;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
av2[4]=t2;
tp(5,av2);}}
else{
t8=((C_word*)t6)[1];
/* data-structures.scm:305: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[51]);
C_word av2[3];
av2[0]=*((C_word*)lf[51]+1);
av2[1]=t7;
av2[2]=t8;
tp(3,av2);}}}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1846,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t6,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],a[9]=t8,a[10]=((C_word)li34),tmp=(C_word)a,a+=11,tmp));
t10=((C_word*)t8)[1];
f_1846(t10,t1,((C_word*)t0)[5]);}}

/* k1825 in collect in chicken.string#string-translate* in k807 */
static void C_ccall f_1827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1827,2,av);}
/* data-structures.scm:303: ##sys#fragments->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[50]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k1839 in collect in chicken.string#string-translate* in k807 */
static void C_ccall f_1841(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1841,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
/* data-structures.scm:305: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[51]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[51]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
tp(3,av2);}}

/* loop in collect in chicken.string#string-translate* in k807 */
static void C_fcall f_1846(C_word t0,C_word t1,C_word t2){
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
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,5)))){
C_save_and_reclaim_args((void *)trf_1846,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm:311: collect */
t5=((C_word*)((C_word*)t0)[4])[1];
f_1813(t5,t1,t3,((C_word*)t0)[5],t4,((C_word*)((C_word*)t0)[6])[1]);}
else{
t3=C_i_car(t2);
t4=C_i_car(t3);
t5=C_i_string_length(t4);
t6=C_u_i_cdr(t3);
t7=C_fixnum_plus(((C_word*)t0)[2],t5);
t8=C_fixnum_less_or_equal_p(t7,((C_word*)t0)[7]);
t9=(C_truep(t8)?C_substring_compare(((C_word*)t0)[8],t4,((C_word*)t0)[2],C_fix(0),t5):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=C_fixnum_plus(((C_word*)t0)[2],t5);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1886,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t11,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[2],((C_word*)t0)[5]))){
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1912,a[2]=((C_word*)t0)[6],a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:320: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word av2[5];
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t13;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}
else{
t13=t12;
f_1886(t13,C_SCHEME_UNDEFINED);}}
else{
t10=t2;
t11=C_u_i_cdr(t10);
/* data-structures.scm:325: loop */
t15=t1;
t16=t11;
t1=t15;
t2=t16;
goto loop;}}}

/* k1884 in loop in collect in chicken.string#string-translate* in k807 */
static void C_fcall f_1886(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,5)))){
C_save_and_reclaim_args((void *)trf_1886,2,t0,t1);}
a=C_alloc(3);
t2=C_i_string_length(((C_word*)t0)[2]);
t3=C_fixnum_plus(((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);
/* data-structures.scm:321: collect */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1813(t5,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[7],t3,t4);}

/* k1910 in loop in collect in chicken.string#string-translate* in k807 */
static void C_ccall f_1912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1912,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
f_1886(t4,t3);}

/* chicken.string#string-chop in k807 */
static void C_ccall f_1929(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1929,4,av);}
a=C_alloc(5);
t4=C_i_check_string_2(t2,lf[53]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1936,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:333: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2=av;
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t5;
av2[2]=t3;
av2[3]=lf[53];
tp(4,av2);}}

/* k1934 in chicken.string#string-chop in k807 */
static void C_ccall f_1936(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_1936,2,av);}
a=C_alloc(8);
t2=C_block_size(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1944,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word)li37),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_1944(t6,((C_word*)t0)[4],t2,C_fix(0));}

/* loop in k1934 in chicken.string#string-chop in k807 */
static void C_fcall f_1944(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_1944,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_less_or_equal_p(t2,((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1964,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_fixnum_plus(t3,t2);
/* data-structures.scm:337: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word av2[5];
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
av2[4]=t5;
tp(5,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1975,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_fixnum_plus(t3,((C_word*)t0)[2]);
/* data-structures.scm:338: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word av2[5];
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
av2[4]=t5;
tp(5,av2);}}}}

/* k1962 in loop in k1934 in chicken.string#string-chop in k807 */
static void C_ccall f_1964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1964,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list1(&a,1,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1973 in loop in k1934 in chicken.string#string-chop in k807 */
static void C_ccall f_1975(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1975,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1979,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_difference(((C_word*)t0)[3],((C_word*)t0)[4]);
t5=C_fixnum_plus(((C_word*)t0)[5],((C_word*)t0)[4]);
/* data-structures.scm:338: loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_1944(t6,t3,t4,t5);}

/* k1977 in k1973 in loop in k1934 in chicken.string#string-chop in k807 */
static void C_ccall f_1979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1979,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.string#string-chomp in k807 */
static void C_ccall f_1993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_1993,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
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
C_word t13;
C_word t14;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?lf[55]:C_i_car(t3));
t6=C_i_check_string_2(t2,lf[56]);
t7=C_i_check_string_2(t5,lf[56]);
t8=C_block_size(t2);
t9=C_block_size(t5);
t10=C_fixnum_difference(t8,t9);
t11=C_fixnum_greater_or_equal_p(t8,t9);
t12=(C_truep(t11)?C_substring_compare(t2,t5,t10,C_fix(0),t9):C_SCHEME_FALSE);
if(C_truep(t12)){
/* data-structures.scm:351: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=t10;
tp(5,av2);}}
else{
t13=t2;
t14=t1;{
C_word *av2=av;
av2[0]=t14;
av2[1]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}}

/* chicken.sort#sorted? in k807 */
static void C_ccall f_2032(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_2032,4,av);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_vectorp(t2))){
t4=t2;
t5=C_block_size(t4);
t6=t5;
if(C_truep(C_fixnum_less_or_equal_p(t6,C_fix(1)))){
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2059,a[2]=t6,a[3]=t8,a[4]=t2,a[5]=t3,a[6]=((C_word)li40),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_2059(t10,t1,C_fix(1));}}
else{
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2104,a[2]=t8,a[3]=t3,a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_2104(t10,t1,t4,t6);}}}

/* doloop466 in chicken.sort#sorted? in k807 */
static void C_fcall f_2059(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_2059,3,t0,t1,t2);}
a=C_alloc(11);
t3=t2;
t4=C_i_nequalp(t3,((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2068,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=t4;
f_2068(2,av2);}}
else{
t6=C_i_vector_ref(((C_word*)t0)[4],t2);
t7=t2;
t8=C_a_i_fixnum_difference(&a,2,t7,C_fix(1));
t9=C_i_vector_ref(((C_word*)t0)[4],t8);
/* data-structures.scm:390: less? */
t10=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t10;
av2[1]=t5;
av2[2]=t6;
av2[3]=t9;
((C_proc)C_fast_retrieve_proc(t10))(4,av2);}}}

/* k2066 in doloop466 in chicken.sort#sorted? in k807 */
static void C_ccall f_2068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_2068,2,av);}
a=C_alloc(29);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_nequalp(t2,((C_word*)t0)[3]);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];
t3=C_s_a_i_plus(&a,2,t2,C_fix(1));
t4=((C_word*)((C_word*)t0)[5])[1];
f_2059(t4,((C_word*)t0)[4],t3);}}

/* loop in chicken.sort#sorted? in k807 */
static void C_fcall f_2104(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2104,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=C_i_nullp(t3);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2128,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_i_car(t3);
/* data-structures.scm:396: less? */
t7=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}

/* k2126 in loop in chicken.sort#sorted? in k807 */
static void C_ccall f_2128(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2128,2,av);}
if(C_truep(C_i_not(t1))){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
/* data-structures.scm:397: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_2104(t6,((C_word*)t0)[4],t3,t5);}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.sort#merge in k807 */
static void C_ccall f_2134(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,6)))){
C_save_and_reclaim((void *)f_2134,5,av);}
a=C_alloc(7);
if(C_truep(C_i_nullp(t2))){
t5=t3;
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(t3))){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_i_car(t3);
t9=t3;
t10=C_u_i_cdr(t9);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2164,a[2]=t12,a[3]=t4,a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_2164(t14,t1,t5,t7,t8,t10);}}}

/* loop in chicken.sort#merge in k807 */
static void C_fcall f_2164(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_2164,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2171,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=t1,a[6]=t4,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm:413: less? */
t7=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}

/* k2169 in loop in chicken.sort#merge in k807 */
static void C_ccall f_2171(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_2171,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2191,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[2]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
/* data-structures.scm:416: loop */
t6=((C_word*)((C_word*)t0)[7])[1];
f_2164(t6,t2,((C_word*)t0)[3],((C_word*)t0)[4],t3,t5);}}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[2]);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2217,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[4]);
t4=((C_word*)t0)[4];
t5=C_u_i_cdr(t4);
/* data-structures.scm:420: loop */
t6=((C_word*)((C_word*)t0)[7])[1];
f_2164(t6,t2,t3,t5,((C_word*)t0)[6],((C_word*)t0)[2]);}}}

/* k2189 in k2169 in loop in chicken.sort#merge in k807 */
static void C_ccall f_2191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2191,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2215 in k2169 in loop in chicken.sort#merge in k807 */
static void C_ccall f_2217(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2217,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.sort#merge! in k807 */
static void C_ccall f_2225(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_2225,5,av);}
a=C_alloc(13);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2228,a[2]=t6,a[3]=t4,a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp));
if(C_truep(C_i_nullp(t2))){
t8=t3;
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(t3))){
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2303,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t9=C_i_car(t3);
t10=C_i_car(t2);
/* data-structures.scm:445: less? */
t11=t4;{
C_word *av2=av;
av2[0]=t11;
av2[1]=t8;
av2[2]=t9;
av2[3]=t10;
((C_proc)C_fast_retrieve_proc(t11))(4,av2);}}}}

/* loop in chicken.sort#merge! in k807 */
static void C_fcall f_2228(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_2228,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2235,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t6=C_i_car(t4);
t7=C_i_car(t3);
/* data-structures.scm:430: less? */
t8=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t8;
av2[1]=t5;
av2[2]=t6;
av2[3]=t7;
((C_proc)C_fast_retrieve_proc(t8))(4,av2);}}

/* k2233 in loop in chicken.sort#merge! in k807 */
static void C_ccall f_2235(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2235,2,av);}
if(C_truep(t1)){
t2=C_i_set_cdr(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t4))){
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[4];
t7=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_i_setslot(t5,C_fix(1),t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t5=((C_word*)t0)[3];
t6=C_u_i_cdr(t5);
/* data-structures.scm:435: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_2228(t7,((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[4],t6);}}
else{
t2=C_i_set_cdr(((C_word*)t0)[2],((C_word*)t0)[4]);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t4))){
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[3];
t7=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_i_setslot(t5,C_fix(1),t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* data-structures.scm:441: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_2228(t7,((C_word*)t0)[5],((C_word*)t0)[4],t6,((C_word*)t0)[3]);}}}

/* k2301 in chicken.sort#merge! in k807 */
static void C_ccall f_2303(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2303,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2306,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t4))){
t5=((C_word*)t0)[2];
t6=((C_word*)t0)[4];
t7=C_i_setslot(t5,C_fix(1),t6);
t8=((C_word*)t0)[2];
t9=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* data-structures.scm:448: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_2228(t7,t2,((C_word*)t0)[2],((C_word*)t0)[4],t6);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2324,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t4))){
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[2];
t7=C_i_setslot(t5,C_fix(1),t6);
t8=((C_word*)t0)[4];
t9=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* data-structures.scm:453: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_2228(t7,t2,((C_word*)t0)[4],t6,((C_word*)t0)[2]);}}}

/* k2304 in k2301 in chicken.sort#merge! in k807 */
static void C_ccall f_2306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2306,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2322 in k2301 in chicken.sort#merge! in k807 */
static void C_ccall f_2324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2324,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.sort#sort! in k807 */
static void C_ccall f_2349(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_2349,4,av);}
a=C_alloc(17);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2352,a[2]=t3,a[3]=t6,a[4]=t4,a[5]=((C_word)li47),tmp=(C_word)a,a+=6,tmp));
if(C_truep(C_i_vectorp(((C_word*)t4)[1]))){
t8=C_i_vector_length(((C_word*)t4)[1]);
t9=t8;
t10=((C_word*)t4)[1];
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2432,a[2]=t4,a[3]=t10,a[4]=t1,a[5]=t6,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:492: scheme#vector->list */
t12=*((C_word*)lf[62]+1);{
C_word *av2=av;
av2[0]=t12;
av2[1]=t11;
av2[2]=((C_word*)t4)[1];
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
t8=C_i_length(((C_word*)t4)[1]);
/* data-structures.scm:498: step */
t9=((C_word*)t6)[1];
f_2352(t9,t1,t8);}}

/* step in chicken.sort#sort! in k807 */
static void C_fcall f_2352(C_word t0,C_word t1,C_word t2){
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
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_2352,3,t0,t1,t2);}
a=C_alloc(12);
t3=t2;
if(C_truep(C_i_greaterp(t3,C_fix(2)))){
t4=t2;
t5=C_s_a_i_quotient(&a,2,t4,C_fix(2));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2363,a[2]=t2,a[3]=t5,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:468: step */
t14=t6;
t15=t5;
t1=t14;
t2=t15;
goto loop;}
else{
t4=t2;
if(C_truep(C_i_nequalp(t4,C_fix(2)))){
t5=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
t6=t5;
t7=C_i_cadr(((C_word*)((C_word*)t0)[4])[1]);
t8=t7;
t9=((C_word*)((C_word*)t0)[4])[1];
t10=C_i_cddr(((C_word*)((C_word*)t0)[4])[1]);
t11=C_mutate(((C_word *)((C_word*)t0)[4])+1,t10);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2399,a[2]=t9,a[3]=t8,a[4]=t6,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:477: less? */
t13=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t13;
av2[1]=t12;
av2[2]=t8;
av2[3]=t6;
((C_proc)C_fast_retrieve_proc(t13))(4,av2);}}
else{
t5=t2;
if(C_truep(C_i_nequalp(t5,C_fix(1)))){
t6=((C_word*)((C_word*)t0)[4])[1];
t7=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t7);
t9=C_i_set_cdr(t6,C_SCHEME_END_OF_LIST);
t10=t1;{
C_word av2[2];
av2[0]=t10;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}}

/* k2361 in step in chicken.sort#sort! in k807 */
static void C_ccall f_2363(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(34,c,2)))){
C_save_and_reclaim((void *)f_2363,2,av);}
a=C_alloc(34);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_s_a_i_minus(&a,2,t3,((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2368,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:470: step */
t6=((C_word*)((C_word*)t0)[6])[1];
f_2352(t6,t5,t4);}

/* k2366 in k2361 in step in chicken.sort#sort! in k807 */
static void C_ccall f_2368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2368,2,av);}
/* data-structures.scm:471: merge! */
t2=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k2397 in step in chicken.sort#sort! in k807 */
static void C_ccall f_2399(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2399,2,av);}
if(C_truep(t1)){
t2=C_i_set_car(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_i_set_car(t3,((C_word*)t0)[4]);
t5=C_i_cdr(((C_word*)t0)[2]);
t6=C_i_set_cdr(t5,C_SCHEME_END_OF_LIST);
t7=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t7;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_i_set_cdr(t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2430 in chicken.sort#sort! in k807 */
static void C_ccall f_2432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2432,2,av);}
a=C_alloc(4);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2439,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:493: step */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2352(t4,t3,((C_word*)t0)[6]);}

/* k2437 in k2430 in chicken.sort#sort! in k807 */
static void C_ccall f_2439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2439,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2441,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li48),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2441(t5,((C_word*)t0)[3],t1,C_fix(0));}

/* doloop537 in k2437 in k2430 in chicken.sort#sort! in k807 */
static void C_fcall f_2441(C_word t0,C_word t1,C_word t2,C_word t3){
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
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2441,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_vector_set(((C_word*)t0)[2],t3,t4);
t6=t2;
t7=C_u_i_cdr(t6);
t8=t3;
t9=C_a_i_fixnum_plus(&a,2,t8,C_fix(1));
t11=t1;
t12=t7;
t13=t9;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}

/* chicken.sort#sort in k807 */
static void C_ccall f_2472(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2472,4,av);}
a=C_alloc(7);
if(C_truep(C_i_vectorp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2486,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2490,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:509: scheme#vector->list */
t6=*((C_word*)lf[62]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2497,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:510: scheme#append */
t5=*((C_word*)lf[65]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k2484 in chicken.sort#sort in k807 */
static void C_ccall f_2486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2486,2,av);}
/* data-structures.scm:509: scheme#list->vector */
t2=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k2488 in chicken.sort#sort in k807 */
static void C_ccall f_2490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2490,2,av);}
/* data-structures.scm:509: sort! */
t2=*((C_word*)lf[61]+1);{
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

/* k2495 in chicken.sort#sort in k807 */
static void C_ccall f_2497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2497,2,av);}
/* data-structures.scm:510: sort! */
t2=*((C_word*)lf[61]+1);{
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

/* chicken.sort#topological-sort in k807 */
static void C_ccall f_2499(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,7)))){
C_save_and_reclaim((void *)f_2499,4,av);}
a=C_alloc(17);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2502,a[2]=t3,a[3]=t5,a[4]=((C_word)li52),tmp=(C_word)a,a+=5,tmp));
t7=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2646,a[2]=t9,a[3]=t5,a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_2646(t11,t1,t2,t7);}

/* visit in chicken.sort#topological-sort in k807 */
static void C_fcall f_2502(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_2502,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(10);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2506,a[2]=t3,a[3]=t1,a[4]=t5,a[5]=t6,a[6]=t4,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
t8=C_i_car(t6);
/* data-structures.scm:520: chicken.base#alist-ref */
t9=*((C_word*)lf[82]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t7;
av2[2]=t3;
av2[3]=t8;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* k2504 in visit in chicken.sort#topological-sort in k807 */
static void C_ccall f_2506(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_2506,2,av);}
a=C_alloc(12);
t2=C_eqp(t1,lf[67]);
if(C_truep(t2)){
t3=C_a_i_cons(&a,2,lf[68],lf[69]);
t4=t3;
t5=C_a_i_cons(&a,2,lf[68],lf[70]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2555,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t6,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:527: scheme#reverse */
t8=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t3=C_eqp(t1,lf[80]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=((C_word*)t0)[6];
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2568,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t4;
f_2568(2,av2);}}
else{
/* data-structures.scm:533: chicken.base#alist-ref */
t6=*((C_word*)lf[82]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[9];
av2[4]=((C_word*)t0)[7];
av2[5]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}}}}

/* k2541 in k2553 in k2504 in visit in chicken.sort#topological-sort in k807 */
static void C_ccall f_2543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,2)))){
C_save_and_reclaim((void *)f_2543,2,av);}
a=C_alloc(31);
t2=C_a_i_cons(&a,2,lf[68],lf[72]);
t3=C_a_i_list(&a,8,((C_word*)t0)[2],lf[73],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,t2,lf[74]);
t4=C_a_i_record3(&a,3,lf[75],lf[76],t3);
/* data-structures.scm:522: chicken.condition#abort */
t5=C_fast_retrieve(lf[77]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[6];
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2553 in k2504 in visit in chicken.sort#topological-sort in k807 */
static void C_ccall f_2555(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_2555,2,av);}
a=C_alloc(16);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
t4=t3;
t5=C_a_i_cons(&a,2,lf[68],lf[71]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2543,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t6,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:528: chicken.base#get-call-chain */
t8=C_fast_retrieve(lf[78]);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k2566 in k2504 in visit in chicken.sort#topological-sort in k807 */
static void C_ccall f_2568(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_2568,2,av);}
a=C_alloc(20);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],lf[67]);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
t5=C_a_i_cons(&a,2,t2,t4);
t6=((C_word*)t0)[3];
t7=C_u_i_cdr(t6);
t8=C_a_i_cons(&a,2,t5,t7);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2574,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t10,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li51),tmp=(C_word)a,a+=9,tmp));
t12=((C_word*)t10)[1];
f_2574(t12,((C_word*)t0)[8],t1,t8);}

/* walk in k2566 in k2504 in visit in chicken.sort#topological-sort in k807 */
static void C_fcall f_2574(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,6)))){
C_save_and_reclaim_args((void *)trf_2574,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2588,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(t3);
/* data-structures.scm:537: chicken.base#alist-update! */
t6=C_fast_retrieve(lf[81]);{
C_word av2[6];
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[80];
av2[4]=t5;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}
else{
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2610,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=C_a_i_cons(&a,2,t4,((C_word*)t0)[5]);
/* data-structures.scm:541: visit */
t9=((C_word*)((C_word*)t0)[6])[1];
f_2502(t9,t7,((C_word*)t0)[7],t4,C_SCHEME_FALSE,t8,t3);}}

/* k2586 in walk in k2566 in k2504 in visit in chicken.sort#topological-sort in k807 */
static void C_ccall f_2588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_2588,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,t1,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k2608 in walk in k2566 in k2504 in visit in chicken.sort#topological-sort in k807 */
static void C_ccall f_2610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2610,2,av);}
/* data-structures.scm:540: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2574(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in chicken.sort#topological-sort in k807 */
static void C_fcall f_2646(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,6)))){
C_save_and_reclaim_args((void *)trf_2646,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_cdr(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_cdr(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2667,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_i_caar(t2);
t8=t2;
t9=C_u_i_car(t8);
t10=C_u_i_cdr(t9);
/* data-structures.scm:551: visit */
t11=((C_word*)((C_word*)t0)[3])[1];
f_2502(t11,t6,t2,t7,t10,C_SCHEME_END_OF_LIST,t3);}}

/* k2665 in loop in chicken.sort#topological-sort in k807 */
static void C_ccall f_2667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2667,2,av);}
/* data-structures.scm:550: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2646(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k807 */
static void C_ccall f_809(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(107,c,7)))){
C_save_and_reclaim((void *)f_809,2,av);}
a=C_alloc(107);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_mutate((C_word*)lf[2]+1 /* (set! chicken.string#reverse-string-append ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_811,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[4]+1 /* (set! chicken.string#reverse-list->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_884,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[6]+1 /* (set! chicken.string#->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_890,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[12]+1 /* (set! chicken.string#conc ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_935,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_982,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
t9=C_mutate((C_word*)lf[16]+1 /* (set! ##sys#substring-index ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1056,a[2]=t8,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));
t10=C_mutate((C_word*)lf[18]+1 /* (set! ##sys#substring-index-ci ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1065,a[2]=t8,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));
t11=C_mutate((C_word*)lf[20]+1 /* (set! chicken.string#substring-index ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1074,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[21]+1 /* (set! chicken.string#substring-index-ci ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1089,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[22]+1 /* (set! chicken.string#string-compare3 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1104,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[24]+1 /* (set! chicken.string#string-compare3-ci ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1135,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[26]+1 /* (set! ##sys#substring=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1166,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[28]+1 /* (set! chicken.string#substring=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1203,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[29]+1 /* (set! ##sys#substring-ci=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1263,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[31]+1 /* (set! chicken.string#substring-ci=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1300,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[32]+1 /* (set! chicken.string#string-split ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1360,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[36]+1 /* (set! chicken.string#string-intersperse ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1494,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[42]+1 /* (set! chicken.string#string-translate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1596,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[48]+1 /* (set! chicken.string#string-translate* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1801,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[52]+1 /* (set! chicken.string#string-chop ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1929,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[54]+1 /* (set! chicken.string#string-chomp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1993,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t25=C_a_i_provide(&a,1,lf[57]);
t26=C_mutate((C_word*)lf[58]+1 /* (set! chicken.sort#sorted? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2032,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[59]+1 /* (set! chicken.sort#merge ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2134,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[60]+1 /* (set! chicken.sort#merge! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2225,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[61]+1 /* (set! chicken.sort#sort! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2349,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[63]+1 /* (set! chicken.sort#sort ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2472,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[66]+1 /* (set! chicken.sort#topological-sort ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2499,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t32=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t32;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t32+1)))(2,av2);}}

/* chicken.string#reverse-string-append in k807 */
static void C_ccall f_811(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_811,3,av);}
a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_814,a[2]=t4,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp));
/* data-structures.scm:61: rev-string-append */
t6=((C_word*)t4)[1];
f_814(t6,t1,t2,C_fix(0));}

/* rev-string-append in chicken.string#reverse-string-append in k807 */
static void C_fcall f_814(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_814,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_car(t4);
t6=C_i_string_length(t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_828,a[2]=t3,a[3]=t7,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=t2;
t10=C_u_i_cdr(t9);
t11=C_fixnum_plus(t3,t7);
/* data-structures.scm:53: rev-string-append */
t13=t8;
t14=t10;
t15=t11;
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
/* data-structures.scm:60: scheme#make-string */
t4=*((C_word*)lf[3]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k826 in rev-string-append in chicken.string#reverse-string-append in k807 */
static void C_ccall f_828(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_828,2,av);}
a=C_alloc(6);
t2=t1;
t3=C_i_string_length(t2);
t4=C_fixnum_difference(t3,((C_word*)t0)[2]);
t5=C_fixnum_difference(t4,((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_837,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word)li0),tmp=(C_word)a,a+=6,tmp);
t7=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t7;
av2[1]=(
  f_837(t6,C_fix(0),t5)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* loop in k826 in rev-string-append in chicken.string#reverse-string-append in k807 */
static C_word C_fcall f_837(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_lessp(t1,((C_word*)t0)[2]))){
t3=C_i_string_ref(((C_word*)t0)[3],t1);
t4=C_i_string_set(((C_word*)t0)[4],t2,t3);
t5=C_fixnum_plus(t1,C_fix(1));
t6=C_fixnum_plus(t2,C_fix(1));
t8=t5;
t9=t6;
t1=t8;
t2=t9;
goto loop;}
else{
return(((C_word*)t0)[4]);}}

/* chicken.string#reverse-list->string in k807 */
static void C_ccall f_884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_884,3,av);}
/* data-structures.scm:64: ##sys#reverse-list->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2=av;
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* chicken.string#->string in k807 */
static void C_ccall f_890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_890,3,av);}
a=C_alloc(4);
if(C_truep(C_i_stringp(t2))){
t3=t2;
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
/* data-structures.scm:71: scheme#symbol->string */
t3=*((C_word*)lf[7]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
if(C_truep(C_charp(t2))){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_string(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_numberp(t2))){
/* data-structures.scm:73: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[8]);
C_word *av2=av;
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_927,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:75: chicken.base#open-output-string */
t4=C_fast_retrieve(lf[11]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}}}

/* k925 in chicken.string#->string in k807 */
static void C_ccall f_927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_927,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_930,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:76: scheme#display */
t4=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k928 in k925 in chicken.string#->string in k807 */
static void C_ccall f_930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_930,2,av);}
/* data-structures.scm:77: chicken.base#get-output-string */
t2=C_fast_retrieve(lf[9]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* chicken.string#conc in k807 */
static void C_ccall f_935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +17,c,3)))){
C_save_and_reclaim((void*)f_935,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+17);
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
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=*((C_word*)lf[6]+1);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_946,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_948,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,a[6]=((C_word)li5),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_948(t12,t8,t2);}

/* k944 in chicken.string#conc in k807 */
static void C_ccall f_946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_946,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[13]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* map-loop80 in chicken.string#conc in k807 */
static void C_fcall f_948(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_948,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_973,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* data-structures.scm:81: g86 */
t5=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k971 in map-loop80 in chicken.string#conc in k807 */
static void C_ccall f_973(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_973,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_948(t6,((C_word*)t0)[5],t5);}

/* traverse in k807 */
static void C_fcall f_982(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_982,6,t1,t2,t3,t4,t5,t6);}
a=C_alloc(9);
t7=C_i_check_string_2(t2,t6);
t8=C_i_check_string_2(t3,t6);
t9=C_block_size(t3);
t10=t9;
t11=C_block_size(t2);
t12=t11;
t13=C_fixnum_difference(t10,t12);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1001,a[2]=t4,a[3]=t10,a[4]=t12,a[5]=t1,a[6]=t14,a[7]=t5,a[8]=t6,tmp=(C_word)a,a+=9,tmp);
/* data-structures.scm:93: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word av2[4];
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t15;
av2[2]=t4;
av2[3]=t6;
tp(4,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("data-structures"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_data_2dstructures_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(562))){
C_save(t1);
C_rereclaim2(562*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,83);
lf[0]=C_h_intern(&lf[0],15, C_text("data-structures"));
lf[1]=C_h_intern(&lf[1],15, C_text("chicken.string#"));
lf[2]=C_h_intern(&lf[2],36, C_text("chicken.string#reverse-string-append"));
lf[3]=C_h_intern(&lf[3],18, C_text("scheme#make-string"));
lf[4]=C_h_intern(&lf[4],35, C_text("chicken.string#reverse-list->string"));
lf[5]=C_h_intern(&lf[5],24, C_text("\003sysreverse-list->string"));
lf[6]=C_h_intern(&lf[6],23, C_text("chicken.string#->string"));
lf[7]=C_h_intern(&lf[7],21, C_text("scheme#symbol->string"));
lf[8]=C_h_intern(&lf[8],18, C_text("\003sysnumber->string"));
lf[9]=C_h_intern(&lf[9],30, C_text("chicken.base#get-output-string"));
lf[10]=C_h_intern(&lf[10],14, C_text("scheme#display"));
lf[11]=C_h_intern(&lf[11],31, C_text("chicken.base#open-output-string"));
lf[12]=C_h_intern(&lf[12],19, C_text("chicken.string#conc"));
lf[13]=C_h_intern(&lf[13],20, C_text("scheme#string-append"));
lf[14]=C_h_intern(&lf[14],14, C_text("\003syserror-hook"));
lf[15]=C_h_intern(&lf[15],16, C_text("\003syscheck-fixnum"));
lf[16]=C_h_intern(&lf[16],19, C_text("\003syssubstring-index"));
lf[17]=C_h_intern(&lf[17],15, C_text("substring-index"));
lf[18]=C_h_intern(&lf[18],22, C_text("\003syssubstring-index-ci"));
lf[19]=C_h_intern(&lf[19],18, C_text("substring-index-ci"));
lf[20]=C_h_intern(&lf[20],30, C_text("chicken.string#substring-index"));
lf[21]=C_h_intern(&lf[21],33, C_text("chicken.string#substring-index-ci"));
lf[22]=C_h_intern(&lf[22],30, C_text("chicken.string#string-compare3"));
lf[23]=C_h_intern(&lf[23],15, C_text("string-compare3"));
lf[24]=C_h_intern(&lf[24],33, C_text("chicken.string#string-compare3-ci"));
lf[25]=C_h_intern(&lf[25],18, C_text("string-compare3-ci"));
lf[26]=C_h_intern(&lf[26],15, C_text("\003syssubstring=\077"));
lf[27]=C_h_intern(&lf[27],11, C_text("substring=\077"));
lf[28]=C_h_intern(&lf[28],26, C_text("chicken.string#substring=\077"));
lf[29]=C_h_intern(&lf[29],18, C_text("\003syssubstring-ci=\077"));
lf[30]=C_h_intern(&lf[30],14, C_text("substring-ci=\077"));
lf[31]=C_h_intern(&lf[31],29, C_text("chicken.string#substring-ci=\077"));
lf[32]=C_h_intern(&lf[32],27, C_text("chicken.string#string-split"));
lf[33]=C_h_intern(&lf[33],12, C_text("string-split"));
lf[34]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003\011\012 "));
lf[35]=C_h_intern(&lf[35],13, C_text("\003syssubstring"));
lf[36]=C_h_intern(&lf[36],33, C_text("chicken.string#string-intersperse"));
lf[37]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001 "));
lf[38]=C_h_intern(&lf[38],18, C_text("string-intersperse"));
lf[39]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[40]=C_h_intern(&lf[40],19, C_text("\003sysallocate-vector"));
lf[41]=C_h_intern(&lf[41],27, C_text("\003syserror-not-a-proper-list"));
lf[42]=C_h_intern(&lf[42],31, C_text("chicken.string#string-translate"));
lf[43]=C_h_intern(&lf[43],16, C_text("string-translate"));
lf[44]=C_h_intern(&lf[44],9, C_text("\003syserror"));
lf[45]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037invalid translation destination"));
lf[46]=C_h_intern(&lf[46],15, C_text("\003sysmake-string"));
lf[47]=C_h_intern(&lf[47],16, C_text("\003syslist->string"));
lf[48]=C_h_intern(&lf[48],32, C_text("chicken.string#string-translate\052"));
lf[49]=C_h_intern(&lf[49],17, C_text("string-translate\052"));
lf[50]=C_h_intern(&lf[50],21, C_text("\003sysfragments->string"));
lf[51]=C_h_intern(&lf[51],16, C_text("\003sysfast-reverse"));
lf[52]=C_h_intern(&lf[52],26, C_text("chicken.string#string-chop"));
lf[53]=C_h_intern(&lf[53],11, C_text("string-chop"));
lf[54]=C_h_intern(&lf[54],27, C_text("chicken.string#string-chomp"));
lf[55]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\012"));
lf[56]=C_h_intern(&lf[56],12, C_text("string-chomp"));
lf[57]=C_h_intern(&lf[57],13, C_text("chicken.sort#"));
lf[58]=C_h_intern(&lf[58],20, C_text("chicken.sort#sorted\077"));
lf[59]=C_h_intern(&lf[59],18, C_text("chicken.sort#merge"));
lf[60]=C_h_intern(&lf[60],19, C_text("chicken.sort#merge!"));
lf[61]=C_h_intern(&lf[61],18, C_text("chicken.sort#sort!"));
lf[62]=C_h_intern(&lf[62],19, C_text("scheme#vector->list"));
lf[63]=C_h_intern(&lf[63],17, C_text("chicken.sort#sort"));
lf[64]=C_h_intern(&lf[64],19, C_text("scheme#list->vector"));
lf[65]=C_h_intern(&lf[65],13, C_text("scheme#append"));
lf[66]=C_h_intern(&lf[66],29, C_text("chicken.sort#topological-sort"));
lf[67]=C_h_intern(&lf[67],4, C_text("grey"));
lf[68]=C_h_intern(&lf[68],3, C_text("exn"));
lf[69]=C_h_intern(&lf[69],7, C_text("message"));
lf[70]=C_h_intern(&lf[70],9, C_text("arguments"));
lf[71]=C_h_intern(&lf[71],10, C_text("call-chain"));
lf[72]=C_h_intern(&lf[72],8, C_text("location"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016cycle detected"));
lf[74]=C_h_intern(&lf[74],16, C_text("topological-sort"));
lf[75]=C_h_intern(&lf[75],9, C_text("condition"));
lf[76]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003exn\376\003\000\000\002\376\001\000\000\007runtime\376\003\000\000\002\376\001\000\000\005cycle\376\377\016"));
lf[77]=C_h_intern(&lf[77],23, C_text("chicken.condition#abort"));
lf[78]=C_h_intern(&lf[78],27, C_text("chicken.base#get-call-chain"));
lf[79]=C_h_intern(&lf[79],14, C_text("scheme#reverse"));
lf[80]=C_h_intern(&lf[80],5, C_text("black"));
lf[81]=C_h_intern(&lf[81],26, C_text("chicken.base#alist-update!"));
lf[82]=C_h_intern(&lf[82],22, C_text("chicken.base#alist-ref"));
C_register_lf2(lf,83,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_809,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[112] = {
{C_text("f_1001:data_2dstructures_2escm"),(void*)f_1001},
{C_text("f_1024:data_2dstructures_2escm"),(void*)f_1024},
{C_text("f_1037:data_2dstructures_2escm"),(void*)f_1037},
{C_text("f_1056:data_2dstructures_2escm"),(void*)f_1056},
{C_text("f_1062:data_2dstructures_2escm"),(void*)f_1062},
{C_text("f_1065:data_2dstructures_2escm"),(void*)f_1065},
{C_text("f_1071:data_2dstructures_2escm"),(void*)f_1071},
{C_text("f_1074:data_2dstructures_2escm"),(void*)f_1074},
{C_text("f_1089:data_2dstructures_2escm"),(void*)f_1089},
{C_text("f_1104:data_2dstructures_2escm"),(void*)f_1104},
{C_text("f_1135:data_2dstructures_2escm"),(void*)f_1135},
{C_text("f_1166:data_2dstructures_2escm"),(void*)f_1166},
{C_text("f_1176:data_2dstructures_2escm"),(void*)f_1176},
{C_text("f_1179:data_2dstructures_2escm"),(void*)f_1179},
{C_text("f_1182:data_2dstructures_2escm"),(void*)f_1182},
{C_text("f_1203:data_2dstructures_2escm"),(void*)f_1203},
{C_text("f_1263:data_2dstructures_2escm"),(void*)f_1263},
{C_text("f_1273:data_2dstructures_2escm"),(void*)f_1273},
{C_text("f_1276:data_2dstructures_2escm"),(void*)f_1276},
{C_text("f_1279:data_2dstructures_2escm"),(void*)f_1279},
{C_text("f_1300:data_2dstructures_2escm"),(void*)f_1300},
{C_text("f_1360:data_2dstructures_2escm"),(void*)f_1360},
{C_text("f_1381:data_2dstructures_2escm"),(void*)f_1381},
{C_text("f_1396:data_2dstructures_2escm"),(void*)f_1396},
{C_text("f_1401:data_2dstructures_2escm"),(void*)f_1401},
{C_text("f_1411:data_2dstructures_2escm"),(void*)f_1411},
{C_text("f_1428:data_2dstructures_2escm"),(void*)f_1428},
{C_text("f_1467:data_2dstructures_2escm"),(void*)f_1467},
{C_text("f_1494:data_2dstructures_2escm"),(void*)f_1494},
{C_text("f_1512:data_2dstructures_2escm"),(void*)f_1512},
{C_text("f_1522:data_2dstructures_2escm"),(void*)f_1522},
{C_text("f_1527:data_2dstructures_2escm"),(void*)f_1527},
{C_text("f_1596:data_2dstructures_2escm"),(void*)f_1596},
{C_text("f_1599:data_2dstructures_2escm"),(void*)f_1599},
{C_text("f_1604:data_2dstructures_2escm"),(void*)f_1604},
{C_text("f_1610:data_2dstructures_2escm"),(void*)f_1610},
{C_text("f_1634:data_2dstructures_2escm"),(void*)f_1634},
{C_text("f_1637:data_2dstructures_2escm"),(void*)f_1637},
{C_text("f_1649:data_2dstructures_2escm"),(void*)f_1649},
{C_text("f_1654:data_2dstructures_2escm"),(void*)f_1654},
{C_text("f_1673:data_2dstructures_2escm"),(void*)f_1673},
{C_text("f_1776:data_2dstructures_2escm"),(void*)f_1776},
{C_text("f_1793:data_2dstructures_2escm"),(void*)f_1793},
{C_text("f_1801:data_2dstructures_2escm"),(void*)f_1801},
{C_text("f_1813:data_2dstructures_2escm"),(void*)f_1813},
{C_text("f_1827:data_2dstructures_2escm"),(void*)f_1827},
{C_text("f_1841:data_2dstructures_2escm"),(void*)f_1841},
{C_text("f_1846:data_2dstructures_2escm"),(void*)f_1846},
{C_text("f_1886:data_2dstructures_2escm"),(void*)f_1886},
{C_text("f_1912:data_2dstructures_2escm"),(void*)f_1912},
{C_text("f_1929:data_2dstructures_2escm"),(void*)f_1929},
{C_text("f_1936:data_2dstructures_2escm"),(void*)f_1936},
{C_text("f_1944:data_2dstructures_2escm"),(void*)f_1944},
{C_text("f_1964:data_2dstructures_2escm"),(void*)f_1964},
{C_text("f_1975:data_2dstructures_2escm"),(void*)f_1975},
{C_text("f_1979:data_2dstructures_2escm"),(void*)f_1979},
{C_text("f_1993:data_2dstructures_2escm"),(void*)f_1993},
{C_text("f_2032:data_2dstructures_2escm"),(void*)f_2032},
{C_text("f_2059:data_2dstructures_2escm"),(void*)f_2059},
{C_text("f_2068:data_2dstructures_2escm"),(void*)f_2068},
{C_text("f_2104:data_2dstructures_2escm"),(void*)f_2104},
{C_text("f_2128:data_2dstructures_2escm"),(void*)f_2128},
{C_text("f_2134:data_2dstructures_2escm"),(void*)f_2134},
{C_text("f_2164:data_2dstructures_2escm"),(void*)f_2164},
{C_text("f_2171:data_2dstructures_2escm"),(void*)f_2171},
{C_text("f_2191:data_2dstructures_2escm"),(void*)f_2191},
{C_text("f_2217:data_2dstructures_2escm"),(void*)f_2217},
{C_text("f_2225:data_2dstructures_2escm"),(void*)f_2225},
{C_text("f_2228:data_2dstructures_2escm"),(void*)f_2228},
{C_text("f_2235:data_2dstructures_2escm"),(void*)f_2235},
{C_text("f_2303:data_2dstructures_2escm"),(void*)f_2303},
{C_text("f_2306:data_2dstructures_2escm"),(void*)f_2306},
{C_text("f_2324:data_2dstructures_2escm"),(void*)f_2324},
{C_text("f_2349:data_2dstructures_2escm"),(void*)f_2349},
{C_text("f_2352:data_2dstructures_2escm"),(void*)f_2352},
{C_text("f_2363:data_2dstructures_2escm"),(void*)f_2363},
{C_text("f_2368:data_2dstructures_2escm"),(void*)f_2368},
{C_text("f_2399:data_2dstructures_2escm"),(void*)f_2399},
{C_text("f_2432:data_2dstructures_2escm"),(void*)f_2432},
{C_text("f_2439:data_2dstructures_2escm"),(void*)f_2439},
{C_text("f_2441:data_2dstructures_2escm"),(void*)f_2441},
{C_text("f_2472:data_2dstructures_2escm"),(void*)f_2472},
{C_text("f_2486:data_2dstructures_2escm"),(void*)f_2486},
{C_text("f_2490:data_2dstructures_2escm"),(void*)f_2490},
{C_text("f_2497:data_2dstructures_2escm"),(void*)f_2497},
{C_text("f_2499:data_2dstructures_2escm"),(void*)f_2499},
{C_text("f_2502:data_2dstructures_2escm"),(void*)f_2502},
{C_text("f_2506:data_2dstructures_2escm"),(void*)f_2506},
{C_text("f_2543:data_2dstructures_2escm"),(void*)f_2543},
{C_text("f_2555:data_2dstructures_2escm"),(void*)f_2555},
{C_text("f_2568:data_2dstructures_2escm"),(void*)f_2568},
{C_text("f_2574:data_2dstructures_2escm"),(void*)f_2574},
{C_text("f_2588:data_2dstructures_2escm"),(void*)f_2588},
{C_text("f_2610:data_2dstructures_2escm"),(void*)f_2610},
{C_text("f_2646:data_2dstructures_2escm"),(void*)f_2646},
{C_text("f_2667:data_2dstructures_2escm"),(void*)f_2667},
{C_text("f_809:data_2dstructures_2escm"),(void*)f_809},
{C_text("f_811:data_2dstructures_2escm"),(void*)f_811},
{C_text("f_814:data_2dstructures_2escm"),(void*)f_814},
{C_text("f_828:data_2dstructures_2escm"),(void*)f_828},
{C_text("f_837:data_2dstructures_2escm"),(void*)f_837},
{C_text("f_884:data_2dstructures_2escm"),(void*)f_884},
{C_text("f_890:data_2dstructures_2escm"),(void*)f_890},
{C_text("f_927:data_2dstructures_2escm"),(void*)f_927},
{C_text("f_930:data_2dstructures_2escm"),(void*)f_930},
{C_text("f_935:data_2dstructures_2escm"),(void*)f_935},
{C_text("f_946:data_2dstructures_2escm"),(void*)f_946},
{C_text("f_948:data_2dstructures_2escm"),(void*)f_948},
{C_text("f_973:data_2dstructures_2escm"),(void*)f_973},
{C_text("f_982:data_2dstructures_2escm"),(void*)f_982},
{C_text("toplevel:data_2dstructures_2escm"),(void*)C_data_2dstructures_toplevel},
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
S|  map		1
o|eliminated procedure checks: 17 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|specializations:
o|  1 (scheme#cdar (pair pair *))
o|  2 (scheme#eqv? * (or eof null fixnum char boolean symbol))
o|  1 (scheme#+ fixnum fixnum)
o|  1 (scheme#- * *)
o|  1 (scheme#quotient * *)
o|  1 (scheme#> * *)
o|  4 (scheme#set-cdr! pair *)
o|  1 (scheme#+ * *)
o|  1 (scheme#- fixnum fixnum)
o|  4 (scheme#= * *)
o|  1 (scheme#<= fixnum fixnum)
o|  1 (scheme#vector-length vector)
o|  1 (scheme#make-string fixnum)
o|  1 (scheme#length list)
o|  1 (##sys#check-list (or pair list) *)
o|  22 (scheme#cdr pair)
o|  3 (scheme#car pair)
(o e)|safe calls: 303 
o|safe globals: (chicken.sort#topological-sort chicken.sort#sort chicken.sort#sort! chicken.sort#merge! chicken.sort#merge chicken.sort#sorted? chicken.string#string-chomp chicken.string#string-chop chicken.string#string-translate* chicken.string#string-translate chicken.string#string-intersperse chicken.string#string-split chicken.string#substring-ci=? ##sys#substring-ci=? chicken.string#substring=? ##sys#substring=? chicken.string#string-compare3-ci chicken.string#string-compare3 chicken.string#substring-index-ci chicken.string#substring-index ##sys#substring-index-ci ##sys#substring-index chicken.string#conc chicken.string#->string chicken.string#reverse-list->string chicken.string#reverse-string-append) 
o|inlining procedure: k816 
o|inlining procedure: k839 
o|inlining procedure: k839 
o|inlining procedure: k816 
o|inlining procedure: k892 
o|inlining procedure: k892 
o|inlining procedure: k907 
o|inlining procedure: k907 
o|inlining procedure: k950 
o|inlining procedure: k950 
o|inlining procedure: k1002 
o|inlining procedure: k1014 
o|inlining procedure: k1026 
o|inlining procedure: k1026 
o|inlining procedure: k1014 
o|inlining procedure: k1002 
o|inlining procedure: k1125 
o|inlining procedure: k1125 
o|inlining procedure: k1156 
o|inlining procedure: k1156 
o|inlining procedure: k1386 
o|inlining procedure: k1386 
o|inlining procedure: k1403 
o|inlining procedure: k1403 
o|inlining procedure: k1430 
o|inlining procedure: k1430 
o|inlining procedure: k1452 
o|inlining procedure: k1452 
o|inlining procedure: k1514 
o|inlining procedure: k1541 
o|inlining procedure: k1541 
o|inlining procedure: k1514 
o|inlining procedure: k1612 
o|inlining procedure: k1612 
o|inlining procedure: k1656 
o|inlining procedure: k1656 
o|inlining procedure: k1691 
o|inlining procedure: k1691 
o|inlining procedure: k1721 
o|inlining procedure: k1721 
o|inlining procedure: k1755 
o|inlining procedure: k1755 
o|inlining procedure: k1781 
o|inlining procedure: k1781 
o|inlining procedure: k1815 
o|inlining procedure: k1829 
o|inlining procedure: k1829 
o|inlining procedure: k1815 
o|inlining procedure: k1848 
o|inlining procedure: k1848 
o|inlining procedure: k1946 
o|inlining procedure: k1946 
o|inlining procedure: k2013 
o|inlining procedure: k2013 
o|inlining procedure: k2034 
o|inlining procedure: k2034 
o|inlining procedure: k2049 
o|inlining procedure: k2049 
o|inlining procedure: k2061 
o|inlining procedure: k2061 
o|substituted constant variable: a2076 
o|substituted constant variable: a2090 
o|substituted constant variable: a2092 
o|inlining procedure: k2109 
o|inlining procedure: k2109 
o|inlining procedure: k2136 
o|inlining procedure: k2136 
o|inlining procedure: k2166 
o|inlining procedure: k2166 
o|inlining procedure: k2230 
o|inlining procedure: k2230 
o|inlining procedure: k2286 
o|inlining procedure: k2286 
o|inlining procedure: k2298 
o|inlining procedure: k2298 
o|substituted constant variable: a2358 
o|substituted constant variable: a2360 
o|inlining procedure: k2354 
o|inlining procedure: k2354 
o|substituted constant variable: a2376 
o|substituted constant variable: a2412 
o|inlining procedure: k2408 
o|inlining procedure: k2408 
o|inlining procedure: k2420 
o|inlining procedure: k2443 
o|inlining procedure: k2443 
o|substituted constant variable: a2459 
o|inlining procedure: k2420 
o|inlining procedure: k2474 
o|inlining procedure: k2474 
o|inlining procedure: k2507 
o|inlining procedure: k2507 
o|inlining procedure: k2576 
o|inlining procedure: k2576 
o|substituted constant variable: a2631 
o|substituted constant variable: a2633 
o|inlining procedure: k2648 
o|inlining procedure: k2648 
o|replaced variables: 285 
o|removed binding forms: 104 
o|substituted constant variable: r10272695 
o|substituted constant variable: r10152697 
o|converted assignments to bindings: (add258) 
o|substituted constant variable: r16132717 
o|converted assignments to bindings: (instring336) 
o|substituted constant variable: r19472737 
o|substituted constant variable: r20352741 
o|substituted constant variable: r20502743 
o|substituted constant variable: r24092762 
o|converted assignments to bindings: (traverse104) 
o|simplifications: ((let . 3)) 
o|replaced variables: 10 
o|removed binding forms: 292 
o|inlining procedure: k1076 
o|inlining procedure: k1091 
o|inlining procedure: k1220 
o|inlining procedure: k1317 
o|inlining procedure: k1409 
o|removed binding forms: 18 
o|substituted constant variable: r10772860 
o|substituted constant variable: r10922861 
o|removed binding forms: 3 
o|removed binding forms: 2 
o|simplifications: ((if . 27) (##core#call . 279)) 
o|  call simplifications:
o|    scheme#caar
o|    ##sys#cons	4
o|    ##sys#list
o|    ##sys#make-structure
o|    scheme#length
o|    scheme#vector-length
o|    scheme#vector-set!
o|    scheme#cddr
o|    scheme#set-car!	2
o|    scheme#set-cdr!	4
o|    scheme#vector?	3
o|    scheme#vector-ref	2
o|    scheme#list	4
o|    chicken.fixnum#fx<=	4
o|    scheme#list->string	2
o|    scheme#not	3
o|    ##sys#check-list	2
o|    scheme#cadr	2
o|    scheme#eq?	5
o|    scheme#cdr	10
o|    chicken.fixnum#fxmin	2
o|    scheme#null?	33
o|    scheme#car	28
o|    ##sys#check-string	21
o|    ##sys#size	23
o|    chicken.fixnum#fx=	4
o|    chicken.fixnum#fx>=	10
o|    chicken.fixnum#fx>	5
o|    scheme#cons	21
o|    ##sys#setslot	6
o|    ##sys#slot	8
o|    scheme#apply
o|    scheme#string?	2
o|    scheme#symbol?
o|    scheme#char?	4
o|    scheme#number?
o|    scheme#string
o|    scheme#pair?	5
o|    scheme#string-length	4
o|    chicken.fixnum#fx-	12
o|    chicken.fixnum#fx<	4
o|    scheme#string-ref
o|    scheme#string-set!
o|    chicken.fixnum#fx+	27
o|contracted procedure: k819 
o|contracted procedure: k823 
o|contracted procedure: k868 
o|contracted procedure: k864 
o|contracted procedure: k833 
o|contracted procedure: k842 
o|contracted procedure: k860 
o|contracted procedure: k845 
o|contracted procedure: k852 
o|contracted procedure: k856 
o|contracted procedure: k874 
o|contracted procedure: k895 
o|contracted procedure: k901 
o|contracted procedure: k910 
o|contracted procedure: k919 
o|contracted procedure: k941 
o|contracted procedure: k953 
o|contracted procedure: k956 
o|contracted procedure: k959 
o|contracted procedure: k967 
o|contracted procedure: k975 
o|contracted procedure: k984 
o|contracted procedure: k987 
o|contracted procedure: k990 
o|contracted procedure: k993 
o|contracted procedure: k996 
o|contracted procedure: k1049 
o|contracted procedure: k1005 
o|contracted procedure: k1011 
o|contracted procedure: k1017 
o|contracted procedure: k1029 
o|contracted procedure: k1042 
o|contracted procedure: k1082 
o|contracted procedure: k1076 
o|contracted procedure: k1097 
o|contracted procedure: k1091 
o|contracted procedure: k1106 
o|contracted procedure: k1109 
o|contracted procedure: k1112 
o|contracted procedure: k1115 
o|contracted procedure: k1118 
o|contracted procedure: k1131 
o|contracted procedure: k1122 
o|contracted procedure: k1128 
o|contracted procedure: k1137 
o|contracted procedure: k1140 
o|contracted procedure: k1143 
o|contracted procedure: k1146 
o|contracted procedure: k1149 
o|contracted procedure: k1162 
o|contracted procedure: k1153 
o|contracted procedure: k1159 
o|contracted procedure: k1168 
o|contracted procedure: k1171 
o|contracted procedure: k1199 
o|contracted procedure: k1187 
o|contracted procedure: k1195 
o|contracted procedure: k1191 
o|contracted procedure: k1256 
o|contracted procedure: k1205 
o|contracted procedure: k1250 
o|contracted procedure: k1208 
o|contracted procedure: k1244 
o|contracted procedure: k1211 
o|contracted procedure: k1238 
o|contracted procedure: k1214 
o|contracted procedure: k1232 
o|contracted procedure: k1217 
o|contracted procedure: k1226 
o|contracted procedure: k1220 
o|contracted procedure: k1265 
o|contracted procedure: k1268 
o|contracted procedure: k1296 
o|contracted procedure: k1284 
o|contracted procedure: k1292 
o|contracted procedure: k1288 
o|contracted procedure: k1353 
o|contracted procedure: k1302 
o|contracted procedure: k1347 
o|contracted procedure: k1305 
o|contracted procedure: k1341 
o|contracted procedure: k1308 
o|contracted procedure: k1335 
o|contracted procedure: k1311 
o|contracted procedure: k1329 
o|contracted procedure: k1314 
o|contracted procedure: k1323 
o|contracted procedure: k1317 
o|contracted procedure: k1362 
o|contracted procedure: k1487 
o|contracted procedure: k1365 
o|contracted procedure: k1479 
o|contracted procedure: k1368 
o|contracted procedure: k1371 
o|contracted procedure: k1374 
o|contracted procedure: k1377 
o|contracted procedure: k1383 
o|contracted procedure: k1386 
o|contracted procedure: k1406 
o|contracted procedure: k1415 
o|contracted procedure: k1418 
o|contracted procedure: k1433 
o|contracted procedure: k1440 
o|contracted procedure: k1446 
o|contracted procedure: k1449 
o|contracted procedure: k1455 
o|contracted procedure: k1458 
o|contracted procedure: k1475 
o|contracted procedure: k1589 
o|contracted procedure: k1496 
o|contracted procedure: k1499 
o|contracted procedure: k1502 
o|contracted procedure: k1505 
o|contracted procedure: k1529 
o|contracted procedure: k1532 
o|contracted procedure: k1535 
o|contracted procedure: k1538 
o|contracted procedure: k1548 
o|contracted procedure: k1552 
o|contracted procedure: k1558 
o|contracted procedure: k1561 
o|contracted procedure: k1564 
o|contracted procedure: k1571 
o|contracted procedure: k1579 
o|contracted procedure: k1583 
o|contracted procedure: k1575 
o|contracted procedure: k1601 
o|contracted procedure: k1615 
o|contracted procedure: k1621 
o|contracted procedure: k1628 
o|contracted procedure: k1743 
o|contracted procedure: k1638 
o|contracted procedure: k1641 
o|contracted procedure: k1644 
o|contracted procedure: k1659 
o|contracted procedure: k1665 
o|contracted procedure: k1677 
o|contracted procedure: k1684 
o|contracted procedure: k1688 
o|contracted procedure: k1694 
o|contracted procedure: k1701 
o|contracted procedure: k1707 
o|contracted procedure: k1714 
o|contracted procedure: k1718 
o|contracted procedure: k1724 
o|contracted procedure: k1735 
o|contracted procedure: k1739 
o|contracted procedure: k1749 
o|contracted procedure: k1752 
o|contracted procedure: k1758 
o|contracted procedure: k1764 
o|contracted procedure: k1770 
o|contracted procedure: k1773 
o|contracted procedure: k1784 
o|contracted procedure: k1794 
o|contracted procedure: k1803 
o|contracted procedure: k1806 
o|contracted procedure: k1809 
o|contracted procedure: k1818 
o|contracted procedure: k1832 
o|contracted procedure: k1829 
o|contracted procedure: k1851 
o|contracted procedure: k1858 
o|contracted procedure: k1862 
o|contracted procedure: k1865 
o|contracted procedure: k1868 
o|contracted procedure: k1871 
o|contracted procedure: k1922 
o|contracted procedure: k1918 
o|contracted procedure: k1878 
o|contracted procedure: k1881 
o|contracted procedure: k1899 
o|contracted procedure: k1891 
o|contracted procedure: k1895 
o|contracted procedure: k1902 
o|contracted procedure: k1906 
o|contracted procedure: k1931 
o|contracted procedure: k1937 
o|contracted procedure: k1949 
o|contracted procedure: k1955 
o|contracted procedure: k1966 
o|contracted procedure: k1981 
o|contracted procedure: k1985 
o|contracted procedure: k1989 
o|contracted procedure: k2025 
o|contracted procedure: k1995 
o|contracted procedure: k1998 
o|contracted procedure: k2001 
o|contracted procedure: k2004 
o|contracted procedure: k2007 
o|contracted procedure: k2010 
o|contracted procedure: k2022 
o|contracted procedure: k2016 
o|contracted procedure: k2037 
o|contracted procedure: k2043 
o|contracted procedure: k2046 
o|contracted procedure: k2052 
o|contracted procedure: k2081 
o|contracted procedure: k2085 
o|contracted procedure: k2098 
o|contracted procedure: k2106 
o|contracted procedure: k2115 
o|contracted procedure: k2130 
o|contracted procedure: k2139 
o|contracted procedure: k2145 
o|contracted procedure: k2152 
o|contracted procedure: k2158 
o|contracted procedure: k2175 
o|contracted procedure: k2182 
o|contracted procedure: k2193 
o|contracted procedure: k2201 
o|contracted procedure: k2208 
o|contracted procedure: k2219 
o|contracted procedure: k2236 
o|contracted procedure: k2242 
o|contracted procedure: k2257 
o|contracted procedure: k2263 
o|contracted procedure: k2279 
o|contracted procedure: k2283 
o|contracted procedure: k2289 
o|contracted procedure: k2295 
o|contracted procedure: k2307 
o|inlining procedure: k2304 
o|contracted procedure: k2325 
o|inlining procedure: k2322 
o|contracted procedure: k2341 
o|contracted procedure: k2345 
o|contracted procedure: k2377 
o|contracted procedure: k2380 
o|contracted procedure: k2384 
o|contracted procedure: k2394 
o|contracted procedure: k2390 
o|contracted procedure: k2400 
o|contracted procedure: k2414 
o|contracted procedure: k2417 
o|contracted procedure: k2423 
o|contracted procedure: k2426 
o|contracted procedure: k2446 
o|contracted procedure: k2461 
o|contracted procedure: k2449 
o|contracted procedure: k2468 
o|contracted procedure: k2477 
o|contracted procedure: k2510 
o|contracted procedure: k2525 
o|contracted procedure: k2529 
o|contracted procedure: k2549 
o|contracted procedure: k2533 
o|contracted procedure: k2537 
o|contracted procedure: k2545 
o|contracted procedure: k2521 
o|contracted procedure: k2517 
o|contracted procedure: k2559 
o|contracted procedure: k2622 
o|contracted procedure: k2616 
o|contracted procedure: k2570 
o|contracted procedure: k2579 
o|contracted procedure: k2590 
o|contracted procedure: k2596 
o|contracted procedure: k2599 
o|contracted procedure: k2612 
o|contracted procedure: k2635 
o|contracted procedure: k2676 
o|contracted procedure: k2680 
o|contracted procedure: k2642 
o|contracted procedure: k2651 
o|contracted procedure: k2661 
o|contracted procedure: k2669 
o|simplifications: ((let . 52)) 
o|removed binding forms: 265 
o|inlining procedure: k2387 
o|inlining procedure: k2387 
o|substituted constant variable: r2677 
o|substituted constant variable: r2677 
o|substituted constant variable: r2681 
o|replaced variables: 122 
o|removed binding forms: 65 
o|direct leaf routine/allocation: loop60 0 
o|direct leaf routine/allocation: loop2316 0 
o|direct leaf routine/allocation: loop340 0 
o|converted assignments to bindings: (loop60) 
o|converted assignments to bindings: (loop2316) 
o|converted assignments to bindings: (loop340) 
o|simplifications: ((let . 3)) 
o|customizable procedures: (loop574 visit551 walk566 doloop537538 step515 loop503 loop489 loop473 doloop466467 loop407 loop390 k1884 collect385 instring336 loop366 loop1308 scan280 loop264 add258 k1271 k1174 traverse104 loop115 map-loop8097 rev-string-append54) 
o|calls to known targets: 67 
o|identified direct recursive calls: f_837 1 
o|identified direct recursive calls: f_814 1 
o|identified direct recursive calls: f_1428 1 
o|identified direct recursive calls: f_1527 1 
o|identified direct recursive calls: f_1512 1 
o|identified direct recursive calls: f_1610 1 
o|identified direct recursive calls: f_1846 1 
o|identified direct recursive calls: f_2352 1 
o|identified direct recursive calls: f_2441 1 
o|fast box initializations: 19 
o|dropping unused closure argument: f_1599 
o|dropping unused closure argument: f_982 
*/
/* end of file */

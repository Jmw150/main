/* Generated from pathname.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: pathname.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file pathname.c -emit-import-library chicken.pathname
   unit: pathname
   uses: data-structures irregex library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[76];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,63,32,112,110,41};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,8),40,108,112,32,108,101,110,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,99,104,111,112,45,112,100,115,32,115,116,114,41,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,115,116,114,115,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,16),40,99,111,110,99,45,100,105,114,115,32,100,105,114,115,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,24),40,99,97,110,111,110,105,99,97,108,105,122,101,45,100,105,114,115,32,100,105,114,115,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,33),40,95,109,97,107,101,45,112,97,116,104,110,97,109,101,32,108,111,99,32,100,105,114,32,102,105,108,101,32,101,120,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,109,97,107,101,45,112,97,116,104,110,97,109,101,32,100,105,114,115,32,102,105,108,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,58),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,109,97,107,101,45,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,32,100,105,114,115,32,102,105,108,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,15),40,115,116,114,105,112,45,112,100,115,32,100,105,114,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,100,101,99,111,109,112,111,115,101,45,112,97,116,104,110,97,109,101,32,112,110,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,7),40,97,49,48,48,57,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,29),40,97,49,48,49,53,32,100,105,114,50,50,52,32,102,105,108,101,50,50,54,32,101,120,116,50,50,56,41,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,100,105,114,101,99,116,111,114,121,32,112,110,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,7),40,97,49,48,50,52,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,29),40,97,49,48,51,48,32,100,105,114,50,51,56,32,102,105,108,101,50,52,48,32,101,120,116,50,52,50,41,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,102,105,108,101,32,112,110,41,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,7),40,97,49,48,51,57,41,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,29),40,97,49,48,52,53,32,100,105,114,50,53,50,32,102,105,108,101,50,53,52,32,101,120,116,50,53,54,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,101,120,116,101,110,115,105,111,110,32,112,110,41};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,7),40,97,49,48,53,52,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,29),40,97,49,48,54,48,32,100,105,114,50,54,54,32,102,105,108,101,50,54,56,32,101,120,116,50,55,48,41,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,115,116,114,105,112,45,100,105,114,101,99,116,111,114,121,32,112,110,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,7),40,97,49,48,55,50,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,29),40,97,49,48,55,56,32,100,105,114,50,56,48,32,102,105,108,101,50,56,50,32,101,120,116,50,56,52,41,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,115,116,114,105,112,45,101,120,116,101,110,115,105,111,110,32,112,110,41,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,7),40,97,49,48,57,48,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,27),40,97,49,48,57,54,32,95,50,57,53,32,102,105,108,101,50,57,55,32,101,120,116,50,57,57,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,100,105,114,101,99,116,111,114,121,32,112,110,32,100,105,114,41,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,7),40,97,49,49,48,56,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,26),40,97,49,49,49,52,32,100,105,114,51,49,48,32,95,51,49,50,32,101,120,116,51,49,52,41,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,102,105,108,101,32,112,110,32,102,105,108,101,41};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,7),40,97,49,49,50,54,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,27),40,97,49,49,51,50,32,100,105,114,51,50,53,32,102,105,108,101,51,50,55,32,95,51,50,57,41,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,101,120,116,101,110,115,105,111,110,32,112,110,32,101,120,116,41,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,15),40,97,100,100,112,97,114,116,32,112,97,114,116,115,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,6),40,112,100,115,63,41,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,8),40,103,51,56,48,32,112,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,55,57,32,103,51,56,54,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,105,32,112,114,101,118,32,112,97,114,116,115,41,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,110,111,114,109,97,108,105,122,101,45,112,97,116,104,110,97,109,101,32,112,97,116,104,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,115,112,108,105,116,45,100,105,114,101,99,116,111,114,121,32,108,111,99,32,100,105,114,32,107,101,101,112,63,41};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,100,105,114,101,99,116,111,114,121,45,110,117,108,108,63,32,100,105,114,41,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,100,101,99,111,109,112,111,115,101,45,100,105,114,101,99,116,111,114,121,32,100,105,114,41,0,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,45,114,111,111,116,32,112,110,41,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,114,111,111,116,45,111,114,105,103,105,110,32,114,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,114,111,111,116,45,100,105,114,101,99,116,111,114,121,32,114,116,41,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,45,114,111,111,116,32,112,110,41,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,114,111,111,116,45,111,114,105,103,105,110,32,114,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,114,111,111,116,45,100,105,114,101,99,116,111,114,121,32,114,116,41,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1004)
static void C_ccall f_1004(C_word c,C_word *av) C_noret;
C_noret_decl(f_1010)
static void C_ccall f_1010(C_word c,C_word *av) C_noret;
C_noret_decl(f_1016)
static void C_ccall f_1016(C_word c,C_word *av) C_noret;
C_noret_decl(f_1019)
static void C_ccall f_1019(C_word c,C_word *av) C_noret;
C_noret_decl(f_1025)
static void C_ccall f_1025(C_word c,C_word *av) C_noret;
C_noret_decl(f_1031)
static void C_ccall f_1031(C_word c,C_word *av) C_noret;
C_noret_decl(f_1034)
static void C_ccall f_1034(C_word c,C_word *av) C_noret;
C_noret_decl(f_1040)
static void C_ccall f_1040(C_word c,C_word *av) C_noret;
C_noret_decl(f_1046)
static void C_ccall f_1046(C_word c,C_word *av) C_noret;
C_noret_decl(f_1049)
static void C_ccall f_1049(C_word c,C_word *av) C_noret;
C_noret_decl(f_1055)
static void C_ccall f_1055(C_word c,C_word *av) C_noret;
C_noret_decl(f_1061)
static void C_ccall f_1061(C_word c,C_word *av) C_noret;
C_noret_decl(f_1067)
static void C_ccall f_1067(C_word c,C_word *av) C_noret;
C_noret_decl(f_1073)
static void C_ccall f_1073(C_word c,C_word *av) C_noret;
C_noret_decl(f_1079)
static void C_ccall f_1079(C_word c,C_word *av) C_noret;
C_noret_decl(f_1085)
static void C_ccall f_1085(C_word c,C_word *av) C_noret;
C_noret_decl(f_1091)
static void C_ccall f_1091(C_word c,C_word *av) C_noret;
C_noret_decl(f_1097)
static void C_ccall f_1097(C_word c,C_word *av) C_noret;
C_noret_decl(f_1103)
static void C_ccall f_1103(C_word c,C_word *av) C_noret;
C_noret_decl(f_1109)
static void C_ccall f_1109(C_word c,C_word *av) C_noret;
C_noret_decl(f_1115)
static void C_ccall f_1115(C_word c,C_word *av) C_noret;
C_noret_decl(f_1121)
static void C_ccall f_1121(C_word c,C_word *av) C_noret;
C_noret_decl(f_1127)
static void C_ccall f_1127(C_word c,C_word *av) C_noret;
C_noret_decl(f_1133)
static void C_ccall f_1133(C_word c,C_word *av) C_noret;
C_noret_decl(f_1143)
static C_word C_fcall f_1143(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_1181)
static void C_ccall f_1181(C_word c,C_word *av) C_noret;
C_noret_decl(f_1190)
static C_word C_fcall f_1190(C_word t0,C_word t1);
C_noret_decl(f_1213)
static void C_fcall f_1213(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1223)
static void C_fcall f_1223(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1247)
static void C_ccall f_1247(C_word c,C_word *av) C_noret;
C_noret_decl(f_1250)
static void C_ccall f_1250(C_word c,C_word *av) C_noret;
C_noret_decl(f_1253)
static void C_ccall f_1253(C_word c,C_word *av) C_noret;
C_noret_decl(f_1254)
static void C_fcall f_1254(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1258)
static void C_ccall f_1258(C_word c,C_word *av) C_noret;
C_noret_decl(f_1268)
static void C_ccall f_1268(C_word c,C_word *av) C_noret;
C_noret_decl(f_1271)
static void C_ccall f_1271(C_word c,C_word *av) C_noret;
C_noret_decl(f_1274)
static void C_ccall f_1274(C_word c,C_word *av) C_noret;
C_noret_decl(f_1277)
static void C_fcall f_1277(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1284)
static void C_ccall f_1284(C_word c,C_word *av) C_noret;
C_noret_decl(f_1291)
static void C_ccall f_1291(C_word c,C_word *av) C_noret;
C_noret_decl(f_1303)
static void C_fcall f_1303(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1313)
static void C_ccall f_1313(C_word c,C_word *av) C_noret;
C_noret_decl(f_1339)
static void C_ccall f_1339(C_word c,C_word *av) C_noret;
C_noret_decl(f_1348)
static void C_fcall f_1348(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1384)
static void C_ccall f_1384(C_word c,C_word *av) C_noret;
C_noret_decl(f_1400)
static void C_fcall f_1400(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1404)
static void C_ccall f_1404(C_word c,C_word *av) C_noret;
C_noret_decl(f_1454)
static void C_fcall f_1454(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1467)
static void C_ccall f_1467(C_word c,C_word *av) C_noret;
C_noret_decl(f_1475)
static void C_ccall f_1475(C_word c,C_word *av) C_noret;
C_noret_decl(f_1477)
static C_word C_fcall f_1477(C_word t0);
C_noret_decl(f_1507)
static void C_ccall f_1507(C_word c,C_word *av) C_noret;
C_noret_decl(f_1546)
static void C_ccall f_1546(C_word c,C_word *av) C_noret;
C_noret_decl(f_1554)
static void C_ccall f_1554(C_word c,C_word *av) C_noret;
C_noret_decl(f_1557)
static void C_ccall f_1557(C_word c,C_word *av) C_noret;
C_noret_decl(f_1560)
static void C_ccall f_1560(C_word c,C_word *av) C_noret;
C_noret_decl(f_1567)
static void C_ccall f_1567(C_word c,C_word *av) C_noret;
C_noret_decl(f_1571)
static void C_ccall f_1571(C_word c,C_word *av) C_noret;
C_noret_decl(f_1589)
static void C_ccall f_1589(C_word c,C_word *av) C_noret;
C_noret_decl(f_1592)
static void C_ccall f_1592(C_word c,C_word *av) C_noret;
C_noret_decl(f_1594)
static void C_ccall f_1594(C_word c,C_word *av) C_noret;
C_noret_decl(f_1600)
static void C_ccall f_1600(C_word c,C_word *av) C_noret;
C_noret_decl(f_1609)
static void C_ccall f_1609(C_word c,C_word *av) C_noret;
C_noret_decl(f_1619)
static void C_ccall f_1619(C_word c,C_word *av) C_noret;
C_noret_decl(f_1621)
static void C_ccall f_1621(C_word c,C_word *av) C_noret;
C_noret_decl(f_1627)
static void C_ccall f_1627(C_word c,C_word *av) C_noret;
C_noret_decl(f_1630)
static void C_ccall f_1630(C_word c,C_word *av) C_noret;
C_noret_decl(f_587)
static void C_ccall f_587(C_word c,C_word *av) C_noret;
C_noret_decl(f_590)
static void C_ccall f_590(C_word c,C_word *av) C_noret;
C_noret_decl(f_593)
static void C_ccall f_593(C_word c,C_word *av) C_noret;
C_noret_decl(f_599)
static void C_fcall f_599(C_word t0,C_word t1) C_noret;
C_noret_decl(f_601)
static void C_ccall f_601(C_word c,C_word *av) C_noret;
C_noret_decl(f_612)
static void C_ccall f_612(C_word c,C_word *av) C_noret;
C_noret_decl(f_614)
static void C_fcall f_614(C_word t0,C_word t1) C_noret;
C_noret_decl(f_627)
static void C_fcall f_627(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_634)
static void C_fcall f_634(C_word t0,C_word t1) C_noret;
C_noret_decl(f_682)
static void C_fcall f_682(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_691)
static void C_fcall f_691(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_719)
static void C_ccall f_719(C_word c,C_word *av) C_noret;
C_noret_decl(f_723)
static void C_ccall f_723(C_word c,C_word *av) C_noret;
C_noret_decl(f_733)
static void C_fcall f_733(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_764)
static void C_fcall f_764(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_787)
static void C_ccall f_787(C_word c,C_word *av) C_noret;
C_noret_decl(f_794)
static void C_fcall f_794(C_word t0,C_word t1) C_noret;
C_noret_decl(f_812)
static void C_fcall f_812(C_word t0,C_word t1) C_noret;
C_noret_decl(f_852)
static void C_ccall f_852(C_word c,C_word *av) C_noret;
C_noret_decl(f_863)
static void C_ccall f_863(C_word c,C_word *av) C_noret;
C_noret_decl(f_871)
static void C_ccall f_871(C_word c,C_word *av) C_noret;
C_noret_decl(f_882)
static void C_ccall f_882(C_word c,C_word *av) C_noret;
C_noret_decl(f_885)
static void C_ccall f_885(C_word c,C_word *av) C_noret;
C_noret_decl(f_888)
static void C_ccall f_888(C_word c,C_word *av) C_noret;
C_noret_decl(f_907)
static void C_ccall f_907(C_word c,C_word *av) C_noret;
C_noret_decl(f_910)
static void C_ccall f_910(C_word c,C_word *av) C_noret;
C_noret_decl(f_911)
static void C_fcall f_911(C_word t0,C_word t1) C_noret;
C_noret_decl(f_918)
static void C_ccall f_918(C_word c,C_word *av) C_noret;
C_noret_decl(f_932)
static void C_ccall f_932(C_word c,C_word *av) C_noret;
C_noret_decl(f_948)
static void C_ccall f_948(C_word c,C_word *av) C_noret;
C_noret_decl(f_958)
static void C_ccall f_958(C_word c,C_word *av) C_noret;
C_noret_decl(f_962)
static void C_ccall f_962(C_word c,C_word *av) C_noret;
C_noret_decl(f_966)
static void C_ccall f_966(C_word c,C_word *av) C_noret;
C_noret_decl(f_970)
static void C_ccall f_970(C_word c,C_word *av) C_noret;
C_noret_decl(f_973)
static void C_ccall f_973(C_word c,C_word *av) C_noret;
C_noret_decl(f_983)
static void C_ccall f_983(C_word c,C_word *av) C_noret;
C_noret_decl(f_987)
static void C_ccall f_987(C_word c,C_word *av) C_noret;
C_noret_decl(f_991)
static void C_ccall f_991(C_word c,C_word *av) C_noret;
C_noret_decl(f_998)
static void C_ccall f_998(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_externexport void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1213)
static void C_ccall trf_1213(C_word c,C_word *av) C_noret;
static void C_ccall trf_1213(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1213(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1223)
static void C_ccall trf_1223(C_word c,C_word *av) C_noret;
static void C_ccall trf_1223(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1223(t0,t1);}

C_noret_decl(trf_1254)
static void C_ccall trf_1254(C_word c,C_word *av) C_noret;
static void C_ccall trf_1254(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1254(t0,t1,t2);}

C_noret_decl(trf_1277)
static void C_ccall trf_1277(C_word c,C_word *av) C_noret;
static void C_ccall trf_1277(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1277(t0,t1);}

C_noret_decl(trf_1303)
static void C_ccall trf_1303(C_word c,C_word *av) C_noret;
static void C_ccall trf_1303(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1303(t0,t1,t2);}

C_noret_decl(trf_1348)
static void C_ccall trf_1348(C_word c,C_word *av) C_noret;
static void C_ccall trf_1348(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1348(t0,t1);}

C_noret_decl(trf_1400)
static void C_ccall trf_1400(C_word c,C_word *av) C_noret;
static void C_ccall trf_1400(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1400(t0,t1);}

C_noret_decl(trf_1454)
static void C_ccall trf_1454(C_word c,C_word *av) C_noret;
static void C_ccall trf_1454(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1454(t0,t1,t2,t3);}

C_noret_decl(trf_599)
static void C_ccall trf_599(C_word c,C_word *av) C_noret;
static void C_ccall trf_599(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_599(t0,t1);}

C_noret_decl(trf_614)
static void C_ccall trf_614(C_word c,C_word *av) C_noret;
static void C_ccall trf_614(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_614(t0,t1);}

C_noret_decl(trf_627)
static void C_ccall trf_627(C_word c,C_word *av) C_noret;
static void C_ccall trf_627(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_627(t0,t1,t2);}

C_noret_decl(trf_634)
static void C_ccall trf_634(C_word c,C_word *av) C_noret;
static void C_ccall trf_634(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_634(t0,t1);}

C_noret_decl(trf_682)
static void C_ccall trf_682(C_word c,C_word *av) C_noret;
static void C_ccall trf_682(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_682(t0,t1,t2);}

C_noret_decl(trf_691)
static void C_ccall trf_691(C_word c,C_word *av) C_noret;
static void C_ccall trf_691(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_691(t0,t1,t2);}

C_noret_decl(trf_733)
static void C_ccall trf_733(C_word c,C_word *av) C_noret;
static void C_ccall trf_733(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_733(t0,t1,t2);}

C_noret_decl(trf_764)
static void C_ccall trf_764(C_word c,C_word *av) C_noret;
static void C_ccall trf_764(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_764(t0,t1,t2,t3,t4);}

C_noret_decl(trf_794)
static void C_ccall trf_794(C_word c,C_word *av) C_noret;
static void C_ccall trf_794(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_794(t0,t1);}

C_noret_decl(trf_812)
static void C_ccall trf_812(C_word c,C_word *av) C_noret;
static void C_ccall trf_812(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_812(t0,t1);}

C_noret_decl(trf_911)
static void C_ccall trf_911(C_word c,C_word *av) C_noret;
static void C_ccall trf_911(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_911(t0,t1);}

/* chicken.pathname#pathname-directory in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1004,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1010,a[2]=t2,a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1016,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:191: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a1009 in chicken.pathname#pathname-directory in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1010,2,av);}
/* pathname.scm:191: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1015 in chicken.pathname#pathname-directory in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1016,5,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.pathname#pathname-file in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1019,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1025,a[2]=t2,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1031,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:196: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a1024 in chicken.pathname#pathname-file in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1025,2,av);}
/* pathname.scm:196: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1030 in chicken.pathname#pathname-file in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1031,5,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.pathname#pathname-extension in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1034,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1040,a[2]=t2,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1046,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:201: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a1039 in chicken.pathname#pathname-extension in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1040,2,av);}
/* pathname.scm:201: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1045 in chicken.pathname#pathname-extension in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1046,5,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.pathname#pathname-strip-directory in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1049,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1055,a[2]=t2,a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1061,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:206: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a1054 in chicken.pathname#pathname-strip-directory in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1055,2,av);}
/* pathname.scm:206: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1060 in chicken.pathname#pathname-strip-directory in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1061,5,av);}
/* pathname.scm:207: make-pathname */
t5=*((C_word*)lf[12]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* chicken.pathname#pathname-strip-extension in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1067,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1073,a[2]=t2,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1079,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:211: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a1072 in chicken.pathname#pathname-strip-extension in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1073,2,av);}
/* pathname.scm:211: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1078 in chicken.pathname#pathname-strip-extension in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1079,5,av);}
/* pathname.scm:212: make-pathname */
t5=*((C_word*)lf[12]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* chicken.pathname#pathname-replace-directory in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1085(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1085,4,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1091,a[2]=t2,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1097,a[2]=t3,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:216: ##sys#call-with-values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* a1090 in chicken.pathname#pathname-replace-directory in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1091,2,av);}
/* pathname.scm:216: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1096 in chicken.pathname#pathname-replace-directory in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1097,5,av);}
/* pathname.scm:217: make-pathname */
t5=*((C_word*)lf[12]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* chicken.pathname#pathname-replace-file in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1103(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1103,4,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1109,a[2]=t2,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1115,a[2]=t3,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:221: ##sys#call-with-values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* a1108 in chicken.pathname#pathname-replace-file in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1109,2,av);}
/* pathname.scm:221: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1114 in chicken.pathname#pathname-replace-file in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1115,5,av);}
/* pathname.scm:222: make-pathname */
t5=*((C_word*)lf[12]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* chicken.pathname#pathname-replace-extension in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1121(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1121,4,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1127,a[2]=t2,a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1133,a[2]=t3,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:226: ##sys#call-with-values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* a1126 in chicken.pathname#pathname-replace-extension in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1127,2,av);}
/* pathname.scm:226: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1132 in chicken.pathname#pathname-replace-extension in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1133,5,av);}
/* pathname.scm:227: make-pathname */
t5=*((C_word*)lf[12]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* addpart in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static C_word C_fcall f_1143(C_word *a,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;{}
if(C_truep(C_i_string_equal_p(lf[46],t1))){
t3=t2;
return(t3);}
else{
t3=t1;
if(C_truep(C_u_i_string_equal_p(lf[47],t3))){
t4=C_i_nullp(t2);
if(C_truep(t4)){
return((C_truep(t4)?C_a_i_cons(&a,2,t1,t2):C_i_cdr(t2)));}
else{
t5=C_i_car(t2);
t6=C_i_string_equal_p(lf[48],t5);
return((C_truep(t6)?C_a_i_cons(&a,2,t1,t2):C_i_cdr(t2)));}}
else{
return(C_a_i_cons(&a,2,t1,t2));}}}

/* chicken.pathname#normalize-pathname in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +22,c,5)))){
C_save_and_reclaim((void*)f_1181,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+22);
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?((C_word*)t0)[2]:C_i_car(t3));
t6=t5;
t7=C_eqp(t6,lf[44]);
t8=(C_truep(t7)?C_make_character(92):C_make_character(47));
t9=t8;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1190,a[2]=t6,a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp);
t11=C_i_check_string_2(t2,lf[51]);
t12=C_block_size(t2);
t13=t12;
t14=C_SCHEME_FALSE;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_FALSE;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1213,a[2]=t13,a[3]=t15,a[4]=t9,a[5]=t17,a[6]=((C_word*)t0)[3],a[7]=t2,a[8]=t10,a[9]=t19,a[10]=t6,a[11]=((C_word)li39),tmp=(C_word)a,a+=12,tmp));
t21=((C_word*)t19)[1];
f_1213(t21,t1,C_fix(0),C_fix(0),C_SCHEME_END_OF_LIST);}

/* pds? in chicken.pathname#normalize-pathname in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static C_word C_fcall f_1190(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;{}
t2=C_eqp(((C_word*)t0)[2],lf[44]);
if(C_truep(t2)){
t3=t1;
t4=C_u_i_memq(t3,lf[50]);
return(t4);}
else{
return(C_eqp(t1,C_make_character(47)));}}

/* loop in chicken.pathname#normalize-pathname in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_fcall f_1213(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,4)))){
C_save_and_reclaim_args((void *)trf_1213,5,t0,t1,t2,t3,t4);}
a=C_alloc(16);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1223,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=t2,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greaterp(t2,t3))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1339,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:254: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t7;
av2[2]=((C_word*)t0)[7];
av2[3]=t3;
av2[4]=t2;
tp(5,av2);}}
else{
t7=t6;
f_1223(t7,C_SCHEME_UNDEFINED);}}
else{
t6=C_i_string_ref(((C_word*)t0)[7],t2);
t7=(
  /* pathname.scm:273: pds? */
  f_1190(((C_word*)t0)[8],t6)
);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1348,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[9],a[5]=t1,a[6]=t5,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_not(((C_word*)((C_word*)t0)[3])[1]))){
t9=C_eqp(t2,t3);
if(C_truep(t9)){
t10=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[52]);
t11=t8;
f_1348(t11,t10);}
else{
t10=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[60]);
t11=t8;
f_1348(t11,t10);}}
else{
t9=t8;
f_1348(t9,C_SCHEME_UNDEFINED);}}
else{
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1400,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[9],a[5]=t1,a[6]=((C_word*)t0)[7],a[7]=t3,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_nullp(((C_word*)t5)[1]))){
t9=((C_word*)t0)[7];
t10=t2;
t11=C_i_string_ref(t9,t10);
t12=t8;
f_1400(t12,(C_truep(C_u_i_char_equalp(t11,C_make_character(58)))?C_eqp(((C_word*)t0)[10],lf[44]):C_SCHEME_FALSE));}
else{
t9=t8;
f_1400(t9,C_SCHEME_FALSE);}}}}

/* k1221 in loop in chicken.pathname#normalize-pathname in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_fcall f_1223(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_1223,2,t0,t1);}
a=C_alloc(9);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=C_eqp(((C_word*)((C_word*)t0)[3])[1],lf[52]);
if(C_truep(t2)){
t3=C_a_i_string(&a,1,((C_word*)t0)[4]);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
/* pathname.scm:257: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)((C_word*)t0)[5])[1];
av2[3]=t3;
tp(4,av2);}}
else{
t4=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t3=lf[53];
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
/* pathname.scm:257: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)((C_word*)t0)[5])[1];
av2[3]=t3;
tp(4,av2);}}
else{
t4=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1247,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
/* pathname.scm:258: chicken.base#open-output-string */
t3=*((C_word*)lf[59]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1245 in k1221 in loop in chicken.pathname#normalize-pathname in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1247,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1250,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* pathname.scm:259: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[58]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[8])[1];
tp(3,av2);}}

/* k1248 in k1245 in k1221 in loop in chicken.pathname#normalize-pathname in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1250,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1253,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=C_i_car(t2);
/* pathname.scm:260: scheme#display */
t5=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k1251 in k1248 in k1245 in k1221 in loop in chicken.pathname#normalize-pathname in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1253(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_1253,2,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1254,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
t3=C_u_i_cdr(((C_word*)t0)[4]);
t4=C_i_check_list_2(t3,lf[56]);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1268,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1303,a[2]=t7,a[3]=t2,a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1303(t9,t5,t3);}

/* g380 in k1251 in k1248 in k1245 in k1221 in loop in chicken.pathname#normalize-pathname in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_fcall f_1254(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1254,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1258,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:263: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[55]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[55]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}

/* k1256 in g380 in k1251 in k1248 in k1245 in k1221 in loop in chicken.pathname#normalize-pathname in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1258,2,av);}
/* pathname.scm:264: scheme#display */
t2=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1266 in k1251 in k1248 in k1245 in k1221 in loop in chicken.pathname#normalize-pathname in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1268,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1271,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[7],((C_word*)t0)[8]);
if(C_truep(t3)){
/* pathname.scm:266: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[55]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1271(2,av2);}}}

/* k1269 in k1266 in k1251 in k1248 in k1245 in k1221 in loop in chicken.pathname#normalize-pathname in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1271,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1274,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* pathname.scm:267: chicken.base#get-output-string */
t3=*((C_word*)lf[57]+1);{
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

/* k1272 in k1269 in k1266 in k1251 in k1248 in k1245 in k1221 in loop in chicken.pathname#normalize-pathname in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1274(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_1274,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1277,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(((C_word*)((C_word*)t0)[4])[1],lf[52]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1291,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=C_a_i_string(&a,1,((C_word*)t0)[5]);
/* pathname.scm:269: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t6;
av2[2]=t7;
av2[3]=((C_word*)t3)[1];
tp(4,av2);}}
else{
t6=t4;
f_1277(t6,C_SCHEME_UNDEFINED);}}

/* k1275 in k1272 in k1269 in k1266 in k1251 in k1248 in k1245 in k1221 in loop in chicken.pathname#normalize-pathname in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_fcall f_1277(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_1277,2,t0,t1);}
a=C_alloc(4);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1284,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:271: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=((C_word*)((C_word*)t0)[3])[1];
tp(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1282 in k1275 in k1272 in k1269 in k1266 in k1251 in k1248 in k1245 in k1221 in loop in chicken.pathname#normalize-pathname in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1284,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1289 in k1272 in k1269 in k1266 in k1251 in k1248 in k1245 in k1221 in loop in chicken.pathname#normalize-pathname in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1291,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_1277(t3,t2);}

/* for-each-loop379 in k1251 in k1248 in k1245 in k1221 in loop in chicken.pathname#normalize-pathname in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_fcall f_1303(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1303,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1313,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* pathname.scm:261: g380 */
t5=((C_word*)t0)[3];
f_1254(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1311 in for-each-loop379 in k1251 in k1248 in k1245 in k1221 in loop in chicken.pathname#normalize-pathname in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1313,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1303(t3,((C_word*)t0)[4],t2);}

/* k1337 in loop in chicken.pathname#normalize-pathname in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_1339,2,av);}
a=C_alloc(9);
t2=(
  /* pathname.scm:254: addpart */
  f_1143(C_a_i(&a,9),t1,((C_word*)((C_word*)t0)[3])[1])
);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
f_1223(t4,t3);}

/* k1346 in loop in chicken.pathname#normalize-pathname in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_fcall f_1348(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_1348,2,t0,t1);}
a=C_alloc(8);
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* pathname.scm:277: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_1213(t5,((C_word*)t0)[5],t3,t4,((C_word*)((C_word*)t0)[6])[1]);}
else{
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=t3;
t5=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1384,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
/* pathname.scm:280: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t7;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}}

/* k1382 in k1346 in loop in chicken.pathname#normalize-pathname in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1384,2,av);}
a=C_alloc(9);
t2=(
  /* pathname.scm:280: addpart */
  f_1143(C_a_i(&a,9),t1,((C_word*)((C_word*)t0)[3])[1])
);
/* pathname.scm:278: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1213(t3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2);}

/* k1398 in loop in chicken.pathname#normalize-pathname in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_fcall f_1400(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_1400,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1404,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* pathname.scm:284: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_fix(0);
av2[4]=t3;
tp(5,av2);}}
else{
t2=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* pathname.scm:286: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1213(t3,((C_word*)t0)[5],t2,((C_word*)t0)[7],((C_word*)((C_word*)t0)[8])[1]);}}

/* k1402 in k1398 in loop in chicken.pathname#normalize-pathname in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1404,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* pathname.scm:285: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_1213(t5,((C_word*)t0)[5],t3,t4,C_SCHEME_END_OF_LIST);}

/* chicken.pathname#split-directory in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_fcall f_1454(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1454,4,t1,t2,t3,t4);}
t5=C_i_check_string_2(t3,t2);
if(C_truep(*((C_word*)lf[10]+1))){
/* pathname.scm:294: chicken.string#string-split */
t6=*((C_word*)lf[62]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t1;
av2[2]=t3;
av2[3]=lf[63];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
/* pathname.scm:294: chicken.string#string-split */
t6=*((C_word*)lf[62]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t1;
av2[2]=t3;
av2[3]=lf[64];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* chicken.pathname#directory-null? in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_1467,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1475,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_listp(t2))){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
f_1475(2,av2);}}
else{
/* pathname.scm:300: split-directory */
f_1454(t3,lf[68],t2,C_SCHEME_TRUE);}}

/* k1473 in chicken.pathname#directory-null? in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1475,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1477,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_1477(t1)
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* loop in k1473 in chicken.pathname#directory-null? in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static C_word C_fcall f_1477(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_car(t1);
if(C_truep((C_truep(C_i_equalp(t3,lf[66]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[67]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t4=t1;
t5=C_u_i_cdr(t4);
t7=t5;
t1=t7;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* chicken.pathname#decompose-directory in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1507,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1554,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:326: split-directory */
f_1454(t3,lf[70],t2,C_SCHEME_FALSE);}

/* k1544 in k1565 in k1558 in k1555 in k1552 in chicken.pathname#decompose-directory in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1546,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1552 in chicken.pathname#decompose-directory in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1554,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1557,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:327: absolute-pathname-root */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[2]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=lf[2];
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k1555 in k1552 in chicken.pathname#decompose-directory in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1557,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1560,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:328: root-origin */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[3]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=lf[3];
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k1558 in k1555 in k1552 in chicken.pathname#decompose-directory in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1560,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1567,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:329: root-directory */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[4]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=lf[4];
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k1565 in k1558 in k1555 in k1552 in chicken.pathname#decompose-directory in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1567(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1567,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1571,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_nullp(((C_word*)t0)[4]);
t5=C_i_not(t4);
t6=(C_truep(t5)?((C_word*)t0)[4]:C_SCHEME_FALSE);
t7=t3;
if(C_truep(C_i_not(((C_word*)t0)[3]))){
t8=t7;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_i_car(t6);
t9=C_block_size(((C_word*)t0)[3]);
t10=C_substring_compare(((C_word*)t0)[3],t8,C_fix(0),C_fix(0),t9);
if(C_truep(C_i_not(t10))){
t11=t7;{
C_word *av2=av;
av2[0]=t11;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t11=C_u_i_cdr(t6);
t12=C_block_size(t8);
t13=C_block_size(t12);
t14=C_eqp(t9,t13);
if(C_truep(t14)){
t15=t7;{
C_word *av2=av;
av2[0]=t15;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}
else{
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1546,a[2]=t7,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:325: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t15;
av2[2]=t8;
av2[3]=t9;
av2[4]=t12;
tp(5,av2);}}}}}

/* k1569 in k1565 in k1558 in k1555 in k1552 in chicken.pathname#decompose-directory in k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1571,2,av);}
/* pathname.scm:329: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
C_values(5,av2);}}

/* k1587 in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_1589(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_1589,2,av);}
a=C_alloc(17);
t2=C_eqp(t1,lf[43]);
t3=(C_truep(t2)?lf[44]:lf[45]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1143,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp);
t6=C_mutate((C_word*)lf[49]+1 /* (set! chicken.pathname#normalize-pathname ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1181,a[2]=t4,a[3]=t5,a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp));
t7=C_mutate(&lf[61] /* (set! chicken.pathname#split-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1454,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[65]+1 /* (set! chicken.pathname#directory-null? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1467,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[69]+1 /* (set! chicken.pathname#decompose-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1507,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t10=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}

/* k1590 in k591 in k588 in k585 */
static void C_ccall f_1592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1592,2,av);}
a=C_alloc(10);
t2=t1;
t3=C_mutate(&lf[2] /* (set! chicken.pathname#absolute-pathname-root ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1594,a[2]=t2,a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate(&lf[3] /* (set! chicken.pathname#root-origin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1600,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate(&lf[4] /* (set! chicken.pathname#root-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1609,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t0)[2];
f_599(t6,t5);}

/* chicken.pathname#absolute-pathname-root in k1590 in k591 in k588 in k585 */
static void C_ccall f_1594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1594,3,av);}
/* pathname.scm:72: chicken.irregex#irregex-match */
t3=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* chicken.pathname#root-origin in k1590 in k591 in k588 in k585 */
static void C_ccall f_1600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1600,3,av);}
if(C_truep(t2)){
/* pathname.scm:73: chicken.irregex#irregex-match-substring */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.pathname#root-directory in k1590 in k591 in k588 in k585 */
static void C_ccall f_1609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1609,3,av);}
if(C_truep(t2)){
/* pathname.scm:74: chicken.irregex#irregex-match-substring */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(2);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1617 in k591 in k588 in k585 */
static void C_ccall f_1619(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1619,2,av);}
a=C_alloc(10);
t2=t1;
t3=C_mutate(&lf[2] /* (set! chicken.pathname#absolute-pathname-root ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1621,a[2]=t2,a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate(&lf[3] /* (set! chicken.pathname#root-origin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1627,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate(&lf[4] /* (set! chicken.pathname#root-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1630,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t0)[2];
f_599(t6,t5);}

/* chicken.pathname#absolute-pathname-root in k1617 in k591 in k588 in k585 */
static void C_ccall f_1621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1621,3,av);}
/* pathname.scm:76: chicken.irregex#irregex-match */
t3=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* chicken.pathname#root-origin in k1617 in k591 in k588 in k585 */
static void C_ccall f_1627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1627,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.pathname#root-directory in k1617 in k591 in k588 in k585 */
static void C_ccall f_1630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1630,3,av);}
if(C_truep(t2)){
/* pathname.scm:78: chicken.irregex#irregex-match-substring */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k585 */
static void C_ccall f_587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_587,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_590,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k588 in k585 */
static void C_ccall f_590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_590,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_593,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k591 in k588 in k585 */
static void C_ccall f_593(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_593,2,av);}
a=C_alloc(22);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=lf[2] /* chicken.pathname#absolute-pathname-root */ =C_SCHEME_UNDEFINED;;
t5=lf[3] /* chicken.pathname#root-origin */ =C_SCHEME_UNDEFINED;;
t6=lf[4] /* chicken.pathname#root-directory */ =C_SCHEME_UNDEFINED;;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_599,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[10]+1))){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1592,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:71: chicken.irregex#irregex */
t9=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[74];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1619,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:75: chicken.irregex#irregex */
t9=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[75];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* k597 in k591 in k588 in k585 */
static void C_fcall f_599(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(38,0,6)))){
C_save_and_reclaim_args((void *)trf_599,2,t0,t1);}
a=C_alloc(38);
t2=C_mutate((C_word*)lf[5]+1 /* (set! chicken.pathname#absolute-pathname? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_601,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[8] /* (set! chicken.pathname#chop-pds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_614,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=C_set_block_item(lf[12] /* chicken.pathname#make-pathname */,0,C_SCHEME_UNDEFINED);
t5=C_set_block_item(lf[13] /* chicken.pathname#make-absolute-pathname */,0,C_SCHEME_UNDEFINED);
t6=(C_truep(*((C_word*)lf[10]+1))?lf[14]:lf[15]);
t7=t6;
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_682,a[2]=t7,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));
t15=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_733,a[2]=t9,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t16=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_764,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[12]+1 /* (set! chicken.pathname#make-pathname ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_852,a[2]=t13,a[3]=t11,a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp));
t18=C_mutate((C_word*)lf[13]+1 /* (set! chicken.pathname#make-absolute-pathname ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_871,a[2]=t13,a[3]=t7,a[4]=t11,a[5]=((C_word)li8),tmp=(C_word)a,a+=6,tmp));
t19=(C_truep(*((C_word*)lf[10]+1))?lf[27]:lf[28]);
t20=(C_truep(*((C_word*)lf[10]+1))?lf[29]:lf[30]);
t21=t20;
t22=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_907,a[2]=((C_word*)t0)[2],a[3]=t21,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:162: chicken.irregex#irregex */
t23=*((C_word*)lf[72]+1);{
C_word av2[3];
av2[0]=t23;
av2[1]=t22;
av2[2]=t19;
((C_proc)(void*)(*((C_word*)t23+1)))(3,av2);}}

/* chicken.pathname#absolute-pathname? in k597 in k591 in k588 in k585 */
static void C_ccall f_601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_601,3,av);}
a=C_alloc(3);
t3=C_i_check_string_2(t2,lf[6]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_612,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:82: absolute-pathname-root */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[2]);
C_word *av2=av;
av2[0]=lf[2];
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k610 in chicken.pathname#absolute-pathname? in k597 in k591 in k588 in k585 */
static void C_ccall f_612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_612,2,av);}
/* pathname.scm:82: chicken.irregex#irregex-match-data? */
t2=*((C_word*)lf[7]+1);{
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

/* chicken.pathname#chop-pds in k597 in k591 in k588 in k585 */
static void C_fcall f_614(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_614,2,t1,t2);}
a=C_alloc(7);
if(C_truep(t2)){
t3=C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_627,a[2]=t5,a[3]=t2,a[4]=((C_word)li1),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_627(t7,t1,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* lp in chicken.pathname#chop-pds in k597 in k591 in k588 in k585 */
static void C_fcall f_627(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_627,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_634,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,C_fix(1)))){
t4=C_fixnum_difference(t2,C_fix(1));
t5=C_subchar(((C_word*)t0)[3],t4);
if(C_truep(*((C_word*)lf[10]+1))){
t6=C_u_i_memq(t5,lf[11]);
t7=t3;
f_634(t7,t6);}
else{
t6=t3;
f_634(t6,C_eqp(C_make_character(47),t5));}}
else{
t4=t3;
f_634(t4,C_SCHEME_FALSE);}}

/* k632 in lp in chicken.pathname#chop-pds in k597 in k591 in k588 in k585 */
static void C_fcall f_634(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_634,2,t0,t1);}
if(C_truep(t1)){
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* pathname.scm:94: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_627(t3,((C_word*)t0)[4],t2);}
else{
t2=C_block_size(((C_word*)t0)[5]);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[2],t2))){
/* pathname.scm:96: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}
else{
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* conc-dirs in k597 in k591 in k588 in k585 */
static void C_fcall f_682(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_682,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_i_check_list_2(t2,lf[16]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_691,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li3),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_691(t7,t1,t2);}

/* loop in conc-dirs in k597 in k591 in k588 in k585 */
static void C_fcall f_691(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_691,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[17];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_i_string_length(t3);
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t2;
t7=C_u_i_cdr(t6);
/* pathname.scm:111: loop */
t10=t1;
t11=t7;
t1=t10;
t2=t11;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_719,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t7=t2;
t8=C_u_i_car(t7);
/* pathname.scm:113: chop-pds */
f_614(t6,t8);}}}

/* k717 in loop in conc-dirs in k597 in k591 in k588 in k585 */
static void C_ccall f_719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_719,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_723,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=C_u_i_cdr(t4);
/* pathname.scm:115: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_691(t6,t3,t5);}

/* k721 in k717 in loop in conc-dirs in k597 in k591 in k588 in k585 */
static void C_ccall f_723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_723,2,av);}
/* pathname.scm:112: scheme#string-append */
t2=*((C_word*)lf[18]+1);{
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
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* canonicalize-dirs in k597 in k591 in k588 in k585 */
static void C_fcall f_733(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_733,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_not(t2);
t4=(C_truep(t3)?t3:C_i_nullp(t2));
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=lf[19];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_i_stringp(t2))){
t5=C_a_i_list1(&a,1,t2);
/* pathname.scm:119: conc-dirs */
t6=((C_word*)((C_word*)t0)[2])[1];
f_682(t6,t1,t5);}
else{
/* pathname.scm:120: conc-dirs */
t5=((C_word*)((C_word*)t0)[2])[1];
f_682(t5,t1,t2);}}}

/* _make-pathname in k597 in k591 in k588 in k585 */
static void C_fcall f_764(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_764,5,t1,t2,t3,t4,t5);}
a=C_alloc(9);
t6=(C_truep(t5)?t5:lf[20]);
t7=t6;
t8=(C_truep(t4)?t4:lf[21]);
t9=t8;
t10=C_i_check_string_2(t3,t2);
t11=C_i_check_string_2(t9,t2);
t12=C_i_check_string_2(t7,t2);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_787,a[2]=t1,a[3]=t3,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_812,a[2]=t9,a[3]=t13,tmp=(C_word)a,a+=4,tmp);
t15=C_block_size(t3);
if(C_truep(C_fixnum_greater_or_equal_p(t15,C_fix(1)))){
t16=C_block_size(t9);
if(C_truep(C_fixnum_greater_or_equal_p(t16,C_fix(1)))){
t17=C_subchar(t9,C_fix(0));
if(C_truep(*((C_word*)lf[10]+1))){
t18=C_u_i_memq(t17,lf[24]);
t19=t14;
f_812(t19,t18);}
else{
t18=t14;
f_812(t18,C_eqp(C_make_character(47),t17));}}
else{
t17=t14;
f_812(t17,C_SCHEME_FALSE);}}
else{
t16=t14;
f_812(t16,C_SCHEME_FALSE);}}

/* k785 in _make-pathname in k597 in k591 in k588 in k585 */
static void C_ccall f_787(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_787,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_794,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_block_size(((C_word*)t0)[4]);
if(C_truep(C_fixnum_greaterp(t4,C_fix(0)))){
t5=C_subchar(((C_word*)t0)[4],C_fix(0));
t6=C_i_char_equalp(t5,C_make_character(46));
t7=t3;
f_794(t7,C_i_not(t6));}
else{
t5=t3;
f_794(t5,C_SCHEME_FALSE);}}

/* k792 in k785 in _make-pathname in k597 in k591 in k588 in k585 */
static void C_fcall f_794(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_794,2,t0,t1);}
if(C_truep(t1)){
/* pathname.scm:128: scheme#string-append */
t2=*((C_word*)lf[18]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[22];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
/* pathname.scm:128: scheme#string-append */
t2=*((C_word*)lf[18]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[23];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k810 in _make-pathname in k597 in k591 in k588 in k585 */
static void C_fcall f_812(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_812,2,t0,t1);}
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
/* pathname.scm:133: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(1);
av2[4]=t2;
tp(5,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
f_787(2,av2);}}}

/* chicken.pathname#make-pathname in k597 in k591 in k588 in k585 */
static void C_ccall f_852(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_852,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_863,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* pathname.scm:143: canonicalize-dirs */
t9=((C_word*)((C_word*)t0)[3])[1];
f_733(t9,t8,t2);}

/* k861 in chicken.pathname#make-pathname in k597 in k591 in k588 in k585 */
static void C_ccall f_863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_863,2,av);}
/* pathname.scm:143: _make-pathname */
f_764(((C_word*)t0)[3],lf[16],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* chicken.pathname#make-absolute-pathname in k597 in k591 in k588 in k585 */
static void C_ccall f_871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_871,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+7);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_882,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t7,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* pathname.scm:149: canonicalize-dirs */
t9=((C_word*)((C_word*)t0)[4])[1];
f_733(t9,t8,t2);}

/* k880 in chicken.pathname#make-absolute-pathname in k597 in k591 in k588 in k585 */
static void C_ccall f_882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_882,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_885,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_888,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* pathname.scm:150: absolute-pathname? */
t5=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k883 in k880 in chicken.pathname#make-absolute-pathname in k597 in k591 in k588 in k585 */
static void C_ccall f_885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_885,2,av);}
/* pathname.scm:147: _make-pathname */
f_764(((C_word*)t0)[3],lf[25],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k886 in k880 in chicken.pathname#make-absolute-pathname in k597 in k591 in k588 in k585 */
static void C_ccall f_888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_888,2,av);}
if(C_truep(t1)){
/* pathname.scm:147: _make-pathname */
f_764(((C_word*)t0)[3],lf[25],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
/* pathname.scm:152: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=((C_word*)t0)[7];
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}}

/* k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_907,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_910,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:163: chicken.irregex#irregex */
t4=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_910(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,c,4)))){
C_save_and_reclaim((void *)f_910,2,av);}
a=C_alloc(36);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_911,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp);
t4=C_mutate((C_word*)lf[31]+1 /* (set! chicken.pathname#decompose-pathname ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_932,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word)li10),tmp=(C_word)a,a+=6,tmp));
t5=C_mutate((C_word*)lf[35]+1 /* (set! chicken.pathname#pathname-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1004,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[36]+1 /* (set! chicken.pathname#pathname-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1019,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[37]+1 /* (set! chicken.pathname#pathname-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1034,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[38]+1 /* (set! chicken.pathname#pathname-strip-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1049,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[39]+1 /* (set! chicken.pathname#pathname-strip-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1067,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[40]+1 /* (set! chicken.pathname#pathname-replace-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1085,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[41]+1 /* (set! chicken.pathname#pathname-replace-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1103,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[42]+1 /* (set! chicken.pathname#pathname-replace-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1121,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1589,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:232: chicken.platform#software-version */
t14=*((C_word*)lf[71]+1);{
C_word *av2=av;
av2[0]=t14;
av2[1]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}

/* strip-pds in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_fcall f_911(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_911,2,t1,t2);}
a=C_alloc(4);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_918,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:167: chop-pds */
f_614(t3,t2);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k916 in strip-pds in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_918,2,av);}
t2=C_block_size(t1);
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* pathname.scm:170: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(0);
av2[4]=C_fix(1);
tp(5,av2);}}}

/* chicken.pathname#decompose-pathname in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_932(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_932,3,av);}
a=C_alloc(6);
t3=C_i_check_string_2(t2,lf[32]);
t4=C_block_size(t2);
t5=C_eqp(C_fix(0),t4);
if(C_truep(t5)){
/* pathname.scm:174: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_948,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* pathname.scm:175: chicken.irregex#irregex-search */
t7=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k946 in chicken.pathname#decompose-pathname in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_948,2,av);}
a=C_alloc(8);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_958,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_970,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:178: chicken.irregex#irregex-match-substring */
t5=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_973,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:181: chicken.irregex#irregex-search */
t4=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k956 in k946 in chicken.pathname#decompose-pathname in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_958,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_962,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:179: chicken.irregex#irregex-match-substring */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(2);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k960 in k956 in k946 in chicken.pathname#decompose-pathname in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_962,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_966,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:180: chicken.irregex#irregex-match-substring */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(4);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k964 in k960 in k956 in k946 in chicken.pathname#decompose-pathname in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_966,2,av);}
/* pathname.scm:177: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
C_values(5,av2);}}

/* k968 in k946 in chicken.pathname#decompose-pathname in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_970,2,av);}
/* pathname.scm:178: strip-pds */
f_911(((C_word*)t0)[3],t1);}

/* k971 in k946 in chicken.pathname#decompose-pathname in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_973,2,av);}
a=C_alloc(8);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_983,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_991,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:184: chicken.irregex#irregex-match-substring */
t5=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_998,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:187: strip-pds */
f_911(t3,((C_word*)t0)[4]);}}

/* k981 in k971 in k946 in chicken.pathname#decompose-pathname in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_983,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_987,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:185: chicken.irregex#irregex-match-substring */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(2);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k985 in k981 in k971 in k946 in chicken.pathname#decompose-pathname in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_987,2,av);}
/* pathname.scm:183: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}

/* k989 in k971 in k946 in chicken.pathname#decompose-pathname in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_991,2,av);}
/* pathname.scm:184: strip-pds */
f_911(((C_word*)t0)[3],t1);}

/* k996 in k971 in k946 in chicken.pathname#decompose-pathname in k908 in k905 in k597 in k591 in k588 in k585 */
static void C_ccall f_998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_998,2,av);}
/* pathname.scm:187: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_pathname_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("pathname"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_pathname_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(340))){
C_save(t1);
C_rereclaim2(340*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,76);
lf[0]=C_h_intern(&lf[0],8, C_text("pathname"));
lf[1]=C_h_intern(&lf[1],17, C_text("chicken.pathname#"));
lf[5]=C_h_intern(&lf[5],35, C_text("chicken.pathname#absolute-pathname\077"));
lf[6]=C_h_intern(&lf[6],18, C_text("absolute-pathname\077"));
lf[7]=C_h_intern(&lf[7],35, C_text("chicken.irregex#irregex-match-data\077"));
lf[9]=C_h_intern(&lf[9],13, C_text("\003syssubstring"));
lf[10]=C_h_intern(&lf[10],20, C_text("\003syswindows-platform"));
lf[11]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016"));
lf[12]=C_h_intern(&lf[12],30, C_text("chicken.pathname#make-pathname"));
lf[13]=C_h_intern(&lf[13],39, C_text("chicken.pathname#make-absolute-pathname"));
lf[14]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\134"));
lf[15]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[16]=C_h_intern(&lf[16],13, C_text("make-pathname"));
lf[17]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[18]=C_h_intern(&lf[18],20, C_text("scheme#string-append"));
lf[19]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[20]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[21]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[23]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[24]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016"));
lf[25]=C_h_intern(&lf[25],22, C_text("make-absolute-pathname"));
lf[26]=C_h_intern(&lf[26],17, C_text("\003sysstring-append"));
lf[27]=C_decode_literal(C_heaptop,C_text("\376B\000\000&^(.\052[\134/\134\134])\077([^\134/\134\134]+)(\134.([^\134/\134\134.]+))$"));
lf[28]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033^(.\052/)\077([^/]+)(\134.([^/.]+))$"));
lf[29]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034^(.\052[\134/\134\134])\077((\134.)\077[^\134/\134\134]+)$"));
lf[30]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024^(.\052/)\077((\134.)\077[^/]+)$"));
lf[31]=C_h_intern(&lf[31],35, C_text("chicken.pathname#decompose-pathname"));
lf[32]=C_h_intern(&lf[32],18, C_text("decompose-pathname"));
lf[33]=C_h_intern(&lf[33],39, C_text("chicken.irregex#irregex-match-substring"));
lf[34]=C_h_intern(&lf[34],30, C_text("chicken.irregex#irregex-search"));
lf[35]=C_h_intern(&lf[35],35, C_text("chicken.pathname#pathname-directory"));
lf[36]=C_h_intern(&lf[36],30, C_text("chicken.pathname#pathname-file"));
lf[37]=C_h_intern(&lf[37],35, C_text("chicken.pathname#pathname-extension"));
lf[38]=C_h_intern(&lf[38],41, C_text("chicken.pathname#pathname-strip-directory"));
lf[39]=C_h_intern(&lf[39],41, C_text("chicken.pathname#pathname-strip-extension"));
lf[40]=C_h_intern(&lf[40],43, C_text("chicken.pathname#pathname-replace-directory"));
lf[41]=C_h_intern(&lf[41],38, C_text("chicken.pathname#pathname-replace-file"));
lf[42]=C_h_intern(&lf[42],43, C_text("chicken.pathname#pathname-replace-extension"));
lf[43]=C_h_intern(&lf[43],7, C_text("mingw32"));
lf[44]=C_h_intern(&lf[44],7, C_text("windows"));
lf[45]=C_h_intern(&lf[45],4, C_text("unix"));
lf[46]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[47]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002.."));
lf[48]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002.."));
lf[49]=C_h_intern(&lf[49],35, C_text("chicken.pathname#normalize-pathname"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000/\376\003\000\000\002\376\377\012\000\000\134\376\377\016"));
lf[51]=C_h_intern(&lf[51],18, C_text("normalize-pathname"));
lf[52]=C_h_intern(&lf[52],3, C_text("abs"));
lf[53]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[54]=C_h_intern(&lf[54],14, C_text("scheme#display"));
lf[55]=C_h_intern(&lf[55],16, C_text("\003syswrite-char-0"));
lf[56]=C_h_intern(&lf[56],8, C_text("for-each"));
lf[57]=C_h_intern(&lf[57],30, C_text("chicken.base#get-output-string"));
lf[58]=C_h_intern(&lf[58],16, C_text("\003sysfast-reverse"));
lf[59]=C_h_intern(&lf[59],31, C_text("chicken.base#open-output-string"));
lf[60]=C_h_intern(&lf[60],3, C_text("rel"));
lf[62]=C_h_intern(&lf[62],27, C_text("chicken.string#string-split"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002/\134"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[65]=C_h_intern(&lf[65],32, C_text("chicken.pathname#directory-null\077"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[68]=C_h_intern(&lf[68],15, C_text("directory-null\077"));
lf[69]=C_h_intern(&lf[69],36, C_text("chicken.pathname#decompose-directory"));
lf[70]=C_h_intern(&lf[70],19, C_text("decompose-directory"));
lf[71]=C_h_intern(&lf[71],33, C_text("chicken.platform#software-version"));
lf[72]=C_h_intern(&lf[72],23, C_text("chicken.irregex#irregex"));
lf[73]=C_h_intern(&lf[73],29, C_text("chicken.irregex#irregex-match"));
lf[74]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026([A-Za-z]:)\077([\134/\134\134]).\052"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005(/).\052"));
C_register_lf2(lf,76,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_587,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[108] = {
{C_text("f_1004:pathname_2escm"),(void*)f_1004},
{C_text("f_1010:pathname_2escm"),(void*)f_1010},
{C_text("f_1016:pathname_2escm"),(void*)f_1016},
{C_text("f_1019:pathname_2escm"),(void*)f_1019},
{C_text("f_1025:pathname_2escm"),(void*)f_1025},
{C_text("f_1031:pathname_2escm"),(void*)f_1031},
{C_text("f_1034:pathname_2escm"),(void*)f_1034},
{C_text("f_1040:pathname_2escm"),(void*)f_1040},
{C_text("f_1046:pathname_2escm"),(void*)f_1046},
{C_text("f_1049:pathname_2escm"),(void*)f_1049},
{C_text("f_1055:pathname_2escm"),(void*)f_1055},
{C_text("f_1061:pathname_2escm"),(void*)f_1061},
{C_text("f_1067:pathname_2escm"),(void*)f_1067},
{C_text("f_1073:pathname_2escm"),(void*)f_1073},
{C_text("f_1079:pathname_2escm"),(void*)f_1079},
{C_text("f_1085:pathname_2escm"),(void*)f_1085},
{C_text("f_1091:pathname_2escm"),(void*)f_1091},
{C_text("f_1097:pathname_2escm"),(void*)f_1097},
{C_text("f_1103:pathname_2escm"),(void*)f_1103},
{C_text("f_1109:pathname_2escm"),(void*)f_1109},
{C_text("f_1115:pathname_2escm"),(void*)f_1115},
{C_text("f_1121:pathname_2escm"),(void*)f_1121},
{C_text("f_1127:pathname_2escm"),(void*)f_1127},
{C_text("f_1133:pathname_2escm"),(void*)f_1133},
{C_text("f_1143:pathname_2escm"),(void*)f_1143},
{C_text("f_1181:pathname_2escm"),(void*)f_1181},
{C_text("f_1190:pathname_2escm"),(void*)f_1190},
{C_text("f_1213:pathname_2escm"),(void*)f_1213},
{C_text("f_1223:pathname_2escm"),(void*)f_1223},
{C_text("f_1247:pathname_2escm"),(void*)f_1247},
{C_text("f_1250:pathname_2escm"),(void*)f_1250},
{C_text("f_1253:pathname_2escm"),(void*)f_1253},
{C_text("f_1254:pathname_2escm"),(void*)f_1254},
{C_text("f_1258:pathname_2escm"),(void*)f_1258},
{C_text("f_1268:pathname_2escm"),(void*)f_1268},
{C_text("f_1271:pathname_2escm"),(void*)f_1271},
{C_text("f_1274:pathname_2escm"),(void*)f_1274},
{C_text("f_1277:pathname_2escm"),(void*)f_1277},
{C_text("f_1284:pathname_2escm"),(void*)f_1284},
{C_text("f_1291:pathname_2escm"),(void*)f_1291},
{C_text("f_1303:pathname_2escm"),(void*)f_1303},
{C_text("f_1313:pathname_2escm"),(void*)f_1313},
{C_text("f_1339:pathname_2escm"),(void*)f_1339},
{C_text("f_1348:pathname_2escm"),(void*)f_1348},
{C_text("f_1384:pathname_2escm"),(void*)f_1384},
{C_text("f_1400:pathname_2escm"),(void*)f_1400},
{C_text("f_1404:pathname_2escm"),(void*)f_1404},
{C_text("f_1454:pathname_2escm"),(void*)f_1454},
{C_text("f_1467:pathname_2escm"),(void*)f_1467},
{C_text("f_1475:pathname_2escm"),(void*)f_1475},
{C_text("f_1477:pathname_2escm"),(void*)f_1477},
{C_text("f_1507:pathname_2escm"),(void*)f_1507},
{C_text("f_1546:pathname_2escm"),(void*)f_1546},
{C_text("f_1554:pathname_2escm"),(void*)f_1554},
{C_text("f_1557:pathname_2escm"),(void*)f_1557},
{C_text("f_1560:pathname_2escm"),(void*)f_1560},
{C_text("f_1567:pathname_2escm"),(void*)f_1567},
{C_text("f_1571:pathname_2escm"),(void*)f_1571},
{C_text("f_1589:pathname_2escm"),(void*)f_1589},
{C_text("f_1592:pathname_2escm"),(void*)f_1592},
{C_text("f_1594:pathname_2escm"),(void*)f_1594},
{C_text("f_1600:pathname_2escm"),(void*)f_1600},
{C_text("f_1609:pathname_2escm"),(void*)f_1609},
{C_text("f_1619:pathname_2escm"),(void*)f_1619},
{C_text("f_1621:pathname_2escm"),(void*)f_1621},
{C_text("f_1627:pathname_2escm"),(void*)f_1627},
{C_text("f_1630:pathname_2escm"),(void*)f_1630},
{C_text("f_587:pathname_2escm"),(void*)f_587},
{C_text("f_590:pathname_2escm"),(void*)f_590},
{C_text("f_593:pathname_2escm"),(void*)f_593},
{C_text("f_599:pathname_2escm"),(void*)f_599},
{C_text("f_601:pathname_2escm"),(void*)f_601},
{C_text("f_612:pathname_2escm"),(void*)f_612},
{C_text("f_614:pathname_2escm"),(void*)f_614},
{C_text("f_627:pathname_2escm"),(void*)f_627},
{C_text("f_634:pathname_2escm"),(void*)f_634},
{C_text("f_682:pathname_2escm"),(void*)f_682},
{C_text("f_691:pathname_2escm"),(void*)f_691},
{C_text("f_719:pathname_2escm"),(void*)f_719},
{C_text("f_723:pathname_2escm"),(void*)f_723},
{C_text("f_733:pathname_2escm"),(void*)f_733},
{C_text("f_764:pathname_2escm"),(void*)f_764},
{C_text("f_787:pathname_2escm"),(void*)f_787},
{C_text("f_794:pathname_2escm"),(void*)f_794},
{C_text("f_812:pathname_2escm"),(void*)f_812},
{C_text("f_852:pathname_2escm"),(void*)f_852},
{C_text("f_863:pathname_2escm"),(void*)f_863},
{C_text("f_871:pathname_2escm"),(void*)f_871},
{C_text("f_882:pathname_2escm"),(void*)f_882},
{C_text("f_885:pathname_2escm"),(void*)f_885},
{C_text("f_888:pathname_2escm"),(void*)f_888},
{C_text("f_907:pathname_2escm"),(void*)f_907},
{C_text("f_910:pathname_2escm"),(void*)f_910},
{C_text("f_911:pathname_2escm"),(void*)f_911},
{C_text("f_918:pathname_2escm"),(void*)f_918},
{C_text("f_932:pathname_2escm"),(void*)f_932},
{C_text("f_948:pathname_2escm"),(void*)f_948},
{C_text("f_958:pathname_2escm"),(void*)f_958},
{C_text("f_962:pathname_2escm"),(void*)f_962},
{C_text("f_966:pathname_2escm"),(void*)f_966},
{C_text("f_970:pathname_2escm"),(void*)f_970},
{C_text("f_973:pathname_2escm"),(void*)f_973},
{C_text("f_983:pathname_2escm"),(void*)f_983},
{C_text("f_987:pathname_2escm"),(void*)f_987},
{C_text("f_991:pathname_2escm"),(void*)f_991},
{C_text("f_998:pathname_2escm"),(void*)f_998},
{C_text("toplevel:pathname_2escm"),(void*)C_pathname_toplevel},
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
o|hiding unexported module binding: chicken.pathname#d 
o|hiding unexported module binding: chicken.pathname#define-alias 
o|hiding unexported module binding: chicken.pathname#absolute-pathname-root 
o|hiding unexported module binding: chicken.pathname#root-origin 
o|hiding unexported module binding: chicken.pathname#root-directory 
o|hiding unexported module binding: chicken.pathname#chop-pds 
o|hiding unexported module binding: chicken.pathname#split-directory 
S|applied compiler syntax:
S|  for-each		1
o|eliminated procedure checks: 10 
o|specializations:
o|  1 (scheme#char=? char char)
o|  1 (scheme#string-ref string fixnum)
o|  1 (scheme#string=? string string)
o|  1 (scheme#car pair)
o|  5 (scheme#cdr pair)
o|  1 (scheme#zero? integer)
o|  3 (scheme#memq * list)
(o e)|safe calls: 159 
o|safe globals: (chicken.pathname#root-directory chicken.pathname#root-origin chicken.pathname#absolute-pathname-root) 
o|inlining procedure: k616 
o|inlining procedure: k629 
o|inlining procedure: k629 
o|contracted procedure: "(pathname.scm:93) g135136" 
o|inlining procedure: k660 
o|substituted constant variable: a664 
o|inlining procedure: k660 
o|inlining procedure: k616 
o|inlining procedure: k693 
o|inlining procedure: k693 
o|inlining procedure: k735 
o|inlining procedure: k735 
o|inlining procedure: k789 
o|inlining procedure: k789 
o|inlining procedure: k823 
o|contracted procedure: "(pathname.scm:132) g173174" 
o|inlining procedure: k831 
o|substituted constant variable: a835 
o|inlining procedure: k831 
o|inlining procedure: k823 
o|inlining procedure: k883 
o|inlining procedure: k883 
o|inlining procedure: k913 
o|inlining procedure: k913 
o|inlining procedure: k937 
o|inlining procedure: k937 
o|inlining procedure: k974 
o|inlining procedure: k974 
o|inlining procedure: k1145 
o|inlining procedure: k1145 
o|substituted constant variable: a1154 
o|inlining procedure: k1156 
o|inlining procedure: k1156 
o|inlining procedure: k1192 
o|substituted constant variable: a1199 
o|inlining procedure: k1192 
o|inlining procedure: k1215 
o|inlining procedure: k1233 
o|inlining procedure: k1233 
o|inlining procedure: k1278 
o|inlining procedure: k1278 
o|inlining procedure: k1305 
o|inlining procedure: k1305 
o|inlining procedure: k1215 
o|inlining procedure: k1349 
o|inlining procedure: k1349 
o|inlining procedure: k1389 
o|inlining procedure: k1389 
o|inlining procedure: k1395 
o|inlining procedure: k1395 
o|substituted constant variable: a1436 
o|inlining procedure: k1430 
o|inlining procedure: k1430 
o|inlining procedure: k1463 
o|inlining procedure: k1463 
o|inlining procedure: k1482 
o|inlining procedure: k1482 
o|contracted procedure: "(pathname.scm:329) strip-origin-prefix427" 
o|inlining procedure: k1512 
o|inlining procedure: k1512 
o|inlining procedure: k1534 
o|inlining procedure: k1534 
o|inlining procedure: k1602 
o|inlining procedure: k1602 
o|inlining procedure: k1611 
o|inlining procedure: k1611 
o|inlining procedure: k1632 
o|inlining procedure: k1632 
o|replaced variables: 186 
o|removed binding forms: 74 
o|substituted constant variable: r6171643 
o|substituted constant variable: r6941644 
o|substituted constant variable: r7361646 
o|substituted constant variable: r7901648 
o|substituted constant variable: r7901648 
o|substituted constant variable: r7901650 
o|substituted constant variable: r7901650 
o|substituted constant variable: r8241655 
o|substituted constant variable: r9141661 
o|substituted constant variable: r13901684 
o|substituted constant variable: r13901686 
o|substituted constant variable: r14311691 
o|converted assignments to bindings: (pds?361) 
o|substituted constant variable: r14641692 
o|substituted constant variable: r14641692 
o|substituted constant variable: r14641694 
o|substituted constant variable: r14641694 
o|converted assignments to bindings: (addpart339) 
o|substituted constant variable: r16031703 
o|substituted constant variable: r16121705 
o|substituted constant variable: r16331707 
o|simplifications: ((let . 2)) 
o|replaced variables: 11 
o|removed binding forms: 186 
o|inlining procedure: k1230 
o|replaced variables: 4 
o|removed binding forms: 30 
o|replaced variables: 1 
o|removed binding forms: 2 
o|removed binding forms: 1 
o|simplifications: ((if . 14) (##core#call . 109)) 
o|  call simplifications:
o|    scheme#list?
o|    scheme#member
o|    scheme#string-ref
o|    chicken.fixnum#fx+	8
o|    scheme#pair?
o|    ##sys#slot	2
o|    scheme#string	2
o|    scheme#string=?	2
o|    scheme#cdr
o|    scheme#cons	3
o|    ##sys#call-with-values	8
o|    chicken.fixnum#fx=	5
o|    scheme#values	5
o|    chicken.fixnum#fx>	3
o|    scheme#char=?
o|    scheme#not	6
o|    scheme#string?
o|    scheme#list
o|    ##sys#check-list	2
o|    scheme#null?	10
o|    scheme#car	8
o|    scheme#string-length
o|    chicken.fixnum#fx>=	4
o|    scheme#eq?	10
o|    ##sys#size	12
o|    chicken.fixnum#fx<
o|    chicken.fixnum#fx-	2
o|    ##sys#check-string	7
o|contracted procedure: k603 
o|contracted procedure: k623 
o|contracted procedure: k639 
o|contracted procedure: k652 
o|contracted procedure: k645 
o|contracted procedure: k655 
o|contracted procedure: k673 
o|contracted procedure: k678 
o|contracted procedure: k684 
o|contracted procedure: k696 
o|contracted procedure: k699 
o|contracted procedure: k729 
o|contracted procedure: k705 
o|contracted procedure: k738 
o|contracted procedure: k741 
o|contracted procedure: k747 
o|contracted procedure: k754 
o|contracted procedure: k766 
o|contracted procedure: k769 
o|contracted procedure: k772 
o|contracted procedure: k775 
o|contracted procedure: k778 
o|contracted procedure: k807 
o|contracted procedure: k795 
o|contracted procedure: k802 
o|contracted procedure: k817 
o|contracted procedure: k848 
o|contracted procedure: k820 
o|contracted procedure: k844 
o|contracted procedure: k826 
o|contracted procedure: k864 
o|contracted procedure: k854 
o|contracted procedure: k892 
o|contracted procedure: k873 
o|contracted procedure: k899 
o|contracted procedure: k902 
o|contracted procedure: k929 
o|contracted procedure: k922 
o|contracted procedure: k934 
o|contracted procedure: k1000 
o|contracted procedure: k940 
o|contracted procedure: k1583 
o|contracted procedure: k1139 
o|contracted procedure: k1148 
o|contracted procedure: k1159 
o|inlining procedure: k1162 
o|contracted procedure: k1175 
o|inlining procedure: k1162 
o|contracted procedure: k1447 
o|contracted procedure: k1183 
o|contracted procedure: k1444 
o|contracted procedure: k1186 
o|contracted procedure: k1195 
o|contracted procedure: k1203 
o|contracted procedure: k1206 
o|contracted procedure: k1218 
o|contracted procedure: k1227 
o|contracted procedure: k1239 
o|contracted procedure: k1230 
o|contracted procedure: k1263 
o|contracted procedure: k1285 
o|contracted procedure: k1293 
o|contracted procedure: k1296 
o|contracted procedure: k1308 
o|contracted procedure: k1318 
o|contracted procedure: k1322 
o|contracted procedure: k1326 
o|contracted procedure: k1329 
o|contracted procedure: k1352 
o|contracted procedure: k1359 
o|contracted procedure: k1363 
o|contracted procedure: k1370 
o|contracted procedure: k1374 
o|contracted procedure: k1385 
o|contracted procedure: k1392 
o|contracted procedure: k1409 
o|contracted procedure: k1413 
o|contracted procedure: k1417 
o|contracted procedure: k1424 
o|contracted procedure: k1427 
o|contracted procedure: k1441 
o|contracted procedure: k1456 
o|contracted procedure: k1479 
o|contracted procedure: k1497 
o|contracted procedure: k1488 
o|contracted procedure: k1500 
o|contracted procedure: k1580 
o|contracted procedure: k1576 
o|contracted procedure: k1573 
o|contracted procedure: k1515 
o|contracted procedure: k1518 
o|contracted procedure: k1521 
o|contracted procedure: k1527 
o|contracted procedure: k1531 
o|contracted procedure: k1548 
o|contracted procedure: k1537 
o|simplifications: ((if . 1) (let . 19)) 
o|removed binding forms: 94 
o|replaced variables: 33 
o|removed binding forms: 1 
o|removed binding forms: 17 
o|direct leaf routine/allocation: addpart339 9 
o|direct leaf routine/allocation: pds?361 0 
o|direct leaf routine/allocation: loop418 0 
o|contracted procedure: "(pathname.scm:254) k1333" 
o|contracted procedure: "(pathname.scm:273) k1343" 
o|contracted procedure: "(pathname.scm:280) k1378" 
o|converted assignments to bindings: (loop418) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 3 
o|customizable procedures: (k597 chicken.pathname#split-directory k1398 k1346 loop366 k1221 g380387 for-each-loop379391 k1275 strip-pds214 canonicalize-dirs143 _make-pathname144 k810 k792 conc-dirs142 chicken.pathname#chop-pds loop146 k632 lp128) 
o|calls to known targets: 50 
o|identified direct recursive calls: f_691 1 
o|identified direct recursive calls: f_1477 1 
o|fast box initializations: 7 
o|fast global references: 8 
o|fast global assignments: 11 
o|dropping unused closure argument: f_1143 
o|dropping unused closure argument: f_1454 
o|dropping unused closure argument: f_1477 
o|dropping unused closure argument: f_614 
o|dropping unused closure argument: f_764 
o|dropping unused closure argument: f_911 
*/
/* end of file */

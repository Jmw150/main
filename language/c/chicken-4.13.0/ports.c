/* Generated from ports.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: ports.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file ports.c
   unit: ports
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[40];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,28),40,112,111,114,116,45,102,111,114,45,101,97,99,104,32,102,110,54,52,32,116,104,117,110,107,54,53,41,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,120,115,55,52,41,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,23),40,112,111,114,116,45,109,97,112,32,102,110,55,49,32,116,104,117,110,107,55,50,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,97,99,99,56,50,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,30),40,112,111,114,116,45,102,111,108,100,32,102,110,55,56,32,97,99,99,55,57,32,116,104,117,110,107,56,48,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,19),40,102,95,56,55,54,32,98,117,102,49,53,48,32,110,49,53,49,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,49,48,51,32,105,49,48,53,41};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,19),40,102,95,56,56,49,32,98,117,102,49,53,50,32,110,49,53,51,41,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,110,49,49,57,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,6),40,97,56,57,56,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,11),40,97,57,48,52,32,120,49,53,52,41,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,38),40,99,111,112,121,45,112,111,114,116,32,115,114,99,49,51,51,32,100,101,115,116,49,51,52,32,46,32,116,109,112,49,51,50,49,51,53,41,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,17),40,103,49,54,53,32,103,49,55,55,49,55,56,49,55,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,54,52,32,103,49,55,49,49,56,51,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,11),40,97,57,52,48,32,115,49,54,49,41,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,56,57,32,103,49,57,54,50,48,48,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,6),40,97,57,55,52,41,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,32),40,109,97,107,101,45,98,114,111,97,100,99,97,115,116,45,112,111,114,116,32,46,32,112,111,114,116,115,49,54,48,41};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,7),40,97,49,48,49,50,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,7),40,97,49,48,52,55,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,7),40,97,49,48,54,55,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,110,50,51,48,32,99,50,51,49,41};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,34),40,97,49,49,48,50,32,112,50,50,53,32,110,50,50,54,32,100,101,115,116,50,50,55,32,115,116,97,114,116,50,50,56,41,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,41),40,109,97,107,101,45,99,111,110,99,97,116,101,110,97,116,101,100,45,112,111,114,116,32,112,49,50,48,53,32,46,32,112,111,114,116,115,50,48,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,7),40,97,49,49,54,52,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,7),40,97,49,49,54,57,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,7),40,97,49,49,55,53,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,39),40,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,111,114,116,32,112,111,114,116,50,52,48,32,116,104,117,110,107,50,52,49,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,7),40,97,49,49,56,57,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,7),40,97,49,49,57,52,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,7),40,97,49,50,48,48,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,38),40,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,111,114,116,32,112,111,114,116,50,53,52,32,116,104,117,110,107,50,53,53,41,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,7),40,97,49,50,49,52,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,7),40,97,49,50,49,57,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,7),40,97,49,50,50,53,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,44),40,119,105,116,104,45,101,114,114,111,114,45,111,117,116,112,117,116,45,116,111,45,112,111,114,116,32,112,111,114,116,50,54,56,32,116,104,117,110,107,50,54,57,41,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,39),40,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,115,116,114,105,110,103,32,115,116,114,50,56,50,32,112,114,111,99,50,56,51,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,33),40,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,115,116,114,105,110,103,32,112,114,111,99,50,56,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,7),40,97,49,50,54,48,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,7),40,97,49,50,54,53,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,7),40,97,49,50,55,49,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,40),40,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,115,116,114,105,110,103,32,115,116,114,50,57,48,32,116,104,117,110,107,50,57,49,41};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,7),40,97,49,50,56,53,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,7),40,97,49,50,57,48,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,7),40,97,49,50,57,57,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,32),40,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,115,116,114,105,110,103,32,116,104,117,110,107,51,48,51,41};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,12),40,97,49,51,52,51,32,112,51,51,57,41,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,12),40,97,49,51,54,52,32,112,51,52,53,41,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,12),40,97,49,51,56,53,32,112,51,53,50,41,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,12),40,97,49,51,57,52,32,112,51,53,52,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,56),40,109,97,107,101,45,105,110,112,117,116,45,112,111,114,116,32,114,101,97,100,51,50,48,32,114,101,97,100,121,63,51,50,49,32,99,108,111,115,101,51,50,50,32,46,32,116,109,112,51,49,57,51,50,51,41};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,17),40,97,49,52,54,54,32,112,51,55,50,32,99,51,55,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,17),40,97,49,52,55,54,32,112,51,55,52,32,115,51,55,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,12),40,97,49,52,56,50,32,112,51,55,54,41,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,12),40,97,49,52,57,49,32,112,51,55,56,41,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,48),40,109,97,107,101,45,111,117,116,112,117,116,45,112,111,114,116,32,119,114,105,116,101,51,54,51,32,99,108,111,115,101,51,54,52,32,46,32,116,109,112,51,54,50,51,54,53,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1019)
static void C_fcall f_1019(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1013)
static void C_ccall f_1013(C_word c,C_word *av) C_noret;
C_noret_decl(f_644)
static void C_ccall f_644(C_word c,C_word *av) C_noret;
C_noret_decl(f_649)
static void C_ccall f_649(C_word c,C_word *av) C_noret;
C_noret_decl(f_1004)
static void C_ccall f_1004(C_word c,C_word *av) C_noret;
C_noret_decl(f_881)
static void C_ccall f_881(C_word c,C_word *av) C_noret;
C_noret_decl(f_655)
static void C_fcall f_655(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_659)
static void C_ccall f_659(C_word c,C_word *av) C_noret;
C_noret_decl(f_899)
static void C_ccall f_899(C_word c,C_word *av) C_noret;
C_noret_decl(f_876)
static void C_ccall f_876(C_word c,C_word *av) C_noret;
C_noret_decl(f_1068)
static void C_ccall f_1068(C_word c,C_word *av) C_noret;
C_noret_decl(f_1215)
static void C_ccall f_1215(C_word c,C_word *av) C_noret;
C_noret_decl(f_1266)
static void C_ccall f_1266(C_word c,C_word *av) C_noret;
C_noret_decl(f_1261)
static void C_ccall f_1261(C_word c,C_word *av) C_noret;
C_noret_decl(f_1395)
static void C_ccall f_1395(C_word c,C_word *av) C_noret;
C_noret_decl(f_1390)
static void C_ccall f_1390(C_word c,C_word *av) C_noret;
C_noret_decl(f_1295)
static void C_ccall f_1295(C_word c,C_word *av) C_noret;
C_noret_decl(f_1291)
static void C_ccall f_1291(C_word c,C_word *av) C_noret;
C_noret_decl(f_1342)
static void C_ccall f_1342(C_word c,C_word *av) C_noret;
C_noret_decl(f_1344)
static void C_ccall f_1344(C_word c,C_word *av) C_noret;
C_noret_decl(f_1339)
static void C_ccall f_1339(C_word c,C_word *av) C_noret;
C_noret_decl(f_843)
static void C_ccall f_843(C_word c,C_word *av) C_noret;
C_noret_decl(f_846)
static void C_ccall f_846(C_word c,C_word *av) C_noret;
C_noret_decl(f_681)
static void C_ccall f_681(C_word c,C_word *av) C_noret;
C_noret_decl(f_687)
static void C_fcall f_687(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1084)
static void C_ccall f_1084(C_word c,C_word *av) C_noret;
C_noret_decl(f_905)
static void C_ccall f_905(C_word c,C_word *av) C_noret;
C_noret_decl(f_1272)
static void C_ccall f_1272(C_word c,C_word *av) C_noret;
C_noret_decl(f_1029)
static void C_ccall f_1029(C_word c,C_word *av) C_noret;
C_noret_decl(f_1277)
static void C_ccall f_1277(C_word c,C_word *av) C_noret;
C_noret_decl(f_691)
static void C_ccall f_691(C_word c,C_word *av) C_noret;
C_noret_decl(f_1492)
static void C_ccall f_1492(C_word c,C_word *av) C_noret;
C_noret_decl(f_729)
static void C_ccall f_729(C_word c,C_word *av) C_noret;
C_noret_decl(f_1483)
static void C_ccall f_1483(C_word c,C_word *av) C_noret;
C_noret_decl(f_1487)
static void C_ccall f_1487(C_word c,C_word *av) C_noret;
C_noret_decl(f_720)
static void C_ccall f_720(C_word c,C_word *av) C_noret;
C_noret_decl(f_679)
static void C_ccall f_679(C_word c,C_word *av) C_noret;
C_noret_decl(f_1477)
static void C_ccall f_1477(C_word c,C_word *av) C_noret;
C_noret_decl(f_1201)
static void C_ccall f_1201(C_word c,C_word *av) C_noret;
C_noret_decl(f_1206)
static void C_ccall f_1206(C_word c,C_word *av) C_noret;
C_noret_decl(f_1465)
static void C_ccall f_1465(C_word c,C_word *av) C_noret;
C_noret_decl(f_1462)
static void C_ccall f_1462(C_word c,C_word *av) C_noret;
C_noret_decl(f_1467)
static void C_ccall f_1467(C_word c,C_word *av) C_noret;
C_noret_decl(f_704)
static void C_ccall f_704(C_word c,C_word *av) C_noret;
C_noret_decl(f_716)
static void C_fcall f_716(C_word t0,C_word t1) C_noret;
C_noret_decl(f_711)
static void C_ccall f_711(C_word c,C_word *av) C_noret;
C_noret_decl(f_741)
static void C_fcall f_741(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1449)
static void C_ccall f_1449(C_word c,C_word *av) C_noret;
C_noret_decl(f_751)
static void C_ccall f_751(C_word c,C_word *av) C_noret;
C_noret_decl(f_1074)
static void C_fcall f_1074(C_word t0,C_word t1) C_noret;
C_noret_decl(f_935)
static void C_ccall f_935(C_word c,C_word *av) C_noret;
C_noret_decl(f_1240)
static void C_ccall f_1240(C_word c,C_word *av) C_noret;
C_noret_decl(f_1244)
static void C_ccall f_1244(C_word c,C_word *av) C_noret;
C_noret_decl(f_1247)
static void C_ccall f_1247(C_word c,C_word *av) C_noret;
C_noret_decl(f_962)
static void C_ccall f_962(C_word c,C_word *av) C_noret;
C_noret_decl(f_991)
static void C_ccall f_991(C_word c,C_word *av) C_noret;
C_noret_decl(f_1109)
static void C_fcall f_1109(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_975)
static void C_ccall f_975(C_word c,C_word *av) C_noret;
C_noret_decl(f_1128)
static void C_fcall f_1128(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1125)
static void C_ccall f_1125(C_word c,C_word *av) C_noret;
C_noret_decl(f_1220)
static void C_ccall f_1220(C_word c,C_word *av) C_noret;
C_noret_decl(f_1226)
static void C_ccall f_1226(C_word c,C_word *av) C_noret;
C_noret_decl(f_943)
static void C_fcall f_943(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_941)
static void C_ccall f_941(C_word c,C_word *av) C_noret;
C_noret_decl(f_1305)
static void C_ccall f_1305(C_word c,C_word *av) C_noret;
C_noret_decl(f_1252)
static void C_ccall f_1252(C_word c,C_word *av) C_noret;
C_noret_decl(f_1365)
static void C_ccall f_1365(C_word c,C_word *av) C_noret;
C_noret_decl(f_1256)
static void C_ccall f_1256(C_word c,C_word *av) C_noret;
C_noret_decl(f_1300)
static void C_ccall f_1300(C_word c,C_word *av) C_noret;
C_noret_decl(f_1286)
static void C_ccall f_1286(C_word c,C_word *av) C_noret;
C_noret_decl(f_1281)
static void C_ccall f_1281(C_word c,C_word *av) C_noret;
C_noret_decl(f_787)
static void C_ccall f_787(C_word c,C_word *av) C_noret;
C_noret_decl(f_952)
static void C_fcall f_952(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1231)
static void C_ccall f_1231(C_word c,C_word *av) C_noret;
C_noret_decl(f_1386)
static void C_ccall f_1386(C_word c,C_word *av) C_noret;
C_noret_decl(f_1235)
static void C_ccall f_1235(C_word c,C_word *av) C_noret;
C_noret_decl(f_1381)
static void C_ccall f_1381(C_word c,C_word *av) C_noret;
C_noret_decl(f_796)
static void C_ccall f_796(C_word c,C_word *av) C_noret;
C_noret_decl(f_801)
static void C_fcall f_801(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1176)
static void C_ccall f_1176(C_word c,C_word *av) C_noret;
C_noret_decl(f_1170)
static void C_ccall f_1170(C_word c,C_word *av) C_noret;
C_noret_decl(f_1165)
static void C_ccall f_1165(C_word c,C_word *av) C_noret;
C_noret_decl(f_808)
static void C_ccall f_808(C_word c,C_word *av) C_noret;
C_noret_decl(f_805)
static void C_fcall f_805(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1181)
static void C_ccall f_1181(C_word c,C_word *av) C_noret;
C_noret_decl(f_1156)
static void C_ccall f_1156(C_word c,C_word *av) C_noret;
C_noret_decl(f_623)
static void C_ccall f_623(C_word c,C_word *av) C_noret;
C_noret_decl(f_620)
static void C_ccall f_620(C_word c,C_word *av) C_noret;
C_noret_decl(f_774)
static void C_fcall f_774(C_word t0,C_word t1) C_noret;
C_noret_decl(f_778)
static void C_ccall f_778(C_word c,C_word *av) C_noret;
C_noret_decl(f_625)
static void C_ccall f_625(C_word c,C_word *av) C_noret;
C_noret_decl(f_981)
static void C_fcall f_981(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1195)
static void C_ccall f_1195(C_word c,C_word *av) C_noret;
C_noret_decl(f_1190)
static void C_ccall f_1190(C_word c,C_word *av) C_noret;
C_noret_decl(f_1103)
static void C_ccall f_1103(C_word c,C_word *av) C_noret;
C_noret_decl(f_631)
static void C_fcall f_631(C_word t0,C_word t1) C_noret;
C_noret_decl(f_635)
static void C_ccall f_635(C_word c,C_word *av) C_noret;
C_noret_decl(f_1048)
static void C_ccall f_1048(C_word c,C_word *av) C_noret;
C_noret_decl(C_ports_toplevel)
C_externexport void C_ccall C_ports_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1019)
static void C_ccall trf_1019(C_word c,C_word *av) C_noret;
static void C_ccall trf_1019(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1019(t0,t1);}

C_noret_decl(trf_655)
static void C_ccall trf_655(C_word c,C_word *av) C_noret;
static void C_ccall trf_655(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_655(t0,t1,t2);}

C_noret_decl(trf_687)
static void C_ccall trf_687(C_word c,C_word *av) C_noret;
static void C_ccall trf_687(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_687(t0,t1,t2);}

C_noret_decl(trf_716)
static void C_ccall trf_716(C_word c,C_word *av) C_noret;
static void C_ccall trf_716(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_716(t0,t1);}

C_noret_decl(trf_741)
static void C_ccall trf_741(C_word c,C_word *av) C_noret;
static void C_ccall trf_741(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_741(t0,t1,t2);}

C_noret_decl(trf_1074)
static void C_ccall trf_1074(C_word c,C_word *av) C_noret;
static void C_ccall trf_1074(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1074(t0,t1);}

C_noret_decl(trf_1109)
static void C_ccall trf_1109(C_word c,C_word *av) C_noret;
static void C_ccall trf_1109(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1109(t0,t1,t2,t3);}

C_noret_decl(trf_1128)
static void C_ccall trf_1128(C_word c,C_word *av) C_noret;
static void C_ccall trf_1128(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1128(t0,t1);}

C_noret_decl(trf_943)
static void C_ccall trf_943(C_word c,C_word *av) C_noret;
static void C_ccall trf_943(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_943(t0,t1,t2);}

C_noret_decl(trf_952)
static void C_ccall trf_952(C_word c,C_word *av) C_noret;
static void C_ccall trf_952(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_952(t0,t1,t2);}

C_noret_decl(trf_801)
static void C_ccall trf_801(C_word c,C_word *av) C_noret;
static void C_ccall trf_801(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_801(t0,t1,t2);}

C_noret_decl(trf_805)
static void C_ccall trf_805(C_word c,C_word *av) C_noret;
static void C_ccall trf_805(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_805(t0,t1);}

C_noret_decl(trf_774)
static void C_ccall trf_774(C_word c,C_word *av) C_noret;
static void C_ccall trf_774(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_774(t0,t1);}

C_noret_decl(trf_981)
static void C_ccall trf_981(C_word c,C_word *av) C_noret;
static void C_ccall trf_981(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_981(t0,t1,t2);}

C_noret_decl(trf_631)
static void C_ccall trf_631(C_word c,C_word *av) C_noret;
static void C_ccall trf_631(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_631(t0,t1);}

/* loop in a1012 in make-concatenated-port in k621 in k618 */
static void C_fcall f_1019(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1019,2,t0,t1);}
a=C_alloc(5);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=t1;{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1029,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* read-char/port */
t4=*((C_word*)lf[15]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* a1012 in make-concatenated-port in k621 in k618 */
static void C_ccall f_1013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1013,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1019,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1019(t5,t1);}

/* k642 in k633 in loop in port-for-each in k621 in k618 */
static void C_ccall f_644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_644,2,av);}
/* ports.scm:51: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_631(t2,((C_word*)t0)[3]);}

/* port-map in k621 in k618 */
static void C_ccall f_649(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_649,4,av);}
a=C_alloc(8);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_655,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=((C_word)li2),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_655(t7,t1,C_SCHEME_END_OF_LIST);}

/* make-concatenated-port in k621 in k618 */
static void C_ccall f_1004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +21,c,6)))){
C_save_and_reclaim((void*)f_1004,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+21);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t4=C_a_i_cons(&a,2,t2,t3);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1013,a[2]=t6,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1048,a[2]=t6,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1068,a[2]=t6,a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1103,a[2]=t6,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
/* ports.scm:130: make-input-port */
t11=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t11;
av2[1]=t1;
av2[2]=t7;
av2[3]=t8;
av2[4]=*((C_word*)lf[13]+1);
av2[5]=t9;
av2[6]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(7,av2);}}

/* f_881 in copy-port in k621 in k618 */
static void C_ccall f_881(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_881,4,av);}
a=C_alloc(10);
t4=t2;
t5=t3;
t6=((C_word*)t0)[2];
t7=((C_word*)t0)[3];
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_741,a[2]=t5,a[3]=t9,a[4]=t4,a[5]=t7,a[6]=t6,a[7]=((C_word)li7),tmp=(C_word)a,a+=8,tmp));
t11=((C_word*)t9)[1];
f_741(t11,t1,C_fix(0));}

/* loop in port-map in k621 in k618 */
static void C_fcall f_655(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_655,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_659,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* ports.scm:56: thunk */
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k657 in loop in port-map in k621 in k618 */
static void C_ccall f_659(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_659,2,av);}
a=C_alloc(5);
if(C_truep(C_eofp(t1))){
/* ports.scm:58: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[2]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_679,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* ports.scm:59: fn */
t3=((C_word*)t0)[5];{
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

/* a898 in copy-port in k621 in k618 */
static void C_ccall f_899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_899,2,av);}
/* ports.scm:115: read */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* f_876 in copy-port in k621 in k618 */
static void C_ccall f_876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_876,4,av);}
/* ports.scm:109: write-string */
t4=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* a1067 in make-concatenated-port in k621 in k618 */
static void C_ccall f_1068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1068,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1074,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1074(t5,t1);}

/* a1214 in with-error-output-to-port in k621 in k618 */
static void C_ccall f_1215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1215,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[25]+1));
t3=C_mutate2((C_word*)lf[25]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1265 in k1254 in with-input-from-string in k621 in k618 */
static void C_ccall f_1266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1266,2,av);}
/* ports.scm:197: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a1260 in k1254 in with-input-from-string in k621 in k618 */
static void C_ccall f_1261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1261,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[20]+1));
t3=C_mutate2((C_word*)lf[20]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1394 in make-input-port in k621 in k618 */
static void C_ccall f_1395(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1395,3,av);}
/* ports.scm:238: ready? */
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k1388 in a1385 in make-input-port in k621 in k618 */
static void C_ccall f_1390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1390,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_set_i_slot(((C_word*)t0)[3],C_fix(8),C_SCHEME_TRUE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1293 in a1290 in k1279 in with-output-to-string in k621 in k618 */
static void C_ccall f_1295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1295,2,av);}
/* ports.scm:203: get-output-string */
t2=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[23]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1290 in k1279 in with-output-to-string in k621 in k618 */
static void C_ccall f_1291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1291,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1295,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ports.scm:202: thunk */
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k1340 in k1337 in make-input-port in k621 in k618 */
static void C_ccall f_1342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1342,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a1343 in make-input-port in k621 in k618 */
static void C_ccall f_1344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1344,3,av);}
t3=C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[2])){
/* ports.scm:218: read */
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}
else{
if(C_truep(t3)){
t4=C_i_set_i_slot(t2,C_fix(10),C_SCHEME_FALSE);
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* ports.scm:222: read */
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}}}

/* k1337 in make-input-port in k621 in k618 */
static void C_ccall f_1339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1339,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1342,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:244: ##sys#set-port-data! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[33]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k841 in loop in k794 in copy-port in k621 in k618 */
static void C_ccall f_843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_843,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t3=((C_word*)t0)[3];
f_805(t3,t2);}

/* copy-port in k621 in k618 */
static void C_ccall f_846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +18,c,4)))){
C_save_and_reclaim((void*)f_846,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+18);
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
C_word t24;
C_word t25;
t5=C_i_nullp(t4);
t6=(C_truep(t5)?((C_word*)t0)[2]:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?((C_word*)t0)[3]:C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_eqp(t7,((C_word*)t0)[2]);
if(C_truep(t15)){
t16=C_eqp(t12,((C_word*)t0)[3]);
t17=(C_truep(t16)?(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_876,a[2]=t3,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp):(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_881,a[2]=t3,a[3]=t12,a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp));
t18=t1;
t19=t2;
t20=t17;
t21=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_711,a[2]=t20,a[3]=t19,a[4]=t18,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t21;
av2[2]=C_fix(1024);
av2[3]=C_make_character(32);
tp(4,av2);}}
else{
t16=C_eqp(t12,((C_word*)t0)[3]);
if(C_truep(t16)){
t17=t1;
t18=t2;
t19=t3;
t20=t7;
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_796,a[2]=t19,a[3]=t20,a[4]=t18,a[5]=t17,tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t21;
av2[2]=C_fix(1024);
av2[3]=C_make_character(32);
tp(4,av2);}}
else{
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_899,a[2]=t7,a[3]=t2,a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp);
t18=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_905,a[2]=t12,a[3]=t3,a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp);
t19=t1;
t20=t17;
t21=t18;
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_774,a[2]=t23,a[3]=t21,a[4]=t20,a[5]=((C_word)li13),tmp=(C_word)a,a+=6,tmp));
t25=((C_word*)t23)[1];
f_774(t25,t19);}}}

/* port-fold in k621 in k618 */
static void C_ccall f_681(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_681,5,av);}
a=C_alloc(8);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_687,a[2]=t6,a[3]=t2,a[4]=t4,a[5]=((C_word)li4),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_687(t8,t1,t3);}

/* loop in port-fold in k621 in k618 */
static void C_fcall f_687(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_687,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_691,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* ports.scm:63: thunk */
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k1082 in loop in a1067 in make-concatenated-port in k621 in k618 */
static void C_ccall f_1084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1084,2,av);}
if(C_truep(C_eofp(t1))){
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
/* ports.scm:151: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1074(t4,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a904 in copy-port in k621 in k618 */
static void C_ccall f_905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_905,3,av);}
/* ports.scm:116: write */
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* a1271 in k1254 in with-input-from-string in k621 in k618 */
static void C_ccall f_1272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1272,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[20]+1));
t3=C_mutate2((C_word*)lf[20]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1027 in loop in a1012 in make-concatenated-port in k621 in k618 */
static void C_ccall f_1029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1029,2,av);}
if(C_truep(C_eofp(t1))){
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
/* ports.scm:138: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1019(t4,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* with-output-to-string in k621 in k618 */
static void C_ccall f_1277(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1277,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1281,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:201: open-output-string */
t4=*((C_word*)lf[30]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k689 in loop in port-fold in k621 in k618 */
static void C_ccall f_691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_691,2,av);}
a=C_alloc(4);
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_704,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ports.scm:66: fn */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* a1491 in make-output-port in k621 in k618 */
static void C_ccall f_1492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1492,3,av);}
if(C_truep(((C_word*)t0)[2])){
/* ports.scm:261: flush */
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k727 in k718 in loop in k709 in copy-port in k621 in k618 */
static void C_ccall f_729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_729,2,av);}
/* ports.scm:79: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_716(t2,((C_word*)t0)[3]);}

/* a1482 in make-output-port in k621 in k618 */
static void C_ccall f_1483(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1483,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1487,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:258: close */
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k1485 in a1482 in make-output-port in k621 in k618 */
static void C_ccall f_1487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1487,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_set_i_slot(((C_word*)t0)[3],C_fix(8),C_SCHEME_TRUE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k718 in loop in k709 in copy-port in k621 in k618 */
static void C_ccall f_720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_720,2,av);}
a=C_alloc(4);
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_729,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ports.scm:78: writer */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=t1;
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k677 in k657 in loop in port-map in k621 in k618 */
static void C_ccall f_679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_679,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* ports.scm:59: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_655(t3,((C_word*)t0)[4],t2);}

/* a1476 in make-output-port in k621 in k618 */
static void C_ccall f_1477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1477,4,av);}
/* ports.scm:256: write */
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a1200 in with-output-to-port in k621 in k618 */
static void C_ccall f_1201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1201,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[23]+1));
t3=C_mutate2((C_word*)lf[23]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* with-error-output-to-port in k621 in k618 */
static void C_ccall f_1206(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1206,4,av);}
a=C_alloc(18);
t4=t2;
t5=C_i_check_port_2(t4,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[24]);
t6=t2;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1215,a[2]=t9,a[3]=t7,a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1220,a[2]=t3,a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1226,a[2]=t7,a[3]=t9,a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp);
/* ports.scm:178: ##sys#dynamic-wind */
t13=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t13;
av2[1]=t1;
av2[2]=t10;
av2[3]=t11;
av2[4]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}

/* k1463 in k1460 in make-output-port in k621 in k618 */
static void C_ccall f_1465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1465,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1460 in make-output-port in k621 in k618 */
static void C_ccall f_1462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1462,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1465,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:267: ##sys#set-port-data! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[33]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* a1466 in make-output-port in k621 in k618 */
static void C_ccall f_1467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,2)))){
C_save_and_reclaim((void *)f_1467,4,av);}
a=C_alloc(2);
t4=C_a_i_string(&a,1,t3);
/* ports.scm:254: write */
t5=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t1;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k702 in k689 in loop in port-fold in k621 in k618 */
static void C_ccall f_704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_704,2,av);}
/* ports.scm:66: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_687(t2,((C_word*)t0)[3],t1);}

/* loop in k709 in copy-port in k621 in k618 */
static void C_fcall f_716(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_716,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_720,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ports.scm:76: read-string! */
t3=*((C_word*)lf[8]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(1024);
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k709 in copy-port in k621 in k618 */
static void C_ccall f_711(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_711,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_716,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word)li9),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_716(t6,((C_word*)t0)[4]);}

/* doloop103 */
static void C_fcall f_741(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_741,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_751,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_subbyte(((C_word*)t0)[4],t2);
t5=C_make_character(C_unfix(t4));
/* ports.scm:83: writer */
t6=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
av2[3]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}}

/* make-output-port in k621 in k618 */
static void C_ccall f_1449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +32,c,5)))){
C_save_and_reclaim((void*)f_1449,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+32);
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
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1467,a[2]=t2,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1477,a[2]=t2,a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1483,a[2]=t3,a[3]=((C_word)li58),tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1492,a[2]=t7,a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp);
t12=C_a_i_vector(&a,9,C_SCHEME_FALSE,C_SCHEME_FALSE,t8,t9,t10,t11,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t13=C_a_i_vector1(&a,1,C_SCHEME_FALSE);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1462,a[2]=t1,a[3]=t14,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:266: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t15;
av2[2]=C_SCHEME_FALSE;
av2[3]=t12;
av2[4]=lf[37];
av2[5]=lf[36];
tp(6,av2);}}

/* k749 in doloop103 */
static void C_ccall f_751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_751,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_741(t3,((C_word*)t0)[4],t2);}

/* loop in a1067 in make-concatenated-port in k621 in k618 */
static void C_fcall f_1074(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1074,2,t0,t1);}
a=C_alloc(5);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=t1;{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1084,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* ports.scm:148: peek-char */
t4=*((C_word*)lf[17]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* make-broadcast-port in k621 in k618 */
static void C_ccall f_935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +8,c,4)))){
C_save_and_reclaim((void*)f_935,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+8);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_941,a[2]=t2,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_975,a[2]=t2,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
/* ports.scm:122: make-output-port */
t5=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=*((C_word*)lf[13]+1);
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* call-with-output-string in k621 in k618 */
static void C_ccall f_1240(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1240,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1244,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:190: open-output-string */
t4=*((C_word*)lf[30]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1242 in call-with-output-string in k621 in k618 */
static void C_ccall f_1244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1244,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1247,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:191: proc */
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k1245 in k1242 in call-with-output-string in k621 in k618 */
static void C_ccall f_1247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1247,2,av);}
/* ports.scm:192: get-output-string */
t2=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k960 in for-each-loop164 in a940 in make-broadcast-port in k621 in k618 */
static void C_ccall f_962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_962,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_952(t3,((C_word*)t0)[4],t2);}

/* k989 in for-each-loop189 in a974 in make-broadcast-port in k621 in k618 */
static void C_ccall f_991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_991,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_981(t3,((C_word*)t0)[4],t2);}

/* loop in a1102 in make-concatenated-port in k621 in k618 */
static void C_fcall f_1109(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,5)))){
C_save_and_reclaim_args((void *)trf_1109,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1125,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t5=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t6=C_fixnum_plus(((C_word*)t0)[4],t3);
/* ports.scm:158: read-string! */
t7=*((C_word*)lf[8]+1);{
C_word av2[6];
av2[0]=t7;
av2[1]=t4;
av2[2]=t2;
av2[3]=((C_word*)t0)[5];
av2[4]=t5;
av2[5]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(6,av2);}}}}

/* a974 in make-broadcast-port in k621 in k618 */
static void C_ccall f_975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_975,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_981,a[2]=t4,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_981(t6,t1,t2);}

/* k1126 in k1123 in loop in a1102 in make-concatenated-port in k621 in k618 */
static void C_fcall f_1128(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1128,2,t0,t1);}
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_fixnum_plus(((C_word*)t0)[4],((C_word*)t0)[3]);
/* ports.scm:161: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1109(t4,((C_word*)t0)[6],t2,t3);}

/* k1123 in loop in a1102 in make-concatenated-port in k621 in k618 */
static void C_ccall f_1125(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1125,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1128,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_lessp(t2,((C_word*)t0)[2]))){
t4=C_i_cdr(((C_word*)((C_word*)t0)[6])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t4);
t6=t3;
f_1128(t6,t5);}
else{
t4=t3;
f_1128(t4,C_SCHEME_UNDEFINED);}}

/* a1219 in with-error-output-to-port in k621 in k618 */
static void C_ccall f_1220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1220,2,av);}
/* ports.scm:179: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a1225 in with-error-output-to-port in k621 in k618 */
static void C_ccall f_1226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1226,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[25]+1));
t3=C_mutate2((C_word*)lf[25]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* g165 in a940 in make-broadcast-port in k621 in k618 */
static void C_fcall f_943(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_943,3,t0,t1,t2);}
t3=*((C_word*)lf[7]+1);
/* ports.scm:123: g180 */
t4=*((C_word*)lf[7]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_FALSE;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* a940 in make-broadcast-port in k621 in k618 */
static void C_ccall f_941(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_941,3,av);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_943,a[2]=t2,a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_952,a[2]=t6,a[3]=t3,a[4]=((C_word)li16),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_952(t8,t1,t4);}

/* make-input-port in k621 in k618 */
static void C_ccall f_1305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +35,c,5)))){
C_save_and_reclaim((void*)f_1305,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+35);
t5=C_build_rest(&a,c,5,av);
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
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_i_car(t5));
t8=t7;
t9=C_i_nullp(t5);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t5));
t11=C_i_nullp(t10);
t12=(C_truep(t11)?C_SCHEME_FALSE:C_i_car(t10));
t13=C_i_nullp(t10);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t10));
t15=C_i_nullp(t14);
t16=(C_truep(t15)?C_SCHEME_FALSE:C_i_car(t14));
t17=C_i_nullp(t14);
t18=(C_truep(t17)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t19=C_i_nullp(t18);
t20=(C_truep(t19)?C_SCHEME_FALSE:C_i_car(t18));
t21=C_i_nullp(t18);
t22=(C_truep(t21)?C_SCHEME_END_OF_LIST:C_i_cdr(t18));
t23=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1344,a[2]=t8,a[3]=t2,a[4]=((C_word)li51),tmp=(C_word)a,a+=5,tmp);
t24=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1365,a[2]=t8,a[3]=t2,a[4]=((C_word)li52),tmp=(C_word)a,a+=5,tmp);
t25=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1386,a[2]=t4,a[3]=((C_word)li53),tmp=(C_word)a,a+=4,tmp);
t26=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1395,a[2]=t3,a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp);
t27=C_a_i_vector(&a,10,t23,t24,C_SCHEME_FALSE,C_SCHEME_FALSE,t25,C_SCHEME_FALSE,t26,t12,t16,t20);
t28=C_a_i_vector1(&a,1,C_SCHEME_FALSE);
t29=t28;
t30=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1339,a[2]=t1,a[3]=t29,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:243: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t30;
av2[2]=C_SCHEME_TRUE;
av2[3]=t27;
av2[4]=lf[35];
av2[5]=lf[36];
tp(6,av2);}}

/* with-input-from-string in k621 in k618 */
static void C_ccall f_1252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1252,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1256,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:196: open-input-string */
t5=*((C_word*)lf[27]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* a1364 in make-input-port in k621 in k618 */
static void C_ccall f_1365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1365,3,av);}
a=C_alloc(4);
t3=C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[2])){
/* ports.scm:225: peek */
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}
else{
if(C_truep(t3)){
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1381,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:228: read */
t5=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}}}

/* k1254 in with-input-from-string in k621 in k618 */
static void C_ccall f_1256(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1256,2,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1261,a[2]=t5,a[3]=t3,a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1266,a[2]=((C_word*)t0)[2],a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1272,a[2]=t3,a[3]=t5,a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp);
/* ports.scm:195: ##sys#dynamic-wind */
t9=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[3];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a1299 in k1279 in with-output-to-string in k621 in k618 */
static void C_ccall f_1300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1300,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[23]+1));
t3=C_mutate2((C_word*)lf[23]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1285 in k1279 in with-output-to-string in k621 in k618 */
static void C_ccall f_1286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1286,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[23]+1));
t3=C_mutate2((C_word*)lf[23]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1279 in with-output-to-string in k621 in k618 */
static void C_ccall f_1281(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1281,2,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1286,a[2]=t5,a[3]=t3,a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1291,a[2]=((C_word*)t0)[2],a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1300,a[2]=t3,a[3]=t5,a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp);
/* ports.scm:200: ##sys#dynamic-wind */
t9=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[3];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* k785 in k776 in loop in copy-port in k621 in k618 */
static void C_ccall f_787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_787,2,av);}
/* ports.scm:89: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_774(t2,((C_word*)t0)[3]);}

/* for-each-loop164 in a940 in make-broadcast-port in k621 in k618 */
static void C_fcall f_952(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_952,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_962,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* ports.scm:123: g165 */
t5=((C_word*)t0)[3];
f_943(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* call-with-input-string in k621 in k618 */
static void C_ccall f_1231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1231,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1235,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:185: open-input-string */
t5=*((C_word*)lf[27]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* a1385 in make-input-port in k621 in k618 */
static void C_ccall f_1386(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1386,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1390,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:234: close */
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k1233 in call-with-input-string in k621 in k618 */
static void C_ccall f_1235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1235,2,av);}
/* ports.scm:186: proc */
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

/* k1379 in a1364 in make-input-port in k621 in k618 */
static void C_ccall f_1381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1381,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(10),t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k794 in copy-port in k621 in k618 */
static void C_ccall f_796(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_796,2,av);}
a=C_alloc(10);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_801,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word)li10),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_801(t6,((C_word*)t0)[5],C_fix(0));}

/* loop in k794 in copy-port in k621 in k618 */
static void C_fcall f_801(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_801,3,t0,t1,t2);}
a=C_alloc(15);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_805,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t3)[1],C_fix(1024)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_843,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* ports.scm:94: write-string */
t6=*((C_word*)lf[7]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(1024);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t5=t4;
f_805(t5,C_SCHEME_UNDEFINED);}}

/* a1175 in with-input-from-port in k621 in k618 */
static void C_ccall f_1176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1176,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[20]+1));
t3=C_mutate2((C_word*)lf[20]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1169 in with-input-from-port in k621 in k618 */
static void C_ccall f_1170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1170,2,av);}
/* ports.scm:169: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a1164 in with-input-from-port in k621 in k618 */
static void C_ccall f_1165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1165,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[20]+1));
t3=C_mutate2((C_word*)lf[20]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k806 in k803 in loop in k794 in copy-port in k621 in k618 */
static void C_ccall f_808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_808,2,av);}
if(C_truep(C_eofp(t1))){
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
/* ports.scm:99: write-string */
t2=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}
else{
t2=C_fix(C_character_code(t1));
t3=C_setbyte(((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1],t2);
t4=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
/* ports.scm:102: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_801(t5,((C_word*)t0)[3],t4);}}

/* k803 in loop in k794 in copy-port in k621 in k618 */
static void C_fcall f_805(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_805,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* ports.scm:96: reader */
t3=((C_word*)t0)[7];{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* with-output-to-port in k621 in k618 */
static void C_ccall f_1181(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1181,4,av);}
a=C_alloc(18);
t4=t2;
t5=C_i_check_port_2(t4,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[22]);
t6=t2;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1190,a[2]=t9,a[3]=t7,a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1195,a[2]=t3,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1201,a[2]=t7,a[3]=t9,a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp);
/* ports.scm:173: ##sys#dynamic-wind */
t13=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t13;
av2[1]=t1;
av2[2]=t10;
av2[3]=t11;
av2[4]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}

/* with-input-from-port in k621 in k618 */
static void C_ccall f_1156(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1156,4,av);}
a=C_alloc(18);
t4=t2;
t5=C_i_check_port_2(t4,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[19]);
t6=t2;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1165,a[2]=t9,a[3]=t7,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1170,a[2]=t3,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1176,a[2]=t7,a[3]=t9,a[4]=((C_word)li31),tmp=(C_word)a,a+=5,tmp);
/* ports.scm:168: ##sys#dynamic-wind */
t13=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t13;
av2[1]=t1;
av2[2]=t10;
av2[3]=t11;
av2[4]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}

/* k621 in k618 */
static void C_ccall f_623(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(47,c,5)))){
C_save_and_reclaim((void *)f_623,2,av);}
a=C_alloc(47);
t2=C_mutate2((C_word*)lf[0]+1 /* (set! port-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_625,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[1]+1 /* (set! port-map ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_649,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[3]+1 /* (set! port-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_681,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t5=*((C_word*)lf[4]+1);
t6=*((C_word*)lf[5]+1);
t7=C_mutate2((C_word*)lf[6]+1 /* (set! copy-port ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_846,a[2]=t5,a[3]=t6,a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp));
t8=C_mutate2((C_word*)lf[10]+1 /* (set! make-broadcast-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_935,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[14]+1 /* (set! make-concatenated-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1004,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[19]+1 /* (set! with-input-from-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1156,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[22]+1 /* (set! with-output-to-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1181,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[24]+1 /* (set! with-error-output-to-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1206,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[26]+1 /* (set! call-with-input-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1231,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[28]+1 /* (set! call-with-output-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1240,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[31]+1 /* (set! with-input-from-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1252,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[32]+1 /* (set! with-output-to-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1277,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[18]+1 /* (set! make-input-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1305,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[12]+1 /* (set! make-output-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1449,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t19=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t19;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t19+1)))(2,av2);}}

/* k618 */
static void C_ccall f_620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_620,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_623,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ports.scm:41: register-feature! */
t3=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[39];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* loop in copy-port in k621 in k618 */
static void C_fcall f_774(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_774,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_778,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ports.scm:86: reader */
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k776 in loop in copy-port in k621 in k618 */
static void C_ccall f_778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_778,2,av);}
a=C_alloc(4);
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_787,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ports.scm:88: writer */
t3=((C_word*)t0)[4];{
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

/* port-for-each in k621 in k618 */
static void C_ccall f_625(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_625,4,av);}
a=C_alloc(8);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_631,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=((C_word)li0),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_631(t7,t1);}

/* for-each-loop189 in a974 in make-broadcast-port in k621 in k618 */
static void C_fcall f_981(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_981,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_991,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* ports.scm:125: g190 */
t5=*((C_word*)lf[11]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a1194 in with-output-to-port in k621 in k618 */
static void C_ccall f_1195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1195,2,av);}
/* ports.scm:174: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a1189 in with-output-to-port in k621 in k618 */
static void C_ccall f_1190(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1190,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[23]+1));
t3=C_mutate2((C_word*)lf[23]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1102 in make-concatenated-port in k621 in k618 */
static void C_ccall f_1103(C_word c,C_word *av){
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
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1103,6,av);}
a=C_alloc(9);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1109,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=t5,a[5]=t4,a[6]=((C_word)li26),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_1109(t9,t1,t3,C_fix(0));}

/* loop in port-for-each in k621 in k618 */
static void C_fcall f_631(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_631,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_635,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ports.scm:48: thunk */
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k633 in loop in port-for-each in k621 in k618 */
static void C_ccall f_635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_635,2,av);}
a=C_alloc(4);
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_644,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ports.scm:50: fn */
t3=((C_word*)t0)[4];{
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

/* a1047 in make-concatenated-port in k621 in k618 */
static void C_ccall f_1048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1048,2,av);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* ports.scm:142: char-ready? */
t3=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_ports_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("ports_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_ports_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(266))){
C_save(t1);
C_rereclaim2(266*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,40);
lf[0]=C_h_intern(&lf[0],13,"port-for-each");
lf[1]=C_h_intern(&lf[1],8,"port-map");
lf[2]=C_h_intern(&lf[2],16,"\003sysfast-reverse");
lf[3]=C_h_intern(&lf[3],9,"port-fold");
lf[4]=C_h_intern(&lf[4],9,"read-char");
lf[5]=C_h_intern(&lf[5],10,"write-char");
lf[6]=C_h_intern(&lf[6],9,"copy-port");
lf[7]=C_h_intern(&lf[7],12,"write-string");
lf[8]=C_h_intern(&lf[8],12,"read-string!");
lf[9]=C_h_intern(&lf[9],15,"\003sysmake-string");
lf[10]=C_h_intern(&lf[10],19,"make-broadcast-port");
lf[11]=C_h_intern(&lf[11],12,"flush-output");
lf[12]=C_h_intern(&lf[12],16,"make-output-port");
lf[13]=C_h_intern(&lf[13],4,"void");
lf[14]=C_h_intern(&lf[14],22,"make-concatenated-port");
lf[15]=C_h_intern(&lf[15],18,"\003sysread-char/port");
lf[16]=C_h_intern(&lf[16],11,"char-ready\077");
lf[17]=C_h_intern(&lf[17],9,"peek-char");
lf[18]=C_h_intern(&lf[18],15,"make-input-port");
lf[19]=C_h_intern(&lf[19],20,"with-input-from-port");
lf[20]=C_h_intern(&lf[20],18,"\003sysstandard-input");
lf[21]=C_h_intern(&lf[21],16,"\003sysdynamic-wind");
lf[22]=C_h_intern(&lf[22],19,"with-output-to-port");
lf[23]=C_h_intern(&lf[23],19,"\003sysstandard-output");
lf[24]=C_h_intern(&lf[24],25,"with-error-output-to-port");
lf[25]=C_h_intern(&lf[25],18,"\003sysstandard-error");
lf[26]=C_h_intern(&lf[26],22,"call-with-input-string");
lf[27]=C_h_intern(&lf[27],17,"open-input-string");
lf[28]=C_h_intern(&lf[28],23,"call-with-output-string");
lf[29]=C_h_intern(&lf[29],17,"get-output-string");
lf[30]=C_h_intern(&lf[30],18,"open-output-string");
lf[31]=C_h_intern(&lf[31],22,"with-input-from-string");
lf[32]=C_h_intern(&lf[32],21,"with-output-to-string");
lf[33]=C_h_intern(&lf[33],18,"\003sysset-port-data!");
lf[34]=C_h_intern(&lf[34],13,"\003sysmake-port");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\010(custom)");
lf[36]=C_h_intern(&lf[36],6,"custom");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\010(custom)");
lf[38]=C_h_intern(&lf[38],17,"register-feature!");
lf[39]=C_h_intern(&lf[39],5,"ports");
C_register_lf2(lf,40,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_620,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[100] = {
{"f_1019:ports_2escm",(void*)f_1019},
{"f_1013:ports_2escm",(void*)f_1013},
{"f_644:ports_2escm",(void*)f_644},
{"f_649:ports_2escm",(void*)f_649},
{"f_1004:ports_2escm",(void*)f_1004},
{"f_881:ports_2escm",(void*)f_881},
{"f_655:ports_2escm",(void*)f_655},
{"f_659:ports_2escm",(void*)f_659},
{"f_899:ports_2escm",(void*)f_899},
{"f_876:ports_2escm",(void*)f_876},
{"f_1068:ports_2escm",(void*)f_1068},
{"f_1215:ports_2escm",(void*)f_1215},
{"f_1266:ports_2escm",(void*)f_1266},
{"f_1261:ports_2escm",(void*)f_1261},
{"f_1395:ports_2escm",(void*)f_1395},
{"f_1390:ports_2escm",(void*)f_1390},
{"f_1295:ports_2escm",(void*)f_1295},
{"f_1291:ports_2escm",(void*)f_1291},
{"f_1342:ports_2escm",(void*)f_1342},
{"f_1344:ports_2escm",(void*)f_1344},
{"f_1339:ports_2escm",(void*)f_1339},
{"f_843:ports_2escm",(void*)f_843},
{"f_846:ports_2escm",(void*)f_846},
{"f_681:ports_2escm",(void*)f_681},
{"f_687:ports_2escm",(void*)f_687},
{"f_1084:ports_2escm",(void*)f_1084},
{"f_905:ports_2escm",(void*)f_905},
{"f_1272:ports_2escm",(void*)f_1272},
{"f_1029:ports_2escm",(void*)f_1029},
{"f_1277:ports_2escm",(void*)f_1277},
{"f_691:ports_2escm",(void*)f_691},
{"f_1492:ports_2escm",(void*)f_1492},
{"f_729:ports_2escm",(void*)f_729},
{"f_1483:ports_2escm",(void*)f_1483},
{"f_1487:ports_2escm",(void*)f_1487},
{"f_720:ports_2escm",(void*)f_720},
{"f_679:ports_2escm",(void*)f_679},
{"f_1477:ports_2escm",(void*)f_1477},
{"f_1201:ports_2escm",(void*)f_1201},
{"f_1206:ports_2escm",(void*)f_1206},
{"f_1465:ports_2escm",(void*)f_1465},
{"f_1462:ports_2escm",(void*)f_1462},
{"f_1467:ports_2escm",(void*)f_1467},
{"f_704:ports_2escm",(void*)f_704},
{"f_716:ports_2escm",(void*)f_716},
{"f_711:ports_2escm",(void*)f_711},
{"f_741:ports_2escm",(void*)f_741},
{"f_1449:ports_2escm",(void*)f_1449},
{"f_751:ports_2escm",(void*)f_751},
{"f_1074:ports_2escm",(void*)f_1074},
{"f_935:ports_2escm",(void*)f_935},
{"f_1240:ports_2escm",(void*)f_1240},
{"f_1244:ports_2escm",(void*)f_1244},
{"f_1247:ports_2escm",(void*)f_1247},
{"f_962:ports_2escm",(void*)f_962},
{"f_991:ports_2escm",(void*)f_991},
{"f_1109:ports_2escm",(void*)f_1109},
{"f_975:ports_2escm",(void*)f_975},
{"f_1128:ports_2escm",(void*)f_1128},
{"f_1125:ports_2escm",(void*)f_1125},
{"f_1220:ports_2escm",(void*)f_1220},
{"f_1226:ports_2escm",(void*)f_1226},
{"f_943:ports_2escm",(void*)f_943},
{"f_941:ports_2escm",(void*)f_941},
{"f_1305:ports_2escm",(void*)f_1305},
{"f_1252:ports_2escm",(void*)f_1252},
{"f_1365:ports_2escm",(void*)f_1365},
{"f_1256:ports_2escm",(void*)f_1256},
{"f_1300:ports_2escm",(void*)f_1300},
{"f_1286:ports_2escm",(void*)f_1286},
{"f_1281:ports_2escm",(void*)f_1281},
{"f_787:ports_2escm",(void*)f_787},
{"f_952:ports_2escm",(void*)f_952},
{"f_1231:ports_2escm",(void*)f_1231},
{"f_1386:ports_2escm",(void*)f_1386},
{"f_1235:ports_2escm",(void*)f_1235},
{"f_1381:ports_2escm",(void*)f_1381},
{"f_796:ports_2escm",(void*)f_796},
{"f_801:ports_2escm",(void*)f_801},
{"f_1176:ports_2escm",(void*)f_1176},
{"f_1170:ports_2escm",(void*)f_1170},
{"f_1165:ports_2escm",(void*)f_1165},
{"f_808:ports_2escm",(void*)f_808},
{"f_805:ports_2escm",(void*)f_805},
{"f_1181:ports_2escm",(void*)f_1181},
{"f_1156:ports_2escm",(void*)f_1156},
{"f_623:ports_2escm",(void*)f_623},
{"f_620:ports_2escm",(void*)f_620},
{"f_774:ports_2escm",(void*)f_774},
{"f_778:ports_2escm",(void*)f_778},
{"f_625:ports_2escm",(void*)f_625},
{"f_981:ports_2escm",(void*)f_981},
{"f_1195:ports_2escm",(void*)f_1195},
{"f_1190:ports_2escm",(void*)f_1190},
{"f_1103:ports_2escm",(void*)f_1103},
{"f_631:ports_2escm",(void*)f_631},
{"f_635:ports_2escm",(void*)f_635},
{"f_1048:ports_2escm",(void*)f_1048},
{"toplevel:ports_2escm",(void*)C_ports_toplevel},
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
S|  for-each		2
o|eliminated procedure checks: 14 
o|specializations:
o|  2 (##sys#check-output-port * * *)
o|  1 (##sys#check-input-port * * *)
o|  2 (##sys#check-list (or pair list) *)
o|  2 (make-string fixnum)
(o e)|safe calls: 91 
(o e)|assignments to immediate values: 1 
o|Removed `not' forms: 1 
o|inlining procedure: k636 
o|inlining procedure: k636 
o|inlining procedure: k660 
o|inlining procedure: k660 
o|inlining procedure: k692 
o|inlining procedure: k692 
o|inlining procedure: k860 
o|contracted procedure: "(ports.scm:106) read-buf88" 
o|inlining procedure: k721 
o|inlining procedure: k721 
o|substituted constant variable: a733 
o|contracted procedure: "(ports.scm:110) write-buf89" 
o|inlining procedure: k743 
o|inlining procedure: k743 
o|inlining procedure: k860 
o|contracted procedure: "(ports.scm:112) read-and-write-buf91" 
o|inlining procedure: k809 
o|inlining procedure: k809 
o|substituted constant variable: a845 
o|contracted procedure: "(ports.scm:114) read-and-write90" 
o|inlining procedure: k779 
o|inlining procedure: k779 
o|propagated global variable: g180181 write-string 
o|inlining procedure: k954 
o|inlining procedure: k954 
o|inlining procedure: k983 
o|inlining procedure: k983 
o|inlining procedure: k1021 
o|inlining procedure: k1021 
o|contracted procedure: k1053 
o|inlining procedure: k1050 
o|inlining procedure: k1050 
o|inlining procedure: k1076 
o|inlining procedure: k1076 
o|inlining procedure: k1111 
o|inlining procedure: k1111 
o|substituted constant variable: a1159 
o|substituted constant variable: a1160 
o|substituted constant variable: a1184 
o|substituted constant variable: a1185 
o|substituted constant variable: a1209 
o|substituted constant variable: a1210 
o|inlining procedure: k1349 
o|inlining procedure: k1349 
o|inlining procedure: k1370 
o|inlining procedure: k1370 
o|inlining procedure: k1494 
o|inlining procedure: k1494 
o|replaced variables: 108 
o|removed binding forms: 84 
o|substituted constant variable: r10221526 
o|substituted constant variable: r10511528 
o|substituted constant variable: r10771530 
o|removed binding forms: 130 
o|replaced variables: 2 
o|removed binding forms: 3 
o|removed binding forms: 2 
o|simplifications: ((if . 14) (##core#call . 82)) 
o|  call simplifications:
o|    string
o|    ##sys#setslot
o|    ##sys#setislot	3
o|    vector	4
o|    fx<=
o|    fx<
o|    fx-
o|    read-char
o|    pair?	2
o|    ##sys#slot	6
o|    car	11
o|    null?	17
o|    cdr	9
o|    char->integer
o|    ##sys#setbyte
o|    fx>=	3
o|    ##sys#byte
o|    integer->char
o|    fx+	4
o|    eq?	4
o|    cons	2
o|    eof-object?	7
o|contracted procedure: k639 
o|contracted procedure: k663 
o|contracted procedure: k673 
o|contracted procedure: k695 
o|contracted procedure: k928 
o|contracted procedure: k848 
o|contracted procedure: k922 
o|contracted procedure: k851 
o|contracted procedure: k916 
o|contracted procedure: k854 
o|contracted procedure: k910 
o|contracted procedure: k857 
o|contracted procedure: k863 
o|contracted procedure: k873 
o|contracted procedure: k870 
o|contracted procedure: k746 
o|contracted procedure: k756 
o|contracted procedure: k764 
o|contracted procedure: k760 
o|contracted procedure: k724 
o|contracted procedure: k889 
o|contracted procedure: k812 
o|contracted procedure: k818 
o|contracted procedure: k835 
o|contracted procedure: k824 
o|contracted procedure: k831 
o|contracted procedure: k838 
o|contracted procedure: k782 
o|contracted procedure: k957 
o|contracted procedure: k967 
o|contracted procedure: k971 
o|contracted procedure: k986 
o|contracted procedure: k996 
o|contracted procedure: k1000 
o|contracted procedure: k1006 
o|contracted procedure: k1024 
o|contracted procedure: k1033 
o|contracted procedure: k1037 
o|contracted procedure: k1044 
o|contracted procedure: k1064 
o|contracted procedure: k1060 
o|contracted procedure: k1079 
o|contracted procedure: k1088 
o|contracted procedure: k1092 
o|contracted procedure: k1099 
o|contracted procedure: k1114 
o|contracted procedure: k1120 
o|contracted procedure: k1133 
o|contracted procedure: k1137 
o|contracted procedure: k1140 
o|contracted procedure: k1144 
o|contracted procedure: k1148 
o|contracted procedure: k1152 
o|contracted procedure: k1442 
o|contracted procedure: k1307 
o|contracted procedure: k1436 
o|contracted procedure: k1310 
o|contracted procedure: k1430 
o|contracted procedure: k1313 
o|contracted procedure: k1424 
o|contracted procedure: k1316 
o|contracted procedure: k1418 
o|contracted procedure: k1319 
o|contracted procedure: k1412 
o|contracted procedure: k1322 
o|contracted procedure: k1406 
o|contracted procedure: k1325 
o|contracted procedure: k1400 
o|contracted procedure: k1328 
o|contracted procedure: k1346 
o|contracted procedure: k1358 
o|contracted procedure: k1367 
o|contracted procedure: k1382 
o|contracted procedure: k1331 
o|contracted procedure: k1334 
o|contracted procedure: k1500 
o|contracted procedure: k1451 
o|contracted procedure: k1473 
o|contracted procedure: k1454 
o|contracted procedure: k1457 
o|simplifications: ((let . 18)) 
o|removed binding forms: 80 
o|replaced variables: 53 
o|removed binding forms: 24 
o|customizable procedures: (k1126 loop229 loop217 loop208 for-each-loop189199 g165172 for-each-loop164182 loop110 k803 loop118 loop95 doloop103104 loop81 loop73 loop66) 
o|calls to known targets: 29 
o|fast box initializations: 12 
*/
/* end of file */

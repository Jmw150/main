/* Generated from chicken-ffi-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: chicken-ffi-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file chicken-ffi-syntax.c
   unit: chicken_2dffi_2dsyntax
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[95];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,24),40,97,56,52,57,32,102,111,114,109,52,52,50,32,114,52,52,51,32,99,52,52,52,41};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,52,49,54,32,103,52,50,56,52,51,53,41,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,24),40,97,56,57,51,32,102,111,114,109,52,48,56,32,114,52,48,57,32,99,52,49,48,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,55,53,32,103,51,56,55,52,48,49,41,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,24),40,97,57,56,56,32,102,111,114,109,51,54,55,32,114,51,54,56,32,99,51,54,57,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,52,49,32,103,51,53,51,51,54,48,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,25),40,97,49,48,55,57,32,102,111,114,109,51,51,51,32,114,51,51,52,32,99,51,51,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,48,48,32,103,51,49,50,51,50,54,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,25),40,97,49,49,55,52,32,102,111,114,109,50,57,50,32,114,50,57,51,32,99,50,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,53,57,32,103,50,55,49,50,56,53,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,51,48,32,103,50,52,50,50,52,56,41,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,25),40,97,49,50,54,53,32,102,111,114,109,50,49,57,32,114,50,50,48,32,99,50,50,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,25),40,97,49,52,52,49,32,102,111,114,109,50,49,50,32,114,50,49,51,32,99,50,49,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,25),40,97,49,52,53,56,32,102,111,114,109,50,48,53,32,114,50,48,54,32,99,50,48,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,25),40,97,49,52,55,53,32,102,111,114,109,49,57,56,32,114,49,57,57,32,99,50,48,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,25),40,97,49,52,57,54,32,102,111,114,109,49,56,53,32,114,49,56,54,32,99,49,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,25),40,97,49,53,53,56,32,102,111,114,109,49,54,50,32,114,49,54,51,32,99,49,54,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,6),40,103,49,50,53,41,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,25),40,97,49,54,54,51,32,98,49,52,57,32,97,49,53,48,32,114,101,115,116,49,53,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,17),40,97,49,55,48,55,32,98,49,52,55,32,97,49,52,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,49,49,57,32,103,49,51,49,49,51,56,41,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,25),40,97,49,54,50,51,32,102,111,114,109,49,49,49,32,114,49,49,50,32,99,49,49,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,22),40,97,49,55,54,56,32,102,111,114,109,57,51,32,114,57,52,32,99,57,53,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,19),40,97,49,56,52,54,32,120,56,54,32,114,56,55,32,99,56,56,41,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,48,32,103,55,50,55,57,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,51,51,32,103,52,53,53,50,41,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,19),40,97,49,56,54,51,32,102,111,114,109,54,32,114,55,32,99,56,41,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1996)
static void C_ccall f_1996(C_word c,C_word *av) C_noret;
C_noret_decl(f_1336)
static void C_fcall f_1336(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1334)
static void C_ccall f_1334(C_word c,C_word *av) C_noret;
C_noret_decl(f_993)
static void C_ccall f_993(C_word c,C_word *av) C_noret;
C_noret_decl(f_1084)
static void C_ccall f_1084(C_word c,C_word *av) C_noret;
C_noret_decl(f_1601)
static void C_ccall f_1601(C_word c,C_word *av) C_noret;
C_noret_decl(f_1080)
static void C_ccall f_1080(C_word c,C_word *av) C_noret;
C_noret_decl(f_1604)
static void C_ccall f_1604(C_word c,C_word *av) C_noret;
C_noret_decl(f_1607)
static void C_ccall f_1607(C_word c,C_word *av) C_noret;
C_noret_decl(f_972)
static void C_ccall f_972(C_word c,C_word *av) C_noret;
C_noret_decl(f_1610)
static void C_ccall f_1610(C_word c,C_word *av) C_noret;
C_noret_decl(f_1614)
static void C_ccall f_1614(C_word c,C_word *av) C_noret;
C_noret_decl(f_927)
static void C_ccall f_927(C_word c,C_word *av) C_noret;
C_noret_decl(f_1835)
static void C_ccall f_1835(C_word c,C_word *av) C_noret;
C_noret_decl(f_1831)
static void C_ccall f_1831(C_word c,C_word *av) C_noret;
C_noret_decl(f_1370)
static void C_fcall f_1370(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1851)
static void C_ccall f_1851(C_word c,C_word *av) C_noret;
C_noret_decl(f_1788)
static void C_ccall f_1788(C_word c,C_word *av) C_noret;
C_noret_decl(f_1288)
static void C_ccall f_1288(C_word c,C_word *av) C_noret;
C_noret_decl(f_1845)
static void C_ccall f_1845(C_word c,C_word *av) C_noret;
C_noret_decl(f_1795)
static void C_ccall f_1795(C_word c,C_word *av) C_noret;
C_noret_decl(f_1847)
static void C_ccall f_1847(C_word c,C_word *av) C_noret;
C_noret_decl(f_1769)
static void C_ccall f_1769(C_word c,C_word *av) C_noret;
C_noret_decl(f_1767)
static void C_ccall f_1767(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dffi_2dsyntax_toplevel)
C_externexport void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_1937)
static void C_ccall f_1937(C_word c,C_word *av) C_noret;
C_noret_decl(f_1773)
static void C_ccall f_1773(C_word c,C_word *av) C_noret;
C_noret_decl(f_1624)
static void C_ccall f_1624(C_word c,C_word *av) C_noret;
C_noret_decl(f_1622)
static void C_ccall f_1622(C_word c,C_word *av) C_noret;
C_noret_decl(f_1018)
static void C_ccall f_1018(C_word c,C_word *av) C_noret;
C_noret_decl(f_2008)
static void C_fcall f_2008(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1628)
static void C_ccall f_1628(C_word c,C_word *av) C_noret;
C_noret_decl(f_1249)
static void C_ccall f_1249(C_word c,C_word *av) C_noret;
C_noret_decl(f_1279)
static void C_ccall f_1279(C_word c,C_word *av) C_noret;
C_noret_decl(f_1637)
static void C_fcall f_1637(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1276)
static void C_ccall f_1276(C_word c,C_word *av) C_noret;
C_noret_decl(f_1270)
static void C_ccall f_1270(C_word c,C_word *av) C_noret;
C_noret_decl(f_1273)
static void C_fcall f_1273(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1320)
static void C_ccall f_1320(C_word c,C_word *av) C_noret;
C_noret_decl(f_1266)
static void C_ccall f_1266(C_word c,C_word *av) C_noret;
C_noret_decl(f_1264)
static void C_ccall f_1264(C_word c,C_word *av) C_noret;
C_noret_decl(f_1305)
static void C_fcall f_1305(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1950)
static void C_ccall f_1950(C_word c,C_word *av) C_noret;
C_noret_decl(f_1463)
static void C_ccall f_1463(C_word c,C_word *av) C_noret;
C_noret_decl(f_1566)
static void C_ccall f_1566(C_word c,C_word *av) C_noret;
C_noret_decl(f_1563)
static void C_ccall f_1563(C_word c,C_word *av) C_noret;
C_noret_decl(f_1459)
static void C_ccall f_1459(C_word c,C_word *av) C_noret;
C_noret_decl(f_1457)
static void C_ccall f_1457(C_word c,C_word *av) C_noret;
C_noret_decl(f_1559)
static void C_ccall f_1559(C_word c,C_word *av) C_noret;
C_noret_decl(f_1557)
static void C_ccall f_1557(C_word c,C_word *av) C_noret;
C_noret_decl(f_848)
static void C_ccall f_848(C_word c,C_word *av) C_noret;
C_noret_decl(f_844)
static void C_ccall f_844(C_word c,C_word *av) C_noret;
C_noret_decl(f_841)
static void C_ccall f_841(C_word c,C_word *av) C_noret;
C_noret_decl(f_1708)
static void C_ccall f_1708(C_word c,C_word *av) C_noret;
C_noret_decl(f_878)
static void C_ccall f_878(C_word c,C_word *av) C_noret;
C_noret_decl(f_1476)
static void C_ccall f_1476(C_word c,C_word *av) C_noret;
C_noret_decl(f_1474)
static void C_ccall f_1474(C_word c,C_word *av) C_noret;
C_noret_decl(f_1538)
static void C_ccall f_1538(C_word c,C_word *av) C_noret;
C_noret_decl(f_792)
static void C_ccall f_792(C_word c,C_word *av) C_noret;
C_noret_decl(f_796)
static void C_ccall f_796(C_word c,C_word *av) C_noret;
C_noret_decl(f_799)
static void C_ccall f_799(C_word c,C_word *av) C_noret;
C_noret_decl(f_857)
static void C_ccall f_857(C_word c,C_word *av) C_noret;
C_noret_decl(f_854)
static void C_ccall f_854(C_word c,C_word *av) C_noret;
C_noret_decl(f_850)
static void C_ccall f_850(C_word c,C_word *av) C_noret;
C_noret_decl(f_1497)
static void C_ccall f_1497(C_word c,C_word *av) C_noret;
C_noret_decl(f_1495)
static void C_ccall f_1495(C_word c,C_word *av) C_noret;
C_noret_decl(f_1598)
static void C_ccall f_1598(C_word c,C_word *av) C_noret;
C_noret_decl(f_1595)
static void C_ccall f_1595(C_word c,C_word *av) C_noret;
C_noret_decl(f_1446)
static void C_ccall f_1446(C_word c,C_word *av) C_noret;
C_noret_decl(f_1442)
static void C_ccall f_1442(C_word c,C_word *av) C_noret;
C_noret_decl(f_1440)
static void C_ccall f_1440(C_word c,C_word *av) C_noret;
C_noret_decl(f_1589)
static void C_ccall f_1589(C_word c,C_word *av) C_noret;
C_noret_decl(f_1581)
static void C_ccall f_1581(C_word c,C_word *av) C_noret;
C_noret_decl(f_1874)
static void C_fcall f_1874(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1756)
static void C_ccall f_1756(C_word c,C_word *av) C_noret;
C_noret_decl(f_1871)
static void C_fcall f_1871(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1664)
static void C_ccall f_1664(C_word c,C_word *av) C_noret;
C_noret_decl(f_1662)
static void C_ccall f_1662(C_word c,C_word *av) C_noret;
C_noret_decl(f_947)
static void C_fcall f_947(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_941)
static void C_ccall f_941(C_word c,C_word *av) C_noret;
C_noret_decl(f_1890)
static void C_ccall f_1890(C_word c,C_word *av) C_noret;
C_noret_decl(f_1731)
static void C_fcall f_1731(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1133)
static void C_fcall f_1133(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1480)
static void C_ccall f_1480(C_word c,C_word *av) C_noret;
C_noret_decl(f_1862)
static void C_ccall f_1862(C_word c,C_word *av) C_noret;
C_noret_decl(f_1864)
static void C_ccall f_1864(C_word c,C_word *av) C_noret;
C_noret_decl(f_1123)
static void C_ccall f_1123(C_word c,C_word *av) C_noret;
C_noret_decl(f_1127)
static void C_ccall f_1127(C_word c,C_word *av) C_noret;
C_noret_decl(f_2055)
static void C_ccall f_2055(C_word c,C_word *av) C_noret;
C_noret_decl(f_2057)
static void C_fcall f_2057(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_823)
static void C_ccall f_823(C_word c,C_word *av) C_noret;
C_noret_decl(f_898)
static void C_ccall f_898(C_word c,C_word *av) C_noret;
C_noret_decl(f_826)
static void C_ccall f_826(C_word c,C_word *av) C_noret;
C_noret_decl(f_829)
static void C_ccall f_829(C_word c,C_word *av) C_noret;
C_noret_decl(f_1113)
static void C_ccall f_1113(C_word c,C_word *av) C_noret;
C_noret_decl(f_820)
static void C_ccall f_820(C_word c,C_word *av) C_noret;
C_noret_decl(f_1119)
static void C_ccall f_1119(C_word c,C_word *av) C_noret;
C_noret_decl(f_1880)
static void C_ccall f_1880(C_word c,C_word *av) C_noret;
C_noret_decl(f_892)
static void C_ccall f_892(C_word c,C_word *av) C_noret;
C_noret_decl(f_894)
static void C_ccall f_894(C_word c,C_word *av) C_noret;
C_noret_decl(f_1032)
static void C_ccall f_1032(C_word c,C_word *av) C_noret;
C_noret_decl(f_1038)
static void C_fcall f_1038(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_805)
static void C_ccall f_805(C_word c,C_word *av) C_noret;
C_noret_decl(f_802)
static void C_ccall f_802(C_word c,C_word *av) C_noret;
C_noret_decl(f_808)
static void C_ccall f_808(C_word c,C_word *av) C_noret;
C_noret_decl(f_1179)
static void C_ccall f_1179(C_word c,C_word *av) C_noret;
C_noret_decl(f_1175)
static void C_ccall f_1175(C_word c,C_word *av) C_noret;
C_noret_decl(f_1173)
static void C_ccall f_1173(C_word c,C_word *av) C_noret;
C_noret_decl(f_1024)
static void C_ccall f_1024(C_word c,C_word *av) C_noret;
C_noret_decl(f_1980)
static void C_ccall f_1980(C_word c,C_word *av) C_noret;
C_noret_decl(f_1028)
static void C_ccall f_1028(C_word c,C_word *av) C_noret;
C_noret_decl(f_1210)
static void C_ccall f_1210(C_word c,C_word *av) C_noret;
C_noret_decl(f_1214)
static void C_ccall f_1214(C_word c,C_word *av) C_noret;
C_noret_decl(f_1218)
static void C_ccall f_1218(C_word c,C_word *av) C_noret;
C_noret_decl(f_832)
static void C_ccall f_832(C_word c,C_word *av) C_noret;
C_noret_decl(f_835)
static void C_ccall f_835(C_word c,C_word *av) C_noret;
C_noret_decl(f_838)
static void C_ccall f_838(C_word c,C_word *av) C_noret;
C_noret_decl(f_1204)
static void C_ccall f_1204(C_word c,C_word *av) C_noret;
C_noret_decl(f_1522)
static void C_ccall f_1522(C_word c,C_word *av) C_noret;
C_noret_decl(f_1526)
static void C_ccall f_1526(C_word c,C_word *av) C_noret;
C_noret_decl(f_863)
static void C_ccall f_863(C_word c,C_word *av) C_noret;
C_noret_decl(f_860)
static void C_ccall f_860(C_word c,C_word *av) C_noret;
C_noret_decl(f_1158)
static void C_ccall f_1158(C_word c,C_word *av) C_noret;
C_noret_decl(f_1645)
static void C_ccall f_1645(C_word c,C_word *av) C_noret;
C_noret_decl(f_1514)
static void C_fcall f_1514(C_word t0,C_word t1) C_noret;
C_noret_decl(f_933)
static void C_ccall f_933(C_word c,C_word *av) C_noret;
C_noret_decl(f_814)
static void C_ccall f_814(C_word c,C_word *av) C_noret;
C_noret_decl(f_937)
static void C_ccall f_937(C_word c,C_word *av) C_noret;
C_noret_decl(f_817)
static void C_ccall f_817(C_word c,C_word *av) C_noret;
C_noret_decl(f_811)
static void C_ccall f_811(C_word c,C_word *av) C_noret;
C_noret_decl(f_1361)
static void C_ccall f_1361(C_word c,C_word *av) C_noret;
C_noret_decl(f_1078)
static void C_ccall f_1078(C_word c,C_word *av) C_noret;
C_noret_decl(f_1651)
static void C_ccall f_1651(C_word c,C_word *av) C_noret;
C_noret_decl(f_1224)
static void C_fcall f_1224(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1658)
static void C_ccall f_1658(C_word c,C_word *av) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501(C_word c,C_word *av) C_noret;
C_noret_decl(f_1504)
static void C_ccall f_1504(C_word c,C_word *av) C_noret;
C_noret_decl(f_1063)
static void C_ccall f_1063(C_word c,C_word *av) C_noret;
C_noret_decl(f_987)
static void C_ccall f_987(C_word c,C_word *av) C_noret;
C_noret_decl(f_989)
static void C_ccall f_989(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1336)
static void C_ccall trf_1336(C_word c,C_word *av) C_noret;
static void C_ccall trf_1336(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1336(t0,t1,t2);}

C_noret_decl(trf_1370)
static void C_ccall trf_1370(C_word c,C_word *av) C_noret;
static void C_ccall trf_1370(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1370(t0,t1,t2);}

C_noret_decl(trf_2008)
static void C_ccall trf_2008(C_word c,C_word *av) C_noret;
static void C_ccall trf_2008(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2008(t0,t1,t2);}

C_noret_decl(trf_1637)
static void C_ccall trf_1637(C_word c,C_word *av) C_noret;
static void C_ccall trf_1637(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1637(t0,t1);}

C_noret_decl(trf_1273)
static void C_ccall trf_1273(C_word c,C_word *av) C_noret;
static void C_ccall trf_1273(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1273(t0,t1);}

C_noret_decl(trf_1305)
static void C_ccall trf_1305(C_word c,C_word *av) C_noret;
static void C_ccall trf_1305(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1305(t0,t1);}

C_noret_decl(trf_1874)
static void C_ccall trf_1874(C_word c,C_word *av) C_noret;
static void C_ccall trf_1874(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1874(t0,t1);}

C_noret_decl(trf_1871)
static void C_ccall trf_1871(C_word c,C_word *av) C_noret;
static void C_ccall trf_1871(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1871(t0,t1);}

C_noret_decl(trf_947)
static void C_ccall trf_947(C_word c,C_word *av) C_noret;
static void C_ccall trf_947(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_947(t0,t1,t2);}

C_noret_decl(trf_1731)
static void C_ccall trf_1731(C_word c,C_word *av) C_noret;
static void C_ccall trf_1731(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1731(t0,t1,t2);}

C_noret_decl(trf_1133)
static void C_ccall trf_1133(C_word c,C_word *av) C_noret;
static void C_ccall trf_1133(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1133(t0,t1,t2);}

C_noret_decl(trf_2057)
static void C_ccall trf_2057(C_word c,C_word *av) C_noret;
static void C_ccall trf_2057(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2057(t0,t1,t2);}

C_noret_decl(trf_1038)
static void C_ccall trf_1038(C_word c,C_word *av) C_noret;
static void C_ccall trf_1038(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1038(t0,t1,t2);}

C_noret_decl(trf_1514)
static void C_ccall trf_1514(C_word c,C_word *av) C_noret;
static void C_ccall trf_1514(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1514(t0,t1);}

C_noret_decl(trf_1224)
static void C_ccall trf_1224(C_word c,C_word *av) C_noret;
static void C_ccall trf_1224(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1224(t0,t1,t2);}

/* k1994 in k1978 in k2053 in k1948 in k1935 in k1872 in k1869 in a1863 in k794 in k790 */
static void C_ccall f_1996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,1)))){
C_save_and_reclaim((void *)f_1996,2,av);}
a=C_alloc(33);
t2=(C_truep(((C_word*)t0)[2])?C_i_cdddr(((C_word*)t0)[3]):C_i_cddr(((C_word*)t0)[3]));
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,6,lf[87],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],t4);
t6=((C_word*)t0)[9];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[10],((C_word*)t0)[11],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* map-loop259 in k1286 in k1277 in k1274 in k1271 in k1268 in a1265 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_fcall f_1336(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1336,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1361,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[24]+1);
/* chicken-ffi-syntax.scm:220: g282 */
t6=*((C_word*)lf[24]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[26];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1332 in k1318 in k1286 in k1277 in k1274 in k1271 in k1268 in a1265 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_1334,2,av);}
a=C_alloc(6);
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
f_1305(t3,C_a_i_cons(&a,2,((C_word*)t0)[3],t2));}

/* k991 in a988 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_993(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_993,2,av);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1018,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=C_i_cdddr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:263: ##sys#strip-syntax */
t8=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k1082 in a1079 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1084(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1084,2,av);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1113,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=C_i_caddr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:249: ##sys#strip-syntax */
t8=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k1599 in k1596 in k1593 in k1587 in k1579 in k1564 in k1561 in a1558 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1601,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1604,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1614,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[7]);
/* chicken-ffi-syntax.scm:153: string-intersperse */
t5=*((C_word*)lf[61]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[62];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a1079 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1080(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1080,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1084,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:246: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[31];
av2[3]=t2;
av2[4]=lf[33];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k1602 in k1599 in k1596 in k1593 in k1587 in k1579 in k1564 in k1561 in a1558 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1604,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1607,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:151: ##sys#print */
t3=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[60];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1605 in k1602 in k1599 in k1596 in k1593 in k1587 in k1579 in k1564 in k1561 in a1558 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1607,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1610,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:151: get-output-string */
t3=*((C_word*)lf[58]+1);{
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

/* k970 in map-loop416 in k925 in k896 in a893 in k833 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_972,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_947(t6,((C_word*)t0)[5],t5);}

/* k1608 in k1605 in k1602 in k1599 in k1596 in k1593 in k1587 in k1579 in k1564 in k1561 in a1558 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_1610,2,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,lf[46],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,2,lf[57],((C_word*)t0)[3]);
t5=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[8],t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k1612 in k1599 in k1596 in k1593 in k1587 in k1579 in k1564 in k1561 in a1558 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1614,2,av);}
/* chicken-ffi-syntax.scm:151: ##sys#print */
t2=*((C_word*)lf[59]+1);{
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

/* k925 in k896 in a893 in k833 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_927(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_927,2,av);}
a=C_alloc(12);
t2=C_i_check_list_2(t1,lf[21]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_933,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_947,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word)li1),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_947(t7,t3,t1);}

/* k1833 in k1771 in a1768 in k800 in k797 in k794 in k790 */
static void C_ccall f_1835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1835,2,av);}
/* chicken-ffi-syntax.scm:99: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k1829 in k1793 in k1786 in k1771 in a1768 in k800 in k797 in k794 in k790 */
static void C_ccall f_1831(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(48,c,1)))){
C_save_and_reclaim((void *)f_1831,2,av);}
a=C_alloc(48);
t2=C_a_i_list(&a,4,lf[4],((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_list(&a,5,lf[76],((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[4]);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t4=C_u_i_car(((C_word*)t0)[5]);
t5=C_a_i_list(&a,3,lf[77],((C_word*)t0)[2],t4);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_cons(&a,2,t3,t6);
t8=C_a_i_cons(&a,2,t2,t7);
t9=((C_word*)t0)[6];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[7],t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,t2,t4);
t6=((C_word*)t0)[6];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[7],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop230 in k1277 in k1274 in k1271 in k1268 in a1265 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_fcall f_1370(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_1370,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t10=t1;
t11=t8;
t1=t10;
t2=t11;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1849 in a1846 in k797 in k794 in k790 */
static void C_ccall f_1851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_1851,2,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[81],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1786 in k1771 in a1768 in k800 in k797 in k794 in k790 */
static void C_ccall f_1788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1788,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-ffi-syntax.scm:100: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[78];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1286 in k1277 in k1274 in k1271 in k1268 in a1265 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1288(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_1288,2,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1305,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(t1,lf[21]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1320,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1336,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li9),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_1336(t12,t8,t1);}

/* k1843 in k797 in k794 in k790 */
static void C_ccall f_1845(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1845,2,av);}
/* chicken-ffi-syntax.scm:82: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[80];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k1793 in k1786 in k1771 in a1768 in k800 in k797 in k794 in k790 */
static void C_ccall f_1795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1795,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1831,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:101: symbol->string */
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a1846 in k797 in k794 in k790 */
static void C_ccall f_1847(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1847,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1851,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:87: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[80];
av2[3]=t2;
av2[4]=lf[82];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* a1768 in k800 in k797 in k794 in k790 */
static void C_ccall f_1769(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1769,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1773,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:95: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[75];
av2[3]=t2;
av2[4]=lf[79];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k1765 in k800 in k797 in k794 in k790 */
static void C_ccall f_1767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1767,2,av);}
/* chicken-ffi-syntax.scm:90: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[75];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("chicken_2dffi_2dsyntax_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_chicken_2dffi_2dsyntax_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(1104))){
C_save(t1);
C_rereclaim2(1104*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,95);
lf[0]=C_h_intern(&lf[0],33,"\003syschicken-ffi-macro-environment");
lf[1]=C_h_intern(&lf[1],16,"\003sysmacro-subset");
lf[2]=C_h_intern(&lf[2],28,"\003sysextend-macro-environment");
lf[3]=C_h_intern(&lf[3],17,"foreign-type-size");
lf[4]=C_h_intern(&lf[4],28,"\004coredefine-foreign-variable");
lf[5]=C_h_intern(&lf[5],6,"size_t");
lf[6]=C_h_intern(&lf[6],8,"\004corethe");
lf[7]=C_h_intern(&lf[7],6,"fixnum");
lf[8]=C_h_intern(&lf[8],10,"\004corebegin");
lf[9]=C_h_intern(&lf[9],13,"string-append");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000\007sizeof(");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[12]=C_h_intern(&lf[12],33,"\010compilerforeign-type-declaration");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[14]=C_h_intern(&lf[14],6,"gensym");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000\005code_");
lf[16]=C_h_intern(&lf[16],16,"\003sysstrip-syntax");
lf[17]=C_h_intern(&lf[17],16,"\003syscheck-syntax");
lf[18]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[19]=C_h_intern(&lf[19],18,"\003syser-transformer");
lf[20]=C_h_intern(&lf[20],20,"foreign-safe-lambda\052");
lf[21]=C_h_intern(&lf[21],3,"map");
lf[22]=C_h_intern(&lf[22],9,"procedure");
lf[23]=C_h_intern(&lf[23],25,"\004coreforeign-safe-lambda\052");
lf[24]=C_h_intern(&lf[24],36,"\010compilerforeign-type->scrutiny-type");
lf[25]=C_h_intern(&lf[25],6,"result");
lf[26]=C_h_intern(&lf[26],3,"arg");
lf[27]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[28]=C_h_intern(&lf[28],19,"foreign-safe-lambda");
lf[29]=C_h_intern(&lf[29],24,"\004coreforeign-safe-lambda");
lf[30]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[31]=C_h_intern(&lf[31],15,"foreign-lambda\052");
lf[32]=C_h_intern(&lf[32],20,"\004coreforeign-lambda\052");
lf[33]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[34]=C_h_intern(&lf[34],14,"foreign-lambda");
lf[35]=C_h_intern(&lf[35],19,"\004coreforeign-lambda");
lf[36]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[37]=C_h_intern(&lf[37],17,"foreign-primitive");
lf[38]=C_h_intern(&lf[38],22,"\004coreforeign-primitive");
lf[39]=C_h_intern(&lf[39],1,"\052");
lf[40]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[41]=C_h_intern(&lf[41],23,"define-foreign-variable");
lf[42]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[43]=C_h_intern(&lf[43],19,"define-foreign-type");
lf[44]=C_h_intern(&lf[44],24,"\004coredefine-foreign-type");
lf[45]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\002");
lf[46]=C_h_intern(&lf[46],15,"foreign-declare");
lf[47]=C_h_intern(&lf[47],12,"\004coredeclare");
lf[48]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006string\376\377\001\000\000\000\000");
lf[49]=C_h_intern(&lf[49],13,"foreign-value");
lf[50]=C_h_intern(&lf[50],14,"symbol->string");
lf[51]=C_h_intern(&lf[51],12,"syntax-error");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\052bad argument type - not a string or symbol");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\005code_");
lf[54]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[55]=C_h_intern(&lf[55],12,"foreign-code");
lf[56]=C_h_intern(&lf[56],7,"sprintf");
lf[57]=C_h_intern(&lf[57],11,"\004coreinline");
lf[58]=C_h_intern(&lf[58],17,"get-output-string");
lf[59]=C_h_intern(&lf[59],9,"\003sysprint");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000 \012; return C_SCHEME_UNDEFINED; }\012");
lf[61]=C_h_intern(&lf[61],18,"string-intersperse");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\005() { ");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\016static C_word ");
lf[65]=C_h_intern(&lf[65],18,"open-output-string");
lf[66]=C_h_intern(&lf[66],7,"declare");
lf[67]=C_h_intern(&lf[67],5,"code_");
lf[68]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006string\376\377\001\000\000\000\000");
lf[69]=C_h_intern(&lf[69],12,"let-location");
lf[70]=C_h_intern(&lf[70],8,"\004corelet");
lf[71]=C_h_intern(&lf[71],17,"\004corelet-location");
lf[72]=C_h_intern(&lf[72],10,"fold-right");
lf[73]=C_h_intern(&lf[73],10,"append-map");
lf[74]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001\376\377\001\000\000"
"\000\000\376\001\000\000\001_");
lf[75]=C_h_intern(&lf[75],15,"define-location");
lf[76]=C_h_intern(&lf[76],29,"\004coredefine-external-variable");
lf[77]=C_h_intern(&lf[77],9,"\004coreset!");
lf[78]=C_h_intern(&lf[78],5,"begin");
lf[79]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[80]=C_h_intern(&lf[80],8,"location");
lf[81]=C_h_intern(&lf[81],13,"\004corelocation");
lf[82]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010location\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[83]=C_h_intern(&lf[83],15,"define-external");
lf[84]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[85]=C_h_intern(&lf[85],5,"quote");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[87]=C_h_intern(&lf[87],29,"\004coreforeign-callback-wrapper");
lf[88]=C_h_intern(&lf[88],6,"lambda");
lf[89]=C_h_intern(&lf[89],6,"define");
lf[90]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\377\001\000\000\000\000\376"
"\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[91]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376"
"\001\000\000\001_\376\377\001\000\000\000\001");
lf[92]=C_h_intern(&lf[92],21,"\003sysmacro-environment");
lf[93]=C_h_intern(&lf[93],11,"\003sysprovide");
lf[94]=C_h_intern(&lf[94],18,"chicken-ffi-syntax");
C_register_lf2(lf,95,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_792,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:38: ##sys#provide */
t3=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[94];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1935 in k1872 in k1869 in a1863 in k794 in k790 */
static void C_ccall f_1937(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1937,2,av);}
a=C_alloc(8);
t2=(C_truep(((C_word*)t0)[2])?C_i_cadr(((C_word*)t0)[3]):C_i_car(((C_word*)t0)[3]));
t3=t2;
t4=C_i_cdr(t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1950,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:68: r */
t7=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[89];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k1771 in a1768 in k800 in k797 in k794 in k790 */
static void C_ccall f_1773(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1773,2,av);}
a=C_alloc(11);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_u_i_cdr(t8);
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=t11;
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1788,a[2]=t3,a[3]=t5,a[4]=t12,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1835,a[2]=((C_word*)t0)[4],a[3]=t13,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:99: gensym */
t15=*((C_word*)lf[14]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}

/* a1623 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1624(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1624,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1628,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:112: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[69];
av2[3]=t2;
av2[4]=lf[74];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k1620 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1622,2,av);}
/* chicken-ffi-syntax.scm:107: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[69];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k1016 in k991 in a988 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1018(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_1018,2,av);}
a=C_alloc(12);
t2=C_i_check_list_2(t1,lf[21]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1024,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1038,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word)li3),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1038(t7,t3,t1);}

/* map-loop60 in k1978 in k2053 in k1948 in k1935 in k1872 in k1869 in a1863 in k794 in k790 */
static void C_fcall f_2008(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_2008,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t10=t1;
t11=t8;
t1=t10;
t2=t11;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1626 in a1623 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1628(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_1628,2,av);}
a=C_alloc(23);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1637,a[2]=((C_word*)t0)[3],a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
t12=C_i_check_list_2(t3,lf[21]);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1651,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1731,a[2]=t9,a[3]=t15,a[4]=t11,a[5]=t10,a[6]=((C_word)li20),tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_1731(t17,t13,t3);}

/* k1247 in map-loop300 in k1202 in k1177 in a1174 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1249,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1224(t6,((C_word*)t0)[5],t5);}

/* k1277 in k1274 in k1271 in k1268 in a1265 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1279(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_1279,2,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(t1,lf[21]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1288,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1370,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li10),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_1370(t11,t7,t1);}

/* g125 in k1626 in a1623 in k803 in k800 in k797 in k794 in k790 */
static void C_fcall f_1637(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1637,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1645,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:115: gensym */
t3=*((C_word*)lf[14]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1274 in k1271 in k1268 in a1265 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1276,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1279,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(((C_word*)t0)[4])?C_i_caddr(((C_word*)t0)[2]):C_i_cadr(((C_word*)t0)[2]));
/* chicken-ffi-syntax.scm:217: ##sys#strip-syntax */
t5=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1268 in a1265 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1270,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t3))){
t4=C_i_caddr(((C_word*)t0)[2]);
t5=C_i_stringp(t4);
t6=t2;
f_1273(t6,C_i_not(t5));}
else{
t4=t2;
f_1273(t4,C_SCHEME_FALSE);}}

/* k1271 in k1268 in a1265 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_fcall f_1273(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1273,2,t0,t1);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1276,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_car(t5);
/* chicken-ffi-syntax.scm:216: ##sys#strip-syntax */
t7=*((C_word*)lf[16]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t3;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_1276(2,av2);}}}

/* k1318 in k1286 in k1277 in k1274 in k1271 in k1268 in a1265 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1320,2,av);}
a=C_alloc(4);
t2=t1;
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1334,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:223: ##compiler#foreign-type->scrutiny-type */
t4=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[25];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=((C_word*)t0)[3];
f_1305(t3,C_a_i_cons(&a,2,t2,lf[39]));}}

/* a1265 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1266(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1266,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1270,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:214: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[37];
av2[3]=t2;
av2[4]=lf[40];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k1262 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1264,2,av);}
/* chicken-ffi-syntax.scm:209: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[37];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k1303 in k1286 in k1277 in k1274 in k1271 in k1268 in a1265 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_fcall f_1305(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,1)))){
C_save_and_reclaim_args((void *)trf_1305,2,t0,t1);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,lf[22],t1);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[38],t4);
t6=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t6;
av2[1]=C_a_i_list(&a,4,lf[6],t2,C_SCHEME_FALSE,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k1948 in k1935 in k1872 in k1869 in a1863 in k794 in k790 */
static void C_ccall f_1950(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(37,c,3)))){
C_save_and_reclaim((void *)f_1950,2,av);}
a=C_alloc(37);
t2=t1;
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_u_i_car(((C_word*)t0)[2]);
t5=C_a_i_list(&a,2,lf[85],t4);
t6=t5;
t7=(C_truep(((C_word*)t0)[3])?C_i_car(((C_word*)t0)[4]):lf[86]);
t8=t7;
t9=(C_truep(((C_word*)t0)[3])?C_i_caddr(((C_word*)t0)[4]):C_i_cadr(((C_word*)t0)[4]));
t10=C_a_i_list(&a,2,lf[85],t9);
t11=t10;
t12=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t13=t12;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=((C_word*)t14)[1];
t16=C_i_check_list_2(((C_word*)t0)[5],lf[21]);
t17=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2055,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=t8,a[6]=t11,a[7]=((C_word*)t0)[6],a[8]=t2,a[9]=t3,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2057,a[2]=t14,a[3]=t19,a[4]=t15,a[5]=((C_word)li25),tmp=(C_word)a,a+=6,tmp));
t21=((C_word*)t19)[1];
f_2057(t21,t17,((C_word*)t0)[5]);}

/* k1461 in a1458 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1463,2,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[44],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1564 in k1561 in a1558 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1566,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1581,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:149: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[66];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1561 in a1558 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1563,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1566,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:147: gensym */
t3=*((C_word*)lf[14]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[67];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a1458 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1459(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1459,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1463,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:198: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[43];
av2[3]=t2;
av2[4]=lf[45];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k1455 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1457,2,av);}
/* chicken-ffi-syntax.scm:193: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[43];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a1558 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1559(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1559,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1563,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:146: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[55];
av2[3]=t2;
av2[4]=lf[68];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k1555 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1557,2,av);}
/* chicken-ffi-syntax.scm:141: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[55];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k846 in k836 in k833 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_848,2,av);}
/* chicken-ffi-syntax.scm:283: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[3];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k842 in k839 in k836 in k833 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_844,2,av);}
t2=C_mutate2((C_word*)lf[0]+1 /* (set! ##sys#chicken-ffi-macro-environment ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k839 in k836 in k833 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_841(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_841,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_844,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:300: ##sys#macro-subset */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a1707 in k1649 in k1626 in a1623 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1708(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_1708,4,av);}
a=C_alloc(6);
t4=C_i_cddr(t2);
if(C_truep(C_i_pairp(t4))){
t5=t2;
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=C_a_i_cons(&a,2,t3,t7);
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_a_i_list1(&a,1,t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k876 in k861 in k858 in k855 in k852 in a849 in k836 in k833 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 in ... */
static void C_ccall f_878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,1)))){
C_save_and_reclaim((void *)f_878,2,av);}
a=C_alloc(33);
t2=C_a_i_list(&a,4,lf[4],((C_word*)t0)[2],lf[5],t1);
t3=C_a_i_list(&a,4,lf[6],lf[7],C_SCHEME_FALSE,((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[8],t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1475 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1476(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1476,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1480,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:187: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[46];
av2[3]=t2;
av2[4]=lf[48];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k1472 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1474(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1474,2,av);}
/* chicken-ffi-syntax.scm:182: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[46];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k1536 in k1502 in k1499 in a1496 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_1538,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
f_1514(t2,C_a_i_list(&a,4,lf[4],((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k790 */
static void C_ccall f_792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_792,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_796,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:43: ##sys#macro-environment */
t3=*((C_word*)lf[92]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k794 in k790 */
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_796,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_799,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1862,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1864,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:48: ##sys#er-transformer */
t6=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k797 in k794 in k790 */
static void C_ccall f_799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_799,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_802,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1845,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1847,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:85: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k855 in k852 in a849 in k836 in k833 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_857,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_860,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:290: gensym */
t4=*((C_word*)lf[14]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[15];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k852 in a849 in k836 in k833 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_854,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_857,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* chicken-ffi-syntax.scm:289: ##sys#strip-syntax */
t4=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a849 in k836 in k833 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_850(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_850,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_854,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:288: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[3];
av2[3]=t2;
av2[4]=lf[18];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* a1496 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1497(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1497,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1501,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:161: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[49];
av2[3]=t2;
av2[4]=lf[54];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k1493 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1495,2,av);}
/* chicken-ffi-syntax.scm:156: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[49];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k1596 in k1593 in k1587 in k1579 in k1564 in k1561 in a1558 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_1598,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1601,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:151: ##sys#print */
t3=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[63];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1593 in k1587 in k1579 in k1564 in k1561 in a1558 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_1595,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1598,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:151: ##sys#print */
t3=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1444 in a1441 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1446,2,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a1441 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1442(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1442,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1446,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:206: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[41];
av2[3]=t2;
av2[4]=lf[42];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k1438 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1440,2,av);}
/* chicken-ffi-syntax.scm:201: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[41];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k1587 in k1579 in k1564 in k1561 in a1558 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_1589,2,av);}
a=C_alloc(8);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[56]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1595,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:151: ##sys#print */
t6=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[64];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k1579 in k1564 in k1561 in a1558 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1581,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1589,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:151: open-output-string */
t4=*((C_word*)lf[65]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1872 in k1869 in a1863 in k794 in k790 */
static void C_fcall f_1874(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_1874,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1880,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:54: ##sys#check-syntax */
t3=*((C_word*)lf[17]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[83];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[84];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1937,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
/* chicken-ffi-syntax.scm:64: ##sys#check-syntax */
t3=*((C_word*)lf[17]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[83];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[90];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
/* chicken-ffi-syntax.scm:65: ##sys#check-syntax */
t3=*((C_word*)lf[17]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[83];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[91];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}}

/* k1754 in map-loop119 in k1626 in a1623 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1756,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1731(t6,((C_word*)t0)[5],t5);}

/* k1869 in a1863 in k794 in k790 */
static void C_fcall f_1871(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1871,2,t0,t1);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1874,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_1874(t4,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t4=C_u_i_car(((C_word*)t0)[2]);
t5=t3;
f_1874(t5,C_i_symbolp(t4));}
else{
t4=t3;
f_1874(t4,C_SCHEME_FALSE);}}}

/* a1663 in k1656 in k1649 in k1626 in a1623 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1664(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_1664,5,av);}
a=C_alloc(15);
t5=C_i_length(t2);
t6=C_eqp(C_fix(3),t5);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=C_i_cadr(t2);
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_a_i_list(&a,5,lf[71],t7,t8,t3,t4);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t7=C_i_car(t2);
t8=C_i_cadr(t2);
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_a_i_list(&a,4,lf[71],t7,t8,t4);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k1660 in k1656 in k1649 in k1626 in a1623 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_1662,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[70],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop416 in k925 in k896 in a893 in k833 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_fcall f_947(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_947,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_972,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
/* chicken-ffi-syntax.scm:276: ##compiler#foreign-type->scrutiny-type */
t6=*((C_word*)lf[24]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
av2[3]=lf[26];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k939 in k931 in k925 in k896 in a893 in k833 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_941,2,av);}
/* chicken-ffi-syntax.scm:278: ##compiler#foreign-type->scrutiny-type */
t2=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[25];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1888 in k1878 in k1872 in k1869 in a1863 in k794 in k790 */
static void C_ccall f_1890(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(42,c,1)))){
C_save_and_reclaim((void *)f_1890,2,av);}
a=C_alloc(42);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[4],((C_word*)t0)[3],t2);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_car(t4);
t6=C_a_i_list(&a,4,lf[76],((C_word*)t0)[3],t5,C_SCHEME_TRUE);
t7=C_u_i_cdr(((C_word*)t0)[2]);
t8=C_u_i_cdr(t7);
if(C_truep(C_i_pairp(t8))){
t9=C_i_caddr(((C_word*)t0)[2]);
t10=C_a_i_list(&a,3,lf[77],((C_word*)t0)[3],t9);
t11=C_a_i_list(&a,1,t10);
t12=C_a_i_cons(&a,2,t6,t11);
t13=C_a_i_cons(&a,2,t3,t12);
t14=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=C_a_i_cons(&a,2,t1,t13);
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
t9=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t10=C_a_i_cons(&a,2,t3,t9);
t11=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_a_i_cons(&a,2,t1,t10);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}

/* map-loop119 in k1626 in a1623 in k803 in k800 in k797 in k794 in k790 */
static void C_fcall f_1731(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1731,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1756,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:115: g125 */
t4=((C_word*)t0)[4];
f_1637(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop341 in k1111 in k1082 in a1079 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_fcall f_1133(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1133,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1158,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
/* chicken-ffi-syntax.scm:248: ##compiler#foreign-type->scrutiny-type */
t6=*((C_word*)lf[24]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
av2[3]=lf[26];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1478 in a1475 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_1480,2,av);}
a=C_alloc(9);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[46],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[47],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1860 in k794 in k790 */
static void C_ccall f_1862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1862,2,av);}
/* chicken-ffi-syntax.scm:45: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[83];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a1863 in k794 in k790 */
static void C_ccall f_1864(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1864,5,av);}
a=C_alloc(5);
t5=C_i_cdr(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1871,a[2]=t6,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t6))){
t8=C_u_i_car(t6);
t9=t7;
f_1871(t9,C_i_stringp(t8));}
else{
t8=t7;
f_1871(t8,C_SCHEME_FALSE);}}

/* k1121 in k1117 in k1111 in k1082 in a1079 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_1123,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,3,lf[22],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[32],t4);
t6=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_list(&a,4,lf[6],t2,C_SCHEME_FALSE,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k1125 in k1117 in k1111 in k1082 in a1079 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1127,2,av);}
/* chicken-ffi-syntax.scm:250: ##compiler#foreign-type->scrutiny-type */
t2=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[25];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2053 in k1948 in k1935 in k1872 in k1869 in a1863 in k794 in k790 */
static void C_ccall f_2055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_2055,2,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,lf[85],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1980,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-ffi-syntax.scm:74: r */
t5=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[88];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* map-loop33 in k1948 in k1935 in k1872 in k1869 in a1863 in k794 in k790 */
static void C_fcall f_2057(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_2057,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t10=t1;
t11=t8;
t1=t10;
t2=t11;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_823,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_826,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1264,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1266,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:212: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k896 in a893 in k833 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_898(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_898,2,av);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_927,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=C_i_caddr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:277: ##sys#strip-syntax */
t8=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_826,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_829,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1173,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1175,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:230: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_829,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_832,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1078,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1080,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:244: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1111 in k1082 in a1079 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1113(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_1113,2,av);}
a=C_alloc(12);
t2=C_i_check_list_2(t1,lf[21]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1133,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1133(t7,t3,t1);}

/* k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_820,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_823,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1440,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1442,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:204: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1117 in k1111 in k1082 in a1079 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1119,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1123,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1127,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:251: ##sys#strip-syntax */
t6=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k1878 in k1872 in k1869 in a1863 in k794 in k790 */
static void C_ccall f_1880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1880,2,av);}
a=C_alloc(5);
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1890,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:56: r */
t5=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[78];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k890 in k833 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_892,2,av);}
/* chicken-ffi-syntax.scm:269: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[20];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a893 in k833 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_894(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_894,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_898,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:274: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[20];
av2[3]=t2;
av2[4]=lf[27];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k1030 in k1022 in k1016 in k991 in a988 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1032,2,av);}
/* chicken-ffi-syntax.scm:264: ##compiler#foreign-type->scrutiny-type */
t2=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[25];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop375 in k1016 in k991 in a988 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_fcall f_1038(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1038,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1063,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[24]+1);
/* chicken-ffi-syntax.scm:262: g398 */
t6=*((C_word*)lf[24]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[26];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_805,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1622,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1624,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:110: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k800 in k797 in k794 in k790 */
static void C_ccall f_802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_802,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_805,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1767,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1769,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:93: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_808,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_811,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1557,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1559,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:144: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1177 in a1174 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1179(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1179,2,av);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1204,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=C_i_cdddr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:235: ##sys#strip-syntax */
t8=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* a1174 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1175(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1175,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1179,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:232: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[34];
av2[3]=t2;
av2[4]=lf[36];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k1171 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1173,2,av);}
/* chicken-ffi-syntax.scm:227: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[34];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k1022 in k1016 in k991 in a988 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1024,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1028,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1032,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:265: ##sys#strip-syntax */
t6=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k1978 in k2053 in k1948 in k1935 in k1872 in k1869 in a1863 in k794 in k790 */
static void C_ccall f_1980(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_1980,2,av);}
a=C_alloc(25);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1996,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2008,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li24),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_2008(t11,t7,((C_word*)t0)[11]);}

/* k1026 in k1022 in k1016 in k991 in a988 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1028(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_1028,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,3,lf[22],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[29],t4);
t6=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_list(&a,4,lf[6],t2,C_SCHEME_FALSE,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k1208 in k1202 in k1177 in a1174 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1210,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1214,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1218,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:237: ##sys#strip-syntax */
t6=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k1212 in k1208 in k1202 in k1177 in a1174 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_1214,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,3,lf[22],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[35],t4);
t6=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_list(&a,4,lf[6],t2,C_SCHEME_FALSE,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k1216 in k1208 in k1202 in k1177 in a1174 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1218,2,av);}
/* chicken-ffi-syntax.scm:236: ##compiler#foreign-type->scrutiny-type */
t2=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[25];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_832,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_835,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_987,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_989,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:258: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k833 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_835,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_892,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_894,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:272: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k836 in k833 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_838,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_841,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_848,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_850,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:286: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1202 in k1177 in a1174 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1204(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_1204,2,av);}
a=C_alloc(12);
t2=C_i_check_list_2(t1,lf[21]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1210,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1224,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word)li7),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1224(t7,t3,t1);}

/* k1520 in k1512 in k1502 in k1499 in a1496 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_1522,2,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[6],t1,C_SCHEME_FALSE,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[8],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1524 in k1512 in k1502 in k1499 in a1496 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1526,2,av);}
/* chicken-ffi-syntax.scm:174: ##compiler#foreign-type->scrutiny-type */
t2=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[25];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k861 in k858 in k855 in k852 in a849 in k836 in k833 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_863,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_878,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:296: string-append */
t3=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[10];
av2[3]=t1;
av2[4]=lf[11];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k858 in k855 in k852 in a849 in k836 in k833 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_860,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_863,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
f_863(2,av2);}}
else{
/* chicken-ffi-syntax.scm:294: ##compiler#foreign-type-declaration */
t4=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[13];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k1156 in map-loop341 in k1111 in k1082 in a1079 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1158,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1133(t6,((C_word*)t0)[5],t5);}

/* k1643 in g125 in k1626 in a1623 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1645,2,av);}
/* chicken-ffi-syntax.scm:115: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k1512 in k1502 in k1499 in a1496 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_fcall f_1514(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_1514,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1522,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1526,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_caddr(((C_word*)t0)[4]);
/* chicken-ffi-syntax.scm:175: ##sys#strip-syntax */
t6=*((C_word*)lf[16]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k931 in k925 in k896 in a893 in k833 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_933,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_937,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_941,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:279: ##sys#strip-syntax */
t6=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_814,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_817,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1474,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1476,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:185: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k935 in k931 in k925 in k896 in a893 in k833 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_937,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,3,lf[22],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[23],t4);
t6=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_list(&a,4,lf[6],t2,C_SCHEME_FALSE,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_817,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_820,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1457,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1459,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:196: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_811,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_814,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1495,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1497,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:159: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1359 in map-loop259 in k1286 in k1277 in k1274 in k1271 in k1268 in a1265 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1361(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1361,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1336(t6,((C_word*)t0)[5],t5);}

/* k1076 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1078,2,av);}
/* chicken-ffi-syntax.scm:241: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[31];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k1649 in k1626 in a1623 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1651,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1658,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1708,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:117: append-map */
t5=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* map-loop300 in k1202 in k1177 in a1174 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_fcall f_1224(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1224,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1249,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[24]+1);
/* chicken-ffi-syntax.scm:234: g323 */
t6=*((C_word*)lf[24]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[26];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1656 in k1649 in k1626 in a1623 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1658(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_1658,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1662,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1664,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,lf[70],t5);
/* chicken-ffi-syntax.scm:123: fold-right */
t7=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t4;
av2[3]=t6;
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t7+1)))(6,av2);}}

/* k1499 in a1496 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1501,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1504,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:162: gensym */
t3=*((C_word*)lf[14]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[53];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1502 in k1499 in a1496 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1504(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_1504,2,av);}
a=C_alloc(22);
t2=t1;
t3=C_i_cadr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1514,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_i_caddr(((C_word*)t0)[2]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1538,a[2]=t4,a[3]=t2,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_stringp(t3))){
t8=t4;
f_1514(t8,C_a_i_list(&a,4,lf[4],t2,t6,t3));}
else{
if(C_truep(C_i_symbolp(t3))){
/* chicken-ffi-syntax.scm:168: symbol->string */
t8=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
/* chicken-ffi-syntax.scm:170: syntax-error */
t8=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[49];
av2[3]=lf[52];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}}

/* k1061 in map-loop375 in k1016 in k991 in a988 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_1063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1063,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1038(t6,((C_word*)t0)[5],t5);}

/* k985 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_987,2,av);}
/* chicken-ffi-syntax.scm:255: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[28];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a988 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k797 in k794 in k790 */
static void C_ccall f_989(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_989,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_993,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:260: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[28];
av2[3]=t2;
av2[4]=lf[30];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[141] = {
{"f_1996:chicken_2dffi_2dsyntax_2escm",(void*)f_1996},
{"f_1336:chicken_2dffi_2dsyntax_2escm",(void*)f_1336},
{"f_1334:chicken_2dffi_2dsyntax_2escm",(void*)f_1334},
{"f_993:chicken_2dffi_2dsyntax_2escm",(void*)f_993},
{"f_1084:chicken_2dffi_2dsyntax_2escm",(void*)f_1084},
{"f_1601:chicken_2dffi_2dsyntax_2escm",(void*)f_1601},
{"f_1080:chicken_2dffi_2dsyntax_2escm",(void*)f_1080},
{"f_1604:chicken_2dffi_2dsyntax_2escm",(void*)f_1604},
{"f_1607:chicken_2dffi_2dsyntax_2escm",(void*)f_1607},
{"f_972:chicken_2dffi_2dsyntax_2escm",(void*)f_972},
{"f_1610:chicken_2dffi_2dsyntax_2escm",(void*)f_1610},
{"f_1614:chicken_2dffi_2dsyntax_2escm",(void*)f_1614},
{"f_927:chicken_2dffi_2dsyntax_2escm",(void*)f_927},
{"f_1835:chicken_2dffi_2dsyntax_2escm",(void*)f_1835},
{"f_1831:chicken_2dffi_2dsyntax_2escm",(void*)f_1831},
{"f_1370:chicken_2dffi_2dsyntax_2escm",(void*)f_1370},
{"f_1851:chicken_2dffi_2dsyntax_2escm",(void*)f_1851},
{"f_1788:chicken_2dffi_2dsyntax_2escm",(void*)f_1788},
{"f_1288:chicken_2dffi_2dsyntax_2escm",(void*)f_1288},
{"f_1845:chicken_2dffi_2dsyntax_2escm",(void*)f_1845},
{"f_1795:chicken_2dffi_2dsyntax_2escm",(void*)f_1795},
{"f_1847:chicken_2dffi_2dsyntax_2escm",(void*)f_1847},
{"f_1769:chicken_2dffi_2dsyntax_2escm",(void*)f_1769},
{"f_1767:chicken_2dffi_2dsyntax_2escm",(void*)f_1767},
{"toplevel:chicken_2dffi_2dsyntax_2escm",(void*)C_chicken_2dffi_2dsyntax_toplevel},
{"f_1937:chicken_2dffi_2dsyntax_2escm",(void*)f_1937},
{"f_1773:chicken_2dffi_2dsyntax_2escm",(void*)f_1773},
{"f_1624:chicken_2dffi_2dsyntax_2escm",(void*)f_1624},
{"f_1622:chicken_2dffi_2dsyntax_2escm",(void*)f_1622},
{"f_1018:chicken_2dffi_2dsyntax_2escm",(void*)f_1018},
{"f_2008:chicken_2dffi_2dsyntax_2escm",(void*)f_2008},
{"f_1628:chicken_2dffi_2dsyntax_2escm",(void*)f_1628},
{"f_1249:chicken_2dffi_2dsyntax_2escm",(void*)f_1249},
{"f_1279:chicken_2dffi_2dsyntax_2escm",(void*)f_1279},
{"f_1637:chicken_2dffi_2dsyntax_2escm",(void*)f_1637},
{"f_1276:chicken_2dffi_2dsyntax_2escm",(void*)f_1276},
{"f_1270:chicken_2dffi_2dsyntax_2escm",(void*)f_1270},
{"f_1273:chicken_2dffi_2dsyntax_2escm",(void*)f_1273},
{"f_1320:chicken_2dffi_2dsyntax_2escm",(void*)f_1320},
{"f_1266:chicken_2dffi_2dsyntax_2escm",(void*)f_1266},
{"f_1264:chicken_2dffi_2dsyntax_2escm",(void*)f_1264},
{"f_1305:chicken_2dffi_2dsyntax_2escm",(void*)f_1305},
{"f_1950:chicken_2dffi_2dsyntax_2escm",(void*)f_1950},
{"f_1463:chicken_2dffi_2dsyntax_2escm",(void*)f_1463},
{"f_1566:chicken_2dffi_2dsyntax_2escm",(void*)f_1566},
{"f_1563:chicken_2dffi_2dsyntax_2escm",(void*)f_1563},
{"f_1459:chicken_2dffi_2dsyntax_2escm",(void*)f_1459},
{"f_1457:chicken_2dffi_2dsyntax_2escm",(void*)f_1457},
{"f_1559:chicken_2dffi_2dsyntax_2escm",(void*)f_1559},
{"f_1557:chicken_2dffi_2dsyntax_2escm",(void*)f_1557},
{"f_848:chicken_2dffi_2dsyntax_2escm",(void*)f_848},
{"f_844:chicken_2dffi_2dsyntax_2escm",(void*)f_844},
{"f_841:chicken_2dffi_2dsyntax_2escm",(void*)f_841},
{"f_1708:chicken_2dffi_2dsyntax_2escm",(void*)f_1708},
{"f_878:chicken_2dffi_2dsyntax_2escm",(void*)f_878},
{"f_1476:chicken_2dffi_2dsyntax_2escm",(void*)f_1476},
{"f_1474:chicken_2dffi_2dsyntax_2escm",(void*)f_1474},
{"f_1538:chicken_2dffi_2dsyntax_2escm",(void*)f_1538},
{"f_792:chicken_2dffi_2dsyntax_2escm",(void*)f_792},
{"f_796:chicken_2dffi_2dsyntax_2escm",(void*)f_796},
{"f_799:chicken_2dffi_2dsyntax_2escm",(void*)f_799},
{"f_857:chicken_2dffi_2dsyntax_2escm",(void*)f_857},
{"f_854:chicken_2dffi_2dsyntax_2escm",(void*)f_854},
{"f_850:chicken_2dffi_2dsyntax_2escm",(void*)f_850},
{"f_1497:chicken_2dffi_2dsyntax_2escm",(void*)f_1497},
{"f_1495:chicken_2dffi_2dsyntax_2escm",(void*)f_1495},
{"f_1598:chicken_2dffi_2dsyntax_2escm",(void*)f_1598},
{"f_1595:chicken_2dffi_2dsyntax_2escm",(void*)f_1595},
{"f_1446:chicken_2dffi_2dsyntax_2escm",(void*)f_1446},
{"f_1442:chicken_2dffi_2dsyntax_2escm",(void*)f_1442},
{"f_1440:chicken_2dffi_2dsyntax_2escm",(void*)f_1440},
{"f_1589:chicken_2dffi_2dsyntax_2escm",(void*)f_1589},
{"f_1581:chicken_2dffi_2dsyntax_2escm",(void*)f_1581},
{"f_1874:chicken_2dffi_2dsyntax_2escm",(void*)f_1874},
{"f_1756:chicken_2dffi_2dsyntax_2escm",(void*)f_1756},
{"f_1871:chicken_2dffi_2dsyntax_2escm",(void*)f_1871},
{"f_1664:chicken_2dffi_2dsyntax_2escm",(void*)f_1664},
{"f_1662:chicken_2dffi_2dsyntax_2escm",(void*)f_1662},
{"f_947:chicken_2dffi_2dsyntax_2escm",(void*)f_947},
{"f_941:chicken_2dffi_2dsyntax_2escm",(void*)f_941},
{"f_1890:chicken_2dffi_2dsyntax_2escm",(void*)f_1890},
{"f_1731:chicken_2dffi_2dsyntax_2escm",(void*)f_1731},
{"f_1133:chicken_2dffi_2dsyntax_2escm",(void*)f_1133},
{"f_1480:chicken_2dffi_2dsyntax_2escm",(void*)f_1480},
{"f_1862:chicken_2dffi_2dsyntax_2escm",(void*)f_1862},
{"f_1864:chicken_2dffi_2dsyntax_2escm",(void*)f_1864},
{"f_1123:chicken_2dffi_2dsyntax_2escm",(void*)f_1123},
{"f_1127:chicken_2dffi_2dsyntax_2escm",(void*)f_1127},
{"f_2055:chicken_2dffi_2dsyntax_2escm",(void*)f_2055},
{"f_2057:chicken_2dffi_2dsyntax_2escm",(void*)f_2057},
{"f_823:chicken_2dffi_2dsyntax_2escm",(void*)f_823},
{"f_898:chicken_2dffi_2dsyntax_2escm",(void*)f_898},
{"f_826:chicken_2dffi_2dsyntax_2escm",(void*)f_826},
{"f_829:chicken_2dffi_2dsyntax_2escm",(void*)f_829},
{"f_1113:chicken_2dffi_2dsyntax_2escm",(void*)f_1113},
{"f_820:chicken_2dffi_2dsyntax_2escm",(void*)f_820},
{"f_1119:chicken_2dffi_2dsyntax_2escm",(void*)f_1119},
{"f_1880:chicken_2dffi_2dsyntax_2escm",(void*)f_1880},
{"f_892:chicken_2dffi_2dsyntax_2escm",(void*)f_892},
{"f_894:chicken_2dffi_2dsyntax_2escm",(void*)f_894},
{"f_1032:chicken_2dffi_2dsyntax_2escm",(void*)f_1032},
{"f_1038:chicken_2dffi_2dsyntax_2escm",(void*)f_1038},
{"f_805:chicken_2dffi_2dsyntax_2escm",(void*)f_805},
{"f_802:chicken_2dffi_2dsyntax_2escm",(void*)f_802},
{"f_808:chicken_2dffi_2dsyntax_2escm",(void*)f_808},
{"f_1179:chicken_2dffi_2dsyntax_2escm",(void*)f_1179},
{"f_1175:chicken_2dffi_2dsyntax_2escm",(void*)f_1175},
{"f_1173:chicken_2dffi_2dsyntax_2escm",(void*)f_1173},
{"f_1024:chicken_2dffi_2dsyntax_2escm",(void*)f_1024},
{"f_1980:chicken_2dffi_2dsyntax_2escm",(void*)f_1980},
{"f_1028:chicken_2dffi_2dsyntax_2escm",(void*)f_1028},
{"f_1210:chicken_2dffi_2dsyntax_2escm",(void*)f_1210},
{"f_1214:chicken_2dffi_2dsyntax_2escm",(void*)f_1214},
{"f_1218:chicken_2dffi_2dsyntax_2escm",(void*)f_1218},
{"f_832:chicken_2dffi_2dsyntax_2escm",(void*)f_832},
{"f_835:chicken_2dffi_2dsyntax_2escm",(void*)f_835},
{"f_838:chicken_2dffi_2dsyntax_2escm",(void*)f_838},
{"f_1204:chicken_2dffi_2dsyntax_2escm",(void*)f_1204},
{"f_1522:chicken_2dffi_2dsyntax_2escm",(void*)f_1522},
{"f_1526:chicken_2dffi_2dsyntax_2escm",(void*)f_1526},
{"f_863:chicken_2dffi_2dsyntax_2escm",(void*)f_863},
{"f_860:chicken_2dffi_2dsyntax_2escm",(void*)f_860},
{"f_1158:chicken_2dffi_2dsyntax_2escm",(void*)f_1158},
{"f_1645:chicken_2dffi_2dsyntax_2escm",(void*)f_1645},
{"f_1514:chicken_2dffi_2dsyntax_2escm",(void*)f_1514},
{"f_933:chicken_2dffi_2dsyntax_2escm",(void*)f_933},
{"f_814:chicken_2dffi_2dsyntax_2escm",(void*)f_814},
{"f_937:chicken_2dffi_2dsyntax_2escm",(void*)f_937},
{"f_817:chicken_2dffi_2dsyntax_2escm",(void*)f_817},
{"f_811:chicken_2dffi_2dsyntax_2escm",(void*)f_811},
{"f_1361:chicken_2dffi_2dsyntax_2escm",(void*)f_1361},
{"f_1078:chicken_2dffi_2dsyntax_2escm",(void*)f_1078},
{"f_1651:chicken_2dffi_2dsyntax_2escm",(void*)f_1651},
{"f_1224:chicken_2dffi_2dsyntax_2escm",(void*)f_1224},
{"f_1658:chicken_2dffi_2dsyntax_2escm",(void*)f_1658},
{"f_1501:chicken_2dffi_2dsyntax_2escm",(void*)f_1501},
{"f_1504:chicken_2dffi_2dsyntax_2escm",(void*)f_1504},
{"f_1063:chicken_2dffi_2dsyntax_2escm",(void*)f_1063},
{"f_987:chicken_2dffi_2dsyntax_2escm",(void*)f_987},
{"f_989:chicken_2dffi_2dsyntax_2escm",(void*)f_989},
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
S|  sprintf		1
S|  map		9
o|eliminated procedure checks: 98 
o|specializations:
o|  5 (cdr pair)
o|  1 (##sys#check-output-port * * *)
o|  1 (= fixnum fixnum)
o|  1 (cdddr (pair * (pair * pair)))
o|  1 (##sys#check-list (or pair list) *)
o|  3 (cddr (pair * pair))
o|  2 (cadr (pair * pair))
o|  5 (car pair)
(o e)|safe calls: 191 
o|Removed `not' forms: 2 
o|inlining procedure: k949 
o|contracted procedure: "(chicken-ffi-syntax.scm:276) g422431" 
o|inlining procedure: k949 
o|inlining procedure: k1040 
o|contracted procedure: "(chicken-ffi-syntax.scm:262) g381390" 
o|propagated global variable: g398399 ##compiler#foreign-type->scrutiny-type 
o|inlining procedure: k1040 
o|inlining procedure: k1135 
o|contracted procedure: "(chicken-ffi-syntax.scm:248) g347356" 
o|inlining procedure: k1135 
o|inlining procedure: k1226 
o|contracted procedure: "(chicken-ffi-syntax.scm:234) g306315" 
o|propagated global variable: g323324 ##compiler#foreign-type->scrutiny-type 
o|inlining procedure: k1226 
o|contracted procedure: k1325 
o|inlining procedure: k1322 
o|inlining procedure: k1322 
o|inlining procedure: k1338 
o|contracted procedure: "(chicken-ffi-syntax.scm:220) g265274" 
o|propagated global variable: g282283 ##compiler#foreign-type->scrutiny-type 
o|inlining procedure: k1338 
o|inlining procedure: k1372 
o|inlining procedure: k1372 
o|inlining procedure: k1404 
o|inlining procedure: k1404 
o|inlining procedure: k1536 
o|inlining procedure: k1536 
o|substituted constant variable: a1591 
o|substituted constant variable: a1592 
o|removed unused formal parameters: (_136) 
o|inlining procedure: k1666 
o|inlining procedure: k1666 
o|substituted constant variable: a1694 
o|inlining procedure: k1710 
o|inlining procedure: k1710 
o|inlining procedure: k1733 
o|removed unused parameter to known procedure: _136 "(chicken-ffi-syntax.scm:115) g125134" 
o|inlining procedure: k1733 
o|inlining procedure: k1813 
o|inlining procedure: k1813 
o|inlining procedure: k1875 
o|inlining procedure: k1908 
o|inlining procedure: k1908 
o|inlining procedure: k1875 
o|inlining procedure: k1998 
o|inlining procedure: k1998 
o|inlining procedure: k2010 
o|contracted procedure: "(chicken-ffi-syntax.scm:75) g6675" 
o|inlining procedure: k2010 
o|inlining procedure: k2059 
o|contracted procedure: "(chicken-ffi-syntax.scm:73) g3948" 
o|inlining procedure: k2059 
o|inlining procedure: k2091 
o|inlining procedure: k2091 
o|contracted procedure: k2117 
o|inlining procedure: k2120 
o|inlining procedure: k2120 
o|replaced variables: 196 
o|removed binding forms: 84 
o|substituted constant variable: r13232149 
o|substituted constant variable: r13232149 
o|substituted constant variable: r17112166 
o|substituted constant variable: r18142171 
o|substituted constant variable: r18142171 
o|substituted constant variable: r19092176 
o|substituted constant variable: r19092176 
o|substituted constant variable: r21212192 
o|replaced variables: 4 
o|removed binding forms: 213 
o|removed call to pure procedure with unused result: "(chicken-ffi-syntax.scm:115) slot" 
o|replaced variables: 12 
o|removed binding forms: 12 
o|contracted procedure: k1758 
o|removed binding forms: 13 
o|removed binding forms: 1 
o|simplifications: ((if . 6) (##core#call . 197)) 
o|  call simplifications:
o|    null?
o|    length
o|    eq?
o|    symbol?	2
o|    cdr	6
o|    cddr	3
o|    not
o|    list	2
o|    cdddr	3
o|    caddr	9
o|    ##sys#check-list	8
o|    pair?	15
o|    car	10
o|    cons	19
o|    ##sys#setslot	9
o|    ##sys#slot	26
o|    ##sys#cons	23
o|    cadr	16
o|    string?	4
o|    ##sys#list	38
o|contracted procedure: k868 
o|contracted procedure: k872 
o|contracted procedure: k879 
o|contracted procedure: k886 
o|contracted procedure: k913 
o|contracted procedure: k928 
o|contracted procedure: k903 
o|contracted procedure: k907 
o|contracted procedure: k943 
o|contracted procedure: k952 
o|contracted procedure: k955 
o|contracted procedure: k958 
o|contracted procedure: k966 
o|contracted procedure: k974 
o|contracted procedure: k922 
o|contracted procedure: k981 
o|contracted procedure: k1008 
o|contracted procedure: k1019 
o|contracted procedure: k998 
o|contracted procedure: k1002 
o|contracted procedure: k1034 
o|contracted procedure: k1043 
o|contracted procedure: k1046 
o|contracted procedure: k1049 
o|contracted procedure: k1057 
o|contracted procedure: k1065 
o|contracted procedure: k1072 
o|contracted procedure: k1099 
o|contracted procedure: k1114 
o|contracted procedure: k1089 
o|contracted procedure: k1093 
o|contracted procedure: k1129 
o|contracted procedure: k1138 
o|contracted procedure: k1141 
o|contracted procedure: k1144 
o|contracted procedure: k1152 
o|contracted procedure: k1160 
o|contracted procedure: k1108 
o|contracted procedure: k1167 
o|contracted procedure: k1194 
o|contracted procedure: k1205 
o|contracted procedure: k1184 
o|contracted procedure: k1188 
o|contracted procedure: k1220 
o|contracted procedure: k1229 
o|contracted procedure: k1232 
o|contracted procedure: k1235 
o|contracted procedure: k1243 
o|contracted procedure: k1251 
o|contracted procedure: k1258 
o|contracted procedure: k1280 
o|contracted procedure: k1283 
o|contracted procedure: k1293 
o|contracted procedure: k1297 
o|contracted procedure: k1307 
o|contracted procedure: k1315 
o|contracted procedure: k1322 
o|contracted procedure: k1341 
o|contracted procedure: k1344 
o|contracted procedure: k1347 
o|contracted procedure: k1355 
o|contracted procedure: k1363 
o|contracted procedure: k1375 
o|contracted procedure: k1397 
o|contracted procedure: k1393 
o|contracted procedure: k1378 
o|contracted procedure: k1381 
o|contracted procedure: k1389 
o|contracted procedure: k1404 
o|contracted procedure: k1434 
o|contracted procedure: k1419 
o|contracted procedure: k1430 
o|contracted procedure: k1426 
o|contracted procedure: k1451 
o|contracted procedure: k1468 
o|contracted procedure: k1489 
o|contracted procedure: k1485 
o|contracted procedure: k1505 
o|contracted procedure: k1516 
o|contracted procedure: k1528 
o|contracted procedure: k1532 
o|contracted procedure: k1539 
o|contracted procedure: k1545 
o|contracted procedure: k1583 
o|contracted procedure: k1571 
o|contracted procedure: k1575 
o|contracted procedure: k1616 
o|contracted procedure: k1629 
o|contracted procedure: k1634 
o|contracted procedure: k1646 
o|contracted procedure: k1696 
o|contracted procedure: k1669 
o|contracted procedure: k1676 
o|contracted procedure: k1680 
o|contracted procedure: k1687 
o|contracted procedure: k1691 
o|contracted procedure: k1704 
o|contracted procedure: k1700 
o|contracted procedure: k1727 
o|contracted procedure: k1713 
o|contracted procedure: k1720 
o|contracted procedure: k1736 
o|contracted procedure: k1739 
o|contracted procedure: k1742 
o|contracted procedure: k1750 
o|contracted procedure: k1774 
o|contracted procedure: k1777 
o|contracted procedure: k1836 
o|contracted procedure: k1783 
o|contracted procedure: k1801 
o|contracted procedure: k1797 
o|contracted procedure: k1809 
o|contracted procedure: k1816 
o|contracted procedure: k1823 
o|contracted procedure: k1813 
o|contracted procedure: k1856 
o|contracted procedure: k1866 
o|contracted procedure: k1881 
o|contracted procedure: k1932 
o|contracted procedure: k1896 
o|contracted procedure: k1892 
o|contracted procedure: k1904 
o|contracted procedure: k1911 
o|contracted procedure: k1922 
o|contracted procedure: k1918 
o|contracted procedure: k1908 
o|contracted procedure: k1938 
o|contracted procedure: k1941 
o|contracted procedure: k1958 
o|contracted procedure: k1962 
o|contracted procedure: k2091 
o|contracted procedure: k1966 
o|contracted procedure: k2042 
o|contracted procedure: k2050 
o|contracted procedure: k1970 
o|contracted procedure: k1986 
o|contracted procedure: k1998 
o|contracted procedure: k1982 
o|contracted procedure: k1974 
o|contracted procedure: k1954 
o|contracted procedure: k2013 
o|contracted procedure: k2035 
o|contracted procedure: k2031 
o|contracted procedure: k2016 
o|contracted procedure: k2019 
o|contracted procedure: k2027 
o|contracted procedure: k2062 
o|contracted procedure: k2084 
o|contracted procedure: k2080 
o|contracted procedure: k2065 
o|contracted procedure: k2068 
o|contracted procedure: k2076 
o|contracted procedure: k2123 
o|contracted procedure: k2131 
o|simplifications: ((let . 18)) 
o|removed binding forms: 154 
o|inlining procedure: k1805 
o|inlining procedure: k1805 
o|inlining procedure: k1900 
o|inlining procedure: k1900 
o|replaced variables: 57 
o|removed binding forms: 36 
o|replaced variables: 6 
o|removed binding forms: 3 
o|customizable procedures: (k1869 k1872 map-loop3351 map-loop6078 g125134 map-loop119137 k1512 k1271 map-loop230247 map-loop259284 k1303 map-loop300325 map-loop341359 map-loop375400 map-loop416434) 
o|calls to known targets: 32 
o|identified direct recursive calls: f_1370 1 
o|identified direct recursive calls: f_2008 1 
o|identified direct recursive calls: f_2057 1 
o|fast box initializations: 9 
*/
/* end of file */

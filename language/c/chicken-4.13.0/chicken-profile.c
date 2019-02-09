/* Generated from chicken-profile.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: chicken-profile.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -output-file chicken-profile.c
   used units: library eval chicken_2dsyntax srfi_2d1 srfi_2d13 srfi_2d69 posix utils
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d69_toplevel)
C_externimport void C_ccall C_srfi_2d69_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[95];
static double C_possibly_force_alignment;


C_noret_decl(f_777)
static void C_ccall f_777(C_word c,C_word *av) C_noret;
C_noret_decl(f_658)
static void C_ccall f_658(C_word c,C_word *av) C_noret;
C_noret_decl(f_767)
static void C_ccall f_767(C_word c,C_word *av) C_noret;
C_noret_decl(f_769)
static void C_ccall f_769(C_word c,C_word *av) C_noret;
C_noret_decl(f_1013)
static void C_ccall f_1013(C_word c,C_word *av) C_noret;
C_noret_decl(f_1494)
static void C_ccall f_1494(C_word c,C_word *av) C_noret;
C_noret_decl(f_1263)
static void C_ccall f_1263(C_word c,C_word *av) C_noret;
C_noret_decl(f_751)
static void C_ccall f_751(C_word c,C_word *av) C_noret;
C_noret_decl(f_1352)
static void C_ccall f_1352(C_word c,C_word *av) C_noret;
C_noret_decl(f_754)
static void C_ccall f_754(C_word c,C_word *av) C_noret;
C_noret_decl(f_1486)
static void C_ccall f_1486(C_word c,C_word *av) C_noret;
C_noret_decl(f_1484)
static void C_ccall f_1484(C_word c,C_word *av) C_noret;
C_noret_decl(f_1481)
static void C_ccall f_1481(C_word c,C_word *av) C_noret;
C_noret_decl(f_1348)
static void C_ccall f_1348(C_word c,C_word *av) C_noret;
C_noret_decl(f_1340)
static void C_ccall f_1340(C_word c,C_word *av) C_noret;
C_noret_decl(f_1376)
static void C_ccall f_1376(C_word c,C_word *av) C_noret;
C_noret_decl(f_1472)
static void C_ccall f_1472(C_word c,C_word *av) C_noret;
C_noret_decl(f_1074)
static void C_fcall f_1074(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1372)
static void C_ccall f_1372(C_word c,C_word *av) C_noret;
C_noret_decl(f_1469)
static void C_ccall f_1469(C_word c,C_word *av) C_noret;
C_noret_decl(f_1364)
static void C_ccall f_1364(C_word c,C_word *av) C_noret;
C_noret_decl(f_1812)
static void C_fcall f_1812(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1450)
static void C_ccall f_1450(C_word c,C_word *av) C_noret;
C_noret_decl(f_1054)
static void C_ccall f_1054(C_word c,C_word *av) C_noret;
C_noret_decl(f_1446)
static void C_ccall f_1446(C_word c,C_word *av) C_noret;
C_noret_decl(f_854)
static void C_ccall f_854(C_word c,C_word *av) C_noret;
C_noret_decl(f_1050)
static void C_ccall f_1050(C_word c,C_word *av) C_noret;
C_noret_decl(f_1442)
static void C_ccall f_1442(C_word c,C_word *av) C_noret;
C_noret_decl(f_986)
static void C_ccall f_986(C_word c,C_word *av) C_noret;
C_noret_decl(f_1084)
static void C_ccall f_1084(C_word c,C_word *av) C_noret;
C_noret_decl(f_884)
static void C_ccall f_884(C_word c,C_word *av) C_noret;
C_noret_decl(f_1282)
static void C_ccall f_1282(C_word c,C_word *av) C_noret;
C_noret_decl(f_951)
static void C_ccall f_951(C_word c,C_word *av) C_noret;
C_noret_decl(f_1117)
static void C_ccall f_1117(C_word c,C_word *av) C_noret;
C_noret_decl(f_1113)
static void C_ccall f_1113(C_word c,C_word *av) C_noret;
C_noret_decl(f_862)
static void C_ccall f_862(C_word c,C_word *av) C_noret;
C_noret_decl(f_1170)
static void C_ccall f_1170(C_word c,C_word *av) C_noret;
C_noret_decl(f_869)
static void C_ccall f_869(C_word c,C_word *av) C_noret;
C_noret_decl(f_1127)
static void C_ccall f_1127(C_word c,C_word *av) C_noret;
C_noret_decl(f_1593)
static void C_ccall f_1593(C_word c,C_word *av) C_noret;
C_noret_decl(f_1214)
static void C_fcall f_1214(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1799)
static void C_ccall f_1799(C_word c,C_word *av) C_noret;
C_noret_decl(f_744)
static void C_fcall f_744(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1683)
static void C_ccall f_1683(C_word c,C_word *av) C_noret;
C_noret_decl(f_1042)
static void C_ccall f_1042(C_word c,C_word *av) C_noret;
C_noret_decl(f_1583)
static void C_fcall f_1583(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1192)
static void C_ccall f_1192(C_word c,C_word *av) C_noret;
C_noret_decl(f_920)
static void C_ccall f_920(C_word c,C_word *av) C_noret;
C_noret_decl(f_1919)
static void C_ccall f_1919(C_word c,C_word *av) C_noret;
C_noret_decl(f_847)
static void C_ccall f_847(C_word c,C_word *av) C_noret;
C_noret_decl(f_734)
static void C_fcall f_734(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1109)
static void C_ccall f_1109(C_word c,C_word *av) C_noret;
C_noret_decl(f_1780)
static void C_ccall f_1780(C_word c,C_word *av) C_noret;
C_noret_decl(f_1140)
static void C_ccall f_1140(C_word c,C_word *av) C_noret;
C_noret_decl(f_1898)
static void C_fcall f_1898(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1947)
static void C_ccall f_1947(C_word c,C_word *av) C_noret;
C_noret_decl(f_1702)
static void C_fcall f_1702(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_926)
static void C_fcall f_926(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1131)
static void C_ccall f_1131(C_word c,C_word *av) C_noret;
C_noret_decl(f_1202)
static void C_ccall f_1202(C_word c,C_word *av) C_noret;
C_noret_decl(f_1204)
static void C_fcall f_1204(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1936)
static void C_ccall f_1936(C_word c,C_word *av) C_noret;
C_noret_decl(f_829)
static void C_ccall f_829(C_word c,C_word *av) C_noret;
C_noret_decl(f_826)
static void C_ccall f_826(C_word c,C_word *av) C_noret;
C_noret_decl(f_1542)
static void C_ccall f_1542(C_word c,C_word *av) C_noret;
C_noret_decl(f_1654)
static void C_fcall f_1654(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1147)
static void C_ccall f_1147(C_word c,C_word *av) C_noret;
C_noret_decl(f_1572)
static void C_ccall f_1572(C_word c,C_word *av) C_noret;
C_noret_decl(f_1516)
static void C_fcall f_1516(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1134)
static void C_ccall f_1134(C_word c,C_word *av) C_noret;
C_noret_decl(f_806)
static void C_fcall f_806(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1151)
static void C_ccall f_1151(C_word c,C_word *av) C_noret;
C_noret_decl(f_1803)
static void C_ccall f_1803(C_word c,C_word *av) C_noret;
C_noret_decl(f_1163)
static void C_ccall f_1163(C_word c,C_word *av) C_noret;
C_noret_decl(f_1746)
static void C_fcall f_1746(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1575)
static void C_ccall f_1575(C_word c,C_word *av) C_noret;
C_noret_decl(f_1608)
static void C_ccall f_1608(C_word c,C_word *av) C_noret;
C_noret_decl(f_1329)
static void C_fcall f_1329(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1153)
static void C_fcall f_1153(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1771)
static void C_ccall f_1771(C_word c,C_word *av) C_noret;
C_noret_decl(f_1889)
static void C_ccall f_1889(C_word c,C_word *av) C_noret;
C_noret_decl(f_1837)
static void C_fcall f_1837(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1830)
static void C_fcall f_1830(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1438)
static void C_ccall f_1438(C_word c,C_word *av) C_noret;
C_noret_decl(f_1434)
static void C_ccall f_1434(C_word c,C_word *av) C_noret;
C_noret_decl(f_1864)
static void C_fcall f_1864(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1862)
static void C_ccall f_1862(C_word c,C_word *av) C_noret;
C_noret_decl(f_1630)
static void C_ccall f_1630(C_word c,C_word *av) C_noret;
C_noret_decl(f_1409)
static void C_fcall f_1409(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1406)
static void C_ccall f_1406(C_word c,C_word *av) C_noret;
C_noret_decl(f_1403)
static void C_ccall f_1403(C_word c,C_word *av) C_noret;
C_noret_decl(f_691)
static void C_ccall f_691(C_word c,C_word *av) C_noret;
C_noret_decl(f_698)
static void C_ccall f_698(C_word c,C_word *av) C_noret;
C_noret_decl(f_1509)
static void C_fcall f_1509(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1507)
static void C_ccall f_1507(C_word c,C_word *av) C_noret;
C_noret_decl(f_1950)
static void C_ccall f_1950(C_word c,C_word *av) C_noret;
C_noret_decl(f_1616)
static void C_ccall f_1616(C_word c,C_word *av) C_noret;
C_noret_decl(f_1643)
static void C_ccall f_1643(C_word c,C_word *av) C_noret;
C_noret_decl(f_1953)
static void C_ccall f_1953(C_word c,C_word *av) C_noret;
C_noret_decl(f_1957)
static void C_ccall f_1957(C_word c,C_word *av) C_noret;
C_noret_decl(f_1427)
static void C_ccall f_1427(C_word c,C_word *av) C_noret;
C_noret_decl(f_1927)
static void C_ccall f_1927(C_word c,C_word *av) C_noret;
C_noret_decl(f_687)
static void C_fcall f_687(C_word t0) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_1393)
static void C_ccall f_1393(C_word c,C_word *av) C_noret;
C_noret_decl(f_670)
static void C_ccall f_670(C_word c,C_word *av) C_noret;
C_noret_decl(f_673)
static void C_ccall f_673(C_word c,C_word *av) C_noret;
C_noret_decl(f_1390)
static void C_ccall f_1390(C_word c,C_word *av) C_noret;
C_noret_decl(f_679)
static void C_ccall f_679(C_word c,C_word *av) C_noret;
C_noret_decl(f_676)
static void C_ccall f_676(C_word c,C_word *av) C_noret;
C_noret_decl(f_787)
static void C_fcall f_787(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1384)
static void C_ccall f_1384(C_word c,C_word *av) C_noret;
C_noret_decl(f_661)
static void C_ccall f_661(C_word c,C_word *av) C_noret;
C_noret_decl(f_664)
static void C_ccall f_664(C_word c,C_word *av) C_noret;
C_noret_decl(f_781)
static void C_ccall f_781(C_word c,C_word *av) C_noret;
C_noret_decl(f_667)
static void C_ccall f_667(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1074)
static void C_ccall trf_1074(C_word c,C_word *av) C_noret;
static void C_ccall trf_1074(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1074(t0,t1,t2);}

C_noret_decl(trf_1812)
static void C_ccall trf_1812(C_word c,C_word *av) C_noret;
static void C_ccall trf_1812(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1812(t0,t1,t2);}

C_noret_decl(trf_1214)
static void C_ccall trf_1214(C_word c,C_word *av) C_noret;
static void C_ccall trf_1214(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1214(t0,t1);}

C_noret_decl(trf_744)
static void C_ccall trf_744(C_word c,C_word *av) C_noret;
static void C_ccall trf_744(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_744(t0,t1);}

C_noret_decl(trf_1583)
static void C_ccall trf_1583(C_word c,C_word *av) C_noret;
static void C_ccall trf_1583(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1583(t0,t1,t2);}

C_noret_decl(trf_734)
static void C_ccall trf_734(C_word c,C_word *av) C_noret;
static void C_ccall trf_734(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_734(t0,t1,t2);}

C_noret_decl(trf_1898)
static void C_ccall trf_1898(C_word c,C_word *av) C_noret;
static void C_ccall trf_1898(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1898(t0,t1,t2,t3);}

C_noret_decl(trf_1702)
static void C_ccall trf_1702(C_word c,C_word *av) C_noret;
static void C_ccall trf_1702(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1702(t0,t1,t2);}

C_noret_decl(trf_926)
static void C_ccall trf_926(C_word c,C_word *av) C_noret;
static void C_ccall trf_926(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_926(t0,t1);}

C_noret_decl(trf_1204)
static void C_ccall trf_1204(C_word c,C_word *av) C_noret;
static void C_ccall trf_1204(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1204(t0,t1,t2,t3);}

C_noret_decl(trf_1654)
static void C_ccall trf_1654(C_word c,C_word *av) C_noret;
static void C_ccall trf_1654(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1654(t0,t1,t2,t3);}

C_noret_decl(trf_1516)
static void C_ccall trf_1516(C_word c,C_word *av) C_noret;
static void C_ccall trf_1516(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1516(t0,t1);}

C_noret_decl(trf_806)
static void C_ccall trf_806(C_word c,C_word *av) C_noret;
static void C_ccall trf_806(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_806(t0,t1);}

C_noret_decl(trf_1746)
static void C_ccall trf_1746(C_word c,C_word *av) C_noret;
static void C_ccall trf_1746(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1746(t0,t1,t2);}

C_noret_decl(trf_1329)
static void C_ccall trf_1329(C_word c,C_word *av) C_noret;
static void C_ccall trf_1329(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1329(t0,t1,t2);}

C_noret_decl(trf_1153)
static void C_ccall trf_1153(C_word c,C_word *av) C_noret;
static void C_ccall trf_1153(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1153(t0,t1,t2);}

C_noret_decl(trf_1837)
static void C_ccall trf_1837(C_word c,C_word *av) C_noret;
static void C_ccall trf_1837(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1837(t0,t1);}

C_noret_decl(trf_1830)
static void C_ccall trf_1830(C_word c,C_word *av) C_noret;
static void C_ccall trf_1830(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1830(t0,t1);}

C_noret_decl(trf_1864)
static void C_ccall trf_1864(C_word c,C_word *av) C_noret;
static void C_ccall trf_1864(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1864(t0,t1,t2);}

C_noret_decl(trf_1409)
static void C_ccall trf_1409(C_word c,C_word *av) C_noret;
static void C_ccall trf_1409(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1409(t0,t1);}

C_noret_decl(trf_1509)
static void C_ccall trf_1509(C_word c,C_word *av) C_noret;
static void C_ccall trf_1509(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1509(t0,t1,t2,t3,t4);}

C_noret_decl(trf_687)
static void C_ccall trf_687(C_word c,C_word *av) C_noret;
static void C_ccall trf_687(C_word c,C_word *av){
C_word t0=av[0];
f_687(t0);}

C_noret_decl(trf_787)
static void C_ccall trf_787(C_word c,C_word *av) C_noret;
static void C_ccall trf_787(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_787(t0,t1);}

/* k775 in a768 in k749 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_777,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_781,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:80: file-modification-time */
t4=C_fast_retrieve(lf[71]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k656 */
static void C_ccall f_658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_658,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_661,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k765 in k749 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_767,2,av);}
t2=C_i_car(t1);
t3=C_mutate2(&lf[0] /* (set! file ...) */,t2);
t4=((C_word*)t0)[2];
f_744(t4,t3);}

/* a768 in k749 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_769(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_769,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_777,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:79: file-modification-time */
t5=C_fast_retrieve(lf[71]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* sort-by-avg in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1013(C_word c,C_word *av){
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
C_word t14;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1013,4,av);}
t4=C_i_cadddr(t2);
t5=C_i_cadddr(t3);
if(C_truep(C_i_eqvp(t4,t5))){
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_u_i_car(t8);
t10=t3;
t11=C_u_i_cdr(t10);
t12=C_u_i_cdr(t11);
t13=C_u_i_car(t12);
t14=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=C_i_greaterp(t9,t13);
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_i_greaterp(t4,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k1492 in print-row in k1482 in k1479 in k1470 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 in ... */
static void C_ccall f_1494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1494,2,av);}
/* chicken-profile.scm:239: print */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* format-string in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_1263,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+5);
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_make_character(32):C_i_car(t9));
t12=C_i_nullp(t9);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t14=C_i_string_length(t2);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1282,a[2]=t7,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t16=C_fixnum_difference(t3,t14);
t17=C_i_fixnum_max(C_fix(0),t16);
/* chicken-profile.scm:169: make-string */
t18=*((C_word*)lf[33]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t18;
av2[1]=t15;
av2[2]=t17;
av2[3]=t11;
((C_proc)(void*)(*((C_word*)t18+1)))(4,av2);}}

/* k749 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_751(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_751,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_754,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t1))){
/* chicken-profile.scm:76: error */
t3=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[70];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_767,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_769,tmp=(C_word)a,a+=2,tmp);
/* chicken-profile.scm:77: sort */
t5=C_fast_retrieve(lf[65]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k1350 in k1338 in k1382 in format-real in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1352,2,av);}
a=C_alloc(4);
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* chicken-profile.scm:179: substring */
t3=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=C_fix(1);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k752 in k749 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_754,2,av);}
t2=C_mutate2(&lf[0] /* (set! file ...) */,t1);
t3=((C_word*)t0)[2];
f_744(t3,t2);}

/* print-row in k1482 in k1479 in k1470 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1486(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,5)))){
C_save_and_reclaim((void *)f_1486,3,av);}
a=C_alloc(20);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1494,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=lf[31];
t9=C_i_check_list_2(t2,lf[25]);
t10=C_i_check_list_2(((C_word*)t0)[2],lf[25]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1507,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1509,a[2]=t6,a[3]=t13,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_1509(t15,t11,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k1482 in k1479 in k1470 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_1484,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1486,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1572,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-profile.scm:240: print-row */
t5=t3;{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
f_1486(3,av2);}}

/* k1479 in k1470 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1481(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_1481,2,av);}
a=C_alloc(27);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1484,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1630,tmp=(C_word)a,a+=2,tmp);
t5=C_a_i_list5(&a,5,C_fix(0),C_fix(0),C_fix(0),C_fix(0),C_fix(0));
t6=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1]);
/* chicken-profile.scm:233: fold */
t7=C_fast_retrieve(lf[56]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k1346 in k1338 in k1382 in format-real in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1348,2,av);}
/* chicken-profile.scm:176: string-append */
t2=*((C_word*)lf[37]+1);{
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
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k1338 in k1382 in format-real in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1340(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_1340,2,av);}
a=C_alloc(16);
t2=t1;
t3=C_i_greaterp(((C_word*)t0)[2],C_fix(0));
t4=(C_truep(t3)?lf[35]:lf[36]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1348,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1352,a[2]=((C_word*)t0)[2],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1364,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1372,a[2]=t8,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:183: - */
t10=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* k1374 in k1370 in k1338 in k1382 in format-real in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1376,2,av);}
a=C_alloc(4);
t2=C_a_i_times(&a,2,((C_word*)t0)[2],t1);
/* chicken-profile.scm:182: truncate */
t3=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1470 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1472(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(36,c,3)))){
C_save_and_reclaim((void *)f_1472,2,av);}
a=C_alloc(36);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_a_i_list5(&a,5,lf[45],lf[46],lf[47],lf[48],lf[49]);
t4=t3;
t5=C_a_i_list5(&a,5,C_SCHEME_FALSE,C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1481,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[57]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=t7;
av2[2]=C_fix(2);
av2[3]=C_make_character(32);
tp(4,av2);}}

/* arg-digit in k918 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_fcall f_1074(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_1074,3,t0,t1,t2);}
a=C_alloc(9);
t3=C_i_string_ref(((C_word*)t0)[2],t2);
t4=C_fix(C_character_code(t3));
t5=C_a_i_minus(&a,2,t4,C_fix(48));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1084,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:146: <= */{
C_word av2[5];
av2[0]=0;
av2[1]=t7;
av2[2]=C_fix(0);
av2[3]=t6;
av2[4]=C_fix(9);
C_less_or_equal_p(5,av2);}}

/* k1370 in k1338 in k1382 in format-real in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1372,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1376,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:183: expt */
t4=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1469(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1469,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1472,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1746,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1746(t6,t2,t1);}

/* k1362 in k1338 in k1382 in format-real in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1364,2,av);}
t2=C_i_inexact_to_exact(t1);
/* ##sys#fixnum->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[39]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
tp(3,av2);}}

/* g165 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_fcall f_1812(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_1812,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_cadr(t2);
t4=C_i_caddr(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1830,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t7=C_i_greaterp(t3,C_fix(0));
t8=t6;
f_1830(t8,(C_truep(t7)?C_a_i_divide(&a,2,t5,t3):C_SCHEME_FALSE));}
else{
t7=t6;
f_1830(t7,C_SCHEME_FALSE);}}

/* k1448 in k1444 in k1440 in k1436 in k1432 in k1425 in map-loop197 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in ... */
static void C_ccall f_1450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_1450,2,av);}
a=C_alloc(15);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list5(&a,5,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1052 in k1048 in sort-by-name in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1054,2,av);}
/* chicken-profile.scm:136: string<? */
t2=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1444 in k1440 in k1436 in k1432 in k1425 in map-loop197 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in ... */
static void C_ccall f_1446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1446,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1450,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-profile.scm:223: format-real */
f_1329(t3,((C_word*)t0)[6],lf[4]);}

/* k852 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_854,2,av);}
/* chicken-profile.scm:96: print */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[80];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1048 in sort-by-name in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1050(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1050,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1054,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(((C_word*)t0)[3]);
/* chicken-profile.scm:136: symbol->string */
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

/* k1440 in k1436 in k1432 in k1425 in map-loop197 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 in ... */
static void C_ccall f_1442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1442,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_a_i_divide(&a,2,((C_word*)t0)[6],C_fix(1000));
/* chicken-profile.scm:222: format-real */
f_1329(t3,t4,lf[3]);}

/* sort-by-time in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_986(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_986,4,av);}
t4=C_i_caddr(t2);
t5=C_i_caddr(t3);
if(C_truep(C_i_nequalp(t4,t5))){
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_u_i_car(t7);
t9=t3;
t10=C_u_i_cdr(t9);
t11=C_u_i_car(t10);
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_i_greaterp(t8,t11);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_i_greaterp(t4,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k1082 in arg-digit in k918 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1084,2,av);}
if(C_truep(t1)){
t2=C_i_nequalp(((C_word*)t0)[2],C_fix(9));
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(C_truep(t2)?C_fix(8):((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* chicken-profile.scm:148: error */
t2=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[91];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k882 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_884,2,av);}
t2=C_mutate2(&lf[5] /* (set! top ...) */,t1);
/* chicken-profile.scm:112: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_734(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k1280 in format-string in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1282,2,av);}
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[32]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[32]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=t2;
tp(4,av2);}}
else{
t2=((C_word*)t0)[3];
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[32]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[32]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
av2[3]=t1;
tp(4,av2);}}}

/* sort-by-calls in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_951(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_951,4,av);}
t4=C_i_cadr(t2);
t5=C_i_cadr(t3);
if(C_truep(C_i_eqvp(t4,t5))){
t6=C_i_caddr(t2);
t7=C_i_caddr(t3);
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_i_greaterp(t6,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=(C_truep(t4)?(C_truep(t5)?C_i_greaterp(t4,t5):C_SCHEME_TRUE):C_SCHEME_TRUE);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k1115 in k1111 in k1107 in k918 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1117,2,av);}
t2=C_mutate2(&lf[4] /* (set! percent-digits ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1111 in k1107 in k918 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1113,2,av);}
a=C_alloc(3);
t2=C_mutate2(&lf[3] /* (set! average-digits ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1117,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:151: arg-digit */
t4=C_retrieve2(lf[90],"arg-digit");
f_1074(t4,t3,C_fix(2));}

/* k860 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_862,2,av);}
/* chicken-profile.scm:100: exit */
t2=C_fast_retrieve(lf[7]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1168 in k1161 in doloop66 in k1149 in k1132 in k1129 in read-profile in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1170,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_1153(t2,((C_word*)t0)[3],t1);}

/* k867 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_869,2,av);}
/* chicken-profile.scm:99: print */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* read-profile in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1127,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1131,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:155: make-hash-table */
t3=C_fast_retrieve(lf[29]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=*((C_word*)lf[30]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1591 in for-each-loop332 in k1573 in k1570 in k1482 in k1479 in k1470 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in ... */
static void C_ccall f_1593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1593,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1583(t3,((C_word*)t0)[4],t2);}

/* k1212 in map-loop71 in k1190 in doloop66 in k1149 in k1132 in k1129 in read-profile in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_fcall f_1214(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1214,2,t0,t1);}
t2=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t1);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t4=C_slot(((C_word*)t0)[3],C_fix(1));
t5=C_slot(((C_word*)t0)[4],C_fix(1));
t6=((C_word*)((C_word*)t0)[5])[1];
f_1204(t6,((C_word*)t0)[6],t4,t5);}

/* k1797 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1799,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1803,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:213: take */
t3=C_fast_retrieve(lf[63]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=lf[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=((C_word*)t0)[3];
f_1409(t2,C_SCHEME_UNDEFINED);}}

/* k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_fcall f_744(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_744,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1390,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:187: print */
t4=*((C_word*)lf[50]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[67];
av2[3]=lf[0];
av2[4]=lf[68];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k1681 in map-loop237 in k1641 in a1629 in k1479 in k1470 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in ... */
static void C_ccall f_1683(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1683,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=C_slot(((C_word*)t0)[4],C_fix(1));
t7=((C_word*)((C_word*)t0)[5])[1];
f_1654(t7,((C_word*)t0)[6],t5,t6);}

/* sort-by-name in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1042(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1042,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1050,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(t2);
/* chicken-profile.scm:136: symbol->string */
t6=*((C_word*)lf[19]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* for-each-loop332 in k1573 in k1570 in k1482 in k1479 in k1470 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in ... */
static void C_fcall f_1583(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1583,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1593,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-profile.scm:244: g333 */
t5=((C_word*)t0)[3];{
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

/* k1190 in doloop66 in k1149 in k1132 in k1129 in read-profile in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1192(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1192,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_i_check_list_2(t1,lf[25]);
t5=C_i_check_list_2(t3,lf[25]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1202,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1204,a[2]=((C_word*)t0)[6],a[3]=t8,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_1204(t10,t6,t1,t3);}

/* k918 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_920,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=t1;
t4=C_i_string_length(t3);
t5=C_eqp(t4,C_fix(3));
if(C_truep(t5)){
t6=C_mutate2(&lf[90] /* (set! arg-digit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1074,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1109,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:149: arg-digit */
t8=C_retrieve2(lf[90],"arg-digit");
f_1074(t8,t7,C_fix(0));}
else{
/* chicken-profile.scm:152: error */
t6=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=lf[92];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k1917 in foldl141 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1919,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_1898(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k845 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_847,2,av);}
/* chicken-profile.scm:97: exit */
t2=C_fast_retrieve(lf[7]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_fcall f_734(C_word t0,C_word t1,C_word t2){
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
C_word t17;
C_word t18;
C_word t19;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,0,2)))){
C_save_and_reclaim_args((void *)trf_734,3,t0,t1,t2);}
a=C_alloc(24);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_744,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(lf[0])){
t4=t3;
f_744(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_751,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:74: glob */
t5=C_fast_retrieve(lf[72]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[73];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
t3=C_i_car(t2);
t4=t3;
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_787,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t12=t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_806,a[2]=t4,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_829,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_truep(C_i_equalp(t4,lf[76]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[77]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[78]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
/* chicken-profile.scm:94: print-usage */
f_687(t13);}
else{
if(C_truep(C_i_string_equal_p(t4,lf[79]))){
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_847,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_854,a[2]=t14,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:96: chicken-version */
t16=C_fast_retrieve(lf[81]);{
C_word av2[2];
av2[0]=t16;
av2[1]=t15;
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[82]))){
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_862,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_869,a[2]=t14,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:99: chicken-version */
t16=C_fast_retrieve(lf[81]);{
C_word av2[2];
av2[0]=t16;
av2[1]=t15;
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[83]))){
t14=lf[1] /* no-unused */ =C_SCHEME_TRUE;;
/* chicken-profile.scm:112: loop */
t18=t1;
t19=((C_word*)t7)[1];
t1=t18;
t2=t19;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[84]))){
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_884,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:102: next-number */
t15=t10;
f_806(t15,t14);}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[85]))){
t14=C_mutate2(&lf[20] /* (set! sort-by ...) */,lf[14]);
/* chicken-profile.scm:112: loop */
t18=t1;
t19=((C_word*)t7)[1];
t1=t18;
t2=t19;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[86]))){
t14=C_mutate2(&lf[20] /* (set! sort-by ...) */,lf[15]);
/* chicken-profile.scm:112: loop */
t18=t1;
t19=((C_word*)t7)[1];
t1=t18;
t2=t19;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[87]))){
t14=C_mutate2(&lf[20] /* (set! sort-by ...) */,lf[16]);
/* chicken-profile.scm:112: loop */
t18=t1;
t19=((C_word*)t7)[1];
t1=t18;
t2=t19;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[88]))){
t14=C_mutate2(&lf[20] /* (set! sort-by ...) */,lf[17]);
/* chicken-profile.scm:112: loop */
t18=t1;
t19=((C_word*)t7)[1];
t1=t18;
t2=t19;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[89]))){
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_920,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:107: next-arg */
t15=((C_word*)t9)[1];
f_787(t15,t14);}
else{
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_926,a[2]=t13,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t15=C_block_size(t4);
if(C_truep(C_fixnum_greaterp(t15,C_fix(1)))){
t16=C_i_string_ref(t4,C_fix(0));
t17=t14;
f_926(t17,C_u_i_char_equalp(C_make_character(45),t16));}
else{
t16=t14;
f_926(t16,C_SCHEME_FALSE);}}}}}}}}}}}}}

/* k1107 in k918 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1109,2,av);}
a=C_alloc(3);
t2=C_mutate2(&lf[2] /* (set! seconds-digits ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1113,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:150: arg-digit */
t4=C_retrieve2(lf[90],"arg-digit");
f_1074(t4,t3,C_fix(1));}

/* a1779 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1780(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1780,3,av);}
if(C_truep(C_i_cadr(t2))){
t3=t2;
t4=C_u_i_cdr(t3);
t5=C_u_i_car(t4);
t6=C_i_zerop(t5);
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=(C_truep(t6)?lf[1]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1138 in k1132 in k1129 in read-profile in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1140,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1147,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:165: hash-table->alist */
t3=C_fast_retrieve(lf[23]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* foldl141 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_fcall f_1898(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_1898,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=C_eqp(((C_word*)t0)[2],lf[22]);
t7=(C_truep(t6)?(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1927,tmp=(C_word)a,a+=2,tmp):(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1936,tmp=(C_word)a,a+=2,tmp));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1919,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t9=C_slot(t2,C_fix(0));
/* chicken-profile.scm:195: g148 */
t10=t7;{
C_word av2[4];
av2[0]=t10;
av2[1]=t8;
av2[2]=t3;
av2[3]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k1945 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1947,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1950,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1953,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[43]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[43]+1);
av2[1]=t3;
tp(2,av2);}}

/* map-loop258 in a1629 in k1479 in k1470 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_fcall f_1702(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_1702,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_string_length(t3);
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

/* k924 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_fcall f_926(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_926,2,t0,t1);}
if(C_truep(t1)){
/* chicken-profile.scm:109: error */
t2=*((C_word*)lf[69]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[93];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
if(C_truep(lf[0])){
/* chicken-profile.scm:110: print-usage */
f_687(((C_word*)t0)[2]);}
else{
t2=C_mutate2(&lf[0] /* (set! file ...) */,((C_word*)t0)[3]);
/* chicken-profile.scm:112: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_734(t3,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}}}

/* k1129 in read-profile in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1131(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1131,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1134,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:156: read */
t4=*((C_word*)lf[24]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1200 in k1190 in doloop66 in k1149 in k1132 in k1129 in read-profile in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1202,2,av);}
/* chicken-profile.scm:160: hash-table-set! */
t2=C_fast_retrieve(lf[26]);{
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
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop71 in k1190 in doloop66 in k1149 in k1132 in k1129 in read-profile in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_fcall f_1204(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_1204,4,t0,t1,t2,t3);}
a=C_alloc(14);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1214,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
if(C_truep(t7)){
if(C_truep(t8)){
t9=C_a_i_plus(&a,2,t7,t8);
t10=t6;
f_1214(t10,C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST));}
else{
t9=t6;
f_1214(t9,C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST));}}
else{
t9=t6;
f_1214(t9,C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST));}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* f_1936 in foldl141 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1936(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_1936,4,av);}
a=C_alloc(4);
t4=C_i_caddr(t3);
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_plus(&a,2,t2,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k827 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_829,2,av);}
/* chicken-profile.scm:112: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_734(t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k824 in next-number in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_826,2,av);}
a=C_alloc(4);
t2=C_a_i_string_to_number(&a,2,t1,C_fix(10));
if(C_truep(t2)){
if(C_truep(C_i_greaterp(t2,C_fix(0)))){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* chicken-profile.scm:92: error */
t3=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[75];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}
else{
/* chicken-profile.scm:92: error */
t3=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[75];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k1540 in k1514 in map-loop296 in print-row in k1482 in k1479 in k1470 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in ... */
static void C_ccall f_1542(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_1542,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=C_slot(((C_word*)t0)[4],C_fix(1));
t7=C_slot(((C_word*)t0)[5],C_fix(1));
t8=((C_word*)((C_word*)t0)[6])[1];
f_1509(t8,((C_word*)t0)[7],t5,t6,t7);}

/* map-loop237 in k1641 in a1629 in k1479 in k1470 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 in ... */
static void C_fcall f_1654(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_1654,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1683,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* chicken-profile.scm:234: g243 */
t9=*((C_word*)lf[55]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t6;
av2[2]=t7;
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k1145 in k1138 in k1132 in k1129 in read-profile in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1147,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1570 in k1482 in k1479 in k1470 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1572,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1608,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1616,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:241: reduce */
t5=C_fast_retrieve(lf[53]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=*((C_word*)lf[54]+1);
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1514 in map-loop296 in print-row in k1482 in k1479 in k1470 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in ... */
static void C_fcall f_1516(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_1516,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1542,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(0));
t4=C_slot(((C_word*)t0)[4],C_fix(0));
t5=C_slot(((C_word*)t0)[5],C_fix(0));
/* chicken-profile.scm:239: g302 */
t6=((C_word*)t0)[8];{
C_word av2[5];
av2[0]=t6;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t2=((C_word*)t0)[7];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[9],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1132 in k1129 in read-profile in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1134(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1134,2,av);}
a=C_alloc(9);
t2=C_i_symbolp(t1);
t3=(C_truep(t2)?t1:lf[22]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1140,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1151,a[2]=((C_word*)t0)[3],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_symbolp(t1))){
/* chicken-profile.scm:158: read */
t7=*((C_word*)lf[24]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t1;
f_1151(2,av2);}}}

/* next-number in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_fcall f_806(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_806,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_826,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:91: next-arg */
t3=((C_word*)((C_word*)t0)[3])[1];
f_787(t3,t2);}

/* k1149 in k1132 in k1129 in read-profile in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1151,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1153,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_1153(t5,((C_word*)t0)[3],t1);}

/* k1801 in k1797 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1803(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1803,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_1409(t3,t2);}

/* k1161 in doloop66 in k1149 in k1132 in k1129 in read-profile in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1163,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1170,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:158: read */
t3=*((C_word*)lf[24]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop197 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_fcall f_1746(C_word t0,C_word t1,C_word t2){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_1746,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1771,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=C_i_cadr(t6);
t8=t7;
t9=C_i_caddr(t6);
t10=t9;
t11=C_i_cadddr(t6);
t12=t11;
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1427,a[2]=t5,a[3]=t12,a[4]=t10,a[5]=t8,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* chicken-profile.scm:218: fifth */
t14=C_fast_retrieve(lf[61]);{
C_word av2[3];
av2[0]=t14;
av2[1]=t13;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t14+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1573 in k1570 in k1482 in k1479 in k1470 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 in ... */
static void C_ccall f_1575(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1575,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=((C_word*)((C_word*)t0)[3])[1];
t4=C_i_check_list_2(t3,lf[52]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1583,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_1583(t8,((C_word*)t0)[4],t3);}

/* k1606 in k1570 in k1482 in k1479 in k1470 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 in ... */
static void C_ccall f_1608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1608,2,av);}
/* chicken-profile.scm:241: print */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* format-real in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_fcall f_1329(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1329,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1384,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:175: truncate */
t5=*((C_word*)lf[40]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* doloop66 in k1149 in k1132 in k1129 in read-profile in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_fcall f_1153(C_word t0,C_word t1,C_word t2){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,4)))){
C_save_and_reclaim_args((void *)trf_1153,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_eofp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1163,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(t2);
t5=t4;
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1192,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=t8,a[7]=t9,tmp=(C_word)a,a+=8,tmp);
t11=t2;
t12=C_u_i_car(t11);
/* chicken-profile.scm:163: hash-table-ref/default */
t13=C_fast_retrieve(lf[27]);{
C_word av2[5];
av2[0]=t13;
av2[1]=t10;
av2[2]=((C_word*)t0)[3];
av2[3]=t12;
av2[4]=lf[28];
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}}

/* k1769 in map-loop197 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1771(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1771,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1746(t6,((C_word*)t0)[5],t5);}

/* k1887 in map-loop159 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1889(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1889,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1864(t6,((C_word*)t0)[5],t5);}

/* k1835 in k1828 in g165 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_fcall f_1837(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1837,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=t1;
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],t2);
/* chicken-profile.scm:201: append */
t4=*((C_word*)lf[64]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],C_fix(0));
/* chicken-profile.scm:201: append */
t3=*((C_word*)lf[64]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k1828 in g165 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_fcall f_1830(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_1830,2,t0,t1);}
a=C_alloc(13);
t2=(C_truep(t1)?t1:C_fix(0));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1837,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[4],C_fix(0)))){
t5=C_a_i_divide(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t6=t4;
f_1837(t6,C_a_i_times(&a,2,t5,C_fix(100)));}
else{
t5=t4;
f_1837(t5,C_SCHEME_FALSE);}}

/* k1436 in k1432 in k1425 in map-loop197 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1438,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1442,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_a_i_divide(&a,2,((C_word*)t0)[6],C_fix(1000));
/* chicken-profile.scm:221: format-real */
f_1329(t3,t4,lf[2]);}

/* k1432 in k1425 in map-loop197 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1434,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1438,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
/* chicken-profile.scm:220: number->string */
t4=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=lf[59];
f_1438(2,av2);}}}

/* map-loop159 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_fcall f_1864(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1864,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1889,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-profile.scm:199: g165 */
t5=((C_word*)t0)[4];
f_1812(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1860 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1862,2,av);}
/* chicken-profile.scm:199: sort */
t2=C_fast_retrieve(lf[65]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[20];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a1629 in k1479 in k1470 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1630(C_word c,C_word *av){
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
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_1630,4,av);}
a=C_alloc(23);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=C_i_check_list_2(t2,lf[25]);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1643,a[2]=t3,a[3]=t6,a[4]=t7,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1702,a[2]=t10,a[3]=t15,a[4]=t11,tmp=(C_word)a,a+=5,tmp));
t17=((C_word*)t15)[1];
f_1702(t17,t13,t2);}

/* k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_fcall f_1409(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_1409,2,t0,t1);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1469,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1780,tmp=(C_word)a,a+=2,tmp);
/* chicken-profile.scm:224: remove */
t8=C_fast_retrieve(lf[62]);{
C_word av2[4];
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
av2[3]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1406(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_1406,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1409,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1799,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_length(((C_word*)t3)[1]);
/* chicken-profile.scm:212: < */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=C_fix(0);
av2[3]=lf[5];
av2[4]=t6;
C_lessp(5,av2);}}

/* k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1403(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_1403,2,av);}
a=C_alloc(22);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1406,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1812,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1862,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1864,a[2]=t6,a[3]=t11,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_1864(t13,t9,((C_word*)t0)[3]);}

/* k689 in print-usage in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_691,2,av);}
/* chicken-profile.scm:66: exit */
t2=C_fast_retrieve(lf[7]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(64);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k696 in print-usage in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_698,2,av);}
/* chicken-profile.scm:45: display */
t2=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* map-loop296 in print-row in k1482 in k1479 in k1470 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 in ... */
static void C_fcall f_1509(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_1509,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1516,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_1516(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_1516(t6,C_SCHEME_FALSE);}}

/* k1505 in print-row in k1482 in k1479 in k1470 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 in ... */
static void C_ccall f_1507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1507,2,av);}
/* chicken-profile.scm:239: string-join */
t2=C_fast_retrieve(lf[51]);{
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

/* k1948 in k1945 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1950,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1614 in k1570 in k1482 in k1479 in k1470 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 in ... */
static void C_ccall f_1616(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_1616,2,av);}
a=C_alloc(12);
t2=C_i_length(((C_word*)t0)[2]);
t3=C_a_i_minus(&a,2,t2,C_fix(1));
t4=C_a_i_times(&a,2,C_fix(2),t3);
t5=C_a_i_plus(&a,2,t1,t4);
/* chicken-profile.scm:241: make-string */
t6=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[3];
av2[2]=t5;
av2[3]=C_make_character(45);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k1641 in a1629 in k1479 in k1470 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1643(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1643,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=C_i_check_list_2(t1,lf[25]);
t4=C_i_check_list_2(t2,lf[25]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1654,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_1654(t8,((C_word*)t0)[5],t1,t2);}

/* k1951 in k1945 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1953(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1953,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1957,2,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_734,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_734(t5,((C_word*)t0)[2],t1);}

/* k1425 in map-loop197 in k1467 in k1407 in k1404 in k1401 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1427,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1434,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_u_i_car(((C_word*)t0)[6]);
/* chicken-profile.scm:219: ##sys#symbol->qualified-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[60]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[60]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* f_1927 in foldl141 in k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1927(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1927,4,av);}
t4=C_i_caddr(t3);
/* chicken-profile.scm:196: max */
t5=*((C_word*)lf[55]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* print-usage in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_fcall f_687(C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,0,2)))){
C_save_and_reclaim_args((void *)trf_687,1,t1);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_691,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_698,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[9],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,lf[4],t4);
t6=C_a_i_cons(&a,2,lf[10],t5);
t7=C_a_i_cons(&a,2,lf[3],t6);
t8=C_a_i_cons(&a,2,lf[11],t7);
t9=C_a_i_cons(&a,2,lf[2],t8);
t10=C_a_i_cons(&a,2,lf[12],t9);
/* chicken-profile.scm:44: ##sys#print-to-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word av2[3];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t3;
av2[2]=t10;
tp(3,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point

void C_ccall C_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(314))){
C_save(t1);
C_rereclaim2(314*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,95);
lf[7]=C_h_intern(&lf[7],4,"exit");
lf[8]=C_h_intern(&lf[8],7,"display");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\001\242)\012 -no-unused                remove procedures that are never called\012 -top "
"N                    display only the top N entries\012 -help                     s"
"how this text and exit\012 -version                  show version and exit\012 -releas"
"e                  show release number and exit\012\012 FILENAME defaults to the `PROF"
"ILE.<number>\047, selecting the one with\012 the highest modification time, in case mu"
"ltiple profiles exist.\012");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\001\315Usage: chicken-profile [FILENAME | OPTION] ...\012\012 -sort-by-calls            "
"sort output by call frequency\012 -sort-by-time             sort output by procedur"
"e execution time\012 -sort-by-avg              sort output by average procedure exe"
"cution time\012 -sort-by-name             sort output alphabetically by procedure n"
"ame\012 -decimals DDD             set number of decimals for seconds, average and\012 "
"                          percent columns (three digits, default: ");
lf[13]=C_h_intern(&lf[13],19,"\003sysprint-to-string");
lf[18]=C_h_intern(&lf[18],8,"string<\077");
lf[19]=C_h_intern(&lf[19],14,"symbol->string");
lf[22]=C_h_intern(&lf[22],12,"instrumented");
lf[23]=C_h_intern(&lf[23],17,"hash-table->alist");
lf[24]=C_h_intern(&lf[24],4,"read");
lf[25]=C_h_intern(&lf[25],3,"map");
lf[26]=C_h_intern(&lf[26],15,"hash-table-set!");
lf[27]=C_h_intern(&lf[27],22,"hash-table-ref/default");
lf[28]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\000\376\003\000\000\002\376\377\001\000\000\000\000\376\377\016");
lf[29]=C_h_intern(&lf[29],15,"make-hash-table");
lf[30]=C_h_intern(&lf[30],3,"eq\077");
lf[32]=C_h_intern(&lf[32],17,"\003sysstring-append");
lf[33]=C_h_intern(&lf[33],11,"make-string");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[37]=C_h_intern(&lf[37],13,"string-append");
lf[38]=C_h_intern(&lf[38],9,"substring");
lf[39]=C_h_intern(&lf[39],18,"\003sysfixnum->string");
lf[40]=C_h_intern(&lf[40],8,"truncate");
lf[41]=C_h_intern(&lf[41],4,"expt");
lf[42]=C_h_intern(&lf[42],1,"-");
lf[43]=C_h_intern(&lf[43],25,"\003sysimplicit-exit-handler");
lf[44]=C_h_intern(&lf[44],5,"foldl");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\011procedure");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\005calls");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\007seconds");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\007average");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\007percent");
lf[50]=C_h_intern(&lf[50],5,"print");
lf[51]=C_h_intern(&lf[51],11,"string-join");
lf[52]=C_h_intern(&lf[52],8,"for-each");
lf[53]=C_h_intern(&lf[53],6,"reduce");
lf[54]=C_h_intern(&lf[54],1,"+");
lf[55]=C_h_intern(&lf[55],3,"max");
lf[56]=C_h_intern(&lf[56],4,"fold");
lf[57]=C_h_intern(&lf[57],15,"\003sysmake-string");
lf[58]=C_h_intern(&lf[58],14,"number->string");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\010overflow");
lf[60]=C_h_intern(&lf[60],28,"\003syssymbol->qualified-string");
lf[61]=C_h_intern(&lf[61],5,"fifth");
lf[62]=C_h_intern(&lf[62],6,"remove");
lf[63]=C_h_intern(&lf[63],4,"take");
lf[64]=C_h_intern(&lf[64],6,"append");
lf[65]=C_h_intern(&lf[65],4,"sort");
lf[66]=C_h_intern(&lf[66],20,"with-input-from-file");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\011reading `");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\006\047 ...\012");
lf[69]=C_h_intern(&lf[69],5,"error");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\021no PROFILEs found");
lf[71]=C_h_intern(&lf[71],22,"file-modification-time");
lf[72]=C_h_intern(&lf[72],4,"glob");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\011PROFILE.\052");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\032missing argument to option");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid argument to option");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\002-h");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\005-help");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\006--help");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\010-version");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\032chicken-profile - Version ");
lf[81]=C_h_intern(&lf[81],15,"chicken-version");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\010-release");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\012-no-unused");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\004-top");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\016-sort-by-calls");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\015-sort-by-time");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\014-sort-by-avg");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\015-sort-by-name");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\011-decimals");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000$invalid argument to -decimals option");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000$invalid argument to -decimals option");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid option");
lf[94]=C_h_intern(&lf[94],22,"command-line-arguments");
C_register_lf2(lf,95,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_658,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k1391 in k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1393(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_1393,2,av);}
a=C_alloc(10);
t2=C_i_car(t1);
t3=t2;
t4=C_u_i_cdr(t1);
t5=C_i_check_list_2(t4,lf[44]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1403,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1898,a[2]=t3,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_1898(t10,t6,t4,C_fix(0));}

/* k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_670,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_673,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d69_toplevel(2,av2);}}

/* k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_673,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_676,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k1388 in k742 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1390,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1393,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:188: with-input-from-file */
t3=C_fast_retrieve(lf[66]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[0];
av2[3]=lf[21];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_679(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_679,2,av);}
a=C_alloc(22);
t2=lf[0] /* file */ =C_SCHEME_FALSE;;
t3=lf[1] /* no-unused */ =C_SCHEME_FALSE;;
t4=lf[2] /* seconds-digits */ =C_fix(3);;
t5=lf[3] /* average-digits */ =C_fix(3);;
t6=lf[4] /* percent-digits */ =C_fix(3);;
t7=lf[5] /* top */ =C_fix(0);;
t8=C_mutate2(&lf[6] /* (set! print-usage ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_687,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate2(&lf[14] /* (set! sort-by-calls ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_951,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate2(&lf[15] /* (set! sort-by-time ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_986,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate2(&lf[16] /* (set! sort-by-avg ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1013,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate2(&lf[17] /* (set! sort-by-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1042,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate2(&lf[20] /* (set! sort-by ...) */,lf[15]);
t14=C_mutate2(&lf[21] /* (set! read-profile ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1127,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate2(&lf[31] /* (set! format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1263,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate2(&lf[34] /* (set! format-real ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1329,tmp=(C_word)a,a+=2,tmp));
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1947,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1957,a[2]=t17,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:246: command-line-arguments */
t19=C_fast_retrieve(lf[94]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t19;
av2[1]=t18;
((C_proc)(void*)(*((C_word*)t19+1)))(2,av2);}}

/* k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_676,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_679,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_utils_toplevel(2,av2);}}

/* next-arg in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_fcall f_787(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_787,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
/* chicken-profile.scm:86: error */
t2=*((C_word*)lf[69]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[74];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k1382 in format-real in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_1384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1384,2,av);}
a=C_alloc(6);
t2=C_i_inexact_to_exact(t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1340,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* ##sys#fixnum->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[39]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t4;
av2[2]=t3;
tp(3,av2);}}

/* k659 in k656 */
static void C_ccall f_661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_661,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_664,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k662 in k659 in k656 */
static void C_ccall f_664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_664,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_667,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d1_toplevel(2,av2);}}

/* k779 in k775 in a768 in k749 in loop in k1955 in k677 in k674 in k671 in k668 in k665 in k662 in k659 in k656 */
static void C_ccall f_781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_781,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_greaterp(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k665 in k662 in k659 in k656 */
static void C_ccall f_667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_667,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_670,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d13_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[117] = {
{"f_777:chicken_2dprofile_2escm",(void*)f_777},
{"f_658:chicken_2dprofile_2escm",(void*)f_658},
{"f_767:chicken_2dprofile_2escm",(void*)f_767},
{"f_769:chicken_2dprofile_2escm",(void*)f_769},
{"f_1013:chicken_2dprofile_2escm",(void*)f_1013},
{"f_1494:chicken_2dprofile_2escm",(void*)f_1494},
{"f_1263:chicken_2dprofile_2escm",(void*)f_1263},
{"f_751:chicken_2dprofile_2escm",(void*)f_751},
{"f_1352:chicken_2dprofile_2escm",(void*)f_1352},
{"f_754:chicken_2dprofile_2escm",(void*)f_754},
{"f_1486:chicken_2dprofile_2escm",(void*)f_1486},
{"f_1484:chicken_2dprofile_2escm",(void*)f_1484},
{"f_1481:chicken_2dprofile_2escm",(void*)f_1481},
{"f_1348:chicken_2dprofile_2escm",(void*)f_1348},
{"f_1340:chicken_2dprofile_2escm",(void*)f_1340},
{"f_1376:chicken_2dprofile_2escm",(void*)f_1376},
{"f_1472:chicken_2dprofile_2escm",(void*)f_1472},
{"f_1074:chicken_2dprofile_2escm",(void*)f_1074},
{"f_1372:chicken_2dprofile_2escm",(void*)f_1372},
{"f_1469:chicken_2dprofile_2escm",(void*)f_1469},
{"f_1364:chicken_2dprofile_2escm",(void*)f_1364},
{"f_1812:chicken_2dprofile_2escm",(void*)f_1812},
{"f_1450:chicken_2dprofile_2escm",(void*)f_1450},
{"f_1054:chicken_2dprofile_2escm",(void*)f_1054},
{"f_1446:chicken_2dprofile_2escm",(void*)f_1446},
{"f_854:chicken_2dprofile_2escm",(void*)f_854},
{"f_1050:chicken_2dprofile_2escm",(void*)f_1050},
{"f_1442:chicken_2dprofile_2escm",(void*)f_1442},
{"f_986:chicken_2dprofile_2escm",(void*)f_986},
{"f_1084:chicken_2dprofile_2escm",(void*)f_1084},
{"f_884:chicken_2dprofile_2escm",(void*)f_884},
{"f_1282:chicken_2dprofile_2escm",(void*)f_1282},
{"f_951:chicken_2dprofile_2escm",(void*)f_951},
{"f_1117:chicken_2dprofile_2escm",(void*)f_1117},
{"f_1113:chicken_2dprofile_2escm",(void*)f_1113},
{"f_862:chicken_2dprofile_2escm",(void*)f_862},
{"f_1170:chicken_2dprofile_2escm",(void*)f_1170},
{"f_869:chicken_2dprofile_2escm",(void*)f_869},
{"f_1127:chicken_2dprofile_2escm",(void*)f_1127},
{"f_1593:chicken_2dprofile_2escm",(void*)f_1593},
{"f_1214:chicken_2dprofile_2escm",(void*)f_1214},
{"f_1799:chicken_2dprofile_2escm",(void*)f_1799},
{"f_744:chicken_2dprofile_2escm",(void*)f_744},
{"f_1683:chicken_2dprofile_2escm",(void*)f_1683},
{"f_1042:chicken_2dprofile_2escm",(void*)f_1042},
{"f_1583:chicken_2dprofile_2escm",(void*)f_1583},
{"f_1192:chicken_2dprofile_2escm",(void*)f_1192},
{"f_920:chicken_2dprofile_2escm",(void*)f_920},
{"f_1919:chicken_2dprofile_2escm",(void*)f_1919},
{"f_847:chicken_2dprofile_2escm",(void*)f_847},
{"f_734:chicken_2dprofile_2escm",(void*)f_734},
{"f_1109:chicken_2dprofile_2escm",(void*)f_1109},
{"f_1780:chicken_2dprofile_2escm",(void*)f_1780},
{"f_1140:chicken_2dprofile_2escm",(void*)f_1140},
{"f_1898:chicken_2dprofile_2escm",(void*)f_1898},
{"f_1947:chicken_2dprofile_2escm",(void*)f_1947},
{"f_1702:chicken_2dprofile_2escm",(void*)f_1702},
{"f_926:chicken_2dprofile_2escm",(void*)f_926},
{"f_1131:chicken_2dprofile_2escm",(void*)f_1131},
{"f_1202:chicken_2dprofile_2escm",(void*)f_1202},
{"f_1204:chicken_2dprofile_2escm",(void*)f_1204},
{"f_1936:chicken_2dprofile_2escm",(void*)f_1936},
{"f_829:chicken_2dprofile_2escm",(void*)f_829},
{"f_826:chicken_2dprofile_2escm",(void*)f_826},
{"f_1542:chicken_2dprofile_2escm",(void*)f_1542},
{"f_1654:chicken_2dprofile_2escm",(void*)f_1654},
{"f_1147:chicken_2dprofile_2escm",(void*)f_1147},
{"f_1572:chicken_2dprofile_2escm",(void*)f_1572},
{"f_1516:chicken_2dprofile_2escm",(void*)f_1516},
{"f_1134:chicken_2dprofile_2escm",(void*)f_1134},
{"f_806:chicken_2dprofile_2escm",(void*)f_806},
{"f_1151:chicken_2dprofile_2escm",(void*)f_1151},
{"f_1803:chicken_2dprofile_2escm",(void*)f_1803},
{"f_1163:chicken_2dprofile_2escm",(void*)f_1163},
{"f_1746:chicken_2dprofile_2escm",(void*)f_1746},
{"f_1575:chicken_2dprofile_2escm",(void*)f_1575},
{"f_1608:chicken_2dprofile_2escm",(void*)f_1608},
{"f_1329:chicken_2dprofile_2escm",(void*)f_1329},
{"f_1153:chicken_2dprofile_2escm",(void*)f_1153},
{"f_1771:chicken_2dprofile_2escm",(void*)f_1771},
{"f_1889:chicken_2dprofile_2escm",(void*)f_1889},
{"f_1837:chicken_2dprofile_2escm",(void*)f_1837},
{"f_1830:chicken_2dprofile_2escm",(void*)f_1830},
{"f_1438:chicken_2dprofile_2escm",(void*)f_1438},
{"f_1434:chicken_2dprofile_2escm",(void*)f_1434},
{"f_1864:chicken_2dprofile_2escm",(void*)f_1864},
{"f_1862:chicken_2dprofile_2escm",(void*)f_1862},
{"f_1630:chicken_2dprofile_2escm",(void*)f_1630},
{"f_1409:chicken_2dprofile_2escm",(void*)f_1409},
{"f_1406:chicken_2dprofile_2escm",(void*)f_1406},
{"f_1403:chicken_2dprofile_2escm",(void*)f_1403},
{"f_691:chicken_2dprofile_2escm",(void*)f_691},
{"f_698:chicken_2dprofile_2escm",(void*)f_698},
{"f_1509:chicken_2dprofile_2escm",(void*)f_1509},
{"f_1507:chicken_2dprofile_2escm",(void*)f_1507},
{"f_1950:chicken_2dprofile_2escm",(void*)f_1950},
{"f_1616:chicken_2dprofile_2escm",(void*)f_1616},
{"f_1643:chicken_2dprofile_2escm",(void*)f_1643},
{"f_1953:chicken_2dprofile_2escm",(void*)f_1953},
{"f_1957:chicken_2dprofile_2escm",(void*)f_1957},
{"f_1427:chicken_2dprofile_2escm",(void*)f_1427},
{"f_1927:chicken_2dprofile_2escm",(void*)f_1927},
{"f_687:chicken_2dprofile_2escm",(void*)f_687},
{"toplevel:chicken_2dprofile_2escm",(void*)C_toplevel},
{"f_1393:chicken_2dprofile_2escm",(void*)f_1393},
{"f_670:chicken_2dprofile_2escm",(void*)f_670},
{"f_673:chicken_2dprofile_2escm",(void*)f_673},
{"f_1390:chicken_2dprofile_2escm",(void*)f_1390},
{"f_679:chicken_2dprofile_2escm",(void*)f_679},
{"f_676:chicken_2dprofile_2escm",(void*)f_676},
{"f_787:chicken_2dprofile_2escm",(void*)f_787},
{"f_1384:chicken_2dprofile_2escm",(void*)f_1384},
{"f_661:chicken_2dprofile_2escm",(void*)f_661},
{"f_664:chicken_2dprofile_2escm",(void*)f_664},
{"f_781:chicken_2dprofile_2escm",(void*)f_781},
{"f_667:chicken_2dprofile_2escm",(void*)f_667},
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
S|  for-each		1
S|  foldl		1
S|  map		6
o|eliminated procedure checks: 36 
o|specializations:
o|  1 (make-string fixnum char)
o|  3 (##sys#check-list (or pair list) *)
o|  2 (number->string fixnum)
o|  2 (string-append string string)
o|  2 (first pair)
o|  1 (= fixnum fixnum)
o|  2 (third (pair * (pair * pair)))
o|  3 (second (pair * pair))
o|  1 (char=? char char)
o|  1 (string-ref string fixnum)
o|  1 (> fixnum fixnum)
o|  1 (string-length string)
o|  8 (string=? string string)
o|  3 (cdr pair)
(o e)|safe calls: 211 
(o e)|assignments to immediate values: 4 
o|dropping redundant toplevel assignment: sort-by 
o|safe globals: (write-profile format-real format-string read-profile set-decimals sort-by sort-by-name sort-by-avg sort-by-time sort-by-calls run print-usage top percent-digits average-digits seconds-digits no-unused file) 
o|Removed `not' forms: 1 
o|inlining procedure: k959 
o|inlining procedure: k959 
o|inlining procedure: k979 
o|inlining procedure: k979 
o|inlining procedure: k994 
o|inlining procedure: k994 
o|inlining procedure: k1021 
o|inlining procedure: k1021 
o|inlining procedure: k1155 
o|inlining procedure: k1155 
o|inlining procedure: k1206 
o|contracted procedure: "(chicken-profile.scm:162) g7787" 
o|inlining procedure: k1181 
o|inlining procedure: k1181 
o|inlining procedure: k1206 
o|inlining procedure: k1283 
o|inlining procedure: k1283 
o|contracted procedure: "(chicken-profile.scm:246) run" 
o|inlining procedure: k736 
o|contracted procedure: "(chicken-profile.scm:81) write-profile" 
o|inlining procedure: k1511 
o|inlining procedure: k1511 
o|inlining procedure: k1561 
o|inlining procedure: k1561 
o|inlining procedure: k1585 
o|inlining procedure: k1585 
o|substituted constant variable: spacing230 
o|inlining procedure: k1656 
o|inlining procedure: k1656 
o|inlining procedure: k1704 
o|inlining procedure: k1704 
o|substituted constant variable: spacing230 
o|substituted constant variable: spacing230 
o|substituted constant variable: a1744 
o|inlining procedure: k1748 
o|contracted procedure: "(chicken-profile.scm:214) g203212" 
o|contracted procedure: k1459 
o|inlining procedure: k1748 
o|inlining procedure: k1782 
o|inlining procedure: k1782 
o|inlining procedure: k1838 
o|inlining procedure: k1838 
o|inlining procedure: k1851 
o|inlining procedure: k1851 
o|inlining procedure: k1866 
o|inlining procedure: k1866 
o|inlining procedure: k1900 
o|inlining procedure: k1900 
o|substituted constant variable: g140143 
o|inlining procedure: k752 
o|inlining procedure: k752 
o|inlining procedure: k789 
o|inlining procedure: k789 
o|inlining procedure: k811 
o|inlining procedure: k811 
o|inlining procedure: k736 
o|inlining procedure: k839 
o|inlining procedure: k839 
o|substituted constant variable: a859 
o|substituted constant variable: a874 
o|inlining procedure: k870 
o|inlining procedure: k870 
o|substituted constant variable: a880 
o|substituted constant variable: a889 
o|inlining procedure: k885 
o|inlining procedure: k885 
o|substituted constant variable: a895 
o|substituted constant variable: a901 
o|inlining procedure: k897 
o|inlining procedure: k897 
o|substituted constant variable: a907 
o|substituted constant variable: a913 
o|inlining procedure: k909 
o|contracted procedure: "(chicken-profile.scm:107) set-decimals" 
o|inlining procedure: k1079 
o|inlining procedure: k1079 
o|folded constant expression: (char->integer (quote #\0)) 
o|inlining procedure: k1067 
o|inlining procedure: k1067 
o|substituted constant variable: a1125 
o|inlining procedure: k909 
o|inlining procedure: k930 
o|inlining procedure: k930 
o|substituted constant variable: a943 
o|substituted constant variable: a940 
o|substituted constant variable: a948 
o|replaced variables: 192 
o|removed binding forms: 90 
o|substituted constant variable: r9801961 
o|substituted constant variable: r11821970 
o|substituted constant variable: r15621978 
o|converted assignments to bindings: (print-row292) 
o|substituted constant variable: r17831988 
o|substituted constant variable: r18391991 
o|substituted constant variable: r18391991 
o|substituted constant variable: r18521994 
o|inlining procedure: k827 
o|inlining procedure: k827 
o|inlining procedure: k827 
o|inlining procedure: k827 
o|inlining procedure: k827 
o|inlining procedure: k827 
o|contracted procedure: k1099 
o|inlining procedure: k827 
o|simplifications: ((let . 1)) 
o|replaced variables: 12 
o|removed binding forms: 219 
o|substituted constant variable: r1100 
o|replaced variables: 8 
o|removed binding forms: 32 
o|inlining procedure: k1231 
o|inlining procedure: k1231 
o|inlining procedure: k814 
o|removed binding forms: 6 
o|substituted constant variable: r12322108 
o|substituted constant variable: r12322109 
o|substituted constant variable: r8152128 
o|removed conditional forms: 1 
o|removed binding forms: 3 
o|simplifications: ((if . 16) (##core#call . 173)) 
o|  call simplifications:
o|    member
o|    string=?
o|    ##sys#size
o|    fx>
o|    string-ref
o|    char->integer
o|    <=
o|    string->number
o|    eq?	2
o|    <
o|    zero?
o|    fourth
o|    /	4
o|    list	6
o|    length	2
o|    -	2
o|    *	3
o|    inexact->exact	2
o|    car	5
o|    null?	7
o|    cdr	3
o|    string-length	3
o|    fx-
o|    fxmax
o|    symbol?	2
o|    eof-object?
o|    ##sys#check-list	9
o|    pair?	12
o|    +	4
o|    ##sys#setslot	6
o|    ##sys#slot	30
o|    first	4
o|    cadddr	2
o|    =	2
o|    second	5
o|    eqv?	2
o|    third	8
o|    >	11
o|    cons	23
o|contracted procedure: k724 
o|contracted procedure: k720 
o|contracted procedure: k716 
o|contracted procedure: k712 
o|contracted procedure: k708 
o|contracted procedure: k704 
o|contracted procedure: k700 
o|contracted procedure: k953 
o|contracted procedure: k956 
o|contracted procedure: k962 
o|contracted procedure: k969 
o|contracted procedure: k973 
o|contracted procedure: k988 
o|contracted procedure: k991 
o|contracted procedure: k997 
o|contracted procedure: k1015 
o|contracted procedure: k1018 
o|contracted procedure: k1024 
o|contracted procedure: k1056 
o|contracted procedure: k1060 
o|contracted procedure: k1259 
o|contracted procedure: k1135 
o|contracted procedure: k1158 
o|contracted procedure: k1172 
o|contracted procedure: k1176 
o|contracted procedure: k1194 
o|contracted procedure: k1197 
o|contracted procedure: k1245 
o|contracted procedure: k1209 
o|contracted procedure: k1215 
o|contracted procedure: k1223 
o|contracted procedure: k1227 
o|contracted procedure: k1235 
o|contracted procedure: k1239 
o|contracted procedure: k1231 
o|contracted procedure: k1253 
o|contracted procedure: k1322 
o|contracted procedure: k1265 
o|contracted procedure: k1316 
o|contracted procedure: k1268 
o|contracted procedure: k1310 
o|contracted procedure: k1271 
o|contracted procedure: k1304 
o|contracted procedure: k1274 
o|contracted procedure: k1277 
o|contracted procedure: k1301 
o|contracted procedure: k1297 
o|contracted procedure: k1331 
o|contracted procedure: k1377 
o|contracted procedure: k1342 
o|contracted procedure: k1354 
o|contracted procedure: k1358 
o|contracted procedure: k1366 
o|contracted procedure: k739 
o|contracted procedure: k1394 
o|contracted procedure: k1398 
o|contracted procedure: k1411 
o|contracted procedure: k1473 
o|contracted procedure: k1476 
o|contracted procedure: k1496 
o|contracted procedure: k1499 
o|contracted procedure: k1502 
o|contracted procedure: k1517 
o|contracted procedure: k1520 
o|contracted procedure: k1528 
o|contracted procedure: k1532 
o|contracted procedure: k1536 
o|contracted procedure: k1544 
o|contracted procedure: k1548 
o|contracted procedure: k1552 
o|contracted procedure: k1558 
o|contracted procedure: k1564 
o|contracted procedure: k1576 
o|contracted procedure: k1588 
o|contracted procedure: k1598 
o|contracted procedure: k1602 
o|contracted procedure: k1626 
o|contracted procedure: k1622 
o|contracted procedure: k1618 
o|contracted procedure: k1610 
o|contracted procedure: k1632 
o|contracted procedure: k1635 
o|contracted procedure: k1638 
o|contracted procedure: k1644 
o|contracted procedure: k1647 
o|contracted procedure: k1695 
o|contracted procedure: k1659 
o|contracted procedure: k1662 
o|contracted procedure: k1665 
o|contracted procedure: k1673 
o|contracted procedure: k1677 
o|contracted procedure: k1685 
o|contracted procedure: k1689 
o|contracted procedure: k1707 
o|contracted procedure: k1729 
o|contracted procedure: k1725 
o|contracted procedure: k1710 
o|contracted procedure: k1713 
o|contracted procedure: k1721 
o|contracted procedure: k1736 
o|contracted procedure: k1740 
o|contracted procedure: k1751 
o|contracted procedure: k1754 
o|contracted procedure: k1757 
o|contracted procedure: k1765 
o|contracted procedure: k1773 
o|contracted procedure: k1416 
o|contracted procedure: k1419 
o|contracted procedure: k1422 
o|contracted procedure: k1452 
o|contracted procedure: k1456 
o|contracted procedure: k1785 
o|contracted procedure: k1791 
o|contracted procedure: k1805 
o|contracted procedure: k1809 
o|contracted procedure: k1818 
o|contracted procedure: k1821 
o|contracted procedure: k1831 
o|inlining procedure: k1824 
o|inlining procedure: k1824 
o|contracted procedure: k1841 
o|contracted procedure: k1848 
o|contracted procedure: k1854 
o|contracted procedure: k1869 
o|contracted procedure: k1872 
o|contracted procedure: k1875 
o|contracted procedure: k1883 
o|contracted procedure: k1891 
o|contracted procedure: k1903 
o|contracted procedure: k1910 
o|contracted procedure: k1924 
o|contracted procedure: k1914 
o|contracted procedure: k1933 
o|contracted procedure: k1942 
o|contracted procedure: k1921 
o|contracted procedure: k755 
o|inlining procedure: k752 
o|contracted procedure: k782 
o|contracted procedure: k792 
o|contracted procedure: k798 
o|contracted procedure: k802 
o|contracted procedure: k808 
o|contracted procedure: k814 
o|contracted procedure: k833 
o|contracted procedure: k842 
o|contracted procedure: k1122 
o|contracted procedure: k1070 
o|contracted procedure: k1103 
o|contracted procedure: k1095 
o|contracted procedure: k1076 
o|contracted procedure: k1088 
o|contracted procedure: k945 
o|contracted procedure: k937 
o|simplifications: ((if . 1) (let . 20)) 
o|removed binding forms: 150 
o|replaced variables: 80 
o|removed binding forms: 1 
o|removed binding forms: 42 
o|customizable procedures: (k924 arg-digit next-number24 print-usage loop11 next-arg23 k742 foldl141145 g165174 map-loop159188 k1828 k1835 k1407 format-real map-loop197221 map-loop258275 map-loop237282 for-each-loop332342 k1514 map-loop296317 k1212 map-loop7194 doloop6667) 
o|calls to known targets: 58 
o|identified direct recursive calls: f_1702 1 
o|identified direct recursive calls: f_734 5 
o|fast box initializations: 11 
o|fast global references: 29 
o|fast global assignments: 28 
o|dropping unused closure argument: f_1329 
o|dropping unused closure argument: f_687 
*/
/* end of file */

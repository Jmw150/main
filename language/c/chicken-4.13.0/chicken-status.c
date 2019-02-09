/* Generated from chicken-status.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: chicken-status.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -output-file chicken-status.c
   used units: library eval chicken_2dsyntax srfi_2d1 posix data_2dstructures utils ports irregex files
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
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[103];
static double C_possibly_force_alignment;


C_noret_decl(f_1151)
static void C_fcall f_1151(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1580)
static void C_ccall f_1580(C_word c,C_word *av) C_noret;
C_noret_decl(f_1598)
static void C_ccall f_1598(C_word c,C_word *av) C_noret;
C_noret_decl(f_1997)
static void C_fcall f_1997(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1593)
static void C_ccall f_1593(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_1354)
static void C_fcall f_1354(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1512)
static void C_ccall f_1512(C_word c,C_word *av) C_noret;
C_noret_decl(f_2035)
static void C_fcall f_2035(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2031)
static void C_ccall f_2031(C_word c,C_word *av) C_noret;
C_noret_decl(f_1346)
static void C_ccall f_1346(C_word c,C_word *av) C_noret;
C_noret_decl(f_1907)
static void C_ccall f_1907(C_word c,C_word *av) C_noret;
C_noret_decl(f_1494)
static void C_ccall f_1494(C_word c,C_word *av) C_noret;
C_noret_decl(f_1343)
static void C_ccall f_1343(C_word c,C_word *av) C_noret;
C_noret_decl(f_1490)
static void C_ccall f_1490(C_word c,C_word *av) C_noret;
C_noret_decl(f_1364)
static void C_ccall f_1364(C_word c,C_word *av) C_noret;
C_noret_decl(f_1471)
static void C_ccall f_1471(C_word c,C_word *av) C_noret;
C_noret_decl(f_1559)
static void C_fcall f_1559(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1667)
static void C_ccall f_1667(C_word c,C_word *av) C_noret;
C_noret_decl(f_1603)
static void C_fcall f_1603(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1572)
static void C_fcall f_1572(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1467)
static void C_ccall f_1467(C_word c,C_word *av) C_noret;
C_noret_decl(f_1269)
static void C_ccall f_1269(C_word c,C_word *av) C_noret;
C_noret_decl(f_1266)
static void C_ccall f_1266(C_word c,C_word *av) C_noret;
C_noret_decl(f_1984)
static void C_ccall f_1984(C_word c,C_word *av) C_noret;
C_noret_decl(f2297)
static void C_ccall f2297(C_word c,C_word *av) C_noret;
C_noret_decl(f_1520)
static void C_fcall f_1520(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1324)
static void C_ccall f_1324(C_word c,C_word *av) C_noret;
C_noret_decl(f_1453)
static void C_ccall f_1453(C_word c,C_word *av) C_noret;
C_noret_decl(f_1575)
static void C_ccall f_1575(C_word c,C_word *av) C_noret;
C_noret_decl(f_1451)
static void C_ccall f_1451(C_word c,C_word *av) C_noret;
C_noret_decl(f_1339)
static void C_ccall f_1339(C_word c,C_word *av) C_noret;
C_noret_decl(f_1530)
static void C_ccall f_1530(C_word c,C_word *av) C_noret;
C_noret_decl(f_1332)
static void C_ccall f_1332(C_word c,C_word *av) C_noret;
C_noret_decl(f_1111)
static void C_ccall f_1111(C_word c,C_word *av) C_noret;
C_noret_decl(f_1509)
static void C_ccall f_1509(C_word c,C_word *av) C_noret;
C_noret_decl(f_1505)
static void C_ccall f_1505(C_word c,C_word *av) C_noret;
C_noret_decl(f_1123)
static void C_fcall f_1123(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1319)
static void C_ccall f_1319(C_word c,C_word *av) C_noret;
C_noret_decl(f_1315)
static void C_ccall f_1315(C_word c,C_word *av) C_noret;
C_noret_decl(f_1311)
static void C_ccall f_1311(C_word c,C_word *av) C_noret;
C_noret_decl(f_1616)
static void C_ccall f_1616(C_word c,C_word *av) C_noret;
C_noret_decl(f_1610)
static void C_ccall f_1610(C_word c,C_word *av) C_noret;
C_noret_decl(f_1436)
static void C_ccall f_1436(C_word c,C_word *av) C_noret;
C_noret_decl(f_1692)
static void C_ccall f_1692(C_word c,C_word *av) C_noret;
C_noret_decl(f_1296)
static void C_ccall f_1296(C_word c,C_word *av) C_noret;
C_noret_decl(f_1297)
static void C_fcall f_1297(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1212)
static void C_ccall f_1212(C_word c,C_word *av) C_noret;
C_noret_decl(f_1292)
static void C_ccall f_1292(C_word c,C_word *av) C_noret;
C_noret_decl(f_1622)
static void C_ccall f_1622(C_word c,C_word *av) C_noret;
C_noret_decl(f_1101)
static void C_fcall f_1101(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1404)
static void C_ccall f_1404(C_word c,C_word *av) C_noret;
C_noret_decl(f_1286)
static void C_ccall f_1286(C_word c,C_word *av) C_noret;
C_noret_decl(f_1725)
static void C_ccall f_1725(C_word c,C_word *av) C_noret;
C_noret_decl(f_1816)
static void C_ccall f_1816(C_word c,C_word *av) C_noret;
C_noret_decl(f_1814)
static void C_ccall f_1814(C_word c,C_word *av) C_noret;
C_noret_decl(f_1280)
static void C_ccall f_1280(C_word c,C_word *av) C_noret;
C_noret_decl(f_1417)
static void C_ccall f_1417(C_word c,C_word *av) C_noret;
C_noret_decl(f_1099)
static void C_ccall f_1099(C_word c,C_word *av) C_noret;
C_noret_decl(f_1092)
static void C_ccall f_1092(C_word c,C_word *av) C_noret;
C_noret_decl(f_1844)
static void C_fcall f_1844(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1991)
static void C_ccall f_1991(C_word c,C_word *av) C_noret;
C_noret_decl(f_2006)
static void C_ccall f_2006(C_word c,C_word *av) C_noret;
C_noret_decl(f_896)
static void C_ccall f_896(C_word c,C_word *av) C_noret;
C_noret_decl(f_893)
static void C_ccall f_893(C_word c,C_word *av) C_noret;
C_noret_decl(f_890)
static void C_ccall f_890(C_word c,C_word *av) C_noret;
C_noret_decl(f_1071)
static void C_ccall f_1071(C_word c,C_word *av) C_noret;
C_noret_decl(f_899)
static void C_ccall f_899(C_word c,C_word *av) C_noret;
C_noret_decl(f_1823)
static void C_ccall f_1823(C_word c,C_word *av) C_noret;
C_noret_decl(f_1642)
static void C_fcall f_1642(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2012)
static void C_ccall f_2012(C_word c,C_word *av) C_noret;
C_noret_decl(f_2019)
static void C_ccall f_2019(C_word c,C_word *av) C_noret;
C_noret_decl(f_2123)
static void C_ccall f_2123(C_word c,C_word *av) C_noret;
C_noret_decl(f_2126)
static void C_ccall f_2126(C_word c,C_word *av) C_noret;
C_noret_decl(f_2129)
static void C_ccall f_2129(C_word c,C_word *av) C_noret;
C_noret_decl(f_1798)
static void C_ccall f_1798(C_word c,C_word *av) C_noret;
C_noret_decl(f_1793)
static void C_ccall f_1793(C_word c,C_word *av) C_noret;
C_noret_decl(f_1790)
static void C_ccall f_1790(C_word c,C_word *av) C_noret;
C_noret_decl(f_1426)
static void C_fcall f_1426(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1421)
static void C_ccall f_1421(C_word c,C_word *av) C_noret;
C_noret_decl(f_1088)
static void C_ccall f_1088(C_word c,C_word *av) C_noret;
C_noret_decl(f2309)
static void C_ccall f2309(C_word c,C_word *av) C_noret;
C_noret_decl(f2302)
static void C_ccall f2302(C_word c,C_word *av) C_noret;
C_noret_decl(f_1037)
static void C_fcall f_1037(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1035)
static void C_ccall f_1035(C_word c,C_word *av) C_noret;
C_noret_decl(f2314)
static void C_ccall f2314(C_word c,C_word *av) C_noret;
C_noret_decl(f_1013)
static void C_ccall f_1013(C_word c,C_word *av) C_noret;
C_noret_decl(f_982)
static void C_ccall f_982(C_word c,C_word *av) C_noret;
C_noret_decl(f_985)
static void C_ccall f_985(C_word c,C_word *av) C_noret;
C_noret_decl(f_997)
static void C_ccall f_997(C_word c,C_word *av) C_noret;
C_noret_decl(f_1062)
static void C_ccall f_1062(C_word c,C_word *av) C_noret;
C_noret_decl(f_1898)
static void C_ccall f_1898(C_word c,C_word *av) C_noret;
C_noret_decl(f_1020)
static void C_ccall f_1020(C_word c,C_word *av) C_noret;
C_noret_decl(f_1025)
static void C_fcall f_1025(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1891)
static void C_ccall f_1891(C_word c,C_word *av) C_noret;
C_noret_decl(f_973)
static void C_ccall f_973(C_word c,C_word *av) C_noret;
C_noret_decl(f_2072)
static void C_ccall f_2072(C_word c,C_word *av) C_noret;
C_noret_decl(f_960)
static void C_ccall f_960(C_word c,C_word *av) C_noret;
C_noret_decl(f_963)
static void C_ccall f_963(C_word c,C_word *av) C_noret;
C_noret_decl(f_2080)
static void C_ccall f_2080(C_word c,C_word *av) C_noret;
C_noret_decl(f_979)
static void C_ccall f_979(C_word c,C_word *av) C_noret;
C_noret_decl(f_1009)
static void C_ccall f_1009(C_word c,C_word *av) C_noret;
C_noret_decl(f_1743)
static void C_fcall f_1743(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1003)
static void C_ccall f_1003(C_word c,C_word *av) C_noret;
C_noret_decl(f_951)
static void C_ccall f_951(C_word c,C_word *av) C_noret;
C_noret_decl(f_957)
static void C_ccall f_957(C_word c,C_word *av) C_noret;
C_noret_decl(f_1768)
static void C_ccall f_1768(C_word c,C_word *av) C_noret;
C_noret_decl(f_930)
static void C_fcall f_930(C_word t0) C_noret;
C_noret_decl(f_947)
static void C_ccall f_947(C_word c,C_word *av) C_noret;
C_noret_decl(f_924)
static void C_ccall f_924(C_word c,C_word *av) C_noret;
C_noret_decl(f_920)
static void C_ccall f_920(C_word c,C_word *av) C_noret;
C_noret_decl(f_914)
static void C_ccall f_914(C_word c,C_word *av) C_noret;
C_noret_decl(f_911)
static void C_ccall f_911(C_word c,C_word *av) C_noret;
C_noret_decl(f_1918)
static void C_ccall f_1918(C_word c,C_word *av) C_noret;
C_noret_decl(f_1914)
static void C_ccall f_1914(C_word c,C_word *av) C_noret;
C_noret_decl(f_902)
static void C_ccall f_902(C_word c,C_word *av) C_noret;
C_noret_decl(f_1700)
static void C_fcall f_1700(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_917)
static void C_ccall f_917(C_word c,C_word *av) C_noret;
C_noret_decl(f_1187)
static void C_ccall f_1187(C_word c,C_word *av) C_noret;
C_noret_decl(f_905)
static void C_ccall f_905(C_word c,C_word *av) C_noret;
C_noret_decl(f_908)
static void C_ccall f_908(C_word c,C_word *av) C_noret;
C_noret_decl(f_1176)
static void C_ccall f_1176(C_word c,C_word *av) C_noret;
C_noret_decl(f_1193)
static void C_fcall f_1193(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1191)
static void C_ccall f_1191(C_word c,C_word *av) C_noret;
C_noret_decl(f_2133)
static void C_ccall f_2133(C_word c,C_word *av) C_noret;
C_noret_decl(f_1394)
static void C_fcall f_1394(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1385)
static void C_ccall f_1385(C_word c,C_word *av) C_noret;
C_noret_decl(f_1383)
static void C_ccall f_1383(C_word c,C_word *av) C_noret;
C_noret_decl(f_1146)
static void C_ccall f_1146(C_word c,C_word *av) C_noret;
C_noret_decl(f_1803)
static void C_ccall f_1803(C_word c,C_word *av) C_noret;
C_noret_decl(f_1807)
static void C_ccall f_1807(C_word c,C_word *av) C_noret;
C_noret_decl(f_1139)
static void C_fcall f_1139(C_word t0) C_noret;

C_noret_decl(trf_1151)
static void C_ccall trf_1151(C_word c,C_word *av) C_noret;
static void C_ccall trf_1151(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1151(t0,t1,t2);}

C_noret_decl(trf_1997)
static void C_ccall trf_1997(C_word c,C_word *av) C_noret;
static void C_ccall trf_1997(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1997(t0,t1);}

C_noret_decl(trf_1354)
static void C_ccall trf_1354(C_word c,C_word *av) C_noret;
static void C_ccall trf_1354(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1354(t0,t1,t2);}

C_noret_decl(trf_2035)
static void C_ccall trf_2035(C_word c,C_word *av) C_noret;
static void C_ccall trf_2035(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2035(t0,t1,t2);}

C_noret_decl(trf_1559)
static void C_ccall trf_1559(C_word c,C_word *av) C_noret;
static void C_ccall trf_1559(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1559(t0,t1,t2,t3);}

C_noret_decl(trf_1603)
static void C_ccall trf_1603(C_word c,C_word *av) C_noret;
static void C_ccall trf_1603(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1603(t0,t1);}

C_noret_decl(trf_1572)
static void C_ccall trf_1572(C_word c,C_word *av) C_noret;
static void C_ccall trf_1572(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1572(t0,t1);}

C_noret_decl(trf_1520)
static void C_ccall trf_1520(C_word c,C_word *av) C_noret;
static void C_ccall trf_1520(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1520(t0,t1,t2);}

C_noret_decl(trf_1123)
static void C_ccall trf_1123(C_word c,C_word *av) C_noret;
static void C_ccall trf_1123(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1123(t0,t1);}

C_noret_decl(trf_1297)
static void C_ccall trf_1297(C_word c,C_word *av) C_noret;
static void C_ccall trf_1297(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1297(t0,t1,t2);}

C_noret_decl(trf_1101)
static void C_ccall trf_1101(C_word c,C_word *av) C_noret;
static void C_ccall trf_1101(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1101(t0,t1,t2,t3);}

C_noret_decl(trf_1844)
static void C_ccall trf_1844(C_word c,C_word *av) C_noret;
static void C_ccall trf_1844(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1844(t0,t1);}

C_noret_decl(trf_1642)
static void C_ccall trf_1642(C_word c,C_word *av) C_noret;
static void C_ccall trf_1642(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1642(t0,t1,t2);}

C_noret_decl(trf_1426)
static void C_ccall trf_1426(C_word c,C_word *av) C_noret;
static void C_ccall trf_1426(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1426(t0,t1,t2);}

C_noret_decl(trf_1037)
static void C_ccall trf_1037(C_word c,C_word *av) C_noret;
static void C_ccall trf_1037(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1037(t0,t1,t2);}

C_noret_decl(trf_1025)
static void C_ccall trf_1025(C_word c,C_word *av) C_noret;
static void C_ccall trf_1025(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1025(t0,t1,t2);}

C_noret_decl(trf_1743)
static void C_ccall trf_1743(C_word c,C_word *av) C_noret;
static void C_ccall trf_1743(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1743(t0,t1,t2);}

C_noret_decl(trf_930)
static void C_ccall trf_930(C_word c,C_word *av) C_noret;
static void C_ccall trf_930(C_word c,C_word *av){
C_word t0=av[0];
f_930(t0);}

C_noret_decl(trf_1700)
static void C_ccall trf_1700(C_word c,C_word *av) C_noret;
static void C_ccall trf_1700(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1700(t0,t1,t2);}

C_noret_decl(trf_1193)
static void C_ccall trf_1193(C_word c,C_word *av) C_noret;
static void C_ccall trf_1193(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1193(t0,t1,t2,t3);}

C_noret_decl(trf_1394)
static void C_ccall trf_1394(C_word c,C_word *av) C_noret;
static void C_ccall trf_1394(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1394(t0,t1,t2);}

C_noret_decl(trf_1139)
static void C_ccall trf_1139(C_word c,C_word *av) C_noret;
static void C_ccall trf_1139(C_word c,C_word *av){
C_word t0=av[0];
f_1139(t0);}

/* map-loop240 in k1144 in main#gather-all-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_fcall f_1151(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1151,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1176,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:80: g246 */
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

/* a1579 in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1580,2,av);}
/* chicken-status.scm:168: g398 */
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[54];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1597 in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1598,2,av);}
/* chicken-status.scm:172: g405 */
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[57];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k1995 in k1842 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_fcall f_1997(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_1997,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2006,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2080,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:241: substring */
t5=*((C_word*)lf[95]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f2314,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:139: print */
t5=*((C_word*)lf[36]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[74];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[6];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[5]);
/* chicken-status.scm:246: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1559(t5,((C_word*)t0)[4],t3,t4);}}

/* k1591 in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1593,2,av);}
/* chicken-status.scm:173: exit */
t2=C_fast_retrieve(lf[53]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

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
if(C_unlikely(!C_demand_2(404))){
C_save(t1);
C_rereclaim2(404*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,103);
lf[6]=C_h_intern(&lf[6],7,"sprintf");
lf[7]=C_h_intern(&lf[7],13,"make-pathname");
lf[8]=C_h_intern(&lf[8],17,"get-output-string");
lf[9]=C_h_intern(&lf[9],9,"\003sysprint");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000\010chicken/");
lf[11]=C_h_intern(&lf[11],18,"open-output-string");
lf[12]=C_h_intern(&lf[12],17,"\003syspeek-c-string");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\014lib/chicken/");
lf[14]=C_h_intern(&lf[14],15,"repository-path");
lf[16]=C_h_intern(&lf[16],14,"irregex-search");
lf[17]=C_h_intern(&lf[17],6,"filter");
lf[19]=C_h_intern(&lf[19],17,"delete-duplicates");
lf[20]=C_h_intern(&lf[20],8,"string=\077");
lf[21]=C_h_intern(&lf[21],3,"map");
lf[22]=C_h_intern(&lf[22],11,"concatenate");
lf[25]=C_h_intern(&lf[25],8,"egg-name");
lf[26]=C_h_intern(&lf[26],19,"setup-api#read-info");
lf[27]=C_h_intern(&lf[27],13,"pathname-file");
lf[28]=C_h_intern(&lf[28],4,"glob");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\012setup-info");
lf[32]=C_h_intern(&lf[32],17,"\003sysstring-append");
lf[33]=C_h_intern(&lf[33],11,"make-string");
lf[35]=C_h_intern(&lf[35],7,"version");
lf[36]=C_h_intern(&lf[36],5,"print");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\012 version: ");
lf[38]=C_h_intern(&lf[38],8,"->string");
lf[39]=C_h_intern(&lf[39],13,"string-append");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[41]=C_h_intern(&lf[41],8,"for-each");
lf[42]=C_h_intern(&lf[42],4,"sort");
lf[43]=C_h_intern(&lf[43],8,"string<\077");
lf[44]=C_h_intern(&lf[44],19,"\003sysstandard-output");
lf[45]=C_h_intern(&lf[45],3,"min");
lf[46]=C_h_intern(&lf[46],13,"terminal-size");
lf[47]=C_h_intern(&lf[47],14,"terminal-port\077");
lf[50]=C_h_intern(&lf[50],5,"files");
lf[51]=C_h_intern(&lf[51],10,"append-map");
lf[52]=C_h_intern(&lf[52],25,"\003sysimplicit-exit-handler");
lf[53]=C_h_intern(&lf[53],4,"exit");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000 -eggs cannot be used with -list.");
lf[55]=C_h_intern(&lf[55],19,"with-output-to-port");
lf[56]=C_h_intern(&lf[56],18,"\003sysstandard-error");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000B`-deploy\047 only makes sense in combination with `-prefix DIRECTORY`");
lf[58]=C_h_intern(&lf[58],7,"irregex");
lf[59]=C_h_intern(&lf[59],7,"display");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\007(none)\012");
lf[61]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002.\052\376\377\016");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\001^");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\001$");
lf[64]=C_h_intern(&lf[64],13,"irregex-quote");
lf[65]=C_h_intern(&lf[65],16,"\003sysglob->regexp");
lf[66]=C_h_intern(&lf[66],2,"pp");
lf[67]=C_h_intern(&lf[67],14,"string->symbol");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\013\012target at ");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\002:\012");
lf[70]=C_h_intern(&lf[70],16,"\003sysdynamic-wind");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\010host at ");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\002:\012");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\005-help");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\002\351usage: chicken-status [OPTION | PATTERN] ...\012\012  -h   -help                 "
"   show this message\012       -version                 show version and exit\012  -f "
"  -files                   list installed files\012       -exact                   "
"treat PATTERN as exact match (not a pattern)\012       -host                    whe"
"n cross-compiling, show status of host extensions only\012       -target           "
"       when cross-compiling, show status of target extensions only\012  -p   -prefi"
"x PREFIX           change installation prefix to PREFIX\012       -deploy          "
"        prefix is a deployment directory\012       -list                    dump in"
"stalled extensions and their versions in \042override\042 format\012  -e   -eggs         "
"           list installed eggs");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\005-host");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\007-target");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\007-deploy");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\002-p");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\007-prefix");
lf[80]=C_h_intern(&lf[80],18,"normalize-pathname");
lf[81]=C_h_intern(&lf[81],17,"current-directory");
lf[82]=C_h_intern(&lf[82],18,"absolute-pathname\077");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\006-exact");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\005-list");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\002-f");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\006-files");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\002-e");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\005-eggs");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\010-version");
lf[90]=C_h_intern(&lf[90],15,"chicken-version");
lf[91]=C_h_intern(&lf[91],6,"append");
lf[92]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000f\376\003\000\000\002\376\377\012\000\000p\376\377\016");
lf[93]=C_h_intern(&lf[93],5,"every");
lf[94]=C_h_intern(&lf[94],16,"\003sysstring->list");
lf[95]=C_h_intern(&lf[95],9,"substring");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\002-h");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\006--help");
lf[98]=C_h_intern(&lf[98],22,"command-line-arguments");
lf[99]=C_h_intern(&lf[99],8,"feature\077");
lf[100]=C_h_intern(&lf[100],14,"\000cross-chicken");
lf[101]=C_h_intern(&lf[101],11,"\003sysrequire");
lf[102]=C_h_intern(&lf[102],9,"setup-api");
C_register_lf2(lf,103,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_890,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* for-each-loop296 in k1344 in k1294 in main#list-installed-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_fcall f_1354(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1354,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1364,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:101: g297 */
t5=((C_word*)t0)[3];
f_1297(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1510 in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1512(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1512,2,av);}
a=C_alloc(5);
t2=C_i_check_list_2(t1,lf[41]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1520,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_1520(t6,((C_word*)t0)[2],t1);}

/* map-loop562 in k2010 in k2004 in k1995 in k1842 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_fcall f_2035(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2035,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_string(&a,2,C_make_character(45),t3);
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

/* k2029 in k2010 in k2004 in k1995 in k1842 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_2031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2031,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken-status.scm:243: append */
t4=*((C_word*)lf[91]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1344 in k1294 in main#list-installed-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1346(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1346,2,av);}
a=C_alloc(6);
t2=C_i_check_list_2(t1,lf[41]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1354,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1354(t6,((C_word*)t0)[3],t1);}

/* k1905 in k1889 in k1842 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1907,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_1898(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1914,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1918,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:221: current-directory */
t4=C_fast_retrieve(lf[81]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1492 in k1488 in k1503 in for-each-loop356 in k1510 in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1494,2,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* chicken-status.scm:135: pp */
t3=C_fast_retrieve(lf[66]);{
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

/* k1341 in g297 in k1294 in main#list-installed-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1343,2,av);}
/* chicken-status.scm:105: setup-api#read-info */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[26]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k1488 in k1503 in for-each-loop356 in k1510 in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1490(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1490,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1494,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=C_i_cadr(((C_word*)t0)[3]);
/* chicken-status.scm:135: ->string */
t5=C_fast_retrieve(lf[38]);{
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
else{
/* chicken-status.scm:135: ->string */
t4=C_fast_retrieve(lf[38]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k1362 in for-each-loop296 in k1344 in k1294 in main#list-installed-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
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
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1354(t3,((C_word*)t0)[4],t2);}

/* k1469 in a1452 in main#list-installed-files in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1471,2,av);}
/* chicken-status.scm:124: setup-api#read-info */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[26]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_fcall f_1559(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_1559,4,t0,t1,t2,t3);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1572,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t5=((C_word*)((C_word*)t0)[5])[1];
if(C_truep(t5)){
t6=t4;
f_1572(t6,t5);}
else{
t6=((C_word*)((C_word*)t0)[3])[1];
t7=t4;
f_1572(t7,t6);}}
else{
t5=t4;
f_1572(t5,C_SCHEME_FALSE);}}
else{
t4=C_i_car(t2);
t5=t4;
t6=C_i_string_equal_p(t5,lf[73]);
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1844,a[2]=t1,a[3]=t5,a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[2],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t6)){
t8=t7;
f_1844(t8,t6);}
else{
t8=C_u_i_string_equal_p(t5,lf[96]);
if(C_truep(t8)){
t9=t7;
f_1844(t9,t8);}
else{
t9=C_u_i_string_equal_p(t5,lf[97]);
t10=t7;
f_1844(t10,t9);}}}}

/* k1665 in map-loop412 in k1608 in status in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1667(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1667,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1642(t6,((C_word*)t0)[5],t5);}

/* status in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_fcall f_1603(C_word t0,C_word t1){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(26,0,3)))){
C_save_and_reclaim_args((void *)trf_1603,2,t0,t1);}
a=C_alloc(26);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_fast_retrieve(lf[58]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1610,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=t6,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=lf[61];
f_1610(2,av2);}}
else{
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=((C_word*)t0)[4];
t13=C_i_check_list_2(t12,lf[21]);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1700,a[2]=t10,a[3]=t15,a[4]=t11,tmp=(C_word)a,a+=5,tmp));
t17=((C_word*)t15)[1];
f_1700(t17,t7,t12);}
else{
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=C_fast_retrieve(lf[65]);
t13=((C_word*)t0)[4];
t14=C_i_check_list_2(t13,lf[21]);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1743,a[2]=t10,a[3]=t16,a[4]=t12,a[5]=t11,tmp=(C_word)a,a+=6,tmp));
t18=((C_word*)t16)[1];
f_1743(t18,t7,t13);}}}

/* k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_fcall f_1572(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_1572,2,t0,t1);}
a=C_alloc(13);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1575,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1580,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:167: with-output-to-port */
t4=C_fast_retrieve(lf[55]);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=*((C_word*)lf[56]+1);
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=(C_truep(C_retrieve2(lf[4],"main#\052deploy\052"))?C_i_not(C_retrieve2(lf[3],"main#\052prefix\052")):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1593,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1598,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:171: with-output-to-port */
t5=C_fast_retrieve(lf[55]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=*((C_word*)lf[56]+1);
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1603,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=((C_word*)t0)[2];
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1512,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:136: gather-all-extensions */
f_1139(t5);}
else{
t4=(C_truep(C_retrieve2(lf[1],"main#\052host-extensions\052"))?C_retrieve2(lf[2],"main#\052target-extensions\052"):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1790,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1823,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:194: repo-path */
f_930(t6);}
else{
/* chicken-status.scm:199: status */
t5=t3;
f_1603(t5,((C_word*)t0)[2]);}}}}}

/* k1465 in a1452 in main#list-installed-files in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1467,2,av);}
t2=C_i_assq(lf[50],t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(C_truep(t2)?C_i_cdr(t2):C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1267 in k1264 in main#list-installed-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1269,2,av);}
if(C_truep(C_i_zerop(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fix(80);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* chicken-status.scm:98: min */
t2=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(80);
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k1264 in main#list-installed-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1266,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1269,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1280,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1286,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:95: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fix(80);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1982 in k1842 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1984,2,av);}
/* chicken-status.scm:237: exit */
t2=C_fast_retrieve(lf[53]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f2297 in k1842 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f2297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f2297,2,av);}
/* chicken-status.scm:154: exit */
t2=C_fast_retrieve(lf[53]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* for-each-loop356 in k1510 in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_fcall f_1520(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_1520,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1530,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1505,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1509,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:134: repo-path */
f_930(t8);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1322 in k1309 in k1337 in g297 in k1294 in main#list-installed-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1324,2,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[32]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[32]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[37];
av2[3]=t1;
tp(4,av2);}}

/* a1452 in main#list-installed-files in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1453(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1453,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1467,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1471,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:124: repo-path */
f_930(t4);}

/* k1573 in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1575,2,av);}
/* chicken-status.scm:169: exit */
t2=C_fast_retrieve(lf[53]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k1449 in main#list-installed-files in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1451,2,av);}
/* chicken-status.scm:121: sort */
t2=C_fast_retrieve(lf[42]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=*((C_word*)lf[43]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1337 in g297 in k1294 in main#list-installed-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1339(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1339,2,av);}
a=C_alloc(9);
t2=C_i_assq(lf[35],t1);
t3=t2;
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1311,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1332,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:108: string-append */
t6=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[40];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
/* chicken-status.scm:112: print */
t4=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k1528 in for-each-loop356 in k1510 in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1530,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1520(t3,((C_word*)t0)[4],t2);}

/* k1330 in k1337 in g297 in k1294 in main#list-installed-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1332,2,av);}
a=C_alloc(6);
/* chicken-status.scm:108: format-string */
f_1193(((C_word*)t0)[2],t1,((C_word*)t0)[3],C_a_i_list(&a,2,C_SCHEME_FALSE,C_make_character(46)));}

/* k1109 in loop in k1097 in main#gather-eggs in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1111(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1111,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1123,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=C_i_member(t2,((C_word*)t0)[2]);
t5=t3;
f_1123(t5,C_i_not(t4));}
else{
t4=t3;
f_1123(t4,C_SCHEME_FALSE);}}

/* k1507 in for-each-loop356 in k1510 in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1509,2,av);}
/* chicken-status.scm:134: setup-api#read-info */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[26]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k1503 in for-each-loop356 in k1510 in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1505(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1505,2,av);}
a=C_alloc(4);
t2=C_i_assq(lf[35],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1490,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:135: string->symbol */
t5=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1121 in k1109 in loop in k1097 in main#gather-eggs in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_fcall f_1123(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_1123,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-status.scm:75: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1101(t5,((C_word*)t0)[6],t2,t4);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-status.scm:75: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1101(t5,((C_word*)t0)[6],t2,t4);}}

/* k1317 in k1309 in k1337 in g297 in k1294 in main#list-installed-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1319,2,av);}
a=C_alloc(6);
/* chicken-status.scm:109: format-string */
f_1193(((C_word*)t0)[2],t1,((C_word*)t0)[3],C_a_i_list(&a,2,C_SCHEME_TRUE,C_make_character(46)));}

/* k1313 in k1309 in k1337 in g297 in k1294 in main#list-installed-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1315,2,av);}
/* chicken-status.scm:107: print */
t2=*((C_word*)lf[36]+1);{
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

/* k1309 in k1337 in g297 in k1294 in main#list-installed-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1311(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1311,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1315,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1319,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1324,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_i_cadr(((C_word*)t0)[4]);
/* chicken-status.scm:110: ->string */
t7=C_fast_retrieve(lf[38]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k1614 in k1608 in status in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1616,2,av);}
a=C_alloc(5);
t2=(C_truep(((C_word*)((C_word*)t0)[2])[1])?C_retrieve2(lf[24],"main#gather-eggs"):C_retrieve2(lf[18],"main#gather-extensions"));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1622,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:176: g494 */
t4=t2;{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1608 in status in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1610(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_1610,2,av);}
a=C_alloc(13);
t2=C_i_check_list_2(t1,lf[21]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1616,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1642,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1642(t7,t3,t1);}

/* k1434 in for-each-loop336 in k1419 in main#list-installed-files in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1436,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1426(t3,((C_word*)t0)[4],t2);}

/* k1690 in map-loop435 in status in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1692,2,av);}
/* chicken-status.scm:182: string-append */
t2=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[62];
av2[3]=t1;
av2[4]=lf[63];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k1294 in main#list-installed-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1296(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1296,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1297,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1346,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:113: sort */
t5=C_fast_retrieve(lf[42]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[43]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* g297 in k1294 in main#list-installed-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_fcall f_1297(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_1297,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1339,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1343,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:105: repo-path */
f_930(t4);}

/* k1210 in main#format-string in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1212,2,av);}
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

/* main#list-installed-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1292(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1292,3,av);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1296,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1383,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=*((C_word*)lf[44]+1);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1266,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:94: terminal-port? */
t8=C_fast_retrieve(lf[47]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
av2[2]=*((C_word*)lf[44]+1);
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k1620 in k1614 in k1608 in status in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1622,2,av);}
if(C_truep(C_i_nullp(t1))){
/* chicken-status.scm:187: display */
t2=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[60];
av2[3]=*((C_word*)lf[56]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t2=C_retrieve2(lf[48],"main#list-installed-eggs");
t3=C_retrieve2(lf[48],"main#list-installed-eggs");
/* chicken-status.scm:176: g496 */
t4=C_retrieve2(lf[48],"main#list-installed-eggs");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_1385(3,av2);}}
else{
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t2=C_retrieve2(lf[49],"main#list-installed-files");
t3=C_retrieve2(lf[49],"main#list-installed-files");
t4=C_retrieve2(lf[49],"main#list-installed-files");
/* chicken-status.scm:176: g496 */
t5=C_retrieve2(lf[49],"main#list-installed-files");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_1417(3,av2);}}
else{
t2=C_retrieve2(lf[34],"main#list-installed-extensions");
t3=C_retrieve2(lf[34],"main#list-installed-extensions");
t4=C_retrieve2(lf[34],"main#list-installed-extensions");
/* chicken-status.scm:176: g496 */
t5=C_retrieve2(lf[34],"main#list-installed-extensions");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_1292(3,av2);}}}}}

/* loop in k1097 in main#gather-eggs in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_fcall f_1101(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_1101,4,t0,t1,t2,t3);}
a=C_alloc(13);
if(C_truep(C_i_nullp(t3))){
t4=t2;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1111,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t3);
t6=t4;
t7=t5;
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1088,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1092,a[2]=t8,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:68: repo-path */
f_930(t9);}}

/* k1402 in for-each-loop317 in main#list-installed-eggs in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1404,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1394(t3,((C_word*)t0)[4],t2);}

/* a1285 in k1264 in main#list-installed-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,1)))){
C_save_and_reclaim((void*)f_1286,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_list_ref(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1723 in map-loop435 in status in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1725(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1725,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1700(t6,((C_word*)t0)[5],t5);}

/* a1815 in k1791 in k1788 in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1816(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1816,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[1],"main#\052host-extensions\052"));
t3=C_mutate2(&lf[1] /* (set! main#*host-extensions* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1812 in a1802 in k1791 in k1788 in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1814,2,av);}
/* chicken-status.scm:197: print */
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[68];
av2[3]=t1;
av2[4]=lf[69];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a1279 in k1264 in main#list-installed-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1280,2,av);}
/* chicken-status.scm:95: terminal-size */
t2=C_fast_retrieve(lf[46]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* main#list-installed-files in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1417(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1417,3,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1421,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1451,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1453,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:122: append-map */
t6=C_fast_retrieve(lf[51]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k1097 in main#gather-eggs in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1099(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1099,2,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1101,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_1101(t5,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,t1);}

/* k1090 in loop in k1097 in main#gather-eggs in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1092,2,av);}
/* chicken-status.scm:68: setup-api#read-info */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[26]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k1842 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_fcall f_1844(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_1844,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f2297,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:139: print */
t4=*((C_word*)lf[36]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[74];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[75]))){
t2=lf[2] /* main#*target-extensions* */ =C_SCHEME_FALSE;;
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-status.scm:207: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1559(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[76]))){
t2=lf[1] /* main#*host-extensions* */ =C_SCHEME_FALSE;;
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-status.scm:210: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1559(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[77],((C_word*)t0)[3]))){
t2=lf[4] /* main#*deploy* */ =C_SCHEME_TRUE;;
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-status.scm:213: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1559(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6]);}
else{
t2=C_u_i_string_equal_p(((C_word*)t0)[3],lf[78]);
t3=(C_truep(t2)?t2:C_u_i_string_equal_p(((C_word*)t0)[3],lf[79]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1891,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
if(C_truep(C_i_pairp(t6))){
t7=t4;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_1891(2,av2);}}
else{
t7=t4;
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f2302,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:139: print */
t9=*((C_word*)lf[36]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[74];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[83]))){
t4=C_set_block_item(((C_word*)t0)[7],0,C_SCHEME_TRUE);
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* chicken-status.scm:225: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_1559(t7,((C_word*)t0)[2],t6,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[84]))){
t4=C_set_block_item(((C_word*)t0)[8],0,C_SCHEME_TRUE);
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* chicken-status.scm:228: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_1559(t7,((C_word*)t0)[2],t6,((C_word*)t0)[6]);}
else{
t4=C_u_i_string_equal_p(((C_word*)t0)[3],lf[85]);
t5=(C_truep(t4)?t4:C_u_i_string_equal_p(((C_word*)t0)[3],lf[86]));
if(C_truep(t5)){
t6=C_set_block_item(((C_word*)t0)[9],0,C_SCHEME_TRUE);
t7=((C_word*)t0)[4];
t8=C_u_i_cdr(t7);
/* chicken-status.scm:231: loop */
t9=((C_word*)((C_word*)t0)[5])[1];
f_1559(t9,((C_word*)t0)[2],t8,((C_word*)t0)[6]);}
else{
t6=C_u_i_string_equal_p(((C_word*)t0)[3],lf[87]);
t7=(C_truep(t6)?t6:C_u_i_string_equal_p(((C_word*)t0)[3],lf[88]));
if(C_truep(t7)){
t8=C_set_block_item(((C_word*)t0)[10],0,C_SCHEME_TRUE);
t9=((C_word*)t0)[4];
t10=C_u_i_cdr(t9);
/* chicken-status.scm:234: loop */
t11=((C_word*)((C_word*)t0)[5])[1];
f_1559(t11,((C_word*)t0)[2],t10,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[89]))){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1984,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1991,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:236: chicken-version */
t10=C_fast_retrieve(lf[90]);{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1997,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t9=C_block_size(((C_word*)t0)[3]);
if(C_truep(C_fixnum_greaterp(t9,C_fix(0)))){
t10=C_i_string_ref(((C_word*)t0)[3],C_fix(0));
t11=t8;
f_1997(t11,C_u_i_char_equalp(C_make_character(45),t10));}
else{
t10=t8;
f_1997(t10,C_SCHEME_FALSE);}}}}}}}}}}}}

/* k1989 in k1842 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1991,2,av);}
/* chicken-status.scm:236: print */
t2=*((C_word*)lf[36]+1);{
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

/* k2004 in k1995 in k1842 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_2006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2006,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2012,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2072,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:242: every */
t5=C_fast_retrieve(lf[93]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k894 in k891 in k888 */
static void C_ccall f_896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_896,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_899,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d1_toplevel(2,av2);}}

/* k891 in k888 */
static void C_ccall f_893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_893,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_896,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k888 */
static void C_ccall f_890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_890,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_893,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* main#gather-eggs in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1071,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1099,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:71: gather-extensions */
t4=C_retrieve2(lf[18],"main#gather-extensions");{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
f_1009(3,av2);}}

/* k897 in k894 in k891 in k888 */
static void C_ccall f_899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_899,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_902,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k1821 in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1823,2,av);}
/* chicken-status.scm:194: print */
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[71];
av2[3]=t1;
av2[4]=lf[72];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop412 in k1608 in status in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_fcall f_1642(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1642,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1667,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:178: g418 */
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

/* k2010 in k2004 in k1995 in k1842 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_2012(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_2012,2,av);}
a=C_alloc(21);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2019,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2031,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2035,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_2035(t11,t7,((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f2309,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:139: print */
t4=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[74];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k2017 in k2010 in k2004 in k1995 in k1842 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_2019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2019,2,av);}
/* chicken-status.scm:243: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1559(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2121 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_2123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2123,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2126,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2129,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[52]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[52]+1);
av2[1]=t3;
tp(2,av2);}}

/* k2124 in k2121 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_2126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2126,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2127 in k2121 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_2129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2129,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a1797 in k1791 in k1788 in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1798(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1798,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[1],"main#\052host-extensions\052"));
t3=C_mutate2(&lf[1] /* (set! main#*host-extensions* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1791 in k1788 in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1793(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_1793,2,av);}
a=C_alloc(15);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1798,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1803,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1816,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:196: ##sys#dynamic-wind */
t9=*((C_word*)lf[70]+1);{
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

/* k1788 in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1790,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1793,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:195: status */
t3=((C_word*)t0)[2];
f_1603(t3,t2);}

/* for-each-loop336 in k1419 in main#list-installed-files in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_fcall f_1426(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1426,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1436,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:118: g337 */
t5=*((C_word*)lf[36]+1);{
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

/* k1419 in main#list-installed-files in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1421(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1421,2,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1426,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_1426(t5,((C_word*)t0)[2],t1);}

/* k1086 in loop in k1097 in main#gather-eggs in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1088,2,av);}
t2=C_i_assq(lf[25],t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(C_truep(t2)?C_i_cadr(t2):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f2309 in k2010 in k2004 in k1995 in k1842 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f2309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f2309,2,av);}
/* chicken-status.scm:154: exit */
t2=C_fast_retrieve(lf[53]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f2302 in k1842 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f2302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f2302,2,av);}
/* chicken-status.scm:154: exit */
t2=C_fast_retrieve(lf[53]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* map-loop193 in k1011 in main#gather-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_fcall f_1037(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1037,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1062,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:63: g199 */
t5=((C_word*)t0)[4];
f_1025(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1033 in k1011 in main#gather-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1035,2,av);}
/* chicken-status.scm:63: concatenate */
t2=C_fast_retrieve(lf[22]);{
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

/* f2314 in k1995 in k1842 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f2314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f2314,2,av);}
/* chicken-status.scm:154: exit */
t2=C_fast_retrieve(lf[53]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k1011 in main#gather-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1013(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_1013,2,av);}
a=C_alloc(22);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1020,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1025,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t9=((C_word*)t0)[3];
t10=C_i_check_list_2(t9,lf[21]);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1035,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1037,a[2]=t6,a[3]=t13,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_1037(t15,t11,t9);}

/* k980 in k977 in k971 in main#repo-path in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_982,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_985,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:54: get-output-string */
t3=C_fast_retrieve(lf[8]);{
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

/* k983 in k980 in k977 in k971 in main#repo-path in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_985,2,av);}
/* chicken-status.scm:52: make-pathname */
t2=C_fast_retrieve(lf[7]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[3],"main#\052prefix\052");
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* main#grep in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_997(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_997,4,av);}
a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1003,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:58: filter */
t5=C_fast_retrieve(lf[17]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t1;
av2[2]=t4;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k1060 in map-loop193 in k1011 in main#gather-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1062(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1062,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1037(t6,((C_word*)t0)[5],t5);}

/* k1896 in k1889 in k1842 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1898(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1898,2,av);}
t2=C_mutate2(&lf[3] /* (set! main#*prefix* ...) */,t1);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
/* chicken-status.scm:222: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1559(t6,((C_word*)t0)[4],t5,((C_word*)t0)[5]);}

/* k1018 in k1011 in main#gather-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1020,2,av);}
/* chicken-status.scm:62: delete-duplicates */
t2=C_fast_retrieve(lf[19]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* g199 in k1011 in main#gather-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_fcall f_1025(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1025,3,t0,t1,t2);}
t3=C_retrieve2(lf[15],"main#grep");
/* chicken-status.scm:63: g216 */
t4=C_retrieve2(lf[15],"main#grep");{
C_word av2[4];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
f_997(4,av2);}}

/* k1889 in k1842 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1891(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_1891,2,av);}
a=C_alloc(10);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1898,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1907,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:218: absolute-pathname? */
t6=C_fast_retrieve(lf[82]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k971 in main#repo-path in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_973,2,av);}
a=C_alloc(5);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[6]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_979,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:54: ##sys#print */
t6=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[13];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* a2071 in k2004 in k1995 in k1842 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_2072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2072,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_memq(t2,lf[92]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k958 in k955 in k949 in k945 in main#repo-path in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_960,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_963,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:50: get-output-string */
t3=C_fast_retrieve(lf[8]);{
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

/* k961 in k958 in k955 in k949 in k945 in main#repo-path in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_963,2,av);}
/* chicken-status.scm:50: make-pathname */
t2=C_fast_retrieve(lf[7]);{
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

/* k2078 in k1995 in k1842 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_2080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2080,2,av);}
/* string->list */
t2=C_fast_retrieve(lf[94]);{
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

/* k977 in k971 in main#repo-path in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_979,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_982,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_fudge(C_fix(42));
/* chicken-status.scm:54: ##sys#print */
t4=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* main#gather-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1009(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1009,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1013,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:61: gather-all-extensions */
f_1139(t3);}

/* map-loop462 in status in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_fcall f_1743(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1743,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1768,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:184: g468 */
t5=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a1002 in main#grep in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1003,3,av);}
t3=C_fast_retrieve(lf[16]);
/* chicken-status.scm:58: g186 */
t4=C_fast_retrieve(lf[16]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k949 in k945 in main#repo-path in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_951(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_951,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[6]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_957,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-status.scm:50: ##sys#print */
t6=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[10];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k955 in k949 in k945 in main#repo-path in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_957,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_960,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:50: ##sys#print */
t3=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix((C_word)C_BINARY_VERSION);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1766 in map-loop462 in status in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1768(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1768,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1743(t6,((C_word*)t0)[5],t5);}

/* main#repo-path in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_fcall f_930(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_930,1,t1);}
a=C_alloc(6);
if(C_truep(C_retrieve2(lf[4],"main#\052deploy\052"))){
t2=C_retrieve2(lf[3],"main#\052prefix\052");
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_retrieve2(lf[3],"main#\052prefix\052");
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(C_truep(C_retrieve2(lf[0],"main#\052cross-chicken\052"))?C_i_not(C_retrieve2(lf[1],"main#\052host-extensions\052")):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_947,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[12]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[3],"main#\052prefix\052"))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_973,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:54: open-output-string */
t4=C_fast_retrieve(lf[11]);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* chicken-status.scm:55: repository-path */
t3=C_fast_retrieve(lf[14]);{
C_word av2[2];
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}}

/* k945 in main#repo-path in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_947,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_951,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:50: open-output-string */
t4=C_fast_retrieve(lf[11]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_924(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,5)))){
C_save_and_reclaim((void *)f_924,2,av);}
a=C_alloc(24);
t2=lf[0] /* main#*cross-chicken* */ =t1;;
t3=lf[1] /* main#*host-extensions* */ =C_retrieve2(lf[0],"main#\052cross-chicken\052");;
t4=lf[2] /* main#*target-extensions* */ =C_retrieve2(lf[0],"main#\052cross-chicken\052");;
t5=lf[3] /* main#*prefix* */ =C_SCHEME_FALSE;;
t6=lf[4] /* main#*deploy* */ =C_SCHEME_FALSE;;
t7=C_mutate2(&lf[5] /* (set! main#repo-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_930,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate2(&lf[15] /* (set! main#grep ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_997,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate2(&lf[18] /* (set! main#gather-extensions ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1009,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate2(&lf[24] /* (set! main#gather-eggs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1071,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate2(&lf[23] /* (set! main#gather-all-extensions ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1139,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate2(&lf[31] /* (set! main#format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1193,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate2(&lf[34] /* (set! main#list-installed-extensions ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1292,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate2(&lf[48] /* (set! main#list-installed-eggs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1385,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate2(&lf[49] /* (set! main#list-installed-files ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1417,tmp=(C_word)a,a+=2,tmp));
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2123,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2133,a[2]=t16,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:248: command-line-arguments */
t18=C_fast_retrieve(lf[98]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t18;
av2[1]=t17;
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}

/* k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_920,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_924,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:40: feature? */
t3=C_fast_retrieve(lf[99]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[100];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_914,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_917,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_files_toplevel(2,av2);}}

/* k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_911,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_914,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k1916 in k1905 in k1889 in k1842 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1918,2,av);}
/* chicken-status.scm:221: make-pathname */
t2=C_fast_retrieve(lf[7]);{
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

/* k1912 in k1905 in k1889 in k1842 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1914,2,av);}
/* chicken-status.scm:220: normalize-pathname */
t2=C_fast_retrieve(lf[80]);{
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

/* k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_902,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_905,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* map-loop435 in status in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_fcall f_1700(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_1700,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1725,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1692,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:182: irregex-quote */
t7=C_fast_retrieve(lf[64]);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_917,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_920,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:27: ##sys#require */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[101]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[101]+1);
av2[1]=t2;
av2[2]=lf[102];
tp(3,av2);}}

/* k1185 in main#gather-all-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1187,2,av);}
/* chicken-status.scm:81: glob */
t2=C_fast_retrieve(lf[28]);{
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

/* k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_905,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_908,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_utils_toplevel(2,av2);}}

/* k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_908,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_911,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_ports_toplevel(2,av2);}}

/* k1174 in map-loop240 in k1144 in main#gather-all-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1176(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1176,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1151(t6,((C_word*)t0)[5],t5);}

/* main#format-string in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_fcall f_1193(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1193,4,t1,t2,t3,t4);}
a=C_alloc(5);
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
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1212,a[2]=t7,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t16=C_fixnum_difference(t3,t14);
t17=C_i_fixnum_max(C_fix(0),t16);
/* chicken-status.scm:85: make-string */
t18=*((C_word*)lf[33]+1);{
C_word av2[4];
av2[0]=t18;
av2[1]=t15;
av2[2]=t17;
av2[3]=t11;
((C_proc)(void*)(*((C_word*)t18+1)))(4,av2);}}

/* k1189 in main#gather-all-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1191,2,av);}
/* chicken-status.scm:81: make-pathname */
t2=C_fast_retrieve(lf[7]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[29];
av2[4]=lf[30];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_2133(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_2133,2,av);}
a=C_alloc(17);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1559,a[2]=t5,a[3]=t3,a[4]=t9,a[5]=t7,a[6]=t11,tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_1559(t13,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* for-each-loop317 in main#list-installed-eggs in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_fcall f_1394(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1394,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1404,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:115: g318 */
t5=*((C_word*)lf[36]+1);{
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

/* main#list-installed-eggs in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1385(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1385,3,av);}
a=C_alloc(5);
t3=C_i_check_list_2(t2,lf[41]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1394,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_1394(t7,t1,t2);}

/* k1381 in main#list-installed-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1383,2,av);}
a=C_alloc(4);
t2=C_a_i_minus(&a,2,t1,C_fix(2));{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=C_fix(2);
C_quotient(4,av2);}}

/* k1144 in main#gather-all-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1146,2,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1151,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1151(t5,((C_word*)t0)[5],t1);}

/* a1802 in k1791 in k1788 in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1803(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1803,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1807,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1814,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:197: repo-path */
f_930(t3);}

/* k1805 in a1802 in k1791 in k1788 in k1570 in loop in k2131 in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_ccall f_1807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1807,2,av);}
/* chicken-status.scm:198: status */
t2=((C_word*)t0)[2];
f_1603(t2,((C_word*)t0)[3]);}

/* main#gather-all-extensions in k922 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in k888 */
static void C_fcall f_1139(C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,0,2)))){
C_save_and_reclaim_args((void *)trf_1139,1,t1);}
a=C_alloc(17);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_fast_retrieve(lf[27]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1146,a[2]=t4,a[3]=t6,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1187,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1191,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:81: repo-path */
f_930(t9);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[133] = {
{"f_1151:chicken_2dstatus_2escm",(void*)f_1151},
{"f_1580:chicken_2dstatus_2escm",(void*)f_1580},
{"f_1598:chicken_2dstatus_2escm",(void*)f_1598},
{"f_1997:chicken_2dstatus_2escm",(void*)f_1997},
{"f_1593:chicken_2dstatus_2escm",(void*)f_1593},
{"toplevel:chicken_2dstatus_2escm",(void*)C_toplevel},
{"f_1354:chicken_2dstatus_2escm",(void*)f_1354},
{"f_1512:chicken_2dstatus_2escm",(void*)f_1512},
{"f_2035:chicken_2dstatus_2escm",(void*)f_2035},
{"f_2031:chicken_2dstatus_2escm",(void*)f_2031},
{"f_1346:chicken_2dstatus_2escm",(void*)f_1346},
{"f_1907:chicken_2dstatus_2escm",(void*)f_1907},
{"f_1494:chicken_2dstatus_2escm",(void*)f_1494},
{"f_1343:chicken_2dstatus_2escm",(void*)f_1343},
{"f_1490:chicken_2dstatus_2escm",(void*)f_1490},
{"f_1364:chicken_2dstatus_2escm",(void*)f_1364},
{"f_1471:chicken_2dstatus_2escm",(void*)f_1471},
{"f_1559:chicken_2dstatus_2escm",(void*)f_1559},
{"f_1667:chicken_2dstatus_2escm",(void*)f_1667},
{"f_1603:chicken_2dstatus_2escm",(void*)f_1603},
{"f_1572:chicken_2dstatus_2escm",(void*)f_1572},
{"f_1467:chicken_2dstatus_2escm",(void*)f_1467},
{"f_1269:chicken_2dstatus_2escm",(void*)f_1269},
{"f_1266:chicken_2dstatus_2escm",(void*)f_1266},
{"f_1984:chicken_2dstatus_2escm",(void*)f_1984},
{"f2297:chicken_2dstatus_2escm",(void*)f2297},
{"f_1520:chicken_2dstatus_2escm",(void*)f_1520},
{"f_1324:chicken_2dstatus_2escm",(void*)f_1324},
{"f_1453:chicken_2dstatus_2escm",(void*)f_1453},
{"f_1575:chicken_2dstatus_2escm",(void*)f_1575},
{"f_1451:chicken_2dstatus_2escm",(void*)f_1451},
{"f_1339:chicken_2dstatus_2escm",(void*)f_1339},
{"f_1530:chicken_2dstatus_2escm",(void*)f_1530},
{"f_1332:chicken_2dstatus_2escm",(void*)f_1332},
{"f_1111:chicken_2dstatus_2escm",(void*)f_1111},
{"f_1509:chicken_2dstatus_2escm",(void*)f_1509},
{"f_1505:chicken_2dstatus_2escm",(void*)f_1505},
{"f_1123:chicken_2dstatus_2escm",(void*)f_1123},
{"f_1319:chicken_2dstatus_2escm",(void*)f_1319},
{"f_1315:chicken_2dstatus_2escm",(void*)f_1315},
{"f_1311:chicken_2dstatus_2escm",(void*)f_1311},
{"f_1616:chicken_2dstatus_2escm",(void*)f_1616},
{"f_1610:chicken_2dstatus_2escm",(void*)f_1610},
{"f_1436:chicken_2dstatus_2escm",(void*)f_1436},
{"f_1692:chicken_2dstatus_2escm",(void*)f_1692},
{"f_1296:chicken_2dstatus_2escm",(void*)f_1296},
{"f_1297:chicken_2dstatus_2escm",(void*)f_1297},
{"f_1212:chicken_2dstatus_2escm",(void*)f_1212},
{"f_1292:chicken_2dstatus_2escm",(void*)f_1292},
{"f_1622:chicken_2dstatus_2escm",(void*)f_1622},
{"f_1101:chicken_2dstatus_2escm",(void*)f_1101},
{"f_1404:chicken_2dstatus_2escm",(void*)f_1404},
{"f_1286:chicken_2dstatus_2escm",(void*)f_1286},
{"f_1725:chicken_2dstatus_2escm",(void*)f_1725},
{"f_1816:chicken_2dstatus_2escm",(void*)f_1816},
{"f_1814:chicken_2dstatus_2escm",(void*)f_1814},
{"f_1280:chicken_2dstatus_2escm",(void*)f_1280},
{"f_1417:chicken_2dstatus_2escm",(void*)f_1417},
{"f_1099:chicken_2dstatus_2escm",(void*)f_1099},
{"f_1092:chicken_2dstatus_2escm",(void*)f_1092},
{"f_1844:chicken_2dstatus_2escm",(void*)f_1844},
{"f_1991:chicken_2dstatus_2escm",(void*)f_1991},
{"f_2006:chicken_2dstatus_2escm",(void*)f_2006},
{"f_896:chicken_2dstatus_2escm",(void*)f_896},
{"f_893:chicken_2dstatus_2escm",(void*)f_893},
{"f_890:chicken_2dstatus_2escm",(void*)f_890},
{"f_1071:chicken_2dstatus_2escm",(void*)f_1071},
{"f_899:chicken_2dstatus_2escm",(void*)f_899},
{"f_1823:chicken_2dstatus_2escm",(void*)f_1823},
{"f_1642:chicken_2dstatus_2escm",(void*)f_1642},
{"f_2012:chicken_2dstatus_2escm",(void*)f_2012},
{"f_2019:chicken_2dstatus_2escm",(void*)f_2019},
{"f_2123:chicken_2dstatus_2escm",(void*)f_2123},
{"f_2126:chicken_2dstatus_2escm",(void*)f_2126},
{"f_2129:chicken_2dstatus_2escm",(void*)f_2129},
{"f_1798:chicken_2dstatus_2escm",(void*)f_1798},
{"f_1793:chicken_2dstatus_2escm",(void*)f_1793},
{"f_1790:chicken_2dstatus_2escm",(void*)f_1790},
{"f_1426:chicken_2dstatus_2escm",(void*)f_1426},
{"f_1421:chicken_2dstatus_2escm",(void*)f_1421},
{"f_1088:chicken_2dstatus_2escm",(void*)f_1088},
{"f2309:chicken_2dstatus_2escm",(void*)f2309},
{"f2302:chicken_2dstatus_2escm",(void*)f2302},
{"f_1037:chicken_2dstatus_2escm",(void*)f_1037},
{"f_1035:chicken_2dstatus_2escm",(void*)f_1035},
{"f2314:chicken_2dstatus_2escm",(void*)f2314},
{"f_1013:chicken_2dstatus_2escm",(void*)f_1013},
{"f_982:chicken_2dstatus_2escm",(void*)f_982},
{"f_985:chicken_2dstatus_2escm",(void*)f_985},
{"f_997:chicken_2dstatus_2escm",(void*)f_997},
{"f_1062:chicken_2dstatus_2escm",(void*)f_1062},
{"f_1898:chicken_2dstatus_2escm",(void*)f_1898},
{"f_1020:chicken_2dstatus_2escm",(void*)f_1020},
{"f_1025:chicken_2dstatus_2escm",(void*)f_1025},
{"f_1891:chicken_2dstatus_2escm",(void*)f_1891},
{"f_973:chicken_2dstatus_2escm",(void*)f_973},
{"f_2072:chicken_2dstatus_2escm",(void*)f_2072},
{"f_960:chicken_2dstatus_2escm",(void*)f_960},
{"f_963:chicken_2dstatus_2escm",(void*)f_963},
{"f_2080:chicken_2dstatus_2escm",(void*)f_2080},
{"f_979:chicken_2dstatus_2escm",(void*)f_979},
{"f_1009:chicken_2dstatus_2escm",(void*)f_1009},
{"f_1743:chicken_2dstatus_2escm",(void*)f_1743},
{"f_1003:chicken_2dstatus_2escm",(void*)f_1003},
{"f_951:chicken_2dstatus_2escm",(void*)f_951},
{"f_957:chicken_2dstatus_2escm",(void*)f_957},
{"f_1768:chicken_2dstatus_2escm",(void*)f_1768},
{"f_930:chicken_2dstatus_2escm",(void*)f_930},
{"f_947:chicken_2dstatus_2escm",(void*)f_947},
{"f_924:chicken_2dstatus_2escm",(void*)f_924},
{"f_920:chicken_2dstatus_2escm",(void*)f_920},
{"f_914:chicken_2dstatus_2escm",(void*)f_914},
{"f_911:chicken_2dstatus_2escm",(void*)f_911},
{"f_1918:chicken_2dstatus_2escm",(void*)f_1918},
{"f_1914:chicken_2dstatus_2escm",(void*)f_1914},
{"f_902:chicken_2dstatus_2escm",(void*)f_902},
{"f_1700:chicken_2dstatus_2escm",(void*)f_1700},
{"f_917:chicken_2dstatus_2escm",(void*)f_917},
{"f_1187:chicken_2dstatus_2escm",(void*)f_1187},
{"f_905:chicken_2dstatus_2escm",(void*)f_905},
{"f_908:chicken_2dstatus_2escm",(void*)f_908},
{"f_1176:chicken_2dstatus_2escm",(void*)f_1176},
{"f_1193:chicken_2dstatus_2escm",(void*)f_1193},
{"f_1191:chicken_2dstatus_2escm",(void*)f_1191},
{"f_2133:chicken_2dstatus_2escm",(void*)f_2133},
{"f_1394:chicken_2dstatus_2escm",(void*)f_1394},
{"f_1385:chicken_2dstatus_2escm",(void*)f_1385},
{"f_1383:chicken_2dstatus_2escm",(void*)f_1383},
{"f_1146:chicken_2dstatus_2escm",(void*)f_1146},
{"f_1803:chicken_2dstatus_2escm",(void*)f_1803},
{"f_1807:chicken_2dstatus_2escm",(void*)f_1807},
{"f_1139:chicken_2dstatus_2escm",(void*)f_1139},
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
o|hiding nonexported module bindings: main#*cross-chicken* 
o|hiding nonexported module bindings: main#*host-extensions* 
o|hiding nonexported module bindings: main#*target-extensions* 
o|hiding nonexported module bindings: main#*prefix* 
o|hiding nonexported module bindings: main#*deploy* 
o|hiding nonexported module bindings: main#repo-path 
o|hiding nonexported module bindings: main#grep 
o|hiding nonexported module bindings: main#gather-extensions 
o|hiding nonexported module bindings: main#gather-eggs 
o|hiding nonexported module bindings: main#gather-all-extensions 
o|hiding nonexported module bindings: main#format-string 
o|hiding nonexported module bindings: main#get-terminal-width 
o|hiding nonexported module bindings: main#list-installed-extensions 
o|hiding nonexported module bindings: main#list-installed-eggs 
o|hiding nonexported module bindings: main#list-installed-files 
o|hiding nonexported module bindings: main#dump-installed-versions 
o|hiding nonexported module bindings: main#usage 
o|hiding nonexported module bindings: main#*short-options* 
o|hiding nonexported module bindings: main#main 
S|applied compiler syntax:
S|  for-each		4
S|  map		6
S|  sprintf		2
o|eliminated procedure checks: 39 
o|specializations:
o|  1 (> fixnum fixnum)
o|  1 (char=? char char)
o|  1 (string-ref string fixnum)
o|  1 (positive? fixnum)
o|  2 (string-length string)
o|  1 (cddr (pair * pair))
o|  14 (string=? string string)
o|  3 (current-error-port)
o|  1 (current-output-port)
o|  3 (string-append string string)
o|  3 (##sys#check-list (or pair list) *)
o|  11 (cdr pair)
o|  2 (##sys#check-output-port * * *)
(o e)|safe calls: 166 
(o e)|assignments to immediate values: 3 
o|inlining procedure: k932 
o|propagated global variable: r9332134 main#*prefix* 
o|inlining procedure: k932 
o|substituted constant variable: a953 
o|substituted constant variable: a954 
o|inlining procedure: k964 
o|substituted constant variable: a975 
o|substituted constant variable: a976 
o|inlining procedure: k964 
o|propagated global variable: g186187 irregex-search 
o|inlining procedure: k1039 
o|inlining procedure: k1039 
o|inlining procedure: k1103 
o|inlining procedure: k1103 
o|inlining procedure: k1116 
o|inlining procedure: k1116 
o|contracted procedure: "(chicken-status.scm:74) egg-name227" 
o|inlining procedure: k1079 
o|inlining procedure: k1079 
o|inlining procedure: k1153 
o|inlining procedure: k1153 
o|merged explicitly consed rest parameter: tmp268271 
o|inlining procedure: k1213 
o|inlining procedure: k1213 
o|inlining procedure: k1261 
o|substituted constant variable: default-width285 
o|substituted constant variable: default-width285 
o|inlining procedure: k1261 
o|substituted constant variable: default-width285 
o|propagated global variable: cop286 ##sys#standard-output 
o|inlining procedure: k1302 
o|consed rest parameter at call site: "(chicken-status.scm:109) main#format-string" 3 
o|substituted constant variable: a1320 
o|consed rest parameter at call site: "(chicken-status.scm:108) main#format-string" 3 
o|inlining procedure: k1302 
o|inlining procedure: k1356 
o|inlining procedure: k1356 
o|inlining procedure: k1396 
o|inlining procedure: k1396 
o|inlining procedure: k1428 
o|inlining procedure: k1428 
o|inlining procedure: k1458 
o|inlining procedure: k1458 
o|contracted procedure: "(chicken-status.scm:248) main#main" 
o|inlining procedure: k1561 
o|inlining procedure: k1585 
o|inlining procedure: k1623 
o|inlining procedure: k1623 
o|inlining procedure: k1638 
o|propagated global variable: r16392172 main#list-installed-files 
o|inlining procedure: k1638 
o|propagated global variable: r16392173 main#list-installed-extensions 
o|inlining procedure: k1644 
o|inlining procedure: k1644 
o|inlining procedure: k1678 
o|inlining procedure: k1702 
o|contracted procedure: "(chicken-status.scm:181) g441450" 
o|inlining procedure: k1702 
o|inlining procedure: k1678 
o|inlining procedure: k1745 
o|inlining procedure: k1745 
o|inlining procedure: k1585 
o|contracted procedure: "(chicken-status.scm:192) main#dump-installed-versions" 
o|inlining procedure: k1522 
o|contracted procedure: "(chicken-status.scm:131) g357364" 
o|inlining procedure: k1496 
o|inlining procedure: k1496 
o|inlining procedure: k1522 
o|inlining procedure: k1782 
o|inlining procedure: k1782 
o|inlining procedure: k1830 
o|inlining procedure: k1830 
o|inlining procedure: k1561 
o|substituted constant variable: a1852 
o|inlining procedure: k1848 
o|inlining procedure: k1848 
o|substituted constant variable: a1863 
o|substituted constant variable: a1873 
o|inlining procedure: k1870 
o|inlining procedure: k1870 
o|substituted constant variable: a1885 
o|substituted constant variable: a1931 
o|inlining procedure: k1927 
o|inlining procedure: k1927 
o|substituted constant variable: a1942 
o|substituted constant variable: a1953 
o|inlining procedure: k1949 
o|inlining procedure: k1949 
o|substituted constant variable: a1967 
o|substituted constant variable: a1981 
o|inlining procedure: k1977 
o|inlining procedure: k1977 
o|inlining procedure: k1998 
o|inlining procedure: k2037 
o|contracted procedure: "(chicken-status.scm:243) g568577" 
o|inlining procedure: k2037 
o|substituted constant variable: main#*short-options* 
o|inlining procedure: k1998 
o|substituted constant variable: a2088 
o|substituted constant variable: a2106 
o|substituted constant variable: a2103 
o|substituted constant variable: a2109 
o|substituted constant variable: a2111 
o|substituted constant variable: a2113 
o|substituted constant variable: a2115 
o|inlining procedure: k2116 
o|inlining procedure: k2116 
o|substituted constant variable: a2120 
o|replaced variables: 231 
o|removed binding forms: 104 
o|substituted constant variable: r10802151 
o|contracted procedure: "(chicken-status.scm:102) main#get-terminal-width" 
o|substituted constant variable: r12622157 
o|substituted constant variable: r14592167 
o|removed side-effect free assignment to unused variable: main#*short-options* 
o|inlining procedure: k1632 
o|propagated global variable: r16332236 main#list-installed-eggs 
o|propagated global variable: r16332236 main#list-installed-eggs 
o|inlining procedure: k1632 
o|propagated global variable: r16332242 main#list-installed-files 
o|propagated global variable: r16332242 main#list-installed-files 
o|inlining procedure: k1632 
o|propagated global variable: r16332248 main#list-installed-extensions 
o|propagated global variable: r16332248 main#list-installed-extensions 
o|substituted constant variable: r14972186 
o|substituted constant variable: r14972186 
o|replaced variables: 3 
o|removed binding forms: 259 
o|inlining procedure: "(chicken-status.scm:204) main#usage" 
o|inlining procedure: "(chicken-status.scm:215) main#usage" 
o|inlining procedure: "(chicken-status.scm:244) main#usage" 
o|inlining procedure: "(chicken-status.scm:245) main#usage" 
o|replaced variables: 5 
o|removed binding forms: 14 
o|removed side-effect free assignment to unused variable: main#usage 
o|substituted constant variable: code3752295 
o|substituted constant variable: code3752300 
o|substituted constant variable: code3752307 
o|substituted constant variable: code3752312 
o|removed binding forms: 5 
o|removed binding forms: 5 
o|simplifications: ((if . 13) (##core#call . 108)) 
o|  call simplifications:
o|    string=?
o|    ##sys#size	2
o|    fx>
o|    string->list
o|    memq
o|    string
o|    list
o|    ##sys#call-with-values
o|    list-ref
o|    zero?
o|    -
o|    quotient
o|    cdr	3
o|    string-length
o|    fx-
o|    fxmax
o|    null?	8
o|    car	4
o|    assq	4
o|    cadr	4
o|    member
o|    ##sys#check-list	7
o|    pair?	11
o|    cons	14
o|    ##sys#setslot	6
o|    ##sys#slot	26
o|    not	3
o|    ##sys#fudge
o|contracted procedure: k938 
o|contracted procedure: k987 
o|contracted procedure: k1022 
o|contracted procedure: k1030 
o|contracted procedure: k1042 
o|contracted procedure: k1045 
o|contracted procedure: k1048 
o|contracted procedure: k1056 
o|contracted procedure: k1064 
o|contracted procedure: k1106 
o|contracted procedure: k1116 
o|contracted procedure: k1131 
o|contracted procedure: k1135 
o|contracted procedure: k1076 
o|contracted procedure: k1141 
o|contracted procedure: k1156 
o|contracted procedure: k1159 
o|contracted procedure: k1162 
o|contracted procedure: k1170 
o|contracted procedure: k1178 
o|contracted procedure: k1252 
o|contracted procedure: k1195 
o|contracted procedure: k1246 
o|contracted procedure: k1198 
o|contracted procedure: k1240 
o|contracted procedure: k1201 
o|contracted procedure: k1234 
o|contracted procedure: k1204 
o|contracted procedure: k1207 
o|contracted procedure: k1231 
o|contracted procedure: k1227 
o|contracted procedure: k1299 
o|contracted procedure: k1326 
o|contracted procedure: k1347 
o|contracted procedure: k1359 
o|contracted procedure: k1369 
o|contracted procedure: k1373 
o|contracted procedure: k1377 
o|contracted procedure: k1273 
o|contracted procedure: k1387 
o|contracted procedure: k1399 
o|contracted procedure: k1409 
o|contracted procedure: k1413 
o|contracted procedure: k1431 
o|contracted procedure: k1441 
o|contracted procedure: k1445 
o|contracted procedure: k1455 
o|contracted procedure: k1564 
o|contracted procedure: k1588 
o|contracted procedure: k1605 
o|contracted procedure: k1611 
o|contracted procedure: k1617 
o|contracted procedure: k1626 
o|contracted procedure: k1647 
o|contracted procedure: k1650 
o|contracted procedure: k1653 
o|contracted procedure: k1661 
o|contracted procedure: k1669 
o|contracted procedure: k1675 
o|contracted procedure: k1681 
o|contracted procedure: k1693 
o|contracted procedure: k1705 
o|contracted procedure: k1708 
o|contracted procedure: k1711 
o|contracted procedure: k1719 
o|contracted procedure: k1727 
o|contracted procedure: k1733 
o|contracted procedure: k1736 
o|contracted procedure: k1748 
o|contracted procedure: k1751 
o|contracted procedure: k1754 
o|contracted procedure: k1762 
o|contracted procedure: k1770 
o|contracted procedure: k1513 
o|contracted procedure: k1525 
o|contracted procedure: k1535 
o|contracted procedure: k1539 
o|contracted procedure: k1477 
o|contracted procedure: k1484 
o|contracted procedure: k1496 
o|contracted procedure: k1785 
o|contracted procedure: k1833 
o|contracted procedure: k1839 
o|contracted procedure: k1886 
o|contracted procedure: k1893 
o|contracted procedure: k1919 
o|contracted procedure: k1954 
o|contracted procedure: k1968 
o|contracted procedure: k2085 
o|contracted procedure: k2001 
o|contracted procedure: k2021 
o|contracted procedure: k2040 
o|contracted procedure: k2062 
o|contracted procedure: k2058 
o|contracted procedure: k2043 
o|contracted procedure: k2046 
o|contracted procedure: k2054 
o|contracted procedure: k2096 
o|contracted procedure: k2100 
o|simplifications: ((let . 17)) 
o|removed binding forms: 99 
o|replaced variables: 36 
o|removed binding forms: 16 
o|customizable procedures: (k1842 k1995 map-loop562587 loop384 k1570 status408 for-each-loop356369 map-loop462479 map-loop435453 map-loop412486 for-each-loop336348 for-each-loop317327 g297304 for-each-loop296308 main#format-string map-loop240257 main#repo-path k1121 loop230 main#gather-all-extensions g199208 map-loop193218) 
o|calls to known targets: 68 
o|identified direct recursive calls: f_2035 1 
o|fast box initializations: 12 
o|fast global references: 42 
o|fast global assignments: 20 
o|dropping unused closure argument: f_930 
o|dropping unused closure argument: f_1193 
o|dropping unused closure argument: f_1139 
*/
/* end of file */

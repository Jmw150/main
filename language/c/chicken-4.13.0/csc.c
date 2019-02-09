/* Generated from csc.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: csc.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -output-file csc.c
   used units: library eval chicken_2dsyntax posix data_2dstructures ports srfi_2d1 srfi_2d13 utils files extras
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[434];
static double C_possibly_force_alignment;


C_noret_decl(f_4540)
static void C_ccall f_4540(C_word c,C_word *av) C_noret;
C_noret_decl(f_4554)
static void C_ccall f_4554(C_word c,C_word *av) C_noret;
C_noret_decl(f_4556)
static void C_fcall f_4556(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3436)
static void C_ccall f_3436(C_word c,C_word *av) C_noret;
C_noret_decl(f_3430)
static void C_ccall f_3430(C_word c,C_word *av) C_noret;
C_noret_decl(f_3421)
static void C_ccall f_3421(C_word c,C_word *av) C_noret;
C_noret_decl(f_4265)
static void C_ccall f_4265(C_word c,C_word *av) C_noret;
C_noret_decl(f_4269)
static void C_ccall f_4269(C_word c,C_word *av) C_noret;
C_noret_decl(f_4261)
static void C_ccall f_4261(C_word c,C_word *av) C_noret;
C_noret_decl(f_4276)
static void C_ccall f_4276(C_word c,C_word *av) C_noret;
C_noret_decl(f_3877)
static void C_ccall f_3877(C_word c,C_word *av) C_noret;
C_noret_decl(f_4273)
static void C_ccall f_4273(C_word c,C_word *av) C_noret;
C_noret_decl(f_1781)
static void C_ccall f_1781(C_word c,C_word *av) C_noret;
C_noret_decl(f_3873)
static void C_fcall f_3873(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4286)
static void C_ccall f_4286(C_word c,C_word *av) C_noret;
C_noret_decl(f_4298)
static void C_ccall f_4298(C_word c,C_word *av) C_noret;
C_noret_decl(f_3888)
static void C_ccall f_3888(C_word c,C_word *av) C_noret;
C_noret_decl(f_1756)
static void C_fcall f_1756(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1751)
static void C_ccall f_1751(C_word c,C_word *av) C_noret;
C_noret_decl(f_3681)
static void C_ccall f_3681(C_word c,C_word *av) C_noret;
C_noret_decl(f_5269)
static void C_ccall f_5269(C_word c,C_word *av) C_noret;
C_noret_decl(f_5113)
static void C_ccall f_5113(C_word c,C_word *av) C_noret;
C_noret_decl(f_1727)
static void C_fcall f_1727(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4579)
static void C_ccall f_4579(C_word c,C_word *av) C_noret;
C_noret_decl(f_4576)
static void C_ccall f_4576(C_word c,C_word *av) C_noret;
C_noret_decl(f_2202)
static void C_ccall f_2202(C_word c,C_word *av) C_noret;
C_noret_decl(f_4573)
static void C_ccall f_4573(C_word c,C_word *av) C_noret;
C_noret_decl(f_2209)
static void C_ccall f_2209(C_word c,C_word *av) C_noret;
C_noret_decl(f_4570)
static void C_ccall f_4570(C_word c,C_word *av) C_noret;
C_noret_decl(f_1716)
static void C_ccall f_1716(C_word c,C_word *av) C_noret;
C_noret_decl(f_5211)
static void C_ccall f_5211(C_word c,C_word *av) C_noret;
C_noret_decl(f_5215)
static void C_ccall f_5215(C_word c,C_word *av) C_noret;
C_noret_decl(f_4725)
static void C_ccall f_4725(C_word c,C_word *av) C_noret;
C_noret_decl(f_4585)
static void C_ccall f_4585(C_word c,C_word *av) C_noret;
C_noret_decl(f_1681)
static void C_ccall f_1681(C_word c,C_word *av) C_noret;
C_noret_decl(f_4582)
static void C_ccall f_4582(C_word c,C_word *av) C_noret;
C_noret_decl(f_2216)
static void C_ccall f_2216(C_word c,C_word *av) C_noret;
C_noret_decl(f_1685)
static void C_ccall f_1685(C_word c,C_word *av) C_noret;
C_noret_decl(f_1700)
static void C_ccall f_1700(C_word c,C_word *av) C_noret;
C_noret_decl(f_1708)
static void C_ccall f_1708(C_word c,C_word *av) C_noret;
C_noret_decl(f_2227)
static void C_ccall f_2227(C_word c,C_word *av) C_noret;
C_noret_decl(f_2220)
static void C_ccall f_2220(C_word c,C_word *av) C_noret;
C_noret_decl(f_2230)
static void C_ccall f_2230(C_word c,C_word *av) C_noret;
C_noret_decl(f_5207)
static void C_ccall f_5207(C_word c,C_word *av) C_noret;
C_noret_decl(f_5203)
static void C_ccall f_5203(C_word c,C_word *av) C_noret;
C_noret_decl(f_3667)
static void C_ccall f_3667(C_word c,C_word *av) C_noret;
C_noret_decl(f_4718)
static void C_fcall f_4718(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4713)
static void C_ccall f_4713(C_word c,C_word *av) C_noret;
C_noret_decl(f_1651)
static void C_ccall f_1651(C_word c,C_word *av) C_noret;
C_noret_decl(f_5164)
static void C_ccall f_5164(C_word c,C_word *av) C_noret;
C_noret_decl(f_4097)
static void C_ccall f_4097(C_word c,C_word *av) C_noret;
C_noret_decl(f_5256)
static void C_ccall f_5256(C_word c,C_word *av) C_noret;
C_noret_decl(f_1646)
static void C_ccall f_1646(C_word c,C_word *av) C_noret;
C_noret_decl(f_1641)
static void C_ccall f_1641(C_word c,C_word *av) C_noret;
C_noret_decl(f_5175)
static void C_ccall f_5175(C_word c,C_word *av) C_noret;
C_noret_decl(f_5179)
static void C_ccall f_5179(C_word c,C_word *av) C_noret;
C_noret_decl(f_1633)
static void C_ccall f_1633(C_word c,C_word *av) C_noret;
C_noret_decl(f_1637)
static void C_ccall f_1637(C_word c,C_word *av) C_noret;
C_noret_decl(f_2261)
static void C_ccall f_2261(C_word c,C_word *av) C_noret;
C_noret_decl(f_5189)
static void C_ccall f_5189(C_word c,C_word *av) C_noret;
C_noret_decl(f_1731)
static void C_fcall f_1731(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1735)
static void C_ccall f_1735(C_word c,C_word *av) C_noret;
C_noret_decl(f_1738)
static void C_ccall f_1738(C_word c,C_word *av) C_noret;
C_noret_decl(f_4783)
static void C_ccall f_4783(C_word c,C_word *av) C_noret;
C_noret_decl(f_4780)
static void C_ccall f_4780(C_word c,C_word *av) C_noret;
C_noret_decl(f_1624)
static void C_fcall f_1624(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1629)
static void C_ccall f_1629(C_word c,C_word *av) C_noret;
C_noret_decl(f_2270)
static void C_ccall f_2270(C_word c,C_word *av) C_noret;
C_noret_decl(f_5193)
static void C_ccall f_5193(C_word c,C_word *av) C_noret;
C_noret_decl(f_2277)
static void C_ccall f_2277(C_word c,C_word *av) C_noret;
C_noret_decl(f_5246)
static void C_ccall f_5246(C_word c,C_word *av) C_noret;
C_noret_decl(f_5242)
static void C_ccall f_5242(C_word c,C_word *av) C_noret;
C_noret_decl(f_1612)
static void C_ccall f_1612(C_word c,C_word *av) C_noret;
C_noret_decl(f_1600)
static void C_ccall f_1600(C_word c,C_word *av) C_noret;
C_noret_decl(f_1604)
static void C_ccall f_1604(C_word c,C_word *av) C_noret;
C_noret_decl(f_1608)
static void C_ccall f_1608(C_word c,C_word *av) C_noret;
C_noret_decl(f_3900)
static void C_ccall f_3900(C_word c,C_word *av) C_noret;
C_noret_decl(f_3903)
static void C_fcall f_3903(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3904)
static void C_fcall f_3904(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3908)
static void C_ccall f_3908(C_word c,C_word *av) C_noret;
C_noret_decl(f_2579)
static void C_ccall f_2579(C_word c,C_word *av) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575(C_word c,C_word *av) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571(C_word c,C_word *av) C_noret;
C_noret_decl(f_4746)
static void C_ccall f_4746(C_word c,C_word *av) C_noret;
C_noret_decl(f_4740)
static void C_ccall f_4740(C_word c,C_word *av) C_noret;
C_noret_decl(f_3923)
static void C_ccall f_3923(C_word c,C_word *av) C_noret;
C_noret_decl(f_3100)
static void C_fcall f_3100(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4226)
static void C_ccall f_4226(C_word c,C_word *av) C_noret;
C_noret_decl(f_4222)
static void C_ccall f_4222(C_word c,C_word *av) C_noret;
C_noret_decl(f_3109)
static void C_fcall f_3109(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3911)
static void C_ccall f_3911(C_word c,C_word *av) C_noret;
C_noret_decl(f_4763)
static void C_ccall f_4763(C_word c,C_word *av) C_noret;
C_noret_decl(f_3945)
static void C_ccall f_3945(C_word c,C_word *av) C_noret;
C_noret_decl(f_3941)
static void C_ccall f_3941(C_word c,C_word *av) C_noret;
C_noret_decl(f_4245)
static void C_ccall f_4245(C_word c,C_word *av) C_noret;
C_noret_decl(f_4733)
static void C_ccall f_4733(C_word c,C_word *av) C_noret;
C_noret_decl(f_4242)
static void C_fcall f_4242(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3120)
static void C_ccall f_3120(C_word c,C_word *av) C_noret;
C_noret_decl(f_4401)
static void C_ccall f_4401(C_word c,C_word *av) C_noret;
C_noret_decl(f_1907)
static void C_fcall f_1907(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3931)
static void C_ccall f_3931(C_word c,C_word *av) C_noret;
C_noret_decl(f_3935)
static void C_ccall f_3935(C_word c,C_word *av) C_noret;
C_noret_decl(f6108)
static void C_ccall f6108(C_word c,C_word *av) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411(C_word c,C_word *av) C_noret;
C_noret_decl(f_3962)
static void C_fcall f_3962(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4751)
static void C_ccall f_4751(C_word c,C_word *av) C_noret;
C_noret_decl(f_4404)
static void C_ccall f_4404(C_word c,C_word *av) C_noret;
C_noret_decl(f_4407)
static void C_ccall f_4407(C_word c,C_word *av) C_noret;
C_noret_decl(f_3954)
static void C_ccall f_3954(C_word c,C_word *av) C_noret;
C_noret_decl(f_2308)
static void C_ccall f_2308(C_word c,C_word *av) C_noret;
C_noret_decl(f_4415)
static void C_ccall f_4415(C_word c,C_word *av) C_noret;
C_noret_decl(f_4419)
static void C_ccall f_4419(C_word c,C_word *av) C_noret;
C_noret_decl(f_1912)
static void C_ccall f_1912(C_word c,C_word *av) C_noret;
C_noret_decl(f_1914)
static void C_fcall f_1914(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3985)
static void C_fcall f_3985(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2319)
static void C_ccall f_2319(C_word c,C_word *av) C_noret;
C_noret_decl(f_3168)
static void C_ccall f_3168(C_word c,C_word *av) C_noret;
C_noret_decl(f_1945)
static void C_ccall f_1945(C_word c,C_word *av) C_noret;
C_noret_decl(f_1940)
static void C_fcall f_1940(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3972)
static void C_ccall f_3972(C_word c,C_word *av) C_noret;
C_noret_decl(f_1949)
static void C_ccall f_1949(C_word c,C_word *av) C_noret;
C_noret_decl(f_2242)
static void C_ccall f_2242(C_word c,C_word *av) C_noret;
C_noret_decl(f_3182)
static void C_ccall f_3182(C_word c,C_word *av) C_noret;
C_noret_decl(f_3995)
static void C_ccall f_3995(C_word c,C_word *av) C_noret;
C_noret_decl(f_2254)
static void C_ccall f_2254(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_4466)
static void C_ccall f_4466(C_word c,C_word *av) C_noret;
C_noret_decl(f_3673)
static void C_ccall f_3673(C_word c,C_word *av) C_noret;
C_noret_decl(f_3670)
static void C_ccall f_3670(C_word c,C_word *av) C_noret;
C_noret_decl(f_4483)
static void C_ccall f_4483(C_word c,C_word *av) C_noret;
C_noret_decl(f_1980)
static void C_fcall f_1980(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3192)
static void C_fcall f_3192(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2369)
static void C_ccall f_2369(C_word c,C_word *av) C_noret;
C_noret_decl(f_4475)
static void C_fcall f_4475(C_word t0) C_noret;
C_noret_decl(f_3196)
static void C_ccall f_3196(C_word c,C_word *av) C_noret;
C_noret_decl(f_3677)
static void C_ccall f_3677(C_word c,C_word *av) C_noret;
C_noret_decl(f_5122)
static void C_fcall f_5122(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5290)
static void C_ccall f_5290(C_word c,C_word *av) C_noret;
C_noret_decl(f_3693)
static void C_ccall f_3693(C_word c,C_word *av) C_noret;
C_noret_decl(f_4103)
static void C_ccall f_4103(C_word c,C_word *av) C_noret;
C_noret_decl(f_4105)
static void C_fcall f_4105(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1963)
static C_word C_fcall f_1963(C_word *a);
C_noret_decl(f_4495)
static void C_ccall f_4495(C_word c,C_word *av) C_noret;
C_noret_decl(f_1526)
static void C_ccall f_1526(C_word c,C_word *av) C_noret;
C_noret_decl(f_1998)
static void C_ccall f_1998(C_word c,C_word *av) C_noret;
C_noret_decl(f_1991)
static void C_ccall f_1991(C_word c,C_word *av) C_noret;
C_noret_decl(f_2897)
static void C_ccall f_2897(C_word c,C_word *av) C_noret;
C_noret_decl(f_4777)
static void C_ccall f_4777(C_word c,C_word *av) C_noret;
C_noret_decl(f_1522)
static void C_ccall f_1522(C_word c,C_word *av) C_noret;
C_noret_decl(f_1995)
static void C_ccall f_1995(C_word c,C_word *av) C_noret;
C_noret_decl(f_4774)
static void C_ccall f_4774(C_word c,C_word *av) C_noret;
C_noret_decl(f_3697)
static void C_ccall f_3697(C_word c,C_word *av) C_noret;
C_noret_decl(f_5147)
static void C_ccall f_5147(C_word c,C_word *av) C_noret;
C_noret_decl(f_5273)
static void C_ccall f_5273(C_word c,C_word *av) C_noret;
C_noret_decl(f_1512)
static void C_ccall f_1512(C_word c,C_word *av) C_noret;
C_noret_decl(f_1515)
static void C_ccall f_1515(C_word c,C_word *av) C_noret;
C_noret_decl(f_5280)
static void C_ccall f_5280(C_word c,C_word *av) C_noret;
C_noret_decl(f_5300)
static void C_ccall f_5300(C_word c,C_word *av) C_noret;
C_noret_decl(f_1584)
static void C_ccall f_1584(C_word c,C_word *av) C_noret;
C_noret_decl(f_1588)
static void C_ccall f_1588(C_word c,C_word *av) C_noret;
C_noret_decl(f_4975)
static void C_ccall f_4975(C_word c,C_word *av) C_noret;
C_noret_decl(f_1824)
static void C_ccall f_1824(C_word c,C_word *av) C_noret;
C_noret_decl(f_1828)
static void C_ccall f_1828(C_word c,C_word *av) C_noret;
C_noret_decl(f_5310)
static void C_ccall f_5310(C_word c,C_word *av) C_noret;
C_noret_decl(f_1576)
static void C_ccall f_1576(C_word c,C_word *av) C_noret;
C_noret_decl(f_1574)
static void C_ccall f_1574(C_word c,C_word *av) C_noret;
C_noret_decl(f_1570)
static void C_ccall f_1570(C_word c,C_word *av) C_noret;
C_noret_decl(f_4906)
static void C_ccall f_4906(C_word c,C_word *av) C_noret;
C_noret_decl(f_2345)
static void C_ccall f_2345(C_word c,C_word *av) C_noret;
C_noret_decl(f_1813)
static void C_ccall f_1813(C_word c,C_word *av) C_noret;
C_noret_decl(f_1817)
static void C_ccall f_1817(C_word c,C_word *av) C_noret;
C_noret_decl(f_4902)
static void C_ccall f_4902(C_word c,C_word *av) C_noret;
C_noret_decl(f_5320)
static void C_ccall f_5320(C_word c,C_word *av) C_noret;
C_noret_decl(f_2082)
static void C_ccall f_2082(C_word c,C_word *av) C_noret;
C_noret_decl(f_1562)
static void C_ccall f_1562(C_word c,C_word *av) C_noret;
C_noret_decl(f_2850)
static void C_ccall f_2850(C_word c,C_word *av) C_noret;
C_noret_decl(f_2854)
static void C_ccall f_2854(C_word c,C_word *av) C_noret;
C_noret_decl(f_4914)
static void C_ccall f_4914(C_word c,C_word *av) C_noret;
C_noret_decl(f_2357)
static void C_ccall f_2357(C_word c,C_word *av) C_noret;
C_noret_decl(f_1801)
static void C_ccall f_1801(C_word c,C_word *av) C_noret;
C_noret_decl(f_1809)
static void C_ccall f_1809(C_word c,C_word *av) C_noret;
C_noret_decl(f_4910)
static void C_ccall f_4910(C_word c,C_word *av) C_noret;
C_noret_decl(f_4165)
static void C_ccall f_4165(C_word c,C_word *av) C_noret;
C_noret_decl(f_4168)
static void C_ccall f_4168(C_word c,C_word *av) C_noret;
C_noret_decl(f_2050)
static void C_ccall f_2050(C_word c,C_word *av) C_noret;
C_noret_decl(f_2059)
static void C_ccall f_2059(C_word c,C_word *av) C_noret;
C_noret_decl(f_4162)
static void C_ccall f_4162(C_word c,C_word *av) C_noret;
C_noret_decl(f_2056)
static void C_ccall f_2056(C_word c,C_word *av) C_noret;
C_noret_decl(f_4926)
static void C_ccall f_4926(C_word c,C_word *av) C_noret;
C_noret_decl(f_4929)
static void C_ccall f_4929(C_word c,C_word *av) C_noret;
C_noret_decl(f_4920)
static void C_ccall f_4920(C_word c,C_word *av) C_noret;
C_noret_decl(f_4923)
static void C_ccall f_4923(C_word c,C_word *av) C_noret;
C_noret_decl(f_4171)
static void C_ccall f_4171(C_word c,C_word *av) C_noret;
C_noret_decl(f_4935)
static void C_ccall f_4935(C_word c,C_word *av) C_noret;
C_noret_decl(f_4938)
static void C_ccall f_4938(C_word c,C_word *av) C_noret;
C_noret_decl(f_4932)
static void C_ccall f_4932(C_word c,C_word *av) C_noret;
C_noret_decl(f_1867)
static void C_ccall f_1867(C_word c,C_word *av) C_noret;
C_noret_decl(f_2071)
static void C_ccall f_2071(C_word c,C_word *av) C_noret;
C_noret_decl(f_2078)
static void C_ccall f_2078(C_word c,C_word *av) C_noret;
C_noret_decl(f_4182)
static void C_fcall f_4182(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1851)
static void C_ccall f_1851(C_word c,C_word *av) C_noret;
C_noret_decl(f_3135)
static void C_ccall f_3135(C_word c,C_word *av) C_noret;
C_noret_decl(f_2043)
static void C_ccall f_2043(C_word c,C_word *av) C_noret;
C_noret_decl(f_4192)
static void C_ccall f_4192(C_word c,C_word *av) C_noret;
C_noret_decl(f_2040)
static void C_ccall f_2040(C_word c,C_word *av) C_noret;
C_noret_decl(f_2816)
static void C_ccall f_2816(C_word c,C_word *av) C_noret;
C_noret_decl(f_3705)
static void C_ccall f_3705(C_word c,C_word *av) C_noret;
C_noret_decl(f_3701)
static void C_ccall f_3701(C_word c,C_word *av) C_noret;
C_noret_decl(f_3709)
static void C_fcall f_3709(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1844)
static void C_ccall f_1844(C_word c,C_word *av) C_noret;
C_noret_decl(f_2016)
static void C_ccall f_2016(C_word c,C_word *av) C_noret;
C_noret_decl(f_2010)
static void C_ccall f_2010(C_word c,C_word *av) C_noret;
C_noret_decl(f_3090)
static void C_ccall f_3090(C_word c,C_word *av) C_noret;
C_noret_decl(f_3150)
static void C_ccall f_3150(C_word c,C_word *av) C_noret;
C_noret_decl(f_1509)
static void C_ccall f_1509(C_word c,C_word *av) C_noret;
C_noret_decl(f_2062)
static void C_ccall f_2062(C_word c,C_word *av) C_noret;
C_noret_decl(f_1506)
static void C_ccall f_1506(C_word c,C_word *av) C_noret;
C_noret_decl(f_2833)
static void C_ccall f_2833(C_word c,C_word *av) C_noret;
C_noret_decl(f_2068)
static void C_ccall f_2068(C_word c,C_word *av) C_noret;
C_noret_decl(f_2065)
static void C_ccall f_2065(C_word c,C_word *av) C_noret;
C_noret_decl(f_3081)
static void C_ccall f_3081(C_word c,C_word *av) C_noret;
C_noret_decl(f_2910)
static void C_ccall f_2910(C_word c,C_word *av) C_noret;
C_noret_decl(f_3726)
static void C_ccall f_3726(C_word c,C_word *av) C_noret;
C_noret_decl(f_2914)
static void C_ccall f_2914(C_word c,C_word *av) C_noret;
C_noret_decl(f_3720)
static void C_ccall f_3720(C_word c,C_word *av) C_noret;
C_noret_decl(f_3038)
static void C_ccall f_3038(C_word c,C_word *av) C_noret;
C_noret_decl(f_3728)
static void C_fcall f_3728(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2034)
static void C_ccall f_2034(C_word c,C_word *av) C_noret;
C_noret_decl(f_2037)
static void C_ccall f_2037(C_word c,C_word *av) C_noret;
C_noret_decl(f_3031)
static void C_ccall f_3031(C_word c,C_word *av) C_noret;
C_noret_decl(f_2031)
static void C_ccall f_2031(C_word c,C_word *av) C_noret;
C_noret_decl(f_4982)
static void C_ccall f_4982(C_word c,C_word *av) C_noret;
C_noret_decl(f_4988)
static void C_ccall f_4988(C_word c,C_word *av) C_noret;
C_noret_decl(f_2001)
static void C_ccall f_2001(C_word c,C_word *av) C_noret;
C_noret_decl(f_2004)
static void C_fcall f_2004(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2935)
static void C_ccall f_2935(C_word c,C_word *av) C_noret;
C_noret_decl(f_4993)
static void C_ccall f_4993(C_word c,C_word *av) C_noret;
C_noret_decl(f_2118)
static void C_ccall f_2118(C_word c,C_word *av) C_noret;
C_noret_decl(f_2111)
static void C_ccall f_2111(C_word c,C_word *av) C_noret;
C_noret_decl(f_3051)
static C_word C_fcall f_3051(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4605)
static void C_fcall f_4605(C_word t0) C_noret;
C_noret_decl(f_1874)
static void C_ccall f_1874(C_word c,C_word *av) C_noret;
C_noret_decl(f_2028)
static void C_ccall f_2028(C_word c,C_word *av) C_noret;
C_noret_decl(f_3041)
static void C_fcall f_3041(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3044)
static void C_fcall f_3044(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2953)
static void C_ccall f_2953(C_word c,C_word *av) C_noret;
C_noret_decl(f_1530)
static void C_ccall f_1530(C_word c,C_word *av) C_noret;
C_noret_decl(f_4949)
static void C_ccall f_4949(C_word c,C_word *av) C_noret;
C_noret_decl(f_2922)
static void C_ccall f_2922(C_word c,C_word *av) C_noret;
C_noret_decl(f_4944)
static void C_ccall f_4944(C_word c,C_word *av) C_noret;
C_noret_decl(f_3753)
static void C_ccall f_3753(C_word c,C_word *av) C_noret;
C_noret_decl(f_2381)
static void C_ccall f_2381(C_word c,C_word *av) C_noret;
C_noret_decl(f_4941)
static void C_ccall f_4941(C_word c,C_word *av) C_noret;
C_noret_decl(f_5360)
static void C_ccall f_5360(C_word c,C_word *av) C_noret;
C_noret_decl(f_4620)
static void C_fcall f_4620(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5364)
static void C_ccall f_5364(C_word c,C_word *av) C_noret;
C_noret_decl(f_2108)
static void C_ccall f_2108(C_word c,C_word *av) C_noret;
C_noret_decl(f_5368)
static void C_ccall f_5368(C_word c,C_word *av) C_noret;
C_noret_decl(f_4957)
static void C_ccall f_4957(C_word c,C_word *av) C_noret;
C_noret_decl(f_1474)
static void C_ccall f_1474(C_word c,C_word *av) C_noret;
C_noret_decl(f_1471)
static void C_ccall f_1471(C_word c,C_word *av) C_noret;
C_noret_decl(f_4425)
static void C_ccall f_4425(C_word c,C_word *av) C_noret;
C_noret_decl(f_4428)
static void C_ccall f_4428(C_word c,C_word *av) C_noret;
C_noret_decl(f_3010)
static void C_ccall f_3010(C_word c,C_word *av) C_noret;
C_noret_decl(f_3013)
static void C_ccall f_3013(C_word c,C_word *av) C_noret;
C_noret_decl(f_2949)
static void C_fcall f_2949(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1465)
static void C_ccall f_1465(C_word c,C_word *av) C_noret;
C_noret_decl(f_1462)
static void C_ccall f_1462(C_word c,C_word *av) C_noret;
C_noret_decl(f_4439)
static void C_ccall f_4439(C_word c,C_word *av) C_noret;
C_noret_decl(f_4435)
static void C_ccall f_4435(C_word c,C_word *av) C_noret;
C_noret_decl(f_1468)
static void C_ccall f_1468(C_word c,C_word *av) C_noret;
C_noret_decl(f_4431)
static void C_ccall f_4431(C_word c,C_word *av) C_noret;
C_noret_decl(f_3310)
static void C_ccall f_3310(C_word c,C_word *av) C_noret;
C_noret_decl(f_2993)
static void C_ccall f_2993(C_word c,C_word *av) C_noret;
C_noret_decl(f_3315)
static void C_ccall f_3315(C_word c,C_word *av) C_noret;
C_noret_decl(f_2990)
static void C_ccall f_2990(C_word c,C_word *av) C_noret;
C_noret_decl(f_1453)
static void C_ccall f_1453(C_word c,C_word *av) C_noret;
C_noret_decl(f_1456)
static void C_ccall f_1456(C_word c,C_word *av) C_noret;
C_noret_decl(f_1450)
static void C_ccall f_1450(C_word c,C_word *av) C_noret;
C_noret_decl(f_4690)
static void C_fcall f_4690(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1459)
static void C_ccall f_1459(C_word c,C_word *av) C_noret;
C_noret_decl(f_4441)
static void C_fcall f_4441(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2883)
static void C_ccall f_2883(C_word c,C_word *av) C_noret;
C_noret_decl(f_2961)
static void C_ccall f_2961(C_word c,C_word *av) C_noret;
C_noret_decl(f_2965)
static void C_ccall f_2965(C_word c,C_word *av) C_noret;
C_noret_decl(f_2192)
static void C_ccall f_2192(C_word c,C_word *av) C_noret;
C_noret_decl(f_2875)
static void C_ccall f_2875(C_word c,C_word *av) C_noret;
C_noret_decl(f_2871)
static void C_ccall f_2871(C_word c,C_word *av) C_noret;
C_noret_decl(f_2183)
static void C_ccall f_2183(C_word c,C_word *av) C_noret;
C_noret_decl(f_2186)
static void C_ccall f_2186(C_word c,C_word *av) C_noret;
C_noret_decl(f_2671)
static void C_ccall f_2671(C_word c,C_word *av) C_noret;
C_noret_decl(f_2189)
static void C_ccall f_2189(C_word c,C_word *av) C_noret;
C_noret_decl(f_3373)
static void C_fcall f_3373(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3378)
static void C_ccall f_3378(C_word c,C_word *av) C_noret;
C_noret_decl(f_4302)
static void C_ccall f_4302(C_word c,C_word *av) C_noret;
C_noret_decl(f_1592)
static void C_ccall f_1592(C_word c,C_word *av) C_noret;
C_noret_decl(f_1596)
static void C_ccall f_1596(C_word c,C_word *av) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word *av) C_noret;
C_noret_decl(f_3360)
static void C_ccall f_3360(C_word c,C_word *av) C_noret;
C_noret_decl(f_4647)
static void C_fcall f_4647(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4318)
static void C_ccall f_4318(C_word c,C_word *av) C_noret;
C_noret_decl(f_4310)
static void C_ccall f_4310(C_word c,C_word *av) C_noret;
C_noret_decl(f_4643)
static void C_ccall f_4643(C_word c,C_word *av) C_noret;
C_noret_decl(f_4130)
static void C_ccall f_4130(C_word c,C_word *av) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614(C_word c,C_word *av) C_noret;
C_noret_decl(f_3219)
static void C_ccall f_3219(C_word c,C_word *av) C_noret;
C_noret_decl(f_4613)
static void C_ccall f_4613(C_word c,C_word *av) C_noret;
C_noret_decl(f_1447)
static void C_ccall f_1447(C_word c,C_word *av) C_noret;
C_noret_decl(f_4159)
static void C_ccall f_4159(C_word c,C_word *av) C_noret;
C_noret_decl(f_1444)
static void C_ccall f_1444(C_word c,C_word *av) C_noret;
C_noret_decl(f_4156)
static void C_ccall f_4156(C_word c,C_word *av) C_noret;
C_noret_decl(f_3332)
static void C_ccall f_3332(C_word c,C_word *av) C_noret;
C_noret_decl(f_3236)
static void C_ccall f_3236(C_word c,C_word *av) C_noret;
C_noret_decl(f_3238)
static void C_fcall f_3238(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4635)
static void C_fcall f_4635(C_word t0) C_noret;
C_noret_decl(f_5338)
static void C_ccall f_5338(C_word c,C_word *av) C_noret;
C_noret_decl(f_4633)
static void C_ccall f_4633(C_word c,C_word *av) C_noret;
C_noret_decl(f_5334)
static void C_ccall f_5334(C_word c,C_word *av) C_noret;
C_noret_decl(f_5330)
static void C_ccall f_5330(C_word c,C_word *av) C_noret;
C_noret_decl(f_3321)
static void C_ccall f_3321(C_word c,C_word *av) C_noret;
C_noret_decl(f_5346)
static void C_ccall f_5346(C_word c,C_word *av) C_noret;
C_noret_decl(f_5342)
static void C_ccall f_5342(C_word c,C_word *av) C_noret;
C_noret_decl(f_2651)
static void C_ccall f_2651(C_word c,C_word *av) C_noret;
C_noret_decl(f_4365)
static void C_ccall f_4365(C_word c,C_word *av) C_noret;
C_noret_decl(f_5356)
static void C_ccall f_5356(C_word c,C_word *av) C_noret;
C_noret_decl(f_2661)
static void C_ccall f_2661(C_word c,C_word *av) C_noret;
C_noret_decl(f_3277)
static void C_ccall f_3277(C_word c,C_word *av) C_noret;
C_noret_decl(f_4375)
static void C_ccall f_4375(C_word c,C_word *av) C_noret;
C_noret_decl(f_3346)
static void C_ccall f_3346(C_word c,C_word *av) C_noret;
C_noret_decl(f6072)
static void C_ccall f6072(C_word c,C_word *av) C_noret;
C_noret_decl(f_3263)
static void C_ccall f_3263(C_word c,C_word *av) C_noret;
C_noret_decl(f_4385)
static void C_ccall f_4385(C_word c,C_word *av) C_noret;
C_noret_decl(f_4388)
static void C_ccall f_4388(C_word c,C_word *av) C_noret;
C_noret_decl(f_2156)
static void C_ccall f_2156(C_word c,C_word *av) C_noret;
C_noret_decl(f_4395)
static void C_ccall f_4395(C_word c,C_word *av) C_noret;
C_noret_decl(f_3777)
static void C_ccall f_3777(C_word c,C_word *av) C_noret;
C_noret_decl(f6054)
static void C_ccall f6054(C_word c,C_word *av) C_noret;
C_noret_decl(f6050)
static void C_ccall f6050(C_word c,C_word *av) C_noret;
C_noret_decl(f_3281)
static void C_ccall f_3281(C_word c,C_word *av) C_noret;
C_noret_decl(f_3298)
static void C_ccall f_3298(C_word c,C_word *av) C_noret;
C_noret_decl(f_2149)
static void C_fcall f_2149(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2146)
static void C_fcall f_2146(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2630)
static void C_ccall f_2630(C_word c,C_word *av) C_noret;
C_noret_decl(f_2701)
static void C_ccall f_2701(C_word c,C_word *av) C_noret;
C_noret_decl(f_4688)
static void C_ccall f_4688(C_word c,C_word *av) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word *av) C_noret;
C_noret_decl(f_4684)
static void C_ccall f_4684(C_word c,C_word *av) C_noret;
C_noret_decl(f_4680)
static void C_ccall f_4680(C_word c,C_word *av) C_noret;
C_noret_decl(f_1496)
static void C_ccall f_1496(C_word c,C_word *av) C_noret;
C_noret_decl(f_1499)
static void C_fcall f_1499(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4670)
static void C_ccall f_4670(C_word c,C_word *av) C_noret;
C_noret_decl(f_4809)
static void C_ccall f_4809(C_word c,C_word *av) C_noret;
C_noret_decl(f_4803)
static void C_ccall f_4803(C_word c,C_word *av) C_noret;
C_noret_decl(f_4806)
static void C_ccall f_4806(C_word c,C_word *av) C_noret;
C_noret_decl(f_3397)
static void C_ccall f_3397(C_word c,C_word *av) C_noret;
C_noret_decl(f_4829)
static void C_fcall f_4829(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4825)
static void C_ccall f_4825(C_word c,C_word *av) C_noret;
C_noret_decl(f_2721)
static void C_ccall f_2721(C_word c,C_word *av) C_noret;
C_noret_decl(f_5080)
static void C_ccall f_5080(C_word c,C_word *av) C_noret;
C_noret_decl(f_5088)
static void C_fcall f_5088(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2731)
static void C_ccall f_2731(C_word c,C_word *av) C_noret;
C_noret_decl(f_5054)
static void C_fcall f_5054(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5058)
static void C_ccall f_5058(C_word c,C_word *av) C_noret;
C_noret_decl(f_2741)
static void C_ccall f_2741(C_word c,C_word *av) C_noret;
C_noret_decl(f_3816)
static void C_ccall f_3816(C_word c,C_word *av) C_noret;
C_noret_decl(f_2681)
static void C_ccall f_2681(C_word c,C_word *av) C_noret;
C_noret_decl(f_5061)
static void C_ccall f_5061(C_word c,C_word *av) C_noret;
C_noret_decl(f_2758)
static void C_fcall f_2758(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3806)
static void C_fcall f_3806(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2691)
static void C_ccall f_2691(C_word c,C_word *av) C_noret;
C_noret_decl(f6032)
static void C_ccall f6032(C_word c,C_word *av) C_noret;
C_noret_decl(f_4326)
static void C_ccall f_4326(C_word c,C_word *av) C_noret;
C_noret_decl(f_4322)
static void C_ccall f_4322(C_word c,C_word *av) C_noret;
C_noret_decl(f_5044)
static void C_ccall f_5044(C_word c,C_word *av) C_noret;
C_noret_decl(f6020)
static void C_ccall f6020(C_word c,C_word *av) C_noret;
C_noret_decl(f6024)
static void C_ccall f6024(C_word c,C_word *av) C_noret;
C_noret_decl(f_4335)
static void C_ccall f_4335(C_word c,C_word *av) C_noret;
C_noret_decl(f_4338)
static void C_ccall f_4338(C_word c,C_word *av) C_noret;
C_noret_decl(f6028)
static void C_ccall f6028(C_word c,C_word *av) C_noret;
C_noret_decl(f_4331)
static void C_ccall f_4331(C_word c,C_word *av) C_noret;
C_noret_decl(f_4837)
static void C_ccall f_4837(C_word c,C_word *av) C_noret;
C_noret_decl(f_5019)
static void C_ccall f_5019(C_word c,C_word *av) C_noret;
C_noret_decl(f_4346)
static void C_ccall f_4346(C_word c,C_word *av) C_noret;
C_noret_decl(f_4845)
static void C_fcall f_4845(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4061)
static void C_ccall f_4061(C_word c,C_word *av) C_noret;
C_noret_decl(f_4342)
static void C_ccall f_4342(C_word c,C_word *av) C_noret;
C_noret_decl(f_4861)
static void C_ccall f_4861(C_word c,C_word *av) C_noret;
C_noret_decl(f_5029)
static void C_ccall f_5029(C_word c,C_word *av) C_noret;
C_noret_decl(f_5022)
static void C_ccall f_5022(C_word c,C_word *av) C_noret;
C_noret_decl(f_4054)
static void C_ccall f_4054(C_word c,C_word *av) C_noret;
C_noret_decl(f_5025)
static void C_ccall f_5025(C_word c,C_word *av) C_noret;
C_noret_decl(f_4355)
static void C_ccall f_4355(C_word c,C_word *av) C_noret;
C_noret_decl(f_4352)
static void C_ccall f_4352(C_word c,C_word *av) C_noret;
C_noret_decl(f_4859)
static void C_ccall f_4859(C_word c,C_word *av) C_noret;
C_noret_decl(f_4501)
static void C_ccall f_4501(C_word c,C_word *av) C_noret;
C_noret_decl(f_4063)
static void C_fcall f_4063(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5077)
static void C_ccall f_5077(C_word c,C_word *av) C_noret;
C_noret_decl(f_2404)
static void C_fcall f_2404(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2407)
static void C_ccall f_2407(C_word c,C_word *av) C_noret;
C_noret_decl(f_4865)
static void C_ccall f_4865(C_word c,C_word *av) C_noret;
C_noret_decl(f_3869)
static void C_ccall f_3869(C_word c,C_word *av) C_noret;
C_noret_decl(f_4800)
static void C_ccall f_4800(C_word c,C_word *av) C_noret;
C_noret_decl(f_5001)
static void C_ccall f_5001(C_word c,C_word *av) C_noret;
C_noret_decl(f_4073)
static void C_ccall f_4073(C_word c,C_word *av) C_noret;
C_noret_decl(f_4010)
static void C_ccall f_4010(C_word c,C_word *av) C_noret;
C_noret_decl(f_2419)
static void C_ccall f_2419(C_word c,C_word *av) C_noret;
C_noret_decl(f_3865)
static void C_ccall f_3865(C_word c,C_word *av) C_noret;
C_noret_decl(f_4086)
static void C_fcall f_4086(C_word t0) C_noret;
C_noret_decl(f_4012)
static void C_fcall f_4012(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3413)
static void C_ccall f_3413(C_word c,C_word *av) C_noret;
C_noret_decl(f_3838)
static void C_ccall f_3838(C_word c,C_word *av) C_noret;
C_noret_decl(f_3409)
static void C_fcall f_3409(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5037)
static void C_ccall f_5037(C_word c,C_word *av) C_noret;
C_noret_decl(f_5033)
static void C_ccall f_5033(C_word c,C_word *av) C_noret;
C_noret_decl(f_4022)
static void C_ccall f_4022(C_word c,C_word *av) C_noret;
C_noret_decl(f_3831)
static void C_fcall f_3831(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3835)
static void C_ccall f_3835(C_word c,C_word *av) C_noret;
C_noret_decl(f_4039)
static void C_ccall f_4039(C_word c,C_word *av) C_noret;
C_noret_decl(f_4036)
static void C_fcall f_4036(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4564)
static void C_ccall f_4564(C_word c,C_word *av) C_noret;
C_noret_decl(f_4042)
static void C_ccall f_4042(C_word c,C_word *av) C_noret;
C_noret_decl(f_2782)
static void C_ccall f_2782(C_word c,C_word *av) C_noret;
C_noret_decl(f6092)
static void C_ccall f6092(C_word c,C_word *av) C_noret;
C_noret_decl(f_3853)
static void C_ccall f_3853(C_word c,C_word *av) C_noret;
C_noret_decl(f6097)
static void C_ccall f6097(C_word c,C_word *av) C_noret;
C_noret_decl(f_2799)
static void C_ccall f_2799(C_word c,C_word *av) C_noret;
C_noret_decl(f_3841)
static void C_ccall f_3841(C_word c,C_word *av) C_noret;
C_noret_decl(f_4206)
static void C_fcall f_4206(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4209)
static void C_ccall f_4209(C_word c,C_word *av) C_noret;
C_noret_decl(f_4529)
static void C_ccall f_4529(C_word c,C_word *av) C_noret;
C_noret_decl(f_4890)
static void C_ccall f_4890(C_word c,C_word *av) C_noret;
C_noret_decl(f_4536)
static void C_ccall f_4536(C_word c,C_word *av) C_noret;
C_noret_decl(f_3466)
static void C_ccall f_3466(C_word c,C_word *av) C_noret;
C_noret_decl(f_4884)
static void C_ccall f_4884(C_word c,C_word *av) C_noret;
C_noret_decl(f_2512)
static void C_ccall f_2512(C_word c,C_word *av) C_noret;
C_noret_decl(f_2519)
static void C_ccall f_2519(C_word c,C_word *av) C_noret;
C_noret_decl(f_2516)
static void C_ccall f_2516(C_word c,C_word *av) C_noret;
C_noret_decl(f_4899)
static void C_ccall f_4899(C_word c,C_word *av) C_noret;
C_noret_decl(f_4896)
static void C_ccall f_4896(C_word c,C_word *av) C_noret;
C_noret_decl(f_4893)
static void C_ccall f_4893(C_word c,C_word *av) C_noret;

C_noret_decl(trf_4556)
static void C_ccall trf_4556(C_word c,C_word *av) C_noret;
static void C_ccall trf_4556(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4556(t0,t1,t2);}

C_noret_decl(trf_3873)
static void C_ccall trf_3873(C_word c,C_word *av) C_noret;
static void C_ccall trf_3873(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3873(t0,t1);}

C_noret_decl(trf_1756)
static void C_ccall trf_1756(C_word c,C_word *av) C_noret;
static void C_ccall trf_1756(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1756(t0,t1,t2);}

C_noret_decl(trf_1727)
static void C_ccall trf_1727(C_word c,C_word *av) C_noret;
static void C_ccall trf_1727(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1727(t0,t1);}

C_noret_decl(trf_4718)
static void C_ccall trf_4718(C_word c,C_word *av) C_noret;
static void C_ccall trf_4718(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4718(t0,t1);}

C_noret_decl(trf_1731)
static void C_ccall trf_1731(C_word c,C_word *av) C_noret;
static void C_ccall trf_1731(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1731(t0,t1);}

C_noret_decl(trf_1624)
static void C_ccall trf_1624(C_word c,C_word *av) C_noret;
static void C_ccall trf_1624(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1624(t0,t1);}

C_noret_decl(trf_3903)
static void C_ccall trf_3903(C_word c,C_word *av) C_noret;
static void C_ccall trf_3903(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3903(t0,t1);}

C_noret_decl(trf_3904)
static void C_ccall trf_3904(C_word c,C_word *av) C_noret;
static void C_ccall trf_3904(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3904(t0,t1,t2);}

C_noret_decl(trf_3100)
static void C_ccall trf_3100(C_word c,C_word *av) C_noret;
static void C_ccall trf_3100(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3100(t0,t1);}

C_noret_decl(trf_3109)
static void C_ccall trf_3109(C_word c,C_word *av) C_noret;
static void C_ccall trf_3109(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3109(t0,t1);}

C_noret_decl(trf_4242)
static void C_ccall trf_4242(C_word c,C_word *av) C_noret;
static void C_ccall trf_4242(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4242(t0,t1);}

C_noret_decl(trf_1907)
static void C_ccall trf_1907(C_word c,C_word *av) C_noret;
static void C_ccall trf_1907(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1907(t0,t1);}

C_noret_decl(trf_3962)
static void C_ccall trf_3962(C_word c,C_word *av) C_noret;
static void C_ccall trf_3962(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3962(t0,t1,t2);}

C_noret_decl(trf_1914)
static void C_ccall trf_1914(C_word c,C_word *av) C_noret;
static void C_ccall trf_1914(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1914(t0,t1,t2,t3);}

C_noret_decl(trf_3985)
static void C_ccall trf_3985(C_word c,C_word *av) C_noret;
static void C_ccall trf_3985(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3985(t0,t1,t2);}

C_noret_decl(trf_1940)
static void C_ccall trf_1940(C_word c,C_word *av) C_noret;
static void C_ccall trf_1940(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1940(t0,t1);}

C_noret_decl(trf_1980)
static void C_ccall trf_1980(C_word c,C_word *av) C_noret;
static void C_ccall trf_1980(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1980(t0,t1,t2);}

C_noret_decl(trf_3192)
static void C_ccall trf_3192(C_word c,C_word *av) C_noret;
static void C_ccall trf_3192(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3192(t0,t1);}

C_noret_decl(trf_4475)
static void C_ccall trf_4475(C_word c,C_word *av) C_noret;
static void C_ccall trf_4475(C_word c,C_word *av){
C_word t0=av[0];
f_4475(t0);}

C_noret_decl(trf_5122)
static void C_ccall trf_5122(C_word c,C_word *av) C_noret;
static void C_ccall trf_5122(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5122(t0,t1,t2);}

C_noret_decl(trf_4105)
static void C_ccall trf_4105(C_word c,C_word *av) C_noret;
static void C_ccall trf_4105(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4105(t0,t1,t2);}

C_noret_decl(trf_4182)
static void C_ccall trf_4182(C_word c,C_word *av) C_noret;
static void C_ccall trf_4182(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4182(t0,t1,t2);}

C_noret_decl(trf_3709)
static void C_ccall trf_3709(C_word c,C_word *av) C_noret;
static void C_ccall trf_3709(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3709(t0,t1);}

C_noret_decl(trf_3728)
static void C_ccall trf_3728(C_word c,C_word *av) C_noret;
static void C_ccall trf_3728(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3728(t0,t1,t2);}

C_noret_decl(trf_2004)
static void C_ccall trf_2004(C_word c,C_word *av) C_noret;
static void C_ccall trf_2004(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2004(t0,t1);}

C_noret_decl(trf_4605)
static void C_ccall trf_4605(C_word c,C_word *av) C_noret;
static void C_ccall trf_4605(C_word c,C_word *av){
C_word t0=av[0];
f_4605(t0);}

C_noret_decl(trf_3041)
static void C_ccall trf_3041(C_word c,C_word *av) C_noret;
static void C_ccall trf_3041(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3041(t0,t1);}

C_noret_decl(trf_3044)
static void C_ccall trf_3044(C_word c,C_word *av) C_noret;
static void C_ccall trf_3044(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3044(t0,t1);}

C_noret_decl(trf_4620)
static void C_ccall trf_4620(C_word c,C_word *av) C_noret;
static void C_ccall trf_4620(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4620(t0,t1);}

C_noret_decl(trf_2949)
static void C_ccall trf_2949(C_word c,C_word *av) C_noret;
static void C_ccall trf_2949(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2949(t0,t1);}

C_noret_decl(trf_4690)
static void C_ccall trf_4690(C_word c,C_word *av) C_noret;
static void C_ccall trf_4690(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4690(t0,t1,t2);}

C_noret_decl(trf_4441)
static void C_ccall trf_4441(C_word c,C_word *av) C_noret;
static void C_ccall trf_4441(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4441(t0,t1,t2);}

C_noret_decl(trf_3373)
static void C_ccall trf_3373(C_word c,C_word *av) C_noret;
static void C_ccall trf_3373(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3373(t0,t1);}

C_noret_decl(trf_4647)
static void C_ccall trf_4647(C_word c,C_word *av) C_noret;
static void C_ccall trf_4647(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4647(t0,t1);}

C_noret_decl(trf_3238)
static void C_ccall trf_3238(C_word c,C_word *av) C_noret;
static void C_ccall trf_3238(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3238(t0,t1,t2);}

C_noret_decl(trf_4635)
static void C_ccall trf_4635(C_word c,C_word *av) C_noret;
static void C_ccall trf_4635(C_word c,C_word *av){
C_word t0=av[0];
f_4635(t0);}

C_noret_decl(trf_2149)
static void C_ccall trf_2149(C_word c,C_word *av) C_noret;
static void C_ccall trf_2149(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2149(t0,t1);}

C_noret_decl(trf_2146)
static void C_ccall trf_2146(C_word c,C_word *av) C_noret;
static void C_ccall trf_2146(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2146(t0,t1);}

C_noret_decl(trf_1499)
static void C_ccall trf_1499(C_word c,C_word *av) C_noret;
static void C_ccall trf_1499(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1499(t0,t1,t2);}

C_noret_decl(trf_4829)
static void C_ccall trf_4829(C_word c,C_word *av) C_noret;
static void C_ccall trf_4829(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4829(t0,t1,t2);}

C_noret_decl(trf_5088)
static void C_ccall trf_5088(C_word c,C_word *av) C_noret;
static void C_ccall trf_5088(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5088(t0,t1,t2);}

C_noret_decl(trf_5054)
static void C_ccall trf_5054(C_word c,C_word *av) C_noret;
static void C_ccall trf_5054(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5054(t0,t1);}

C_noret_decl(trf_2758)
static void C_ccall trf_2758(C_word c,C_word *av) C_noret;
static void C_ccall trf_2758(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2758(t0,t1);}

C_noret_decl(trf_3806)
static void C_ccall trf_3806(C_word c,C_word *av) C_noret;
static void C_ccall trf_3806(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3806(t0,t1,t2);}

C_noret_decl(trf_4845)
static void C_ccall trf_4845(C_word c,C_word *av) C_noret;
static void C_ccall trf_4845(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4845(t0,t1);}

C_noret_decl(trf_4063)
static void C_ccall trf_4063(C_word c,C_word *av) C_noret;
static void C_ccall trf_4063(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4063(t0,t1,t2);}

C_noret_decl(trf_2404)
static void C_ccall trf_2404(C_word c,C_word *av) C_noret;
static void C_ccall trf_2404(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2404(t0,t1);}

C_noret_decl(trf_4086)
static void C_ccall trf_4086(C_word c,C_word *av) C_noret;
static void C_ccall trf_4086(C_word c,C_word *av){
C_word t0=av[0];
f_4086(t0);}

C_noret_decl(trf_4012)
static void C_ccall trf_4012(C_word c,C_word *av) C_noret;
static void C_ccall trf_4012(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4012(t0,t1,t2);}

C_noret_decl(trf_3409)
static void C_ccall trf_3409(C_word c,C_word *av) C_noret;
static void C_ccall trf_3409(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3409(t0,t1);}

C_noret_decl(trf_3831)
static void C_ccall trf_3831(C_word c,C_word *av) C_noret;
static void C_ccall trf_3831(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3831(t0,t1,t2);}

C_noret_decl(trf_4036)
static void C_ccall trf_4036(C_word c,C_word *av) C_noret;
static void C_ccall trf_4036(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4036(t0,t1);}

C_noret_decl(trf_4206)
static void C_ccall trf_4206(C_word c,C_word *av) C_noret;
static void C_ccall trf_4206(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4206(t0,t1);}

/* k4538 in k4534 in k4224 in k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in ... */
static void C_ccall f_4540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4540,2,av);}
/* csc.scm:988: make-pathname */
t2=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_retrieve2(lf[47],"dynamic-libchicken");
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4552 in k4534 in k4224 in k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in ... */
static void C_ccall f_4554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4554,2,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[173];
av2[3]=t1;
tp(4,av2);}}

/* copy-files in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in ... */
static void C_fcall f_4556(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4556,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4564,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1000: open-output-string */
t5=C_fast_retrieve(lf[114]);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k3434 in k3428 in k3308 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_ccall f_3436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3436,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
/* csc.scm:818: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1980(t4,((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1]);}
else{
/* csc.scm:817: stop */
f_1499(((C_word*)t0)[6],lf[399],C_a_i_list(&a,1,((C_word*)t0)[7]));}}

/* k3428 in k3308 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in ... */
static void C_ccall f_3430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3430,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3436,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csc.scm:815: file-exists? */
t4=C_fast_retrieve(lf[163]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3419 in k3407 in a3320 in k3308 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in ... */
static void C_ccall f_3421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3421,2,av);}
t2=C_mutate2(&lf[54] /* (set! scheme-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4263 in k4240 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in ... */
static void C_ccall f_4265(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4265,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4269,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4273,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_retrieve2(lf[46],"libchicken");
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t4;
av2[2]=C_retrieve2(lf[46],"libchicken");
av2[3]=lf[184];
tp(4,av2);}}

/* k4267 in k4263 in k4240 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in ... */
static void C_ccall f_4269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_4269,2,av);}
/* csc.scm:947: string-append */
t2=*((C_word*)lf[122]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[180];
av2[4]=C_retrieve2(lf[46],"libchicken");
av2[5]=lf[181];
av2[6]=t1;
av2[7]=lf[182];
av2[8]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(9,av2);}}

/* k4259 in k4240 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in ... */
static void C_ccall f_4261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4261,2,av);}
/* csc.scm:946: command */
f_4845(((C_word*)t0)[2],t1);}

/* k4274 in k4271 in k4263 in k4240 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in ... */
static void C_ccall f_4276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4276,2,av);}
/* csc.scm:949: quotewrap */
t2=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_1562(3,av2);}}

/* k3875 in k3871 in k3867 in k3863 in k3836 in k3833 in g565 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in ... */
static void C_ccall f_3877(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_3877,2,av);}
a=C_alloc(18);
t2=C_a_i_list6(&a,6,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],lf[202],((C_word*)t0)[5],t1);
/* csc.scm:872: string-intersperse */
t3=C_fast_retrieve(lf[102]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[6];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4271 in k4263 in k4240 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in ... */
static void C_ccall f_4273(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4273,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4276,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[71],"deployed"))){
/* csc.scm:952: make-pathname */
t4=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[183];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4286,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:954: lib-path */
f_4475(t4);}}

/* k1779 in map-loop193 in k1749 in k1733 in k1729 in k1725 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in ... */
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1781,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1756(t6,((C_word*)t0)[5],t5);}

/* k3871 in k3867 in k3863 in k3836 in k3833 in g565 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in ... */
static void C_fcall f_3873(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3873,2,t0,t1);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3877,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:881: compiler-options */
f_4086(t3);}

/* k4284 in k4271 in k4263 in k4240 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in ... */
static void C_ccall f_4286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4286,2,av);}
/* csc.scm:953: make-pathname */
t2=C_fast_retrieve(lf[106]);{
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

/* k4296 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in ... */
static void C_ccall f_4298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4298,2,av);}
/* csc.scm:936: command */
f_4845(((C_word*)t0)[2],t1);}

/* k3886 in k3863 in k3836 in k3833 in g565 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in ... */
static void C_ccall f_3888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3888,2,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[206];
av2[3]=t1;
tp(4,av2);}}

/* map-loop193 in k1749 in k1733 in k1729 in k1725 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in ... */
static void C_fcall f_1756(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1756,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1781,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:290: g216 */
t5=*((C_word*)lf[122]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[232];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1749 in k1733 in k1729 in k1725 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in ... */
static void C_ccall f_1751(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1751,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1756,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1756(t5,((C_word*)t0)[4],t1);}

/* k3679 in k3675 in k3671 in k3668 in k3665 in for-each-loop504 in k2147 in k2144 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in ... */
static void C_ccall f_3681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3681,2,av);}
t2=C_mutate2(&lf[57] /* (set! generated-c-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5267 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in ... */
static void C_ccall f_5269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5269,2,av);}
/* csc.scm:132: string-append */
t2=*((C_word*)lf[122]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[423];
av2[3]=t1;
av2[4]=lf[424];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5111 in map-loop113 in k5078 in k5075 in k5056 in k5052 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_5113(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5113,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5088(t6,((C_word*)t0)[5],t5);}

/* k1725 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_fcall f_1727(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_1727,2,t0,t1);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1731,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[71],"deployed"))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1801,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:285: software-version */
t5=C_fast_retrieve(lf[240]);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t3;
f_1731(t4,C_SCHEME_END_OF_LIST);}}

/* k4577 in k4574 in k4571 in k4568 in k4562 in copy-files in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in ... */
static void C_ccall f_4579(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4579,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4582,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(lf[0])){
t3=C_retrieve2(lf[28],"quotewrap-no-slash-trans");
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f6020,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=t4;
t6=((C_word*)t0)[5];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6092,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:101: normalize-pathname */
t8=C_fast_retrieve(lf[27]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t3=C_retrieve2(lf[24],"quotewrap");
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f6024,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1000: g815 */
t5=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
f_1562(3,av2);}}}

/* k4574 in k4571 in k4568 in k4562 in copy-files in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_4576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4576,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4579,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:1000: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k2200 in k2184 in k2181 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in ... */
static void C_ccall f_2202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2202,2,av);}
/* csc.scm:552: print* */
t2=*((C_word*)lf[231]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_make_character(32);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4571 in k4568 in k4562 in copy-files in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_4573(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4573,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4576,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(lf[0])){
t3=C_retrieve2(lf[28],"quotewrap-no-slash-trans");
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f6028,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=t4;
t6=((C_word*)t0)[6];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6097,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:101: normalize-pathname */
t8=C_fast_retrieve(lf[27]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t3=C_retrieve2(lf[24],"quotewrap");
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f6032,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1000: g813 */
t5=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
f_1562(3,av2);}}}

/* k2207 in k2181 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in ... */
static void C_ccall f_2209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2209,2,av);}
/* csc.scm:551: print* */
t2=*((C_word*)lf[231]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_make_character(32);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4568 in k4562 in copy-files in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in ... */
static void C_ccall f_4570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4570,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4573,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:1000: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in ... */
static void C_ccall f_1716(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,4)))){
C_save_and_reclaim((void *)f_1716,2,av);}
a=C_alloc(28);
t2=C_mutate2(&lf[87] /* (set! library-dir ...) */,t1);
t3=lf[88] /* link-options */ =C_SCHEME_END_OF_LIST;;
t4=lf[89] /* target-filename */ =C_SCHEME_FALSE;;
t5=lf[90] /* verbose */ =C_SCHEME_FALSE;;
t6=lf[91] /* keep-files */ =C_SCHEME_FALSE;;
t7=lf[92] /* translate-only */ =C_SCHEME_FALSE;;
t8=lf[93] /* compile-only */ =C_SCHEME_FALSE;;
t9=lf[94] /* to-stdout */ =C_SCHEME_FALSE;;
t10=lf[95] /* shared */ =C_SCHEME_FALSE;;
t11=lf[96] /* static */ =C_SCHEME_FALSE;;
t12=lf[97] /* static-libs */ =C_SCHEME_FALSE;;
t13=lf[98] /* required-extensions */ =C_SCHEME_END_OF_LIST;;
t14=C_mutate2(&lf[99] /* (set! compiler-options ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4086,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate2(&lf[104] /* (set! lib-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4475,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate2(&lf[108] /* (set! copy-files ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4556,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate2(&lf[115] /* (set! linker-options ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4605,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate2(&lf[119] /* (set! linker-libraries ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4635,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate2(&lf[120] /* (set! constant836 ...) */,lf[121]);
t20=C_mutate2(&lf[100] /* (set! quote-option ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4733,tmp=(C_word)a,a+=2,tmp));
t21=lf[131] /* last-exit-code */ =C_SCHEME_FALSE;;
t22=C_mutate2(&lf[110] /* (set! command ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4845,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate2(&lf[144] /* (set! $delete-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4861,tmp=(C_word)a,a+=2,tmp));
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5019,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5029,a[2]=t24,tmp=(C_word)a,a+=3,tmp);
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5033,a[2]=t25,tmp=(C_word)a,a+=3,tmp);
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5037,a[2]=t26,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1146: get-environment-variable */
t28=C_fast_retrieve(lf[142]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t28;
av2[1]=t27;
av2[2]=lf[409];
((C_proc)(void*)(*((C_word*)t28+1)))(3,av2);}}

/* k5209 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in ... */
static void C_ccall f_5211(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5211,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5215,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_retrieve2(lf[48],"default-library");
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t3;
av2[2]=lf[421];
av2[3]=C_retrieve2(lf[48],"default-library");
tp(4,av2);}}

/* k5213 in k5209 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in ... */
static void C_ccall f_5215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5215,2,av);}
/* csc.scm:226: string-append */
t2=*((C_word*)lf[122]+1);{
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

/* k4723 in k4716 in fold in k4686 in k4744 in k4738 in quote-option in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in ... */
static void C_ccall f_4725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4725,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4583 in k4580 in k4577 in k4574 in k4571 in k4568 in k4562 in copy-files in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in ... */
static void C_ccall f_4585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4585,2,av);}
/* csc.scm:999: command */
f_4845(((C_word*)t0)[2],t1);}

/* k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in ... */
static void C_ccall f_1681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1681,2,av);}
a=C_alloc(6);
t2=C_mutate2(&lf[73] /* (set! extra-libraries ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1685,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_MORE_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_MORE_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k4580 in k4577 in k4574 in k4571 in k4568 in k4562 in copy-files in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in ... */
static void C_ccall f_4582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4582,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4585,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1000: get-output-string */
t3=C_fast_retrieve(lf[111]);{
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

/* k2214 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_2216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2216,2,av);}
/* csc.scm:550: print* */
t2=*((C_word*)lf[231]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_make_character(32);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in ... */
static void C_ccall f_1685(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1685,2,av);}
a=C_alloc(12);
t2=C_mutate2(&lf[74] /* (set! extra-shared-libraries ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5203,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5207,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5211,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t6=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t6=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in ... */
static void C_ccall f_1700(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1700,2,av);}
a=C_alloc(9);
t2=C_i_member(t1,lf[80]);
t3=(C_truep(t2)?C_SCHEME_FALSE:t1);
t4=C_mutate2(&lf[81] /* (set! include-dir ...) */,t3);
t5=lf[82] /* compile-options */ =C_SCHEME_END_OF_LIST;;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1708,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5054,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[81],"include-dir"))){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5164,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:249: conc */
t9=C_fast_retrieve(lf[241]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[415];
av2[3]=C_retrieve2(lf[81],"include-dir");
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t8=t7;
f_5054(t8,C_SCHEME_END_OF_LIST);}}

/* k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in ... */
static void C_ccall f_1708(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1708,2,av);}
a=C_alloc(9);
t2=C_mutate2(&lf[83] /* (set! builtin-compile-options ...) */,t1);
t3=lf[84] /* translation-optimization-options */ =C_SCHEME_END_OF_LIST;;
t4=C_mutate2(&lf[85] /* (set! compilation-optimization-options ...) */,C_retrieve2(lf[49],"default-compilation-optimization-options"));
t5=C_mutate2(&lf[86] /* (set! linking-optimization-options ...) */,C_retrieve2(lf[51],"default-linking-optimization-options"));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1716,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5044,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t8=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t8=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}

/* k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in ... */
static void C_ccall f_2227(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_2227,2,av);}
a=C_alloc(19);
t2=t1;
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2230,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(t3,lf[250]);
t6=(C_truep(t5)?t5:C_eqp(t3,lf[251]));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2242,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1867,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t10=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=C_mpointer(&a,(void*)C_CSC_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
t7=C_eqp(t3,lf[256]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2254,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2261,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:598: chicken-version */
t10=C_fast_retrieve(lf[257]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t8=C_eqp(t3,lf[258]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2270,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2277,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:601: sprintf */
t11=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=C_retrieve2(lf[30],"translator");
av2[3]=lf[259];
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
t9=C_eqp(t3,lf[260]);
if(C_truep(t9)){
t10=lf[61] /* cpp-mode */ =C_SCHEME_TRUE;;
if(C_truep(C_retrieve2(lf[4],"osx"))){
t11=C_a_i_cons(&a,2,lf[261],C_retrieve2(lf[82],"compile-options"));
t12=C_mutate2(&lf[82] /* (set! compile-options ...) */,t11);
/* csc.scm:818: loop */
t13=((C_word*)((C_word*)t0)[2])[1];
f_1980(t13,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
/* csc.scm:818: loop */
t11=((C_word*)((C_word*)t0)[2])[1];
f_1980(t11,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}}
else{
t10=C_eqp(t3,lf[262]);
if(C_truep(t10)){
t11=lf[62] /* objc-mode */ =C_SCHEME_TRUE;;
/* csc.scm:818: loop */
t12=((C_word*)((C_word*)t0)[2])[1];
f_1980(t12,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t11=C_eqp(t3,lf[263]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2308,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:610: cons* */
t13=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t13;
av2[1]=t12;
av2[2]=lf[264];
av2[3]=lf[265];
av2[4]=C_retrieve2(lf[79],"translate-options");
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}
else{
t12=C_eqp(t3,lf[266]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:614: cons* */
t14=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t14;
av2[1]=t13;
av2[2]=lf[267];
av2[3]=lf[268];
av2[4]=C_retrieve2(lf[79],"translate-options");
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}
else{
t13=C_eqp(t3,lf[269]);
if(C_truep(t13)){
t14=lf[64] /* inquiry-only */ =C_SCHEME_TRUE;;
t15=lf[65] /* show-cflags */ =C_SCHEME_TRUE;;
/* csc.scm:818: loop */
t16=((C_word*)((C_word*)t0)[2])[1];
f_1980(t16,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t14=C_eqp(t3,lf[270]);
if(C_truep(t14)){
t15=lf[64] /* inquiry-only */ =C_SCHEME_TRUE;;
t16=lf[66] /* show-ldflags */ =C_SCHEME_TRUE;;
/* csc.scm:818: loop */
t17=((C_word*)((C_word*)t0)[2])[1];
f_1980(t17,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t15=C_eqp(t3,lf[271]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2345,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:622: print */
t17=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t17;
av2[1]=t16;
av2[2]=C_retrieve2(lf[31],"compiler");
((C_proc)(void*)(*((C_word*)t17+1)))(3,av2);}}
else{
t16=C_eqp(t3,lf[272]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2357,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:623: print */
t18=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t18;
av2[1]=t17;
av2[2]=C_retrieve2(lf[32],"c++-compiler");
((C_proc)(void*)(*((C_word*)t18+1)))(3,av2);}}
else{
t17=C_eqp(t3,lf[273]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2369,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:624: print */
t19=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t19;
av2[1]=t18;
av2[2]=C_retrieve2(lf[34],"linker");
((C_proc)(void*)(*((C_word*)t19+1)))(3,av2);}}
else{
t18=C_eqp(t3,lf[274]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2381,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:625: print */
t20=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t20;
av2[1]=t19;
av2[2]=C_retrieve2(lf[29],"home");
((C_proc)(void*)(*((C_word*)t20+1)))(3,av2);}}
else{
t19=C_eqp(t3,lf[275]);
if(C_truep(t19)){
t20=lf[64] /* inquiry-only */ =C_SCHEME_TRUE;;
t21=lf[67] /* show-libs */ =C_SCHEME_TRUE;;
/* csc.scm:818: loop */
t22=((C_word*)((C_word*)t0)[2])[1];
f_1980(t22,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t20=C_eqp(t3,lf[276]);
t21=(C_truep(t20)?t20:C_eqp(t3,lf[277]));
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2404,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_numberp(C_retrieve2(lf[90],"verbose")))){
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2419,a[2]=t22,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:631: cons* */
t24=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t24;
av2[1]=t23;
av2[2]=lf[280];
av2[3]=lf[281];
av2[4]=C_retrieve2(lf[82],"compile-options");
((C_proc)(void*)(*((C_word*)t24+1)))(5,av2);}}
else{
t23=t22;
f_2404(t23,C_SCHEME_UNDEFINED);}}
else{
t22=C_eqp(t3,lf[282]);
t23=(C_truep(t22)?t22:C_eqp(t3,lf[283]));
if(C_truep(t23)){
t24=C_a_i_cons(&a,2,lf[284],C_retrieve2(lf[82],"compile-options"));
t25=C_mutate2(&lf[82] /* (set! compile-options ...) */,t24);
/* csc.scm:639: t-options */
f_1907(t4,C_a_i_list(&a,1,lf[285]));}
else{
t24=C_eqp(t3,lf[286]);
t25=(C_truep(t24)?t24:C_eqp(t3,lf[287]));
if(C_truep(t25)){
t26=lf[92] /* translate-only */ =C_SCHEME_TRUE;;
/* csc.scm:642: t-options */
f_1907(t4,C_a_i_list(&a,1,lf[288]));}
else{
t26=C_eqp(t3,lf[289]);
t27=(C_truep(t26)?t26:C_eqp(t3,lf[290]));
if(C_truep(t27)){
t28=lf[92] /* translate-only */ =C_SCHEME_TRUE;;
/* csc.scm:645: t-options */
f_1907(t4,C_a_i_list(&a,1,lf[291]));}
else{
t28=C_eqp(t3,lf[292]);
if(C_truep(t28)){
t29=lf[91] /* keep-files */ =C_SCHEME_TRUE;;
/* csc.scm:818: loop */
t30=((C_word*)((C_word*)t0)[2])[1];
f_1980(t30,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t29=C_eqp(t3,lf[293]);
if(C_truep(t29)){
t30=lf[93] /* compile-only */ =C_SCHEME_TRUE;;
/* csc.scm:818: loop */
t31=((C_word*)((C_word*)t0)[2])[1];
f_1980(t31,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t30=C_eqp(t3,lf[294]);
if(C_truep(t30)){
t31=lf[92] /* translate-only */ =C_SCHEME_TRUE;;
/* csc.scm:818: loop */
t32=((C_word*)((C_word*)t0)[2])[1];
f_1980(t32,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t31=C_eqp(t3,lf[295]);
t32=(C_truep(t31)?t31:C_eqp(t3,lf[296]));
if(C_truep(t32)){
t33=lf[63] /* embedded */ =C_SCHEME_TRUE;;
t34=C_a_i_cons(&a,2,lf[297],C_retrieve2(lf[82],"compile-options"));
t35=C_mutate2(&lf[82] /* (set! compile-options ...) */,t34);
/* csc.scm:818: loop */
t36=((C_word*)((C_word*)t0)[2])[1];
f_1980(t36,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t33=C_eqp(t3,lf[298]);
t34=(C_truep(t33)?t33:C_eqp(t3,lf[299]));
if(C_truep(t34)){
t35=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2512,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:653: check */
f_1914(t35,t2,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t35=C_eqp(t3,lf[301]);
if(C_truep(t35)){
t36=(
  /* csc.scm:658: use-private-repository */
  f_1963(C_a_i(&a,6))
);
/* csc.scm:818: loop */
t37=((C_word*)((C_word*)t0)[2])[1];
f_1980(t37,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t36=C_eqp(t3,lf[302]);
if(C_truep(t36)){
t37=lf[45] /* generate-manifest */ =C_SCHEME_TRUE;;
/* csc.scm:818: loop */
t38=((C_word*)((C_word*)t0)[2])[1];
f_1980(t38,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t37=C_eqp(t3,lf[303]);
if(C_truep(t37)){
t38=lf[69] /* gui */ =C_SCHEME_TRUE;;
t39=C_a_i_cons(&a,2,lf[304],C_retrieve2(lf[82],"compile-options"));
t40=C_mutate2(&lf[82] /* (set! compile-options ...) */,t39);
if(C_truep(C_retrieve2(lf[2],"mingw"))){
t41=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t42=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2579,a[2]=t41,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t43=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t43;
av2[1]=t42;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_SHARE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t43+1)))(4,av2);}}
else{
/* csc.scm:818: loop */
t41=((C_word*)((C_word*)t0)[2])[1];
f_1980(t41,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}}
else{
t38=C_eqp(t3,lf[310]);
if(C_truep(t38)){
t39=lf[70] /* deploy */ =C_SCHEME_TRUE;;
t40=lf[71] /* deployed */ =C_SCHEME_TRUE;;
/* csc.scm:818: loop */
t41=((C_word*)((C_word*)t0)[2])[1];
f_1980(t41,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t39=C_eqp(t3,lf[311]);
if(C_truep(t39)){
t40=lf[71] /* deployed */ =C_SCHEME_TRUE;;
/* csc.scm:818: loop */
t41=((C_word*)((C_word*)t0)[2])[1];
f_1980(t41,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t40=C_eqp(t3,lf[312]);
if(C_truep(t40)){
t41=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2603,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:679: check */
f_1914(t41,t2,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t41=C_eqp(t3,lf[314]);
t42=(C_truep(t41)?t41:C_eqp(t3,lf[315]));
if(C_truep(t42)){
t43=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2630,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:684: check */
f_1914(t43,t2,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t43=C_eqp(t3,lf[316]);
t44=(C_truep(t43)?t43:C_eqp(t3,lf[317]));
if(C_truep(t44)){
t45=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2651,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:688: cons* */
t46=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t46;
av2[1]=t45;
av2[2]=lf[318];
av2[3]=lf[319];
av2[4]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t46+1)))(5,av2);}}
else{
t45=C_eqp(t3,lf[320]);
if(C_truep(t45)){
t46=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2661,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:689: cons* */
t47=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t47;
av2[1]=t46;
av2[2]=lf[321];
av2[3]=lf[322];
av2[4]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t47+1)))(5,av2);}}
else{
t46=C_eqp(t3,lf[323]);
if(C_truep(t46)){
t47=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2671,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:690: cons* */
t48=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t48;
av2[1]=t47;
av2[2]=lf[324];
av2[3]=lf[325];
av2[4]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t48+1)))(5,av2);}}
else{
t47=C_eqp(t3,lf[326]);
if(C_truep(t47)){
t48=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2681,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:691: cons* */
t49=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t49;
av2[1]=t48;
av2[2]=lf[327];
av2[3]=lf[328];
av2[4]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t49+1)))(5,av2);}}
else{
t48=C_eqp(t3,lf[329]);
if(C_truep(t48)){
t49=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2691,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:692: cons* */
t50=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t50;
av2[1]=t49;
av2[2]=lf[330];
av2[3]=lf[331];
av2[4]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t50+1)))(5,av2);}}
else{
t49=C_eqp(t3,lf[332]);
if(C_truep(t49)){
t50=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2701,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:694: cons* */
t51=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t51;
av2[1]=t50;
av2[2]=lf[333];
av2[3]=lf[334];
av2[4]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t51+1)))(5,av2);}}
else{
t50=C_eqp(t3,lf[335]);
if(C_truep(t50)){
t51=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2711,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:695: cons* */
t52=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t52;
av2[1]=t51;
av2[2]=lf[336];
av2[3]=lf[337];
av2[4]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t52+1)))(5,av2);}}
else{
t51=C_eqp(t3,lf[338]);
if(C_truep(t51)){
t52=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2721,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:696: cons* */
t53=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t53;
av2[1]=t52;
av2[2]=lf[339];
av2[3]=lf[340];
av2[4]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t53+1)))(5,av2);}}
else{
t52=C_eqp(t3,lf[341]);
if(C_truep(t52)){
t53=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2731,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:697: cons* */
t54=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t54;
av2[1]=t53;
av2[2]=lf[342];
av2[3]=lf[343];
av2[4]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t54+1)))(5,av2);}}
else{
t53=C_eqp(t3,lf[344]);
if(C_truep(t53)){
t54=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2741,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:698: cons* */
t55=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t55;
av2[1]=t54;
av2[2]=lf[345];
av2[3]=lf[346];
av2[4]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t55+1)))(5,av2);}}
else{
t54=C_eqp(t3,lf[347]);
if(C_truep(t54)){
t55=lf[90] /* verbose */ =C_SCHEME_TRUE;;
t56=lf[68] /* dry-run */ =C_SCHEME_TRUE;;
/* csc.scm:818: loop */
t57=((C_word*)((C_word*)t0)[2])[1];
f_1980(t57,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t55=C_eqp(t3,lf[348]);
t56=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2758,a[2]=((C_word*)t0)[8],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[6],a[9]=t2,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t55)){
t57=t56;
f_2758(t57,t55);}
else{
t57=C_eqp(t3,lf[405]);
t58=t56;
f_2758(t58,(C_truep(t57)?t57:C_eqp(t3,lf[406])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k2218 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2220,2,av);}
/* csc.scm:547: append */
t2=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[88],"link-options");
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2228 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2230,2,av);}
/* csc.scm:818: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1980(t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k5205 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in ... */
static void C_ccall f_5207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5207,2,av);}
a=C_alloc(6);
t2=C_retrieve2(lf[48],"default-library");
if(C_truep(C_retrieve2(lf[19],"chicken-prefix"))){
t3=C_a_i_list2(&a,2,C_retrieve2(lf[19],"chicken-prefix"),lf[420]);
/* csc.scm:89: make-pathname */
t4=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
av2[3]=C_retrieve2(lf[48],"default-library");
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
f_5203(2,av2);}}}

/* k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in ... */
static void C_ccall f_5203(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5203,2,av);}
a=C_alloc(12);
t2=C_a_i_list1(&a,1,t1);
t3=C_mutate2(&lf[75] /* (set! default-library-files ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5189,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5193,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t6=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_NAME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t6=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIB_NAME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k3665 in for-each-loop504 in k2147 in k2144 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in ... */
static void C_ccall f_3667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_3667,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3670,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_member(t2,C_retrieve2(lf[55],"c-files")))){
/* csc.scm:835: stop */
f_1499(t3,lf[225],C_a_i_list(&a,2,((C_word*)t0)[3],t2));}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_3670(2,av2);}}}

/* k4716 in fold in k4686 in k4744 in k4738 in quote-option in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in ... */
static void C_fcall f_4718(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4718,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* csc.scm:1038: fold */
t5=((C_word*)((C_word*)t0)[5])[1];
f_4690(t5,t2,t4);}

/* k4711 in fold in k4686 in k4744 in k4738 in quote-option in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in ... */
static void C_ccall f_4713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4713,2,av);}
/* csc.scm:1035: cons* */
t2=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(92);
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in ... */
static void C_ccall f_1651(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1651,2,av);}
a=C_alloc(6);
t2=C_mutate2(&lf[53] /* (set! extra-features ...) */,t1);
t3=lf[54] /* scheme-files */ =C_SCHEME_END_OF_LIST;;
t4=lf[55] /* c-files */ =C_SCHEME_END_OF_LIST;;
t5=lf[56] /* rc-files */ =C_SCHEME_END_OF_LIST;;
t6=lf[57] /* generated-c-files */ =C_SCHEME_END_OF_LIST;;
t7=lf[58] /* generated-rc-files */ =C_SCHEME_END_OF_LIST;;
t8=lf[59] /* object-files */ =C_SCHEME_END_OF_LIST;;
t9=lf[60] /* generated-object-files */ =C_SCHEME_END_OF_LIST;;
t10=lf[61] /* cpp-mode */ =C_SCHEME_FALSE;;
t11=lf[62] /* objc-mode */ =C_SCHEME_FALSE;;
t12=lf[63] /* embedded */ =C_SCHEME_FALSE;;
t13=lf[64] /* inquiry-only */ =C_SCHEME_FALSE;;
t14=lf[65] /* show-cflags */ =C_SCHEME_FALSE;;
t15=lf[66] /* show-ldflags */ =C_SCHEME_FALSE;;
t16=lf[67] /* show-libs */ =C_SCHEME_FALSE;;
t17=lf[68] /* dry-run */ =C_SCHEME_FALSE;;
t18=lf[69] /* gui */ =C_SCHEME_FALSE;;
t19=lf[70] /* deploy */ =C_SCHEME_FALSE;;
t20=lf[71] /* deployed */ =C_SCHEME_FALSE;;
t21=lf[72] /* rpath */ =C_SCHEME_FALSE;;
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1681,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t23=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t23;
av2[1]=t22;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_MORE_STATIC_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t23+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t23=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t23;
av2[1]=t22;
av2[2]=C_mpointer(&a,(void*)C_TARGET_MORE_STATIC_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t23+1)))(4,av2);}}}

/* k5162 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in ... */
static void C_ccall f_5164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5164,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_5054(t2,C_a_i_list1(&a,1,t1));}

/* k4095 in compiler-options in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in ... */
static void C_ccall f_4097(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_4097,2,av);}
a=C_alloc(11);
t2=C_i_check_list_2(t1,lf[101]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4103,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4105,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_4105(t7,t3,t1);}

/* k5254 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in ... */
static void C_ccall f_5256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5256,2,av);}
/* csc.scm:138: string-split */
t2=C_fast_retrieve(lf[233]);{
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

/* k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in ... */
static void C_ccall f_1646(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1646,2,av);}
a=C_alloc(9);
t2=C_mutate2(&lf[51] /* (set! default-linking-optimization-options ...) */,t1);
t3=C_mutate2(&lf[52] /* (set! best-linking-optimization-options ...) */,C_retrieve2(lf[51],"default-linking-optimization-options"));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1651,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
f_1651(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5242,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_TARGET_FEATURES);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in ... */
static void C_ccall f_1641(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1641,2,av);}
a=C_alloc(9);
t2=C_mutate2(&lf[49] /* (set! default-compilation-optimization-options ...) */,t1);
t3=C_mutate2(&lf[50] /* (set! best-compilation-optimization-options ...) */,C_retrieve2(lf[49],"default-compilation-optimization-options"));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1646,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5246,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t6=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LDFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t6=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LDFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k5173 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in ... */
static void C_ccall f_5175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5175,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5179,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_INCLUDE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INCLUDE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k5177 in k5173 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in ... */
static void C_ccall f_5179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5179,2,av);}
a=C_alloc(6);
if(C_truep(C_retrieve2(lf[19],"chicken-prefix"))){
t2=C_a_i_list2(&a,2,C_retrieve2(lf[19],"chicken-prefix"),((C_word*)t0)[2]);
/* csc.scm:89: make-pathname */
t3=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=lf[416];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
f_1700(2,av2);}}}

/* k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in ... */
static void C_ccall f_1633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_1633,2,av);}
a=C_alloc(3);
t2=C_mutate2(&lf[47] /* (set! dynamic-libchicken ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1637,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:136: string-append */
t4=*((C_word*)lf[122]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[46],"libchicken");
av2[3]=lf[422];
av2[4]=C_retrieve2(lf[38],"library-extension");
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in ... */
static void C_ccall f_1637(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1637,2,av);}
a=C_alloc(9);
t2=C_mutate2(&lf[48] /* (set! default-library ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1641,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5256,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k2259 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2261,2,av);}
/* csc.scm:598: print */
t2=*((C_word*)lf[137]+1);{
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

/* k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in ... */
static void C_ccall f_5189(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5189,2,av);}
a=C_alloc(9);
t2=C_a_i_list1(&a,1,t1);
t3=C_mutate2(&lf[76] /* (set! default-shared-library-files ...) */,t2);
t4=C_mutate2(&lf[77] /* (set! library-files ...) */,C_retrieve2(lf[75],"default-library-files"));
t5=C_mutate2(&lf[78] /* (set! shared-library-files ...) */,C_retrieve2(lf[76],"default-shared-library-files"));
t6=lf[79] /* translate-options */ =C_SCHEME_END_OF_LIST;;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1700,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5175,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:240: make-pathname */
t9=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[417];
av2[3]=lf[418];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* k1729 in k1725 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_fcall f_1731(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1731,2,t0,t1);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1735,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:288: get-environment-variable */
t4=C_fast_retrieve(lf[142]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[235];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1733 in k1729 in k1725 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in ... */
static void C_ccall f_1735(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_1735,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1738,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
t4=t1;
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1751,a[2]=t7,a[3]=t8,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:290: string-split */
t10=C_fast_retrieve(lf[233]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=t4;
av2[3]=lf[234];
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
/* csc.scm:269: append */
t3=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k1736 in k1733 in k1729 in k1725 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in ... */
static void C_ccall f_1738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1738,2,av);}
/* csc.scm:269: append */
t2=*((C_word*)lf[103]+1);{
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

/* k4781 in k4778 in k4775 in k4772 in command in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_4783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4783,2,av);}
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
t3=lf[131] /* last-exit-code */ =C_fix(0);;
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_retrieve2(lf[131],"last-exit-code");
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=lf[131] /* last-exit-code */ =C_fix(1);;
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_retrieve2(lf[131],"last-exit-code");
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4778 in k4775 in k4772 in command in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_4780(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_4780,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4783,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(t2,C_fix(0));
if(C_truep(t4)){
t5=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_4783(2,av2);}}
else{
t5=*((C_word*)lf[132]+1);
t6=*((C_word*)lf[132]+1);
t7=C_i_check_port_2(*((C_word*)lf[132]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[133]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4800,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csc.scm:1064: ##sys#print */
t9=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[135];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[132]+1);
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}

/* k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in ... */
static void C_fcall f_1624(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_1624,2,t0,t1);}
a=C_alloc(9);
t2=C_mutate2(&lf[44] /* (set! pic-options ...) */,t1);
t3=lf[45] /* generate-manifest */ =C_SCHEME_FALSE;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1629,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5273,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[18]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_NAME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in ... */
static void C_ccall f_1629(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1629,2,av);}
a=C_alloc(9);
t2=C_mutate2(&lf[46] /* (set! libchicken ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1633,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[6],"cygwin"))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5269,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_NAME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_retrieve2(lf[46],"libchicken");
f_1633(2,av2);}}}

/* k2268 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2270,2,av);}
/* csc.scm:602: exit */
t2=C_fast_retrieve(lf[14]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5191 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in ... */
static void C_ccall f_5193(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5193,2,av);}
/* csc.scm:231: string-append */
t2=*((C_word*)lf[122]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[419];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2275 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2277,2,av);}
/* csc.scm:601: system */
t2=C_fast_retrieve(lf[136]);{
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

/* k5244 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in ... */
static void C_ccall f_5246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5246,2,av);}
/* csc.scm:140: string-split */
t2=C_fast_retrieve(lf[233]);{
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

/* k5240 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in ... */
static void C_ccall f_5242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5242,2,av);}
/* csc.scm:142: string-split */
t2=C_fast_retrieve(lf[233]);{
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

/* k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in ... */
static void C_ccall f_1612(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1612,2,av);}
a=C_alloc(3);
t2=C_mutate2(&lf[35] /* (set! c++-linker ...) */,t1);
t3=C_mutate2(&lf[36] /* (set! object-extension ...) */,lf[37]);
t4=C_mutate2(&lf[38] /* (set! library-extension ...) */,lf[39]);
t5=C_mutate2(&lf[40] /* (set! executable-extension ...) */,lf[41]);
t6=C_mutate2(&lf[42] /* (set! shared-library-extension ...) */,C_fast_retrieve(lf[43]));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1624,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=C_retrieve2(lf[2],"mingw");
if(C_truep(C_retrieve2(lf[2],"mingw"))){
t9=C_retrieve2(lf[2],"mingw");
t10=t7;
f_1624(t10,(C_truep(C_retrieve2(lf[2],"mingw"))?lf[426]:lf[427]));}
else{
t9=C_retrieve2(lf[6],"cygwin");
t10=t7;
f_1624(t10,(C_truep(C_retrieve2(lf[6],"cygwin"))?lf[426]:lf[427]));}}

/* k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 in ... */
static void C_ccall f_1600(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1600,2,av);}
a=C_alloc(9);
t2=C_mutate2(&lf[32] /* (set! c++-compiler ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1604,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5300,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_RC_COMPILER);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_TARGET_RC_COMPILER);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in ... */
static void C_ccall f_1604(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1604,2,av);}
a=C_alloc(9);
t2=C_mutate2(&lf[33] /* (set! rc-compiler ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1608,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5290,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CC);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CC);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in ... */
static void C_ccall f_1608(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1608,2,av);}
a=C_alloc(9);
t2=C_mutate2(&lf[34] /* (set! linker ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1612,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5280,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CXX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CXX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in ... */
static void C_ccall f_3900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3900,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3903,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4036,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[45],"generate-manifest"))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4061,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:885: software-type */
t5=C_fast_retrieve(lf[216]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t3;
f_4036(t4,C_SCHEME_FALSE);}}

/* k3901 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in ... */
static void C_fcall f_3903(C_word t0,C_word t1){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_3903,2,t0,t1);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3904,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve2(lf[56],"rc-files");
t4=C_i_check_list_2(C_retrieve2(lf[56],"rc-files"),lf[157]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3941,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4012,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_4012(t9,t5,C_retrieve2(lf[56],"rc-files"));}

/* g595 in k3901 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in ... */
static void C_fcall f_3904(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_3904,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3908,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:892: string-append */
t4=*((C_word*)lf[122]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[209];
av2[4]=C_retrieve2(lf[36],"object-extension");
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3906 in g595 in k3901 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_ccall f_3908(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_3908,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3911,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3923,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3931,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:895: quotewrap */
t6=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
f_1562(3,av2);}}

/* k2577 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2579,2,av);}
/* csc.scm:666: make-pathname */
t2=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[309];
av2[4]=C_retrieve2(lf[36],"object-extension");
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k2573 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,6)))){
C_save_and_reclaim((void *)f_2575,2,av);}
a=C_alloc(8);
t2=C_a_i_cons(&a,2,t1,C_retrieve2(lf[59],"object-files"));
t3=C_mutate2(&lf[59] /* (set! object-files ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2571,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:671: cons* */
t5=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[305];
av2[3]=lf[306];
av2[4]=lf[307];
av2[5]=lf[308];
av2[6]=C_retrieve2(lf[88],"link-options");
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}

/* k2569 in k2573 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_2571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2571,2,av);}
t2=C_mutate2(&lf[88] /* (set! link-options ...) */,t1);
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1980(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k4744 in k4738 in quote-option in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in ... */
static void C_ccall f_4746(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_4746,2,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4670,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4684,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4688,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* string->list */
t9=C_fast_retrieve(lf[129]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4738 in quote-option in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in ... */
static void C_ccall f_4740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4740,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4746,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4751,tmp=(C_word)a,a+=2,tmp);
/* csc.scm:1045: string-any */
t4=C_fast_retrieve(lf[130]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k3921 in k3906 in g595 in k3901 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in ... */
static void C_ccall f_3923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3923,2,av);}
/* csc.scm:893: command */
f_4845(((C_word*)t0)[2],t1);}

/* k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in ... */
static void C_fcall f_3100(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3100,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
/* csc.scm:771: t-options */
f_1907(((C_word*)t0)[3],C_a_i_list(&a,1,((C_word*)t0)[4]));}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3109,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_block_size(((C_word*)t0)[4]);
if(C_truep(C_fixnum_greaterp(t3,C_fix(1)))){
t4=C_i_string_ref(((C_word*)t0)[4],C_fix(0));
t5=t2;
f_3109(t5,C_u_i_char_equalp(C_make_character(45),t4));}
else{
t4=t2;
f_3109(t4,C_SCHEME_FALSE);}}}

/* k4224 in k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in ... */
static void C_ccall f_4226(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4226,2,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=t1;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4529,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4536,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4495,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:979: get-environment-variable */
t8=C_fast_retrieve(lf[142]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[176];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k4220 in k4207 in k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in ... */
static void C_ccall f_4222(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4222,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t1;
t4=((C_word*)((C_word*)t0)[3])[1];
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4920,a[2]=t2,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1086: make-pathname */
t6=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[169];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in ... */
static void C_fcall f_3109(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_3109,2,t0,t1);}
a=C_alloc(11);
if(C_truep(t1)){
t2=C_i_string_ref(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_u_i_char_equalp(C_make_character(108),t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3120,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:775: append */
t5=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=C_retrieve2(lf[88],"link-options");
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=C_i_string_ref(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_u_i_char_equalp(C_make_character(76),t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3135,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:777: append */
t6=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t4;
av2[2]=C_retrieve2(lf[88],"link-options");
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t4=C_i_string_ref(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_u_i_char_equalp(C_make_character(73),t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3150,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:779: append */
t7=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t5;
av2[2]=C_retrieve2(lf[82],"compile-options");
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t5=C_i_string_ref(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_u_i_char_equalp(C_make_character(68),t5))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3168,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:781: substring */
t7=*((C_word*)lf[378]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(2);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t6=C_i_string_ref(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_u_i_char_equalp(C_make_character(70),t6))){
if(C_truep(C_retrieve2(lf[4],"osx"))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3182,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t8=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:784: append */
t9=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t7;
av2[2]=C_retrieve2(lf[82],"compile-options");
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
/* csc.scm:818: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_1980(t7,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1]);}}
else{
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3192,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t8=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t8,C_fix(3)))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3298,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:785: substring */
t10=*((C_word*)lf[378]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t9;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
av2[4]=C_fix(4);
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
t9=t7;
f_3192(t9,C_SCHEME_FALSE);}}}}}}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3310,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:794: file-exists? */
t3=C_fast_retrieve(lf[163]);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k3909 in k3906 in g595 in k3901 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in ... */
static void C_ccall f_3911(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_3911,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[60],"generated-object-files"));
t3=C_mutate2(&lf[60] /* (set! generated-object-files ...) */,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t4);
t6=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* a4762 in quote-option in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in ... */
static void C_ccall f_4763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4763,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_char_equalp(C_make_character(34),t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3943 in k3939 in k3901 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_ccall f_3945(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3945,2,av);}
a=C_alloc(9);
t2=C_mutate2(&lf[59] /* (set! object-files ...) */,t1);
if(C_truep(C_retrieve2(lf[91],"keep-files"))){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_retrieve2(lf[144],"$delete-file");
t4=C_retrieve2(lf[57],"generated-c-files");
t5=C_i_check_list_2(C_retrieve2(lf[57],"generated-c-files"),lf[157]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3954,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3985,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_3985(t10,t6,C_retrieve2(lf[57],"generated-c-files"));}}

/* k3939 in k3901 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in ... */
static void C_ccall f_3941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3941,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3945,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4010,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:899: reverse */
t4=*((C_word*)lf[210]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4243 in k4240 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in ... */
static void C_ccall f_4245(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4245,2,av);}
a=C_alloc(4);
t2=(C_truep(C_retrieve2(lf[69],"gui"))?C_i_not(C_retrieve2(lf[70],"deploy")):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
t4=((C_word*)((C_word*)t0)[3])[1];
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4884,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1081: open-output-string */
t6=C_fast_retrieve(lf[114]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
f_4168(2,av2);}}}

/* quote-option in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in ... */
static void C_ccall f_4733(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4733,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4740,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4763,tmp=(C_word)a,a+=2,tmp);
/* csc.scm:1044: string-any */
t5=C_fast_retrieve(lf[130]);{
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

/* k4240 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in ... */
static void C_fcall f_4242(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,3)))){
C_save_and_reclaim_args((void *)trf_4242,2,t0,t1);}
a=C_alloc(14);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4245,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4261,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4265,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_POSTINSTALL_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_4168(2,av2);}}}

/* k3118 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in ... */
static void C_ccall f_3120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3120,2,av);}
t2=C_mutate2(&lf[88] /* (set! link-options ...) */,t1);
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1980(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k4399 in k4393 in k4386 in k4383 in k4333 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in ... */
static void C_ccall f_4401(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4401,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4404,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4411,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4415,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:924: make-pathname */
t5=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t0)[5])[1];
av2[3]=lf[190];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* t-options in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in ... */
static void C_fcall f_1907(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_1907,2,t1,t2);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1912,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:522: append */
t4=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[79],"translate-options");
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3929 in k3906 in g595 in k3901 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in ... */
static void C_ccall f_3931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3931,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3935,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:895: quotewrap */
t4=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
f_1562(3,av2);}}

/* k3933 in k3929 in k3906 in g595 in k3901 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in ... */
static void C_ccall f_3935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3935,2,av);}
a=C_alloc(9);
t2=C_a_i_list3(&a,3,C_retrieve2(lf[33],"rc-compiler"),((C_word*)t0)[2],t1);
/* csc.scm:894: string-intersperse */
t3=C_fast_retrieve(lf[102]);{
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

/* f6108 in k2057 in k2054 in k2048 in k2041 in k2038 in k2035 in k2032 in k2029 in k2026 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in ... */
static void C_ccall f6108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f6108,2,av);}
/* csc.scm:101: qs */
t2=C_fast_retrieve(lf[25]);{
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

/* k4409 in k4399 in k4393 in k4386 in k4383 in k4333 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in ... */
static void C_ccall f_4411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4411,2,av);}
/* csc.scm:924: ##sys#print */
t2=*((C_word*)lf[16]+1);{
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

/* for-each-loop632 in k3952 in k3943 in k3939 in k3901 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in ... */
static void C_fcall f_3962(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3962,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3972,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:902: g633 */
t5=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a4750 in k4738 in quote-option in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in ... */
static void C_ccall f_4751(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4751,3,av);}
t3=C_u_i_char_whitespacep(t2);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(C_truep(t3)?t3:C_i_memq(t2,lf[120]));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4402 in k4399 in k4393 in k4386 in k4383 in k4333 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in ... */
static void C_ccall f_4404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4404,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4407,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:924: get-output-string */
t3=C_fast_retrieve(lf[111]);{
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

/* k4405 in k4402 in k4399 in k4393 in k4386 in k4383 in k4333 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in ... */
static void C_ccall f_4407(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4407,2,av);}
/* csc.scm:924: command */
f_4845(((C_word*)t0)[2],t1);}

/* k3952 in k3943 in k3939 in k3901 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in ... */
static void C_ccall f_3954(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3954,2,av);}
a=C_alloc(6);
t2=C_retrieve2(lf[144],"$delete-file");
t3=C_retrieve2(lf[58],"generated-rc-files");
t4=C_i_check_list_2(C_retrieve2(lf[58],"generated-rc-files"),lf[157]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3962,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_3962(t8,((C_word*)t0)[2],C_retrieve2(lf[58],"generated-rc-files"));}

/* k2306 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2308,2,av);}
t2=C_mutate2(&lf[79] /* (set! translate-options ...) */,t1);
t3=lf[96] /* static */ =C_SCHEME_TRUE;;
/* csc.scm:818: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1980(t4,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k4413 in k4399 in k4393 in k4386 in k4383 in k4333 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in ... */
static void C_ccall f_4415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4415,2,av);}
/* csc.scm:924: quotewrap */
t2=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_1562(3,av2);}}

/* k4417 in k4383 in k4333 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in ... */
static void C_ccall f_4419(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4419,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[109]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4425,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:923: ##sys#print */
t6=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[193];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k1910 in t-options in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in ... */
static void C_ccall f_1912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1912,2,av);}
t2=C_mutate2(&lf[79] /* (set! translate-options ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* check in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in ... */
static void C_fcall f_1914(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_1914,4,t1,t2,t3,t4);}
a=C_alloc(3);
t5=C_i_length(t3);
if(C_truep(C_i_nullp(t4))){
if(C_truep(C_i_greater_or_equalp(t5,C_fix(1)))){
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
/* csc.scm:526: stop */
f_1499(t1,lf[148],C_a_i_list(&a,1,t2));}}
else{
t6=C_i_car(t4);
if(C_truep(C_i_greater_or_equalp(t5,t6))){
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
/* csc.scm:526: stop */
f_1499(t1,lf[148],C_a_i_list(&a,1,t2));}}}

/* for-each-loop615 in k3943 in k3939 in k3901 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in ... */
static void C_fcall f_3985(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3985,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3995,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:901: g616 */
t5=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2317 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2319,2,av);}
t2=C_mutate2(&lf[79] /* (set! translate-options ...) */,t1);
t3=lf[97] /* static-libs */ =C_SCHEME_TRUE;;
/* csc.scm:818: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1980(t4,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k3166 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in ... */
static void C_ccall f_3168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3168,2,av);}
a=C_alloc(6);
/* csc.scm:781: t-options */
f_1907(((C_word*)t0)[3],C_a_i_list(&a,2,lf[377],t1));}

/* k1943 in shared-build in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in ... */
static void C_ccall f_1945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1945,2,av);}
a=C_alloc(4);
t2=C_mutate2(&lf[79] /* (set! translate-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1949,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:530: append */
t4=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[44],"pic-options");
av2[3]=lf[152];
av2[4]=C_retrieve2(lf[82],"compile-options");
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* shared-build in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in ... */
static void C_fcall f_1940(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_1940,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1945,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:529: cons* */
t4=C_fast_retrieve(lf[128]);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[153];
av2[3]=lf[154];
av2[4]=C_retrieve2(lf[79],"translate-options");
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3970 in for-each-loop632 in k3952 in k3943 in k3939 in k3901 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in ... */
static void C_ccall f_3972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3972,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3962(t3,((C_word*)t0)[4],t2);}

/* k1947 in k1943 in shared-build in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_1949(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1949,2,av);}
a=C_alloc(3);
t2=C_mutate2(&lf[82] /* (set! compile-options ...) */,t1);
t3=(C_truep(C_retrieve2(lf[4],"osx"))?(C_truep(((C_word*)t0)[2])?C_a_i_cons(&a,2,lf[149],C_retrieve2(lf[88],"link-options")):C_a_i_cons(&a,2,lf[150],C_retrieve2(lf[88],"link-options"))):C_a_i_cons(&a,2,lf[151],C_retrieve2(lf[88],"link-options")));
t4=C_mutate2(&lf[88] /* (set! link-options ...) */,t3);
t5=lf[95] /* shared */ =C_SCHEME_TRUE;;
t6=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k2240 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2242,2,av);}
/* csc.scm:596: exit */
t2=C_fast_retrieve(lf[14]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3180 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in ... */
static void C_ccall f_3182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3182,2,av);}
t2=C_mutate2(&lf[82] /* (set! compile-options ...) */,t1);
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1980(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k3993 in for-each-loop615 in k3943 in k3939 in k3901 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in ... */
static void C_ccall f_3995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3995,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3985(t3,((C_word*)t0)[4],t2);}

/* k2252 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2254,2,av);}
/* csc.scm:599: exit */
t2=C_fast_retrieve(lf[14]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

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
if(C_unlikely(!C_demand_2(2155))){
C_save(t1);
C_rereclaim2(2155*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,434);
lf[1]=C_h_intern(&lf[1],7,"mingw32");
lf[3]=C_h_intern(&lf[3],6,"macosx");
lf[5]=C_h_intern(&lf[5],6,"cygwin");
lf[7]=C_h_intern(&lf[7],3,"aix");
lf[10]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\005linux\376\003\000\000\002\376\001\000\000\006netbsd\376\003\000\000\002\376\001\000\000\007freebsd\376\003\000\000\002\376\001\000\000\007solaris\376\003\000\000\002\376\001\000\000\007openb"
"sd\376\003\000\000\002\376\001\000\000\004hurd\376\003\000\000\002\376\001\000\000\005haiku\376\377\016");
lf[12]=C_h_intern(&lf[12],18,"\003sysstandard-error");
lf[13]=C_h_intern(&lf[13],7,"fprintf");
lf[14]=C_h_intern(&lf[14],4,"exit");
lf[15]=C_h_intern(&lf[15],16,"\003syswrite-char-0");
lf[16]=C_h_intern(&lf[16],9,"\003sysprint");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[18]=C_h_intern(&lf[18],17,"\003syspeek-c-string");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\005-host");
lf[25]=C_h_intern(&lf[25],2,"qs");
lf[26]=C_h_intern(&lf[26],16,"string-translate");
lf[27]=C_h_intern(&lf[27],18,"normalize-pathname");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\001o");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[43]=C_h_intern(&lf[43],26,"\003sysload-dynamic-extension");
lf[80]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\014/usr/include\376\003\000\000\002\376B\000\000\000\376\377\016");
lf[101]=C_h_intern(&lf[101],3,"map");
lf[102]=C_h_intern(&lf[102],18,"string-intersperse");
lf[103]=C_h_intern(&lf[103],6,"append");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[106]=C_h_intern(&lf[106],13,"make-pathname");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[109]=C_h_intern(&lf[109],7,"sprintf");
lf[111]=C_h_intern(&lf[111],17,"get-output-string");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\007copy /Y");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\002cp");
lf[114]=C_h_intern(&lf[114],18,"open-output-string");
lf[116]=C_h_intern(&lf[116],17,"\003sysstring-append");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000\010 -static");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[121]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000#\376\377\016");
lf[122]=C_h_intern(&lf[122],13,"string-append");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[125]=C_h_intern(&lf[125],17,"string-translate\052");
lf[126]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\001\042\376B\000\000\002\134\042\376\377\016");
lf[127]=C_h_intern(&lf[127],16,"\003syslist->string");
lf[128]=C_h_intern(&lf[128],5,"cons\052");
lf[129]=C_h_intern(&lf[129],16,"\003sysstring->list");
lf[130]=C_h_intern(&lf[130],10,"string-any");
lf[132]=C_h_intern(&lf[132],19,"\003sysstandard-output");
lf[133]=C_h_intern(&lf[133],6,"printf");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000;\012Error: shell command terminated with non-zero exit status ");
lf[136]=C_h_intern(&lf[136],6,"system");
lf[137]=C_h_intern(&lf[137],5,"print");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\037/usr/bin/env DYLD_LIBRARY_PATH=");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[142]=C_h_intern(&lf[142],24,"get-environment-variable");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\021DYLD_LIBRARY_PATH");
lf[145]=C_h_intern(&lf[145],11,"delete-file");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\003rm ");
lf[147]=C_h_intern(&lf[147],25,"\003sysimplicit-exit-handler");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000#not enough arguments to option `~A\047");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\013-dynamiclib");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000$-bundle -headerpad_max_install_names");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\007-shared");
lf[152]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012-DC_SHARED\376\377\016");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\026chicken-compile-shared");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000\026-DC_PRIVATE_REPOSITORY");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\031-framework CoreFoundation");
lf[157]=C_h_intern(&lf[157],8,"for-each");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\032</string>\012</dict>\012</plist>");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\001\262<\077xml version=\0421.0\042 encoding=\042UTF-8\042\077>\012<!DOCTYPE plist SYSTEM \042file://local"
"host/System/Library/DTDs/PropertyList.dtd\042>\012<plist version=\0420.9\042>\012<dict>\012\011<key>C"
"FBundlePackageType</key>\012\011<string>APPL</string>\012\011<key>CFBundleIconFile</key>\012\011<s"
"tring>CHICKEN.icns</string>\012        <key>CFBundleGetInfoString</key>\012\011<string>Cr"
"eated by CHICKEN</string>\012\011<key>CFBundleSignature</key>\012\011<string>\077\077\077\077</string>\012\011"
"<key>CFBundleExecutable</key>\012\011<string>");
lf[160]=C_h_intern(&lf[160],19,"\003sysprint-to-string");
lf[161]=C_h_intern(&lf[161],19,"with-output-to-file");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\013generating ");
lf[163]=C_h_intern(&lf[163],12,"file-exists\077");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\012Info.plist");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\024chicken/CHICKEN.icns");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\014CHICKEN.icns");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\022Contents/Resources");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\016Contents/MacOS");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\010Contents");
lf[170]=C_h_intern(&lf[170],13,"pathname-file");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\005dylib");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\003dll");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\003so.");
lf[174]=C_h_intern(&lf[174],14,"number->string");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\017TARGET_LIB_PATH");
lf[177]=C_decode_literal(C_heaptop,"\376B\000\000\016Contents/MacOS");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\005mac.r");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000 /Developer/Tools/Rez -t APPL -o ");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\011 -change ");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\007.dylib ");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[183]=C_decode_literal(C_heaptop,"\376B\000\000\020@executable_path");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\006.dylib");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\003-o ");
lf[186]=C_h_intern(&lf[186],16,"create-directory");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\006mkdir ");
lf[188]=C_h_intern(&lf[188],17,"directory-exists\077");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\017Contents/MacOS/");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000\022Contents/Resources");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\011mkdir -p ");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\016Contents/MacOS");
lf[193]=C_decode_literal(C_heaptop,"\376B\000\000\011mkdir -p ");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\003app");
lf[195]=C_h_intern(&lf[195],24,"pathname-strip-extension");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\004.old");
lf[197]=C_decode_literal(C_heaptop,"\376B\000\000\004move");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\002mv");
lf[199]=C_decode_literal(C_heaptop,"\376B\000\000\005.old\047");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\030\047 - renaming source to `");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\0001Warning: output file will overwrite source file `");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\002-c");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000\003g++");
lf[204]=C_decode_literal(C_heaptop,"\376B\000\000\022-Wno-write-strings");
lf[205]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\003-o ");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000Pobject file generated from `~a\047 will overwrite explicitly given object file"
" `~a\047");
lf[208]=C_h_intern(&lf[208],26,"pathname-replace-extension");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[210]=C_h_intern(&lf[210],7,"reverse");
lf[211]=C_decode_literal(C_heaptop,"\376B\000\001\232\042\042 type=\042\042win32\042\042/>\134r\134n\042\012  \042  <ms_asmv2:trustInfo xmlns:ms_asmv2=\042\042urn:sche"
"mas-microsoft-com:asm.v2\042\042>\134r\134n\042\012  \042    <ms_asmv2:security>\134r\134n\042\012  \042      <ms_as"
"mv2:requestedPrivileges>\134r\134n\042\012  \042        <ms_asmv2:requestedExecutionLevel level"
"=\042\042asInvoker\042\042 uiAccess=\042\042false\042\042/>\134r\134n\042\012  \042      </ms_asmv2:requestedPrivileges"
">\134r\134n\042\012  \042    </ms_asmv2:security>\134r\134n\042\012  \042  </ms_asmv2:trustInfo>\134r\134n\042\012  \042</ass"
"embly>\134r\134n\042\012END");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\001\0031 24 MOVEABLE PURE\012BEGIN\012  \042<\077xml version=\042\0421.0\042\042 encoding=\042\042UTF-8\042\042 standa"
"lone=\042\042yes\042\042\077>\134r\134n\042\012  \042<assembly xmlns=\042\042urn:schemas-microsoft-com:asm.v1\042\042 mani"
"festVersion=\042\0421.0\042\042>\134r\134n\042\012  \042  <assemblyIdentity version=\042\0421.0.0.0\042\042 processorAr"
"chitecture=\042\042\052\042\042 name=\042\042");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\000\013generating ");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000\002rc");
lf[215]=C_h_intern(&lf[215],7,"windows");
lf[216]=C_h_intern(&lf[216],13,"software-type");
lf[217]=C_h_intern(&lf[217],4,"last");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\031no source files specified");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[220]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\003-:d\376\377\016");
lf[221]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\010-feature\376\003\000\000\002\376B\000\000\025chicken-scheme-to-c++\376\377\016");
lf[222]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\010-feature\376\003\000\000\002\376B\000\000\026chicken-scheme-to-objc\376\377\016");
lf[223]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012-to-stdout\376\377\016");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\014-output-file");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000KC file generated from `~a\047 will overwrite explicitly given source file `~a\047"
);
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000\003cpp");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\001m");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000\010-dynamic");
lf[230]=C_h_intern(&lf[230],7,"newline");
lf[231]=C_h_intern(&lf[231],6,"print\052");
lf[232]=C_decode_literal(C_heaptop,"\376B\000\000\002-L");
lf[233]=C_h_intern(&lf[233],12,"string-split");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\002:;");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\026CHICKEN_C_LIBRARY_PATH");
lf[236]=C_h_intern(&lf[236],7,"freebsd");
lf[237]=C_h_intern(&lf[237],7,"openbsd");
lf[238]=C_h_intern(&lf[238],6,"netbsd");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\015-Wl,-z,origin");
lf[240]=C_h_intern(&lf[240],16,"software-version");
lf[241]=C_h_intern(&lf[241],4,"conc");
lf[242]=C_decode_literal(C_heaptop,"\376B\000\000\007 -Wl,-R");
lf[243]=C_decode_literal(C_heaptop,"\376B\000\000\010\134$ORIGIN");
lf[244]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000\002-L");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000\007-Wl,-R\042");
lf[248]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[249]=C_decode_literal(C_heaptop,"\376B\000\000\002-L");
lf[250]=C_h_intern(&lf[250],5,"-help");
lf[251]=C_h_intern(&lf[251],6,"--help");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\003\047.\012");
lf[253]=C_decode_literal(C_heaptop,"\376B\000)\204\047 is a driver program for the CHICKEN compiler. Files given on the\012  comman"
"d line are translated, compiled or linked as needed.\012\012  FILENAME is a Scheme sou"
"rce file name with optional extension or a\012  C/C++/Objective-C source, object or"
" library file name with extension. OPTION\012  may be one of the following:\012\012  Gene"
"ral options:\012\012    -h  -help                      display this text and exit\012    "
"-v  -verbose                   show compiler notes and tool-invocations\012    -vv "
"                           display information about translation\012               "
"                     progress\012    -vvv                           display informa"
"tion about all compilation\012                                    stages\012    -versi"
"on                       display Scheme compiler version and exit\012    -release  "
"                     display release number and exit\012\012  File and pathname option"
"s:\012\012    -o -output-file FILENAME       specifies target executable name\012    -I -"
"include-path PATHNAME      specifies alternative path for included\012             "
"                       files\012    -to-stdout                     write compiler t"
"o stdout (implies -t)\012    -s -shared -dynamic            generate dynamically lo"
"adable shared object\012                                    file\012\012  Language option"
"s:\012\012    -D  -DSYMBOL  -feature SYMBOL  register feature identifier\012    -no-featu"
"re SYMBOL             disable builtin feature identifier\012    -c++               "
"            compile via a C++ source file (.cpp) \012    -objc                     "
"     compile via Objective-C source file (.m)\012\012  Syntax related options:\012\012    -i"
" -case-insensitive           don\047t preserve case of read symbols    \012    -K -key"
"word-style STYLE        enable alternative keyword-syntax\012                      "
"              (prefix, suffix or none)\012       -no-parentheses-synonyms    disabl"
"es list delimiter synonyms\012       -no-symbol-escape           disables support f"
"or escaped symbols\012       -r5rs-syntax                disables the CHICKEN exten"
"sions to\012                                    R5RS syntax\012    -compile-syntax    "
"            macros are made available at run-time\012    -j -emit-import-library MO"
"DULE write compile-time module information into\012                                "
"    separate file\012    -J -emit-all-import-libraries  emit import-libraries for a"
"ll defined modules\012    -no-module-registration        do not generate module reg"
"istration code\012    -no-compiler-syntax            disable expansion of compiler-"
"macros\012    -M -module                     wrap compiled code into implicit modul"
"e\012\012  Translation options:\012\012    -x  -explicit-use              do not use units `"
"library\047 and `eval\047 by\012                                    default\012    -P  -chec"
"k-syntax              stop compilation after macro-expansion\012    -A  -analyze-on"
"ly              stop compilation after first analysis pass\012\012  Debugging options:"
"\012\012    -w  -no-warnings               disable warnings\012    -d0 -d1 -d2 -d3 -debug"
"-level NUMBER\012                                   set level of available debuggin"
"g information\012    -no-trace                      disable rudimentary debugging i"
"nformation\012    -debug-info                    enable debug-information in compil"
"ed code for use\012                                    with an external debugger\012  "
"  -profile                       executable emits profiling information \012    -ac"
"cumulate-profile            executable emits profiling information in\012          "
"                          append mode\012    -profile-name FILENAME         name of"
" the generated profile information\012                                    file\012    "
"-types FILENAME                load additional type database\012\012  Optimization opt"
"ions:\012\012    -O -O0 -O1 -O2 -O3 -O4 -O5 -optimize-level NUMBER\012                   "
"                enable certain sets of optimization options\012    -optimize-leaf-r"
"outines        enable leaf routine optimization\012    -no-usual-integrations      "
"   standard procedures may be redefined\012    -u  -unsafe                    disab"
"le safety checks\012    -local                         assume globals are only modi"
"fied in current\012                                    file\012    -b  -block         "
"            enable block-compilation\012    -disable-interrupts            disable "
"interrupts in compiled code\012    -f  -fixnum-arithmetic         assume all number"
"s are fixnums\012    -disable-stack-overflow-checks disables detection of stack-ove"
"rflows\012    -inline                        enable inlining\012    -inline-limit LIMI"
"T            set inlining threshold\012    -inline-global                 enable cr"
"oss-module inlining\012    -specialize                    perform type-based specia"
"lization of primitive calls\012    -oi -emit-inline-file FILENAME  generate file wi"
"th globally inlinable\012                                    procedures (implies -i"
"nline -local)\012    -consult-inline-file FILENAME  explicitly load inline file\012   "
" -ot  -emit-type-file FILENAME  write type-declaration information into file\012   "
" -no-argc-checks                disable argument count checks\012    -no-bound-chec"
"ks               disable bound variable checks\012    -no-procedure-checks         "
"  disable procedure call checks\012    -no-procedure-checks-for-usual-bindings\012    "
"                               disable procedure call checks only for usual\012    "
"                                bindings\012    -no-procedure-checks-for-toplevel-b"
"indings\012                                   disable procedure call checks for top"
"level\012                                    bindings\012    -strict-types            "
"      assume variable do not change their type\012    -clustering                  "
"  combine groups of local procedures into dispatch\012                             "
"        loop\012    -lfa2                          perform additional lightweight f"
"low-analysis pass\012\012  Configuration options:\012\012    -unit NAME                     "
"compile file as a library unit\012    -uses NAME                     declare librar"
"y unit as used.\012    -heap-size NUMBER              specifies heap-size of compil"
"ed executable\012    -nursery NUMBER  -stack-size NUMBER\012                          "
"         specifies nursery size of compiled\012                                   e"
"xecutable\012    -X -extend FILENAME            load file before compilation commen"
"ces\012    -prelude EXPRESSION            add expression to beginning of source fil"
"e\012    -postlude EXPRESSION           add expression to end of source file\012    -p"
"rologue FILENAME             include file before main source file\012    -epilogue "
"FILENAME             include file after main source file\012\012    -e  -embedded     "
"             compile as embedded\012                                    (don\047t gene"
"rate `main()\047)\012    -gui                           compile as GUI application\012   "
" -R  -require-extension NAME    require extension and import in compiled\012       "
"                             code\012    -dll -library                  compile mul"
"tiple units into a dynamic\012                                    library\012    -depl"
"oy                        deploy self-contained application bundle\012\012  Options to"
" other passes:\012\012    -C OPTION                      pass option to C compiler\012   "
" -L OPTION                      pass option to linker\012    -I<DIR>               "
"         pass \134\042-I<DIR>\134\042 to C compiler\012                                    (add"
" include path)\012    -L<DIR>                        pass \134\042-L<DIR>\134\042 to linker\012   "
"                                 (add library path)\012    -k                      "
"       keep intermediate files\012    -c                             stop after com"
"pilation to object files\012    -t                             stop after translati"
"on to C\012    -cc COMPILER                   select other C compiler than the defa"
"ult\012    -cxx COMPILER                  select other C++ compiler than the defaul"
"t\012    -ld COMPILER                   select other linker than the default \012    -"
"lLIBNAME                      link with given library\012                          "
"          (`libLIBNAME\047 on UNIX,\012                                     `LIBNAME.l"
"ib\047 on Windows)\012    -static-libs                   link with static CHICKEN libr"
"aries\012    -static                        generate completely statically linked\012 "
"                                   executable\012    -F<DIR>                       "
" pass \134\042-F<DIR>\134\042 to C compiler\012                                    (add framewo"
"rk header path on Mac OS X)\012    -framework NAME                passed to linker "
"on Mac OS X\012    -rpath PATHNAME                add directory to runtime library "
"search path\012    -Wl,...                        pass linker options\012    -strip   "
"                      strip resulting binary\012\012  Inquiry options:\012\012    -home     "
"                     show home-directory (where support files go)\012    -cflags   "
"                     show required C-compiler flags and exit\012    -ldflags       "
"                show required linker flags and exit\012    -libs                   "
"       show required libraries and exit\012    -cc-name                       show "
"name of default C compiler used\012    -cxx-name                      show name of "
"default C++ compiler used\012    -ld-name                       show name of defaul"
"t linker used\012    -dry-run                       just show commands executed, do"
"n\047t run them\012                                    (implies `-v\047)\012\012  Obscure optio"
"ns:\012\012    -debug MODES                   display debugging output for the given m"
"odes\012    -compiler PATHNAME             use other compiler than default `chicken"
"\047\012    -raw                           do not generate implicit init- and exit cod"
"e\012    -emit-external-prototypes-first\012                                   emit pr"
"ototypes for callbacks before foreign\012                                    declar"
"ations\012    -ignore-repository             do not refer to repository for extensi"
"ons\012    -keep-shadowed-macros          do not remove shadowed macro\012    -host   "
"                       compile for host when configured for\012                    "
"                cross-compiling\012    -private-repository            load extensio"
"ns from executable path\012    -deployed                      link support file to "
"be used from a deployed \012                                    executable (sets `r"
"path\047 accordingly, if supported\012                                    on this plat"
"form)\012    -no-elevation                  embed manifest on Windows to supress el"
"evation\012                                    warnings for programs named `install"
"\047 or `setup\047\012\012  Options can be collapsed if unambiguous, so\012\012    -vkfO\012\012  is the"
" same as\012\012    -v -k -fixnum-arithmetic -optimize\012\012  The contents of the environm"
"ent variable CSC_OPTIONS are implicitly passed to\012  every invocation of `");
lf[254]=C_decode_literal(C_heaptop,"\376B\000\000\033 FILENAME | OPTION ...\012\012  `");
lf[255]=C_decode_literal(C_heaptop,"\376B\000\000\007Usage: ");
lf[256]=C_h_intern(&lf[256],8,"-release");
lf[257]=C_h_intern(&lf[257],15,"chicken-version");
lf[258]=C_h_intern(&lf[258],8,"-version");
lf[259]=C_decode_literal(C_heaptop,"\376B\000\000\011 -version");
lf[260]=C_h_intern(&lf[260],4,"-c++");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000\017-no-cpp-precomp");
lf[262]=C_h_intern(&lf[262],5,"-objc");
lf[263]=C_h_intern(&lf[263],7,"-static");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\000\026chicken-compile-static");
lf[266]=C_h_intern(&lf[266],12,"-static-libs");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[268]=C_decode_literal(C_heaptop,"\376B\000\000\026chicken-compile-static");
lf[269]=C_h_intern(&lf[269],7,"-cflags");
lf[270]=C_h_intern(&lf[270],8,"-ldflags");
lf[271]=C_h_intern(&lf[271],8,"-cc-name");
lf[272]=C_h_intern(&lf[272],9,"-cxx-name");
lf[273]=C_h_intern(&lf[273],8,"-ld-name");
lf[274]=C_h_intern(&lf[274],5,"-home");
lf[275]=C_h_intern(&lf[275],5,"-libs");
lf[276]=C_h_intern(&lf[276],2,"-v");
lf[277]=C_h_intern(&lf[277],8,"-verbose");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000\010-verbose");
lf[279]=C_decode_literal(C_heaptop,"\376B\000\000\002-v");
lf[280]=C_decode_literal(C_heaptop,"\376B\000\000\002-v");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000\002-Q");
lf[282]=C_h_intern(&lf[282],2,"-w");
lf[283]=C_h_intern(&lf[283],12,"-no-warnings");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\002-w");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\014-no-warnings");
lf[286]=C_h_intern(&lf[286],2,"-A");
lf[287]=C_h_intern(&lf[287],13,"-analyze-only");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\015-analyze-only");
lf[289]=C_h_intern(&lf[289],2,"-P");
lf[290]=C_h_intern(&lf[290],13,"-check-syntax");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\015-check-syntax");
lf[292]=C_h_intern(&lf[292],2,"-k");
lf[293]=C_h_intern(&lf[293],2,"-c");
lf[294]=C_h_intern(&lf[294],2,"-t");
lf[295]=C_h_intern(&lf[295],2,"-e");
lf[296]=C_h_intern(&lf[296],9,"-embedded");
lf[297]=C_decode_literal(C_heaptop,"\376B\000\000\014-DC_EMBEDDED");
lf[298]=C_h_intern(&lf[298],18,"-require-extension");
lf[299]=C_h_intern(&lf[299],2,"-R");
lf[300]=C_decode_literal(C_heaptop,"\376B\000\000\022-require-extension");
lf[301]=C_h_intern(&lf[301],19,"-private-repository");
lf[302]=C_h_intern(&lf[302],13,"-no-elevation");
lf[303]=C_h_intern(&lf[303],4,"-gui");
lf[304]=C_decode_literal(C_heaptop,"\376B\000\000\007-DC_GUI");
lf[305]=C_decode_literal(C_heaptop,"\376B\000\000\012-lkernel32");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\010-luser32");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\007-lgdi32");
lf[308]=C_decode_literal(C_heaptop,"\376B\000\000\011-mwindows");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000\012chicken.rc");
lf[310]=C_h_intern(&lf[310],7,"-deploy");
lf[311]=C_h_intern(&lf[311],9,"-deployed");
lf[312]=C_h_intern(&lf[312],10,"-framework");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000\012-framework");
lf[314]=C_h_intern(&lf[314],2,"-o");
lf[315]=C_h_intern(&lf[315],12,"-output-file");
lf[316]=C_h_intern(&lf[316],2,"-O");
lf[317]=C_h_intern(&lf[317],3,"-O1");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\0011");
lf[320]=C_h_intern(&lf[320],3,"-O0");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[323]=C_h_intern(&lf[323],3,"-O2");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[325]=C_decode_literal(C_heaptop,"\376B\000\000\0012");
lf[326]=C_h_intern(&lf[326],3,"-O3");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\0013");
lf[329]=C_h_intern(&lf[329],3,"-O4");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000\0014");
lf[332]=C_h_intern(&lf[332],3,"-O5");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000\0015");
lf[335]=C_h_intern(&lf[335],3,"-d0");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000\014-debug-level");
lf[337]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[338]=C_h_intern(&lf[338],3,"-d1");
lf[339]=C_decode_literal(C_heaptop,"\376B\000\000\014-debug-level");
lf[340]=C_decode_literal(C_heaptop,"\376B\000\000\0011");
lf[341]=C_h_intern(&lf[341],3,"-d2");
lf[342]=C_decode_literal(C_heaptop,"\376B\000\000\014-debug-level");
lf[343]=C_decode_literal(C_heaptop,"\376B\000\000\0012");
lf[344]=C_h_intern(&lf[344],3,"-d3");
lf[345]=C_decode_literal(C_heaptop,"\376B\000\000\014-debug-level");
lf[346]=C_decode_literal(C_heaptop,"\376B\000\000\0013");
lf[347]=C_h_intern(&lf[347],8,"-dry-run");
lf[348]=C_h_intern(&lf[348],2,"-s");
lf[349]=C_h_intern(&lf[349],4,"-dll");
lf[350]=C_h_intern(&lf[350],8,"-library");
lf[351]=C_h_intern(&lf[351],9,"-compiler");
lf[352]=C_h_intern(&lf[352],3,"-cc");
lf[353]=C_h_intern(&lf[353],4,"-cxx");
lf[354]=C_h_intern(&lf[354],3,"-ld");
lf[355]=C_h_intern(&lf[355],2,"-I");
lf[356]=C_decode_literal(C_heaptop,"\376B\000\000\015-include-path");
lf[357]=C_h_intern(&lf[357],2,"-C");
lf[358]=C_h_intern(&lf[358],6,"-strip");
lf[359]=C_decode_literal(C_heaptop,"\376B\000\000\002-s");
lf[360]=C_h_intern(&lf[360],2,"-L");
lf[361]=C_h_intern(&lf[361],6,"-rpath");
lf[362]=C_decode_literal(C_heaptop,"\376B\000\000\006-Wl,-R");
lf[363]=C_h_intern(&lf[363],3,"gnu");
lf[364]=C_h_intern(&lf[364],5,"clang");
lf[365]=C_h_intern(&lf[365],14,"build-platform");
lf[366]=C_h_intern(&lf[366],5,"-host");
lf[367]=C_h_intern(&lf[367],3,"-oi");
lf[368]=C_decode_literal(C_heaptop,"\376B\000\000\021-emit-inline-file");
lf[369]=C_h_intern(&lf[369],3,"-ot");
lf[370]=C_decode_literal(C_heaptop,"\376B\000\000\017-emit-type-file");
lf[371]=C_h_intern(&lf[371],1,"-");
lf[372]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[373]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\001-\376\377\016");
lf[374]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-h\376\003\000\000\002\376B\000\000\005-help\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-s\376\003\000\000\002\376B\000\000\007-shared\376\377\016\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\002-S\376\003\000\000\002\376B\000\000\013-scrutinize\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-M\376\003\000\000\002\376B\000\000\007-module\376\377\016\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\002-P\376\003\000\000\002\376B\000\000\015-check-syntax\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-f\376\003\000\000\002\376B\000\000\022-fixnum-arithmetic\376\377"
"\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-D\376\003\000\000\002\376B\000\000\010-feature\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-i\376\003\000\000\002\376B\000\000\021-case-insensit"
"ive\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-K\376\003\000\000\002\376B\000\000\016-keyword-style\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-X\376\003\000\000\002\376B\000\000\007-ex"
"tend\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-J\376\003\000\000\002\376B\000\000\032-emit-all-import-libraries\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-x"
"\376\003\000\000\002\376B\000\000\015-explicit-use\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-u\376\003\000\000\002\376B\000\000\007-unsafe\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-j"
"\376\003\000\000\002\376B\000\000\024-emit-import-library\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-n\376\003\000\000\002\376B\000\000\021-emit-inline-file\376\377\016"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-b\376\003\000\000\002\376B\000\000\006-block\376\377\016\376\377\016");
lf[375]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\015-explicit-use\376\003\000\000\002\376\001\000\000\011-no-trace\376\003\000\000\002\376\001\000\000\014-no-warnings\376\003\000\000\002\376\001\000\000\026-no-us"
"ual-integrations\376\003\000\000\002\376\001\000\000\027-optimize-leaf-routines\376\003\000\000\002\376\001\000\000\007-unsafe\376\003\000\000\002\376\001\000\000\006-blo"
"ck\376\003\000\000\002\376\001\000\000\023-disable-interrupts\376\003\000\000\002\376\001\000\000\022-fixnum-arithmetic\376\003\000\000\002\376\001\000\000\012-to-stdout\376"
"\003\000\000\002\376\001\000\000\010-profile\376\003\000\000\002\376\001\000\000\004-raw\376\003\000\000\002\376\001\000\000\023-accumulate-profile\376\003\000\000\002\376\001\000\000\015-check-syn"
"tax\376\003\000\000\002\376\001\000\000\021-case-insensitive\376\003\000\000\002\376\001\000\000\007-shared\376\003\000\000\002\376\001\000\000\017-compile-syntax\376\003\000\000\002\376\001\000"
"\000\017-no-lambda-info\376\003\000\000\002\376\001\000\000\010-dynamic\376\003\000\000\002\376\001\000\000\036-disable-stack-overflow-checks\376\003\000\000\002"
"\376\001\000\000\006-local\376\003\000\000\002\376\001\000\000\037-emit-external-prototypes-first\376\003\000\000\002\376\001\000\000\007-inline\376\003\000\000\002\376\001\000\000\010-"
"release\376\003\000\000\002\376\001\000\000\013-scrutinize\376\003\000\000\002\376\001\000\000\015-analyze-only\376\003\000\000\002\376\001\000\000\025-keep-shadowed-macr"
"os\376\003\000\000\002\376\001\000\000\016-inline-global\376\003\000\000\002\376\001\000\000\022-ignore-repository\376\003\000\000\002\376\001\000\000\021-no-symbol-escap"
"e\376\003\000\000\002\376\001\000\000\030-no-parentheses-synonyms\376\003\000\000\002\376\001\000\000\014-r5rs-syntax\376\003\000\000\002\376\001\000\000\017-no-argc-chec"
"ks\376\003\000\000\002\376\001\000\000\020-no-bound-checks\376\003\000\000\002\376\001\000\000\024-no-procedure-checks\376\003\000\000\002\376\001\000\000\023-no-compiler"
"-syntax\376\003\000\000\002\376\001\000\000\032-emit-all-import-libraries\376\003\000\000\002\376\001\000\000\013-setup-mode\376\003\000\000\002\376\001\000\000\015-no-el"
"evation\376\003\000\000\002\376\001\000\000\027-no-module-registration\376\003\000\000\002\376\001\000\000\047-no-procedure-checks-for-usual"
"-bindings\376\003\000\000\002\376\001\000\000\007-module\376\003\000\000\002\376\001\000\000\013-specialize\376\003\000\000\002\376\001\000\000\015-strict-types\376\003\000\000\002\376\001\000\000\013"
"-clustering\376\003\000\000\002\376\001\000\000\005-lfa2\376\003\000\000\002\376\001\000\000\013-debug-info\376\003\000\000\002\376\001\000\000\052-no-procedure-checks-fo"
"r-toplevel-bindings\376\377\016");
lf[376]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006-debug\376\003\000\000\002\376\001\000\000\012-heap-size\376\003\000\000\002\376\001\000\000\010-nursery\376\003\000\000\002\376\001\000\000\013-stack-size\376\003\000\000\002"
"\376\001\000\000\011-compiler\376\003\000\000\002\376\001\000\000\005-unit\376\003\000\000\002\376\001\000\000\005-uses\376\003\000\000\002\376\001\000\000\016-keyword-style\376\003\000\000\002\376\001\000\000\017-o"
"ptimize-level\376\003\000\000\002\376\001\000\000\015-include-path\376\003\000\000\002\376\001\000\000\016-database-size\376\003\000\000\002\376\001\000\000\007-extend\376\003\000"
"\000\002\376\001\000\000\010-prelude\376\003\000\000\002\376\001\000\000\011-postlude\376\003\000\000\002\376\001\000\000\011-prologue\376\003\000\000\002\376\001\000\000\011-epilogue\376\003\000\000\002\376\001\000"
"\000\015-inline-limit\376\003\000\000\002\376\001\000\000\015-profile-name\376\003\000\000\002\376\001\000\000\021-emit-inline-file\376\003\000\000\002\376\001\000\000\006-type"
"s\376\003\000\000\002\376\001\000\000\017-emit-type-file\376\003\000\000\002\376\001\000\000\010-feature\376\003\000\000\002\376\001\000\000\014-debug-level\376\003\000\000\002\376\001\000\000\024-con"
"sult-inline-file\376\003\000\000\002\376\001\000\000\024-emit-import-library\376\003\000\000\002\376\001\000\000\013-no-feature\376\377\016");
lf[377]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[378]=C_h_intern(&lf[378],9,"substring");
lf[379]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[380]=C_decode_literal(C_heaptop,"\376B\000\000\023invalid option `~A\047");
lf[381]=C_h_intern(&lf[381],15,"lset-difference");
lf[382]=C_h_intern(&lf[382],6,"char=\077");
lf[383]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000P\376\003\000\000\002\376\377\012\000\000H\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000s\376\003\000\000\002\376\377\012\000\000f\376\003\000\000\002\376\377\012\000\000i\376\003\000\000\002\376\377\012\000\000E\376\003\000"
"\000\002\376\377\012\000\000N\376\003\000\000\002\376\377\012\000\000x\376\003\000\000\002\376\377\012\000\000u\376\003\000\000\002\376\377\012\000\000b\376\003\000\000\002\376\377\012\000\000v\376\003\000\000\002\376\377\012\000\000w\376\003\000\000\002\376\377\012\000\000A\376\003\000\000\002\376"
"\377\012\000\000O\376\003\000\000\002\376\377\012\000\000e\376\003\000\000\002\376\377\012\000\000W\376\003\000\000\002\376\377\012\000\000k\376\003\000\000\002\376\377\012\000\000c\376\003\000\000\002\376\377\012\000\000t\376\003\000\000\002\376\377\012\000\000g\376\003\000\000\002\376\377\012\000"
"\000S\376\003\000\000\002\376\377\012\000\000J\376\003\000\000\002\376\377\012\000\000M\376\377\016");
lf[384]=C_decode_literal(C_heaptop,"\376B\000\000\023invalid option `~A\047");
lf[385]=C_decode_literal(C_heaptop,"\376B\000\000\004-Wl,");
lf[386]=C_h_intern(&lf[386],18,"decompose-pathname");
lf[387]=C_decode_literal(C_heaptop,"\376B\000\000\001h");
lf[388]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[389]=C_decode_literal(C_heaptop,"\376B\000\000\002rc");
lf[390]=C_decode_literal(C_heaptop,"\376B\000\000\003cpp");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\000\001C");
lf[392]=C_decode_literal(C_heaptop,"\376B\000\000\002cc");
lf[393]=C_decode_literal(C_heaptop,"\376B\000\000\003cxx");
lf[394]=C_decode_literal(C_heaptop,"\376B\000\000\003hpp");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000\017-no-cpp-precomp");
lf[396]=C_decode_literal(C_heaptop,"\376B\000\000\001m");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\001M");
lf[398]=C_decode_literal(C_heaptop,"\376B\000\000\002mm");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\030file `~A\047 does not exist");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\004.scm");
lf[401]=C_decode_literal(C_heaptop,"\376B\000\000\002-:");
lf[402]=C_h_intern(&lf[402],15,"-optimize-level");
lf[403]=C_h_intern(&lf[403],15,"-benchmark-mode");
lf[404]=C_h_intern(&lf[404],10,"-to-stdout");
lf[405]=C_h_intern(&lf[405],7,"-shared");
lf[406]=C_h_intern(&lf[406],8,"-dynamic");
lf[407]=C_h_intern(&lf[407],14,"string->symbol");
lf[408]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[409]=C_decode_literal(C_heaptop,"\376B\000\000\013CSC_OPTIONS");
lf[410]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[411]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[412]=C_decode_literal(C_heaptop,"\376B\000\000\002-I");
lf[413]=C_decode_literal(C_heaptop,"\376B\000\000\002:;");
lf[414]=C_decode_literal(C_heaptop,"\376B\000\000\026CHICKEN_C_INCLUDE_PATH");
lf[415]=C_decode_literal(C_heaptop,"\376B\000\000\002-I");
lf[416]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[417]=C_decode_literal(C_heaptop,"\376B\000\000\007include");
lf[418]=C_decode_literal(C_heaptop,"\376B\000\000\007chicken");
lf[419]=C_decode_literal(C_heaptop,"\376B\000\000\002-l");
lf[420]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[421]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[422]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[423]=C_decode_literal(C_heaptop,"\376B\000\000\003cyg");
lf[424]=C_decode_literal(C_heaptop,"\376B\000\000\002-0");
lf[425]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[426]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\005-DPIC\376\377\016");
lf[427]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\005-fPIC\376\003\000\000\002\376B\000\000\005-DPIC\376\377\016");
lf[428]=C_decode_literal(C_heaptop,"\376B\000\000\003bin");
lf[429]=C_decode_literal(C_heaptop,"\376B\000\000\007chicken");
lf[430]=C_decode_literal(C_heaptop,"\376B\000\000\005share");
lf[431]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[432]=C_h_intern(&lf[432],22,"command-line-arguments");
lf[433]=C_decode_literal(C_heaptop,"\376B\000\000\016CHICKEN_PREFIX");
C_register_lf2(lf,434,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1444,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k4464 in map-loop686 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_ccall f_4466(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4466,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4441(t6,((C_word*)t0)[5],t5);}

/* k3671 in k3668 in k3665 in for-each-loop504 in k2147 in k2144 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_ccall f_3673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3673,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3677,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:856: append */
t4=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_retrieve2(lf[55],"c-files");
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3668 in k3665 in for-each-loop504 in k2147 in k2144 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in ... */
static void C_ccall f_3670(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_3670,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3673,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3693,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3697,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3701,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:839: quotewrap */
t6=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
f_1562(3,av2);}}

/* k4481 in lib-path in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in ... */
static void C_ccall f_4483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4483,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
if(C_truep(C_retrieve2(lf[19],"chicken-prefix"))){
t3=C_a_i_list2(&a,2,C_retrieve2(lf[19],"chicken-prefix"),lf[105]);
/* csc.scm:89: make-pathname */
t4=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=lf[107];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in ... */
static void C_fcall f_1980(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_1980,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1991,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:546: append */
t4=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[82],"compile-options");
av2[3]=C_retrieve2(lf[83],"builtin-compile-options");
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=C_i_car(t2);
t4=t3;
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2227,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t7,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[6],a[9]=t4,tmp=(C_word)a,a+=10,tmp);
/* csc.scm:592: string->symbol */
t9=*((C_word*)lf[407]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* k3190 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in ... */
static void C_fcall f_3192(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_3192,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3196,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[5]);
/* csc.scm:786: append */
t4=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=C_retrieve2(lf[88],"link-options");
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=C_block_size(((C_word*)t0)[5]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3281,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* string->list */
t4=C_fast_retrieve(lf[129]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* csc.scm:793: stop */
f_1499(((C_word*)t0)[6],lf[384],C_a_i_list(&a,1,((C_word*)t0)[7]));}}}

/* k2367 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2369(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2369,2,av);}
/* csc.scm:624: exit */
t2=C_fast_retrieve(lf[14]);{
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

/* lib-path in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in ... */
static void C_fcall f_4475(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4475,1,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4483,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t3=*((C_word*)lf[18]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t3=*((C_word*)lf[18]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_RUN_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k3194 in k3190 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in ... */
static void C_ccall f_3196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3196,2,av);}
t2=C_mutate2(&lf[88] /* (set! link-options ...) */,t1);
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1980(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k3675 in k3671 in k3668 in k3665 in for-each-loop504 in k2147 in k2144 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in ... */
static void C_ccall f_3677(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3677,2,av);}
a=C_alloc(6);
t2=C_mutate2(&lf[55] /* (set! c-files ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3681,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:857: append */
t5=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=C_retrieve2(lf[57],"generated-c-files");
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* map-loop140 in k5075 in k5056 in k5052 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in ... */
static void C_fcall f_5122(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5122,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5147,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:252: g146 */
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

/* k5288 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in ... */
static void C_ccall f_5290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5290,2,av);}
/* csc.scm:116: quotewrap */
t2=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_1562(3,av2);}}

/* k3691 in k3668 in k3665 in for-each-loop504 in k2147 in k2144 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_ccall f_3693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3693,2,av);}
/* csc.scm:837: command */
f_4845(((C_word*)t0)[2],t1);}

/* k4101 in k4095 in compiler-options in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in ... */
static void C_ccall f_4103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4103,2,av);}
/* csc.scm:905: string-intersperse */
t2=C_fast_retrieve(lf[102]);{
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

/* map-loop655 in k4095 in compiler-options in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in ... */
static void C_fcall f_4105(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4105,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4130,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:906: g661 */
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

/* use-private-repository in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in ... */
static C_word C_fcall f_1963(C_word *a){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;{}
t1=C_a_i_cons(&a,2,lf[155],C_retrieve2(lf[82],"compile-options"));
t2=C_mutate2(&lf[82] /* (set! compile-options ...) */,t1);
if(C_truep(C_retrieve2(lf[4],"osx"))){
t3=C_a_i_cons(&a,2,lf[156],C_retrieve2(lf[88],"link-options"));
t4=C_mutate2(&lf[88] /* (set! link-options ...) */,t3);
return(t4);}
else{
t3=C_SCHEME_UNDEFINED;
return(t3);}}

/* k4493 in k4224 in k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in ... */
static void C_ccall f_4495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4495,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4501,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1526,2,av);}
a=C_alloc(3);
t2=C_mutate2(&lf[19] /* (set! chicken-prefix ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1530,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:83: command-line-arguments */
t4=C_fast_retrieve(lf[432]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_1998(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1998,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2001,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(C_retrieve2(lf[54],"scheme-files")))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2108,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(C_retrieve2(lf[55],"c-files")))){
if(C_truep(C_i_nullp(C_retrieve2(lf[59],"object-files")))){
/* csc.scm:558: stop */
f_1499(t3,lf[218],C_SCHEME_END_OF_LIST);}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2108(2,av2);}}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2108(2,av2);}}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2146,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_truep(C_retrieve2(lf[95],"shared"))?C_i_not(C_retrieve2(lf[63],"embedded")):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_a_i_cons(&a,2,lf[229],C_retrieve2(lf[79],"translate-options"));
t6=C_mutate2(&lf[79] /* (set! translate-options ...) */,t5);
t7=t3;
f_2146(t7,t6);}
else{
t5=t3;
f_2146(t5,C_SCHEME_UNDEFINED);}}}

/* k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in ... */
static void C_ccall f_1991(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_1991,2,av);}
a=C_alloc(13);
t2=C_mutate2(&lf[82] /* (set! compile-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1995,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2220,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1727,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[9],"elf"))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1809,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:272: conc */
t8=C_fast_retrieve(lf[241]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[246];
av2[3]=C_retrieve2(lf[87],"library-dir");
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[8],"aix"))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1844,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:282: conc */
t8=C_fast_retrieve(lf[241]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[247];
av2[3]=C_retrieve2(lf[87],"library-dir");
av2[4]=lf[248];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1851,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:284: conc */
t8=C_fast_retrieve(lf[241]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[249];
av2[3]=C_retrieve2(lf[87],"library-dir");
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}}

/* k2895 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_2897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2897,2,av);}
t2=C_mutate2(&lf[88] /* (set! link-options ...) */,t1);
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1980(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k4775 in k4772 in command in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in ... */
static void C_ccall f_4777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4777,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[68],"dry-run"))){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_fix(0);
f_4780(2,av2);}}
else{
/* csc.scm:1062: system */
t3=C_fast_retrieve(lf[136]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k1520 in stop in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1522,2,av);}
/* csc.scm:78: ##sys#print */
t2=*((C_word*)lf[16]+1);{
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

/* k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_1995(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1995,2,av);}
a=C_alloc(10);
t2=C_mutate2(&lf[88] /* (set! link-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1998,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[64],"inquiry-only"))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2183,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[65],"show-cflags"))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2216,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:550: compiler-options */
f_4086(t5);}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2183(2,av2);}}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1998(2,av2);}}}

/* k4772 in command in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in ... */
static void C_ccall f_4774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4774,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4777,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[90],"verbose"))){
/* csc.scm:1061: print */
t4=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_4777(2,av2);}}}

/* k3695 in k3668 in k3665 in for-each-loop504 in k2147 in k2144 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_ccall f_3697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3697,2,av);}
/* csc.scm:838: string-intersperse */
t2=C_fast_retrieve(lf[102]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[219];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5145 in map-loop140 in k5075 in k5056 in k5052 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in ... */
static void C_ccall f_5147(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5147,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5122(t6,((C_word*)t0)[5],t5);}

/* k5271 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in ... */
static void C_ccall f_5273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5273,2,av);}
/* csc.scm:129: string-append */
t2=*((C_word*)lf[122]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[425];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1510 in k1507 in k1504 in stop in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1512,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1515,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:78: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k1513 in k1510 in k1507 in k1504 in stop in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1515,2,av);}
/* csc.scm:80: exit */
t2=C_fast_retrieve(lf[14]);{
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

/* k5278 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in ... */
static void C_ccall f_5280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5280,2,av);}
/* csc.scm:117: quotewrap */
t2=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_1562(3,av2);}}

/* k5298 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in ... */
static void C_ccall f_5300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5300,2,av);}
/* csc.scm:115: quotewrap */
t2=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_1562(3,av2);}}

/* k1582 in quotewrap-no-slash-trans in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1584,2,av);}
/* csc.scm:101: qs */
t2=C_fast_retrieve(lf[25]);{
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

/* k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1588(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_1588,2,av);}
a=C_alloc(16);
t2=C_mutate2(&lf[29] /* (set! home ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1592,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5330,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5334,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5338,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k4973 in k4927 in k4924 in k4921 in k4918 in k4220 in k4207 in k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in ... */
static void C_ccall f_4975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4975,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_4932(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4982,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1092: make-pathname */
t3=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_retrieve2(lf[29],"home");
av2[3]=lf[165];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k1822 in k1807 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_1824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1824,2,av);}
/* csc.scm:276: quotewrap */
t2=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_1562(3,av2);}}

/* k1826 in k1807 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_1828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1828,2,av);}
a=C_alloc(6);
if(C_truep(C_retrieve2(lf[19],"chicken-prefix"))){
t2=C_a_i_list2(&a,2,C_retrieve2(lf[19],"chicken-prefix"),lf[244]);
/* csc.scm:89: make-pathname */
t3=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=lf[245];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* csc.scm:276: quotewrap */
t2=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
f_1562(3,av2);}}}

/* k5308 in k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 in ... */
static void C_ccall f_5310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5310,2,av);}
/* csc.scm:114: quotewrap */
t2=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_1562(3,av2);}}

/* quotewrap-no-slash-trans in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1576(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1576,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1584,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:101: normalize-pathname */
t4=C_fast_retrieve(lf[27]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1572 in quotewrap in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1574,2,av);}
if(C_truep(lf[0])){
/* csc.scm:94: string-translate */
t2=C_fast_retrieve(lf[26]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_make_character(92);
av2[4]=C_make_character(47);
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=t1;
/* csc.scm:98: qs */
t3=C_fast_retrieve(lf[25]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k1568 in quotewrap in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1570,2,av);}
/* csc.scm:98: qs */
t2=C_fast_retrieve(lf[25]);{
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

/* k4904 in k4894 in k4891 in k4888 in k4882 in k4243 in k4240 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in ... */
static void C_ccall f_4906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4906,2,av);}
/* csc.scm:1081: ##sys#print */
t2=*((C_word*)lf[16]+1);{
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

/* k2343 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2345,2,av);}
/* csc.scm:622: exit */
t2=C_fast_retrieve(lf[14]);{
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

/* k1811 in k1807 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_1813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_1813,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
f_1727(t2,C_a_i_list2(&a,2,((C_word*)t0)[3],t1));}

/* k1815 in k1807 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_1817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1817,2,av);}
/* csc.scm:273: conc */
t2=C_fast_retrieve(lf[241]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[242];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4900 in k4897 in k4894 in k4891 in k4888 in k4882 in k4243 in k4240 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in ... */
static void C_ccall f_4902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4902,2,av);}
/* csc.scm:1080: command */
f_4845(((C_word*)t0)[2],t1);}

/* k5318 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_5320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5320,2,av);}
/* csc.scm:113: quotewrap */
t2=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_1562(3,av2);}}

/* k2080 in k2063 in k2060 in k2057 in k2054 in k2048 in k2041 in k2038 in k2035 in k2032 in k2029 in k2026 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in ... */
static void C_ccall f_2082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2082,2,av);}
/* csc.scm:583: g302 */
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

/* quotewrap in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1562(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1562,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1570,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1574,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:98: normalize-pathname */
t5=C_fast_retrieve(lf[27]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2848 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_2850(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2850,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2854,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:724: cons* */
t5=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=lf[356];
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k2852 in k2848 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in ... */
static void C_ccall f_2854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2854,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1980(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k4912 in k4888 in k4882 in k4243 in k4240 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in ... */
static void C_ccall f_4914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4914,2,av);}
/* csc.scm:1081: ##sys#print */
t2=*((C_word*)lf[16]+1);{
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

/* k2355 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2357,2,av);}
/* csc.scm:623: exit */
t2=C_fast_retrieve(lf[14]);{
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

/* k1799 in k1725 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_1801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1801,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_1731(t2,(C_truep((C_truep(C_eqp(t1,lf[236]))?C_SCHEME_TRUE:(C_truep(C_eqp(t1,lf[237]))?C_SCHEME_TRUE:(C_truep(C_eqp(t1,lf[238]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))?C_a_i_list1(&a,1,lf[239]):C_SCHEME_END_OF_LIST));}

/* k1807 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_1809(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_1809,2,av);}
a=C_alloc(17);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1813,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1817,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[71],"deployed"))){
/* csc.scm:273: conc */
t5=C_fast_retrieve(lf[241]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[242];
av2[3]=lf[243];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1824,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1828,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t7=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t7=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=C_mpointer(&a,(void*)C_TARGET_RUN_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}}

/* k4908 in k4894 in k4891 in k4888 in k4882 in k4243 in k4240 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in ... */
static void C_ccall f_4910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4910,2,av);}
/* csc.scm:1083: quotewrap */
t2=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_1562(3,av2);}}

/* k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in ... */
static void C_ccall f_4165(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4165,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4168,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4242,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[4],"osx"))){
t4=C_i_not(C_retrieve2(lf[23],"cross-chicken"));
if(C_truep(t4)){
t5=t3;
f_4242(t5,t4);}
else{
t5=C_retrieve2(lf[22],"host-mode");
t6=t3;
f_4242(t6,C_retrieve2(lf[22],"host-mode"));}}
else{
t4=t3;
f_4242(t4,C_SCHEME_FALSE);}}

/* k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in ... */
static void C_ccall f_4168(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4168,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4171,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4206,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[70],"deploy"))){
t4=C_retrieve2(lf[96],"static");
if(C_truep(C_retrieve2(lf[96],"static"))){
t5=C_retrieve2(lf[96],"static");
t6=C_retrieve2(lf[96],"static");
t7=t3;
f_4206(t7,C_i_not(C_retrieve2(lf[96],"static")));}
else{
t5=C_retrieve2(lf[97],"static-libs");
t6=C_retrieve2(lf[97],"static-libs");
t7=t3;
f_4206(t7,C_i_not(C_retrieve2(lf[97],"static-libs")));}}
else{
t4=t3;
f_4206(t4,C_SCHEME_FALSE);}}

/* k2048 in k2041 in k2038 in k2035 in k2032 in k2029 in k2026 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in ... */
static void C_ccall f_2050(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2050,2,av);}
a=C_alloc(5);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[109]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2056,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(lf[0])){
/* csc.scm:583: ##sys#print */
t6=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[197];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
/* csc.scm:583: ##sys#print */
t6=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[198];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k2057 in k2054 in k2048 in k2041 in k2038 in k2035 in k2032 in k2029 in k2026 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in ... */
static void C_ccall f_2059(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_2059,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2062,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(lf[0])){
t3=C_retrieve2(lf[28],"quotewrap-no-slash-trans");
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f6050,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=t4;
t6=C_retrieve2(lf[89],"target-filename");
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6108,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:101: normalize-pathname */
t8=C_fast_retrieve(lf[27]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=C_retrieve2(lf[89],"target-filename");
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t3=C_retrieve2(lf[24],"quotewrap");
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f6054,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:583: g300 */
t5=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_retrieve2(lf[89],"target-filename");
f_1562(3,av2);}}}

/* k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in ... */
static void C_ccall f_4162(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_4162,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4165,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4298,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4302,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(C_truep(C_retrieve2(lf[61],"cpp-mode"))?C_retrieve2(lf[35],"c++-linker"):C_retrieve2(lf[34],"linker"));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4310,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4318,a[2]=t7,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4331,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:942: quotewrap */
t10=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=C_retrieve2(lf[89],"target-filename");
f_1562(3,av2);}}

/* k2054 in k2048 in k2041 in k2038 in k2035 in k2032 in k2029 in k2026 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in ... */
static void C_ccall f_2056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2056,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2059,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:583: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k4924 in k4921 in k4918 in k4220 in k4207 in k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in ... */
static void C_ccall f_4926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4926,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4929,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* csc.scm:1089: make-pathname */
t4=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[166];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4927 in k4924 in k4921 in k4918 in k4220 in k4207 in k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in ... */
static void C_ccall f_4929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4929,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4932,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4975,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1090: file-exists? */
t4=C_fast_retrieve(lf[163]);{
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

/* k4918 in k4220 in k4207 in k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in ... */
static void C_ccall f_4920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4920,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4923,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:1087: make-pathname */
t4=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[168];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4921 in k4918 in k4220 in k4207 in k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in ... */
static void C_ccall f_4923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4923,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4926,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:1088: make-pathname */
t4=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[167];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in ... */
static void C_ccall f_4171(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4171,2,av);}
a=C_alloc(6);
if(C_truep(C_retrieve2(lf[91],"keep-files"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_retrieve2(lf[144],"$delete-file");
t3=C_retrieve2(lf[60],"generated-object-files");
t4=C_i_check_list_2(C_retrieve2(lf[60],"generated-object-files"),lf[157]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4182,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_4182(t8,((C_word*)t0)[2],C_retrieve2(lf[60],"generated-object-files"));}}

/* k4933 in k4930 in k4927 in k4924 in k4921 in k4918 in k4220 in k4207 in k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in ... */
static void C_ccall f_4935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4935,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4938,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4941,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* csc.scm:1095: file-exists? */
t5=C_fast_retrieve(lf[163]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4936 in k4933 in k4930 in k4927 in k4924 in k4921 in k4918 in k4220 in k4207 in k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in ... */
static void C_ccall f_4938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4938,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4930 in k4927 in k4924 in k4921 in k4918 in k4220 in k4207 in k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in ... */
static void C_ccall f_4932(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4932,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4935,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1094: make-pathname */
t3=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[164];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1865 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_1867(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_1867,2,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1874,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,lf[252],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,lf[253],t4);
t6=C_a_i_cons(&a,2,t1,t5);
t7=C_a_i_cons(&a,2,lf[254],t6);
t8=C_a_i_cons(&a,2,t1,t7);
t9=C_a_i_cons(&a,2,lf[255],t8);
/* csc.scm:307: ##sys#print-to-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[160]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[160]+1);
av2[1]=t2;
av2[2]=t9;
tp(3,av2);}}

/* k2069 in k2066 in k2063 in k2060 in k2057 in k2054 in k2048 in k2041 in k2038 in k2035 in k2032 in k2029 in k2026 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in ... */
static void C_ccall f_2071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2071,2,av);}
/* csc.scm:582: command */
f_4845(((C_word*)t0)[2],t1);}

/* k2076 in k2063 in k2060 in k2057 in k2054 in k2048 in k2041 in k2038 in k2035 in k2032 in k2029 in k2026 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in ... */
static void C_ccall f_2078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2078,2,av);}
/* csc.scm:583: ##sys#print */
t2=*((C_word*)lf[16]+1);{
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

/* for-each-loop764 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in ... */
static void C_fcall f_4182(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4182,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4192,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:969: g765 */
t5=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1849 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_1851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1851,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_1727(t2,C_a_i_list1(&a,1,t1));}

/* k3133 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in ... */
static void C_ccall f_3135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3135,2,av);}
t2=C_mutate2(&lf[88] /* (set! link-options ...) */,t1);
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1980(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k2041 in k2038 in k2035 in k2032 in k2029 in k2026 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in ... */
static void C_ccall f_2043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2043,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2050,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:583: open-output-string */
t3=C_fast_retrieve(lf[114]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4190 in for-each-loop764 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in ... */
static void C_ccall f_4192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4192,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4182(t3,((C_word*)t0)[4],t2);}

/* k2038 in k2035 in k2032 in k2029 in k2026 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in ... */
static void C_ccall f_2040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2040,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2043,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:580: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k2814 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_2816(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2816,2,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(&lf[32] /* (set! c++-compiler ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:818: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1980(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k3703 in k3699 in k3668 in k3665 in for-each-loop504 in k2147 in k2144 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in ... */
static void C_ccall f_3705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3705,2,av);}
/* csc.scm:839: cons* */
t2=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[30],"translator");
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3699 in k3668 in k3665 in for-each-loop504 in k2147 in k2144 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_ccall f_3701(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3701,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3705,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3709,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[94],"to-stdout"))){
t5=t4;
f_3709(t5,lf[223]);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3777,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:843: quotewrap */
t6=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
f_1562(3,av2);}}}

/* k3707 in k3699 in k3668 in k3665 in for-each-loop504 in k2147 in k2144 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in ... */
static void C_fcall f_3709(C_word t0,C_word t1){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,5)))){
C_save_and_reclaim_args((void *)trf_3709,2,t0,t1);}
a=C_alloc(13);
t2=t1;
t3=C_fudge(C_fix(13));
t4=(C_truep(t3)?lf[220]:C_SCHEME_END_OF_LIST);
t5=t4;
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=C_retrieve2(lf[100],"quote-option");
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3720,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t5,a[5]=t8,a[6]=t10,a[7]=t9,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_retrieve2(lf[61],"cpp-mode"))){
/* csc.scm:848: append */
t12=*((C_word*)lf[103]+1);{
C_word av2[6];
av2[0]=t12;
av2[1]=t11;
av2[2]=C_retrieve2(lf[53],"extra-features");
av2[3]=C_retrieve2(lf[79],"translate-options");
av2[4]=lf[221];
av2[5]=C_retrieve2(lf[84],"translation-optimization-options");
((C_proc)(void*)(*((C_word*)t12+1)))(6,av2);}}
else{
if(C_truep(C_retrieve2(lf[62],"objc-mode"))){
/* csc.scm:848: append */
t12=*((C_word*)lf[103]+1);{
C_word av2[6];
av2[0]=t12;
av2[1]=t11;
av2[2]=C_retrieve2(lf[53],"extra-features");
av2[3]=C_retrieve2(lf[79],"translate-options");
av2[4]=lf[222];
av2[5]=C_retrieve2(lf[84],"translation-optimization-options");
((C_proc)(void*)(*((C_word*)t12+1)))(6,av2);}}
else{
/* csc.scm:848: append */
t12=*((C_word*)lf[103]+1);{
C_word av2[6];
av2[0]=t12;
av2[1]=t11;
av2[2]=C_retrieve2(lf[53],"extra-features");
av2[3]=C_retrieve2(lf[79],"translate-options");
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=C_retrieve2(lf[84],"translation-optimization-options");
((C_proc)(void*)(*((C_word*)t12+1)))(6,av2);}}}}

/* k1842 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_1844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1844,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_1727(t2,C_a_i_list1(&a,1,t1));}

/* k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in ... */
static void C_ccall f_2016(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_2016,2,av);}
a=C_alloc(16);
t2=((C_word*)t0)[2];
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_retrieve2(lf[24],"quotewrap");
t8=C_retrieve2(lf[59],"object-files");
t9=C_i_check_list_2(C_retrieve2(lf[59],"object-files"),lf[101]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4156,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4441,a[2]=t5,a[3]=t12,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_4441(t14,t10,C_retrieve2(lf[59],"object-files"));}

/* k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in ... */
static void C_ccall f_2010(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2010,2,av);}
a=C_alloc(7);
if(C_truep(C_retrieve2(lf[93],"compile-only"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2016,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_member(C_retrieve2(lf[89],"target-filename"),C_retrieve2(lf[54],"scheme-files")))){
t3=*((C_word*)lf[132]+1);
t4=*((C_word*)lf[132]+1);
t5=C_i_check_port_2(*((C_word*)lf[132]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[133]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2028,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:580: ##sys#print */
t7=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[201];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[132]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2016(2,av2);}}}}

/* k3088 in k3079 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in ... */
static void C_ccall f_3090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3090,2,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:818: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1980(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k3148 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in ... */
static void C_ccall f_3150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3150,2,av);}
t2=C_mutate2(&lf[82] /* (set! compile-options ...) */,t1);
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1980(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k1507 in k1504 in stop in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_1509,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1512,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=t2;
av2[2]=*((C_word*)lf[13]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
C_apply(6,av2);}}

/* k2060 in k2057 in k2054 in k2048 in k2041 in k2038 in k2035 in k2032 in k2029 in k2026 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in ... */
static void C_ccall f_2062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2062,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2065,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:583: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k1504 in stop in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1506,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1509,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:78: ##sys#print */
t3=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[17];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2831 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_2833(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2833,2,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(&lf[34] /* (set! linker ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:818: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1980(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2066 in k2063 in k2060 in k2057 in k2054 in k2048 in k2041 in k2038 in k2035 in k2032 in k2029 in k2026 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in ... */
static void C_ccall f_2068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2068,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2071,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:583: get-output-string */
t3=C_fast_retrieve(lf[111]);{
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

/* k2063 in k2060 in k2057 in k2054 in k2048 in k2041 in k2038 in k2035 in k2032 in k2029 in k2026 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in ... */
static void C_ccall f_2065(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2065,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2068,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_truep(lf[0])?C_retrieve2(lf[28],"quotewrap-no-slash-trans"):C_retrieve2(lf[24],"quotewrap"));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2078,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2082,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:587: string-append */
t7=*((C_word*)lf[122]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=C_retrieve2(lf[89],"target-filename");
av2[3]=lf[196];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k3079 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in ... */
static void C_ccall f_3081(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3081,2,av);}
a=C_alloc(15);
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_a_i_string_to_number(&a,2,t2,C_fix(10));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3090,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:768: t-options */
f_1907(t4,C_a_i_list(&a,2,((C_word*)t0)[6],t2));}

/* k2908 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_2910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2910,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2914,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2922,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:733: string-split */
t5=C_fast_retrieve(lf[233]);{
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

/* k3724 in k3718 in k3707 in k3699 in k3668 in k3665 in for-each-loop504 in k2147 in k2144 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in ... */
static void C_ccall f_3726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3726,2,av);}
/* csc.scm:840: append */
t2=*((C_word*)lf[103]+1);{
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

/* k2912 in k2908 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in ... */
static void C_ccall f_2914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2914,2,av);}
t2=C_mutate2(&lf[88] /* (set! link-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
/* csc.scm:818: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1980(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k3718 in k3707 in k3699 in k3668 in k3665 in for-each-loop504 in k2147 in k2144 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in ... */
static void C_ccall f_3720(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3720,2,av);}
a=C_alloc(13);
t2=C_i_check_list_2(t1,lf[101]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3726,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3728,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3728(t7,t3,t1);}

/* k3036 in k3029 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in ... */
static void C_ccall f_3038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3038,2,av);}
t2=C_mutate2(&lf[89] /* (set! target-filename ...) */,t1);
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1980(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* map-loop525 in k3718 in k3707 in k3699 in k3668 in k3665 in for-each-loop504 in k2147 in k2144 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in ... */
static void C_fcall f_3728(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3728,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3753,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:847: g531 */
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

/* k2032 in k2029 in k2026 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_ccall f_2034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2034,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2037,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:580: ##sys#print */
t3=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_retrieve2(lf[89],"target-filename");
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2035 in k2032 in k2029 in k2026 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in ... */
static void C_ccall f_2037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2037,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2040,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:580: ##sys#print */
t3=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[199];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3029 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_3031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3031,2,av);}
a=C_alloc(5);
t2=C_mutate2(&lf[54] /* (set! scheme-files ...) */,t1);
if(C_truep(C_retrieve2(lf[89],"target-filename"))){
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1980(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3038,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:754: make-pathname */
t4=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[372];
av2[4]=C_retrieve2(lf[40],"executable-extension");
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k2029 in k2026 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in ... */
static void C_ccall f_2031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2031,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2034,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:580: ##sys#print */
t3=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[200];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4980 in k4973 in k4927 in k4924 in k4921 in k4918 in k4220 in k4207 in k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in ... */
static void C_ccall f_4982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4982,2,av);}
/* csc.scm:1091: copy-files */
f_4556(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k4986 in k4052 in k4037 in k4034 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in ... */
static void C_ccall f_4988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4988,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4993,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1121: with-output-to-file */
t3=C_fast_retrieve(lf[161]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in ... */
static void C_ccall f_2001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_2001,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2004,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[70],"deploy"))){
t3=C_retrieve2(lf[95],"shared");
t4=t2;
f_2004(t4,(C_truep(C_retrieve2(lf[95],"shared"))?C_SCHEME_UNDEFINED:(
  /* csc.scm:575: use-private-repository */
  f_1963(C_a_i(&a,6))
)));}
else{
t3=t2;
f_2004(t3,C_SCHEME_UNDEFINED);}}

/* k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in ... */
static void C_fcall f_2004(C_word t0,C_word t1){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,3)))){
C_save_and_reclaim_args((void *)trf_2004,2,t0,t1);}
a=C_alloc(18);
if(C_truep(C_retrieve2(lf[92],"translate-only"))){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2010,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=t2;
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3831,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_retrieve2(lf[55],"c-files");
t8=C_i_check_list_2(C_retrieve2(lf[55],"c-files"),lf[157]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3900,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4063,a[2]=t11,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t13=((C_word*)t11)[1];
f_4063(t13,t9,C_retrieve2(lf[55],"c-files"));}}

/* k2933 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_2935(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2935,2,av);}
a=C_alloc(8);
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(&lf[72] /* (set! rpath ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2949,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2965,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:738: build-platform */
t6=C_fast_retrieve(lf[365]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* a4992 in k4986 in k4052 in k4037 in k4034 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in ... */
static void C_ccall f_4993(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_4993,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5001,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,lf[211],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_cons(&a,2,lf[212],t4);
/* csc.scm:1119: ##sys#print-to-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[160]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[160]+1);
av2[1]=t2;
av2[2]=t5;
tp(3,av2);}}

/* k2116 in k2109 in k2106 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in ... */
static void C_ccall f_2118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2118,2,av);}
t2=C_mutate2(&lf[89] /* (set! target-filename ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_2001(2,av2);}}

/* k2109 in k2106 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in ... */
static void C_ccall f_2111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2111,2,av);}
a=C_alloc(3);
if(C_truep(C_retrieve2(lf[89],"target-filename"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_2001(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2118,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[95],"shared"))){
/* csc.scm:563: pathname-replace-extension */
t3=C_fast_retrieve(lf[208]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=C_retrieve2(lf[42],"shared-library-extension");
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* csc.scm:564: pathname-replace-extension */
t3=C_fast_retrieve(lf[208]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=C_retrieve2(lf[40],"executable-extension");
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}}

/* g428 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in ... */
static C_word C_fcall f_3051(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;{}
t2=C_i_cadr(t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
return(t4);}

/* linker-options in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in ... */
static void C_fcall f_4605(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4605,1,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4613,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4633,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1010: append */
t4=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[86],"linking-optimization-options");
av2[3]=C_retrieve2(lf[88],"link-options");
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1872 in k1865 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_1874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1874,2,av);}
/* csc.scm:309: print */
t2=*((C_word*)lf[137]+1);{
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

/* k2026 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in ... */
static void C_ccall f_2028(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2028,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2031,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:580: ##sys#print */
t3=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_retrieve2(lf[89],"target-filename");
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_fcall f_3041(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_3041,2,t0,t1);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3044,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep((C_truep(C_eqp(((C_word*)t0)[2],lf[402]))?C_SCHEME_TRUE:(C_truep(C_eqp(((C_word*)t0)[2],lf[403]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t3=C_mutate2(&lf[85] /* (set! compilation-optimization-options ...) */,C_retrieve2(lf[50],"best-compilation-optimization-options"));
t4=C_mutate2(&lf[86] /* (set! linking-optimization-options ...) */,C_retrieve2(lf[52],"best-linking-optimization-options"));
t5=t2;
f_3044(t5,t4);}
else{
t3=t2;
f_3044(t3,C_SCHEME_UNDEFINED);}}

/* k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in ... */
static void C_fcall f_3044(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_3044,2,t0,t1);}
a=C_alloc(12);
t2=C_i_assq(((C_word*)t0)[2],lf[374]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3051,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(
  /* csc.scm:762: g428 */
  f_3051(C_a_i(&a,3),t3,t2)
);
/* csc.scm:818: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_1980(t5,((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1]);}
else{
if(C_truep(C_i_memq(((C_word*)t0)[2],lf[375]))){
/* csc.scm:763: t-options */
f_1907(((C_word*)t0)[7],C_a_i_list(&a,1,((C_word*)t0)[8]));}
else{
if(C_truep(C_i_memq(((C_word*)t0)[2],lf[376]))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3081,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:765: check */
f_1914(t3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3100,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t4=C_block_size(((C_word*)t0)[8]);
if(C_truep(C_fixnum_greaterp(t4,C_fix(2)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3466,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:770: substring */
t6=*((C_word*)lf[378]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[8];
av2[3]=C_fix(0);
av2[4]=C_fix(2);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t5=t3;
f_3100(t5,C_SCHEME_FALSE);}}}}}

/* k2951 in k2947 in k2933 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in ... */
static void C_ccall f_2953(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2953,2,av);}
t2=C_mutate2(&lf[88] /* (set! link-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
/* csc.scm:818: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1980(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1530(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_1530,2,av);}
a=C_alloc(13);
t2=C_mutate2(&lf[20] /* (set! arguments ...) */,t1);
t3=C_i_member(lf[21],C_retrieve2(lf[20],"arguments"));
t4=C_mutate2(&lf[22] /* (set! host-mode ...) */,t3);
t5=C_fudge(C_fix(39));
t6=C_mutate2(&lf[23] /* (set! cross-chicken ...) */,t5);
t7=C_mutate2(&lf[24] /* (set! quotewrap ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1562,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate2(&lf[28] /* (set! quotewrap-no-slash-trans ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1576,tmp=(C_word)a,a+=2,tmp));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1588,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5346,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t11=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_SHARE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t11=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=C_mpointer(&a,(void*)C_TARGET_SHARE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}}

/* a4948 in k4942 in k4939 in k4933 in k4930 in k4927 in k4924 in k4921 in k4918 in k4220 in k4207 in k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in ... */
static void C_ccall f_4949(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_4949,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4957,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,lf[158],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_cons(&a,2,lf[159],t4);
/* csc.scm:1085: ##sys#print-to-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[160]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[160]+1);
av2[1]=t2;
av2[2]=t5;
tp(3,av2);}}

/* k2920 in k2908 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in ... */
static void C_ccall f_2922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2922,2,av);}
/* csc.scm:733: append */
t2=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[88],"link-options");
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4942 in k4939 in k4933 in k4930 in k4927 in k4924 in k4921 in k4918 in k4220 in k4207 in k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in ... */
static void C_ccall f_4944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4944,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4949,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1097: with-output-to-file */
t3=C_fast_retrieve(lf[161]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3751 in map-loop525 in k3718 in k3707 in k3699 in k3668 in k3665 in for-each-loop504 in k2147 in k2144 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in ... */
static void C_ccall f_3753(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3753,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3728(t6,((C_word*)t0)[5],t5);}

/* k2379 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2381,2,av);}
/* csc.scm:625: exit */
t2=C_fast_retrieve(lf[14]);{
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

/* k4939 in k4933 in k4930 in k4927 in k4924 in k4921 in k4918 in k4220 in k4207 in k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in ... */
static void C_ccall f_4941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4941,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4944,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[90],"verbose"))){
/* csc.scm:1096: print */
t3=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[162];
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4944(2,av2);}}}}

/* k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_5360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5360,2,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[5]);
t3=lf[6] /* cygwin */ =t2;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5356,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:73: build-platform */
t5=C_fast_retrieve(lf[365]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k4618 in k4611 in linker-options in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in ... */
static void C_fcall f_4620(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_4620,2,t0,t1);}
if(C_truep(t1)){
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word av2[4];
av2[0]=*((C_word*)lf[116]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[117];
tp(4,av2);}}
else{
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word av2[4];
av2[0]=*((C_word*)lf[116]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[118];
tp(4,av2);}}}

/* k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_5364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5364,2,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[3]);
t3=lf[4] /* osx */ =t2;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5360,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:72: build-platform */
t5=C_fast_retrieve(lf[365]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k2106 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in ... */
static void C_ccall f_2108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2108,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2111,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(C_retrieve2(lf[55],"c-files")))){
t3=C_retrieve2(lf[59],"object-files");
t4=C_retrieve2(lf[59],"object-files");
/* csc.scm:559: last */
t5=C_fast_retrieve(lf[217]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=C_retrieve2(lf[59],"object-files");
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=C_retrieve2(lf[55],"c-files");
t4=C_retrieve2(lf[55],"c-files");
/* csc.scm:559: last */
t5=C_fast_retrieve(lf[217]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=C_retrieve2(lf[55],"c-files");
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_5368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5368,2,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[1]);
t3=lf[2] /* mingw */ =t2;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5364,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:71: software-version */
t5=C_fast_retrieve(lf[240]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k4955 in a4948 in k4942 in k4939 in k4933 in k4930 in k4927 in k4924 in k4921 in k4918 in k4220 in k4207 in k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in ... */
static void C_ccall f_4957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4957,2,av);}
/* csc.scm:1098: g929 */
t2=*((C_word*)lf[137]+1);{
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

/* k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1474(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1474,2,av);}
a=C_alloc(3);
t2=C_mutate2(&lf[0] /* (set! windows-shell ...) */,C_mk_bool(C_WINDOWS_SHELL));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5368,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:70: build-platform */
t4=C_fast_retrieve(lf[365]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1471,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1474,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k4423 in k4417 in k4383 in k4333 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in ... */
static void C_ccall f_4425(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4425,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4428,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4435,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4439,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:923: make-pathname */
t5=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t0)[5])[1];
av2[3]=lf[192];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k4426 in k4423 in k4417 in k4383 in k4333 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in ... */
static void C_ccall f_4428(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4428,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4431,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:923: get-output-string */
t3=C_fast_retrieve(lf[111]);{
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

/* k3008 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_3010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3010,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3013,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:749: t-options */
f_1907(t2,C_a_i_list(&a,2,lf[370],t3));}

/* k3011 in k3008 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in ... */
static void C_ccall f_3013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3013,2,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:818: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1980(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2947 in k2933 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in ... */
static void C_fcall f_2949(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_2949,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2953,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2961,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:740: string-append */
t4=*((C_word*)lf[122]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[362];
av2[3]=C_retrieve2(lf[72],"rpath");
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:818: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1980(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}}

/* k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1465,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1468,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_utils_toplevel(2,av2);}}

/* k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1462,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1465,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d13_toplevel(2,av2);}}

/* k4437 in k4423 in k4417 in k4383 in k4333 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in ... */
static void C_ccall f_4439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4439,2,av);}
/* csc.scm:923: quotewrap */
t2=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_1562(3,av2);}}

/* k4433 in k4423 in k4417 in k4383 in k4333 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in ... */
static void C_ccall f_4435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4435,2,av);}
/* csc.scm:923: ##sys#print */
t2=*((C_word*)lf[16]+1);{
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

/* k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1468,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1471,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_files_toplevel(2,av2);}}

/* k4429 in k4426 in k4423 in k4417 in k4383 in k4333 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in ... */
static void C_ccall f_4431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4431,2,av);}
/* csc.scm:923: command */
f_4845(((C_word*)t0)[2],t1);}

/* k3308 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in ... */
static void C_ccall f_3310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_3310,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3315,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3321,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:795: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3430,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[400];
tp(4,av2);}}}

/* k2991 in k2988 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in ... */
static void C_ccall f_2993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2993,2,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:818: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1980(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* a3314 in k3308 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in ... */
static void C_ccall f_3315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3315,2,av);}
/* csc.scm:795: decompose-pathname */
t2=C_fast_retrieve(lf[386]);{
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

/* k2988 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_2990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2990,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2993,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:745: t-options */
f_1907(t2,C_a_i_list(&a,2,lf[368],t3));}

/* k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1453,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1456,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1456,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1459,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_ports_toplevel(2,av2);}}

/* k1448 in k1445 in k1442 */
static void C_ccall f_1450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1450,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1453,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* fold in k4686 in k4744 in k4738 in quote-option in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_fcall f_4690(C_word t0,C_word t1,C_word t2){
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
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4690,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=t3;
if(C_truep(C_i_memq(t4,lf[120]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4713,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=t2;
t7=C_u_i_cdr(t6);
/* csc.scm:1035: fold */
t9=t5;
t10=t7;
t1=t9;
t2=t10;
goto loop;}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4718,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_u_i_char_whitespacep(t4))){
t6=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t7=t5;
f_4718(t7,t6);}
else{
t6=t5;
f_4718(t6,C_SCHEME_UNDEFINED);}}}}

/* k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1459,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1462,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d1_toplevel(2,av2);}}

/* map-loop686 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in ... */
static void C_fcall f_4441(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4441,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4466,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:916: g692 */
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

/* k2881 in k2869 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in ... */
static void C_ccall f_2883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2883,2,av);}
/* csc.scm:727: append */
t2=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[82],"compile-options");
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2959 in k2947 in k2933 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in ... */
static void C_ccall f_2961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2961,2,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* csc.scm:740: append */
t3=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[88],"link-options");
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2963 in k2933 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in ... */
static void C_ccall f_2965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2965,2,av);}
if(C_truep((C_truep(C_eqp(t1,lf[363]))?C_SCHEME_TRUE:(C_truep(C_eqp(t1,lf[364]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t2=C_retrieve2(lf[2],"mingw");
t3=((C_word*)t0)[2];
f_2949(t3,(C_truep(C_retrieve2(lf[2],"mingw"))?C_SCHEME_FALSE:C_i_not(C_retrieve2(lf[4],"osx"))));}
else{
t2=((C_word*)t0)[2];
f_2949(t2,C_SCHEME_FALSE);}}

/* k2190 in k2187 in k2184 in k2181 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in ... */
static void C_ccall f_2192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2192,2,av);}
/* csc.scm:554: exit */
t2=C_fast_retrieve(lf[14]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2873 in k2869 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in ... */
static void C_ccall f_2875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2875,2,av);}
t2=C_mutate2(&lf[82] /* (set! compile-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
/* csc.scm:818: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1980(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2869 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_2871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2871,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2875,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2883,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:727: string-split */
t5=C_fast_retrieve(lf[233]);{
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

/* k2181 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_2183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2183,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2186,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[66],"show-ldflags"))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2209,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:551: linker-options */
f_4605(t3);}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2186(2,av2);}}}

/* k2184 in k2181 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in ... */
static void C_ccall f_2186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2186,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2189,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[67],"show-libs"))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2202,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:552: linker-libraries */
f_4635(t3);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6072,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:553: newline */
t4=*((C_word*)lf[230]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2669 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2671,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1980(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2187 in k2184 in k2181 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in ... */
static void C_ccall f_2189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2189,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2192,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:553: newline */
t3=*((C_word*)lf[230]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3371 in a3320 in k3308 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_fcall f_3373(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3373,2,t0,t1);}
a=C_alloc(6);
t2=lf[61] /* cpp-mode */ =C_SCHEME_TRUE;;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3378,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:805: append */
t5=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=C_retrieve2(lf[55],"c-files");
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3376 in k3371 in a3320 in k3308 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in ... */
static void C_ccall f_3378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3378,2,av);}
t2=C_mutate2(&lf[55] /* (set! c-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4300 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in ... */
static void C_ccall f_4302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4302,2,av);}
/* csc.scm:937: string-intersperse */
t2=C_fast_retrieve(lf[102]);{
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

/* k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1592(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1592,2,av);}
a=C_alloc(9);
t2=C_mutate2(&lf[30] /* (set! translator ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1596,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5320,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CC);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CC);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k1594 in k1590 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1596(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1596,2,av);}
a=C_alloc(9);
t2=C_mutate2(&lf[31] /* (set! compiler ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1600,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5310,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CXX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CXX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k2601 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2603,2,av);}
a=C_alloc(5);
if(C_truep(C_retrieve2(lf[4],"osx"))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2614,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:681: cons* */
t4=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[313];
av2[3]=t3;
av2[4]=C_retrieve2(lf[88],"link-options");
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:818: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1980(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}}

/* k3358 in a3320 in k3308 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_ccall f_3360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3360,2,av);}
t2=C_mutate2(&lf[56] /* (set! rc-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4645 in linker-libraries in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in ... */
static void C_fcall f_4647(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_4647,2,t0,t1);}
a=C_alloc(3);
t2=C_retrieve2(lf[96],"static");
if(C_truep(C_retrieve2(lf[96],"static"))){
t3=C_retrieve2(lf[96],"static");
t4=(C_truep(C_retrieve2(lf[96],"static"))?C_a_i_list1(&a,1,C_retrieve2(lf[73],"extra-libraries")):C_a_i_list1(&a,1,C_retrieve2(lf[74],"extra-shared-libraries")));
/* csc.scm:1015: append */
t5=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=C_retrieve2(lf[97],"static-libs");
t4=(C_truep(C_retrieve2(lf[97],"static-libs"))?C_a_i_list1(&a,1,C_retrieve2(lf[73],"extra-libraries")):C_a_i_list1(&a,1,C_retrieve2(lf[74],"extra-shared-libraries")));
/* csc.scm:1015: append */
t5=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k4316 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in ... */
static void C_ccall f_4318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4318,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4322,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:943: linker-options */
f_4605(t3);}

/* k4308 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in ... */
static void C_ccall f_4310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4310,2,av);}
/* csc.scm:938: cons* */
t2=C_fast_retrieve(lf[128]);{
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

/* k4641 in linker-libraries in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in ... */
static void C_ccall f_4643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4643,2,av);}
/* csc.scm:1014: string-intersperse */
t2=C_fast_retrieve(lf[102]);{
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

/* k4128 in map-loop655 in k4095 in compiler-options in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_4130(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4130,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4105(t6,((C_word*)t0)[5],t5);}

/* k2612 in k2601 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_2614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2614,2,av);}
t2=C_mutate2(&lf[88] /* (set! link-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
/* csc.scm:818: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1980(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k3217 in k3275 in k3279 in k3190 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in ... */
static void C_ccall f_3219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3219,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1980(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k4611 in linker-options in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in ... */
static void C_ccall f_4613(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4613,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4620,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[96],"static"))){
t4=C_retrieve2(lf[2],"mingw");
t5=t3;
f_4620(t5,(C_truep(C_retrieve2(lf[2],"mingw"))?C_SCHEME_FALSE:C_i_not(C_retrieve2(lf[4],"osx"))));}
else{
t4=t3;
f_4620(t4,C_SCHEME_FALSE);}}

/* k1445 in k1442 */
static void C_ccall f_1447(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1447,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1450,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_ccall f_4159(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_4159,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4162,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[70],"deploy"))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4335,a[2]=t5,a[3]=t3,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:920: pathname-strip-extension */
t8=C_fast_retrieve(lf[195]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=C_retrieve2(lf[89],"target-filename");
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_4162(2,av2);}}}

/* k1442 */
static void C_ccall f_1444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1444,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1447,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in ... */
static void C_ccall f_4156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4156,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4159,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:917: quotewrap */
t4=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[89],"target-filename");
f_1562(3,av2);}}

/* k3330 in a3320 in k3308 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_ccall f_3332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3332,2,av);}
t2=C_mutate2(&lf[54] /* (set! scheme-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3234 in k3275 in k3279 in k3190 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in ... */
static void C_ccall f_3236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3236,2,av);}
/* csc.scm:791: append */
t2=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop445 in k3275 in k3279 in k3190 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in ... */
static void C_fcall f_3238(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_3238,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3263,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_string(&a,1,t4);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word av2[4];
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t3;
av2[2]=lf[379];
av2[3]=t5;
tp(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* linker-libraries in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in ... */
static void C_fcall f_4635(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4635,1,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4643,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4647,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_retrieve2(lf[96],"static");
if(C_truep(C_retrieve2(lf[96],"static"))){
t5=C_retrieve2(lf[96],"static");
t6=t3;
f_4647(t6,(C_truep(C_retrieve2(lf[96],"static"))?C_retrieve2(lf[77],"library-files"):C_retrieve2(lf[78],"shared-library-files")));}
else{
t5=C_retrieve2(lf[97],"static-libs");
t6=t3;
f_4647(t6,(C_truep(C_retrieve2(lf[97],"static-libs"))?C_retrieve2(lf[77],"library-files"):C_retrieve2(lf[78],"shared-library-files")));}}

/* k5336 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_5338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5338,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5342,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_CHICKEN_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4631 in linker-options in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in ... */
static void C_ccall f_4633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4633,2,av);}
/* csc.scm:1009: string-intersperse */
t2=C_fast_retrieve(lf[102]);{
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

/* k5332 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_5334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5334,2,av);}
a=C_alloc(6);
if(C_truep(C_retrieve2(lf[19],"chicken-prefix"))){
t2=C_a_i_list2(&a,2,C_retrieve2(lf[19],"chicken-prefix"),lf[428]);
/* csc.scm:89: make-pathname */
t3=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=lf[429];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* csc.scm:107: quotewrap */
t2=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
f_1562(3,av2);}}}

/* k5328 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_5330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5330,2,av);}
/* csc.scm:107: quotewrap */
t2=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_1562(3,av2);}}

/* a3320 in k3308 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in ... */
static void C_ccall f_3321(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3321,5,av);}
a=C_alloc(7);
if(C_truep(t4)){
if(C_truep((C_truep(C_i_equalp(t4,lf[387]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[388]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3346,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:799: append */
t7=*((C_word*)lf[103]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t5;
av2[2]=C_retrieve2(lf[55],"c-files");
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
if(C_truep(C_i_string_ci_equal_p(t4,lf[389]))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3360,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:801: append */
t7=*((C_word*)lf[103]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t5;
av2[2]=C_retrieve2(lf[56],"rc-files");
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
if(C_truep((C_truep(C_i_equalp(t4,lf[390]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[391]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[392]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[393]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[394]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3373,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[4],"osx"))){
t6=C_a_i_cons(&a,2,lf[395],C_retrieve2(lf[82],"compile-options"));
t7=C_mutate2(&lf[82] /* (set! compile-options ...) */,t6);
t8=t5;
f_3373(t8,t7);}
else{
t6=t5;
f_3373(t6,C_SCHEME_UNDEFINED);}}
else{
if(C_truep((C_truep(C_i_equalp(t4,lf[396]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[397]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[398]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
t5=lf[62] /* objc-mode */ =C_SCHEME_TRUE;;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3397,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:808: append */
t8=*((C_word*)lf[103]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t6;
av2[2]=C_retrieve2(lf[55],"c-files");
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t5=C_retrieve2(lf[36],"object-extension");
t6=C_u_i_string_equal_p(t4,C_retrieve2(lf[36],"object-extension"));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3409,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t6)){
t8=t7;
f_3409(t8,t6);}
else{
t8=C_retrieve2(lf[38],"library-extension");
t9=t7;
f_3409(t9,C_u_i_string_equal_p(t4,C_retrieve2(lf[38],"library-extension")));}}}}}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3332,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:797: append */
t7=*((C_word*)lf[103]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t5;
av2[2]=C_retrieve2(lf[54],"scheme-files");
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k5344 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_5346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5346,2,av);}
a=C_alloc(6);
if(C_truep(C_retrieve2(lf[19],"chicken-prefix"))){
t2=C_a_i_list2(&a,2,C_retrieve2(lf[19],"chicken-prefix"),lf[430]);
/* csc.scm:89: make-pathname */
t3=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=lf[431];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
f_1588(2,av2);}}}

/* k5340 in k5336 in k1586 in k1528 in k1524 in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_5342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5342,2,av);}
/* csc.scm:109: make-pathname */
t2=C_fast_retrieve(lf[106]);{
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

/* k2649 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2651,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1980(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k4363 in k4336 in k4333 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in ... */
static void C_ccall f_4365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4365,2,av);}
/* csc.scm:926: make-pathname */
t2=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_5356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5356,2,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[7]);
t3=lf[8] /* aix */ =t2;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1496,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:76: software-version */
t5=C_fast_retrieve(lf[240]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k2659 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2661,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1980(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k3275 in k3279 in k3190 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_ccall f_3277(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3277,2,av);}
a=C_alloc(21);
if(C_truep(C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3219,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3236,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3238,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_3238(t11,t7,((C_word*)t0)[5]);}
else{
/* csc.scm:792: stop */
f_1499(((C_word*)t0)[6],lf[380],C_a_i_list(&a,1,((C_word*)t0)[7]));}}

/* k4373 in k4336 in k4333 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in ... */
static void C_ccall f_4375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4375,2,av);}
/* csc.scm:929: string-append */
t2=*((C_word*)lf[122]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[189];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3344 in a3320 in k3308 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_ccall f_3346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3346,2,av);}
t2=C_mutate2(&lf[55] /* (set! c-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f6072 in k2184 in k2181 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in ... */
static void C_ccall f6072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f6072,2,av);}
/* csc.scm:554: exit */
t2=C_fast_retrieve(lf[14]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3261 in map-loop445 in k3275 in k3279 in k3190 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in ... */
static void C_ccall f_3263(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3263,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3238(t6,((C_word*)t0)[5],t5);}

/* k4383 in k4333 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in ... */
static void C_ccall f_4385(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4385,2,av);}
a=C_alloc(8);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4388,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4419,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:923: open-output-string */
t5=C_fast_retrieve(lf[114]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k4386 in k4383 in k4333 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in ... */
static void C_ccall f_4388(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4388,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4395,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:924: open-output-string */
t3=C_fast_retrieve(lf[114]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2154 in k2144 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in ... */
static void C_ccall f_2156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2156,2,av);}
t2=C_mutate2(&lf[89] /* (set! target-filename ...) */,t1);
t3=((C_word*)t0)[2];
f_2149(t3,t2);}

/* k4393 in k4386 in k4383 in k4333 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in ... */
static void C_ccall f_4395(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4395,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[109]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4401,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:924: ##sys#print */
t6=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[191];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3775 in k3699 in k3668 in k3665 in for-each-loop504 in k2147 in k2144 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in ... */
static void C_ccall f_3777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_3777,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
f_3709(t2,C_a_i_list(&a,2,lf[224],t1));}

/* f6054 in k2057 in k2054 in k2048 in k2041 in k2038 in k2035 in k2032 in k2029 in k2026 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in ... */
static void C_ccall f6054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f6054,2,av);}
/* csc.scm:583: ##sys#print */
t2=*((C_word*)lf[16]+1);{
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

/* f6050 in k2057 in k2054 in k2048 in k2041 in k2038 in k2035 in k2032 in k2029 in k2026 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in ... */
static void C_ccall f6050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f6050,2,av);}
/* csc.scm:583: ##sys#print */
t2=*((C_word*)lf[16]+1);{
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

/* k3279 in k3190 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in ... */
static void C_ccall f_3281(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3281,2,av);}
a=C_alloc(8);
t2=C_i_cdr(t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3277,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csc.scm:789: lset-difference */
t5=C_fast_retrieve(lf[381]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=*((C_word*)lf[382]+1);
av2[3]=t3;
av2[4]=lf[383];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k3296 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in ... */
static void C_ccall f_3298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3298,2,av);}
t2=((C_word*)t0)[2];
f_3192(t2,C_u_i_string_equal_p(lf[385],t1));}

/* k2147 in k2144 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in ... */
static void C_fcall f_2149(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2149,2,t0,t1);}
a=C_alloc(5);
t2=C_retrieve2(lf[54],"scheme-files");
t3=C_i_check_list_2(C_retrieve2(lf[54],"scheme-files"),lf[157]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3806,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3806(t7,((C_word*)t0)[2],C_retrieve2(lf[54],"scheme-files"));}

/* k2144 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in ... */
static void C_fcall f_2146(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2146,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2149,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[89],"target-filename"))){
t3=t2;
f_2149(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2156,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[95],"shared"))){
t4=C_i_car(C_retrieve2(lf[54],"scheme-files"));
/* csc.scm:571: pathname-replace-extension */
t5=C_fast_retrieve(lf[208]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=C_retrieve2(lf[42],"shared-library-extension");
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=C_i_car(C_retrieve2(lf[54],"scheme-files"));
/* csc.scm:572: pathname-replace-extension */
t5=C_fast_retrieve(lf[208]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=C_retrieve2(lf[40],"executable-extension");
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}}

/* k2628 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2630(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2630,2,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_mutate2(&lf[89] /* (set! target-filename ...) */,t2);
/* csc.scm:818: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1980(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2699 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2701,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1980(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k4686 in k4744 in k4738 in quote-option in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_4688(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4688,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4690,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4690(t5,((C_word*)t0)[3],t1);}

/* k2709 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2711,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1980(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k4682 in k4744 in k4738 in quote-option in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_4684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4684,2,av);}
/* list->string */
t2=C_fast_retrieve(lf[127]);{
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

/* k4678 in k4668 in k4744 in k4738 in quote-option in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_4680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4680,2,av);}
/* csc.scm:1040: string-append */
t2=*((C_word*)lf[122]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[123];
av2[3]=t1;
av2[4]=lf[124];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_ccall f_1496(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1496,2,av);}
a=C_alloc(5);
t2=C_mutate2(&lf[9] /* (set! elf ...) */,C_u_i_memq(t1,lf[10]));
t3=C_mutate2(&lf[11] /* (set! stop ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1499,tmp=(C_word)a,a+=2,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1526,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:82: get-environment-variable */
t5=C_fast_retrieve(lf[142]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[433];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* stop in k1494 in k5354 in k5358 in k5362 in k5366 in k1472 in k1469 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in k1448 in k1445 in k1442 */
static void C_fcall f_1499(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_1499,3,t1,t2,t3);}
a=C_alloc(13);
t4=*((C_word*)lf[12]+1);
t5=*((C_word*)lf[12]+1);
t6=C_i_check_port_2(*((C_word*)lf[12]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[13]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1506,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1522,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t9=*((C_word*)lf[18]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t8;
av2[2]=C_mpointer(&a,(void*)C_CSC_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* k4668 in k4744 in k4738 in quote-option in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_4670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4670,2,av);}
a=C_alloc(3);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4680,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1040: string-translate* */
t3=C_fast_retrieve(lf[125]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[126];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=t1;
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4807 in k4804 in k4801 in k4798 in k4778 in k4775 in k4772 in command in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in ... */
static void C_ccall f_4809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4809,2,av);}
/* csc.scm:1064: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k4801 in k4798 in k4778 in k4775 in k4772 in command in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in ... */
static void C_ccall f_4803(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4803,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4806,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1064: ##sys#print */
t3=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[134];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4804 in k4801 in k4798 in k4778 in k4775 in k4772 in command in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in ... */
static void C_ccall f_4806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4806,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4809,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1064: ##sys#print */
t3=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3395 in a3320 in k3308 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_ccall f_3397(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3397,2,av);}
t2=C_mutate2(&lf[55] /* (set! c-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* g880 in k4823 in command in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in ... */
static void C_fcall f_4829(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4829,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4837,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1059: qs */
t4=C_fast_retrieve(lf[25]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4823 in command in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in ... */
static void C_ccall f_4825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4825,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4829,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1054: g880 */
t3=t2;
f_4829(t3,((C_word*)t0)[3],t1);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
f_4774(2,av2);}}}

/* k2719 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2721,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1980(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5078 in k5075 in k5056 in k5052 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in ... */
static void C_ccall f_5080(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5080,2,av);}
a=C_alloc(7);
t2=C_i_check_list_2(t1,lf[101]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5088,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5088(t6,((C_word*)t0)[4],t1);}

/* map-loop113 in k5078 in k5075 in k5056 in k5052 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in ... */
static void C_fcall f_5088(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5088,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5113,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:252: g136 */
t5=*((C_word*)lf[122]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[412];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2729 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2731,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1980(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5052 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in k1524 in ... */
static void C_fcall f_5054(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_5054,2,t0,t1);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5058,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:250: get-environment-variable */
t4=C_fast_retrieve(lf[142]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[414];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5056 in k5052 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in ... */
static void C_ccall f_5058(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5058,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5061,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
t4=t1;
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=C_retrieve2(lf[24],"quotewrap");
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5077,a[2]=t7,a[3]=t8,a[4]=t3,a[5]=t11,a[6]=t13,a[7]=t12,tmp=(C_word)a,a+=8,tmp);
/* csc.scm:252: string-split */
t15=C_fast_retrieve(lf[233]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t15;
av2[1]=t14;
av2[2]=t4;
av2[3]=lf[413];
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}
else{
/* csc.scm:248: append */
t3=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k2739 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2741,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1980(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k3814 in for-each-loop504 in k2147 in k2144 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in ... */
static void C_ccall f_3816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3816,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3806(t3,((C_word*)t0)[4],t2);}

/* k2679 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2681,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1980(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5059 in k5056 in k5052 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in ... */
static void C_ccall f_5061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5061,2,av);}
/* csc.scm:248: append */
t2=*((C_word*)lf[103]+1);{
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

/* k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_fcall f_2758(C_word t0,C_word t1){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_2758,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
/* csc.scm:703: shared-build */
f_1940(((C_word*)t0)[3],C_SCHEME_FALSE);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[349]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[350]));
if(C_truep(t3)){
/* csc.scm:705: shared-build */
f_1940(((C_word*)t0)[3],C_SCHEME_TRUE);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[351]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2782,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:707: check */
f_1914(t5,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[352]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2799,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:711: check */
f_1914(t6,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[353]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2816,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:715: check */
f_1914(t7,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[354]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2833,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:719: check */
f_1914(t8,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[355]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2850,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:723: check */
f_1914(t9,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[357]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2871,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:726: check */
f_1914(t10,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[358]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2897,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t12=C_a_i_list1(&a,1,lf[359]);
/* csc.scm:730: append */
t13=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t13;
av2[1]=t11;
av2[2]=C_retrieve2(lf[88],"link-options");
av2[3]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(4,av2);}}
else{
t11=C_eqp(((C_word*)t0)[4],lf[360]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2910,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:732: check */
f_1914(t12,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[361]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2935,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:736: check */
f_1914(t13,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[366]);
if(C_truep(t13)){
/* csc.scm:818: loop */
t14=((C_word*)((C_word*)t0)[6])[1];
f_1980(t14,((C_word*)t0)[7],((C_word*)((C_word*)t0)[5])[1]);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[367]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2990,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:744: check */
f_1914(t15,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t15=C_eqp(((C_word*)t0)[4],lf[369]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3010,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:748: check */
f_1914(t16,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t16=C_eqp(((C_word*)t0)[4],lf[371]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3031,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:752: append */
t18=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t18;
av2[1]=t17;
av2[2]=C_retrieve2(lf[54],"scheme-files");
av2[3]=lf[373];
((C_proc)(void*)(*((C_word*)t18+1)))(4,av2);}}
else{
t17=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3041,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t18=C_eqp(((C_word*)t0)[9],lf[404]);
if(C_truep(t18)){
t19=lf[94] /* to-stdout */ =C_SCHEME_TRUE;;
t20=lf[92] /* translate-only */ =C_SCHEME_TRUE;;
t21=t17;
f_3041(t21,t20);}
else{
t19=t17;
f_3041(t19,C_SCHEME_UNDEFINED);}}}}}}}}}}}}}}}}}

/* for-each-loop504 in k2147 in k2144 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in ... */
static void C_fcall f_3806(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_3806,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3816,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=C_i_length(C_retrieve2(lf[54],"scheme-files"));
t8=C_eqp(C_fix(1),t7);
t9=(C_truep(t8)?C_retrieve2(lf[89],"target-filename"):t6);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3667,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[61],"cpp-mode"))){
/* csc.scm:829: pathname-replace-extension */
t11=C_fast_retrieve(lf[208]);{
C_word av2[4];
av2[0]=t11;
av2[1]=t10;
av2[2]=t9;
av2[3]=lf[226];
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[62],"objc-mode"))){
/* csc.scm:829: pathname-replace-extension */
t11=C_fast_retrieve(lf[208]);{
C_word av2[4];
av2[0]=t11;
av2[1]=t10;
av2[2]=t9;
av2[3]=lf[227];
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
/* csc.scm:829: pathname-replace-extension */
t11=C_fast_retrieve(lf[208]);{
C_word av2[4];
av2[0]=t11;
av2[1]=t10;
av2[2]=t9;
av2[3]=lf[228];
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2689 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2691,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1980(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* f6032 in k4571 in k4568 in k4562 in copy-files in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f6032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f6032,2,av);}
/* csc.scm:1000: ##sys#print */
t2=*((C_word*)lf[16]+1);{
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

/* k4324 in k4320 in k4316 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in ... */
static void C_ccall f_4326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4326,2,av);}
a=C_alloc(9);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
/* csc.scm:940: append */
t3=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4320 in k4316 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in ... */
static void C_ccall f_4322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4322,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4326,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:944: linker-libraries */
f_4635(t3);}

/* k5042 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in k1528 in ... */
static void C_ccall f_5044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5044,2,av);}
a=C_alloc(6);
if(C_truep(C_retrieve2(lf[19],"chicken-prefix"))){
t2=C_a_i_list2(&a,2,C_retrieve2(lf[19],"chicken-prefix"),lf[410]);
/* csc.scm:89: make-pathname */
t3=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=lf[411];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
f_1716(2,av2);}}}

/* f6020 in k4577 in k4574 in k4571 in k4568 in k4562 in copy-files in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in ... */
static void C_ccall f6020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f6020,2,av);}
/* csc.scm:1000: ##sys#print */
t2=*((C_word*)lf[16]+1);{
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

/* f6024 in k4577 in k4574 in k4571 in k4568 in k4562 in copy-files in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in ... */
static void C_ccall f6024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f6024,2,av);}
/* csc.scm:1000: ##sys#print */
t2=*((C_word*)lf[16]+1);{
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

/* k4333 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in ... */
static void C_ccall f_4335(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4335,2,av);}
a=C_alloc(9);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4338,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(C_retrieve2(lf[4],"osx"))?C_retrieve2(lf[69],"gui"):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4385,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:922: make-pathname */
t6=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=lf[194];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t5=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_4338(2,av2);}}}

/* k4336 in k4333 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in ... */
static void C_ccall f_4338(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_4338,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4342,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4365,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_truep(C_retrieve2(lf[4],"osx"))?C_retrieve2(lf[69],"gui"):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4375,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:929: pathname-file */
t6=C_fast_retrieve(lf[170]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_retrieve2(lf[89],"target-filename");
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
/* csc.scm:930: pathname-file */
t5=C_fast_retrieve(lf[170]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=C_retrieve2(lf[89],"target-filename");
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* f6028 in k4571 in k4568 in k4562 in copy-files in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f6028(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f6028,2,av);}
/* csc.scm:1000: ##sys#print */
t2=*((C_word*)lf[16]+1);{
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

/* k4329 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in ... */
static void C_ccall f_4331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4331,2,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[185];
av2[3]=t1;
tp(4,av2);}}

/* k4835 in g880 in k4823 in command in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_4837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4837,2,av);}
/* csc.scm:1058: string-append */
t2=*((C_word*)lf[122]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[140];
av2[3]=t1;
av2[4]=lf[141];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k5017 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in ... */
static void C_ccall f_5019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5019,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5022,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5025,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[147]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[147]+1);
av2[1]=t3;
tp(2,av2);}}

/* k4344 in k4340 in k4336 in k4333 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in ... */
static void C_ccall f_4346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4346,2,av);}
a=C_alloc(4);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4352,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:932: directory-exists? */
t4=C_fast_retrieve(lf[188]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* command in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in ... */
static void C_fcall f_4845(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_4845,2,t1,t2);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4859,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=t3;
t5=t2;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4774,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(lf[0])){
/* csc.scm:1055: string-append */
t7=*((C_word*)lf[122]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[138];
av2[3]=t5;
av2[4]=lf[139];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4825,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[4],"osx"))){
/* csc.scm:1056: get-environment-variable */
t8=C_fast_retrieve(lf[142]);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[143];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_4825(2,av2);}}}}

/* k4059 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in ... */
static void C_ccall f_4061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4061,2,av);}
t2=((C_word*)t0)[2];
f_4036(t2,C_eqp(lf[215],t1));}

/* k4340 in k4336 in k4333 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in ... */
static void C_ccall f_4342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4342,2,av);}
a=C_alloc(5);
t2=C_mutate2(&lf[89] /* (set! target-filename ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4346,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:931: quotewrap */
t4=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[89],"target-filename");
f_1562(3,av2);}}

/* $delete-file in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in ... */
static void C_ccall f_4861(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4861,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4865,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[90],"verbose"))){
/* csc.scm:1075: print */
t4=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[146];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[68],"dry-run"))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* csc.scm:1076: delete-file */
t4=C_fast_retrieve(lf[145]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}}

/* k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in ... */
static void C_ccall f_5029(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,5)))){
C_save_and_reclaim((void *)f_5029,2,av);}
a=C_alloc(25);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1907,tmp=(C_word)a,a+=2,tmp));
t11=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1914,tmp=(C_word)a,a+=2,tmp));
t12=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1940,tmp=(C_word)a,a+=2,tmp));
t13=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1963,tmp=(C_word)a,a+=2,tmp));
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1980,a[2]=t9,a[3]=t15,a[4]=t3,a[5]=t5,a[6]=t7,tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_1980(t17,((C_word*)t0)[2],t1);}

/* k5020 in k5017 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in ... */
static void C_ccall f_5022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5022,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4052 in k4037 in k4034 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_ccall f_4054(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4054,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t1;
t4=((C_word*)t0)[3];
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4988,a[2]=t3,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[90],"verbose"))){
/* csc.scm:1120: print */
t6=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[213];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_4988(2,av2);}}}

/* k5023 in k5017 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in ... */
static void C_ccall f_5025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5025,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k4353 in k4350 in k4344 in k4340 in k4336 in k4333 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in ... */
static void C_ccall f_4355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4355,2,av);}
/* csc.scm:935: create-directory */
t2=C_fast_retrieve(lf[186]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4350 in k4344 in k4340 in k4336 in k4333 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in ... */
static void C_ccall f_4352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4352,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_4162(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4355,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[90],"verbose"))){
/* csc.scm:934: print */
t3=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[187];
av2[3]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* csc.scm:935: create-directory */
t3=C_fast_retrieve(lf[186]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}

/* k4857 in command in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in ... */
static void C_ccall f_4859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4859,2,av);}
if(C_truep(C_i_zerop(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* csc.scm:1071: exit */
t2=C_fast_retrieve(lf[14]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[131],"last-exit-code");
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k4499 in k4493 in k4224 in k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in ... */
static void C_ccall f_4501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4501,2,av);}
if(C_truep(C_i_string_equal_p(t1,lf[175]))){
/* csc.scm:985: lib-path */
f_4475(((C_word*)t0)[2]);}
else{
if(C_truep(C_retrieve2(lf[23],"cross-chicken"))){
t2=C_retrieve2(lf[22],"host-mode");
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* csc.scm:985: lib-path */
f_4475(((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
/* csc.scm:985: lib-path */
f_4475(((C_word*)t0)[2]);}}}

/* for-each-loop564 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in ... */
static void C_fcall f_4063(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4063,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4073,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:863: g565 */
t5=((C_word*)t0)[3];
f_3831(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5075 in k5056 in k5052 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in ... */
static void C_ccall f_5077(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_5077,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5080,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5122,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_5122(t6,t2,t1);}

/* k2402 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_fcall f_2404(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_2404,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2407,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:633: t-options */
f_1907(t2,C_a_i_list(&a,1,lf[278]));}

/* k2405 in k2402 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_2407(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2407,2,av);}
if(C_truep(C_retrieve2(lf[90],"verbose"))){
t2=lf[90] /* verbose */ =C_fix(2);;
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1980(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t2=lf[90] /* verbose */ =C_SCHEME_TRUE;;
/* csc.scm:818: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1980(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}}

/* k4863 in $delete-file in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in ... */
static void C_ccall f_4865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4865,2,av);}
if(C_truep(C_retrieve2(lf[68],"dry-run"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* csc.scm:1076: delete-file */
t2=C_fast_retrieve(lf[145]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k3867 in k3863 in k3836 in k3833 in g565 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in ... */
static void C_ccall f_3869(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3869,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[61],"cpp-mode"))){
t4=C_i_string_equal_p(lf[203],C_retrieve2(lf[32],"c++-compiler"));
t5=t3;
f_3873(t5,(C_truep(t4)?lf[204]:lf[205]));}
else{
t4=t3;
f_3873(t4,lf[205]);}}

/* k4798 in k4778 in k4775 in k4772 in command in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_4800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4800,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4803,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1064: ##sys#print */
t3=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4999 in a4992 in k4986 in k4052 in k4037 in k4034 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in ... */
static void C_ccall f_5001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5001,2,av);}
/* csc.scm:1123: print */
t2=*((C_word*)lf[137]+1);{
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

/* k4071 in for-each-loop564 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in ... */
static void C_ccall f_4073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4073,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4063(t3,((C_word*)t0)[4],t2);}

/* k4008 in k3939 in k3901 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_ccall f_4010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4010,2,av);}
/* csc.scm:899: append */
t2=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[59],"object-files");
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2417 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2419(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2419,2,av);}
a=C_alloc(3);
t2=C_mutate2(&lf[82] /* (set! compile-options ...) */,t1);
t3=C_a_i_cons(&a,2,lf[279],C_retrieve2(lf[88],"link-options"));
t4=C_mutate2(&lf[88] /* (set! link-options ...) */,t3);
t5=((C_word*)t0)[2];
f_2404(t5,t4);}

/* k3863 in k3836 in k3833 in g565 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_ccall f_3865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3865,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3869,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3888,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:876: quotewrap */
t5=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
f_1562(3,av2);}}

/* compiler-options in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in ... */
static void C_fcall f_4086(C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_4086,1,t1);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_retrieve2(lf[100],"quote-option");
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4097,a[2]=t1,a[3]=t4,a[4]=t6,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t8=C_retrieve2(lf[96],"static");
t9=(C_truep(C_retrieve2(lf[96],"static"))?C_retrieve2(lf[96],"static"):C_retrieve2(lf[97],"static-libs"));
if(C_truep(t9)){
/* csc.scm:907: append */
t10=*((C_word*)lf[103]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t7;
av2[2]=C_SCHEME_END_OF_LIST;
av2[3]=C_retrieve2(lf[85],"compilation-optimization-options");
av2[4]=C_retrieve2(lf[82],"compile-options");
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
/* csc.scm:907: append */
t10=*((C_word*)lf[103]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t7;
av2[2]=C_SCHEME_END_OF_LIST;
av2[3]=C_retrieve2(lf[85],"compilation-optimization-options");
av2[4]=C_retrieve2(lf[82],"compile-options");
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}

/* for-each-loop594 in k3901 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in ... */
static void C_fcall f_4012(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4012,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4022,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:890: g595 */
t5=((C_word*)t0)[3];
f_3904(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3411 in k3407 in a3320 in k3308 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in ... */
static void C_ccall f_3413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3413,2,av);}
t2=C_mutate2(&lf[59] /* (set! object-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3836 in k3833 in g565 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in ... */
static void C_ccall f_3838(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3838,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3841,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3853,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_truep(C_retrieve2(lf[61],"cpp-mode"))?C_retrieve2(lf[32],"c++-compiler"):C_retrieve2(lf[31],"compiler"));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3865,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:875: quotewrap */
t7=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[5];
f_1562(3,av2);}}

/* k3407 in a3320 in k3308 in k3107 in k3098 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_fcall f_3409(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3409,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3413,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:811: append */
t4=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=C_retrieve2(lf[59],"object-files");
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3421,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:812: append */
t4=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=C_retrieve2(lf[54],"scheme-files");
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k5035 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in ... */
static void C_ccall f_5037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5037,2,av);}
if(C_truep(t1)){
t2=t1;
/* csc.scm:1146: string-split */
t3=C_fast_retrieve(lf[233]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* csc.scm:1146: string-split */
t2=C_fast_retrieve(lf[233]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[408];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k5031 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in k1586 in ... */
static void C_ccall f_5033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5033,2,av);}
/* csc.scm:1145: append */
t2=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[20],"arguments");
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4020 in for-each-loop594 in k3901 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_ccall f_4022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4022,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4012(t3,((C_word*)t0)[4],t2);}

/* g565 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in ... */
static void C_fcall f_3831(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_3831,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3835,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:867: pathname-replace-extension */
t4=C_fast_retrieve(lf[208]);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_retrieve2(lf[36],"object-extension");
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3833 in g565 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in ... */
static void C_ccall f_3835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_3835,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3838,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_member(t2,C_retrieve2(lf[59],"object-files")))){
/* csc.scm:869: stop */
f_1499(t3,lf[207],C_a_i_list(&a,2,((C_word*)t0)[4],t2));}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_3838(2,av2);}}}

/* k4037 in k4034 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in ... */
static void C_ccall f_4039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4039,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4042,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4054,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:887: pathname-file */
t5=C_fast_retrieve(lf[170]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_retrieve2(lf[89],"target-filename");
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4034 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in ... */
static void C_fcall f_4036(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_4036,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4039,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:886: pathname-replace-extension */
t3=C_fast_retrieve(lf[208]);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_retrieve2(lf[89],"target-filename");
av2[3]=lf[214];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=((C_word*)t0)[2];
f_3903(t2,C_SCHEME_UNDEFINED);}}

/* k4562 in copy-files in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in k1594 in k1590 in ... */
static void C_ccall f_4564(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4564,2,av);}
a=C_alloc(7);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[109]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4570,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep(lf[0])){
/* csc.scm:1000: ##sys#print */
t6=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[112];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
/* csc.scm:1000: ##sys#print */
t6=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[113];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k4040 in k4037 in k4034 in k3898 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_ccall f_4042(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4042,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[56],"rc-files"));
t3=C_mutate2(&lf[56] /* (set! rc-files ...) */,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[58],"generated-rc-files"));
t5=C_mutate2(&lf[58] /* (set! generated-rc-files ...) */,t4);
t6=((C_word*)t0)[3];
f_3903(t6,t5);}

/* k2780 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_2782(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2782,2,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(&lf[30] /* (set! translator ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:818: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1980(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* f6092 in k4577 in k4574 in k4571 in k4568 in k4562 in copy-files in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in ... */
static void C_ccall f6092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f6092,2,av);}
/* csc.scm:101: qs */
t2=C_fast_retrieve(lf[25]);{
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

/* k3851 in k3836 in k3833 in g565 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_ccall f_3853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3853,2,av);}
/* csc.scm:871: command */
f_4845(((C_word*)t0)[2],t1);}

/* f6097 in k4571 in k4568 in k4562 in copy-files in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f6097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f6097,2,av);}
/* csc.scm:101: qs */
t2=C_fast_retrieve(lf[25]);{
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

/* k2797 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_2799(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2799,2,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(&lf[31] /* (set! compiler ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:818: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1980(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k3839 in k3836 in k3833 in g565 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in ... */
static void C_ccall f_3841(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_3841,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[60],"generated-object-files"));
t3=C_mutate2(&lf[60] /* (set! generated-object-files ...) */,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t4);
t6=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in ... */
static void C_fcall f_4206(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_4206,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4209,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4226,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[4],"osx"))){
t4=C_retrieve2(lf[69],"gui");
if(C_truep(C_retrieve2(lf[69],"gui"))){
/* csc.scm:963: make-pathname */
t5=C_fast_retrieve(lf[106]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=lf[177];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=t3;{
C_word av2[2];
av2[0]=t5;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
f_4226(2,av2);}}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
f_4226(2,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_4171(2,av2);}}}

/* k4207 in k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in ... */
static void C_ccall f_4209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4209,2,av);}
a=C_alloc(4);
t2=(C_truep(C_retrieve2(lf[4],"osx"))?C_retrieve2(lf[69],"gui"):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4222,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:967: pathname-file */
t4=C_fast_retrieve(lf[170]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[89],"target-filename");
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
f_4171(2,av2);}}}

/* k4527 in k4224 in k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in ... */
static void C_ccall f_4529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4529,2,av);}
/* csc.scm:996: copy-files */
f_4556(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k4888 in k4882 in k4243 in k4240 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in ... */
static void C_ccall f_4890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4890,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4893,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4914,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1082: quotewrap */
t4=C_retrieve2(lf[24],"quotewrap");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
f_1562(3,av2);}}

/* k4534 in k4224 in k4204 in k4166 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in ... */
static void C_ccall f_4536(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4536,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4540,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[4],"osx"))){
/* csc.scm:988: make-pathname */
t4=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=C_retrieve2(lf[47],"dynamic-libchicken");
av2[4]=lf[171];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=C_retrieve2(lf[2],"mingw");
t5=(C_truep(C_retrieve2(lf[2],"mingw"))?C_retrieve2(lf[2],"mingw"):C_retrieve2(lf[6],"cygwin"));
if(C_truep(t5)){
/* csc.scm:988: make-pathname */
t6=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=C_retrieve2(lf[47],"dynamic-libchicken");
av2[4]=lf[172];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4554,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:995: number->string */
t7=*((C_word*)lf[174]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=C_fix((C_word)C_BINARY_VERSION);
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}}

/* k3464 in k3042 in k3039 in k2756 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in ... */
static void C_ccall f_3466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3466,2,av);}
t2=((C_word*)t0)[2];
f_3100(t2,C_u_i_string_equal_p(lf[401],t1));}

/* k4882 in k4243 in k4240 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in ... */
static void C_ccall f_4884(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4884,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[109]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4890,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:1081: ##sys#print */
t6=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[179];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2510 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in k1598 in ... */
static void C_ccall f_2512(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2512,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2516,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t4=C_a_i_list1(&a,1,t3);
/* csc.scm:654: append */
t5=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=C_retrieve2(lf[98],"required-extensions");
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2517 in k2514 in k2510 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in ... */
static void C_ccall f_2519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2519,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_u_i_cdr(t2));
/* csc.scm:818: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1980(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2514 in k2510 in k2225 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in k5201 in k1683 in k1679 in k1649 in k1644 in k1639 in k1635 in k1631 in k1627 in k1622 in k1610 in k1606 in k1602 in ... */
static void C_ccall f_2516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2516,2,av);}
a=C_alloc(11);
t2=C_mutate2(&lf[98] /* (set! required-extensions ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2519,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:655: t-options */
f_1907(t3,C_a_i_list(&a,2,lf[300],t4));}

/* k4897 in k4894 in k4891 in k4888 in k4882 in k4243 in k4240 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in ... */
static void C_ccall f_4899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4899,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4902,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1081: get-output-string */
t3=C_fast_retrieve(lf[111]);{
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

/* k4894 in k4891 in k4888 in k4882 in k4243 in k4240 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in ... */
static void C_ccall f_4896(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4896,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4899,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4906,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4910,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1083: make-pathname */
t5=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_retrieve2(lf[29],"home");
av2[3]=lf[178];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k4891 in k4888 in k4882 in k4243 in k4240 in k4163 in k4160 in k4157 in k4154 in k2014 in k2008 in k2002 in k1999 in k1996 in k1993 in k1989 in loop in k5027 in k1714 in k1706 in k1698 in k5187 in ... */
static void C_ccall f_4893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4893,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4896,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1081: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[441] = {
{"f_4540:csc_2escm",(void*)f_4540},
{"f_4554:csc_2escm",(void*)f_4554},
{"f_4556:csc_2escm",(void*)f_4556},
{"f_3436:csc_2escm",(void*)f_3436},
{"f_3430:csc_2escm",(void*)f_3430},
{"f_3421:csc_2escm",(void*)f_3421},
{"f_4265:csc_2escm",(void*)f_4265},
{"f_4269:csc_2escm",(void*)f_4269},
{"f_4261:csc_2escm",(void*)f_4261},
{"f_4276:csc_2escm",(void*)f_4276},
{"f_3877:csc_2escm",(void*)f_3877},
{"f_4273:csc_2escm",(void*)f_4273},
{"f_1781:csc_2escm",(void*)f_1781},
{"f_3873:csc_2escm",(void*)f_3873},
{"f_4286:csc_2escm",(void*)f_4286},
{"f_4298:csc_2escm",(void*)f_4298},
{"f_3888:csc_2escm",(void*)f_3888},
{"f_1756:csc_2escm",(void*)f_1756},
{"f_1751:csc_2escm",(void*)f_1751},
{"f_3681:csc_2escm",(void*)f_3681},
{"f_5269:csc_2escm",(void*)f_5269},
{"f_5113:csc_2escm",(void*)f_5113},
{"f_1727:csc_2escm",(void*)f_1727},
{"f_4579:csc_2escm",(void*)f_4579},
{"f_4576:csc_2escm",(void*)f_4576},
{"f_2202:csc_2escm",(void*)f_2202},
{"f_4573:csc_2escm",(void*)f_4573},
{"f_2209:csc_2escm",(void*)f_2209},
{"f_4570:csc_2escm",(void*)f_4570},
{"f_1716:csc_2escm",(void*)f_1716},
{"f_5211:csc_2escm",(void*)f_5211},
{"f_5215:csc_2escm",(void*)f_5215},
{"f_4725:csc_2escm",(void*)f_4725},
{"f_4585:csc_2escm",(void*)f_4585},
{"f_1681:csc_2escm",(void*)f_1681},
{"f_4582:csc_2escm",(void*)f_4582},
{"f_2216:csc_2escm",(void*)f_2216},
{"f_1685:csc_2escm",(void*)f_1685},
{"f_1700:csc_2escm",(void*)f_1700},
{"f_1708:csc_2escm",(void*)f_1708},
{"f_2227:csc_2escm",(void*)f_2227},
{"f_2220:csc_2escm",(void*)f_2220},
{"f_2230:csc_2escm",(void*)f_2230},
{"f_5207:csc_2escm",(void*)f_5207},
{"f_5203:csc_2escm",(void*)f_5203},
{"f_3667:csc_2escm",(void*)f_3667},
{"f_4718:csc_2escm",(void*)f_4718},
{"f_4713:csc_2escm",(void*)f_4713},
{"f_1651:csc_2escm",(void*)f_1651},
{"f_5164:csc_2escm",(void*)f_5164},
{"f_4097:csc_2escm",(void*)f_4097},
{"f_5256:csc_2escm",(void*)f_5256},
{"f_1646:csc_2escm",(void*)f_1646},
{"f_1641:csc_2escm",(void*)f_1641},
{"f_5175:csc_2escm",(void*)f_5175},
{"f_5179:csc_2escm",(void*)f_5179},
{"f_1633:csc_2escm",(void*)f_1633},
{"f_1637:csc_2escm",(void*)f_1637},
{"f_2261:csc_2escm",(void*)f_2261},
{"f_5189:csc_2escm",(void*)f_5189},
{"f_1731:csc_2escm",(void*)f_1731},
{"f_1735:csc_2escm",(void*)f_1735},
{"f_1738:csc_2escm",(void*)f_1738},
{"f_4783:csc_2escm",(void*)f_4783},
{"f_4780:csc_2escm",(void*)f_4780},
{"f_1624:csc_2escm",(void*)f_1624},
{"f_1629:csc_2escm",(void*)f_1629},
{"f_2270:csc_2escm",(void*)f_2270},
{"f_5193:csc_2escm",(void*)f_5193},
{"f_2277:csc_2escm",(void*)f_2277},
{"f_5246:csc_2escm",(void*)f_5246},
{"f_5242:csc_2escm",(void*)f_5242},
{"f_1612:csc_2escm",(void*)f_1612},
{"f_1600:csc_2escm",(void*)f_1600},
{"f_1604:csc_2escm",(void*)f_1604},
{"f_1608:csc_2escm",(void*)f_1608},
{"f_3900:csc_2escm",(void*)f_3900},
{"f_3903:csc_2escm",(void*)f_3903},
{"f_3904:csc_2escm",(void*)f_3904},
{"f_3908:csc_2escm",(void*)f_3908},
{"f_2579:csc_2escm",(void*)f_2579},
{"f_2575:csc_2escm",(void*)f_2575},
{"f_2571:csc_2escm",(void*)f_2571},
{"f_4746:csc_2escm",(void*)f_4746},
{"f_4740:csc_2escm",(void*)f_4740},
{"f_3923:csc_2escm",(void*)f_3923},
{"f_3100:csc_2escm",(void*)f_3100},
{"f_4226:csc_2escm",(void*)f_4226},
{"f_4222:csc_2escm",(void*)f_4222},
{"f_3109:csc_2escm",(void*)f_3109},
{"f_3911:csc_2escm",(void*)f_3911},
{"f_4763:csc_2escm",(void*)f_4763},
{"f_3945:csc_2escm",(void*)f_3945},
{"f_3941:csc_2escm",(void*)f_3941},
{"f_4245:csc_2escm",(void*)f_4245},
{"f_4733:csc_2escm",(void*)f_4733},
{"f_4242:csc_2escm",(void*)f_4242},
{"f_3120:csc_2escm",(void*)f_3120},
{"f_4401:csc_2escm",(void*)f_4401},
{"f_1907:csc_2escm",(void*)f_1907},
{"f_3931:csc_2escm",(void*)f_3931},
{"f_3935:csc_2escm",(void*)f_3935},
{"f6108:csc_2escm",(void*)f6108},
{"f_4411:csc_2escm",(void*)f_4411},
{"f_3962:csc_2escm",(void*)f_3962},
{"f_4751:csc_2escm",(void*)f_4751},
{"f_4404:csc_2escm",(void*)f_4404},
{"f_4407:csc_2escm",(void*)f_4407},
{"f_3954:csc_2escm",(void*)f_3954},
{"f_2308:csc_2escm",(void*)f_2308},
{"f_4415:csc_2escm",(void*)f_4415},
{"f_4419:csc_2escm",(void*)f_4419},
{"f_1912:csc_2escm",(void*)f_1912},
{"f_1914:csc_2escm",(void*)f_1914},
{"f_3985:csc_2escm",(void*)f_3985},
{"f_2319:csc_2escm",(void*)f_2319},
{"f_3168:csc_2escm",(void*)f_3168},
{"f_1945:csc_2escm",(void*)f_1945},
{"f_1940:csc_2escm",(void*)f_1940},
{"f_3972:csc_2escm",(void*)f_3972},
{"f_1949:csc_2escm",(void*)f_1949},
{"f_2242:csc_2escm",(void*)f_2242},
{"f_3182:csc_2escm",(void*)f_3182},
{"f_3995:csc_2escm",(void*)f_3995},
{"f_2254:csc_2escm",(void*)f_2254},
{"toplevel:csc_2escm",(void*)C_toplevel},
{"f_4466:csc_2escm",(void*)f_4466},
{"f_3673:csc_2escm",(void*)f_3673},
{"f_3670:csc_2escm",(void*)f_3670},
{"f_4483:csc_2escm",(void*)f_4483},
{"f_1980:csc_2escm",(void*)f_1980},
{"f_3192:csc_2escm",(void*)f_3192},
{"f_2369:csc_2escm",(void*)f_2369},
{"f_4475:csc_2escm",(void*)f_4475},
{"f_3196:csc_2escm",(void*)f_3196},
{"f_3677:csc_2escm",(void*)f_3677},
{"f_5122:csc_2escm",(void*)f_5122},
{"f_5290:csc_2escm",(void*)f_5290},
{"f_3693:csc_2escm",(void*)f_3693},
{"f_4103:csc_2escm",(void*)f_4103},
{"f_4105:csc_2escm",(void*)f_4105},
{"f_1963:csc_2escm",(void*)f_1963},
{"f_4495:csc_2escm",(void*)f_4495},
{"f_1526:csc_2escm",(void*)f_1526},
{"f_1998:csc_2escm",(void*)f_1998},
{"f_1991:csc_2escm",(void*)f_1991},
{"f_2897:csc_2escm",(void*)f_2897},
{"f_4777:csc_2escm",(void*)f_4777},
{"f_1522:csc_2escm",(void*)f_1522},
{"f_1995:csc_2escm",(void*)f_1995},
{"f_4774:csc_2escm",(void*)f_4774},
{"f_3697:csc_2escm",(void*)f_3697},
{"f_5147:csc_2escm",(void*)f_5147},
{"f_5273:csc_2escm",(void*)f_5273},
{"f_1512:csc_2escm",(void*)f_1512},
{"f_1515:csc_2escm",(void*)f_1515},
{"f_5280:csc_2escm",(void*)f_5280},
{"f_5300:csc_2escm",(void*)f_5300},
{"f_1584:csc_2escm",(void*)f_1584},
{"f_1588:csc_2escm",(void*)f_1588},
{"f_4975:csc_2escm",(void*)f_4975},
{"f_1824:csc_2escm",(void*)f_1824},
{"f_1828:csc_2escm",(void*)f_1828},
{"f_5310:csc_2escm",(void*)f_5310},
{"f_1576:csc_2escm",(void*)f_1576},
{"f_1574:csc_2escm",(void*)f_1574},
{"f_1570:csc_2escm",(void*)f_1570},
{"f_4906:csc_2escm",(void*)f_4906},
{"f_2345:csc_2escm",(void*)f_2345},
{"f_1813:csc_2escm",(void*)f_1813},
{"f_1817:csc_2escm",(void*)f_1817},
{"f_4902:csc_2escm",(void*)f_4902},
{"f_5320:csc_2escm",(void*)f_5320},
{"f_2082:csc_2escm",(void*)f_2082},
{"f_1562:csc_2escm",(void*)f_1562},
{"f_2850:csc_2escm",(void*)f_2850},
{"f_2854:csc_2escm",(void*)f_2854},
{"f_4914:csc_2escm",(void*)f_4914},
{"f_2357:csc_2escm",(void*)f_2357},
{"f_1801:csc_2escm",(void*)f_1801},
{"f_1809:csc_2escm",(void*)f_1809},
{"f_4910:csc_2escm",(void*)f_4910},
{"f_4165:csc_2escm",(void*)f_4165},
{"f_4168:csc_2escm",(void*)f_4168},
{"f_2050:csc_2escm",(void*)f_2050},
{"f_2059:csc_2escm",(void*)f_2059},
{"f_4162:csc_2escm",(void*)f_4162},
{"f_2056:csc_2escm",(void*)f_2056},
{"f_4926:csc_2escm",(void*)f_4926},
{"f_4929:csc_2escm",(void*)f_4929},
{"f_4920:csc_2escm",(void*)f_4920},
{"f_4923:csc_2escm",(void*)f_4923},
{"f_4171:csc_2escm",(void*)f_4171},
{"f_4935:csc_2escm",(void*)f_4935},
{"f_4938:csc_2escm",(void*)f_4938},
{"f_4932:csc_2escm",(void*)f_4932},
{"f_1867:csc_2escm",(void*)f_1867},
{"f_2071:csc_2escm",(void*)f_2071},
{"f_2078:csc_2escm",(void*)f_2078},
{"f_4182:csc_2escm",(void*)f_4182},
{"f_1851:csc_2escm",(void*)f_1851},
{"f_3135:csc_2escm",(void*)f_3135},
{"f_2043:csc_2escm",(void*)f_2043},
{"f_4192:csc_2escm",(void*)f_4192},
{"f_2040:csc_2escm",(void*)f_2040},
{"f_2816:csc_2escm",(void*)f_2816},
{"f_3705:csc_2escm",(void*)f_3705},
{"f_3701:csc_2escm",(void*)f_3701},
{"f_3709:csc_2escm",(void*)f_3709},
{"f_1844:csc_2escm",(void*)f_1844},
{"f_2016:csc_2escm",(void*)f_2016},
{"f_2010:csc_2escm",(void*)f_2010},
{"f_3090:csc_2escm",(void*)f_3090},
{"f_3150:csc_2escm",(void*)f_3150},
{"f_1509:csc_2escm",(void*)f_1509},
{"f_2062:csc_2escm",(void*)f_2062},
{"f_1506:csc_2escm",(void*)f_1506},
{"f_2833:csc_2escm",(void*)f_2833},
{"f_2068:csc_2escm",(void*)f_2068},
{"f_2065:csc_2escm",(void*)f_2065},
{"f_3081:csc_2escm",(void*)f_3081},
{"f_2910:csc_2escm",(void*)f_2910},
{"f_3726:csc_2escm",(void*)f_3726},
{"f_2914:csc_2escm",(void*)f_2914},
{"f_3720:csc_2escm",(void*)f_3720},
{"f_3038:csc_2escm",(void*)f_3038},
{"f_3728:csc_2escm",(void*)f_3728},
{"f_2034:csc_2escm",(void*)f_2034},
{"f_2037:csc_2escm",(void*)f_2037},
{"f_3031:csc_2escm",(void*)f_3031},
{"f_2031:csc_2escm",(void*)f_2031},
{"f_4982:csc_2escm",(void*)f_4982},
{"f_4988:csc_2escm",(void*)f_4988},
{"f_2001:csc_2escm",(void*)f_2001},
{"f_2004:csc_2escm",(void*)f_2004},
{"f_2935:csc_2escm",(void*)f_2935},
{"f_4993:csc_2escm",(void*)f_4993},
{"f_2118:csc_2escm",(void*)f_2118},
{"f_2111:csc_2escm",(void*)f_2111},
{"f_3051:csc_2escm",(void*)f_3051},
{"f_4605:csc_2escm",(void*)f_4605},
{"f_1874:csc_2escm",(void*)f_1874},
{"f_2028:csc_2escm",(void*)f_2028},
{"f_3041:csc_2escm",(void*)f_3041},
{"f_3044:csc_2escm",(void*)f_3044},
{"f_2953:csc_2escm",(void*)f_2953},
{"f_1530:csc_2escm",(void*)f_1530},
{"f_4949:csc_2escm",(void*)f_4949},
{"f_2922:csc_2escm",(void*)f_2922},
{"f_4944:csc_2escm",(void*)f_4944},
{"f_3753:csc_2escm",(void*)f_3753},
{"f_2381:csc_2escm",(void*)f_2381},
{"f_4941:csc_2escm",(void*)f_4941},
{"f_5360:csc_2escm",(void*)f_5360},
{"f_4620:csc_2escm",(void*)f_4620},
{"f_5364:csc_2escm",(void*)f_5364},
{"f_2108:csc_2escm",(void*)f_2108},
{"f_5368:csc_2escm",(void*)f_5368},
{"f_4957:csc_2escm",(void*)f_4957},
{"f_1474:csc_2escm",(void*)f_1474},
{"f_1471:csc_2escm",(void*)f_1471},
{"f_4425:csc_2escm",(void*)f_4425},
{"f_4428:csc_2escm",(void*)f_4428},
{"f_3010:csc_2escm",(void*)f_3010},
{"f_3013:csc_2escm",(void*)f_3013},
{"f_2949:csc_2escm",(void*)f_2949},
{"f_1465:csc_2escm",(void*)f_1465},
{"f_1462:csc_2escm",(void*)f_1462},
{"f_4439:csc_2escm",(void*)f_4439},
{"f_4435:csc_2escm",(void*)f_4435},
{"f_1468:csc_2escm",(void*)f_1468},
{"f_4431:csc_2escm",(void*)f_4431},
{"f_3310:csc_2escm",(void*)f_3310},
{"f_2993:csc_2escm",(void*)f_2993},
{"f_3315:csc_2escm",(void*)f_3315},
{"f_2990:csc_2escm",(void*)f_2990},
{"f_1453:csc_2escm",(void*)f_1453},
{"f_1456:csc_2escm",(void*)f_1456},
{"f_1450:csc_2escm",(void*)f_1450},
{"f_4690:csc_2escm",(void*)f_4690},
{"f_1459:csc_2escm",(void*)f_1459},
{"f_4441:csc_2escm",(void*)f_4441},
{"f_2883:csc_2escm",(void*)f_2883},
{"f_2961:csc_2escm",(void*)f_2961},
{"f_2965:csc_2escm",(void*)f_2965},
{"f_2192:csc_2escm",(void*)f_2192},
{"f_2875:csc_2escm",(void*)f_2875},
{"f_2871:csc_2escm",(void*)f_2871},
{"f_2183:csc_2escm",(void*)f_2183},
{"f_2186:csc_2escm",(void*)f_2186},
{"f_2671:csc_2escm",(void*)f_2671},
{"f_2189:csc_2escm",(void*)f_2189},
{"f_3373:csc_2escm",(void*)f_3373},
{"f_3378:csc_2escm",(void*)f_3378},
{"f_4302:csc_2escm",(void*)f_4302},
{"f_1592:csc_2escm",(void*)f_1592},
{"f_1596:csc_2escm",(void*)f_1596},
{"f_2603:csc_2escm",(void*)f_2603},
{"f_3360:csc_2escm",(void*)f_3360},
{"f_4647:csc_2escm",(void*)f_4647},
{"f_4318:csc_2escm",(void*)f_4318},
{"f_4310:csc_2escm",(void*)f_4310},
{"f_4643:csc_2escm",(void*)f_4643},
{"f_4130:csc_2escm",(void*)f_4130},
{"f_2614:csc_2escm",(void*)f_2614},
{"f_3219:csc_2escm",(void*)f_3219},
{"f_4613:csc_2escm",(void*)f_4613},
{"f_1447:csc_2escm",(void*)f_1447},
{"f_4159:csc_2escm",(void*)f_4159},
{"f_1444:csc_2escm",(void*)f_1444},
{"f_4156:csc_2escm",(void*)f_4156},
{"f_3332:csc_2escm",(void*)f_3332},
{"f_3236:csc_2escm",(void*)f_3236},
{"f_3238:csc_2escm",(void*)f_3238},
{"f_4635:csc_2escm",(void*)f_4635},
{"f_5338:csc_2escm",(void*)f_5338},
{"f_4633:csc_2escm",(void*)f_4633},
{"f_5334:csc_2escm",(void*)f_5334},
{"f_5330:csc_2escm",(void*)f_5330},
{"f_3321:csc_2escm",(void*)f_3321},
{"f_5346:csc_2escm",(void*)f_5346},
{"f_5342:csc_2escm",(void*)f_5342},
{"f_2651:csc_2escm",(void*)f_2651},
{"f_4365:csc_2escm",(void*)f_4365},
{"f_5356:csc_2escm",(void*)f_5356},
{"f_2661:csc_2escm",(void*)f_2661},
{"f_3277:csc_2escm",(void*)f_3277},
{"f_4375:csc_2escm",(void*)f_4375},
{"f_3346:csc_2escm",(void*)f_3346},
{"f6072:csc_2escm",(void*)f6072},
{"f_3263:csc_2escm",(void*)f_3263},
{"f_4385:csc_2escm",(void*)f_4385},
{"f_4388:csc_2escm",(void*)f_4388},
{"f_2156:csc_2escm",(void*)f_2156},
{"f_4395:csc_2escm",(void*)f_4395},
{"f_3777:csc_2escm",(void*)f_3777},
{"f6054:csc_2escm",(void*)f6054},
{"f6050:csc_2escm",(void*)f6050},
{"f_3281:csc_2escm",(void*)f_3281},
{"f_3298:csc_2escm",(void*)f_3298},
{"f_2149:csc_2escm",(void*)f_2149},
{"f_2146:csc_2escm",(void*)f_2146},
{"f_2630:csc_2escm",(void*)f_2630},
{"f_2701:csc_2escm",(void*)f_2701},
{"f_4688:csc_2escm",(void*)f_4688},
{"f_2711:csc_2escm",(void*)f_2711},
{"f_4684:csc_2escm",(void*)f_4684},
{"f_4680:csc_2escm",(void*)f_4680},
{"f_1496:csc_2escm",(void*)f_1496},
{"f_1499:csc_2escm",(void*)f_1499},
{"f_4670:csc_2escm",(void*)f_4670},
{"f_4809:csc_2escm",(void*)f_4809},
{"f_4803:csc_2escm",(void*)f_4803},
{"f_4806:csc_2escm",(void*)f_4806},
{"f_3397:csc_2escm",(void*)f_3397},
{"f_4829:csc_2escm",(void*)f_4829},
{"f_4825:csc_2escm",(void*)f_4825},
{"f_2721:csc_2escm",(void*)f_2721},
{"f_5080:csc_2escm",(void*)f_5080},
{"f_5088:csc_2escm",(void*)f_5088},
{"f_2731:csc_2escm",(void*)f_2731},
{"f_5054:csc_2escm",(void*)f_5054},
{"f_5058:csc_2escm",(void*)f_5058},
{"f_2741:csc_2escm",(void*)f_2741},
{"f_3816:csc_2escm",(void*)f_3816},
{"f_2681:csc_2escm",(void*)f_2681},
{"f_5061:csc_2escm",(void*)f_5061},
{"f_2758:csc_2escm",(void*)f_2758},
{"f_3806:csc_2escm",(void*)f_3806},
{"f_2691:csc_2escm",(void*)f_2691},
{"f6032:csc_2escm",(void*)f6032},
{"f_4326:csc_2escm",(void*)f_4326},
{"f_4322:csc_2escm",(void*)f_4322},
{"f_5044:csc_2escm",(void*)f_5044},
{"f6020:csc_2escm",(void*)f6020},
{"f6024:csc_2escm",(void*)f6024},
{"f_4335:csc_2escm",(void*)f_4335},
{"f_4338:csc_2escm",(void*)f_4338},
{"f6028:csc_2escm",(void*)f6028},
{"f_4331:csc_2escm",(void*)f_4331},
{"f_4837:csc_2escm",(void*)f_4837},
{"f_5019:csc_2escm",(void*)f_5019},
{"f_4346:csc_2escm",(void*)f_4346},
{"f_4845:csc_2escm",(void*)f_4845},
{"f_4061:csc_2escm",(void*)f_4061},
{"f_4342:csc_2escm",(void*)f_4342},
{"f_4861:csc_2escm",(void*)f_4861},
{"f_5029:csc_2escm",(void*)f_5029},
{"f_5022:csc_2escm",(void*)f_5022},
{"f_4054:csc_2escm",(void*)f_4054},
{"f_5025:csc_2escm",(void*)f_5025},
{"f_4355:csc_2escm",(void*)f_4355},
{"f_4352:csc_2escm",(void*)f_4352},
{"f_4859:csc_2escm",(void*)f_4859},
{"f_4501:csc_2escm",(void*)f_4501},
{"f_4063:csc_2escm",(void*)f_4063},
{"f_5077:csc_2escm",(void*)f_5077},
{"f_2404:csc_2escm",(void*)f_2404},
{"f_2407:csc_2escm",(void*)f_2407},
{"f_4865:csc_2escm",(void*)f_4865},
{"f_3869:csc_2escm",(void*)f_3869},
{"f_4800:csc_2escm",(void*)f_4800},
{"f_5001:csc_2escm",(void*)f_5001},
{"f_4073:csc_2escm",(void*)f_4073},
{"f_4010:csc_2escm",(void*)f_4010},
{"f_2419:csc_2escm",(void*)f_2419},
{"f_3865:csc_2escm",(void*)f_3865},
{"f_4086:csc_2escm",(void*)f_4086},
{"f_4012:csc_2escm",(void*)f_4012},
{"f_3413:csc_2escm",(void*)f_3413},
{"f_3838:csc_2escm",(void*)f_3838},
{"f_3409:csc_2escm",(void*)f_3409},
{"f_5037:csc_2escm",(void*)f_5037},
{"f_5033:csc_2escm",(void*)f_5033},
{"f_4022:csc_2escm",(void*)f_4022},
{"f_3831:csc_2escm",(void*)f_3831},
{"f_3835:csc_2escm",(void*)f_3835},
{"f_4039:csc_2escm",(void*)f_4039},
{"f_4036:csc_2escm",(void*)f_4036},
{"f_4564:csc_2escm",(void*)f_4564},
{"f_4042:csc_2escm",(void*)f_4042},
{"f_2782:csc_2escm",(void*)f_2782},
{"f6092:csc_2escm",(void*)f6092},
{"f_3853:csc_2escm",(void*)f_3853},
{"f6097:csc_2escm",(void*)f6097},
{"f_2799:csc_2escm",(void*)f_2799},
{"f_3841:csc_2escm",(void*)f_3841},
{"f_4206:csc_2escm",(void*)f_4206},
{"f_4209:csc_2escm",(void*)f_4209},
{"f_4529:csc_2escm",(void*)f_4529},
{"f_4890:csc_2escm",(void*)f_4890},
{"f_4536:csc_2escm",(void*)f_4536},
{"f_3466:csc_2escm",(void*)f_3466},
{"f_4884:csc_2escm",(void*)f_4884},
{"f_2512:csc_2escm",(void*)f_2512},
{"f_2519:csc_2escm",(void*)f_2519},
{"f_2516:csc_2escm",(void*)f_2516},
{"f_4899:csc_2escm",(void*)f_4899},
{"f_4896:csc_2escm",(void*)f_4896},
{"f_4893:csc_2escm",(void*)f_4893},
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
S|  for-each		6
S|  sprintf		5
S|  printf		2
S|  map		7
S|  fprintf		1
o|eliminated procedure checks: 108 
o|specializations:
o|  2 (zero? fixnum)
o|  1 (= fixnum fixnum)
o|  6 (char=? char char)
o|  6 (string-ref string fixnum)
o|  4 (string=? string string)
o|  4 (> fixnum fixnum)
o|  4 (string-length string)
o|  68 (eqv? (not float) *)
o|  4 (cdr pair)
o|  3 (##sys#check-list (or pair list) *)
o|  8 (string-append string string)
o|  8 (##sys#check-output-port * * *)
o|  1 (current-error-port)
o|  4 (memq * list)
(o e)|safe calls: 547 
(o e)|assignments to immediate values: 20 
o|safe globals: (windows-shell) 
o|Removed `not' forms: 5 
o|substituted constant variable: a1497 
o|merged explicitly consed rest parameter: args8 
o|propagated global variable: out913 ##sys#standard-error 
o|substituted constant variable: a1502 
o|substituted constant variable: a1503 
o|inlining procedure: k1542 
o|inlining procedure: k1542 
o|contracted procedure: "(csc.scm:98) back-slash->forward-slash" 
o|inlining procedure: k1555 
o|inlining procedure: k1555 
o|substituted constant variable: default-translation-optimization-options 
o|inlining procedure: k4107 
o|inlining procedure: k4107 
o|inlining procedure: k4139 
o|inlining procedure: k4139 
o|substituted constant variable: nonstatic-compilation-options 
o|propagated global variable: r41405377 nonstatic-compilation-options 
o|propagated global variable: tmp672674 static 
o|propagated global variable: tmp672674 static 
o|inlining procedure: k4481 
o|inlining procedure: k4481 
o|substituted constant variable: a4566 
o|substituted constant variable: a4567 
o|inlining procedure: k4601 
o|inlining procedure: k4601 
o|inlining procedure: k4615 
o|inlining procedure: k4615 
o|contracted procedure: k4624 
o|propagated global variable: r4625 mingw 
o|inlining procedure: k4621 
o|inlining procedure: k4621 
o|inlining procedure: k4649 
o|inlining procedure: k4649 
o|propagated global variable: tmp830832 static 
o|propagated global variable: tmp830832 static 
o|propagated global variable: tmp827829 static 
o|inlining procedure: k4661 
o|propagated global variable: tmp827829 static 
o|inlining procedure: k4661 
o|propagated global variable: r46625398 static-libs 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|contracted procedure: "(csc.scm:1048) cleanup" 
o|inlining procedure: k4671 
o|inlining procedure: k4671 
o|inlining procedure: k4692 
o|inlining procedure: k4692 
o|inlining procedure: k4756 
o|inlining procedure: k4756 
o|inlining procedure: k4847 
o|inlining procedure: k4847 
o|contracted procedure: "(csc.scm:1070) $system" 
o|inlining procedure: k4785 
o|inlining procedure: k4785 
o|propagated global variable: out884888 ##sys#standard-output 
o|substituted constant variable: a4796 
o|substituted constant variable: a4797 
o|propagated global variable: out884888 ##sys#standard-output 
o|inlining procedure: k4826 
o|inlining procedure: k4826 
o|inlining procedure: k4866 
o|inlining procedure: k4866 
o|contracted procedure: "(csc.scm:1144) run" 
o|merged explicitly consed rest parameter: os243 
o|merged explicitly consed rest parameter: n246 
o|inlining procedure: k1916 
o|inlining procedure: k1916 
o|consed rest parameter at call site: "(csc.scm:526) stop" 2 
o|inlining procedure: k1930 
o|inlining procedure: k1930 
o|inlining procedure: k1956 
o|inlining procedure: k1956 
o|inlining procedure: k1969 
o|inlining procedure: k1969 
o|inlining procedure: k1982 
o|inlining procedure: k2011 
o|inlining procedure: k2011 
o|contracted procedure: "(csc.scm:588) run-linking" 
o|inlining procedure: k4172 
o|inlining procedure: k4172 
o|inlining procedure: k4184 
o|inlining procedure: k4184 
o|propagated global variable: g771773 generated-object-files 
o|inlining procedure: k4210 
o|contracted procedure: "(csc.scm:966) create-mac-bundle" 
o|inlining procedure: k4936 
o|inlining procedure: k4936 
o|inlining procedure: k4210 
o|contracted procedure: "(csc.scm:961) copy-libraries" 
o|inlining procedure: k4538 
o|inlining procedure: k4538 
o|substituted constant variable: a4550 
o|contracted procedure: "(csc.scm:989) target-lib-path" 
o|inlining procedure: k4496 
o|inlining procedure: k4496 
o|contracted procedure: k4511 
o|inlining procedure: k4514 
o|inlining procedure: k4514 
o|propagated global variable: tmp756758 static 
o|inlining procedure: k4237 
o|propagated global variable: tmp756758 static 
o|inlining procedure: k4237 
o|propagated global variable: r42385454 static-libs 
o|inlining procedure: k4246 
o|contracted procedure: "(csc.scm:959) rez" 
o|substituted constant variable: a4886 
o|substituted constant variable: a4887 
o|inlining procedure: k4246 
o|inlining procedure: k4274 
o|inlining procedure: k4274 
o|substituted constant variable: a4288 
o|inlining procedure: k4292 
o|inlining procedure: k4292 
o|propagated global variable: r42935463 host-mode 
o|substituted constant variable: link-output-flag 
o|inlining procedure: k4347 
o|inlining procedure: k4347 
o|inlining procedure: k4363 
o|inlining procedure: k4363 
o|substituted constant variable: a4397 
o|substituted constant variable: a4398 
o|substituted constant variable: a4421 
o|substituted constant variable: a4422 
o|inlining procedure: k4443 
o|inlining procedure: k4443 
o|propagated global variable: g698702 object-files 
o|propagated global variable: out280284 ##sys#standard-output 
o|substituted constant variable: a2024 
o|substituted constant variable: a2025 
o|substituted constant variable: a2052 
o|substituted constant variable: a2053 
o|inlining procedure: k2091 
o|inlining procedure: k2091 
o|propagated global variable: out280284 ##sys#standard-output 
o|contracted procedure: "(csc.scm:577) run-compilation" 
o|substituted constant variable: compile-only-flag 
o|inlining procedure: k3878 
o|inlining procedure: k3878 
o|substituted constant variable: compile-output-flag 
o|consed rest parameter at call site: "(csc.scm:869) stop" 2 
o|inlining procedure: k3946 
o|inlining procedure: k3946 
o|inlining procedure: k3964 
o|inlining procedure: k3964 
o|propagated global variable: g639641 generated-rc-files 
o|inlining procedure: k3987 
o|inlining procedure: k3987 
o|propagated global variable: g622624 generated-c-files 
o|inlining procedure: k4014 
o|inlining procedure: k4014 
o|propagated global variable: g601603 rc-files 
o|contracted procedure: "(csc.scm:887) create-win-manifest" 
o|inlining procedure: k4065 
o|inlining procedure: k4065 
o|propagated global variable: g571573 c-files 
o|inlining procedure: k2112 
o|inlining procedure: k2112 
o|inlining procedure: k2126 
o|propagated global variable: r21275490 object-files 
o|inlining procedure: k2126 
o|propagated global variable: r21275492 c-files 
o|consed rest parameter at call site: "(csc.scm:558) stop" 2 
o|contracted procedure: "(csc.scm:573) run-translation" 
o|inlining procedure: k3808 
o|contracted procedure: "(csc.scm:823) g505512" 
o|inlining procedure: k3730 
o|inlining procedure: k3730 
o|inlining procedure: k3762 
o|inlining procedure: k3762 
o|consed rest parameter at call site: "(csc.scm:835) stop" 2 
o|inlining procedure: k3785 
o|inlining procedure: k3785 
o|substituted constant variable: a3794 
o|inlining procedure: k3808 
o|propagated global variable: g511513 scheme-files 
o|inlining procedure: k2154 
o|inlining procedure: k2154 
o|contracted procedure: "(csc.scm:547) builtin-link-options" 
o|inlining procedure: k1736 
o|contracted procedure: "(csc.scm:288) g188189" 
o|inlining procedure: k1758 
o|contracted procedure: "(csc.scm:289) g199208" 
o|inlining procedure: k1758 
o|inlining procedure: k1736 
o|substituted constant variable: a1802 
o|inlining procedure: k1815 
o|inlining procedure: k1815 
o|inlining procedure: k1826 
o|inlining procedure: k1826 
o|inlining procedure: k1835 
o|inlining procedure: k1835 
o|inlining procedure: k1982 
o|contracted procedure: "(csc.scm:595) usage" 
o|inlining procedure: k2246 
o|inlining procedure: k2246 
o|inlining procedure: k2278 
o|inlining procedure: k2278 
o|inlining procedure: k2299 
o|inlining procedure: k2299 
o|inlining procedure: k2321 
o|inlining procedure: k2321 
o|inlining procedure: k2337 
o|inlining procedure: k2337 
o|inlining procedure: k2361 
o|inlining procedure: k2361 
o|inlining procedure: k2385 
o|inlining procedure: k2385 
o|inlining procedure: k2408 
o|inlining procedure: k2408 
o|consed rest parameter at call site: "(csc.scm:633) t-options239" 1 
o|inlining procedure: k2424 
o|consed rest parameter at call site: "(csc.scm:639) t-options239" 1 
o|inlining procedure: k2424 
o|consed rest parameter at call site: "(csc.scm:642) t-options239" 1 
o|inlining procedure: k2453 
o|consed rest parameter at call site: "(csc.scm:645) t-options239" 1 
o|inlining procedure: k2453 
o|inlining procedure: k2473 
o|inlining procedure: k2473 
o|inlining procedure: k2487 
o|inlining procedure: k2487 
o|consed rest parameter at call site: "(csc.scm:655) t-options239" 1 
o|consed rest parameter at call site: "(csc.scm:653) check240" 3 
o|inlining procedure: k2534 
o|inlining procedure: k2534 
o|inlining procedure: k2550 
o|inlining procedure: k2550 
o|inlining procedure: k2588 
o|inlining procedure: k2588 
o|consed rest parameter at call site: "(csc.scm:679) check240" 3 
o|inlining procedure: k2619 
o|consed rest parameter at call site: "(csc.scm:684) check240" 3 
o|inlining procedure: k2619 
o|inlining procedure: k2652 
o|inlining procedure: k2652 
o|inlining procedure: k2672 
o|inlining procedure: k2672 
o|inlining procedure: k2692 
o|inlining procedure: k2692 
o|inlining procedure: k2712 
o|inlining procedure: k2712 
o|inlining procedure: k2732 
o|inlining procedure: k2732 
o|inlining procedure: k2750 
o|inlining procedure: k2750 
o|inlining procedure: k2774 
o|consed rest parameter at call site: "(csc.scm:707) check240" 3 
o|inlining procedure: k2774 
o|consed rest parameter at call site: "(csc.scm:711) check240" 3 
o|inlining procedure: k2808 
o|consed rest parameter at call site: "(csc.scm:715) check240" 3 
o|inlining procedure: k2808 
o|consed rest parameter at call site: "(csc.scm:719) check240" 3 
o|inlining procedure: k2842 
o|consed rest parameter at call site: "(csc.scm:723) check240" 3 
o|inlining procedure: k2842 
o|consed rest parameter at call site: "(csc.scm:726) check240" 3 
o|inlining procedure: k2888 
o|inlining procedure: k2888 
o|consed rest parameter at call site: "(csc.scm:732) check240" 3 
o|inlining procedure: k2927 
o|substituted constant variable: a2966 
o|contracted procedure: k2970 
o|propagated global variable: r2971 mingw 
o|inlining procedure: k2967 
o|inlining procedure: k2967 
o|consed rest parameter at call site: "(csc.scm:736) check240" 3 
o|inlining procedure: k2927 
o|inlining procedure: k2982 
o|consed rest parameter at call site: "(csc.scm:745) t-options239" 1 
o|consed rest parameter at call site: "(csc.scm:744) check240" 3 
o|inlining procedure: k2982 
o|consed rest parameter at call site: "(csc.scm:749) t-options239" 1 
o|consed rest parameter at call site: "(csc.scm:748) check240" 3 
o|inlining procedure: k3022 
o|inlining procedure: k3022 
o|inlining procedure: k3064 
o|consed rest parameter at call site: "(csc.scm:763) t-options239" 1 
o|inlining procedure: k3064 
o|consed rest parameter at call site: "(csc.scm:768) t-options239" 1 
o|consed rest parameter at call site: "(csc.scm:765) check240" 3 
o|inlining procedure: k3095 
o|consed rest parameter at call site: "(csc.scm:771) t-options239" 1 
o|inlining procedure: k3095 
o|substituted constant variable: a3116 
o|substituted constant variable: a3113 
o|inlining procedure: k3110 
o|inlining procedure: k3110 
o|substituted constant variable: a3131 
o|substituted constant variable: a3128 
o|substituted constant variable: a3146 
o|substituted constant variable: a3143 
o|inlining procedure: k3140 
o|inlining procedure: k3140 
o|substituted constant variable: a3161 
o|substituted constant variable: a3158 
o|consed rest parameter at call site: "(csc.scm:781) t-options239" 1 
o|substituted constant variable: a3175 
o|substituted constant variable: a3172 
o|inlining procedure: k3169 
o|inlining procedure: k3169 
o|inlining procedure: k3201 
o|inlining procedure: k3240 
o|contracted procedure: "(csc.scm:791) g451460" 
o|substituted constant variable: a3229 
o|inlining procedure: k3240 
o|consed rest parameter at call site: "(csc.scm:792) stop" 2 
o|inlining procedure: k3201 
o|consed rest parameter at call site: "(csc.scm:793) stop" 2 
o|substituted constant variable: a3289 
o|substituted constant variable: a3294 
o|substituted constant variable: a3303 
o|inlining procedure: k3305 
o|contracted procedure: k3326 
o|inlining procedure: k3323 
o|inlining procedure: k3351 
o|inlining procedure: k3351 
o|inlining procedure: k3387 
o|inlining procedure: k3387 
o|inlining procedure: k3323 
o|inlining procedure: k3305 
o|consed rest parameter at call site: "(csc.scm:817) stop" 2 
o|substituted constant variable: a3445 
o|substituted constant variable: a3452 
o|substituted constant variable: a3449 
o|substituted constant variable: a3457 
o|substituted constant variable: a3462 
o|substituted constant variable: a3471 
o|substituted constant variable: constant64 
o|substituted constant variable: constant61 
o|substituted constant variable: constant68 
o|substituted constant variable: a3474 
o|substituted constant variable: a3483 
o|substituted constant variable: a3485 
o|substituted constant variable: a3487 
o|substituted constant variable: a3489 
o|substituted constant variable: a3491 
o|substituted constant variable: a3493 
o|substituted constant variable: a3495 
o|substituted constant variable: a3497 
o|substituted constant variable: a3499 
o|substituted constant variable: a3501 
o|substituted constant variable: a3503 
o|substituted constant variable: a3505 
o|substituted constant variable: a3507 
o|substituted constant variable: a3512 
o|substituted constant variable: a3514 
o|inlining procedure: k3518 
o|inlining procedure: k3518 
o|substituted constant variable: a3525 
o|substituted constant variable: a3527 
o|substituted constant variable: a3529 
o|substituted constant variable: a3531 
o|substituted constant variable: a3533 
o|substituted constant variable: a3535 
o|substituted constant variable: a3537 
o|substituted constant variable: a3539 
o|substituted constant variable: a3541 
o|substituted constant variable: a3543 
o|substituted constant variable: a3545 
o|substituted constant variable: a3547 
o|substituted constant variable: a3549 
o|substituted constant variable: a3554 
o|substituted constant variable: a3556 
o|substituted constant variable: a3561 
o|substituted constant variable: a3563 
o|substituted constant variable: a3565 
o|substituted constant variable: a3567 
o|substituted constant variable: a3569 
o|substituted constant variable: a3571 
o|substituted constant variable: a3573 
o|substituted constant variable: a3575 
o|substituted constant variable: a3580 
o|substituted constant variable: a3582 
o|substituted constant variable: a3587 
o|substituted constant variable: a3589 
o|substituted constant variable: a3591 
o|substituted constant variable: a3593 
o|substituted constant variable: a3595 
o|substituted constant variable: a3600 
o|substituted constant variable: a3602 
o|substituted constant variable: a3607 
o|substituted constant variable: a3609 
o|substituted constant variable: a3614 
o|substituted constant variable: a3616 
o|substituted constant variable: a3621 
o|substituted constant variable: a3623 
o|substituted constant variable: a3625 
o|substituted constant variable: a3627 
o|substituted constant variable: a3629 
o|substituted constant variable: a3631 
o|substituted constant variable: a3633 
o|substituted constant variable: a3635 
o|substituted constant variable: a3637 
o|substituted constant variable: a3639 
o|substituted constant variable: a3641 
o|substituted constant variable: a3643 
o|substituted constant variable: a3645 
o|substituted constant variable: a3647 
o|substituted constant variable: a3649 
o|substituted constant variable: a3654 
o|substituted constant variable: a3656 
o|inlining procedure: k5038 
o|inlining procedure: k5038 
o|inlining procedure: k5042 
o|inlining procedure: k5042 
o|inlining procedure: k5059 
o|contracted procedure: "(csc.scm:250) g108109" 
o|inlining procedure: k5090 
o|contracted procedure: "(csc.scm:251) g119128" 
o|inlining procedure: k5090 
o|inlining procedure: k5124 
o|inlining procedure: k5124 
o|inlining procedure: k5059 
o|contracted procedure: k5165 
o|inlining procedure: k5177 
o|inlining procedure: k5177 
o|inlining procedure: k5191 
o|inlining procedure: k5191 
o|substituted constant variable: a5216 
o|folded constant expression: (string->list (quote "PHhsfiENxubvwAOeWkctgSJM")) 
o|inlining procedure: k5244 
o|inlining procedure: k5244 
o|inlining procedure: k5254 
o|inlining procedure: k5254 
o|inlining procedure: k5274 
o|inlining procedure: k5274 
o|propagated global variable: r52755646 cygwin 
o|inlining procedure: k5278 
o|inlining procedure: k5278 
o|inlining procedure: k5288 
o|inlining procedure: k5288 
o|inlining procedure: k5298 
o|inlining procedure: k5298 
o|inlining procedure: k5308 
o|inlining procedure: k5308 
o|inlining procedure: k5318 
o|inlining procedure: k5318 
o|inlining procedure: k5344 
o|inlining procedure: k5344 
o|simplifications: ((if . 2)) 
o|replaced variables: 738 
o|removed binding forms: 344 
o|propagated global variable: out913 ##sys#standard-error 
o|removed side-effect free assignment to unused variable: link-output-flag 
o|removed side-effect free assignment to unused variable: compile-output-flag 
o|removed side-effect free assignment to unused variable: default-translation-optimization-options 
o|removed side-effect free assignment to unused variable: constant61 
o|removed side-effect free assignment to unused variable: constant64 
o|removed side-effect free assignment to unused variable: constant68 
o|contracted procedure: k1656 
o|removed side-effect free assignment to unused variable: compile-only-flag 
o|substituted constant variable: r41405375 
o|substituted constant variable: r41405375 
o|substituted constant variable: nonstatic-compilation-options 
o|substituted constant variable: nonstatic-compilation-options 
o|substituted constant variable: r46025383 
o|substituted constant variable: r46025383 
o|substituted constant variable: r46025385 
o|substituted constant variable: r46025385 
o|substituted constant variable: r46165387 
o|substituted constant variable: r46165387 
o|substituted constant variable: r46165389 
o|substituted constant variable: r46165389 
o|substituted constant variable: r46225391 
o|propagated global variable: r46625397 static 
o|substituted constant variable: r46935403 
o|substituted constant variable: r47865409 
o|substituted constant variable: r47865412 
o|propagated global variable: out884888 ##sys#standard-output 
o|substituted constant variable: r19315421 
o|substituted constant variable: r19315421 
o|inlining procedure: k1956 
o|inlining procedure: k1956 
o|substituted constant variable: r19575427 
o|substituted constant variable: r19575427 
o|substituted constant variable: r45395444 
o|substituted constant variable: r45395444 
o|inlining procedure: k4538 
o|substituted constant variable: r45155451 
o|propagated global variable: r42385452 static 
o|propagated global variable: a42365455 static-libs 
o|substituted constant variable: a4327 
o|inlining procedure: k4353 
o|propagated global variable: out280284 ##sys#standard-output 
o|substituted constant variable: r20925472 
o|substituted constant variable: r20925472 
o|substituted constant variable: r20925474 
o|substituted constant variable: r20925474 
o|substituted constant variable: r38795477 
o|substituted constant variable: a3884 
o|propagated global variable: a21255491 object-files 
o|propagated global variable: a21255493 c-files 
o|substituted constant variable: r37635497 
o|substituted constant variable: r37635497 
o|inlining procedure: k3762 
o|inlining procedure: k3762 
o|substituted constant variable: r37865501 
o|substituted constant variable: r37865501 
o|inlining procedure: k3785 
o|inlining procedure: k3785 
o|substituted constant variable: r17375514 
o|substituted constant variable: r17375514 
o|substituted constant variable: r18165516 
o|substituted constant variable: r18165516 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|substituted constant variable: r29685580 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|substituted constant variable: r50395615 
o|substituted constant variable: r50395615 
o|substituted constant variable: r50605627 
o|substituted constant variable: r50605627 
o|replaced variables: 36 
o|removed binding forms: 787 
o|removed conditional forms: 1 
o|removed side-effect free assignment to unused variable: nonstatic-compilation-options 
o|substituted constant variable: r1657 
o|inlining procedure: k4587 
o|propagated global variable: r45886018 quotewrap-no-slash-trans 
o|inlining procedure: k4587 
o|propagated global variable: r45886022 quotewrap 
o|inlining procedure: k4594 
o|propagated global variable: r45956026 quotewrap-no-slash-trans 
o|inlining procedure: k4594 
o|propagated global variable: r45956030 quotewrap 
o|inlining procedure: k4652 
o|propagated global variable: r46536034 static 
o|inlining procedure: k4652 
o|propagated global variable: r46536035 static-libs 
o|inlining procedure: k4863 
o|inlining procedure: k4505 
o|inlining procedure: k4505 
o|inlining procedure: k4227 
o|propagated global variable: r42286044 gui 
o|inlining procedure: k4227 
o|propagated global variable: r42385452 static 
o|inlining procedure: k2084 
o|propagated global variable: r20856048 quotewrap-no-slash-trans 
o|inlining procedure: k2084 
o|propagated global variable: r20856052 quotewrap 
o|inlining procedure: k2094 
o|inlining procedure: k2132 
o|inlining procedure: k2187 
o|inlining procedure: k1792 
o|inlining procedure: k1792 
o|replaced variables: 15 
o|removed binding forms: 207 
o|Removed `not' forms: 2 
o|inlining procedure: k1568 
o|inlining procedure: "(csc.scm:1000) quotewrap-no-slash-trans" 
o|inlining procedure: "(csc.scm:1000) quotewrap-no-slash-trans" 
o|substituted constant variable: r19575677 
o|substituted constant variable: r19575679 
o|substituted constant variable: r45395685 
o|substituted constant variable: r45066042 
o|contracted procedure: k4505 
o|propagated global variable: r4506 host-mode 
o|substituted constant variable: r45066043 
o|substituted constant variable: r42286045 
o|inlining procedure: "(csc.scm:583) quotewrap-no-slash-trans" 
o|propagated global variable: str326106 target-filename 
o|contracted procedure: k2094 
o|propagated global variable: r2095 shared 
o|substituted constant variable: r20956064 
o|substituted constant variable: r21336065 
o|substituted constant variable: r37635706 
o|substituted constant variable: r37635708 
o|substituted constant variable: r37865710 
o|substituted constant variable: r37865712 
o|substituted constant variable: r17936077 
o|substituted constant variable: short-options 
o|simplifications: ((if . 1) (let . 1)) 
o|replaced variables: 3 
o|removed binding forms: 24 
o|removed conditional forms: 6 
o|removed side-effect free assignment to unused variable: short-options 
o|replaced variables: 3 
o|removed binding forms: 14 
o|removed binding forms: 2 
o|simplifications: ((if . 35) (##core#call . 314)) 
o|  call simplifications:
o|    assq
o|    ##sys#call-with-values
o|    string-ci=?
o|    ##sys#size	4
o|    fx>	4
o|    string
o|    string->number
o|    cadr
o|    cdr	14
o|    number?
o|    first	2
o|    ##sys#list
o|    ##sys#fudge	2
o|    member	8
o|    string=?	2
o|    length	2
o|    >=	2
o|    eq?	77
o|    zero?
o|    char=?
o|    string->list	2
o|    null?	8
o|    car	18
o|    memq	4
o|    char-whitespace?	2
o|    list->string
o|    not	7
o|    ##sys#check-list	10
o|    pair?	13
o|    cons	49
o|    ##sys#setslot	7
o|    ##sys#slot	33
o|    list	32
o|    ##sys#apply
o|contracted procedure: k1477 
o|contracted procedure: k1481 
o|contracted procedure: k1485 
o|contracted procedure: k1489 
o|contracted procedure: k1532 
o|contracted procedure: k1536 
o|contracted procedure: k1549 
o|contracted procedure: k1687 
o|contracted procedure: k1691 
o|contracted procedure: k5169 
o|contracted procedure: k1701 
o|contracted procedure: k4092 
o|contracted procedure: k4098 
o|contracted procedure: k4110 
o|contracted procedure: k4113 
o|contracted procedure: k4116 
o|contracted procedure: k4124 
o|contracted procedure: k4132 
o|contracted procedure: k4142 
o|inlining procedure: k4649 
o|inlining procedure: k4649 
o|contracted procedure: k4695 
o|contracted procedure: k4698 
o|contracted procedure: k4704 
o|contracted procedure: k4728 
o|contracted procedure: k4753 
o|contracted procedure: k4850 
o|contracted procedure: k4788 
o|contracted procedure: k4792 
o|contracted procedure: k1926 
o|contracted procedure: k1933 
o|inlining procedure: k1919 
o|contracted procedure: k1930 
o|inlining procedure: k1919 
o|contracted procedure: k1951 
o|contracted procedure: k1966 
o|contracted procedure: k1973 
o|contracted procedure: k1985 
o|contracted procedure: k4148 
o|contracted procedure: k4151 
o|contracted procedure: k4175 
o|contracted procedure: k4187 
o|contracted procedure: k4197 
o|contracted procedure: k4201 
o|propagated global variable: g771773 generated-object-files 
o|contracted procedure: k4213 
o|contracted procedure: k4967 
o|contracted procedure: k4963 
o|contracted procedure: k4959 
o|contracted procedure: k4544 
o|contracted procedure: k4521 
o|contracted procedure: k4249 
o|contracted procedure: k4289 
o|contracted procedure: k4304 
o|contracted procedure: k4312 
o|contracted procedure: k4366 
o|contracted procedure: k4379 
o|contracted procedure: k4446 
o|contracted procedure: k4449 
o|contracted procedure: k4452 
o|contracted procedure: k4460 
o|contracted procedure: k4468 
o|propagated global variable: g698702 object-files 
o|contracted procedure: k2020 
o|contracted procedure: k2073 
o|contracted procedure: k3843 
o|contracted procedure: k3847 
o|contracted procedure: k3859 
o|contracted procedure: k3855 
o|contracted procedure: k3878 
o|contracted procedure: k3889 
o|contracted procedure: k3895 
o|contracted procedure: k3913 
o|contracted procedure: k3917 
o|contracted procedure: k3925 
o|contracted procedure: k3936 
o|contracted procedure: k3949 
o|contracted procedure: k3955 
o|contracted procedure: k3967 
o|contracted procedure: k3977 
o|contracted procedure: k3981 
o|propagated global variable: g639641 generated-rc-files 
o|contracted procedure: k3990 
o|contracted procedure: k4000 
o|contracted procedure: k4004 
o|propagated global variable: g622624 generated-c-files 
o|contracted procedure: k4017 
o|contracted procedure: k4027 
o|contracted procedure: k4031 
o|propagated global variable: g601603 rc-files 
o|contracted procedure: k4044 
o|contracted procedure: k4048 
o|contracted procedure: k5011 
o|contracted procedure: k5007 
o|contracted procedure: k5003 
o|contracted procedure: k4068 
o|contracted procedure: k4078 
o|contracted procedure: k4082 
o|propagated global variable: g571573 c-files 
o|contracted procedure: k2103 
o|contracted procedure: k2129 
o|contracted procedure: k2138 
o|contracted procedure: k2132 
o|contracted procedure: k3799 
o|contracted procedure: k3811 
o|contracted procedure: k3821 
o|contracted procedure: k3825 
o|contracted procedure: k3796 
o|contracted procedure: k3791 
o|contracted procedure: k3662 
o|contracted procedure: k3683 
o|contracted procedure: k3687 
o|contracted procedure: k3768 
o|contracted procedure: k3711 
o|contracted procedure: k3715 
o|contracted procedure: k3721 
o|contracted procedure: k3733 
o|contracted procedure: k3736 
o|contracted procedure: k3739 
o|contracted procedure: k3747 
o|contracted procedure: k3755 
o|contracted procedure: k3778 
o|propagated global variable: g511513 scheme-files 
o|contracted procedure: k2161 
o|contracted procedure: k2168 
o|contracted procedure: k2171 
o|contracted procedure: k2175 
o|contracted procedure: k1741 
o|contracted procedure: k1761 
o|contracted procedure: k1764 
o|contracted procedure: k1767 
o|contracted procedure: k1775 
o|contracted procedure: k1783 
o|contracted procedure: k2221 
o|contracted procedure: k2234 
o|contracted procedure: k2237 
o|contracted procedure: k1900 
o|contracted procedure: k1896 
o|contracted procedure: k1892 
o|contracted procedure: k1888 
o|contracted procedure: k1884 
o|contracted procedure: k1880 
o|contracted procedure: k1876 
o|contracted procedure: k2249 
o|contracted procedure: k2265 
o|contracted procedure: k2281 
o|contracted procedure: k2289 
o|contracted procedure: k2295 
o|contracted procedure: k2302 
o|contracted procedure: k2313 
o|contracted procedure: k2324 
o|contracted procedure: k2332 
o|contracted procedure: k2340 
o|contracted procedure: k2352 
o|contracted procedure: k2364 
o|contracted procedure: k2376 
o|contracted procedure: k2388 
o|contracted procedure: k2396 
o|contracted procedure: k2399 
o|contracted procedure: k2413 
o|contracted procedure: k2421 
o|contracted procedure: k2427 
o|contracted procedure: k2430 
o|contracted procedure: k2434 
o|contracted procedure: k2443 
o|contracted procedure: k2446 
o|contracted procedure: k2456 
o|contracted procedure: k2459 
o|contracted procedure: k2469 
o|contracted procedure: k2476 
o|contracted procedure: k2483 
o|contracted procedure: k2490 
o|contracted procedure: k2493 
o|contracted procedure: k2498 
o|contracted procedure: k2504 
o|contracted procedure: k2507 
o|contracted procedure: k2523 
o|contracted procedure: k2531 
o|contracted procedure: k2527 
o|contracted procedure: k2537 
o|contracted procedure: k2546 
o|contracted procedure: k2553 
o|contracted procedure: k2558 
o|contracted procedure: k2565 
o|contracted procedure: k2583 
o|contracted procedure: k2591 
o|contracted procedure: k2598 
o|contracted procedure: k2608 
o|contracted procedure: k2616 
o|contracted procedure: k2622 
o|contracted procedure: k2625 
o|contracted procedure: k2631 
o|contracted procedure: k2635 
o|contracted procedure: k2642 
o|contracted procedure: k2645 
o|contracted procedure: k2655 
o|contracted procedure: k2665 
o|contracted procedure: k2675 
o|contracted procedure: k2685 
o|contracted procedure: k2695 
o|contracted procedure: k2705 
o|contracted procedure: k2715 
o|contracted procedure: k2725 
o|contracted procedure: k2735 
o|contracted procedure: k2745 
o|contracted procedure: k2753 
o|contracted procedure: k2765 
o|contracted procedure: k2768 
o|contracted procedure: k2777 
o|contracted procedure: k2784 
o|contracted procedure: k2788 
o|contracted procedure: k2794 
o|contracted procedure: k2801 
o|contracted procedure: k2805 
o|contracted procedure: k2811 
o|contracted procedure: k2818 
o|contracted procedure: k2822 
o|contracted procedure: k2828 
o|contracted procedure: k2835 
o|contracted procedure: k2839 
o|contracted procedure: k2845 
o|contracted procedure: k2856 
o|contracted procedure: k2860 
o|contracted procedure: k2866 
o|contracted procedure: k2877 
o|contracted procedure: k2885 
o|contracted procedure: k2891 
o|contracted procedure: k2899 
o|contracted procedure: k2905 
o|contracted procedure: k2916 
o|contracted procedure: k2924 
o|contracted procedure: k2930 
o|contracted procedure: k2937 
o|contracted procedure: k2944 
o|contracted procedure: k2955 
o|contracted procedure: k2979 
o|contracted procedure: k2985 
o|contracted procedure: k2995 
o|contracted procedure: k2999 
o|contracted procedure: k3005 
o|contracted procedure: k3015 
o|contracted procedure: k3019 
o|contracted procedure: k3025 
o|contracted procedure: k3045 
o|contracted procedure: k3058 
o|contracted procedure: k3054 
o|contracted procedure: k3067 
o|contracted procedure: k3076 
o|contracted procedure: k3082 
o|contracted procedure: k3085 
o|contracted procedure: k3092 
o|contracted procedure: k3122 
o|contracted procedure: k3137 
o|contracted procedure: k3152 
o|contracted procedure: k3184 
o|contracted procedure: k3198 
o|contracted procedure: k3286 
o|contracted procedure: k3204 
o|contracted procedure: k3207 
o|contracted procedure: k3213 
o|contracted procedure: k3221 
o|contracted procedure: k3243 
o|contracted procedure: k3246 
o|contracted procedure: k3249 
o|contracted procedure: k3257 
o|contracted procedure: k3265 
o|contracted procedure: k3231 
o|contracted procedure: k3300 
o|contracted procedure: k3291 
o|contracted procedure: k3340 
o|contracted procedure: k3348 
o|contracted procedure: k3354 
o|contracted procedure: k3362 
o|contracted procedure: k3368 
o|contracted procedure: k3380 
o|contracted procedure: k3384 
o|contracted procedure: k3390 
o|contracted procedure: k3399 
o|contracted procedure: k3415 
o|contracted procedure: k3423 
o|contracted procedure: k3334 
o|contracted procedure: k3438 
o|contracted procedure: k3454 
o|contracted procedure: k3446 
o|contracted procedure: k3468 
o|contracted procedure: k3459 
o|contracted procedure: k3477 
o|contracted procedure: k3515 
o|contracted procedure: k5064 
o|contracted procedure: k5072 
o|contracted procedure: k5081 
o|contracted procedure: k5093 
o|contracted procedure: k5096 
o|contracted procedure: k5099 
o|contracted procedure: k5107 
o|contracted procedure: k5115 
o|contracted procedure: k5127 
o|contracted procedure: k5130 
o|contracted procedure: k5133 
o|contracted procedure: k5141 
o|contracted procedure: k5149 
o|simplifications: ((if . 3) (let . 39)) 
o|removed binding forms: 290 
o|inlining procedure: "(csc.scm:972) prefix" 
o|inlining procedure: "(csc.scm:277) prefix" 
o|inlining procedure: k2604 
o|inlining procedure: k2604 
o|inlining procedure: k2940 
o|inlining procedure: k2940 
o|inlining procedure: "(csc.scm:261) prefix" 
o|inlining procedure: "(csc.scm:239) prefix" 
o|inlining procedure: "(csc.scm:225) prefix" 
o|propagated global variable: str246355 default-library 
o|inlining procedure: "(csc.scm:108) prefix" 
o|inlining procedure: "(csc.scm:104) prefix" 
o|simplifications: ((let . 2)) 
o|replaced variables: 57 
o|removed binding forms: 2 
o|removed side-effect free assignment to unused variable: prefix 
o|substituted constant variable: dir256296 
o|substituted constant variable: str246295 
o|substituted constant variable: dir256321 
o|substituted constant variable: str246320 
o|substituted constant variable: dir256342 
o|substituted constant variable: str246341 
o|substituted constant variable: str246350 
o|substituted constant variable: dir256356 
o|substituted constant variable: dir256361 
o|substituted constant variable: str246360 
o|substituted constant variable: dir256366 
o|substituted constant variable: str246365 
o|simplifications: ((if . 2)) 
o|replaced variables: 22 
o|removed binding forms: 33 
o|inlining procedure: k1822 
o|inlining procedure: k5328 
o|removed binding forms: 28 
o|replaced variables: 2 
o|removed binding forms: 2 
o|direct leaf routine/allocation: use-private-repository242 6 
o|direct leaf routine/allocation: g428429 3 
o|inlining procedure: "(csc.scm:658) k2228" 
o|inlining procedure: "(csc.scm:762) k2228" 
o|simplifications: ((if . 1)) 
o|customizable procedures: (k1622 k5052 map-loop140157 map-loop113164 k2756 k3039 k3042 k3098 k3107 k3407 k3371 k3190 map-loop445463 k2947 shared-build241 check240 k2402 t-options239 loop259 k1725 k1729 map-loop193218 k2144 k2147 k3707 map-loop525545 for-each-loop504555 k2002 g565572 for-each-loop564583 k4034 k3901 g595602 for-each-loop594608 for-each-loop615625 for-each-loop632642 k3871 compiler-options map-loop686703 linker-options linker-libraries k4240 k4204 lib-path copy-files for-each-loop764774 stop g880881 k4716 fold842 k4645 k4618 command map-loop655675) 
o|calls to known targets: 265 
o|identified direct recursive calls: f_4690 1 
o|fast box initializations: 19 
o|fast global references: 410 
o|fast global assignments: 178 
o|dropping unused closure argument: f_4556 
o|dropping unused closure argument: f_1907 
o|dropping unused closure argument: f_1914 
o|dropping unused closure argument: f_1940 
o|dropping unused closure argument: f_4475 
o|dropping unused closure argument: f_1963 
o|dropping unused closure argument: f_4605 
o|dropping unused closure argument: f_4635 
o|dropping unused closure argument: f_1499 
o|dropping unused closure argument: f_4845 
o|dropping unused closure argument: f_4086 
*/
/* end of file */

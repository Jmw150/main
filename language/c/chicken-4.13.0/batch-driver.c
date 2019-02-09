/* Generated from batch-driver.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: batch-driver.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -extend private-namespace.scm -no-trace -output-file batch-driver.c
   unit: driver
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[416];
static double C_possibly_force_alignment;


C_noret_decl(f5812)
static void C_ccall f5812(C_word c,C_word *av) C_noret;
C_noret_decl(f_3857)
static void C_ccall f_3857(C_word c,C_word *av) C_noret;
C_noret_decl(f_2801)
static void C_ccall f_2801(C_word c,C_word *av) C_noret;
C_noret_decl(f5794)
static void C_ccall f5794(C_word c,C_word *av) C_noret;
C_noret_decl(f_1835)
static void C_ccall f_1835(C_word c,C_word *av) C_noret;
C_noret_decl(f_1838)
static void C_ccall f_1838(C_word c,C_word *av) C_noret;
C_noret_decl(f_3985)
static void C_ccall f_3985(C_word c,C_word *av) C_noret;
C_noret_decl(f_3988)
static void C_ccall f_3988(C_word c,C_word *av) C_noret;
C_noret_decl(f_4890)
static void C_ccall f_4890(C_word c,C_word *av) C_noret;
C_noret_decl(f_1868)
static void C_fcall f_1868(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1866)
static void C_ccall f_1866(C_word c,C_word *av) C_noret;
C_noret_decl(f_3972)
static void C_ccall f_3972(C_word c,C_word *av) C_noret;
C_noret_decl(f_2972)
static void C_ccall f_2972(C_word c,C_word *av) C_noret;
C_noret_decl(f_2834)
static void C_ccall f_2834(C_word c,C_word *av) C_noret;
C_noret_decl(f_2830)
static void C_ccall f_2830(C_word c,C_word *av) C_noret;
C_noret_decl(f_4865)
static void C_fcall f_4865(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1853)
static void C_ccall f_1853(C_word c,C_word *av) C_noret;
C_noret_decl(f_2837)
static void C_ccall f_2837(C_word c,C_word *av) C_noret;
C_noret_decl(f_2843)
static void C_ccall f_2843(C_word c,C_word *av) C_noret;
C_noret_decl(f_2840)
static void C_ccall f_2840(C_word c,C_word *av) C_noret;
C_noret_decl(f_2849)
static void C_ccall f_2849(C_word c,C_word *av) C_noret;
C_noret_decl(f_1884)
static void C_ccall f_1884(C_word c,C_word *av) C_noret;
C_noret_decl(f_1887)
static void C_ccall f_1887(C_word c,C_word *av) C_noret;
C_noret_decl(f_2846)
static void C_ccall f_2846(C_word c,C_word *av) C_noret;
C_noret_decl(f_1881)
static void C_ccall f_1881(C_word c,C_word *av) C_noret;
C_noret_decl(f_3911)
static void C_ccall f_3911(C_word c,C_word *av) C_noret;
C_noret_decl(f_3913)
static void C_fcall f_3913(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3947)
static void C_fcall f_3947(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2824)
static void C_ccall f_2824(C_word c,C_word *av) C_noret;
C_noret_decl(f_2821)
static void C_ccall f_2821(C_word c,C_word *av) C_noret;
C_noret_decl(f_1823)
static void C_ccall f_1823(C_word c,C_word *av) C_noret;
C_noret_decl(f_2827)
static void C_ccall f_2827(C_word c,C_word *av) C_noret;
C_noret_decl(f_3938)
static void C_ccall f_3938(C_word c,C_word *av) C_noret;
C_noret_decl(f_4211)
static void C_fcall f_4211(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4302)
static void C_ccall f_4302(C_word c,C_word *av) C_noret;
C_noret_decl(f_2870)
static void C_ccall f_2870(C_word c,C_word *av) C_noret;
C_noret_decl(f_2873)
static void C_ccall f_2873(C_word c,C_word *av) C_noret;
C_noret_decl(f_1819)
static void C_fcall f_1819(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2876)
static void C_ccall f_2876(C_word c,C_word *av) C_noret;
C_noret_decl(f_2879)
static void C_ccall f_2879(C_word c,C_word *av) C_noret;
C_noret_decl(f_2701)
static void C_ccall f_2701(C_word c,C_word *av) C_noret;
C_noret_decl(f_2882)
static void C_ccall f_2882(C_word c,C_word *av) C_noret;
C_noret_decl(f_2885)
static void C_ccall f_2885(C_word c,C_word *av) C_noret;
C_noret_decl(f_1846)
static void C_fcall f_1846(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2888)
static void C_ccall f_2888(C_word c,C_word *av) C_noret;
C_noret_decl(f_1841)
static void C_ccall f_1841(C_word c,C_word *av) C_noret;
C_noret_decl(f_1844)
static void C_ccall f_1844(C_word c,C_word *av) C_noret;
C_noret_decl(f_2852)
static void C_ccall f_2852(C_word c,C_word *av) C_noret;
C_noret_decl(f_2704)
static void C_ccall f_2704(C_word c,C_word *av) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857(C_word c,C_word *av) C_noret;
C_noret_decl(f_2863)
static void C_ccall f_2863(C_word c,C_word *av) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867(C_word c,C_word *av) C_noret;
C_noret_decl(f_3995)
static void C_ccall f_3995(C_word c,C_word *av) C_noret;
C_noret_decl(f_2891)
static void C_ccall f_2891(C_word c,C_word *av) C_noret;
C_noret_decl(f_1875)
static void C_ccall f_1875(C_word c,C_word *av) C_noret;
C_noret_decl(f_4505)
static void C_fcall f_4505(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4503)
static void C_ccall f_4503(C_word c,C_word *av) C_noret;
C_noret_decl(f5800)
static void C_ccall f5800(C_word c,C_word *av) C_noret;
C_noret_decl(f_2772)
static void C_ccall f_2772(C_word c,C_word *av) C_noret;
C_noret_decl(f5806)
static void C_ccall f5806(C_word c,C_word *av) C_noret;
C_noret_decl(f_1895)
static void C_fcall f_1895(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1941)
static void C_fcall f_1941(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1890)
static void C_ccall f_1890(C_word c,C_word *av) C_noret;
C_noret_decl(f_4221)
static void C_ccall f_4221(C_word c,C_word *av) C_noret;
C_noret_decl(f_2713)
static void C_ccall f_2713(C_word c,C_word *av) C_noret;
C_noret_decl(f_2710)
static void C_ccall f_2710(C_word c,C_word *av) C_noret;
C_noret_decl(f_4234)
static void C_ccall f_4234(C_word c,C_word *av) C_noret;
C_noret_decl(f_2789)
static void C_ccall f_2789(C_word c,C_word *av) C_noret;
C_noret_decl(f_2786)
static void C_ccall f_2786(C_word c,C_word *av) C_noret;
C_noret_decl(f_1928)
static void C_ccall f_1928(C_word c,C_word *av) C_noret;
C_noret_decl(f_4242)
static void C_ccall f_4242(C_word c,C_word *av) C_noret;
C_noret_decl(f_4244)
static void C_fcall f_4244(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2718)
static void C_ccall f_2718(C_word c,C_word *av) C_noret;
C_noret_decl(f_2045)
static void C_fcall f_2045(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f5646)
static void C_ccall f5646(C_word c,C_word *av) C_noret;
C_noret_decl(f_1918)
static void C_fcall f_1918(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2734)
static void C_ccall f_2734(C_word c,C_word *av) C_noret;
C_noret_decl(f_2730)
static void C_ccall f_2730(C_word c,C_word *av) C_noret;
C_noret_decl(f5640)
static void C_ccall f5640(C_word c,C_word *av) C_noret;
C_noret_decl(f_2057)
static void C_ccall f_2057(C_word c,C_word *av) C_noret;
C_noret_decl(f_4344)
static void C_ccall f_4344(C_word c,C_word *av) C_noret;
C_noret_decl(f5658)
static void C_ccall f5658(C_word c,C_word *av) C_noret;
C_noret_decl(f_4267)
static void C_ccall f_4267(C_word c,C_word *av) C_noret;
C_noret_decl(f_2053)
static void C_ccall f_2053(C_word c,C_word *av) C_noret;
C_noret_decl(f5652)
static void C_ccall f5652(C_word c,C_word *av) C_noret;
C_noret_decl(f_2737)
static void C_ccall f_2737(C_word c,C_word *av) C_noret;
C_noret_decl(f_3315)
static void C_ccall f_3315(C_word c,C_word *av) C_noret;
C_noret_decl(f_3215)
static void C_fcall f_3215(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3210)
static void C_ccall f_3210(C_word c,C_word *av) C_noret;
C_noret_decl(f_2066)
static void C_fcall f_2066(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1801)
static void C_fcall f_1801(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4275)
static void C_ccall f_4275(C_word c,C_word *av) C_noret;
C_noret_decl(f5243)
static void C_ccall f5243(C_word c,C_word *av) C_noret;
C_noret_decl(f_3206)
static void C_ccall f_3206(C_word c,C_word *av) C_noret;
C_noret_decl(f_4325)
static void C_ccall f_4325(C_word c,C_word *av) C_noret;
C_noret_decl(f_2606)
static void C_ccall f_2606(C_word c,C_word *av) C_noret;
C_noret_decl(f_2609)
static void C_ccall f_2609(C_word c,C_word *av) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word *av) C_noret;
C_noret_decl(f_2600)
static void C_ccall f_2600(C_word c,C_word *av) C_noret;
C_noret_decl(f_2010)
static void C_ccall f_2010(C_word c,C_word *av) C_noret;
C_noret_decl(f_1990)
static void C_ccall f_1990(C_word c,C_word *av) C_noret;
C_noret_decl(f_2795)
static void C_ccall f_2795(C_word c,C_word *av) C_noret;
C_noret_decl(f_2792)
static void C_ccall f_2792(C_word c,C_word *av) C_noret;
C_noret_decl(f_3305)
static void C_ccall f_3305(C_word c,C_word *av) C_noret;
C_noret_decl(f_3302)
static void C_ccall f_3302(C_word c,C_word *av) C_noret;
C_noret_decl(f_2037)
static void C_fcall f_2037(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2031)
static void C_fcall f_2031(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3414)
static void C_ccall f_3414(C_word c,C_word *av) C_noret;
C_noret_decl(f_2798)
static void C_ccall f_2798(C_word c,C_word *av) C_noret;
C_noret_decl(f_3417)
static void C_ccall f_3417(C_word c,C_word *av) C_noret;
C_noret_decl(f_4379)
static void C_ccall f_4379(C_word c,C_word *av) C_noret;
C_noret_decl(f_3320)
static void C_fcall f_3320(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3406)
static void C_ccall f_3406(C_word c,C_word *av) C_noret;
C_noret_decl(f_4254)
static void C_ccall f_4254(C_word c,C_word *av) C_noret;
C_noret_decl(f_3402)
static void C_ccall f_3402(C_word c,C_word *av) C_noret;
C_noret_decl(f_3391)
static void C_ccall f_3391(C_word c,C_word *av) C_noret;
C_noret_decl(f_2623)
static void C_ccall f_2623(C_word c,C_word *av) C_noret;
C_noret_decl(f_2620)
static void C_ccall f_2620(C_word c,C_word *av) C_noret;
C_noret_decl(f_2507)
static void C_ccall f_2507(C_word c,C_word *av) C_noret;
C_noret_decl(f_2626)
static void C_ccall f_2626(C_word c,C_word *av) C_noret;
C_noret_decl(f_3345)
static void C_ccall f_3345(C_word c,C_word *av) C_noret;
C_noret_decl(f_2670)
static void C_ccall f_2670(C_word c,C_word *av) C_noret;
C_noret_decl(f_2673)
static void C_ccall f_2673(C_word c,C_word *av) C_noret;
C_noret_decl(f_2519)
static void C_ccall f_2519(C_word c,C_word *av) C_noret;
C_noret_decl(f_4530)
static void C_ccall f_4530(C_word c,C_word *av) C_noret;
C_noret_decl(f_2513)
static void C_ccall f_2513(C_word c,C_word *av) C_noret;
C_noret_decl(f_2679)
static void C_ccall f_2679(C_word c,C_word *av) C_noret;
C_noret_decl(f_2676)
static void C_ccall f_2676(C_word c,C_word *av) C_noret;
C_noret_decl(f_2510)
static void C_ccall f_2510(C_word c,C_word *av) C_noret;
C_noret_decl(f_2684)
static void C_fcall f_2684(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2756)
static void C_ccall f_2756(C_word c,C_word *av) C_noret;
C_noret_decl(f_1683)
static void C_ccall f_1683(C_word c,C_word *av) C_noret;
C_noret_decl(f_2688)
static void C_ccall f_2688(C_word c,C_word *av) C_noret;
C_noret_decl(f_1689)
static void C_ccall f_1689(C_word c,C_word *av) C_noret;
C_noret_decl(f_1686)
static void C_ccall f_1686(C_word c,C_word *av) C_noret;
C_noret_decl(f_3367)
static void C_ccall f_3367(C_word c,C_word *av) C_noret;
C_noret_decl(f_2089)
static void C_ccall f_2089(C_word c,C_word *av) C_noret;
C_noret_decl(f_2086)
static void C_ccall f_2086(C_word c,C_word *av) C_noret;
C_noret_decl(f_2652)
static void C_ccall f_2652(C_word c,C_word *av) C_noret;
C_noret_decl(f_2655)
static void C_ccall f_2655(C_word c,C_word *av) C_noret;
C_noret_decl(f_2658)
static void C_ccall f_2658(C_word c,C_word *av) C_noret;
C_noret_decl(f_2095)
static void C_ccall f_2095(C_word c,C_word *av) C_noret;
C_noret_decl(f_2092)
static void C_ccall f_2092(C_word c,C_word *av) C_noret;
C_noret_decl(f_3251)
static void C_fcall f_3251(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4392)
static void C_fcall f_4392(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3385)
static void C_ccall f_3385(C_word c,C_word *av) C_noret;
C_noret_decl(f_3382)
static void C_ccall f_3382(C_word c,C_word *av) C_noret;
C_noret_decl(f_3249)
static void C_ccall f_3249(C_word c,C_word *av) C_noret;
C_noret_decl(f_4369)
static void C_fcall f_4369(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2637)
static void C_ccall f_2637(C_word c,C_word *av) C_noret;
C_noret_decl(f_3376)
static void C_ccall f_3376(C_word c,C_word *av) C_noret;
C_noret_decl(f_3373)
static void C_ccall f_3373(C_word c,C_word *av) C_noret;
C_noret_decl(f_2643)
static void C_ccall f_2643(C_word c,C_word *av) C_noret;
C_noret_decl(f_2640)
static void C_ccall f_2640(C_word c,C_word *av) C_noret;
C_noret_decl(f_2649)
static void C_ccall f_2649(C_word c,C_word *av) C_noret;
C_noret_decl(f_3379)
static void C_ccall f_3379(C_word c,C_word *av) C_noret;
C_noret_decl(f_2646)
static void C_ccall f_2646(C_word c,C_word *av) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614(C_word c,C_word *av) C_noret;
C_noret_decl(f_2617)
static void C_ccall f_2617(C_word c,C_word *av) C_noret;
C_noret_decl(f_1697)
static void C_ccall f_1697(C_word c,C_word *av) C_noret;
C_noret_decl(f_1693)
static void C_ccall f_1693(C_word c,C_word *av) C_noret;
C_noret_decl(f_2076)
static void C_fcall f_2076(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2074)
static void C_ccall f_2074(C_word c,C_word *av) C_noret;
C_noret_decl(f5716)
static void C_ccall f5716(C_word c,C_word *av) C_noret;
C_noret_decl(f_2546)
static void C_ccall f_2546(C_word c,C_word *av) C_noret;
C_noret_decl(f_2661)
static void C_fcall f_2661(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2549)
static void C_ccall f_2549(C_word c,C_word *av) C_noret;
C_noret_decl(f_4567)
static void C_ccall f_4567(C_word c,C_word *av) C_noret;
C_noret_decl(f5722)
static void C_ccall f5722(C_word c,C_word *av) C_noret;
C_noret_decl(f_2667)
static void C_ccall f_2667(C_word c,C_word *av) C_noret;
C_noret_decl(f_1775)
static void C_fcall f_1775(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4402)
static void C_ccall f_4402(C_word c,C_word *av) C_noret;
C_noret_decl(f_2540)
static void C_ccall f_2540(C_word c,C_word *av) C_noret;
C_noret_decl(f_1770)
static void C_ccall f_1770(C_word c,C_word *av) C_noret;
C_noret_decl(f_2543)
static void C_ccall f_2543(C_word c,C_word *av) C_noret;
C_noret_decl(f_2558)
static void C_ccall f_2558(C_word c,C_word *av) C_noret;
C_noret_decl(f_4573)
static void C_ccall f_4573(C_word c,C_word *av) C_noret;
C_noret_decl(f_3423)
static void C_ccall f_3423(C_word c,C_word *av) C_noret;
C_noret_decl(f_2552)
static void C_ccall f_2552(C_word c,C_word *av) C_noret;
C_noret_decl(f_2555)
static void C_ccall f_2555(C_word c,C_word *av) C_noret;
C_noret_decl(f_3420)
static void C_ccall f_3420(C_word c,C_word *av) C_noret;
C_noret_decl(f_4548)
static void C_ccall f_4548(C_word c,C_word *av) C_noret;
C_noret_decl(f_3239)
static void C_ccall f_3239(C_word c,C_word *av) C_noret;
C_noret_decl(f_4545)
static void C_ccall f_4545(C_word c,C_word *av) C_noret;
C_noret_decl(f_4542)
static void C_ccall f_4542(C_word c,C_word *av) C_noret;
C_noret_decl(f_4559)
static void C_ccall f_4559(C_word c,C_word *av) C_noret;
C_noret_decl(f_3225)
static void C_ccall f_3225(C_word c,C_word *av) C_noret;
C_noret_decl(f_2694)
static void C_ccall f_2694(C_word c,C_word *av) C_noret;
C_noret_decl(f_4551)
static void C_ccall f_4551(C_word c,C_word *av) C_noret;
C_noret_decl(f_2691)
static void C_ccall f_2691(C_word c,C_word *av) C_noret;
C_noret_decl(f_2698)
static void C_ccall f_2698(C_word c,C_word *av) C_noret;
C_noret_decl(f_3299)
static void C_ccall f_3299(C_word c,C_word *av) C_noret;
C_noret_decl(f_3295)
static void C_ccall f_3295(C_word c,C_word *av) C_noret;
C_noret_decl(f_1902)
static void C_ccall f_1902(C_word c,C_word *av) C_noret;
C_noret_decl(f_1907)
static void C_ccall f_1907(C_word c,C_word *av) C_noret;
C_noret_decl(f_3287)
static void C_ccall f_3287(C_word c,C_word *av) C_noret;
C_noret_decl(f_1711)
static void C_ccall f_1711(C_word c,C_word *av) C_noret;
C_noret_decl(f_1714)
static void C_fcall f_1714(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1745)
static void C_ccall f_1745(C_word c,C_word *av) C_noret;
C_noret_decl(f_2416)
static void C_ccall f_2416(C_word c,C_word *av) C_noret;
C_noret_decl(f_2308)
static void C_fcall f_2308(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2303)
static void C_fcall f_2303(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2567)
static void C_ccall f_2567(C_word c,C_word *av) C_noret;
C_noret_decl(f_2564)
static void C_ccall f_2564(C_word c,C_word *av) C_noret;
C_noret_decl(f_2561)
static void C_fcall f_2561(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3492)
static void C_fcall f_3492(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3490)
static void C_ccall f_3490(C_word c,C_word *av) C_noret;
C_noret_decl(f_2408)
static void C_ccall f_2408(C_word c,C_word *av) C_noret;
C_noret_decl(f_2404)
static void C_ccall f_2404(C_word c,C_word *av) C_noret;
C_noret_decl(f_2318)
static void C_fcall f_2318(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2313)
static void C_fcall f_2313(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2579)
static void C_fcall f_2579(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2576)
static void C_ccall f_2576(C_word c,C_word *av) C_noret;
C_noret_decl(f_2570)
static void C_fcall f_2570(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2585)
static void C_ccall f_2585(C_word c,C_word *av) C_noret;
C_noret_decl(f_2588)
static void C_ccall f_2588(C_word c,C_word *av) C_noret;
C_noret_decl(f_3161)
static void C_fcall f_3161(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3471)
static void C_ccall f_3471(C_word c,C_word *av) C_noret;
C_noret_decl(f_3517)
static void C_ccall f_3517(C_word c,C_word *av) C_noret;
C_noret_decl(f_2597)
static void C_ccall f_2597(C_word c,C_word *av) C_noret;
C_noret_decl(f_3138)
static void C_ccall f_3138(C_word c,C_word *av) C_noret;
C_noret_decl(f_1767)
static void C_ccall f_1767(C_word c,C_word *av) C_noret;
C_noret_decl(f_2594)
static void C_ccall f_2594(C_word c,C_word *av) C_noret;
C_noret_decl(f_1761)
static void C_ccall f_1761(C_word c,C_word *av) C_noret;
C_noret_decl(f_2431)
static void C_ccall f_2431(C_word c,C_word *av) C_noret;
C_noret_decl(f_2435)
static void C_ccall f_2435(C_word c,C_word *av) C_noret;
C_noret_decl(f_4754)
static void C_ccall f_4754(C_word c,C_word *av) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word *av) C_noret;
C_noret_decl(f_2526)
static void C_ccall f_2526(C_word c,C_word *av) C_noret;
C_noret_decl(f_2523)
static void C_ccall f_2523(C_word c,C_word *av) C_noret;
C_noret_decl(f_4767)
static void C_ccall f_4767(C_word c,C_word *av) C_noret;
C_noret_decl(f_3450)
static void C_ccall f_3450(C_word c,C_word *av) C_noret;
C_noret_decl(f_2536)
static void C_ccall f_2536(C_word c,C_word *av) C_noret;
C_noret_decl(f_2446)
static void C_ccall f_2446(C_word c,C_word *av) C_noret;
C_noret_decl(f_2449)
static void C_ccall f_2449(C_word c,C_word *av) C_noret;
C_noret_decl(f_2532)
static void C_ccall f_2532(C_word c,C_word *av) C_noret;
C_noret_decl(f_2491)
static void C_ccall f_2491(C_word c,C_word *av) C_noret;
C_noret_decl(f_3440)
static void C_fcall f_3440(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2498)
static void C_ccall f_2498(C_word c,C_word *av) C_noret;
C_noret_decl(f_2300)
static void C_fcall f_2300(C_word t0,C_word t1) C_noret;
C_noret_decl(f5736)
static void C_ccall f5736(C_word c,C_word *av) C_noret;
C_noret_decl(f_2420)
static void C_ccall f_2420(C_word c,C_word *av) C_noret;
C_noret_decl(f_2424)
static void C_ccall f_2424(C_word c,C_word *av) C_noret;
C_noret_decl(f_2427)
static void C_fcall f_2427(C_word t0,C_word t1) C_noret;
C_noret_decl(f5742)
static void C_ccall f5742(C_word c,C_word *av) C_noret;
C_noret_decl(f_1701)
static void C_ccall f_1701(C_word c,C_word *av) C_noret;
C_noret_decl(f5748)
static void C_ccall f5748(C_word c,C_word *av) C_noret;
C_noret_decl(f_1705)
static void C_ccall f_1705(C_word c,C_word *av) C_noret;
C_noret_decl(f_1709)
static void C_ccall f_1709(C_word c,C_word *av) C_noret;
C_noret_decl(f5754)
static void C_ccall f5754(C_word c,C_word *av) C_noret;
C_noret_decl(f_3109)
static void C_fcall f_3109(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4729)
static void C_fcall f_4729(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2480)
static void C_fcall f_2480(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4043)
static void C_ccall f_4043(C_word c,C_word *av) C_noret;
C_noret_decl(f5760)
static void C_ccall f5760(C_word c,C_word *av) C_noret;
C_noret_decl(f_4437)
static void C_ccall f_4437(C_word c,C_word *av) C_noret;
C_noret_decl(f_3150)
static void C_ccall f_3150(C_word c,C_word *av) C_noret;
C_noret_decl(f_4430)
static void C_ccall f_4430(C_word c,C_word *av) C_noret;
C_noret_decl(f_4035)
static void C_ccall f_4035(C_word c,C_word *av) C_noret;
C_noret_decl(f5770)
static void C_ccall f5770(C_word c,C_word *av) C_noret;
C_noret_decl(f_2461)
static void C_ccall f_2461(C_word c,C_word *av) C_noret;
C_noret_decl(f_4061)
static void C_ccall f_4061(C_word c,C_word *av) C_noret;
C_noret_decl(f_4067)
static void C_ccall f_4067(C_word c,C_word *av) C_noret;
C_noret_decl(f_2469)
static void C_ccall f_2469(C_word c,C_word *av) C_noret;
C_noret_decl(f5788)
static void C_ccall f5788(C_word c,C_word *av) C_noret;
C_noret_decl(f_4000)
static void C_ccall f_4000(C_word c,C_word *av) C_noret;
C_noret_decl(f_4006)
static void C_fcall f_4006(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3119)
static void C_ccall f_3119(C_word c,C_word *av) C_noret;
C_noret_decl(f_3035)
static void C_ccall f_3035(C_word c,C_word *av) C_noret;
C_noret_decl(f_4028)
static void C_ccall f_4028(C_word c,C_word *av) C_noret;
C_noret_decl(f_4497)
static void C_ccall f_4497(C_word c,C_word *av) C_noret;
C_noret_decl(f_3171)
static void C_ccall f_3171(C_word c,C_word *av) C_noret;
C_noret_decl(f_3044)
static void C_ccall f_3044(C_word c,C_word *av) C_noret;
C_noret_decl(f_2219)
static void C_ccall f_2219(C_word c,C_word *av) C_noret;
C_noret_decl(f_3048)
static void C_ccall f_3048(C_word c,C_word *av) C_noret;
C_noret_decl(f_2215)
static void C_ccall f_2215(C_word c,C_word *av) C_noret;
C_noret_decl(f_4010)
static void C_ccall f_4010(C_word c,C_word *av) C_noret;
C_noret_decl(f_4793)
static void C_fcall f_4793(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3187)
static void C_ccall f_3187(C_word c,C_word *av) C_noret;
C_noret_decl(f_2321)
static void C_ccall f_2321(C_word c,C_word *av) C_noret;
C_noret_decl(f_3051)
static void C_ccall f_3051(C_word c,C_word *av) C_noret;
C_noret_decl(f_2324)
static void C_ccall f_2324(C_word c,C_word *av) C_noret;
C_noret_decl(f_3054)
static void C_ccall f_3054(C_word c,C_word *av) C_noret;
C_noret_decl(f_3059)
static void C_ccall f_3059(C_word c,C_word *av) C_noret;
C_noret_decl(C_driver_toplevel)
C_externexport void C_ccall C_driver_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_2330)
static void C_ccall f_2330(C_word c,C_word *av) C_noret;
C_noret_decl(f_3062)
static void C_ccall f_3062(C_word c,C_word *av) C_noret;
C_noret_decl(f_2333)
static void C_ccall f_2333(C_word c,C_word *av) C_noret;
C_noret_decl(f_3065)
static void C_ccall f_3065(C_word c,C_word *av) C_noret;
C_noret_decl(f_3068)
static void C_ccall f_3068(C_word c,C_word *av) C_noret;
C_noret_decl(f_2327)
static void C_ccall f_2327(C_word c,C_word *av) C_noret;
C_noret_decl(f_2452)
static void C_fcall f_2452(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4606)
static void C_ccall f_4606(C_word c,C_word *av) C_noret;
C_noret_decl(f_2455)
static void C_ccall f_2455(C_word c,C_word *av) C_noret;
C_noret_decl(f_4609)
static void C_ccall f_4609(C_word c,C_word *av) C_noret;
C_noret_decl(f_4772)
static void C_ccall f_4772(C_word c,C_word *av) C_noret;
C_noret_decl(f_2458)
static void C_ccall f_2458(C_word c,C_word *av) C_noret;
C_noret_decl(f_2342)
static void C_ccall f_2342(C_word c,C_word *av) C_noret;
C_noret_decl(f_4442)
static void C_fcall f_4442(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4616)
static void C_ccall f_4616(C_word c,C_word *av) C_noret;
C_noret_decl(f_2339)
static void C_ccall f_2339(C_word c,C_word *av) C_noret;
C_noret_decl(f_4788)
static void C_ccall f_4788(C_word c,C_word *av) C_noret;
C_noret_decl(f5684)
static void C_ccall f5684(C_word c,C_word *av) C_noret;
C_noret_decl(f_4629)
static void C_ccall f_4629(C_word c,C_word *av) C_noret;
C_noret_decl(f_3612)
static void C_fcall f_3612(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4622)
static void C_ccall f_4622(C_word c,C_word *av) C_noret;
C_noret_decl(f5696)
static void C_ccall f5696(C_word c,C_word *av) C_noret;
C_noret_decl(f_4467)
static void C_ccall f_4467(C_word c,C_word *av) C_noret;
C_noret_decl(f_4901)
static void C_ccall f_4901(C_word c,C_word *av) C_noret;
C_noret_decl(f_3015)
static void C_ccall f_3015(C_word c,C_word *av) C_noret;
C_noret_decl(f_4905)
static void C_fcall f_4905(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4635)
static void C_ccall f_4635(C_word c,C_word *av) C_noret;
C_noret_decl(f_4909)
static void C_ccall f_4909(C_word c,C_word *av) C_noret;
C_noret_decl(f_3199)
static void C_ccall f_3199(C_word c,C_word *av) C_noret;
C_noret_decl(f_3196)
static void C_ccall f_3196(C_word c,C_word *av) C_noret;
C_noret_decl(f_4478)
static void C_ccall f_4478(C_word c,C_word *av) C_noret;
C_noret_decl(f_3020)
static void C_ccall f_3020(C_word c,C_word *av) C_noret;
C_noret_decl(f_3029)
static void C_ccall f_3029(C_word c,C_word *av) C_noret;
C_noret_decl(f_4152)
static void C_ccall f_4152(C_word c,C_word *av) C_noret;
C_noret_decl(f_4154)
static void C_fcall f_4154(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4143)
static void C_ccall f_4143(C_word c,C_word *av) C_noret;
C_noret_decl(f_4146)
static void C_ccall f_4146(C_word c,C_word *av) C_noret;
C_noret_decl(f_4664)
static void C_ccall f_4664(C_word c,C_word *av) C_noret;
C_noret_decl(f_2389)
static void C_ccall f_2389(C_word c,C_word *av) C_noret;
C_noret_decl(f_2386)
static void C_ccall f_2386(C_word c,C_word *av) C_noret;
C_noret_decl(f_2398)
static void C_ccall f_2398(C_word c,C_word *av) C_noret;
C_noret_decl(f5664)
static void C_ccall f5664(C_word c,C_word *av) C_noret;
C_noret_decl(f5676)
static void C_ccall f5676(C_word c,C_word *av) C_noret;
C_noret_decl(f_3077)
static void C_ccall f_3077(C_word c,C_word *av) C_noret;
C_noret_decl(f_3071)
static void C_ccall f_3071(C_word c,C_word *av) C_noret;
C_noret_decl(f_3074)
static void C_ccall f_3074(C_word c,C_word *av) C_noret;
C_noret_decl(f_4116)
static void C_ccall f_4116(C_word c,C_word *av) C_noret;
C_noret_decl(f_2355)
static void C_fcall f_2355(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3086)
static void C_fcall f_3086(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2352)
static void C_fcall f_2352(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3080)
static void C_ccall f_3080(C_word c,C_word *av) C_noret;
C_noret_decl(f_2349)
static void C_fcall f_2349(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346(C_word c,C_word *av) C_noret;
C_noret_decl(f_3709)
static void C_fcall f_3709(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2361)
static void C_fcall f_2361(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2364)
static void C_ccall f_2364(C_word c,C_word *av) C_noret;
C_noret_decl(f_3096)
static void C_ccall f_3096(C_word c,C_word *av) C_noret;
C_noret_decl(f_2224)
static void C_ccall f_2224(C_word c,C_word *av) C_noret;
C_noret_decl(f_2358)
static void C_fcall f_2358(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2373)
static void C_ccall f_2373(C_word c,C_word *av) C_noret;
C_noret_decl(f_3675)
static void C_fcall f_3675(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2370)
static void C_ccall f_2370(C_word c,C_word *av) C_noret;
C_noret_decl(f_2230)
static void C_ccall f_2230(C_word c,C_word *av) C_noret;
C_noret_decl(f_2233)
static void C_fcall f_2233(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2367)
static void C_ccall f_2367(C_word c,C_word *av) C_noret;
C_noret_decl(f_2379)
static void C_ccall f_2379(C_word c,C_word *av) C_noret;
C_noret_decl(f_2376)
static void C_ccall f_2376(C_word c,C_word *av) C_noret;
C_noret_decl(f_3549)
static void C_ccall f_3549(C_word c,C_word *av) C_noret;
C_noret_decl(f_3743)
static void C_fcall f_3743(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4944)
static void C_ccall f_4944(C_word c,C_word *av) C_noret;
C_noret_decl(f_3568)
static void C_fcall f_3568(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3564)
static void C_ccall f_3564(C_word c,C_word *av) C_noret;
C_noret_decl(f_4123)
static void C_ccall f_4123(C_word c,C_word *av) C_noret;
C_noret_decl(f_3805)
static void C_ccall f_3805(C_word c,C_word *av) C_noret;
C_noret_decl(f_2136)
static void C_ccall f_2136(C_word c,C_word *av) C_noret;
C_noret_decl(f_3597)
static void C_ccall f_3597(C_word c,C_word *av) C_noret;
C_noret_decl(f_3768)
static void C_ccall f_3768(C_word c,C_word *av) C_noret;
C_noret_decl(f_2130)
static void C_ccall f_2130(C_word c,C_word *av) C_noret;
C_noret_decl(f_4198)
static void C_ccall f_4198(C_word c,C_word *av) C_noret;
C_noret_decl(f_4188)
static void C_fcall f_4188(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4933)
static void C_ccall f_4933(C_word c,C_word *av) C_noret;
C_noret_decl(f_2904)
static void C_ccall f_2904(C_word c,C_word *av) C_noret;
C_noret_decl(f_4179)
static void C_ccall f_4179(C_word c,C_word *av) C_noret;
C_noret_decl(f_2125)
static void C_ccall f_2125(C_word c,C_word *av) C_noret;
C_noret_decl(f_2122)
static void C_ccall f_2122(C_word c,C_word *av) C_noret;
C_noret_decl(f_2282)
static void C_fcall f_2282(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2146)
static void C_fcall f_2146(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2288)
static void C_fcall f_2288(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2285)
static void C_fcall f_2285(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2141)
static void C_fcall f_2141(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2294)
static void C_fcall f_2294(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2291)
static void C_fcall f_2291(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2118)
static void C_fcall f_2118(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2114)
static void C_ccall f_2114(C_word c,C_word *av) C_noret;
C_noret_decl(f_2116)
static void C_fcall f_2116(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2297)
static void C_fcall f_2297(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2261)
static void C_fcall f_2261(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2264)
static void C_fcall f_2264(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2267)
static void C_fcall f_2267(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2273)
static void C_fcall f_2273(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2270)
static void C_fcall f_2270(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2279)
static void C_fcall f_2279(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2276)
static void C_fcall f_2276(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2966)
static void C_ccall f_2966(C_word c,C_word *av) C_noret;
C_noret_decl(f_3887)
static void C_ccall f_3887(C_word c,C_word *av) C_noret;
C_noret_decl(f_2240)
static void C_fcall f_2240(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2243)
static void C_ccall f_2243(C_word c,C_word *av) C_noret;
C_noret_decl(f_2960)
static void C_ccall f_2960(C_word c,C_word *av) C_noret;
C_noret_decl(f_2963)
static void C_ccall f_2963(C_word c,C_word *av) C_noret;
C_noret_decl(f_2106)
static void C_ccall f_2106(C_word c,C_word *av) C_noret;
C_noret_decl(f_4851)
static void C_ccall f_4851(C_word c,C_word *av) C_noret;
C_noret_decl(f_2249)
static void C_ccall f_2249(C_word c,C_word *av) C_noret;
C_noret_decl(f_2246)
static void C_fcall f_2246(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2936)
static void C_ccall f_2936(C_word c,C_word *av) C_noret;
C_noret_decl(f_3876)
static void C_fcall f_3876(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3871)
static void C_ccall f_3871(C_word c,C_word *av) C_noret;
C_noret_decl(f_2255)
static void C_ccall f_2255(C_word c,C_word *av) C_noret;
C_noret_decl(f_2252)
static void C_ccall f_2252(C_word c,C_word *av) C_noret;
C_noret_decl(f_4829)
static void C_ccall f_4829(C_word c,C_word *av) C_noret;
C_noret_decl(f_2930)
static void C_ccall f_2930(C_word c,C_word *av) C_noret;
C_noret_decl(f_2258)
static void C_fcall f_2258(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3867)
static void C_ccall f_3867(C_word c,C_word *av) C_noret;
C_noret_decl(f_4847)
static void C_ccall f_4847(C_word c,C_word *av) C_noret;
C_noret_decl(f_4843)
static void C_ccall f_4843(C_word c,C_word *av) C_noret;
C_noret_decl(f_3901)
static void C_ccall f_3901(C_word c,C_word *av) C_noret;
C_noret_decl(f_4818)
static void C_ccall f_4818(C_word c,C_word *av) C_noret;
C_noret_decl(f_3832)
static void C_fcall f_3832(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3830)
static void C_ccall f_3830(C_word c,C_word *av) C_noret;
C_noret_decl(f_2195)
static void C_ccall f_2195(C_word c,C_word *av) C_noret;
C_noret_decl(f_2198)
static void C_ccall f_2198(C_word c,C_word *av) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word *av) C_noret;
C_noret_decl(f_2948)
static void C_ccall f_2948(C_word c,C_word *av) C_noret;
C_noret_decl(f_3820)
static void C_ccall f_3820(C_word c,C_word *av) C_noret;
C_noret_decl(f_2942)
static void C_ccall f_2942(C_word c,C_word *av) C_noret;
C_noret_decl(f_3897)
static void C_ccall f_3897(C_word c,C_word *av) C_noret;
C_noret_decl(f_2188)
static void C_ccall f_2188(C_word c,C_word *av) C_noret;
C_noret_decl(f_2185)
static void C_fcall f_2185(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2182)
static void C_fcall f_2182(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1868)
static void C_ccall trf_1868(C_word c,C_word *av) C_noret;
static void C_ccall trf_1868(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_1868(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4865)
static void C_ccall trf_4865(C_word c,C_word *av) C_noret;
static void C_ccall trf_4865(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4865(t0,t1,t2);}

C_noret_decl(trf_3913)
static void C_ccall trf_3913(C_word c,C_word *av) C_noret;
static void C_ccall trf_3913(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3913(t0,t1,t2);}

C_noret_decl(trf_3947)
static void C_ccall trf_3947(C_word c,C_word *av) C_noret;
static void C_ccall trf_3947(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3947(t0,t1,t2);}

C_noret_decl(trf_4211)
static void C_ccall trf_4211(C_word c,C_word *av) C_noret;
static void C_ccall trf_4211(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4211(t0,t1,t2);}

C_noret_decl(trf_1819)
static void C_ccall trf_1819(C_word c,C_word *av) C_noret;
static void C_ccall trf_1819(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1819(t0,t1,t2);}

C_noret_decl(trf_1846)
static void C_ccall trf_1846(C_word c,C_word *av) C_noret;
static void C_ccall trf_1846(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1846(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4505)
static void C_ccall trf_4505(C_word c,C_word *av) C_noret;
static void C_ccall trf_4505(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4505(t0,t1,t2);}

C_noret_decl(trf_1895)
static void C_ccall trf_1895(C_word c,C_word *av) C_noret;
static void C_ccall trf_1895(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1895(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1941)
static void C_ccall trf_1941(C_word c,C_word *av) C_noret;
static void C_ccall trf_1941(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1941(t0,t1);}

C_noret_decl(trf_4244)
static void C_ccall trf_4244(C_word c,C_word *av) C_noret;
static void C_ccall trf_4244(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4244(t0,t1,t2);}

C_noret_decl(trf_2045)
static void C_ccall trf_2045(C_word c,C_word *av) C_noret;
static void C_ccall trf_2045(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2045(t0,t1,t2);}

C_noret_decl(trf_1918)
static void C_ccall trf_1918(C_word c,C_word *av) C_noret;
static void C_ccall trf_1918(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1918(t0,t1,t2);}

C_noret_decl(trf_3215)
static void C_ccall trf_3215(C_word c,C_word *av) C_noret;
static void C_ccall trf_3215(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3215(t0,t1,t2);}

C_noret_decl(trf_2066)
static void C_ccall trf_2066(C_word c,C_word *av) C_noret;
static void C_ccall trf_2066(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2066(t0,t1);}

C_noret_decl(trf_1801)
static void C_ccall trf_1801(C_word c,C_word *av) C_noret;
static void C_ccall trf_1801(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1801(t0,t1);}

C_noret_decl(trf_2037)
static void C_ccall trf_2037(C_word c,C_word *av) C_noret;
static void C_ccall trf_2037(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2037(t0,t1,t2);}

C_noret_decl(trf_2031)
static void C_ccall trf_2031(C_word c,C_word *av) C_noret;
static void C_ccall trf_2031(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2031(t0,t1,t2);}

C_noret_decl(trf_3320)
static void C_ccall trf_3320(C_word c,C_word *av) C_noret;
static void C_ccall trf_3320(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3320(t0,t1,t2);}

C_noret_decl(trf_2684)
static void C_ccall trf_2684(C_word c,C_word *av) C_noret;
static void C_ccall trf_2684(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_2684(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_3251)
static void C_ccall trf_3251(C_word c,C_word *av) C_noret;
static void C_ccall trf_3251(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3251(t0,t1,t2);}

C_noret_decl(trf_4392)
static void C_ccall trf_4392(C_word c,C_word *av) C_noret;
static void C_ccall trf_4392(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4392(t0,t1,t2);}

C_noret_decl(trf_4369)
static void C_ccall trf_4369(C_word c,C_word *av) C_noret;
static void C_ccall trf_4369(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4369(t0,t1,t2);}

C_noret_decl(trf_2076)
static void C_ccall trf_2076(C_word c,C_word *av) C_noret;
static void C_ccall trf_2076(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2076(t0,t1,t2);}

C_noret_decl(trf_2661)
static void C_ccall trf_2661(C_word c,C_word *av) C_noret;
static void C_ccall trf_2661(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2661(t0,t1);}

C_noret_decl(trf_1775)
static void C_ccall trf_1775(C_word c,C_word *av) C_noret;
static void C_ccall trf_1775(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1775(t0,t1);}

C_noret_decl(trf_1714)
static void C_ccall trf_1714(C_word c,C_word *av) C_noret;
static void C_ccall trf_1714(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1714(t0,t1);}

C_noret_decl(trf_2308)
static void C_ccall trf_2308(C_word c,C_word *av) C_noret;
static void C_ccall trf_2308(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2308(t0,t1);}

C_noret_decl(trf_2303)
static void C_ccall trf_2303(C_word c,C_word *av) C_noret;
static void C_ccall trf_2303(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2303(t0,t1);}

C_noret_decl(trf_2561)
static void C_ccall trf_2561(C_word c,C_word *av) C_noret;
static void C_ccall trf_2561(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2561(t0,t1);}

C_noret_decl(trf_3492)
static void C_ccall trf_3492(C_word c,C_word *av) C_noret;
static void C_ccall trf_3492(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3492(t0,t1,t2);}

C_noret_decl(trf_2318)
static void C_ccall trf_2318(C_word c,C_word *av) C_noret;
static void C_ccall trf_2318(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2318(t0,t1);}

C_noret_decl(trf_2313)
static void C_ccall trf_2313(C_word c,C_word *av) C_noret;
static void C_ccall trf_2313(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2313(t0,t1);}

C_noret_decl(trf_2579)
static void C_ccall trf_2579(C_word c,C_word *av) C_noret;
static void C_ccall trf_2579(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2579(t0,t1);}

C_noret_decl(trf_2570)
static void C_ccall trf_2570(C_word c,C_word *av) C_noret;
static void C_ccall trf_2570(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2570(t0,t1);}

C_noret_decl(trf_3161)
static void C_ccall trf_3161(C_word c,C_word *av) C_noret;
static void C_ccall trf_3161(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3161(t0,t1,t2);}

C_noret_decl(trf_3440)
static void C_ccall trf_3440(C_word c,C_word *av) C_noret;
static void C_ccall trf_3440(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3440(t0,t1,t2);}

C_noret_decl(trf_2300)
static void C_ccall trf_2300(C_word c,C_word *av) C_noret;
static void C_ccall trf_2300(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2300(t0,t1);}

C_noret_decl(trf_2427)
static void C_ccall trf_2427(C_word c,C_word *av) C_noret;
static void C_ccall trf_2427(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2427(t0,t1);}

C_noret_decl(trf_3109)
static void C_ccall trf_3109(C_word c,C_word *av) C_noret;
static void C_ccall trf_3109(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3109(t0,t1,t2);}

C_noret_decl(trf_4729)
static void C_ccall trf_4729(C_word c,C_word *av) C_noret;
static void C_ccall trf_4729(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4729(t0,t1,t2);}

C_noret_decl(trf_2480)
static void C_ccall trf_2480(C_word c,C_word *av) C_noret;
static void C_ccall trf_2480(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2480(t0,t1);}

C_noret_decl(trf_4006)
static void C_ccall trf_4006(C_word c,C_word *av) C_noret;
static void C_ccall trf_4006(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4006(t0,t1);}

C_noret_decl(trf_4793)
static void C_ccall trf_4793(C_word c,C_word *av) C_noret;
static void C_ccall trf_4793(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4793(t0,t1,t2);}

C_noret_decl(trf_2452)
static void C_ccall trf_2452(C_word c,C_word *av) C_noret;
static void C_ccall trf_2452(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2452(t0,t1);}

C_noret_decl(trf_4442)
static void C_ccall trf_4442(C_word c,C_word *av) C_noret;
static void C_ccall trf_4442(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4442(t0,t1,t2);}

C_noret_decl(trf_3612)
static void C_ccall trf_3612(C_word c,C_word *av) C_noret;
static void C_ccall trf_3612(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3612(t0,t1,t2);}

C_noret_decl(trf_4905)
static void C_ccall trf_4905(C_word c,C_word *av) C_noret;
static void C_ccall trf_4905(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4905(t0,t1,t2);}

C_noret_decl(trf_4154)
static void C_ccall trf_4154(C_word c,C_word *av) C_noret;
static void C_ccall trf_4154(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4154(t0,t1,t2);}

C_noret_decl(trf_2355)
static void C_ccall trf_2355(C_word c,C_word *av) C_noret;
static void C_ccall trf_2355(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2355(t0,t1);}

C_noret_decl(trf_3086)
static void C_ccall trf_3086(C_word c,C_word *av) C_noret;
static void C_ccall trf_3086(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3086(t0,t1,t2);}

C_noret_decl(trf_2352)
static void C_ccall trf_2352(C_word c,C_word *av) C_noret;
static void C_ccall trf_2352(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2352(t0,t1);}

C_noret_decl(trf_2349)
static void C_ccall trf_2349(C_word c,C_word *av) C_noret;
static void C_ccall trf_2349(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2349(t0,t1);}

C_noret_decl(trf_3709)
static void C_ccall trf_3709(C_word c,C_word *av) C_noret;
static void C_ccall trf_3709(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3709(t0,t1,t2);}

C_noret_decl(trf_2361)
static void C_ccall trf_2361(C_word c,C_word *av) C_noret;
static void C_ccall trf_2361(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2361(t0,t1);}

C_noret_decl(trf_2358)
static void C_ccall trf_2358(C_word c,C_word *av) C_noret;
static void C_ccall trf_2358(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2358(t0,t1);}

C_noret_decl(trf_3675)
static void C_ccall trf_3675(C_word c,C_word *av) C_noret;
static void C_ccall trf_3675(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3675(t0,t1,t2);}

C_noret_decl(trf_2233)
static void C_ccall trf_2233(C_word c,C_word *av) C_noret;
static void C_ccall trf_2233(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2233(t0,t1);}

C_noret_decl(trf_3743)
static void C_ccall trf_3743(C_word c,C_word *av) C_noret;
static void C_ccall trf_3743(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3743(t0,t1,t2);}

C_noret_decl(trf_3568)
static void C_ccall trf_3568(C_word c,C_word *av) C_noret;
static void C_ccall trf_3568(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3568(t0,t1);}

C_noret_decl(trf_4188)
static void C_ccall trf_4188(C_word c,C_word *av) C_noret;
static void C_ccall trf_4188(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4188(t0,t1,t2);}

C_noret_decl(trf_2282)
static void C_ccall trf_2282(C_word c,C_word *av) C_noret;
static void C_ccall trf_2282(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2282(t0,t1);}

C_noret_decl(trf_2146)
static void C_ccall trf_2146(C_word c,C_word *av) C_noret;
static void C_ccall trf_2146(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2146(t0,t1);}

C_noret_decl(trf_2288)
static void C_ccall trf_2288(C_word c,C_word *av) C_noret;
static void C_ccall trf_2288(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2288(t0,t1);}

C_noret_decl(trf_2285)
static void C_ccall trf_2285(C_word c,C_word *av) C_noret;
static void C_ccall trf_2285(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2285(t0,t1);}

C_noret_decl(trf_2141)
static void C_ccall trf_2141(C_word c,C_word *av) C_noret;
static void C_ccall trf_2141(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2141(t0,t1,t2);}

C_noret_decl(trf_2294)
static void C_ccall trf_2294(C_word c,C_word *av) C_noret;
static void C_ccall trf_2294(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2294(t0,t1);}

C_noret_decl(trf_2291)
static void C_ccall trf_2291(C_word c,C_word *av) C_noret;
static void C_ccall trf_2291(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2291(t0,t1);}

C_noret_decl(trf_2118)
static void C_ccall trf_2118(C_word c,C_word *av) C_noret;
static void C_ccall trf_2118(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2118(t0,t1,t2,t3);}

C_noret_decl(trf_2116)
static void C_ccall trf_2116(C_word c,C_word *av) C_noret;
static void C_ccall trf_2116(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2116(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2297)
static void C_ccall trf_2297(C_word c,C_word *av) C_noret;
static void C_ccall trf_2297(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2297(t0,t1);}

C_noret_decl(trf_2261)
static void C_ccall trf_2261(C_word c,C_word *av) C_noret;
static void C_ccall trf_2261(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2261(t0,t1);}

C_noret_decl(trf_2264)
static void C_ccall trf_2264(C_word c,C_word *av) C_noret;
static void C_ccall trf_2264(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2264(t0,t1);}

C_noret_decl(trf_2267)
static void C_ccall trf_2267(C_word c,C_word *av) C_noret;
static void C_ccall trf_2267(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2267(t0,t1);}

C_noret_decl(trf_2273)
static void C_ccall trf_2273(C_word c,C_word *av) C_noret;
static void C_ccall trf_2273(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2273(t0,t1);}

C_noret_decl(trf_2270)
static void C_ccall trf_2270(C_word c,C_word *av) C_noret;
static void C_ccall trf_2270(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2270(t0,t1);}

C_noret_decl(trf_2279)
static void C_ccall trf_2279(C_word c,C_word *av) C_noret;
static void C_ccall trf_2279(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2279(t0,t1);}

C_noret_decl(trf_2276)
static void C_ccall trf_2276(C_word c,C_word *av) C_noret;
static void C_ccall trf_2276(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2276(t0,t1);}

C_noret_decl(trf_2240)
static void C_ccall trf_2240(C_word c,C_word *av) C_noret;
static void C_ccall trf_2240(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2240(t0,t1);}

C_noret_decl(trf_2246)
static void C_ccall trf_2246(C_word c,C_word *av) C_noret;
static void C_ccall trf_2246(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2246(t0,t1);}

C_noret_decl(trf_3876)
static void C_ccall trf_3876(C_word c,C_word *av) C_noret;
static void C_ccall trf_3876(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3876(t0,t1,t2);}

C_noret_decl(trf_2258)
static void C_ccall trf_2258(C_word c,C_word *av) C_noret;
static void C_ccall trf_2258(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2258(t0,t1);}

C_noret_decl(trf_3832)
static void C_ccall trf_3832(C_word c,C_word *av) C_noret;
static void C_ccall trf_3832(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3832(t0,t1,t2);}

C_noret_decl(trf_2185)
static void C_ccall trf_2185(C_word c,C_word *av) C_noret;
static void C_ccall trf_2185(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2185(t0,t1);}

C_noret_decl(trf_2182)
static void C_ccall trf_2182(C_word c,C_word *av) C_noret;
static void C_ccall trf_2182(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2182(t0,t1);}

/* f5812 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2231 in k2228 in k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in ... */
static void C_ccall f5812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f5812,2,av);}
/* batch-driver.scm:108: debugging */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3855 in map-loop731 in k3818 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in ... */
static void C_ccall f_3857(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3857,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3832(t6,((C_word*)t0)[5],t5);}

/* k2799 in k2796 in k2793 in k2790 in k2787 in k2784 in k2735 in k2732 in a2729 in k2711 in k2708 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in ... */
static void C_ccall f_2801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_2801,2,av);}
a=C_alloc(4);
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* batch-driver.scm:644: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2684(t3,((C_word*)t0)[4],t2,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[7]);}

/* f5794 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in ... */
static void C_ccall f5794(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f5794,2,av);}
/* batch-driver.scm:108: debugging */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1833 in k1821 in print-header in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1835,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:114: ##sys#print */
t3=*((C_word*)lf[34]+1);{
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

/* k1836 in k1833 in k1821 in print-header in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1838,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1841,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:114: ##sys#write-char-0 */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(93);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3983 in doloop651 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in ... */
static void C_ccall f_3985(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_3985,2,av);}
a=C_alloc(22);
t2=t1;
t3=((C_word*)t0)[2];
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3988,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3995,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4000,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4028,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:416: ##sys#dynamic-wind */
t11=*((C_word*)lf[257]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t11;
av2[1]=t7;
av2[2]=t8;
av2[3]=t9;
av2[4]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}

/* k3986 in k3983 in doloop651 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in ... */
static void C_ccall f_3988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3988,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)((C_word*)t0)[3])[1];
f_3876(t4,((C_word*)t0)[4],t3);}

/* k4888 in map-loop78 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_4890(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4890,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4865(t6,((C_word*)t0)[5],t5);}

/* print-db in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_fcall f_1868(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1868,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(5);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1875,a[2]=t1,a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:124: print-header */
f_1819(t6,t2,t3);}

/* k1864 in k1851 in print-node in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1866,2,av);}
/* batch-driver.scm:121: pretty-print */
t2=*((C_word*)lf[39]+1);{
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

/* k3970 in map-loop656 in doloop651 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in ... */
static void C_ccall f_3972(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3972,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3947(t6,((C_word*)t0)[5],t5);}

/* k2970 in k2964 in k2961 in k2958 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in ... */
static void C_ccall f_2972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2972,2,av);}
/* batch-driver.scm:609: emit-type-file */
t2=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2832 in k2828 in k2825 in k2822 in k2819 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in ... */
static void C_ccall f_2834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_2834,2,av);}
a=C_alloc(15);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2837,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* batch-driver.scm:669: end-time */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2076(t4,t3,lf[131]);}

/* k2828 in k2825 in k2822 in k2819 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in ... */
static void C_ccall f_2830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_2830,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2834,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* batch-driver.scm:668: perform-closure-conversion */
t3=*((C_word*)lf[132]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* map-loop78 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_fcall f_4865(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4865,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4890,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:74: g84 */
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

/* k1851 in print-node in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1853,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
/* batch-driver.scm:120: dump-nodes */
t2=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1866,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:121: build-expression-tree */
t3=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2835 in k2832 in k2828 in k2825 in k2822 in k2819 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in ... */
static void C_ccall f_2837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_2837,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2840,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* batch-driver.scm:670: print-db */
t3=((C_word*)((C_word*)t0)[13])[1];
f_1868(t3,t2,lf[129],lf[130],((C_word*)t0)[3],((C_word*)t0)[14]);}

/* k2841 in k2838 in k2835 in k2832 in k2828 in k2825 in k2822 in k2819 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in ... */
static void C_ccall f_2843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_2843,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2846,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:674: print-node */
t3=((C_word*)((C_word*)t0)[11])[1];
f_1846(t3,t2,lf[125],lf[126],((C_word*)((C_word*)t0)[2])[1]);}

/* k2838 in k2835 in k2832 in k2828 in k2825 in k2822 in k2819 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in ... */
static void C_ccall f_2840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_2840,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2843,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(*((C_word*)lf[127]+1))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2930,a[2]=((C_word*)t0)[12],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:105: current-milliseconds */
t4=*((C_word*)lf[47]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2843(2,av2);}}}

/* k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2828 in k2825 in k2822 in k2819 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in ... */
static void C_ccall f_2849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2849,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2852,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:676: begin-time */
t3=((C_word*)((C_word*)t0)[8])[1];
f_2066(t3,t2);}

/* k1882 in k1879 in k1873 in print-db in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1884,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1887,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:125: ##sys#write-char-0 */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(41);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1885 in k1882 in k1879 in k1873 in print-db in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1887,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:125: ##sys#write-char-0 */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2844 in k2841 in k2838 in k2835 in k2832 in k2828 in k2825 in k2822 in k2819 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in ... */
static void C_ccall f_2846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2846,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2849,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[10])){
/* batch-driver.scm:675: exit */
t3=*((C_word*)lf[124]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2849(2,av2);}}}

/* k1879 in k1873 in print-db in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1881,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1884,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:125: ##sys#print */
t3=*((C_word*)lf[34]+1);{
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
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3909 in k3899 in k3895 in doloop651 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in ... */
static void C_ccall f_3911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3911,2,av);}
/* batch-driver.scm:419: append */
t2=*((C_word*)lf[230]+1);{
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

/* map-loop682 in k3899 in k3895 in doloop651 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in ... */
static void C_fcall f_3913(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3913,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3938,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:421: g688 */
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

/* map-loop656 in doloop651 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in ... */
static void C_fcall f_3947(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3947,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3972,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:419: g662 */
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

/* k2822 in k2819 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in ... */
static void C_ccall f_2824(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,4)))){
C_save_and_reclaim((void *)f_2824,2,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2827,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
t3=(C_truep(((C_word*)((C_word*)t0)[15])[1])?*((C_word*)lf[133]+1):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=((C_word*)((C_word*)t0)[15])[1];
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2936,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=t5;
t7=C_a_i_list(&a,1,t4);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5658,a[2]=t6,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t8;
av2[2]=*((C_word*)lf[112]+1);
av2[3]=lf[135];
av2[4]=t7;
C_apply(5,av2);}}
else{
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2827(2,av2);}}}

/* k2819 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in ... */
static void C_ccall f_2821(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_2821,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2824,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* batch-driver.scm:659: print-node */
t3=((C_word*)((C_word*)t0)[11])[1];
f_1846(t3,t2,lf[136],lf[137],((C_word*)((C_word*)t0)[2])[1]);}

/* k1821 in print-header in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1823,2,av);}
a=C_alloc(5);
if(C_truep(C_i_memq(((C_word*)t0)[2],*((C_word*)lf[30]+1)))){
t2=*((C_word*)lf[31]+1);
t3=*((C_word*)lf[31]+1);
t4=C_i_check_port_2(*((C_word*)lf[31]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[32]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1835,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:114: ##sys#write-char-0 */
t6=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_make_character(91);
av2[3]=*((C_word*)lf[31]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2825 in k2822 in k2819 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_2827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_2827,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2830,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* batch-driver.scm:666: begin-time */
t3=((C_word*)((C_word*)t0)[8])[1];
f_2066(t3,t2);}

/* k3936 in map-loop682 in k3899 in k3895 in doloop651 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in ... */
static void C_ccall f_3938(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3938,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3913(t6,((C_word*)t0)[5],t5);}

/* for-each-loop539 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in ... */
static void C_fcall f_4211(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4211,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4221,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:313: g540 */
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

/* k4300 in for-each-loop419 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in ... */
static void C_ccall f_4302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4302,2,av);}
t2=C_SCHEME_END_OF_LIST;
if(C_truep(C_i_nullp(t2))){
/* tweaks.scm:54: ##sys#put! */
t3=*((C_word*)lf[319]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[320];
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=C_i_car(t2);
/* tweaks.scm:54: ##sys#put! */
t4=*((C_word*)lf[319]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[320];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k2868 in k2865 in a2862 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2828 in k2825 in k2822 in k2819 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in ... */
static void C_ccall f_2870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_2870,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[4])){
/* batch-driver.scm:683: open-output-file */
t3=*((C_word*)lf[122]+1);{
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
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=*((C_word*)lf[31]+1);
f_2873(2,av2);}}}

/* k2871 in k2868 in k2865 in a2862 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2828 in k2825 in k2822 in k2819 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in ... */
static void C_ccall f_2873(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_2873,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2876,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
t4=t3;
t5=C_a_i_list(&a,1,((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5652,a[2]=t4,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[112]+1);
av2[3]=lf[121];
av2[4]=t5;
C_apply(5,av2);}}

/* print-header in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_fcall f_1819(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_1819,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1823,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:111: debugging */
t5=*((C_word*)lf[35]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[36];
av2[3]=lf[37];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k2874 in k2871 in k2868 in k2865 in a2862 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2828 in k2825 in k2822 in k2819 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in ... */
static void C_ccall f_2876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,9)))){
C_save_and_reclaim((void *)f_2876,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2879,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:685: generate-code */
t3=*((C_word*)lf[120]+1);{
C_word *av2;
if(c >= 10) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(10);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=((C_word*)t0)[8];
av2[5]=((C_word*)t0)[5];
av2[6]=((C_word*)t0)[9];
av2[7]=((C_word*)t0)[10];
av2[8]=((C_word*)t0)[11];
av2[9]=((C_word*)t0)[12];
((C_proc)(void*)(*((C_word*)t3+1)))(10,av2);}}

/* k2877 in k2874 in k2871 in k2868 in k2865 in a2862 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2828 in k2825 in k2822 in k2819 in k2702 in k2699 in k2696 in k2692 in k2689 in ... */
static void C_ccall f_2879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2879,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2882,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
/* batch-driver.scm:688: close-output-port */
t3=*((C_word*)lf[119]+1);{
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
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2882(2,av2);}}}

/* k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in ... */
static void C_ccall f_2701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_2701,2,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2704,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
if(C_truep(C_i_memq(lf[141],*((C_word*)lf[30]+1)))){
/* batch-driver.scm:615: print-program-statistics */
t3=*((C_word*)lf[142]+1);{
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
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2704(2,av2);}}}

/* k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in a2862 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2828 in k2825 in k2822 in k2819 in k2702 in k2699 in k2696 in k2692 in ... */
static void C_ccall f_2882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2882,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2885,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:689: end-time */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2076(t3,t2,lf[118]);}

/* k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in a2862 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2828 in k2825 in k2822 in k2819 in k2702 in k2699 in k2696 in ... */
static void C_ccall f_2885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2885,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2888,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_memq(lf[115],*((C_word*)lf[30]+1)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2904,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:691: ##sys#stop-timer */
t4=*((C_word*)lf[117]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5243,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:692: compiler-cleanup-hook */
t4=*((C_word*)lf[114]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* print-node in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_fcall f_1846(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1846,5,t0,t1,t2,t3,t4);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1853,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:118: print-header */
f_1819(t5,t2,t3);}

/* k2886 in k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in a2862 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2828 in k2825 in k2822 in k2819 in k2702 in k2699 in ... */
static void C_ccall f_2888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2888,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2891,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:692: compiler-cleanup-hook */
t3=*((C_word*)lf[114]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1839 in k1836 in k1833 in k1821 in print-header in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1841(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1841,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1844,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:114: ##sys#write-char-0 */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1842 in k1839 in k1836 in k1833 in k1821 in print-header in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 in ... */
static void C_ccall f_1844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1844,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2828 in k2825 in k2822 in k2819 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in ... */
static void C_ccall f_2852(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,7)))){
C_save_and_reclaim((void *)f_2852,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2857,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2863,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:678: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[9];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in ... */
static void C_ccall f_2704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_2704,2,av);}
a=C_alloc(22);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2710,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm:619: debugging */
t3=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[36];
av2[3]=lf[110];
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2821,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[16],a[7]=((C_word*)t0)[17],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[18],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[19],a[13]=((C_word*)t0)[20],a[14]=((C_word*)t0)[6],a[15]=((C_word*)t0)[21],tmp=(C_word)a,a+=16,tmp);
if(C_truep(((C_word*)t0)[22])){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2942,a[2]=((C_word*)t0)[10],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:655: begin-time */
t4=((C_word*)((C_word*)t0)[11])[1];
f_2066(t4,t3);}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2821(2,av2);}}}}

/* a2856 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2828 in k2825 in k2822 in k2819 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in ... */
static void C_ccall f_2857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2857,2,av);}
/* batch-driver.scm:679: prepare-for-code-generation */
t2=*((C_word*)lf[111]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a2862 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2828 in k2825 in k2822 in k2819 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in ... */
static void C_ccall f_2863(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_2863,7,av);}
a=C_alloc(13);
t7=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2867,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t4,a[7]=t5,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=t6,a[12]=((C_word*)t0)[7],tmp=(C_word)a,a+=13,tmp);
/* batch-driver.scm:680: end-time */
t8=((C_word*)((C_word*)t0)[2])[1];
f_2076(t8,t7,lf[123]);}

/* k2865 in a2862 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2828 in k2825 in k2822 in k2819 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in ... */
static void C_ccall f_2867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_2867,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2870,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* batch-driver.scm:681: begin-time */
t3=((C_word*)((C_word*)t0)[12])[1];
f_2066(t3,t2);}

/* a3994 in k3983 in doloop651 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in ... */
static void C_ccall f_3995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3995,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[254]+1));
t3=C_mutate2((C_word*)lf[254]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in a2862 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2828 in k2825 in k2822 in k2819 in k2702 in ... */
static void C_ccall f_2891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2891,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5640,a[2]=t2,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[112]+1);
av2[3]=lf[113];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}

/* k1873 in print-db in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1875,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=*((C_word*)lf[31]+1);
t3=*((C_word*)lf[31]+1);
t4=C_i_check_port_2(*((C_word*)lf[31]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[32]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:125: ##sys#print */
t6=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[42];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[31]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop364 in k4495 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in ... */
static void C_fcall f_4505(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4505,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4530,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:277: g370 */
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

/* k4501 in k4495 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in ... */
static void C_ccall f_4503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4503,2,av);}
/* batch-driver.scm:277: append */
t2=*((C_word*)lf[230]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=*((C_word*)lf[66]+1);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* f5800 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in ... */
static void C_ccall f5800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f5800,2,av);}
/* batch-driver.scm:108: debugging */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2770 in k2735 in k2732 in a2729 in k2711 in k2708 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in ... */
static void C_ccall f_2772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_2772,2,av);}
a=C_alloc(4);
t2=C_set_block_item(lf[100] /* ##compiler#inline-substitutions-enabled */,0,C_SCHEME_TRUE);
t3=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* batch-driver.scm:635: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2684(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],C_SCHEME_TRUE,C_SCHEME_FALSE,((C_word*)t0)[6]);}

/* f5806 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in ... */
static void C_ccall f5806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f5806,2,av);}
/* batch-driver.scm:108: debugging */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* print-expr in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_fcall f_1895(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_1895,5,t0,t1,t2,t3,t4);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1902,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:129: print-header */
f_1819(t5,t2,t3);}

/* arg-val in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_fcall f_1941(C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_1941,2,t1,t2);}
a=C_alloc(8);
t3=C_i_string_length(t2);
t4=C_a_i_minus(&a,2,t3,C_fix(1));
if(C_truep(C_fixnum_lessp(t3,C_fix(2)))){
t5=C_a_i_string_to_number(&a,2,t2,C_fix(10));
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
/* batch-driver.scm:145: quit */
t6=*((C_word*)lf[6]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[45];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}
else{
t5=C_i_string_ref(t2,t4);
t6=C_eqp(t5,C_make_character(109));
t7=(C_truep(t6)?t6:C_eqp(t5,C_make_character(77)));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1990,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:142: substring */
t9=*((C_word*)lf[46]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t8=C_eqp(t5,C_make_character(107));
t9=(C_truep(t8)?t8:C_eqp(t5,C_make_character(75)));
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2010,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:143: substring */
t11=*((C_word*)lf[46]+1);{
C_word av2[5];
av2[0]=t11;
av2[1]=t10;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
t10=C_a_i_string_to_number(&a,2,t2,C_fix(10));
if(C_truep(t10)){
t11=t1;{
C_word av2[2];
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
/* batch-driver.scm:145: quit */
t11=*((C_word*)lf[6]+1);{
C_word av2[4];
av2[0]=t11;
av2[1]=t1;
av2[2]=lf[45];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}}}}}

/* k1888 in k1885 in k1882 in k1879 in k1873 in print-db in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 in ... */
static void C_ccall f_1890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1890,2,av);}
/* batch-driver.scm:126: display-analysis-database */
t2=*((C_word*)lf[41]+1);{
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

/* k4219 in for-each-loop539 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in ... */
static void C_ccall f_4221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4221,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4211(t3,((C_word*)t0)[4],t2);}

/* k2711 in k2708 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in ... */
static void C_ccall f_2713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_2713,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2718,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2730,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:621: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[13];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* k2708 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in ... */
static void C_ccall f_2710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_2710,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2713,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm:620: begin-time */
t3=((C_word*)((C_word*)t0)[10])[1];
f_2066(t3,t2);}

/* a4233 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in ... */
static void C_ccall f_4234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4234,3,av);}
t3=*((C_word*)lf[311]+1);
/* batch-driver.scm:315: g555 */
t4=*((C_word*)lf[311]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[312];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2787 in k2784 in k2735 in k2732 in a2729 in k2711 in k2708 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in ... */
static void C_ccall f_2789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2789,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2792,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:639: end-time */
t4=((C_word*)((C_word*)t0)[7])[1];
f_2076(t4,t3,lf[104]);}

/* k2784 in k2735 in k2732 in a2729 in k2711 in k2708 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in ... */
static void C_ccall f_2786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_2786,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2789,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:638: analyze */
t3=((C_word*)((C_word*)t0)[9])[1];
f_2116(t3,t2,lf[105],((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k1926 in for-each-loop164 in k1900 in print-expr in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1928,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1918(t3,((C_word*)t0)[4],t2);}

/* k4240 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in ... */
static void C_ccall f_4242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4242,2,av);}
/* batch-driver.scm:315: append-map */
t2=*((C_word*)lf[313]+1);{
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

/* for-each-loop514 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in ... */
static void C_fcall f_4244(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4244,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4254,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:310: g515 */
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

/* a2717 in k2711 in k2708 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_2718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2718,2,av);}
if(C_truep(((C_word*)t0)[2])){
/* batch-driver.scm:623: determine-loop-and-dispatch */
t2=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
/* batch-driver.scm:624: perform-high-level-optimizations */
t2=*((C_word*)lf[98]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* g208 in loop in collect-options in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_fcall f_2045(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2045,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2053,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:149: option-arg */
f_1714(t3,t2);}

/* f5646 */
static void C_ccall f5646(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f5646,2,av);}
/* batch-driver.scm:108: debugging */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* for-each-loop164 in k1900 in print-expr in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_fcall f_1918(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_1918,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1928,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1907,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:132: pretty-print */
t7=*((C_word*)lf[39]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2732 in a2729 in k2711 in k2708 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in ... */
static void C_ccall f_2734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_2734,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2737,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* batch-driver.scm:626: print-node */
t3=((C_word*)((C_word*)t0)[13])[1];
f_1846(t3,t2,lf[107],lf[108],((C_word*)t0)[6]);}

/* a2729 in k2711 in k2708 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_2730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_2730,4,av);}
a=C_alloc(14);
t4=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2734,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm:625: end-time */
t5=((C_word*)((C_word*)t0)[7])[1];
f_2076(t5,t4,lf[109]);}

/* f5640 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in a2862 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2828 in k2825 in k2822 in k2819 in ... */
static void C_ccall f5640(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f5640,2,av);}
/* batch-driver.scm:108: debugging */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2055 in k2051 in g208 in loop in collect-options in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_2057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2057,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4342 in for-each-loop466 in k4323 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in ... */
static void C_ccall f_4344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4344,2,av);}
t2=C_SCHEME_END_OF_LIST;
if(C_truep(C_i_nullp(t2))){
/* tweaks.scm:54: ##sys#put! */
t3=*((C_word*)lf[319]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[320];
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=C_i_car(t2);
/* tweaks.scm:54: ##sys#put! */
t4=*((C_word*)lf[319]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[320];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* f5658 in k2822 in k2819 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f5658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f5658,2,av);}
/* batch-driver.scm:108: debugging */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a4266 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in ... */
static void C_ccall f_4267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4267,3,av);}
t3=*((C_word*)lf[311]+1);
/* batch-driver.scm:312: g530 */
t4=*((C_word*)lf[311]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[315];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2051 in g208 in loop in collect-options in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_2053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2053,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2057,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cddr(((C_word*)t0)[3]);
/* batch-driver.scm:149: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2037(t5,t3,t4);}

/* f5652 in k2871 in k2868 in k2865 in a2862 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2828 in k2825 in k2822 in k2819 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in ... */
static void C_ccall f5652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f5652,2,av);}
/* batch-driver.scm:108: debugging */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2735 in k2732 in a2729 in k2711 in k2708 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in ... */
static void C_ccall f_2737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,6)))){
C_save_and_reclaim((void *)f_2737,2,av);}
a=C_alloc(10);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* batch-driver.scm:628: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2684(t3,((C_word*)t0)[5],t2,((C_word*)t0)[6],C_SCHEME_TRUE,C_SCHEME_FALSE,((C_word*)t0)[7]);}
else{
t2=((C_word*)t0)[8];
t3=(C_truep(t2)?C_SCHEME_FALSE:((C_word*)t0)[9]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2756,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:630: debugging */
t5=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[36];
av2[3]=lf[99];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=*((C_word*)lf[100]+1);
if(C_truep(*((C_word*)lf[100]+1))){
if(C_truep(*((C_word*)lf[101]+1))){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2786,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:637: begin-time */
t6=((C_word*)((C_word*)t0)[11])[1];
f_2066(t6,t5);}
else{
t5=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* batch-driver.scm:650: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2684(t6,((C_word*)t0)[5],t5,((C_word*)t0)[6],C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[8]);}}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2772,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:633: debugging */
t6=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[36];
av2[3]=lf[106];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}}}

/* k3313 in k3303 in k3300 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in ... */
static void C_ccall f_3315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3315,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* batch-driver.scm:515: end-time */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2076(t3,((C_word*)t0)[4],lf[199]);}

/* for-each-loop1029 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in ... */
static void C_fcall f_3215(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_3215,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3225,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3187,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3206,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3210,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:535: symbol->string */
t9=*((C_word*)lf[173]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3208 in for-each-loop1029 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in ... */
static void C_ccall f_3210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3210,2,av);}
/* batch-driver.scm:535: make-pathname */
t2=*((C_word*)lf[171]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=t1;
av2[4]=lf[187];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* begin-time in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_fcall f_2066(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2066,2,t0,t1);}
a=C_alloc(4);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2074,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:105: current-milliseconds */
t3=*((C_word*)lf[47]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_fcall f_1801(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(94,0,6)))){
C_save_and_reclaim_args((void *)trf_1801,2,t0,t1);}
a=C_alloc(94);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1819,tmp=(C_word)a,a+=2,tmp));
t22=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1846,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t23=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1868,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t24=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1895,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t25=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1941,tmp=(C_word)a,a+=2,tmp));
t26=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2031,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp));
t27=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2066,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp));
t28=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2076,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp));
t29=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2116,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp));
t30=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_2182,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=t18,a[13]=t16,a[14]=t20,a[15]=t6,a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=t8,a[20]=((C_word*)t0)[18],a[21]=((C_word*)t0)[19],a[22]=((C_word*)t0)[20],a[23]=((C_word*)t0)[21],a[24]=t14,a[25]=t10,a[26]=((C_word*)t0)[22],a[27]=((C_word*)t0)[23],a[28]=((C_word*)t0)[24],a[29]=((C_word*)t0)[25],a[30]=((C_word*)t0)[26],a[31]=t2,a[32]=t12,a[33]=((C_word*)t0)[3],a[34]=((C_word*)t0)[27],a[35]=((C_word*)t0)[28],a[36]=((C_word*)t0)[29],a[37]=((C_word*)t0)[5],tmp=(C_word)a,a+=38,tmp);
if(C_truep(((C_word*)t0)[30])){
t31=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4843,a[2]=t30,tmp=(C_word)a,a+=3,tmp);
t32=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4847,a[2]=t31,tmp=(C_word)a,a+=3,tmp);
t33=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4851,a[2]=t32,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:172: option-arg */
f_1714(t33,((C_word*)t0)[30]);}
else{
t31=t30;
f_2182(t31,C_SCHEME_UNDEFINED);}}

/* k4273 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in ... */
static void C_ccall f_4275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4275,2,av);}
/* batch-driver.scm:312: append-map */
t2=*((C_word*)lf[313]+1);{
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

/* f5243 in k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in a2862 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2828 in k2825 in k2822 in k2819 in k2702 in k2699 in ... */
static void C_ccall f5243(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f5243,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5646,a[2]=t2,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[112]+1);
av2[3]=lf[113];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}

/* k3204 in for-each-loop1029 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in ... */
static void C_ccall f_3206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3206,2,av);}
/* batch-driver.scm:534: ##sys#resolve-include-filename */
t2=*((C_word*)lf[186]+1);{
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
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4323 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in ... */
static void C_ccall f_4325(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4325,2,av);}
a=C_alloc(5);
t2=*((C_word*)lf[295]+1);
t3=C_i_check_list_2(*((C_word*)lf[295]+1),lf[43]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4369,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4369(t7,((C_word*)t0)[2],*((C_word*)lf[295]+1));}

/* k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in ... */
static void C_ccall f_2606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,2)))){
C_save_and_reclaim((void *)f_2606,2,av);}
a=C_alloc(25);
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2609,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
t3=(C_truep(*((C_word*)lf[205]+1))?((C_word*)t0)[9]:C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3367,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:499: open-output-string */
t5=*((C_word*)lf[210]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2609(2,av2);}}}

/* k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in ... */
static void C_ccall f_2609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_2609,2,av);}
a=C_alloc(22);
t2=C_mutate2((C_word*)lf[87]+1 /* (set! ##sys#line-number-database ...) */,*((C_word*)lf[90]+1));
t3=C_set_block_item(lf[90] /* ##compiler#line-number-database-2 */,0,C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2614,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
/* batch-driver.scm:504: end-time */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2076(t5,t4,lf[204]);}

/* k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in ... */
static void C_ccall f_2603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_2603,2,av);}
a=C_alloc(25);
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2606,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3385,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:494: debugging */
t4=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[212];
av2[3]=lf[213];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in ... */
static void C_ccall f_2600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_2600,2,av);}
a=C_alloc(25);
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2603,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3391,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:492: debugging */
t4=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[215];
av2[3]=lf[216];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2008 in arg-val in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_2010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2010,2,av);}
a=C_alloc(8);
t2=C_a_i_string_to_number(&a,2,t1,C_fix(10));
t3=C_a_i_times(&a,2,t2,C_fix(1024));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* batch-driver.scm:145: quit */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[45];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k1988 in arg-val in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1990,2,av);}
a=C_alloc(8);
t2=C_a_i_string_to_number(&a,2,t1,C_fix(10));
t3=C_a_i_times(&a,2,t2,C_fix(1048576));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* batch-driver.scm:145: quit */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[45];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k2793 in k2790 in k2787 in k2784 in k2735 in k2732 in a2729 in k2711 in k2708 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in ... */
static void C_ccall f_2795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2795,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2798,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:642: transform-direct-lambdas! */
t3=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2790 in k2787 in k2784 in k2735 in k2732 in a2729 in k2711 in k2708 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in ... */
static void C_ccall f_2792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_2792,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:640: begin-time */
t3=((C_word*)((C_word*)t0)[9])[1];
f_2066(t3,t2);}

/* k3303 in k3300 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_3305(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_3305,2,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=((C_word*)t0)[2];
t7=((C_word*)((C_word*)t0)[3])[1];
t8=C_i_check_list_2(t7,lf[57]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3315,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3320,a[2]=t4,a[3]=t11,a[4]=t6,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3320(t13,t9,t7);}

/* k3300 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_ccall f_3302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3302,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3305,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:513: begin-time */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2066(t3,t2);}

/* loop in collect-options in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_fcall f_2037(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_2037,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_memq(((C_word*)t0)[2],t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2045,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:56: g208 */
t5=t4;
f_2045(t5,t1,t3);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* collect-options in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_fcall f_2031(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_2031,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2037,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_2037(t6,t1,((C_word*)t0)[3]);}

/* k3412 in for-each-loop921 in k3404 in a3401 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in ... */
static void C_ccall f_3414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3414,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3417,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* batch-driver.scm:490: ##sys#print */
t4=*((C_word*)lf[34]+1);{
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
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2796 in k2793 in k2790 in k2787 in k2784 in k2735 in k2732 in a2729 in k2711 in k2708 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in ... */
static void C_ccall f_2798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2798,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2801,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:643: end-time */
t4=((C_word*)((C_word*)t0)[7])[1];
f_2076(t4,t3,lf[102]);}

/* k3415 in k3412 in for-each-loop921 in k3404 in a3401 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_3417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3417,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3420,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:490: ##sys#print */
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[218];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4377 in for-each-loop466 in k4323 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in ... */
static void C_ccall f_4379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4379,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4369(t3,((C_word*)t0)[4],t2);}

/* map-loop965 in k3303 in k3300 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in ... */
static void C_fcall f_3320(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3320,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3345,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:514: g971 */
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

/* k3404 in a3401 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in ... */
static void C_ccall f_3406(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3406,2,av);}
a=C_alloc(5);
t2=*((C_word*)lf[217]+1);
t3=C_i_check_list_2(*((C_word*)lf[217]+1),lf[43]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3440,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3440(t7,((C_word*)t0)[2],*((C_word*)lf[217]+1));}

/* k4252 in for-each-loop514 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in ... */
static void C_ccall f_4254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4254,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4244(t3,((C_word*)t0)[4],t2);}

/* a3401 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in ... */
static void C_ccall f_3402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3402,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3406,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:488: print */
t3=*((C_word*)lf[220]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[221];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3389 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in ... */
static void C_ccall f_3391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3391,2,av);}
if(C_truep(t1)){
/* batch-driver.scm:493: display-real-name-table */
t2=*((C_word*)lf[214]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_2603(2,av2);}}}

/* k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_ccall f_2623(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_2623,2,av);}
a=C_alloc(31);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_2626,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3302,a[2]=t2,a[3]=((C_word*)t0)[20],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5696,a[2]=t5,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[112]+1);
av2[3]=lf[200];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2626(2,av2);}}}

/* k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_2620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_2620,2,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_2623,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
/* batch-driver.scm:510: user-pass */
t3=*((C_word*)lf[3]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2505 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in ... */
static void C_ccall f_2507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2507,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2510,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:388: display */
t3=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[273];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_ccall f_2626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_2626,2,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_3295,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],tmp=(C_word)a,a+=20,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3299,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:521: canonicalize-begin-body */
t4=*((C_word*)lf[198]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[20])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3343 in map-loop965 in k3303 in k3300 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in ... */
static void C_ccall f_3345(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3345,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3320(t6,((C_word*)t0)[5],t5);}

/* k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in ... */
static void C_ccall f_2670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_2670,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2673,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* batch-driver.scm:586: perform-cps-conversion */
t3=*((C_word*)lf[158]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[17];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in ... */
static void C_ccall f_2673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_2673,2,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2676,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=t2,tmp=(C_word)a,a+=18,tmp);
/* batch-driver.scm:587: end-time */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2076(t4,t3,lf[157]);}

/* k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in ... */
static void C_ccall f_2519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_2519,2,av);}
a=C_alloc(27);
t2=C_mutate2((C_word*)lf[86]+1 /* (set! ##compiler#source-filename ...) */,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2523,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:396: debugging */
t4=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[265];
av2[3]=lf[269];
av2[4]=((C_word*)t0)[19];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4528 in map-loop364 in k4495 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in ... */
static void C_ccall f_4530(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4530,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4505(t6,((C_word*)t0)[5],t5);}

/* k2511 in k2508 in k2505 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in ... */
static void C_ccall f_2513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2513,2,av);}
/* batch-driver.scm:390: display */
t2=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[271];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in ... */
static void C_ccall f_2679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,7)))){
C_save_and_reclaim((void *)f_2679,2,av);}
a=C_alloc(19);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2684,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp));
t5=((C_word*)t3)[1];
f_2684(t5,((C_word*)t0)[16],C_fix(1),((C_word*)t0)[17],C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in ... */
static void C_ccall f_2676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_2676,2,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2679,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
/* batch-driver.scm:588: print-node */
t3=((C_word*)((C_word*)t0)[6])[1];
f_1846(t3,t2,lf[155],lf[156],((C_word*)t0)[17]);}

/* k2508 in k2505 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in ... */
static void C_ccall f_2510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2510,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2513,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:389: display */
t3=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[272];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in ... */
static void C_fcall f_2684(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,0,2)))){
C_save_and_reclaim_args((void *)trf_2684,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(25);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2688,a[2]=t4,a[3]=t5,a[4]=t7,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=t6,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],a[13]=t1,a[14]=((C_word*)t0)[8],a[15]=((C_word*)t0)[9],a[16]=((C_word*)t0)[10],a[17]=((C_word*)t0)[11],a[18]=((C_word*)t0)[12],a[19]=((C_word*)t0)[13],a[20]=((C_word*)t0)[14],a[21]=((C_word*)t0)[15],a[22]=((C_word*)t0)[16],tmp=(C_word)a,a+=23,tmp);
/* batch-driver.scm:596: begin-time */
t9=((C_word*)((C_word*)t0)[5])[1];
f_2066(t9,t8);}

/* k2754 in k2735 in k2732 in a2729 in k2711 in k2708 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in ... */
static void C_ccall f_2756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_2756,2,av);}
a=C_alloc(4);
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* batch-driver.scm:631: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2684(t3,((C_word*)t0)[4],t2,((C_word*)t0)[5],C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* k1681 */
static void C_ccall f_1683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1683,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1686,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in ... */
static void C_ccall f_2688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_2688,2,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2691,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
/* batch-driver.scm:598: analyze */
t3=((C_word*)((C_word*)t0)[11])[1];
f_2116(t3,t2,lf[154],((C_word*)((C_word*)t0)[4])[1],C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[2]));}

/* k1687 in k1684 in k1681 */
static void C_ccall f_1689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1689,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1693,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:36: make-parameter */
t3=*((C_word*)lf[415]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1684 in k1681 */
static void C_ccall f_1686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1686,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1689,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k3365 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in ... */
static void C_ccall f_3367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3367,2,av);}
a=C_alloc(5);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[112]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3373,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:499: ##sys#print */
t6=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[209];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2087 in k2084 in end-time in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_2089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2089,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2092,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:157: ##sys#print */
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[49];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2084 in end-time in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_2086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2086,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2089,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:157: ##sys#print */
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in ... */
static void C_ccall f_2652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_2652,2,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2655,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
/* batch-driver.scm:541: collect-options */
t3=((C_word*)((C_word*)t0)[21])[1];
f_2031(t3,t2,lf[182]);}

/* k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in ... */
static void C_ccall f_2655(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_2655,2,av);}
a=C_alloc(28);
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2658,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
if(C_truep(C_i_nullp(t1))){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2658(2,av2);}}
else{
t3=C_set_block_item(lf[179] /* ##compiler#inline-locally */,0,C_SCHEME_TRUE);
t4=C_i_check_list_2(t1,lf[43]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3161,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_3161(t8,t2,t1);}}

/* k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in ... */
static void C_ccall f_2658(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(34,c,2)))){
C_save_and_reclaim((void *)f_2658,2,av);}
a=C_alloc(34);
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2661,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
t3=((C_word*)((C_word*)t0)[18])[1];
t4=(C_truep(t3)?t3:*((C_word*)lf[54]+1));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3015,a[2]=((C_word*)t0)[19],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[17],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[18],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[20],a[12]=((C_word*)t0)[21],tmp=(C_word)a,a+=13,tmp);
t6=((C_word*)t0)[22];
if(C_truep(C_u_i_memq(lf[176],t6))){
t7=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_3015(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3138,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:553: load-type-database */
t8=*((C_word*)lf[170]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[178];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}
else{
t5=t2;
f_2661(t5,C_SCHEME_UNDEFINED);}}

/* k2093 in k2090 in k2087 in k2084 in end-time in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_2095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2095,2,av);}
/* batch-driver.scm:157: ##sys#write-char-0 */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2090 in k2087 in k2084 in end-time in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_2092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_2092,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2095,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2106,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2114,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:105: current-milliseconds */
t5=*((C_word*)lf[47]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* map-loop1003 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in ... */
static void C_fcall f_3251(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3251,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
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

/* for-each-loop419 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in ... */
static void C_fcall f_4392(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_4392,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4402,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4302,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_END_OF_LIST;
if(C_truep(C_i_nullp(t8))){
/* tweaks.scm:54: ##sys#put! */
t9=*((C_word*)lf[319]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t7;
av2[2]=t6;
av2[3]=lf[321];
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t9=C_i_car(t8);
/* tweaks.scm:54: ##sys#put! */
t10=*((C_word*)lf[319]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t7;
av2[2]=t6;
av2[3]=lf[321];
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3383 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in ... */
static void C_ccall f_3385(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3385,2,av);}
if(C_truep(t1)){
/* batch-driver.scm:495: display-line-number-database */
t2=*((C_word*)lf[211]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_2606(2,av2);}}}

/* k3380 in k3377 in k3374 in k3371 in k3365 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_ccall f_3382(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3382,2,av);}
/* batch-driver.scm:498: ##sys#notice */
t2=*((C_word*)lf[206]+1);{
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

/* k3247 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in ... */
static void C_ccall f_3249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3249,2,av);}
/* batch-driver.scm:528: concatenate */
t2=*((C_word*)lf[191]+1);{
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

/* for-each-loop466 in k4323 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in ... */
static void C_fcall f_4369(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_4369,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4379,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4344,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_END_OF_LIST;
if(C_truep(C_i_nullp(t8))){
/* tweaks.scm:54: ##sys#put! */
t9=*((C_word*)lf[319]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t7;
av2[2]=t6;
av2[3]=lf[321];
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t9=C_i_car(t8);
/* tweaks.scm:54: ##sys#put! */
t10=*((C_word*)lf[319]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t7;
av2[2]=t6;
av2[3]=lf[321];
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in ... */
static void C_ccall f_2637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_2637,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2640,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
/* batch-driver.scm:524: initialize-analysis-database */
t3=*((C_word*)lf[194]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3374 in k3371 in k3365 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_3376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3376,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3379,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:499: ##sys#print */
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[208];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3371 in k3365 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_3373(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3373,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3376,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:499: ##sys#print */
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=*((C_word*)lf[205]+1);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in ... */
static void C_ccall f_2643(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(38,c,3)))){
C_save_and_reclaim((void *)f_2643,2,av);}
a=C_alloc(38);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2646,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=t2,tmp=(C_word)a,a+=23,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3249,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3251,a[2]=t6,a[3]=t10,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_3251(t12,t8,t2);}

/* k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in ... */
static void C_ccall f_2640(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,2)))){
C_save_and_reclaim((void *)f_2640,2,av);}
a=C_alloc(25);
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2643,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3287,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:527: vector->list */
t4=*((C_word*)lf[192]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[193]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in ... */
static void C_ccall f_2649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_2649,2,av);}
a=C_alloc(28);
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2652,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
if(C_truep(*((C_word*)lf[183]+1))){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3215,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_3215(t6,t2,((C_word*)t0)[20]);}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2652(2,av2);}}}

/* k3377 in k3374 in k3371 in k3365 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_3379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3379,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3382,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:499: get-output-string */
t3=*((C_word*)lf[207]+1);{
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

/* k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in ... */
static void C_ccall f_2646(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_2646,2,av);}
a=C_alloc(27);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2649,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=t2,a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],tmp=(C_word)a,a+=23,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3239,a[2]=t3,a[3]=((C_word*)t0)[22],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:529: debugging */
t5=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[189];
av2[3]=lf[190];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_2614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_2614,2,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_2617,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
/* batch-driver.scm:505: print-expr */
t3=((C_word*)((C_word*)t0)[21])[1];
f_1895(t3,t2,lf[202],lf[203],((C_word*)((C_word*)t0)[20])[1]);}

/* k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_2617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_2617,2,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_2620,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
t3=((C_word*)t0)[19];
if(C_truep(C_u_i_memq(lf[201],t3))){
/* batch-driver.scm:507: exit */
t4=*((C_word*)lf[124]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2620(2,av2);}}}

/* k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1697,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[1]+1 /* (set! user-read-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1701,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:38: make-parameter */
t4=*((C_word*)lf[415]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1693,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[0]+1 /* (set! user-options-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1697,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:37: make-parameter */
t4=*((C_word*)lf[415]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* end-time in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_fcall f_2076(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_2076,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=*((C_word*)lf[31]+1);
t4=*((C_word*)lf[31]+1);
t5=C_i_check_port_2(*((C_word*)lf[31]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[32]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2086,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:157: ##sys#print */
t7=*((C_word*)lf[34]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[50];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[31]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2072 in begin-time in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_2074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2074,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f5716 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in ... */
static void C_ccall f5716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f5716,2,av);}
/* batch-driver.scm:108: debugging */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in ... */
static void C_ccall f_2546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(34,c,2)))){
C_save_and_reclaim((void *)f_2546,2,av);}
a=C_alloc(34);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|28,a[1]=(C_word)f_2549,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=t2,tmp=(C_word)a,a+=29,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4035,a[2]=((C_word*)t0)[8],a[3]=t3,a[4]=((C_word*)t0)[18],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:407: collect-options */
t5=((C_word*)((C_word*)t0)[18])[1];
f_2031(t5,t4,lf[260]);}

/* k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in ... */
static void C_fcall f_2661(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,2)))){
C_save_and_reclaim_args((void *)trf_2661,2,t0,t1);}
a=C_alloc(18);
t2=C_set_block_item(lf[87] /* ##sys#line-number-database */,0,C_SCHEME_FALSE);
t3=C_set_block_item(lf[94] /* ##compiler#constant-table */,0,C_SCHEME_FALSE);
t4=C_set_block_item(lf[95] /* ##compiler#inline-table */,0,C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2667,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
if(C_truep(*((C_word*)lf[159]+1))){
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_2667(2,av2);}}
else{
t6=C_slot(((C_word*)t0)[17],C_fix(3));
t7=C_i_car(t6);
/* batch-driver.scm:582: scan-toplevel-assignments */
t8=*((C_word*)lf[160]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t5;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}

/* k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in ... */
static void C_ccall f_2549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,2)))){
C_save_and_reclaim((void *)f_2549,2,av);}
a=C_alloc(30);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|29,a[1]=(C_word)f_2552,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=t2,a[29]=((C_word*)t0)[28],tmp=(C_word)a,a+=30,tmp);
/* batch-driver.scm:411: user-read-pass */
t4=*((C_word*)lf[1]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4565 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in ... */
static void C_ccall f_4567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4567,2,av);}
/* batch-driver.scm:264: parenthesis-synonyms */
t2=*((C_word*)lf[344]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f5722 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in ... */
static void C_ccall f5722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f5722,2,av);}
/* batch-driver.scm:108: debugging */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in ... */
static void C_ccall f_2667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_2667,2,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2670,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
/* batch-driver.scm:584: begin-time */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2066(t3,t2);}

/* k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_fcall f_1775(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(41,0,2)))){
C_save_and_reclaim_args((void *)trf_1775,2,t0,t1);}
a=C_alloc(41);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_u_i_memq(lf[20],t3);
t5=(C_truep(t4)?C_i_cadr(t4):C_SCHEME_FALSE);
t6=t5;
t7=((C_word*)t0)[2];
t8=C_u_i_memq(lf[21],t7);
t9=((C_word*)t0)[2];
t10=C_u_i_memq(lf[22],t9);
t11=((C_word*)t0)[2];
t12=C_u_i_memq(lf[23],t11);
t13=C_SCHEME_END_OF_LIST;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=((C_word*)t0)[2];
t16=C_u_i_memq(lf[24],t15);
t17=((C_word*)t0)[2];
t18=C_u_i_memq(lf[25],t17);
t19=((C_word*)t0)[2];
t20=C_u_i_memq(lf[26],t19);
t21=C_SCHEME_TRUE;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=((C_word*)t0)[2];
t24=C_u_i_memq(lf[27],t23);
t25=C_SCHEME_FALSE;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_SCHEME_FALSE;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=C_SCHEME_FALSE;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=((C_word*)t0)[2];
t32=C_u_i_memq(lf[28],t31);
t33=((C_word*)t0)[2];
t34=C_u_i_memq(lf[29],t33);
t35=(*a=C_CLOSURE_TYPE|30,a[1]=(C_word)f_1801,a[2]=t26,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t30,a[8]=((C_word*)t0)[6],a[9]=t14,a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=t28,a[14]=t12,a[15]=((C_word*)t0)[10],a[16]=t20,a[17]=t18,a[18]=((C_word*)t0)[11],a[19]=t24,a[20]=((C_word*)t0)[12],a[21]=t22,a[22]=((C_word*)t0)[13],a[23]=t6,a[24]=t32,a[25]=((C_word*)t0)[14],a[26]=t2,a[27]=t8,a[28]=((C_word*)t0)[15],a[29]=t10,a[30]=t16,tmp=(C_word)a,a+=31,tmp);
if(C_truep(t34)){
t36=t35;
f_1801(t36,t34);}
else{
t36=((C_word*)t0)[2];
t37=t35;
f_1801(t37,C_u_i_memq(lf[402],t36));}}

/* k4400 in for-each-loop419 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in ... */
static void C_ccall f_4402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4402,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4392(t3,((C_word*)t0)[4],t2);}

/* k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in ... */
static void C_ccall f_2540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,2)))){
C_save_and_reclaim((void *)f_2540,2,av);}
a=C_alloc(27);
t2=C_mutate2((C_word*)lf[87]+1 /* (set! ##sys#line-number-database ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2543,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:404: collect-options */
t4=((C_word*)((C_word*)t0)[18])[1];
f_2031(t4,t3,lf[262]);}

/* k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1770(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,2)))){
C_save_and_reclaim((void *)f_1770,2,av);}
a=C_alloc(28);
t2=t1;
t3=*((C_word*)lf[17]+1);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=lf[18];
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=((C_word*)t0)[2];
t17=C_u_i_memq(lf[19],t16);
t18=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1775,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t7,a[5]=t5,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=t11,a[12]=t13,a[13]=t15,a[14]=t9,a[15]=t2,tmp=(C_word)a,a+=16,tmp);
if(C_truep(t17)){
t19=t18;
f_1775(t19,t17);}
else{
t19=((C_word*)t0)[2];
t20=C_u_i_memq(lf[279],t19);
if(C_truep(t20)){
t21=t18;
f_1775(t21,t20);}
else{
t21=((C_word*)t0)[2];
t22=C_u_i_memq(lf[20],t21);
t23=t18;
f_1775(t23,t22);}}}

/* k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in ... */
static void C_ccall f_2543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,2)))){
C_save_and_reclaim((void *)f_2543,2,av);}
a=C_alloc(28);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_2546,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=t2,tmp=(C_word)a,a+=28,tmp);
/* batch-driver.scm:405: collect-options */
t4=((C_word*)((C_word*)t0)[18])[1];
f_2031(t4,t3,lf[261]);}

/* k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in ... */
static void C_ccall f_2558(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,4)))){
C_save_and_reclaim((void *)f_2558,2,av);}
a=C_alloc(35);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2561,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3820,a[2]=t2,a[3]=((C_word*)t0)[25],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5716,a[2]=t5,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[112]+1);
av2[3]=lf[250];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t4=t3;
f_2561(t4,C_SCHEME_UNDEFINED);}}

/* k4571 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in ... */
static void C_ccall f_4573(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4573,2,av);}
if(C_truep(C_i_string_equal_p(lf[346],t1))){
/* batch-driver.scm:258: keyword-style */
t2=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[347];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(lf[348],t1))){
/* batch-driver.scm:259: keyword-style */
t2=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[338];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(lf[349],t1))){
/* batch-driver.scm:260: keyword-style */
t2=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[350];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
/* batch-driver.scm:261: quit */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[351];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}}}

/* k3421 in k3418 in k3415 in k3412 in for-each-loop921 in k3404 in a3401 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_3423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3423,2,av);}
/* batch-driver.scm:490: ##sys#write-char-0 */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in ... */
static void C_ccall f_2552(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(38,c,4)))){
C_save_and_reclaim((void *)f_2552,2,av);}
a=C_alloc(38);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2555,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3867,a[2]=((C_word*)t0)[25],a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[27],a[6]=((C_word*)t0)[28],a[7]=((C_word*)t0)[29],tmp=(C_word)a,a+=8,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5722,a[2]=t5,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[112]+1);
av2[3]=lf[251];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3876,a[2]=((C_word*)t0)[25],a[3]=((C_word*)t0)[27],a[4]=((C_word*)t0)[29],a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3876(t7,t3,((C_word*)t0)[28]);}}

/* k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in ... */
static void C_ccall f_2555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,2)))){
C_save_and_reclaim((void *)f_2555,2,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2558,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:434: user-preprocessor-pass */
t3=*((C_word*)lf[2]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3418 in k3415 in k3412 in for-each-loop921 in k3404 in a3401 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_3420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3420,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* batch-driver.scm:490: ##sys#print */
t4=*((C_word*)lf[34]+1);{
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
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4546 in k4543 in k4540 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in ... */
static void C_ccall f_4548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4548,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4551,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:272: parentheses-synonyms */
t3=*((C_word*)lf[337]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3237 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in ... */
static void C_ccall f_3239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3239,2,av);}
if(C_truep(t1)){
/* batch-driver.scm:530: pp */
t2=*((C_word*)lf[188]+1);{
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
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_2649(2,av2);}}}

/* k4543 in k4540 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in ... */
static void C_ccall f_4545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4545,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4548,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:271: keyword-style */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[338];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4540 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in ... */
static void C_ccall f_4542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4542,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4545,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:270: case-sensitive */
t3=*((C_word*)lf[339]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4557 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in ... */
static void C_ccall f_4559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4559,2,av);}
/* batch-driver.scm:267: symbol-escape */
t2=*((C_word*)lf[336]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3223 in for-each-loop1029 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in ... */
static void C_ccall f_3225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3225,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3215(t3,((C_word*)t0)[4],t2);}

/* k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_2694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_2694,2,av);}
a=C_alloc(23);
t2=C_set_block_item(lf[96] /* ##compiler#first-analysis */,0,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2698,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
/* batch-driver.scm:611: end-time */
t4=((C_word*)((C_word*)t0)[10])[1];
f_2076(t4,t3,lf[145]);}

/* k4549 in k4546 in k4543 in k4540 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in ... */
static void C_ccall f_4551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4551,2,av);}
/* batch-driver.scm:273: symbol-escape */
t2=*((C_word*)lf[336]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in ... */
static void C_ccall f_2691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,2)))){
C_save_and_reclaim((void *)f_2691,2,av);}
a=C_alloc(28);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2694,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],tmp=(C_word)a,a+=23,tmp);
if(C_truep(*((C_word*)lf[96]+1))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2960,a[2]=((C_word*)t0)[22],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_memq(lf[152],*((C_word*)lf[30]+1)))){
/* batch-driver.scm:601: dump-undefined-globals */
t5=*((C_word*)lf[153]+1);{
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
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2960(2,av2);}}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2694(2,av2);}}}

/* k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in ... */
static void C_ccall f_2698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,5)))){
C_save_and_reclaim((void *)f_2698,2,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2701,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
/* batch-driver.scm:612: print-db */
t3=((C_word*)((C_word*)t0)[20])[1];
f_1868(t3,t2,lf[143],lf[144],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3297 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_3299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3299,2,av);}
/* batch-driver.scm:520: build-node-graph */
t2=*((C_word*)lf[197]+1);{
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

/* k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_3295(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,4)))){
C_save_and_reclaim((void *)f_3295,2,av);}
a=C_alloc(32);
t2=C_a_i_list1(&a,1,t1);
t3=C_a_i_record4(&a,4,lf[91],lf[92],lf[93],t2);
t4=t3;
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2637,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=t4,a[18]=((C_word*)t0)[17],a[19]=t6,a[20]=((C_word*)t0)[18],a[21]=((C_word*)t0)[19],tmp=(C_word)a,a+=22,tmp);
/* batch-driver.scm:523: print-node */
t8=((C_word*)((C_word*)t0)[6])[1];
f_1846(t8,t7,lf[195],lf[196],t4);}

/* k1900 in print-expr in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1902(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1902,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_check_list_2(t2,lf[43]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1918,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_1918(t7,((C_word*)t0)[3],t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1905 in for-each-loop164 in k1900 in print-expr in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1907,2,av);}
/* batch-driver.scm:133: newline */
t2=*((C_word*)lf[44]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3285 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in ... */
static void C_ccall f_3287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3287,2,av);}
/* batch-driver.scm:527: concatenate */
t2=*((C_word*)lf[191]+1);{
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

/* compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,3)))){
C_save_and_reclaim((void*)f_1711,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+8);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1714,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1745,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:53: initialize-compiler */
t6=*((C_word*)lf[414]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* option-arg in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_fcall f_1714(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1714,2,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
t4=t2;
t5=C_u_i_car(t4);
/* batch-driver.scm:48: quit */
t6=*((C_word*)lf[6]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[7];
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t4=C_i_cadr(t2);
if(C_truep(C_i_symbolp(t4))){
/* batch-driver.scm:51: quit */
t5=*((C_word*)lf[6]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[8];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}

/* k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1745(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1745,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_mutate2((C_word*)lf[9]+1 /* (set! ##compiler#explicit-use-flag ...) */,C_u_i_memq(lf[10],t2));
t4=((C_word*)t0)[2];
t5=C_mutate2((C_word*)lf[11]+1 /* (set! emit-debug-info ...) */,C_u_i_memq(lf[12],t4));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4944,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t7=(C_truep(*((C_word*)lf[11]+1))?lf[411]:C_SCHEME_END_OF_LIST);
if(C_truep(*((C_word*)lf[9]+1))){
/* batch-driver.scm:57: append */
t8=*((C_word*)lf[230]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=*((C_word*)lf[412]+1);
av2[3]=t7;
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t8=C_a_i_cons(&a,2,lf[246],*((C_word*)lf[413]+1));
t9=C_a_i_list(&a,1,t8);
/* batch-driver.scm:57: append */
t10=*((C_word*)lf[230]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t6;
av2[2]=*((C_word*)lf[412]+1);
av2[3]=t7;
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}

/* k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in ... */
static void C_ccall f_2416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,3)))){
C_save_and_reclaim((void *)f_2416,2,av);}
a=C_alloc(32);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2420,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],tmp=(C_word)a,a+=32,tmp);
/* batch-driver.scm:329: append */
t4=*((C_word*)lf[230]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=*((C_word*)lf[305]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in ... */
static void C_fcall f_2308(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(40,0,2)))){
C_save_and_reclaim_args((void *)trf_2308,2,t0,t1);}
a=C_alloc(40);
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[62],t2);
t4=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4629,a[2]=((C_word*)t0)[21],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:246: option-arg */
f_1714(t5,t3);}
else{
t5=t4;
f_2313(t5,C_SCHEME_FALSE);}}

/* k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in ... */
static void C_fcall f_2303(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(40,0,2)))){
C_save_and_reclaim_args((void *)trf_2303,2,t0,t1);}
a=C_alloc(40);
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[61],t2);
t4=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2308,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(t3)){
t5=C_set_block_item(lf[179] /* ##compiler#inline-locally */,0,C_SCHEME_TRUE);
t6=C_set_block_item(lf[356] /* ##compiler#local-definitions */,0,C_SCHEME_TRUE);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4635,a[2]=((C_word*)t0)[19],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:244: option-arg */
f_1714(t7,t3);}
else{
t5=t4;
f_2308(t5,C_SCHEME_FALSE);}}

/* k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in ... */
static void C_ccall f_2567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,3)))){
C_save_and_reclaim((void *)f_2567,2,av);}
a=C_alloc(31);
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2570,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[26])[1]))){
t3=t2;
f_2570(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3805,a[2]=((C_word*)t0)[26],a[3]=((C_word*)t0)[25],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:443: append */
t4=*((C_word*)lf[230]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[245]+1);
av2[3]=((C_word*)((C_word*)t0)[26])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in ... */
static void C_ccall f_2564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,2)))){
C_save_and_reclaim((void *)f_2564,2,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2567,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:440: begin-time */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2066(t3,t2);}

/* k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in ... */
static void C_fcall f_2561(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,0,4)))){
C_save_and_reclaim_args((void *)trf_2561,2,t0,t1);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2564,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:439: print-expr */
t3=((C_word*)((C_word*)t0)[20])[1];
f_1895(t3,t2,lf[248],lf[249],((C_word*)((C_word*)t0)[25])[1]);}

/* map-loop894 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in ... */
static void C_fcall f_3492(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3492,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3517,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
/* batch-driver.scm:481: ->string */
t6=*((C_word*)lf[227]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3488 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in ... */
static void C_ccall f_3490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3490,2,av);}
/* batch-driver.scm:480: string-intersperse */
t2=*((C_word*)lf[225]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[226];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in ... */
static void C_ccall f_2408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,c,2)))){
C_save_and_reclaim((void *)f_2408,2,av);}
a=C_alloc(36);
t2=C_mutate2((C_word*)lf[70]+1 /* (set! ##sys#features ...) */,t1);
t3=C_a_i_cons(&a,2,lf[71],*((C_word*)lf[70]+1));
t4=C_mutate2((C_word*)lf[70]+1 /* (set! ##sys#features ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2416,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
/* batch-driver.scm:326: user-post-analysis-pass */
t6=*((C_word*)lf[4]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in ... */
static void C_ccall f_2404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_2404,2,av);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2408,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
/* batch-driver.scm:324: delete */
t3=*((C_word*)lf[306]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[69];
av2[3]=*((C_word*)lf[70]+1);
av2[4]=*((C_word*)lf[307]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in ... */
static void C_fcall f_2318(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(42,0,4)))){
C_save_and_reclaim_args((void *)trf_2318,2,t0,t1);}
a=C_alloc(42);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2321,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[6];
if(C_truep(C_u_i_memq(lf[352],t3))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4606,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5806,a[2]=t5,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[112]+1);
av2[3]=lf[353];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t4=t2;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2321(2,av2);}}}

/* k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in ... */
static void C_fcall f_2313(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(39,0,2)))){
C_save_and_reclaim_args((void *)trf_2313,2,t0,t1);}
a=C_alloc(39);
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[63],t2);
t4=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2318,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4616,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:249: option-arg */
f_1714(t5,t3);}
else{
t5=t4;
f_2318(t5,C_SCHEME_FALSE);}}

/* k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in ... */
static void C_fcall f_2579(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(31,0,3)))){
C_save_and_reclaim_args((void *)trf_2579,2,t0,t1);}
a=C_alloc(31);
t2=C_i_check_list_2(t1,lf[57]);
t3=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3743,a[2]=((C_word*)t0)[23],a[3]=t5,a[4]=((C_word*)t0)[24],a[5]=((C_word*)t0)[25],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3743(t7,t3,t1);}

/* k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in ... */
static void C_ccall f_2576(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(50,c,2)))){
C_save_and_reclaim((void *)f_2576,2,av);}
a=C_alloc(50);
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2579,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
if(C_truep(((C_word*)t0)[26])){
t3=C_a_i_list(&a,3,lf[240],lf[241],lf[242]);
t4=C_a_i_cons(&a,2,t3,t1);
t5=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t4);
t6=C_a_i_cons(&a,2,lf[243],t5);
t7=C_a_i_cons(&a,2,lf[244],t6);
t8=t2;
f_2579(t8,C_a_i_list(&a,1,t7));}
else{
t3=t2;
f_2579(t3,t1);}}

/* k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in ... */
static void C_fcall f_2570(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(32,0,3)))){
C_save_and_reclaim_args((void *)trf_2570,2,t0,t1);}
a=C_alloc(32);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=*((C_word*)lf[88]+1);
t7=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2576,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=t4,a[24]=t6,a[25]=t5,a[26]=((C_word*)t0)[23],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:447: append */
t8=*((C_word*)lf[230]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)((C_word*)t0)[24])[1];
av2[3]=((C_word*)((C_word*)t0)[25])[1];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in ... */
static void C_ccall f_2585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_2585,2,av);}
a=C_alloc(24);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2588,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=t2,a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm:453: gensym */
t4=*((C_word*)lf[239]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in ... */
static void C_ccall f_2588(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(41,c,3)))){
C_save_and_reclaim((void *)f_2588,2,av);}
a=C_alloc(41);
t2=C_i_length(*((C_word*)lf[89]+1));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_2594,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=*((C_word*)lf[228]+1);
t10=C_i_check_list_2(*((C_word*)lf[228]+1),lf[57]);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3549,a[2]=t4,a[3]=((C_word*)t0)[21],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[22],a[6]=t3,a[7]=((C_word*)t0)[23],tmp=(C_word)a,a+=8,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3709,a[2]=t7,a[3]=t13,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_3709(t15,t11,*((C_word*)lf[228]+1));}

/* for-each-loop1050 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in ... */
static void C_fcall f_3161(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_3161,3,t0,t1,t2);}
a=C_alloc(15);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3171,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3150,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=t7;
t9=C_a_i_list(&a,1,t6);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5676,a[2]=t8,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t10;
av2[2]=*((C_word*)lf[112]+1);
av2[3]=lf[181];
av2[4]=t9;
C_apply(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3469 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in ... */
static void C_ccall f_3471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3471,2,av);}
/* batch-driver.scm:478: quit */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[224];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3515 in map-loop894 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in ... */
static void C_ccall f_3517(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3517,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3492(t6,((C_word*)t0)[5],t5);}

/* k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in ... */
static void C_ccall f_2597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_2597,2,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2600,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
if(C_truep(C_i_pairp(*((C_word*)lf[217]+1)))){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3402,tmp=(C_word)a,a+=2,tmp);
/* batch-driver.scm:485: with-debugging-output */
t4=*((C_word*)lf[222]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[223];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2600(2,av2);}}}

/* k3136 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in ... */
static void C_ccall f_3138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3138,2,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_3015(2,av2);}}
else{
/* batch-driver.scm:554: quit */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[177];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_1767,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1770,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4865,a[2]=((C_word*)t0)[9],a[3]=t4,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4865(t6,t2,t1);}

/* k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in ... */
static void C_ccall f_2594(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(42,c,3)))){
C_save_and_reclaim((void *)f_2594,2,av);}
a=C_alloc(42);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2597,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=t3,a[21]=((C_word*)t0)[20],tmp=(C_word)a,a+=22,tmp);
if(C_truep(C_i_nullp(*((C_word*)lf[58]+1)))){
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2597(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3471,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=*((C_word*)lf[58]+1);
t11=C_i_check_list_2(*((C_word*)lf[58]+1),lf[57]);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3490,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3492,a[2]=t8,a[3]=t14,a[4]=t9,tmp=(C_word)a,a+=5,tmp));
t16=((C_word*)t14)[1];
f_3492(t16,t12,*((C_word*)lf[58]+1));}}

/* k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1761(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_1761,2,av);}
a=C_alloc(20);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=*((C_word*)lf[16]+1);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1767,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=t5,a[10]=t7,a[11]=t6,tmp=(C_word)a,a+=12,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4901,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:76: get-environment-variable */
t10=*((C_word*)lf[405]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[406];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in ... */
static void C_ccall f_2431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,2)))){
C_save_and_reclaim((void *)f_2431,2,av);}
a=C_alloc(32);
t2=C_mutate2((C_word*)lf[72]+1 /* (set! ##compiler#target-heap-size ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_2435,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],tmp=(C_word)a,a+=28,tmp);
if(C_truep(((C_word*)t0)[28])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4116,a[2]=((C_word*)t0)[29],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:345: option-arg */
f_1714(t4,((C_word*)t0)[28]);}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_2435(2,av2);}}}

/* k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in ... */
static void C_ccall f_2435(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,2)))){
C_save_and_reclaim((void *)f_2435,2,av);}
a=C_alloc(28);
t2=C_mutate2((C_word*)lf[73]+1 /* (set! ##compiler#target-stack-size ...) */,t1);
t3=((C_word*)t0)[2];
t4=C_u_i_memq(lf[74],t3);
t5=C_i_not(t4);
t6=C_set_block_item(lf[75] /* ##compiler#emit-trace-info */,0,t5);
t7=((C_word*)t0)[2];
t8=C_mutate2((C_word*)lf[76]+1 /* (set! ##compiler#disable-stack-overflow-checking ...) */,C_u_i_memq(lf[77],t7));
t9=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_2446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],tmp=(C_word)a,a+=28,tmp);
/* batch-driver.scm:348: feature? */
t10=*((C_word*)lf[298]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[299];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k4752 in map-loop308 in k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in ... */
static void C_ccall f_4754(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4754,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4729(t6,((C_word*)t0)[5],t5);}

/* k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in ... */
static void C_ccall f_2529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_2529,2,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2532,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:399: debugging */
t3=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[265];
av2[3]=lf[266];
av2[4]=*((C_word*)lf[73]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in ... */
static void C_ccall f_2526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_2526,2,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2529,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:398: debugging */
t3=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[265];
av2[3]=lf[267];
av2[4]=*((C_word*)lf[72]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in ... */
static void C_ccall f_2523(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_2523,2,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2526,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:397: debugging */
t3=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[265];
av2[3]=lf[268];
av2[4]=*((C_word*)lf[30]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4765 in k2193 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_4767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4767,2,av);}
/* batch-driver.scm:187: exit */
t2=*((C_word*)lf[124]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3448 in for-each-loop921 in k3404 in a3401 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in ... */
static void C_ccall f_3450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3450,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3440(t3,((C_word*)t0)[4],t2);}

/* k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in ... */
static void C_ccall f_2536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_2536,2,av);}
a=C_alloc(27);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2540,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[2],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:403: make-vector */
t4=*((C_word*)lf[263]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[264]+1);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in ... */
static void C_ccall f_2446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,2)))){
C_save_and_reclaim((void *)f_2446,2,av);}
a=C_alloc(28);
t2=C_set_block_item(lf[78] /* ##compiler#bootstrap-mode */,0,t1);
t3=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_2449,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],tmp=(C_word)a,a+=28,tmp);
if(C_truep(C_i_memq(lf[296],*((C_word*)lf[30]+1)))){
/* batch-driver.scm:349: set-gc-report! */
t4=*((C_word*)lf[297]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2449(2,av2);}}}

/* k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in ... */
static void C_ccall f_2449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,2)))){
C_save_and_reclaim((void *)f_2449,2,av);}
a=C_alloc(28);
t2=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_2452,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],tmp=(C_word)a,a+=28,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[291],t3))){
t4=C_set_block_item(((C_word*)t0)[18],0,C_SCHEME_FALSE);
t5=t2;
f_2452(t5,t4);}
else{
t4=C_mutate2((C_word*)lf[292]+1 /* (set! standard-bindings ...) */,*((C_word*)lf[293]+1));
t5=C_mutate2((C_word*)lf[294]+1 /* (set! extended-bindings ...) */,*((C_word*)lf[295]+1));
t6=t2;
f_2452(t6,t5);}}

/* k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in ... */
static void C_ccall f_2532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,2)))){
C_save_and_reclaim((void *)f_2532,2,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2536,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:105: current-milliseconds */
t3=*((C_word*)lf[47]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2489 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in ... */
static void C_ccall f_2491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2491,2,av);}
/* batch-driver.scm:385: newline */
t2=*((C_word*)lf[44]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop921 in k3404 in a3401 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in ... */
static void C_fcall f_3440(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_3440,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3450,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=*((C_word*)lf[31]+1);
t8=*((C_word*)lf[31]+1);
t9=C_i_check_port_2(*((C_word*)lf[31]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[32]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3414,a[2]=t5,a[3]=t7,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:490: ##sys#print */
t11=*((C_word*)lf[34]+1);{
C_word av2[5];
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[219];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[31]+1);
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2496 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in ... */
static void C_ccall f_2498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2498,2,av);}
/* batch-driver.scm:384: display */
t2=*((C_word*)lf[84]+1);{
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

/* k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2231 in ... */
static void C_fcall f_2300(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_2300,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2303,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[357],t3))){
t4=C_set_block_item(lf[179] /* ##compiler#inline-locally */,0,C_SCHEME_TRUE);
t5=t2;
f_2303(t5,t4);}
else{
t4=t2;
f_2303(t4,C_SCHEME_UNDEFINED);}}

/* f5736 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in ... */
static void C_ccall f5736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f5736,2,av);}
/* batch-driver.scm:108: debugging */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in ... */
static void C_ccall f_2420(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(43,c,2)))){
C_save_and_reclaim((void *)f_2420,2,av);}
a=C_alloc(43);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2424,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4146,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:336: collect-options */
t9=((C_word*)((C_word*)t0)[20])[1];
f_2031(t9,t8,lf[304]);}

/* k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in ... */
static void C_ccall f_2424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,2)))){
C_save_and_reclaim((void *)f_2424,2,av);}
a=C_alloc(32);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2427,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[2],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t4=((C_word*)t0)[3];
if(C_truep(C_u_i_memq(lf[300],t4))){
t5=C_set_block_item(lf[301] /* ##sys#enable-runtime-macros */,0,C_SCHEME_TRUE);
t6=t3;
f_2427(t6,t5);}
else{
t5=t3;
f_2427(t5,C_SCHEME_UNDEFINED);}}

/* k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in ... */
static void C_fcall f_2427(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,0,2)))){
C_save_and_reclaim_args((void *)trf_2427,2,t0,t1);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|30,a[1]=(C_word)f_2431,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],tmp=(C_word)a,a+=31,tmp);
if(C_truep(((C_word*)t0)[31])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4123,a[2]=((C_word*)t0)[29],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:342: option-arg */
f_1714(t3,((C_word*)t0)[31]);}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_2431(2,av2);}}}

/* f5742 in k4065 in k4059 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in ... */
static void C_ccall f5742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f5742,2,av);}
/* batch-driver.scm:108: debugging */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1701,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[2]+1 /* (set! user-preprocessor-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1705,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:39: make-parameter */
t4=*((C_word*)lf[415]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* f5748 in k4065 in k4059 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in ... */
static void C_ccall f5748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f5748,2,av);}
/* batch-driver.scm:108: debugging */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1705,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[3]+1 /* (set! user-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1709,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:40: make-parameter */
t4=*((C_word*)lf[415]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_1709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,3)))){
C_save_and_reclaim((void *)f_1709,2,av);}
a=C_alloc(2);
t2=C_mutate2((C_word*)lf[4]+1 /* (set! user-post-analysis-pass ...) */,t1);
t3=C_mutate2((C_word*)lf[5]+1 /* (set! compile-source-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1711,tmp=(C_word)a,a+=2,tmp));
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5754 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in ... */
static void C_ccall f5754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f5754,2,av);}
/* batch-driver.scm:108: debugging */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* for-each-loop1073 in k3027 in k3013 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in ... */
static void C_fcall f_3109(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_3109,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3119,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3020,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:557: load-type-database */
t8=*((C_word*)lf[170]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
av2[3]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* map-loop308 in k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in ... */
static void C_fcall f_4729(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_4729,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4754,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2215,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:191: string->symbol */
t8=*((C_word*)lf[303]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in ... */
static void C_fcall f_2480(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,4)))){
C_save_and_reclaim_args((void *)trf_2480,2,t0,t1);}
a=C_alloc(33);
if(C_truep(t1)){
/* batch-driver.scm:382: print-usage */
t2=*((C_word*)lf[82]+1);{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
if(C_truep(C_u_i_memq(lf[83],t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2491,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2498,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:384: chicken-version */
t5=*((C_word*)lf[85]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=((C_word*)t0)[4];
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2519,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[2],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[3],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
t5=t4;
t6=C_a_i_list(&a,1,((C_word*)t0)[4]);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5736,a[2]=t5,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t7;
av2[2]=*((C_word*)lf[112]+1);
av2[3]=lf[270];
av2[4]=t6;
C_apply(5,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2507,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:387: print-version */
t5=*((C_word*)lf[80]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}}}

/* k4041 in k4033 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in ... */
static void C_ccall f_4043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4043,2,av);}
/* batch-driver.scm:406: append */
t2=*((C_word*)lf[230]+1);{
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

/* f5760 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in ... */
static void C_ccall f5760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f5760,2,av);}
/* batch-driver.scm:108: debugging */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4435 in a4429 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in ... */
static void C_ccall f_4437(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4437,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4442,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4442(t5,((C_word*)t0)[4],t1);}

/* k3148 in for-each-loop1050 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in ... */
static void C_ccall f_3150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3150,2,av);}
/* batch-driver.scm:547: load-inline-file */
t2=*((C_word*)lf[180]+1);{
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

/* a4429 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in ... */
static void C_ccall f_4430(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_4430,3,av);}
a=C_alloc(10);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4437,a[2]=t5,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:284: string-split */
t8=*((C_word*)lf[311]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
av2[3]=lf[332];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k4033 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in ... */
static void C_ccall f_4035(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4035,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4043,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:409: collect-options */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2031(t6,t5,lf[259]);}

/* f5770 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in ... */
static void C_ccall f5770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f5770,2,av);}
/* batch-driver.scm:108: debugging */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in ... */
static void C_ccall f_2461(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,2)))){
C_save_and_reclaim((void *)f_2461,2,av);}
a=C_alloc(27);
t2=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[79],t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2469,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:379: print-version */
t4=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];
t4=C_u_i_memq(lf[81],t3);
t5=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2480,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(t4)){
t6=t5;
f_2480(t6,t4);}
else{
t6=((C_word*)t0)[2];
t7=C_u_i_memq(lf[274],t6);
if(C_truep(t7)){
t8=t5;
f_2480(t8,t7);}
else{
t8=((C_word*)t0)[2];
t9=C_u_i_memq(lf[275],t8);
if(C_truep(t9)){
t10=t5;
f_2480(t10,t9);}
else{
t10=((C_word*)t0)[2];
t11=t5;
f_2480(t11,C_u_i_memq(lf[276],t10));}}}}}

/* k4059 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in ... */
static void C_ccall f_4061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4061,2,av);}
a=C_alloc(5);
t2=C_set_block_item(lf[235] /* ##compiler#emit-profile */,0,C_SCHEME_TRUE);
t3=C_mutate2((C_word*)lf[280]+1 /* (set! ##compiler#profiled-procedures ...) */,lf[281]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4067,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
/* batch-driver.scm:367: append */
t5=*((C_word*)lf[230]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=*((C_word*)lf[285]+1);
av2[4]=lf[286];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
/* batch-driver.scm:367: append */
t5=*((C_word*)lf[230]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=*((C_word*)lf[285]+1);
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k4065 in k4059 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in ... */
static void C_ccall f_4067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4067,2,av);}
a=C_alloc(6);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
if(C_truep(((C_word*)t0)[3])){
t3=((C_word*)t0)[4];
t4=C_a_i_list(&a,1,lf[282]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5742,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[112]+1);
av2[3]=lf[283];
av2[4]=t4;
C_apply(5,av2);}}
else{
t3=((C_word*)t0)[4];
t4=C_a_i_list(&a,1,lf[284]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5748,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[112]+1);
av2[3]=lf[283];
av2[4]=t4;
C_apply(5,av2);}}}

/* k2467 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in ... */
static void C_ccall f_2469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2469,2,av);}
/* batch-driver.scm:380: newline */
t2=*((C_word*)lf[44]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f5788 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in ... */
static void C_ccall f5788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f5788,2,av);}
/* batch-driver.scm:108: debugging */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a3999 in k3983 in doloop651 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in ... */
static void C_ccall f_4000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4000,2,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_4006(t5,t1);}

/* loop in a3999 in k3983 in doloop651 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in ... */
static void C_fcall f_4006(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_4006,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4010,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:426: read/source-info */
t3=*((C_word*)lf[256]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3117 in for-each-loop1073 in k3027 in k3013 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in ... */
static void C_ccall f_3119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3119,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3109(t3,((C_word*)t0)[4],t2);}

/* k3033 in k3027 in k3013 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in ... */
static void C_ccall f_3035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_3035,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3051,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3086,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_3086(t6,t2,((C_word*)t0)[11]);}

/* a4027 in k3983 in doloop651 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in ... */
static void C_ccall f_4028(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4028,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[254]+1));
t3=C_mutate2((C_word*)lf[254]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4495 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in ... */
static void C_ccall f_4497(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4497,2,av);}
a=C_alloc(12);
t2=C_i_check_list_2(t1,lf[57]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4503,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4505,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_4505(t7,t3,t1);}

/* k3169 in for-each-loop1050 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in ... */
static void C_ccall f_3171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3171,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3161(t3,((C_word*)t0)[4],t2);}

/* k3042 in for-each-loop1094 in k3033 in k3027 in k3013 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in ... */
static void C_ccall f_3044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3044,2,av);}
/* batch-driver.scm:562: load-type-database */
t2=*((C_word*)lf[170]+1);{
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

/* k2217 in k2213 in map-loop308 in k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in ... */
static void C_ccall f_2219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2219,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3046 in for-each-loop1094 in k3033 in k3027 in k3013 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in ... */
static void C_ccall f_3048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3048,2,av);}
/* batch-driver.scm:562: make-pathname */
t2=*((C_word*)lf[171]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=t1;
av2[4]=lf[172];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k2213 in map-loop308 in k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in ... */
static void C_ccall f_2215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2215,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2219,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
t4=*((C_word*)lf[391]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[392];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4008 in loop in a3999 in k3983 in doloop651 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in ... */
static void C_ccall f_4010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4010,2,av);}
a=C_alloc(3);
if(C_truep(C_eofp(t1))){
/* batch-driver.scm:428: close-checked-input-file */
t2=*((C_word*)lf[255]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[5])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[5])+1,t2);
/* batch-driver.scm:431: loop */
t4=((C_word*)((C_word*)t0)[6])[1];
f_4006(t4,((C_word*)t0)[2]);}}

/* map-loop280 in k4786 in a4771 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 in ... */
static void C_fcall f_4793(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_4793,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4818,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_string(&a,1,t4);
/* batch-driver.scm:182: string->symbol */
t6=*((C_word*)lf[303]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3185 in for-each-loop1029 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in ... */
static void C_ccall f_3187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3187,2,av);}
a=C_alloc(4);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3196,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:537: file-exists? */
t4=*((C_word*)lf[185]+1);{
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
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in ... */
static void C_ccall f_2321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(38,c,2)))){
C_save_and_reclaim((void *)f_2321,2,av);}
a=C_alloc(38);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(((C_word*)t0)[35])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4573,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:257: option-arg */
f_1714(t3,((C_word*)t0)[35]);}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2324(2,av2);}}}

/* k3049 in k3033 in k3027 in k3013 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in ... */
static void C_ccall f_3051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3051,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:564: begin-time */
t3=((C_word*)((C_word*)t0)[8])[1];
f_2066(t3,t2);}

/* k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in ... */
static void C_ccall f_2324(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(41,c,4)))){
C_save_and_reclaim((void *)f_2324,2,av);}
a=C_alloc(41);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2327,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[6];
if(C_truep(C_u_i_memq(lf[343],t3))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4567,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5800,a[2]=t5,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[112]+1);
av2[3]=lf[345];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2327(2,av2);}}}

/* k3052 in k3049 in k3033 in k3027 in k3013 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in ... */
static void C_ccall f_3054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_3054,2,av);}
a=C_alloc(10);
t2=C_set_block_item(lf[96] /* ##compiler#first-analysis */,0,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3059,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:566: analyze */
t4=((C_word*)((C_word*)t0)[10])[1];
f_2116(t4,t3,lf[169],((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k3057 in k3052 in k3049 in k3033 in k3027 in k3013 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in ... */
static void C_ccall f_3059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_3059,2,av);}
a=C_alloc(9);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3062,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:567: print-db */
t4=((C_word*)((C_word*)t0)[9])[1];
f_1868(t4,t3,lf[167],lf[168],((C_word*)((C_word*)t0)[2])[1],C_fix(0));}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_driver_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("driver_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_driver_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(2251))){
C_save(t1);
C_rereclaim2(2251*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,416);
lf[0]=C_h_intern(&lf[0],17,"user-options-pass");
lf[1]=C_h_intern(&lf[1],14,"user-read-pass");
lf[2]=C_h_intern(&lf[2],22,"user-preprocessor-pass");
lf[3]=C_h_intern(&lf[3],9,"user-pass");
lf[4]=C_h_intern(&lf[4],23,"user-post-analysis-pass");
lf[5]=C_h_intern(&lf[5],19,"compile-source-file");
lf[6]=C_h_intern(&lf[6],13,"\010compilerquit");
lf[7]=C_decode_literal(C_heaptop,"\376B\000\000 missing argument to `-~A\047 option");
lf[8]=C_decode_literal(C_heaptop,"\376B\000\000\037invalid argument to `~A\047 option");
lf[9]=C_h_intern(&lf[9],26,"\010compilerexplicit-use-flag");
lf[10]=C_h_intern(&lf[10],12,"explicit-use");
lf[11]=C_h_intern(&lf[11],15,"emit-debug-info");
lf[12]=C_h_intern(&lf[12],10,"debug-info");
lf[13]=C_h_intern(&lf[13],12,"\004coredeclare");
lf[14]=C_h_intern(&lf[14],7,"verbose");
lf[15]=C_h_intern(&lf[15],11,"output-file");
lf[16]=C_h_intern(&lf[16],23,"\010compilerchop-separator");
lf[17]=C_h_intern(&lf[17],36,"\010compilerdefault-optimization-passes");
lf[18]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\003sysimplicit-exit-handler\376\377\016\376\377\016\376\377\016");
lf[19]=C_h_intern(&lf[19],7,"profile");
lf[20]=C_h_intern(&lf[20],12,"profile-name");
lf[21]=C_h_intern(&lf[21],9,"heap-size");
lf[22]=C_h_intern(&lf[22],13,"keyword-style");
lf[23]=C_h_intern(&lf[23],10,"clustering");
lf[24]=C_h_intern(&lf[24],4,"unit");
lf[25]=C_h_intern(&lf[25],12,"analyze-only");
lf[26]=C_h_intern(&lf[26],7,"dynamic");
lf[27]=C_h_intern(&lf[27],4,"lfa2");
lf[28]=C_h_intern(&lf[28],6,"module");
lf[29]=C_h_intern(&lf[29],7,"nursery");
lf[30]=C_h_intern(&lf[30],26,"\010compilerdebugging-chicken");
lf[31]=C_h_intern(&lf[31],19,"\003sysstandard-output");
lf[32]=C_h_intern(&lf[32],6,"printf");
lf[33]=C_h_intern(&lf[33],16,"\003syswrite-char-0");
lf[34]=C_h_intern(&lf[34],9,"\003sysprint");
lf[35]=C_h_intern(&lf[35],18,"\010compilerdebugging");
lf[36]=C_h_intern(&lf[36],1,"p");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\004pass");
lf[38]=C_h_intern(&lf[38],19,"\010compilerdump-nodes");
lf[39]=C_h_intern(&lf[39],12,"pretty-print");
lf[40]=C_h_intern(&lf[40],30,"\010compilerbuild-expression-tree");
lf[41]=C_h_intern(&lf[41],34,"\010compilerdisplay-analysis-database");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\013(iteration ");
lf[43]=C_h_intern(&lf[43],8,"for-each");
lf[44]=C_h_intern(&lf[44],7,"newline");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid numeric argument ~S");
lf[46]=C_h_intern(&lf[46],9,"substring");
lf[47]=C_h_intern(&lf[47],20,"current-milliseconds");
lf[48]=C_h_intern(&lf[48],5,"round");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\003: \011");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\030milliseconds needed for ");
lf[51]=C_h_intern(&lf[51],12,"\010compilerget");
lf[52]=C_h_intern(&lf[52],13,"\010compilerput!");
lf[53]=C_h_intern(&lf[53],27,"\010compileranalyze-expression");
lf[54]=C_h_intern(&lf[54],30,"\010compilerenable-specialization");
lf[55]=C_h_intern(&lf[55],10,"specialize");
lf[56]=C_h_intern(&lf[56],1,"D");
lf[57]=C_h_intern(&lf[57],3,"map");
lf[58]=C_h_intern(&lf[58],25,"\010compilerimport-libraries");
lf[59]=C_h_intern(&lf[59],22,"no-module-registration");
lf[60]=C_h_intern(&lf[60],35,"\010compilerenable-module-registration");
lf[61]=C_h_intern(&lf[61],16,"emit-inline-file");
lf[62]=C_h_intern(&lf[62],14,"emit-type-file");
lf[63]=C_h_intern(&lf[63],12,"inline-limit");
lf[64]=C_h_intern(&lf[64],21,"\010compilerverbose-mode");
lf[65]=C_h_intern(&lf[65],31,"\003sysread-error-with-line-number");
lf[66]=C_h_intern(&lf[66],21,"\003sysinclude-pathnames");
lf[67]=C_h_intern(&lf[67],17,"register-feature!");
lf[68]=C_h_intern(&lf[68],19,"unregister-feature!");
lf[69]=C_h_intern(&lf[69],19,"\000compiler-extension");
lf[70]=C_h_intern(&lf[70],12,"\003sysfeatures");
lf[71]=C_h_intern(&lf[71],10,"\000compiling");
lf[72]=C_h_intern(&lf[72],25,"\010compilertarget-heap-size");
lf[73]=C_h_intern(&lf[73],26,"\010compilertarget-stack-size");
lf[74]=C_h_intern(&lf[74],8,"no-trace");
lf[75]=C_h_intern(&lf[75],24,"\010compileremit-trace-info");
lf[76]=C_h_intern(&lf[76],40,"\010compilerdisable-stack-overflow-checking");
lf[77]=C_h_intern(&lf[77],29,"disable-stack-overflow-checks");
lf[78]=C_h_intern(&lf[78],23,"\010compilerbootstrap-mode");
lf[79]=C_h_intern(&lf[79],7,"version");
lf[80]=C_h_intern(&lf[80],22,"\010compilerprint-version");
lf[81]=C_h_intern(&lf[81],4,"help");
lf[82]=C_h_intern(&lf[82],20,"\010compilerprint-usage");
lf[83]=C_h_intern(&lf[83],7,"release");
lf[84]=C_h_intern(&lf[84],7,"display");
lf[85]=C_h_intern(&lf[85],15,"chicken-version");
lf[86]=C_h_intern(&lf[86],24,"\010compilersource-filename");
lf[87]=C_h_intern(&lf[87],24,"\003sysline-number-database");
lf[88]=C_h_intern(&lf[88],32,"\010compilercanonicalize-expression");
lf[89]=C_h_intern(&lf[89],28,"\010compilerprofile-lambda-list");
lf[90]=C_h_intern(&lf[90],31,"\010compilerline-number-database-2");
lf[91]=C_h_intern(&lf[91],4,"node");
lf[92]=C_h_intern(&lf[92],6,"lambda");
lf[93]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\016\376\377\016");
lf[94]=C_h_intern(&lf[94],23,"\010compilerconstant-table");
lf[95]=C_h_intern(&lf[95],21,"\010compilerinline-table");
lf[96]=C_h_intern(&lf[96],23,"\010compilerfirst-analysis");
lf[97]=C_h_intern(&lf[97],36,"\010compilerdetermine-loop-and-dispatch");
lf[98]=C_h_intern(&lf[98],41,"\010compilerperform-high-level-optimizations");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\022clustering enabled");
lf[100]=C_h_intern(&lf[100],37,"\010compilerinline-substitutions-enabled");
lf[101]=C_h_intern(&lf[101],22,"optimize-leaf-routines");
lf[102]=C_decode_literal(C_heaptop,"\376B\000\000\031leaf routine optimization");
lf[103]=C_h_intern(&lf[103],34,"\010compilertransform-direct-lambdas!");
lf[104]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[105]=C_h_intern(&lf[105],4,"leaf");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000\022rewritings enabled");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\023optimized-iteration");
lf[108]=C_h_intern(&lf[108],1,"5");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\014optimization");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\021optimization pass");
lf[111]=C_h_intern(&lf[111],36,"\010compilerprepare-for-code-generation");
lf[112]=C_h_intern(&lf[112],7,"sprintf");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\025compilation finished.");
lf[114]=C_h_intern(&lf[114],30,"\010compilercompiler-cleanup-hook");
lf[115]=C_h_intern(&lf[115],1,"t");
lf[116]=C_h_intern(&lf[116],17,"\003sysdisplay-times");
lf[117]=C_h_intern(&lf[117],14,"\003sysstop-timer");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000\017code generation");
lf[119]=C_h_intern(&lf[119],17,"close-output-port");
lf[120]=C_h_intern(&lf[120],22,"\010compilergenerate-code");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\023generating `~A\047 ...");
lf[122]=C_h_intern(&lf[122],16,"open-output-file");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\013preparation");
lf[124]=C_h_intern(&lf[124],4,"exit");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\021closure-converted");
lf[126]=C_h_intern(&lf[126],1,"9");
lf[127]=C_h_intern(&lf[127],20,"\003syswarnings-enabled");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000#(don\047t worry - still compiling...)\012");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\016final-analysis");
lf[130]=C_h_intern(&lf[130],1,"8");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\022closure conversion");
lf[132]=C_h_intern(&lf[132],35,"\010compilerperform-closure-conversion");
lf[133]=C_h_intern(&lf[133],28,"\010compilerinsert-timer-checks");
lf[134]=C_h_intern(&lf[134],32,"\010compileremit-global-inline-file");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000&generating global inline file `~a\047 ...");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\011optimized");
lf[137]=C_h_intern(&lf[137],1,"7");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\027secondary flow analysis");
lf[139]=C_h_intern(&lf[139],40,"\010compilerperform-secondary-flow-analysis");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\012doing lfa2");
lf[141]=C_h_intern(&lf[141],1,"s");
lf[142]=C_h_intern(&lf[142],33,"\010compilerprint-program-statistics");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[144]=C_h_intern(&lf[144],1,"4");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[146]=C_h_intern(&lf[146],23,"\010compileremit-type-file");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000\035generating type file `~a\047 ...");
lf[148]=C_h_intern(&lf[148],1,"v");
lf[149]=C_h_intern(&lf[149],25,"\010compilerdump-global-refs");
lf[150]=C_h_intern(&lf[150],1,"d");
lf[151]=C_h_intern(&lf[151],29,"\010compilerdump-defined-globals");
lf[152]=C_h_intern(&lf[152],1,"u");
lf[153]=C_h_intern(&lf[153],31,"\010compilerdump-undefined-globals");
lf[154]=C_h_intern(&lf[154],3,"opt");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000\003cps");
lf[156]=C_h_intern(&lf[156],1,"3");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\016cps conversion");
lf[158]=C_h_intern(&lf[158],31,"\010compilerperform-cps-conversion");
lf[159]=C_h_intern(&lf[159],6,"unsafe");
lf[160]=C_h_intern(&lf[160],34,"\010compilerscan-toplevel-assignments");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\016specialization");
lf[162]=C_h_intern(&lf[162],1,"P");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\010scrutiny");
lf[164]=C_h_intern(&lf[164],19,"\010compilerscrutinize");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\023performing scrutiny");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\027pre-analysis (scrutiny)");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[168]=C_h_intern(&lf[168],1,"0");
lf[169]=C_h_intern(&lf[169],8,"scrutiny");
lf[170]=C_h_intern(&lf[170],27,"\010compilerload-type-database");
lf[171]=C_h_intern(&lf[171],13,"make-pathname");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\005types");
lf[173]=C_h_intern(&lf[173],14,"symbol->string");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000\034type-database `~a\047 not found");
lf[175]=C_h_intern(&lf[175],5,"types");
lf[176]=C_h_intern(&lf[176],17,"ignore-repository");
lf[177]=C_decode_literal(C_heaptop,"\376B\000\000\052default type-database `types.db\047 not found");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\010types.db");
lf[179]=C_h_intern(&lf[179],23,"\010compilerinline-locally");
lf[180]=C_h_intern(&lf[180],25,"\010compilerload-inline-file");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\032Loading inline file ~a ...");
lf[182]=C_h_intern(&lf[182],19,"consult-inline-file");
lf[183]=C_h_intern(&lf[183],28,"\010compilerenable-inline-files");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\032Loading inline file ~a ...");
lf[185]=C_h_intern(&lf[185],12,"file-exists\077");
lf[186]=C_h_intern(&lf[186],28,"\003sysresolve-include-filename");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\006inline");
lf[188]=C_h_intern(&lf[188],2,"pp");
lf[189]=C_h_intern(&lf[189],1,"M");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000\017; requirements:");
lf[191]=C_h_intern(&lf[191],11,"concatenate");
lf[192]=C_h_intern(&lf[192],12,"vector->list");
lf[193]=C_h_intern(&lf[193],26,"\010compilerfile-requirements");
lf[194]=C_h_intern(&lf[194],37,"\010compilerinitialize-analysis-database");
lf[195]=C_decode_literal(C_heaptop,"\376B\000\000\021initial node tree");
lf[196]=C_h_intern(&lf[196],1,"T");
lf[197]=C_h_intern(&lf[197],25,"\010compilerbuild-node-graph");
lf[198]=C_h_intern(&lf[198],32,"\010compilercanonicalize-begin-body");
lf[199]=C_decode_literal(C_heaptop,"\376B\000\000\011user pass");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\014User pass...");
lf[201]=C_h_intern(&lf[201],12,"check-syntax");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\015canonicalized");
lf[203]=C_h_intern(&lf[203],1,"2");
lf[204]=C_decode_literal(C_heaptop,"\376B\000\000\020canonicalization");
lf[205]=C_h_intern(&lf[205],18,"\010compilerunit-name");
lf[206]=C_h_intern(&lf[206],10,"\003sysnotice");
lf[207]=C_h_intern(&lf[207],17,"get-output-string");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\032\047 compiled in dynamic mode");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\000\016library unit `");
lf[210]=C_h_intern(&lf[210],18,"open-output-string");
lf[211]=C_h_intern(&lf[211],37,"\010compilerdisplay-line-number-database");
lf[212]=C_h_intern(&lf[212],1,"n");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\000\025line number database:");
lf[214]=C_h_intern(&lf[214],32,"\010compilerdisplay-real-name-table");
lf[215]=C_h_intern(&lf[215],1,"N");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000\020real name table:");
lf[217]=C_h_intern(&lf[217],35,"\010compilercompiler-syntax-statistics");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\002\011\011");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[220]=C_h_intern(&lf[220],5,"print");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\030applied compiler syntax:");
lf[222]=C_h_intern(&lf[222],30,"\010compilerwith-debugging-output");
lf[223]=C_h_intern(&lf[223],1,"S");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000;No module definition found for import libraries to emit: ~A");
lf[225]=C_h_intern(&lf[225],18,"string-intersperse");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000\002, ");
lf[227]=C_h_intern(&lf[227],8,"->string");
lf[228]=C_h_intern(&lf[228],28,"\010compilerimmutable-constants");
lf[229]=C_h_intern(&lf[229],19,"\010compilerused-units");
lf[230]=C_h_intern(&lf[230],6,"append");
lf[231]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016\376\377\016");
lf[232]=C_h_intern(&lf[232],5,"quote");
lf[233]=C_h_intern(&lf[233],28,"\003sysset-profile-info-vector!");
lf[234]=C_h_intern(&lf[234],33,"\010compilerprofile-info-vector-name");
lf[235]=C_h_intern(&lf[235],21,"\010compileremit-profile");
lf[236]=C_h_intern(&lf[236],25,"\003sysregister-profile-info");
lf[237]=C_h_intern(&lf[237],4,"set!");
lf[238]=C_h_intern(&lf[238],13,"\004corecallunit");
lf[239]=C_h_intern(&lf[239],6,"gensym");
lf[240]=C_h_intern(&lf[240],6,"import");
lf[241]=C_h_intern(&lf[241],6,"scheme");
lf[242]=C_h_intern(&lf[242],7,"chicken");
lf[243]=C_h_intern(&lf[243],4,"main");
lf[244]=C_h_intern(&lf[244],11,"\004coremodule");
lf[245]=C_h_intern(&lf[245],28,"\003sysexplicit-library-modules");
lf[246]=C_h_intern(&lf[246],4,"uses");
lf[247]=C_h_intern(&lf[247],7,"declare");
lf[248]=C_decode_literal(C_heaptop,"\376B\000\000\006source");
lf[249]=C_h_intern(&lf[249],1,"1");
lf[250]=C_decode_literal(C_heaptop,"\376B\000\000\032User preprocessing pass...");
lf[251]=C_decode_literal(C_heaptop,"\376B\000\000\021User read pass...");
lf[252]=C_h_intern(&lf[252],21,"\010compilerstring->expr");
lf[253]=C_h_intern(&lf[253],7,"reverse");
lf[254]=C_h_intern(&lf[254],27,"\003syscurrent-source-filename");
lf[255]=C_h_intern(&lf[255],33,"\010compilerclose-checked-input-file");
lf[256]=C_h_intern(&lf[256],25,"\010compilerread/source-info");
lf[257]=C_h_intern(&lf[257],16,"\003sysdynamic-wind");
lf[258]=C_h_intern(&lf[258],34,"\010compilercheck-and-open-input-file");
lf[259]=C_h_intern(&lf[259],8,"epilogue");
lf[260]=C_h_intern(&lf[260],8,"prologue");
lf[261]=C_h_intern(&lf[261],8,"postlude");
lf[262]=C_h_intern(&lf[262],7,"prelude");
lf[263]=C_h_intern(&lf[263],11,"make-vector");
lf[264]=C_h_intern(&lf[264],34,"\010compilerline-number-database-size");
lf[265]=C_h_intern(&lf[265],1,"r");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000\021target stack size");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\020target heap size");
lf[268]=C_decode_literal(C_heaptop,"\376B\000\000\021debugging options");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000\007options");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000\022compiling `~a\047 ...");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\0001\012Run `csi\047 to start the interactive interpreter.\012");
lf[272]=C_decode_literal(C_heaptop,"\376B\000\000.or try `csc\047 for a more convenient interface.\012");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000C\012Enter `chicken -help\047 for information on how to use the compiler,\012");
lf[274]=C_h_intern(&lf[274],5,"-help");
lf[275]=C_h_intern(&lf[275],1,"h");
lf[276]=C_h_intern(&lf[276],2,"-h");
lf[277]=C_h_intern(&lf[277],33,"\010compilerload-identifier-database");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000\012modules.db");
lf[279]=C_h_intern(&lf[279],18,"accumulate-profile");
lf[280]=C_h_intern(&lf[280],28,"\010compilerprofiled-procedures");
lf[281]=C_h_intern(&lf[281],3,"all");
lf[282]=C_decode_literal(C_heaptop,"\376B\000\000\015accumulative ");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000\032generating ~aprofiled code");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[285]=C_h_intern(&lf[285],39,"\010compilerdefault-profiling-declarations");
lf[286]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004set!\376\003\000\000\002\376\001\000\000\027\003sysprofile-append-mode\376\003\000\000\002\376\377\006\001\376\377\016\376\377\016");
lf[287]=C_decode_literal(C_heaptop,"\376B\000\000Eyou need to specify -profile-name if using accumulated profiling runs");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\011calltrace");
lf[289]=C_decode_literal(C_heaptop,"\376B\000\000\022debugging info: ~A");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\004none");
lf[291]=C_h_intern(&lf[291],21,"no-usual-integrations");
lf[292]=C_h_intern(&lf[292],17,"standard-bindings");
lf[293]=C_h_intern(&lf[293],34,"\010compilerdefault-standard-bindings");
lf[294]=C_h_intern(&lf[294],17,"extended-bindings");
lf[295]=C_h_intern(&lf[295],34,"\010compilerdefault-extended-bindings");
lf[296]=C_h_intern(&lf[296],1,"m");
lf[297]=C_h_intern(&lf[297],14,"set-gc-report!");
lf[298]=C_h_intern(&lf[298],8,"feature\077");
lf[299]=C_h_intern(&lf[299],18,"\000chicken-bootstrap");
lf[300]=C_h_intern(&lf[300],14,"compile-syntax");
lf[301]=C_h_intern(&lf[301],25,"\003sysenable-runtime-macros");
lf[302]=C_h_intern(&lf[302],22,"\004corerequire-extension");
lf[303]=C_h_intern(&lf[303],14,"string->symbol");
lf[304]=C_h_intern(&lf[304],17,"require-extension");
lf[305]=C_h_intern(&lf[305],28,"\010compilerpostponed-initforms");
lf[306]=C_h_intern(&lf[306],6,"delete");
lf[307]=C_h_intern(&lf[307],3,"eq\077");
lf[308]=C_h_intern(&lf[308],4,"load");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000\036Loading compiler extensions...");
lf[310]=C_h_intern(&lf[310],6,"extend");
lf[311]=C_h_intern(&lf[311],12,"string-split");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[313]=C_h_intern(&lf[313],10,"append-map");
lf[314]=C_h_intern(&lf[314],10,"no-feature");
lf[315]=C_decode_literal(C_heaptop,"\376B\000\000\002, ");
lf[316]=C_h_intern(&lf[316],7,"feature");
lf[317]=C_h_intern(&lf[317],12,"load-verbose");
lf[318]=C_h_intern(&lf[318],38,"no-procedure-checks-for-usual-bindings");
lf[319]=C_h_intern(&lf[319],8,"\003sysput!");
lf[320]=C_h_intern(&lf[320],21,"\010compileralways-bound");
lf[321]=C_h_intern(&lf[321],34,"\010compileralways-bound-to-procedure");
lf[322]=C_h_intern(&lf[322],41,"no-procedure-checks-for-toplevel-bindings");
lf[323]=C_h_intern(&lf[323],35,"\010compilerno-global-procedure-checks");
lf[324]=C_h_intern(&lf[324],19,"no-procedure-checks");
lf[325]=C_h_intern(&lf[325],28,"\010compilerno-procedure-checks");
lf[326]=C_h_intern(&lf[326],15,"no-bound-checks");
lf[327]=C_h_intern(&lf[327],24,"\010compilerno-bound-checks");
lf[328]=C_h_intern(&lf[328],14,"no-argc-checks");
lf[329]=C_h_intern(&lf[329],23,"\010compilerno-argc-checks");
lf[330]=C_h_intern(&lf[330],20,"keep-shadowed-macros");
lf[331]=C_h_intern(&lf[331],33,"\010compilerundefine-shadowed-macros");
lf[332]=C_decode_literal(C_heaptop,"\376B\000\000\002, ");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000(source- and output-filename are the same");
lf[334]=C_h_intern(&lf[334],12,"include-path");
lf[335]=C_h_intern(&lf[335],11,"r5rs-syntax");
lf[336]=C_h_intern(&lf[336],13,"symbol-escape");
lf[337]=C_h_intern(&lf[337],20,"parentheses-synonyms");
lf[338]=C_h_intern(&lf[338],5,"\000none");
lf[339]=C_h_intern(&lf[339],14,"case-sensitive");
lf[340]=C_decode_literal(C_heaptop,"\376B\000\000.Disabled the CHICKEN extensions to R5RS syntax");
lf[341]=C_h_intern(&lf[341],16,"no-symbol-escape");
lf[342]=C_decode_literal(C_heaptop,"\376B\000\000$Disabled support for escaped symbols");
lf[343]=C_h_intern(&lf[343],23,"no-parenthesis-synonyms");
lf[344]=C_h_intern(&lf[344],20,"parenthesis-synonyms");
lf[345]=C_decode_literal(C_heaptop,"\376B\000\000)Disabled support for parenthesis synonyms");
lf[346]=C_decode_literal(C_heaptop,"\376B\000\000\006prefix");
lf[347]=C_h_intern(&lf[347],7,"\000prefix");
lf[348]=C_decode_literal(C_heaptop,"\376B\000\000\004none");
lf[349]=C_decode_literal(C_heaptop,"\376B\000\000\006suffix");
lf[350]=C_h_intern(&lf[350],7,"\000suffix");
lf[351]=C_decode_literal(C_heaptop,"\376B\000\000+invalid argument to `-keyword-style\047 option");
lf[352]=C_h_intern(&lf[352],16,"case-insensitive");
lf[353]=C_decode_literal(C_heaptop,"\376B\000\000,Identifiers and symbols are case insensitive");
lf[354]=C_h_intern(&lf[354],24,"\010compilerinline-max-size");
lf[355]=C_decode_literal(C_heaptop,"\376B\000\0000invalid argument to `-inline-limit\047 option: `~A\047");
lf[356]=C_h_intern(&lf[356],26,"\010compilerlocal-definitions");
lf[357]=C_h_intern(&lf[357],6,"inline");
lf[358]=C_h_intern(&lf[358],30,"emit-external-prototypes-first");
lf[359]=C_h_intern(&lf[359],30,"\010compilerexternal-protos-first");
lf[360]=C_h_intern(&lf[360],5,"block");
lf[361]=C_h_intern(&lf[361],26,"\010compilerblock-compilation");
lf[362]=C_h_intern(&lf[362],17,"fixnum-arithmetic");
lf[363]=C_h_intern(&lf[363],11,"number-type");
lf[364]=C_h_intern(&lf[364],6,"fixnum");
lf[365]=C_h_intern(&lf[365],18,"disable-interrupts");
lf[366]=C_h_intern(&lf[366],10,"setup-mode");
lf[367]=C_h_intern(&lf[367],14,"\003syssetup-mode");
lf[368]=C_h_intern(&lf[368],11,"no-warnings");
lf[369]=C_decode_literal(C_heaptop,"\376B\000\000\025Warnings are disabled");
lf[370]=C_h_intern(&lf[370],12,"strict-types");
lf[371]=C_h_intern(&lf[371],30,"\010compilerstrict-variable-types");
lf[372]=C_h_intern(&lf[372],19,"\003sysnotices-enabled");
lf[373]=C_h_intern(&lf[373],13,"inline-global");
lf[374]=C_h_intern(&lf[374],5,"local");
lf[375]=C_h_intern(&lf[375],18,"no-compiler-syntax");
lf[376]=C_h_intern(&lf[376],32,"\010compilercompiler-syntax-enabled");
lf[377]=C_h_intern(&lf[377],14,"no-lambda-info");
lf[378]=C_h_intern(&lf[378],26,"\010compileremit-closure-info");
lf[379]=C_h_intern(&lf[379],3,"raw");
lf[380]=C_h_intern(&lf[380],8,"unboxing");
lf[381]=C_h_intern(&lf[381],7,"warning");
lf[382]=C_decode_literal(C_heaptop,"\376B\000\000#obsolete compiler option: -unboxing");
lf[383]=C_h_intern(&lf[383],11,"lambda-lift");
lf[384]=C_decode_literal(C_heaptop,"\376B\000\000&obsolete compiler option: -lambda-lift");
lf[385]=C_h_intern(&lf[385],12,"emit-exports");
lf[386]=C_decode_literal(C_heaptop,"\376B\000\000\047obsolete compiler option: -emit-exports");
lf[387]=C_h_intern(&lf[387],1,"b");
lf[388]=C_h_intern(&lf[388],15,"\003sysstart-timer");
lf[389]=C_h_intern(&lf[389],25,"emit-all-import-libraries");
lf[390]=C_h_intern(&lf[390],29,"\010compilerall-import-libraries");
lf[391]=C_h_intern(&lf[391],17,"\003sysstring-append");
lf[392]=C_decode_literal(C_heaptop,"\376B\000\000\013.import.scm");
lf[393]=C_h_intern(&lf[393],19,"emit-import-library");
lf[394]=C_h_intern(&lf[394],28,"\010compilerprint-debug-options");
lf[395]=C_h_intern(&lf[395],16,"\003sysstring->list");
lf[396]=C_h_intern(&lf[396],5,"debug");
lf[397]=C_h_intern(&lf[397],18,"\003sysdload-disabled");
lf[398]=C_h_intern(&lf[398],15,"repository-path");
lf[399]=C_h_intern(&lf[399],30,"\010compilerstandalone-executable");
lf[400]=C_h_intern(&lf[400],29,"\010compilerstring->c-identifier");
lf[401]=C_h_intern(&lf[401],18,"\010compilerstringify");
lf[402]=C_h_intern(&lf[402],10,"stack-size");
lf[403]=C_decode_literal(C_heaptop,"\376B\000\000\001;");
lf[404]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[405]=C_h_intern(&lf[405],24,"get-environment-variable");
lf[406]=C_decode_literal(C_heaptop,"\376B\000\000\024CHICKEN_INCLUDE_PATH");
lf[407]=C_h_intern(&lf[407],9,"to-stdout");
lf[408]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[409]=C_h_intern(&lf[409],13,"pathname-file");
lf[410]=C_decode_literal(C_heaptop,"\376B\000\000\003out");
lf[411]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004uses\376\003\000\000\002\376\001\000\000\017debugger-client\376\377\016\376\377\016");
lf[412]=C_h_intern(&lf[412],29,"\010compilerdefault-declarations");
lf[413]=C_h_intern(&lf[413],30,"\010compilerunits-used-by-default");
lf[414]=C_h_intern(&lf[414],28,"\010compilerinitialize-compiler");
lf[415]=C_h_intern(&lf[415],14,"make-parameter");
C_register_lf2(lf,416,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1683,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in ... */
static void C_ccall f_2330(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(41,c,4)))){
C_save_and_reclaim((void *)f_2330,2,av);}
a=C_alloc(41);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2333,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[6];
if(C_truep(C_u_i_memq(lf[335],t3))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4542,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5788,a[2]=t5,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[112]+1);
av2[3]=lf[340];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2333(2,av2);}}}

/* k3060 in k3057 in k3052 in k3049 in k3033 in k3027 in k3013 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in ... */
static void C_ccall f_3062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3062,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3065,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:568: end-time */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2076(t3,t2,lf[166]);}

/* k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in ... */
static void C_ccall f_2333(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(45,c,2)))){
C_save_and_reclaim((void *)f_2333,2,av);}
a=C_alloc(45);
t2=C_mutate2((C_word*)lf[64]+1 /* (set! ##compiler#verbose-mode ...) */,((C_word*)t0)[2]);
t3=C_set_block_item(lf[65] /* ##sys#read-error-with-line-number */,0,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2339,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],tmp=(C_word)a,a+=33,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=*((C_word*)lf[16]+1);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4497,a[2]=t4,a[3]=((C_word*)t0)[34],a[4]=t7,a[5]=t9,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:277: collect-options */
t11=((C_word*)((C_word*)t0)[23])[1];
f_2031(t11,t10,lf[334]);}

/* k3063 in k3060 in k3057 in k3052 in k3049 in k3033 in k3027 in k3013 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in ... */
static void C_ccall f_3065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3065,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3068,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:569: begin-time */
t3=((C_word*)((C_word*)t0)[8])[1];
f_2066(t3,t2);}

/* k3066 in k3063 in k3060 in k3057 in k3052 in k3049 in k3033 in k3027 in k3013 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in ... */
static void C_ccall f_3068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3068,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3071,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:570: debugging */
t3=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[36];
av2[3]=lf[165];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in ... */
static void C_ccall f_2327(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(41,c,4)))){
C_save_and_reclaim((void *)f_2327,2,av);}
a=C_alloc(41);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2330,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[6];
if(C_truep(C_u_i_memq(lf[341],t3))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4559,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5794,a[2]=t5,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[112]+1);
av2[3]=lf[342];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2330(2,av2);}}}

/* k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in ... */
static void C_fcall f_2452(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(34,0,4)))){
C_save_and_reclaim_args((void *)trf_2452,2,t0,t1);}
a=C_alloc(34);
t2=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_2455,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],tmp=(C_word)a,a+=28,tmp);
if(C_truep(*((C_word*)lf[75]+1))){
t3=t2;
t4=C_a_i_list(&a,1,lf[288]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5754,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[112]+1);
av2[3]=lf[289];
av2[4]=t4;
C_apply(5,av2);}}
else{
t3=t2;
t4=C_a_i_list(&a,1,lf[290]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5760,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[112]+1);
av2[3]=lf[289];
av2[4]=t4;
C_apply(5,av2);}}}

/* k4604 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in ... */
static void C_ccall f_4606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4606,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4609,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:254: register-feature! */
t3=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[352];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in ... */
static void C_ccall f_2455(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,2)))){
C_save_and_reclaim((void *)f_2455,2,av);}
a=C_alloc(32);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2458,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(((C_word*)t0)[27])){
t3=C_i_car(((C_word*)t0)[27]);
t4=C_eqp(lf[279],t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4061,a[2]=((C_word*)t0)[24],a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
if(C_truep(((C_word*)t0)[22])){
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_4061(2,av2);}}
else{
/* batch-driver.scm:362: quit */
t7=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[287];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}
else{
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_4061(2,av2);}}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2458(2,av2);}}}

/* k4607 in k4604 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in ... */
static void C_ccall f_4609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4609,2,av);}
/* batch-driver.scm:255: case-sensitive */
t2=*((C_word*)lf[339]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a4771 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_4772(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4772,3,av);}
a=C_alloc(10);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4788,a[2]=t5,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* string->list */
t8=*((C_word*)lf[395]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in ... */
static void C_ccall f_2458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,2)))){
C_save_and_reclaim((void *)f_2458,2,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2461,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:376: load-identifier-database */
t3=*((C_word*)lf[277]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[278];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in ... */
static void C_ccall f_2342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(39,c,3)))){
C_save_and_reclaim((void *)f_2342,2,av);}
a=C_alloc(39);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2346,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4430,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4478,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:285: collect-options */
t5=((C_word*)((C_word*)t0)[22])[1];
f_2031(t5,t4,lf[246]);}

/* map-loop393 in k4435 in a4429 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in ... */
static void C_fcall f_4442(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4442,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4467,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:284: g399 */
t5=*((C_word*)lf[303]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4614 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in ... */
static void C_ccall f_4616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4616,2,av);}
a=C_alloc(7);
t2=C_a_i_string_to_number(&a,2,t1,C_fix(10));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4622,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t2)){
t4=C_mutate2((C_word*)lf[354]+1 /* (set! ##compiler#inline-max-size ...) */,t2);
t5=((C_word*)t0)[2];
f_2318(t5,t4);}
else{
/* batch-driver.scm:251: quit */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[355];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in ... */
static void C_ccall f_2339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,2)))){
C_save_and_reclaim((void *)f_2339,2,av);}
a=C_alloc(33);
t2=C_mutate2((C_word*)lf[66]+1 /* (set! ##sys#include-pathnames ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2342,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
if(C_truep(((C_word*)t0)[14])){
if(C_truep(((C_word*)t0)[7])){
if(C_truep(C_i_string_equal_p(((C_word*)t0)[14],((C_word*)t0)[7]))){
/* batch-driver.scm:281: quit */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[333];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2342(2,av2);}}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2342(2,av2);}}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2342(2,av2);}}}

/* k4786 in a4771 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_4788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4788,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4793,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4793(t5,((C_word*)t0)[4],t1);}

/* f5684 in k3194 in k3185 in for-each-loop1029 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in ... */
static void C_ccall f5684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f5684,2,av);}
/* batch-driver.scm:108: debugging */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4627 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in ... */
static void C_ccall f_4629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4629,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_2313(t3,t2);}

/* map-loop863 in k3566 in k3562 in k3547 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in ... */
static void C_fcall f_3612(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,0,2)))){
C_save_and_reclaim_args((void *)trf_3612,3,t0,t1,t2);}
a=C_alloc(27);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_list(&a,2,lf[232],t4);
t6=C_u_i_cdr(t3);
t7=C_a_i_list(&a,2,lf[232],t6);
t8=C_a_i_list(&a,4,lf[233],*((C_word*)lf[234]+1),t5,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t9);
t12=C_slot(t2,C_fix(1));
t14=t1;
t15=t12;
t1=t14;
t2=t15;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4620 in k4614 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in ... */
static void C_ccall f_4622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4622,2,av);}
t2=C_mutate2((C_word*)lf[354]+1 /* (set! ##compiler#inline-max-size ...) */,t1);
t3=((C_word*)t0)[2];
f_2318(t3,t2);}

/* f5696 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_ccall f5696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f5696,2,av);}
/* batch-driver.scm:108: debugging */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4465 in map-loop393 in k4435 in a4429 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in ... */
static void C_ccall f_4467(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4467,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4442(t6,((C_word*)t0)[5],t5);}

/* k4899 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_4901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4901,2,av);}
if(C_truep(t1)){
t2=t1;
/* batch-driver.scm:75: string-split */
t3=*((C_word*)lf[311]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=lf[403];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* batch-driver.scm:75: string-split */
t2=*((C_word*)lf[311]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[404];
av2[3]=lf[403];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k3013 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in ... */
static void C_ccall f_3015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_3015,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3029,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* batch-driver.scm:559: collect-options */
t3=((C_word*)((C_word*)t0)[12])[1];
f_2031(t3,t2,lf[175]);}

/* g72 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_fcall f_4905(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_4905,3,t0,t1,t2);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4909,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:68: option-arg */
f_1714(t3,t2);}

/* k4633 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in ... */
static void C_ccall f_4635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4635,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_2308(t3,t2);}

/* k4907 in g72 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_4909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4909,2,av);}
if(C_truep(C_i_symbolp(t1))){
/* batch-driver.scm:70: symbol->string */
t2=*((C_word*)lf[173]+1);{
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
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3197 in k3194 in k3185 in for-each-loop1029 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in ... */
static void C_ccall f_3199(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3199,2,av);}
/* batch-driver.scm:539: load-inline-file */
t2=*((C_word*)lf[180]+1);{
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

/* k3194 in k3185 in for-each-loop1029 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in k2583 in ... */
static void C_ccall f_3196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_3196,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3199,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=t2;
t4=C_a_i_list(&a,1,((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5684,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[112]+1);
av2[3]=lf[184];
av2[4]=t4;
C_apply(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4476 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in ... */
static void C_ccall f_4478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4478,2,av);}
/* batch-driver.scm:283: append-map */
t2=*((C_word*)lf[313]+1);{
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

/* k3018 in for-each-loop1073 in k3027 in k3013 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in ... */
static void C_ccall f_3020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3020,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* batch-driver.scm:558: quit */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[174];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k3027 in k3013 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in ... */
static void C_ccall f_3029(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_3029,2,av);}
a=C_alloc(17);
t2=C_i_check_list_2(t1,lf[43]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3035,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3109,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3109(t7,t3,t1);}

/* k4150 in k4144 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in ... */
static void C_ccall f_4152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4152,2,av);}
/* batch-driver.scm:333: append */
t2=*((C_word*)lf[230]+1);{
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

/* map-loop584 in k4144 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in ... */
static void C_fcall f_4154(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_4154,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4179,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4143,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:335: string->symbol */
t7=*((C_word*)lf[303]+1);{
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

/* k4141 in map-loop584 in k4144 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in ... */
static void C_ccall f_4143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_4143,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[302],t2,C_SCHEME_TRUE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4144 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in ... */
static void C_ccall f_4146(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4146,2,av);}
a=C_alloc(11);
t2=C_i_check_list_2(t1,lf[57]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4152,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4154,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4154(t7,t3,t1);}

/* k4662 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2231 in k2228 in k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in ... */
static void C_ccall f_4664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4664,2,av);}
t2=C_set_block_item(lf[127] /* ##sys#warnings-enabled */,0,C_SCHEME_FALSE);
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t4=((C_word*)t0)[3];
f_2279(t4,t3);}

/* k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in ... */
static void C_ccall f_2389(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(38,c,3)))){
C_save_and_reclaim((void *)f_2389,2,av);}
a=C_alloc(38);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[43]);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2404,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],tmp=(C_word)a,a+=33,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4188,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4188(t7,t3,((C_word*)t0)[2]);}

/* k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in ... */
static void C_ccall f_2386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(37,c,4)))){
C_save_and_reclaim((void *)f_2386,2,av);}
a=C_alloc(37);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2389,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],a[27]=((C_word*)t0)[26],a[28]=((C_word*)t0)[27],a[29]=((C_word*)t0)[28],a[30]=((C_word*)t0)[29],a[31]=((C_word*)t0)[30],a[32]=((C_word*)t0)[31],a[33]=((C_word*)t0)[32],tmp=(C_word)a,a+=34,tmp);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5770,a[2]=t4,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[112]+1);
av2[3]=lf[309];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}

/* k2396 in for-each-loop565 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in ... */
static void C_ccall f_2398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2398,2,av);}
/* batch-driver.scm:322: load */
t2=*((C_word*)lf[308]+1);{
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

/* f5664 in k2964 in k2961 in k2958 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in ... */
static void C_ccall f5664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f5664,2,av);}
/* batch-driver.scm:108: debugging */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f5676 in for-each-loop1050 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in k2595 in k2592 in k2586 in ... */
static void C_ccall f5676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f5676,2,av);}
/* batch-driver.scm:108: debugging */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3075 in k3072 in k3069 in k3066 in k3063 in k3060 in k3057 in k3052 in k3049 in k3033 in k3027 in k3013 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in ... */
static void C_ccall f_3077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3077,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3080,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[54]+1))){
/* batch-driver.scm:574: print-node */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1846(t3,t2,lf[161],lf[162],((C_word*)t0)[4]);}
else{
t3=C_set_block_item(lf[96] /* ##compiler#first-analysis */,0,C_SCHEME_TRUE);
t4=((C_word*)t0)[2];
f_2661(t4,t3);}}

/* k3069 in k3066 in k3063 in k3060 in k3057 in k3052 in k3049 in k3033 in k3027 in k3013 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_3071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_3071,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3074,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:571: scrutinize */
t3=*((C_word*)lf[164]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)((C_word*)t0)[6])[1];
av2[4]=((C_word*)((C_word*)t0)[7])[1];
av2[5]=*((C_word*)lf[54]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3072 in k3069 in k3066 in k3063 in k3060 in k3057 in k3052 in k3049 in k3033 in k3027 in k3013 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in ... */
static void C_ccall f_3074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3074,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3077,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:572: end-time */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2076(t3,t2,lf[163]);}

/* k4114 in k2429 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in ... */
static void C_ccall f_4116(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4116,2,av);}
/* batch-driver.scm:345: arg-val */
f_1941(((C_word*)t0)[3],t1);}

/* k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in ... */
static void C_fcall f_2355(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,2)))){
C_save_and_reclaim_args((void *)trf_2355,2,t0,t1);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2358,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=((C_word*)t0)[4];
if(C_truep(C_u_i_memq(lf[324],t3))){
t4=C_set_block_item(lf[325] /* ##compiler#no-procedure-checks */,0,C_SCHEME_TRUE);
t5=t2;
f_2358(t5,t4);}
else{
t4=t2;
f_2358(t4,C_SCHEME_UNDEFINED);}}

/* for-each-loop1094 in k3033 in k3027 in k3013 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in k2598 in ... */
static void C_fcall f_3086(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_3086,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3096,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3044,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3048,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:562: symbol->string */
t8=*((C_word*)lf[173]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in ... */
static void C_fcall f_2352(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,2)))){
C_save_and_reclaim_args((void *)trf_2352,2,t0,t1);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2355,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=((C_word*)t0)[4];
if(C_truep(C_u_i_memq(lf[326],t3))){
t4=C_set_block_item(lf[327] /* ##compiler#no-bound-checks */,0,C_SCHEME_TRUE);
t5=t2;
f_2355(t5,t4);}
else{
t4=t2;
f_2355(t4,C_SCHEME_UNDEFINED);}}

/* k3078 in k3075 in k3072 in k3069 in k3066 in k3063 in k3060 in k3057 in k3052 in k3049 in k3033 in k3027 in k3013 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in ... */
static void C_ccall f_3080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3080,2,av);}
t2=C_set_block_item(lf[96] /* ##compiler#first-analysis */,0,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
f_2661(t3,t2);}

/* k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in ... */
static void C_fcall f_2349(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,2)))){
C_save_and_reclaim_args((void *)trf_2349,2,t0,t1);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=((C_word*)t0)[4];
if(C_truep(C_u_i_memq(lf[328],t3))){
t4=C_set_block_item(lf[329] /* ##compiler#no-argc-checks */,0,C_SCHEME_TRUE);
t5=t2;
f_2352(t5,t4);}
else{
t4=t2;
f_2352(t4,C_SCHEME_UNDEFINED);}}

/* k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in ... */
static void C_ccall f_2346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,2)))){
C_save_and_reclaim((void *)f_2346,2,av);}
a=C_alloc(33);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2349,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[2],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t4=((C_word*)t0)[5];
if(C_truep(C_u_i_memq(lf[330],t4))){
t5=C_set_block_item(lf[331] /* ##compiler#undefine-shadowed-macros */,0,C_SCHEME_FALSE);
t6=t3;
f_2349(t6,t5);}
else{
t5=t3;
f_2349(t5,C_SCHEME_UNDEFINED);}}

/* map-loop796 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in ... */
static void C_fcall f_3709(C_word t0,C_word t1,C_word t2){
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(18,0,2)))){
C_save_and_reclaim_args((void *)trf_3709,3,t0,t1,t2);}
a=C_alloc(18);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
t5=C_u_i_car(t3);
t6=C_a_i_list(&a,2,lf[232],t5);
t7=C_a_i_list(&a,3,lf[237],t4,t6);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t8);
t10=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t8);
t11=C_slot(t2,C_fix(1));
t13=t1;
t14=t11;
t1=t13;
t2=t14;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in ... */
static void C_fcall f_2361(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(41,0,3)))){
C_save_and_reclaim_args((void *)trf_2361,2,t0,t1);}
a=C_alloc(41);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2364,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=((C_word*)t0)[4];
if(C_truep(C_u_i_memq(lf[318],t3))){
t4=*((C_word*)lf[293]+1);
t5=C_i_check_list_2(*((C_word*)lf[293]+1),lf[43]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4325,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4392,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=((C_word*)t8)[1];
f_4392(t10,t6,*((C_word*)lf[293]+1));}
else{
t4=t2;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2364(2,av2);}}}

/* k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in ... */
static void C_ccall f_2364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,2)))){
C_save_and_reclaim((void *)f_2364,2,av);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2367,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
if(C_truep(C_i_memq(lf[36],*((C_word*)lf[30]+1)))){
/* batch-driver.scm:307: load-verbose */
t3=*((C_word*)lf[317]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2367(2,av2);}}}

/* k3094 in for-each-loop1094 in k3033 in k3027 in k3013 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in k2615 in k2612 in k2607 in k2604 in k2601 in ... */
static void C_ccall f_3096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3096,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3086(t3,((C_word*)t0)[4],t2);}

/* k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 in ... */
static void C_ccall f_2224(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(44,c,3)))){
C_save_and_reclaim((void *)f_2224,2,av);}
a=C_alloc(44);
t2=C_i_check_list_2(t1,lf[57]);
t3=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2230,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4729,a[2]=((C_word*)t0)[37],a[3]=t5,a[4]=((C_word*)t0)[38],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4729(t7,t3,t1);}

/* k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in k2283 in ... */
static void C_fcall f_2358(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,2)))){
C_save_and_reclaim_args((void *)trf_2358,2,t0,t1);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2361,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=((C_word*)t0)[4];
if(C_truep(C_u_i_memq(lf[322],t3))){
t4=C_set_block_item(lf[323] /* ##compiler#no-global-procedure-checks */,0,C_SCHEME_TRUE);
t5=t2;
f_2361(t5,t4);}
else{
t4=t2;
f_2361(t4,C_SCHEME_UNDEFINED);}}

/* k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in ... */
static void C_ccall f_2373(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(40,c,3)))){
C_save_and_reclaim((void *)f_2373,2,av);}
a=C_alloc(40);
t2=*((C_word*)lf[68]+1);
t3=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2376,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=t2,tmp=(C_word)a,a+=34,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4234,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4242,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:315: collect-options */
t6=((C_word*)((C_word*)t0)[21])[1];
f_2031(t6,t5,lf[314]);}

/* map-loop826 in k3547 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in ... */
static void C_fcall f_3675(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3675,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,lf[238],t3);
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

/* k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in ... */
static void C_ccall f_2370(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(39,c,3)))){
C_save_and_reclaim((void *)f_2370,2,av);}
a=C_alloc(39);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2373,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4244,a[2]=t4,a[3]=((C_word*)t0)[33],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4244(t6,t2,t1);}

/* k2228 in k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in ... */
static void C_ccall f_2230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(37,c,2)))){
C_save_and_reclaim((void *)f_2230,2,av);}
a=C_alloc(37);
t2=C_mutate2((C_word*)lf[58]+1 /* (set! ##compiler#import-libraries ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2233,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
t4=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[389],t4))){
if(C_truep(((C_word*)t0)[17])){
t5=t3;
f_2233(t5,C_SCHEME_UNDEFINED);}
else{
t5=C_set_block_item(lf[390] /* ##compiler#all-import-libraries */,0,C_SCHEME_TRUE);
t6=t3;
f_2233(t6,t5);}}
else{
t5=t3;
f_2233(t5,C_SCHEME_UNDEFINED);}}

/* k2231 in k2228 in k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in ... */
static void C_fcall f_2233(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(37,0,2)))){
C_save_and_reclaim_args((void *)trf_2233,2,t0,t1);}
a=C_alloc(37);
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[59],t2);
t4=C_i_not(t3);
t5=C_set_block_item(lf[60] /* ##compiler#enable-module-registration */,0,t4);
t6=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2240,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
if(C_truep(*((C_word*)lf[54]+1))){
t7=C_set_block_item(((C_word*)t0)[22],0,C_SCHEME_TRUE);
t8=t6;
f_2240(t8,t7);}
else{
t7=t6;
f_2240(t7,C_SCHEME_UNDEFINED);}}

/* k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in k2298 in k2295 in k2292 in ... */
static void C_ccall f_2367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(40,c,3)))){
C_save_and_reclaim((void *)f_2367,2,av);}
a=C_alloc(40);
t2=*((C_word*)lf[67]+1);
t3=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2370,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=t2,tmp=(C_word)a,a+=34,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4267,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4275,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:312: collect-options */
t6=((C_word*)((C_word*)t0)[21])[1];
f_2031(t6,t5,lf[316]);}

/* k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in ... */
static void C_ccall f_2379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,c,2)))){
C_save_and_reclaim((void *)f_2379,2,av);}
a=C_alloc(36);
t2=C_a_i_cons(&a,2,lf[69],*((C_word*)lf[70]+1));
t3=C_mutate2((C_word*)lf[70]+1 /* (set! ##sys#features ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2386,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
/* batch-driver.scm:319: collect-options */
t5=((C_word*)((C_word*)t0)[21])[1];
f_2031(t5,t4,lf[310]);}

/* k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in k2316 in k2311 in k2306 in k2301 in ... */
static void C_ccall f_2376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(39,c,3)))){
C_save_and_reclaim((void *)f_2376,2,av);}
a=C_alloc(39);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2379,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4211,a[2]=t4,a[3]=((C_word*)t0)[33],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4211(t6,t2,t1);}

/* k3547 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in ... */
static void C_ccall f_3549(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_3549,2,av);}
a=C_alloc(21);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=*((C_word*)lf[229]+1);
t8=C_i_check_list_2(*((C_word*)lf[229]+1),lf[57]);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3564,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3675,a[2]=t5,a[3]=t11,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_3675(t13,t9,*((C_word*)lf[229]+1));}

/* map-loop763 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in ... */
static void C_fcall f_3743(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3743,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3768,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:446: g769 */
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

/* k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_4944(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_4944,2,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,lf[13],t1);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t0)[2];
t7=C_u_i_memq(lf[14],t6);
t8=((C_word*)t0)[2];
t9=C_u_i_memq(lf[15],t8);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1761,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t7,a[5]=t5,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t9)){
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4905,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:66: g72 */
t12=t11;
f_4905(t12,t10,t9);}
else{
t11=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[407],t11))){
t12=t10;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
f_1761(2,av2);}}
else{
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4933,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[5])){
/* batch-driver.scm:73: pathname-file */
t13=*((C_word*)lf[409]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t13;
av2[1]=t12;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t13+1)))(3,av2);}}
else{
/* batch-driver.scm:73: make-pathname */
t13=*((C_word*)lf[171]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t13;
av2[1]=t10;
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[410];
av2[4]=lf[408];
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}}}}

/* k3566 in k3562 in k3547 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in ... */
static void C_fcall f_3568(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_3568,2,t0,t1);}
a=C_alloc(21);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=*((C_word*)lf[89]+1);
t8=C_i_check_list_2(*((C_word*)lf[89]+1),lf[57]);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3597,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3612,a[2]=t5,a[3]=t11,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_3612(t13,t9,*((C_word*)lf[89]+1));}

/* k3562 in k3547 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in ... */
static void C_ccall f_3564(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(41,c,2)))){
C_save_and_reclaim((void *)f_3564,2,av);}
a=C_alloc(41);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3568,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(*((C_word*)lf[235]+1))){
t4=C_a_i_list(&a,2,lf[232],((C_word*)t0)[7]);
t5=*((C_word*)lf[205]+1);
t6=(C_truep(*((C_word*)lf[205]+1))?C_a_i_list(&a,2,lf[232],C_SCHEME_FALSE):(C_truep(((C_word*)t0)[8])?C_a_i_list(&a,2,lf[232],((C_word*)t0)[8]):C_a_i_list(&a,2,lf[232],C_SCHEME_TRUE)));
t7=C_a_i_list(&a,3,lf[236],t4,t6);
t8=C_a_i_list(&a,3,lf[237],*((C_word*)lf[234]+1),t7);
t9=t3;
f_3568(t9,C_a_i_list(&a,1,t8));}
else{
t4=t3;
f_3568(t4,C_SCHEME_END_OF_LIST);}}

/* k4121 in k2425 in k2422 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in ... */
static void C_ccall f_4123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4123,2,av);}
/* batch-driver.scm:342: arg-val */
f_1941(((C_word*)t0)[3],t1);}

/* k3803 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in ... */
static void C_ccall f_3805(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_3805,2,av);}
a=C_alloc(12);
t2=C_mutate2((C_word*)lf[245]+1 /* (set! ##sys#explicit-library-modules ...) */,t1);
t3=C_a_i_cons(&a,2,lf[246],((C_word*)((C_word*)t0)[2])[1]);
t4=C_a_i_list(&a,2,lf[247],t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)((C_word*)t0)[3])[1]);
t6=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t5);
t7=((C_word*)t0)[4];
f_2570(t7,t6);}

/* a2135 in k2120 in body228 in analyze in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_2136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2136,5,av);}
t5=*((C_word*)lf[52]+1);
/* batch-driver.scm:167: g263 */
t6=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=t3;
av2[5]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}

/* k3595 in k3566 in k3562 in k3547 in k2586 in k2583 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in ... */
static void C_ccall f_3597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_3597,2,av);}
t2=*((C_word*)lf[205]+1);
if(C_truep(*((C_word*)lf[205]+1))){
/* batch-driver.scm:455: append */
t3=*((C_word*)lf[230]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=t1;
av2[6]=((C_word*)t0)[6];
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=lf[231];
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}
else{
if(C_truep(((C_word*)t0)[7])){
/* batch-driver.scm:455: append */
t3=*((C_word*)lf[230]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=t1;
av2[6]=((C_word*)t0)[6];
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=lf[231];
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}
else{
t3=((C_word*)((C_word*)t0)[8])[1];
/* batch-driver.scm:455: append */
t4=*((C_word*)lf[230]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=t1;
av2[6]=((C_word*)t0)[6];
av2[7]=t3;
av2[8]=lf[231];
((C_proc)(void*)(*((C_word*)t4+1)))(9,av2);}}}}

/* k3766 in map-loop763 in k2577 in k2574 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in ... */
static void C_ccall f_3768(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3768,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3743(t6,((C_word*)t0)[5],t5);}

/* a2129 in k2120 in body228 in analyze in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_2130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2130,4,av);}
t4=*((C_word*)lf[51]+1);
/* batch-driver.scm:166: g249 */
t5=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k4196 in for-each-loop565 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in ... */
static void C_ccall f_4198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4198,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4188(t3,((C_word*)t0)[4],t2);}

/* for-each-loop565 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in k2337 in k2331 in k2328 in k2325 in k2322 in k2319 in ... */
static void C_fcall f_4188(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_4188,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4198,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2398,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:322: ##sys#resolve-include-filename */
t7=*((C_word*)lf[186]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4931 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_4933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4933,2,av);}
/* batch-driver.scm:73: make-pathname */
t2=*((C_word*)lf[171]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=t1;
av2[4]=lf[408];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k2902 in k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in a2862 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2828 in k2825 in k2822 in k2819 in k2702 in k2699 in ... */
static void C_ccall f_2904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2904,2,av);}
/* batch-driver.scm:691: ##sys#display-times */
t2=*((C_word*)lf[116]+1);{
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

/* k4177 in map-loop584 in k4144 in k2418 in k2414 in k2406 in k2402 in k2387 in k2384 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2340 in ... */
static void C_ccall f_4179(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4179,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4154(t6,((C_word*)t0)[5],t5);}

/* k2123 in k2120 in body228 in analyze in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_2125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2125,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2120 in body228 in analyze in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_2122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,8)))){
C_save_and_reclaim((void *)f_2122,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2125,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2130,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2136,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:165: upap */
t6=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
av2[4]=((C_word*)t0)[5];
av2[5]=t4;
av2[6]=t5;
av2[7]=((C_word*)t0)[6];
av2[8]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t6+1)))(9,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2231 in k2228 in k2222 in k2196 in k2193 in k2186 in k2183 in ... */
static void C_fcall f_2282(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_2282,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2285,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[159],t3))){
t4=C_set_block_item(lf[159] /* unsafe */,0,C_SCHEME_TRUE);
t5=t2;
f_2285(t5,t4);}
else{
t4=t2;
f_2285(t4,C_SCHEME_UNDEFINED);}}

/* def-no230 in analyze in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_fcall f_2146(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_2146,2,t0,t1);}
/* batch-driver.scm:56: def-contf231 */
t2=((C_word*)t0)[2];
f_2141(t2,t1,C_fix(0));}

/* k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2231 in k2228 in k2222 in k2196 in k2193 in ... */
static void C_fcall f_2288(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_2288,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2291,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[365],t3))){
t4=C_set_block_item(lf[133] /* ##compiler#insert-timer-checks */,0,C_SCHEME_FALSE);
t5=t2;
f_2291(t5,t4);}
else{
t4=t2;
f_2291(t4,C_SCHEME_UNDEFINED);}}

/* k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2231 in k2228 in k2222 in k2196 in k2193 in k2186 in ... */
static void C_fcall f_2285(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_2285,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2288,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[366],t3))){
t4=C_set_block_item(lf[367] /* ##sys#setup-mode */,0,C_SCHEME_TRUE);
t5=t2;
f_2288(t5,t4);}
else{
t4=t2;
f_2288(t4,C_SCHEME_UNDEFINED);}}

/* def-contf231 in analyze in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_fcall f_2141(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_2141,3,t0,t1,t2);}
/* batch-driver.scm:56: body228 */
t3=((C_word*)t0)[2];
f_2118(t3,t1,t2,C_SCHEME_TRUE);}

/* k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2231 in k2228 in k2222 in ... */
static void C_fcall f_2294(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_2294,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2297,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[360],t3))){
t4=C_set_block_item(lf[361] /* ##compiler#block-compilation */,0,C_SCHEME_TRUE);
t5=t2;
f_2297(t5,t4);}
else{
t4=t2;
f_2297(t4,C_SCHEME_UNDEFINED);}}

/* k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2231 in k2228 in k2222 in k2196 in ... */
static void C_fcall f_2291(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_2291,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2294,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[362],t3))){
t4=C_mutate2((C_word*)lf[363]+1 /* (set! number-type ...) */,lf[364]);
t5=t2;
f_2294(t5,t4);}
else{
t4=t2;
f_2294(t4,C_SCHEME_UNDEFINED);}}

/* body228 in analyze in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_fcall f_2118(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_2118,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2122,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:163: analyze-expression */
t5=*((C_word*)lf[53]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2112 in k2090 in k2087 in k2084 in end-time in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_2114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2114,2,av);}
a=C_alloc(4);
t2=C_a_i_minus(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
/* batch-driver.scm:159: round */
t3=*((C_word*)lf[48]+1);{
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

/* analyze in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_fcall f_2116(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_2116,5,t0,t1,t2,t3,t4);}
a=C_alloc(11);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2118,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2141,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2146,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t4))){
/* batch-driver.scm:56: def-no230 */
t8=t7;
f_2146(t8,t1);}
else{
t8=C_i_car(t4);
t9=C_u_i_cdr(t4);
if(C_truep(C_i_nullp(t9))){
/* batch-driver.scm:56: def-contf231 */
t10=t6;
f_2141(t10,t1,t8);}
else{
t10=C_i_car(t9);
t11=C_u_i_cdr(t9);
/* batch-driver.scm:56: body228 */
t12=t5;
f_2118(t12,t1,t8,t10);}}}

/* k2295 in k2292 in k2289 in k2286 in k2283 in k2280 in k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2231 in k2228 in ... */
static void C_fcall f_2297(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_2297,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2300,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[358],t3))){
t4=C_set_block_item(lf[359] /* ##compiler#external-protos-first */,0,C_SCHEME_TRUE);
t5=t2;
f_2300(t5,t4);}
else{
t4=t2;
f_2300(t4,C_SCHEME_UNDEFINED);}}

/* k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2231 in k2228 in k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in ... */
static void C_fcall f_2261(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_2261,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2264,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[375],t3))){
t4=C_set_block_item(lf[376] /* ##compiler#compiler-syntax-enabled */,0,C_SCHEME_FALSE);
t5=t2;
f_2264(t5,t4);}
else{
t4=t2;
f_2264(t4,C_SCHEME_UNDEFINED);}}

/* k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2231 in k2228 in k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in ... */
static void C_fcall f_2264(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_2264,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2267,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[374],t3))){
t4=C_set_block_item(lf[356] /* ##compiler#local-definitions */,0,C_SCHEME_TRUE);
t5=t2;
f_2267(t5,t4);}
else{
t4=t2;
f_2267(t4,C_SCHEME_UNDEFINED);}}

/* k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2231 in k2228 in k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in ... */
static void C_fcall f_2267(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_2267,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2270,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[373],t3))){
t4=C_set_block_item(lf[183] /* ##compiler#enable-inline-files */,0,C_SCHEME_TRUE);
t5=C_set_block_item(lf[179] /* ##compiler#inline-locally */,0,C_SCHEME_TRUE);
t6=t2;
f_2270(t6,t5);}
else{
t4=t2;
f_2270(t4,C_SCHEME_UNDEFINED);}}

/* k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2231 in k2228 in k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in k1799 in k1773 in ... */
static void C_fcall f_2273(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_2273,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2276,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[370],t3))){
t4=C_set_block_item(lf[371] /* ##compiler#strict-variable-types */,0,C_SCHEME_TRUE);
t5=C_set_block_item(lf[54] /* ##compiler#enable-specialization */,0,C_SCHEME_TRUE);
t6=t2;
f_2276(t6,t5);}
else{
t4=t2;
f_2276(t4,C_SCHEME_UNDEFINED);}}

/* k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2231 in k2228 in k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in ... */
static void C_fcall f_2270(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_2270,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=C_set_block_item(lf[372] /* ##sys#notices-enabled */,0,C_SCHEME_TRUE);
t4=t2;
f_2273(t4,t3);}
else{
t3=t2;
f_2273(t3,C_SCHEME_UNDEFINED);}}

/* k2277 in k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2231 in k2228 in k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in ... */
static void C_fcall f_2279(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_2279,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2282,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[101],t3))){
t4=C_set_block_item(lf[101] /* optimize-leaf-routines */,0,C_SCHEME_TRUE);
t5=t2;
f_2282(t5,t4);}
else{
t4=t2;
f_2282(t4,C_SCHEME_UNDEFINED);}}

/* k2274 in k2271 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2231 in k2228 in k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in k1799 in ... */
static void C_fcall f_2276(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(43,0,4)))){
C_save_and_reclaim_args((void *)trf_2276,2,t0,t1);}
a=C_alloc(43);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2279,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[368],t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4664,a[2]=((C_word*)t0)[22],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5812,a[2]=t5,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[112]+1);
av2[3]=lf[369];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t4=t2;
f_2279(t4,C_SCHEME_UNDEFINED);}}

/* k2964 in k2961 in k2958 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in ... */
static void C_ccall f_2966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_2966,2,av);}
a=C_alloc(11);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2972,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=t2;
t4=C_a_i_list(&a,1,((C_word*)((C_word*)t0)[2])[1]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5664,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[112]+1);
av2[3]=lf[147];
av2[4]=t4;
C_apply(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_2694(2,av2);}}}

/* k3885 in doloop651 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in ... */
static void C_ccall f_3887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3887,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2238 in k2231 in k2228 in k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in ... */
static void C_fcall f_2240(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(37,0,2)))){
C_save_and_reclaim_args((void *)trf_2240,2,t0,t1);}
a=C_alloc(37);
t2=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2243,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
if(C_truep(C_i_memq(lf[115],*((C_word*)lf[30]+1)))){
/* batch-driver.scm:200: ##sys#start-timer */
t3=*((C_word*)lf[388]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2243(2,av2);}}}

/* k2241 in k2238 in k2231 in k2228 in k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in ... */
static void C_ccall f_2243(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,c,2)))){
C_save_and_reclaim((void *)f_2243,2,av);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2246,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_i_memq(lf[387],*((C_word*)lf[30]+1)))){
t3=C_set_block_item(((C_word*)t0)[36],0,C_SCHEME_TRUE);
t4=t2;
f_2246(t4,t3);}
else{
t3=t2;
f_2246(t3,C_SCHEME_UNDEFINED);}}

/* k2958 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_2960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2960,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2963,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_memq(lf[150],*((C_word*)lf[30]+1)))){
/* batch-driver.scm:603: dump-defined-globals */
t3=*((C_word*)lf[151]+1);{
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
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2963(2,av2);}}}

/* k2961 in k2958 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k3293 in k2624 in k2621 in ... */
static void C_ccall f_2963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2963,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2966,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_memq(lf[148],*((C_word*)lf[30]+1)))){
/* batch-driver.scm:605: dump-global-refs */
t3=*((C_word*)lf[149]+1);{
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
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2966(2,av2);}}}

/* k2104 in k2090 in k2087 in k2084 in end-time in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_2106(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2106,2,av);}
t2=C_i_inexact_to_exact(t1);
/* batch-driver.scm:157: ##sys#print */
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4849 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_4851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4851,2,av);}
/* batch-driver.scm:172: stringify */
t2=*((C_word*)lf[401]+1);{
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

/* k2247 in k2244 in k2241 in k2238 in k2231 in k2228 in k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in ... */
static void C_ccall f_2249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,c,2)))){
C_save_and_reclaim((void *)f_2249,2,av);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2252,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[383],t3))){
/* batch-driver.scm:205: warning */
t4=*((C_word*)lf[381]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[384];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2252(2,av2);}}}

/* k2244 in k2241 in k2238 in k2231 in k2228 in k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in ... */
static void C_fcall f_2246(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_2246,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2249,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[385],t3))){
/* batch-driver.scm:203: warning */
t4=*((C_word*)lf[381]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[386];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=t2;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2249(2,av2);}}}

/* k2934 in k2822 in k2819 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_2936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2936,2,av);}
/* batch-driver.scm:665: emit-global-inline-file */
t2=*((C_word*)lf[134]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* doloop651 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in ... */
static void C_fcall f_3876(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,0,3)))){
C_save_and_reclaim_args((void *)trf_3876,3,t0,t1,t2);}
a=C_alloc(22);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3887,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=*((C_word*)lf[252]+1);
t9=C_i_check_list_2(((C_word*)t0)[3],lf[57]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3897,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3947,a[2]=t6,a[3]=t12,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_3947(t14,t10,((C_word*)t0)[3]);}
else{
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3985,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:423: check-and-open-input-file */
t6=*((C_word*)lf[258]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k3869 in k3865 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in ... */
static void C_ccall f_3871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3871,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_2555(2,av2);}}

/* k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2231 in k2228 in k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in ... */
static void C_ccall f_2255(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(36,c,2)))){
C_save_and_reclaim((void *)f_2255,2,av);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2258,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[379],t3))){
t4=C_set_block_item(lf[9] /* ##compiler#explicit-use-flag */,0,C_SCHEME_TRUE);
t5=C_set_block_item(((C_word*)t0)[25],0,C_SCHEME_END_OF_LIST);
t6=C_set_block_item(((C_word*)t0)[6],0,C_SCHEME_END_OF_LIST);
t7=t2;
f_2258(t7,t6);}
else{
t4=t2;
f_2258(t4,C_SCHEME_UNDEFINED);}}

/* k2250 in k2247 in k2244 in k2241 in k2238 in k2231 in k2228 in k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in ... */
static void C_ccall f_2252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,c,2)))){
C_save_and_reclaim((void *)f_2252,2,av);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2255,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[380],t3))){
/* batch-driver.scm:207: warning */
t4=*((C_word*)lf[381]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[382];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2255(2,av2);}}}

/* k4827 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_4829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4829,2,av);}
/* batch-driver.scm:180: append-map */
t2=*((C_word*)lf[313]+1);{
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

/* k2928 in k2838 in k2835 in k2832 in k2828 in k2825 in k2822 in k2819 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in ... */
static void C_ccall f_2930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2930,2,av);}
a=C_alloc(4);
t2=C_a_i_minus(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_i_greaterp(t2,C_fix(60000)))){
/* batch-driver.scm:673: display */
t3=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[128];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2843(2,av2);}}}

/* k2256 in k2253 in k2250 in k2247 in k2244 in k2241 in k2238 in k2231 in k2228 in k2222 in k2196 in k2193 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in ... */
static void C_fcall f_2258(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_2258,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2261,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[377],t3))){
t4=C_set_block_item(lf[378] /* ##compiler#emit-closure-info */,0,C_SCHEME_FALSE);
t5=t2;
f_2261(t5,t4);}
else{
t4=t2;
f_2261(t4,C_SCHEME_UNDEFINED);}}

/* k3865 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in k2425 in ... */
static void C_ccall f_3867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3867,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3871,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:414: proc */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
av2[4]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4845 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_4847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4847,2,av);}
/* batch-driver.scm:172: string->c-identifier */
t2=*((C_word*)lf[400]+1);{
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

/* k4841 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_4843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4843,2,av);}
t2=C_mutate2((C_word*)lf[205]+1 /* (set! ##compiler#unit-name ...) */,t1);
t3=((C_word*)t0)[2];
f_2182(t3,t2);}

/* k3899 in k3895 in doloop651 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in ... */
static void C_ccall f_3901(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_3901,2,av);}
a=C_alloc(18);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=*((C_word*)lf[252]+1);
t8=C_i_check_list_2(((C_word*)t0)[2],lf[57]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3911,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3913,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3913(t13,t9,((C_word*)t0)[2]);}

/* k4816 in map-loop280 in k4786 in a4771 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in ... */
static void C_ccall f_4818(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4818,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4793(t6,((C_word*)t0)[5],t5);}

/* map-loop731 in k3818 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in ... */
static void C_fcall f_3832(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3832,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3857,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:437: g737 */
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

/* k3828 in k3818 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in ... */
static void C_ccall f_3830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3830,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_2561(t3,t2);}

/* k2193 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_2195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(41,c,2)))){
C_save_and_reclaim((void *)f_2195,2,av);}
a=C_alloc(41);
t2=C_mutate2((C_word*)lf[30]+1 /* (set! ##compiler#debugging-chicken ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_2198,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],tmp=(C_word)a,a+=38,tmp);
if(C_truep(C_i_memq(lf[275],*((C_word*)lf[30]+1)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4767,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:186: print-debug-options */
t5=*((C_word*)lf[394]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2198(2,av2);}}}

/* k2196 in k2193 in k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_2198(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(44,c,2)))){
C_save_and_reclaim((void *)f_2198,2,av);}
a=C_alloc(44);
t2=C_i_memq(lf[56],*((C_word*)lf[30]+1));
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|38,a[1]=(C_word)f_2224,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=t6,a[38]=t7,tmp=(C_word)a,a+=39,tmp);
/* batch-driver.scm:193: collect-options */
t9=((C_word*)((C_word*)t0)[24])[1];
f_2031(t9,t8,lf[393]);}

/* k2943 in k2940 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in ... */
static void C_ccall f_2945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2945,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2948,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:657: perform-secondary-flow-analysis */
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2946 in k2943 in k2940 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_2948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2948,2,av);}
/* batch-driver.scm:658: end-time */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2076(t2,((C_word*)t0)[3],lf[138]);}

/* k3818 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in ... */
static void C_ccall f_3820(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_3820,2,av);}
a=C_alloc(17);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=((C_word*)t0)[2];
t7=((C_word*)((C_word*)t0)[3])[1];
t8=C_i_check_list_2(t7,lf[57]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3830,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3832,a[2]=t4,a[3]=t11,a[4]=t6,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3832(t13,t9,t7);}

/* k2940 in k2702 in k2699 in k2696 in k2692 in k2689 in k2686 in loop in k2677 in k2674 in k2671 in k2668 in k2665 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in ... */
static void C_ccall f_2942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2942,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2945,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:656: debugging */
t3=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[36];
av2[3]=lf[140];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3895 in doloop651 in k2550 in k2547 in k2544 in k2541 in k2538 in k2534 in k2530 in k2527 in k2524 in k2521 in k2517 in k2478 in k2459 in k2456 in k2453 in k2450 in k2447 in k2444 in k2433 in k2429 in ... */
static void C_ccall f_3897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3897,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:420: reverse */
t4=*((C_word*)lf[253]+1);{
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

/* k2186 in k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_ccall f_2188(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(44,c,3)))){
C_save_and_reclaim((void *)f_2188,2,av);}
a=C_alloc(44);
t2=((C_word*)t0)[2];
t3=C_mutate2((C_word*)lf[54]+1 /* (set! ##compiler#enable-specialization ...) */,C_u_i_memq(lf[55],t2));
t4=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_2195,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],tmp=(C_word)a,a+=38,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4772,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4829,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:184: collect-options */
t7=((C_word*)((C_word*)t0)[24])[1];
f_2031(t7,t6,lf[396]);}

/* k2183 in k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_fcall f_2185(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(38,0,2)))){
C_save_and_reclaim_args((void *)trf_2185,2,t0,t1);}
a=C_alloc(38);
t2=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_2188,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],tmp=(C_word)a,a+=38,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[176],t3))){
t4=C_set_block_item(lf[397] /* ##sys#dload-disabled */,0,C_SCHEME_TRUE);
/* batch-driver.scm:177: repository-path */
t5=*((C_word*)lf[398]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t2;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t2;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2188(2,av2);}}}

/* k2180 in k1799 in k1773 in k1768 in k1765 in k1759 in k4942 in k1743 in compile-source-file in k1707 in k1703 in k1699 in k1695 in k1691 in k1687 in k1684 in k1681 */
static void C_fcall f_2182(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(38,0,2)))){
C_save_and_reclaim_args((void *)trf_2182,2,t0,t1);}
a=C_alloc(38);
t2=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_2185,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],tmp=(C_word)a,a+=38,tmp);
t3=*((C_word*)lf[205]+1);
if(C_truep(*((C_word*)lf[205]+1))){
t4=*((C_word*)lf[205]+1);
if(C_truep(*((C_word*)lf[205]+1))){
t5=C_set_block_item(lf[399] /* ##compiler#standalone-executable */,0,C_SCHEME_FALSE);
t6=t2;
f_2185(t6,t5);}
else{
t5=t2;
f_2185(t5,C_SCHEME_UNDEFINED);}}
else{
if(C_truep(((C_word*)t0)[17])){
t4=C_set_block_item(lf[399] /* ##compiler#standalone-executable */,0,C_SCHEME_FALSE);
t5=t2;
f_2185(t5,t4);}
else{
t4=t2;
f_2185(t4,C_SCHEME_UNDEFINED);}}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[424] = {
{"f5812:batch_2ddriver_2escm",(void*)f5812},
{"f_3857:batch_2ddriver_2escm",(void*)f_3857},
{"f_2801:batch_2ddriver_2escm",(void*)f_2801},
{"f5794:batch_2ddriver_2escm",(void*)f5794},
{"f_1835:batch_2ddriver_2escm",(void*)f_1835},
{"f_1838:batch_2ddriver_2escm",(void*)f_1838},
{"f_3985:batch_2ddriver_2escm",(void*)f_3985},
{"f_3988:batch_2ddriver_2escm",(void*)f_3988},
{"f_4890:batch_2ddriver_2escm",(void*)f_4890},
{"f_1868:batch_2ddriver_2escm",(void*)f_1868},
{"f_1866:batch_2ddriver_2escm",(void*)f_1866},
{"f_3972:batch_2ddriver_2escm",(void*)f_3972},
{"f_2972:batch_2ddriver_2escm",(void*)f_2972},
{"f_2834:batch_2ddriver_2escm",(void*)f_2834},
{"f_2830:batch_2ddriver_2escm",(void*)f_2830},
{"f_4865:batch_2ddriver_2escm",(void*)f_4865},
{"f_1853:batch_2ddriver_2escm",(void*)f_1853},
{"f_2837:batch_2ddriver_2escm",(void*)f_2837},
{"f_2843:batch_2ddriver_2escm",(void*)f_2843},
{"f_2840:batch_2ddriver_2escm",(void*)f_2840},
{"f_2849:batch_2ddriver_2escm",(void*)f_2849},
{"f_1884:batch_2ddriver_2escm",(void*)f_1884},
{"f_1887:batch_2ddriver_2escm",(void*)f_1887},
{"f_2846:batch_2ddriver_2escm",(void*)f_2846},
{"f_1881:batch_2ddriver_2escm",(void*)f_1881},
{"f_3911:batch_2ddriver_2escm",(void*)f_3911},
{"f_3913:batch_2ddriver_2escm",(void*)f_3913},
{"f_3947:batch_2ddriver_2escm",(void*)f_3947},
{"f_2824:batch_2ddriver_2escm",(void*)f_2824},
{"f_2821:batch_2ddriver_2escm",(void*)f_2821},
{"f_1823:batch_2ddriver_2escm",(void*)f_1823},
{"f_2827:batch_2ddriver_2escm",(void*)f_2827},
{"f_3938:batch_2ddriver_2escm",(void*)f_3938},
{"f_4211:batch_2ddriver_2escm",(void*)f_4211},
{"f_4302:batch_2ddriver_2escm",(void*)f_4302},
{"f_2870:batch_2ddriver_2escm",(void*)f_2870},
{"f_2873:batch_2ddriver_2escm",(void*)f_2873},
{"f_1819:batch_2ddriver_2escm",(void*)f_1819},
{"f_2876:batch_2ddriver_2escm",(void*)f_2876},
{"f_2879:batch_2ddriver_2escm",(void*)f_2879},
{"f_2701:batch_2ddriver_2escm",(void*)f_2701},
{"f_2882:batch_2ddriver_2escm",(void*)f_2882},
{"f_2885:batch_2ddriver_2escm",(void*)f_2885},
{"f_1846:batch_2ddriver_2escm",(void*)f_1846},
{"f_2888:batch_2ddriver_2escm",(void*)f_2888},
{"f_1841:batch_2ddriver_2escm",(void*)f_1841},
{"f_1844:batch_2ddriver_2escm",(void*)f_1844},
{"f_2852:batch_2ddriver_2escm",(void*)f_2852},
{"f_2704:batch_2ddriver_2escm",(void*)f_2704},
{"f_2857:batch_2ddriver_2escm",(void*)f_2857},
{"f_2863:batch_2ddriver_2escm",(void*)f_2863},
{"f_2867:batch_2ddriver_2escm",(void*)f_2867},
{"f_3995:batch_2ddriver_2escm",(void*)f_3995},
{"f_2891:batch_2ddriver_2escm",(void*)f_2891},
{"f_1875:batch_2ddriver_2escm",(void*)f_1875},
{"f_4505:batch_2ddriver_2escm",(void*)f_4505},
{"f_4503:batch_2ddriver_2escm",(void*)f_4503},
{"f5800:batch_2ddriver_2escm",(void*)f5800},
{"f_2772:batch_2ddriver_2escm",(void*)f_2772},
{"f5806:batch_2ddriver_2escm",(void*)f5806},
{"f_1895:batch_2ddriver_2escm",(void*)f_1895},
{"f_1941:batch_2ddriver_2escm",(void*)f_1941},
{"f_1890:batch_2ddriver_2escm",(void*)f_1890},
{"f_4221:batch_2ddriver_2escm",(void*)f_4221},
{"f_2713:batch_2ddriver_2escm",(void*)f_2713},
{"f_2710:batch_2ddriver_2escm",(void*)f_2710},
{"f_4234:batch_2ddriver_2escm",(void*)f_4234},
{"f_2789:batch_2ddriver_2escm",(void*)f_2789},
{"f_2786:batch_2ddriver_2escm",(void*)f_2786},
{"f_1928:batch_2ddriver_2escm",(void*)f_1928},
{"f_4242:batch_2ddriver_2escm",(void*)f_4242},
{"f_4244:batch_2ddriver_2escm",(void*)f_4244},
{"f_2718:batch_2ddriver_2escm",(void*)f_2718},
{"f_2045:batch_2ddriver_2escm",(void*)f_2045},
{"f5646:batch_2ddriver_2escm",(void*)f5646},
{"f_1918:batch_2ddriver_2escm",(void*)f_1918},
{"f_2734:batch_2ddriver_2escm",(void*)f_2734},
{"f_2730:batch_2ddriver_2escm",(void*)f_2730},
{"f5640:batch_2ddriver_2escm",(void*)f5640},
{"f_2057:batch_2ddriver_2escm",(void*)f_2057},
{"f_4344:batch_2ddriver_2escm",(void*)f_4344},
{"f5658:batch_2ddriver_2escm",(void*)f5658},
{"f_4267:batch_2ddriver_2escm",(void*)f_4267},
{"f_2053:batch_2ddriver_2escm",(void*)f_2053},
{"f5652:batch_2ddriver_2escm",(void*)f5652},
{"f_2737:batch_2ddriver_2escm",(void*)f_2737},
{"f_3315:batch_2ddriver_2escm",(void*)f_3315},
{"f_3215:batch_2ddriver_2escm",(void*)f_3215},
{"f_3210:batch_2ddriver_2escm",(void*)f_3210},
{"f_2066:batch_2ddriver_2escm",(void*)f_2066},
{"f_1801:batch_2ddriver_2escm",(void*)f_1801},
{"f_4275:batch_2ddriver_2escm",(void*)f_4275},
{"f5243:batch_2ddriver_2escm",(void*)f5243},
{"f_3206:batch_2ddriver_2escm",(void*)f_3206},
{"f_4325:batch_2ddriver_2escm",(void*)f_4325},
{"f_2606:batch_2ddriver_2escm",(void*)f_2606},
{"f_2609:batch_2ddriver_2escm",(void*)f_2609},
{"f_2603:batch_2ddriver_2escm",(void*)f_2603},
{"f_2600:batch_2ddriver_2escm",(void*)f_2600},
{"f_2010:batch_2ddriver_2escm",(void*)f_2010},
{"f_1990:batch_2ddriver_2escm",(void*)f_1990},
{"f_2795:batch_2ddriver_2escm",(void*)f_2795},
{"f_2792:batch_2ddriver_2escm",(void*)f_2792},
{"f_3305:batch_2ddriver_2escm",(void*)f_3305},
{"f_3302:batch_2ddriver_2escm",(void*)f_3302},
{"f_2037:batch_2ddriver_2escm",(void*)f_2037},
{"f_2031:batch_2ddriver_2escm",(void*)f_2031},
{"f_3414:batch_2ddriver_2escm",(void*)f_3414},
{"f_2798:batch_2ddriver_2escm",(void*)f_2798},
{"f_3417:batch_2ddriver_2escm",(void*)f_3417},
{"f_4379:batch_2ddriver_2escm",(void*)f_4379},
{"f_3320:batch_2ddriver_2escm",(void*)f_3320},
{"f_3406:batch_2ddriver_2escm",(void*)f_3406},
{"f_4254:batch_2ddriver_2escm",(void*)f_4254},
{"f_3402:batch_2ddriver_2escm",(void*)f_3402},
{"f_3391:batch_2ddriver_2escm",(void*)f_3391},
{"f_2623:batch_2ddriver_2escm",(void*)f_2623},
{"f_2620:batch_2ddriver_2escm",(void*)f_2620},
{"f_2507:batch_2ddriver_2escm",(void*)f_2507},
{"f_2626:batch_2ddriver_2escm",(void*)f_2626},
{"f_3345:batch_2ddriver_2escm",(void*)f_3345},
{"f_2670:batch_2ddriver_2escm",(void*)f_2670},
{"f_2673:batch_2ddriver_2escm",(void*)f_2673},
{"f_2519:batch_2ddriver_2escm",(void*)f_2519},
{"f_4530:batch_2ddriver_2escm",(void*)f_4530},
{"f_2513:batch_2ddriver_2escm",(void*)f_2513},
{"f_2679:batch_2ddriver_2escm",(void*)f_2679},
{"f_2676:batch_2ddriver_2escm",(void*)f_2676},
{"f_2510:batch_2ddriver_2escm",(void*)f_2510},
{"f_2684:batch_2ddriver_2escm",(void*)f_2684},
{"f_2756:batch_2ddriver_2escm",(void*)f_2756},
{"f_1683:batch_2ddriver_2escm",(void*)f_1683},
{"f_2688:batch_2ddriver_2escm",(void*)f_2688},
{"f_1689:batch_2ddriver_2escm",(void*)f_1689},
{"f_1686:batch_2ddriver_2escm",(void*)f_1686},
{"f_3367:batch_2ddriver_2escm",(void*)f_3367},
{"f_2089:batch_2ddriver_2escm",(void*)f_2089},
{"f_2086:batch_2ddriver_2escm",(void*)f_2086},
{"f_2652:batch_2ddriver_2escm",(void*)f_2652},
{"f_2655:batch_2ddriver_2escm",(void*)f_2655},
{"f_2658:batch_2ddriver_2escm",(void*)f_2658},
{"f_2095:batch_2ddriver_2escm",(void*)f_2095},
{"f_2092:batch_2ddriver_2escm",(void*)f_2092},
{"f_3251:batch_2ddriver_2escm",(void*)f_3251},
{"f_4392:batch_2ddriver_2escm",(void*)f_4392},
{"f_3385:batch_2ddriver_2escm",(void*)f_3385},
{"f_3382:batch_2ddriver_2escm",(void*)f_3382},
{"f_3249:batch_2ddriver_2escm",(void*)f_3249},
{"f_4369:batch_2ddriver_2escm",(void*)f_4369},
{"f_2637:batch_2ddriver_2escm",(void*)f_2637},
{"f_3376:batch_2ddriver_2escm",(void*)f_3376},
{"f_3373:batch_2ddriver_2escm",(void*)f_3373},
{"f_2643:batch_2ddriver_2escm",(void*)f_2643},
{"f_2640:batch_2ddriver_2escm",(void*)f_2640},
{"f_2649:batch_2ddriver_2escm",(void*)f_2649},
{"f_3379:batch_2ddriver_2escm",(void*)f_3379},
{"f_2646:batch_2ddriver_2escm",(void*)f_2646},
{"f_2614:batch_2ddriver_2escm",(void*)f_2614},
{"f_2617:batch_2ddriver_2escm",(void*)f_2617},
{"f_1697:batch_2ddriver_2escm",(void*)f_1697},
{"f_1693:batch_2ddriver_2escm",(void*)f_1693},
{"f_2076:batch_2ddriver_2escm",(void*)f_2076},
{"f_2074:batch_2ddriver_2escm",(void*)f_2074},
{"f5716:batch_2ddriver_2escm",(void*)f5716},
{"f_2546:batch_2ddriver_2escm",(void*)f_2546},
{"f_2661:batch_2ddriver_2escm",(void*)f_2661},
{"f_2549:batch_2ddriver_2escm",(void*)f_2549},
{"f_4567:batch_2ddriver_2escm",(void*)f_4567},
{"f5722:batch_2ddriver_2escm",(void*)f5722},
{"f_2667:batch_2ddriver_2escm",(void*)f_2667},
{"f_1775:batch_2ddriver_2escm",(void*)f_1775},
{"f_4402:batch_2ddriver_2escm",(void*)f_4402},
{"f_2540:batch_2ddriver_2escm",(void*)f_2540},
{"f_1770:batch_2ddriver_2escm",(void*)f_1770},
{"f_2543:batch_2ddriver_2escm",(void*)f_2543},
{"f_2558:batch_2ddriver_2escm",(void*)f_2558},
{"f_4573:batch_2ddriver_2escm",(void*)f_4573},
{"f_3423:batch_2ddriver_2escm",(void*)f_3423},
{"f_2552:batch_2ddriver_2escm",(void*)f_2552},
{"f_2555:batch_2ddriver_2escm",(void*)f_2555},
{"f_3420:batch_2ddriver_2escm",(void*)f_3420},
{"f_4548:batch_2ddriver_2escm",(void*)f_4548},
{"f_3239:batch_2ddriver_2escm",(void*)f_3239},
{"f_4545:batch_2ddriver_2escm",(void*)f_4545},
{"f_4542:batch_2ddriver_2escm",(void*)f_4542},
{"f_4559:batch_2ddriver_2escm",(void*)f_4559},
{"f_3225:batch_2ddriver_2escm",(void*)f_3225},
{"f_2694:batch_2ddriver_2escm",(void*)f_2694},
{"f_4551:batch_2ddriver_2escm",(void*)f_4551},
{"f_2691:batch_2ddriver_2escm",(void*)f_2691},
{"f_2698:batch_2ddriver_2escm",(void*)f_2698},
{"f_3299:batch_2ddriver_2escm",(void*)f_3299},
{"f_3295:batch_2ddriver_2escm",(void*)f_3295},
{"f_1902:batch_2ddriver_2escm",(void*)f_1902},
{"f_1907:batch_2ddriver_2escm",(void*)f_1907},
{"f_3287:batch_2ddriver_2escm",(void*)f_3287},
{"f_1711:batch_2ddriver_2escm",(void*)f_1711},
{"f_1714:batch_2ddriver_2escm",(void*)f_1714},
{"f_1745:batch_2ddriver_2escm",(void*)f_1745},
{"f_2416:batch_2ddriver_2escm",(void*)f_2416},
{"f_2308:batch_2ddriver_2escm",(void*)f_2308},
{"f_2303:batch_2ddriver_2escm",(void*)f_2303},
{"f_2567:batch_2ddriver_2escm",(void*)f_2567},
{"f_2564:batch_2ddriver_2escm",(void*)f_2564},
{"f_2561:batch_2ddriver_2escm",(void*)f_2561},
{"f_3492:batch_2ddriver_2escm",(void*)f_3492},
{"f_3490:batch_2ddriver_2escm",(void*)f_3490},
{"f_2408:batch_2ddriver_2escm",(void*)f_2408},
{"f_2404:batch_2ddriver_2escm",(void*)f_2404},
{"f_2318:batch_2ddriver_2escm",(void*)f_2318},
{"f_2313:batch_2ddriver_2escm",(void*)f_2313},
{"f_2579:batch_2ddriver_2escm",(void*)f_2579},
{"f_2576:batch_2ddriver_2escm",(void*)f_2576},
{"f_2570:batch_2ddriver_2escm",(void*)f_2570},
{"f_2585:batch_2ddriver_2escm",(void*)f_2585},
{"f_2588:batch_2ddriver_2escm",(void*)f_2588},
{"f_3161:batch_2ddriver_2escm",(void*)f_3161},
{"f_3471:batch_2ddriver_2escm",(void*)f_3471},
{"f_3517:batch_2ddriver_2escm",(void*)f_3517},
{"f_2597:batch_2ddriver_2escm",(void*)f_2597},
{"f_3138:batch_2ddriver_2escm",(void*)f_3138},
{"f_1767:batch_2ddriver_2escm",(void*)f_1767},
{"f_2594:batch_2ddriver_2escm",(void*)f_2594},
{"f_1761:batch_2ddriver_2escm",(void*)f_1761},
{"f_2431:batch_2ddriver_2escm",(void*)f_2431},
{"f_2435:batch_2ddriver_2escm",(void*)f_2435},
{"f_4754:batch_2ddriver_2escm",(void*)f_4754},
{"f_2529:batch_2ddriver_2escm",(void*)f_2529},
{"f_2526:batch_2ddriver_2escm",(void*)f_2526},
{"f_2523:batch_2ddriver_2escm",(void*)f_2523},
{"f_4767:batch_2ddriver_2escm",(void*)f_4767},
{"f_3450:batch_2ddriver_2escm",(void*)f_3450},
{"f_2536:batch_2ddriver_2escm",(void*)f_2536},
{"f_2446:batch_2ddriver_2escm",(void*)f_2446},
{"f_2449:batch_2ddriver_2escm",(void*)f_2449},
{"f_2532:batch_2ddriver_2escm",(void*)f_2532},
{"f_2491:batch_2ddriver_2escm",(void*)f_2491},
{"f_3440:batch_2ddriver_2escm",(void*)f_3440},
{"f_2498:batch_2ddriver_2escm",(void*)f_2498},
{"f_2300:batch_2ddriver_2escm",(void*)f_2300},
{"f5736:batch_2ddriver_2escm",(void*)f5736},
{"f_2420:batch_2ddriver_2escm",(void*)f_2420},
{"f_2424:batch_2ddriver_2escm",(void*)f_2424},
{"f_2427:batch_2ddriver_2escm",(void*)f_2427},
{"f5742:batch_2ddriver_2escm",(void*)f5742},
{"f_1701:batch_2ddriver_2escm",(void*)f_1701},
{"f5748:batch_2ddriver_2escm",(void*)f5748},
{"f_1705:batch_2ddriver_2escm",(void*)f_1705},
{"f_1709:batch_2ddriver_2escm",(void*)f_1709},
{"f5754:batch_2ddriver_2escm",(void*)f5754},
{"f_3109:batch_2ddriver_2escm",(void*)f_3109},
{"f_4729:batch_2ddriver_2escm",(void*)f_4729},
{"f_2480:batch_2ddriver_2escm",(void*)f_2480},
{"f_4043:batch_2ddriver_2escm",(void*)f_4043},
{"f5760:batch_2ddriver_2escm",(void*)f5760},
{"f_4437:batch_2ddriver_2escm",(void*)f_4437},
{"f_3150:batch_2ddriver_2escm",(void*)f_3150},
{"f_4430:batch_2ddriver_2escm",(void*)f_4430},
{"f_4035:batch_2ddriver_2escm",(void*)f_4035},
{"f5770:batch_2ddriver_2escm",(void*)f5770},
{"f_2461:batch_2ddriver_2escm",(void*)f_2461},
{"f_4061:batch_2ddriver_2escm",(void*)f_4061},
{"f_4067:batch_2ddriver_2escm",(void*)f_4067},
{"f_2469:batch_2ddriver_2escm",(void*)f_2469},
{"f5788:batch_2ddriver_2escm",(void*)f5788},
{"f_4000:batch_2ddriver_2escm",(void*)f_4000},
{"f_4006:batch_2ddriver_2escm",(void*)f_4006},
{"f_3119:batch_2ddriver_2escm",(void*)f_3119},
{"f_3035:batch_2ddriver_2escm",(void*)f_3035},
{"f_4028:batch_2ddriver_2escm",(void*)f_4028},
{"f_4497:batch_2ddriver_2escm",(void*)f_4497},
{"f_3171:batch_2ddriver_2escm",(void*)f_3171},
{"f_3044:batch_2ddriver_2escm",(void*)f_3044},
{"f_2219:batch_2ddriver_2escm",(void*)f_2219},
{"f_3048:batch_2ddriver_2escm",(void*)f_3048},
{"f_2215:batch_2ddriver_2escm",(void*)f_2215},
{"f_4010:batch_2ddriver_2escm",(void*)f_4010},
{"f_4793:batch_2ddriver_2escm",(void*)f_4793},
{"f_3187:batch_2ddriver_2escm",(void*)f_3187},
{"f_2321:batch_2ddriver_2escm",(void*)f_2321},
{"f_3051:batch_2ddriver_2escm",(void*)f_3051},
{"f_2324:batch_2ddriver_2escm",(void*)f_2324},
{"f_3054:batch_2ddriver_2escm",(void*)f_3054},
{"f_3059:batch_2ddriver_2escm",(void*)f_3059},
{"toplevel:batch_2ddriver_2escm",(void*)C_driver_toplevel},
{"f_2330:batch_2ddriver_2escm",(void*)f_2330},
{"f_3062:batch_2ddriver_2escm",(void*)f_3062},
{"f_2333:batch_2ddriver_2escm",(void*)f_2333},
{"f_3065:batch_2ddriver_2escm",(void*)f_3065},
{"f_3068:batch_2ddriver_2escm",(void*)f_3068},
{"f_2327:batch_2ddriver_2escm",(void*)f_2327},
{"f_2452:batch_2ddriver_2escm",(void*)f_2452},
{"f_4606:batch_2ddriver_2escm",(void*)f_4606},
{"f_2455:batch_2ddriver_2escm",(void*)f_2455},
{"f_4609:batch_2ddriver_2escm",(void*)f_4609},
{"f_4772:batch_2ddriver_2escm",(void*)f_4772},
{"f_2458:batch_2ddriver_2escm",(void*)f_2458},
{"f_2342:batch_2ddriver_2escm",(void*)f_2342},
{"f_4442:batch_2ddriver_2escm",(void*)f_4442},
{"f_4616:batch_2ddriver_2escm",(void*)f_4616},
{"f_2339:batch_2ddriver_2escm",(void*)f_2339},
{"f_4788:batch_2ddriver_2escm",(void*)f_4788},
{"f5684:batch_2ddriver_2escm",(void*)f5684},
{"f_4629:batch_2ddriver_2escm",(void*)f_4629},
{"f_3612:batch_2ddriver_2escm",(void*)f_3612},
{"f_4622:batch_2ddriver_2escm",(void*)f_4622},
{"f5696:batch_2ddriver_2escm",(void*)f5696},
{"f_4467:batch_2ddriver_2escm",(void*)f_4467},
{"f_4901:batch_2ddriver_2escm",(void*)f_4901},
{"f_3015:batch_2ddriver_2escm",(void*)f_3015},
{"f_4905:batch_2ddriver_2escm",(void*)f_4905},
{"f_4635:batch_2ddriver_2escm",(void*)f_4635},
{"f_4909:batch_2ddriver_2escm",(void*)f_4909},
{"f_3199:batch_2ddriver_2escm",(void*)f_3199},
{"f_3196:batch_2ddriver_2escm",(void*)f_3196},
{"f_4478:batch_2ddriver_2escm",(void*)f_4478},
{"f_3020:batch_2ddriver_2escm",(void*)f_3020},
{"f_3029:batch_2ddriver_2escm",(void*)f_3029},
{"f_4152:batch_2ddriver_2escm",(void*)f_4152},
{"f_4154:batch_2ddriver_2escm",(void*)f_4154},
{"f_4143:batch_2ddriver_2escm",(void*)f_4143},
{"f_4146:batch_2ddriver_2escm",(void*)f_4146},
{"f_4664:batch_2ddriver_2escm",(void*)f_4664},
{"f_2389:batch_2ddriver_2escm",(void*)f_2389},
{"f_2386:batch_2ddriver_2escm",(void*)f_2386},
{"f_2398:batch_2ddriver_2escm",(void*)f_2398},
{"f5664:batch_2ddriver_2escm",(void*)f5664},
{"f5676:batch_2ddriver_2escm",(void*)f5676},
{"f_3077:batch_2ddriver_2escm",(void*)f_3077},
{"f_3071:batch_2ddriver_2escm",(void*)f_3071},
{"f_3074:batch_2ddriver_2escm",(void*)f_3074},
{"f_4116:batch_2ddriver_2escm",(void*)f_4116},
{"f_2355:batch_2ddriver_2escm",(void*)f_2355},
{"f_3086:batch_2ddriver_2escm",(void*)f_3086},
{"f_2352:batch_2ddriver_2escm",(void*)f_2352},
{"f_3080:batch_2ddriver_2escm",(void*)f_3080},
{"f_2349:batch_2ddriver_2escm",(void*)f_2349},
{"f_2346:batch_2ddriver_2escm",(void*)f_2346},
{"f_3709:batch_2ddriver_2escm",(void*)f_3709},
{"f_2361:batch_2ddriver_2escm",(void*)f_2361},
{"f_2364:batch_2ddriver_2escm",(void*)f_2364},
{"f_3096:batch_2ddriver_2escm",(void*)f_3096},
{"f_2224:batch_2ddriver_2escm",(void*)f_2224},
{"f_2358:batch_2ddriver_2escm",(void*)f_2358},
{"f_2373:batch_2ddriver_2escm",(void*)f_2373},
{"f_3675:batch_2ddriver_2escm",(void*)f_3675},
{"f_2370:batch_2ddriver_2escm",(void*)f_2370},
{"f_2230:batch_2ddriver_2escm",(void*)f_2230},
{"f_2233:batch_2ddriver_2escm",(void*)f_2233},
{"f_2367:batch_2ddriver_2escm",(void*)f_2367},
{"f_2379:batch_2ddriver_2escm",(void*)f_2379},
{"f_2376:batch_2ddriver_2escm",(void*)f_2376},
{"f_3549:batch_2ddriver_2escm",(void*)f_3549},
{"f_3743:batch_2ddriver_2escm",(void*)f_3743},
{"f_4944:batch_2ddriver_2escm",(void*)f_4944},
{"f_3568:batch_2ddriver_2escm",(void*)f_3568},
{"f_3564:batch_2ddriver_2escm",(void*)f_3564},
{"f_4123:batch_2ddriver_2escm",(void*)f_4123},
{"f_3805:batch_2ddriver_2escm",(void*)f_3805},
{"f_2136:batch_2ddriver_2escm",(void*)f_2136},
{"f_3597:batch_2ddriver_2escm",(void*)f_3597},
{"f_3768:batch_2ddriver_2escm",(void*)f_3768},
{"f_2130:batch_2ddriver_2escm",(void*)f_2130},
{"f_4198:batch_2ddriver_2escm",(void*)f_4198},
{"f_4188:batch_2ddriver_2escm",(void*)f_4188},
{"f_4933:batch_2ddriver_2escm",(void*)f_4933},
{"f_2904:batch_2ddriver_2escm",(void*)f_2904},
{"f_4179:batch_2ddriver_2escm",(void*)f_4179},
{"f_2125:batch_2ddriver_2escm",(void*)f_2125},
{"f_2122:batch_2ddriver_2escm",(void*)f_2122},
{"f_2282:batch_2ddriver_2escm",(void*)f_2282},
{"f_2146:batch_2ddriver_2escm",(void*)f_2146},
{"f_2288:batch_2ddriver_2escm",(void*)f_2288},
{"f_2285:batch_2ddriver_2escm",(void*)f_2285},
{"f_2141:batch_2ddriver_2escm",(void*)f_2141},
{"f_2294:batch_2ddriver_2escm",(void*)f_2294},
{"f_2291:batch_2ddriver_2escm",(void*)f_2291},
{"f_2118:batch_2ddriver_2escm",(void*)f_2118},
{"f_2114:batch_2ddriver_2escm",(void*)f_2114},
{"f_2116:batch_2ddriver_2escm",(void*)f_2116},
{"f_2297:batch_2ddriver_2escm",(void*)f_2297},
{"f_2261:batch_2ddriver_2escm",(void*)f_2261},
{"f_2264:batch_2ddriver_2escm",(void*)f_2264},
{"f_2267:batch_2ddriver_2escm",(void*)f_2267},
{"f_2273:batch_2ddriver_2escm",(void*)f_2273},
{"f_2270:batch_2ddriver_2escm",(void*)f_2270},
{"f_2279:batch_2ddriver_2escm",(void*)f_2279},
{"f_2276:batch_2ddriver_2escm",(void*)f_2276},
{"f_2966:batch_2ddriver_2escm",(void*)f_2966},
{"f_3887:batch_2ddriver_2escm",(void*)f_3887},
{"f_2240:batch_2ddriver_2escm",(void*)f_2240},
{"f_2243:batch_2ddriver_2escm",(void*)f_2243},
{"f_2960:batch_2ddriver_2escm",(void*)f_2960},
{"f_2963:batch_2ddriver_2escm",(void*)f_2963},
{"f_2106:batch_2ddriver_2escm",(void*)f_2106},
{"f_4851:batch_2ddriver_2escm",(void*)f_4851},
{"f_2249:batch_2ddriver_2escm",(void*)f_2249},
{"f_2246:batch_2ddriver_2escm",(void*)f_2246},
{"f_2936:batch_2ddriver_2escm",(void*)f_2936},
{"f_3876:batch_2ddriver_2escm",(void*)f_3876},
{"f_3871:batch_2ddriver_2escm",(void*)f_3871},
{"f_2255:batch_2ddriver_2escm",(void*)f_2255},
{"f_2252:batch_2ddriver_2escm",(void*)f_2252},
{"f_4829:batch_2ddriver_2escm",(void*)f_4829},
{"f_2930:batch_2ddriver_2escm",(void*)f_2930},
{"f_2258:batch_2ddriver_2escm",(void*)f_2258},
{"f_3867:batch_2ddriver_2escm",(void*)f_3867},
{"f_4847:batch_2ddriver_2escm",(void*)f_4847},
{"f_4843:batch_2ddriver_2escm",(void*)f_4843},
{"f_3901:batch_2ddriver_2escm",(void*)f_3901},
{"f_4818:batch_2ddriver_2escm",(void*)f_4818},
{"f_3832:batch_2ddriver_2escm",(void*)f_3832},
{"f_3830:batch_2ddriver_2escm",(void*)f_3830},
{"f_2195:batch_2ddriver_2escm",(void*)f_2195},
{"f_2198:batch_2ddriver_2escm",(void*)f_2198},
{"f_2945:batch_2ddriver_2escm",(void*)f_2945},
{"f_2948:batch_2ddriver_2escm",(void*)f_2948},
{"f_3820:batch_2ddriver_2escm",(void*)f_3820},
{"f_2942:batch_2ddriver_2escm",(void*)f_2942},
{"f_3897:batch_2ddriver_2escm",(void*)f_3897},
{"f_2188:batch_2ddriver_2escm",(void*)f_2188},
{"f_2185:batch_2ddriver_2escm",(void*)f_2185},
{"f_2182:batch_2ddriver_2escm",(void*)f_2182},
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
S|  for-each		11
S|  printf		4
S|  map		16
o|eliminated procedure checks: 131 
o|specializations:
o|  1 (current-output-port)
o|  2 (string=? string string)
o|  1 (string-append string string)
o|  5 (cdr pair)
o|  4 (eqv? (not float) *)
o|  1 (< fixnum fixnum)
o|  5 (##sys#check-output-port * * *)
o|  8 (##sys#check-list (or pair list) *)
o|  66 (memq * list)
o|  2 (car pair)
(o e)|safe calls: 353 
(o e)|assignments to immediate values: 5 
o|Removed `not' forms: 5 
o|inlining procedure: k1716 
o|inlining procedure: k1716 
o|substituted constant variable: a1747 
o|substituted constant variable: a1750 
o|substituted constant variable: a1755 
o|substituted constant variable: a1757 
o|substituted constant variable: a1771 
o|substituted constant variable: a1776 
o|substituted constant variable: a1781 
o|substituted constant variable: a1783 
o|substituted constant variable: a1785 
o|substituted constant variable: a1787 
o|substituted constant variable: a1789 
o|substituted constant variable: a1791 
o|substituted constant variable: a1793 
o|substituted constant variable: a1795 
o|substituted constant variable: a1797 
o|merged explicitly consed rest parameter: args127 
o|propagated global variable: out131135 ##sys#standard-output 
o|substituted constant variable: a1831 
o|substituted constant variable: a1832 
o|inlining procedure: k1824 
o|propagated global variable: out131135 ##sys#standard-output 
o|inlining procedure: k1824 
o|inlining procedure: k1848 
o|inlining procedure: k1848 
o|propagated global variable: out149153 ##sys#standard-output 
o|substituted constant variable: a1877 
o|substituted constant variable: a1878 
o|inlining procedure: k1870 
o|propagated global variable: out149153 ##sys#standard-output 
o|inlining procedure: k1870 
o|inlining procedure: k1897 
o|inlining procedure: k1920 
o|contracted procedure: "(batch-driver.scm:130) g165172" 
o|inlining procedure: k1920 
o|inlining procedure: k1897 
o|inlining procedure: k1952 
o|inlining procedure: k1952 
o|inlining procedure: k1967 
o|folded constant expression: (* (quote 1024) (quote 1024)) 
o|inlining procedure: k1967 
o|substituted constant variable: a2018 
o|substituted constant variable: a2020 
o|substituted constant variable: a2025 
o|substituted constant variable: a2027 
o|substituted constant variable: a2029 
o|inlining procedure: k2042 
o|inlining procedure: k2042 
o|inlining procedure: k2068 
o|inlining procedure: "(batch-driver.scm:153) cputime115" 
o|inlining procedure: k2068 
o|propagated global variable: out213217 ##sys#standard-output 
o|substituted constant variable: a2082 
o|substituted constant variable: a2083 
o|inlining procedure: k2078 
o|inlining procedure: "(batch-driver.scm:159) cputime115" 
o|propagated global variable: out213217 ##sys#standard-output 
o|inlining procedure: k2078 
o|merged explicitly consed rest parameter: args225 
o|inlining procedure: k2123 
o|propagated global variable: g249250 ##compiler#get 
o|propagated global variable: g263264 ##compiler#put! 
o|inlining procedure: k2123 
o|inlining procedure: k2151 
o|inlining procedure: k2151 
o|substituted constant variable: a2190 
o|substituted constant variable: a2304 
o|substituted constant variable: a2309 
o|substituted constant variable: a2314 
o|substituted constant variable: a2441 
o|substituted constant variable: a2465 
o|inlining procedure: k2462 
o|inlining procedure: k2462 
o|substituted constant variable: a2476 
o|substituted constant variable: a2487 
o|inlining procedure: k2484 
o|inlining procedure: k2484 
o|contracted procedure: k2502 
o|inlining procedure: k2705 
o|inlining procedure: k2720 
o|inlining procedure: k2720 
o|inlining procedure: k2738 
o|inlining procedure: k2738 
o|contracted procedure: k2767 
o|propagated global variable: r2768 ##compiler#inline-substitutions-enabled 
o|inlining procedure: k2764 
o|consed rest parameter at call site: "(batch-driver.scm:638) analyze125" 3 
o|inlining procedure: k2764 
o|contracted procedure: k2816 
o|inlining procedure: k2705 
o|consed rest parameter at call site: "(batch-driver.scm:693) dribble116" 2 
o|consed rest parameter at call site: "(batch-driver.scm:684) dribble116" 2 
o|inlining procedure: "(batch-driver.scm:672) cputime115" 
o|consed rest parameter at call site: "(batch-driver.scm:664) dribble116" 2 
o|inlining procedure: k2967 
o|consed rest parameter at call site: "(batch-driver.scm:608) dribble116" 2 
o|inlining procedure: k2967 
o|consed rest parameter at call site: "(batch-driver.scm:598) analyze125" 3 
o|contracted procedure: "(batch-driver.scm:582) g11261127" 
o|inlining procedure: k3078 
o|inlining procedure: k3078 
o|consed rest parameter at call site: "(batch-driver.scm:566) analyze125" 3 
o|inlining procedure: k3088 
o|contracted procedure: "(batch-driver.scm:560) g10951102" 
o|inlining procedure: k3088 
o|inlining procedure: k3111 
o|contracted procedure: "(batch-driver.scm:555) g10741081" 
o|inlining procedure: k3021 
o|inlining procedure: k3021 
o|inlining procedure: k3111 
o|substituted constant variable: a3131 
o|inlining procedure: k3133 
o|inlining procedure: k3133 
o|consed rest parameter at call site: "(batch-driver.scm:546) dribble116" 2 
o|inlining procedure: k3163 
o|inlining procedure: k3163 
o|inlining procedure: k3188 
o|consed rest parameter at call site: "(batch-driver.scm:538) dribble116" 2 
o|inlining procedure: k3188 
o|inlining procedure: k3217 
o|inlining procedure: k3217 
o|inlining procedure: k3253 
o|inlining procedure: k3253 
o|contracted procedure: "(batch-driver.scm:518) g994995" 
o|inlining procedure: k3322 
o|inlining procedure: k3322 
o|consed rest parameter at call site: "(batch-driver.scm:512) dribble116" 2 
o|substituted constant variable: a3353 
o|substituted constant variable: a3369 
o|substituted constant variable: a3370 
o|inlining procedure: k3442 
o|contracted procedure: "(batch-driver.scm:489) g922929" 
o|propagated global variable: out932936 ##sys#standard-output 
o|substituted constant variable: a3410 
o|substituted constant variable: a3411 
o|propagated global variable: out932936 ##sys#standard-output 
o|inlining procedure: k3442 
o|propagated global variable: g928930 ##compiler#compiler-syntax-statistics 
o|inlining procedure: k3494 
o|contracted procedure: "(batch-driver.scm:481) g900909" 
o|inlining procedure: k3494 
o|propagated global variable: g906910 ##compiler#import-libraries 
o|contracted procedure: k3605 
o|propagated global variable: r3606 ##compiler#unit-name 
o|inlining procedure: k3602 
o|inlining procedure: k3602 
o|inlining procedure: k3614 
o|contracted procedure: "(batch-driver.scm:465) g869878" 
o|inlining procedure: k3614 
o|propagated global variable: g875879 ##compiler#profile-lambda-list 
o|contracted procedure: k3668 
o|propagated global variable: r3669 ##compiler#unit-name 
o|inlining procedure: k3665 
o|inlining procedure: k3665 
o|inlining procedure: k3677 
o|contracted procedure: "(batch-driver.scm:457) g832841" 
o|inlining procedure: k3677 
o|propagated global variable: g838842 ##compiler#used-units 
o|inlining procedure: k3711 
o|contracted procedure: "(batch-driver.scm:456) g802811" 
o|inlining procedure: k3711 
o|propagated global variable: g808812 ##compiler#immutable-constants 
o|inlining procedure: k3745 
o|inlining procedure: k3745 
o|inlining procedure: k3834 
o|inlining procedure: k3834 
o|consed rest parameter at call site: "(batch-driver.scm:436) dribble116" 2 
o|consed rest parameter at call site: "(batch-driver.scm:413) dribble116" 2 
o|inlining procedure: k3878 
o|inlining procedure: k3915 
o|inlining procedure: k3915 
o|inlining procedure: k3949 
o|inlining procedure: k3949 
o|inlining procedure: k3878 
o|inlining procedure: k4011 
o|inlining procedure: k4011 
o|inlining procedure: "(batch-driver.scm:400) cputime115" 
o|consed rest parameter at call site: "(batch-driver.scm:394) dribble116" 2 
o|substituted constant variable: a4044 
o|inlining procedure: k4046 
o|substituted constant variable: a4049 
o|inlining procedure: k4046 
o|substituted constant variable: a4054 
o|consed rest parameter at call site: "(batch-driver.scm:373) dribble116" 2 
o|inlining procedure: k4072 
o|consed rest parameter at call site: "(batch-driver.scm:373) dribble116" 2 
o|inlining procedure: k4072 
o|consed rest parameter at call site: "(batch-driver.scm:373) dribble116" 2 
o|inlining procedure: k4076 
o|inlining procedure: k4076 
o|consed rest parameter at call site: "(batch-driver.scm:355) dribble116" 2 
o|inlining procedure: k4093 
o|consed rest parameter at call site: "(batch-driver.scm:355) dribble116" 2 
o|inlining procedure: k4093 
o|consed rest parameter at call site: "(batch-driver.scm:355) dribble116" 2 
o|substituted constant variable: a4096 
o|substituted constant variable: a4108 
o|substituted constant variable: a4124 
o|inlining procedure: k4156 
o|contracted procedure: "(batch-driver.scm:335) g590599" 
o|inlining procedure: k4156 
o|inlining procedure: k4190 
o|contracted procedure: "(batch-driver.scm:321) g566573" 
o|inlining procedure: k4190 
o|consed rest parameter at call site: "(batch-driver.scm:320) dribble116" 2 
o|inlining procedure: k4213 
o|inlining procedure: k4213 
o|propagated global variable: g555556 string-split 
o|inlining procedure: k4246 
o|inlining procedure: k4246 
o|propagated global variable: g530531 string-split 
o|substituted constant variable: a4282 
o|inlining procedure: k4371 
o|contracted procedure: "(batch-driver.scm:302) g467474" 
o|contracted procedure: "(batch-driver.scm:305) g491492" 
o|contracted procedure: "(batch-driver.scm:304) g477478" 
o|inlining procedure: k4371 
o|propagated global variable: g473475 ##compiler#default-extended-bindings 
o|inlining procedure: k4394 
o|contracted procedure: "(batch-driver.scm:297) g420427" 
o|contracted procedure: "(batch-driver.scm:300) g444445" 
o|contracted procedure: "(batch-driver.scm:299) g430431" 
o|inlining procedure: k4394 
o|propagated global variable: g426428 ##compiler#default-standard-bindings 
o|substituted constant variable: a4414 
o|substituted constant variable: a4417 
o|substituted constant variable: a4420 
o|substituted constant variable: a4423 
o|substituted constant variable: a4426 
o|inlining procedure: k4444 
o|inlining procedure: k4444 
o|inlining procedure: k4485 
o|inlining procedure: k4485 
o|inlining procedure: k4507 
o|inlining procedure: k4507 
o|substituted constant variable: a4538 
o|consed rest parameter at call site: "(batch-driver.scm:269) dribble116" 2 
o|substituted constant variable: a4555 
o|consed rest parameter at call site: "(batch-driver.scm:266) dribble116" 2 
o|substituted constant variable: a4563 
o|consed rest parameter at call site: "(batch-driver.scm:263) dribble116" 2 
o|inlining procedure: k4574 
o|inlining procedure: k4574 
o|substituted constant variable: a4586 
o|substituted constant variable: a4594 
o|inlining procedure: k4591 
o|inlining procedure: k4591 
o|substituted constant variable: a4602 
o|consed rest parameter at call site: "(batch-driver.scm:253) dribble116" 2 
o|inlining procedure: k4620 
o|inlining procedure: k4620 
o|substituted constant variable: a4636 
o|substituted constant variable: a4639 
o|substituted constant variable: a4642 
o|substituted constant variable: a4645 
o|substituted constant variable: a4648 
o|substituted constant variable: a4651 
o|substituted constant variable: a4654 
o|substituted constant variable: a4657 
o|substituted constant variable: a4660 
o|consed rest parameter at call site: "(batch-driver.scm:227) dribble116" 2 
o|substituted constant variable: a4667 
o|substituted constant variable: a4672 
o|substituted constant variable: a4676 
o|substituted constant variable: a4679 
o|substituted constant variable: a4682 
o|substituted constant variable: a4685 
o|substituted constant variable: a4690 
o|substituted constant variable: a4695 
o|substituted constant variable: a4700 
o|substituted constant variable: a4717 
o|substituted constant variable: a4723 
o|inlining procedure: k4719 
o|inlining procedure: k4719 
o|inlining procedure: k4731 
o|contracted procedure: "(batch-driver.scm:190) g314323" 
o|substituted constant variable: a2221 
o|inlining procedure: k4731 
o|inlining procedure: k4795 
o|contracted procedure: "(batch-driver.scm:181) g286295" 
o|inlining procedure: k4795 
o|substituted constant variable: a4830 
o|propagated global variable: tmp273275 ##compiler#unit-name 
o|inlining procedure: k4836 
o|propagated global variable: tmp273275 ##compiler#unit-name 
o|inlining procedure: k4836 
o|substituted constant variable: a4852 
o|substituted constant variable: a4857 
o|inlining procedure: k4859 
o|inlining procedure: k4859 
o|substituted constant variable: a4862 
o|inlining procedure: k4867 
o|inlining procedure: k4867 
o|inlining procedure: k4902 
o|inlining procedure: k4902 
o|inlining procedure: k4910 
o|inlining procedure: k4910 
o|substituted constant variable: a4925 
o|inlining procedure: k4922 
o|inlining procedure: k4922 
o|inlining procedure: k4931 
o|inlining procedure: k4931 
o|inlining procedure: k4950 
o|inlining procedure: k4950 
o|replaced variables: 410 
o|removed binding forms: 395 
o|Removed `not' forms: 2 
o|removed side-effect free assignment to unused variable: cputime115 
o|propagated global variable: out131135 ##sys#standard-output 
o|substituted constant variable: r18254962 
o|substituted constant variable: r18254963 
o|propagated global variable: out149153 ##sys#standard-output 
o|contracted procedure: k1984 
o|substituted constant variable: r20434977 
o|propagated global variable: out213217 ##sys#standard-output 
o|substituted constant variable: r31895031 
o|substituted constant variable: c996 
o|substituted constant variable: p997 
o|propagated global variable: out932936 ##sys#standard-output 
o|substituted constant variable: r36035042 
o|contracted procedure: k3602 
o|substituted constant variable: r36665046 
o|substituted constant variable: r36665046 
o|inlining procedure: k3665 
o|inlining procedure: k3665 
o|substituted constant variable: r40735072 
o|substituted constant variable: r40735072 
o|substituted constant variable: r40735074 
o|substituted constant variable: r40735074 
o|substituted constant variable: r40775076 
o|substituted constant variable: r40775076 
o|substituted constant variable: r40775078 
o|substituted constant variable: r40775078 
o|substituted constant variable: r40945080 
o|substituted constant variable: r40945080 
o|substituted constant variable: r40945082 
o|substituted constant variable: r40945082 
o|substituted constant variable: tmp496499 
o|substituted constant variable: mark498 
o|substituted constant variable: tmp482485 
o|substituted constant variable: mark484 
o|substituted constant variable: tmp449452 
o|substituted constant variable: mark451 
o|substituted constant variable: tmp435438 
o|substituted constant variable: mark437 
o|substituted constant variable: r44865099 
o|contracted procedure: k4719 
o|substituted constant variable: r47205112 
o|propagated global variable: r48375118 ##compiler#unit-name 
o|substituted constant variable: r49035128 
o|substituted constant variable: r49035128 
o|substituted constant variable: r49235132 
o|substituted constant variable: r49325136 
o|substituted constant variable: r49325136 
o|substituted constant variable: r49515138 
o|substituted constant variable: r49515138 
o|converted assignments to bindings: (option-arg30) 
o|simplifications: ((let . 1)) 
o|replaced variables: 16 
o|removed binding forms: 524 
o|removed conditional forms: 2 
o|substituted constant variable: r1985 
o|inlining procedure: k2886 
o|inlining procedure: k2914 
o|inlining procedure: k3599 
o|inlining procedure: k3599 
o|inlining procedure: k3599 
o|substituted constant variable: r36665182 
o|inlining procedure: k4079 
o|inlining procedure: k4347 
o|inlining procedure: k4330 
o|inlining procedure: k4305 
o|inlining procedure: k4288 
o|inlining procedure: k4479 
o|inlining procedure: k4479 
o|replaced variables: 15 
o|removed binding forms: 61 
o|Removed `not' forms: 1 
o|substituted constant variable: r29155245 
o|substituted constant variable: r36005264 
o|substituted constant variable: r36005265 
o|contracted procedure: k4079 
o|substituted constant variable: r40805285 
o|substituted constant variable: r43485294 
o|substituted constant variable: r43315295 
o|substituted constant variable: r43065298 
o|substituted constant variable: r42895299 
o|substituted constant variable: r44805304 
o|substituted constant variable: r44805305 
o|replaced variables: 4 
o|removed binding forms: 20 
o|removed conditional forms: 4 
o|replaced variables: 4 
o|removed binding forms: 14 
o|removed binding forms: 2 
o|simplifications: ((if . 10) (##core#call . 282)) 
o|  call simplifications:
o|    string->list
o|    string
o|    string=?	2
o|    not	2
o|    eof-object?
o|    ##sys#cons	7
o|    length
o|    ##sys#list	20
o|    list	2
o|    ##sys#make-structure
o|    ##sys#setslot	16
o|    first
o|    >
o|    ##sys#call-with-values	2
o|    add1	5
o|    car	11
o|    inexact->exact
o|    cddr
o|    cons	38
o|    string-length
o|    -	3
o|    fx<
o|    string-ref
o|    eq?	5
o|    *	2
o|    string->number	5
o|    ##sys#check-list	19
o|    pair?	28
o|    ##sys#slot	71
o|    memq	13
o|    apply
o|    cdr	3
o|    null?	11
o|    cadr	2
o|    symbol?	2
o|contracted procedure: k1740 
o|contracted procedure: k1719 
o|contracted procedure: k1727 
o|contracted procedure: k1733 
o|contracted procedure: k4938 
o|contracted procedure: k1752 
o|contracted procedure: k1762 
o|contracted procedure: k1778 
o|contracted procedure: k1827 
o|contracted procedure: k1911 
o|contracted procedure: k1923 
o|contracted procedure: k1933 
o|contracted procedure: k1937 
o|contracted procedure: k1943 
o|contracted procedure: k1946 
o|contracted procedure: k1958 
o|inlining procedure: k1949 
o|contracted procedure: k1964 
o|contracted procedure: k1970 
o|contracted procedure: k1973 
o|contracted procedure: k1980 
o|inlining procedure: k1949 
o|contracted procedure: k1994 
o|contracted procedure: k1997 
o|contracted procedure: k2004 
o|inlining procedure: k1949 
o|inlining procedure: k1949 
o|contracted procedure: k2039 
o|contracted procedure: k2059 
o|contracted procedure: k2100 
o|contracted procedure: k2108 
o|contracted procedure: k2154 
o|contracted procedure: k2160 
o|contracted procedure: k2167 
o|contracted procedure: k2173 
o|contracted procedure: k2200 
o|contracted procedure: k2204 
o|contracted procedure: k2225 
o|contracted procedure: k2235 
o|contracted procedure: k2381 
o|contracted procedure: k2399 
o|contracted procedure: k2410 
o|contracted procedure: k2437 
o|contracted procedure: k2571 
o|contracted procedure: k2580 
o|contracted procedure: k2589 
o|contracted procedure: k3289 
o|contracted procedure: k2632 
o|contracted procedure: k2745 
o|contracted procedure: k2751 
o|contracted procedure: k2761 
o|contracted procedure: k2806 
o|contracted procedure: k2813 
o|contracted procedure: k2778 
o|inlining procedure: "(batch-driver.scm:693) dribble116" 
o|contracted procedure: k2895 
o|inlining procedure: "(batch-driver.scm:693) dribble116" 
o|inlining procedure: "(batch-driver.scm:684) dribble116" 
o|contracted procedure: k2924 
o|contracted procedure: k2914 
o|contracted procedure: k2931 
o|inlining procedure: "(batch-driver.scm:664) dribble116" 
o|contracted procedure: k2952 
o|inlining procedure: "(batch-driver.scm:608) dribble116" 
o|contracted procedure: k2976 
o|contracted procedure: k2982 
o|contracted procedure: k2988 
o|contracted procedure: k3007 
o|contracted procedure: k2998 
o|contracted procedure: k3010 
o|contracted procedure: k3030 
o|contracted procedure: k3091 
o|contracted procedure: k3101 
o|contracted procedure: k3105 
o|contracted procedure: k3114 
o|contracted procedure: k3124 
o|contracted procedure: k3128 
o|contracted procedure: k3142 
o|inlining procedure: "(batch-driver.scm:546) dribble116" 
o|contracted procedure: k3154 
o|contracted procedure: k3166 
o|contracted procedure: k3176 
o|contracted procedure: k3180 
o|inlining procedure: "(batch-driver.scm:538) dribble116" 
o|contracted procedure: k3220 
o|contracted procedure: k3230 
o|contracted procedure: k3234 
o|contracted procedure: k3244 
o|contracted procedure: k3256 
o|contracted procedure: k3278 
o|contracted procedure: k3274 
o|contracted procedure: k3259 
o|contracted procedure: k3262 
o|contracted procedure: k3270 
o|contracted procedure: k3307 
o|contracted procedure: k3310 
o|contracted procedure: k3325 
o|contracted procedure: k3328 
o|contracted procedure: k3331 
o|contracted procedure: k3339 
o|contracted procedure: k3347 
o|inlining procedure: "(batch-driver.scm:512) dribble116" 
o|contracted procedure: k3358 
o|contracted procedure: k3395 
o|contracted procedure: k3433 
o|contracted procedure: k3445 
o|contracted procedure: k3455 
o|contracted procedure: k3459 
o|contracted procedure: k3430 
o|propagated global variable: g928930 ##compiler#compiler-syntax-statistics 
o|contracted procedure: k3462 
o|contracted procedure: k3473 
o|contracted procedure: k3485 
o|contracted procedure: k3497 
o|contracted procedure: k3500 
o|contracted procedure: k3503 
o|contracted procedure: k3511 
o|contracted procedure: k3519 
o|contracted procedure: k3482 
o|propagated global variable: g906910 ##compiler#import-libraries 
o|contracted procedure: k3526 
o|contracted procedure: k3544 
o|contracted procedure: k3551 
o|contracted procedure: k3559 
o|contracted procedure: k3570 
o|contracted procedure: k3592 
o|contracted procedure: k3617 
o|contracted procedure: k3620 
o|contracted procedure: k3623 
o|contracted procedure: k3631 
o|contracted procedure: k3639 
o|contracted procedure: k3589 
o|contracted procedure: k3579 
o|contracted procedure: k3583 
o|propagated global variable: g875879 ##compiler#profile-lambda-list 
o|contracted procedure: k3657 
o|contracted procedure: k3661 
o|contracted procedure: k3653 
o|contracted procedure: k3649 
o|contracted procedure: k3680 
o|contracted procedure: k3702 
o|contracted procedure: k3698 
o|contracted procedure: k3683 
o|contracted procedure: k3686 
o|contracted procedure: k3694 
o|propagated global variable: g838842 ##compiler#used-units 
o|contracted procedure: k3714 
o|contracted procedure: k3717 
o|contracted procedure: k3720 
o|contracted procedure: k3728 
o|contracted procedure: k3736 
o|contracted procedure: k3535 
o|contracted procedure: k3539 
o|propagated global variable: g808812 ##compiler#immutable-constants 
o|contracted procedure: k3748 
o|contracted procedure: k3751 
o|contracted procedure: k3754 
o|contracted procedure: k3762 
o|contracted procedure: k3770 
o|contracted procedure: k3796 
o|contracted procedure: k3792 
o|contracted procedure: k3788 
o|contracted procedure: k3784 
o|contracted procedure: k3780 
o|contracted procedure: k3799 
o|contracted procedure: k3815 
o|contracted procedure: k3811 
o|contracted procedure: k3807 
o|contracted procedure: k3822 
o|contracted procedure: k3825 
o|contracted procedure: k3837 
o|contracted procedure: k3840 
o|contracted procedure: k3843 
o|contracted procedure: k3851 
o|contracted procedure: k3859 
o|inlining procedure: "(batch-driver.scm:436) dribble116" 
o|inlining procedure: "(batch-driver.scm:413) dribble116" 
o|contracted procedure: k3881 
o|contracted procedure: k3889 
o|contracted procedure: k3892 
o|contracted procedure: k3903 
o|contracted procedure: k3906 
o|contracted procedure: k3918 
o|contracted procedure: k3921 
o|contracted procedure: k3924 
o|contracted procedure: k3932 
o|contracted procedure: k3940 
o|contracted procedure: k3952 
o|contracted procedure: k3955 
o|contracted procedure: k3958 
o|contracted procedure: k3966 
o|contracted procedure: k3974 
o|contracted procedure: k3980 
o|contracted procedure: k4014 
o|contracted procedure: k4021 
o|contracted procedure: k4037 
o|inlining procedure: "(batch-driver.scm:394) dribble116" 
o|contracted procedure: k4089 
o|contracted procedure: k4056 
o|inlining procedure: "(batch-driver.scm:373) dribble116" 
o|inlining procedure: "(batch-driver.scm:373) dribble116" 
o|inlining procedure: "(batch-driver.scm:355) dribble116" 
o|inlining procedure: "(batch-driver.scm:355) dribble116" 
o|contracted procedure: k4101 
o|contracted procedure: k4128 
o|contracted procedure: k4147 
o|contracted procedure: k4159 
o|contracted procedure: k4162 
o|contracted procedure: k4165 
o|contracted procedure: k4173 
o|contracted procedure: k4181 
o|contracted procedure: k4137 
o|contracted procedure: k4193 
o|contracted procedure: k4203 
o|contracted procedure: k4207 
o|inlining procedure: "(batch-driver.scm:320) dribble116" 
o|contracted procedure: k4216 
o|contracted procedure: k4226 
o|contracted procedure: k4230 
o|contracted procedure: k4249 
o|contracted procedure: k4259 
o|contracted procedure: k4263 
o|contracted procedure: k4276 
o|contracted procedure: k4320 
o|contracted procedure: k4362 
o|contracted procedure: k4374 
o|contracted procedure: k4384 
o|contracted procedure: k4388 
o|contracted procedure: k4353 
o|contracted procedure: k4347 
o|contracted procedure: k4336 
o|contracted procedure: k4330 
o|propagated global variable: g473475 ##compiler#default-extended-bindings 
o|contracted procedure: k4397 
o|contracted procedure: k4407 
o|contracted procedure: k4411 
o|contracted procedure: k4311 
o|contracted procedure: k4305 
o|contracted procedure: k4294 
o|contracted procedure: k4288 
o|propagated global variable: g426428 ##compiler#default-standard-bindings 
o|contracted procedure: k4432 
o|contracted procedure: k4447 
o|contracted procedure: k4450 
o|contracted procedure: k4453 
o|contracted procedure: k4461 
o|contracted procedure: k4469 
o|contracted procedure: k4479 
o|contracted procedure: k4492 
o|contracted procedure: k4498 
o|contracted procedure: k4510 
o|contracted procedure: k4513 
o|contracted procedure: k4516 
o|contracted procedure: k4524 
o|contracted procedure: k4532 
o|inlining procedure: "(batch-driver.scm:269) dribble116" 
o|inlining procedure: "(batch-driver.scm:266) dribble116" 
o|inlining procedure: "(batch-driver.scm:263) dribble116" 
o|contracted procedure: k4577 
o|inlining procedure: "(batch-driver.scm:253) dribble116" 
o|contracted procedure: k4617 
o|inlining procedure: "(batch-driver.scm:227) dribble116" 
o|contracted procedure: k4705 
o|contracted procedure: k4709 
o|contracted procedure: k4734 
o|contracted procedure: k4737 
o|contracted procedure: k4740 
o|contracted procedure: k4748 
o|contracted procedure: k4756 
o|contracted procedure: k4762 
o|contracted procedure: k4774 
o|contracted procedure: k4798 
o|contracted procedure: k4801 
o|contracted procedure: k4804 
o|contracted procedure: k4812 
o|contracted procedure: k4820 
o|contracted procedure: k4783 
o|contracted procedure: k4870 
o|contracted procedure: k4873 
o|contracted procedure: k4876 
o|contracted procedure: k4884 
o|contracted procedure: k4892 
o|contracted procedure: k4913 
o|contracted procedure: k4946 
o|contracted procedure: k4957 
o|contracted procedure: k4950 
o|simplifications: ((let . 57)) 
o|removed binding forms: 254 
o|removed side-effect free assignment to unused variable: dribble116 
o|substituted constant variable: fstr1265637 
o|substituted constant variable: args1275638 
o|substituted constant variable: fstr1265643 
o|substituted constant variable: args1275644 
o|substituted constant variable: fstr1265649 
o|substituted constant variable: fstr1265655 
o|substituted constant variable: fstr1265661 
o|contracted procedure: "(batch-driver.scm:544) g10511058" 
o|substituted constant variable: fstr1265673 
o|contracted procedure: "(batch-driver.scm:532) g10301037" 
o|substituted constant variable: fstr1265681 
o|substituted constant variable: fstr1265693 
o|substituted constant variable: args1275694 
o|substituted constant variable: fstr1265713 
o|substituted constant variable: args1275714 
o|substituted constant variable: fstr1265719 
o|substituted constant variable: args1275720 
o|substituted constant variable: fstr1265733 
o|substituted constant variable: fstr1265739 
o|substituted constant variable: fstr1265745 
o|substituted constant variable: fstr1265751 
o|substituted constant variable: fstr1265757 
o|substituted constant variable: fstr1265767 
o|substituted constant variable: args1275768 
o|substituted constant variable: fstr1265785 
o|substituted constant variable: args1275786 
o|substituted constant variable: fstr1265791 
o|substituted constant variable: args1275792 
o|substituted constant variable: fstr1265797 
o|substituted constant variable: args1275798 
o|substituted constant variable: fstr1265803 
o|substituted constant variable: args1275804 
o|substituted constant variable: fstr1265809 
o|substituted constant variable: args1275810 
o|replaced variables: 115 
o|removed binding forms: 3 
o|replaced variables: 1 
o|removed binding forms: 94 
o|contracted procedure: k3635 
o|contracted procedure: k3732 
o|removed binding forms: 3 
o|customizable procedures: (g7273 map-loop7898 k1773 k1799 k2180 k2183 map-loop280298 map-loop308326 k2231 k2238 k2244 k2256 k2259 k2262 k2265 k2268 k2271 k2274 k2277 k2280 k2283 k2286 k2289 k2292 k2295 k2298 k2301 k2306 k2311 k2316 map-loop364381 map-loop393410 k2347 k2350 k2353 k2356 k2359 for-each-loop419459 for-each-loop466506 for-each-loop514532 for-each-loop539557 for-each-loop565576 map-loop584605 k2425 arg-val121 k2450 k2478 loop716 doloop651652 map-loop656673 map-loop682699 map-loop731748 k2559 k2568 k2577 map-loop763784 map-loop796817 map-loop826847 k3566 map-loop863884 map-loop894912 for-each-loop921942 print-expr120 map-loop965982 map-loop10031020 for-each-loop10291042 for-each-loop10501062 collect-options122 for-each-loop10731087 for-each-loop10941105 k2659 print-db119 print-node118 analyze125 begin-time123 end-time124 loop1130 def-no230268 def-contf231266 body228236 g208209 option-arg30 loop200 for-each-loop164176 print-header117) 
o|calls to known targets: 277 
o|identified direct recursive calls: f_3251 1 
o|identified direct recursive calls: f_3612 1 
o|identified direct recursive calls: f_3675 1 
o|identified direct recursive calls: f_3709 1 
o|fast box initializations: 40 
o|dropping unused closure argument: f_1819 
o|dropping unused closure argument: f_1941 
o|dropping unused closure argument: f_1714 
*/
/* end of file */

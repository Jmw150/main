/* Generated from chicken-uninstall.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: chicken-uninstall.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -output-file chicken-uninstall.c
   uses: library eval expand file extras irregex port pathname posix data-structures
*/
#include "chicken.h"

#ifndef STATICBUILD
# define STATIC_CHICKEN 0
#else
# define STATIC_CHICKEN 1
#endif
#ifndef DEBUGBUILD
# define DEBUG_CHICKEN 0
#else
# define DEBUG_CHICKEN 1
#endif

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_file_toplevel)
C_externimport void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_port_toplevel)
C_externimport void C_ccall C_port_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_externimport void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[117];
static double C_possibly_force_alignment;


C_noret_decl(f4431)
static void C_ccall f4431(C_word c,C_word *av) C_noret;
C_noret_decl(f4436)
static void C_ccall f4436(C_word c,C_word *av) C_noret;
C_noret_decl(f4443)
static void C_ccall f4443(C_word c,C_word *av) C_noret;
C_noret_decl(f4450)
static void C_ccall f4450(C_word c,C_word *av) C_noret;
C_noret_decl(f_1476)
static void C_ccall f_1476(C_word c,C_word *av) C_noret;
C_noret_decl(f_1479)
static void C_ccall f_1479(C_word c,C_word *av) C_noret;
C_noret_decl(f_1482)
static void C_ccall f_1482(C_word c,C_word *av) C_noret;
C_noret_decl(f_1485)
static void C_ccall f_1485(C_word c,C_word *av) C_noret;
C_noret_decl(f_1488)
static void C_ccall f_1488(C_word c,C_word *av) C_noret;
C_noret_decl(f_1491)
static void C_ccall f_1491(C_word c,C_word *av) C_noret;
C_noret_decl(f_1494)
static void C_ccall f_1494(C_word c,C_word *av) C_noret;
C_noret_decl(f_1497)
static void C_ccall f_1497(C_word c,C_word *av) C_noret;
C_noret_decl(f_1500)
static void C_ccall f_1500(C_word c,C_word *av) C_noret;
C_noret_decl(f_1503)
static void C_ccall f_1503(C_word c,C_word *av) C_noret;
C_noret_decl(f_1506)
static void C_ccall f_1506(C_word c,C_word *av) C_noret;
C_noret_decl(f_1883)
static void C_fcall f_1883(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1905)
static void C_ccall f_1905(C_word c,C_word *av) C_noret;
C_noret_decl(f_1917)
static void C_fcall f_1917(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1927)
static void C_ccall f_1927(C_word c,C_word *av) C_noret;
C_noret_decl(f_1975)
static void C_fcall f_1975(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1993)
static void C_ccall f_1993(C_word c,C_word *av) C_noret;
C_noret_decl(f_2003)
static void C_fcall f_2003(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2016)
static void C_ccall f_2016(C_word c,C_word *av) C_noret;
C_noret_decl(f_2030)
static void C_ccall f_2030(C_word c,C_word *av) C_noret;
C_noret_decl(f_2078)
static void C_fcall f_2078(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2092)
static void C_ccall f_2092(C_word c,C_word *av) C_noret;
C_noret_decl(f_2105)
static void C_ccall f_2105(C_word c,C_word *av) C_noret;
C_noret_decl(f_2117)
static void C_fcall f_2117(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2126)
static void C_fcall f_2126(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2134)
static void C_fcall f_2134(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2141)
static void C_ccall f_2141(C_word c,C_word *av) C_noret;
C_noret_decl(f_2155)
static void C_ccall f_2155(C_word c,C_word *av) C_noret;
C_noret_decl(f_2790)
static void C_ccall f_2790(C_word c,C_word *av) C_noret;
C_noret_decl(f_2796)
static void C_ccall f_2796(C_word c,C_word *av) C_noret;
C_noret_decl(f_2800)
static void C_ccall f_2800(C_word c,C_word *av) C_noret;
C_noret_decl(f_2804)
static void C_ccall f_2804(C_word c,C_word *av) C_noret;
C_noret_decl(f_2808)
static void C_ccall f_2808(C_word c,C_word *av) C_noret;
C_noret_decl(f_2812)
static void C_ccall f_2812(C_word c,C_word *av) C_noret;
C_noret_decl(f_2816)
static void C_ccall f_2816(C_word c,C_word *av) C_noret;
C_noret_decl(f_2820)
static void C_ccall f_2820(C_word c,C_word *av) C_noret;
C_noret_decl(f_2824)
static void C_ccall f_2824(C_word c,C_word *av) C_noret;
C_noret_decl(f_2828)
static void C_ccall f_2828(C_word c,C_word *av) C_noret;
C_noret_decl(f_2832)
static void C_ccall f_2832(C_word c,C_word *av) C_noret;
C_noret_decl(f_2836)
static void C_ccall f_2836(C_word c,C_word *av) C_noret;
C_noret_decl(f_2840)
static void C_ccall f_2840(C_word c,C_word *av) C_noret;
C_noret_decl(f_2844)
static void C_ccall f_2844(C_word c,C_word *av) C_noret;
C_noret_decl(f_2848)
static void C_ccall f_2848(C_word c,C_word *av) C_noret;
C_noret_decl(f_2856)
static void C_ccall f_2856(C_word c,C_word *av) C_noret;
C_noret_decl(f_2860)
static void C_ccall f_2860(C_word c,C_word *av) C_noret;
C_noret_decl(f_2864)
static void C_ccall f_2864(C_word c,C_word *av) C_noret;
C_noret_decl(f_2868)
static void C_ccall f_2868(C_word c,C_word *av) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872(C_word c,C_word *av) C_noret;
C_noret_decl(f_2876)
static void C_ccall f_2876(C_word c,C_word *av) C_noret;
C_noret_decl(f_2880)
static void C_ccall f_2880(C_word c,C_word *av) C_noret;
C_noret_decl(f_2884)
static void C_ccall f_2884(C_word c,C_word *av) C_noret;
C_noret_decl(f_2888)
static void C_ccall f_2888(C_word c,C_word *av) C_noret;
C_noret_decl(f_2892)
static void C_ccall f_2892(C_word c,C_word *av) C_noret;
C_noret_decl(f_2896)
static void C_ccall f_2896(C_word c,C_word *av) C_noret;
C_noret_decl(f_2900)
static void C_ccall f_2900(C_word c,C_word *av) C_noret;
C_noret_decl(f_2904)
static void C_ccall f_2904(C_word c,C_word *av) C_noret;
C_noret_decl(f_2908)
static void C_ccall f_2908(C_word c,C_word *av) C_noret;
C_noret_decl(f_2912)
static void C_ccall f_2912(C_word c,C_word *av) C_noret;
C_noret_decl(f_2916)
static void C_ccall f_2916(C_word c,C_word *av) C_noret;
C_noret_decl(f_2920)
static void C_ccall f_2920(C_word c,C_word *av) C_noret;
C_noret_decl(f_2931)
static void C_ccall f_2931(C_word c,C_word *av) C_noret;
C_noret_decl(f_2940)
static void C_ccall f_2940(C_word c,C_word *av) C_noret;
C_noret_decl(f_2964)
static void C_ccall f_2964(C_word c,C_word *av) C_noret;
C_noret_decl(f_2975)
static void C_fcall f_2975(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2985)
static void C_ccall f_2985(C_word c,C_word *av) C_noret;
C_noret_decl(f_2989)
static void C_ccall f_2989(C_word c,C_word *av) C_noret;
C_noret_decl(f_2992)
static void C_ccall f_2992(C_word c,C_word *av) C_noret;
C_noret_decl(f_2998)
static void C_ccall f_2998(C_word c,C_word *av) C_noret;
C_noret_decl(f_3004)
static void C_ccall f_3004(C_word c,C_word *av) C_noret;
C_noret_decl(f_3008)
static void C_ccall f_3008(C_word c,C_word *av) C_noret;
C_noret_decl(f_3012)
static void C_ccall f_3012(C_word c,C_word *av) C_noret;
C_noret_decl(f_3016)
static void C_ccall f_3016(C_word c,C_word *av) C_noret;
C_noret_decl(f_3020)
static void C_ccall f_3020(C_word c,C_word *av) C_noret;
C_noret_decl(f_3026)
static void C_ccall f_3026(C_word c,C_word *av) C_noret;
C_noret_decl(f_3378)
static void C_ccall f_3378(C_word c,C_word *av) C_noret;
C_noret_decl(f_3383)
static void C_fcall f_3383(C_word t0) C_noret;
C_noret_decl(f_3391)
static void C_fcall f_3391(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3405)
static void C_ccall f_3405(C_word c,C_word *av) C_noret;
C_noret_decl(f_3418)
static void C_ccall f_3418(C_word c,C_word *av) C_noret;
C_noret_decl(f_3421)
static void C_ccall f_3421(C_word c,C_word *av) C_noret;
C_noret_decl(f_3424)
static void C_ccall f_3424(C_word c,C_word *av) C_noret;
C_noret_decl(f_3435)
static void C_fcall f_3435(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3443)
static void C_ccall f_3443(C_word c,C_word *av) C_noret;
C_noret_decl(f_3447)
static void C_ccall f_3447(C_word c,C_word *av) C_noret;
C_noret_decl(f_3453)
static void C_ccall f_3453(C_word c,C_word *av) C_noret;
C_noret_decl(f_3455)
static void C_fcall f_3455(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3480)
static void C_ccall f_3480(C_word c,C_word *av) C_noret;
C_noret_decl(f_3492)
static void C_ccall f_3492(C_word c,C_word *av) C_noret;
C_noret_decl(f_3498)
static void C_ccall f_3498(C_word c,C_word *av) C_noret;
C_noret_decl(f_3504)
static void C_fcall f_3504(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3529)
static void C_ccall f_3529(C_word c,C_word *av) C_noret;
C_noret_decl(f_3540)
static void C_ccall f_3540(C_word c,C_word *av) C_noret;
C_noret_decl(f_3544)
static void C_ccall f_3544(C_word c,C_word *av) C_noret;
C_noret_decl(f_3550)
static void C_ccall f_3550(C_word c,C_word *av) C_noret;
C_noret_decl(f_3559)
static void C_ccall f_3559(C_word c,C_word *av) C_noret;
C_noret_decl(f_3564)
static void C_fcall f_3564(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3568)
static void C_ccall f_3568(C_word c,C_word *av) C_noret;
C_noret_decl(f_3571)
static void C_ccall f_3571(C_word c,C_word *av) C_noret;
C_noret_decl(f_3574)
static void C_ccall f_3574(C_word c,C_word *av) C_noret;
C_noret_decl(f_3577)
static void C_ccall f_3577(C_word c,C_word *av) C_noret;
C_noret_decl(f_3580)
static void C_ccall f_3580(C_word c,C_word *av) C_noret;
C_noret_decl(f_3607)
static void C_ccall f_3607(C_word c,C_word *av) C_noret;
C_noret_decl(f_3611)
static void C_ccall f_3611(C_word c,C_word *av) C_noret;
C_noret_decl(f_3630)
static void C_ccall f_3630(C_word c,C_word *av) C_noret;
C_noret_decl(f_3632)
static void C_fcall f_3632(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3657)
static void C_ccall f_3657(C_word c,C_word *av) C_noret;
C_noret_decl(f_3669)
static void C_fcall f_3669(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3696)
static void C_ccall f_3696(C_word c,C_word *av) C_noret;
C_noret_decl(f_3709)
static void C_ccall f_3709(C_word c,C_word *av) C_noret;
C_noret_decl(f_3713)
static void C_ccall f_3713(C_word c,C_word *av) C_noret;
C_noret_decl(f_3717)
static void C_ccall f_3717(C_word c,C_word *av) C_noret;
C_noret_decl(f_3721)
static void C_ccall f_3721(C_word c,C_word *av) C_noret;
C_noret_decl(f_3725)
static void C_ccall f_3725(C_word c,C_word *av) C_noret;
C_noret_decl(f_3731)
static void C_ccall f_3731(C_word c,C_word *av) C_noret;
C_noret_decl(f_3737)
static void C_fcall f_3737(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3748)
static void C_ccall f_3748(C_word c,C_word *av) C_noret;
C_noret_decl(f_3757)
static void C_ccall f_3757(C_word c,C_word *av) C_noret;
C_noret_decl(f_3762)
static void C_fcall f_3762(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3772)
static void C_ccall f_3772(C_word c,C_word *av) C_noret;
C_noret_decl(f_3787)
static void C_ccall f_3787(C_word c,C_word *av) C_noret;
C_noret_decl(f_3791)
static void C_ccall f_3791(C_word c,C_word *av) C_noret;
C_noret_decl(f_3795)
static void C_ccall f_3795(C_word c,C_word *av) C_noret;
C_noret_decl(f_3797)
static void C_fcall f_3797(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3816)
static void C_ccall f_3816(C_word c,C_word *av) C_noret;
C_noret_decl(f_3830)
static void C_ccall f_3830(C_word c,C_word *av) C_noret;
C_noret_decl(f_3834)
static void C_ccall f_3834(C_word c,C_word *av) C_noret;
C_noret_decl(f_3840)
static void C_ccall f_3840(C_word c,C_word *av) C_noret;
C_noret_decl(f_3853)
static void C_ccall f_3853(C_word c,C_word *av) C_noret;
C_noret_decl(f_3859)
static void C_ccall f_3859(C_word c,C_word *av) C_noret;
C_noret_decl(f_3874)
static void C_ccall f_3874(C_word c,C_word *av) C_noret;
C_noret_decl(f_3879)
static void C_ccall f_3879(C_word c,C_word *av) C_noret;
C_noret_decl(f_3890)
static void C_fcall f_3890(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3900)
static void C_ccall f_3900(C_word c,C_word *av) C_noret;
C_noret_decl(f_3932)
static void C_fcall f_3932(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3942)
static void C_ccall f_3942(C_word c,C_word *av) C_noret;
C_noret_decl(f_3945)
static void C_ccall f_3945(C_word c,C_word *av) C_noret;
C_noret_decl(f_3952)
static void C_ccall f_3952(C_word c,C_word *av) C_noret;
C_noret_decl(f_3970)
static void C_fcall f_3970(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3981)
static void C_ccall f_3981(C_word c,C_word *av) C_noret;
C_noret_decl(f_3988)
static void C_ccall f_3988(C_word c,C_word *av) C_noret;
C_noret_decl(f_4052)
static void C_fcall f_4052(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4061)
static void C_ccall f_4061(C_word c,C_word *av) C_noret;
C_noret_decl(f_4067)
static void C_ccall f_4067(C_word c,C_word *av) C_noret;
C_noret_decl(f_4074)
static void C_ccall f_4074(C_word c,C_word *av) C_noret;
C_noret_decl(f_4086)
static void C_ccall f_4086(C_word c,C_word *av) C_noret;
C_noret_decl(f_4090)
static void C_fcall f_4090(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4127)
static void C_ccall f_4127(C_word c,C_word *av) C_noret;
C_noret_decl(f_4135)
static void C_ccall f_4135(C_word c,C_word *av) C_noret;
C_noret_decl(f_4174)
static void C_ccall f_4174(C_word c,C_word *av) C_noret;
C_noret_decl(f_4180)
static void C_ccall f_4180(C_word c,C_word *av) C_noret;
C_noret_decl(f_4184)
static void C_ccall f_4184(C_word c,C_word *av) C_noret;
C_noret_decl(f_4195)
static void C_ccall f_4195(C_word c,C_word *av) C_noret;
C_noret_decl(f_4198)
static void C_ccall f_4198(C_word c,C_word *av) C_noret;
C_noret_decl(f_4201)
static void C_ccall f_4201(C_word c,C_word *av) C_noret;
C_noret_decl(f_4211)
static void C_ccall f_4211(C_word c,C_word *av) C_noret;
C_noret_decl(f_4215)
static void C_ccall f_4215(C_word c,C_word *av) C_noret;
C_noret_decl(f_4219)
static void C_ccall f_4219(C_word c,C_word *av) C_noret;
C_noret_decl(f_4224)
static void C_ccall f_4224(C_word c,C_word *av) C_noret;
C_noret_decl(f_4229)
static void C_ccall f_4229(C_word c,C_word *av) C_noret;
C_noret_decl(f_4233)
static void C_ccall f_4233(C_word c,C_word *av) C_noret;
C_noret_decl(f_4237)
static void C_ccall f_4237(C_word c,C_word *av) C_noret;
C_noret_decl(f_4244)
static void C_ccall f_4244(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1883)
static void C_ccall trf_1883(C_word c,C_word *av) C_noret;
static void C_ccall trf_1883(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1883(t0,t1,t2);}

C_noret_decl(trf_1917)
static void C_ccall trf_1917(C_word c,C_word *av) C_noret;
static void C_ccall trf_1917(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1917(t0,t1,t2);}

C_noret_decl(trf_1975)
static void C_ccall trf_1975(C_word c,C_word *av) C_noret;
static void C_ccall trf_1975(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1975(t0,t1,t2);}

C_noret_decl(trf_2003)
static void C_ccall trf_2003(C_word c,C_word *av) C_noret;
static void C_ccall trf_2003(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2003(t0,t1,t2);}

C_noret_decl(trf_2078)
static void C_ccall trf_2078(C_word c,C_word *av) C_noret;
static void C_ccall trf_2078(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2078(t0,t1,t2);}

C_noret_decl(trf_2117)
static void C_ccall trf_2117(C_word c,C_word *av) C_noret;
static void C_ccall trf_2117(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2117(t0,t1,t2);}

C_noret_decl(trf_2126)
static void C_ccall trf_2126(C_word c,C_word *av) C_noret;
static void C_ccall trf_2126(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2126(t0,t1,t2);}

C_noret_decl(trf_2134)
static void C_ccall trf_2134(C_word c,C_word *av) C_noret;
static void C_ccall trf_2134(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2134(t0,t1,t2,t3);}

C_noret_decl(trf_2975)
static void C_ccall trf_2975(C_word c,C_word *av) C_noret;
static void C_ccall trf_2975(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2975(t0,t1);}

C_noret_decl(trf_3383)
static void C_ccall trf_3383(C_word c,C_word *av) C_noret;
static void C_ccall trf_3383(C_word c,C_word *av){
C_word t0=av[0];
f_3383(t0);}

C_noret_decl(trf_3391)
static void C_ccall trf_3391(C_word c,C_word *av) C_noret;
static void C_ccall trf_3391(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3391(t0,t1);}

C_noret_decl(trf_3435)
static void C_ccall trf_3435(C_word c,C_word *av) C_noret;
static void C_ccall trf_3435(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3435(t0,t1,t2);}

C_noret_decl(trf_3455)
static void C_ccall trf_3455(C_word c,C_word *av) C_noret;
static void C_ccall trf_3455(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3455(t0,t1,t2);}

C_noret_decl(trf_3504)
static void C_ccall trf_3504(C_word c,C_word *av) C_noret;
static void C_ccall trf_3504(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3504(t0,t1,t2);}

C_noret_decl(trf_3564)
static void C_ccall trf_3564(C_word c,C_word *av) C_noret;
static void C_ccall trf_3564(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3564(t0,t1);}

C_noret_decl(trf_3632)
static void C_ccall trf_3632(C_word c,C_word *av) C_noret;
static void C_ccall trf_3632(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3632(t0,t1,t2);}

C_noret_decl(trf_3669)
static void C_ccall trf_3669(C_word c,C_word *av) C_noret;
static void C_ccall trf_3669(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3669(t0,t1,t2);}

C_noret_decl(trf_3737)
static void C_ccall trf_3737(C_word c,C_word *av) C_noret;
static void C_ccall trf_3737(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3737(t0,t1);}

C_noret_decl(trf_3762)
static void C_ccall trf_3762(C_word c,C_word *av) C_noret;
static void C_ccall trf_3762(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3762(t0,t1,t2);}

C_noret_decl(trf_3797)
static void C_ccall trf_3797(C_word c,C_word *av) C_noret;
static void C_ccall trf_3797(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3797(t0,t1);}

C_noret_decl(trf_3890)
static void C_ccall trf_3890(C_word c,C_word *av) C_noret;
static void C_ccall trf_3890(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3890(t0,t1,t2);}

C_noret_decl(trf_3932)
static void C_ccall trf_3932(C_word c,C_word *av) C_noret;
static void C_ccall trf_3932(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3932(t0,t1,t2,t3);}

C_noret_decl(trf_3970)
static void C_ccall trf_3970(C_word c,C_word *av) C_noret;
static void C_ccall trf_3970(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3970(t0,t1);}

C_noret_decl(trf_4052)
static void C_ccall trf_4052(C_word c,C_word *av) C_noret;
static void C_ccall trf_4052(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4052(t0,t1);}

C_noret_decl(trf_4090)
static void C_ccall trf_4090(C_word c,C_word *av) C_noret;
static void C_ccall trf_4090(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4090(t0,t1,t2);}

/* f4431 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in ... */
static void C_ccall f4431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f4431,2,av);}
/* chicken-uninstall.scm:153: chicken.base#exit */
t2=C_fast_retrieve(lf[57]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f4436 in k3968 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in ... */
static void C_ccall f4436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f4436,2,av);}
/* chicken-uninstall.scm:153: chicken.base#exit */
t2=C_fast_retrieve(lf[57]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f4443 in k4065 in k4059 in k4050 in k3968 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in ... */
static void C_ccall f4443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f4443,2,av);}
/* chicken-uninstall.scm:153: chicken.base#exit */
t2=C_fast_retrieve(lf[57]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f4450 in k4050 in k3968 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in ... */
static void C_ccall f4450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f4450,2,av);}
/* chicken-uninstall.scm:153: chicken.base#exit */
t2=C_fast_retrieve(lf[57]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k1474 */
static void C_ccall f_1476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1476,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1479,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1477 in k1474 */
static void C_ccall f_1479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1479,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1482,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k1480 in k1477 in k1474 */
static void C_ccall f_1482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1482,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1485,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k1483 in k1480 in k1477 in k1474 */
static void C_ccall f_1485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1485,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1488,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1486 in k1483 in k1480 in k1477 in k1474 */
static void C_ccall f_1488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1488,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1491,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k1489 in k1486 in k1483 in k1480 in k1477 in k1474 */
static void C_ccall f_1491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1491,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1494,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

/* k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in k1474 */
static void C_ccall f_1494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1494,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1497,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in k1474 */
static void C_ccall f_1497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1497,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1500,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in k1474 */
static void C_ccall f_1500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1500,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1503,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in k1474 */
static void C_ccall f_1503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,7)))){
C_save_and_reclaim((void *)f_1503,2,av);}
a=C_alloc(11);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1506,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:27: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[115]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[115]+1);
av2[1]=t3;
av2[2]=lf[116];
av2[3]=lf[116];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=C_SCHEME_END_OF_LIST;
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in k1474 */
static void C_ccall f_1506(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1506,2,av);}
a=C_alloc(5);
t2=C_mutate(&lf[1] /* (set! main#filter ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2117,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate(&lf[3] /* (set! main#staticbuild ...) */,C_mk_bool(STATIC_CHICKEN));
t4=C_mutate(&lf[4] /* (set! main#debugbuild ...) */,C_mk_bool(DEBUG_CHICKEN));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2790,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:43: chicken.platform#feature? */
t6=C_fast_retrieve(lf[113]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[114];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* loop in k4059 in k4050 in k3968 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in ... */
static void C_fcall f_1883(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1883,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1905,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(t2);
/* mini-srfi-1.scm:82: pred */
t6=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}}

/* k1903 in loop in k4059 in k4050 in k3968 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in ... */
static void C_ccall f_1905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1905,2,av);}
if(C_truep(C_i_not(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* mini-srfi-1.scm:83: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1883(t4,((C_word*)t0)[2],t3);}}

/* loop in a3491 in k3419 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in ... */
static void C_fcall f_1917(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1917,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1927,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* mini-srfi-1.scm:88: pred */
t5=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}}

/* k1925 in loop in a3491 in k3419 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in ... */
static void C_ccall f_1927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1927,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* mini-srfi-1.scm:89: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1917(t4,((C_word*)t0)[2],t3);}}

/* loop in k3451 in k3419 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in ... */
static void C_fcall f_1975(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1975,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1993,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=t2;
t7=C_u_i_cdr(t6);
/* mini-srfi-1.scm:101: loop */
t9=t5;
t10=t7;
t1=t9;
t2=t10;
goto loop;}}

/* k1991 in loop in k3451 in k3419 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in ... */
static void C_ccall f_1993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1993,2,av);}
/* mini-srfi-1.scm:101: scheme#append */
t2=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* loop in loop in k3422 in k3419 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in ... */
static void C_fcall f_2003(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2003,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2016,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* mini-srfi-1.scm:106: test */
t5=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=t4;
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}}

/* k2014 in loop in loop in k3422 in k3419 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in ... */
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2016,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* mini-srfi-1.scm:107: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2003(t4,((C_word*)t0)[4],t3);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2030,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* mini-srfi-1.scm:109: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_2003(t7,t4,t6);}}

/* k2028 in k2014 in loop in loop in k3422 in k3419 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in ... */
static void C_ccall f_2030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2030,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k3422 in k3419 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in ... */
static void C_fcall f_2078(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,0,3)))){
C_save_and_reclaim_args((void *)trf_2078,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_i_nullp(t2))){
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=t3;
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2092,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2105,a[2]=((C_word*)t0)[2],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=t4;
t10=((C_word*)t0)[3];
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2003,a[2]=t12,a[3]=t10,a[4]=t9,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_2003(t14,t8,t6);}}

/* k2090 in loop in k3422 in k3419 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in ... */
static void C_ccall f_2092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2092,2,av);}
a=C_alloc(3);
t2=C_i_equalp(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?((C_word*)t0)[4]:C_a_i_cons(&a,2,((C_word*)t0)[5],t1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2103 in loop in k3422 in k3419 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in ... */
static void C_ccall f_2105(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2105,2,av);}
/* mini-srfi-1.scm:123: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2078(t2,((C_word*)t0)[3],t1);}

/* main#filter in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in k1474 */
static void C_fcall f_2117(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2117,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_check_list_2(t3,lf[2]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2126,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2126(t8,t1,t3);}

/* foldr317 in main#filter in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in k1474 */
static void C_fcall f_2126(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_2126,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2134,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2155,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t2,C_fix(1));
t9=t6;
t10=t7;
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g322 in foldr317 in main#filter in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in k1474 */
static void C_fcall f_2134(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2134,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2141,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:131: pred */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k2139 in g322 in foldr317 in main#filter in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in k1474 */
static void C_ccall f_2141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2141,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2153 in foldr317 in main#filter in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in k1474 */
static void C_ccall f_2155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2155,2,av);}
/* mini-srfi-1.scm:131: g322 */
t2=((C_word*)t0)[2];
f_2134(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2788 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in k1474 */
static void C_ccall f_2790(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2790,2,av);}
a=C_alloc(6);
t2=lf[5] /* main#cross-chicken */ =t1;;
t3=lf[6] /* main#binary-version */ =C_fix((C_word)C_BINARY_VERSION);;
t4=lf[7] /* main#major-version */ =C_fix((C_word)C_MAJOR_VERSION);;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2796,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CC);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2794 in k2788 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in k1474 */
static void C_ccall f_2796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2796,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2800,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CXX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2798 in k2794 in k2788 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in k1474 */
static void C_ccall f_2800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2800,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2804,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INSTALL_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2802 in k2798 in k2794 in k2788 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in k1474 */
static void C_ccall f_2804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2804,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2808,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2806 in k2802 in k2798 in k2794 in k2788 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in k1474 */
static void C_ccall f_2808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2808,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2812,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LDFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2810 in k2806 in k2802 in k2798 in k2794 in k2788 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in k1474 */
static void C_ccall f_2812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2812,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2816,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INSTALL_PROGRAM_EXECUTABLE_OPTIONS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2814 in k2810 in k2806 in k2802 in k2798 in k2794 in k2788 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in k1474 */
static void C_ccall f_2816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2816,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2820,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INSTALL_PROGRAM_FILE_OPTIONS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2818 in k2814 in k2810 in k2806 in k2802 in k2798 in k2794 in k2788 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in k1474 */
static void C_ccall f_2820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2820,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2824,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_MORE_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2822 in k2818 in k2814 in k2810 in k2806 in k2802 in k2798 in k2794 in k2788 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in k1474 */
static void C_ccall f_2824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2824,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2828,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2802 in k2798 in k2794 in k2788 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in k1474 */
static void C_ccall f_2828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2828,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[8] /* (set! main#default-libdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2832,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_RUN_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2802 in k2798 in k2794 in k2788 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in k1474 in ... */
static void C_ccall f_2832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2832,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[9] /* (set! main#default-runlibdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2836,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_STATIC_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2802 in k2798 in k2794 in k2788 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in ... */
static void C_ccall f_2836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2836,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2840,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INCLUDE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2802 in k2798 in k2794 in k2788 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in ... */
static void C_ccall f_2840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2840,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2844,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2802 in k2798 in k2794 in k2788 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in ... */
static void C_ccall f_2844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2844,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[10] /* (set! main#default-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2848,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_SHARE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2802 in k2798 in k2794 in k2788 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in ... */
static void C_ccall f_2848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2848,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4244,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:63: chicken.platform#software-type */
t3=C_fast_retrieve(lf[112]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2854 in k4242 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2802 in k2798 in k2794 in k2788 in k1504 in k1501 in k1498 in k1495 in k1492 in ... */
static void C_ccall f_2856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2856,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2860,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2802 in k2798 in k2794 in k2788 in k1504 in k1501 in k1498 in k1495 in ... */
static void C_ccall f_2860(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2860,2,av);}
a=C_alloc(9);
t2=C_mutate(&lf[10] /* (set! main#default-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2864,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4237,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_CSC_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2802 in k2798 in k2794 in k2788 in k1504 in k1501 in k1498 in ... */
static void C_ccall f_2864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2864,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2868,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4233,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_CSI_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2802 in k2798 in k2794 in k2788 in k1504 in k1501 in ... */
static void C_ccall f_2868(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2868,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2872,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4229,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_CHICKEN_DO_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2802 in k2798 in k2794 in k2788 in k1504 in ... */
static void C_ccall f_2872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2872,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2876,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_EGG_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2802 in k2798 in k2794 in k2788 in ... */
static void C_ccall f_2876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2876,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[14] /* (set! main#host-repo ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2880,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2802 in k2798 in k2794 in ... */
static void C_ccall f_2880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2880,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2884,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2802 in k2798 in ... */
static void C_ccall f_2884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2884,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2888,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_INCLUDE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2802 in ... */
static void C_ccall f_2888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2888,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2892,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_SHARE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in ... */
static void C_ccall f_2892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2892,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2896,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_MORE_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in ... */
static void C_ccall f_2896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2896,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2900,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in ... */
static void C_ccall f_2900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2900,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2904,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LDFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in ... */
static void C_ccall f_2904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2904,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2908,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CC);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in ... */
static void C_ccall f_2908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2908,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2912,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CXX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in ... */
static void C_ccall f_2912(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2912,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2916,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4224,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_retrieve2(lf[6],C_text("main#binary-version"));
/* ##sys#fixnum->string */
t5=C_fast_retrieve(lf[107]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=C_retrieve2(lf[6],C_text("main#binary-version"));
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in k2834 in k2830 in ... */
static void C_ccall f_2916(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2916,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[15] /* (set! main#target-repo ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2920,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4219,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_retrieve2(lf[6],C_text("main#binary-version"));
/* ##sys#fixnum->string */
t6=C_fast_retrieve(lf[107]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=C_retrieve2(lf[6],C_text("main#binary-version"));
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in k2834 in ... */
static void C_ccall f_2920(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2920,2,av);}
a=C_alloc(5);
t2=C_mutate(&lf[16] /* (set! main#target-run-repo ...) */,t1);
t3=C_mutate(&lf[17] /* (set! main#+egg-info-extension+ ...) */,lf[18]);
t4=C_mutate(&lf[19] /* (set! main#probe-dir ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2975,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2989,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:117: chicken.process-context#get-environment-variable */
t6=C_fast_retrieve(lf[28]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[105];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2929 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in ... */
static void C_ccall f_2931(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2931,2,av);}
a=C_alloc(4);
t2=t1;
t3=C_i_not(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2940,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
if(C_truep(t3)){
t5=C_SCHEME_UNDEFINED;
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
/* egg-environment.scm:105: chicken.base#error */
t5=*((C_word*)lf[62]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[81];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}
else{
/* egg-environment.scm:104: chicken.pathname#absolute-pathname? */
t5=C_fast_retrieve(lf[82]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k2938 in k2929 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in ... */
static void C_ccall f_2940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2940,2,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* egg-environment.scm:105: chicken.base#error */
t2=*((C_word*)lf[62]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[81];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2962 in k3389 in main#repo-path in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in ... */
static void C_ccall f_2964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2964,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?t1:C_retrieve2(lf[14],C_text("main#host-repo")));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* main#probe-dir in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in ... */
static void C_fcall f_2975(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2975,2,t1,t2);}
a=C_alloc(4);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2985,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* egg-environment.scm:114: chicken.file#directory-exists? */
t4=C_fast_retrieve(lf[20]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2983 in main#probe-dir in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in ... */
static void C_ccall f_2985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2985,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in ... */
static void C_ccall f_2989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_2989,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2992,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
f_2992(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4195,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4215,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:118: chicken.process-context#get-environment-variable */
t5=C_fast_retrieve(lf[28]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[104];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in ... */
static void C_ccall f_2992(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2992,2,av);}
a=C_alloc(3);
t2=lf[21] /* main#host-extensions */ =C_SCHEME_TRUE;;
t3=lf[22] /* main#force-uninstall */ =C_SCHEME_FALSE;;
t4=lf[23] /* main#sudo-uninstall */ =C_SCHEME_FALSE;;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3378,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:53: chicken.process-context#get-environment-variable */
t6=C_fast_retrieve(lf[28]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[99];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2996 in k3729 in k3877 in for-each-loop1091 in k3872 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in ... */
static void C_ccall f_2998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2998,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3004,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* egg-information.scm:34: chicken.file#file-exists? */
t4=C_fast_retrieve(lf[41]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3002 in k2996 in k3729 in k3877 in for-each-loop1091 in k3872 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in ... */
static void C_ccall f_3004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3004,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?((C_word*)t0)[3]:((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3006 in k3729 in k3877 in for-each-loop1091 in k3872 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in ... */
static void C_ccall f_3008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3008,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3012,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* egg-information.scm:32: chicken.pathname#pathname-file */
t4=C_fast_retrieve(lf[51]);{
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

/* k3010 in k3006 in k3729 in k3877 in for-each-loop1091 in k3872 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in ... */
static void C_ccall f_3012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3012,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3016,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* egg-information.scm:33: chicken.pathname#pathname-extension */
t4=C_fast_retrieve(lf[50]);{
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

/* k3014 in k3010 in k3006 in k3729 in k3877 in for-each-loop1091 in k3872 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in ... */
static void C_ccall f_3016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3016,2,av);}
/* egg-information.scm:30: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[49]);{
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

/* k3018 in k3729 in k3877 in for-each-loop1091 in k3872 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in ... */
static void C_ccall f_3020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3020,2,av);}
/* egg-information.scm:30: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[49]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[52];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3024 in k3729 in k3877 in for-each-loop1091 in k3872 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in ... */
static void C_ccall f_3026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3026,2,av);}
/* egg-information.scm:38: scheme#with-input-from-file */
t2=C_fast_retrieve(lf[47]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=*((C_word*)lf[48]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in ... */
static void C_ccall f_3378(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3378,2,av);}
a=C_alloc(10);
t2=(C_truep(t1)?t1:lf[24]);
t3=C_mutate(&lf[25] /* (set! main#sudo-program ...) */,t2);
t4=C_mutate(&lf[26] /* (set! main#repo-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3383,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[31] /* (set! main#delete-installed-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3797,tmp=(C_word)a,a+=2,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4174,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4184,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:199: chicken.process-context#command-line-arguments */
t8=C_fast_retrieve(lf[98]);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* main#repo-path in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in ... */
static void C_fcall f_3383(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3383,1,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3391,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[5],C_text("main#cross-chicken")))){
t3=C_i_not(C_retrieve2(lf[21],C_text("main#host-extensions")));
t4=t2;
f_3391(t4,(C_truep(t3)?lf[27]:lf[30]));}
else{
t3=t2;
f_3391(t3,lf[30]);}}

/* k3389 in main#repo-path in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in ... */
static void C_fcall f_3391(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3391,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_SCHEME_END_OF_LIST;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_eqp(lf[27],t1);
if(C_truep(t6)){
t7=t2;{
C_word av2[2];
av2[0]=t7;
av2[1]=(C_truep(t5)?C_retrieve2(lf[16],C_text("main#target-run-repo")):C_retrieve2(lf[15],C_text("main#target-repo")));
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2964,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:110: chicken.process-context#get-environment-variable */
t8=C_fast_retrieve(lf[28]);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[29];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}

/* a3404 in k3441 in g955 in k3419 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in ... */
static void C_ccall f_3405(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3405,3,av);}
t3=C_fast_retrieve(lf[76]);
/* chicken-uninstall.scm:63: g914 */
t4=C_fast_retrieve(lf[76]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in ... */
static void C_ccall f_3418(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3418,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3504,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3504(t6,t2,t1);}

/* k3419 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in ... */
static void C_ccall f_3421(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_3421,2,av);}
a=C_alloc(22);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3424,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3435,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t9=C_i_check_list_2(((C_word*)t0)[4],lf[71]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3453,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3455,a[2]=t6,a[3]=t12,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_3455(t14,t10,((C_word*)t0)[4]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3492,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:73: filter */
f_2117(t3,t4,t2);}}

/* k3422 in k3419 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in ... */
static void C_ccall f_3424(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3424,2,av);}
a=C_alloc(6);
t2=*((C_word*)lf[75]+1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2078,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2078(t6,((C_word*)t0)[2],t1);}

/* g955 in k3419 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in ... */
static void C_fcall f_3435(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3435,3,t0,t1,t2);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3443,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3447,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:71: chicken.irregex#glob->sre */
t5=C_fast_retrieve(lf[78]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3441 in g955 in k3419 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in ... */
static void C_ccall f_3443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3443,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=t1;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3405,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:63: filter */
f_2117(t2,t4,((C_word*)t0)[3]);}

/* k3445 in g955 in k3419 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in ... */
static void C_ccall f_3447(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3447,2,av);}
/* chicken-uninstall.scm:71: chicken.irregex#irregex */
t2=C_fast_retrieve(lf[77]);{
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

/* k3451 in k3419 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in ... */
static void C_ccall f_3453(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3453,2,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1975,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_1975(t5,((C_word*)t0)[2],t1);}

/* map-loop949 in k3419 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in ... */
static void C_fcall f_3455(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3455,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3480,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-uninstall.scm:70: g955 */
t5=((C_word*)t0)[4];
f_3435(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3478 in map-loop949 in k3419 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in ... */
static void C_ccall f_3480(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3480,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3455(t6,((C_word*)t0)[5],t5);}

/* a3491 in k3419 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in ... */
static void C_ccall f_3492(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3492,3,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3498,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=t3;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1917,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_1917(t8,t1,((C_word*)t0)[2]);}

/* a3497 in a3491 in k3419 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in ... */
static void C_ccall f_3498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3498,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_string_equal_p(t2,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop922 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in ... */
static void C_fcall f_3504(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3504,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3529,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-uninstall.scm:66: g928 */
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

/* k3527 in map-loop922 in k3416 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in ... */
static void C_ccall f_3529(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3529,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3504(t6,((C_word*)t0)[5],t5);}

/* k3538 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in ... */
static void C_ccall f_3540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3540,2,av);}
/* chicken-uninstall.scm:67: chicken.file#glob */
t2=C_fast_retrieve(lf[79]);{
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

/* k3542 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in ... */
static void C_ccall f_3544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3544,2,av);}
/* chicken-uninstall.scm:67: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[49]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[80];
av2[4]=C_retrieve2(lf[17],C_text("main#+egg-info-extension+"));
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3548 in k3578 in k3575 in k3572 in k3569 in k3566 in loop in k3557 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in ... */
static void C_ccall f_3550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3550,2,av);}
/* chicken-uninstall.scm:81: chicken.base#exit */
t2=C_fast_retrieve(lf[57]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3557 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in ... */
static void C_ccall f_3559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3559,2,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3564,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_3564(t5,((C_word*)t0)[2]);}

/* loop in k3557 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in ... */
static void C_fcall f_3564(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3564,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3568,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:89: scheme#display */
t3=*((C_word*)lf[66]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[67];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3566 in loop in k3557 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in ... */
static void C_ccall f_3568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3568,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3571,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:90: chicken.base#flush-output */
t3=*((C_word*)lf[65]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3569 in k3566 in loop in k3557 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in ... */
static void C_ccall f_3571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3571,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3574,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:91: chicken.io#read-line */
t3=C_fast_retrieve(lf[64]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3572 in k3569 in k3566 in loop in k3557 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in ... */
static void C_ccall f_3574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3574,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3577,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_eofp(t2))){
/* chicken-uninstall.scm:93: chicken.base#error */
t4=*((C_word*)lf[62]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[63];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_3577(2,av2);}}}

/* k3575 in k3572 in k3569 in k3566 in loop in k3557 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in ... */
static void C_ccall f_3577(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_3577,2,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3580,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=t2;
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3669,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3709,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3713,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3717,a[2]=t5,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3721,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3725,a[2]=t5,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* string->list */
t12=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}

/* k3578 in k3575 in k3572 in k3569 in k3566 in loop in k3557 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in ... */
static void C_ccall f_3580(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3580,2,av);}
a=C_alloc(3);
t2=C_i_string_equal_p(t1,lf[55]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(t1,lf[56]))){
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3550,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:80: chicken.base#print */
t5=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[58];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* chicken-uninstall.scm:97: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3564(t3,((C_word*)t0)[2]);}}}

/* k3605 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in ... */
static void C_ccall f_3607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3607,2,av);}
/* chicken-uninstall.scm:84: chicken.base#print */
t2=*((C_word*)lf[43]+1);{
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

/* k3609 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in ... */
static void C_ccall f_3611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3611,2,av);}
/* chicken-uninstall.scm:84: chicken.string#string-intersperse */
t2=C_fast_retrieve(lf[68]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[69];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3628 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in ... */
static void C_ccall f_3630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3630,2,av);}
/* chicken-uninstall.scm:85: scheme#append */
t2=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop990 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in ... */
static void C_fcall f_3632(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3632,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3657,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-uninstall.scm:86: g1013 */
t5=*((C_word*)lf[36]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[73];
av2[3]=t4;
av2[4]=lf[74];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3655 in map-loop990 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in ... */
static void C_ccall f_3657(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3657,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3632(t6,((C_word*)t0)[5],t5);}

/* left in k3575 in k3572 in k3569 in k3566 in loop in k3557 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in ... */
static void C_fcall f_3669(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3669,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
if(C_truep(C_u_i_char_whitespacep(t3))){
t4=t2;
t5=C_u_i_cdr(t4);
/* chicken-uninstall.scm:102: left */
t10=t1;
t11=t5;
t1=t10;
t2=t11;
goto loop;}
else{
t4=t2;
t5=C_u_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3696,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=t2;
t8=C_u_i_cdr(t7);
/* chicken-uninstall.scm:103: left */
t10=t6;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}}

/* k3694 in left in k3575 in k3572 in k3569 in k3566 in loop in k3557 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in ... */
static void C_ccall f_3696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3696,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3707 in k3575 in k3572 in k3569 in k3566 in loop in k3557 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in ... */
static void C_ccall f_3709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3709,2,av);}
/* list->string */
t2=C_fast_retrieve(lf[59]);{
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

/* k3711 in k3575 in k3572 in k3569 in k3566 in loop in k3557 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in ... */
static void C_ccall f_3713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3713,2,av);}
/* chicken-uninstall.scm:104: scheme#reverse */
t2=*((C_word*)lf[60]+1);{
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

/* k3715 in k3575 in k3572 in k3569 in k3566 in loop in k3557 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in ... */
static void C_ccall f_3717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3717,2,av);}
/* chicken-uninstall.scm:104: left */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3669(t2,((C_word*)t0)[3],t1);}

/* k3719 in k3575 in k3572 in k3569 in k3566 in loop in k3557 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in ... */
static void C_ccall f_3721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3721,2,av);}
/* chicken-uninstall.scm:104: scheme#reverse */
t2=*((C_word*)lf[60]+1);{
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

/* k3723 in k3575 in k3572 in k3569 in k3566 in loop in k3557 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in ... */
static void C_ccall f_3725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3725,2,av);}
/* chicken-uninstall.scm:104: left */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3669(t2,((C_word*)t0)[3],t1);}

/* k3729 in k3877 in for-each-loop1091 in k3872 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in ... */
static void C_ccall f_3731(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_3731,2,av);}
a=C_alloc(21);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3737,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3787,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3026,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=t6;
t8=t2;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2998,a[2]=t7,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3008,a[2]=t9,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3020,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* egg-information.scm:30: chicken.pathname#pathname-directory */
t12=C_fast_retrieve(lf[53]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3735 in k3729 in k3877 in for-each-loop1091 in k3872 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in ... */
static void C_fcall f_3737(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_3737,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=t1;
t3=C_i_check_list_2(t2,lf[45]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3757,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3762,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_3762(t8,t4,t2);}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3746 in for-each-loop1052 in k3735 in k3729 in k3877 in for-each-loop1091 in k3872 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in ... */
static void C_ccall f_3748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3748,2,av);}
if(C_truep(t1)){
/* chicken-uninstall.scm:113: delete-installed-file */
f_3797(((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3755 in k3735 in k3729 in k3877 in for-each-loop1091 in k3872 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in ... */
static void C_ccall f_3757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3757,2,av);}
/* chicken-uninstall.scm:115: delete-installed-file */
f_3797(((C_word*)t0)[2],((C_word*)t0)[3]);}

/* for-each-loop1052 in k3735 in k3729 in k3877 in for-each-loop1091 in k3872 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in ... */
static void C_fcall f_3762(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3762,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3772,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3748,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:113: chicken.file#file-exists? */
t8=C_fast_retrieve(lf[41]);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3770 in for-each-loop1052 in k3735 in k3729 in k3877 in for-each-loop1091 in k3872 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in ... */
static void C_ccall f_3772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3772,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3762(t3,((C_word*)t0)[4],t2);}

/* k3785 in k3729 in k3877 in for-each-loop1091 in k3872 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in ... */
static void C_ccall f_3787(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3787,2,av);}
t2=C_SCHEME_END_OF_LIST;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_car(t2));
t5=C_i_assq(lf[46],t1);
if(C_truep(t5)){
t6=C_i_cdr(t5);
t7=((C_word*)t0)[2];
f_3737(t7,(C_truep(t6)?t6:t4));}
else{
t6=((C_word*)t0)[2];
f_3737(t6,t4);}}

/* k3789 in k3877 in for-each-loop1091 in k3872 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in ... */
static void C_ccall f_3791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3791,2,av);}
/* chicken-uninstall.scm:107: chicken.file#file-exists? */
t2=C_fast_retrieve(lf[41]);{
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

/* k3793 in k3877 in for-each-loop1091 in k3872 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in ... */
static void C_ccall f_3795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3795,2,av);}
/* chicken-uninstall.scm:108: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[49]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=C_retrieve2(lf[17],C_text("main#+egg-info-extension+"));
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* main#delete-installed-file in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in ... */
static void C_fcall f_3797(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3797,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3853,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:118: chicken.file#file-exists? */
t4=C_fast_retrieve(lf[41]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3814 in k3851 in main#delete-installed-file in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in ... */
static void C_ccall f_3816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3816,2,av);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* chicken-uninstall.scm:123: chicken.base#warning */
t3=C_fast_retrieve(lf[32]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[34];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k3828 in k3851 in main#delete-installed-file in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in ... */
static void C_ccall f_3830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3830,2,av);}
/* chicken-uninstall.scm:121: chicken.process#system */
t2=C_fast_retrieve(lf[35]);{
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

/* k3832 in k3851 in main#delete-installed-file in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in ... */
static void C_ccall f_3834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3834,2,av);}
/* chicken-uninstall.scm:121: scheme#string-append */
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[25],C_text("main#sudo-program"));
av2[3]=lf[37];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3838 in k3851 in main#delete-installed-file in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in ... */
static void C_ccall f_3840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3840,2,av);}
if(C_truep(t1)){
/* chicken-uninstall.scm:125: chicken.file#delete-directory */
t2=C_fast_retrieve(lf[39]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
/* chicken-uninstall.scm:127: chicken.file#delete-file */
t2=C_fast_retrieve(lf[40]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k3851 in main#delete-installed-file in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in ... */
static void C_ccall f_3853(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3853,2,av);}
a=C_alloc(10);
if(C_truep(C_i_not(t1))){
/* chicken-uninstall.scm:119: chicken.base#warning */
t2=C_fast_retrieve(lf[32]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[33];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=(C_truep(C_retrieve2(lf[23],C_text("main#sudo-uninstall")))?C_eqp(lf[12],C_retrieve2(lf[13],C_text("main#default-platform"))):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3816,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3830,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3834,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:121: chicken.process#qs */
t6=C_fast_retrieve(lf[38]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3840,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:124: chicken.file#directory-exists? */
t4=C_fast_retrieve(lf[20]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}}

/* k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in ... */
static void C_ccall f_3859(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,3)))){
C_save_and_reclaim((void *)f_3859,2,av);}
a=C_alloc(32);
t2=t1;
if(C_truep(C_i_nullp(t2))){
/* chicken-uninstall.scm:132: chicken.base#print */
t3=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[44];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=C_retrieve2(lf[22],C_text("main#force-uninstall"));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3874,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[22],C_text("main#force-uninstall")))){
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_retrieve2(lf[22],C_text("main#force-uninstall"));
f_3874(2,av2);}}
else{
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3559,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3607,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3611,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=C_a_i_list1(&a,1,lf[70]);
t10=t9;
t11=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t12=t11;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=((C_word*)t13)[1];
t15=C_i_check_list_2(t2,lf[71]);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3630,a[2]=t8,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3632,a[2]=t13,a[3]=t18,a[4]=t14,tmp=(C_word)a,a+=5,tmp));
t20=((C_word*)t18)[1];
f_3632(t20,t16,t2);}}}

/* k3872 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in ... */
static void C_ccall f_3874(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3874,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_check_list_2(((C_word*)t0)[2],lf[45]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3890,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_3890(t6,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3877 in for-each-loop1091 in k3872 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in ... */
static void C_ccall f_3879(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3879,2,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3731,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3791,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3795,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:108: repo-path */
f_3383(t6);}

/* for-each-loop1091 in k3872 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in ... */
static void C_fcall f_3890(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_3890,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3900,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3879,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:136: chicken.base#print */
t8=*((C_word*)lf[43]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[54];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3898 in for-each-loop1091 in k3872 in k3857 in k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in ... */
static void C_ccall f_3900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3900,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3890(t3,((C_word*)t0)[4],t2);}

/* loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in ... */
static void C_fcall f_3932(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3932,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3942,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4431,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:141: chicken.base#print */
t7=*((C_word*)lf[43]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[84];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3942(2,av2);}}}
else{
t4=C_i_car(t2);
t5=t4;
t6=C_i_string_equal_p(t5,lf[85]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3970,a[2]=t1,a[3]=t5,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;
f_3970(t8,t6);}
else{
t8=C_u_i_string_equal_p(t5,lf[96]);
if(C_truep(t8)){
t9=t7;
f_3970(t9,t8);}
else{
t9=C_u_i_string_equal_p(t5,lf[97]);
t10=t7;
f_3970(t10,t9);}}}}

/* k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in ... */
static void C_ccall f_3942(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3942,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3945,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2931,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:103: chicken.process-context#get-environment-variable */
t5=C_fast_retrieve(lf[28]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[83];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in ... */
static void C_ccall f_3945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3945,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3952,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:163: scheme#reverse */
t3=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3950 in k3943 in k3940 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in ... */
static void C_ccall f_3952(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_3952,2,av);}
a=C_alloc(22);
t2=((C_word*)t0)[2];
t3=((C_word*)((C_word*)t0)[3])[1];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3859,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=t1;
t7=t3;
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=C_fast_retrieve(lf[51]);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3418,a[2]=t5,a[3]=t7,a[4]=t6,a[5]=t10,a[6]=t12,a[7]=t11,tmp=(C_word)a,a+=8,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3540,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3544,a[2]=t14,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:67: repo-path */
f_3383(t15);}

/* k3968 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in ... */
static void C_fcall f_3970(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_3970,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4436,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:141: chicken.base#print */
t4=*((C_word*)lf[43]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[84];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[86]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3981,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3988,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:171: chicken.platform#chicken-version */
t4=C_fast_retrieve(lf[87]);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[88]))){
t2=lf[21] /* main#host-extensions */ =C_SCHEME_FALSE;;
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-uninstall.scm:175: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3932(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[89]))){
t2=((C_word*)t0)[4];
t3=C_u_i_cdr(t2);
/* chicken-uninstall.scm:178: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3932(t4,((C_word*)t0)[2],t3,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[90]))){
t2=lf[22] /* main#force-uninstall */ =C_SCHEME_TRUE;;
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-uninstall.scm:181: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3932(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[91]))){
t2=C_set_block_item(((C_word*)t0)[7],0,C_SCHEME_TRUE);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-uninstall.scm:184: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3932(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6]);}
else{
t2=C_u_i_string_equal_p(((C_word*)t0)[3],lf[92]);
t3=(C_truep(t2)?t2:C_u_i_string_equal_p(((C_word*)t0)[3],lf[93]));
if(C_truep(t3)){
t4=lf[23] /* main#sudo-uninstall */ =C_SCHEME_TRUE;;
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* chicken-uninstall.scm:187: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_3932(t7,((C_word*)t0)[2],t6,((C_word*)t0)[6]);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4052,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_block_size(((C_word*)t0)[3]);
if(C_truep(C_i_fixnum_positivep(t5))){
t6=C_i_string_ref(((C_word*)t0)[3],C_fix(0));
t7=t4;
f_4052(t7,C_u_i_char_equalp(C_make_character(45),t6));}
else{
t6=t4;
f_4052(t6,C_SCHEME_FALSE);}}}}}}}}}

/* k3979 in k3968 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in ... */
static void C_ccall f_3981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3981,2,av);}
/* chicken-uninstall.scm:172: chicken.base#exit */
t2=C_fast_retrieve(lf[57]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3986 in k3968 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in ... */
static void C_ccall f_3988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3988,2,av);}
/* chicken-uninstall.scm:171: chicken.base#print */
t2=*((C_word*)lf[43]+1);{
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

/* k4050 in k3968 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in ... */
static void C_fcall f_4052(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4052,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4061,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4135,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:191: scheme#substring */
t5=*((C_word*)lf[95]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4450,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:141: chicken.base#print */
t5=*((C_word*)lf[43]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[84];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[6];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[5]);
/* chicken-uninstall.scm:197: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_3932(t5,((C_word*)t0)[4],t3,t4);}}

/* k4059 in k4050 in k3968 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in ... */
static void C_ccall f_4061(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_4061,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4067,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4127,tmp=(C_word)a,a+=2,tmp);
t5=t4;
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1883,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_1883(t9,t3,t2);}

/* k4065 in k4059 in k4050 in k3968 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in ... */
static void C_ccall f_4067(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4067,2,av);}
a=C_alloc(21);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4074,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4086,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4090,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4090(t11,t7,((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4443,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:141: chicken.base#print */
t4=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[84];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k4072 in k4065 in k4059 in k4050 in k3968 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in ... */
static void C_ccall f_4074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4074,2,av);}
/* chicken-uninstall.scm:193: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3932(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k4084 in k4065 in k4059 in k4050 in k3968 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in ... */
static void C_ccall f_4086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4086,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken-uninstall.scm:193: scheme#append */
t4=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* map-loop1156 in k4065 in k4059 in k4050 in k3968 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in ... */
static void C_fcall f_4090(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4090,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_string(&a,2,C_make_character(45),t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
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

/* a4126 in k4059 in k4050 in k3968 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in ... */
static void C_ccall f_4127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4127,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_memq(t2,lf[94]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4133 in k4050 in k3968 in loop in k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in ... */
static void C_ccall f_4135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4135,2,av);}
/* string->list */
t2=C_fast_retrieve(lf[61]);{
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

/* k4172 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in ... */
static void C_ccall f_4174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4174,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4180,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.base#implicit-exit-handler */
t3=C_fast_retrieve(lf[42]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4178 in k4172 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in ... */
static void C_ccall f_4180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4180,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4182 in k3376 in k2990 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in ... */
static void C_ccall f_4184(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_4184,2,av);}
a=C_alloc(8);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3932,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3932(t7,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k4193 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in ... */
static void C_ccall f_4195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_4195,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4198,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t1;
t4=C_a_i_list2(&a,2,t3,lf[100]);
/* egg-environment.scm:118: chicken.pathname#make-pathname */
t5=C_fast_retrieve(lf[49]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
av2[2]=t4;
av2[3]=lf[101];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4201,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4211,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:119: chicken.process-context#get-environment-variable */
t5=C_fast_retrieve(lf[28]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[103];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k4196 in k4193 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in ... */
static void C_ccall f_4198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4198,2,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,t1,lf[100]);
/* egg-environment.scm:118: chicken.pathname#make-pathname */
t3=C_fast_retrieve(lf[49]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=lf[101];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4199 in k4193 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in ... */
static void C_ccall f_4201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4201,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=t1;
t3=C_a_i_list2(&a,2,t2,lf[100]);
/* egg-environment.scm:118: chicken.pathname#make-pathname */
t4=C_fast_retrieve(lf[49]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
av2[3]=lf[101];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
/* egg-environment.scm:120: chicken.process-context#current-directory */
t2=C_fast_retrieve(lf[102]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4209 in k4193 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in ... */
static void C_ccall f_4211(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4211,2,av);}
/* egg-environment.scm:119: probe-dir */
f_2975(((C_word*)t0)[2],t1);}

/* k4213 in k2987 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in ... */
static void C_ccall f_4215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4215,2,av);}
/* egg-environment.scm:118: probe-dir */
f_2975(((C_word*)t0)[2],t1);}

/* k4217 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in k2834 in ... */
static void C_ccall f_4219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4219,2,av);}
/* egg-environment.scm:94: scheme#string-append */
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[9],C_text("main#default-runlibdir"));
av2[3]=lf[106];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4222 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in k2834 in k2830 in ... */
static void C_ccall f_4224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4224,2,av);}
/* egg-environment.scm:91: scheme#string-append */
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[8],C_text("main#default-libdir"));
av2[3]=lf[108];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4227 in k2866 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2802 in k2798 in k2794 in k2788 in k1504 in ... */
static void C_ccall f_4229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4229,2,av);}
/* egg-environment.scm:77: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[49]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[10],C_text("main#default-bindir"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4231 in k2862 in k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2802 in k2798 in k2794 in k2788 in k1504 in k1501 in ... */
static void C_ccall f_4233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4233,2,av);}
/* egg-environment.scm:74: scheme#string-append */
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[10],C_text("main#default-bindir"));
av2[3]=lf[110];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4235 in k2858 in k2854 in k4242 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2802 in k2798 in k2794 in k2788 in k1504 in k1501 in k1498 in ... */
static void C_ccall f_4237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4237,2,av);}
/* egg-environment.scm:71: scheme#string-append */
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[10],C_text("main#default-bindir"));
av2[3]=lf[111];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4242 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2802 in k2798 in k2794 in k2788 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in ... */
static void C_ccall f_4244(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4244,2,av);}
a=C_alloc(6);
t2=C_eqp(t1,lf[11]);
t3=(C_truep(t2)?C_mk_bool(C_WINDOWS_SHELL):lf[12]);
t4=C_mutate(&lf[13] /* (set! main#default-platform ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2856,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_PREFIX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

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
if(C_unlikely(!C_demand_2(380))){
C_save(t1);
C_rereclaim2(380*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,117);
lf[0]=C_h_intern(&lf[0],5, C_text("main#"));
lf[2]=C_h_intern(&lf[2],5, C_text("foldr"));
lf[11]=C_h_intern(&lf[11],7, C_text("windows"));
lf[12]=C_h_intern(&lf[12],4, C_text("unix"));
lf[18]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010egg-info"));
lf[20]=C_h_intern(&lf[20],30, C_text("chicken.file#directory-exists\077"));
lf[24]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004sudo"));
lf[27]=C_h_intern(&lf[27],6, C_text("target"));
lf[28]=C_h_intern(&lf[28],48, C_text("chicken.process-context#get-environment-variable"));
lf[29]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032CHICKEN_INSTALL_REPOSITORY"));
lf[30]=C_h_intern(&lf[30],4, C_text("host"));
lf[32]=C_h_intern(&lf[32],20, C_text("chicken.base#warning"));
lf[33]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023file does not exist"));
lf[34]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024deleting file failed"));
lf[35]=C_h_intern(&lf[35],22, C_text("chicken.process#system"));
lf[36]=C_h_intern(&lf[36],20, C_text("scheme#string-append"));
lf[37]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015 rm -f -r -- "));
lf[38]=C_h_intern(&lf[38],18, C_text("chicken.process#qs"));
lf[39]=C_h_intern(&lf[39],29, C_text("chicken.file#delete-directory"));
lf[40]=C_h_intern(&lf[40],24, C_text("chicken.file#delete-file"));
lf[41]=C_h_intern(&lf[41],25, C_text("chicken.file#file-exists\077"));
lf[42]=C_h_intern(&lf[42],34, C_text("chicken.base#implicit-exit-handler"));
lf[43]=C_h_intern(&lf[43],18, C_text("chicken.base#print"));
lf[44]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022nothing to remove."));
lf[45]=C_h_intern(&lf[45],8, C_text("for-each"));
lf[46]=C_h_intern(&lf[46],15, C_text("installed-files"));
lf[47]=C_h_intern(&lf[47],27, C_text("scheme#with-input-from-file"));
lf[48]=C_h_intern(&lf[48],11, C_text("scheme#read"));
lf[49]=C_h_intern(&lf[49],30, C_text("chicken.pathname#make-pathname"));
lf[50]=C_h_intern(&lf[50],35, C_text("chicken.pathname#pathname-extension"));
lf[51]=C_h_intern(&lf[51],30, C_text("chicken.pathname#pathname-file"));
lf[52]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007chicken"));
lf[53]=C_h_intern(&lf[53],35, C_text("chicken.pathname#pathname-directory"));
lf[54]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011removing "));
lf[55]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003yes"));
lf[56]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002no"));
lf[57]=C_h_intern(&lf[57],17, C_text("chicken.base#exit"));
lf[58]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010aborted."));
lf[59]=C_h_intern(&lf[59],16, C_text("\003syslist->string"));
lf[60]=C_h_intern(&lf[60],14, C_text("scheme#reverse"));
lf[61]=C_h_intern(&lf[61],16, C_text("\003sysstring->list"));
lf[62]=C_h_intern(&lf[62],18, C_text("chicken.base#error"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376B\000\000$EOF - use `-force\047 to proceed anyway"));
lf[64]=C_h_intern(&lf[64],20, C_text("chicken.io#read-line"));
lf[65]=C_h_intern(&lf[65],25, C_text("chicken.base#flush-output"));
lf[66]=C_h_intern(&lf[66],14, C_text("scheme#display"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376B\000\000!Do you want to proceed\077 (yes/no) "));
lf[68]=C_h_intern(&lf[68],33, C_text("chicken.string#string-intersperse"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376B\000\000+About to delete the following extensions:\012\012"));
lf[71]=C_h_intern(&lf[71],3, C_text("map"));
lf[72]=C_h_intern(&lf[72],13, C_text("scheme#append"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002  "));
lf[74]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\012"));
lf[75]=C_h_intern(&lf[75],15, C_text("scheme#string=\077"));
lf[76]=C_h_intern(&lf[76],30, C_text("chicken.irregex#irregex-search"));
lf[77]=C_h_intern(&lf[77],23, C_text("chicken.irregex#irregex"));
lf[78]=C_h_intern(&lf[78],25, C_text("chicken.irregex#glob->sre"));
lf[79]=C_h_intern(&lf[79],17, C_text("chicken.file#glob"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\052"));
lf[81]=C_decode_literal(C_heaptop,C_text("\376B\000\0007CHICKEN_INSTALL_REPOSITORY must be an absolute pathname"));
lf[82]=C_h_intern(&lf[82],35, C_text("chicken.pathname#absolute-pathname\077"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032CHICKEN_INSTALL_REPOSITORY"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376B\000\002,usage: chicken-uninstall [OPTION ...] [NAME ...]\012\012  -h   -help             "
"       show this message and exit\012       -version                 show version a"
"nd exit\012       -force                   don\047t ask, delete whatever matches\012     "
"  -match                   treat NAME as a glob pattern\012  -s   -sudo            "
"        use external command to elevate privileges for deleting files\012       -ho"
"st                    when cross-compiling, uninstall host extensions only\012     "
"  -target                  when cross-compiling, uninstall target extensions onl"
"y"));
lf[85]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-help"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-version"));
lf[87]=C_h_intern(&lf[87],32, C_text("chicken.platform#chicken-version"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007-target"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-host"));
lf[90]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006-force"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006-match"));
lf[92]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-s"));
lf[93]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-sudo"));
lf[94]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000s\376\003\000\000\002\376\377\012\000\000p\376\377\016"));
lf[95]=C_h_intern(&lf[95],16, C_text("scheme#substring"));
lf[96]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-h"));
lf[97]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006--help"));
lf[98]=C_h_intern(&lf[98],46, C_text("chicken.process-context#command-line-arguments"));
lf[99]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004SUDO"));
lf[100]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020.chicken-install"));
lf[101]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005cache"));
lf[102]=C_h_intern(&lf[102],41, C_text("chicken.process-context#current-directory"));
lf[103]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013USERPROFILE"));
lf[104]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004HOME"));
lf[105]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021CHICKEN_EGG_CACHE"));
lf[106]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011/chicken/"));
lf[107]=C_h_intern(&lf[107],18, C_text("\003sysfixnum->string"));
lf[108]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011/chicken/"));
lf[109]=C_h_intern(&lf[109],17, C_text("\003syspeek-c-string"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[111]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[112]=C_h_intern(&lf[112],30, C_text("chicken.platform#software-type"));
lf[113]=C_h_intern(&lf[113],25, C_text("chicken.platform#feature\077"));
lf[114]=C_h_intern(&lf[114],14, C_text("\000cross-chicken"));
lf[115]=C_h_intern(&lf[115],28, C_text("\003sysregister-compiled-module"));
lf[116]=C_h_intern(&lf[116],4, C_text("main"));
C_register_lf2(lf,117,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1476,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[168] = {
{C_text("f4431:chicken_2duninstall_2escm"),(void*)f4431},
{C_text("f4436:chicken_2duninstall_2escm"),(void*)f4436},
{C_text("f4443:chicken_2duninstall_2escm"),(void*)f4443},
{C_text("f4450:chicken_2duninstall_2escm"),(void*)f4450},
{C_text("f_1476:chicken_2duninstall_2escm"),(void*)f_1476},
{C_text("f_1479:chicken_2duninstall_2escm"),(void*)f_1479},
{C_text("f_1482:chicken_2duninstall_2escm"),(void*)f_1482},
{C_text("f_1485:chicken_2duninstall_2escm"),(void*)f_1485},
{C_text("f_1488:chicken_2duninstall_2escm"),(void*)f_1488},
{C_text("f_1491:chicken_2duninstall_2escm"),(void*)f_1491},
{C_text("f_1494:chicken_2duninstall_2escm"),(void*)f_1494},
{C_text("f_1497:chicken_2duninstall_2escm"),(void*)f_1497},
{C_text("f_1500:chicken_2duninstall_2escm"),(void*)f_1500},
{C_text("f_1503:chicken_2duninstall_2escm"),(void*)f_1503},
{C_text("f_1506:chicken_2duninstall_2escm"),(void*)f_1506},
{C_text("f_1883:chicken_2duninstall_2escm"),(void*)f_1883},
{C_text("f_1905:chicken_2duninstall_2escm"),(void*)f_1905},
{C_text("f_1917:chicken_2duninstall_2escm"),(void*)f_1917},
{C_text("f_1927:chicken_2duninstall_2escm"),(void*)f_1927},
{C_text("f_1975:chicken_2duninstall_2escm"),(void*)f_1975},
{C_text("f_1993:chicken_2duninstall_2escm"),(void*)f_1993},
{C_text("f_2003:chicken_2duninstall_2escm"),(void*)f_2003},
{C_text("f_2016:chicken_2duninstall_2escm"),(void*)f_2016},
{C_text("f_2030:chicken_2duninstall_2escm"),(void*)f_2030},
{C_text("f_2078:chicken_2duninstall_2escm"),(void*)f_2078},
{C_text("f_2092:chicken_2duninstall_2escm"),(void*)f_2092},
{C_text("f_2105:chicken_2duninstall_2escm"),(void*)f_2105},
{C_text("f_2117:chicken_2duninstall_2escm"),(void*)f_2117},
{C_text("f_2126:chicken_2duninstall_2escm"),(void*)f_2126},
{C_text("f_2134:chicken_2duninstall_2escm"),(void*)f_2134},
{C_text("f_2141:chicken_2duninstall_2escm"),(void*)f_2141},
{C_text("f_2155:chicken_2duninstall_2escm"),(void*)f_2155},
{C_text("f_2790:chicken_2duninstall_2escm"),(void*)f_2790},
{C_text("f_2796:chicken_2duninstall_2escm"),(void*)f_2796},
{C_text("f_2800:chicken_2duninstall_2escm"),(void*)f_2800},
{C_text("f_2804:chicken_2duninstall_2escm"),(void*)f_2804},
{C_text("f_2808:chicken_2duninstall_2escm"),(void*)f_2808},
{C_text("f_2812:chicken_2duninstall_2escm"),(void*)f_2812},
{C_text("f_2816:chicken_2duninstall_2escm"),(void*)f_2816},
{C_text("f_2820:chicken_2duninstall_2escm"),(void*)f_2820},
{C_text("f_2824:chicken_2duninstall_2escm"),(void*)f_2824},
{C_text("f_2828:chicken_2duninstall_2escm"),(void*)f_2828},
{C_text("f_2832:chicken_2duninstall_2escm"),(void*)f_2832},
{C_text("f_2836:chicken_2duninstall_2escm"),(void*)f_2836},
{C_text("f_2840:chicken_2duninstall_2escm"),(void*)f_2840},
{C_text("f_2844:chicken_2duninstall_2escm"),(void*)f_2844},
{C_text("f_2848:chicken_2duninstall_2escm"),(void*)f_2848},
{C_text("f_2856:chicken_2duninstall_2escm"),(void*)f_2856},
{C_text("f_2860:chicken_2duninstall_2escm"),(void*)f_2860},
{C_text("f_2864:chicken_2duninstall_2escm"),(void*)f_2864},
{C_text("f_2868:chicken_2duninstall_2escm"),(void*)f_2868},
{C_text("f_2872:chicken_2duninstall_2escm"),(void*)f_2872},
{C_text("f_2876:chicken_2duninstall_2escm"),(void*)f_2876},
{C_text("f_2880:chicken_2duninstall_2escm"),(void*)f_2880},
{C_text("f_2884:chicken_2duninstall_2escm"),(void*)f_2884},
{C_text("f_2888:chicken_2duninstall_2escm"),(void*)f_2888},
{C_text("f_2892:chicken_2duninstall_2escm"),(void*)f_2892},
{C_text("f_2896:chicken_2duninstall_2escm"),(void*)f_2896},
{C_text("f_2900:chicken_2duninstall_2escm"),(void*)f_2900},
{C_text("f_2904:chicken_2duninstall_2escm"),(void*)f_2904},
{C_text("f_2908:chicken_2duninstall_2escm"),(void*)f_2908},
{C_text("f_2912:chicken_2duninstall_2escm"),(void*)f_2912},
{C_text("f_2916:chicken_2duninstall_2escm"),(void*)f_2916},
{C_text("f_2920:chicken_2duninstall_2escm"),(void*)f_2920},
{C_text("f_2931:chicken_2duninstall_2escm"),(void*)f_2931},
{C_text("f_2940:chicken_2duninstall_2escm"),(void*)f_2940},
{C_text("f_2964:chicken_2duninstall_2escm"),(void*)f_2964},
{C_text("f_2975:chicken_2duninstall_2escm"),(void*)f_2975},
{C_text("f_2985:chicken_2duninstall_2escm"),(void*)f_2985},
{C_text("f_2989:chicken_2duninstall_2escm"),(void*)f_2989},
{C_text("f_2992:chicken_2duninstall_2escm"),(void*)f_2992},
{C_text("f_2998:chicken_2duninstall_2escm"),(void*)f_2998},
{C_text("f_3004:chicken_2duninstall_2escm"),(void*)f_3004},
{C_text("f_3008:chicken_2duninstall_2escm"),(void*)f_3008},
{C_text("f_3012:chicken_2duninstall_2escm"),(void*)f_3012},
{C_text("f_3016:chicken_2duninstall_2escm"),(void*)f_3016},
{C_text("f_3020:chicken_2duninstall_2escm"),(void*)f_3020},
{C_text("f_3026:chicken_2duninstall_2escm"),(void*)f_3026},
{C_text("f_3378:chicken_2duninstall_2escm"),(void*)f_3378},
{C_text("f_3383:chicken_2duninstall_2escm"),(void*)f_3383},
{C_text("f_3391:chicken_2duninstall_2escm"),(void*)f_3391},
{C_text("f_3405:chicken_2duninstall_2escm"),(void*)f_3405},
{C_text("f_3418:chicken_2duninstall_2escm"),(void*)f_3418},
{C_text("f_3421:chicken_2duninstall_2escm"),(void*)f_3421},
{C_text("f_3424:chicken_2duninstall_2escm"),(void*)f_3424},
{C_text("f_3435:chicken_2duninstall_2escm"),(void*)f_3435},
{C_text("f_3443:chicken_2duninstall_2escm"),(void*)f_3443},
{C_text("f_3447:chicken_2duninstall_2escm"),(void*)f_3447},
{C_text("f_3453:chicken_2duninstall_2escm"),(void*)f_3453},
{C_text("f_3455:chicken_2duninstall_2escm"),(void*)f_3455},
{C_text("f_3480:chicken_2duninstall_2escm"),(void*)f_3480},
{C_text("f_3492:chicken_2duninstall_2escm"),(void*)f_3492},
{C_text("f_3498:chicken_2duninstall_2escm"),(void*)f_3498},
{C_text("f_3504:chicken_2duninstall_2escm"),(void*)f_3504},
{C_text("f_3529:chicken_2duninstall_2escm"),(void*)f_3529},
{C_text("f_3540:chicken_2duninstall_2escm"),(void*)f_3540},
{C_text("f_3544:chicken_2duninstall_2escm"),(void*)f_3544},
{C_text("f_3550:chicken_2duninstall_2escm"),(void*)f_3550},
{C_text("f_3559:chicken_2duninstall_2escm"),(void*)f_3559},
{C_text("f_3564:chicken_2duninstall_2escm"),(void*)f_3564},
{C_text("f_3568:chicken_2duninstall_2escm"),(void*)f_3568},
{C_text("f_3571:chicken_2duninstall_2escm"),(void*)f_3571},
{C_text("f_3574:chicken_2duninstall_2escm"),(void*)f_3574},
{C_text("f_3577:chicken_2duninstall_2escm"),(void*)f_3577},
{C_text("f_3580:chicken_2duninstall_2escm"),(void*)f_3580},
{C_text("f_3607:chicken_2duninstall_2escm"),(void*)f_3607},
{C_text("f_3611:chicken_2duninstall_2escm"),(void*)f_3611},
{C_text("f_3630:chicken_2duninstall_2escm"),(void*)f_3630},
{C_text("f_3632:chicken_2duninstall_2escm"),(void*)f_3632},
{C_text("f_3657:chicken_2duninstall_2escm"),(void*)f_3657},
{C_text("f_3669:chicken_2duninstall_2escm"),(void*)f_3669},
{C_text("f_3696:chicken_2duninstall_2escm"),(void*)f_3696},
{C_text("f_3709:chicken_2duninstall_2escm"),(void*)f_3709},
{C_text("f_3713:chicken_2duninstall_2escm"),(void*)f_3713},
{C_text("f_3717:chicken_2duninstall_2escm"),(void*)f_3717},
{C_text("f_3721:chicken_2duninstall_2escm"),(void*)f_3721},
{C_text("f_3725:chicken_2duninstall_2escm"),(void*)f_3725},
{C_text("f_3731:chicken_2duninstall_2escm"),(void*)f_3731},
{C_text("f_3737:chicken_2duninstall_2escm"),(void*)f_3737},
{C_text("f_3748:chicken_2duninstall_2escm"),(void*)f_3748},
{C_text("f_3757:chicken_2duninstall_2escm"),(void*)f_3757},
{C_text("f_3762:chicken_2duninstall_2escm"),(void*)f_3762},
{C_text("f_3772:chicken_2duninstall_2escm"),(void*)f_3772},
{C_text("f_3787:chicken_2duninstall_2escm"),(void*)f_3787},
{C_text("f_3791:chicken_2duninstall_2escm"),(void*)f_3791},
{C_text("f_3795:chicken_2duninstall_2escm"),(void*)f_3795},
{C_text("f_3797:chicken_2duninstall_2escm"),(void*)f_3797},
{C_text("f_3816:chicken_2duninstall_2escm"),(void*)f_3816},
{C_text("f_3830:chicken_2duninstall_2escm"),(void*)f_3830},
{C_text("f_3834:chicken_2duninstall_2escm"),(void*)f_3834},
{C_text("f_3840:chicken_2duninstall_2escm"),(void*)f_3840},
{C_text("f_3853:chicken_2duninstall_2escm"),(void*)f_3853},
{C_text("f_3859:chicken_2duninstall_2escm"),(void*)f_3859},
{C_text("f_3874:chicken_2duninstall_2escm"),(void*)f_3874},
{C_text("f_3879:chicken_2duninstall_2escm"),(void*)f_3879},
{C_text("f_3890:chicken_2duninstall_2escm"),(void*)f_3890},
{C_text("f_3900:chicken_2duninstall_2escm"),(void*)f_3900},
{C_text("f_3932:chicken_2duninstall_2escm"),(void*)f_3932},
{C_text("f_3942:chicken_2duninstall_2escm"),(void*)f_3942},
{C_text("f_3945:chicken_2duninstall_2escm"),(void*)f_3945},
{C_text("f_3952:chicken_2duninstall_2escm"),(void*)f_3952},
{C_text("f_3970:chicken_2duninstall_2escm"),(void*)f_3970},
{C_text("f_3981:chicken_2duninstall_2escm"),(void*)f_3981},
{C_text("f_3988:chicken_2duninstall_2escm"),(void*)f_3988},
{C_text("f_4052:chicken_2duninstall_2escm"),(void*)f_4052},
{C_text("f_4061:chicken_2duninstall_2escm"),(void*)f_4061},
{C_text("f_4067:chicken_2duninstall_2escm"),(void*)f_4067},
{C_text("f_4074:chicken_2duninstall_2escm"),(void*)f_4074},
{C_text("f_4086:chicken_2duninstall_2escm"),(void*)f_4086},
{C_text("f_4090:chicken_2duninstall_2escm"),(void*)f_4090},
{C_text("f_4127:chicken_2duninstall_2escm"),(void*)f_4127},
{C_text("f_4135:chicken_2duninstall_2escm"),(void*)f_4135},
{C_text("f_4174:chicken_2duninstall_2escm"),(void*)f_4174},
{C_text("f_4180:chicken_2duninstall_2escm"),(void*)f_4180},
{C_text("f_4184:chicken_2duninstall_2escm"),(void*)f_4184},
{C_text("f_4195:chicken_2duninstall_2escm"),(void*)f_4195},
{C_text("f_4198:chicken_2duninstall_2escm"),(void*)f_4198},
{C_text("f_4201:chicken_2duninstall_2escm"),(void*)f_4201},
{C_text("f_4211:chicken_2duninstall_2escm"),(void*)f_4211},
{C_text("f_4215:chicken_2duninstall_2escm"),(void*)f_4215},
{C_text("f_4219:chicken_2duninstall_2escm"),(void*)f_4219},
{C_text("f_4224:chicken_2duninstall_2escm"),(void*)f_4224},
{C_text("f_4229:chicken_2duninstall_2escm"),(void*)f_4229},
{C_text("f_4233:chicken_2duninstall_2escm"),(void*)f_4233},
{C_text("f_4237:chicken_2duninstall_2escm"),(void*)f_4237},
{C_text("f_4244:chicken_2duninstall_2escm"),(void*)f_4244},
{C_text("toplevel:chicken_2duninstall_2escm"),(void*)C_toplevel},
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
o|hiding unexported module binding: main#partition 
o|hiding unexported module binding: main#span 
o|hiding unexported module binding: main#take 
o|hiding unexported module binding: main#drop 
o|hiding unexported module binding: main#split-at 
o|hiding unexported module binding: main#append-map 
o|hiding unexported module binding: main#every 
o|hiding unexported module binding: main#any 
o|hiding unexported module binding: main#cons* 
o|hiding unexported module binding: main#concatenate 
o|hiding unexported module binding: main#delete 
o|hiding unexported module binding: main#first 
o|hiding unexported module binding: main#second 
o|hiding unexported module binding: main#third 
o|hiding unexported module binding: main#fourth 
o|hiding unexported module binding: main#fifth 
o|hiding unexported module binding: main#delete-duplicates 
o|hiding unexported module binding: main#alist-cons 
o|hiding unexported module binding: main#filter 
o|hiding unexported module binding: main#filter-map 
o|hiding unexported module binding: main#remove 
o|hiding unexported module binding: main#unzip1 
o|hiding unexported module binding: main#last 
o|hiding unexported module binding: main#list-index 
o|hiding unexported module binding: main#lset-adjoin/eq? 
o|hiding unexported module binding: main#lset-difference/eq? 
o|hiding unexported module binding: main#lset-union/eq? 
o|hiding unexported module binding: main#lset-intersection/eq? 
o|hiding unexported module binding: main#list-tabulate 
o|hiding unexported module binding: main#lset<=/eq? 
o|hiding unexported module binding: main#lset=/eq? 
o|hiding unexported module binding: main#length+ 
o|hiding unexported module binding: main#find 
o|hiding unexported module binding: main#find-tail 
o|hiding unexported module binding: main#iota 
o|hiding unexported module binding: main#make-list 
o|hiding unexported module binding: main#posq 
o|hiding unexported module binding: main#posv 
o|hiding unexported module binding: main#staticbuild 
o|hiding unexported module binding: main#debugbuild 
o|hiding unexported module binding: main#cross-chicken 
o|hiding unexported module binding: main#binary-version 
o|hiding unexported module binding: main#major-version 
o|hiding unexported module binding: main#default-cc 
o|hiding unexported module binding: main#default-cxx 
o|hiding unexported module binding: main#default-install-program 
o|hiding unexported module binding: main#default-cflags 
o|hiding unexported module binding: main#default-ldflags 
o|hiding unexported module binding: main#default-install-program-executable-flags 
o|hiding unexported module binding: main#default-install-program-data-flags 
o|hiding unexported module binding: main#default-libs 
o|hiding unexported module binding: main#default-libdir 
o|hiding unexported module binding: main#default-runlibdir 
o|hiding unexported module binding: main#default-slibdir 
o|hiding unexported module binding: main#default-incdir 
o|hiding unexported module binding: main#default-bindir 
o|hiding unexported module binding: main#default-sharedir 
o|hiding unexported module binding: main#default-platform 
o|hiding unexported module binding: main#default-prefix 
o|hiding unexported module binding: main#default-bindir 
o|hiding unexported module binding: main#default-csc 
o|hiding unexported module binding: main#default-csi 
o|hiding unexported module binding: main#default-builder 
o|hiding unexported module binding: main#host-repo 
o|hiding unexported module binding: main#host-libdir 
o|hiding unexported module binding: main#host-bindir 
o|hiding unexported module binding: main#host-incdir 
o|hiding unexported module binding: main#host-sharedir 
o|hiding unexported module binding: main#host-libs 
o|hiding unexported module binding: main#host-cflags 
o|hiding unexported module binding: main#host-ldflags 
o|hiding unexported module binding: main#host-cc 
o|hiding unexported module binding: main#host-cxx 
o|hiding unexported module binding: main#target-repo 
o|hiding unexported module binding: main#target-run-repo 
o|hiding unexported module binding: main#+egg-info-extension+ 
o|hiding unexported module binding: main#+version-file+ 
o|hiding unexported module binding: main#+timestamp-file+ 
o|hiding unexported module binding: main#+status-file+ 
o|hiding unexported module binding: main#+egg-extension+ 
o|hiding unexported module binding: main#validate-environment 
o|hiding unexported module binding: main#destination-repository 
o|hiding unexported module binding: main#probe-dir 
o|hiding unexported module binding: main#cache-directory 
o|hiding unexported module binding: main#locate-egg-file 
o|hiding unexported module binding: main#load-egg-info 
o|hiding unexported module binding: main#get-egg-property 
o|hiding unexported module binding: main#get-egg-property* 
o|hiding unexported module binding: main#get-extension-property/internal 
o|hiding unexported module binding: main#get-extension-property 
o|hiding unexported module binding: main#get-extension-property* 
o|hiding unexported module binding: main#host-extensions 
o|hiding unexported module binding: main#target-extensions 
o|hiding unexported module binding: main#force-uninstall 
o|hiding unexported module binding: main#sudo-uninstall 
o|hiding unexported module binding: main#sudo-program 
o|hiding unexported module binding: main#repo-path 
o|hiding unexported module binding: main#grep 
o|hiding unexported module binding: main#gather-eggs 
o|hiding unexported module binding: main#fini 
o|hiding unexported module binding: main#ask 
o|hiding unexported module binding: main#trim 
o|hiding unexported module binding: main#remove-extension 
o|hiding unexported module binding: main#delete-installed-file 
o|hiding unexported module binding: main#uninstall 
o|hiding unexported module binding: main#usage 
o|hiding unexported module binding: main#short-options 
o|hiding unexported module binding: main#main 
S|applied compiler syntax:
S|  for-each		2
S|  foldl		3
S|  map		7
S|  foldr		3
o|eliminated procedure checks: 73 
o|specializations:
o|  1 (scheme#> fixnum fixnum)
o|  1 (scheme#char=? char char)
o|  1 (scheme#string-ref string fixnum)
o|  1 (scheme#positive? fixnum)
o|  2 (scheme#string-length string)
o|  1 (scheme#zero? integer)
o|  10 (scheme#string=? string string)
o|  2 (scheme#cdar (pair pair *))
o|  5 (scheme#eqv? * (or eof null fixnum char boolean symbol))
o|  2 (scheme#number->string fixnum)
o|  1 (scheme#eqv? * *)
o|  5 (##sys#check-list (or pair list) *)
o|  37 (scheme#cdr pair)
o|  9 (scheme#car pair)
(o e)|safe calls: 393 
(o e)|assignments to immediate values: 3 
o|removed side-effect free assignment to unused variable: main#partition 
o|removed side-effect free assignment to unused variable: main#span 
o|removed side-effect free assignment to unused variable: main#drop 
o|removed side-effect free assignment to unused variable: main#split-at 
o|removed side-effect free assignment to unused variable: main#append-map 
o|inlining procedure: k1888 
o|inlining procedure: k1888 
o|inlining procedure: k1919 
o|inlining procedure: k1919 
o|removed side-effect free assignment to unused variable: main#cons* 
o|removed side-effect free assignment to unused variable: main#first 
o|removed side-effect free assignment to unused variable: main#second 
o|removed side-effect free assignment to unused variable: main#third 
o|removed side-effect free assignment to unused variable: main#fourth 
o|removed side-effect free assignment to unused variable: main#fifth 
o|removed side-effect free assignment to unused variable: main#alist-cons 
o|inlining procedure: k2136 
o|inlining procedure: k2136 
o|inlining procedure: k2128 
o|inlining procedure: k2128 
o|removed side-effect free assignment to unused variable: main#filter-map 
o|removed side-effect free assignment to unused variable: main#remove 
o|removed side-effect free assignment to unused variable: main#unzip1 
o|removed side-effect free assignment to unused variable: main#last 
o|removed side-effect free assignment to unused variable: main#list-index 
o|removed side-effect free assignment to unused variable: main#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: main#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: main#lset-union/eq? 
o|removed side-effect free assignment to unused variable: main#lset-intersection/eq? 
o|inlining procedure: k2527 
o|inlining procedure: k2527 
o|removed side-effect free assignment to unused variable: main#lset<=/eq? 
o|removed side-effect free assignment to unused variable: main#lset=/eq? 
o|removed side-effect free assignment to unused variable: main#length+ 
o|removed side-effect free assignment to unused variable: main#find 
o|removed side-effect free assignment to unused variable: main#find-tail 
o|removed side-effect free assignment to unused variable: main#iota 
o|removed side-effect free assignment to unused variable: main#make-list 
o|removed side-effect free assignment to unused variable: main#posq 
o|removed side-effect free assignment to unused variable: main#posv 
o|removed side-effect free assignment to unused variable: main#default-cc 
o|removed side-effect free assignment to unused variable: main#default-cxx 
o|removed side-effect free assignment to unused variable: main#default-install-program 
o|removed side-effect free assignment to unused variable: main#default-cflags 
o|removed side-effect free assignment to unused variable: main#default-ldflags 
o|removed side-effect free assignment to unused variable: main#default-install-program-executable-flags 
o|removed side-effect free assignment to unused variable: main#default-install-program-data-flags 
o|removed side-effect free assignment to unused variable: main#default-libs 
o|removed side-effect free assignment to unused variable: main#default-slibdir 
o|removed side-effect free assignment to unused variable: main#default-incdir 
o|removed side-effect free assignment to unused variable: main#default-sharedir 
o|removed side-effect free assignment to unused variable: main#default-prefix 
o|removed side-effect free assignment to unused variable: main#default-csc 
o|removed side-effect free assignment to unused variable: main#default-csi 
o|removed side-effect free assignment to unused variable: main#default-builder 
o|removed side-effect free assignment to unused variable: main#host-libdir 
o|removed side-effect free assignment to unused variable: main#host-bindir 
o|removed side-effect free assignment to unused variable: main#host-incdir 
o|removed side-effect free assignment to unused variable: main#host-sharedir 
o|removed side-effect free assignment to unused variable: main#host-libs 
o|removed side-effect free assignment to unused variable: main#host-cflags 
o|removed side-effect free assignment to unused variable: main#host-ldflags 
o|removed side-effect free assignment to unused variable: main#host-cc 
o|removed side-effect free assignment to unused variable: main#host-cxx 
o|removed side-effect free assignment to unused variable: main#+version-file+ 
o|removed side-effect free assignment to unused variable: main#+timestamp-file+ 
o|removed side-effect free assignment to unused variable: main#+status-file+ 
o|removed side-effect free assignment to unused variable: main#+egg-extension+ 
o|inlining procedure: k2977 
o|inlining procedure: k2977 
o|removed side-effect free assignment to unused variable: main#cache-directory 
o|removed side-effect free assignment to unused variable: main#get-egg-property 
o|inlining procedure: k3084 
o|inlining procedure: k3102 
o|inlining procedure: k3102 
o|inlining procedure: k3119 
o|inlining procedure: k3119 
o|substituted constant variable: a3160 
o|substituted constant variable: a3162 
o|inlining procedure: k3084 
o|inlining procedure: k3170 
o|inlining procedure: k3170 
o|inlining procedure: k3180 
o|inlining procedure: k3198 
o|inlining procedure: k3198 
o|inlining procedure: k3215 
o|inlining procedure: k3215 
o|inlining procedure: k3245 
o|inlining procedure: k3245 
o|substituted constant variable: a3274 
o|substituted constant variable: a3276 
o|substituted constant variable: a3278 
o|inlining procedure: k3180 
o|removed side-effect free assignment to unused variable: main#get-extension-property 
o|removed side-effect free assignment to unused variable: main#get-extension-property* 
o|removed side-effect free assignment to unused variable: main#target-extensions 
o|contracted procedure: "(chicken-uninstall.scm:57) main#destination-repository" 
o|inlining procedure: k2953 
o|inlining procedure: k2953 
o|inlining procedure: k3392 
o|inlining procedure: k3392 
o|inlining procedure: k3799 
o|inlining procedure: k3799 
o|inlining procedure: k3817 
o|inlining procedure: k3817 
o|inlining procedure: k3835 
o|inlining procedure: k3835 
o|contracted procedure: "(chicken-uninstall.scm:199) main#main" 
o|inlining procedure: k3934 
o|contracted procedure: "(chicken-uninstall.scm:163) main#uninstall" 
o|inlining procedure: k3860 
o|inlining procedure: k3860 
o|inlining procedure: k3892 
o|contracted procedure: "(chicken-uninstall.scm:134) g10921099" 
o|contracted procedure: "(chicken-uninstall.scm:137) main#remove-extension" 
o|inlining procedure: k3732 
o|inlining procedure: k3764 
o|contracted procedure: "(chicken-uninstall.scm:111) g10531060" 
o|inlining procedure: k3743 
o|inlining procedure: k3743 
o|inlining procedure: k3764 
o|contracted procedure: "(chicken-uninstall.scm:109) main#get-egg-property*" 
o|inlining procedure: k3066 
o|inlining procedure: k3066 
o|contracted procedure: "(chicken-uninstall.scm:109) main#load-egg-info" 
o|contracted procedure: "(egg-information.scm:37) main#locate-egg-file" 
o|inlining procedure: k2999 
o|inlining procedure: k2999 
o|inlining procedure: k3732 
o|inlining procedure: k3892 
o|propagated global variable: tmp10861088 main#force-uninstall 
o|propagated global variable: tmp10861088 main#force-uninstall 
o|contracted procedure: "(chicken-uninstall.scm:133) main#ask" 
o|inlining procedure: k3584 
o|inlining procedure: k3584 
o|substituted constant variable: a3591 
o|contracted procedure: "(chicken-uninstall.scm:96) main#fini" 
o|contracted procedure: "(chicken-uninstall.scm:94) main#trim" 
o|inlining procedure: k3671 
o|inlining procedure: k3671 
o|inlining procedure: k3634 
o|contracted procedure: "(chicken-uninstall.scm:86) g9961005" 
o|inlining procedure: k3634 
o|contracted procedure: "(chicken-uninstall.scm:130) main#gather-eggs" 
o|contracted procedure: "(chicken-uninstall.scm:77) main#delete-duplicates" 
o|inlining procedure: k2080 
o|inlining procedure: k2080 
o|contracted procedure: "(mini-srfi-1.scm:123) main#delete" 
o|inlining procedure: k2005 
o|inlining procedure: k2005 
o|contracted procedure: "(chicken-uninstall.scm:71) main#grep" 
o|propagated global variable: g914915 chicken.irregex#irregex-search 
o|contracted procedure: "(chicken-uninstall.scm:69) main#concatenate" 
o|inlining procedure: k1977 
o|inlining procedure: k1977 
o|inlining procedure: k3457 
o|inlining procedure: k3457 
o|inlining procedure: k3506 
o|inlining procedure: k3506 
o|contracted procedure: "(chicken-uninstall.scm:162) main#validate-environment" 
o|inlining procedure: k2932 
o|inlining procedure: k2932 
o|inlining procedure: k3934 
o|substituted constant variable: a3978 
o|inlining procedure: k3974 
o|inlining procedure: k3974 
o|substituted constant variable: a3993 
o|substituted constant variable: a4004 
o|removed side-effect free assignment to unused variable: main#target-extensions 
o|inlining procedure: k4000 
o|inlining procedure: k4000 
o|substituted constant variable: a4015 
o|substituted constant variable: a4026 
o|inlining procedure: k4022 
o|inlining procedure: k4022 
o|substituted constant variable: a4037 
o|inlining procedure: k4047 
o|inlining procedure: k4062 
o|inlining procedure: k4092 
o|contracted procedure: "(chicken-uninstall.scm:193) g11621171" 
o|inlining procedure: k4092 
o|inlining procedure: k4062 
o|substituted constant variable: main#short-options 
o|substituted constant variable: a4143 
o|inlining procedure: k4047 
o|substituted constant variable: a4161 
o|substituted constant variable: a4158 
o|substituted constant variable: a4164 
o|substituted constant variable: a4166 
o|inlining procedure: k4167 
o|inlining procedure: k4167 
o|substituted constant variable: a4171 
o|inlining procedure: k4196 
o|inlining procedure: k4196 
o|replaced variables: 311 
o|removed binding forms: 178 
o|substituted constant variable: r21294264 
o|removed side-effect free assignment to unused variable: main#list-tabulate 
o|substituted constant variable: r29784268 
o|removed side-effect free assignment to unused variable: main#get-extension-property/internal 
o|substituted constant variable: rest690692 
o|substituted constant variable: r33934288 
o|removed side-effect free assignment to unused variable: main#short-options 
o|substituted constant variable: rest788791 
o|substituted constant variable: prop790 
o|substituted constant variable: r37334308 
o|substituted constant variable: code984 
o|substituted constant variable: r36724312 
o|substituted constant variable: r19784320 
o|contracted procedure: "(chicken-uninstall.scm:75) main#any" 
o|substituted constant variable: r19204259 
o|contracted procedure: "(chicken-uninstall.scm:192) main#every" 
o|inlining procedure: k4196 
o|replaced variables: 9 
o|removed binding forms: 330 
o|removed conditional forms: 1 
o|inlining procedure: k3063 
o|inlining procedure: k2938 
o|inlining procedure: "(chicken-uninstall.scm:161) main#usage" 
o|inlining procedure: "(chicken-uninstall.scm:169) main#usage" 
o|inlining procedure: "(chicken-uninstall.scm:195) main#usage" 
o|inlining procedure: "(chicken-uninstall.scm:196) main#usage" 
o|replaced variables: 16 
o|removed binding forms: 26 
o|removed side-effect free assignment to unused variable: main#usage 
o|substituted constant variable: r30644401 
o|substituted constant variable: r30644401 
o|substituted constant variable: r30644401 
o|substituted constant variable: code11094429 
o|substituted constant variable: code11094434 
o|substituted constant variable: code11094441 
o|substituted constant variable: code11094448 
o|removed binding forms: 17 
o|removed conditional forms: 1 
o|removed binding forms: 6 
o|simplifications: ((if . 12) (##core#call . 98)) 
o|  call simplifications:
o|    ##sys#size	2
o|    chicken.fixnum#fx>
o|    scheme#memq
o|    scheme#string
o|    scheme#equal?
o|    scheme#list	7
o|    ##sys#setslot	4
o|    scheme#eof-object?
o|    scheme#string->list	2
o|    scheme#list->string
o|    scheme#char-whitespace?
o|    scheme#string=?	3
o|    scheme#assq
o|    scheme#cdr
o|    scheme#not	4
o|    scheme#null?	11
o|    scheme#car	9
o|    scheme#eq?	4
o|    ##sys#check-list	5
o|    scheme#pair?	7
o|    ##sys#slot	18
o|    scheme#cons	13
o|contracted procedure: k2119 
o|contracted procedure: k2131 
o|contracted procedure: k2149 
o|contracted procedure: k2157 
o|contracted procedure: k4238 
o|contracted procedure: k2850 
o|contracted procedure: k3379 
o|contracted procedure: k2968 
o|contracted procedure: k2950 
o|contracted procedure: k2956 
o|contracted procedure: k3392 
o|contracted procedure: k3802 
o|contracted procedure: k3811 
o|contracted procedure: k3820 
o|contracted procedure: k3937 
o|contracted procedure: k3863 
o|contracted procedure: k3883 
o|contracted procedure: k3895 
o|contracted procedure: k3905 
o|contracted procedure: k3909 
o|contracted procedure: k3752 
o|contracted procedure: k3767 
o|contracted procedure: k3777 
o|contracted procedure: k3781 
o|contracted procedure: k3072 
o|contracted procedure: k3057 
o|contracted procedure: k3060 
o|contracted procedure: k3063 
o|contracted procedure: k3581 
o|contracted procedure: k3674 
o|contracted procedure: k3700 
o|contracted procedure: k3680 
o|contracted procedure: k3598 
o|contracted procedure: k3613 
o|contracted procedure: k3617 
o|contracted procedure: k3625 
o|contracted procedure: k3637 
o|contracted procedure: k3640 
o|contracted procedure: k3643 
o|contracted procedure: k3651 
o|contracted procedure: k3659 
o|contracted procedure: k3413 
o|contracted procedure: k2083 
o|contracted procedure: k2086 
o|contracted procedure: k2096 
o|contracted procedure: k2008 
o|contracted procedure: k2034 
o|contracted procedure: k3432 
o|contracted procedure: k3448 
o|contracted procedure: k1980 
o|contracted procedure: k1987 
o|contracted procedure: k3460 
o|contracted procedure: k3463 
o|contracted procedure: k3466 
o|contracted procedure: k3474 
o|contracted procedure: k3482 
o|contracted procedure: k1922 
o|contracted procedure: k1937 
o|contracted procedure: k3509 
o|contracted procedure: k3512 
o|contracted procedure: k3515 
o|contracted procedure: k3523 
o|contracted procedure: k3531 
o|contracted procedure: k2935 
o|contracted procedure: k3953 
o|contracted procedure: k3959 
o|contracted procedure: k3965 
o|contracted procedure: k4038 
o|contracted procedure: k4140 
o|contracted procedure: k4056 
o|contracted procedure: k4076 
o|contracted procedure: k4095 
o|contracted procedure: k4117 
o|contracted procedure: k4113 
o|contracted procedure: k4098 
o|contracted procedure: k4101 
o|contracted procedure: k4109 
o|contracted procedure: k1885 
o|contracted procedure: k1894 
o|contracted procedure: k1907 
o|contracted procedure: k4151 
o|contracted procedure: k4155 
o|inlining procedure: k4189 
o|inlining procedure: k4189 
o|inlining procedure: k4189 
o|contracted procedure: k4246 
o|contracted procedure: k4250 
o|contracted procedure: k4254 
o|simplifications: ((let . 20)) 
o|removed binding forms: 85 
o|substituted constant variable: r4247 
o|substituted constant variable: r4251 
o|substituted constant variable: r4247 
o|substituted constant variable: r4251 
o|substituted constant variable: r4255 
o|replaced variables: 33 
o|removed binding forms: 1 
o|simplifications: ((if . 1)) 
o|removed binding forms: 25 
o|customizable procedures: (main#probe-dir k3968 k4050 loop241 map-loop11561181 loop1115 map-loop922939 loop254 g955964 map-loop949967 loop273 main#filter loop280 loop300 map-loop9901015 left1039 loop1022 main#repo-path k3735 for-each-loop10521063 main#delete-installed-file for-each-loop10911103 k3389 foldr317320 g322323) 
o|calls to known targets: 62 
o|identified direct recursive calls: f_2126 1 
o|identified direct recursive calls: f_3669 2 
o|identified direct recursive calls: f_1975 1 
o|identified direct recursive calls: f_4090 1 
o|fast box initializations: 15 
o|fast global references: 30 
o|fast global assignments: 25 
o|dropping unused closure argument: f_2117 
o|dropping unused closure argument: f_2975 
o|dropping unused closure argument: f_3383 
o|dropping unused closure argument: f_3797 
*/
/* end of file */

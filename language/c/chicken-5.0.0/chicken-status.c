/* Generated from chicken-status.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: chicken-status.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -output-file chicken-status.c
   uses: library eval expand file extras irregex port pathname data-structures
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
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[143];
static double C_possibly_force_alignment;


C_noret_decl(f5204)
static void C_ccall f5204(C_word c,C_word *av) C_noret;
C_noret_decl(f5211)
static void C_ccall f5211(C_word c,C_word *av) C_noret;
C_noret_decl(f5218)
static void C_ccall f5218(C_word c,C_word *av) C_noret;
C_noret_decl(f_1646)
static void C_ccall f_1646(C_word c,C_word *av) C_noret;
C_noret_decl(f_1649)
static void C_ccall f_1649(C_word c,C_word *av) C_noret;
C_noret_decl(f_1652)
static void C_ccall f_1652(C_word c,C_word *av) C_noret;
C_noret_decl(f_1655)
static void C_ccall f_1655(C_word c,C_word *av) C_noret;
C_noret_decl(f_1658)
static void C_ccall f_1658(C_word c,C_word *av) C_noret;
C_noret_decl(f_1661)
static void C_ccall f_1661(C_word c,C_word *av) C_noret;
C_noret_decl(f_1664)
static void C_ccall f_1664(C_word c,C_word *av) C_noret;
C_noret_decl(f_1667)
static void C_ccall f_1667(C_word c,C_word *av) C_noret;
C_noret_decl(f_1670)
static void C_ccall f_1670(C_word c,C_word *av) C_noret;
C_noret_decl(f_1673)
static void C_ccall f_1673(C_word c,C_word *av) C_noret;
C_noret_decl(f_1874)
static void C_fcall f_1874(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1889)
static void C_fcall f_1889(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1897)
static void C_fcall f_1897(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1905)
static void C_ccall f_1905(C_word c,C_word *av) C_noret;
C_noret_decl(f_1916)
static void C_ccall f_1916(C_word c,C_word *av) C_noret;
C_noret_decl(f_1929)
static void C_fcall f_1929(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1936)
static void C_ccall f_1936(C_word c,C_word *av) C_noret;
C_noret_decl(f_1943)
static void C_ccall f_1943(C_word c,C_word *av) C_noret;
C_noret_decl(f_1947)
static void C_ccall f_1947(C_word c,C_word *av) C_noret;
C_noret_decl(f_1959)
static void C_ccall f_1959(C_word c,C_word *av) C_noret;
C_noret_decl(f_1961)
static void C_fcall f_1961(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2008)
static void C_ccall f_2008(C_word c,C_word *av) C_noret;
C_noret_decl(f_2010)
static void C_fcall f_2010(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2050)
static void C_fcall f_2050(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2072)
static void C_ccall f_2072(C_word c,C_word *av) C_noret;
C_noret_decl(f_2078)
static void C_fcall f_2078(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2084)
static void C_fcall f_2084(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2094)
static void C_ccall f_2094(C_word c,C_word *av) C_noret;
C_noret_decl(f_2142)
static void C_fcall f_2142(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2160)
static void C_ccall f_2160(C_word c,C_word *av) C_noret;
C_noret_decl(f_2170)
static void C_fcall f_2170(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2183)
static void C_ccall f_2183(C_word c,C_word *av) C_noret;
C_noret_decl(f_2197)
static void C_ccall f_2197(C_word c,C_word *av) C_noret;
C_noret_decl(f_2239)
static void C_fcall f_2239(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2245)
static void C_fcall f_2245(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2259)
static void C_ccall f_2259(C_word c,C_word *av) C_noret;
C_noret_decl(f_2272)
static void C_ccall f_2272(C_word c,C_word *av) C_noret;
C_noret_decl(f_2284)
static void C_fcall f_2284(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2293)
static void C_fcall f_2293(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2301)
static void C_fcall f_2301(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2308)
static void C_ccall f_2308(C_word c,C_word *av) C_noret;
C_noret_decl(f_2322)
static void C_ccall f_2322(C_word c,C_word *av) C_noret;
C_noret_decl(f_2957)
static void C_ccall f_2957(C_word c,C_word *av) C_noret;
C_noret_decl(f_2963)
static void C_ccall f_2963(C_word c,C_word *av) C_noret;
C_noret_decl(f_2967)
static void C_ccall f_2967(C_word c,C_word *av) C_noret;
C_noret_decl(f_2971)
static void C_ccall f_2971(C_word c,C_word *av) C_noret;
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word *av) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word *av) C_noret;
C_noret_decl(f_2983)
static void C_ccall f_2983(C_word c,C_word *av) C_noret;
C_noret_decl(f_2987)
static void C_ccall f_2987(C_word c,C_word *av) C_noret;
C_noret_decl(f_2991)
static void C_ccall f_2991(C_word c,C_word *av) C_noret;
C_noret_decl(f_2995)
static void C_ccall f_2995(C_word c,C_word *av) C_noret;
C_noret_decl(f_2999)
static void C_ccall f_2999(C_word c,C_word *av) C_noret;
C_noret_decl(f_3003)
static void C_ccall f_3003(C_word c,C_word *av) C_noret;
C_noret_decl(f_3007)
static void C_ccall f_3007(C_word c,C_word *av) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011(C_word c,C_word *av) C_noret;
C_noret_decl(f_3015)
static void C_ccall f_3015(C_word c,C_word *av) C_noret;
C_noret_decl(f_3023)
static void C_ccall f_3023(C_word c,C_word *av) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word *av) C_noret;
C_noret_decl(f_3031)
static void C_ccall f_3031(C_word c,C_word *av) C_noret;
C_noret_decl(f_3035)
static void C_ccall f_3035(C_word c,C_word *av) C_noret;
C_noret_decl(f_3039)
static void C_ccall f_3039(C_word c,C_word *av) C_noret;
C_noret_decl(f_3043)
static void C_ccall f_3043(C_word c,C_word *av) C_noret;
C_noret_decl(f_3047)
static void C_ccall f_3047(C_word c,C_word *av) C_noret;
C_noret_decl(f_3051)
static void C_ccall f_3051(C_word c,C_word *av) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word *av) C_noret;
C_noret_decl(f_3059)
static void C_ccall f_3059(C_word c,C_word *av) C_noret;
C_noret_decl(f_3063)
static void C_ccall f_3063(C_word c,C_word *av) C_noret;
C_noret_decl(f_3067)
static void C_ccall f_3067(C_word c,C_word *av) C_noret;
C_noret_decl(f_3071)
static void C_ccall f_3071(C_word c,C_word *av) C_noret;
C_noret_decl(f_3075)
static void C_ccall f_3075(C_word c,C_word *av) C_noret;
C_noret_decl(f_3079)
static void C_ccall f_3079(C_word c,C_word *av) C_noret;
C_noret_decl(f_3083)
static void C_ccall f_3083(C_word c,C_word *av) C_noret;
C_noret_decl(f_3087)
static void C_ccall f_3087(C_word c,C_word *av) C_noret;
C_noret_decl(f_3142)
static void C_fcall f_3142(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3152)
static void C_ccall f_3152(C_word c,C_word *av) C_noret;
C_noret_decl(f_3156)
static void C_ccall f_3156(C_word c,C_word *av) C_noret;
C_noret_decl(f_3159)
static void C_ccall f_3159(C_word c,C_word *av) C_noret;
C_noret_decl(f_3165)
static void C_ccall f_3165(C_word c,C_word *av) C_noret;
C_noret_decl(f_3171)
static void C_ccall f_3171(C_word c,C_word *av) C_noret;
C_noret_decl(f_3175)
static void C_ccall f_3175(C_word c,C_word *av) C_noret;
C_noret_decl(f_3179)
static void C_ccall f_3179(C_word c,C_word *av) C_noret;
C_noret_decl(f_3183)
static void C_ccall f_3183(C_word c,C_word *av) C_noret;
C_noret_decl(f_3187)
static void C_ccall f_3187(C_word c,C_word *av) C_noret;
C_noret_decl(f_3193)
static void C_ccall f_3193(C_word c,C_word *av) C_noret;
C_noret_decl(f_3198)
static C_word C_fcall f_3198(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3222)
static C_word C_fcall f_3222(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3541)
static void C_fcall f_3541(C_word t0) C_noret;
C_noret_decl(f_3548)
static void C_ccall f_3548(C_word c,C_word *av) C_noret;
C_noret_decl(f_3551)
static void C_ccall f_3551(C_word c,C_word *av) C_noret;
C_noret_decl(f_3554)
static void C_ccall f_3554(C_word c,C_word *av) C_noret;
C_noret_decl(f_3563)
static void C_ccall f_3563(C_word c,C_word *av) C_noret;
C_noret_decl(f_3569)
static void C_ccall f_3569(C_word c,C_word *av) C_noret;
C_noret_decl(f_3575)
static void C_ccall f_3575(C_word c,C_word *av) C_noret;
C_noret_decl(f_3578)
static void C_ccall f_3578(C_word c,C_word *av) C_noret;
C_noret_decl(f_3584)
static void C_ccall f_3584(C_word c,C_word *av) C_noret;
C_noret_decl(f_3590)
static void C_ccall f_3590(C_word c,C_word *av) C_noret;
C_noret_decl(f_3596)
static void C_ccall f_3596(C_word c,C_word *av) C_noret;
C_noret_decl(f_3602)
static void C_ccall f_3602(C_word c,C_word *av) C_noret;
C_noret_decl(f_3608)
static void C_ccall f_3608(C_word c,C_word *av) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word *av) C_noret;
C_noret_decl(f_3622)
static void C_fcall f_3622(C_word t0) C_noret;
C_noret_decl(f_3650)
static void C_ccall f_3650(C_word c,C_word *av) C_noret;
C_noret_decl(f_3656)
static void C_fcall f_3656(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3660)
static void C_ccall f_3660(C_word c,C_word *av) C_noret;
C_noret_decl(f_3672)
static void C_ccall f_3672(C_word c,C_word *av) C_noret;
C_noret_decl(f_3682)
static void C_ccall f_3682(C_word c,C_word *av) C_noret;
C_noret_decl(f_3711)
static void C_fcall f_3711(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3715)
static void C_ccall f_3715(C_word c,C_word *av) C_noret;
C_noret_decl(f_3732)
static void C_fcall f_3732(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3740)
static void C_ccall f_3740(C_word c,C_word *av) C_noret;
C_noret_decl(f_3744)
static void C_ccall f_3744(C_word c,C_word *av) C_noret;
C_noret_decl(f_3750)
static void C_ccall f_3750(C_word c,C_word *av) C_noret;
C_noret_decl(f_3752)
static void C_fcall f_3752(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3777)
static void C_ccall f_3777(C_word c,C_word *av) C_noret;
C_noret_decl(f_3789)
static void C_ccall f_3789(C_word c,C_word *av) C_noret;
C_noret_decl(f_3795)
static void C_ccall f_3795(C_word c,C_word *av) C_noret;
C_noret_decl(f_3809)
static void C_ccall f_3809(C_word c,C_word *av) C_noret;
C_noret_decl(f_3811)
static void C_ccall f_3811(C_word c,C_word *av) C_noret;
C_noret_decl(f_3818)
static void C_ccall f_3818(C_word c,C_word *av) C_noret;
C_noret_decl(f_3823)
static void C_fcall f_3823(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3848)
static void C_ccall f_3848(C_word c,C_word *av) C_noret;
C_noret_decl(f_3859)
static void C_ccall f_3859(C_word c,C_word *av) C_noret;
C_noret_decl(f_3863)
static void C_ccall f_3863(C_word c,C_word *av) C_noret;
C_noret_decl(f_3865)
static void C_fcall f_3865(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3884)
static void C_ccall f_3884(C_word c,C_word *av) C_noret;
C_noret_decl(f_3931)
static void C_ccall f_3931(C_word c,C_word *av) C_noret;
C_noret_decl(f_3935)
static void C_ccall f_3935(C_word c,C_word *av) C_noret;
C_noret_decl(f_3945)
static void C_fcall f_3945(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3952)
static void C_ccall f_3952(C_word c,C_word *av) C_noret;
C_noret_decl(f_3960)
static void C_fcall f_3960(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3970)
static void C_ccall f_3970(C_word c,C_word *av) C_noret;
C_noret_decl(f_4010)
static void C_ccall f_4010(C_word c,C_word *av) C_noret;
C_noret_decl(f_4014)
static void C_ccall f_4014(C_word c,C_word *av) C_noret;
C_noret_decl(f_4020)
static void C_fcall f_4020(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4027)
static void C_ccall f_4027(C_word c,C_word *av) C_noret;
C_noret_decl(f_4031)
static void C_ccall f_4031(C_word c,C_word *av) C_noret;
C_noret_decl(f_4035)
static void C_ccall f_4035(C_word c,C_word *av) C_noret;
C_noret_decl(f_4040)
static void C_ccall f_4040(C_word c,C_word *av) C_noret;
C_noret_decl(f_4044)
static void C_ccall f_4044(C_word c,C_word *av) C_noret;
C_noret_decl(f_4047)
static void C_ccall f_4047(C_word c,C_word *av) C_noret;
C_noret_decl(f_4050)
static void C_ccall f_4050(C_word c,C_word *av) C_noret;
C_noret_decl(f_4068)
static void C_ccall f_4068(C_word c,C_word *av) C_noret;
C_noret_decl(f_4077)
static void C_ccall f_4077(C_word c,C_word *av) C_noret;
C_noret_decl(f_4080)
static void C_ccall f_4080(C_word c,C_word *av) C_noret;
C_noret_decl(f_4088)
static void C_fcall f_4088(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4098)
static void C_ccall f_4098(C_word c,C_word *av) C_noret;
C_noret_decl(f_4113)
static void C_ccall f_4113(C_word c,C_word *av) C_noret;
C_noret_decl(f_4117)
static void C_ccall f_4117(C_word c,C_word *av) C_noret;
C_noret_decl(f_4119)
static void C_fcall f_4119(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4125)
static void C_ccall f_4125(C_word c,C_word *av) C_noret;
C_noret_decl(f_4131)
static void C_ccall f_4131(C_word c,C_word *av) C_noret;
C_noret_decl(f_4283)
static void C_ccall f_4283(C_word c,C_word *av) C_noret;
C_noret_decl(f_4289)
static void C_ccall f_4289(C_word c,C_word *av) C_noret;
C_noret_decl(f_4292)
static void C_fcall f_4292(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4296)
static void C_ccall f_4296(C_word c,C_word *av) C_noret;
C_noret_decl(f_4305)
static void C_ccall f_4305(C_word c,C_word *av) C_noret;
C_noret_decl(f_4311)
static void C_ccall f_4311(C_word c,C_word *av) C_noret;
C_noret_decl(f_4320)
static void C_ccall f_4320(C_word c,C_word *av) C_noret;
C_noret_decl(f_4324)
static void C_ccall f_4324(C_word c,C_word *av) C_noret;
C_noret_decl(f_4348)
static void C_ccall f_4348(C_word c,C_word *av) C_noret;
C_noret_decl(f_4356)
static void C_ccall f_4356(C_word c,C_word *av) C_noret;
C_noret_decl(f_4368)
static void C_fcall f_4368(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4378)
static void C_ccall f_4378(C_word c,C_word *av) C_noret;
C_noret_decl(f_4396)
static void C_ccall f_4396(C_word c,C_word *av) C_noret;
C_noret_decl(f_4400)
static void C_ccall f_4400(C_word c,C_word *av) C_noret;
C_noret_decl(f_4404)
static void C_ccall f_4404(C_word c,C_word *av) C_noret;
C_noret_decl(f_4409)
static void C_ccall f_4409(C_word c,C_word *av) C_noret;
C_noret_decl(f_4413)
static void C_ccall f_4413(C_word c,C_word *av) C_noret;
C_noret_decl(f_4424)
static void C_fcall f_4424(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4434)
static void C_ccall f_4434(C_word c,C_word *av) C_noret;
C_noret_decl(f_4447)
static void C_ccall f_4447(C_word c,C_word *av) C_noret;
C_noret_decl(f_4451)
static void C_ccall f_4451(C_word c,C_word *av) C_noret;
C_noret_decl(f_4459)
static void C_fcall f_4459(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4469)
static void C_ccall f_4469(C_word c,C_word *av) C_noret;
C_noret_decl(f_4484)
static void C_ccall f_4484(C_word c,C_word *av) C_noret;
C_noret_decl(f_4486)
static void C_ccall f_4486(C_word c,C_word *av) C_noret;
C_noret_decl(f_4494)
static void C_ccall f_4494(C_word c,C_word *av) C_noret;
C_noret_decl(f_4496)
static void C_ccall f_4496(C_word c,C_word *av) C_noret;
C_noret_decl(f_4513)
static void C_ccall f_4513(C_word c,C_word *av) C_noret;
C_noret_decl(f_4524)
static void C_ccall f_4524(C_word c,C_word *av) C_noret;
C_noret_decl(f_4532)
static void C_fcall f_4532(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4542)
static void C_ccall f_4542(C_word c,C_word *av) C_noret;
C_noret_decl(f_4571)
static void C_fcall f_4571(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4584)
static void C_fcall f_4584(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4587)
static void C_ccall f_4587(C_word c,C_word *av) C_noret;
C_noret_decl(f_4592)
static void C_ccall f_4592(C_word c,C_word *av) C_noret;
C_noret_decl(f_4605)
static void C_fcall f_4605(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4612)
static void C_ccall f_4612(C_word c,C_word *av) C_noret;
C_noret_decl(f_4616)
static void C_ccall f_4616(C_word c,C_word *av) C_noret;
C_noret_decl(f_4729)
static void C_ccall f_4729(C_word c,C_word *av) C_noret;
C_noret_decl(f_4736)
static void C_ccall f_4736(C_word c,C_word *av) C_noret;
C_noret_decl(f_4742)
static void C_fcall f_4742(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4751)
static void C_ccall f_4751(C_word c,C_word *av) C_noret;
C_noret_decl(f_4757)
static void C_ccall f_4757(C_word c,C_word *av) C_noret;
C_noret_decl(f_4764)
static void C_ccall f_4764(C_word c,C_word *av) C_noret;
C_noret_decl(f_4776)
static void C_ccall f_4776(C_word c,C_word *av) C_noret;
C_noret_decl(f_4780)
static void C_fcall f_4780(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4817)
static void C_ccall f_4817(C_word c,C_word *av) C_noret;
C_noret_decl(f_4825)
static void C_ccall f_4825(C_word c,C_word *av) C_noret;
C_noret_decl(f_4859)
static void C_ccall f_4859(C_word c,C_word *av) C_noret;
C_noret_decl(f_4865)
static void C_ccall f_4865(C_word c,C_word *av) C_noret;
C_noret_decl(f_4869)
static void C_ccall f_4869(C_word c,C_word *av) C_noret;
C_noret_decl(f_4880)
static void C_ccall f_4880(C_word c,C_word *av) C_noret;
C_noret_decl(f_4883)
static void C_ccall f_4883(C_word c,C_word *av) C_noret;
C_noret_decl(f_4886)
static void C_ccall f_4886(C_word c,C_word *av) C_noret;
C_noret_decl(f_4896)
static void C_ccall f_4896(C_word c,C_word *av) C_noret;
C_noret_decl(f_4900)
static void C_ccall f_4900(C_word c,C_word *av) C_noret;
C_noret_decl(f_4904)
static void C_ccall f_4904(C_word c,C_word *av) C_noret;
C_noret_decl(f_4909)
static void C_ccall f_4909(C_word c,C_word *av) C_noret;
C_noret_decl(f_4914)
static void C_ccall f_4914(C_word c,C_word *av) C_noret;
C_noret_decl(f_4918)
static void C_ccall f_4918(C_word c,C_word *av) C_noret;
C_noret_decl(f_4922)
static void C_ccall f_4922(C_word c,C_word *av) C_noret;
C_noret_decl(f_4929)
static void C_ccall f_4929(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1874)
static void C_ccall trf_1874(C_word c,C_word *av) C_noret;
static void C_ccall trf_1874(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1874(t0,t1,t2,t3);}

C_noret_decl(trf_1889)
static void C_ccall trf_1889(C_word c,C_word *av) C_noret;
static void C_ccall trf_1889(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1889(t0,t1,t2);}

C_noret_decl(trf_1897)
static void C_ccall trf_1897(C_word c,C_word *av) C_noret;
static void C_ccall trf_1897(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1897(t0,t1,t2,t3);}

C_noret_decl(trf_1929)
static void C_ccall trf_1929(C_word c,C_word *av) C_noret;
static void C_ccall trf_1929(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1929(t0,t1,t2);}

C_noret_decl(trf_1961)
static void C_ccall trf_1961(C_word c,C_word *av) C_noret;
static void C_ccall trf_1961(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1961(t0,t1,t2);}

C_noret_decl(trf_2010)
static void C_ccall trf_2010(C_word c,C_word *av) C_noret;
static void C_ccall trf_2010(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2010(t0,t1,t2);}

C_noret_decl(trf_2050)
static void C_ccall trf_2050(C_word c,C_word *av) C_noret;
static void C_ccall trf_2050(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2050(t0,t1,t2);}

C_noret_decl(trf_2078)
static void C_ccall trf_2078(C_word c,C_word *av) C_noret;
static void C_ccall trf_2078(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2078(t0,t1,t2);}

C_noret_decl(trf_2084)
static void C_ccall trf_2084(C_word c,C_word *av) C_noret;
static void C_ccall trf_2084(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2084(t0,t1,t2);}

C_noret_decl(trf_2142)
static void C_ccall trf_2142(C_word c,C_word *av) C_noret;
static void C_ccall trf_2142(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2142(t0,t1,t2);}

C_noret_decl(trf_2170)
static void C_ccall trf_2170(C_word c,C_word *av) C_noret;
static void C_ccall trf_2170(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2170(t0,t1,t2);}

C_noret_decl(trf_2239)
static void C_ccall trf_2239(C_word c,C_word *av) C_noret;
static void C_ccall trf_2239(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2239(t0,t1,t2);}

C_noret_decl(trf_2245)
static void C_ccall trf_2245(C_word c,C_word *av) C_noret;
static void C_ccall trf_2245(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2245(t0,t1,t2);}

C_noret_decl(trf_2284)
static void C_ccall trf_2284(C_word c,C_word *av) C_noret;
static void C_ccall trf_2284(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2284(t0,t1,t2);}

C_noret_decl(trf_2293)
static void C_ccall trf_2293(C_word c,C_word *av) C_noret;
static void C_ccall trf_2293(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2293(t0,t1,t2);}

C_noret_decl(trf_2301)
static void C_ccall trf_2301(C_word c,C_word *av) C_noret;
static void C_ccall trf_2301(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2301(t0,t1,t2,t3);}

C_noret_decl(trf_3142)
static void C_ccall trf_3142(C_word c,C_word *av) C_noret;
static void C_ccall trf_3142(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3142(t0,t1);}

C_noret_decl(trf_3541)
static void C_ccall trf_3541(C_word c,C_word *av) C_noret;
static void C_ccall trf_3541(C_word c,C_word *av){
C_word t0=av[0];
f_3541(t0);}

C_noret_decl(trf_3622)
static void C_ccall trf_3622(C_word c,C_word *av) C_noret;
static void C_ccall trf_3622(C_word c,C_word *av){
C_word t0=av[0];
f_3622(t0);}

C_noret_decl(trf_3656)
static void C_ccall trf_3656(C_word c,C_word *av) C_noret;
static void C_ccall trf_3656(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3656(t0,t1,t2);}

C_noret_decl(trf_3711)
static void C_ccall trf_3711(C_word c,C_word *av) C_noret;
static void C_ccall trf_3711(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3711(t0,t1,t2,t3);}

C_noret_decl(trf_3732)
static void C_ccall trf_3732(C_word c,C_word *av) C_noret;
static void C_ccall trf_3732(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3732(t0,t1,t2);}

C_noret_decl(trf_3752)
static void C_ccall trf_3752(C_word c,C_word *av) C_noret;
static void C_ccall trf_3752(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3752(t0,t1,t2);}

C_noret_decl(trf_3823)
static void C_ccall trf_3823(C_word c,C_word *av) C_noret;
static void C_ccall trf_3823(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3823(t0,t1,t2);}

C_noret_decl(trf_3865)
static void C_ccall trf_3865(C_word c,C_word *av) C_noret;
static void C_ccall trf_3865(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3865(t0,t1,t2,t3);}

C_noret_decl(trf_3945)
static void C_ccall trf_3945(C_word c,C_word *av) C_noret;
static void C_ccall trf_3945(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3945(t0,t1,t2);}

C_noret_decl(trf_3960)
static void C_ccall trf_3960(C_word c,C_word *av) C_noret;
static void C_ccall trf_3960(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3960(t0,t1,t2);}

C_noret_decl(trf_4020)
static void C_ccall trf_4020(C_word c,C_word *av) C_noret;
static void C_ccall trf_4020(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4020(t0,t1);}

C_noret_decl(trf_4088)
static void C_ccall trf_4088(C_word c,C_word *av) C_noret;
static void C_ccall trf_4088(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4088(t0,t1,t2);}

C_noret_decl(trf_4119)
static void C_ccall trf_4119(C_word c,C_word *av) C_noret;
static void C_ccall trf_4119(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4119(t0,t1,t2);}

C_noret_decl(trf_4292)
static void C_ccall trf_4292(C_word c,C_word *av) C_noret;
static void C_ccall trf_4292(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4292(t0,t1,t2);}

C_noret_decl(trf_4368)
static void C_ccall trf_4368(C_word c,C_word *av) C_noret;
static void C_ccall trf_4368(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4368(t0,t1,t2);}

C_noret_decl(trf_4424)
static void C_ccall trf_4424(C_word c,C_word *av) C_noret;
static void C_ccall trf_4424(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4424(t0,t1,t2);}

C_noret_decl(trf_4459)
static void C_ccall trf_4459(C_word c,C_word *av) C_noret;
static void C_ccall trf_4459(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4459(t0,t1,t2);}

C_noret_decl(trf_4532)
static void C_ccall trf_4532(C_word c,C_word *av) C_noret;
static void C_ccall trf_4532(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4532(t0,t1,t2);}

C_noret_decl(trf_4571)
static void C_ccall trf_4571(C_word c,C_word *av) C_noret;
static void C_ccall trf_4571(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4571(t0,t1,t2,t3);}

C_noret_decl(trf_4584)
static void C_ccall trf_4584(C_word c,C_word *av) C_noret;
static void C_ccall trf_4584(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4584(t0,t1);}

C_noret_decl(trf_4605)
static void C_ccall trf_4605(C_word c,C_word *av) C_noret;
static void C_ccall trf_4605(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4605(t0,t1);}

C_noret_decl(trf_4742)
static void C_ccall trf_4742(C_word c,C_word *av) C_noret;
static void C_ccall trf_4742(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4742(t0,t1);}

C_noret_decl(trf_4780)
static void C_ccall trf_4780(C_word c,C_word *av) C_noret;
static void C_ccall trf_4780(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4780(t0,t1,t2);}

/* f5204 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_ccall f5204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f5204,2,av);}
/* chicken-status.scm:206: chicken.base#exit */
t2=C_fast_retrieve(lf[97]);{
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

/* f5211 in k4755 in k4749 in k4740 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in ... */
static void C_ccall f5211(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f5211,2,av);}
/* chicken-status.scm:206: chicken.base#exit */
t2=C_fast_retrieve(lf[97]);{
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

/* f5218 in k4740 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f5218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f5218,2,av);}
/* chicken-status.scm:206: chicken.base#exit */
t2=C_fast_retrieve(lf[97]);{
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

/* k1644 */
static void C_ccall f_1646(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1646,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1649,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1647 in k1644 */
static void C_ccall f_1649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1649,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1652,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k1650 in k1647 in k1644 */
static void C_ccall f_1652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1652,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1655,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_1655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1655,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1658,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_1658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1658,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1661,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_1661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1661,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1664,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

/* k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_1664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1664,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1667,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_1667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1667,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1670,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_1670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,7)))){
C_save_and_reclaim((void *)f_1670,2,av);}
a=C_alloc(11);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1673,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:26: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[141]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[141]+1);
av2[1]=t3;
av2[2]=lf[142];
av2[3]=lf[142];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=C_SCHEME_END_OF_LIST;
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_1673(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_1673,2,av);}
a=C_alloc(11);
t2=C_mutate(&lf[1] /* (set! main#append-map ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1874,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate(&lf[5] /* (set! main#any ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2078,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate(&lf[7] /* (set! main#delete-duplicates ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2239,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[8] /* (set! main#filter ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2284,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate(&lf[9] /* (set! main#staticbuild ...) */,C_mk_bool(STATIC_CHICKEN));
t7=C_mutate(&lf[10] /* (set! main#debugbuild ...) */,C_mk_bool(DEBUG_CHICKEN));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2957,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:43: chicken.platform#feature? */
t9=C_fast_retrieve(lf[139]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[140];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* main#append-map in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_fcall f_1874(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_1874,4,t1,t2,t3,t4);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t4))){
t5=t3;
t6=C_i_check_list_2(t5,lf[2]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1889,a[2]=t2,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_1889(t10,t1,t5);}
else{
t5=C_a_i_cons(&a,2,t3,t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1929,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_1929(t9,t1,t5);}}

/* foldr179 in main#append-map in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_fcall f_1889(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1889,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1897,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1916,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
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

/* g184 in foldr179 in main#append-map in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_fcall f_1897(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1897,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1905,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:72: proc */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k1903 in g184 in foldr179 in main#append-map in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_1905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1905,2,av);}
/* mini-srfi-1.scm:72: scheme#append */
t2=*((C_word*)lf[3]+1);{
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

/* k1914 in foldr179 in main#append-map in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_1916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1916,2,av);}
/* mini-srfi-1.scm:72: g184 */
t2=((C_word*)t0)[2];
f_1897(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in main#append-map in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_fcall f_1929(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1929,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1936,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* mini-srfi-1.scm:74: any */
f_2078(t3,*((C_word*)lf[6]+1),t2);}

/* k1934 in loop in main#append-map in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_1936(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_1936,2,av);}
a=C_alloc(21);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1943,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)t0)[3];
t8=C_i_check_list_2(t7,lf[4]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2008,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2010,a[2]=t5,a[3]=t11,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_2010(t13,t9,t7);}}

/* k1941 in k1934 in loop in main#append-map in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_1943(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_1943,2,av);}
a=C_alloc(20);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1947,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=((C_word*)t0)[3];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1959,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1961,a[2]=t6,a[3]=t11,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_1961(t13,t9,t8);}

/* k1945 in k1941 in k1934 in loop in main#append-map in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_1947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1947,2,av);}
/* mini-srfi-1.scm:76: scheme#append */
t2=*((C_word*)lf[3]+1);{
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

/* k1957 in k1941 in k1934 in loop in main#append-map in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_1959(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1959,2,av);}
/* mini-srfi-1.scm:77: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1929(t2,((C_word*)t0)[3],t1);}

/* map-loop221 in k1941 in k1934 in loop in main#append-map in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_fcall f_1961(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1961,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
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

/* k2006 in k1934 in loop in main#append-map in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_2008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2008,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
C_apply(4,av2);}}

/* map-loop194 in k1934 in loop in main#append-map in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_fcall f_2010(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2010,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
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

/* loop in k4749 in k4740 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_fcall f_2050(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2050,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2072,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(t2);
/* mini-srfi-1.scm:82: pred */
t6=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}}

/* k2070 in loop in k4749 in k4740 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in ... */
static void C_ccall f_2072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2072,2,av);}
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
f_2050(t4,((C_word*)t0)[2],t3);}}

/* main#any in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_fcall f_2078(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2078,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2084,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_2084(t7,t1,t3);}

/* loop in main#any in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_fcall f_2084(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2084,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2094,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* mini-srfi-1.scm:88: pred */
t5=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}}

/* k2092 in loop in main#any in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_2094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2094,2,av);}
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
f_2084(t4,((C_word*)t0)[2],t3);}}

/* loop in k3748 in main#filter-egg-names in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_fcall f_2142(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2142,3,t0,t1,t2);}
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
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2160,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=t2;
t7=C_u_i_cdr(t6);
/* mini-srfi-1.scm:101: loop */
t9=t5;
t10=t7;
t1=t9;
t2=t10;
goto loop;}}

/* k2158 in loop in k3748 in main#filter-egg-names in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f_2160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2160,2,av);}
/* mini-srfi-1.scm:101: scheme#append */
t2=*((C_word*)lf[3]+1);{
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

/* loop in loop in main#delete-duplicates in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_fcall f_2170(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2170,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2183,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* mini-srfi-1.scm:106: test */
t5=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=t4;
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}}

/* k2181 in loop in loop in main#delete-duplicates in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_2183(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2183,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* mini-srfi-1.scm:107: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2170(t4,((C_word*)t0)[4],t3);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2197,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* mini-srfi-1.scm:109: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_2170(t7,t4,t6);}}

/* k2195 in k2181 in loop in loop in main#delete-duplicates in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_2197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2197,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* main#delete-duplicates in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_fcall f_2239(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2239,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2245,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_2245(t7,t1,t2);}

/* loop in main#delete-duplicates in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_fcall f_2245(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2245,3,t0,t1,t2);}
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
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2259,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2272,a[2]=((C_word*)t0)[2],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=t4;
t10=((C_word*)t0)[3];
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2170,a[2]=t12,a[3]=t10,a[4]=t9,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_2170(t14,t8,t6);}}

/* k2257 in loop in main#delete-duplicates in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_2259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2259,2,av);}
a=C_alloc(3);
t2=C_i_equalp(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?((C_word*)t0)[4]:C_a_i_cons(&a,2,((C_word*)t0)[5],t1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2270 in loop in main#delete-duplicates in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_2272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2272,2,av);}
/* mini-srfi-1.scm:123: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2245(t2,((C_word*)t0)[3],t1);}

/* main#filter in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_fcall f_2284(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2284,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_check_list_2(t3,lf[2]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2293,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2293(t8,t1,t3);}

/* foldr326 in main#filter in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_fcall f_2293(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2293,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2301,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2322,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
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

/* g331 in foldr326 in main#filter in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_fcall f_2301(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2301,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2308,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:131: pred */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k2306 in g331 in foldr326 in main#filter in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_2308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2308,2,av);}
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

/* k2320 in foldr326 in main#filter in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_2322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2322,2,av);}
/* mini-srfi-1.scm:131: g331 */
t2=((C_word*)t0)[2];
f_2301(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2955 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_2957(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2957,2,av);}
a=C_alloc(6);
t2=lf[11] /* main#cross-chicken */ =t1;;
t3=lf[12] /* main#binary-version */ =C_fix((C_word)C_BINARY_VERSION);;
t4=lf[13] /* main#major-version */ =C_fix((C_word)C_MAJOR_VERSION);;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2963,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[135]+1);{
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

/* k2961 in k2955 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_2963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2963,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2967,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[135]+1);{
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

/* k2965 in k2961 in k2955 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_2967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2967,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2971,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[135]+1);{
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

/* k2969 in k2965 in k2961 in k2955 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_2971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2971,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2975,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[135]+1);{
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

/* k2973 in k2969 in k2965 in k2961 in k2955 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_2975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2975,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2979,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[135]+1);{
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

/* k2977 in k2973 in k2969 in k2965 in k2961 in k2955 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_2979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2979,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2983,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[135]+1);{
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

/* k2981 in k2977 in k2973 in k2969 in k2965 in k2961 in k2955 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_2983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2983,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2987,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[135]+1);{
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

/* k2985 in k2981 in k2977 in k2973 in k2969 in k2965 in k2961 in k2955 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_2987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2987,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2991,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[135]+1);{
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

/* k2989 in k2985 in k2981 in k2977 in k2973 in k2969 in k2965 in k2961 in k2955 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_2991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2991,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2995,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[135]+1);{
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

/* k2993 in k2989 in k2985 in k2981 in k2977 in k2973 in k2969 in k2965 in k2961 in k2955 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_2995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2995,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[14] /* (set! main#default-libdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2999,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[135]+1);{
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

/* k2997 in k2993 in k2989 in k2985 in k2981 in k2977 in k2973 in k2969 in k2965 in k2961 in k2955 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 */
static void C_ccall f_2999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2999,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[15] /* (set! main#default-runlibdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3003,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[135]+1);{
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

/* k3001 in k2997 in k2993 in k2989 in k2985 in k2981 in k2977 in k2973 in k2969 in k2965 in k2961 in k2955 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1644 in ... */
static void C_ccall f_3003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3003,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3007,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[135]+1);{
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

/* k3005 in k3001 in k2997 in k2993 in k2989 in k2985 in k2981 in k2977 in k2973 in k2969 in k2965 in k2961 in k2955 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in ... */
static void C_ccall f_3007(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3007,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3011,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[135]+1);{
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

/* k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2985 in k2981 in k2977 in k2973 in k2969 in k2965 in k2961 in k2955 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in ... */
static void C_ccall f_3011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3011,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[16] /* (set! main#default-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3015,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[135]+1);{
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

/* k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2985 in k2981 in k2977 in k2973 in k2969 in k2965 in k2961 in k2955 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in ... */
static void C_ccall f_3015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3015,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4929,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:63: chicken.platform#software-type */
t3=C_fast_retrieve(lf[138]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3021 in k4927 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2985 in k2981 in k2977 in k2973 in k2969 in k2965 in k2961 in k2955 in k1671 in k1668 in k1665 in k1662 in k1659 in ... */
static void C_ccall f_3023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3023,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3027,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[135]+1);{
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

/* k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2985 in k2981 in k2977 in k2973 in k2969 in k2965 in k2961 in k2955 in k1671 in k1668 in k1665 in k1662 in ... */
static void C_ccall f_3027(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3027,2,av);}
a=C_alloc(9);
t2=C_mutate(&lf[16] /* (set! main#default-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3031,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4922,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[135]+1);{
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

/* k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2985 in k2981 in k2977 in k2973 in k2969 in k2965 in k2961 in k2955 in k1671 in k1668 in k1665 in ... */
static void C_ccall f_3031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3031,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3035,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4918,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[135]+1);{
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

/* k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2985 in k2981 in k2977 in k2973 in k2969 in k2965 in k2961 in k2955 in k1671 in k1668 in ... */
static void C_ccall f_3035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3035,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3039,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4914,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[135]+1);{
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

/* k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2985 in k2981 in k2977 in k2973 in k2969 in k2965 in k2961 in k2955 in k1671 in ... */
static void C_ccall f_3039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3039,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3043,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[135]+1);{
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

/* k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2985 in k2981 in k2977 in k2973 in k2969 in k2965 in k2961 in k2955 in ... */
static void C_ccall f_3043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3043,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3047,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[135]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2985 in k2981 in k2977 in k2973 in k2969 in k2965 in k2961 in ... */
static void C_ccall f_3047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3047,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3051,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[135]+1);{
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

/* k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2985 in k2981 in k2977 in k2973 in k2969 in k2965 in ... */
static void C_ccall f_3051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3051,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3055,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[135]+1);{
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

/* k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2985 in k2981 in k2977 in k2973 in k2969 in ... */
static void C_ccall f_3055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3055,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3059,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[135]+1);{
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

/* k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2985 in k2981 in k2977 in k2973 in ... */
static void C_ccall f_3059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3059,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3063,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[135]+1);{
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

/* k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2985 in k2981 in k2977 in ... */
static void C_ccall f_3063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3063,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3067,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[135]+1);{
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

/* k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2985 in k2981 in ... */
static void C_ccall f_3067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3067,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3071,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[135]+1);{
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

/* k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2985 in ... */
static void C_ccall f_3071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3071,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3075,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[135]+1);{
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

/* k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in ... */
static void C_ccall f_3075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3075,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3079,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[135]+1);{
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

/* k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in ... */
static void C_ccall f_3079(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3079,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3083,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4909,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_retrieve2(lf[12],C_text("main#binary-version"));
/* ##sys#fixnum->string */
t5=C_fast_retrieve(lf[133]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=C_retrieve2(lf[12],C_text("main#binary-version"));
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in k3001 in k2997 in ... */
static void C_ccall f_3083(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3083,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[19] /* (set! main#target-repo ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3087,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4904,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_retrieve2(lf[12],C_text("main#binary-version"));
/* ##sys#fixnum->string */
t6=C_fast_retrieve(lf[133]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=C_retrieve2(lf[12],C_text("main#binary-version"));
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in k3001 in ... */
static void C_ccall f_3087(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3087,2,av);}
a=C_alloc(5);
t2=C_mutate(&lf[20] /* (set! main#target-run-repo ...) */,t1);
t3=C_mutate(&lf[21] /* (set! main#+egg-info-extension+ ...) */,lf[22]);
t4=C_mutate(&lf[23] /* (set! main#probe-dir ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3142,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3156,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:117: chicken.process-context#get-environment-variable */
t6=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[131];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* main#probe-dir in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in ... */
static void C_fcall f_3142(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3142,2,t1,t2);}
a=C_alloc(4);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3152,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* egg-environment.scm:114: chicken.file#directory-exists? */
t4=C_fast_retrieve(lf[24]);{
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

/* k3150 in main#probe-dir in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in ... */
static void C_ccall f_3152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3152,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in ... */
static void C_ccall f_3156(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3156,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3159,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
f_3159(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4880,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4900,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:118: chicken.process-context#get-environment-variable */
t5=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[130];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in ... */
static void C_ccall f_3159(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_3159,2,av);}
a=C_alloc(9);
t2=C_mutate(&lf[25] /* (set! main#cache-directory ...) */,t1);
t3=C_mutate(&lf[26] /* (set! main#get-egg-property ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3198,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate(&lf[27] /* (set! main#get-egg-property* ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3222,tmp=(C_word)a,a+=2,tmp));
t5=lf[28] /* main#host-extensions */ =C_SCHEME_TRUE;;
t6=lf[29] /* main#target-extensions */ =C_SCHEME_TRUE;;
t7=C_mutate(&lf[30] /* (set! main#get-terminal-width ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3541,tmp=(C_word)a,a+=2,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3618,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:62: get-terminal-width */
f_3541(t8);}

/* k3163 in k3670 in k3658 in main#read-info in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f_3165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3165,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3171,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* egg-information.scm:34: chicken.file#file-exists? */
t4=C_fast_retrieve(lf[44]);{
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

/* k3169 in k3163 in k3670 in k3658 in main#read-info in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_3171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3171,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?((C_word*)t0)[3]:((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3173 in k3670 in k3658 in main#read-info in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f_3175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3175,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3179,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* egg-information.scm:32: chicken.pathname#pathname-file */
t4=C_fast_retrieve(lf[47]);{
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

/* k3177 in k3173 in k3670 in k3658 in main#read-info in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_3179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3179,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* egg-information.scm:33: chicken.pathname#pathname-extension */
t4=C_fast_retrieve(lf[46]);{
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

/* k3181 in k3177 in k3173 in k3670 in k3658 in main#read-info in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in ... */
static void C_ccall f_3183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3183,2,av);}
/* egg-information.scm:30: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[45]);{
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

/* k3185 in k3670 in k3658 in main#read-info in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f_3187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3187,2,av);}
/* egg-information.scm:30: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[45]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[48];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3191 in k3670 in k3658 in main#read-info in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f_3193(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3193,2,av);}
/* egg-information.scm:38: scheme#with-input-from-file */
t2=C_fast_retrieve(lf[42]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=*((C_word*)lf[43]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* main#get-egg-property in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in ... */
static C_word C_fcall f_3198(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;{}
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_assq(t2,t1);
if(C_truep(t6)){
t7=C_i_cadr(t6);
return((C_truep(t7)?t7:t5));}
else{
return(t5);}}

/* main#get-egg-property* in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in ... */
static C_word C_fcall f_3222(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;{}
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_END_OF_LIST:C_i_car(t3));
t6=C_i_assq(t2,t1);
if(C_truep(t6)){
t7=C_i_cdr(t6);
return((C_truep(t7)?t7:t5));}
else{
return(t5);}}

/* main#get-terminal-width in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in ... */
static void C_fcall f_3541(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3541,1,t1);}
a=C_alloc(4);
t2=*((C_word*)lf[31]+1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3548,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:55: chicken.port#terminal-port? */
t4=C_fast_retrieve(lf[36]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[31]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3546 in main#get-terminal-width in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in ... */
static void C_ccall f_3548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3548,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3551,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3563,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:56: scheme#call-with-current-continuation */
t4=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(79);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3549 in k3546 in main#get-terminal-width in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in ... */
static void C_ccall f_3551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3551,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3554,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:56: g913 */
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k3552 in k3549 in k3546 in main#get-terminal-width in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_ccall f_3554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3554,2,av);}
if(C_truep(C_i_zerop(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(79);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* chicken-status.scm:59: scheme#min */
t2=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(79);
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* a3562 in k3546 in main#get-terminal-width in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in ... */
static void C_ccall f_3563(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3563,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3569,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3578,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:56: chicken.condition#with-exception-handler */
t5=C_fast_retrieve(lf[34]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a3568 in a3562 in k3546 in main#get-terminal-width in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_ccall f_3569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,2)))){
C_save_and_reclaim((void *)f_3569,3,av);}
a=C_alloc(2);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3575,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:56: k910 */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a3574 in a3568 in a3562 in k3546 in main#get-terminal-width in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f_3575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3575,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3577 in a3562 in k3546 in main#get-terminal-width in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_ccall f_3578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3578,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3584,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3602,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:56: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a3583 in a3577 in a3562 in k3546 in main#get-terminal-width in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f_3584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3584,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3590,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3596,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:56: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a3589 in a3583 in a3577 in a3562 in k3546 in main#get-terminal-width in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_3590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3590,2,av);}
/* chicken-status.scm:56: chicken.port#terminal-size */
t2=C_fast_retrieve(lf[33]);{
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

/* a3595 in a3583 in a3577 in a3562 in k3546 in main#get-terminal-width in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_3596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,1)))){
C_save_and_reclaim((void*)f_3596,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_list_ref(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a3601 in a3577 in a3562 in k3546 in main#get-terminal-width in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f_3602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_3602,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3608,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:56: k910 */
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a3607 in a3601 in a3577 in a3562 in k3546 in main#get-terminal-width in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_3608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3608,2,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
C_apply_values(3,av2);}}

/* k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in ... */
static void C_ccall f_3618(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(62,c,5)))){
C_save_and_reclaim((void *)f_3618,2,av);}
a=C_alloc(62);
t2=C_s_a_i_minus(&a,2,t1,C_fix(2));
t3=C_mutate(&lf[37] /* (set! main#list-width ...) */,C_s_a_i_quotient(&a,2,t2,C_fix(2)));
t4=C_mutate(&lf[38] /* (set! main#repo-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3622,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[41] /* (set! main#read-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3656,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate(&lf[51] /* (set! main#filter-egg-names ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3711,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate(&lf[56] /* (set! main#format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3865,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate(&lf[59] /* (set! main#list-installed-eggs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3931,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate(&lf[60] /* (set! main#list-egg-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4010,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[72] /* (set! main#gather-components ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4119,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate(&lf[73] /* (set! main#gather-components-rec ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4131,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate(&lf[82] /* (set! main#list-installed-components ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4283,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate(&lf[91] /* (set! main#list-installed-files ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4447,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate(&lf[93] /* (set! main#dump-installed-versions ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4496,tmp=(C_word)a,a+=2,tmp));
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4859,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4869,a[2]=t15,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:267: chicken.process-context#command-line-arguments */
t17=C_fast_retrieve(lf[124]);{
C_word *av2=av;
av2[0]=t17;
av2[1]=t16;
((C_proc)(void*)(*((C_word*)t17+1)))(2,av2);}}

/* main#repo-path in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in ... */
static void C_fcall f_3622(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_3622,1,t1);}
t2=(C_truep(C_retrieve2(lf[11],C_text("main#cross-chicken")))?C_i_not(C_retrieve2(lf[28],C_text("main#host-extensions"))):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=C_SCHEME_END_OF_LIST;
if(C_truep(C_i_nullp(t3))){
t4=C_retrieve2(lf[19],C_text("main#target-repo"));
/* chicken-status.scm:66: ##sys#split-path */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[39]);
C_word av2[3];
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t1;
av2[2]=C_retrieve2(lf[19],C_text("main#target-repo"));
tp(3,av2);}}
else{
t4=C_i_car(t3);
t5=(C_truep(t4)?C_retrieve2(lf[20],C_text("main#target-run-repo")):C_retrieve2(lf[19],C_text("main#target-repo")));
/* chicken-status.scm:66: ##sys#split-path */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[39]);
C_word av2[3];
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t1;
av2[2]=t5;
tp(3,av2);}}}
else{
/* chicken-status.scm:67: chicken.platform#repository-path */
t3=C_fast_retrieve(lf[40]);{
C_word av2[2];
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a3649 in k3738 in g971 in main#filter-egg-names in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f_3650(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3650,3,av);}
t3=C_fast_retrieve(lf[53]);
/* chicken-status.scm:70: g933 */
t4=C_fast_retrieve(lf[53]);{
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

/* main#read-info in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in ... */
static void C_fcall f_3656(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3656,3,t1,t2,t3);}
a=C_alloc(5);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3660,a[2]=t4,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
/* chicken-status.scm:72: repo-path */
f_3622(t5);}
else{
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_i_car(t4);
f_3660(2,av2);}}}

/* k3658 in main#read-info in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in ... */
static void C_ccall f_3660(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3660,2,av);}
a=C_alloc(7);
t2=t1;
t3=C_i_nullp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_retrieve2(lf[21],C_text("main#+egg-info-extension+")):C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3672,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3682,a[2]=t9,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:73: chicken.pathname#make-pathname */
t11=C_fast_retrieve(lf[45]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t0)[4];
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}

/* k3670 in k3658 in main#read-info in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_ccall f_3672(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_3672,2,av);}
a=C_alloc(14);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=t1;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3193,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=t3;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3165,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3175,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3187,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* egg-information.scm:30: chicken.pathname#pathname-directory */
t10=C_fast_retrieve(lf[49]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3680 in k3658 in main#read-info in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_ccall f_3682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3682,2,av);}
/* chicken-status.scm:73: chicken.load#find-file */
t2=C_fast_retrieve(lf[50]);{
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

/* main#filter-egg-names in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in ... */
static void C_fcall f_3711(C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,0,3)))){
C_save_and_reclaim_args((void *)trf_3711,4,t1,t2,t3,t4);}
a=C_alloc(22);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3715,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t3))){
t6=t2;
/* chicken-status.scm:88: delete-duplicates */
f_2239(t1,t6,*((C_word*)lf[52]+1));}
else{
if(C_truep(t4)){
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3732,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t11=t3;
t12=C_i_check_list_2(t11,lf[4]);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3750,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3752,a[2]=t8,a[3]=t15,a[4]=t10,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_3752(t17,t13,t11);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3789,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:84: filter */
f_2284(t5,t6,t2);}}}

/* k3713 in main#filter-egg-names in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in ... */
static void C_ccall f_3715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3715,2,av);}
/* chicken-status.scm:88: delete-duplicates */
f_2239(((C_word*)t0)[2],t1,*((C_word*)lf[52]+1));}

/* g971 in main#filter-egg-names in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in ... */
static void C_fcall f_3732(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3732,3,t0,t1,t2);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3740,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3744,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:81: chicken.irregex#glob->sre */
t5=C_fast_retrieve(lf[55]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3738 in g971 in main#filter-egg-names in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_ccall f_3740(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3740,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=t1;
t4=((C_word*)t0)[3];
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3650,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:70: filter */
f_2284(t2,t5,t4);}

/* k3742 in g971 in main#filter-egg-names in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_ccall f_3744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3744,2,av);}
/* chicken-status.scm:81: chicken.irregex#irregex */
t2=C_fast_retrieve(lf[54]);{
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

/* k3748 in main#filter-egg-names in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in ... */
static void C_ccall f_3750(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3750,2,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2142,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_2142(t5,((C_word*)t0)[2],t1);}

/* map-loop965 in main#filter-egg-names in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in ... */
static void C_fcall f_3752(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3752,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3777,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:80: g971 */
t5=((C_word*)t0)[4];
f_3732(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3775 in map-loop965 in main#filter-egg-names in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_ccall f_3777(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3777,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3752(t6,((C_word*)t0)[5],t5);}

/* a3788 in main#filter-egg-names in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in ... */
static void C_ccall f_3789(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3789,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3795,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:86: any */
f_2078(t1,t3,((C_word*)t0)[2]);}

/* a3794 in a3788 in main#filter-egg-names in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_ccall f_3795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3795,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_string_equal_p(t2,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3807 in k4603 in k4582 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_3809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3809,2,av);}
/* chicken-status.scm:91: delete-duplicates */
f_2239(((C_word*)t0)[2],t1,*((C_word*)lf[103]+1));}

/* a3810 in k4603 in k4582 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_3811(C_word c,C_word *av){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_3811,3,av);}
a=C_alloc(14);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_fast_retrieve(lf[47]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3818,a[2]=t5,a[3]=t7,a[4]=t6,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3859,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:95: chicken.pathname#make-pathname */
t10=C_fast_retrieve(lf[45]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[105];
av2[4]=C_retrieve2(lf[21],C_text("main#+egg-info-extension+"));
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* k3816 in a3810 in k4603 in k4582 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in ... */
static void C_ccall f_3818(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3818,2,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3823,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3823(t5,((C_word*)t0)[5],t1);}

/* map-loop1003 in k3816 in a3810 in k4603 in k4582 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in ... */
static void C_fcall f_3823(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3823,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3848,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:94: g1009 */
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

/* k3846 in map-loop1003 in k3816 in a3810 in k4603 in k4582 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in ... */
static void C_ccall f_3848(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3848,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3823(t6,((C_word*)t0)[5],t5);}

/* k3857 in a3810 in k4603 in k4582 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in ... */
static void C_ccall f_3859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3859,2,av);}
/* chicken-status.scm:95: chicken.file#glob */
t2=C_fast_retrieve(lf[104]);{
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

/* k3861 in k4603 in k4582 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_3863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3863,2,av);}
/* chicken-status.scm:92: append-map */
f_1874(((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* main#format-string in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in ... */
static void C_fcall f_3865(C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim_args((void *)trf_3865,4,t1,t2,t3,t4);}
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
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3884,a[2]=t7,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t16=C_fixnum_difference(t3,t14);
t17=C_i_fixnum_max(C_fix(0),t16);
/* chicken-status.scm:101: scheme#make-string */
t18=*((C_word*)lf[58]+1);{
C_word av2[4];
av2[0]=t18;
av2[1]=t15;
av2[2]=t17;
av2[3]=t11;
((C_proc)(void*)(*((C_word*)t18+1)))(4,av2);}}

/* k3882 in main#format-string in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in ... */
static void C_ccall f_3884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3884,2,av);}
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[57]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=t2;
tp(4,av2);}}
else{
t2=((C_word*)t0)[3];
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[57]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
av2[3]=t1;
tp(4,av2);}}}

/* main#list-installed-eggs in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in ... */
static void C_ccall f_3931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_3931,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3935,a[2]=t4,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
/* chicken-status.scm:106: repo-path */
f_3622(t5);}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_i_car(t4);
f_3935(2,av2);}}}

/* k3933 in main#list-installed-eggs in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in ... */
static void C_ccall f_3935(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3935,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_i_nullp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_retrieve2(lf[21],C_text("main#+egg-info-extension+")):C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3945,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3952,a[2]=t10,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:109: chicken.sort#sort */
t12=C_fast_retrieve(lf[62]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=((C_word*)t0)[4];
av2[3]=*((C_word*)lf[63]+1);
((C_proc)(void*)(*((C_word*)t12+1)))(4,av2);}}

/* g1067 in k3933 in main#list-installed-eggs in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_fcall f_3945(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3945,3,t0,t1,t2);}
t3=C_retrieve2(lf[60],C_text("main#list-egg-info"));
/* chicken-status.scm:108: g1082 */
t4=C_retrieve2(lf[60],C_text("main#list-egg-info"));{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
av2[4]=((C_word*)t0)[3];
f_4010(5,av2);}}

/* k3950 in k3933 in main#list-installed-eggs in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_ccall f_3952(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3952,2,av);}
a=C_alloc(6);
t2=C_i_check_list_2(t1,lf[61]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3960,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3960(t6,((C_word*)t0)[3],t1);}

/* for-each-loop1066 in k3950 in k3933 in main#list-installed-eggs in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_fcall f_3960(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3960,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3970,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:108: g1067 */
t5=((C_word*)t0)[3];
f_3945(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3968 in for-each-loop1066 in k3950 in k3933 in main#list-installed-eggs in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_3970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3970,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3960(t3,((C_word*)t0)[4],t2);}

/* main#list-egg-info in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in ... */
static void C_ccall f_4010(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_4010,5,av);}
a=C_alloc(11);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4014,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:113: read-info */
f_3656(t5,t2,C_a_i_list(&a,2,t3,t4));}

/* k4012 in main#list-egg-info in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in ... */
static void C_ccall f_4014(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4014,2,av);}
a=C_alloc(7);
t2=(C_truep(t1)?(
  /* chicken-status.scm:114: get-egg-property */
  f_3198(t1,lf[64],C_SCHEME_END_OF_LIST)
):C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=t3;
f_4020(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4047,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:115: chicken.load#find-file */
t5=C_fast_retrieve(lf[50]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[71];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k4018 in k4012 in main#list-egg-info in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_fcall f_4020(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_4020,2,t0,t1);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4027,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4044,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:118: scheme#string-append */
t5=*((C_word*)lf[68]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[69];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k4025 in k4018 in k4012 in main#list-egg-info in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f_4027(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4027,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4031,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4035,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4040,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:121: chicken.string#->string */
t6=C_fast_retrieve(lf[67]);{
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

/* k4029 in k4025 in k4018 in k4012 in main#list-egg-info in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_4031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4031,2,av);}
/* chicken-status.scm:118: chicken.base#print */
t2=*((C_word*)lf[65]+1);{
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

/* k4033 in k4025 in k4018 in k4012 in main#list-egg-info in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_4035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4035,2,av);}
a=C_alloc(6);
/* chicken-status.scm:120: format-string */
f_3865(((C_word*)t0)[2],t1,C_retrieve2(lf[37],C_text("main#list-width")),C_a_i_list(&a,2,C_SCHEME_TRUE,C_make_character(46)));}

/* k4038 in k4025 in k4018 in k4012 in main#list-egg-info in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_4040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4040,2,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[57]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[66];
av2[3]=t1;
tp(4,av2);}}

/* k4042 in k4018 in k4012 in main#list-egg-info in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f_4044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4044,2,av);}
a=C_alloc(6);
/* chicken-status.scm:118: format-string */
f_3865(((C_word*)t0)[2],t1,C_retrieve2(lf[37],C_text("main#list-width")),C_a_i_list(&a,2,C_SCHEME_FALSE,C_make_character(46)));}

/* k4045 in k4012 in main#list-egg-info in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_ccall f_4047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4047,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4050,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
/* chicken-status.scm:116: scheme#with-input-from-file */
t3=C_fast_retrieve(lf[42]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=*((C_word*)lf[43]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=((C_word*)t0)[2];
f_4020(t3,lf[70]);}}

/* k4048 in k4045 in k4012 in main#list-egg-info in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f_4050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4050,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_4020(t3,t2);}
else{
t2=((C_word*)t0)[2];
f_4020(t2,lf[70]);}}

/* k4066 in k4582 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f_4068(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4068,2,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4080,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4113,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4117,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:129: chicken.file#directory */
t5=C_fast_retrieve(lf[102]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_retrieve2(lf[25],C_text("main#cache-directory"));
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4075 in for-each-loop1109 in k4078 in k4066 in k4582 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in ... */
static void C_ccall f_4077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4077,2,av);}
/* chicken-status.scm:128: list-egg-info */
t2=C_retrieve2(lf[60],C_text("main#list-egg-info"));{
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
av2[4]=lf[101];
f_4010(5,av2);}}

/* k4078 in k4066 in k4582 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_4080(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4080,2,av);}
a=C_alloc(5);
t2=C_i_check_list_2(t1,lf[61]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4088,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4088(t6,((C_word*)t0)[2],t1);}

/* for-each-loop1109 in k4078 in k4066 in k4582 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in ... */
static void C_fcall f_4088(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4088,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4098,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4077,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:128: chicken.pathname#make-pathname */
t8=C_fast_retrieve(lf[45]);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_retrieve2(lf[25],C_text("main#cache-directory"));
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4096 in for-each-loop1109 in k4078 in k4066 in k4582 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in ... */
static void C_ccall f_4098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4098,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4088(t3,((C_word*)t0)[4],t2);}

/* k4111 in k4066 in k4582 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_4113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4113,2,av);}
/* chicken-status.scm:129: chicken.sort#sort */
t2=C_fast_retrieve(lf[62]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=*((C_word*)lf[63]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4115 in k4066 in k4582 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_4117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4117,2,av);}
/* chicken-status.scm:129: filter-egg-names */
f_3711(((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* main#gather-components in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in ... */
static void C_fcall f_4119(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_4119,3,t1,t2,t3);}
a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4125,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:132: append-map */
f_1874(t1,t4,t2,C_SCHEME_END_OF_LIST);}

/* a4124 in main#gather-components in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in ... */
static void C_ccall f_4125(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4125,3,av);}
t3=C_retrieve2(lf[73],C_text("main#gather-components-rec"));
/* chicken-status.scm:132: g1134 */
t4=C_retrieve2(lf[73],C_text("main#gather-components-rec"));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
f_4131(4,av2);}}

/* main#gather-components-rec in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in ... */
static void C_ccall f_4131(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_4131,4,av);}
a=C_alloc(12);
t4=C_i_car(t2);
t5=C_eqp(t4,lf[74]);
if(C_truep(t5)){
if(C_truep(C_retrieve2(lf[28],C_text("main#host-extensions")))){
t6=t2;
t7=C_u_i_cdr(t6);
/* chicken-status.scm:137: gather-components */
f_4119(t1,t7,lf[74]);}
else{
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t6=C_eqp(t4,lf[75]);
if(C_truep(t6)){
if(C_truep(C_retrieve2(lf[29],C_text("main#target-extensions")))){
t7=t2;
t8=C_u_i_cdr(t7);
/* chicken-status.scm:139: gather-components */
f_4119(t1,t8,lf[75]);}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t7=C_eqp(t4,lf[76]);
if(C_truep(t7)){
t8=C_i_cadr(t2);
t9=C_a_i_list3(&a,3,lf[76],t3,t8);
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_a_i_list1(&a,1,t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t8=C_eqp(t4,lf[77]);
if(C_truep(t8)){
t9=C_i_cadr(t2);
t10=C_a_i_list3(&a,3,lf[77],t3,t9);
t11=t1;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_a_i_list1(&a,1,t10);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t9=C_eqp(t4,lf[78]);
if(C_truep(t9)){
t10=C_i_cadr(t2);
t11=C_a_i_list3(&a,3,lf[78],t3,t10);
t12=t1;{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_a_i_list1(&a,1,t11);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t10=C_eqp(t4,lf[79]);
if(C_truep(t10)){
t11=C_i_cadr(t2);
t12=C_a_i_list3(&a,3,lf[79],t3,t11);
t13=t1;{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_a_i_list1(&a,1,t12);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t11=C_eqp(t4,lf[80]);
if(C_truep(t11)){
t12=C_i_cadr(t2);
t13=C_a_i_list3(&a,3,lf[80],t3,t12);
t14=t1;{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_a_i_list1(&a,1,t13);
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
t12=C_eqp(t4,lf[81]);
if(C_truep(t12)){
t13=C_i_cadr(t2);
t14=C_a_i_list3(&a,3,lf[81],t3,t13);
t15=t1;{
C_word *av2=av;
av2[0]=t15;
av2[1]=C_a_i_list1(&a,1,t14);
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}
else{
t13=t1;{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}}}}}}}}}

/* main#list-installed-components in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in ... */
static void C_ccall f_4283(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4283,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4289,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:148: get-terminal-width */
f_3541(t3);}

/* k4287 in main#list-installed-components in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in ... */
static void C_ccall f_4289(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(43,c,3)))){
C_save_and_reclaim((void *)f_4289,2,av);}
a=C_alloc(43);
t2=C_s_a_i_minus(&a,2,t1,C_fix(2));
t3=C_s_a_i_quotient(&a,2,t2,C_fix(2));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4292,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[2];
t6=C_i_check_list_2(t5,lf[61]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4424,a[2]=t8,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_4424(t10,((C_word*)t0)[3],t5);}

/* g1151 in k4287 in main#list-installed-components in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_fcall f_4292(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4292,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4296,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:151: read-info */
f_3656(t3,t2,C_SCHEME_END_OF_LIST);}

/* k4294 in g1151 in k4287 in main#list-installed-components in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f_4296(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_4296,2,av);}
a=C_alloc(13);
t2=(
  /* chicken-status.scm:152: get-egg-property */
  f_3198(t1,lf[64],C_SCHEME_END_OF_LIST)
);
t3=t2;
t4=(
  /* chicken-status.scm:153: get-egg-property* */
  f_3222(t1,lf[83],C_SCHEME_END_OF_LIST)
);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4305,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4396,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4413,a[2]=t7,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:155: scheme#string-append */
t9=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[90];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
/* chicken-status.scm:159: chicken.base#print */
t7=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k4303 in k4294 in g1151 in k4287 in main#list-installed-components in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_4305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4305,2,av);}
a=C_alloc(3);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4311,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:161: gather-components */
f_4119(t2,((C_word*)t0)[2],C_SCHEME_FALSE);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4309 in k4303 in k4294 in g1151 in k4287 in main#list-installed-components in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in ... */
static void C_ccall f_4311(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4311,2,av);}
a=C_alloc(5);
t2=C_i_check_list_2(t1,lf[61]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4368,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4368(t6,((C_word*)t0)[2],t1);}

/* k4318 in for-each-loop1167 in k4309 in k4303 in k4294 in g1151 in k4287 in main#list-installed-components in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in ... */
static void C_ccall f_4320(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4320,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4348,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_caddr(((C_word*)t0)[2]);
/* chicken-status.scm:165: chicken.string#->string */
t6=C_fast_retrieve(lf[67]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k4322 in k4318 in for-each-loop1167 in k4309 in k4303 in k4294 in g1151 in k4287 in main#list-installed-components in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in ... */
static void C_ccall f_4324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_4324,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_eqp(t2,lf[74]);
if(C_truep(t3)){
/* chicken-status.scm:164: chicken.base#print */
t4=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[84];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[85];
av2[5]=t1;
av2[6]=lf[86];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}}
else{
t4=C_eqp(t2,lf[75]);
if(C_truep(t4)){
/* chicken-status.scm:164: chicken.base#print */
t5=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[84];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[85];
av2[5]=t1;
av2[6]=lf[87];
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}
else{
/* chicken-status.scm:164: chicken.base#print */
t5=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[84];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[85];
av2[5]=t1;
av2[6]=lf[88];
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}}}

/* k4346 in k4318 in for-each-loop1167 in k4309 in k4303 in k4294 in g1151 in k4287 in main#list-installed-components in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in ... */
static void C_ccall f_4348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4348,2,av);}
/* chicken-status.scm:165: format-string */
f_3865(((C_word*)t0)[2],t1,C_fix(32),C_SCHEME_END_OF_LIST);}

/* k4354 in for-each-loop1167 in k4309 in k4303 in k4294 in g1151 in k4287 in main#list-installed-components in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in ... */
static void C_ccall f_4356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4356,2,av);}
/* chicken-status.scm:164: format-string */
f_3865(((C_word*)t0)[2],t1,C_fix(32),C_SCHEME_END_OF_LIST);}

/* for-each-loop1167 in k4309 in k4303 in k4294 in g1151 in k4287 in main#list-installed-components in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in ... */
static void C_fcall f_4368(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_4368,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4378,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4320,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4356,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=C_i_car(t6);
/* chicken-status.scm:164: chicken.string#->string */
t10=C_fast_retrieve(lf[67]);{
C_word av2[3];
av2[0]=t10;
av2[1]=t8;
av2[2]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4376 in for-each-loop1167 in k4309 in k4303 in k4294 in g1151 in k4287 in main#list-installed-components in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in ... */
static void C_ccall f_4378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4378,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4368(t3,((C_word*)t0)[4],t2);}

/* k4394 in k4294 in g1151 in k4287 in main#list-installed-components in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_4396(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4396,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4400,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4404,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4409,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:157: chicken.string#->string */
t6=C_fast_retrieve(lf[67]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k4398 in k4394 in k4294 in g1151 in k4287 in main#list-installed-components in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in ... */
static void C_ccall f_4400(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4400,2,av);}
/* chicken-status.scm:155: chicken.base#print */
t2=*((C_word*)lf[65]+1);{
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

/* k4402 in k4394 in k4294 in g1151 in k4287 in main#list-installed-components in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in ... */
static void C_ccall f_4404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4404,2,av);}
a=C_alloc(6);
/* chicken-status.scm:156: format-string */
f_3865(((C_word*)t0)[2],t1,((C_word*)t0)[3],C_a_i_list(&a,2,C_SCHEME_TRUE,C_make_character(46)));}

/* k4407 in k4394 in k4294 in g1151 in k4287 in main#list-installed-components in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in ... */
static void C_ccall f_4409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4409,2,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[57]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[89];
av2[3]=t1;
tp(4,av2);}}

/* k4411 in k4294 in g1151 in k4287 in main#list-installed-components in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_4413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4413,2,av);}
a=C_alloc(6);
/* chicken-status.scm:155: format-string */
f_3865(((C_word*)t0)[2],t1,((C_word*)t0)[3],C_a_i_list(&a,2,C_SCHEME_FALSE,C_make_character(46)));}

/* for-each-loop1150 in k4287 in main#list-installed-components in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_fcall f_4424(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4424,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4434,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:149: g1151 */
t5=((C_word*)t0)[3];
f_4292(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4432 in for-each-loop1150 in k4287 in main#list-installed-components in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f_4434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4434,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4424(t3,((C_word*)t0)[4],t2);}

/* main#list-installed-files in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in ... */
static void C_ccall f_4447(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_4447,3,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4451,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4484,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4486,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:177: append-map */
f_1874(t4,t5,t2,C_SCHEME_END_OF_LIST);}

/* k4449 in main#list-installed-files in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in ... */
static void C_ccall f_4451(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4451,2,av);}
a=C_alloc(5);
t2=C_i_check_list_2(t1,lf[61]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4459,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4459(t6,((C_word*)t0)[2],t1);}

/* for-each-loop1199 in k4449 in main#list-installed-files in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_fcall f_4459(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4459,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4469,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:174: g1200 */
t5=*((C_word*)lf[65]+1);{
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

/* k4467 in for-each-loop1199 in k4449 in main#list-installed-files in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f_4469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4469,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4459(t3,((C_word*)t0)[4],t2);}

/* k4482 in main#list-installed-files in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in ... */
static void C_ccall f_4484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4484,2,av);}
/* chicken-status.scm:176: chicken.sort#sort */
t2=C_fast_retrieve(lf[62]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=*((C_word*)lf[63]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a4485 in main#list-installed-files in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in ... */
static void C_ccall f_4486(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4486,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4494,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:179: read-info */
f_3656(t3,t2,C_SCHEME_END_OF_LIST);}

/* k4492 in a4485 in main#list-installed-files in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_ccall f_4494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4494,2,av);}
/* chicken-status.scm:179: get-egg-property* */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
  /* chicken-status.scm:179: get-egg-property* */
  f_3222(t1,lf[92],C_SCHEME_END_OF_LIST)
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* main#dump-installed-versions in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in ... */
static void C_ccall f_4496(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4496,3,av);}
a=C_alloc(5);
t3=C_i_check_list_2(t2,lf[61]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4532,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4532(t7,t1,t2);}

/* k4511 in k4522 in for-each-loop1219 in main#dump-installed-versions in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f_4513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4513,2,av);}
a=C_alloc(6);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
/* chicken-status.scm:187: chicken.pretty-print#pp */
t4=C_fast_retrieve(lf[94]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
/* chicken-status.scm:187: chicken.pretty-print#pp */
t3=C_fast_retrieve(lf[94]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k4522 in for-each-loop1219 in main#dump-installed-versions in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_ccall f_4524(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4524,2,av);}
a=C_alloc(4);
t2=(
  /* chicken-status.scm:186: get-egg-property */
  f_3198(t1,lf[64],C_SCHEME_END_OF_LIST)
);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4513,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:187: scheme#string->symbol */
t5=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* for-each-loop1219 in main#dump-installed-versions in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in ... */
static void C_fcall f_4532(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4532,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4542,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4524,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:186: read-info */
f_3656(t7,t6,C_SCHEME_END_OF_LIST);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4540 in for-each-loop1219 in main#dump-installed-versions in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_ccall f_4542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4542,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4532(t3,((C_word*)t0)[4],t2);}

/* loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in ... */
static void C_fcall f_4571(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4571,4,t0,t1,t2,t3);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4584,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t5=((C_word*)((C_word*)t0)[4])[1];
if(C_truep(t5)){
t6=t4;
f_4584(t6,t5);}
else{
t6=((C_word*)((C_word*)t0)[5])[1];
t7=t4;
f_4584(t7,t6);}}
else{
t5=t4;
f_4584(t5,C_SCHEME_FALSE);}}
else{
t4=C_i_car(t2);
t5=t4;
if(C_truep((C_truep(C_i_equalp(t5,lf[106]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t5,lf[107]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t5,lf[108]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
t6=t1;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5204,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:192: chicken.base#print */
t8=*((C_word*)lf[65]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[109];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
if(C_truep(C_i_string_equal_p(t5,lf[110]))){
t6=lf[29] /* main#target-extensions */ =C_SCHEME_FALSE;;
t7=t2;
t8=C_u_i_cdr(t7);
/* chicken-status.scm:234: loop */
t14=t1;
t15=t8;
t16=t3;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t5,lf[111]))){
t6=lf[28] /* main#host-extensions */ =C_SCHEME_FALSE;;
t7=t2;
t8=C_u_i_cdr(t7);
/* chicken-status.scm:237: loop */
t14=t1;
t15=t8;
t16=t3;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t5,lf[112]))){
t6=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t7=t2;
t8=C_u_i_cdr(t7);
/* chicken-status.scm:240: loop */
t14=t1;
t15=t8;
t16=t3;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t5,lf[113]))){
t6=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t7=t2;
t8=C_u_i_cdr(t7);
/* chicken-status.scm:243: loop */
t14=t1;
t15=t8;
t16=t3;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t5,lf[114]))){
t6=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
t7=t2;
t8=C_u_i_cdr(t7);
/* chicken-status.scm:246: loop */
t14=t1;
t15=t8;
t16=t3;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
t6=C_u_i_string_equal_p(t5,lf[115]);
t7=(C_truep(t6)?t6:C_u_i_string_equal_p(t5,lf[116]));
if(C_truep(t7)){
t8=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_TRUE);
t9=t2;
t10=C_u_i_cdr(t9);
/* chicken-status.scm:249: loop */
t14=t1;
t15=t10;
t16=t3;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
t8=C_u_i_string_equal_p(t5,lf[117]);
t9=(C_truep(t8)?t8:C_u_i_string_equal_p(t5,lf[118]));
if(C_truep(t9)){
t10=C_set_block_item(((C_word*)t0)[6],0,C_SCHEME_TRUE);
t11=t2;
t12=C_u_i_cdr(t11);
/* chicken-status.scm:252: loop */
t14=t1;
t15=t12;
t16=t3;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t5,lf[119]))){
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4729,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4736,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:254: chicken.platform#chicken-version */
t12=C_fast_retrieve(lf[120]);{
C_word av2[2];
av2[0]=t12;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4742,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t11=C_block_size(t5);
if(C_truep(C_i_fixnum_positivep(t11))){
t12=C_i_string_ref(t5,C_fix(0));
t13=t10;
f_4742(t13,C_u_i_char_equalp(C_make_character(45),t12));}
else{
t12=t10;
f_4742(t12,C_SCHEME_FALSE);}}}}}}}}}}}}

/* k4582 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_fcall f_4584(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4584,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4587,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4592,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:219: chicken.port#with-output-to-port */
t4=C_fast_retrieve(lf[99]);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=*((C_word*)lf[100]+1);
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[4];
t4=((C_word*)((C_word*)t0)[5])[1];
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4068,a[2]=t2,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:125: chicken.file#directory-exists? */
t6=C_fast_retrieve(lf[24]);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_retrieve2(lf[25],C_text("main#cache-directory"));
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4605,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=t2;
f_4605(t3,C_retrieve2(lf[93],C_text("main#dump-installed-versions")));}
else{
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t3=C_retrieve2(lf[91],C_text("main#list-installed-files"));
t4=t2;
f_4605(t4,C_retrieve2(lf[91],C_text("main#list-installed-files")));}
else{
t3=t2;
f_4605(t3,(C_truep(((C_word*)((C_word*)t0)[8])[1])?C_retrieve2(lf[82],C_text("main#list-installed-components")):C_retrieve2(lf[59],C_text("main#list-installed-eggs"))));}}}}}

/* k4585 in k4582 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f_4587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4587,2,av);}
/* chicken-status.scm:221: chicken.base#exit */
t2=C_fast_retrieve(lf[97]);{
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

/* a4591 in k4582 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f_4592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4592,2,av);}
/* chicken-status.scm:220: g1261 */
t2=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[98];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4603 in k4582 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_fcall f_4605(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,0,3)))){
C_save_and_reclaim_args((void *)trf_4605,2,t0,t1);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4612,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4616,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3809,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3811,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3863,a[2]=t6,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:96: repo-path */
f_3622(t8);}

/* k4610 in k4603 in k4582 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_4612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4612,2,av);}
/* chicken-status.scm:218: g1264 */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4614 in k4603 in k4582 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_4616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4616,2,av);}
/* chicken-status.scm:228: filter-egg-names */
f_3711(((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k4727 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_ccall f_4729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4729,2,av);}
/* chicken-status.scm:255: chicken.base#exit */
t2=C_fast_retrieve(lf[97]);{
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

/* k4734 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_ccall f_4736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4736,2,av);}
/* chicken-status.scm:254: chicken.base#print */
t2=*((C_word*)lf[65]+1);{
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

/* k4740 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_fcall f_4742(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4742,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4751,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4825,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:259: scheme#substring */
t5=*((C_word*)lf[123]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5218,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:192: chicken.base#print */
t5=*((C_word*)lf[65]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[109];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[6];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[5]);
/* chicken-status.scm:265: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4571(t5,((C_word*)t0)[4],t3,t4);}}

/* k4749 in k4740 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f_4751(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4751,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4757,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4817,tmp=(C_word)a,a+=2,tmp);
t5=t4;
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2050,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_2050(t9,t3,t2);}

/* k4755 in k4749 in k4740 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_4757(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4757,2,av);}
a=C_alloc(21);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4764,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4776,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4780,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4780(t11,t7,((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5211,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:192: chicken.base#print */
t4=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[109];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k4762 in k4755 in k4749 in k4740 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in ... */
static void C_ccall f_4764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4764,2,av);}
/* chicken-status.scm:261: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4571(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k4774 in k4755 in k4749 in k4740 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in ... */
static void C_ccall f_4776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4776,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken-status.scm:261: scheme#append */
t4=*((C_word*)lf[3]+1);{
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

/* map-loop1300 in k4755 in k4749 in k4740 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in ... */
static void C_fcall f_4780(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4780,3,t0,t1,t2);}
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

/* a4816 in k4749 in k4740 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_4817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4817,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_memq(t2,lf[121]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4823 in k4740 in loop in k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f_4825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4825,2,av);}
/* string->list */
t2=C_fast_retrieve(lf[122]);{
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

/* k4857 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in ... */
static void C_ccall f_4859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4859,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4865,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.base#implicit-exit-handler */
t3=C_fast_retrieve(lf[96]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4863 in k4857 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in ... */
static void C_ccall f_4865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4865,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4867 in k3616 in k3157 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in ... */
static void C_ccall f_4869(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_4869,2,av);}
a=C_alloc(20);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4571,a[2]=t9,a[3]=t11,a[4]=t7,a[5]=t3,a[6]=t5,a[7]=t13,tmp=(C_word)a,a+=8,tmp));
t15=((C_word*)t13)[1];
f_4571(t15,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k4878 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in ... */
static void C_ccall f_4880(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4880,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4883,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t1;
t4=C_a_i_list2(&a,2,t3,lf[125]);
/* egg-environment.scm:118: chicken.pathname#make-pathname */
t5=C_fast_retrieve(lf[45]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
av2[2]=t4;
av2[3]=lf[126];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4886,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4896,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:119: chicken.process-context#get-environment-variable */
t5=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[129];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k4881 in k4878 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in ... */
static void C_ccall f_4883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4883,2,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,t1,lf[125]);
/* egg-environment.scm:118: chicken.pathname#make-pathname */
t3=C_fast_retrieve(lf[45]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=lf[126];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4884 in k4878 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in ... */
static void C_ccall f_4886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4886,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=t1;
t3=C_a_i_list2(&a,2,t2,lf[125]);
/* egg-environment.scm:118: chicken.pathname#make-pathname */
t4=C_fast_retrieve(lf[45]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
av2[3]=lf[126];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
/* egg-environment.scm:120: chicken.process-context#current-directory */
t2=C_fast_retrieve(lf[127]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4894 in k4878 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in ... */
static void C_ccall f_4896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4896,2,av);}
/* egg-environment.scm:119: probe-dir */
f_3142(((C_word*)t0)[2],t1);}

/* k4898 in k3154 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in ... */
static void C_ccall f_4900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4900,2,av);}
/* egg-environment.scm:118: probe-dir */
f_3142(((C_word*)t0)[2],t1);}

/* k4902 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in k3001 in ... */
static void C_ccall f_4904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4904,2,av);}
/* egg-environment.scm:94: scheme#string-append */
t2=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[15],C_text("main#default-runlibdir"));
av2[3]=lf[132];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4907 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k3049 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in k3001 in k2997 in ... */
static void C_ccall f_4909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4909,2,av);}
/* egg-environment.scm:91: scheme#string-append */
t2=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[14],C_text("main#default-libdir"));
av2[3]=lf[134];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4912 in k3033 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2985 in k2981 in k2977 in k2973 in k2969 in k2965 in k2961 in k2955 in k1671 in ... */
static void C_ccall f_4914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4914,2,av);}
/* egg-environment.scm:77: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[45]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[16],C_text("main#default-bindir"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4916 in k3029 in k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2985 in k2981 in k2977 in k2973 in k2969 in k2965 in k2961 in k2955 in k1671 in k1668 in ... */
static void C_ccall f_4918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4918,2,av);}
/* egg-environment.scm:74: scheme#string-append */
t2=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[16],C_text("main#default-bindir"));
av2[3]=lf[136];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4920 in k3025 in k3021 in k4927 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2985 in k2981 in k2977 in k2973 in k2969 in k2965 in k2961 in k2955 in k1671 in k1668 in k1665 in ... */
static void C_ccall f_4922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4922,2,av);}
/* egg-environment.scm:71: scheme#string-append */
t2=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[16],C_text("main#default-bindir"));
av2[3]=lf[137];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4927 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2985 in k2981 in k2977 in k2973 in k2969 in k2965 in k2961 in k2955 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in ... */
static void C_ccall f_4929(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4929,2,av);}
a=C_alloc(6);
t2=C_eqp(t1,lf[17]);
t3=(C_truep(t2)?C_mk_bool(C_WINDOWS_SHELL):lf[18]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3023,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[135]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_PREFIX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

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
if(C_unlikely(!C_demand_2(495))){
C_save(t1);
C_rereclaim2(495*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,143);
lf[0]=C_h_intern(&lf[0],5, C_text("main#"));
lf[2]=C_h_intern(&lf[2],5, C_text("foldr"));
lf[3]=C_h_intern(&lf[3],13, C_text("scheme#append"));
lf[4]=C_h_intern(&lf[4],3, C_text("map"));
lf[6]=C_h_intern(&lf[6],12, C_text("scheme#null\077"));
lf[17]=C_h_intern(&lf[17],7, C_text("windows"));
lf[18]=C_h_intern(&lf[18],4, C_text("unix"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010egg-info"));
lf[24]=C_h_intern(&lf[24],30, C_text("chicken.file#directory-exists\077"));
lf[31]=C_h_intern(&lf[31],19, C_text("\003sysstandard-output"));
lf[32]=C_h_intern(&lf[32],10, C_text("scheme#min"));
lf[33]=C_h_intern(&lf[33],26, C_text("chicken.port#terminal-size"));
lf[34]=C_h_intern(&lf[34],40, C_text("chicken.condition#with-exception-handler"));
lf[35]=C_h_intern(&lf[35],37, C_text("scheme#call-with-current-continuation"));
lf[36]=C_h_intern(&lf[36],27, C_text("chicken.port#terminal-port\077"));
lf[39]=C_h_intern(&lf[39],14, C_text("\003syssplit-path"));
lf[40]=C_h_intern(&lf[40],32, C_text("chicken.platform#repository-path"));
lf[42]=C_h_intern(&lf[42],27, C_text("scheme#with-input-from-file"));
lf[43]=C_h_intern(&lf[43],11, C_text("scheme#read"));
lf[44]=C_h_intern(&lf[44],25, C_text("chicken.file#file-exists\077"));
lf[45]=C_h_intern(&lf[45],30, C_text("chicken.pathname#make-pathname"));
lf[46]=C_h_intern(&lf[46],35, C_text("chicken.pathname#pathname-extension"));
lf[47]=C_h_intern(&lf[47],30, C_text("chicken.pathname#pathname-file"));
lf[48]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007chicken"));
lf[49]=C_h_intern(&lf[49],35, C_text("chicken.pathname#pathname-directory"));
lf[50]=C_h_intern(&lf[50],22, C_text("chicken.load#find-file"));
lf[52]=C_h_intern(&lf[52],15, C_text("scheme#string=\077"));
lf[53]=C_h_intern(&lf[53],30, C_text("chicken.irregex#irregex-search"));
lf[54]=C_h_intern(&lf[54],23, C_text("chicken.irregex#irregex"));
lf[55]=C_h_intern(&lf[55],25, C_text("chicken.irregex#glob->sre"));
lf[57]=C_h_intern(&lf[57],17, C_text("\003sysstring-append"));
lf[58]=C_h_intern(&lf[58],18, C_text("scheme#make-string"));
lf[61]=C_h_intern(&lf[61],8, C_text("for-each"));
lf[62]=C_h_intern(&lf[62],17, C_text("chicken.sort#sort"));
lf[63]=C_h_intern(&lf[63],15, C_text("scheme#string<\077"));
lf[64]=C_h_intern(&lf[64],7, C_text("version"));
lf[65]=C_h_intern(&lf[65],18, C_text("chicken.base#print"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012 version: "));
lf[67]=C_h_intern(&lf[67],23, C_text("chicken.string#->string"));
lf[68]=C_h_intern(&lf[68],20, C_text("scheme#string-append"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001 "));
lf[70]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007unknown"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007VERSION"));
lf[74]=C_h_intern(&lf[74],4, C_text("host"));
lf[75]=C_h_intern(&lf[75],6, C_text("target"));
lf[76]=C_h_intern(&lf[76],9, C_text("extension"));
lf[77]=C_h_intern(&lf[77],4, C_text("data"));
lf[78]=C_h_intern(&lf[78],21, C_text("generated-source-file"));
lf[79]=C_h_intern(&lf[79],9, C_text("c-include"));
lf[80]=C_h_intern(&lf[80],14, C_text("scheme-include"));
lf[81]=C_h_intern(&lf[81],7, C_text("program"));
lf[83]=C_h_intern(&lf[83],10, C_text("components"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002  "));
lf[85]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002  "));
lf[86]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007 (host)"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011 (target)"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012 version: "));
lf[90]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001 "));
lf[92]=C_h_intern(&lf[92],15, C_text("installed-files"));
lf[94]=C_h_intern(&lf[94],23, C_text("chicken.pretty-print#pp"));
lf[95]=C_h_intern(&lf[95],21, C_text("scheme#string->symbol"));
lf[96]=C_h_intern(&lf[96],34, C_text("chicken.base#implicit-exit-handler"));
lf[97]=C_h_intern(&lf[97],17, C_text("chicken.base#exit"));
lf[98]=C_decode_literal(C_heaptop,C_text("\376B\000\000&-components cannot be used with -list."));
lf[99]=C_h_intern(&lf[99],32, C_text("chicken.port#with-output-to-port"));
lf[100]=C_h_intern(&lf[100],18, C_text("\003sysstandard-error"));
lf[101]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003egg"));
lf[102]=C_h_intern(&lf[102],22, C_text("chicken.file#directory"));
lf[103]=C_h_intern(&lf[103],13, C_text("scheme#equal\077"));
lf[104]=C_h_intern(&lf[104],17, C_text("chicken.file#glob"));
lf[105]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\052"));
lf[106]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-help"));
lf[107]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-h"));
lf[108]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006--help"));
lf[109]=C_decode_literal(C_heaptop,C_text("\376B\000\002wusage: chicken-status [OPTION ...] [NAME ...]\012\012  -h   -help                "
"    show this message\012       -version                 show version and exit\012  -c"
"   -components              list installed components\012       -cached            "
"      list eggs in cache\012  -f   -files                   list installed files\012  "
"     -list                    dump installed extensions and their versions in \042o"
"verride\042 format\012       -match                   treat NAME as glob pattern\012     "
"  -host                    when cross-compiling, only show host extensions\012     "
"  -target                  when cross-compiling, only show target extensions"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-host"));
lf[111]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007-target"));
lf[112]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006-match"));
lf[113]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007-cached"));
lf[114]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-list"));
lf[115]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-f"));
lf[116]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006-files"));
lf[117]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-c"));
lf[118]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013-components"));
lf[119]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-version"));
lf[120]=C_h_intern(&lf[120],32, C_text("chicken.platform#chicken-version"));
lf[121]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000f\376\003\000\000\002\376\377\012\000\000c\376\003\000\000\002\376\377\012\000\000a\376\377\016"));
lf[122]=C_h_intern(&lf[122],16, C_text("\003sysstring->list"));
lf[123]=C_h_intern(&lf[123],16, C_text("scheme#substring"));
lf[124]=C_h_intern(&lf[124],46, C_text("chicken.process-context#command-line-arguments"));
lf[125]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020.chicken-install"));
lf[126]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005cache"));
lf[127]=C_h_intern(&lf[127],41, C_text("chicken.process-context#current-directory"));
lf[128]=C_h_intern(&lf[128],48, C_text("chicken.process-context#get-environment-variable"));
lf[129]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013USERPROFILE"));
lf[130]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004HOME"));
lf[131]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021CHICKEN_EGG_CACHE"));
lf[132]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011/chicken/"));
lf[133]=C_h_intern(&lf[133],18, C_text("\003sysfixnum->string"));
lf[134]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011/chicken/"));
lf[135]=C_h_intern(&lf[135],17, C_text("\003syspeek-c-string"));
lf[136]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[137]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[138]=C_h_intern(&lf[138],30, C_text("chicken.platform#software-type"));
lf[139]=C_h_intern(&lf[139],25, C_text("chicken.platform#feature\077"));
lf[140]=C_h_intern(&lf[140],14, C_text("\000cross-chicken"));
lf[141]=C_h_intern(&lf[141],28, C_text("\003sysregister-compiled-module"));
lf[142]=C_h_intern(&lf[142],4, C_text("main"));
C_register_lf2(lf,143,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1646,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[219] = {
{C_text("f5204:chicken_2dstatus_2escm"),(void*)f5204},
{C_text("f5211:chicken_2dstatus_2escm"),(void*)f5211},
{C_text("f5218:chicken_2dstatus_2escm"),(void*)f5218},
{C_text("f_1646:chicken_2dstatus_2escm"),(void*)f_1646},
{C_text("f_1649:chicken_2dstatus_2escm"),(void*)f_1649},
{C_text("f_1652:chicken_2dstatus_2escm"),(void*)f_1652},
{C_text("f_1655:chicken_2dstatus_2escm"),(void*)f_1655},
{C_text("f_1658:chicken_2dstatus_2escm"),(void*)f_1658},
{C_text("f_1661:chicken_2dstatus_2escm"),(void*)f_1661},
{C_text("f_1664:chicken_2dstatus_2escm"),(void*)f_1664},
{C_text("f_1667:chicken_2dstatus_2escm"),(void*)f_1667},
{C_text("f_1670:chicken_2dstatus_2escm"),(void*)f_1670},
{C_text("f_1673:chicken_2dstatus_2escm"),(void*)f_1673},
{C_text("f_1874:chicken_2dstatus_2escm"),(void*)f_1874},
{C_text("f_1889:chicken_2dstatus_2escm"),(void*)f_1889},
{C_text("f_1897:chicken_2dstatus_2escm"),(void*)f_1897},
{C_text("f_1905:chicken_2dstatus_2escm"),(void*)f_1905},
{C_text("f_1916:chicken_2dstatus_2escm"),(void*)f_1916},
{C_text("f_1929:chicken_2dstatus_2escm"),(void*)f_1929},
{C_text("f_1936:chicken_2dstatus_2escm"),(void*)f_1936},
{C_text("f_1943:chicken_2dstatus_2escm"),(void*)f_1943},
{C_text("f_1947:chicken_2dstatus_2escm"),(void*)f_1947},
{C_text("f_1959:chicken_2dstatus_2escm"),(void*)f_1959},
{C_text("f_1961:chicken_2dstatus_2escm"),(void*)f_1961},
{C_text("f_2008:chicken_2dstatus_2escm"),(void*)f_2008},
{C_text("f_2010:chicken_2dstatus_2escm"),(void*)f_2010},
{C_text("f_2050:chicken_2dstatus_2escm"),(void*)f_2050},
{C_text("f_2072:chicken_2dstatus_2escm"),(void*)f_2072},
{C_text("f_2078:chicken_2dstatus_2escm"),(void*)f_2078},
{C_text("f_2084:chicken_2dstatus_2escm"),(void*)f_2084},
{C_text("f_2094:chicken_2dstatus_2escm"),(void*)f_2094},
{C_text("f_2142:chicken_2dstatus_2escm"),(void*)f_2142},
{C_text("f_2160:chicken_2dstatus_2escm"),(void*)f_2160},
{C_text("f_2170:chicken_2dstatus_2escm"),(void*)f_2170},
{C_text("f_2183:chicken_2dstatus_2escm"),(void*)f_2183},
{C_text("f_2197:chicken_2dstatus_2escm"),(void*)f_2197},
{C_text("f_2239:chicken_2dstatus_2escm"),(void*)f_2239},
{C_text("f_2245:chicken_2dstatus_2escm"),(void*)f_2245},
{C_text("f_2259:chicken_2dstatus_2escm"),(void*)f_2259},
{C_text("f_2272:chicken_2dstatus_2escm"),(void*)f_2272},
{C_text("f_2284:chicken_2dstatus_2escm"),(void*)f_2284},
{C_text("f_2293:chicken_2dstatus_2escm"),(void*)f_2293},
{C_text("f_2301:chicken_2dstatus_2escm"),(void*)f_2301},
{C_text("f_2308:chicken_2dstatus_2escm"),(void*)f_2308},
{C_text("f_2322:chicken_2dstatus_2escm"),(void*)f_2322},
{C_text("f_2957:chicken_2dstatus_2escm"),(void*)f_2957},
{C_text("f_2963:chicken_2dstatus_2escm"),(void*)f_2963},
{C_text("f_2967:chicken_2dstatus_2escm"),(void*)f_2967},
{C_text("f_2971:chicken_2dstatus_2escm"),(void*)f_2971},
{C_text("f_2975:chicken_2dstatus_2escm"),(void*)f_2975},
{C_text("f_2979:chicken_2dstatus_2escm"),(void*)f_2979},
{C_text("f_2983:chicken_2dstatus_2escm"),(void*)f_2983},
{C_text("f_2987:chicken_2dstatus_2escm"),(void*)f_2987},
{C_text("f_2991:chicken_2dstatus_2escm"),(void*)f_2991},
{C_text("f_2995:chicken_2dstatus_2escm"),(void*)f_2995},
{C_text("f_2999:chicken_2dstatus_2escm"),(void*)f_2999},
{C_text("f_3003:chicken_2dstatus_2escm"),(void*)f_3003},
{C_text("f_3007:chicken_2dstatus_2escm"),(void*)f_3007},
{C_text("f_3011:chicken_2dstatus_2escm"),(void*)f_3011},
{C_text("f_3015:chicken_2dstatus_2escm"),(void*)f_3015},
{C_text("f_3023:chicken_2dstatus_2escm"),(void*)f_3023},
{C_text("f_3027:chicken_2dstatus_2escm"),(void*)f_3027},
{C_text("f_3031:chicken_2dstatus_2escm"),(void*)f_3031},
{C_text("f_3035:chicken_2dstatus_2escm"),(void*)f_3035},
{C_text("f_3039:chicken_2dstatus_2escm"),(void*)f_3039},
{C_text("f_3043:chicken_2dstatus_2escm"),(void*)f_3043},
{C_text("f_3047:chicken_2dstatus_2escm"),(void*)f_3047},
{C_text("f_3051:chicken_2dstatus_2escm"),(void*)f_3051},
{C_text("f_3055:chicken_2dstatus_2escm"),(void*)f_3055},
{C_text("f_3059:chicken_2dstatus_2escm"),(void*)f_3059},
{C_text("f_3063:chicken_2dstatus_2escm"),(void*)f_3063},
{C_text("f_3067:chicken_2dstatus_2escm"),(void*)f_3067},
{C_text("f_3071:chicken_2dstatus_2escm"),(void*)f_3071},
{C_text("f_3075:chicken_2dstatus_2escm"),(void*)f_3075},
{C_text("f_3079:chicken_2dstatus_2escm"),(void*)f_3079},
{C_text("f_3083:chicken_2dstatus_2escm"),(void*)f_3083},
{C_text("f_3087:chicken_2dstatus_2escm"),(void*)f_3087},
{C_text("f_3142:chicken_2dstatus_2escm"),(void*)f_3142},
{C_text("f_3152:chicken_2dstatus_2escm"),(void*)f_3152},
{C_text("f_3156:chicken_2dstatus_2escm"),(void*)f_3156},
{C_text("f_3159:chicken_2dstatus_2escm"),(void*)f_3159},
{C_text("f_3165:chicken_2dstatus_2escm"),(void*)f_3165},
{C_text("f_3171:chicken_2dstatus_2escm"),(void*)f_3171},
{C_text("f_3175:chicken_2dstatus_2escm"),(void*)f_3175},
{C_text("f_3179:chicken_2dstatus_2escm"),(void*)f_3179},
{C_text("f_3183:chicken_2dstatus_2escm"),(void*)f_3183},
{C_text("f_3187:chicken_2dstatus_2escm"),(void*)f_3187},
{C_text("f_3193:chicken_2dstatus_2escm"),(void*)f_3193},
{C_text("f_3198:chicken_2dstatus_2escm"),(void*)f_3198},
{C_text("f_3222:chicken_2dstatus_2escm"),(void*)f_3222},
{C_text("f_3541:chicken_2dstatus_2escm"),(void*)f_3541},
{C_text("f_3548:chicken_2dstatus_2escm"),(void*)f_3548},
{C_text("f_3551:chicken_2dstatus_2escm"),(void*)f_3551},
{C_text("f_3554:chicken_2dstatus_2escm"),(void*)f_3554},
{C_text("f_3563:chicken_2dstatus_2escm"),(void*)f_3563},
{C_text("f_3569:chicken_2dstatus_2escm"),(void*)f_3569},
{C_text("f_3575:chicken_2dstatus_2escm"),(void*)f_3575},
{C_text("f_3578:chicken_2dstatus_2escm"),(void*)f_3578},
{C_text("f_3584:chicken_2dstatus_2escm"),(void*)f_3584},
{C_text("f_3590:chicken_2dstatus_2escm"),(void*)f_3590},
{C_text("f_3596:chicken_2dstatus_2escm"),(void*)f_3596},
{C_text("f_3602:chicken_2dstatus_2escm"),(void*)f_3602},
{C_text("f_3608:chicken_2dstatus_2escm"),(void*)f_3608},
{C_text("f_3618:chicken_2dstatus_2escm"),(void*)f_3618},
{C_text("f_3622:chicken_2dstatus_2escm"),(void*)f_3622},
{C_text("f_3650:chicken_2dstatus_2escm"),(void*)f_3650},
{C_text("f_3656:chicken_2dstatus_2escm"),(void*)f_3656},
{C_text("f_3660:chicken_2dstatus_2escm"),(void*)f_3660},
{C_text("f_3672:chicken_2dstatus_2escm"),(void*)f_3672},
{C_text("f_3682:chicken_2dstatus_2escm"),(void*)f_3682},
{C_text("f_3711:chicken_2dstatus_2escm"),(void*)f_3711},
{C_text("f_3715:chicken_2dstatus_2escm"),(void*)f_3715},
{C_text("f_3732:chicken_2dstatus_2escm"),(void*)f_3732},
{C_text("f_3740:chicken_2dstatus_2escm"),(void*)f_3740},
{C_text("f_3744:chicken_2dstatus_2escm"),(void*)f_3744},
{C_text("f_3750:chicken_2dstatus_2escm"),(void*)f_3750},
{C_text("f_3752:chicken_2dstatus_2escm"),(void*)f_3752},
{C_text("f_3777:chicken_2dstatus_2escm"),(void*)f_3777},
{C_text("f_3789:chicken_2dstatus_2escm"),(void*)f_3789},
{C_text("f_3795:chicken_2dstatus_2escm"),(void*)f_3795},
{C_text("f_3809:chicken_2dstatus_2escm"),(void*)f_3809},
{C_text("f_3811:chicken_2dstatus_2escm"),(void*)f_3811},
{C_text("f_3818:chicken_2dstatus_2escm"),(void*)f_3818},
{C_text("f_3823:chicken_2dstatus_2escm"),(void*)f_3823},
{C_text("f_3848:chicken_2dstatus_2escm"),(void*)f_3848},
{C_text("f_3859:chicken_2dstatus_2escm"),(void*)f_3859},
{C_text("f_3863:chicken_2dstatus_2escm"),(void*)f_3863},
{C_text("f_3865:chicken_2dstatus_2escm"),(void*)f_3865},
{C_text("f_3884:chicken_2dstatus_2escm"),(void*)f_3884},
{C_text("f_3931:chicken_2dstatus_2escm"),(void*)f_3931},
{C_text("f_3935:chicken_2dstatus_2escm"),(void*)f_3935},
{C_text("f_3945:chicken_2dstatus_2escm"),(void*)f_3945},
{C_text("f_3952:chicken_2dstatus_2escm"),(void*)f_3952},
{C_text("f_3960:chicken_2dstatus_2escm"),(void*)f_3960},
{C_text("f_3970:chicken_2dstatus_2escm"),(void*)f_3970},
{C_text("f_4010:chicken_2dstatus_2escm"),(void*)f_4010},
{C_text("f_4014:chicken_2dstatus_2escm"),(void*)f_4014},
{C_text("f_4020:chicken_2dstatus_2escm"),(void*)f_4020},
{C_text("f_4027:chicken_2dstatus_2escm"),(void*)f_4027},
{C_text("f_4031:chicken_2dstatus_2escm"),(void*)f_4031},
{C_text("f_4035:chicken_2dstatus_2escm"),(void*)f_4035},
{C_text("f_4040:chicken_2dstatus_2escm"),(void*)f_4040},
{C_text("f_4044:chicken_2dstatus_2escm"),(void*)f_4044},
{C_text("f_4047:chicken_2dstatus_2escm"),(void*)f_4047},
{C_text("f_4050:chicken_2dstatus_2escm"),(void*)f_4050},
{C_text("f_4068:chicken_2dstatus_2escm"),(void*)f_4068},
{C_text("f_4077:chicken_2dstatus_2escm"),(void*)f_4077},
{C_text("f_4080:chicken_2dstatus_2escm"),(void*)f_4080},
{C_text("f_4088:chicken_2dstatus_2escm"),(void*)f_4088},
{C_text("f_4098:chicken_2dstatus_2escm"),(void*)f_4098},
{C_text("f_4113:chicken_2dstatus_2escm"),(void*)f_4113},
{C_text("f_4117:chicken_2dstatus_2escm"),(void*)f_4117},
{C_text("f_4119:chicken_2dstatus_2escm"),(void*)f_4119},
{C_text("f_4125:chicken_2dstatus_2escm"),(void*)f_4125},
{C_text("f_4131:chicken_2dstatus_2escm"),(void*)f_4131},
{C_text("f_4283:chicken_2dstatus_2escm"),(void*)f_4283},
{C_text("f_4289:chicken_2dstatus_2escm"),(void*)f_4289},
{C_text("f_4292:chicken_2dstatus_2escm"),(void*)f_4292},
{C_text("f_4296:chicken_2dstatus_2escm"),(void*)f_4296},
{C_text("f_4305:chicken_2dstatus_2escm"),(void*)f_4305},
{C_text("f_4311:chicken_2dstatus_2escm"),(void*)f_4311},
{C_text("f_4320:chicken_2dstatus_2escm"),(void*)f_4320},
{C_text("f_4324:chicken_2dstatus_2escm"),(void*)f_4324},
{C_text("f_4348:chicken_2dstatus_2escm"),(void*)f_4348},
{C_text("f_4356:chicken_2dstatus_2escm"),(void*)f_4356},
{C_text("f_4368:chicken_2dstatus_2escm"),(void*)f_4368},
{C_text("f_4378:chicken_2dstatus_2escm"),(void*)f_4378},
{C_text("f_4396:chicken_2dstatus_2escm"),(void*)f_4396},
{C_text("f_4400:chicken_2dstatus_2escm"),(void*)f_4400},
{C_text("f_4404:chicken_2dstatus_2escm"),(void*)f_4404},
{C_text("f_4409:chicken_2dstatus_2escm"),(void*)f_4409},
{C_text("f_4413:chicken_2dstatus_2escm"),(void*)f_4413},
{C_text("f_4424:chicken_2dstatus_2escm"),(void*)f_4424},
{C_text("f_4434:chicken_2dstatus_2escm"),(void*)f_4434},
{C_text("f_4447:chicken_2dstatus_2escm"),(void*)f_4447},
{C_text("f_4451:chicken_2dstatus_2escm"),(void*)f_4451},
{C_text("f_4459:chicken_2dstatus_2escm"),(void*)f_4459},
{C_text("f_4469:chicken_2dstatus_2escm"),(void*)f_4469},
{C_text("f_4484:chicken_2dstatus_2escm"),(void*)f_4484},
{C_text("f_4486:chicken_2dstatus_2escm"),(void*)f_4486},
{C_text("f_4494:chicken_2dstatus_2escm"),(void*)f_4494},
{C_text("f_4496:chicken_2dstatus_2escm"),(void*)f_4496},
{C_text("f_4513:chicken_2dstatus_2escm"),(void*)f_4513},
{C_text("f_4524:chicken_2dstatus_2escm"),(void*)f_4524},
{C_text("f_4532:chicken_2dstatus_2escm"),(void*)f_4532},
{C_text("f_4542:chicken_2dstatus_2escm"),(void*)f_4542},
{C_text("f_4571:chicken_2dstatus_2escm"),(void*)f_4571},
{C_text("f_4584:chicken_2dstatus_2escm"),(void*)f_4584},
{C_text("f_4587:chicken_2dstatus_2escm"),(void*)f_4587},
{C_text("f_4592:chicken_2dstatus_2escm"),(void*)f_4592},
{C_text("f_4605:chicken_2dstatus_2escm"),(void*)f_4605},
{C_text("f_4612:chicken_2dstatus_2escm"),(void*)f_4612},
{C_text("f_4616:chicken_2dstatus_2escm"),(void*)f_4616},
{C_text("f_4729:chicken_2dstatus_2escm"),(void*)f_4729},
{C_text("f_4736:chicken_2dstatus_2escm"),(void*)f_4736},
{C_text("f_4742:chicken_2dstatus_2escm"),(void*)f_4742},
{C_text("f_4751:chicken_2dstatus_2escm"),(void*)f_4751},
{C_text("f_4757:chicken_2dstatus_2escm"),(void*)f_4757},
{C_text("f_4764:chicken_2dstatus_2escm"),(void*)f_4764},
{C_text("f_4776:chicken_2dstatus_2escm"),(void*)f_4776},
{C_text("f_4780:chicken_2dstatus_2escm"),(void*)f_4780},
{C_text("f_4817:chicken_2dstatus_2escm"),(void*)f_4817},
{C_text("f_4825:chicken_2dstatus_2escm"),(void*)f_4825},
{C_text("f_4859:chicken_2dstatus_2escm"),(void*)f_4859},
{C_text("f_4865:chicken_2dstatus_2escm"),(void*)f_4865},
{C_text("f_4869:chicken_2dstatus_2escm"),(void*)f_4869},
{C_text("f_4880:chicken_2dstatus_2escm"),(void*)f_4880},
{C_text("f_4883:chicken_2dstatus_2escm"),(void*)f_4883},
{C_text("f_4886:chicken_2dstatus_2escm"),(void*)f_4886},
{C_text("f_4896:chicken_2dstatus_2escm"),(void*)f_4896},
{C_text("f_4900:chicken_2dstatus_2escm"),(void*)f_4900},
{C_text("f_4904:chicken_2dstatus_2escm"),(void*)f_4904},
{C_text("f_4909:chicken_2dstatus_2escm"),(void*)f_4909},
{C_text("f_4914:chicken_2dstatus_2escm"),(void*)f_4914},
{C_text("f_4918:chicken_2dstatus_2escm"),(void*)f_4918},
{C_text("f_4922:chicken_2dstatus_2escm"),(void*)f_4922},
{C_text("f_4929:chicken_2dstatus_2escm"),(void*)f_4929},
{C_text("toplevel:chicken_2dstatus_2escm"),(void*)C_toplevel},
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
o|hiding unexported module binding: main#get-terminal-width 
o|hiding unexported module binding: main#list-width 
o|hiding unexported module binding: main#repo-path 
o|hiding unexported module binding: main#grep 
o|hiding unexported module binding: main#read-info 
o|hiding unexported module binding: main#filter-egg-names 
o|hiding unexported module binding: main#gather-eggs 
o|hiding unexported module binding: main#format-string 
o|hiding unexported module binding: main#list-installed-eggs 
o|hiding unexported module binding: main#list-egg-info 
o|hiding unexported module binding: main#list-cached-eggs 
o|hiding unexported module binding: main#gather-components 
o|hiding unexported module binding: main#gather-components-rec 
o|hiding unexported module binding: main#list-installed-components 
o|hiding unexported module binding: main#list-installed-files 
o|hiding unexported module binding: main#dump-installed-versions 
o|hiding unexported module binding: main#usage 
o|hiding unexported module binding: main#short-options 
o|hiding unexported module binding: main#main 
S|applied compiler syntax:
S|  for-each		6
S|  foldl		3
S|  map		6
S|  foldr		3
o|eliminated procedure checks: 79 
o|specializations:
o|  1 (scheme#> fixnum fixnum)
o|  1 (scheme#char=? char char)
o|  1 (scheme#string-ref string fixnum)
o|  1 (scheme#positive? fixnum)
o|  2 (scheme#string-length string)
o|  9 (scheme#string=? string string)
o|  1 (chicken.base#current-error-port)
o|  4 (scheme#string-append string string)
o|  2 (scheme#quotient * *)
o|  2 (scheme#- * *)
o|  1 (scheme#zero? *)
o|  1 (scheme#current-output-port)
o|  2 (scheme#cdar (pair pair *))
o|  15 (scheme#eqv? * (or eof null fixnum char boolean symbol))
o|  2 (scheme#number->string fixnum)
o|  1 (scheme#eqv? * *)
o|  5 (##sys#check-list (or pair list) *)
o|  39 (scheme#cdr pair)
o|  8 (scheme#car pair)
(o e)|safe calls: 484 
(o e)|assignments to immediate values: 3 
o|removed side-effect free assignment to unused variable: main#partition 
o|removed side-effect free assignment to unused variable: main#span 
o|removed side-effect free assignment to unused variable: main#drop 
o|removed side-effect free assignment to unused variable: main#split-at 
o|merged explicitly consed rest parameter: lsts174 
o|inlining procedure: k1876 
o|inlining procedure: k1891 
o|inlining procedure: k1891 
o|inlining procedure: k1876 
o|inlining procedure: k1931 
o|inlining procedure: k1931 
o|inlining procedure: k1963 
o|contracted procedure: "(mini-srfi-1.scm:77) g227236" 
o|inlining procedure: k1963 
o|inlining procedure: k2012 
o|contracted procedure: "(mini-srfi-1.scm:76) g200209" 
o|inlining procedure: k2012 
o|inlining procedure: k2055 
o|inlining procedure: k2055 
o|inlining procedure: k2086 
o|inlining procedure: k2086 
o|removed side-effect free assignment to unused variable: main#cons* 
o|removed side-effect free assignment to unused variable: main#first 
o|removed side-effect free assignment to unused variable: main#second 
o|removed side-effect free assignment to unused variable: main#third 
o|removed side-effect free assignment to unused variable: main#fourth 
o|removed side-effect free assignment to unused variable: main#fifth 
o|inlining procedure: k2247 
o|inlining procedure: k2247 
o|contracted procedure: "(mini-srfi-1.scm:123) main#delete" 
o|inlining procedure: k2172 
o|inlining procedure: k2172 
o|removed side-effect free assignment to unused variable: main#alist-cons 
o|inlining procedure: k2303 
o|inlining procedure: k2303 
o|inlining procedure: k2295 
o|inlining procedure: k2295 
o|removed side-effect free assignment to unused variable: main#filter-map 
o|removed side-effect free assignment to unused variable: main#remove 
o|removed side-effect free assignment to unused variable: main#unzip1 
o|removed side-effect free assignment to unused variable: main#last 
o|removed side-effect free assignment to unused variable: main#list-index 
o|removed side-effect free assignment to unused variable: main#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: main#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: main#lset-union/eq? 
o|removed side-effect free assignment to unused variable: main#lset-intersection/eq? 
o|inlining procedure: k2694 
o|inlining procedure: k2694 
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
o|removed side-effect free assignment to unused variable: main#default-platform 
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
o|removed side-effect free assignment to unused variable: main#+timestamp-file+ 
o|removed side-effect free assignment to unused variable: main#+status-file+ 
o|removed side-effect free assignment to unused variable: main#validate-environment 
o|inlining procedure: k3144 
o|inlining procedure: k3144 
o|merged explicitly consed rest parameter: rest779782 
o|inlining procedure: k3209 
o|inlining procedure: k3209 
o|merged explicitly consed rest parameter: rest797800 
o|inlining procedure: k3233 
o|inlining procedure: k3233 
o|inlining procedure: k3251 
o|inlining procedure: k3269 
o|inlining procedure: k3269 
o|inlining procedure: k3286 
o|inlining procedure: k3286 
o|substituted constant variable: a3327 
o|substituted constant variable: a3329 
o|inlining procedure: k3251 
o|inlining procedure: k3337 
o|inlining procedure: k3337 
o|inlining procedure: k3347 
o|inlining procedure: k3365 
o|inlining procedure: k3365 
o|inlining procedure: k3382 
o|inlining procedure: k3382 
o|inlining procedure: k3412 
o|inlining procedure: k3412 
o|substituted constant variable: a3441 
o|substituted constant variable: a3443 
o|substituted constant variable: a3445 
o|inlining procedure: k3347 
o|removed side-effect free assignment to unused variable: main#get-extension-property 
o|removed side-effect free assignment to unused variable: main#get-extension-property* 
o|inlining procedure: k3543 
o|substituted constant variable: default-width907 
o|substituted constant variable: default-width907 
o|inlining procedure: k3543 
o|substituted constant variable: default-width907 
o|propagated global variable: cop908 ##sys#standard-output 
o|substituted constant variable: a3619 
o|substituted constant variable: a3620 
o|inlining procedure: k3624 
o|contracted procedure: "(chicken-status.scm:66) main#destination-repository" 
o|inlining procedure: k3120 
o|inlining procedure: k3120 
o|inlining procedure: k3624 
o|merged explicitly consed rest parameter: rest939941 
o|inlining procedure: k3673 
o|contracted procedure: "(chicken-status.scm:74) main#load-egg-info" 
o|contracted procedure: "(egg-information.scm:37) main#locate-egg-file" 
o|inlining procedure: k3166 
o|inlining procedure: k3166 
o|inlining procedure: k3673 
o|inlining procedure: k3713 
o|inlining procedure: k3713 
o|contracted procedure: "(chicken-status.scm:81) main#grep" 
o|propagated global variable: g933934 chicken.irregex#irregex-search 
o|contracted procedure: "(chicken-status.scm:79) main#concatenate" 
o|inlining procedure: k2144 
o|inlining procedure: k2144 
o|inlining procedure: k3754 
o|inlining procedure: k3754 
o|merged explicitly consed rest parameter: rest10311034 
o|inlining procedure: k3885 
o|inlining procedure: k3885 
o|inlining procedure: k3962 
o|inlining procedure: k3962 
o|consed rest parameter at call site: "(chicken-status.scm:120) main#format-string" 3 
o|substituted constant variable: a4036 
o|consed rest parameter at call site: "(chicken-status.scm:118) main#format-string" 3 
o|inlining procedure: k4051 
o|inlining procedure: k4051 
o|substituted constant variable: main#+version-file+ 
o|consed rest parameter at call site: "(chicken-status.scm:114) main#get-egg-property" 3 
o|consed rest parameter at call site: "(chicken-status.scm:113) main#read-info" 2 
o|consed rest parameter at call site: "(chicken-status.scm:132) main#append-map" 3 
o|inlining procedure: k4136 
o|inlining procedure: k4136 
o|inlining procedure: k4156 
o|inlining procedure: k4156 
o|inlining procedure: k4164 
o|inlining procedure: k4164 
o|inlining procedure: k4198 
o|inlining procedure: k4198 
o|inlining procedure: k4232 
o|inlining procedure: k4232 
o|substituted constant variable: a4267 
o|substituted constant variable: a4269 
o|substituted constant variable: a4271 
o|substituted constant variable: a4273 
o|substituted constant variable: a4275 
o|substituted constant variable: a4277 
o|substituted constant variable: a4279 
o|substituted constant variable: a4281 
o|substituted constant variable: a4290 
o|substituted constant variable: a4291 
o|inlining procedure: k4306 
o|inlining procedure: k4370 
o|contracted procedure: "(chicken-status.scm:162) g11681175" 
o|inlining procedure: k4329 
o|inlining procedure: k4329 
o|substituted constant variable: a4342 
o|substituted constant variable: a4344 
o|consed rest parameter at call site: "(chicken-status.scm:165) main#format-string" 3 
o|consed rest parameter at call site: "(chicken-status.scm:164) main#format-string" 3 
o|inlining procedure: k4370 
o|inlining procedure: k4306 
o|consed rest parameter at call site: "(chicken-status.scm:156) main#format-string" 3 
o|substituted constant variable: a4405 
o|consed rest parameter at call site: "(chicken-status.scm:155) main#format-string" 3 
o|consed rest parameter at call site: "(chicken-status.scm:153) main#get-egg-property*" 3 
o|consed rest parameter at call site: "(chicken-status.scm:152) main#get-egg-property" 3 
o|consed rest parameter at call site: "(chicken-status.scm:151) main#read-info" 2 
o|inlining procedure: k4426 
o|inlining procedure: k4426 
o|inlining procedure: k4461 
o|inlining procedure: k4461 
o|consed rest parameter at call site: "(chicken-status.scm:179) main#get-egg-property*" 3 
o|consed rest parameter at call site: "(chicken-status.scm:179) main#read-info" 2 
o|consed rest parameter at call site: "(chicken-status.scm:177) main#append-map" 3 
o|inlining procedure: k4534 
o|contracted procedure: "(chicken-status.scm:184) g12201227" 
o|inlining procedure: k4515 
o|inlining procedure: k4515 
o|consed rest parameter at call site: "(chicken-status.scm:186) main#get-egg-property" 3 
o|consed rest parameter at call site: "(chicken-status.scm:186) main#read-info" 2 
o|inlining procedure: k4534 
o|contracted procedure: "(chicken-status.scm:267) main#main" 
o|inlining procedure: k4573 
o|inlining procedure: k4597 
o|contracted procedure: "(chicken-status.scm:222) main#list-cached-eggs" 
o|inlining procedure: k4063 
o|inlining procedure: k4090 
o|contracted procedure: "(chicken-status.scm:126) g11101117" 
o|substituted constant variable: main#+egg-extension+ 
o|inlining procedure: k4090 
o|inlining procedure: k4063 
o|inlining procedure: k4597 
o|contracted procedure: "(chicken-status.scm:228) main#gather-eggs" 
o|inlining procedure: k3825 
o|inlining procedure: k3825 
o|consed rest parameter at call site: "(chicken-status.scm:92) main#append-map" 3 
o|inlining procedure: k4617 
o|propagated global variable: r46185055 main#list-installed-files 
o|inlining procedure: k4617 
o|inlining procedure: k4623 
o|inlining procedure: k4623 
o|inlining procedure: k4573 
o|inlining procedure: k4638 
o|inlining procedure: k4638 
o|substituted constant variable: a4654 
o|substituted constant variable: a4665 
o|inlining procedure: k4661 
o|inlining procedure: k4661 
o|substituted constant variable: a4676 
o|substituted constant variable: a4687 
o|inlining procedure: k4683 
o|inlining procedure: k4683 
o|substituted constant variable: a4698 
o|substituted constant variable: a4712 
o|inlining procedure: k4708 
o|inlining procedure: k4708 
o|substituted constant variable: a4726 
o|inlining procedure: k4737 
o|inlining procedure: k4752 
o|inlining procedure: k4782 
o|contracted procedure: "(chicken-status.scm:261) g13061315" 
o|inlining procedure: k4782 
o|inlining procedure: k4752 
o|substituted constant variable: main#short-options 
o|substituted constant variable: a4833 
o|inlining procedure: k4737 
o|substituted constant variable: a4851 
o|substituted constant variable: a4848 
o|substituted constant variable: a4854 
o|substituted constant variable: a4856 
o|inlining procedure: k4881 
o|inlining procedure: k4881 
o|replaced variables: 451 
o|removed binding forms: 198 
o|substituted constant variable: r18924944 
o|substituted constant variable: r19324946 
o|substituted constant variable: r20874954 
o|substituted constant variable: r22964963 
o|removed side-effect free assignment to unused variable: main#list-tabulate 
o|removed side-effect free assignment to unused variable: main#+version-file+ 
o|removed side-effect free assignment to unused variable: main#+egg-extension+ 
o|substituted constant variable: r31454967 
o|removed side-effect free assignment to unused variable: main#get-extension-property/internal 
o|substituted constant variable: r35444989 
o|substituted constant variable: rest699701 
o|substituted constant variable: mode700 
o|folded constant expression: (scheme#eq? (quote target) (quote target)) 
o|substituted constant variable: r36744997 
o|substituted constant variable: r21455008 
o|substituted constant variable: r40525017 
o|substituted constant variable: r41575021 
o|substituted constant variable: r43305030 
o|substituted constant variable: r43305030 
o|inlining procedure: k4329 
o|inlining procedure: k4329 
o|substituted constant variable: r45165043 
o|substituted constant variable: r45165043 
o|removed side-effect free assignment to unused variable: main#short-options 
o|contracted procedure: "(chicken-status.scm:260) main#every" 
o|inlining procedure: k4881 
o|replaced variables: 9 
o|removed binding forms: 468 
o|inlining procedure: k3206 
o|inlining procedure: k3230 
o|contracted procedure: k3123 
o|inlining procedure: k4048 
o|inlining procedure: "(chicken-status.scm:231) main#usage" 
o|inlining procedure: "(chicken-status.scm:263) main#usage" 
o|inlining procedure: "(chicken-status.scm:264) main#usage" 
o|replaced variables: 13 
o|removed binding forms: 36 
o|substituted constant variable: r32075174 
o|substituted constant variable: r32075174 
o|substituted constant variable: r32075174 
o|substituted constant variable: r32315177 
o|substituted constant variable: r32315177 
o|substituted constant variable: r32315177 
o|substituted constant variable: r3124 
o|substituted constant variable: r40495186 
o|substituted constant variable: r40495186 
o|substituted constant variable: r40495186 
o|substituted constant variable: r43305116 
o|substituted constant variable: r43305118 
o|removed side-effect free assignment to unused variable: main#usage 
o|substituted constant variable: code12375202 
o|substituted constant variable: code12375209 
o|substituted constant variable: code12375216 
o|replaced variables: 1 
o|removed binding forms: 16 
o|removed conditional forms: 4 
o|removed side-effect free assignment to unused variable: main#host-repo 
o|inlining procedure: k3117 
o|removed binding forms: 11 
o|substituted constant variable: r31185284 
o|removed binding forms: 3 
o|removed conditional forms: 1 
o|removed binding forms: 1 
o|simplifications: ((if . 21) (##core#call . 186)) 
o|  call simplifications:
o|    scheme#member
o|    ##sys#size	2
o|    chicken.fixnum#fx>
o|    scheme#string->list
o|    scheme#memq
o|    scheme#string
o|    scheme#caddr
o|    scheme#eq?	11
o|    scheme#list	19
o|    scheme#string-length
o|    chicken.fixnum#fx-
o|    chicken.fixnum#fxmax
o|    scheme#string=?	2
o|    scheme#not	2
o|    ##sys#apply
o|    ##sys#call-with-values	2
o|    scheme#list-ref
o|    scheme#assq	2
o|    scheme#cadr	8
o|    scheme#equal?
o|    scheme#null?	23
o|    scheme#car	18
o|    scheme#apply
o|    scheme#cdr	8
o|    scheme#cons	17
o|    ##sys#setslot	5
o|    ##sys#check-list	10
o|    scheme#pair?	13
o|    ##sys#slot	31
o|contracted procedure: k1879 
o|contracted procedure: k1882 
o|contracted procedure: k1894 
o|contracted procedure: k1910 
o|contracted procedure: k1918 
o|contracted procedure: k1925 
o|contracted procedure: k1949 
o|contracted procedure: k1966 
o|contracted procedure: k1988 
o|contracted procedure: k1984 
o|contracted procedure: k1969 
o|contracted procedure: k1972 
o|contracted procedure: k1980 
o|contracted procedure: k1995 
o|contracted procedure: k2003 
o|contracted procedure: k2015 
o|contracted procedure: k2037 
o|contracted procedure: k2033 
o|contracted procedure: k2018 
o|contracted procedure: k2021 
o|contracted procedure: k2029 
o|contracted procedure: k2089 
o|contracted procedure: k2104 
o|contracted procedure: k2250 
o|contracted procedure: k2253 
o|contracted procedure: k2263 
o|contracted procedure: k2175 
o|contracted procedure: k2201 
o|contracted procedure: k2286 
o|contracted procedure: k2298 
o|contracted procedure: k2316 
o|contracted procedure: k2324 
o|contracted procedure: k4923 
o|contracted procedure: k3017 
o|contracted procedure: k3215 
o|contracted procedure: k3200 
o|contracted procedure: k3203 
o|contracted procedure: k3206 
o|contracted procedure: k3239 
o|contracted procedure: k3224 
o|contracted procedure: k3227 
o|contracted procedure: k3230 
o|contracted procedure: k3627 
o|contracted procedure: k3135 
o|contracted procedure: k3117 
o|contracted procedure: k3695 
o|contracted procedure: k3661 
o|contracted procedure: k3689 
o|contracted procedure: k3664 
o|contracted procedure: k3683 
o|contracted procedure: k3667 
o|contracted procedure: k3701 
o|contracted procedure: k3719 
o|contracted procedure: k3729 
o|contracted procedure: k3745 
o|contracted procedure: k2147 
o|contracted procedure: k2154 
o|contracted procedure: k3757 
o|contracted procedure: k3760 
o|contracted procedure: k3763 
o|contracted procedure: k3771 
o|contracted procedure: k3779 
o|contracted procedure: k3924 
o|contracted procedure: k3867 
o|contracted procedure: k3918 
o|contracted procedure: k3870 
o|contracted procedure: k3912 
o|contracted procedure: k3873 
o|contracted procedure: k3906 
o|contracted procedure: k3876 
o|contracted procedure: k3879 
o|contracted procedure: k3903 
o|contracted procedure: k3899 
o|contracted procedure: k3994 
o|contracted procedure: k3936 
o|contracted procedure: k3988 
o|contracted procedure: k3939 
o|contracted procedure: k3982 
o|contracted procedure: k3942 
o|contracted procedure: k3953 
o|contracted procedure: k3965 
o|contracted procedure: k3975 
o|contracted procedure: k3979 
o|contracted procedure: k4000 
o|contracted procedure: k4133 
o|contracted procedure: k4139 
o|contracted procedure: k4153 
o|contracted procedure: k4167 
o|contracted procedure: k4178 
o|contracted procedure: k4174 
o|contracted procedure: k4184 
o|contracted procedure: k4195 
o|contracted procedure: k4191 
o|contracted procedure: k4201 
o|contracted procedure: k4212 
o|contracted procedure: k4208 
o|contracted procedure: k4218 
o|contracted procedure: k4229 
o|contracted procedure: k4225 
o|contracted procedure: k4235 
o|contracted procedure: k4246 
o|contracted procedure: k4242 
o|contracted procedure: k4252 
o|contracted procedure: k4263 
o|contracted procedure: k4259 
o|contracted procedure: k4361 
o|contracted procedure: k4373 
o|contracted procedure: k4383 
o|contracted procedure: k4387 
o|contracted procedure: k4326 
o|contracted procedure: k4332 
o|contracted procedure: k4338 
o|contracted procedure: k4350 
o|contracted procedure: k4358 
o|contracted procedure: k4417 
o|contracted procedure: k4429 
o|contracted procedure: k4439 
o|contracted procedure: k4443 
o|contracted procedure: k4452 
o|contracted procedure: k4464 
o|contracted procedure: k4474 
o|contracted procedure: k4478 
o|contracted procedure: k4525 
o|contracted procedure: k4537 
o|contracted procedure: k4547 
o|contracted procedure: k4551 
o|contracted procedure: k4515 
o|inlining procedure: k4507 
o|inlining procedure: k4507 
o|contracted procedure: k4576 
o|contracted procedure: k4081 
o|contracted procedure: k4093 
o|contracted procedure: k4103 
o|contracted procedure: k4107 
o|contracted procedure: k3813 
o|contracted procedure: k3828 
o|contracted procedure: k3831 
o|contracted procedure: k3834 
o|contracted procedure: k3842 
o|contracted procedure: k3850 
o|contracted procedure: k4626 
o|contracted procedure: k4632 
o|contracted procedure: k4641 
o|contracted procedure: k4699 
o|contracted procedure: k4713 
o|contracted procedure: k4830 
o|contracted procedure: k4746 
o|contracted procedure: k4766 
o|contracted procedure: k4785 
o|contracted procedure: k4807 
o|contracted procedure: k4803 
o|contracted procedure: k4788 
o|contracted procedure: k4791 
o|contracted procedure: k4799 
o|contracted procedure: k2052 
o|contracted procedure: k2061 
o|contracted procedure: k2074 
o|contracted procedure: k4841 
o|contracted procedure: k4845 
o|inlining procedure: k4874 
o|inlining procedure: k4874 
o|inlining procedure: k4874 
o|contracted procedure: k4931 
o|contracted procedure: k4935 
o|contracted procedure: k4939 
o|simplifications: ((if . 1) (let . 27)) 
o|removed binding forms: 160 
o|substituted constant variable: r4932 
o|substituted constant variable: r4936 
o|substituted constant variable: r4932 
o|substituted constant variable: r4936 
o|substituted constant variable: r4940 
o|replaced variables: 73 
o|removed binding forms: 2 
o|inlining procedure: k3634 
o|propagated global variable: r36355573 main#target-repo 
o|inlining procedure: k3634 
o|simplifications: ((if . 2)) 
o|removed binding forms: 36 
o|removed binding forms: 1 
o|direct leaf routine/allocation: main#get-egg-property 0 
o|direct leaf routine/allocation: main#get-egg-property* 0 
o|contracted procedure: "(chicken-status.scm:152) k4297" 
o|contracted procedure: "(chicken-status.scm:153) k4300" 
o|contracted procedure: "(chicken-status.scm:186) k4500" 
o|simplifications: ((if . 1)) 
o|removed binding forms: 3 
o|contracted procedure: "(chicken-status.scm:114) k4015" 
o|replaced variables: 2 
o|removed binding forms: 1 
o|removed binding forms: 1 
o|customizable procedures: (main#probe-dir k4740 loop250 map-loop13001325 loop1247 k4582 k4603 map-loop10031020 main#filter-egg-names for-each-loop11091120 for-each-loop12191231 for-each-loop11991210 main#get-terminal-width g11511158 for-each-loop11501190 for-each-loop11671184 main#gather-components main#append-map main#read-info k4018 main#format-string g10671074 for-each-loop10661084 g971980 map-loop965983 loop282 main#filter main#delete-duplicates main#repo-path foldr326329 g331332 loop289 loop309 loop263 main#any map-loop194212 map-loop221239 loop190 foldr179182 g184185) 
o|calls to known targets: 104 
o|identified direct recursive calls: f_1889 1 
o|identified direct recursive calls: f_1961 1 
o|identified direct recursive calls: f_2010 1 
o|identified direct recursive calls: f_2293 1 
o|identified direct recursive calls: f_2142 1 
o|identified direct recursive calls: f_4780 1 
o|identified direct recursive calls: f_4571 7 
o|fast box initializations: 20 
o|fast global references: 72 
o|fast global assignments: 37 
o|dropping unused closure argument: f_1874 
o|dropping unused closure argument: f_2078 
o|dropping unused closure argument: f_2239 
o|dropping unused closure argument: f_2284 
o|dropping unused closure argument: f_3142 
o|dropping unused closure argument: f_3198 
o|dropping unused closure argument: f_3222 
o|dropping unused closure argument: f_3541 
o|dropping unused closure argument: f_3622 
o|dropping unused closure argument: f_3656 
o|dropping unused closure argument: f_3711 
o|dropping unused closure argument: f_3865 
o|dropping unused closure argument: f_4119 
*/
/* end of file */

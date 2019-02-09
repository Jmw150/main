/* Generated from csc.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: csc.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -output-file csc.c
   uses: library eval expand file extras pathname posix data-structures
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
C_noret_decl(C_pathname_toplevel)
C_externimport void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[442];
static double C_possibly_force_alignment;


C_noret_decl(f8467)
static void C_ccall f8467(C_word c,C_word *av) C_noret;
C_noret_decl(f8473)
static void C_ccall f8473(C_word c,C_word *av) C_noret;
C_noret_decl(f8477)
static void C_ccall f8477(C_word c,C_word *av) C_noret;
C_noret_decl(f8500)
static void C_ccall f8500(C_word c,C_word *av) C_noret;
C_noret_decl(f8546)
static void C_ccall f8546(C_word c,C_word *av) C_noret;
C_noret_decl(f_2242)
static void C_ccall f_2242(C_word c,C_word *av) C_noret;
C_noret_decl(f_2245)
static void C_ccall f_2245(C_word c,C_word *av) C_noret;
C_noret_decl(f_2248)
static void C_ccall f_2248(C_word c,C_word *av) C_noret;
C_noret_decl(f_2251)
static void C_ccall f_2251(C_word c,C_word *av) C_noret;
C_noret_decl(f_2254)
static void C_ccall f_2254(C_word c,C_word *av) C_noret;
C_noret_decl(f_2257)
static void C_ccall f_2257(C_word c,C_word *av) C_noret;
C_noret_decl(f_2260)
static void C_ccall f_2260(C_word c,C_word *av) C_noret;
C_noret_decl(f_2263)
static void C_ccall f_2263(C_word c,C_word *av) C_noret;
C_noret_decl(f_2266)
static void C_ccall f_2266(C_word c,C_word *av) C_noret;
C_noret_decl(f_2272)
static void C_ccall f_2272(C_word c,C_word *av) C_noret;
C_noret_decl(f_2278)
static void C_ccall f_2278(C_word c,C_word *av) C_noret;
C_noret_decl(f_2282)
static void C_ccall f_2282(C_word c,C_word *av) C_noret;
C_noret_decl(f_2286)
static void C_ccall f_2286(C_word c,C_word *av) C_noret;
C_noret_decl(f_2290)
static void C_ccall f_2290(C_word c,C_word *av) C_noret;
C_noret_decl(f_2294)
static void C_ccall f_2294(C_word c,C_word *av) C_noret;
C_noret_decl(f_2298)
static void C_ccall f_2298(C_word c,C_word *av) C_noret;
C_noret_decl(f_2302)
static void C_ccall f_2302(C_word c,C_word *av) C_noret;
C_noret_decl(f_2306)
static void C_ccall f_2306(C_word c,C_word *av) C_noret;
C_noret_decl(f_2310)
static void C_ccall f_2310(C_word c,C_word *av) C_noret;
C_noret_decl(f_2314)
static void C_ccall f_2314(C_word c,C_word *av) C_noret;
C_noret_decl(f_2318)
static void C_ccall f_2318(C_word c,C_word *av) C_noret;
C_noret_decl(f_2322)
static void C_ccall f_2322(C_word c,C_word *av) C_noret;
C_noret_decl(f_2326)
static void C_ccall f_2326(C_word c,C_word *av) C_noret;
C_noret_decl(f_2330)
static void C_ccall f_2330(C_word c,C_word *av) C_noret;
C_noret_decl(f_2338)
static void C_ccall f_2338(C_word c,C_word *av) C_noret;
C_noret_decl(f_2342)
static void C_ccall f_2342(C_word c,C_word *av) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346(C_word c,C_word *av) C_noret;
C_noret_decl(f_2350)
static void C_ccall f_2350(C_word c,C_word *av) C_noret;
C_noret_decl(f_2354)
static void C_ccall f_2354(C_word c,C_word *av) C_noret;
C_noret_decl(f_2358)
static void C_ccall f_2358(C_word c,C_word *av) C_noret;
C_noret_decl(f_2362)
static void C_ccall f_2362(C_word c,C_word *av) C_noret;
C_noret_decl(f_2366)
static void C_ccall f_2366(C_word c,C_word *av) C_noret;
C_noret_decl(f_2370)
static void C_ccall f_2370(C_word c,C_word *av) C_noret;
C_noret_decl(f_2374)
static void C_ccall f_2374(C_word c,C_word *av) C_noret;
C_noret_decl(f_2378)
static void C_ccall f_2378(C_word c,C_word *av) C_noret;
C_noret_decl(f_2382)
static void C_ccall f_2382(C_word c,C_word *av) C_noret;
C_noret_decl(f_2386)
static void C_ccall f_2386(C_word c,C_word *av) C_noret;
C_noret_decl(f_2390)
static void C_ccall f_2390(C_word c,C_word *av) C_noret;
C_noret_decl(f_2394)
static void C_ccall f_2394(C_word c,C_word *av) C_noret;
C_noret_decl(f_2398)
static void C_ccall f_2398(C_word c,C_word *av) C_noret;
C_noret_decl(f_2402)
static void C_ccall f_2402(C_word c,C_word *av) C_noret;
C_noret_decl(f_2457)
static void C_fcall f_2457(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2467)
static void C_ccall f_2467(C_word c,C_word *av) C_noret;
C_noret_decl(f_2471)
static void C_ccall f_2471(C_word c,C_word *av) C_noret;
C_noret_decl(f_2474)
static void C_ccall f_2474(C_word c,C_word *av) C_noret;
C_noret_decl(f_2909)
static void C_fcall f_2909(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2915)
static void C_fcall f_2915(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2929)
static void C_ccall f_2929(C_word c,C_word *av) C_noret;
C_noret_decl(f_2971)
static void C_fcall f_2971(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2984)
static void C_ccall f_2984(C_word c,C_word *av) C_noret;
C_noret_decl(f_2998)
static void C_ccall f_2998(C_word c,C_word *av) C_noret;
C_noret_decl(f_3046)
static void C_fcall f_3046(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3060)
static void C_ccall f_3060(C_word c,C_word *av) C_noret;
C_noret_decl(f_3073)
static void C_ccall f_3073(C_word c,C_word *av) C_noret;
C_noret_decl(f_3094)
static void C_fcall f_3094(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3102)
static void C_fcall f_3102(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3109)
static void C_ccall f_3109(C_word c,C_word *av) C_noret;
C_noret_decl(f_3123)
static void C_ccall f_3123(C_word c,C_word *av) C_noret;
C_noret_decl(f_3138)
static void C_fcall f_3138(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3146)
static void C_fcall f_3146(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3150)
static void C_ccall f_3150(C_word c,C_word *av) C_noret;
C_noret_decl(f_3154)
static C_word C_fcall f_3154(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_3172)
static void C_ccall f_3172(C_word c,C_word *av) C_noret;
C_noret_decl(f_3251)
static C_word C_fcall f_3251(C_word t0);
C_noret_decl(f_3351)
static void C_fcall f_3351(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3373)
static void C_ccall f_3373(C_word c,C_word *av) C_noret;
C_noret_decl(f_3384)
static void C_ccall f_3384(C_word c,C_word *av) C_noret;
C_noret_decl(f_3756)
static void C_ccall f_3756(C_word c,C_word *av) C_noret;
C_noret_decl(f_3782)
static void C_ccall f_3782(C_word c,C_word *av) C_noret;
C_noret_decl(f_3785)
static void C_fcall f_3785(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3792)
static void C_ccall f_3792(C_word c,C_word *av) C_noret;
C_noret_decl(f_3795)
static void C_ccall f_3795(C_word c,C_word *av) C_noret;
C_noret_decl(f_3798)
static void C_ccall f_3798(C_word c,C_word *av) C_noret;
C_noret_decl(f_3801)
static void C_ccall f_3801(C_word c,C_word *av) C_noret;
C_noret_decl(f_3808)
static void C_ccall f_3808(C_word c,C_word *av) C_noret;
C_noret_decl(f_3812)
static void C_ccall f_3812(C_word c,C_word *av) C_noret;
C_noret_decl(f_3816)
static void C_ccall f_3816(C_word c,C_word *av) C_noret;
C_noret_decl(f_3834)
static void C_ccall f_3834(C_word c,C_word *av) C_noret;
C_noret_decl(f_3842)
static void C_ccall f_3842(C_word c,C_word *av) C_noret;
C_noret_decl(f_3846)
static void C_ccall f_3846(C_word c,C_word *av) C_noret;
C_noret_decl(f_3848)
static void C_ccall f_3848(C_word c,C_word *av) C_noret;
C_noret_decl(f_3856)
static void C_ccall f_3856(C_word c,C_word *av) C_noret;
C_noret_decl(f_3864)
static void C_ccall f_3864(C_word c,C_word *av) C_noret;
C_noret_decl(f_3868)
static void C_ccall f_3868(C_word c,C_word *av) C_noret;
C_noret_decl(f_3872)
static void C_ccall f_3872(C_word c,C_word *av) C_noret;
C_noret_decl(f_3876)
static void C_ccall f_3876(C_word c,C_word *av) C_noret;
C_noret_decl(f_3880)
static void C_ccall f_3880(C_word c,C_word *av) C_noret;
C_noret_decl(f_3884)
static void C_ccall f_3884(C_word c,C_word *av) C_noret;
C_noret_decl(f_3897)
static void C_ccall f_3897(C_word c,C_word *av) C_noret;
C_noret_decl(f_3902)
static void C_fcall f_3902(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3905)
static void C_fcall f_3905(C_word t0) C_noret;
C_noret_decl(f_3913)
static void C_ccall f_3913(C_word c,C_word *av) C_noret;
C_noret_decl(f_3948)
static void C_ccall f_3948(C_word c,C_word *av) C_noret;
C_noret_decl(f_3952)
static void C_ccall f_3952(C_word c,C_word *av) C_noret;
C_noret_decl(f_3957)
static void C_ccall f_3957(C_word c,C_word *av) C_noret;
C_noret_decl(f_3962)
static void C_ccall f_3962(C_word c,C_word *av) C_noret;
C_noret_decl(f_3969)
static void C_ccall f_3969(C_word c,C_word *av) C_noret;
C_noret_decl(f_3998)
static void C_ccall f_3998(C_word c,C_word *av) C_noret;
C_noret_decl(f_4012)
static void C_ccall f_4012(C_word c,C_word *av) C_noret;
C_noret_decl(f_4016)
static void C_ccall f_4016(C_word c,C_word *av) C_noret;
C_noret_decl(f_4032)
static void C_ccall f_4032(C_word c,C_word *av) C_noret;
C_noret_decl(f_4051)
static void C_ccall f_4051(C_word c,C_word *av) C_noret;
C_noret_decl(f_4066)
static void C_fcall f_4066(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4070)
static void C_fcall f_4070(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4074)
static void C_ccall f_4074(C_word c,C_word *av) C_noret;
C_noret_decl(f_4077)
static void C_ccall f_4077(C_word c,C_word *av) C_noret;
C_noret_decl(f_4090)
static void C_ccall f_4090(C_word c,C_word *av) C_noret;
C_noret_decl(f_4095)
static void C_fcall f_4095(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4120)
static void C_ccall f_4120(C_word c,C_word *av) C_noret;
C_noret_decl(f_4140)
static void C_ccall f_4140(C_word c,C_word *av) C_noret;
C_noret_decl(f_4148)
static void C_ccall f_4148(C_word c,C_word *av) C_noret;
C_noret_decl(f_4152)
static void C_ccall f_4152(C_word c,C_word *av) C_noret;
C_noret_decl(f_4156)
static void C_ccall f_4156(C_word c,C_word *av) C_noret;
C_noret_decl(f_4172)
static void C_ccall f_4172(C_word c,C_word *av) C_noret;
C_noret_decl(f_4179)
static void C_ccall f_4179(C_word c,C_word *av) C_noret;
C_noret_decl(f_4201)
static void C_ccall f_4201(C_word c,C_word *av) C_noret;
C_noret_decl(f_4205)
static void C_ccall f_4205(C_word c,C_word *av) C_noret;
C_noret_decl(f_4208)
static void C_ccall f_4208(C_word c,C_word *av) C_noret;
C_noret_decl(f_4211)
static void C_ccall f_4211(C_word c,C_word *av) C_noret;
C_noret_decl(f_4217)
static void C_ccall f_4217(C_word c,C_word *av) C_noret;
C_noret_decl(f_4233)
static void C_ccall f_4233(C_word c,C_word *av) C_noret;
C_noret_decl(f_4245)
static void C_ccall f_4245(C_word c,C_word *av) C_noret;
C_noret_decl(f_4252)
static void C_ccall f_4252(C_word c,C_word *av) C_noret;
C_noret_decl(f_4285)
static void C_fcall f_4285(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4290)
static void C_ccall f_4290(C_word c,C_word *av) C_noret;
C_noret_decl(f_4292)
static void C_fcall f_4292(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4315)
static void C_fcall f_4315(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4320)
static void C_ccall f_4320(C_word c,C_word *av) C_noret;
C_noret_decl(f_4324)
static void C_ccall f_4324(C_word c,C_word *av) C_noret;
C_noret_decl(f_4328)
static void C_ccall f_4328(C_word c,C_word *av) C_noret;
C_noret_decl(f_4345)
static void C_fcall f_4345(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4361)
static void C_fcall f_4361(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4372)
static void C_ccall f_4372(C_word c,C_word *av) C_noret;
C_noret_decl(f_4376)
static void C_ccall f_4376(C_word c,C_word *av) C_noret;
C_noret_decl(f_4379)
static void C_ccall f_4379(C_word c,C_word *av) C_noret;
C_noret_decl(f_4382)
static void C_fcall f_4382(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4385)
static void C_ccall f_4385(C_word c,C_word *av) C_noret;
C_noret_decl(f_4391)
static void C_ccall f_4391(C_word c,C_word *av) C_noret;
C_noret_decl(f_4397)
static void C_ccall f_4397(C_word c,C_word *av) C_noret;
C_noret_decl(f_4409)
static void C_ccall f_4409(C_word c,C_word *av) C_noret;
C_noret_decl(f_4412)
static void C_ccall f_4412(C_word c,C_word *av) C_noret;
C_noret_decl(f_4415)
static void C_ccall f_4415(C_word c,C_word *av) C_noret;
C_noret_decl(f_4418)
static void C_ccall f_4418(C_word c,C_word *av) C_noret;
C_noret_decl(f_4421)
static void C_ccall f_4421(C_word c,C_word *av) C_noret;
C_noret_decl(f_4424)
static void C_ccall f_4424(C_word c,C_word *av) C_noret;
C_noret_decl(f_4431)
static void C_ccall f_4431(C_word c,C_word *av) C_noret;
C_noret_decl(f_4437)
static void C_ccall f_4437(C_word c,C_word *av) C_noret;
C_noret_decl(f_4440)
static void C_ccall f_4440(C_word c,C_word *av) C_noret;
C_noret_decl(f_4443)
static void C_ccall f_4443(C_word c,C_word *av) C_noret;
C_noret_decl(f_4446)
static void C_ccall f_4446(C_word c,C_word *av) C_noret;
C_noret_decl(f_4449)
static void C_ccall f_4449(C_word c,C_word *av) C_noret;
C_noret_decl(f_4452)
static void C_ccall f_4452(C_word c,C_word *av) C_noret;
C_noret_decl(f_4459)
static void C_ccall f_4459(C_word c,C_word *av) C_noret;
C_noret_decl(f_4463)
static void C_ccall f_4463(C_word c,C_word *av) C_noret;
C_noret_decl(f_4480)
static void C_ccall f_4480(C_word c,C_word *av) C_noret;
C_noret_decl(f_4487)
static void C_ccall f_4487(C_word c,C_word *av) C_noret;
C_noret_decl(f_4513)
static void C_fcall f_4513(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4516)
static void C_fcall f_4516(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4523)
static void C_ccall f_4523(C_word c,C_word *av) C_noret;
C_noret_decl(f_4544)
static void C_ccall f_4544(C_word c,C_word *av) C_noret;
C_noret_decl(f_4548)
static void C_ccall f_4548(C_word c,C_word *av) C_noret;
C_noret_decl(f_4551)
static void C_ccall f_4551(C_word c,C_word *av) C_noret;
C_noret_decl(f_4554)
static void C_ccall f_4554(C_word c,C_word *av) C_noret;
C_noret_decl(f_4557)
static void C_ccall f_4557(C_word c,C_word *av) C_noret;
C_noret_decl(f_4560)
static void C_ccall f_4560(C_word c,C_word *av) C_noret;
C_noret_decl(f_4570)
static void C_ccall f_4570(C_word c,C_word *av) C_noret;
C_noret_decl(f_4577)
static void C_ccall f_4577(C_word c,C_word *av) C_noret;
C_noret_decl(f_4584)
static void C_ccall f_4584(C_word c,C_word *av) C_noret;
C_noret_decl(f_4588)
static void C_ccall f_4588(C_word c,C_word *av) C_noret;
C_noret_decl(f_4595)
static void C_ccall f_4595(C_word c,C_word *av) C_noret;
C_noret_decl(f_4598)
static void C_ccall f_4598(C_word c,C_word *av) C_noret;
C_noret_decl(f_4610)
static void C_ccall f_4610(C_word c,C_word *av) C_noret;
C_noret_decl(f_4622)
static void C_ccall f_4622(C_word c,C_word *av) C_noret;
C_noret_decl(f_4629)
static void C_ccall f_4629(C_word c,C_word *av) C_noret;
C_noret_decl(f_4638)
static void C_ccall f_4638(C_word c,C_word *av) C_noret;
C_noret_decl(f_4645)
static void C_ccall f_4645(C_word c,C_word *av) C_noret;
C_noret_decl(f_4651)
static void C_ccall f_4651(C_word c,C_word *av) C_noret;
C_noret_decl(f_4654)
static void C_ccall f_4654(C_word c,C_word *av) C_noret;
C_noret_decl(f_4657)
static void C_ccall f_4657(C_word c,C_word *av) C_noret;
C_noret_decl(f_4660)
static void C_ccall f_4660(C_word c,C_word *av) C_noret;
C_noret_decl(f_4717)
static void C_ccall f_4717(C_word c,C_word *av) C_noret;
C_noret_decl(f_4729)
static void C_ccall f_4729(C_word c,C_word *av) C_noret;
C_noret_decl(f_4741)
static void C_ccall f_4741(C_word c,C_word *av) C_noret;
C_noret_decl(f_4753)
static void C_ccall f_4753(C_word c,C_word *av) C_noret;
C_noret_decl(f_4776)
static void C_fcall f_4776(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4779)
static void C_ccall f_4779(C_word c,C_word *av) C_noret;
C_noret_decl(f_4791)
static void C_ccall f_4791(C_word c,C_word *av) C_noret;
C_noret_decl(f_4881)
static void C_ccall f_4881(C_word c,C_word *av) C_noret;
C_noret_decl(f_4884)
static void C_ccall f_4884(C_word c,C_word *av) C_noret;
C_noret_decl(f_4888)
static void C_ccall f_4888(C_word c,C_word *av) C_noret;
C_noret_decl(f_4896)
static void C_ccall f_4896(C_word c,C_word *av) C_noret;
C_noret_decl(f_4913)
static void C_ccall f_4913(C_word c,C_word *av) C_noret;
C_noret_decl(f_4933)
static void C_ccall f_4933(C_word c,C_word *av) C_noret;
C_noret_decl(f_4936)
static void C_ccall f_4936(C_word c,C_word *av) C_noret;
C_noret_decl(f_5002)
static void C_ccall f_5002(C_word c,C_word *av) C_noret;
C_noret_decl(f_5006)
static void C_ccall f_5006(C_word c,C_word *av) C_noret;
C_noret_decl(f_5022)
static void C_ccall f_5022(C_word c,C_word *av) C_noret;
C_noret_decl(f_5033)
static void C_ccall f_5033(C_word c,C_word *av) C_noret;
C_noret_decl(f_5049)
static void C_ccall f_5049(C_word c,C_word *av) C_noret;
C_noret_decl(f_5070)
static void C_ccall f_5070(C_word c,C_word *av) C_noret;
C_noret_decl(f_5080)
static void C_ccall f_5080(C_word c,C_word *av) C_noret;
C_noret_decl(f_5090)
static void C_ccall f_5090(C_word c,C_word *av) C_noret;
C_noret_decl(f_5100)
static void C_ccall f_5100(C_word c,C_word *av) C_noret;
C_noret_decl(f_5110)
static void C_ccall f_5110(C_word c,C_word *av) C_noret;
C_noret_decl(f_5120)
static void C_ccall f_5120(C_word c,C_word *av) C_noret;
C_noret_decl(f_5130)
static void C_ccall f_5130(C_word c,C_word *av) C_noret;
C_noret_decl(f_5140)
static void C_ccall f_5140(C_word c,C_word *av) C_noret;
C_noret_decl(f_5150)
static void C_ccall f_5150(C_word c,C_word *av) C_noret;
C_noret_decl(f_5160)
static void C_ccall f_5160(C_word c,C_word *av) C_noret;
C_noret_decl(f_5177)
static void C_fcall f_5177(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5201)
static void C_ccall f_5201(C_word c,C_word *av) C_noret;
C_noret_decl(f_5218)
static void C_ccall f_5218(C_word c,C_word *av) C_noret;
C_noret_decl(f_5235)
static void C_ccall f_5235(C_word c,C_word *av) C_noret;
C_noret_decl(f_5252)
static void C_ccall f_5252(C_word c,C_word *av) C_noret;
C_noret_decl(f_5269)
static void C_ccall f_5269(C_word c,C_word *av) C_noret;
C_noret_decl(f_5273)
static void C_ccall f_5273(C_word c,C_word *av) C_noret;
C_noret_decl(f_5290)
static void C_ccall f_5290(C_word c,C_word *av) C_noret;
C_noret_decl(f_5294)
static void C_ccall f_5294(C_word c,C_word *av) C_noret;
C_noret_decl(f_5302)
static void C_ccall f_5302(C_word c,C_word *av) C_noret;
C_noret_decl(f_5316)
static void C_ccall f_5316(C_word c,C_word *av) C_noret;
C_noret_decl(f_5329)
static void C_ccall f_5329(C_word c,C_word *av) C_noret;
C_noret_decl(f_5333)
static void C_ccall f_5333(C_word c,C_word *av) C_noret;
C_noret_decl(f_5341)
static void C_ccall f_5341(C_word c,C_word *av) C_noret;
C_noret_decl(f_5354)
static void C_ccall f_5354(C_word c,C_word *av) C_noret;
C_noret_decl(f_5368)
static void C_fcall f_5368(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5372)
static void C_ccall f_5372(C_word c,C_word *av) C_noret;
C_noret_decl(f_5380)
static void C_ccall f_5380(C_word c,C_word *av) C_noret;
C_noret_decl(f_5384)
static void C_ccall f_5384(C_word c,C_word *av) C_noret;
C_noret_decl(f_5409)
static void C_ccall f_5409(C_word c,C_word *av) C_noret;
C_noret_decl(f_5412)
static void C_ccall f_5412(C_word c,C_word *av) C_noret;
C_noret_decl(f_5429)
static void C_ccall f_5429(C_word c,C_word *av) C_noret;
C_noret_decl(f_5432)
static void C_ccall f_5432(C_word c,C_word *av) C_noret;
C_noret_decl(f_5450)
static void C_ccall f_5450(C_word c,C_word *av) C_noret;
C_noret_decl(f_5457)
static void C_ccall f_5457(C_word c,C_word *av) C_noret;
C_noret_decl(f_5460)
static void C_fcall f_5460(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5463)
static void C_fcall f_5463(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5470)
static C_word C_fcall f_5470(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_5500)
static void C_ccall f_5500(C_word c,C_word *av) C_noret;
C_noret_decl(f_5506)
static void C_ccall f_5506(C_word c,C_word *av) C_noret;
C_noret_decl(f_5509)
static void C_ccall f_5509(C_word c,C_word *av) C_noret;
C_noret_decl(f_5519)
static void C_fcall f_5519(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5528)
static void C_fcall f_5528(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5538)
static void C_ccall f_5538(C_word c,C_word *av) C_noret;
C_noret_decl(f_5542)
static void C_ccall f_5542(C_word c,C_word *av) C_noret;
C_noret_decl(f_5565)
static void C_ccall f_5565(C_word c,C_word *av) C_noret;
C_noret_decl(f_5569)
static void C_ccall f_5569(C_word c,C_word *av) C_noret;
C_noret_decl(f_5596)
static void C_ccall f_5596(C_word c,C_word *av) C_noret;
C_noret_decl(f_5610)
static void C_ccall f_5610(C_word c,C_word *av) C_noret;
C_noret_decl(f_5620)
static void C_fcall f_5620(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5624)
static void C_ccall f_5624(C_word c,C_word *av) C_noret;
C_noret_decl(f_5647)
static void C_ccall f_5647(C_word c,C_word *av) C_noret;
C_noret_decl(f_5664)
static void C_ccall f_5664(C_word c,C_word *av) C_noret;
C_noret_decl(f_5666)
static void C_fcall f_5666(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5691)
static void C_ccall f_5691(C_word c,C_word *av) C_noret;
C_noret_decl(f_5705)
static void C_ccall f_5705(C_word c,C_word *av) C_noret;
C_noret_decl(f_5709)
static void C_ccall f_5709(C_word c,C_word *av) C_noret;
C_noret_decl(f_5726)
static void C_ccall f_5726(C_word c,C_word *av) C_noret;
C_noret_decl(f_5738)
static void C_ccall f_5738(C_word c,C_word *av) C_noret;
C_noret_decl(f_5743)
static void C_ccall f_5743(C_word c,C_word *av) C_noret;
C_noret_decl(f_5749)
static void C_ccall f_5749(C_word c,C_word *av) C_noret;
C_noret_decl(f_5760)
static void C_ccall f_5760(C_word c,C_word *av) C_noret;
C_noret_decl(f_5774)
static void C_ccall f_5774(C_word c,C_word *av) C_noret;
C_noret_decl(f_5788)
static void C_ccall f_5788(C_word c,C_word *av) C_noret;
C_noret_decl(f_5801)
static void C_fcall f_5801(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5806)
static void C_ccall f_5806(C_word c,C_word *av) C_noret;
C_noret_decl(f_5825)
static void C_ccall f_5825(C_word c,C_word *av) C_noret;
C_noret_decl(f_5837)
static void C_fcall f_5837(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5841)
static void C_ccall f_5841(C_word c,C_word *av) C_noret;
C_noret_decl(f_5849)
static void C_ccall f_5849(C_word c,C_word *av) C_noret;
C_noret_decl(f_5858)
static void C_ccall f_5858(C_word c,C_word *av) C_noret;
C_noret_decl(f_5864)
static void C_ccall f_5864(C_word c,C_word *av) C_noret;
C_noret_decl(f_5894)
static void C_ccall f_5894(C_word c,C_word *av) C_noret;
C_noret_decl(f_6099)
static void C_ccall f_6099(C_word c,C_word *av) C_noret;
C_noret_decl(f_6102)
static void C_ccall f_6102(C_word c,C_word *av) C_noret;
C_noret_decl(f_6105)
static void C_ccall f_6105(C_word c,C_word *av) C_noret;
C_noret_decl(f_6108)
static void C_fcall f_6108(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6112)
static void C_ccall f_6112(C_word c,C_word *av) C_noret;
C_noret_decl(f_6116)
static void C_ccall f_6116(C_word c,C_word *av) C_noret;
C_noret_decl(f_6135)
static void C_ccall f_6135(C_word c,C_word *av) C_noret;
C_noret_decl(f_6139)
static void C_ccall f_6139(C_word c,C_word *av) C_noret;
C_noret_decl(f_6143)
static void C_ccall f_6143(C_word c,C_word *av) C_noret;
C_noret_decl(f_6147)
static void C_ccall f_6147(C_word c,C_word *av) C_noret;
C_noret_decl(f_6151)
static void C_ccall f_6151(C_word c,C_word *av) C_noret;
C_noret_decl(f_6155)
static void C_fcall f_6155(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6166)
static void C_ccall f_6166(C_word c,C_word *av) C_noret;
C_noret_decl(f_6172)
static void C_ccall f_6172(C_word c,C_word *av) C_noret;
C_noret_decl(f_6174)
static void C_fcall f_6174(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6199)
static void C_ccall f_6199(C_word c,C_word *av) C_noret;
C_noret_decl(f_6210)
static void C_fcall f_6210(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6220)
static void C_fcall f_6220(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6227)
static void C_ccall f_6227(C_word c,C_word *av) C_noret;
C_noret_decl(f_6241)
static void C_ccall f_6241(C_word c,C_word *av) C_noret;
C_noret_decl(f_6270)
static void C_fcall f_6270(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6280)
static void C_ccall f_6280(C_word c,C_word *av) C_noret;
C_noret_decl(f_6295)
static void C_fcall f_6295(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6299)
static void C_ccall f_6299(C_word c,C_word *av) C_noret;
C_noret_decl(f_6302)
static void C_ccall f_6302(C_word c,C_word *av) C_noret;
C_noret_decl(f_6305)
static void C_ccall f_6305(C_word c,C_word *av) C_noret;
C_noret_decl(f_6317)
static void C_ccall f_6317(C_word c,C_word *av) C_noret;
C_noret_decl(f_6329)
static void C_ccall f_6329(C_word c,C_word *av) C_noret;
C_noret_decl(f_6333)
static void C_ccall f_6333(C_word c,C_word *av) C_noret;
C_noret_decl(f_6337)
static void C_fcall f_6337(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6341)
static void C_ccall f_6341(C_word c,C_word *av) C_noret;
C_noret_decl(f_6352)
static void C_ccall f_6352(C_word c,C_word *av) C_noret;
C_noret_decl(f_6381)
static void C_ccall f_6381(C_word c,C_word *av) C_noret;
C_noret_decl(f_6384)
static void C_fcall f_6384(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6385)
static void C_fcall f_6385(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6389)
static void C_ccall f_6389(C_word c,C_word *av) C_noret;
C_noret_decl(f_6392)
static void C_ccall f_6392(C_word c,C_word *av) C_noret;
C_noret_decl(f_6404)
static void C_ccall f_6404(C_word c,C_word *av) C_noret;
C_noret_decl(f_6412)
static void C_ccall f_6412(C_word c,C_word *av) C_noret;
C_noret_decl(f_6416)
static void C_ccall f_6416(C_word c,C_word *av) C_noret;
C_noret_decl(f_6422)
static void C_ccall f_6422(C_word c,C_word *av) C_noret;
C_noret_decl(f_6426)
static void C_ccall f_6426(C_word c,C_word *av) C_noret;
C_noret_decl(f_6435)
static void C_ccall f_6435(C_word c,C_word *av) C_noret;
C_noret_decl(f_6443)
static void C_fcall f_6443(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6453)
static void C_ccall f_6453(C_word c,C_word *av) C_noret;
C_noret_decl(f_6466)
static void C_fcall f_6466(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6476)
static void C_ccall f_6476(C_word c,C_word *av) C_noret;
C_noret_decl(f_6491)
static void C_ccall f_6491(C_word c,C_word *av) C_noret;
C_noret_decl(f_6493)
static void C_fcall f_6493(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6503)
static void C_ccall f_6503(C_word c,C_word *av) C_noret;
C_noret_decl(f_6517)
static void C_fcall f_6517(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6520)
static void C_ccall f_6520(C_word c,C_word *av) C_noret;
C_noret_decl(f_6523)
static void C_ccall f_6523(C_word c,C_word *av) C_noret;
C_noret_decl(f_6535)
static void C_ccall f_6535(C_word c,C_word *av) C_noret;
C_noret_decl(f_6542)
static void C_ccall f_6542(C_word c,C_word *av) C_noret;
C_noret_decl(f_6544)
static void C_fcall f_6544(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6554)
static void C_ccall f_6554(C_word c,C_word *av) C_noret;
C_noret_decl(f_6567)
static void C_fcall f_6567(C_word t0) C_noret;
C_noret_decl(f_6578)
static void C_ccall f_6578(C_word c,C_word *av) C_noret;
C_noret_decl(f_6584)
static void C_ccall f_6584(C_word c,C_word *av) C_noret;
C_noret_decl(f_6586)
static void C_fcall f_6586(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6611)
static void C_ccall f_6611(C_word c,C_word *av) C_noret;
C_noret_decl(f_6625)
static void C_ccall f_6625(C_word c,C_word *av) C_noret;
C_noret_decl(f_6634)
static void C_ccall f_6634(C_word c,C_word *av) C_noret;
C_noret_decl(f_6637)
static void C_ccall f_6637(C_word c,C_word *av) C_noret;
C_noret_decl(f_6640)
static void C_ccall f_6640(C_word c,C_word *av) C_noret;
C_noret_decl(f_6643)
static void C_ccall f_6643(C_word c,C_word *av) C_noret;
C_noret_decl(f_6649)
static void C_ccall f_6649(C_word c,C_word *av) C_noret;
C_noret_decl(f_6657)
static void C_fcall f_6657(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6667)
static void C_ccall f_6667(C_word c,C_word *av) C_noret;
C_noret_decl(f_6684)
static void C_ccall f_6684(C_word c,C_word *av) C_noret;
C_noret_decl(f_6694)
static void C_ccall f_6694(C_word c,C_word *av) C_noret;
C_noret_decl(f_6698)
static void C_ccall f_6698(C_word c,C_word *av) C_noret;
C_noret_decl(f_6702)
static void C_ccall f_6702(C_word c,C_word *av) C_noret;
C_noret_decl(f_6706)
static void C_ccall f_6706(C_word c,C_word *av) C_noret;
C_noret_decl(f_6710)
static void C_ccall f_6710(C_word c,C_word *av) C_noret;
C_noret_decl(f_6713)
static void C_ccall f_6713(C_word c,C_word *av) C_noret;
C_noret_decl(f_6723)
static void C_ccall f_6723(C_word c,C_word *av) C_noret;
C_noret_decl(f_6730)
static void C_ccall f_6730(C_word c,C_word *av) C_noret;
C_noret_decl(f_6735)
static void C_ccall f_6735(C_word c,C_word *av) C_noret;
C_noret_decl(f_6739)
static void C_ccall f_6739(C_word c,C_word *av) C_noret;
C_noret_decl(f_6747)
static void C_ccall f_6747(C_word c,C_word *av) C_noret;
C_noret_decl(f_6755)
static void C_ccall f_6755(C_word c,C_word *av) C_noret;
C_noret_decl(f_6759)
static void C_ccall f_6759(C_word c,C_word *av) C_noret;
C_noret_decl(f_6763)
static void C_ccall f_6763(C_word c,C_word *av) C_noret;
C_noret_decl(f_6768)
static void C_ccall f_6768(C_word c,C_word *av) C_noret;
C_noret_decl(f_6770)
static void C_fcall f_6770(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6795)
static void C_ccall f_6795(C_word c,C_word *av) C_noret;
C_noret_decl(f_6811)
static void C_ccall f_6811(C_word c,C_word *av) C_noret;
C_noret_decl(f_6814)
static void C_ccall f_6814(C_word c,C_word *av) C_noret;
C_noret_decl(f_6821)
static void C_ccall f_6821(C_word c,C_word *av) C_noret;
C_noret_decl(f_6835)
static void C_ccall f_6835(C_word c,C_word *av) C_noret;
C_noret_decl(f_6850)
static void C_ccall f_6850(C_word c,C_word *av) C_noret;
C_noret_decl(f_6858)
static void C_fcall f_6858(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6883)
static void C_ccall f_6883(C_word c,C_word *av) C_noret;
C_noret_decl(f_6892)
static void C_fcall f_6892(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6917)
static void C_ccall f_6917(C_word c,C_word *av) C_noret;
C_noret_decl(f_6929)
static void C_fcall f_6929(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6943)
static void C_ccall f_6943(C_word c,C_word *av) C_noret;
C_noret_decl(f_6949)
static void C_fcall f_6949(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6952)
static void C_ccall f_6952(C_word c,C_word *av) C_noret;
C_noret_decl(f_6955)
static void C_ccall f_6955(C_word c,C_word *av) C_noret;
C_noret_decl(f_6962)
static void C_ccall f_6962(C_word c,C_word *av) C_noret;
C_noret_decl(f_6966)
static void C_ccall f_6966(C_word c,C_word *av) C_noret;
C_noret_decl(f_6975)
static void C_ccall f_6975(C_word c,C_word *av) C_noret;
C_noret_decl(f_7054)
static void C_fcall f_7054(C_word t0) C_noret;
C_noret_decl(f_7065)
static void C_ccall f_7065(C_word c,C_word *av) C_noret;
C_noret_decl(f_7071)
static void C_ccall f_7071(C_word c,C_word *av) C_noret;
C_noret_decl(f_7073)
static void C_fcall f_7073(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7098)
static void C_ccall f_7098(C_word c,C_word *av) C_noret;
C_noret_decl(f_7107)
static void C_fcall f_7107(C_word t0) C_noret;
C_noret_decl(f_7115)
static void C_ccall f_7115(C_word c,C_word *av) C_noret;
C_noret_decl(f_7119)
static void C_ccall f_7119(C_word c,C_word *av) C_noret;
C_noret_decl(f_7142)
static void C_ccall f_7142(C_word c,C_word *av) C_noret;
C_noret_decl(f_7152)
static void C_ccall f_7152(C_word c,C_word *av) C_noret;
C_noret_decl(f_7156)
static void C_ccall f_7156(C_word c,C_word *av) C_noret;
C_noret_decl(f_7160)
static void C_ccall f_7160(C_word c,C_word *av) C_noret;
C_noret_decl(f_7162)
static void C_fcall f_7162(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7185)
static void C_ccall f_7185(C_word c,C_word *av) C_noret;
C_noret_decl(f_7190)
static void C_fcall f_7190(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7197)
static void C_ccall f_7197(C_word c,C_word *av) C_noret;
C_noret_decl(f_7205)
static void C_fcall f_7205(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7214)
static void C_fcall f_7214(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7231)
static void C_ccall f_7231(C_word c,C_word *av) C_noret;
C_noret_decl(f_7239)
static void C_ccall f_7239(C_word c,C_word *av) C_noret;
C_noret_decl(f_7246)
static void C_ccall f_7246(C_word c,C_word *av) C_noret;
C_noret_decl(f_7252)
static void C_ccall f_7252(C_word c,C_word *av) C_noret;
C_noret_decl(f_7257)
static void C_ccall f_7257(C_word c,C_word *av) C_noret;
C_noret_decl(f_7269)
static void C_ccall f_7269(C_word c,C_word *av) C_noret;
C_noret_decl(f_7280)
static void C_ccall f_7280(C_word c,C_word *av) C_noret;
C_noret_decl(f_7283)
static void C_ccall f_7283(C_word c,C_word *av) C_noret;
C_noret_decl(f_7286)
static void C_ccall f_7286(C_word c,C_word *av) C_noret;
C_noret_decl(f_7289)
static void C_ccall f_7289(C_word c,C_word *av) C_noret;
C_noret_decl(f_7306)
static void C_ccall f_7306(C_word c,C_word *av) C_noret;
C_noret_decl(f_7309)
static void C_ccall f_7309(C_word c,C_word *av) C_noret;
C_noret_decl(f_7312)
static void C_ccall f_7312(C_word c,C_word *av) C_noret;
C_noret_decl(f_7315)
static void C_ccall f_7315(C_word c,C_word *av) C_noret;
C_noret_decl(f_7331)
static void C_ccall f_7331(C_word c,C_word *av) C_noret;
C_noret_decl(f_7335)
static void C_fcall f_7335(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7343)
static void C_ccall f_7343(C_word c,C_word *av) C_noret;
C_noret_decl(f_7351)
static void C_fcall f_7351(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7359)
static void C_ccall f_7359(C_word c,C_word *av) C_noret;
C_noret_decl(f_7364)
static void C_ccall f_7364(C_word c,C_word *av) C_noret;
C_noret_decl(f_7368)
static void C_ccall f_7368(C_word c,C_word *av) C_noret;
C_noret_decl(f_7387)
static void C_ccall f_7387(C_word c,C_word *av) C_noret;
C_noret_decl(f_7393)
static void C_ccall f_7393(C_word c,C_word *av) C_noret;
C_noret_decl(f_7396)
static void C_ccall f_7396(C_word c,C_word *av) C_noret;
C_noret_decl(f_7399)
static void C_ccall f_7399(C_word c,C_word *av) C_noret;
C_noret_decl(f_7402)
static void C_ccall f_7402(C_word c,C_word *av) C_noret;
C_noret_decl(f_7405)
static void C_ccall f_7405(C_word c,C_word *av) C_noret;
C_noret_decl(f_7409)
static void C_ccall f_7409(C_word c,C_word *av) C_noret;
C_noret_decl(f_7413)
static void C_ccall f_7413(C_word c,C_word *av) C_noret;
C_noret_decl(f_7417)
static void C_ccall f_7417(C_word c,C_word *av) C_noret;
C_noret_decl(f_7423)
static void C_ccall f_7423(C_word c,C_word *av) C_noret;
C_noret_decl(f_7428)
static void C_ccall f_7428(C_word c,C_word *av) C_noret;
C_noret_decl(f_7436)
static void C_ccall f_7436(C_word c,C_word *av) C_noret;
C_noret_decl(f_7454)
static void C_ccall f_7454(C_word c,C_word *av) C_noret;
C_noret_decl(f_7460)
static void C_ccall f_7460(C_word c,C_word *av) C_noret;
C_noret_decl(f_7464)
static void C_ccall f_7464(C_word c,C_word *av) C_noret;
C_noret_decl(f_7468)
static void C_ccall f_7468(C_word c,C_word *av) C_noret;
C_noret_decl(f_7472)
static void C_ccall f_7472(C_word c,C_word *av) C_noret;
C_noret_decl(f_7479)
static void C_fcall f_7479(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7483)
static void C_ccall f_7483(C_word c,C_word *av) C_noret;
C_noret_decl(f_7486)
static void C_ccall f_7486(C_word c,C_word *av) C_noret;
C_noret_decl(f_7502)
static void C_ccall f_7502(C_word c,C_word *av) C_noret;
C_noret_decl(f_7505)
static void C_ccall f_7505(C_word c,C_word *av) C_noret;
C_noret_decl(f_7513)
static void C_fcall f_7513(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7538)
static void C_ccall f_7538(C_word c,C_word *av) C_noret;
C_noret_decl(f_7547)
static void C_fcall f_7547(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7572)
static void C_ccall f_7572(C_word c,C_word *av) C_noret;
C_noret_decl(f_7589)
static void C_ccall f_7589(C_word c,C_word *av) C_noret;
C_noret_decl(f_7609)
static void C_ccall f_7609(C_word c,C_word *av) C_noret;
C_noret_decl(f_7613)
static void C_ccall f_7613(C_word c,C_word *av) C_noret;
C_noret_decl(f_7638)
static void C_ccall f_7638(C_word c,C_word *av) C_noret;
C_noret_decl(f_7656)
static void C_ccall f_7656(C_word c,C_word *av) C_noret;
C_noret_decl(f_7660)
static void C_ccall f_7660(C_word c,C_word *av) C_noret;
C_noret_decl(f_7667)
static void C_ccall f_7667(C_word c,C_word *av) C_noret;
C_noret_decl(f_7671)
static void C_ccall f_7671(C_word c,C_word *av) C_noret;
C_noret_decl(f_7675)
static void C_ccall f_7675(C_word c,C_word *av) C_noret;
C_noret_decl(f_7679)
static void C_ccall f_7679(C_word c,C_word *av) C_noret;
C_noret_decl(f_7683)
static void C_ccall f_7683(C_word c,C_word *av) C_noret;
C_noret_decl(f_7694)
static void C_ccall f_7694(C_word c,C_word *av) C_noret;
C_noret_decl(f_7697)
static void C_ccall f_7697(C_word c,C_word *av) C_noret;
C_noret_decl(f_7700)
static void C_ccall f_7700(C_word c,C_word *av) C_noret;
C_noret_decl(f_7710)
static void C_ccall f_7710(C_word c,C_word *av) C_noret;
C_noret_decl(f_7714)
static void C_ccall f_7714(C_word c,C_word *av) C_noret;
C_noret_decl(f_7718)
static void C_ccall f_7718(C_word c,C_word *av) C_noret;
C_noret_decl(f_7723)
static void C_ccall f_7723(C_word c,C_word *av) C_noret;
C_noret_decl(f_7728)
static void C_ccall f_7728(C_word c,C_word *av) C_noret;
C_noret_decl(f_7732)
static void C_ccall f_7732(C_word c,C_word *av) C_noret;
C_noret_decl(f_7736)
static void C_ccall f_7736(C_word c,C_word *av) C_noret;
C_noret_decl(f_7743)
static void C_ccall f_7743(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2457)
static void C_ccall trf_2457(C_word c,C_word *av) C_noret;
static void C_ccall trf_2457(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2457(t0,t1);}

C_noret_decl(trf_2909)
static void C_ccall trf_2909(C_word c,C_word *av) C_noret;
static void C_ccall trf_2909(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2909(t0,t1,t2);}

C_noret_decl(trf_2915)
static void C_ccall trf_2915(C_word c,C_word *av) C_noret;
static void C_ccall trf_2915(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2915(t0,t1,t2,t3);}

C_noret_decl(trf_2971)
static void C_ccall trf_2971(C_word c,C_word *av) C_noret;
static void C_ccall trf_2971(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2971(t0,t1,t2);}

C_noret_decl(trf_3046)
static void C_ccall trf_3046(C_word c,C_word *av) C_noret;
static void C_ccall trf_3046(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3046(t0,t1,t2);}

C_noret_decl(trf_3094)
static void C_ccall trf_3094(C_word c,C_word *av) C_noret;
static void C_ccall trf_3094(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3094(t0,t1,t2);}

C_noret_decl(trf_3102)
static void C_ccall trf_3102(C_word c,C_word *av) C_noret;
static void C_ccall trf_3102(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3102(t0,t1,t2,t3);}

C_noret_decl(trf_3138)
static void C_ccall trf_3138(C_word c,C_word *av) C_noret;
static void C_ccall trf_3138(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3138(t0,t1,t2);}

C_noret_decl(trf_3146)
static void C_ccall trf_3146(C_word c,C_word *av) C_noret;
static void C_ccall trf_3146(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3146(t0,t1,t2,t3);}

C_noret_decl(trf_3351)
static void C_ccall trf_3351(C_word c,C_word *av) C_noret;
static void C_ccall trf_3351(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3351(t0,t1,t2,t3);}

C_noret_decl(trf_3785)
static void C_ccall trf_3785(C_word c,C_word *av) C_noret;
static void C_ccall trf_3785(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3785(t0,t1,t2);}

C_noret_decl(trf_3902)
static void C_ccall trf_3902(C_word c,C_word *av) C_noret;
static void C_ccall trf_3902(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3902(t0,t1);}

C_noret_decl(trf_3905)
static void C_ccall trf_3905(C_word c,C_word *av) C_noret;
static void C_ccall trf_3905(C_word c,C_word *av){
C_word t0=av[0];
f_3905(t0);}

C_noret_decl(trf_4066)
static void C_ccall trf_4066(C_word c,C_word *av) C_noret;
static void C_ccall trf_4066(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4066(t0,t1);}

C_noret_decl(trf_4070)
static void C_ccall trf_4070(C_word c,C_word *av) C_noret;
static void C_ccall trf_4070(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4070(t0,t1);}

C_noret_decl(trf_4095)
static void C_ccall trf_4095(C_word c,C_word *av) C_noret;
static void C_ccall trf_4095(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4095(t0,t1,t2);}

C_noret_decl(trf_4285)
static void C_ccall trf_4285(C_word c,C_word *av) C_noret;
static void C_ccall trf_4285(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4285(t0,t1);}

C_noret_decl(trf_4292)
static void C_ccall trf_4292(C_word c,C_word *av) C_noret;
static void C_ccall trf_4292(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4292(t0,t1,t2,t3);}

C_noret_decl(trf_4315)
static void C_ccall trf_4315(C_word c,C_word *av) C_noret;
static void C_ccall trf_4315(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4315(t0,t1);}

C_noret_decl(trf_4345)
static void C_ccall trf_4345(C_word c,C_word *av) C_noret;
static void C_ccall trf_4345(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4345(t0,t1);}

C_noret_decl(trf_4361)
static void C_ccall trf_4361(C_word c,C_word *av) C_noret;
static void C_ccall trf_4361(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4361(t0,t1,t2);}

C_noret_decl(trf_4382)
static void C_ccall trf_4382(C_word c,C_word *av) C_noret;
static void C_ccall trf_4382(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4382(t0,t1);}

C_noret_decl(trf_4513)
static void C_ccall trf_4513(C_word c,C_word *av) C_noret;
static void C_ccall trf_4513(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4513(t0,t1);}

C_noret_decl(trf_4516)
static void C_ccall trf_4516(C_word c,C_word *av) C_noret;
static void C_ccall trf_4516(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4516(t0,t1);}

C_noret_decl(trf_4776)
static void C_ccall trf_4776(C_word c,C_word *av) C_noret;
static void C_ccall trf_4776(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4776(t0,t1);}

C_noret_decl(trf_5177)
static void C_ccall trf_5177(C_word c,C_word *av) C_noret;
static void C_ccall trf_5177(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5177(t0,t1);}

C_noret_decl(trf_5368)
static void C_ccall trf_5368(C_word c,C_word *av) C_noret;
static void C_ccall trf_5368(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5368(t0,t1);}

C_noret_decl(trf_5460)
static void C_ccall trf_5460(C_word c,C_word *av) C_noret;
static void C_ccall trf_5460(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5460(t0,t1);}

C_noret_decl(trf_5463)
static void C_ccall trf_5463(C_word c,C_word *av) C_noret;
static void C_ccall trf_5463(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5463(t0,t1);}

C_noret_decl(trf_5519)
static void C_ccall trf_5519(C_word c,C_word *av) C_noret;
static void C_ccall trf_5519(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5519(t0,t1);}

C_noret_decl(trf_5528)
static void C_ccall trf_5528(C_word c,C_word *av) C_noret;
static void C_ccall trf_5528(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5528(t0,t1);}

C_noret_decl(trf_5620)
static void C_ccall trf_5620(C_word c,C_word *av) C_noret;
static void C_ccall trf_5620(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5620(t0,t1);}

C_noret_decl(trf_5666)
static void C_ccall trf_5666(C_word c,C_word *av) C_noret;
static void C_ccall trf_5666(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5666(t0,t1,t2);}

C_noret_decl(trf_5801)
static void C_ccall trf_5801(C_word c,C_word *av) C_noret;
static void C_ccall trf_5801(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5801(t0,t1);}

C_noret_decl(trf_5837)
static void C_ccall trf_5837(C_word c,C_word *av) C_noret;
static void C_ccall trf_5837(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5837(t0,t1);}

C_noret_decl(trf_6108)
static void C_ccall trf_6108(C_word c,C_word *av) C_noret;
static void C_ccall trf_6108(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6108(t0,t1);}

C_noret_decl(trf_6155)
static void C_ccall trf_6155(C_word c,C_word *av) C_noret;
static void C_ccall trf_6155(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6155(t0,t1);}

C_noret_decl(trf_6174)
static void C_ccall trf_6174(C_word c,C_word *av) C_noret;
static void C_ccall trf_6174(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6174(t0,t1,t2);}

C_noret_decl(trf_6210)
static void C_ccall trf_6210(C_word c,C_word *av) C_noret;
static void C_ccall trf_6210(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6210(t0,t1);}

C_noret_decl(trf_6220)
static void C_ccall trf_6220(C_word c,C_word *av) C_noret;
static void C_ccall trf_6220(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6220(t0,t1);}

C_noret_decl(trf_6270)
static void C_ccall trf_6270(C_word c,C_word *av) C_noret;
static void C_ccall trf_6270(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6270(t0,t1,t2);}

C_noret_decl(trf_6295)
static void C_ccall trf_6295(C_word c,C_word *av) C_noret;
static void C_ccall trf_6295(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6295(t0,t1,t2);}

C_noret_decl(trf_6337)
static void C_ccall trf_6337(C_word c,C_word *av) C_noret;
static void C_ccall trf_6337(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6337(t0,t1);}

C_noret_decl(trf_6384)
static void C_ccall trf_6384(C_word c,C_word *av) C_noret;
static void C_ccall trf_6384(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6384(t0,t1);}

C_noret_decl(trf_6385)
static void C_ccall trf_6385(C_word c,C_word *av) C_noret;
static void C_ccall trf_6385(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6385(t0,t1,t2);}

C_noret_decl(trf_6443)
static void C_ccall trf_6443(C_word c,C_word *av) C_noret;
static void C_ccall trf_6443(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6443(t0,t1,t2);}

C_noret_decl(trf_6466)
static void C_ccall trf_6466(C_word c,C_word *av) C_noret;
static void C_ccall trf_6466(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6466(t0,t1,t2);}

C_noret_decl(trf_6493)
static void C_ccall trf_6493(C_word c,C_word *av) C_noret;
static void C_ccall trf_6493(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6493(t0,t1,t2);}

C_noret_decl(trf_6517)
static void C_ccall trf_6517(C_word c,C_word *av) C_noret;
static void C_ccall trf_6517(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6517(t0,t1);}

C_noret_decl(trf_6544)
static void C_ccall trf_6544(C_word c,C_word *av) C_noret;
static void C_ccall trf_6544(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6544(t0,t1,t2);}

C_noret_decl(trf_6567)
static void C_ccall trf_6567(C_word c,C_word *av) C_noret;
static void C_ccall trf_6567(C_word c,C_word *av){
C_word t0=av[0];
f_6567(t0);}

C_noret_decl(trf_6586)
static void C_ccall trf_6586(C_word c,C_word *av) C_noret;
static void C_ccall trf_6586(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6586(t0,t1,t2);}

C_noret_decl(trf_6657)
static void C_ccall trf_6657(C_word c,C_word *av) C_noret;
static void C_ccall trf_6657(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6657(t0,t1,t2);}

C_noret_decl(trf_6770)
static void C_ccall trf_6770(C_word c,C_word *av) C_noret;
static void C_ccall trf_6770(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6770(t0,t1,t2);}

C_noret_decl(trf_6858)
static void C_ccall trf_6858(C_word c,C_word *av) C_noret;
static void C_ccall trf_6858(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6858(t0,t1,t2);}

C_noret_decl(trf_6892)
static void C_ccall trf_6892(C_word c,C_word *av) C_noret;
static void C_ccall trf_6892(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6892(t0,t1,t2);}

C_noret_decl(trf_6929)
static void C_ccall trf_6929(C_word c,C_word *av) C_noret;
static void C_ccall trf_6929(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6929(t0,t1,t2,t3);}

C_noret_decl(trf_6949)
static void C_ccall trf_6949(C_word c,C_word *av) C_noret;
static void C_ccall trf_6949(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6949(t0,t1);}

C_noret_decl(trf_7054)
static void C_ccall trf_7054(C_word c,C_word *av) C_noret;
static void C_ccall trf_7054(C_word c,C_word *av){
C_word t0=av[0];
f_7054(t0);}

C_noret_decl(trf_7073)
static void C_ccall trf_7073(C_word c,C_word *av) C_noret;
static void C_ccall trf_7073(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7073(t0,t1,t2);}

C_noret_decl(trf_7107)
static void C_ccall trf_7107(C_word c,C_word *av) C_noret;
static void C_ccall trf_7107(C_word c,C_word *av){
C_word t0=av[0];
f_7107(t0);}

C_noret_decl(trf_7162)
static void C_ccall trf_7162(C_word c,C_word *av) C_noret;
static void C_ccall trf_7162(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7162(t0,t1,t2);}

C_noret_decl(trf_7190)
static void C_ccall trf_7190(C_word c,C_word *av) C_noret;
static void C_ccall trf_7190(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7190(t0,t1);}

C_noret_decl(trf_7205)
static void C_ccall trf_7205(C_word c,C_word *av) C_noret;
static void C_ccall trf_7205(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7205(t0,t1,t2);}

C_noret_decl(trf_7214)
static void C_ccall trf_7214(C_word c,C_word *av) C_noret;
static void C_ccall trf_7214(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7214(t0,t1,t2);}

C_noret_decl(trf_7335)
static void C_ccall trf_7335(C_word c,C_word *av) C_noret;
static void C_ccall trf_7335(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7335(t0,t1,t2);}

C_noret_decl(trf_7351)
static void C_ccall trf_7351(C_word c,C_word *av) C_noret;
static void C_ccall trf_7351(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7351(t0,t1);}

C_noret_decl(trf_7479)
static void C_ccall trf_7479(C_word c,C_word *av) C_noret;
static void C_ccall trf_7479(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7479(t0,t1);}

C_noret_decl(trf_7513)
static void C_ccall trf_7513(C_word c,C_word *av) C_noret;
static void C_ccall trf_7513(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7513(t0,t1,t2);}

C_noret_decl(trf_7547)
static void C_ccall trf_7547(C_word c,C_word *av) C_noret;
static void C_ccall trf_7547(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7547(t0,t1,t2);}

/* f8467 in k6809 in k6947 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_ccall f8467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8467,2,av);}
/* csc.scm:981: chicken.file#file-exists? */
t2=C_fast_retrieve(lf[131]);{
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

/* f8473 in k4438 in k4435 in k4429 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in ... */
static void C_ccall f8473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f8473,2,av);}
/* csc.scm:586: ##sys#print */
t2=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* f8477 in k4438 in k4435 in k4429 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in ... */
static void C_ccall f8477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f8477,2,av);}
/* csc.scm:586: ##sys#print */
t2=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* f8500 in k4552 in k4549 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in ... */
static void C_ccall f8500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f8500,2,av);}
/* csc.scm:559: chicken.base#exit */
t2=C_fast_retrieve(lf[44]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f8546 in k4438 in k4435 in k4429 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in ... */
static void C_ccall f8546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8546,2,av);}
/* csc.scm:92: chicken.process#qs */
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

/* k2240 */
static void C_ccall f_2242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2242,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2245,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k2243 in k2240 */
static void C_ccall f_2245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2245,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2248,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k2246 in k2243 in k2240 */
static void C_ccall f_2248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2248,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2251,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k2249 in k2246 in k2243 in k2240 */
static void C_ccall f_2251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2251,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2254,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k2252 in k2249 in k2246 in k2243 in k2240 */
static void C_ccall f_2254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2254,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2257,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k2255 in k2252 in k2249 in k2246 in k2243 in k2240 */
static void C_ccall f_2257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2257,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2260,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k2258 in k2255 in k2252 in k2249 in k2246 in k2243 in k2240 */
static void C_ccall f_2260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2260,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2263,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k2261 in k2258 in k2255 in k2252 in k2249 in k2246 in k2243 in k2240 */
static void C_ccall f_2263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,7)))){
C_save_and_reclaim((void *)f_2263,2,av);}
a=C_alloc(11);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2266,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:28: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[440]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[440]+1);
av2[1]=t3;
av2[2]=lf[441];
av2[3]=lf[441];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=C_SCHEME_END_OF_LIST;
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* k2264 in k2261 in k2258 in k2255 in k2252 in k2249 in k2246 in k2243 in k2240 */
static void C_ccall f_2266(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2266,2,av);}
a=C_alloc(3);
t2=C_mutate(&lf[1] /* (set! main#staticbuild ...) */,C_mk_bool(STATIC_CHICKEN));
t3=C_mutate(&lf[2] /* (set! main#debugbuild ...) */,C_mk_bool(DEBUG_CHICKEN));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2272,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:43: chicken.platform#feature? */
t5=C_fast_retrieve(lf[426]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[427];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2270 in k2264 in k2261 in k2258 in k2255 in k2252 in k2249 in k2246 in k2243 in k2240 */
static void C_ccall f_2272(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2272,2,av);}
a=C_alloc(6);
t2=lf[3] /* main#cross-chicken */ =t1;;
t3=lf[4] /* main#binary-version */ =C_fix((C_word)C_BINARY_VERSION);;
t4=lf[5] /* main#major-version */ =C_fix((C_word)C_MAJOR_VERSION);;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2278,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[49]+1);{
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

/* k2276 in k2270 in k2264 in k2261 in k2258 in k2255 in k2252 in k2249 in k2246 in k2243 in k2240 */
static void C_ccall f_2278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2278,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[6] /* (set! main#default-cc ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2282,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CXX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2280 in k2276 in k2270 in k2264 in k2261 in k2258 in k2255 in k2252 in k2249 in k2246 in k2243 in k2240 */
static void C_ccall f_2282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2282,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[7] /* (set! main#default-cxx ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2286,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INSTALL_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2284 in k2280 in k2276 in k2270 in k2264 in k2261 in k2258 in k2255 in k2252 in k2249 in k2246 in k2243 in k2240 */
static void C_ccall f_2286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2286,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2290,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
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

/* k2288 in k2284 in k2280 in k2276 in k2270 in k2264 in k2261 in k2258 in k2255 in k2252 in k2249 in k2246 in k2243 in k2240 */
static void C_ccall f_2290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2290,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[8] /* (set! main#default-cflags ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2294,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LDFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2292 in k2288 in k2284 in k2280 in k2276 in k2270 in k2264 in k2261 in k2258 in k2255 in k2252 in k2249 in k2246 in k2243 in k2240 */
static void C_ccall f_2294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2294,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2298,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
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

/* k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2270 in k2264 in k2261 in k2258 in k2255 in k2252 in k2249 in k2246 in k2243 in k2240 */
static void C_ccall f_2298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2298,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2302,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
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

/* k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2270 in k2264 in k2261 in k2258 in k2255 in k2252 in k2249 in k2246 in k2243 in k2240 */
static void C_ccall f_2302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2302,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2306,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
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

/* k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2270 in k2264 in k2261 in k2258 in k2255 in k2252 in k2249 in k2246 in k2243 in k2240 */
static void C_ccall f_2306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2306,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[9] /* (set! main#default-libs ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2310,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2270 in k2264 in k2261 in k2258 in k2255 in k2252 in k2249 in k2246 in k2243 in k2240 */
static void C_ccall f_2310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2310,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[10] /* (set! main#default-libdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2314,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
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

/* k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2270 in k2264 in k2261 in k2258 in k2255 in k2252 in k2249 in k2246 in k2243 in k2240 */
static void C_ccall f_2314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2314,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[11] /* (set! main#default-runlibdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2318,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
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

/* k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2270 in k2264 in k2261 in k2258 in k2255 in k2252 in k2249 in k2246 in k2243 in k2240 */
static void C_ccall f_2318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2318,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2322,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
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

/* k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2270 in k2264 in k2261 in k2258 in k2255 in k2252 in k2249 in k2246 in k2243 in k2240 in ... */
static void C_ccall f_2322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2322,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[12] /* (set! main#default-incdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2326,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2270 in k2264 in k2261 in k2258 in k2255 in k2252 in k2249 in k2246 in k2243 in ... */
static void C_ccall f_2326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2326,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[13] /* (set! main#default-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2330,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
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

/* k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2270 in k2264 in k2261 in k2258 in k2255 in k2252 in k2249 in k2246 in ... */
static void C_ccall f_2330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2330,2,av);}
a=C_alloc(3);
t2=C_mutate(&lf[14] /* (set! main#default-sharedir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7743,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:63: chicken.platform#software-type */
t4=C_fast_retrieve(lf[219]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2336 in k7741 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2270 in k2264 in k2261 in k2258 in k2255 in k2252 in ... */
static void C_ccall f_2338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2338,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2342,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
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

/* k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2270 in k2264 in k2261 in k2258 in k2255 in ... */
static void C_ccall f_2342(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2342,2,av);}
a=C_alloc(9);
t2=C_mutate(&lf[13] /* (set! main#default-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2346,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7736,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[49]+1);{
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

/* k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2270 in k2264 in k2261 in k2258 in ... */
static void C_ccall f_2346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2346,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2350,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7732,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
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

/* k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2270 in k2264 in k2261 in ... */
static void C_ccall f_2350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2350,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2354,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7728,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
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

/* k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2270 in k2264 in ... */
static void C_ccall f_2354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2354,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2358,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
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

/* k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2270 in ... */
static void C_ccall f_2358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2358,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2362,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
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

/* k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in ... */
static void C_ccall f_2362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2362,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[17] /* (set! main#host-libdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2366,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in ... */
static void C_ccall f_2366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2366,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[18] /* (set! main#host-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2370,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_INCLUDE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in ... */
static void C_ccall f_2370(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2370,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[19] /* (set! main#host-incdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2374,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_SHARE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in ... */
static void C_ccall f_2374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2374,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[20] /* (set! main#host-sharedir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2378,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_MORE_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in ... */
static void C_ccall f_2378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2378,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[21] /* (set! main#host-libs ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2382,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in ... */
static void C_ccall f_2382(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2382,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[22] /* (set! main#host-cflags ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2386,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LDFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in ... */
static void C_ccall f_2386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2386,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2390,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
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

/* k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in ... */
static void C_ccall f_2390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2390,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[23] /* (set! main#host-cc ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2394,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CXX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in ... */
static void C_ccall f_2394(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2394,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[24] /* (set! main#host-cxx ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2398,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7723,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_retrieve2(lf[4],C_text("main#binary-version"));
/* ##sys#fixnum->string */
t6=C_fast_retrieve(lf[436]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=C_retrieve2(lf[4],C_text("main#binary-version"));
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in k2316 in k2312 in ... */
static void C_ccall f_2398(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2398,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[25] /* (set! main#target-repo ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2402,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7718,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_retrieve2(lf[4],C_text("main#binary-version"));
/* ##sys#fixnum->string */
t6=C_fast_retrieve(lf[436]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=C_retrieve2(lf[4],C_text("main#binary-version"));
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in k2316 in ... */
static void C_ccall f_2402(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2402,2,av);}
a=C_alloc(5);
t2=C_mutate(&lf[26] /* (set! main#target-run-repo ...) */,t1);
t3=C_mutate(&lf[27] /* (set! main#probe-dir ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2457,tmp=(C_word)a,a+=2,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2471,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:117: chicken.process-context#get-environment-variable */
t5=C_fast_retrieve(lf[162]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[434];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* main#probe-dir in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in ... */
static void C_fcall f_2457(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2457,2,t1,t2);}
a=C_alloc(4);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2467,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* egg-environment.scm:114: chicken.file#directory-exists? */
t4=C_fast_retrieve(lf[28]);{
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

/* k2465 in main#probe-dir in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in ... */
static void C_ccall f_2467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2467,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in ... */
static void C_ccall f_2471(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2471,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2474,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
f_2474(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7694,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7714,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:118: chicken.process-context#get-environment-variable */
t5=C_fast_retrieve(lf[162]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[433];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in ... */
static void C_ccall f_2474(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2474,2,av);}
a=C_alloc(8);
t2=C_mutate(&lf[29] /* (set! main#cons* ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2909,tmp=(C_word)a,a+=2,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3756,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_MORE_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* main#cons* in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in ... */
static void C_fcall f_2909(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_2909,3,t1,t2,t3);}
a=C_alloc(5);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2915,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_2915(t7,t1,t2,t3);}

/* loop in main#cons* in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in ... */
static void C_fcall f_2915(C_word t0,C_word t1,C_word t2,C_word t3){
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
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_2915,4,t0,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t3))){
t4=t2;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2929,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(t3);
t6=t3;
t7=C_u_i_cdr(t6);
/* mini-srfi-1.scm:95: loop */
t9=t4;
t10=t5;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}

/* k2927 in loop in main#cons* in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in ... */
static void C_ccall f_2929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2929,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in loop in k6941 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_fcall f_2971(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2971,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2984,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* mini-srfi-1.scm:106: test */
t5=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=t4;
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}}

/* k2982 in loop in loop in k6941 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in ... */
static void C_ccall f_2984(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2984,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* mini-srfi-1.scm:107: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2971(t4,((C_word*)t0)[4],t3);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2998,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* mini-srfi-1.scm:109: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_2971(t7,t4,t6);}}

/* k2996 in k2982 in loop in loop in k6941 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in ... */
static void C_ccall f_2998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2998,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k6941 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_fcall f_3046(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3046,3,t0,t1,t2);}
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
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3060,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3073,a[2]=((C_word*)t0)[2],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=t4;
t10=((C_word*)t0)[3];
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2971,a[2]=t12,a[3]=t10,a[4]=t9,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_2971(t14,t8,t6);}}

/* k3058 in loop in k6941 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_ccall f_3060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3060,2,av);}
a=C_alloc(3);
t2=C_i_equalp(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?((C_word*)t0)[4]:C_a_i_cons(&a,2,((C_word*)t0)[5],t1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3071 in loop in k6941 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_ccall f_3073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3073,2,av);}
/* mini-srfi-1.scm:123: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3046(t2,((C_word*)t0)[3],t1);}

/* foldr454 in foldl560 in k5707 in k5618 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_fcall f_3094(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3094,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3102,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3123,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
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

/* g459 in foldr454 in foldl560 in k5707 in k5618 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_fcall f_3102(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3102,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3109,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:131: pred */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k3107 in g459 in foldr454 in foldl560 in k5707 in k5618 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in ... */
static void C_ccall f_3109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3109,2,av);}
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

/* k3121 in foldr454 in foldl560 in k5707 in k5618 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_ccall f_3123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3123,2,av);}
/* mini-srfi-1.scm:131: g459 */
t2=((C_word*)t0)[2];
f_3102(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* foldr472 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_fcall f_3138(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3138,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3146,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3172,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
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

/* g477 in foldr472 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in ... */
static void C_fcall f_3146(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3146,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3150,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:135: pred */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k3148 in g477 in foldr472 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in ... */
static void C_ccall f_3150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3150,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3154,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* mini-srfi-1.scm:135: g487 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  /* mini-srfi-1.scm:135: g487 */
  f_3154(C_a_i(&a,3),t2,t1)
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g487 in k3148 in g477 in foldr472 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in ... */
static C_word C_fcall f_3154(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k3170 in foldr472 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in ... */
static void C_ccall f_3172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3172,2,av);}
/* mini-srfi-1.scm:134: g477 */
t2=((C_word*)t0)[2];
f_3146(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in k4478 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in ... */
static C_word C_fcall f_3251(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
t2=C_i_cdr(t1);
if(C_truep(C_i_nullp(t2))){
t3=t1;
t4=C_u_i_car(t3);
return(t4);}
else{
t3=t1;
t4=C_u_i_cdr(t3);
t6=t4;
t1=t6;
goto loop;}}

/* foldl560 in k5707 in k5618 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_fcall f_3351(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,3)))){
C_save_and_reclaim_args((void *)trf_3351,4,t0,t1,t2,t3);}
a=C_alloc(14);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3384,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t2,C_fix(0));
t8=t3;
t9=t7;
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3373,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=t10;
t12=C_i_check_list_2(t8,lf[236]);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3094,a[2]=t11,a[3]=t14,tmp=(C_word)a,a+=4,tmp));
t16=((C_word*)t14)[1];
f_3094(t16,t6,t8);}
else{
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* a3372 in foldl560 in k5707 in k5618 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_3373(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3373,3,av);}
t3=C_i_memq(t2,((C_word*)t0)[2]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_not(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3382 in foldl560 in k5707 in k5618 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_3384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3384,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3351(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in ... */
static void C_ccall f_3756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3756,2,av);}
a=C_alloc(3);
t2=C_mutate(&lf[21] /* (set! main#host-libs ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7683,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:66: chicken.platform#software-type */
t4=C_fast_retrieve(lf[219]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in ... */
static void C_ccall f_3782(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3782,2,av);}
a=C_alloc(5);
t2=C_mutate(&lf[39] /* (set! main#elf ...) */,C_u_i_memq(t1,lf[40]));
t3=C_mutate(&lf[41] /* (set! main#stop ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3785,tmp=(C_word)a,a+=2,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3812,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:79: chicken.process-context#command-line-arguments */
t5=C_fast_retrieve(lf[428]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* main#stop in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in ... */
static void C_fcall f_3785(C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_3785,3,t1,t2,t3);}
a=C_alloc(13);
t4=*((C_word*)lf[42]+1);
t5=*((C_word*)lf[42]+1);
t6=C_i_check_port_2(*((C_word*)lf[42]+1),C_fix(2),C_SCHEME_TRUE,lf[43]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3792,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3808,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t9=*((C_word*)lf[49]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t8;
av2[2]=C_mpointer(&a,(void*)C_CSC_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* k3790 in main#stop in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in ... */
static void C_ccall f_3792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3792,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:76: ##sys#print */
t3=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[48];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3793 in k3790 in main#stop in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in ... */
static void C_ccall f_3795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3795,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3798,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=t2;
av2[2]=*((C_word*)lf[46]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
C_apply(6,av2);}}

/* k3796 in k3793 in k3790 in main#stop in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in ... */
static void C_ccall f_3798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3798,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3801,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:76: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[45]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k3799 in k3796 in k3793 in k3790 in main#stop in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in ... */
static void C_ccall f_3801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3801,2,av);}
/* csc.scm:77: chicken.base#exit */
t2=C_fast_retrieve(lf[44]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(64);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3806 in main#stop in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in ... */
static void C_ccall f_3808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3808,2,av);}
/* csc.scm:76: ##sys#print */
t2=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in ... */
static void C_ccall f_3812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3812,2,av);}
a=C_alloc(3);
t2=C_mutate(&lf[50] /* (set! main#arguments ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3816,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:80: chicken.platform#feature? */
t4=C_fast_retrieve(lf[426]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[427];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in ... */
static void C_ccall f_3816(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_3816,2,av);}
a=C_alloc(16);
t2=lf[3] /* main#cross-chicken */ =t1;;
t3=C_i_not(C_retrieve2(lf[3],C_text("main#cross-chicken")));
t4=(C_truep(t3)?t3:C_i_member(lf[51],C_retrieve2(lf[50],C_text("main#arguments"))));
t5=C_mutate(&lf[52] /* (set! main#host-mode ...) */,t4);
t6=C_mutate(&lf[53] /* (set! main#quotewrap ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3834,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate(&lf[57] /* (set! main#quotewrap-no-slash-trans ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3848,tmp=(C_word)a,a+=2,tmp));
t8=(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))?C_retrieve2(lf[20],C_text("main#host-sharedir")):C_retrieve2(lf[14],C_text("main#default-sharedir")));
t9=C_mutate(&lf[58] /* (set! main#home ...) */,t8);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3864,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7656,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7660,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t13=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t13;
av2[1]=t12;
av2[2]=C_mpointer(&a,(void*)C_CHICKEN_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t13+1)))(4,av2);}}

/* main#quotewrap in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in ... */
static void C_ccall f_3834(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3834,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3842,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3846,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:89: chicken.pathname#normalize-pathname */
t5=C_fast_retrieve(lf[56]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3840 in main#quotewrap in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in ... */
static void C_ccall f_3842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3842,2,av);}
/* csc.scm:89: chicken.process#qs */
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

/* k3844 in main#quotewrap in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in ... */
static void C_ccall f_3846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3846,2,av);}
if(C_truep(C_mk_bool(C_WINDOWS_SHELL))){
/* csc.scm:85: chicken.string#string-translate */
t2=C_fast_retrieve(lf[55]);{
C_word *av2;
if(c >= 5) {
  av2=av;
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
/* csc.scm:89: chicken.process#qs */
t3=C_fast_retrieve(lf[54]);{
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

/* main#quotewrap-no-slash-trans in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in ... */
static void C_ccall f_3848(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3848,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3856,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: chicken.pathname#normalize-pathname */
t4=C_fast_retrieve(lf[56]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3854 in main#quotewrap-no-slash-trans in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in ... */
static void C_ccall f_3856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3856,2,av);}
/* csc.scm:92: chicken.process#qs */
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

/* k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in ... */
static void C_ccall f_3864(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3864,2,av);}
a=C_alloc(3);
t2=C_mutate(&lf[59] /* (set! main#translator ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3868,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
t4=C_retrieve2(lf[23],C_text("main#host-cc"));
t5=C_retrieve2(lf[23],C_text("main#host-cc"));
/* csc.scm:100: quotewrap */
t6=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=C_retrieve2(lf[23],C_text("main#host-cc"));
f_3834(3,av2);}}
else{
t4=C_retrieve2(lf[6],C_text("main#default-cc"));
t5=C_retrieve2(lf[6],C_text("main#default-cc"));
/* csc.scm:100: quotewrap */
t6=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=C_retrieve2(lf[6],C_text("main#default-cc"));
f_3834(3,av2);}}}

/* k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in ... */
static void C_ccall f_3868(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3868,2,av);}
a=C_alloc(3);
t2=C_mutate(&lf[60] /* (set! main#compiler ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3872,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
t4=C_retrieve2(lf[24],C_text("main#host-cxx"));
t5=C_retrieve2(lf[24],C_text("main#host-cxx"));
/* csc.scm:101: quotewrap */
t6=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=C_retrieve2(lf[24],C_text("main#host-cxx"));
f_3834(3,av2);}}
else{
t4=C_retrieve2(lf[7],C_text("main#default-cxx"));
t5=C_retrieve2(lf[7],C_text("main#default-cxx"));
/* csc.scm:101: quotewrap */
t6=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=C_retrieve2(lf[7],C_text("main#default-cxx"));
f_3834(3,av2);}}}

/* k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in ... */
static void C_ccall f_3872(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3872,2,av);}
a=C_alloc(9);
t2=C_mutate(&lf[61] /* (set! main#c++-compiler ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3876,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7638,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
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
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_TARGET_RC_COMPILER);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in ... */
static void C_ccall f_3876(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3876,2,av);}
a=C_alloc(3);
t2=C_mutate(&lf[62] /* (set! main#rc-compiler ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3880,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
t4=C_retrieve2(lf[23],C_text("main#host-cc"));
t5=C_retrieve2(lf[23],C_text("main#host-cc"));
/* csc.scm:103: quotewrap */
t6=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=C_retrieve2(lf[23],C_text("main#host-cc"));
f_3834(3,av2);}}
else{
t4=C_retrieve2(lf[6],C_text("main#default-cc"));
t5=C_retrieve2(lf[6],C_text("main#default-cc"));
/* csc.scm:103: quotewrap */
t6=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=C_retrieve2(lf[6],C_text("main#default-cc"));
f_3834(3,av2);}}}

/* k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in ... */
static void C_ccall f_3880(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3880,2,av);}
a=C_alloc(3);
t2=C_mutate(&lf[63] /* (set! main#linker ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3884,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
t4=C_retrieve2(lf[24],C_text("main#host-cxx"));
t5=C_retrieve2(lf[24],C_text("main#host-cxx"));
/* csc.scm:104: quotewrap */
t6=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=C_retrieve2(lf[24],C_text("main#host-cxx"));
f_3834(3,av2);}}
else{
t4=C_retrieve2(lf[7],C_text("main#default-cxx"));
t5=C_retrieve2(lf[7],C_text("main#default-cxx"));
/* csc.scm:104: quotewrap */
t6=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=C_retrieve2(lf[7],C_text("main#default-cxx"));
f_3834(3,av2);}}}

/* k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in ... */
static void C_ccall f_3884(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3884,2,av);}
a=C_alloc(3);
t2=C_mutate(&lf[64] /* (set! main#c++-linker ...) */,t1);
t3=(C_truep(C_retrieve2(lf[30],C_text("main#windows")))?lf[65]:lf[66]);
t4=C_mutate(&lf[67] /* (set! main#object-extension ...) */,t3);
t5=C_mutate(&lf[68] /* (set! main#library-extension ...) */,lf[69]);
t6=C_mutate(&lf[70] /* (set! main#executable-extension ...) */,lf[71]);
t7=C_mutate(&lf[72] /* (set! main#shared-library-extension ...) */,C_fast_retrieve(lf[73]));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3897,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:111: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[186]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[186]+1);
av2[1]=t8;
av2[2]=lf[425];
av2[3]=C_retrieve2(lf[67],C_text("main#object-extension"));
tp(4,av2);}}

/* k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in ... */
static void C_ccall f_3897(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3897,2,av);}
a=C_alloc(3);
t2=C_mutate(&lf[74] /* (set! main#static-object-extension ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3902,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_retrieve2(lf[32],C_text("main#mingw"));
if(C_truep(C_retrieve2(lf[32],C_text("main#mingw")))){
t5=C_retrieve2(lf[32],C_text("main#mingw"));
t6=t3;
f_3902(t6,(C_truep(C_retrieve2(lf[32],C_text("main#mingw")))?lf[423]:lf[424]));}
else{
t5=C_retrieve2(lf[36],C_text("main#cygwin"));
t6=t3;
f_3902(t6,(C_truep(C_retrieve2(lf[36],C_text("main#cygwin")))?lf[423]:lf[424]));}}

/* k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in ... */
static void C_fcall f_3902(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3902,2,t0,t1);}
a=C_alloc(5);
t2=C_mutate(&lf[75] /* (set! main#pic-options ...) */,t1);
t3=lf[76] /* main#generate-manifest */ =C_SCHEME_FALSE;;
t4=C_mutate(&lf[77] /* (set! main#libchicken ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3905,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3952,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
t6=C_retrieve2(lf[22],C_text("main#host-cflags"));
t7=C_retrieve2(lf[22],C_text("main#host-cflags"));
/* csc.scm:131: chicken.string#string-split */
t8=C_fast_retrieve(lf[240]);{
C_word av2[3];
av2[0]=t8;
av2[1]=t5;
av2[2]=C_retrieve2(lf[22],C_text("main#host-cflags"));
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t6=C_retrieve2(lf[8],C_text("main#default-cflags"));
t7=C_retrieve2(lf[8],C_text("main#default-cflags"));
/* csc.scm:131: chicken.string#string-split */
t8=C_fast_retrieve(lf[240]);{
C_word av2[3];
av2[0]=t8;
av2[1]=t5;
av2[2]=C_retrieve2(lf[8],C_text("main#default-cflags"));
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}

/* main#libchicken in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in ... */
static void C_fcall f_3905(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3905,1,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3913,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_not(C_retrieve2(lf[52],C_text("main#host-mode"))))){
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIB_NAME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_NAME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k3911 in main#libchicken in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in ... */
static void C_ccall f_3913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3913,2,av);}
/* csc.scm:117: scheme#string-append */
t2=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[79];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3946 in main#linker-libraries in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_ccall f_3948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3948,2,av);}
/* csc.scm:128: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[132]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[107],C_text("main#library-dir"));
av2[3]=t1;
av2[4]=C_retrieve2(lf[68],C_text("main#library-extension"));
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in ... */
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3952,2,av);}
a=C_alloc(9);
t2=C_mutate(&lf[80] /* (set! main#default-compilation-optimization-options ...) */,t1);
t3=C_mutate(&lf[81] /* (set! main#best-compilation-optimization-options ...) */,C_retrieve2(lf[80],C_text("main#default-compilation-optimization-options")));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3957,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7613,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
/* ##sys#peek-c-string */
t6=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
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
t6=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LDFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in ... */
static void C_ccall f_3957(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3957,2,av);}
a=C_alloc(9);
t2=C_mutate(&lf[82] /* (set! main#default-linking-optimization-options ...) */,t1);
t3=C_mutate(&lf[83] /* (set! main#best-linking-optimization-options ...) */,C_retrieve2(lf[82],C_text("main#default-linking-optimization-options")));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3962,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
f_3962(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7609,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_TARGET_FEATURES);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in ... */
static void C_ccall f_3962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3962,2,av);}
a=C_alloc(3);
t2=C_mutate(&lf[84] /* (set! main#extra-features ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3969,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* string->list */
t4=C_fast_retrieve(lf[149]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[422];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in ... */
static void C_ccall f_3969(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3969,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[85] /* (set! main#short-options ...) */,t1);
t3=lf[86] /* main#scheme-files */ =C_SCHEME_END_OF_LIST;;
t4=lf[87] /* main#c-files */ =C_SCHEME_END_OF_LIST;;
t5=lf[88] /* main#rc-files */ =C_SCHEME_END_OF_LIST;;
t6=lf[89] /* main#generated-c-files */ =C_SCHEME_END_OF_LIST;;
t7=lf[90] /* main#generated-rc-files */ =C_SCHEME_END_OF_LIST;;
t8=lf[91] /* main#object-files */ =C_SCHEME_END_OF_LIST;;
t9=lf[92] /* main#generated-object-files */ =C_SCHEME_END_OF_LIST;;
t10=lf[93] /* main#transient-link-files */ =C_SCHEME_END_OF_LIST;;
t11=lf[94] /* main#linked-extensions */ =C_SCHEME_END_OF_LIST;;
t12=lf[95] /* main#cpp-mode */ =C_SCHEME_FALSE;;
t13=lf[96] /* main#objc-mode */ =C_SCHEME_FALSE;;
t14=lf[97] /* main#embedded */ =C_SCHEME_FALSE;;
t15=lf[98] /* main#inquiry-only */ =C_SCHEME_FALSE;;
t16=lf[99] /* main#show-cflags */ =C_SCHEME_FALSE;;
t17=lf[100] /* main#show-ldflags */ =C_SCHEME_FALSE;;
t18=lf[101] /* main#show-libs */ =C_SCHEME_FALSE;;
t19=lf[102] /* main#dry-run */ =C_SCHEME_FALSE;;
t20=lf[103] /* main#gui */ =C_SCHEME_FALSE;;
t21=lf[104] /* main#deployed */ =C_SCHEME_FALSE;;
t22=lf[105] /* main#rpath */ =C_SCHEME_FALSE;;
t23=lf[106] /* main#ignore-repository */ =C_SCHEME_FALSE;;
t24=(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))?C_retrieve2(lf[17],C_text("main#host-libdir")):C_retrieve2(lf[10],C_text("main#default-libdir")));
t25=C_mutate(&lf[107] /* (set! main#library-dir ...) */,t24);
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3998,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
/* ##sys#peek-c-string */
t27=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t27;
av2[1]=t26;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_MORE_STATIC_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t27+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t27=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t27;
av2[1]=t26;
av2[2]=C_mpointer(&a,(void*)C_TARGET_MORE_STATIC_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t27+1)))(4,av2);}}}

/* k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in ... */
static void C_ccall f_3998(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3998,2,av);}
a=C_alloc(9);
t2=C_mutate(&lf[108] /* (set! main#extra-libraries ...) */,t1);
t3=(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))?C_retrieve2(lf[21],C_text("main#host-libs")):C_retrieve2(lf[9],C_text("main#default-libs")));
t4=C_mutate(&lf[109] /* (set! main#extra-shared-libraries ...) */,t3);
t5=lf[110] /* main#translate-options */ =C_SCHEME_END_OF_LIST;;
t6=(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))?C_retrieve2(lf[19],C_text("main#host-incdir")):C_retrieve2(lf[12],C_text("main#default-incdir")));
t7=C_i_member(t6,lf[111]);
t8=C_i_not(t7);
t9=(C_truep(t8)?t6:C_SCHEME_FALSE);
t10=C_mutate(&lf[112] /* (set! main#include-dir ...) */,t9);
t11=lf[113] /* main#compile-options */ =C_SCHEME_END_OF_LIST;;
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4051,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7479,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[112],C_text("main#include-dir")))){
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7589,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:243: chicken.string#conc */
t15=C_fast_retrieve(lf[248]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t15;
av2[1]=t14;
av2[2]=lf[421];
av2[3]=C_retrieve2(lf[112],C_text("main#include-dir"));
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}
else{
t14=t13;
f_7479(t14,C_SCHEME_END_OF_LIST);}}

/* k4010 in main#linker-libraries in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_ccall f_4012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4012,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list1(&a,1,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4014 in main#linker-libraries in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_ccall f_4016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4016,2,av);}
/* csc.scm:227: scheme#string-append */
t2=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[140];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4030 in main#linker-libraries in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_ccall f_4032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4032,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list1(&a,1,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in ... */
static void C_ccall f_4051(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,4)))){
C_save_and_reclaim((void *)f_4051,2,av);}
a=C_alloc(28);
t2=C_mutate(&lf[114] /* (set! main#builtin-compile-options ...) */,t1);
t3=lf[115] /* main#translation-optimization-options */ =C_SCHEME_END_OF_LIST;;
t4=C_mutate(&lf[116] /* (set! main#compilation-optimization-options ...) */,C_retrieve2(lf[80],C_text("main#default-compilation-optimization-options")));
t5=C_mutate(&lf[117] /* (set! main#linking-optimization-options ...) */,C_retrieve2(lf[82],C_text("main#default-linking-optimization-options")));
t6=lf[118] /* main#link-options */ =C_SCHEME_END_OF_LIST;;
t7=lf[119] /* main#target-filename */ =C_SCHEME_FALSE;;
t8=lf[120] /* main#verbose */ =C_SCHEME_FALSE;;
t9=lf[121] /* main#keep-files */ =C_SCHEME_FALSE;;
t10=lf[122] /* main#translate-only */ =C_SCHEME_FALSE;;
t11=lf[123] /* main#compile-only */ =C_SCHEME_FALSE;;
t12=lf[124] /* main#to-stdout */ =C_SCHEME_FALSE;;
t13=lf[125] /* main#shared */ =C_SCHEME_FALSE;;
t14=lf[126] /* main#static */ =C_SCHEME_FALSE;;
t15=C_mutate(&lf[127] /* (set! main#find-object-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4201,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate(&lf[133] /* (set! main#compiler-options ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6567,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate(&lf[138] /* (set! main#linker-options ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7054,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate(&lf[139] /* (set! main#linker-libraries ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7107,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate(&lf[141] /* (set! main#constant1644 ...) */,lf[142]);
t20=C_mutate(&lf[143] /* (set! main#string-any ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7205,tmp=(C_word)a,a+=2,tmp));
t21=C_mutate(&lf[134] /* (set! main#quote-option ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7239,tmp=(C_word)a,a+=2,tmp));
t22=lf[150] /* main#last-exit-code */ =C_SCHEME_FALSE;;
t23=C_mutate(&lf[151] /* (set! main#command ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7351,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate(&lf[164] /* (set! main#$delete-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7364,tmp=(C_word)a,a+=2,tmp));
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7454,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7464,a[2]=t25,tmp=(C_word)a,a+=3,tmp);
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7468,a[2]=t26,tmp=(C_word)a,a+=3,tmp);
t28=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7472,a[2]=t27,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1121: chicken.process-context#get-environment-variable */
t29=C_fast_retrieve(lf[162]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t29;
av2[1]=t28;
av2[2]=lf[417];
((C_proc)(void*)(*((C_word*)t29+1)))(3,av2);}}

/* k4064 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_fcall f_4066(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_4066,2,t0,t1);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4070,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[104],C_text("main#deployed")))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4140,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:271: chicken.platform#software-version */
t5=C_fast_retrieve(lf[247]);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t3;
f_4070(t4,C_SCHEME_END_OF_LIST);}}

/* k4068 in k4064 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_fcall f_4070(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4070,2,t0,t1);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4074,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:274: chicken.process-context#get-environment-variable */
t4=C_fast_retrieve(lf[162]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[242];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4072 in k4068 in k4064 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_ccall f_4074(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4074,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4077,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
t4=t1;
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4090,a[2]=t7,a[3]=t8,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:276: chicken.string#string-split */
t10=C_fast_retrieve(lf[240]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=t4;
av2[3]=lf[241];
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
/* csc.scm:257: scheme#append */
t3=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k4075 in k4072 in k4068 in k4064 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in ... */
static void C_ccall f_4077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4077,2,av);}
/* csc.scm:257: scheme#append */
t2=*((C_word*)lf[137]+1);{
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

/* k4088 in k4072 in k4068 in k4064 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in ... */
static void C_ccall f_4090(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4090,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4095,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4095(t5,((C_word*)t0)[4],t1);}

/* map-loop936 in k4088 in k4072 in k4068 in k4064 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in ... */
static void C_fcall f_4095(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4095,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4120,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:276: g959 */
t5=*((C_word*)lf[78]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[239];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4118 in map-loop936 in k4088 in k4072 in k4068 in k4064 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in ... */
static void C_ccall f_4120(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4120,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4095(t6,((C_word*)t0)[5],t5);}

/* k4138 in k4064 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_4140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4140,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_4070(t2,(C_truep((C_truep(C_eqp(t1,lf[243]))?C_SCHEME_TRUE:(C_truep(C_eqp(t1,lf[244]))?C_SCHEME_TRUE:(C_truep(C_eqp(t1,lf[245]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))?C_a_i_list1(&a,1,lf[246]):C_SCHEME_END_OF_LIST));}

/* k4146 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_4148(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4148,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4152,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4156,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[104],C_text("main#deployed")))){
/* csc.scm:261: chicken.string#conc */
t5=C_fast_retrieve(lf[248]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[249];
av2[3]=lf[250];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
t5=C_retrieve2(lf[17],C_text("main#host-libdir"));
t6=C_retrieve2(lf[17],C_text("main#host-libdir"));
/* csc.scm:261: chicken.string#conc */
t7=C_fast_retrieve(lf[248]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=lf[249];
av2[3]=C_retrieve2(lf[17],C_text("main#host-libdir"));
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_TARGET_RUN_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}}

/* k4150 in k4146 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_4152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4152,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
f_4066(t2,C_a_i_list2(&a,2,((C_word*)t0)[3],t1));}

/* k4154 in k4146 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_4156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4156,2,av);}
/* csc.scm:261: chicken.string#conc */
t2=C_fast_retrieve(lf[248]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[249];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4170 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_4172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4172,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_4066(t2,C_a_i_list1(&a,1,t1));}

/* k4177 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_4179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4179,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_4066(t2,C_a_i_list1(&a,1,t1));}

/* main#find-object-file in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in ... */
static void C_ccall f_4201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4201,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4205,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:297: chicken.pathname#make-pathname */
t4=C_fast_retrieve(lf[132]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
av2[3]=t2;
av2[4]=C_retrieve2(lf[67],C_text("main#object-extension"));
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4203 in main#find-object-file in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_ccall f_4205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4205,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4208,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:299: chicken.pathname#make-pathname */
t4=C_fast_retrieve(lf[132]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t0)[3];
av2[4]=C_retrieve2(lf[74],C_text("main#static-object-extension"));
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4206 in k4203 in main#find-object-file in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in ... */
static void C_ccall f_4208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4208,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4211,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:300: chicken.file#file-exists? */
t4=C_fast_retrieve(lf[131]);{
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

/* k4209 in k4206 in k4203 in main#find-object-file in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_4211(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4211,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4217,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(C_fast_retrieve(lf[130]),C_SCHEME_TRUE);
if(C_truep(t3)){
/* csc.scm:302: chicken.file#file-exists? */
t4=C_fast_retrieve(lf[131]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_4217(2,av2);}}}}

/* k4215 in k4209 in k4206 in k4203 in main#find-object-file in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_4217(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4217,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_not(C_retrieve2(lf[106],C_text("main#ignore-repository"))))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4233,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
/* csc.scm:293: chicken.platform#repository-path */
t3=C_fast_retrieve(lf[129]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_SCHEME_END_OF_LIST;
if(C_truep(C_i_nullp(t3))){
t4=C_retrieve2(lf[25],C_text("main#target-repo"));
/* csc.scm:304: chicken.load#find-file */
t5=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_retrieve2(lf[25],C_text("main#target-repo"));
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=C_i_car(t3);
t5=(C_truep(t4)?C_retrieve2(lf[26],C_text("main#target-run-repo")):C_retrieve2(lf[25],C_text("main#target-repo")));
/* csc.scm:304: chicken.load#find-file */
t6=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* k4231 in k4215 in k4209 in k4206 in k4203 in main#find-object-file in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_ccall f_4233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4233,2,av);}
/* csc.scm:304: chicken.load#find-file */
t2=C_fast_retrieve(lf[128]);{
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

/* k4243 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_4245(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4245,2,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4252,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,lf[257],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,lf[258],t4);
t6=C_a_i_cons(&a,2,t1,t5);
t7=C_a_i_cons(&a,2,lf[259],t6);
t8=C_a_i_cons(&a,2,t1,t7);
t9=C_a_i_cons(&a,2,lf[260],t8);
/* csc.scm:28: ##sys#print-to-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[214]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[214]+1);
av2[1]=t2;
av2[2]=t9;
tp(3,av2);}}

/* k4250 in k4243 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_4252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4252,2,av);}
/* csc.scm:311: chicken.base#print */
t2=*((C_word*)lf[157]+1);{
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

/* t-options in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_fcall f_4285(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_4285,2,t1,t2);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4290,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:522: scheme#append */
t4=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[110],C_text("main#translate-options"));
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4288 in t-options in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in ... */
static void C_ccall f_4290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4290,2,av);}
t2=C_mutate(&lf[110] /* (set! main#translate-options ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* check in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_fcall f_4292(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_4292,4,t1,t2,t3,t4);}
a=C_alloc(3);
t5=C_i_length(t3);
t6=C_i_nullp(t4);
t7=(C_truep(t6)?C_fix(1):C_i_car(t4));
if(C_truep(C_i_greater_or_equalp(t5,t7))){
t8=C_SCHEME_UNDEFINED;
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
/* csc.scm:526: stop */
f_3785(t1,lf[168],C_a_i_list(&a,1,t2));}}

/* shared-build in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_fcall f_4315(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_4315,2,t1,t2);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4320,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:529: cons* */
f_2909(t3,lf[173],C_a_i_list(&a,2,lf[174],C_retrieve2(lf[110],C_text("main#translate-options"))));}

/* k4318 in shared-build in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in ... */
static void C_ccall f_4320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4320,2,av);}
a=C_alloc(4);
t2=C_mutate(&lf[110] /* (set! main#translate-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:530: scheme#append */
t4=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[75],C_text("main#pic-options"));
av2[3]=lf[172];
av2[4]=C_retrieve2(lf[113],C_text("main#compile-options"));
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4322 in k4318 in shared-build in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_4324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4324,2,av);}
a=C_alloc(3);
t2=C_mutate(&lf[113] /* (set! main#compile-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4328,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[34],C_text("main#osx")))){
if(C_truep(((C_word*)t0)[3])){
/* csc.scm:532: scheme#append */
t4=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[169];
av2[3]=C_retrieve2(lf[118],C_text("main#link-options"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
/* csc.scm:532: scheme#append */
t4=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[170];
av2[3]=C_retrieve2(lf[118],C_text("main#link-options"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}
else{
/* csc.scm:532: scheme#append */
t4=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[171];
av2[3]=C_retrieve2(lf[118],C_text("main#link-options"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k4326 in k4322 in k4318 in shared-build in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_4328(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4328,2,av);}
t2=C_mutate(&lf[118] /* (set! main#link-options ...) */,t1);
t3=lf[125] /* main#shared */ =C_SCHEME_TRUE;;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* generate-target-filename in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_fcall f_4345(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_4345,2,t1,t2);}
if(C_truep(C_retrieve2(lf[125],C_text("main#shared")))){
t3=C_retrieve2(lf[72],C_text("main#shared-library-extension"));
t4=C_retrieve2(lf[72],C_text("main#shared-library-extension"));
/* csc.scm:542: chicken.pathname#pathname-replace-extension */
t5=C_fast_retrieve(lf[175]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_retrieve2(lf[72],C_text("main#shared-library-extension"));
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[123],C_text("main#compile-only")))){
t3=C_retrieve2(lf[67],C_text("main#object-extension"));
t4=C_retrieve2(lf[67],C_text("main#object-extension"));
/* csc.scm:542: chicken.pathname#pathname-replace-extension */
t5=C_fast_retrieve(lf[175]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_retrieve2(lf[67],C_text("main#object-extension"));
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=C_retrieve2(lf[70],C_text("main#executable-extension"));
t4=C_retrieve2(lf[70],C_text("main#executable-extension"));
/* csc.scm:542: chicken.pathname#pathname-replace-extension */
t5=C_fast_retrieve(lf[175]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_retrieve2(lf[70],C_text("main#executable-extension"));
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}}

/* loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_fcall f_4361(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_4361,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4372,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:551: scheme#append */
t4=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[113],C_text("main#compile-options"));
av2[3]=C_retrieve2(lf[114],C_text("main#builtin-compile-options"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=C_i_car(t2);
t4=t3;
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4595,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t7,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t4,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* csc.scm:595: scheme#string->symbol */
t9=*((C_word*)lf[415]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in ... */
static void C_ccall f_4372(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4372,2,av);}
a=C_alloc(13);
t2=C_mutate(&lf[113] /* (set! main#compile-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4376,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4588,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4066,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[39],C_text("main#elf")))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4148,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:260: chicken.string#conc */
t8=C_fast_retrieve(lf[248]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[251];
av2[3]=C_retrieve2(lf[107],C_text("main#library-dir"));
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[38],C_text("main#aix")))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4172,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:268: chicken.string#conc */
t8=C_fast_retrieve(lf[248]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[252];
av2[3]=C_retrieve2(lf[107],C_text("main#library-dir"));
av2[4]=lf[253];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4179,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:270: chicken.string#conc */
t8=C_fast_retrieve(lf[248]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[254];
av2[3]=C_retrieve2(lf[107],C_text("main#library-dir"));
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}}

/* k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_4376(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4376,2,av);}
a=C_alloc(10);
t2=C_mutate(&lf[118] /* (set! main#link-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4379,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[98],C_text("main#inquiry-only")))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4551,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[99],C_text("main#show-cflags")))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4584,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:555: compiler-options */
f_6567(t5);}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_4551(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_4379(2,av2);}}}

/* k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_4379(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_4379,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4382,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(C_retrieve2(lf[94],C_text("main#linked-extensions"))))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4544,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4548,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_retrieve2(lf[127],C_text("main#find-object-file"));
t6=C_retrieve2(lf[94],C_text("main#linked-extensions"));
t7=C_retrieve2(lf[94],C_text("main#linked-extensions"));
t8=C_i_check_list_2(C_retrieve2(lf[94],C_text("main#linked-extensions")),lf[236]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3138,a[2]=t5,a[3]=t10,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_3138(t12,t4,C_retrieve2(lf[94],C_text("main#linked-extensions")));}
else{
t3=t2;
f_4382(t3,C_SCHEME_UNDEFINED);}}

/* k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_fcall f_4382(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_4382,2,t0,t1);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4385,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(C_retrieve2(lf[86],C_text("main#scheme-files"))))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4480,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(C_retrieve2(lf[87],C_text("main#c-files"))))){
if(C_truep(C_i_nullp(C_retrieve2(lf[91],C_text("main#object-files"))))){
/* csc.scm:566: stop */
f_3785(t3,lf[220],C_SCHEME_END_OF_LIST);}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_4480(2,av2);}}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_4480(2,av2);}}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4513,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(C_truep(C_retrieve2(lf[125],C_text("main#shared")))?C_i_not(C_retrieve2(lf[97],C_text("main#embedded"))):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_a_i_cons(&a,2,lf[235],C_retrieve2(lf[110],C_text("main#translate-options")));
t6=C_mutate(&lf[110] /* (set! main#translate-options ...) */,t5);
t7=t3;
f_4513(t7,t6);}
else{
t5=t3;
f_4513(t5,C_SCHEME_UNDEFINED);}}}

/* k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in ... */
static void C_ccall f_4385(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_4385,2,av);}
a=C_alloc(18);
if(C_truep(C_retrieve2(lf[122],C_text("main#translate-only")))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4391,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=t2;
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6295,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_retrieve2(lf[87],C_text("main#c-files"));
t8=C_i_check_list_2(C_retrieve2(lf[87],C_text("main#c-files")),lf[176]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6381,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6544,a[2]=t11,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t13=((C_word*)t11)[1];
f_6544(t13,t9,C_retrieve2(lf[87],C_text("main#c-files")));}}

/* k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in ... */
static void C_ccall f_4391(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4391,2,av);}
a=C_alloc(7);
if(C_truep(C_retrieve2(lf[123],C_text("main#compile-only")))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4397,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_member(C_retrieve2(lf[119],C_text("main#target-filename")),C_retrieve2(lf[86],C_text("main#scheme-files"))))){
t3=*((C_word*)lf[42]+1);
t4=*((C_word*)lf[42]+1);
t5=C_i_check_port_2(*((C_word*)lf[42]+1),C_fix(2),C_SCHEME_TRUE,lf[43]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4409,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:582: ##sys#print */
t7=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[204];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[42]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4397(2,av2);}}}}

/* k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in ... */
static void C_ccall f_4397(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4397,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6625,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_retrieve2(lf[91],C_text("main#object-files"));
t5=C_retrieve2(lf[92],C_text("main#generated-object-files"));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6929,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_6929(t9,t3,C_retrieve2(lf[91],C_text("main#object-files")),C_retrieve2(lf[91],C_text("main#object-files")));}

/* k4407 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in ... */
static void C_ccall f_4409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4409,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4412,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:582: ##sys#print */
t3=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_retrieve2(lf[119],C_text("main#target-filename"));
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4410 in k4407 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in ... */
static void C_ccall f_4412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4412,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4415,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:582: ##sys#print */
t3=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[203];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4413 in k4410 in k4407 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_ccall f_4415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4415,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:582: ##sys#print */
t3=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_retrieve2(lf[119],C_text("main#target-filename"));
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4416 in k4413 in k4410 in k4407 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_4418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4418,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:582: ##sys#print */
t3=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[202];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4419 in k4416 in k4413 in k4410 in k4407 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_ccall f_4421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4421,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4424,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:582: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[45]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in ... */
static void C_ccall f_4424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4424,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4431,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:586: chicken.base#open-output-string */
t3=C_fast_retrieve(lf[181]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4429 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in ... */
static void C_ccall f_4431(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4431,2,av);}
a=C_alloc(5);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_fix(2),C_SCHEME_TRUE,lf[177]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4437,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_mk_bool(C_WINDOWS_SHELL))){
/* csc.scm:586: ##sys#print */
t6=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[200];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
/* csc.scm:586: ##sys#print */
t6=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[201];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k4435 in k4429 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in ... */
static void C_ccall f_4437(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4437,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4440,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:586: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[45]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k4438 in k4435 in k4429 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in ... */
static void C_ccall f_4440(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4440,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4443,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_mk_bool(C_WINDOWS_SHELL))){
t3=C_retrieve2(lf[57],C_text("main#quotewrap-no-slash-trans"));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f8473,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=t4;
t6=C_retrieve2(lf[119],C_text("main#target-filename"));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8546,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: chicken.pathname#normalize-pathname */
t8=C_fast_retrieve(lf[56]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=C_retrieve2(lf[119],C_text("main#target-filename"));
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t3=C_retrieve2(lf[53],C_text("main#quotewrap"));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f8477,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:586: g1054 */
t5=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_retrieve2(lf[119],C_text("main#target-filename"));
f_3834(3,av2);}}}

/* k4441 in k4438 in k4435 in k4429 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in ... */
static void C_ccall f_4443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4443,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:586: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[45]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k4444 in k4441 in k4438 in k4435 in k4429 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in ... */
static void C_ccall f_4446(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4446,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4449,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_truep(C_mk_bool(C_WINDOWS_SHELL))?C_retrieve2(lf[57],C_text("main#quotewrap-no-slash-trans")):C_retrieve2(lf[53],C_text("main#quotewrap")));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4459,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4463,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:590: scheme#string-append */
t7=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=C_retrieve2(lf[119],C_text("main#target-filename"));
av2[3]=lf[199];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k4447 in k4444 in k4441 in k4438 in k4435 in k4429 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in ... */
static void C_ccall f_4449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4449,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4452,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:586: chicken.base#get-output-string */
t3=C_fast_retrieve(lf[178]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4450 in k4447 in k4444 in k4441 in k4438 in k4435 in k4429 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in ... */
static void C_ccall f_4452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4452,2,av);}
/* csc.scm:585: command */
f_7351(((C_word*)t0)[2],t1);}

/* k4457 in k4444 in k4441 in k4438 in k4435 in k4429 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in ... */
static void C_ccall f_4459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4459,2,av);}
/* csc.scm:586: ##sys#print */
t2=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4461 in k4444 in k4441 in k4438 in k4435 in k4429 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in ... */
static void C_ccall f_4463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4463,2,av);}
/* csc.scm:586: g1056 */
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

/* k4478 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in ... */
static void C_ccall f_4480(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4480,2,av);}
a=C_alloc(5);
if(C_truep(C_retrieve2(lf[119],C_text("main#target-filename")))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_4385(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4487,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_nullp(C_retrieve2(lf[87],C_text("main#c-files")));
t4=(C_truep(t3)?C_retrieve2(lf[91],C_text("main#object-files")):C_retrieve2(lf[87],C_text("main#c-files")));
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3251,tmp=(C_word)a,a+=2,tmp);
t6=(
  f_3251(t4)
);
/* csc.scm:569: generate-target-filename */
f_4345(t2,t6);}}

/* k4485 in k4478 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in ... */
static void C_ccall f_4487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4487,2,av);}
t2=C_mutate(&lf[119] /* (set! main#target-filename ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_4385(2,av2);}}

/* k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in ... */
static void C_fcall f_4513(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4513,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4516,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[119],C_text("main#target-filename")))){
t3=t2;
f_4516(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4523,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_retrieve2(lf[86],C_text("main#scheme-files"));
t5=C_i_car(C_retrieve2(lf[86],C_text("main#scheme-files")));
/* csc.scm:576: generate-target-filename */
f_4345(t3,t5);}}

/* k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in ... */
static void C_fcall f_4516(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_4516,2,t0,t1);}
a=C_alloc(5);
t2=C_retrieve2(lf[86],C_text("main#scheme-files"));
t3=C_i_check_list_2(C_retrieve2(lf[86],C_text("main#scheme-files")),lf[176]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6270,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_6270(t7,((C_word*)t0)[2],C_retrieve2(lf[86],C_text("main#scheme-files")));}

/* k4521 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in ... */
static void C_ccall f_4523(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4523,2,av);}
t2=C_mutate(&lf[119] /* (set! main#target-filename ...) */,t1);
t3=((C_word*)t0)[2];
f_4516(t3,t2);}

/* k4542 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_ccall f_4544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4544,2,av);}
t2=C_mutate(&lf[91] /* (set! main#object-files ...) */,t1);
t3=((C_word*)t0)[2];
f_4382(t3,t2);}

/* k4546 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_ccall f_4548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4548,2,av);}
/* csc.scm:562: scheme#append */
t2=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[91],C_text("main#object-files"));
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4549 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_4551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4551,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4554,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[100],C_text("main#show-ldflags")))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4577,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:556: linker-options */
f_7054(t3);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4554(2,av2);}}}

/* k4552 in k4549 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_ccall f_4554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4554,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4557,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[101],C_text("main#show-libs")))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4570,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:557: linker-libraries */
f_7107(t3);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8500,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:558: scheme#newline */
t4=*((C_word*)lf[237]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4555 in k4552 in k4549 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in ... */
static void C_ccall f_4557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4557,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4560,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:558: scheme#newline */
t3=*((C_word*)lf[237]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4558 in k4555 in k4552 in k4549 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in ... */
static void C_ccall f_4560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4560,2,av);}
/* csc.scm:559: chicken.base#exit */
t2=C_fast_retrieve(lf[44]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4568 in k4552 in k4549 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in ... */
static void C_ccall f_4570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4570,2,av);}
/* csc.scm:557: chicken.base#print* */
t2=*((C_word*)lf[238]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_make_character(32);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4575 in k4549 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_ccall f_4577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4577,2,av);}
/* csc.scm:556: chicken.base#print* */
t2=*((C_word*)lf[238]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_make_character(32);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4582 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_4584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4584,2,av);}
/* csc.scm:555: chicken.base#print* */
t2=*((C_word*)lf[238]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_make_character(32);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4586 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_4588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4588,2,av);}
/* csc.scm:552: scheme#append */
t2=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[118],C_text("main#link-options"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in ... */
static void C_ccall f_4595(C_word c,C_word *av){
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
C_word t59;
C_word t60;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_4595,2,av);}
a=C_alloc(20);
t2=t1;
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4598,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(t3,lf[255]);
t6=(C_truep(t5)?t5:C_eqp(t3,lf[256]));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4610,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4245,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t10=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=C_mpointer(&a,(void*)C_CSC_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
t7=C_eqp(t3,lf[261]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4622,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4629,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:601: chicken.platform#chicken-version */
t10=C_fast_retrieve(lf[262]);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t8=C_eqp(t3,lf[263]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4638,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4645,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:604: chicken.base#open-output-string */
t11=C_fast_retrieve(lf[181]);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t9=C_eqp(t3,lf[265]);
if(C_truep(t9)){
t10=lf[95] /* main#cpp-mode */ =C_SCHEME_TRUE;;
if(C_truep(C_retrieve2(lf[34],C_text("main#osx")))){
t11=C_a_i_cons(&a,2,lf[266],C_retrieve2(lf[113],C_text("main#compile-options")));
t12=C_mutate(&lf[113] /* (set! main#compile-options ...) */,t11);
/* csc.scm:830: loop */
t13=((C_word*)((C_word*)t0)[2])[1];
f_4361(t13,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
/* csc.scm:830: loop */
t11=((C_word*)((C_word*)t0)[2])[1];
f_4361(t11,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}}
else{
t10=C_eqp(t3,lf[267]);
if(C_truep(t10)){
t11=lf[96] /* main#objc-mode */ =C_SCHEME_TRUE;;
/* csc.scm:830: loop */
t12=((C_word*)((C_word*)t0)[2])[1];
f_4361(t12,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t11=C_eqp(t3,lf[268]);
if(C_truep(t11)){
t12=C_a_i_cons(&a,2,lf[269],C_retrieve2(lf[110],C_text("main#translate-options")));
t13=C_mutate(&lf[110] /* (set! main#translate-options ...) */,t12);
t14=lf[126] /* main#static */ =C_SCHEME_TRUE;;
/* csc.scm:830: loop */
t15=((C_word*)((C_word*)t0)[2])[1];
f_4361(t15,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t12=C_eqp(t3,lf[270]);
if(C_truep(t12)){
t13=lf[98] /* main#inquiry-only */ =C_SCHEME_TRUE;;
t14=lf[99] /* main#show-cflags */ =C_SCHEME_TRUE;;
/* csc.scm:830: loop */
t15=((C_word*)((C_word*)t0)[2])[1];
f_4361(t15,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t13=C_eqp(t3,lf[271]);
if(C_truep(t13)){
t14=lf[98] /* main#inquiry-only */ =C_SCHEME_TRUE;;
t15=lf[100] /* main#show-ldflags */ =C_SCHEME_TRUE;;
/* csc.scm:830: loop */
t16=((C_word*)((C_word*)t0)[2])[1];
f_4361(t16,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t14=C_eqp(t3,lf[272]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4717,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:620: chicken.base#print */
t16=*((C_word*)lf[157]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t16;
av2[1]=t15;
av2[2]=C_retrieve2(lf[60],C_text("main#compiler"));
((C_proc)(void*)(*((C_word*)t16+1)))(3,av2);}}
else{
t15=C_eqp(t3,lf[273]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4729,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:621: chicken.base#print */
t17=*((C_word*)lf[157]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t17;
av2[1]=t16;
av2[2]=C_retrieve2(lf[61],C_text("main#c++-compiler"));
((C_proc)(void*)(*((C_word*)t17+1)))(3,av2);}}
else{
t16=C_eqp(t3,lf[274]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4741,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:622: chicken.base#print */
t18=*((C_word*)lf[157]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t18;
av2[1]=t17;
av2[2]=C_retrieve2(lf[63],C_text("main#linker"));
((C_proc)(void*)(*((C_word*)t18+1)))(3,av2);}}
else{
t17=C_eqp(t3,lf[275]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4753,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:623: chicken.base#print */
t19=*((C_word*)lf[157]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t19;
av2[1]=t18;
av2[2]=C_retrieve2(lf[58],C_text("main#home"));
((C_proc)(void*)(*((C_word*)t19+1)))(3,av2);}}
else{
t18=C_eqp(t3,lf[276]);
if(C_truep(t18)){
t19=lf[98] /* main#inquiry-only */ =C_SCHEME_TRUE;;
t20=lf[101] /* main#show-libs */ =C_SCHEME_TRUE;;
/* csc.scm:830: loop */
t21=((C_word*)((C_word*)t0)[2])[1];
f_4361(t21,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t19=C_eqp(t3,lf[277]);
t20=(C_truep(t19)?t19:C_eqp(t3,lf[278]));
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4776,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_numberp(C_retrieve2(lf[120],C_text("main#verbose"))))){
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4791,a[2]=t21,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:629: cons* */
f_2909(t22,lf[281],C_a_i_list(&a,2,lf[282],C_retrieve2(lf[113],C_text("main#compile-options"))));}
else{
t22=t21;
f_4776(t22,C_SCHEME_UNDEFINED);}}
else{
t21=C_eqp(t3,lf[283]);
t22=(C_truep(t21)?t21:C_eqp(t3,lf[284]));
if(C_truep(t22)){
t23=C_a_i_cons(&a,2,lf[285],C_retrieve2(lf[113],C_text("main#compile-options")));
t24=C_mutate(&lf[113] /* (set! main#compile-options ...) */,t23);
/* csc.scm:637: t-options */
f_4285(t4,C_a_i_list(&a,1,lf[286]));}
else{
t23=C_eqp(t3,lf[287]);
t24=(C_truep(t23)?t23:C_eqp(t3,lf[288]));
if(C_truep(t24)){
t25=lf[122] /* main#translate-only */ =C_SCHEME_TRUE;;
/* csc.scm:640: t-options */
f_4285(t4,C_a_i_list(&a,1,lf[289]));}
else{
t25=C_eqp(t3,lf[290]);
t26=(C_truep(t25)?t25:C_eqp(t3,lf[291]));
if(C_truep(t26)){
t27=lf[122] /* main#translate-only */ =C_SCHEME_TRUE;;
/* csc.scm:643: t-options */
f_4285(t4,C_a_i_list(&a,1,lf[292]));}
else{
t27=C_eqp(t3,lf[293]);
if(C_truep(t27)){
t28=lf[121] /* main#keep-files */ =C_SCHEME_TRUE;;
/* csc.scm:830: loop */
t29=((C_word*)((C_word*)t0)[2])[1];
f_4361(t29,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t28=C_eqp(t3,lf[294]);
if(C_truep(t28)){
t29=lf[123] /* main#compile-only */ =C_SCHEME_TRUE;;
/* csc.scm:830: loop */
t30=((C_word*)((C_word*)t0)[2])[1];
f_4361(t30,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t29=C_eqp(t3,lf[295]);
if(C_truep(t29)){
t30=lf[122] /* main#translate-only */ =C_SCHEME_TRUE;;
/* csc.scm:830: loop */
t31=((C_word*)((C_word*)t0)[2])[1];
f_4361(t31,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t30=C_eqp(t3,lf[296]);
t31=(C_truep(t30)?t30:C_eqp(t3,lf[297]));
if(C_truep(t31)){
t32=lf[97] /* main#embedded */ =C_SCHEME_TRUE;;
t33=C_a_i_cons(&a,2,lf[298],C_retrieve2(lf[113],C_text("main#compile-options")));
t34=C_mutate(&lf[113] /* (set! main#compile-options ...) */,t33);
/* csc.scm:830: loop */
t35=((C_word*)((C_word*)t0)[2])[1];
f_4361(t35,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t32=C_eqp(t3,lf[299]);
if(C_truep(t32)){
t33=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4881,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:651: check */
f_4292(t33,t2,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t33=C_eqp(t3,lf[302]);
if(C_truep(t33)){
t34=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4913,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:657: check */
f_4292(t34,t2,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t34=C_eqp(t3,lf[303]);
t35=(C_truep(t34)?t34:C_eqp(t3,lf[304]));
if(C_truep(t35)){
t36=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4933,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:661: check */
f_4292(t36,t2,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t36=C_eqp(t3,lf[306]);
if(C_truep(t36)){
t37=C_a_i_cons(&a,2,lf[307],C_retrieve2(lf[113],C_text("main#compile-options")));
t38=C_mutate(&lf[113] /* (set! main#compile-options ...) */,t37);
/* csc.scm:830: loop */
t39=((C_word*)((C_word*)t0)[2])[1];
f_4361(t39,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t37=C_eqp(t3,lf[308]);
if(C_truep(t37)){
t38=lf[106] /* main#ignore-repository */ =C_SCHEME_TRUE;;
/* csc.scm:668: t-options */
f_4285(t4,C_a_i_list(&a,1,((C_word*)t0)[7]));}
else{
t38=C_eqp(t3,lf[309]);
if(C_truep(t38)){
t39=C_set_block_item(lf[130] /* ##sys#setup-mode */,0,C_SCHEME_TRUE);
/* csc.scm:671: t-options */
f_4285(t4,C_a_i_list(&a,1,((C_word*)t0)[7]));}
else{
t39=C_eqp(t3,lf[310]);
if(C_truep(t39)){
t40=lf[76] /* main#generate-manifest */ =C_SCHEME_TRUE;;
/* csc.scm:830: loop */
t41=((C_word*)((C_word*)t0)[2])[1];
f_4361(t41,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t40=C_eqp(t3,lf[311]);
if(C_truep(t40)){
t41=lf[103] /* main#gui */ =C_SCHEME_TRUE;;
t42=C_a_i_cons(&a,2,lf[312],C_retrieve2(lf[113],C_text("main#compile-options")));
t43=C_mutate(&lf[113] /* (set! main#compile-options ...) */,t42);
if(C_truep(C_retrieve2(lf[32],C_text("main#mingw")))){
t44=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:679: chicken.pathname#make-pathname */
t45=C_fast_retrieve(lf[132]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t45;
av2[1]=t44;
av2[2]=C_retrieve2(lf[20],C_text("main#host-sharedir"));
av2[3]=lf[317];
av2[4]=C_retrieve2(lf[67],C_text("main#object-extension"));
((C_proc)(void*)(*((C_word*)t45+1)))(5,av2);}}
else{
/* csc.scm:830: loop */
t44=((C_word*)((C_word*)t0)[2])[1];
f_4361(t44,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}}
else{
t41=C_eqp(t3,lf[318]);
if(C_truep(t41)){
t42=lf[104] /* main#deployed */ =C_SCHEME_TRUE;;
/* csc.scm:830: loop */
t43=((C_word*)((C_word*)t0)[2])[1];
f_4361(t43,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t42=C_eqp(t3,lf[319]);
if(C_truep(t42)){
t43=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5022,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:689: check */
f_4292(t43,t2,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t43=C_eqp(t3,lf[321]);
t44=(C_truep(t43)?t43:C_eqp(t3,lf[322]));
if(C_truep(t44)){
t45=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5049,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:694: check */
f_4292(t45,t2,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t45=C_eqp(t3,lf[323]);
t46=(C_truep(t45)?t45:C_eqp(t3,lf[324]));
if(C_truep(t46)){
t47=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5070,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:698: cons* */
f_2909(t47,lf[325],C_a_i_list(&a,2,lf[326],((C_word*)((C_word*)t0)[4])[1]));}
else{
t47=C_eqp(t3,lf[327]);
if(C_truep(t47)){
t48=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5080,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:699: cons* */
f_2909(t48,lf[328],C_a_i_list(&a,2,lf[329],((C_word*)((C_word*)t0)[4])[1]));}
else{
t48=C_eqp(t3,lf[330]);
if(C_truep(t48)){
t49=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5090,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:700: cons* */
f_2909(t49,lf[331],C_a_i_list(&a,2,lf[332],((C_word*)((C_word*)t0)[4])[1]));}
else{
t49=C_eqp(t3,lf[333]);
if(C_truep(t49)){
t50=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5100,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:701: cons* */
f_2909(t50,lf[334],C_a_i_list(&a,2,lf[335],((C_word*)((C_word*)t0)[4])[1]));}
else{
t50=C_eqp(t3,lf[336]);
if(C_truep(t50)){
t51=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5110,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:702: cons* */
f_2909(t51,lf[337],C_a_i_list(&a,2,lf[338],((C_word*)((C_word*)t0)[4])[1]));}
else{
t51=C_eqp(t3,lf[339]);
if(C_truep(t51)){
t52=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5120,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:704: cons* */
f_2909(t52,lf[340],C_a_i_list(&a,2,lf[341],((C_word*)((C_word*)t0)[4])[1]));}
else{
t52=C_eqp(t3,lf[342]);
if(C_truep(t52)){
t53=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5130,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:705: cons* */
f_2909(t53,lf[343],C_a_i_list(&a,2,lf[344],((C_word*)((C_word*)t0)[4])[1]));}
else{
t53=C_eqp(t3,lf[345]);
if(C_truep(t53)){
t54=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5140,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:706: cons* */
f_2909(t54,lf[346],C_a_i_list(&a,2,lf[347],((C_word*)((C_word*)t0)[4])[1]));}
else{
t54=C_eqp(t3,lf[348]);
if(C_truep(t54)){
t55=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5150,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:707: cons* */
f_2909(t55,lf[349],C_a_i_list(&a,2,lf[350],((C_word*)((C_word*)t0)[4])[1]));}
else{
t55=C_eqp(t3,lf[351]);
if(C_truep(t55)){
t56=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5160,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:708: cons* */
f_2909(t56,lf[352],C_a_i_list(&a,2,lf[353],((C_word*)((C_word*)t0)[4])[1]));}
else{
t56=C_eqp(t3,lf[354]);
if(C_truep(t56)){
t57=lf[120] /* main#verbose */ =C_SCHEME_TRUE;;
t58=lf[102] /* main#dry-run */ =C_SCHEME_TRUE;;
/* csc.scm:830: loop */
t59=((C_word*)((C_word*)t0)[2])[1];
f_4361(t59,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t57=C_eqp(t3,lf[355]);
t58=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5177,a[2]=((C_word*)t0)[8],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[6],a[9]=t2,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t57)){
t59=t58;
f_5177(t59,t57);}
else{
t59=C_eqp(t3,lf[413]);
t60=t58;
f_5177(t60,(C_truep(t59)?t59:C_eqp(t3,lf[414])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k4596 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_4598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4598,2,av);}
/* csc.scm:830: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4361(t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k4608 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_4610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4610,2,av);}
/* csc.scm:599: chicken.base#exit */
t2=C_fast_retrieve(lf[44]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4620 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_4622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4622,2,av);}
/* csc.scm:602: chicken.base#exit */
t2=C_fast_retrieve(lf[44]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4627 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_4629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4629,2,av);}
/* csc.scm:601: chicken.base#print */
t2=*((C_word*)lf[157]+1);{
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

/* k4636 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_4638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4638,2,av);}
/* csc.scm:605: chicken.base#exit */
t2=C_fast_retrieve(lf[44]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4643 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_4645(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4645,2,av);}
a=C_alloc(5);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_fix(2),C_SCHEME_TRUE,lf[177]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4651,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:604: ##sys#print */
t6=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_retrieve2(lf[59],C_text("main#translator"));
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4649 in k4643 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_4651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4651,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4654,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:604: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[45]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k4652 in k4649 in k4643 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_ccall f_4654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4654,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4657,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:604: ##sys#print */
t3=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[264];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4655 in k4652 in k4649 in k4643 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in ... */
static void C_ccall f_4657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4657,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4660,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:604: chicken.base#get-output-string */
t3=C_fast_retrieve(lf[178]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4658 in k4655 in k4652 in k4649 in k4643 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in ... */
static void C_ccall f_4660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4660,2,av);}
/* csc.scm:604: chicken.process#system */
t2=C_fast_retrieve(lf[156]);{
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

/* k4715 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_4717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4717,2,av);}
/* csc.scm:620: chicken.base#exit */
t2=C_fast_retrieve(lf[44]);{
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

/* k4727 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_4729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4729,2,av);}
/* csc.scm:621: chicken.base#exit */
t2=C_fast_retrieve(lf[44]);{
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

/* k4739 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_4741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4741,2,av);}
/* csc.scm:622: chicken.base#exit */
t2=C_fast_retrieve(lf[44]);{
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

/* k4751 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_4753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4753,2,av);}
/* csc.scm:623: chicken.base#exit */
t2=C_fast_retrieve(lf[44]);{
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

/* k4774 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_fcall f_4776(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_4776,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4779,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:631: t-options */
f_4285(t2,C_a_i_list(&a,1,lf[279]));}

/* k4777 in k4774 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_4779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4779,2,av);}
if(C_truep(C_retrieve2(lf[120],C_text("main#verbose")))){
t2=lf[120] /* main#verbose */ =C_fix(2);;
/* csc.scm:830: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4361(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t2=lf[120] /* main#verbose */ =C_SCHEME_TRUE;;
/* csc.scm:830: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4361(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}}

/* k4789 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_4791(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4791,2,av);}
a=C_alloc(3);
t2=C_mutate(&lf[113] /* (set! main#compile-options ...) */,t1);
t3=C_a_i_cons(&a,2,lf[280],C_retrieve2(lf[118],C_text("main#link-options")));
t4=C_mutate(&lf[118] /* (set! main#link-options ...) */,t3);
t5=((C_word*)t0)[2];
f_4776(t5,t4);}

/* k4879 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_4881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4881,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4884,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:652: t-options */
f_4285(t2,C_a_i_list(&a,2,lf[301],t3));}

/* k4882 in k4879 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_4884(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4884,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4888,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4896,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:654: chicken.string#string-split */
t5=C_fast_retrieve(lf[240]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[300];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k4886 in k4882 in k4879 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_ccall f_4888(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4888,2,av);}
t2=C_mutate(&lf[94] /* (set! main#linked-extensions ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
/* csc.scm:830: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4361(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k4894 in k4882 in k4879 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_ccall f_4896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4896,2,av);}
/* csc.scm:654: scheme#append */
t2=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[94],C_text("main#linked-extensions"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4911 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_4913(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4913,2,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[107] /* (set! main#library-dir ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:830: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_4361(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k4931 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_4933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4933,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4936,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:662: t-options */
f_4285(t2,C_a_i_list(&a,2,lf[305],t3));}

/* k4934 in k4931 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_4936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4936,2,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:830: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4361(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5000 in k5004 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_5002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5002,2,av);}
t2=C_mutate(&lf[118] /* (set! main#link-options ...) */,t1);
/* csc.scm:830: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4361(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k5004 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_5006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_5006,2,av);}
a=C_alloc(20);
t2=C_a_i_cons(&a,2,t1,C_retrieve2(lf[91],C_text("main#object-files")));
t3=C_mutate(&lf[91] /* (set! main#object-files ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5002,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:684: cons* */
f_2909(t4,lf[313],C_a_i_list(&a,4,lf[314],lf[315],lf[316],C_retrieve2(lf[118],C_text("main#link-options"))));}

/* k5020 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_5022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_5022,2,av);}
a=C_alloc(11);
if(C_truep(C_retrieve2(lf[34],C_text("main#osx")))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5033,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:691: cons* */
f_2909(t2,lf[320],C_a_i_list(&a,2,t3,C_retrieve2(lf[118],C_text("main#link-options"))));}
else{
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:830: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4361(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}}

/* k5031 in k5020 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_5033(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5033,2,av);}
t2=C_mutate(&lf[118] /* (set! main#link-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
/* csc.scm:830: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4361(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5047 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_5049(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5049,2,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_mutate(&lf[119] /* (set! main#target-filename ...) */,t2);
/* csc.scm:830: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_4361(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5068 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_5070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5070,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:830: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4361(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5078 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_5080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5080,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:830: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4361(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5088 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_5090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5090,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:830: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4361(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5098 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_5100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5100,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:830: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4361(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5108 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_5110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5110,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:830: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4361(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5118 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_5120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5120,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:830: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4361(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5128 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_5130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5130,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:830: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4361(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5138 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_5140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5140,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:830: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4361(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5148 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_5150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5150,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:830: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4361(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5158 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_5160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5160,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:830: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4361(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_fcall f_5177(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_5177,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
/* csc.scm:713: shared-build */
f_4315(((C_word*)t0)[3],C_SCHEME_FALSE);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[356]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[357]));
if(C_truep(t3)){
/* csc.scm:715: shared-build */
f_4315(((C_word*)t0)[3],C_SCHEME_TRUE);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[358]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5201,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:717: check */
f_4292(t5,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[359]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5218,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:721: check */
f_4292(t6,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[360]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5235,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:725: check */
f_4292(t7,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[361]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5252,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:729: check */
f_4292(t8,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[362]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5269,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:733: check */
f_4292(t9,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[364]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5290,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:736: check */
f_4292(t10,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[365]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5316,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t12=C_a_i_list1(&a,1,lf[366]);
/* csc.scm:740: scheme#append */
t13=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t13;
av2[1]=t11;
av2[2]=C_retrieve2(lf[118],C_text("main#link-options"));
av2[3]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(4,av2);}}
else{
t11=C_eqp(((C_word*)t0)[4],lf[367]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5329,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:742: check */
f_4292(t12,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[368]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5354,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:746: check */
f_4292(t13,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[373]);
if(C_truep(t13)){
/* csc.scm:830: loop */
t14=((C_word*)((C_word*)t0)[6])[1];
f_4361(t14,((C_word*)t0)[7],((C_word*)((C_word*)t0)[5])[1]);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[374]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5409,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:754: check */
f_4292(t15,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t15=C_eqp(((C_word*)t0)[4],lf[376]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5429,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:758: check */
f_4292(t16,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t16=C_eqp(((C_word*)t0)[4],lf[378]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5450,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:762: scheme#append */
t18=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t18;
av2[1]=t17;
av2[2]=C_retrieve2(lf[86],C_text("main#scheme-files"));
av2[3]=lf[380];
((C_proc)(void*)(*((C_word*)t18+1)))(4,av2);}}
else{
t17=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5460,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t18=C_eqp(((C_word*)t0)[9],lf[412]);
if(C_truep(t18)){
t19=lf[124] /* main#to-stdout */ =C_SCHEME_TRUE;;
t20=lf[122] /* main#translate-only */ =C_SCHEME_TRUE;;
t21=t17;
f_5460(t21,t20);}
else{
t19=t17;
f_5460(t19,C_SCHEME_UNDEFINED);}}}}}}}}}}}}}}}}}

/* k5199 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_5201(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5201,2,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[59] /* (set! main#translator ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:830: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_4361(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5216 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_5218(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5218,2,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[60] /* (set! main#compiler ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:830: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_4361(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5233 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_5235(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5235,2,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[61] /* (set! main#c++-compiler ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:830: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_4361(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5250 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_5252(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5252,2,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[63] /* (set! main#linker ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:830: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_4361(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5267 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_5269(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5269,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:734: cons* */
f_2909(t2,lf[363],C_a_i_list(&a,2,t3,t4));}

/* k5271 in k5267 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_ccall f_5273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5273,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:830: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4361(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5288 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_5290(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5290,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5294,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5302,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:737: chicken.string#string-split */
t5=C_fast_retrieve(lf[240]);{
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

/* k5292 in k5288 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_ccall f_5294(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5294,2,av);}
t2=C_mutate(&lf[113] /* (set! main#compile-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
/* csc.scm:830: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4361(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5300 in k5288 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_ccall f_5302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5302,2,av);}
/* csc.scm:737: scheme#append */
t2=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[113],C_text("main#compile-options"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5314 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_5316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5316,2,av);}
t2=C_mutate(&lf[118] /* (set! main#link-options ...) */,t1);
/* csc.scm:830: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4361(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k5327 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_5329(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5329,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5333,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5341,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:743: chicken.string#string-split */
t5=C_fast_retrieve(lf[240]);{
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

/* k5331 in k5327 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_ccall f_5333(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5333,2,av);}
t2=C_mutate(&lf[118] /* (set! main#link-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
/* csc.scm:830: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4361(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5339 in k5327 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_ccall f_5341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5341,2,av);}
/* csc.scm:743: scheme#append */
t2=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[118],C_text("main#link-options"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5352 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_5354(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5354,2,av);}
a=C_alloc(8);
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[105] /* (set! main#rpath ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5368,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5384,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:748: chicken.platform#build-platform */
t6=C_fast_retrieve(lf[372]);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k5366 in k5352 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_fcall f_5368(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_5368,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5372,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5380,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:750: scheme#string-append */
t4=*((C_word*)lf[78]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[369];
av2[3]=C_retrieve2(lf[105],C_text("main#rpath"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:830: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4361(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}}

/* k5370 in k5366 in k5352 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in ... */
static void C_ccall f_5372(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5372,2,av);}
t2=C_mutate(&lf[118] /* (set! main#link-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
/* csc.scm:830: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4361(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5378 in k5366 in k5352 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in ... */
static void C_ccall f_5380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5380,2,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* csc.scm:750: scheme#append */
t3=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[118],C_text("main#link-options"));
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5382 in k5352 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_ccall f_5384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5384,2,av);}
if(C_truep((C_truep(C_eqp(t1,lf[370]))?C_SCHEME_TRUE:(C_truep(C_eqp(t1,lf[371]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t2=C_i_not(C_retrieve2(lf[32],C_text("main#mingw")));
t3=((C_word*)t0)[2];
f_5368(t3,(C_truep(t2)?C_i_not(C_retrieve2(lf[34],C_text("main#osx"))):C_SCHEME_FALSE));}
else{
t2=((C_word*)t0)[2];
f_5368(t2,C_SCHEME_FALSE);}}

/* k5407 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_5409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5409,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5412,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:755: t-options */
f_4285(t2,C_a_i_list(&a,2,lf[375],t3));}

/* k5410 in k5407 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_ccall f_5412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5412,2,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:830: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4361(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5427 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_5429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5429,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5432,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:759: t-options */
f_4285(t2,C_a_i_list(&a,2,lf[377],t3));}

/* k5430 in k5427 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_ccall f_5432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5432,2,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:830: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4361(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5448 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_5450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5450,2,av);}
a=C_alloc(5);
t2=C_mutate(&lf[86] /* (set! main#scheme-files ...) */,t1);
if(C_truep(C_retrieve2(lf[119],C_text("main#target-filename")))){
/* csc.scm:830: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4361(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5457,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:764: chicken.pathname#make-pathname */
t4=C_fast_retrieve(lf[132]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[379];
av2[4]=C_retrieve2(lf[70],C_text("main#executable-extension"));
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k5455 in k5448 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_ccall f_5457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5457,2,av);}
t2=C_mutate(&lf[119] /* (set! main#target-filename ...) */,t1);
/* csc.scm:830: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4361(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_fcall f_5460(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_5460,2,t0,t1);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5463,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep((C_truep(C_eqp(((C_word*)t0)[2],lf[410]))?C_SCHEME_TRUE:(C_truep(C_eqp(((C_word*)t0)[2],lf[411]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t3=C_mutate(&lf[116] /* (set! main#compilation-optimization-options ...) */,C_retrieve2(lf[81],C_text("main#best-compilation-optimization-options")));
t4=C_mutate(&lf[117] /* (set! main#linking-optimization-options ...) */,C_retrieve2(lf[83],C_text("main#best-linking-optimization-options")));
t5=t2;
f_5463(t5,t4);}
else{
t3=t2;
f_5463(t3,C_SCHEME_UNDEFINED);}}

/* k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_fcall f_5463(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_5463,2,t0,t1);}
a=C_alloc(12);
t2=C_i_assq(((C_word*)t0)[2],lf[381]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5470,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(
  /* csc.scm:772: g1197 */
  f_5470(C_a_i(&a,3),t3,t2)
);
/* csc.scm:830: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4361(t5,((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1]);}
else{
if(C_truep(C_i_memq(((C_word*)t0)[2],lf[382]))){
/* csc.scm:773: t-options */
f_4285(((C_word*)t0)[7],C_a_i_list(&a,1,((C_word*)t0)[8]));}
else{
if(C_truep(C_i_memq(((C_word*)t0)[2],lf[383]))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5500,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:775: check */
f_4292(t3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5519,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t4=C_block_size(((C_word*)t0)[8]);
if(C_truep(C_fixnum_greaterp(t4,C_fix(2)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5894,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:780: scheme#substring */
t6=*((C_word*)lf[389]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[8];
av2[3]=C_fix(0);
av2[4]=C_fix(2);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t5=t3;
f_5519(t5,C_SCHEME_FALSE);}}}}}

/* g1197 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in ... */
static C_word C_fcall f_5470(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;{}
t2=C_i_cadr(t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
return(t4);}

/* k5498 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in ... */
static void C_ccall f_5500(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5500,2,av);}
a=C_alloc(8);
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5506,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* csc.scm:777: scheme#string->number */
t5=*((C_word*)lf[384]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5504 in k5498 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in ... */
static void C_ccall f_5506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5506,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5509,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:778: t-options */
f_4285(t2,C_a_i_list(&a,2,((C_word*)t0)[6],((C_word*)t0)[7]));}

/* k5507 in k5504 in k5498 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in ... */
static void C_ccall f_5509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5509,2,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:830: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4361(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in ... */
static void C_fcall f_5519(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_5519,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
/* csc.scm:781: t-options */
f_4285(((C_word*)t0)[3],C_a_i_list(&a,1,((C_word*)t0)[4]));}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5528,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_block_size(((C_word*)t0)[4]);
if(C_truep(C_fixnum_greaterp(t3,C_fix(1)))){
t4=C_i_string_ref(((C_word*)t0)[4],C_fix(0));
t5=t2;
f_5528(t5,C_u_i_char_equalp(C_make_character(45),t4));}
else{
t4=t2;
f_5528(t4,C_SCHEME_FALSE);}}}

/* k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in ... */
static void C_fcall f_5528(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_5528,2,t0,t1);}
a=C_alloc(11);
if(C_truep(t1)){
t2=C_i_string_ref(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_u_i_char_equalp(C_make_character(76),t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5538,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t4=C_i_string_ref(((C_word*)t0)[2],C_fix(2));
if(C_truep(C_u_i_char_whitespacep(t4))){
/* csc.scm:786: chicken.base#error */
t5=*((C_word*)lf[385]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[386];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=t3;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_5538(2,av2);}}}
else{
t3=C_i_string_ref(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_u_i_char_equalp(C_make_character(73),t3))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5565,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t5=C_i_string_ref(((C_word*)t0)[2],C_fix(2));
if(C_truep(C_u_i_char_whitespacep(t5))){
/* csc.scm:790: chicken.base#error */
t6=*((C_word*)lf[385]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t4;
av2[2]=lf[387];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t6=t4;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_5565(2,av2);}}}
else{
t4=C_i_string_ref(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_u_i_char_equalp(C_make_character(68),t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5596,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:793: scheme#substring */
t6=*((C_word*)lf[389]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(2);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t5=C_i_string_ref(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_u_i_char_equalp(C_make_character(70),t5))){
if(C_truep(C_retrieve2(lf[34],C_text("main#osx")))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5610,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t7=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:796: scheme#append */
t8=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t6;
av2[2]=C_retrieve2(lf[113],C_text("main#compile-options"));
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
/* csc.scm:830: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_4361(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1]);}}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5620,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t7=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t7,C_fix(3)))){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5726,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:797: scheme#substring */
t9=*((C_word*)lf[389]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
av2[4]=C_fix(4);
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t8=t6;
f_5620(t8,C_SCHEME_FALSE);}}}}}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5738,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:806: chicken.file#file-exists? */
t3=C_fast_retrieve(lf[131]);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k5536 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in ... */
static void C_ccall f_5538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5538,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5542,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[5]);
/* csc.scm:787: scheme#append */
t4=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=C_retrieve2(lf[118],C_text("main#link-options"));
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5540 in k5536 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in ... */
static void C_ccall f_5542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5542,2,av);}
t2=C_mutate(&lf[118] /* (set! main#link-options ...) */,t1);
/* csc.scm:830: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4361(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k5563 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in ... */
static void C_ccall f_5565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5565,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[5]);
/* csc.scm:791: scheme#append */
t4=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=C_retrieve2(lf[113],C_text("main#compile-options"));
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5567 in k5563 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in ... */
static void C_ccall f_5569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5569,2,av);}
t2=C_mutate(&lf[113] /* (set! main#compile-options ...) */,t1);
/* csc.scm:830: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4361(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k5594 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in ... */
static void C_ccall f_5596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5596,2,av);}
a=C_alloc(6);
/* csc.scm:793: t-options */
f_4285(((C_word*)t0)[3],C_a_i_list(&a,2,lf[388],t1));}

/* k5608 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in ... */
static void C_ccall f_5610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5610,2,av);}
t2=C_mutate(&lf[113] /* (set! main#compile-options ...) */,t1);
/* csc.scm:830: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4361(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k5618 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in ... */
static void C_fcall f_5620(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_5620,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5624,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[5]);
/* csc.scm:798: scheme#append */
t4=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=C_retrieve2(lf[118],C_text("main#link-options"));
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=C_block_size(((C_word*)t0)[5]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5709,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* string->list */
t4=C_fast_retrieve(lf[149]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* csc.scm:805: stop */
f_3785(((C_word*)t0)[6],lf[392],C_a_i_list(&a,1,((C_word*)t0)[7]));}}}

/* k5622 in k5618 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in ... */
static void C_ccall f_5624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5624,2,av);}
t2=C_mutate(&lf[118] /* (set! main#link-options ...) */,t1);
/* csc.scm:830: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4361(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k5645 in k5703 in k5707 in k5618 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_5647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5647,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:830: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4361(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5662 in k5703 in k5707 in k5618 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_5664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5664,2,av);}
/* csc.scm:803: scheme#append */
t2=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1216 in k5703 in k5707 in k5618 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_fcall f_5666(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_5666,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5691,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_string(&a,1,t4);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[186]);
C_word av2[4];
av2[0]=*((C_word*)lf[186]+1);
av2[1]=t3;
av2[2]=lf[390];
av2[3]=t5;
tp(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5689 in map-loop1216 in k5703 in k5707 in k5618 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_ccall f_5691(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5691,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5666(t6,((C_word*)t0)[5],t5);}

/* k5703 in k5707 in k5618 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_ccall f_5705(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5705,2,av);}
a=C_alloc(21);
if(C_truep(C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5647,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5664,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5666,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_5666(t11,t7,((C_word*)t0)[5]);}
else{
/* csc.scm:804: stop */
f_3785(((C_word*)t0)[6],lf[391],C_a_i_list(&a,1,((C_word*)t0)[7]));}}

/* k5707 in k5618 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in ... */
static void C_ccall f_5709(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_5709,2,av);}
a=C_alloc(16);
t2=C_i_cdr(t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5705,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t5=C_a_i_list(&a,1,C_retrieve2(lf[85],C_text("main#short-options")));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3351,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_3351(t9,t4,t5,t3);}

/* k5724 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in ... */
static void C_ccall f_5726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5726,2,av);}
t2=((C_word*)t0)[2];
f_5620(t2,C_u_i_string_equal_p(lf[393],t1));}

/* k5736 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in ... */
static void C_ccall f_5738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_5738,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5743,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5749,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:807: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5858,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[186]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[186]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[408];
tp(4,av2);}}}

/* a5742 in k5736 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in ... */
static void C_ccall f_5743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5743,2,av);}
/* csc.scm:807: chicken.pathname#decompose-pathname */
t2=C_fast_retrieve(lf[394]);{
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

/* a5748 in k5736 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in ... */
static void C_ccall f_5749(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5749,5,av);}
a=C_alloc(7);
if(C_truep(C_i_not(t4))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5760,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:809: scheme#append */
t7=*((C_word*)lf[137]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
av2[2]=C_retrieve2(lf[86],C_text("main#scheme-files"));
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
if(C_truep((C_truep(C_i_equalp(t4,lf[395]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[396]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5774,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:811: scheme#append */
t7=*((C_word*)lf[137]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
av2[2]=C_retrieve2(lf[87],C_text("main#c-files"));
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
if(C_truep(C_i_string_ci_equal_p(t4,lf[397]))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5788,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:813: scheme#append */
t7=*((C_word*)lf[137]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
av2[2]=C_retrieve2(lf[88],C_text("main#rc-files"));
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
if(C_truep((C_truep(C_i_equalp(t4,lf[398]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[399]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[400]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[401]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[402]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5801,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[34],C_text("main#osx")))){
t6=C_a_i_cons(&a,2,lf[403],C_retrieve2(lf[113],C_text("main#compile-options")));
t7=C_mutate(&lf[113] /* (set! main#compile-options ...) */,t6);
t8=t5;
f_5801(t8,t7);}
else{
t6=t5;
f_5801(t6,C_SCHEME_UNDEFINED);}}
else{
if(C_truep((C_truep(C_i_equalp(t4,lf[404]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[405]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[406]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
t5=lf[96] /* main#objc-mode */ =C_SCHEME_TRUE;;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5825,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:820: scheme#append */
t8=*((C_word*)lf[137]+1);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t6;
av2[2]=C_retrieve2(lf[87],C_text("main#c-files"));
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t5=C_retrieve2(lf[67],C_text("main#object-extension"));
t6=C_u_i_string_equal_p(t4,C_retrieve2(lf[67],C_text("main#object-extension")));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5837,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t6)){
t8=t7;
f_5837(t8,t6);}
else{
t8=C_retrieve2(lf[68],C_text("main#library-extension"));
t9=t7;
f_5837(t9,C_u_i_string_equal_p(t4,C_retrieve2(lf[68],C_text("main#library-extension"))));}}}}}}}

/* k5758 in a5748 in k5736 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_ccall f_5760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5760,2,av);}
t2=C_mutate(&lf[86] /* (set! main#scheme-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5772 in a5748 in k5736 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_ccall f_5774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5774,2,av);}
t2=C_mutate(&lf[87] /* (set! main#c-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5786 in a5748 in k5736 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_ccall f_5788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5788,2,av);}
t2=C_mutate(&lf[88] /* (set! main#rc-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5799 in a5748 in k5736 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_fcall f_5801(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5801,2,t0,t1);}
a=C_alloc(6);
t2=lf[95] /* main#cpp-mode */ =C_SCHEME_TRUE;;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5806,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:817: scheme#append */
t5=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=C_retrieve2(lf[87],C_text("main#c-files"));
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k5804 in k5799 in a5748 in k5736 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_5806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5806,2,av);}
t2=C_mutate(&lf[87] /* (set! main#c-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5823 in a5748 in k5736 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_ccall f_5825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5825,2,av);}
t2=C_mutate(&lf[87] /* (set! main#c-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5835 in a5748 in k5736 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_fcall f_5837(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5837,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5841,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:823: scheme#append */
t4=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=C_retrieve2(lf[91],C_text("main#object-files"));
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5849,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:824: scheme#append */
t4=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=C_retrieve2(lf[86],C_text("main#scheme-files"));
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k5839 in k5835 in a5748 in k5736 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_5841(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5841,2,av);}
t2=C_mutate(&lf[91] /* (set! main#object-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5847 in k5835 in a5748 in k5736 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_5849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5849,2,av);}
t2=C_mutate(&lf[86] /* (set! main#scheme-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5856 in k5736 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in ... */
static void C_ccall f_5858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5858,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5864,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csc.scm:827: chicken.file#file-exists? */
t4=C_fast_retrieve(lf[131]);{
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

/* k5862 in k5856 in k5736 in k5526 in k5517 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_ccall f_5864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5864,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
/* csc.scm:830: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4361(t4,((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1]);}
else{
/* csc.scm:829: stop */
f_3785(((C_word*)t0)[6],lf[407],C_a_i_list(&a,1,((C_word*)t0)[7]));}}

/* k5892 in k5461 in k5458 in k5175 in k4593 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in ... */
static void C_ccall f_5894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5894,2,av);}
t2=((C_word*)t0)[2];
f_5519(t2,C_u_i_string_equal_p(lf[409],t1));}

/* k6097 in for-each-loop1276 in k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in ... */
static void C_ccall f_6099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_6099,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6102,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_member(t2,C_retrieve2(lf[87],C_text("main#c-files"))))){
/* csc.scm:847: stop */
f_3785(t3,lf[231],C_a_i_list(&a,2,((C_word*)t0)[3],t2));}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6102(2,av2);}}}

/* k6100 in k6097 in for-each-loop1276 in k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_ccall f_6102(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_6102,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6105,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6139,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6143,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6147,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:851: quotewrap */
t6=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
f_3834(3,av2);}}

/* k6103 in k6100 in k6097 in for-each-loop1276 in k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_6105(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6105,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6108,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_truep(C_retrieve2(lf[126],C_text("main#static")))?C_retrieve2(lf[123],C_text("main#compile-only")):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6135,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:876: chicken.pathname#pathname-replace-extension */
t5=C_fast_retrieve(lf[175]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[221];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=t2;
f_6108(t4,C_SCHEME_UNDEFINED);}}

/* k6106 in k6103 in k6100 in k6097 in for-each-loop1276 in k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_fcall f_6108(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_6108,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6112,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:878: scheme#append */
t4=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_retrieve2(lf[87],C_text("main#c-files"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6110 in k6106 in k6103 in k6100 in k6097 in for-each-loop1276 in k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in ... */
static void C_ccall f_6112(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6112,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[87] /* (set! main#c-files ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6116,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:879: scheme#append */
t5=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=C_retrieve2(lf[89],C_text("main#generated-c-files"));
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k6114 in k6110 in k6106 in k6103 in k6100 in k6097 in for-each-loop1276 in k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in ... */
static void C_ccall f_6116(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6116,2,av);}
t2=C_mutate(&lf[89] /* (set! main#generated-c-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6133 in k6103 in k6100 in k6097 in for-each-loop1276 in k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_ccall f_6135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6135,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_retrieve2(lf[93],C_text("main#transient-link-files")));
t3=C_mutate(&lf[93] /* (set! main#transient-link-files ...) */,t2);
t4=((C_word*)t0)[2];
f_6108(t4,t3);}

/* k6137 in k6100 in k6097 in for-each-loop1276 in k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_6139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6139,2,av);}
/* csc.scm:849: command */
f_7351(((C_word*)t0)[2],t1);}

/* k6141 in k6100 in k6097 in for-each-loop1276 in k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_6143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6143,2,av);}
/* csc.scm:850: chicken.string#string-intersperse */
t2=C_fast_retrieve(lf[136]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[222];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k6145 in k6100 in k6097 in for-each-loop1276 in k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_6147(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6147,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6151,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6155,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[124],C_text("main#to-stdout")))){
t5=t4;
f_6155(t5,lf[229]);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6241,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:855: quotewrap */
t6=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
f_3834(3,av2);}}}

/* k6149 in k6145 in k6100 in k6097 in for-each-loop1276 in k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_ccall f_6151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6151,2,av);}
a=C_alloc(6);
/* csc.scm:851: cons* */
f_2909(((C_word*)t0)[2],C_retrieve2(lf[59],C_text("main#translator")),C_a_i_list(&a,2,((C_word*)t0)[3],t1));}

/* k6153 in k6145 in k6100 in k6097 in for-each-loop1276 in k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_fcall f_6155(C_word t0,C_word t1){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,0,2)))){
C_save_and_reclaim_args((void *)trf_6155,2,t0,t1);}
a=C_alloc(20);
t2=t1;
t3=(C_truep(C_i_debug_modep())?lf[223]:C_SCHEME_END_OF_LIST);
t4=t3;
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_retrieve2(lf[134],C_text("main#quote-option"));
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6166,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,a[5]=t7,a[6]=t9,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6210,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6220,a[2]=t11,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[126],C_text("main#static")))){
t13=C_i_member(lf[228],C_retrieve2(lf[110],C_text("main#translate-options")));
t14=t12;
f_6220(t14,C_i_not(t13));}
else{
t13=t12;
f_6220(t13,C_SCHEME_FALSE);}}

/* k6164 in k6153 in k6145 in k6100 in k6097 in for-each-loop1276 in k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in ... */
static void C_ccall f_6166(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6166,2,av);}
a=C_alloc(13);
t2=C_i_check_list_2(t1,lf[135]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6172,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6174,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6174(t7,t3,t1);}

/* k6170 in k6164 in k6153 in k6145 in k6100 in k6097 in for-each-loop1276 in k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in ... */
static void C_ccall f_6172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6172,2,av);}
/* csc.scm:852: scheme#append */
t2=*((C_word*)lf[137]+1);{
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

/* map-loop1297 in k6164 in k6153 in k6145 in k6100 in k6097 in for-each-loop1276 in k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in ... */
static void C_fcall f_6174(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6174,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6199,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:859: g1303 */
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

/* k6197 in map-loop1297 in k6164 in k6153 in k6145 in k6100 in k6097 in for-each-loop1276 in k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in ... */
static void C_ccall f_6199(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6199,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6174(t6,((C_word*)t0)[5],t5);}

/* k6208 in k6153 in k6145 in k6100 in k6097 in for-each-loop1276 in k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in ... */
static void C_fcall f_6210(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_6210,2,t0,t1);}
if(C_truep(C_retrieve2(lf[95],C_text("main#cpp-mode")))){
/* csc.scm:860: scheme#append */
t2=*((C_word*)lf[137]+1);{
C_word av2[7];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[84],C_text("main#extra-features"));
av2[3]=C_retrieve2(lf[110],C_text("main#translate-options"));
av2[4]=t1;
av2[5]=lf[224];
av2[6]=C_retrieve2(lf[115],C_text("main#translation-optimization-options"));
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}
else{
if(C_truep(C_retrieve2(lf[96],C_text("main#objc-mode")))){
/* csc.scm:860: scheme#append */
t2=*((C_word*)lf[137]+1);{
C_word av2[7];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[84],C_text("main#extra-features"));
av2[3]=C_retrieve2(lf[110],C_text("main#translate-options"));
av2[4]=t1;
av2[5]=lf[225];
av2[6]=C_retrieve2(lf[115],C_text("main#translation-optimization-options"));
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}
else{
/* csc.scm:860: scheme#append */
t2=*((C_word*)lf[137]+1);{
C_word av2[7];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[84],C_text("main#extra-features"));
av2[3]=C_retrieve2(lf[110],C_text("main#translate-options"));
av2[4]=t1;
av2[5]=C_SCHEME_END_OF_LIST;
av2[6]=C_retrieve2(lf[115],C_text("main#translation-optimization-options"));
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}}}

/* k6218 in k6153 in k6145 in k6100 in k6097 in for-each-loop1276 in k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in ... */
static void C_fcall f_6220(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_6220,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6227,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:867: chicken.pathname#pathname-replace-extension */
t3=C_fast_retrieve(lf[175]);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[227];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=((C_word*)t0)[2];
f_6210(t2,C_SCHEME_END_OF_LIST);}}

/* k6225 in k6218 in k6153 in k6145 in k6100 in k6097 in for-each-loop1276 in k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in ... */
static void C_ccall f_6227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_6227,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
f_6210(t2,C_a_i_list2(&a,2,lf[226],t1));}

/* k6239 in k6145 in k6100 in k6097 in for-each-loop1276 in k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_ccall f_6241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_6241,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
f_6155(t2,C_a_i_list(&a,2,lf[230],t1));}

/* for-each-loop1276 in k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in ... */
static void C_fcall f_6270(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6270,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6280,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=C_i_length(C_retrieve2(lf[86],C_text("main#scheme-files")));
t8=C_eqp(C_fix(1),t7);
t9=(C_truep(t8)?C_retrieve2(lf[119],C_text("main#target-filename")):t6);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6099,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[95],C_text("main#cpp-mode")))){
/* csc.scm:841: chicken.pathname#pathname-replace-extension */
t11=C_fast_retrieve(lf[175]);{
C_word av2[4];
av2[0]=t11;
av2[1]=t10;
av2[2]=t9;
av2[3]=lf[232];
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[96],C_text("main#objc-mode")))){
/* csc.scm:841: chicken.pathname#pathname-replace-extension */
t11=C_fast_retrieve(lf[175]);{
C_word av2[4];
av2[0]=t11;
av2[1]=t10;
av2[2]=t9;
av2[3]=lf[233];
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
/* csc.scm:841: chicken.pathname#pathname-replace-extension */
t11=C_fast_retrieve(lf[175]);{
C_word av2[4];
av2[0]=t11;
av2[1]=t10;
av2[2]=t9;
av2[3]=lf[234];
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6278 in for-each-loop1276 in k4514 in k4511 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in ... */
static void C_ccall f_6280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6280,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6270(t3,((C_word*)t0)[4],t2);}

/* g1340 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in ... */
static void C_fcall f_6295(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_6295,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6299,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[123],C_text("main#compile-only")))){
if(C_truep(C_retrieve2(lf[119],C_text("main#target-filename")))){
t4=C_i_length(C_retrieve2(lf[87],C_text("main#c-files")));
t5=C_eqp(C_fix(1),t4);
if(C_truep(t5)){
t6=t3;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_retrieve2(lf[119],C_text("main#target-filename"));
f_6299(2,av2);}}
else{
/* csc.scm:893: chicken.pathname#pathname-replace-extension */
t6=C_fast_retrieve(lf[175]);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_retrieve2(lf[67],C_text("main#object-extension"));
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}
else{
/* csc.scm:893: chicken.pathname#pathname-replace-extension */
t4=C_fast_retrieve(lf[175]);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_retrieve2(lf[67],C_text("main#object-extension"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}
else{
/* csc.scm:893: chicken.pathname#pathname-replace-extension */
t4=C_fast_retrieve(lf[175]);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_retrieve2(lf[67],C_text("main#object-extension"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k6297 in g1340 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in ... */
static void C_ccall f_6299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6299,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6302,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_member(t2,C_retrieve2(lf[91],C_text("main#object-files"))))){
/* csc.scm:895: stop */
f_3785(t3,lf[210],C_a_i_list(&a,2,((C_word*)t0)[4],t2));}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6302(2,av2);}}}

/* k6300 in k6297 in g1340 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in ... */
static void C_ccall f_6302(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6302,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6305,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6317,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_truep(C_retrieve2(lf[95],C_text("main#cpp-mode")))?C_retrieve2(lf[61],C_text("main#c++-compiler")):C_retrieve2(lf[60],C_text("main#compiler")));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6329,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:901: quotewrap */
t7=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[5];
f_3834(3,av2);}}

/* k6303 in k6300 in k6297 in g1340 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_ccall f_6305(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6305,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[92],C_text("main#generated-object-files")));
t3=C_mutate(&lf[92] /* (set! main#generated-object-files ...) */,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k6315 in k6300 in k6297 in g1340 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_ccall f_6317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6317,2,av);}
/* csc.scm:897: command */
f_7351(((C_word*)t0)[2],t1);}

/* k6327 in k6300 in k6297 in g1340 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_ccall f_6329(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6329,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6333,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6352,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:902: quotewrap */
t5=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
f_3834(3,av2);}}

/* k6331 in k6327 in k6300 in k6297 in g1340 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_6333(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6333,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6337,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[95],C_text("main#cpp-mode")))){
t4=C_i_string_equal_p(lf[206],C_retrieve2(lf[61],C_text("main#c++-compiler")));
t5=t3;
f_6337(t5,(C_truep(t4)?lf[207]:lf[208]));}
else{
t4=t3;
f_6337(t4,lf[208]);}}

/* k6335 in k6331 in k6327 in k6300 in k6297 in g1340 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_fcall f_6337(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_6337,2,t0,t1);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:907: compiler-options */
f_6567(t3);}

/* k6339 in k6335 in k6331 in k6327 in k6300 in k6297 in g1340 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in ... */
static void C_ccall f_6341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_6341,2,av);}
a=C_alloc(18);
t2=C_a_i_list6(&a,6,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],lf[205],((C_word*)t0)[5],t1);
/* csc.scm:898: chicken.string#string-intersperse */
t3=C_fast_retrieve(lf[136]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[6];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6350 in k6327 in k6300 in k6297 in g1340 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_6352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6352,2,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[186]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[186]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[209];
av2[3]=t1;
tp(4,av2);}}

/* k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in ... */
static void C_ccall f_6381(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6381,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6384,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6517,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[76],C_text("main#generate-manifest")))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6542,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:911: chicken.platform#software-type */
t5=C_fast_retrieve(lf[219]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t3;
f_6517(t4,C_SCHEME_FALSE);}}

/* k6382 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in ... */
static void C_fcall f_6384(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_6384,2,t0,t1);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6385,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve2(lf[88],C_text("main#rc-files"));
t4=C_i_check_list_2(C_retrieve2(lf[88],C_text("main#rc-files")),lf[176]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6422,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6493,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_6493(t9,t5,C_retrieve2(lf[88],C_text("main#rc-files")));}

/* g1350 in k6382 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in ... */
static void C_fcall f_6385(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_6385,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6389,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:918: scheme#string-append */
t4=*((C_word*)lf[78]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[211];
av2[4]=C_retrieve2(lf[67],C_text("main#object-extension"));
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k6387 in g1350 in k6382 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_ccall f_6389(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6389,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6392,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6404,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6412,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:921: quotewrap */
t6=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
f_3834(3,av2);}}

/* k6390 in k6387 in g1350 in k6382 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_6392(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6392,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[92],C_text("main#generated-object-files")));
t3=C_mutate(&lf[92] /* (set! main#generated-object-files ...) */,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k6402 in k6387 in g1350 in k6382 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_6404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6404,2,av);}
/* csc.scm:919: command */
f_7351(((C_word*)t0)[2],t1);}

/* k6410 in k6387 in g1350 in k6382 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_6412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6412,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6416,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:921: quotewrap */
t4=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
f_3834(3,av2);}}

/* k6414 in k6410 in k6387 in g1350 in k6382 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_ccall f_6416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6416,2,av);}
a=C_alloc(9);
t2=C_a_i_list3(&a,3,C_retrieve2(lf[62],C_text("main#rc-compiler")),((C_word*)t0)[2],t1);
/* csc.scm:920: chicken.string#string-intersperse */
t3=C_fast_retrieve(lf[136]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6420 in k6382 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in ... */
static void C_ccall f_6422(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6422,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6426,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6491,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:925: scheme#reverse */
t4=*((C_word*)lf[190]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6424 in k6420 in k6382 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_ccall f_6426(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6426,2,av);}
a=C_alloc(9);
t2=C_mutate(&lf[91] /* (set! main#object-files ...) */,t1);
if(C_truep(C_retrieve2(lf[121],C_text("main#keep-files")))){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_retrieve2(lf[164],C_text("main#$delete-file"));
t4=C_retrieve2(lf[89],C_text("main#generated-c-files"));
t5=C_i_check_list_2(C_retrieve2(lf[89],C_text("main#generated-c-files")),lf[176]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6435,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6466,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_6466(t10,t6,C_retrieve2(lf[89],C_text("main#generated-c-files")));}}

/* k6433 in k6424 in k6420 in k6382 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_6435(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6435,2,av);}
a=C_alloc(6);
t2=C_retrieve2(lf[164],C_text("main#$delete-file"));
t3=C_retrieve2(lf[90],C_text("main#generated-rc-files"));
t4=C_i_check_list_2(C_retrieve2(lf[90],C_text("main#generated-rc-files")),lf[176]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6443,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_6443(t8,((C_word*)t0)[2],C_retrieve2(lf[90],C_text("main#generated-rc-files")));}

/* for-each-loop1409 in k6433 in k6424 in k6420 in k6382 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_fcall f_6443(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6443,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6453,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:928: g1410 */
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

/* k6451 in for-each-loop1409 in k6433 in k6424 in k6420 in k6382 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in ... */
static void C_ccall f_6453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6453,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6443(t3,((C_word*)t0)[4],t2);}

/* for-each-loop1392 in k6424 in k6420 in k6382 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_fcall f_6466(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6466,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6476,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:927: g1393 */
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

/* k6474 in for-each-loop1392 in k6424 in k6420 in k6382 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_ccall f_6476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6476,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6466(t3,((C_word*)t0)[4],t2);}

/* k6489 in k6420 in k6382 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_ccall f_6491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6491,2,av);}
/* csc.scm:925: scheme#append */
t2=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[91],C_text("main#object-files"));
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* for-each-loop1349 in k6382 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in ... */
static void C_fcall f_6493(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6493,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6503,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:916: g1350 */
t5=((C_word*)t0)[3];
f_6385(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6501 in for-each-loop1349 in k6382 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_ccall f_6503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6503,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6493(t3,((C_word*)t0)[4],t2);}

/* k6515 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in ... */
static void C_fcall f_6517(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_6517,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6520,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:912: chicken.pathname#pathname-replace-extension */
t3=C_fast_retrieve(lf[175]);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_retrieve2(lf[119],C_text("main#target-filename"));
av2[3]=lf[218];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=((C_word*)t0)[2];
f_6384(t2,C_SCHEME_UNDEFINED);}}

/* k6518 in k6515 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in ... */
static void C_ccall f_6520(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6520,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6523,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6535,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:913: chicken.pathname#pathname-file */
t5=C_fast_retrieve(lf[217]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_retrieve2(lf[119],C_text("main#target-filename"));
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k6521 in k6518 in k6515 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_ccall f_6523(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6523,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[88],C_text("main#rc-files")));
t3=C_mutate(&lf[88] /* (set! main#rc-files ...) */,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[90],C_text("main#generated-rc-files")));
t5=C_mutate(&lf[90] /* (set! main#generated-rc-files ...) */,t4);
t6=((C_word*)t0)[3];
f_6384(t6,t5);}

/* k6533 in k6518 in k6515 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_ccall f_6535(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6535,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t1;
t4=((C_word*)t0)[3];
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7423,a[2]=t3,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[120],C_text("main#verbose")))){
/* csc.scm:1095: chicken.base#print */
t6=*((C_word*)lf[157]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[216];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_7423(2,av2);}}}

/* k6540 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in ... */
static void C_ccall f_6542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6542,2,av);}
t2=((C_word*)t0)[2];
f_6517(t2,C_eqp(lf[15],t1));}

/* for-each-loop1339 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in ... */
static void C_fcall f_6544(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6544,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6554,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:887: g1340 */
t5=((C_word*)t0)[3];
f_6295(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6552 in for-each-loop1339 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in ... */
static void C_ccall f_6554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6554,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6544(t3,((C_word*)t0)[4],t2);}

/* main#compiler-options in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in ... */
static void C_fcall f_6567(C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_6567,1,t1);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_retrieve2(lf[134],C_text("main#quote-option"));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6578,a[2]=t1,a[3]=t4,a[4]=t6,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* csc.scm:933: scheme#append */
t8=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_retrieve2(lf[116],C_text("main#compilation-optimization-options"));
av2[3]=C_retrieve2(lf[113],C_text("main#compile-options"));
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k6576 in main#compiler-options in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_ccall f_6578(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6578,2,av);}
a=C_alloc(11);
t2=C_i_check_list_2(t1,lf[135]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6584,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6586,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6586(t7,t3,t1);}

/* k6582 in k6576 in main#compiler-options in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in ... */
static void C_ccall f_6584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6584,2,av);}
/* csc.scm:931: chicken.string#string-intersperse */
t2=C_fast_retrieve(lf[136]);{
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

/* map-loop1432 in k6576 in main#compiler-options in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in ... */
static void C_fcall f_6586(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6586,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6611,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:932: g1438 */
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

/* k6609 in map-loop1432 in k6576 in main#compiler-options in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_6611(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6611,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6586(t6,((C_word*)t0)[5],t5);}

/* k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in ... */
static void C_ccall f_6625(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6625,2,av);}
a=C_alloc(16);
t2=C_mutate(&lf[91] /* (set! main#object-files ...) */,t1);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_retrieve2(lf[53],C_text("main#quotewrap"));
t8=C_retrieve2(lf[91],C_text("main#object-files"));
t9=C_i_check_list_2(C_retrieve2(lf[91],C_text("main#object-files")),lf[135]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6634,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6770,a[2]=t5,a[3]=t12,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_6770(t14,t10,C_retrieve2(lf[91],C_text("main#object-files")));}

/* k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_ccall f_6634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6634,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6637,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:944: quotewrap */
t4=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[119],C_text("main#target-filename"));
f_3834(3,av2);}}

/* k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_6637(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_6637,2,av);}
a=C_alloc(21);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6640,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6735,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6739,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(C_truep(C_retrieve2(lf[95],C_text("main#cpp-mode")))?C_retrieve2(lf[64],C_text("main#c++-linker")):C_retrieve2(lf[63],C_text("main#linker")));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6747,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6755,a[2]=t8,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6768,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:952: quotewrap */
t11=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=C_retrieve2(lf[119],C_text("main#target-filename"));
f_3834(3,av2);}}

/* k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_ccall f_6640(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6640,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6643,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(C_truep(C_retrieve2(lf[34],C_text("main#osx")))?C_retrieve2(lf[52],C_text("main#host-mode")):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6684,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6694,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6698,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_POSTINSTALL_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6643(2,av2);}}}

/* k6641 in k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in ... */
static void C_ccall f_6643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6643,2,av);}
a=C_alloc(4);
if(C_truep(C_retrieve2(lf[121],C_text("main#keep-files")))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_retrieve2(lf[164],C_text("main#$delete-file"));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6649,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:973: scheme#append */
t4=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[92],C_text("main#generated-object-files"));
av2[3]=C_retrieve2(lf[93],C_text("main#transient-link-files"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k6647 in k6641 in k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in ... */
static void C_ccall f_6649(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6649,2,av);}
a=C_alloc(6);
t2=C_i_check_list_2(t1,lf[176]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6657,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_6657(t6,((C_word*)t0)[3],t1);}

/* for-each-loop1494 in k6647 in k6641 in k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in ... */
static void C_fcall f_6657(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6657,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6667,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:972: g1495 */
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

/* k6665 in for-each-loop1494 in k6647 in k6641 in k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in ... */
static void C_ccall f_6667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6667,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6657(t3,((C_word*)t0)[4],t2);}

/* k6682 in k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in ... */
static void C_ccall f_6684(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6684,2,av);}
a=C_alloc(4);
if(C_truep(C_retrieve2(lf[103],C_text("main#gui")))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7387,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1090: chicken.base#open-output-string */
t5=C_fast_retrieve(lf[181]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_6643(2,av2);}}}

/* k6692 in k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in ... */
static void C_ccall f_6694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6694,2,av);}
/* csc.scm:956: command */
f_7351(((C_word*)t0)[2],t1);}

/* k6696 in k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in ... */
static void C_ccall f_6698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6698,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6702,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:958: libchicken */
f_3905(t3);}

/* k6700 in k6696 in k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in ... */
static void C_ccall f_6702(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6702,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6706,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6710,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6730,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:960: libchicken */
f_3905(t5);}

/* k6704 in k6700 in k6696 in k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in ... */
static void C_ccall f_6706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_6706,2,av);}
/* csc.scm:957: scheme#string-append */
t2=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[182];
av2[4]=((C_word*)t0)[4];
av2[5]=lf[183];
av2[6]=t1;
av2[7]=lf[184];
av2[8]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(9,av2);}}

/* k6708 in k6700 in k6696 in k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in ... */
static void C_ccall f_6710(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6710,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6713,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[104],C_text("main#deployed")))){
/* csc.scm:962: chicken.pathname#make-pathname */
t4=C_fast_retrieve(lf[132]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[185];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6723,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
t5=C_retrieve2(lf[17],C_text("main#host-libdir"));
t6=C_retrieve2(lf[17],C_text("main#host-libdir"));
/* csc.scm:963: chicken.pathname#make-pathname */
t7=C_fast_retrieve(lf[132]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=C_retrieve2(lf[17],C_text("main#host-libdir"));
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_TARGET_RUN_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}}

/* k6711 in k6708 in k6700 in k6696 in k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in ... */
static void C_ccall f_6713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6713,2,av);}
/* csc.scm:959: quotewrap */
t2=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_3834(3,av2);}}

/* k6721 in k6708 in k6700 in k6696 in k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in ... */
static void C_ccall f_6723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6723,2,av);}
/* csc.scm:963: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[132]);{
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

/* k6728 in k6700 in k6696 in k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in ... */
static void C_ccall f_6730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6730,2,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[186]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[186]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[187];
tp(4,av2);}}

/* k6733 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_ccall f_6735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6735,2,av);}
/* csc.scm:946: command */
f_7351(((C_word*)t0)[2],t1);}

/* k6737 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_ccall f_6739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6739,2,av);}
/* csc.scm:947: chicken.string#string-intersperse */
t2=C_fast_retrieve(lf[136]);{
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

/* k6745 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_ccall f_6747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6747,2,av);}
a=C_alloc(3);
/* csc.scm:948: cons* */
f_2909(((C_word*)t0)[2],((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* k6753 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_ccall f_6755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6755,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6759,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:953: linker-options */
f_7054(t3);}

/* k6757 in k6753 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in ... */
static void C_ccall f_6759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6759,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6763,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:954: linker-libraries */
f_7107(t3);}

/* k6761 in k6757 in k6753 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in ... */
static void C_ccall f_6763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6763,2,av);}
a=C_alloc(9);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
/* csc.scm:950: scheme#append */
t3=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6766 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_ccall f_6768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6768,2,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[186]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[186]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[188];
av2[3]=t1;
tp(4,av2);}}

/* map-loop1460 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_fcall f_6770(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6770,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6795,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:943: g1466 */
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

/* k6793 in map-loop1460 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_6795(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6795,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6770(t6,((C_word*)t0)[5],t5);}

/* k6809 in k6947 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_6811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6811,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6814,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fast_retrieve(lf[130]))){
/* csc.scm:980: chicken.string#string-chomp */
t3=C_fast_retrieve(lf[196]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[197];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t1;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8467,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:981: chicken.pathname#make-pathname */
t5=C_fast_retrieve(lf[132]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_FALSE;
av2[3]=t3;
av2[4]=lf[195];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k6812 in k6809 in k6947 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_ccall f_6814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6814,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6821,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:981: chicken.pathname#make-pathname */
t3=C_fast_retrieve(lf[132]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_FALSE;
av2[3]=t1;
av2[4]=lf[195];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6819 in k6812 in k6809 in k6947 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in ... */
static void C_ccall f_6821(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6821,2,av);}
/* csc.scm:981: chicken.file#file-exists? */
t2=C_fast_retrieve(lf[131]);{
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

/* k6833 in map-loop1523 in k6848 in k6973 in k6950 in k6947 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in ... */
static void C_ccall f_6835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6835,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* csc.scm:985: stop */
f_3785(((C_word*)t0)[2],lf[192],C_a_i_list(&a,1,((C_word*)t0)[3]));}}

/* k6848 in k6973 in k6950 in k6947 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in ... */
static void C_ccall f_6850(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6850,2,av);}
a=C_alloc(7);
t2=C_i_check_list_2(t1,lf[135]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6858,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_6858(t6,((C_word*)t0)[4],t1);}

/* map-loop1523 in k6848 in k6973 in k6950 in k6947 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in ... */
static void C_fcall f_6858(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6858,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6883,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6835,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:984: find-object-file */
t8=C_retrieve2(lf[127],C_text("main#find-object-file"));{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
f_4201(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6881 in map-loop1523 in k6848 in k6973 in k6950 in k6947 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in ... */
static void C_ccall f_6883(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6883,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6858(t6,((C_word*)t0)[5],t5);}

/* map-loop1546 in k6973 in k6950 in k6947 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in ... */
static void C_fcall f_6892(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6892,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6917,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:986: g1552 */
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

/* k6915 in map-loop1546 in k6973 in k6950 in k6947 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in ... */
static void C_ccall f_6917(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6917,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6892(t6,((C_word*)t0)[5],t5);}

/* loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in ... */
static void C_fcall f_6929(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6929,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6943,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:989: scheme#reverse */
t5=*((C_word*)lf[190]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=C_retrieve2(lf[126],C_text("main#static"));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6949,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[126],C_text("main#static")))){
t6=t5;
f_6949(t6,C_retrieve2(lf[126],C_text("main#static")));}
else{
t6=C_i_car(t2);
t7=C_i_member(t6,((C_word*)t0)[3]);
t8=t5;
f_6949(t8,C_i_not(t7));}}}

/* k6941 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_ccall f_6943(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6943,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=*((C_word*)lf[189]+1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3046,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3046(t7,t2,t1);}

/* k6947 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in ... */
static void C_fcall f_6949(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_6949,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6952,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[5]);
t4=t2;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6811,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:978: chicken.pathname#pathname-strip-extension */
t6=C_fast_retrieve(lf[198]);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[5]);
t3=((C_word*)t0)[5];
t4=C_u_i_car(t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
/* csc.scm:996: loop */
t6=((C_word*)((C_word*)t0)[2])[1];
f_6929(t6,((C_word*)t0)[3],t2,t5);}}

/* k6950 in k6947 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_6952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6952,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6955,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6975,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:993: scheme#with-input-from-file */
t4=C_fast_retrieve(lf[193]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
av2[3]=*((C_word*)lf[194]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
f_6955(2,av2);}}}

/* k6953 in k6950 in k6947 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_ccall f_6955(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6955,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6962,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[5];
t5=C_u_i_cdr(t4);
/* csc.scm:995: scheme#append */
t6=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t2;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k6960 in k6953 in k6950 in k6947 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in ... */
static void C_ccall f_6962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6962,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6966,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:995: scheme#append */
t4=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6964 in k6960 in k6953 in k6950 in k6947 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in ... */
static void C_ccall f_6966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6966,2,av);}
/* csc.scm:995: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6929(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k6973 in k6950 in k6947 in loop in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_ccall f_6975(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_6975,2,av);}
a=C_alloc(23);
t2=((C_word*)t0)[2];
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=C_fast_retrieve(lf[191]);
t12=C_i_check_list_2(t1,lf[135]);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6850,a[2]=t5,a[3]=t6,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6892,a[2]=t9,a[3]=t15,a[4]=t11,a[5]=t10,tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_6892(t17,t13,t1);}

/* main#linker-options in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in ... */
static void C_fcall f_7054(C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_7054,1,t1);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_retrieve2(lf[134],C_text("main#quote-option"));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7065,a[2]=t1,a[3]=t4,a[4]=t6,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* csc.scm:1010: scheme#append */
t8=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_retrieve2(lf[117],C_text("main#linking-optimization-options"));
av2[3]=C_retrieve2(lf[118],C_text("main#link-options"));
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k7063 in main#linker-options in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_ccall f_7065(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7065,2,av);}
a=C_alloc(11);
t2=C_i_check_list_2(t1,lf[135]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7071,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7073,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_7073(t7,t3,t1);}

/* k7069 in k7063 in main#linker-options in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in ... */
static void C_ccall f_7071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7071,2,av);}
/* csc.scm:1008: chicken.string#string-intersperse */
t2=C_fast_retrieve(lf[136]);{
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

/* map-loop1616 in k7063 in main#linker-options in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in ... */
static void C_fcall f_7073(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7073,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7098,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:1009: g1622 */
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

/* k7096 in map-loop1616 in k7063 in main#linker-options in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_7098(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7098,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7073(t6,((C_word*)t0)[5],t5);}

/* main#linker-libraries in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in ... */
static void C_fcall f_7107(C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_7107,1,t1);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7115,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7119,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[126],C_text("main#static")))){
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4032,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3948,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:128: libchicken */
f_3905(t7);}
else{
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4012,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4016,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
/* ##sys#peek-c-string */
t7=*((C_word*)lf[49]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_NAME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t7=*((C_word*)lf[49]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIB_NAME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}}

/* k7113 in main#linker-libraries in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_ccall f_7115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7115,2,av);}
/* csc.scm:1013: chicken.string#string-intersperse */
t2=C_fast_retrieve(lf[136]);{
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

/* k7117 in main#linker-libraries in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_ccall f_7119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7119,2,av);}
a=C_alloc(3);
t2=(C_truep(C_retrieve2(lf[126],C_text("main#static")))?C_a_i_list1(&a,1,C_retrieve2(lf[108],C_text("main#extra-libraries"))):C_a_i_list1(&a,1,C_retrieve2(lf[109],C_text("main#extra-shared-libraries"))));
/* csc.scm:1014: scheme#append */
t3=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k7140 in k7250 in k7244 in main#quote-option in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_7142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7142,2,av);}
a=C_alloc(3);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7152,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1039: chicken.string#string-translate* */
t3=C_fast_retrieve(lf[146]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[147];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=t1;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7150 in k7140 in k7250 in k7244 in main#quote-option in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_7152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7152,2,av);}
/* csc.scm:1039: scheme#string-append */
t2=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[144];
av2[3]=t1;
av2[4]=lf[145];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7154 in k7250 in k7244 in main#quote-option in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_7156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7156,2,av);}
/* list->string */
t2=C_fast_retrieve(lf[148]);{
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

/* k7158 in k7250 in k7244 in main#quote-option in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_7160(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7160,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7162,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_7162(t5,((C_word*)t0)[3],t1);}

/* fold in k7158 in k7250 in k7244 in main#quote-option in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_fcall f_7162(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_7162,3,t0,t1,t2);}
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
if(C_truep(C_i_memq(t4,C_retrieve2(lf[141],C_text("main#constant1644"))))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7185,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=t2;
t7=C_u_i_cdr(t6);
/* csc.scm:1034: fold */
t9=t5;
t10=t7;
t1=t9;
t2=t10;
goto loop;}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7190,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_u_i_char_whitespacep(t4))){
t6=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t7=t5;
f_7190(t7,t6);}
else{
t6=t5;
f_7190(t6,C_SCHEME_UNDEFINED);}}}}

/* k7183 in fold in k7158 in k7250 in k7244 in main#quote-option in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_ccall f_7185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7185,2,av);}
a=C_alloc(6);
/* csc.scm:1034: cons* */
f_2909(((C_word*)t0)[2],C_make_character(92),C_a_i_list(&a,2,((C_word*)t0)[3],t1));}

/* k7188 in fold in k7158 in k7250 in k7244 in main#quote-option in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_fcall f_7190(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_7190,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7197,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* csc.scm:1037: fold */
t5=((C_word*)((C_word*)t0)[5])[1];
f_7162(t5,t2,t4);}

/* k7195 in k7188 in fold in k7158 in k7250 in k7244 in main#quote-option in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in ... */
static void C_ccall f_7197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7197,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* main#string-any in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in ... */
static void C_fcall f_7205(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_7205,3,t1,t2,t3);}
a=C_alloc(8);
t4=C_i_string_length(t3);
t5=t4;
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7214,a[2]=t3,a[3]=t5,a[4]=t2,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_7214(t9,t1,C_fix(0));}

/* lp in main#string-any in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_fcall f_7214(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_7214,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_string_ref(((C_word*)t0)[2],t2);
t4=t2;
t5=C_a_i_fixnum_plus(&a,2,t4,C_fix(1));
if(C_truep(C_i_integer_equalp(t5,((C_word*)t0)[3]))){
/* csc.scm:1048: criteria */
t6=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t6;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7231,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1049: criteria */
t7=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}}

/* k7229 in lp in main#string-any in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in ... */
static void C_ccall f_7231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7231,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* csc.scm:1050: lp */
t2=((C_word*)((C_word*)t0)[3])[1];
f_7214(t2,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* main#quote-option in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in ... */
static void C_ccall f_7239(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7239,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7246,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7269,tmp=(C_word)a,a+=2,tmp);
/* csc.scm:1053: string-any */
f_7205(t3,t4,t2);}

/* k7244 in main#quote-option in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_ccall f_7246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7246,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7252,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7257,tmp=(C_word)a,a+=2,tmp);
/* csc.scm:1054: string-any */
f_7205(t2,t3,((C_word*)t0)[2]);}}

/* k7250 in k7244 in main#quote-option in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in ... */
static void C_ccall f_7252(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7252,2,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7142,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7156,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7160,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* string->list */
t9=C_fast_retrieve(lf[149]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a7256 in k7244 in main#quote-option in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in ... */
static void C_ccall f_7257(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7257,3,av);}
t3=C_u_i_char_whitespacep(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?t3:C_i_memq(t2,C_retrieve2(lf[141],C_text("main#constant1644"))));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a7268 in main#quote-option in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_ccall f_7269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7269,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_char_equalp(C_make_character(34),t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7278 in main#command in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_ccall f_7280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7280,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7283,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[120],C_text("main#verbose")))){
/* csc.scm:1070: chicken.base#print */
t4=*((C_word*)lf[157]+1);{
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
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_7283(2,av2);}}}

/* k7281 in k7278 in main#command in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in ... */
static void C_ccall f_7283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7283,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7286,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[102],C_text("main#dry-run")))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_fix(0);
f_7286(2,av2);}}
else{
/* csc.scm:1071: chicken.process#system */
t3=C_fast_retrieve(lf[156]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k7284 in k7281 in k7278 in main#command in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_7286(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7286,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7289,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(t2,C_fix(0));
if(C_truep(t4)){
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_7289(2,av2);}}
else{
t5=*((C_word*)lf[152]+1);
t6=*((C_word*)lf[152]+1);
t7=C_i_check_port_2(*((C_word*)lf[152]+1),C_fix(2),C_SCHEME_TRUE,lf[153]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7306,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csc.scm:1073: ##sys#print */
t9=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[155];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[152]+1);
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}

/* k7287 in k7284 in k7281 in k7278 in main#command in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_7289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7289,2,av);}
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
t3=lf[150] /* main#last-exit-code */ =C_fix(0);;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_retrieve2(lf[150],C_text("main#last-exit-code"));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=lf[150] /* main#last-exit-code */ =C_fix(1);;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_retrieve2(lf[150],C_text("main#last-exit-code"));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7304 in k7284 in k7281 in k7278 in main#command in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_7306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7306,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7309,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1073: ##sys#print */
t3=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7307 in k7304 in k7284 in k7281 in k7278 in main#command in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in ... */
static void C_ccall f_7309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7309,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7312,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1073: ##sys#print */
t3=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[154];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7310 in k7307 in k7304 in k7284 in k7281 in k7278 in main#command in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in ... */
static void C_ccall f_7312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_7312,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7315,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1073: ##sys#print */
t3=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7313 in k7310 in k7307 in k7304 in k7284 in k7281 in k7278 in main#command in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in ... */
static void C_ccall f_7315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7315,2,av);}
/* csc.scm:1073: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[45]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k7329 in main#command in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_ccall f_7331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7331,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7335,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1063: g1700 */
t3=t2;
f_7335(t3,((C_word*)t0)[3],t1);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
f_7280(2,av2);}}}

/* g1700 in k7329 in main#command in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in ... */
static void C_fcall f_7335(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_7335,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7343,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1068: chicken.process#qs */
t4=C_fast_retrieve(lf[54]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7341 in g1700 in k7329 in main#command in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_7343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7343,2,av);}
/* csc.scm:1067: scheme#string-append */
t2=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[160];
av2[3]=t1;
av2[4]=lf[161];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* main#command in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in ... */
static void C_fcall f_7351(C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_7351,2,t1,t2);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7359,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=t3;
t5=t2;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7280,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_mk_bool(C_WINDOWS_SHELL))){
/* csc.scm:1064: scheme#string-append */
t7=*((C_word*)lf[78]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[158];
av2[3]=t5;
av2[4]=lf[159];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7331,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[34],C_text("main#osx")))){
/* csc.scm:1065: chicken.process-context#get-environment-variable */
t8=C_fast_retrieve(lf[162]);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[163];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_7331(2,av2);}}}}

/* k7357 in main#command in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_ccall f_7359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7359,2,av);}
if(C_truep(C_i_zerop(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* csc.scm:1080: chicken.base#exit */
t2=C_fast_retrieve(lf[44]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[150],C_text("main#last-exit-code"));
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* main#$delete-file in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in ... */
static void C_ccall f_7364(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7364,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7368,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[120],C_text("main#verbose")))){
/* csc.scm:1084: chicken.base#print */
t4=*((C_word*)lf[157]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[166];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[102],C_text("main#dry-run")))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* csc.scm:1085: chicken.file#delete-file */
t4=C_fast_retrieve(lf[165]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}}

/* k7366 in main#$delete-file in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_ccall f_7368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7368,2,av);}
if(C_truep(C_retrieve2(lf[102],C_text("main#dry-run")))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* csc.scm:1085: chicken.file#delete-file */
t2=C_fast_retrieve(lf[165]);{
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

/* k7385 in k6682 in k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in ... */
static void C_ccall f_7387(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7387,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_fix(2),C_SCHEME_TRUE,lf[177]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7393,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:1090: ##sys#print */
t6=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[180];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7391 in k7385 in k6682 in k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in ... */
static void C_ccall f_7393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7393,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7396,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7417,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1091: quotewrap */
t4=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
f_3834(3,av2);}}

/* k7394 in k7391 in k7385 in k6682 in k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in ... */
static void C_ccall f_7396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7396,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7399,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1090: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[45]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k7397 in k7394 in k7391 in k7385 in k6682 in k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in ... */
static void C_ccall f_7399(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7399,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7402,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7409,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7413,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1092: chicken.pathname#make-pathname */
t5=C_fast_retrieve(lf[132]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_retrieve2(lf[58],C_text("main#home"));
av2[3]=lf[179];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k7400 in k7397 in k7394 in k7391 in k7385 in k6682 in k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in ... */
static void C_ccall f_7402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7402,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7405,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1090: chicken.base#get-output-string */
t3=C_fast_retrieve(lf[178]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7403 in k7400 in k7397 in k7394 in k7391 in k7385 in k6682 in k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in ... */
static void C_ccall f_7405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7405,2,av);}
/* csc.scm:1089: command */
f_7351(((C_word*)t0)[2],t1);}

/* k7407 in k7397 in k7394 in k7391 in k7385 in k6682 in k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in ... */
static void C_ccall f_7409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7409,2,av);}
/* csc.scm:1090: ##sys#print */
t2=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7411 in k7397 in k7394 in k7391 in k7385 in k6682 in k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in ... */
static void C_ccall f_7413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7413,2,av);}
/* csc.scm:1092: quotewrap */
t2=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_3834(3,av2);}}

/* k7415 in k7391 in k7385 in k6682 in k6638 in k6635 in k6632 in k6623 in k4395 in k4389 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in ... */
static void C_ccall f_7417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7417,2,av);}
/* csc.scm:1090: ##sys#print */
t2=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7421 in k6533 in k6518 in k6515 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in ... */
static void C_ccall f_7423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7423,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7428,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1096: scheme#with-output-to-file */
t3=C_fast_retrieve(lf[215]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a7427 in k7421 in k6533 in k6518 in k6515 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in ... */
static void C_ccall f_7428(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7428,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7436,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,lf[212],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_cons(&a,2,lf[213],t4);
/* csc.scm:28: ##sys#print-to-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[214]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[214]+1);
av2[1]=t2;
av2[2]=t5;
tp(3,av2);}}

/* k7434 in a7427 in k7421 in k6533 in k6518 in k6515 in k6379 in k4383 in k4380 in k4377 in k4374 in k4370 in loop in k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in ... */
static void C_ccall f_7436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7436,2,av);}
/* csc.scm:1098: chicken.base#print */
t2=*((C_word*)lf[157]+1);{
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

/* k7452 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in ... */
static void C_ccall f_7454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7454,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7460,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.base#implicit-exit-handler */
t3=C_fast_retrieve(lf[167]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7458 in k7452 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_ccall f_7460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7460,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7462 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in ... */
static void C_ccall f_7464(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7464,2,av);}
a=C_alloc(25);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4285,tmp=(C_word)a,a+=2,tmp));
t11=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4292,tmp=(C_word)a,a+=2,tmp));
t12=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4315,tmp=(C_word)a,a+=2,tmp));
t13=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4345,tmp=(C_word)a,a+=2,tmp));
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4361,a[2]=t9,a[3]=t15,a[4]=t3,a[5]=t5,a[6]=t7,tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_4361(t17,((C_word*)t0)[2],t1);}

/* k7466 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in ... */
static void C_ccall f_7468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7468,2,av);}
/* csc.scm:1120: scheme#append */
t2=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[50],C_text("main#arguments"));
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k7470 in k4049 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in ... */
static void C_ccall f_7472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7472,2,av);}
if(C_truep(t1)){
t2=t1;
/* csc.scm:1121: chicken.string#string-split */
t3=C_fast_retrieve(lf[240]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* csc.scm:1121: chicken.string#string-split */
t2=C_fast_retrieve(lf[240]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[416];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k7477 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in ... */
static void C_fcall f_7479(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_7479,2,t0,t1);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7483,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:244: chicken.process-context#get-environment-variable */
t4=C_fast_retrieve(lf[162]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[420];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7481 in k7477 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in ... */
static void C_ccall f_7483(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7483,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7486,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
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
t13=C_retrieve2(lf[53],C_text("main#quotewrap"));
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7502,a[2]=t7,a[3]=t8,a[4]=t3,a[5]=t11,a[6]=t13,a[7]=t12,tmp=(C_word)a,a+=8,tmp);
/* csc.scm:246: chicken.string#string-split */
t15=C_fast_retrieve(lf[240]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t15;
av2[1]=t14;
av2[2]=t4;
av2[3]=lf[419];
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}
else{
/* csc.scm:242: scheme#append */
t3=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k7484 in k7481 in k7477 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_ccall f_7486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7486,2,av);}
/* csc.scm:242: scheme#append */
t2=*((C_word*)lf[137]+1);{
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

/* k7500 in k7481 in k7477 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in ... */
static void C_ccall f_7502(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7502,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7505,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7547,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_7547(t6,t2,t1);}

/* k7503 in k7500 in k7481 in k7477 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in ... */
static void C_ccall f_7505(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7505,2,av);}
a=C_alloc(7);
t2=C_i_check_list_2(t1,lf[135]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7513,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_7513(t6,((C_word*)t0)[4],t1);}

/* map-loop857 in k7503 in k7500 in k7481 in k7477 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_fcall f_7513(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7513,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7538,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:246: g880 */
t5=*((C_word*)lf[78]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[418];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7536 in map-loop857 in k7503 in k7500 in k7481 in k7477 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in ... */
static void C_ccall f_7538(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7538,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7513(t6,((C_word*)t0)[5],t5);}

/* map-loop884 in k7500 in k7481 in k7477 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in ... */
static void C_fcall f_7547(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7547,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7572,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:246: g890 */
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

/* k7570 in map-loop884 in k7500 in k7481 in k7477 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in ... */
static void C_ccall f_7572(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7572,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7547(t6,((C_word*)t0)[5],t5);}

/* k7587 in k3996 in k3967 in k3960 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in ... */
static void C_ccall f_7589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7589,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_7479(t2,C_a_i_list1(&a,1,t1));}

/* k7607 in k3955 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in ... */
static void C_ccall f_7609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7609,2,av);}
/* csc.scm:142: chicken.string#string-split */
t2=C_fast_retrieve(lf[240]);{
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

/* k7611 in k3950 in k3900 in k3895 in k3882 in k3878 in k3874 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in ... */
static void C_ccall f_7613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7613,2,av);}
/* csc.scm:137: chicken.string#string-split */
t2=C_fast_retrieve(lf[240]);{
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

/* k7636 in k3870 in k3866 in k3862 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in ... */
static void C_ccall f_7638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7638,2,av);}
/* csc.scm:102: quotewrap */
t2=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_3834(3,av2);}}

/* k7654 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in ... */
static void C_ccall f_7656(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7656,2,av);}
/* csc.scm:98: quotewrap */
t2=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_3834(3,av2);}}

/* k7658 in k3814 in k3810 in k3780 in k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in ... */
static void C_ccall f_7660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7660,2,av);}
/* csc.scm:98: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[132]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[18],C_text("main#host-bindir"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k7665 in k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in ... */
static void C_ccall f_7667(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7667,2,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[37]);
t3=lf[38] /* main#aix */ =t2;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3782,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:73: chicken.platform#software-version */
t5=C_fast_retrieve(lf[247]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7669 in k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in ... */
static void C_ccall f_7671(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7671,2,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[35]);
t3=lf[36] /* main#cygwin */ =t2;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7667,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:70: chicken.platform#build-platform */
t5=C_fast_retrieve(lf[372]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7673 in k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in ... */
static void C_ccall f_7675(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7675,2,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[33]);
t3=lf[34] /* main#osx */ =t2;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7671,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:69: chicken.platform#software-version */
t5=C_fast_retrieve(lf[247]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7677 in k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in ... */
static void C_ccall f_7679(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7679,2,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[31]);
t3=lf[32] /* main#mingw */ =t2;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7675,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:68: chicken.platform#software-version */
t5=C_fast_retrieve(lf[247]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7681 in k3754 in k2472 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in ... */
static void C_ccall f_7683(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7683,2,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[15]);
t3=lf[30] /* main#windows */ =t2;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7679,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:67: chicken.platform#software-version */
t5=C_fast_retrieve(lf[247]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7692 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in ... */
static void C_ccall f_7694(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7694,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7697,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t1;
t4=C_a_i_list2(&a,2,t3,lf[429]);
/* egg-environment.scm:118: chicken.pathname#make-pathname */
t5=C_fast_retrieve(lf[132]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
av2[2]=t4;
av2[3]=lf[430];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7700,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7710,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:119: chicken.process-context#get-environment-variable */
t5=C_fast_retrieve(lf[162]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[432];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k7695 in k7692 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in ... */
static void C_ccall f_7697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7697,2,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,t1,lf[429]);
/* egg-environment.scm:118: chicken.pathname#make-pathname */
t3=C_fast_retrieve(lf[132]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=lf[430];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k7698 in k7692 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in ... */
static void C_ccall f_7700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7700,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=t1;
t3=C_a_i_list2(&a,2,t2,lf[429]);
/* egg-environment.scm:118: chicken.pathname#make-pathname */
t4=C_fast_retrieve(lf[132]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
av2[3]=lf[430];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
/* egg-environment.scm:120: chicken.process-context#current-directory */
t2=C_fast_retrieve(lf[431]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k7708 in k7692 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in ... */
static void C_ccall f_7710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7710,2,av);}
/* egg-environment.scm:119: probe-dir */
f_2457(((C_word*)t0)[2],t1);}

/* k7712 in k2469 in k2400 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in ... */
static void C_ccall f_7714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7714,2,av);}
/* egg-environment.scm:118: probe-dir */
f_2457(((C_word*)t0)[2],t1);}

/* k7716 in k2396 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in k2316 in ... */
static void C_ccall f_7718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7718,2,av);}
/* egg-environment.scm:94: scheme#string-append */
t2=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[11],C_text("main#default-runlibdir"));
av2[3]=lf[435];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7721 in k2392 in k2388 in k2384 in k2380 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in k2316 in k2312 in ... */
static void C_ccall f_7723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7723,2,av);}
/* egg-environment.scm:91: scheme#string-append */
t2=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[10],C_text("main#default-libdir"));
av2[3]=lf[437];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7726 in k2348 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2270 in k2264 in ... */
static void C_ccall f_7728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7728,2,av);}
/* egg-environment.scm:77: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[132]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[13],C_text("main#default-bindir"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k7730 in k2344 in k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2270 in k2264 in k2261 in ... */
static void C_ccall f_7732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7732,2,av);}
/* egg-environment.scm:74: scheme#string-append */
t2=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[13],C_text("main#default-bindir"));
av2[3]=lf[438];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7734 in k2340 in k2336 in k7741 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2270 in k2264 in k2261 in k2258 in ... */
static void C_ccall f_7736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7736,2,av);}
/* egg-environment.scm:71: scheme#string-append */
t2=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[13],C_text("main#default-bindir"));
av2[3]=lf[439];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7741 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2270 in k2264 in k2261 in k2258 in k2255 in k2252 in k2249 in ... */
static void C_ccall f_7743(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7743,2,av);}
a=C_alloc(6);
t2=C_eqp(t1,lf[15]);
t3=(C_truep(t2)?C_mk_bool(C_WINDOWS_SHELL):lf[16]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2338,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[49]+1);{
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
if(C_unlikely(!C_demand_2(2195))){
C_save(t1);
C_rereclaim2(2195*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,442);
lf[0]=C_h_intern(&lf[0],5, C_text("main#"));
lf[15]=C_h_intern(&lf[15],7, C_text("windows"));
lf[16]=C_h_intern(&lf[16],4, C_text("unix"));
lf[28]=C_h_intern(&lf[28],30, C_text("chicken.file#directory-exists\077"));
lf[31]=C_h_intern(&lf[31],7, C_text("mingw32"));
lf[33]=C_h_intern(&lf[33],6, C_text("macosx"));
lf[35]=C_h_intern(&lf[35],6, C_text("cygwin"));
lf[37]=C_h_intern(&lf[37],3, C_text("aix"));
lf[40]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\005linux\376\003\000\000\002\376\001\000\000\006netbsd\376\003\000\000\002\376\001\000\000\007freebsd\376\003\000\000\002\376\001\000\000\007solaris\376\003\000\000\002\376\001\000\000\007openb"
"sd\376\003\000\000\002\376\001\000\000\004hurd\376\003\000\000\002\376\001\000\000\005haiku\376\377\016"));
lf[42]=C_h_intern(&lf[42],18, C_text("\003sysstandard-error"));
lf[43]=C_h_intern(&lf[43],7, C_text("fprintf"));
lf[44]=C_h_intern(&lf[44],17, C_text("chicken.base#exit"));
lf[45]=C_h_intern(&lf[45],16, C_text("\003syswrite-char-0"));
lf[46]=C_h_intern(&lf[46],22, C_text("chicken.format#fprintf"));
lf[47]=C_h_intern(&lf[47],9, C_text("\003sysprint"));
lf[48]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002: "));
lf[49]=C_h_intern(&lf[49],17, C_text("\003syspeek-c-string"));
lf[51]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-host"));
lf[54]=C_h_intern(&lf[54],18, C_text("chicken.process#qs"));
lf[55]=C_h_intern(&lf[55],31, C_text("chicken.string#string-translate"));
lf[56]=C_h_intern(&lf[56],35, C_text("chicken.pathname#normalize-pathname"));
lf[65]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003obj"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001o"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001a"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[73]=C_h_intern(&lf[73],26, C_text("\003sysload-dynamic-extension"));
lf[78]=C_h_intern(&lf[78],20, C_text("scheme#string-append"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003lib"));
lf[111]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\014/usr/include\376\003\000\000\002\376B\000\000\000\376\377\016"));
lf[128]=C_h_intern(&lf[128],22, C_text("chicken.load#find-file"));
lf[129]=C_h_intern(&lf[129],32, C_text("chicken.platform#repository-path"));
lf[130]=C_h_intern(&lf[130],14, C_text("\003syssetup-mode"));
lf[131]=C_h_intern(&lf[131],25, C_text("chicken.file#file-exists\077"));
lf[132]=C_h_intern(&lf[132],30, C_text("chicken.pathname#make-pathname"));
lf[135]=C_h_intern(&lf[135],3, C_text("map"));
lf[136]=C_h_intern(&lf[136],33, C_text("chicken.string#string-intersperse"));
lf[137]=C_h_intern(&lf[137],13, C_text("scheme#append"));
lf[140]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-l"));
lf[142]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000#\376\377\016"));
lf[144]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\042"));
lf[145]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\042"));
lf[146]=C_h_intern(&lf[146],32, C_text("chicken.string#string-translate\052"));
lf[147]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376B\000\000\001\042\376B\000\000\002\134\042\376\377\016"));
lf[148]=C_h_intern(&lf[148],16, C_text("\003syslist->string"));
lf[149]=C_h_intern(&lf[149],16, C_text("\003sysstring->list"));
lf[152]=C_h_intern(&lf[152],19, C_text("\003sysstandard-output"));
lf[153]=C_h_intern(&lf[153],6, C_text("printf"));
lf[154]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002: "));
lf[155]=C_decode_literal(C_heaptop,C_text("\376B\000\000;\012Error: shell command terminated with non-zero exit status "));
lf[156]=C_h_intern(&lf[156],22, C_text("chicken.process#system"));
lf[157]=C_h_intern(&lf[157],18, C_text("chicken.base#print"));
lf[158]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\042"));
lf[159]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\042"));
lf[160]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037/usr/bin/env DYLD_LIBRARY_PATH="));
lf[161]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001 "));
lf[162]=C_h_intern(&lf[162],48, C_text("chicken.process-context#get-environment-variable"));
lf[163]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021DYLD_LIBRARY_PATH"));
lf[165]=C_h_intern(&lf[165],24, C_text("chicken.file#delete-file"));
lf[166]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003rm "));
lf[167]=C_h_intern(&lf[167],34, C_text("chicken.base#implicit-exit-handler"));
lf[168]=C_decode_literal(C_heaptop,C_text("\376B\000\000#not enough arguments to option `~A\047"));
lf[169]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\013-dynamiclib\376\377\016"));
lf[170]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\007-bundle\376\003\000\000\002\376B\000\000\034-headerpad_max_install_names\376\377\016"));
lf[171]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\007-shared\376\377\016"));
lf[172]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\012-DC_SHARED\376\377\016"));
lf[173]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-feature"));
lf[174]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026chicken-compile-shared"));
lf[175]=C_h_intern(&lf[175],43, C_text("chicken.pathname#pathname-replace-extension"));
lf[176]=C_h_intern(&lf[176],8, C_text("for-each"));
lf[177]=C_h_intern(&lf[177],6, C_text("format"));
lf[178]=C_h_intern(&lf[178],30, C_text("chicken.base#get-output-string"));
lf[179]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005mac.r"));
lf[180]=C_decode_literal(C_heaptop,C_text("\376B\000\000 /Developer/Tools/Rez -t APPL -o "));
lf[181]=C_h_intern(&lf[181],31, C_text("chicken.base#open-output-string"));
lf[182]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011 -change "));
lf[183]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007.dylib "));
lf[184]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001 "));
lf[185]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020@executable_path"));
lf[186]=C_h_intern(&lf[186],17, C_text("\003sysstring-append"));
lf[187]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006.dylib"));
lf[188]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003-o "));
lf[189]=C_h_intern(&lf[189],15, C_text("scheme#string=\077"));
lf[190]=C_h_intern(&lf[190],14, C_text("scheme#reverse"));
lf[191]=C_h_intern(&lf[191],23, C_text("chicken.string#->string"));
lf[192]=C_decode_literal(C_heaptop,C_text("\376B\000\000#could not find linked extension: ~A"));
lf[193]=C_h_intern(&lf[193],27, C_text("scheme#with-input-from-file"));
lf[194]=C_h_intern(&lf[194],11, C_text("scheme#read"));
lf[195]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004link"));
lf[196]=C_h_intern(&lf[196],27, C_text("chicken.string#string-chomp"));
lf[197]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007.static"));
lf[198]=C_h_intern(&lf[198],41, C_text("chicken.pathname#pathname-strip-extension"));
lf[199]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004.old"));
lf[200]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004move"));
lf[201]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002mv"));
lf[202]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005.old\047"));
lf[203]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030\047 - renaming source to `"));
lf[204]=C_decode_literal(C_heaptop,C_text("\376B\000\0001Warning: output file will overwrite source file `"));
lf[205]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-c"));
lf[206]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003g++"));
lf[207]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022-Wno-write-strings"));
lf[208]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[209]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003-o "));
lf[210]=C_decode_literal(C_heaptop,C_text("\376B\000\000Pobject file generated from `~a\047 will overwrite explicitly given object file"
" `~a\047"));
lf[211]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[212]=C_decode_literal(C_heaptop,C_text("\376B\000\001\232\042\042 type=\042\042win32\042\042/>\134r\134n\042\012  \042  <ms_asmv2:trustInfo xmlns:ms_asmv2=\042\042urn:sche"
"mas-microsoft-com:asm.v2\042\042>\134r\134n\042\012  \042    <ms_asmv2:security>\134r\134n\042\012  \042      <ms_as"
"mv2:requestedPrivileges>\134r\134n\042\012  \042        <ms_asmv2:requestedExecutionLevel level"
"=\042\042asInvoker\042\042 uiAccess=\042\042false\042\042/>\134r\134n\042\012  \042      </ms_asmv2:requestedPrivileges"
">\134r\134n\042\012  \042    </ms_asmv2:security>\134r\134n\042\012  \042  </ms_asmv2:trustInfo>\134r\134n\042\012  \042</ass"
"embly>\134r\134n\042\012END"));
lf[213]=C_decode_literal(C_heaptop,C_text("\376B\000\001\0031 24 MOVEABLE PURE\012BEGIN\012  \042<\077xml version=\042\0421.0\042\042 encoding=\042\042UTF-8\042\042 standa"
"lone=\042\042yes\042\042\077>\134r\134n\042\012  \042<assembly xmlns=\042\042urn:schemas-microsoft-com:asm.v1\042\042 mani"
"festVersion=\042\0421.0\042\042>\134r\134n\042\012  \042  <assemblyIdentity version=\042\0421.0.0.0\042\042 processorAr"
"chitecture=\042\042\052\042\042 name=\042\042"));
lf[214]=C_h_intern(&lf[214],19, C_text("\003sysprint-to-string"));
lf[215]=C_h_intern(&lf[215],26, C_text("scheme#with-output-to-file"));
lf[216]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013generating "));
lf[217]=C_h_intern(&lf[217],30, C_text("chicken.pathname#pathname-file"));
lf[218]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002rc"));
lf[219]=C_h_intern(&lf[219],30, C_text("chicken.platform#software-type"));
lf[220]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031no source files specified"));
lf[221]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004link"));
lf[222]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001 "));
lf[223]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\003-:d\376\377\016"));
lf[224]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\010-feature\376\003\000\000\002\376B\000\000\025chicken-scheme-to-c++\376\377\016"));
lf[225]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\010-feature\376\003\000\000\002\376B\000\000\026chicken-scheme-to-objc\376\377\016"));
lf[226]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017-emit-link-file"));
lf[227]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004link"));
lf[228]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017-emit-link-file"));
lf[229]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\012-to-stdout\376\377\016"));
lf[230]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014-output-file"));
lf[231]=C_decode_literal(C_heaptop,C_text("\376B\000\000KC file generated from `~a\047 will overwrite explicitly given source file `~a\047"
));
lf[232]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003cpp"));
lf[233]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001m"));
lf[234]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001c"));
lf[235]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-dynamic"));
lf[236]=C_h_intern(&lf[236],5, C_text("foldr"));
lf[237]=C_h_intern(&lf[237],14, C_text("scheme#newline"));
lf[238]=C_h_intern(&lf[238],19, C_text("chicken.base#print\052"));
lf[239]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-L"));
lf[240]=C_h_intern(&lf[240],27, C_text("chicken.string#string-split"));
lf[241]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002:;"));
lf[242]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026CHICKEN_C_LIBRARY_PATH"));
lf[243]=C_h_intern(&lf[243],7, C_text("freebsd"));
lf[244]=C_h_intern(&lf[244],7, C_text("openbsd"));
lf[245]=C_h_intern(&lf[245],6, C_text("netbsd"));
lf[246]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015-Wl,-z,origin"));
lf[247]=C_h_intern(&lf[247],33, C_text("chicken.platform#software-version"));
lf[248]=C_h_intern(&lf[248],19, C_text("chicken.string#conc"));
lf[249]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006-Wl,-R"));
lf[250]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007$ORIGIN"));
lf[251]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-L"));
lf[252]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007-Wl,-R\042"));
lf[253]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\042"));
lf[254]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-L"));
lf[255]=C_h_intern(&lf[255],5, C_text("-help"));
lf[256]=C_h_intern(&lf[256],6, C_text("--help"));
lf[257]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003\047.\012"));
lf[258]=C_decode_literal(C_heaptop,C_text("\376B\000)\013\047 is a driver program for the CHICKEN compiler. Files given on the\012  comman"
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
"macros\012    -m -module NAME                wrap compiled code in a module\012\012  Tran"
"slation options:\012\012    -x  -explicit-use              do not use units `library\047 "
"and `eval\047 by\012                                    default\012    -P  -check-syntax "
"             stop compilation after macro-expansion\012    -A  -analyze-only       "
"       stop compilation after first analysis pass\012\012  Debugging options:\012\012    -w "
" -no-warnings               disable warnings\012    -d0 -d1 -d2 -d3 -debug-level NU"
"MBER\012                                   set level of available debugging informa"
"tion\012    -no-trace                      disable rudimentary debugging informatio"
"n\012    -debug-info                    enable debug-information in compiled code f"
"or use\012                                    with an external debugger\012    -profil"
"e                       executable emits profiling information \012    -accumulate-"
"profile            executable emits profiling information in\012                   "
"                 append mode\012    -profile-name FILENAME         name of the gene"
"rated profile information\012                                    file\012    -consult-"
"types-file FILENAME   load additional type database\012\012  Optimization options:\012\012  "
"  -O -O0 -O1 -O2 -O3 -O4 -O5 -optimize-level NUMBER\012                            "
"       enable certain sets of optimization options\012    -optimize-leaf-routines  "
"      enable leaf routine optimization\012    -no-usual-integrations         standa"
"rd procedures may be redefined\012    -u  -unsafe                    disable safety"
" checks\012    -local                         assume globals are only modified in c"
"urrent\012                                    file\012    -b  -block                  "
"   enable block-compilation\012    -disable-interrupts            disable interrupt"
"s in compiled code\012    -f  -fixnum-arithmetic         assume all numbers are fix"
"nums\012    -disable-stack-overflow-checks disables detection of stack-overflows\012  "
"  -inline                        enable inlining\012    -inline-limit LIMIT        "
"    set inlining threshold\012    -inline-global                 enable cross-modul"
"e inlining\012    -specialize                    perform type-based specialization "
"of primitive calls\012    -oi -emit-inline-file FILENAME generate file with globall"
"y inlinable\012                                    procedures (implies -inline -loc"
"al)\012    -consult-inline-file FILENAME  explicitly load inline file\012    -ot  -emi"
"t-types-file FILENAME write type-declaration information into file\012    -no-argc-"
"checks                disable argument count checks\012    -no-bound-checks        "
"       disable bound variable checks\012    -no-procedure-checks           disable "
"procedure call checks\012    -no-procedure-checks-for-usual-bindings\012              "
"                     disable procedure call checks only for usual\012              "
"                      bindings\012    -no-procedure-checks-for-toplevel-bindings\012  "
"                                 disable procedure call checks for toplevel\012    "
"                                bindings\012    -strict-types                  assu"
"me variable do not change their type\012    -clustering                    combine "
"groups of local procedures into dispatch\012                                     lo"
"op\012    -lfa2                          perform additional lightweight flow-analys"
"is pass\012\012  Configuration options:\012\012    -unit NAME                     compile fi"
"le as a library unit\012    -uses NAME                     declare library unit as "
"used.\012    -heap-size NUMBER              specifies heap-size of compiled executa"
"ble\012    -nursery NUMBER  -stack-size NUMBER\012                                   s"
"pecifies nursery size of compiled\012                                   executable\012"
"    -X -extend FILENAME            load file before compilation commences\012    -p"
"relude EXPRESSION            add expression to beginning of source file\012    -pos"
"tlude EXPRESSION           add expression to end of source file\012    -prologue FI"
"LENAME             include file before main source file\012    -epilogue FILENAME  "
"           include file after main source file\012\012    -e  -embedded               "
"   compile as embedded\012                                    (don\047t generate `main"
"()\047)\012    -gui                           compile as GUI application\012    -link NAM"
"E                     link extension with compiled executable\012                  "
"                  (implies -uses)\012    -R  -require-extension NAME    require ext"
"ension and import in compiled\012                                    code\012    -dll "
"-library                  compile multiple units into a dynamic\012                "
"                    library\012    -libdir DIRECTORY              override director"
"y for runtime library\012\012  Options to other passes:\012\012    -C OPTION                "
"      pass option to C compiler\012    -L OPTION                      pass option t"
"o linker\012    -I<DIR>                        pass \134\042-I<DIR>\134\042 to C compiler\012     "
"                               (add include path)\012    -L<DIR>                   "
"     pass \134\042-L<DIR>\134\042 to linker\012                                    (add library"
" path)\012    -k                             keep intermediate files\012    -c        "
"                     stop after compilation to object files\012    -t              "
"               stop after translation to C\012    -cc COMPILER                   se"
"lect other C compiler than the default\012    -cxx COMPILER                  select"
" other C++ compiler than the default\012    -ld COMPILER                   select o"
"ther linker than the default \012    -static                        link with stati"
"c CHICKEN libraries and\012                                    extensions (if possi"
"ble)\012    -F<DIR>                        pass \134\042-F<DIR>\134\042 to C compiler\012         "
"                           (add framework header path on Mac OS X)\012    -framewor"
"k NAME                passed to linker on Mac OS X\012    -rpath PATHNAME          "
"      add directory to runtime library search path\012    -Wl,...                  "
"      pass linker options\012    -strip                         strip resulting bin"
"ary\012\012  Inquiry options:\012\012    -home                          show home-directory "
"(where support files go)\012    -cflags                        show required C-comp"
"iler flags and exit\012    -ldflags                       show required linker flag"
"s and exit\012    -libs                          show required libraries and exit\012 "
"   -cc-name                       show name of default C compiler used\012    -cxx-"
"name                      show name of default C++ compiler used\012    -ld-name   "
"                    show name of default linker used\012    -dry-run               "
"        just show commands executed, don\047t run them\012                            "
"        (implies `-v\047)\012\012  Obscure options:\012\012    -debug MODES                   d"
"isplay debugging output for the given modes\012    -compiler PATHNAME             u"
"se other compiler than default `chicken\047\012    -raw                           do n"
"ot generate implicit init- and exit code\012    -emit-external-prototypes-first\012   "
"                                emit prototypes for callbacks before foreign\012   "
"                                 declarations\012    -ignore-repository            "
" do not refer to repository for extensions\012    -keep-shadowed-macros          do"
" not remove shadowed macro\012    -host                          compile for host w"
"hen configured for\012                                    cross-compiling\012    -priv"
"ate-repository            load extensions from executable path\012    -deployed    "
"                  link support file to be used from a deployed \012                "
"                    executable (sets `rpath\047 accordingly, if supported\012         "
"                           on this platform)\012    -no-elevation                  "
"embed manifest on Windows to supress elevation\012                                 "
"   warnings for programs named `install\047 or `setup\047\012\012  Options can be collapsed "
"if unambiguous, so\012\012    -vkfO\012\012  is the same as\012\012    -v -k -fixnum-arithmetic -o"
"ptimize\012\012  The contents of the environment variable CSC_OPTIONS are implicitly p"
"assed to\012  every invocation of `"));
lf[259]=C_decode_literal(C_heaptop,C_text("\376B\000\000! [OPTION ...] [FILENAME ...]\012\012  `"));
lf[260]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007Usage: "));
lf[261]=C_h_intern(&lf[261],8, C_text("-release"));
lf[262]=C_h_intern(&lf[262],32, C_text("chicken.platform#chicken-version"));
lf[263]=C_h_intern(&lf[263],8, C_text("-version"));
lf[264]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011 -version"));
lf[265]=C_h_intern(&lf[265],4, C_text("-c++"));
lf[266]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017-no-cpp-precomp"));
lf[267]=C_h_intern(&lf[267],5, C_text("-objc"));
lf[268]=C_h_intern(&lf[268],7, C_text("-static"));
lf[269]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007-static"));
lf[270]=C_h_intern(&lf[270],7, C_text("-cflags"));
lf[271]=C_h_intern(&lf[271],8, C_text("-ldflags"));
lf[272]=C_h_intern(&lf[272],8, C_text("-cc-name"));
lf[273]=C_h_intern(&lf[273],9, C_text("-cxx-name"));
lf[274]=C_h_intern(&lf[274],8, C_text("-ld-name"));
lf[275]=C_h_intern(&lf[275],5, C_text("-home"));
lf[276]=C_h_intern(&lf[276],5, C_text("-libs"));
lf[277]=C_h_intern(&lf[277],2, C_text("-v"));
lf[278]=C_h_intern(&lf[278],8, C_text("-verbose"));
lf[279]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-verbose"));
lf[280]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-v"));
lf[281]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-v"));
lf[282]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-Q"));
lf[283]=C_h_intern(&lf[283],2, C_text("-w"));
lf[284]=C_h_intern(&lf[284],12, C_text("-no-warnings"));
lf[285]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-w"));
lf[286]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014-no-warnings"));
lf[287]=C_h_intern(&lf[287],2, C_text("-A"));
lf[288]=C_h_intern(&lf[288],13, C_text("-analyze-only"));
lf[289]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015-analyze-only"));
lf[290]=C_h_intern(&lf[290],2, C_text("-P"));
lf[291]=C_h_intern(&lf[291],13, C_text("-check-syntax"));
lf[292]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015-check-syntax"));
lf[293]=C_h_intern(&lf[293],2, C_text("-k"));
lf[294]=C_h_intern(&lf[294],2, C_text("-c"));
lf[295]=C_h_intern(&lf[295],2, C_text("-t"));
lf[296]=C_h_intern(&lf[296],2, C_text("-e"));
lf[297]=C_h_intern(&lf[297],9, C_text("-embedded"));
lf[298]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014-DC_EMBEDDED"));
lf[299]=C_h_intern(&lf[299],5, C_text("-link"));
lf[300]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002, "));
lf[301]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-uses"));
lf[302]=C_h_intern(&lf[302],7, C_text("-libdir"));
lf[303]=C_h_intern(&lf[303],18, C_text("-require-extension"));
lf[304]=C_h_intern(&lf[304],2, C_text("-R"));
lf[305]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022-require-extension"));
lf[306]=C_h_intern(&lf[306],19, C_text("-private-repository"));
lf[307]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026-DC_PRIVATE_REPOSITORY"));
lf[308]=C_h_intern(&lf[308],18, C_text("-ignore-repository"));
lf[309]=C_h_intern(&lf[309],11, C_text("-setup-mode"));
lf[310]=C_h_intern(&lf[310],13, C_text("-no-elevation"));
lf[311]=C_h_intern(&lf[311],4, C_text("-gui"));
lf[312]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007-DC_GUI"));
lf[313]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012-lkernel32"));
lf[314]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-luser32"));
lf[315]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007-lgdi32"));
lf[316]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011-mwindows"));
lf[317]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012chicken.rc"));
lf[318]=C_h_intern(&lf[318],9, C_text("-deployed"));
lf[319]=C_h_intern(&lf[319],10, C_text("-framework"));
lf[320]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012-framework"));
lf[321]=C_h_intern(&lf[321],2, C_text("-o"));
lf[322]=C_h_intern(&lf[322],12, C_text("-output-file"));
lf[323]=C_h_intern(&lf[323],2, C_text("-O"));
lf[324]=C_h_intern(&lf[324],3, C_text("-O1"));
lf[325]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017-optimize-level"));
lf[326]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0011"));
lf[327]=C_h_intern(&lf[327],3, C_text("-O0"));
lf[328]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017-optimize-level"));
lf[329]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0010"));
lf[330]=C_h_intern(&lf[330],3, C_text("-O2"));
lf[331]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017-optimize-level"));
lf[332]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0012"));
lf[333]=C_h_intern(&lf[333],3, C_text("-O3"));
lf[334]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017-optimize-level"));
lf[335]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0013"));
lf[336]=C_h_intern(&lf[336],3, C_text("-O4"));
lf[337]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017-optimize-level"));
lf[338]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0014"));
lf[339]=C_h_intern(&lf[339],3, C_text("-O5"));
lf[340]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017-optimize-level"));
lf[341]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0015"));
lf[342]=C_h_intern(&lf[342],3, C_text("-d0"));
lf[343]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014-debug-level"));
lf[344]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0010"));
lf[345]=C_h_intern(&lf[345],3, C_text("-d1"));
lf[346]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014-debug-level"));
lf[347]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0011"));
lf[348]=C_h_intern(&lf[348],3, C_text("-d2"));
lf[349]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014-debug-level"));
lf[350]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0012"));
lf[351]=C_h_intern(&lf[351],3, C_text("-d3"));
lf[352]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014-debug-level"));
lf[353]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0013"));
lf[354]=C_h_intern(&lf[354],8, C_text("-dry-run"));
lf[355]=C_h_intern(&lf[355],2, C_text("-s"));
lf[356]=C_h_intern(&lf[356],4, C_text("-dll"));
lf[357]=C_h_intern(&lf[357],8, C_text("-library"));
lf[358]=C_h_intern(&lf[358],9, C_text("-compiler"));
lf[359]=C_h_intern(&lf[359],3, C_text("-cc"));
lf[360]=C_h_intern(&lf[360],4, C_text("-cxx"));
lf[361]=C_h_intern(&lf[361],3, C_text("-ld"));
lf[362]=C_h_intern(&lf[362],2, C_text("-I"));
lf[363]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015-include-path"));
lf[364]=C_h_intern(&lf[364],2, C_text("-C"));
lf[365]=C_h_intern(&lf[365],6, C_text("-strip"));
lf[366]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-s"));
lf[367]=C_h_intern(&lf[367],2, C_text("-L"));
lf[368]=C_h_intern(&lf[368],6, C_text("-rpath"));
lf[369]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006-Wl,-R"));
lf[370]=C_h_intern(&lf[370],3, C_text("gnu"));
lf[371]=C_h_intern(&lf[371],5, C_text("clang"));
lf[372]=C_h_intern(&lf[372],31, C_text("chicken.platform#build-platform"));
lf[373]=C_h_intern(&lf[373],5, C_text("-host"));
lf[374]=C_h_intern(&lf[374],3, C_text("-oi"));
lf[375]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021-emit-inline-file"));
lf[376]=C_h_intern(&lf[376],3, C_text("-ot"));
lf[377]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020-emit-types-file"));
lf[378]=C_h_intern(&lf[378],1, C_text("-"));
lf[379]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001a"));
lf[380]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\001-\376\377\016"));
lf[381]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-h\376\003\000\000\002\376B\000\000\005-help\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-s\376\003\000\000\002\376B\000\000\007-shared\376\377\016\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\002-m\376\003\000\000\002\376B\000\000\007-module\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-P\376\003\000\000\002\376B\000\000\015-check-syntax\376\377\016\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\002-f\376\003\000\000\002\376B\000\000\022-fixnum-arithmetic\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-D\376\003\000\000\002\376B\000\000\010-feature\376\377\016\376\003"
"\000\000\002\376\003\000\000\002\376\016\000\000\002\376\377\001\000\000\000\000\376\377\001\377\377\377\377\376\003\000\000\002\376B\000\000\021-case-insensitive\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-K\376\003\000\000\002\376"
"B\000\000\016-keyword-style\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-X\376\003\000\000\002\376B\000\000\007-extend\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-J\376\003\000\000\002"
"\376B\000\000\032-emit-all-import-libraries\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-N\376\003\000\000\002\376B\000\000\027-no-module-registra"
"tion\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-x\376\003\000\000\002\376B\000\000\015-explicit-use\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-u\376\003\000\000\002\376B\000\000\007-un"
"safe\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-j\376\003\000\000\002\376B\000\000\024-emit-import-library\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-b\376\003\000\000\002\376"
"B\000\000\006-block\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006-types\376\003\000\000\002\376B\000\000\023-consult-types-file\376\377\016\376\377\016"));
lf[382]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\015-explicit-use\376\003\000\000\002\376\001\000\000\011-no-trace\376\003\000\000\002\376\001\000\000\014-no-warnings\376\003\000\000\002\376\001\000\000\026-no-us"
"ual-integrations\376\003\000\000\002\376\001\000\000\027-optimize-leaf-routines\376\003\000\000\002\376\001\000\000\007-unsafe\376\003\000\000\002\376\001\000\000\006-blo"
"ck\376\003\000\000\002\376\001\000\000\023-disable-interrupts\376\003\000\000\002\376\001\000\000\022-fixnum-arithmetic\376\003\000\000\002\376\001\000\000\012-to-stdout\376"
"\003\000\000\002\376\001\000\000\010-profile\376\003\000\000\002\376\001\000\000\004-raw\376\003\000\000\002\376\001\000\000\023-accumulate-profile\376\003\000\000\002\376\001\000\000\015-check-syn"
"tax\376\003\000\000\002\376\001\000\000\021-case-insensitive\376\003\000\000\002\376\001\000\000\007-shared\376\003\000\000\002\376\001\000\000\017-compile-syntax\376\003\000\000\002\376\001\000"
"\000\017-no-lambda-info\376\003\000\000\002\376\001\000\000\010-dynamic\376\003\000\000\002\376\001\000\000\036-disable-stack-overflow-checks\376\003\000\000\002"
"\376\001\000\000\006-local\376\003\000\000\002\376\001\000\000\037-emit-external-prototypes-first\376\003\000\000\002\376\001\000\000\007-inline\376\003\000\000\002\376\001\000\000\010-"
"release\376\003\000\000\002\376\001\000\000\015-analyze-only\376\003\000\000\002\376\001\000\000\025-keep-shadowed-macros\376\003\000\000\002\376\001\000\000\016-inline-g"
"lobal\376\003\000\000\002\376\001\000\000\022-ignore-repository\376\003\000\000\002\376\001\000\000\021-no-symbol-escape\376\003\000\000\002\376\001\000\000\030-no-parent"
"heses-synonyms\376\003\000\000\002\376\001\000\000\014-r5rs-syntax\376\003\000\000\002\376\001\000\000\017-no-argc-checks\376\003\000\000\002\376\001\000\000\020-no-bound"
"-checks\376\003\000\000\002\376\001\000\000\024-no-procedure-checks\376\003\000\000\002\376\001\000\000\023-no-compiler-syntax\376\003\000\000\002\376\001\000\000\032-emi"
"t-all-import-libraries\376\003\000\000\002\376\001\000\000\015-no-elevation\376\003\000\000\002\376\001\000\000\027-no-module-registration\376\003"
"\000\000\002\376\001\000\000\047-no-procedure-checks-for-usual-bindings\376\003\000\000\002\376\001\000\000\013-specialize\376\003\000\000\002\376\001\000\000\015-s"
"trict-types\376\003\000\000\002\376\001\000\000\013-clustering\376\003\000\000\002\376\001\000\000\005-lfa2\376\003\000\000\002\376\001\000\000\013-debug-info\376\003\000\000\002\376\001\000\000\052-n"
"o-procedure-checks-for-toplevel-bindings\376\377\016"));
lf[383]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006-debug\376\003\000\000\002\376\001\000\000\012-heap-size\376\003\000\000\002\376\001\000\000\010-nursery\376\003\000\000\002\376\001\000\000\013-stack-size\376\003\000\000\002"
"\376\001\000\000\011-compiler\376\003\000\000\002\376\001\000\000\005-unit\376\003\000\000\002\376\001\000\000\005-uses\376\003\000\000\002\376\001\000\000\016-keyword-style\376\003\000\000\002\376\001\000\000\017-o"
"ptimize-level\376\003\000\000\002\376\001\000\000\015-include-path\376\003\000\000\002\376\001\000\000\016-database-size\376\003\000\000\002\376\001\000\000\007-extend\376\003\000"
"\000\002\376\001\000\000\010-prelude\376\003\000\000\002\376\001\000\000\011-postlude\376\003\000\000\002\376\001\000\000\011-prologue\376\003\000\000\002\376\001\000\000\011-epilogue\376\003\000\000\002\376\001\000"
"\000\017-emit-link-file\376\003\000\000\002\376\001\000\000\015-inline-limit\376\003\000\000\002\376\001\000\000\015-profile-name\376\003\000\000\002\376\001\000\000\021-emit-i"
"nline-file\376\003\000\000\002\376\001\000\000\024-consult-inline-file\376\003\000\000\002\376\001\000\000\020-emit-types-file\376\003\000\000\002\376\001\000\000\023-con"
"sult-types-file\376\003\000\000\002\376\001\000\000\010-feature\376\003\000\000\002\376\001\000\000\014-debug-level\376\003\000\000\002\376\001\000\000\024-emit-import-li"
"brary\376\003\000\000\002\376\001\000\000\007-module\376\003\000\000\002\376\001\000\000\005-link\376\003\000\000\002\376\001\000\000\013-no-feature\376\377\016"));
lf[384]=C_h_intern(&lf[384],21, C_text("scheme#string->number"));
lf[385]=C_h_intern(&lf[385],18, C_text("chicken.base#error"));
lf[386]=C_decode_literal(C_heaptop,C_text("\376B\000\000-bad -L argument, <DIR> starts with whitespace"));
lf[387]=C_decode_literal(C_heaptop,C_text("\376B\000\000-bad -I argument: <DIR> starts with whitespace"));
lf[388]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-feature"));
lf[389]=C_h_intern(&lf[389],16, C_text("scheme#substring"));
lf[390]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001-"));
lf[391]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023invalid option `~A\047"));
lf[392]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023invalid option `~A\047"));
lf[393]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004-Wl,"));
lf[394]=C_h_intern(&lf[394],35, C_text("chicken.pathname#decompose-pathname"));
lf[395]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001h"));
lf[396]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001c"));
lf[397]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002rc"));
lf[398]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003cpp"));
lf[399]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001C"));
lf[400]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002cc"));
lf[401]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003cxx"));
lf[402]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003hpp"));
lf[403]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017-no-cpp-precomp"));
lf[404]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001m"));
lf[405]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001M"));
lf[406]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002mm"));
lf[407]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030file `~A\047 does not exist"));
lf[408]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004.scm"));
lf[409]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-:"));
lf[410]=C_h_intern(&lf[410],15, C_text("-optimize-level"));
lf[411]=C_h_intern(&lf[411],15, C_text("-benchmark-mode"));
lf[412]=C_h_intern(&lf[412],10, C_text("-to-stdout"));
lf[413]=C_h_intern(&lf[413],7, C_text("-shared"));
lf[414]=C_h_intern(&lf[414],8, C_text("-dynamic"));
lf[415]=C_h_intern(&lf[415],21, C_text("scheme#string->symbol"));
lf[416]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[417]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013CSC_OPTIONS"));
lf[418]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-I"));
lf[419]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002:;"));
lf[420]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026CHICKEN_C_INCLUDE_PATH"));
lf[421]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-I"));
lf[422]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030PHhsfiENxubvwAOeWkctgSJM"));
lf[423]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\005-DPIC\376\377\016"));
lf[424]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\005-fPIC\376\003\000\000\002\376B\000\000\005-DPIC\376\377\016"));
lf[425]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007static."));
lf[426]=C_h_intern(&lf[426],25, C_text("chicken.platform#feature\077"));
lf[427]=C_h_intern(&lf[427],14, C_text("\000cross-chicken"));
lf[428]=C_h_intern(&lf[428],46, C_text("chicken.process-context#command-line-arguments"));
lf[429]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020.chicken-install"));
lf[430]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005cache"));
lf[431]=C_h_intern(&lf[431],41, C_text("chicken.process-context#current-directory"));
lf[432]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013USERPROFILE"));
lf[433]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004HOME"));
lf[434]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021CHICKEN_EGG_CACHE"));
lf[435]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011/chicken/"));
lf[436]=C_h_intern(&lf[436],18, C_text("\003sysfixnum->string"));
lf[437]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011/chicken/"));
lf[438]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[439]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[440]=C_h_intern(&lf[440],28, C_text("\003sysregister-compiled-module"));
lf[441]=C_h_intern(&lf[441],4, C_text("main"));
C_register_lf2(lf,442,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2242,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[471] = {
{C_text("f8467:csc_2escm"),(void*)f8467},
{C_text("f8473:csc_2escm"),(void*)f8473},
{C_text("f8477:csc_2escm"),(void*)f8477},
{C_text("f8500:csc_2escm"),(void*)f8500},
{C_text("f8546:csc_2escm"),(void*)f8546},
{C_text("f_2242:csc_2escm"),(void*)f_2242},
{C_text("f_2245:csc_2escm"),(void*)f_2245},
{C_text("f_2248:csc_2escm"),(void*)f_2248},
{C_text("f_2251:csc_2escm"),(void*)f_2251},
{C_text("f_2254:csc_2escm"),(void*)f_2254},
{C_text("f_2257:csc_2escm"),(void*)f_2257},
{C_text("f_2260:csc_2escm"),(void*)f_2260},
{C_text("f_2263:csc_2escm"),(void*)f_2263},
{C_text("f_2266:csc_2escm"),(void*)f_2266},
{C_text("f_2272:csc_2escm"),(void*)f_2272},
{C_text("f_2278:csc_2escm"),(void*)f_2278},
{C_text("f_2282:csc_2escm"),(void*)f_2282},
{C_text("f_2286:csc_2escm"),(void*)f_2286},
{C_text("f_2290:csc_2escm"),(void*)f_2290},
{C_text("f_2294:csc_2escm"),(void*)f_2294},
{C_text("f_2298:csc_2escm"),(void*)f_2298},
{C_text("f_2302:csc_2escm"),(void*)f_2302},
{C_text("f_2306:csc_2escm"),(void*)f_2306},
{C_text("f_2310:csc_2escm"),(void*)f_2310},
{C_text("f_2314:csc_2escm"),(void*)f_2314},
{C_text("f_2318:csc_2escm"),(void*)f_2318},
{C_text("f_2322:csc_2escm"),(void*)f_2322},
{C_text("f_2326:csc_2escm"),(void*)f_2326},
{C_text("f_2330:csc_2escm"),(void*)f_2330},
{C_text("f_2338:csc_2escm"),(void*)f_2338},
{C_text("f_2342:csc_2escm"),(void*)f_2342},
{C_text("f_2346:csc_2escm"),(void*)f_2346},
{C_text("f_2350:csc_2escm"),(void*)f_2350},
{C_text("f_2354:csc_2escm"),(void*)f_2354},
{C_text("f_2358:csc_2escm"),(void*)f_2358},
{C_text("f_2362:csc_2escm"),(void*)f_2362},
{C_text("f_2366:csc_2escm"),(void*)f_2366},
{C_text("f_2370:csc_2escm"),(void*)f_2370},
{C_text("f_2374:csc_2escm"),(void*)f_2374},
{C_text("f_2378:csc_2escm"),(void*)f_2378},
{C_text("f_2382:csc_2escm"),(void*)f_2382},
{C_text("f_2386:csc_2escm"),(void*)f_2386},
{C_text("f_2390:csc_2escm"),(void*)f_2390},
{C_text("f_2394:csc_2escm"),(void*)f_2394},
{C_text("f_2398:csc_2escm"),(void*)f_2398},
{C_text("f_2402:csc_2escm"),(void*)f_2402},
{C_text("f_2457:csc_2escm"),(void*)f_2457},
{C_text("f_2467:csc_2escm"),(void*)f_2467},
{C_text("f_2471:csc_2escm"),(void*)f_2471},
{C_text("f_2474:csc_2escm"),(void*)f_2474},
{C_text("f_2909:csc_2escm"),(void*)f_2909},
{C_text("f_2915:csc_2escm"),(void*)f_2915},
{C_text("f_2929:csc_2escm"),(void*)f_2929},
{C_text("f_2971:csc_2escm"),(void*)f_2971},
{C_text("f_2984:csc_2escm"),(void*)f_2984},
{C_text("f_2998:csc_2escm"),(void*)f_2998},
{C_text("f_3046:csc_2escm"),(void*)f_3046},
{C_text("f_3060:csc_2escm"),(void*)f_3060},
{C_text("f_3073:csc_2escm"),(void*)f_3073},
{C_text("f_3094:csc_2escm"),(void*)f_3094},
{C_text("f_3102:csc_2escm"),(void*)f_3102},
{C_text("f_3109:csc_2escm"),(void*)f_3109},
{C_text("f_3123:csc_2escm"),(void*)f_3123},
{C_text("f_3138:csc_2escm"),(void*)f_3138},
{C_text("f_3146:csc_2escm"),(void*)f_3146},
{C_text("f_3150:csc_2escm"),(void*)f_3150},
{C_text("f_3154:csc_2escm"),(void*)f_3154},
{C_text("f_3172:csc_2escm"),(void*)f_3172},
{C_text("f_3251:csc_2escm"),(void*)f_3251},
{C_text("f_3351:csc_2escm"),(void*)f_3351},
{C_text("f_3373:csc_2escm"),(void*)f_3373},
{C_text("f_3384:csc_2escm"),(void*)f_3384},
{C_text("f_3756:csc_2escm"),(void*)f_3756},
{C_text("f_3782:csc_2escm"),(void*)f_3782},
{C_text("f_3785:csc_2escm"),(void*)f_3785},
{C_text("f_3792:csc_2escm"),(void*)f_3792},
{C_text("f_3795:csc_2escm"),(void*)f_3795},
{C_text("f_3798:csc_2escm"),(void*)f_3798},
{C_text("f_3801:csc_2escm"),(void*)f_3801},
{C_text("f_3808:csc_2escm"),(void*)f_3808},
{C_text("f_3812:csc_2escm"),(void*)f_3812},
{C_text("f_3816:csc_2escm"),(void*)f_3816},
{C_text("f_3834:csc_2escm"),(void*)f_3834},
{C_text("f_3842:csc_2escm"),(void*)f_3842},
{C_text("f_3846:csc_2escm"),(void*)f_3846},
{C_text("f_3848:csc_2escm"),(void*)f_3848},
{C_text("f_3856:csc_2escm"),(void*)f_3856},
{C_text("f_3864:csc_2escm"),(void*)f_3864},
{C_text("f_3868:csc_2escm"),(void*)f_3868},
{C_text("f_3872:csc_2escm"),(void*)f_3872},
{C_text("f_3876:csc_2escm"),(void*)f_3876},
{C_text("f_3880:csc_2escm"),(void*)f_3880},
{C_text("f_3884:csc_2escm"),(void*)f_3884},
{C_text("f_3897:csc_2escm"),(void*)f_3897},
{C_text("f_3902:csc_2escm"),(void*)f_3902},
{C_text("f_3905:csc_2escm"),(void*)f_3905},
{C_text("f_3913:csc_2escm"),(void*)f_3913},
{C_text("f_3948:csc_2escm"),(void*)f_3948},
{C_text("f_3952:csc_2escm"),(void*)f_3952},
{C_text("f_3957:csc_2escm"),(void*)f_3957},
{C_text("f_3962:csc_2escm"),(void*)f_3962},
{C_text("f_3969:csc_2escm"),(void*)f_3969},
{C_text("f_3998:csc_2escm"),(void*)f_3998},
{C_text("f_4012:csc_2escm"),(void*)f_4012},
{C_text("f_4016:csc_2escm"),(void*)f_4016},
{C_text("f_4032:csc_2escm"),(void*)f_4032},
{C_text("f_4051:csc_2escm"),(void*)f_4051},
{C_text("f_4066:csc_2escm"),(void*)f_4066},
{C_text("f_4070:csc_2escm"),(void*)f_4070},
{C_text("f_4074:csc_2escm"),(void*)f_4074},
{C_text("f_4077:csc_2escm"),(void*)f_4077},
{C_text("f_4090:csc_2escm"),(void*)f_4090},
{C_text("f_4095:csc_2escm"),(void*)f_4095},
{C_text("f_4120:csc_2escm"),(void*)f_4120},
{C_text("f_4140:csc_2escm"),(void*)f_4140},
{C_text("f_4148:csc_2escm"),(void*)f_4148},
{C_text("f_4152:csc_2escm"),(void*)f_4152},
{C_text("f_4156:csc_2escm"),(void*)f_4156},
{C_text("f_4172:csc_2escm"),(void*)f_4172},
{C_text("f_4179:csc_2escm"),(void*)f_4179},
{C_text("f_4201:csc_2escm"),(void*)f_4201},
{C_text("f_4205:csc_2escm"),(void*)f_4205},
{C_text("f_4208:csc_2escm"),(void*)f_4208},
{C_text("f_4211:csc_2escm"),(void*)f_4211},
{C_text("f_4217:csc_2escm"),(void*)f_4217},
{C_text("f_4233:csc_2escm"),(void*)f_4233},
{C_text("f_4245:csc_2escm"),(void*)f_4245},
{C_text("f_4252:csc_2escm"),(void*)f_4252},
{C_text("f_4285:csc_2escm"),(void*)f_4285},
{C_text("f_4290:csc_2escm"),(void*)f_4290},
{C_text("f_4292:csc_2escm"),(void*)f_4292},
{C_text("f_4315:csc_2escm"),(void*)f_4315},
{C_text("f_4320:csc_2escm"),(void*)f_4320},
{C_text("f_4324:csc_2escm"),(void*)f_4324},
{C_text("f_4328:csc_2escm"),(void*)f_4328},
{C_text("f_4345:csc_2escm"),(void*)f_4345},
{C_text("f_4361:csc_2escm"),(void*)f_4361},
{C_text("f_4372:csc_2escm"),(void*)f_4372},
{C_text("f_4376:csc_2escm"),(void*)f_4376},
{C_text("f_4379:csc_2escm"),(void*)f_4379},
{C_text("f_4382:csc_2escm"),(void*)f_4382},
{C_text("f_4385:csc_2escm"),(void*)f_4385},
{C_text("f_4391:csc_2escm"),(void*)f_4391},
{C_text("f_4397:csc_2escm"),(void*)f_4397},
{C_text("f_4409:csc_2escm"),(void*)f_4409},
{C_text("f_4412:csc_2escm"),(void*)f_4412},
{C_text("f_4415:csc_2escm"),(void*)f_4415},
{C_text("f_4418:csc_2escm"),(void*)f_4418},
{C_text("f_4421:csc_2escm"),(void*)f_4421},
{C_text("f_4424:csc_2escm"),(void*)f_4424},
{C_text("f_4431:csc_2escm"),(void*)f_4431},
{C_text("f_4437:csc_2escm"),(void*)f_4437},
{C_text("f_4440:csc_2escm"),(void*)f_4440},
{C_text("f_4443:csc_2escm"),(void*)f_4443},
{C_text("f_4446:csc_2escm"),(void*)f_4446},
{C_text("f_4449:csc_2escm"),(void*)f_4449},
{C_text("f_4452:csc_2escm"),(void*)f_4452},
{C_text("f_4459:csc_2escm"),(void*)f_4459},
{C_text("f_4463:csc_2escm"),(void*)f_4463},
{C_text("f_4480:csc_2escm"),(void*)f_4480},
{C_text("f_4487:csc_2escm"),(void*)f_4487},
{C_text("f_4513:csc_2escm"),(void*)f_4513},
{C_text("f_4516:csc_2escm"),(void*)f_4516},
{C_text("f_4523:csc_2escm"),(void*)f_4523},
{C_text("f_4544:csc_2escm"),(void*)f_4544},
{C_text("f_4548:csc_2escm"),(void*)f_4548},
{C_text("f_4551:csc_2escm"),(void*)f_4551},
{C_text("f_4554:csc_2escm"),(void*)f_4554},
{C_text("f_4557:csc_2escm"),(void*)f_4557},
{C_text("f_4560:csc_2escm"),(void*)f_4560},
{C_text("f_4570:csc_2escm"),(void*)f_4570},
{C_text("f_4577:csc_2escm"),(void*)f_4577},
{C_text("f_4584:csc_2escm"),(void*)f_4584},
{C_text("f_4588:csc_2escm"),(void*)f_4588},
{C_text("f_4595:csc_2escm"),(void*)f_4595},
{C_text("f_4598:csc_2escm"),(void*)f_4598},
{C_text("f_4610:csc_2escm"),(void*)f_4610},
{C_text("f_4622:csc_2escm"),(void*)f_4622},
{C_text("f_4629:csc_2escm"),(void*)f_4629},
{C_text("f_4638:csc_2escm"),(void*)f_4638},
{C_text("f_4645:csc_2escm"),(void*)f_4645},
{C_text("f_4651:csc_2escm"),(void*)f_4651},
{C_text("f_4654:csc_2escm"),(void*)f_4654},
{C_text("f_4657:csc_2escm"),(void*)f_4657},
{C_text("f_4660:csc_2escm"),(void*)f_4660},
{C_text("f_4717:csc_2escm"),(void*)f_4717},
{C_text("f_4729:csc_2escm"),(void*)f_4729},
{C_text("f_4741:csc_2escm"),(void*)f_4741},
{C_text("f_4753:csc_2escm"),(void*)f_4753},
{C_text("f_4776:csc_2escm"),(void*)f_4776},
{C_text("f_4779:csc_2escm"),(void*)f_4779},
{C_text("f_4791:csc_2escm"),(void*)f_4791},
{C_text("f_4881:csc_2escm"),(void*)f_4881},
{C_text("f_4884:csc_2escm"),(void*)f_4884},
{C_text("f_4888:csc_2escm"),(void*)f_4888},
{C_text("f_4896:csc_2escm"),(void*)f_4896},
{C_text("f_4913:csc_2escm"),(void*)f_4913},
{C_text("f_4933:csc_2escm"),(void*)f_4933},
{C_text("f_4936:csc_2escm"),(void*)f_4936},
{C_text("f_5002:csc_2escm"),(void*)f_5002},
{C_text("f_5006:csc_2escm"),(void*)f_5006},
{C_text("f_5022:csc_2escm"),(void*)f_5022},
{C_text("f_5033:csc_2escm"),(void*)f_5033},
{C_text("f_5049:csc_2escm"),(void*)f_5049},
{C_text("f_5070:csc_2escm"),(void*)f_5070},
{C_text("f_5080:csc_2escm"),(void*)f_5080},
{C_text("f_5090:csc_2escm"),(void*)f_5090},
{C_text("f_5100:csc_2escm"),(void*)f_5100},
{C_text("f_5110:csc_2escm"),(void*)f_5110},
{C_text("f_5120:csc_2escm"),(void*)f_5120},
{C_text("f_5130:csc_2escm"),(void*)f_5130},
{C_text("f_5140:csc_2escm"),(void*)f_5140},
{C_text("f_5150:csc_2escm"),(void*)f_5150},
{C_text("f_5160:csc_2escm"),(void*)f_5160},
{C_text("f_5177:csc_2escm"),(void*)f_5177},
{C_text("f_5201:csc_2escm"),(void*)f_5201},
{C_text("f_5218:csc_2escm"),(void*)f_5218},
{C_text("f_5235:csc_2escm"),(void*)f_5235},
{C_text("f_5252:csc_2escm"),(void*)f_5252},
{C_text("f_5269:csc_2escm"),(void*)f_5269},
{C_text("f_5273:csc_2escm"),(void*)f_5273},
{C_text("f_5290:csc_2escm"),(void*)f_5290},
{C_text("f_5294:csc_2escm"),(void*)f_5294},
{C_text("f_5302:csc_2escm"),(void*)f_5302},
{C_text("f_5316:csc_2escm"),(void*)f_5316},
{C_text("f_5329:csc_2escm"),(void*)f_5329},
{C_text("f_5333:csc_2escm"),(void*)f_5333},
{C_text("f_5341:csc_2escm"),(void*)f_5341},
{C_text("f_5354:csc_2escm"),(void*)f_5354},
{C_text("f_5368:csc_2escm"),(void*)f_5368},
{C_text("f_5372:csc_2escm"),(void*)f_5372},
{C_text("f_5380:csc_2escm"),(void*)f_5380},
{C_text("f_5384:csc_2escm"),(void*)f_5384},
{C_text("f_5409:csc_2escm"),(void*)f_5409},
{C_text("f_5412:csc_2escm"),(void*)f_5412},
{C_text("f_5429:csc_2escm"),(void*)f_5429},
{C_text("f_5432:csc_2escm"),(void*)f_5432},
{C_text("f_5450:csc_2escm"),(void*)f_5450},
{C_text("f_5457:csc_2escm"),(void*)f_5457},
{C_text("f_5460:csc_2escm"),(void*)f_5460},
{C_text("f_5463:csc_2escm"),(void*)f_5463},
{C_text("f_5470:csc_2escm"),(void*)f_5470},
{C_text("f_5500:csc_2escm"),(void*)f_5500},
{C_text("f_5506:csc_2escm"),(void*)f_5506},
{C_text("f_5509:csc_2escm"),(void*)f_5509},
{C_text("f_5519:csc_2escm"),(void*)f_5519},
{C_text("f_5528:csc_2escm"),(void*)f_5528},
{C_text("f_5538:csc_2escm"),(void*)f_5538},
{C_text("f_5542:csc_2escm"),(void*)f_5542},
{C_text("f_5565:csc_2escm"),(void*)f_5565},
{C_text("f_5569:csc_2escm"),(void*)f_5569},
{C_text("f_5596:csc_2escm"),(void*)f_5596},
{C_text("f_5610:csc_2escm"),(void*)f_5610},
{C_text("f_5620:csc_2escm"),(void*)f_5620},
{C_text("f_5624:csc_2escm"),(void*)f_5624},
{C_text("f_5647:csc_2escm"),(void*)f_5647},
{C_text("f_5664:csc_2escm"),(void*)f_5664},
{C_text("f_5666:csc_2escm"),(void*)f_5666},
{C_text("f_5691:csc_2escm"),(void*)f_5691},
{C_text("f_5705:csc_2escm"),(void*)f_5705},
{C_text("f_5709:csc_2escm"),(void*)f_5709},
{C_text("f_5726:csc_2escm"),(void*)f_5726},
{C_text("f_5738:csc_2escm"),(void*)f_5738},
{C_text("f_5743:csc_2escm"),(void*)f_5743},
{C_text("f_5749:csc_2escm"),(void*)f_5749},
{C_text("f_5760:csc_2escm"),(void*)f_5760},
{C_text("f_5774:csc_2escm"),(void*)f_5774},
{C_text("f_5788:csc_2escm"),(void*)f_5788},
{C_text("f_5801:csc_2escm"),(void*)f_5801},
{C_text("f_5806:csc_2escm"),(void*)f_5806},
{C_text("f_5825:csc_2escm"),(void*)f_5825},
{C_text("f_5837:csc_2escm"),(void*)f_5837},
{C_text("f_5841:csc_2escm"),(void*)f_5841},
{C_text("f_5849:csc_2escm"),(void*)f_5849},
{C_text("f_5858:csc_2escm"),(void*)f_5858},
{C_text("f_5864:csc_2escm"),(void*)f_5864},
{C_text("f_5894:csc_2escm"),(void*)f_5894},
{C_text("f_6099:csc_2escm"),(void*)f_6099},
{C_text("f_6102:csc_2escm"),(void*)f_6102},
{C_text("f_6105:csc_2escm"),(void*)f_6105},
{C_text("f_6108:csc_2escm"),(void*)f_6108},
{C_text("f_6112:csc_2escm"),(void*)f_6112},
{C_text("f_6116:csc_2escm"),(void*)f_6116},
{C_text("f_6135:csc_2escm"),(void*)f_6135},
{C_text("f_6139:csc_2escm"),(void*)f_6139},
{C_text("f_6143:csc_2escm"),(void*)f_6143},
{C_text("f_6147:csc_2escm"),(void*)f_6147},
{C_text("f_6151:csc_2escm"),(void*)f_6151},
{C_text("f_6155:csc_2escm"),(void*)f_6155},
{C_text("f_6166:csc_2escm"),(void*)f_6166},
{C_text("f_6172:csc_2escm"),(void*)f_6172},
{C_text("f_6174:csc_2escm"),(void*)f_6174},
{C_text("f_6199:csc_2escm"),(void*)f_6199},
{C_text("f_6210:csc_2escm"),(void*)f_6210},
{C_text("f_6220:csc_2escm"),(void*)f_6220},
{C_text("f_6227:csc_2escm"),(void*)f_6227},
{C_text("f_6241:csc_2escm"),(void*)f_6241},
{C_text("f_6270:csc_2escm"),(void*)f_6270},
{C_text("f_6280:csc_2escm"),(void*)f_6280},
{C_text("f_6295:csc_2escm"),(void*)f_6295},
{C_text("f_6299:csc_2escm"),(void*)f_6299},
{C_text("f_6302:csc_2escm"),(void*)f_6302},
{C_text("f_6305:csc_2escm"),(void*)f_6305},
{C_text("f_6317:csc_2escm"),(void*)f_6317},
{C_text("f_6329:csc_2escm"),(void*)f_6329},
{C_text("f_6333:csc_2escm"),(void*)f_6333},
{C_text("f_6337:csc_2escm"),(void*)f_6337},
{C_text("f_6341:csc_2escm"),(void*)f_6341},
{C_text("f_6352:csc_2escm"),(void*)f_6352},
{C_text("f_6381:csc_2escm"),(void*)f_6381},
{C_text("f_6384:csc_2escm"),(void*)f_6384},
{C_text("f_6385:csc_2escm"),(void*)f_6385},
{C_text("f_6389:csc_2escm"),(void*)f_6389},
{C_text("f_6392:csc_2escm"),(void*)f_6392},
{C_text("f_6404:csc_2escm"),(void*)f_6404},
{C_text("f_6412:csc_2escm"),(void*)f_6412},
{C_text("f_6416:csc_2escm"),(void*)f_6416},
{C_text("f_6422:csc_2escm"),(void*)f_6422},
{C_text("f_6426:csc_2escm"),(void*)f_6426},
{C_text("f_6435:csc_2escm"),(void*)f_6435},
{C_text("f_6443:csc_2escm"),(void*)f_6443},
{C_text("f_6453:csc_2escm"),(void*)f_6453},
{C_text("f_6466:csc_2escm"),(void*)f_6466},
{C_text("f_6476:csc_2escm"),(void*)f_6476},
{C_text("f_6491:csc_2escm"),(void*)f_6491},
{C_text("f_6493:csc_2escm"),(void*)f_6493},
{C_text("f_6503:csc_2escm"),(void*)f_6503},
{C_text("f_6517:csc_2escm"),(void*)f_6517},
{C_text("f_6520:csc_2escm"),(void*)f_6520},
{C_text("f_6523:csc_2escm"),(void*)f_6523},
{C_text("f_6535:csc_2escm"),(void*)f_6535},
{C_text("f_6542:csc_2escm"),(void*)f_6542},
{C_text("f_6544:csc_2escm"),(void*)f_6544},
{C_text("f_6554:csc_2escm"),(void*)f_6554},
{C_text("f_6567:csc_2escm"),(void*)f_6567},
{C_text("f_6578:csc_2escm"),(void*)f_6578},
{C_text("f_6584:csc_2escm"),(void*)f_6584},
{C_text("f_6586:csc_2escm"),(void*)f_6586},
{C_text("f_6611:csc_2escm"),(void*)f_6611},
{C_text("f_6625:csc_2escm"),(void*)f_6625},
{C_text("f_6634:csc_2escm"),(void*)f_6634},
{C_text("f_6637:csc_2escm"),(void*)f_6637},
{C_text("f_6640:csc_2escm"),(void*)f_6640},
{C_text("f_6643:csc_2escm"),(void*)f_6643},
{C_text("f_6649:csc_2escm"),(void*)f_6649},
{C_text("f_6657:csc_2escm"),(void*)f_6657},
{C_text("f_6667:csc_2escm"),(void*)f_6667},
{C_text("f_6684:csc_2escm"),(void*)f_6684},
{C_text("f_6694:csc_2escm"),(void*)f_6694},
{C_text("f_6698:csc_2escm"),(void*)f_6698},
{C_text("f_6702:csc_2escm"),(void*)f_6702},
{C_text("f_6706:csc_2escm"),(void*)f_6706},
{C_text("f_6710:csc_2escm"),(void*)f_6710},
{C_text("f_6713:csc_2escm"),(void*)f_6713},
{C_text("f_6723:csc_2escm"),(void*)f_6723},
{C_text("f_6730:csc_2escm"),(void*)f_6730},
{C_text("f_6735:csc_2escm"),(void*)f_6735},
{C_text("f_6739:csc_2escm"),(void*)f_6739},
{C_text("f_6747:csc_2escm"),(void*)f_6747},
{C_text("f_6755:csc_2escm"),(void*)f_6755},
{C_text("f_6759:csc_2escm"),(void*)f_6759},
{C_text("f_6763:csc_2escm"),(void*)f_6763},
{C_text("f_6768:csc_2escm"),(void*)f_6768},
{C_text("f_6770:csc_2escm"),(void*)f_6770},
{C_text("f_6795:csc_2escm"),(void*)f_6795},
{C_text("f_6811:csc_2escm"),(void*)f_6811},
{C_text("f_6814:csc_2escm"),(void*)f_6814},
{C_text("f_6821:csc_2escm"),(void*)f_6821},
{C_text("f_6835:csc_2escm"),(void*)f_6835},
{C_text("f_6850:csc_2escm"),(void*)f_6850},
{C_text("f_6858:csc_2escm"),(void*)f_6858},
{C_text("f_6883:csc_2escm"),(void*)f_6883},
{C_text("f_6892:csc_2escm"),(void*)f_6892},
{C_text("f_6917:csc_2escm"),(void*)f_6917},
{C_text("f_6929:csc_2escm"),(void*)f_6929},
{C_text("f_6943:csc_2escm"),(void*)f_6943},
{C_text("f_6949:csc_2escm"),(void*)f_6949},
{C_text("f_6952:csc_2escm"),(void*)f_6952},
{C_text("f_6955:csc_2escm"),(void*)f_6955},
{C_text("f_6962:csc_2escm"),(void*)f_6962},
{C_text("f_6966:csc_2escm"),(void*)f_6966},
{C_text("f_6975:csc_2escm"),(void*)f_6975},
{C_text("f_7054:csc_2escm"),(void*)f_7054},
{C_text("f_7065:csc_2escm"),(void*)f_7065},
{C_text("f_7071:csc_2escm"),(void*)f_7071},
{C_text("f_7073:csc_2escm"),(void*)f_7073},
{C_text("f_7098:csc_2escm"),(void*)f_7098},
{C_text("f_7107:csc_2escm"),(void*)f_7107},
{C_text("f_7115:csc_2escm"),(void*)f_7115},
{C_text("f_7119:csc_2escm"),(void*)f_7119},
{C_text("f_7142:csc_2escm"),(void*)f_7142},
{C_text("f_7152:csc_2escm"),(void*)f_7152},
{C_text("f_7156:csc_2escm"),(void*)f_7156},
{C_text("f_7160:csc_2escm"),(void*)f_7160},
{C_text("f_7162:csc_2escm"),(void*)f_7162},
{C_text("f_7185:csc_2escm"),(void*)f_7185},
{C_text("f_7190:csc_2escm"),(void*)f_7190},
{C_text("f_7197:csc_2escm"),(void*)f_7197},
{C_text("f_7205:csc_2escm"),(void*)f_7205},
{C_text("f_7214:csc_2escm"),(void*)f_7214},
{C_text("f_7231:csc_2escm"),(void*)f_7231},
{C_text("f_7239:csc_2escm"),(void*)f_7239},
{C_text("f_7246:csc_2escm"),(void*)f_7246},
{C_text("f_7252:csc_2escm"),(void*)f_7252},
{C_text("f_7257:csc_2escm"),(void*)f_7257},
{C_text("f_7269:csc_2escm"),(void*)f_7269},
{C_text("f_7280:csc_2escm"),(void*)f_7280},
{C_text("f_7283:csc_2escm"),(void*)f_7283},
{C_text("f_7286:csc_2escm"),(void*)f_7286},
{C_text("f_7289:csc_2escm"),(void*)f_7289},
{C_text("f_7306:csc_2escm"),(void*)f_7306},
{C_text("f_7309:csc_2escm"),(void*)f_7309},
{C_text("f_7312:csc_2escm"),(void*)f_7312},
{C_text("f_7315:csc_2escm"),(void*)f_7315},
{C_text("f_7331:csc_2escm"),(void*)f_7331},
{C_text("f_7335:csc_2escm"),(void*)f_7335},
{C_text("f_7343:csc_2escm"),(void*)f_7343},
{C_text("f_7351:csc_2escm"),(void*)f_7351},
{C_text("f_7359:csc_2escm"),(void*)f_7359},
{C_text("f_7364:csc_2escm"),(void*)f_7364},
{C_text("f_7368:csc_2escm"),(void*)f_7368},
{C_text("f_7387:csc_2escm"),(void*)f_7387},
{C_text("f_7393:csc_2escm"),(void*)f_7393},
{C_text("f_7396:csc_2escm"),(void*)f_7396},
{C_text("f_7399:csc_2escm"),(void*)f_7399},
{C_text("f_7402:csc_2escm"),(void*)f_7402},
{C_text("f_7405:csc_2escm"),(void*)f_7405},
{C_text("f_7409:csc_2escm"),(void*)f_7409},
{C_text("f_7413:csc_2escm"),(void*)f_7413},
{C_text("f_7417:csc_2escm"),(void*)f_7417},
{C_text("f_7423:csc_2escm"),(void*)f_7423},
{C_text("f_7428:csc_2escm"),(void*)f_7428},
{C_text("f_7436:csc_2escm"),(void*)f_7436},
{C_text("f_7454:csc_2escm"),(void*)f_7454},
{C_text("f_7460:csc_2escm"),(void*)f_7460},
{C_text("f_7464:csc_2escm"),(void*)f_7464},
{C_text("f_7468:csc_2escm"),(void*)f_7468},
{C_text("f_7472:csc_2escm"),(void*)f_7472},
{C_text("f_7479:csc_2escm"),(void*)f_7479},
{C_text("f_7483:csc_2escm"),(void*)f_7483},
{C_text("f_7486:csc_2escm"),(void*)f_7486},
{C_text("f_7502:csc_2escm"),(void*)f_7502},
{C_text("f_7505:csc_2escm"),(void*)f_7505},
{C_text("f_7513:csc_2escm"),(void*)f_7513},
{C_text("f_7538:csc_2escm"),(void*)f_7538},
{C_text("f_7547:csc_2escm"),(void*)f_7547},
{C_text("f_7572:csc_2escm"),(void*)f_7572},
{C_text("f_7589:csc_2escm"),(void*)f_7589},
{C_text("f_7609:csc_2escm"),(void*)f_7609},
{C_text("f_7613:csc_2escm"),(void*)f_7613},
{C_text("f_7638:csc_2escm"),(void*)f_7638},
{C_text("f_7656:csc_2escm"),(void*)f_7656},
{C_text("f_7660:csc_2escm"),(void*)f_7660},
{C_text("f_7667:csc_2escm"),(void*)f_7667},
{C_text("f_7671:csc_2escm"),(void*)f_7671},
{C_text("f_7675:csc_2escm"),(void*)f_7675},
{C_text("f_7679:csc_2escm"),(void*)f_7679},
{C_text("f_7683:csc_2escm"),(void*)f_7683},
{C_text("f_7694:csc_2escm"),(void*)f_7694},
{C_text("f_7697:csc_2escm"),(void*)f_7697},
{C_text("f_7700:csc_2escm"),(void*)f_7700},
{C_text("f_7710:csc_2escm"),(void*)f_7710},
{C_text("f_7714:csc_2escm"),(void*)f_7714},
{C_text("f_7718:csc_2escm"),(void*)f_7718},
{C_text("f_7723:csc_2escm"),(void*)f_7723},
{C_text("f_7728:csc_2escm"),(void*)f_7728},
{C_text("f_7732:csc_2escm"),(void*)f_7732},
{C_text("f_7736:csc_2escm"),(void*)f_7736},
{C_text("f_7743:csc_2escm"),(void*)f_7743},
{C_text("toplevel:csc_2escm"),(void*)C_toplevel},
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
o|hiding unexported module binding: main#host-libs 
o|hiding unexported module binding: main#TARGET_CC 
o|hiding unexported module binding: main#windows 
o|hiding unexported module binding: main#mingw 
o|hiding unexported module binding: main#osx 
o|hiding unexported module binding: main#cygwin 
o|hiding unexported module binding: main#aix 
o|hiding unexported module binding: main#elf 
o|hiding unexported module binding: main#stop 
o|hiding unexported module binding: main#arguments 
o|hiding unexported module binding: main#cross-chicken 
o|hiding unexported module binding: main#host-mode 
o|hiding unexported module binding: main#back-slash->forward-slash 
o|hiding unexported module binding: main#quotewrap 
o|hiding unexported module binding: main#quotewrap-no-slash-trans 
o|hiding unexported module binding: main#home 
o|hiding unexported module binding: main#translator 
o|hiding unexported module binding: main#compiler 
o|hiding unexported module binding: main#c++-compiler 
o|hiding unexported module binding: main#rc-compiler 
o|hiding unexported module binding: main#linker 
o|hiding unexported module binding: main#c++-linker 
o|hiding unexported module binding: main#object-extension 
o|hiding unexported module binding: main#library-extension 
o|hiding unexported module binding: main#link-output-flag 
o|hiding unexported module binding: main#executable-extension 
o|hiding unexported module binding: main#compile-output-flag 
o|hiding unexported module binding: main#shared-library-extension 
o|hiding unexported module binding: main#static-object-extension 
o|hiding unexported module binding: main#default-translation-optimization-options 
o|hiding unexported module binding: main#pic-options 
o|hiding unexported module binding: main#generate-manifest 
o|hiding unexported module binding: main#libchicken 
o|hiding unexported module binding: main#dynamic-libchicken 
o|hiding unexported module binding: main#default-library 
o|hiding unexported module binding: main#default-compilation-optimization-options 
o|hiding unexported module binding: main#best-compilation-optimization-options 
o|hiding unexported module binding: main#default-linking-optimization-options 
o|hiding unexported module binding: main#best-linking-optimization-options 
o|hiding unexported module binding: main#extra-features 
o|hiding unexported module binding: main#constant803 
o|hiding unexported module binding: main#constant806 
o|hiding unexported module binding: main#constant810 
o|hiding unexported module binding: main#short-options 
o|hiding unexported module binding: main#scheme-files 
o|hiding unexported module binding: main#c-files 
o|hiding unexported module binding: main#rc-files 
o|hiding unexported module binding: main#generated-c-files 
o|hiding unexported module binding: main#generated-rc-files 
o|hiding unexported module binding: main#object-files 
o|hiding unexported module binding: main#generated-object-files 
o|hiding unexported module binding: main#transient-link-files 
o|hiding unexported module binding: main#linked-extensions 
o|hiding unexported module binding: main#cpp-mode 
o|hiding unexported module binding: main#objc-mode 
o|hiding unexported module binding: main#embedded 
o|hiding unexported module binding: main#inquiry-only 
o|hiding unexported module binding: main#show-cflags 
o|hiding unexported module binding: main#show-ldflags 
o|hiding unexported module binding: main#show-libs 
o|hiding unexported module binding: main#dry-run 
o|hiding unexported module binding: main#gui 
o|hiding unexported module binding: main#deployed 
o|hiding unexported module binding: main#rpath 
o|hiding unexported module binding: main#ignore-repository 
o|hiding unexported module binding: main#library-dir 
o|hiding unexported module binding: main#extra-libraries 
o|hiding unexported module binding: main#extra-shared-libraries 
o|hiding unexported module binding: main#default-library-files 
o|hiding unexported module binding: main#library-files 
o|hiding unexported module binding: main#shared-library-files 
o|hiding unexported module binding: main#translate-options 
o|hiding unexported module binding: main#include-dir 
o|hiding unexported module binding: main#compile-options 
o|hiding unexported module binding: main#builtin-compile-options 
o|hiding unexported module binding: main#compile-only-flag 
o|hiding unexported module binding: main#translation-optimization-options 
o|hiding unexported module binding: main#compilation-optimization-options 
o|hiding unexported module binding: main#linking-optimization-options 
o|hiding unexported module binding: main#link-options 
o|hiding unexported module binding: main#builtin-link-options 
o|hiding unexported module binding: main#target-filename 
o|hiding unexported module binding: main#verbose 
o|hiding unexported module binding: main#keep-files 
o|hiding unexported module binding: main#translate-only 
o|hiding unexported module binding: main#compile-only 
o|hiding unexported module binding: main#to-stdout 
o|hiding unexported module binding: main#shared 
o|hiding unexported module binding: main#static 
o|hiding unexported module binding: main#repo-path 
o|hiding unexported module binding: main#find-object-file 
o|hiding unexported module binding: main#usage 
o|hiding unexported module binding: main#run 
o|hiding unexported module binding: main#run-translation 
o|hiding unexported module binding: main#run-compilation 
o|hiding unexported module binding: main#compiler-options 
o|hiding unexported module binding: main#run-linking 
o|hiding unexported module binding: main#collect-linked-objects 
o|hiding unexported module binding: main#copy-files 
o|hiding unexported module binding: main#linker-options 
o|hiding unexported module binding: main#linker-libraries 
o|hiding unexported module binding: main#constant1644 
o|hiding unexported module binding: main#cleanup 
o|hiding unexported module binding: main#string-any 
o|hiding unexported module binding: main#quote-option 
o|hiding unexported module binding: main#last-exit-code 
o|hiding unexported module binding: main#$system 
o|hiding unexported module binding: main#command 
o|hiding unexported module binding: main#$delete-file 
o|hiding unexported module binding: main#rez 
o|hiding unexported module binding: main#create-win-manifest 
S|applied compiler syntax:
S|  printf		1
S|  for-each		6
S|  sprintf		4
S|  fprintf		2
S|  foldl		3
S|  map		13
S|  foldr		3
o|eliminated procedure checks: 148 
o|specializations:
o|  1 (scheme#zero? *)
o|  2 (scheme#zero? integer)
o|  1 (scheme#= integer integer)
o|  1 (scheme#+ fixnum fixnum)
o|  1 (##sys#debug-mode?)
o|  2 (scheme#= fixnum fixnum)
o|  5 (scheme#string-append string string)
o|  5 (scheme#char=? char char)
o|  7 (scheme#string-ref string fixnum)
o|  4 (scheme#string=? string string)
o|  4 (scheme#> fixnum fixnum)
o|  4 (scheme#string-length string)
o|  70 (scheme#eqv? (or eof null fixnum char boolean symbol) *)
o|  1 (scheme#>= * *)
o|  7 (##sys#check-output-port * * *)
o|  2 (chicken.base#current-error-port)
o|  4 (scheme#memq * list)
o|  1 (scheme#eqv? * *)
o|  6 (##sys#check-list (or pair list) *)
o|  26 (scheme#cdr pair)
o|  8 (scheme#car pair)
o|  2 (scheme#number->string fixnum)
(o e)|safe calls: 804 
(o e)|assignments to immediate values: 25 
o|removed side-effect free assignment to unused variable: main#default-install-program 
o|removed side-effect free assignment to unused variable: main#default-ldflags 
o|removed side-effect free assignment to unused variable: main#default-install-program-executable-flags 
o|removed side-effect free assignment to unused variable: main#default-install-program-data-flags 
o|removed side-effect free assignment to unused variable: main#default-slibdir 
o|removed side-effect free assignment to unused variable: main#default-platform 
o|removed side-effect free assignment to unused variable: main#default-prefix 
o|removed side-effect free assignment to unused variable: main#default-csc 
o|removed side-effect free assignment to unused variable: main#default-csi 
o|removed side-effect free assignment to unused variable: main#default-builder 
o|removed side-effect free assignment to unused variable: main#host-ldflags 
o|removed side-effect free assignment to unused variable: main#+egg-info-extension+ 
o|removed side-effect free assignment to unused variable: main#+version-file+ 
o|removed side-effect free assignment to unused variable: main#+timestamp-file+ 
o|removed side-effect free assignment to unused variable: main#+status-file+ 
o|removed side-effect free assignment to unused variable: main#+egg-extension+ 
o|removed side-effect free assignment to unused variable: main#validate-environment 
o|inlining procedure: k2459 
o|inlining procedure: k2459 
o|removed side-effect free assignment to unused variable: main#cache-directory 
o|removed side-effect free assignment to unused variable: main#partition 
o|removed side-effect free assignment to unused variable: main#span 
o|removed side-effect free assignment to unused variable: main#drop 
o|removed side-effect free assignment to unused variable: main#split-at 
o|removed side-effect free assignment to unused variable: main#append-map 
o|inlining procedure: k2856 
o|inlining procedure: k2856 
o|inlining procedure: k2887 
o|inlining procedure: k2887 
o|merged explicitly consed rest parameter: xs403 
o|inlining procedure: k2917 
o|inlining procedure: k2917 
o|removed side-effect free assignment to unused variable: main#concatenate 
o|removed side-effect free assignment to unused variable: main#second 
o|removed side-effect free assignment to unused variable: main#third 
o|removed side-effect free assignment to unused variable: main#fourth 
o|removed side-effect free assignment to unused variable: main#fifth 
o|removed side-effect free assignment to unused variable: main#alist-cons 
o|inlining procedure: k3104 
o|inlining procedure: k3104 
o|inlining procedure: k3096 
o|inlining procedure: k3096 
o|removed side-effect free assignment to unused variable: main#remove 
o|removed side-effect free assignment to unused variable: main#unzip1 
o|removed side-effect free assignment to unused variable: main#list-index 
o|removed side-effect free assignment to unused variable: main#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: main#lset-union/eq? 
o|removed side-effect free assignment to unused variable: main#lset-intersection/eq? 
o|inlining procedure: k3495 
o|inlining procedure: k3495 
o|removed side-effect free assignment to unused variable: main#lset<=/eq? 
o|removed side-effect free assignment to unused variable: main#lset=/eq? 
o|removed side-effect free assignment to unused variable: main#length+ 
o|removed side-effect free assignment to unused variable: main#find 
o|removed side-effect free assignment to unused variable: main#find-tail 
o|removed side-effect free assignment to unused variable: main#iota 
o|removed side-effect free assignment to unused variable: main#make-list 
o|removed side-effect free assignment to unused variable: main#posq 
o|removed side-effect free assignment to unused variable: main#posv 
o|removed side-effect free assignment to unused variable: main#TARGET_CC 
o|substituted constant variable: a3783 
o|merged explicitly consed rest parameter: args753 
o|propagated global variable: out754757 ##sys#standard-error 
o|substituted constant variable: a3788 
o|substituted constant variable: a3789 
o|contracted procedure: "(csc.scm:89) main#back-slash->forward-slash" 
o|inlining procedure: k3827 
o|inlining procedure: k3827 
o|inlining procedure: k3911 
o|inlining procedure: k3911 
o|removed side-effect free assignment to unused variable: main#dynamic-libchicken 
o|substituted constant variable: main#default-translation-optimization-options 
o|inlining procedure: k4212 
o|inlining procedure: k4212 
o|inlining procedure: k4221 
o|contracted procedure: "(csc.scm:304) main#repo-path" 
o|inlining procedure: k4191 
o|inlining procedure: k4191 
o|contracted procedure: "(csc.scm:294) main#destination-repository" 
o|inlining procedure: k2435 
o|inlining procedure: k2435 
o|inlining procedure: k4221 
o|inlining procedure: k6588 
o|inlining procedure: k6588 
o|removed side-effect free assignment to unused variable: main#copy-files 
o|inlining procedure: k7075 
o|inlining procedure: k7075 
o|inlining procedure: k7121 
o|inlining procedure: k7121 
o|contracted procedure: "(csc.scm:1016) main#library-files" 
o|contracted procedure: "(csc.scm:229) main#default-library" 
o|contracted procedure: "(csc.scm:1017) main#shared-library-files" 
o|contracted procedure: "(csc.scm:230) main#default-library-files" 
o|inlining procedure: k4014 
o|inlining procedure: k4014 
o|substituted constant variable: a7220 
o|inlining procedure: k7221 
o|inlining procedure: k7221 
o|inlining procedure: k7241 
o|inlining procedure: k7241 
o|contracted procedure: "(csc.scm:1057) main#cleanup" 
o|inlining procedure: k7143 
o|inlining procedure: k7143 
o|inlining procedure: k7164 
o|inlining procedure: k7164 
o|consed rest parameter at call site: "(csc.scm:1034) main#cons*" 2 
o|inlining procedure: k7262 
o|inlining procedure: k7262 
o|inlining procedure: k7353 
o|inlining procedure: k7353 
o|contracted procedure: "(csc.scm:1079) main#$system" 
o|inlining procedure: k7291 
o|inlining procedure: k7291 
o|propagated global variable: out17041707 ##sys#standard-output 
o|substituted constant variable: a7302 
o|substituted constant variable: a7303 
o|propagated global variable: out17041707 ##sys#standard-output 
o|inlining procedure: k7332 
o|inlining procedure: k7332 
o|inlining procedure: k7369 
o|inlining procedure: k7369 
o|contracted procedure: "(csc.scm:1119) main#run" 
o|merged explicitly consed rest parameter: os998 
o|merged explicitly consed rest parameter: n1001 
o|inlining procedure: k4294 
o|inlining procedure: k4294 
o|consed rest parameter at call site: "(csc.scm:526) main#stop" 2 
o|inlining procedure: k4331 
o|inlining procedure: k4331 
o|consed rest parameter at call site: "(csc.scm:529) main#cons*" 2 
o|inlining procedure: k4351 
o|propagated global variable: r43527824 main#shared-library-extension 
o|inlining procedure: k4351 
o|inlining procedure: k4363 
o|inlining procedure: k4392 
o|inlining procedure: k4392 
o|contracted procedure: "(csc.scm:591) main#run-linking" 
o|inlining procedure: k6644 
o|inlining procedure: k6644 
o|inlining procedure: k6659 
o|inlining procedure: k6659 
o|inlining procedure: k6685 
o|contracted procedure: "(csc.scm:970) main#rez" 
o|substituted constant variable: a7389 
o|substituted constant variable: a7390 
o|inlining procedure: k6685 
o|inlining procedure: k6711 
o|inlining procedure: k6711 
o|inlining procedure: k6721 
o|propagated global variable: r67227841 main#host-libdir 
o|inlining procedure: k6721 
o|substituted constant variable: a6731 
o|consed rest parameter at call site: "(csc.scm:948) main#cons*" 2 
o|substituted constant variable: main#link-output-flag 
o|inlining procedure: k6772 
o|inlining procedure: k6772 
o|propagated global variable: g14721476 main#object-files 
o|contracted procedure: "(csc.scm:942) main#collect-linked-objects" 
o|inlining procedure: k6931 
o|contracted procedure: "(csc.scm:989) main#delete-duplicates" 
o|inlining procedure: k3048 
o|inlining procedure: k3048 
o|contracted procedure: "(mini-srfi-1.scm:123) main#delete" 
o|inlining procedure: k2973 
o|inlining procedure: k2973 
o|inlining procedure: k6931 
o|contracted procedure: "(csc.scm:993) locate-objects1516" 
o|inlining procedure: k6860 
o|contracted procedure: "(csc.scm:983) g15291538" 
o|inlining procedure: k6836 
o|inlining procedure: k6836 
o|consed rest parameter at call site: "(csc.scm:985) main#stop" 2 
o|inlining procedure: k6860 
o|inlining procedure: k6894 
o|inlining procedure: k6894 
o|contracted procedure: "(csc.scm:991) locate-link-file1515" 
o|propagated global variable: tmp15841586 main#static 
o|propagated global variable: tmp15841586 main#static 
o|propagated global variable: ofiles1513 main#object-files 
o|propagated global variable: ofiles1513 main#object-files 
o|propagated global variable: out10361039 ##sys#standard-error 
o|substituted constant variable: a4405 
o|substituted constant variable: a4406 
o|substituted constant variable: a4433 
o|substituted constant variable: a4434 
o|inlining procedure: k4472 
o|inlining procedure: k4472 
o|propagated global variable: out10361039 ##sys#standard-error 
o|contracted procedure: "(csc.scm:579) main#run-compilation" 
o|substituted constant variable: main#compile-only-flag 
o|inlining procedure: k6342 
o|inlining procedure: k6342 
o|substituted constant variable: main#compile-output-flag 
o|consed rest parameter at call site: "(csc.scm:895) main#stop" 2 
o|inlining procedure: k6365 
o|substituted constant variable: a6371 
o|inlining procedure: k6365 
o|inlining procedure: k6427 
o|inlining procedure: k6427 
o|inlining procedure: k6445 
o|inlining procedure: k6445 
o|propagated global variable: g14161418 main#generated-rc-files 
o|inlining procedure: k6468 
o|inlining procedure: k6468 
o|propagated global variable: g13991401 main#generated-c-files 
o|inlining procedure: k6495 
o|inlining procedure: k6495 
o|propagated global variable: g13561380 main#rc-files 
o|contracted procedure: "(csc.scm:913) main#create-win-manifest" 
o|inlining procedure: k6546 
o|inlining procedure: k6546 
o|propagated global variable: g13461358 main#c-files 
o|inlining procedure: k4481 
o|inlining procedure: k4481 
o|contracted procedure: "(csc.scm:570) main#last" 
o|inlining procedure: k3253 
o|inlining procedure: k3253 
o|consed rest parameter at call site: "(csc.scm:566) main#stop" 2 
o|contracted procedure: "(csc.scm:577) main#run-translation" 
o|inlining procedure: k6272 
o|contracted procedure: "(csc.scm:836) g12771284" 
o|consed rest parameter at call site: "(csc.scm:851) main#cons*" 2 
o|inlining procedure: k6176 
o|inlining procedure: k6176 
o|inlining procedure: k6212 
o|inlining procedure: k6212 
o|consed rest parameter at call site: "(csc.scm:847) main#stop" 2 
o|inlining procedure: k6249 
o|inlining procedure: k6249 
o|substituted constant variable: a6258 
o|inlining procedure: k6272 
o|propagated global variable: g12831285 main#scheme-files 
o|contracted procedure: "(csc.scm:576) main#first" 
o|propagated global variable: x425 main#scheme-files 
o|contracted procedure: "(csc.scm:562) main#filter-map" 
o|propagated global variable: lst467 main#linked-extensions 
o|inlining procedure: k3151 
o|inlining procedure: k3151 
o|inlining procedure: k3140 
o|inlining procedure: k3140 
o|contracted procedure: "(csc.scm:552) main#builtin-link-options" 
o|inlining procedure: k4075 
o|contracted procedure: "(csc.scm:274) g931932" 
o|inlining procedure: k4097 
o|contracted procedure: "(csc.scm:276) g942951" 
o|inlining procedure: k4097 
o|inlining procedure: k4075 
o|substituted constant variable: a4141 
o|inlining procedure: k4154 
o|inlining procedure: k4154 
o|inlining procedure: k4163 
o|inlining procedure: k4163 
o|inlining procedure: k4363 
o|contracted procedure: "(csc.scm:598) main#usage" 
o|inlining procedure: k4614 
o|inlining procedure: k4614 
o|substituted constant variable: a4647 
o|substituted constant variable: a4648 
o|inlining procedure: k4661 
o|inlining procedure: k4661 
o|inlining procedure: k4682 
o|inlining procedure: k4682 
o|inlining procedure: k4701 
o|inlining procedure: k4701 
o|inlining procedure: k4721 
o|inlining procedure: k4721 
o|inlining procedure: k4745 
o|inlining procedure: k4745 
o|inlining procedure: k4765 
o|consed rest parameter at call site: "(csc.scm:631) t-options993" 1 
o|consed rest parameter at call site: "(csc.scm:629) main#cons*" 2 
o|inlining procedure: k4765 
o|consed rest parameter at call site: "(csc.scm:637) t-options993" 1 
o|inlining procedure: k4812 
o|consed rest parameter at call site: "(csc.scm:640) t-options993" 1 
o|inlining procedure: k4812 
o|consed rest parameter at call site: "(csc.scm:643) t-options993" 1 
o|inlining procedure: k4838 
o|inlining procedure: k4838 
o|inlining procedure: k4852 
o|inlining procedure: k4852 
o|inlining procedure: k4873 
o|consed rest parameter at call site: "(csc.scm:652) t-options993" 1 
o|consed rest parameter at call site: "(csc.scm:651) check994" 3 
o|inlining procedure: k4873 
o|consed rest parameter at call site: "(csc.scm:657) check994" 3 
o|inlining procedure: k4922 
o|consed rest parameter at call site: "(csc.scm:662) t-options993" 1 
o|consed rest parameter at call site: "(csc.scm:661) check994" 3 
o|inlining procedure: k4922 
o|contracted procedure: "(csc.scm:665) use-private-repository996" 
o|inlining procedure: k4954 
o|consed rest parameter at call site: "(csc.scm:668) t-options993" 1 
o|inlining procedure: k4954 
o|consed rest parameter at call site: "(csc.scm:671) t-options993" 1 
o|inlining procedure: k4974 
o|inlining procedure: k4974 
o|inlining procedure: k4992 
o|consed rest parameter at call site: "(csc.scm:684) main#cons*" 2 
o|inlining procedure: k4992 
o|inlining procedure: k5007 
o|inlining procedure: k5007 
o|consed rest parameter at call site: "(csc.scm:691) main#cons*" 2 
o|consed rest parameter at call site: "(csc.scm:689) check994" 3 
o|inlining procedure: k5038 
o|consed rest parameter at call site: "(csc.scm:694) check994" 3 
o|inlining procedure: k5038 
o|consed rest parameter at call site: "(csc.scm:698) main#cons*" 2 
o|inlining procedure: k5071 
o|consed rest parameter at call site: "(csc.scm:699) main#cons*" 2 
o|inlining procedure: k5071 
o|consed rest parameter at call site: "(csc.scm:700) main#cons*" 2 
o|inlining procedure: k5091 
o|consed rest parameter at call site: "(csc.scm:701) main#cons*" 2 
o|inlining procedure: k5091 
o|consed rest parameter at call site: "(csc.scm:702) main#cons*" 2 
o|inlining procedure: k5111 
o|consed rest parameter at call site: "(csc.scm:704) main#cons*" 2 
o|inlining procedure: k5111 
o|consed rest parameter at call site: "(csc.scm:705) main#cons*" 2 
o|inlining procedure: k5131 
o|consed rest parameter at call site: "(csc.scm:706) main#cons*" 2 
o|inlining procedure: k5131 
o|consed rest parameter at call site: "(csc.scm:707) main#cons*" 2 
o|inlining procedure: k5151 
o|consed rest parameter at call site: "(csc.scm:708) main#cons*" 2 
o|inlining procedure: k5151 
o|inlining procedure: k5169 
o|inlining procedure: k5169 
o|inlining procedure: k5193 
o|consed rest parameter at call site: "(csc.scm:717) check994" 3 
o|inlining procedure: k5193 
o|consed rest parameter at call site: "(csc.scm:721) check994" 3 
o|inlining procedure: k5227 
o|consed rest parameter at call site: "(csc.scm:725) check994" 3 
o|inlining procedure: k5227 
o|consed rest parameter at call site: "(csc.scm:729) check994" 3 
o|inlining procedure: k5261 
o|consed rest parameter at call site: "(csc.scm:734) main#cons*" 2 
o|consed rest parameter at call site: "(csc.scm:733) check994" 3 
o|inlining procedure: k5261 
o|consed rest parameter at call site: "(csc.scm:736) check994" 3 
o|inlining procedure: k5307 
o|inlining procedure: k5307 
o|consed rest parameter at call site: "(csc.scm:742) check994" 3 
o|inlining procedure: k5346 
o|substituted constant variable: a5385 
o|inlining procedure: k5386 
o|inlining procedure: k5386 
o|consed rest parameter at call site: "(csc.scm:746) check994" 3 
o|inlining procedure: k5346 
o|inlining procedure: k5401 
o|consed rest parameter at call site: "(csc.scm:755) t-options993" 1 
o|consed rest parameter at call site: "(csc.scm:754) check994" 3 
o|inlining procedure: k5401 
o|consed rest parameter at call site: "(csc.scm:759) t-options993" 1 
o|consed rest parameter at call site: "(csc.scm:758) check994" 3 
o|inlining procedure: k5441 
o|inlining procedure: k5441 
o|inlining procedure: k5483 
o|consed rest parameter at call site: "(csc.scm:773) t-options993" 1 
o|inlining procedure: k5483 
o|consed rest parameter at call site: "(csc.scm:778) t-options993" 1 
o|consed rest parameter at call site: "(csc.scm:775) check994" 3 
o|inlining procedure: k5514 
o|consed rest parameter at call site: "(csc.scm:781) t-options993" 1 
o|inlining procedure: k5514 
o|substituted constant variable: a5535 
o|substituted constant variable: a5532 
o|inlining procedure: k5529 
o|substituted constant variable: a5555 
o|inlining procedure: k5529 
o|substituted constant variable: a5562 
o|substituted constant variable: a5559 
o|substituted constant variable: a5582 
o|substituted constant variable: a5589 
o|substituted constant variable: a5586 
o|inlining procedure: k5583 
o|consed rest parameter at call site: "(csc.scm:793) t-options993" 1 
o|inlining procedure: k5583 
o|substituted constant variable: a5603 
o|substituted constant variable: a5600 
o|inlining procedure: k5604 
o|inlining procedure: k5604 
o|inlining procedure: k5615 
o|inlining procedure: k5615 
o|inlining procedure: k5638 
o|inlining procedure: k5668 
o|contracted procedure: "(csc.scm:803) g12221231" 
o|substituted constant variable: a5657 
o|inlining procedure: k5668 
o|inlining procedure: k5638 
o|consed rest parameter at call site: "(csc.scm:804) main#stop" 2 
o|contracted procedure: "(csc.scm:801) main#lset-difference/eq?" 
o|inlining procedure: k3353 
o|contracted procedure: "(mini-srfi-1.scm:164) g567568" 
o|inlining procedure: k3353 
o|consed rest parameter at call site: "(csc.scm:805) main#stop" 2 
o|substituted constant variable: a5717 
o|substituted constant variable: a5722 
o|substituted constant variable: a5731 
o|inlining procedure: k5733 
o|inlining procedure: k5751 
o|inlining procedure: k5751 
o|inlining procedure: k5779 
o|inlining procedure: k5779 
o|inlining procedure: k5815 
o|inlining procedure: k5815 
o|inlining procedure: k5733 
o|consed rest parameter at call site: "(csc.scm:829) main#stop" 2 
o|substituted constant variable: a5873 
o|substituted constant variable: a5880 
o|substituted constant variable: a5877 
o|substituted constant variable: a5885 
o|substituted constant variable: a5890 
o|substituted constant variable: a5899 
o|substituted constant variable: main#constant806 
o|substituted constant variable: main#constant803 
o|substituted constant variable: main#constant810 
o|substituted constant variable: a5902 
o|substituted constant variable: a5911 
o|substituted constant variable: a5913 
o|substituted constant variable: a5915 
o|substituted constant variable: a5917 
o|substituted constant variable: a5919 
o|substituted constant variable: a5921 
o|substituted constant variable: a5923 
o|substituted constant variable: a5925 
o|substituted constant variable: a5927 
o|substituted constant variable: a5929 
o|substituted constant variable: a5931 
o|substituted constant variable: a5933 
o|substituted constant variable: a5935 
o|substituted constant variable: a5940 
o|substituted constant variable: a5942 
o|inlining procedure: k5946 
o|inlining procedure: k5946 
o|substituted constant variable: a5953 
o|substituted constant variable: a5955 
o|substituted constant variable: a5957 
o|substituted constant variable: a5959 
o|substituted constant variable: a5961 
o|substituted constant variable: a5963 
o|substituted constant variable: a5965 
o|substituted constant variable: a5967 
o|substituted constant variable: a5969 
o|substituted constant variable: a5971 
o|substituted constant variable: a5973 
o|substituted constant variable: a5975 
o|substituted constant variable: a5977 
o|substituted constant variable: a5982 
o|substituted constant variable: a5984 
o|substituted constant variable: a5989 
o|substituted constant variable: a5991 
o|substituted constant variable: a5993 
o|substituted constant variable: a5995 
o|substituted constant variable: a5997 
o|substituted constant variable: a5999 
o|substituted constant variable: a6001 
o|substituted constant variable: a6003 
o|substituted constant variable: a6005 
o|substituted constant variable: a6010 
o|substituted constant variable: a6012 
o|substituted constant variable: a6014 
o|substituted constant variable: a6016 
o|substituted constant variable: a6021 
o|substituted constant variable: a6023 
o|substituted constant variable: a6025 
o|substituted constant variable: a6027 
o|substituted constant variable: a6029 
o|substituted constant variable: a6034 
o|substituted constant variable: a6036 
o|substituted constant variable: a6041 
o|substituted constant variable: a6043 
o|substituted constant variable: a6048 
o|substituted constant variable: a6050 
o|substituted constant variable: a6055 
o|substituted constant variable: a6057 
o|substituted constant variable: a6059 
o|substituted constant variable: a6061 
o|substituted constant variable: a6063 
o|substituted constant variable: a6065 
o|substituted constant variable: a6067 
o|substituted constant variable: a6069 
o|substituted constant variable: a6071 
o|substituted constant variable: a6073 
o|substituted constant variable: a6075 
o|substituted constant variable: a6077 
o|substituted constant variable: a6079 
o|substituted constant variable: a6081 
o|substituted constant variable: a6086 
o|substituted constant variable: a6088 
o|inlining procedure: k7473 
o|inlining procedure: k7473 
o|inlining procedure: k7484 
o|contracted procedure: "(csc.scm:244) g852853" 
o|inlining procedure: k7515 
o|contracted procedure: "(csc.scm:246) g863872" 
o|inlining procedure: k7515 
o|inlining procedure: k7549 
o|inlining procedure: k7549 
o|inlining procedure: k7484 
o|inlining procedure: k7611 
o|inlining procedure: k7611 
o|inlining procedure: k7621 
o|propagated global variable: r76228018 main#host-cflags 
o|inlining procedure: k7621 
o|propagated global variable: r76228020 main#default-cflags 
o|inlining procedure: k7624 
o|inlining procedure: k7624 
o|propagated global variable: r76258023 main#cygwin 
o|inlining procedure: k7628 
o|propagated global variable: r76298024 main#host-cxx 
o|inlining procedure: k7628 
o|propagated global variable: r76298026 main#default-cxx 
o|inlining procedure: k7632 
o|propagated global variable: r76338028 main#host-cc 
o|inlining procedure: k7632 
o|propagated global variable: r76338030 main#default-cc 
o|inlining procedure: k7636 
o|inlining procedure: k7636 
o|inlining procedure: k7646 
o|propagated global variable: r76478036 main#host-cxx 
o|inlining procedure: k7646 
o|propagated global variable: r76478038 main#default-cxx 
o|inlining procedure: k7650 
o|propagated global variable: r76518040 main#host-cc 
o|inlining procedure: k7650 
o|propagated global variable: r76518042 main#default-cc 
o|inlining procedure: k7695 
o|inlining procedure: k7695 
o|simplifications: ((if . 2)) 
o|replaced variables: 829 
o|removed binding forms: 444 
o|substituted constant variable: r24607757 
o|removed side-effect free assignment to unused variable: main#every 
o|removed side-effect free assignment to unused variable: main#any 
o|removed side-effect free assignment to unused variable: main#list-tabulate 
o|propagated global variable: out754757 ##sys#standard-error 
o|removed side-effect free assignment to unused variable: main#link-output-flag 
o|removed side-effect free assignment to unused variable: main#compile-output-flag 
o|removed side-effect free assignment to unused variable: main#default-translation-optimization-options 
o|removed side-effect free assignment to unused variable: main#constant803 
o|removed side-effect free assignment to unused variable: main#constant806 
o|removed side-effect free assignment to unused variable: main#constant810 
o|removed side-effect free assignment to unused variable: main#compile-only-flag 
o|substituted constant variable: rest188190 
o|substituted constant variable: mode189 
o|folded constant expression: (scheme#eq? (quote target) (quote target)) 
o|substituted constant variable: r42227783 
o|substituted constant variable: r71657802 
o|substituted constant variable: r72927808 
o|substituted constant variable: r72927811 
o|propagated global variable: out17041707 ##sys#standard-output 
o|inlining procedure: k4331 
o|inlining procedure: k4331 
o|substituted constant variable: r43327822 
o|substituted constant variable: r43327822 
o|inlining procedure: k4351 
o|propagated global variable: r43528068 main#object-extension 
o|propagated global variable: r43528068 main#object-extension 
o|inlining procedure: k4351 
o|propagated global variable: r43528070 main#executable-extension 
o|propagated global variable: r43528070 main#executable-extension 
o|substituted constant variable: a6764 
o|propagated global variable: out10361039 ##sys#standard-error 
o|substituted constant variable: r44737859 
o|substituted constant variable: r44737859 
o|substituted constant variable: r44737861 
o|substituted constant variable: r44737861 
o|substituted constant variable: r63437864 
o|substituted constant variable: a6348 
o|substituted constant variable: r63667866 
o|substituted constant variable: r62137884 
o|substituted constant variable: r62137884 
o|inlining procedure: k6212 
o|inlining procedure: k6212 
o|substituted constant variable: r62507888 
o|substituted constant variable: r62507888 
o|inlining procedure: k6249 
o|inlining procedure: k6249 
o|substituted constant variable: r31417896 
o|propagated global variable: g473474 main#linked-extensions 
o|substituted constant variable: r40767901 
o|substituted constant variable: r40767901 
o|substituted constant variable: r41557903 
o|substituted constant variable: r41557903 
o|inlining procedure: k4154 
o|propagated global variable: r41558138 main#host-libdir 
o|propagated global variable: r41558138 main#host-libdir 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|substituted constant variable: r53877966 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|contracted procedure: "(mini-srfi-1.scm:166) main#filter" 
o|substituted constant variable: r30977767 
o|inlining procedure: k4596 
o|substituted constant variable: r74748004 
o|substituted constant variable: r74748004 
o|substituted constant variable: r74858012 
o|substituted constant variable: r74858012 
o|inlining procedure: k7695 
o|replaced variables: 50 
o|removed binding forms: 906 
o|removed conditional forms: 1 
o|contracted procedure: k2438 
o|inlining procedure: k7366 
o|inlining procedure: k6812 
o|inlining procedure: k4465 
o|propagated global variable: r44668471 main#quotewrap-no-slash-trans 
o|inlining procedure: k4465 
o|propagated global variable: r44668475 main#quotewrap 
o|inlining procedure: k6359 
o|inlining procedure: k6359 
o|inlining procedure: k4499 
o|inlining procedure: k4555 
o|inlining procedure: k4131 
o|inlining procedure: k4131 
o|replaced variables: 26 
o|removed binding forms: 201 
o|inlining procedure: k3840 
o|substituted constant variable: r2439 
o|substituted constant variable: r43328064 
o|substituted constant variable: r43328066 
o|inlining procedure: "(csc.scm:586) main#quotewrap-no-slash-trans" 
o|propagated global variable: str7748544 main#target-filename 
o|substituted constant variable: r63608479 
o|substituted constant variable: r63608480 
o|substituted constant variable: r45008491 
o|substituted constant variable: r62138116 
o|substituted constant variable: r62138118 
o|substituted constant variable: r62508120 
o|substituted constant variable: r62508122 
o|substituted constant variable: r41328505 
o|simplifications: ((if . 1) (let . 1)) 
o|replaced variables: 7 
o|removed binding forms: 28 
o|removed conditional forms: 5 
o|removed side-effect free assignment to unused variable: main#host-repo 
o|inlining procedure: k2432 
o|replaced variables: 3 
o|removed binding forms: 14 
o|substituted constant variable: r24338585 
o|removed binding forms: 4 
o|removed conditional forms: 1 
o|removed binding forms: 1 
o|simplifications: ((##core#call . 384) (if . 37)) 
o|  call simplifications:
o|    scheme#assq
o|    ##sys#call-with-values
o|    scheme#string-ci=?
o|    ##sys#size	4
o|    chicken.fixnum#fx>	4
o|    scheme#string
o|    scheme#cadr
o|    scheme#number?
o|    ##sys#list
o|    scheme#string=?
o|    scheme#member	10
o|    scheme#cdr	19
o|    scheme#equal?
o|    scheme#length	3
o|    scheme#char=?
o|    scheme#string->list	3
o|    scheme#memq	5
o|    scheme#char-whitespace?	4
o|    scheme#list->string
o|    scheme#string-length
o|    scheme#string-ref
o|    scheme#list	34
o|    ##sys#check-list	15
o|    scheme#pair?	20
o|    ##sys#setslot	10
o|    ##sys#slot	48
o|    scheme#eq?	83
o|    scheme#not	11
o|    ##sys#apply
o|    scheme#null?	14
o|    scheme#car	27
o|    scheme#cons	56
o|contracted procedure: k7737 
o|contracted procedure: k2332 
o|contracted procedure: k2920 
o|contracted procedure: k2931 
o|contracted procedure: k3759 
o|contracted procedure: k3763 
o|contracted procedure: k3767 
o|contracted procedure: k3771 
o|contracted procedure: k3775 
o|contracted procedure: k3818 
o|contracted procedure: k3821 
o|contracted procedure: k3858 
o|contracted procedure: k3886 
o|contracted procedure: k3914 
o|contracted procedure: k3992 
o|contracted procedure: k4000 
o|contracted procedure: k4041 
o|contracted procedure: k7594 
o|contracted procedure: k7590 
o|contracted procedure: k4044 
o|contracted procedure: k4224 
o|contracted procedure: k2450 
o|contracted procedure: k2432 
o|contracted procedure: k4234 
o|contracted procedure: k6573 
o|contracted procedure: k6579 
o|contracted procedure: k6591 
o|contracted procedure: k6594 
o|contracted procedure: k6597 
o|contracted procedure: k6605 
o|contracted procedure: k6613 
o|contracted procedure: k7060 
o|contracted procedure: k7066 
o|contracted procedure: k7078 
o|contracted procedure: k7081 
o|contracted procedure: k7084 
o|contracted procedure: k7092 
o|contracted procedure: k7100 
o|contracted procedure: k7121 
o|contracted procedure: k7207 
o|contracted procedure: k7216 
o|contracted procedure: k7167 
o|contracted procedure: k7170 
o|contracted procedure: k7176 
o|contracted procedure: k7200 
o|contracted procedure: k7259 
o|contracted procedure: k7294 
o|contracted procedure: k7298 
o|contracted procedure: k4298 
o|contracted procedure: k4308 
o|contracted procedure: k4302 
o|contracted procedure: k4366 
o|contracted procedure: k6626 
o|contracted procedure: k6629 
o|contracted procedure: k6650 
o|contracted procedure: k6662 
o|contracted procedure: k6672 
o|contracted procedure: k6676 
o|contracted procedure: k6679 
o|contracted procedure: k6741 
o|contracted procedure: k6749 
o|contracted procedure: k6775 
o|contracted procedure: k6778 
o|contracted procedure: k6781 
o|contracted procedure: k6789 
o|contracted procedure: k6797 
o|propagated global variable: g14721476 main#object-files 
o|contracted procedure: k6934 
o|contracted procedure: k3051 
o|contracted procedure: k3054 
o|contracted procedure: k3064 
o|contracted procedure: k2976 
o|contracted procedure: k3002 
o|contracted procedure: k6828 
o|contracted procedure: k6842 
o|contracted procedure: k6845 
o|contracted procedure: k6851 
o|contracted procedure: k6863 
o|contracted procedure: k6866 
o|contracted procedure: k6869 
o|contracted procedure: k6877 
o|contracted procedure: k6885 
o|contracted procedure: k6897 
o|contracted procedure: k6900 
o|contracted procedure: k6903 
o|contracted procedure: k6911 
o|contracted procedure: k6919 
o|contracted procedure: k6977 
o|contracted procedure: k6984 
o|contracted procedure: k6988 
o|contracted procedure: k7001 
o|contracted procedure: k6997 
o|contracted procedure: k4401 
o|contracted procedure: k4454 
o|contracted procedure: k6307 
o|contracted procedure: k6311 
o|contracted procedure: k6323 
o|contracted procedure: k6319 
o|contracted procedure: k6342 
o|contracted procedure: k6353 
o|contracted procedure: k6373 
o|contracted procedure: k6359 
o|contracted procedure: k6376 
o|contracted procedure: k6394 
o|contracted procedure: k6398 
o|contracted procedure: k6406 
o|contracted procedure: k6417 
o|contracted procedure: k6430 
o|contracted procedure: k6436 
o|contracted procedure: k6448 
o|contracted procedure: k6458 
o|contracted procedure: k6462 
o|propagated global variable: g14161418 main#generated-rc-files 
o|contracted procedure: k6471 
o|contracted procedure: k6481 
o|contracted procedure: k6485 
o|propagated global variable: g13991401 main#generated-c-files 
o|contracted procedure: k6498 
o|contracted procedure: k6508 
o|contracted procedure: k6512 
o|propagated global variable: g13561380 main#rc-files 
o|contracted procedure: k6525 
o|contracted procedure: k6529 
o|contracted procedure: k7446 
o|contracted procedure: k7442 
o|contracted procedure: k7438 
o|contracted procedure: k6549 
o|contracted procedure: k6559 
o|contracted procedure: k6563 
o|propagated global variable: g13461358 main#c-files 
o|contracted procedure: k4475 
o|contracted procedure: k4496 
o|contracted procedure: k4493 
o|contracted procedure: k3266 
o|contracted procedure: k3256 
o|contracted procedure: k4505 
o|contracted procedure: k4499 
o|contracted procedure: k6263 
o|contracted procedure: k6275 
o|contracted procedure: k6285 
o|contracted procedure: k6289 
o|contracted procedure: k6260 
o|contracted procedure: k6255 
o|contracted procedure: k6094 
o|contracted procedure: k6118 
o|contracted procedure: k6122 
o|contracted procedure: k6125 
o|contracted procedure: k6129 
o|contracted procedure: k6157 
o|contracted procedure: k6161 
o|contracted procedure: k6167 
o|contracted procedure: k6179 
o|contracted procedure: k6182 
o|contracted procedure: k6185 
o|contracted procedure: k6193 
o|contracted procedure: k6201 
o|contracted procedure: k6232 
o|contracted procedure: k6242 
o|propagated global variable: g12831285 main#scheme-files 
o|contracted procedure: k4525 
o|contracted procedure: k4528 
o|contracted procedure: k4532 
o|contracted procedure: k4538 
o|contracted procedure: k3131 
o|contracted procedure: k3143 
o|contracted procedure: k3166 
o|contracted procedure: k3174 
o|propagated global variable: g473474 main#linked-extensions 
o|contracted procedure: k4080 
o|contracted procedure: k4100 
o|contracted procedure: k4103 
o|contracted procedure: k4106 
o|contracted procedure: k4114 
o|contracted procedure: k4122 
o|contracted procedure: k4589 
o|contracted procedure: k4602 
o|contracted procedure: k4605 
o|contracted procedure: k4278 
o|contracted procedure: k4274 
o|contracted procedure: k4270 
o|contracted procedure: k4266 
o|contracted procedure: k4262 
o|contracted procedure: k4258 
o|contracted procedure: k4254 
o|contracted procedure: k4617 
o|contracted procedure: k4633 
o|contracted procedure: k4664 
o|contracted procedure: k4672 
o|contracted procedure: k4678 
o|contracted procedure: k4685 
o|contracted procedure: k4689 
o|contracted procedure: k4696 
o|contracted procedure: k4704 
o|contracted procedure: k4712 
o|contracted procedure: k4724 
o|contracted procedure: k4736 
o|contracted procedure: k4748 
o|contracted procedure: k4760 
o|contracted procedure: k4768 
o|contracted procedure: k4771 
o|contracted procedure: k4785 
o|contracted procedure: k4793 
o|contracted procedure: k4799 
o|contracted procedure: k4802 
o|contracted procedure: k4806 
o|contracted procedure: k4815 
o|contracted procedure: k4818 
o|contracted procedure: k4828 
o|contracted procedure: k4831 
o|contracted procedure: k4841 
o|contracted procedure: k4848 
o|contracted procedure: k4855 
o|contracted procedure: k4862 
o|contracted procedure: k4865 
o|contracted procedure: k4870 
o|contracted procedure: k4876 
o|contracted procedure: k4890 
o|contracted procedure: k4898 
o|contracted procedure: k4902 
o|contracted procedure: k4908 
o|contracted procedure: k4915 
o|contracted procedure: k4919 
o|contracted procedure: k4925 
o|contracted procedure: k4928 
o|contracted procedure: k4938 
o|contracted procedure: k4942 
o|contracted procedure: k4948 
o|contracted procedure: k4341 
o|contracted procedure: k4957 
o|contracted procedure: k4967 
o|contracted procedure: k4977 
o|contracted procedure: k4984 
o|contracted procedure: k4989 
o|contracted procedure: k4996 
o|contracted procedure: k5010 
o|contracted procedure: k5017 
o|contracted procedure: k5027 
o|contracted procedure: k5035 
o|contracted procedure: k5041 
o|contracted procedure: k5044 
o|contracted procedure: k5050 
o|contracted procedure: k5054 
o|contracted procedure: k5061 
o|contracted procedure: k5064 
o|contracted procedure: k5074 
o|contracted procedure: k5084 
o|contracted procedure: k5094 
o|contracted procedure: k5104 
o|contracted procedure: k5114 
o|contracted procedure: k5124 
o|contracted procedure: k5134 
o|contracted procedure: k5144 
o|contracted procedure: k5154 
o|contracted procedure: k5164 
o|contracted procedure: k5172 
o|contracted procedure: k5184 
o|contracted procedure: k5187 
o|contracted procedure: k5196 
o|contracted procedure: k5203 
o|contracted procedure: k5207 
o|contracted procedure: k5213 
o|contracted procedure: k5220 
o|contracted procedure: k5224 
o|contracted procedure: k5230 
o|contracted procedure: k5237 
o|contracted procedure: k5241 
o|contracted procedure: k5247 
o|contracted procedure: k5254 
o|contracted procedure: k5258 
o|contracted procedure: k5264 
o|contracted procedure: k5275 
o|contracted procedure: k5279 
o|contracted procedure: k5285 
o|contracted procedure: k5296 
o|contracted procedure: k5304 
o|contracted procedure: k5310 
o|contracted procedure: k5318 
o|contracted procedure: k5324 
o|contracted procedure: k5335 
o|contracted procedure: k5343 
o|contracted procedure: k5349 
o|contracted procedure: k5356 
o|contracted procedure: k5363 
o|contracted procedure: k5374 
o|contracted procedure: k5389 
o|contracted procedure: k5398 
o|contracted procedure: k5404 
o|contracted procedure: k5414 
o|contracted procedure: k5418 
o|contracted procedure: k5424 
o|contracted procedure: k5434 
o|contracted procedure: k5438 
o|contracted procedure: k5444 
o|contracted procedure: k5464 
o|contracted procedure: k5477 
o|contracted procedure: k5473 
o|contracted procedure: k5486 
o|contracted procedure: k5495 
o|contracted procedure: k5501 
o|contracted procedure: k5511 
o|contracted procedure: k5544 
o|contracted procedure: k5547 
o|contracted procedure: k5571 
o|contracted procedure: k5574 
o|contracted procedure: k5612 
o|contracted procedure: k5626 
o|contracted procedure: k5714 
o|contracted procedure: k5632 
o|contracted procedure: k5635 
o|contracted procedure: k5641 
o|contracted procedure: k5649 
o|contracted procedure: k5671 
o|contracted procedure: k5674 
o|contracted procedure: k5677 
o|contracted procedure: k5685 
o|contracted procedure: k5693 
o|contracted procedure: k5659 
o|contracted procedure: k3356 
o|contracted procedure: k3363 
o|contracted procedure: k3386 
o|contracted procedure: k3379 
o|contracted procedure: k3087 
o|contracted procedure: k3099 
o|contracted procedure: k3117 
o|contracted procedure: k3125 
o|contracted procedure: k5728 
o|contracted procedure: k5719 
o|contracted procedure: k5754 
o|contracted procedure: k5762 
o|contracted procedure: k5768 
o|contracted procedure: k5776 
o|contracted procedure: k5782 
o|contracted procedure: k5790 
o|contracted procedure: k5796 
o|contracted procedure: k5808 
o|contracted procedure: k5812 
o|contracted procedure: k5818 
o|contracted procedure: k5827 
o|contracted procedure: k5843 
o|contracted procedure: k5851 
o|contracted procedure: k5866 
o|contracted procedure: k5882 
o|contracted procedure: k5874 
o|contracted procedure: k5896 
o|contracted procedure: k5887 
o|contracted procedure: k5905 
o|contracted procedure: k5943 
o|contracted procedure: k7489 
o|contracted procedure: k7497 
o|contracted procedure: k7506 
o|contracted procedure: k7518 
o|contracted procedure: k7521 
o|contracted procedure: k7524 
o|contracted procedure: k7532 
o|contracted procedure: k7540 
o|contracted procedure: k7552 
o|contracted procedure: k7555 
o|contracted procedure: k7558 
o|contracted procedure: k7566 
o|contracted procedure: k7574 
o|inlining procedure: k7688 
o|inlining procedure: k7688 
o|inlining procedure: k7688 
o|contracted procedure: k7745 
o|contracted procedure: k7749 
o|contracted procedure: k7753 
o|simplifications: ((if . 3) (let . 53)) 
o|removed binding forms: 356 
o|inlining procedure: k5023 
o|inlining procedure: k5023 
o|inlining procedure: k5359 
o|inlining procedure: k5359 
o|substituted constant variable: r7746 
o|substituted constant variable: r7750 
o|substituted constant variable: r7746 
o|substituted constant variable: r7750 
o|substituted constant variable: r7754 
o|replaced variables: 77 
o|removed binding forms: 1 
o|inlining procedure: k4231 
o|propagated global variable: r42328984 main#target-repo 
o|inlining procedure: k4231 
o|inlining procedure: k4596 
o|simplifications: ((if . 2)) 
o|removed binding forms: 51 
o|removed binding forms: 1 
o|direct leaf routine/allocation: loop527 0 
o|direct leaf routine/allocation: g487488 3 
o|direct leaf routine/allocation: g11971198 3 
o|contracted procedure: k4489 
o|converted assignments to bindings: (loop527) 
o|inlining procedure: "(csc.scm:772) k4596" 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|customizable procedures: (main#probe-dir k3900 k7477 map-loop884901 map-loop857908 k5175 k5458 k5461 k5517 k5526 k5835 k5799 k5618 foldr454457 g459460 foldl560564 map-loop12161234 k5366 shared-build995 check994 k4774 t-options993 loop1017 k4064 k4068 map-loop936961 foldr472475 g477478 k4380 k4511 k4514 k6153 k6218 k6208 map-loop12971318 k6106 for-each-loop12761330 generate-target-filename997 g13401357 for-each-loop13391370 k6515 k6382 g13501379 for-each-loop13491385 for-each-loop13921402 for-each-loop14091419 k6335 main#compiler-options k6947 map-loop15461563 map-loop15231570 loop1577 loop417 loop437 map-loop14601477 main#linker-options main#linker-libraries main#command for-each-loop14941504 main#stop g17001701 main#string-any k7188 fold1650 main#cons* lp1663 main#libchicken map-loop16161633 map-loop14321449 loop404) 
o|calls to known targets: 300 
o|identified direct recursive calls: f_2915 1 
o|identified direct recursive calls: f_7162 1 
o|identified direct recursive calls: f_3251 1 
o|identified direct recursive calls: f_3138 1 
o|identified direct recursive calls: f_3094 1 
o|fast box initializations: 30 
o|fast global references: 404 
o|fast global assignments: 199 
o|dropping unused closure argument: f_2457 
o|dropping unused closure argument: f_2909 
o|dropping unused closure argument: f_3251 
o|dropping unused closure argument: f_3785 
o|dropping unused closure argument: f_3905 
o|dropping unused closure argument: f_4285 
o|dropping unused closure argument: f_4292 
o|dropping unused closure argument: f_4315 
o|dropping unused closure argument: f_4345 
o|dropping unused closure argument: f_6567 
o|dropping unused closure argument: f_7054 
o|dropping unused closure argument: f_7107 
o|dropping unused closure argument: f_7205 
o|dropping unused closure argument: f_7351 
*/
/* end of file */

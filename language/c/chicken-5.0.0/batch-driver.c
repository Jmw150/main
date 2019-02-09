/* Generated from batch-driver.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: batch-driver.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -emit-import-library chicken.compiler.batch-driver -output-file batch-driver.c
   unit: batch-driver
   uses: library eval expand extras data-structures pathname support compiler-syntax compiler optimizer internal scrutinizer lfa2 c-platform c-backend user-pass
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_externimport void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_support_toplevel)
C_externimport void C_ccall C_support_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_compiler_2dsyntax_toplevel)
C_externimport void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_compiler_toplevel)
C_externimport void C_ccall C_compiler_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_optimizer_toplevel)
C_externimport void C_ccall C_optimizer_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_scrutinizer_toplevel)
C_externimport void C_ccall C_scrutinizer_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_lfa2_toplevel)
C_externimport void C_ccall C_lfa2_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_c_2dplatform_toplevel)
C_externimport void C_ccall C_c_2dplatform_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_c_2dbackend_toplevel)
C_externimport void C_ccall C_c_2dbackend_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_user_2dpass_toplevel)
C_externimport void C_ccall C_user_2dpass_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[482];
static double C_possibly_force_alignment;


C_noret_decl(f8581)
static void C_ccall f8581(C_word c,C_word *av) C_noret;
C_noret_decl(f9056)
static void C_ccall f9056(C_word c,C_word *av) C_noret;
C_noret_decl(f9062)
static void C_ccall f9062(C_word c,C_word *av) C_noret;
C_noret_decl(f9068)
static void C_ccall f9068(C_word c,C_word *av) C_noret;
C_noret_decl(f9074)
static void C_ccall f9074(C_word c,C_word *av) C_noret;
C_noret_decl(f9080)
static void C_ccall f9080(C_word c,C_word *av) C_noret;
C_noret_decl(f9086)
static void C_ccall f9086(C_word c,C_word *av) C_noret;
C_noret_decl(f9098)
static void C_ccall f9098(C_word c,C_word *av) C_noret;
C_noret_decl(f9106)
static void C_ccall f9106(C_word c,C_word *av) C_noret;
C_noret_decl(f9118)
static void C_ccall f9118(C_word c,C_word *av) C_noret;
C_noret_decl(f9142)
static void C_ccall f9142(C_word c,C_word *av) C_noret;
C_noret_decl(f9148)
static void C_ccall f9148(C_word c,C_word *av) C_noret;
C_noret_decl(f9162)
static void C_ccall f9162(C_word c,C_word *av) C_noret;
C_noret_decl(f9168)
static void C_ccall f9168(C_word c,C_word *av) C_noret;
C_noret_decl(f9174)
static void C_ccall f9174(C_word c,C_word *av) C_noret;
C_noret_decl(f9180)
static void C_ccall f9180(C_word c,C_word *av) C_noret;
C_noret_decl(f9186)
static void C_ccall f9186(C_word c,C_word *av) C_noret;
C_noret_decl(f9200)
static void C_ccall f9200(C_word c,C_word *av) C_noret;
C_noret_decl(f9216)
static void C_ccall f9216(C_word c,C_word *av) C_noret;
C_noret_decl(f9222)
static void C_ccall f9222(C_word c,C_word *av) C_noret;
C_noret_decl(f9228)
static void C_ccall f9228(C_word c,C_word *av) C_noret;
C_noret_decl(f9234)
static void C_ccall f9234(C_word c,C_word *av) C_noret;
C_noret_decl(f9240)
static void C_ccall f9240(C_word c,C_word *av) C_noret;
C_noret_decl(f_2664)
static void C_ccall f_2664(C_word c,C_word *av) C_noret;
C_noret_decl(f_2667)
static void C_ccall f_2667(C_word c,C_word *av) C_noret;
C_noret_decl(f_2670)
static void C_ccall f_2670(C_word c,C_word *av) C_noret;
C_noret_decl(f_2673)
static void C_ccall f_2673(C_word c,C_word *av) C_noret;
C_noret_decl(f_2676)
static void C_ccall f_2676(C_word c,C_word *av) C_noret;
C_noret_decl(f_2679)
static void C_ccall f_2679(C_word c,C_word *av) C_noret;
C_noret_decl(f_2682)
static void C_ccall f_2682(C_word c,C_word *av) C_noret;
C_noret_decl(f_2685)
static void C_ccall f_2685(C_word c,C_word *av) C_noret;
C_noret_decl(f_2688)
static void C_ccall f_2688(C_word c,C_word *av) C_noret;
C_noret_decl(f_2691)
static void C_ccall f_2691(C_word c,C_word *av) C_noret;
C_noret_decl(f_2694)
static void C_ccall f_2694(C_word c,C_word *av) C_noret;
C_noret_decl(f_2697)
static void C_ccall f_2697(C_word c,C_word *av) C_noret;
C_noret_decl(f_2700)
static void C_ccall f_2700(C_word c,C_word *av) C_noret;
C_noret_decl(f_2703)
static void C_ccall f_2703(C_word c,C_word *av) C_noret;
C_noret_decl(f_2706)
static void C_ccall f_2706(C_word c,C_word *av) C_noret;
C_noret_decl(f_2709)
static void C_ccall f_2709(C_word c,C_word *av) C_noret;
C_noret_decl(f_2910)
static void C_fcall f_2910(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2925)
static void C_fcall f_2925(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2933)
static void C_fcall f_2933(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2941)
static void C_ccall f_2941(C_word c,C_word *av) C_noret;
C_noret_decl(f_2952)
static void C_ccall f_2952(C_word c,C_word *av) C_noret;
C_noret_decl(f_2965)
static void C_fcall f_2965(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word *av) C_noret;
C_noret_decl(f_2983)
static void C_ccall f_2983(C_word c,C_word *av) C_noret;
C_noret_decl(f_2995)
static void C_ccall f_2995(C_word c,C_word *av) C_noret;
C_noret_decl(f_2997)
static void C_fcall f_2997(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3044)
static void C_ccall f_3044(C_word c,C_word *av) C_noret;
C_noret_decl(f_3046)
static void C_fcall f_3046(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3086)
static void C_fcall f_3086(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3108)
static void C_ccall f_3108(C_word c,C_word *av) C_noret;
C_noret_decl(f_3120)
static C_word C_fcall f_3120(C_word t0);
C_noret_decl(f_3172)
static void C_fcall f_3172(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3178)
static void C_fcall f_3178(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3196)
static void C_ccall f_3196(C_word c,C_word *av) C_noret;
C_noret_decl(f_3206)
static void C_fcall f_3206(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3233)
static void C_ccall f_3233(C_word c,C_word *av) C_noret;
C_noret_decl(f_3320)
static void C_fcall f_3320(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3329)
static void C_fcall f_3329(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3337)
static void C_fcall f_3337(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3344)
static void C_ccall f_3344(C_word c,C_word *av) C_noret;
C_noret_decl(f_3358)
static void C_ccall f_3358(C_word c,C_word *av) C_noret;
C_noret_decl(f_3419)
static void C_ccall f_3419(C_word c,C_word *av) C_noret;
C_noret_decl(f_3427)
static void C_ccall f_3427(C_word c,C_word *av) C_noret;
C_noret_decl(f_3710)
static void C_ccall f_3710(C_word c,C_word *av) C_noret;
C_noret_decl(f_3716)
static void C_ccall f_3716(C_word c,C_word *av) C_noret;
C_noret_decl(f_3995)
static void C_ccall f_3995(C_word c,C_word *av) C_noret;
C_noret_decl(f_4001)
static void C_ccall f_4001(C_word c,C_word *av) C_noret;
C_noret_decl(f_4008)
static void C_ccall f_4008(C_word c,C_word *av) C_noret;
C_noret_decl(f_4014)
static void C_ccall f_4014(C_word c,C_word *av) C_noret;
C_noret_decl(f_4017)
static void C_ccall f_4017(C_word c,C_word *av) C_noret;
C_noret_decl(f_4020)
static void C_ccall f_4020(C_word c,C_word *av) C_noret;
C_noret_decl(f_4023)
static void C_ccall f_4023(C_word c,C_word *av) C_noret;
C_noret_decl(f_4026)
static void C_ccall f_4026(C_word c,C_word *av) C_noret;
C_noret_decl(f_4032)
static void C_ccall f_4032(C_word c,C_word *av) C_noret;
C_noret_decl(f_4035)
static void C_ccall f_4035(C_word c,C_word *av) C_noret;
C_noret_decl(f_4038)
static void C_ccall f_4038(C_word c,C_word *av) C_noret;
C_noret_decl(f_4044)
static void C_ccall f_4044(C_word c,C_word *av) C_noret;
C_noret_decl(f_4047)
static void C_ccall f_4047(C_word c,C_word *av) C_noret;
C_noret_decl(f_4050)
static void C_ccall f_4050(C_word c,C_word *av) C_noret;
C_noret_decl(f_4056)
static void C_ccall f_4056(C_word c,C_word *av) C_noret;
C_noret_decl(f_4059)
static void C_ccall f_4059(C_word c,C_word *av) C_noret;
C_noret_decl(f_4062)
static void C_ccall f_4062(C_word c,C_word *av) C_noret;
C_noret_decl(f_4068)
static void C_ccall f_4068(C_word c,C_word *av) C_noret;
C_noret_decl(f_4071)
static void C_ccall f_4071(C_word c,C_word *av) C_noret;
C_noret_decl(f_4074)
static void C_ccall f_4074(C_word c,C_word *av) C_noret;
C_noret_decl(f_4080)
static void C_ccall f_4080(C_word c,C_word *av) C_noret;
C_noret_decl(f_4083)
static void C_ccall f_4083(C_word c,C_word *av) C_noret;
C_noret_decl(f_4088)
static void C_fcall f_4088(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4092)
static void C_ccall f_4092(C_word c,C_word *av) C_noret;
C_noret_decl(f_4104)
static void C_ccall f_4104(C_word c,C_word *av) C_noret;
C_noret_decl(f_4115)
static void C_ccall f_4115(C_word c,C_word *av) C_noret;
C_noret_decl(f_4128)
static void C_fcall f_4128(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4138)
static void C_ccall f_4138(C_word c,C_word *av) C_noret;
C_noret_decl(f_4151)
static void C_fcall f_4151(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4161)
static void C_ccall f_4161(C_word c,C_word *av) C_noret;
C_noret_decl(f_4174)
static void C_fcall f_4174(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4184)
static void C_ccall f_4184(C_word c,C_word *av) C_noret;
C_noret_decl(f_4197)
static void C_fcall f_4197(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4201)
static void C_fcall f_4201(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4206)
static void C_ccall f_4206(C_word c,C_word *av) C_noret;
C_noret_decl(f_4216)
static void C_ccall f_4216(C_word c,C_word *av) C_noret;
C_noret_decl(f_4219)
static void C_ccall f_4219(C_word c,C_word *av) C_noret;
C_noret_decl(f_4222)
static void C_ccall f_4222(C_word c,C_word *av) C_noret;
C_noret_decl(f_4225)
static void C_ccall f_4225(C_word c,C_word *av) C_noret;
C_noret_decl(f_4228)
static void C_ccall f_4228(C_word c,C_word *av) C_noret;
C_noret_decl(f_4231)
static void C_ccall f_4231(C_word c,C_word *av) C_noret;
C_noret_decl(f_4245)
static void C_ccall f_4245(C_word c,C_word *av) C_noret;
C_noret_decl(f_4256)
static void C_ccall f_4256(C_word c,C_word *av) C_noret;
C_noret_decl(f_4260)
static void C_ccall f_4260(C_word c,C_word *av) C_noret;
C_noret_decl(f_4268)
static void C_fcall f_4268(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4278)
static void C_ccall f_4278(C_word c,C_word *av) C_noret;
C_noret_decl(f_4292)
static void C_fcall f_4292(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4298)
static void C_ccall f_4298(C_word c,C_word *av) C_noret;
C_noret_decl(f_4309)
static void C_ccall f_4309(C_word c,C_word *av) C_noret;
C_noret_decl(f_4313)
static void C_ccall f_4313(C_word c,C_word *av) C_noret;
C_noret_decl(f_4319)
static void C_fcall f_4319(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4325)
static void C_ccall f_4325(C_word c,C_word *av) C_noret;
C_noret_decl(f_4336)
static void C_ccall f_4336(C_word c,C_word *av) C_noret;
C_noret_decl(f_4340)
static void C_ccall f_4340(C_word c,C_word *av) C_noret;
C_noret_decl(f_4363)
static void C_ccall f_4363(C_word c,C_word *av) C_noret;
C_noret_decl(f_4379)
static void C_ccall f_4379(C_word c,C_word *av) C_noret;
C_noret_decl(f_4388)
static void C_fcall f_4388(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4401)
static void C_ccall f_4401(C_word c,C_word *av) C_noret;
C_noret_decl(f_4412)
static void C_fcall f_4412(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4418)
static void C_ccall f_4418(C_word c,C_word *av) C_noret;
C_noret_decl(f_4491)
static void C_fcall f_4491(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4497)
static void C_ccall f_4497(C_word c,C_word *av) C_noret;
C_noret_decl(f_4500)
static void C_ccall f_4500(C_word c,C_word *av) C_noret;
C_noret_decl(f_4503)
static void C_ccall f_4503(C_word c,C_word *av) C_noret;
C_noret_decl(f_4777)
static void C_ccall f_4777(C_word c,C_word *av) C_noret;
C_noret_decl(f_4779)
static void C_ccall f_4779(C_word c,C_word *av) C_noret;
C_noret_decl(f_4782)
static void C_fcall f_4782(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4813)
static void C_ccall f_4813(C_word c,C_word *av) C_noret;
C_noret_decl(f_4826)
static void C_ccall f_4826(C_word c,C_word *av) C_noret;
C_noret_decl(f_4840)
static void C_ccall f_4840(C_word c,C_word *av) C_noret;
C_noret_decl(f_4846)
static void C_ccall f_4846(C_word c,C_word *av) C_noret;
C_noret_decl(f_4852)
static void C_ccall f_4852(C_word c,C_word *av) C_noret;
C_noret_decl(f_4855)
static void C_ccall f_4855(C_word c,C_word *av) C_noret;
C_noret_decl(f_4860)
static void C_fcall f_4860(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4880)
static void C_fcall f_4880(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4885)
static void C_ccall f_4885(C_word c,C_word *av) C_noret;
C_noret_decl(f_4903)
static void C_fcall f_4903(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4907)
static void C_ccall f_4907(C_word c,C_word *av) C_noret;
C_noret_decl(f_4919)
static void C_ccall f_4919(C_word c,C_word *av) C_noret;
C_noret_decl(f_4922)
static void C_ccall f_4922(C_word c,C_word *av) C_noret;
C_noret_decl(f_4925)
static void C_ccall f_4925(C_word c,C_word *av) C_noret;
C_noret_decl(f_4928)
static void C_ccall f_4928(C_word c,C_word *av) C_noret;
C_noret_decl(f_4930)
static void C_fcall f_4930(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4937)
static void C_ccall f_4937(C_word c,C_word *av) C_noret;
C_noret_decl(f_4950)
static void C_ccall f_4950(C_word c,C_word *av) C_noret;
C_noret_decl(f_4952)
static void C_fcall f_4952(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4959)
static void C_ccall f_4959(C_word c,C_word *av) C_noret;
C_noret_decl(f_4965)
static void C_ccall f_4965(C_word c,C_word *av) C_noret;
C_noret_decl(f_4968)
static void C_ccall f_4968(C_word c,C_word *av) C_noret;
C_noret_decl(f_4971)
static void C_ccall f_4971(C_word c,C_word *av) C_noret;
C_noret_decl(f_4974)
static void C_ccall f_4974(C_word c,C_word *av) C_noret;
C_noret_decl(f_4979)
static void C_fcall f_4979(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4986)
static void C_ccall f_4986(C_word c,C_word *av) C_noret;
C_noret_decl(f_4991)
static void C_ccall f_4991(C_word c,C_word *av) C_noret;
C_noret_decl(f_5002)
static void C_fcall f_5002(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5012)
static void C_ccall f_5012(C_word c,C_word *av) C_noret;
C_noret_decl(f_5025)
static void C_fcall f_5025(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5034)
static void C_ccall f_5034(C_word c,C_word *av) C_noret;
C_noret_decl(f_5062)
static void C_ccall f_5062(C_word c,C_word *av) C_noret;
C_noret_decl(f_5069)
static void C_ccall f_5069(C_word c,C_word *av) C_noret;
C_noret_decl(f_5082)
static void C_ccall f_5082(C_word c,C_word *av) C_noret;
C_noret_decl(f_5087)
static void C_ccall f_5087(C_word c,C_word *av) C_noret;
C_noret_decl(f_5108)
static void C_fcall f_5108(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5114)
static void C_fcall f_5114(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5122)
static void C_fcall f_5122(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5130)
static void C_ccall f_5130(C_word c,C_word *av) C_noret;
C_noret_decl(f_5134)
static void C_ccall f_5134(C_word c,C_word *av) C_noret;
C_noret_decl(f_5143)
static void C_fcall f_5143(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5151)
static void C_ccall f_5151(C_word c,C_word *av) C_noret;
C_noret_decl(f_5153)
static void C_fcall f_5153(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5163)
static void C_ccall f_5163(C_word c,C_word *av) C_noret;
C_noret_decl(f_5166)
static void C_ccall f_5166(C_word c,C_word *av) C_noret;
C_noret_decl(f_5169)
static void C_ccall f_5169(C_word c,C_word *av) C_noret;
C_noret_decl(f_5172)
static void C_ccall f_5172(C_word c,C_word *av) C_noret;
C_noret_decl(f_5179)
static void C_ccall f_5179(C_word c,C_word *av) C_noret;
C_noret_decl(f_5183)
static void C_ccall f_5183(C_word c,C_word *av) C_noret;
C_noret_decl(f_5188)
static void C_ccall f_5188(C_word c,C_word *av) C_noret;
C_noret_decl(f_5191)
static void C_fcall f_5191(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5193)
static void C_fcall f_5193(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5197)
static void C_ccall f_5197(C_word c,C_word *av) C_noret;
C_noret_decl(f_5200)
static void C_ccall f_5200(C_word c,C_word *av) C_noret;
C_noret_decl(f_5205)
static void C_ccall f_5205(C_word c,C_word *av) C_noret;
C_noret_decl(f_5211)
static void C_ccall f_5211(C_word c,C_word *av) C_noret;
C_noret_decl(f_5216)
static void C_fcall f_5216(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5221)
static void C_fcall f_5221(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5257)
static void C_fcall f_5257(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5260)
static void C_fcall f_5260(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5263)
static void C_ccall f_5263(C_word c,C_word *av) C_noret;
C_noret_decl(f_5270)
static void C_ccall f_5270(C_word c,C_word *av) C_noret;
C_noret_decl(f_5273)
static void C_ccall f_5273(C_word c,C_word *av) C_noret;
C_noret_decl(f_5290)
static void C_ccall f_5290(C_word c,C_word *av) C_noret;
C_noret_decl(f_5294)
static void C_ccall f_5294(C_word c,C_word *av) C_noret;
C_noret_decl(f_5299)
static void C_ccall f_5299(C_word c,C_word *av) C_noret;
C_noret_decl(f_5305)
static void C_ccall f_5305(C_word c,C_word *av) C_noret;
C_noret_decl(f_5308)
static void C_fcall f_5308(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5311)
static void C_fcall f_5311(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5314)
static void C_ccall f_5314(C_word c,C_word *av) C_noret;
C_noret_decl(f_5317)
static void C_fcall f_5317(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5320)
static void C_fcall f_5320(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5323)
static void C_fcall f_5323(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5326)
static void C_fcall f_5326(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5329)
static void C_fcall f_5329(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5332)
static void C_fcall f_5332(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5335)
static void C_fcall f_5335(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5338)
static void C_fcall f_5338(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5341)
static void C_fcall f_5341(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5344)
static void C_fcall f_5344(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5347)
static void C_fcall f_5347(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5350)
static void C_fcall f_5350(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5353)
static void C_fcall f_5353(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5356)
static void C_fcall f_5356(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5359)
static void C_fcall f_5359(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5362)
static void C_fcall f_5362(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5365)
static void C_fcall f_5365(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5370)
static void C_fcall f_5370(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5375)
static void C_fcall f_5375(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5380)
static void C_fcall f_5380(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5385)
static void C_fcall f_5385(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5388)
static void C_ccall f_5388(C_word c,C_word *av) C_noret;
C_noret_decl(f_5391)
static void C_ccall f_5391(C_word c,C_word *av) C_noret;
C_noret_decl(f_5394)
static void C_ccall f_5394(C_word c,C_word *av) C_noret;
C_noret_decl(f_5397)
static void C_ccall f_5397(C_word c,C_word *av) C_noret;
C_noret_decl(f_5400)
static void C_ccall f_5400(C_word c,C_word *av) C_noret;
C_noret_decl(f_5406)
static void C_ccall f_5406(C_word c,C_word *av) C_noret;
C_noret_decl(f_5409)
static void C_ccall f_5409(C_word c,C_word *av) C_noret;
C_noret_decl(f_5412)
static void C_fcall f_5412(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5415)
static void C_fcall f_5415(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5418)
static void C_fcall f_5418(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5421)
static void C_fcall f_5421(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5424)
static void C_fcall f_5424(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5427)
static void C_ccall f_5427(C_word c,C_word *av) C_noret;
C_noret_decl(f_5430)
static void C_ccall f_5430(C_word c,C_word *av) C_noret;
C_noret_decl(f_5433)
static void C_ccall f_5433(C_word c,C_word *av) C_noret;
C_noret_decl(f_5439)
static void C_ccall f_5439(C_word c,C_word *av) C_noret;
C_noret_decl(f_5442)
static void C_ccall f_5442(C_word c,C_word *av) C_noret;
C_noret_decl(f_5448)
static void C_ccall f_5448(C_word c,C_word *av) C_noret;
C_noret_decl(f_5455)
static void C_ccall f_5455(C_word c,C_word *av) C_noret;
C_noret_decl(f_5458)
static void C_ccall f_5458(C_word c,C_word *av) C_noret;
C_noret_decl(f_5463)
static void C_ccall f_5463(C_word c,C_word *av) C_noret;
C_noret_decl(f_5466)
static void C_ccall f_5466(C_word c,C_word *av) C_noret;
C_noret_decl(f_5481)
static void C_ccall f_5481(C_word c,C_word *av) C_noret;
C_noret_decl(f_5485)
static void C_ccall f_5485(C_word c,C_word *av) C_noret;
C_noret_decl(f_5493)
static void C_ccall f_5493(C_word c,C_word *av) C_noret;
C_noret_decl(f_5496)
static void C_ccall f_5496(C_word c,C_word *av) C_noret;
C_noret_decl(f_5499)
static void C_fcall f_5499(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5503)
static void C_ccall f_5503(C_word c,C_word *av) C_noret;
C_noret_decl(f_5506)
static void C_fcall f_5506(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5510)
static void C_ccall f_5510(C_word c,C_word *av) C_noret;
C_noret_decl(f_5514)
static void C_ccall f_5514(C_word c,C_word *av) C_noret;
C_noret_decl(f_5525)
static void C_ccall f_5525(C_word c,C_word *av) C_noret;
C_noret_decl(f_5528)
static void C_ccall f_5528(C_word c,C_word *av) C_noret;
C_noret_decl(f_5531)
static void C_fcall f_5531(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5534)
static void C_ccall f_5534(C_word c,C_word *av) C_noret;
C_noret_decl(f_5537)
static void C_ccall f_5537(C_word c,C_word *av) C_noret;
C_noret_decl(f_5540)
static void C_ccall f_5540(C_word c,C_word *av) C_noret;
C_noret_decl(f_5548)
static void C_ccall f_5548(C_word c,C_word *av) C_noret;
C_noret_decl(f_5559)
static void C_fcall f_5559(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5570)
static void C_ccall f_5570(C_word c,C_word *av) C_noret;
C_noret_decl(f_5577)
static void C_ccall f_5577(C_word c,C_word *av) C_noret;
C_noret_decl(f_5586)
static void C_ccall f_5586(C_word c,C_word *av) C_noret;
C_noret_decl(f_5589)
static void C_ccall f_5589(C_word c,C_word *av) C_noret;
C_noret_decl(f_5592)
static void C_ccall f_5592(C_word c,C_word *av) C_noret;
C_noret_decl(f_5598)
static void C_ccall f_5598(C_word c,C_word *av) C_noret;
C_noret_decl(f_5601)
static void C_ccall f_5601(C_word c,C_word *av) C_noret;
C_noret_decl(f_5604)
static void C_ccall f_5604(C_word c,C_word *av) C_noret;
C_noret_decl(f_5607)
static void C_ccall f_5607(C_word c,C_word *av) C_noret;
C_noret_decl(f_5610)
static void C_ccall f_5610(C_word c,C_word *av) C_noret;
C_noret_decl(f_5614)
static void C_ccall f_5614(C_word c,C_word *av) C_noret;
C_noret_decl(f_5618)
static void C_ccall f_5618(C_word c,C_word *av) C_noret;
C_noret_decl(f_5621)
static void C_ccall f_5621(C_word c,C_word *av) C_noret;
C_noret_decl(f_5624)
static void C_ccall f_5624(C_word c,C_word *av) C_noret;
C_noret_decl(f_5627)
static void C_ccall f_5627(C_word c,C_word *av) C_noret;
C_noret_decl(f_5630)
static void C_ccall f_5630(C_word c,C_word *av) C_noret;
C_noret_decl(f_5633)
static void C_ccall f_5633(C_word c,C_word *av) C_noret;
C_noret_decl(f_5636)
static void C_ccall f_5636(C_word c,C_word *av) C_noret;
C_noret_decl(f_5639)
static void C_fcall f_5639(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5642)
static void C_ccall f_5642(C_word c,C_word *av) C_noret;
C_noret_decl(f_5645)
static void C_ccall f_5645(C_word c,C_word *av) C_noret;
C_noret_decl(f_5649)
static void C_fcall f_5649(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5655)
static void C_ccall f_5655(C_word c,C_word *av) C_noret;
C_noret_decl(f_5660)
static void C_ccall f_5660(C_word c,C_word *av) C_noret;
C_noret_decl(f_5666)
static void C_ccall f_5666(C_word c,C_word *av) C_noret;
C_noret_decl(f_5672)
static void C_ccall f_5672(C_word c,C_word *av) C_noret;
C_noret_decl(f_5675)
static void C_fcall f_5675(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5681)
static void C_ccall f_5681(C_word c,C_word *av) C_noret;
C_noret_decl(f_5684)
static void C_ccall f_5684(C_word c,C_word *av) C_noret;
C_noret_decl(f_5687)
static void C_ccall f_5687(C_word c,C_word *av) C_noret;
C_noret_decl(f_5690)
static void C_ccall f_5690(C_word c,C_word *av) C_noret;
C_noret_decl(f_5693)
static void C_ccall f_5693(C_word c,C_word *av) C_noret;
C_noret_decl(f_5696)
static void C_ccall f_5696(C_word c,C_word *av) C_noret;
C_noret_decl(f_5699)
static void C_ccall f_5699(C_word c,C_word *av) C_noret;
C_noret_decl(f_5702)
static void C_ccall f_5702(C_word c,C_word *av) C_noret;
C_noret_decl(f_5707)
static void C_ccall f_5707(C_word c,C_word *av) C_noret;
C_noret_decl(f_5710)
static void C_ccall f_5710(C_word c,C_word *av) C_noret;
C_noret_decl(f_5713)
static void C_ccall f_5713(C_word c,C_word *av) C_noret;
C_noret_decl(f_5716)
static void C_ccall f_5716(C_word c,C_word *av) C_noret;
C_noret_decl(f_5719)
static void C_ccall f_5719(C_word c,C_word *av) C_noret;
C_noret_decl(f_5722)
static void C_ccall f_5722(C_word c,C_word *av) C_noret;
C_noret_decl(f_5725)
static void C_ccall f_5725(C_word c,C_word *av) C_noret;
C_noret_decl(f_5728)
static void C_ccall f_5728(C_word c,C_word *av) C_noret;
C_noret_decl(f_5731)
static void C_ccall f_5731(C_word c,C_word *av) C_noret;
C_noret_decl(f_5734)
static void C_ccall f_5734(C_word c,C_word *av) C_noret;
C_noret_decl(f_5737)
static void C_ccall f_5737(C_word c,C_word *av) C_noret;
C_noret_decl(f_5740)
static void C_ccall f_5740(C_word c,C_word *av) C_noret;
C_noret_decl(f_5743)
static void C_ccall f_5743(C_word c,C_word *av) C_noret;
C_noret_decl(f_5746)
static void C_ccall f_5746(C_word c,C_word *av) C_noret;
C_noret_decl(f_5749)
static void C_fcall f_5749(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5755)
static void C_ccall f_5755(C_word c,C_word *av) C_noret;
C_noret_decl(f_5758)
static void C_ccall f_5758(C_word c,C_word *av) C_noret;
C_noret_decl(f_5761)
static void C_ccall f_5761(C_word c,C_word *av) C_noret;
C_noret_decl(f_5764)
static void C_ccall f_5764(C_word c,C_word *av) C_noret;
C_noret_decl(f_5767)
static void C_ccall f_5767(C_word c,C_word *av) C_noret;
C_noret_decl(f_5772)
static void C_fcall f_5772(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5776)
static void C_ccall f_5776(C_word c,C_word *av) C_noret;
C_noret_decl(f_5779)
static void C_ccall f_5779(C_word c,C_word *av) C_noret;
C_noret_decl(f_5782)
static void C_ccall f_5782(C_word c,C_word *av) C_noret;
C_noret_decl(f_5786)
static void C_ccall f_5786(C_word c,C_word *av) C_noret;
C_noret_decl(f_5789)
static void C_ccall f_5789(C_word c,C_word *av) C_noret;
C_noret_decl(f_5792)
static void C_ccall f_5792(C_word c,C_word *av) C_noret;
C_noret_decl(f_5798)
static void C_ccall f_5798(C_word c,C_word *av) C_noret;
C_noret_decl(f_5801)
static void C_ccall f_5801(C_word c,C_word *av) C_noret;
C_noret_decl(f_5806)
static void C_ccall f_5806(C_word c,C_word *av) C_noret;
C_noret_decl(f_5818)
static void C_ccall f_5818(C_word c,C_word *av) C_noret;
C_noret_decl(f_5822)
static void C_ccall f_5822(C_word c,C_word *av) C_noret;
C_noret_decl(f_5825)
static void C_ccall f_5825(C_word c,C_word *av) C_noret;
C_noret_decl(f_5842)
static void C_ccall f_5842(C_word c,C_word *av) C_noret;
C_noret_decl(f_5856)
static void C_ccall f_5856(C_word c,C_word *av) C_noret;
C_noret_decl(f_5868)
static void C_ccall f_5868(C_word c,C_word *av) C_noret;
C_noret_decl(f_5871)
static void C_ccall f_5871(C_word c,C_word *av) C_noret;
C_noret_decl(f_5874)
static void C_ccall f_5874(C_word c,C_word *av) C_noret;
C_noret_decl(f_5877)
static void C_ccall f_5877(C_word c,C_word *av) C_noret;
C_noret_decl(f_5880)
static void C_ccall f_5880(C_word c,C_word *av) C_noret;
C_noret_decl(f_5883)
static void C_ccall f_5883(C_word c,C_word *av) C_noret;
C_noret_decl(f_5899)
static void C_ccall f_5899(C_word c,C_word *av) C_noret;
C_noret_decl(f_5902)
static void C_ccall f_5902(C_word c,C_word *av) C_noret;
C_noret_decl(f_5905)
static void C_ccall f_5905(C_word c,C_word *av) C_noret;
C_noret_decl(f_5908)
static void C_ccall f_5908(C_word c,C_word *av) C_noret;
C_noret_decl(f_5912)
static void C_ccall f_5912(C_word c,C_word *av) C_noret;
C_noret_decl(f_5915)
static void C_ccall f_5915(C_word c,C_word *av) C_noret;
C_noret_decl(f_5918)
static void C_ccall f_5918(C_word c,C_word *av) C_noret;
C_noret_decl(f_5921)
static void C_ccall f_5921(C_word c,C_word *av) C_noret;
C_noret_decl(f_5924)
static void C_ccall f_5924(C_word c,C_word *av) C_noret;
C_noret_decl(f_5927)
static void C_ccall f_5927(C_word c,C_word *av) C_noret;
C_noret_decl(f_5930)
static void C_ccall f_5930(C_word c,C_word *av) C_noret;
C_noret_decl(f_5935)
static void C_ccall f_5935(C_word c,C_word *av) C_noret;
C_noret_decl(f_5941)
static void C_ccall f_5941(C_word c,C_word *av) C_noret;
C_noret_decl(f_5945)
static void C_ccall f_5945(C_word c,C_word *av) C_noret;
C_noret_decl(f_5948)
static void C_ccall f_5948(C_word c,C_word *av) C_noret;
C_noret_decl(f_5951)
static void C_ccall f_5951(C_word c,C_word *av) C_noret;
C_noret_decl(f_5954)
static void C_ccall f_5954(C_word c,C_word *av) C_noret;
C_noret_decl(f_5957)
static void C_ccall f_5957(C_word c,C_word *av) C_noret;
C_noret_decl(f_5960)
static void C_ccall f_5960(C_word c,C_word *av) C_noret;
C_noret_decl(f_5963)
static void C_ccall f_5963(C_word c,C_word *av) C_noret;
C_noret_decl(f_5966)
static void C_ccall f_5966(C_word c,C_word *av) C_noret;
C_noret_decl(f_5969)
static void C_ccall f_5969(C_word c,C_word *av) C_noret;
C_noret_decl(f_5972)
static void C_ccall f_5972(C_word c,C_word *av) C_noret;
C_noret_decl(f_5985)
static void C_ccall f_5985(C_word c,C_word *av) C_noret;
C_noret_decl(f_5994)
static void C_ccall f_5994(C_word c,C_word *av) C_noret;
C_noret_decl(f_5999)
static void C_ccall f_5999(C_word c,C_word *av) C_noret;
C_noret_decl(f_6017)
static void C_ccall f_6017(C_word c,C_word *av) C_noret;
C_noret_decl(f_6025)
static void C_ccall f_6025(C_word c,C_word *av) C_noret;
C_noret_decl(f_6031)
static void C_ccall f_6031(C_word c,C_word *av) C_noret;
C_noret_decl(f_6034)
static void C_ccall f_6034(C_word c,C_word *av) C_noret;
C_noret_decl(f_6037)
static void C_ccall f_6037(C_word c,C_word *av) C_noret;
C_noret_decl(f_6049)
static void C_ccall f_6049(C_word c,C_word *av) C_noret;
C_noret_decl(f_6052)
static void C_ccall f_6052(C_word c,C_word *av) C_noret;
C_noret_decl(f_6055)
static void C_ccall f_6055(C_word c,C_word *av) C_noret;
C_noret_decl(f_6061)
static void C_ccall f_6061(C_word c,C_word *av) C_noret;
C_noret_decl(f_6093)
static void C_ccall f_6093(C_word c,C_word *av) C_noret;
C_noret_decl(f_6099)
static void C_ccall f_6099(C_word c,C_word *av) C_noret;
C_noret_decl(f_6104)
static void C_ccall f_6104(C_word c,C_word *av) C_noret;
C_noret_decl(f_6113)
static void C_ccall f_6113(C_word c,C_word *av) C_noret;
C_noret_decl(f_6119)
static void C_ccall f_6119(C_word c,C_word *av) C_noret;
C_noret_decl(f_6128)
static void C_ccall f_6128(C_word c,C_word *av) C_noret;
C_noret_decl(f_6132)
static void C_ccall f_6132(C_word c,C_word *av) C_noret;
C_noret_decl(f_6138)
static void C_ccall f_6138(C_word c,C_word *av) C_noret;
C_noret_decl(f_6141)
static void C_ccall f_6141(C_word c,C_word *av) C_noret;
C_noret_decl(f_6146)
static void C_ccall f_6146(C_word c,C_word *av) C_noret;
C_noret_decl(f_6149)
static void C_ccall f_6149(C_word c,C_word *av) C_noret;
C_noret_decl(f_6152)
static void C_ccall f_6152(C_word c,C_word *av) C_noret;
C_noret_decl(f_6155)
static void C_ccall f_6155(C_word c,C_word *av) C_noret;
C_noret_decl(f_6158)
static void C_ccall f_6158(C_word c,C_word *av) C_noret;
C_noret_decl(f_6161)
static void C_ccall f_6161(C_word c,C_word *av) C_noret;
C_noret_decl(f_6164)
static void C_ccall f_6164(C_word c,C_word *av) C_noret;
C_noret_decl(f_6167)
static void C_ccall f_6167(C_word c,C_word *av) C_noret;
C_noret_decl(f_6173)
static void C_fcall f_6173(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6183)
static void C_ccall f_6183(C_word c,C_word *av) C_noret;
C_noret_decl(f_6196)
static void C_fcall f_6196(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6206)
static void C_ccall f_6206(C_word c,C_word *av) C_noret;
C_noret_decl(f_6225)
static void C_ccall f_6225(C_word c,C_word *av) C_noret;
C_noret_decl(f_6237)
static void C_ccall f_6237(C_word c,C_word *av) C_noret;
C_noret_decl(f_6248)
static void C_fcall f_6248(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6258)
static void C_ccall f_6258(C_word c,C_word *av) C_noret;
C_noret_decl(f_6274)
static void C_ccall f_6274(C_word c,C_word *av) C_noret;
C_noret_decl(f_6280)
static void C_ccall f_6280(C_word c,C_word *av) C_noret;
C_noret_decl(f_6287)
static void C_ccall f_6287(C_word c,C_word *av) C_noret;
C_noret_decl(f_6295)
static void C_fcall f_6295(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6305)
static void C_ccall f_6305(C_word c,C_word *av) C_noret;
C_noret_decl(f_6319)
static void C_ccall f_6319(C_word c,C_word *av) C_noret;
C_noret_decl(f_6332)
static void C_ccall f_6332(C_word c,C_word *av) C_noret;
C_noret_decl(f_6334)
static void C_fcall f_6334(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6370)
static void C_ccall f_6370(C_word c,C_word *av) C_noret;
C_noret_decl(f_6374)
static void C_ccall f_6374(C_word c,C_word *av) C_noret;
C_noret_decl(f_6378)
static void C_ccall f_6378(C_word c,C_word *av) C_noret;
C_noret_decl(f_6381)
static void C_ccall f_6381(C_word c,C_word *av) C_noret;
C_noret_decl(f_6384)
static void C_ccall f_6384(C_word c,C_word *av) C_noret;
C_noret_decl(f_6394)
static void C_ccall f_6394(C_word c,C_word *av) C_noret;
C_noret_decl(f_6399)
static void C_fcall f_6399(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6424)
static void C_ccall f_6424(C_word c,C_word *av) C_noret;
C_noret_decl(f_6439)
static void C_ccall f_6439(C_word c,C_word *av) C_noret;
C_noret_decl(f_6445)
static void C_ccall f_6445(C_word c,C_word *av) C_noret;
C_noret_decl(f_6456)
static void C_ccall f_6456(C_word c,C_word *av) C_noret;
C_noret_decl(f_6460)
static void C_ccall f_6460(C_word c,C_word *av) C_noret;
C_noret_decl(f_6468)
static void C_ccall f_6468(C_word c,C_word *av) C_noret;
C_noret_decl(f_6471)
static void C_ccall f_6471(C_word c,C_word *av) C_noret;
C_noret_decl(f_6474)
static void C_ccall f_6474(C_word c,C_word *av) C_noret;
C_noret_decl(f_6477)
static void C_ccall f_6477(C_word c,C_word *av) C_noret;
C_noret_decl(f_6494)
static void C_fcall f_6494(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6504)
static void C_ccall f_6504(C_word c,C_word *av) C_noret;
C_noret_decl(f_6518)
static void C_ccall f_6518(C_word c,C_word *av) C_noret;
C_noret_decl(f_6524)
static void C_ccall f_6524(C_word c,C_word *av) C_noret;
C_noret_decl(f_6537)
static void C_ccall f_6537(C_word c,C_word *av) C_noret;
C_noret_decl(f_6543)
static void C_ccall f_6543(C_word c,C_word *av) C_noret;
C_noret_decl(f_6546)
static void C_ccall f_6546(C_word c,C_word *av) C_noret;
C_noret_decl(f_6549)
static void C_ccall f_6549(C_word c,C_word *av) C_noret;
C_noret_decl(f_6553)
static void C_ccall f_6553(C_word c,C_word *av) C_noret;
C_noret_decl(f_6560)
static void C_ccall f_6560(C_word c,C_word *av) C_noret;
C_noret_decl(f_6562)
static void C_fcall f_6562(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6587)
static void C_ccall f_6587(C_word c,C_word *av) C_noret;
C_noret_decl(f_6604)
static void C_ccall f_6604(C_word c,C_word *av) C_noret;
C_noret_decl(f_6610)
static void C_ccall f_6610(C_word c,C_word *av) C_noret;
C_noret_decl(f_6613)
static void C_ccall f_6613(C_word c,C_word *av) C_noret;
C_noret_decl(f_6616)
static void C_ccall f_6616(C_word c,C_word *av) C_noret;
C_noret_decl(f_6619)
static void C_ccall f_6619(C_word c,C_word *av) C_noret;
C_noret_decl(f_6623)
static void C_ccall f_6623(C_word c,C_word *av) C_noret;
C_noret_decl(f_6633)
static void C_ccall f_6633(C_word c,C_word *av) C_noret;
C_noret_decl(f_6635)
static void C_fcall f_6635(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6660)
static void C_ccall f_6660(C_word c,C_word *av) C_noret;
C_noret_decl(f_6678)
static void C_ccall f_6678(C_word c,C_word *av) C_noret;
C_noret_decl(f_6680)
static void C_ccall f_6680(C_word c,C_word *av) C_noret;
C_noret_decl(f_6694)
static void C_ccall f_6694(C_word c,C_word *av) C_noret;
C_noret_decl(f_6713)
static void C_ccall f_6713(C_word c,C_word *av) C_noret;
C_noret_decl(f_6715)
static void C_fcall f_6715(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6740)
static void C_ccall f_6740(C_word c,C_word *av) C_noret;
C_noret_decl(f_6772)
static void C_ccall f_6772(C_word c,C_word *av) C_noret;
C_noret_decl(f_6787)
static void C_ccall f_6787(C_word c,C_word *av) C_noret;
C_noret_decl(f_6791)
static void C_fcall f_6791(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6795)
static void C_ccall f_6795(C_word c,C_word *av) C_noret;
C_noret_decl(f_6821)
static void C_fcall f_6821(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6855)
static void C_fcall f_6855(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6889)
static void C_fcall f_6889(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6914)
static void C_ccall f_6914(C_word c,C_word *av) C_noret;
C_noret_decl(f_6939)
static void C_ccall f_6939(C_word c,C_word *av) C_noret;
C_noret_decl(f_6946)
static void C_ccall f_6946(C_word c,C_word *av) C_noret;
C_noret_decl(f_6956)
static void C_ccall f_6956(C_word c,C_word *av) C_noret;
C_noret_decl(f_6958)
static void C_fcall f_6958(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6983)
static void C_ccall f_6983(C_word c,C_word *av) C_noret;
C_noret_decl(f_6993)
static void C_ccall f_6993(C_word c,C_word *av) C_noret;
C_noret_decl(f_6997)
static void C_ccall f_6997(C_word c,C_word *av) C_noret;
C_noret_decl(f_7002)
static void C_fcall f_7002(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7013)
static void C_ccall f_7013(C_word c,C_word *av) C_noret;
C_noret_decl(f_7023)
static void C_ccall f_7023(C_word c,C_word *av) C_noret;
C_noret_decl(f_7027)
static void C_ccall f_7027(C_word c,C_word *av) C_noret;
C_noret_decl(f_7037)
static void C_ccall f_7037(C_word c,C_word *av) C_noret;
C_noret_decl(f_7039)
static void C_fcall f_7039(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7064)
static void C_ccall f_7064(C_word c,C_word *av) C_noret;
C_noret_decl(f_7073)
static void C_fcall f_7073(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7098)
static void C_ccall f_7098(C_word c,C_word *av) C_noret;
C_noret_decl(f_7111)
static void C_ccall f_7111(C_word c,C_word *av) C_noret;
C_noret_decl(f_7114)
static void C_ccall f_7114(C_word c,C_word *av) C_noret;
C_noret_decl(f_7121)
static void C_ccall f_7121(C_word c,C_word *av) C_noret;
C_noret_decl(f_7126)
static void C_ccall f_7126(C_word c,C_word *av) C_noret;
C_noret_decl(f_7132)
static void C_fcall f_7132(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7136)
static void C_ccall f_7136(C_word c,C_word *av) C_noret;
C_noret_decl(f_7154)
static void C_ccall f_7154(C_word c,C_word *av) C_noret;
C_noret_decl(f_7161)
static void C_ccall f_7161(C_word c,C_word *av) C_noret;
C_noret_decl(f_7169)
static void C_ccall f_7169(C_word c,C_word *av) C_noret;
C_noret_decl(f_7187)
static void C_ccall f_7187(C_word c,C_word *av) C_noret;
C_noret_decl(f_7193)
static void C_ccall f_7193(C_word c,C_word *av) C_noret;
C_noret_decl(f_7242)
static void C_ccall f_7242(C_word c,C_word *av) C_noret;
C_noret_decl(f_7249)
static void C_ccall f_7249(C_word c,C_word *av) C_noret;
C_noret_decl(f_7265)
static void C_ccall f_7265(C_word c,C_word *av) C_noret;
C_noret_decl(f_7268)
static void C_ccall f_7268(C_word c,C_word *av) C_noret;
C_noret_decl(f_7274)
static void C_ccall f_7274(C_word c,C_word *av) C_noret;
C_noret_decl(f_7276)
static void C_fcall f_7276(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7301)
static void C_ccall f_7301(C_word c,C_word *av) C_noret;
C_noret_decl(f_7325)
static void C_ccall f_7325(C_word c,C_word *av) C_noret;
C_noret_decl(f_7332)
static void C_ccall f_7332(C_word c,C_word *av) C_noret;
C_noret_decl(f_7337)
static void C_fcall f_7337(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7362)
static void C_ccall f_7362(C_word c,C_word *av) C_noret;
C_noret_decl(f_7373)
static void C_ccall f_7373(C_word c,C_word *av) C_noret;
C_noret_decl(f_7375)
static void C_fcall f_7375(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7385)
static void C_ccall f_7385(C_word c,C_word *av) C_noret;
C_noret_decl(f_7398)
static void C_fcall f_7398(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7408)
static void C_ccall f_7408(C_word c,C_word *av) C_noret;
C_noret_decl(f_7421)
static void C_ccall f_7421(C_word c,C_word *av) C_noret;
C_noret_decl(f_7429)
static void C_ccall f_7429(C_word c,C_word *av) C_noret;
C_noret_decl(f_7431)
static void C_fcall f_7431(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7441)
static void C_ccall f_7441(C_word c,C_word *av) C_noret;
C_noret_decl(f_7454)
static void C_ccall f_7454(C_word c,C_word *av) C_noret;
C_noret_decl(f_7462)
static void C_ccall f_7462(C_word c,C_word *av) C_noret;
C_noret_decl(f_7475)
static void C_ccall f_7475(C_word c,C_word *av) C_noret;
C_noret_decl(f_7484)
static void C_ccall f_7484(C_word c,C_word *av) C_noret;
C_noret_decl(f_7489)
static void C_ccall f_7489(C_word c,C_word *av) C_noret;
C_noret_decl(f_7500)
static void C_fcall f_7500(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7510)
static void C_ccall f_7510(C_word c,C_word *av) C_noret;
C_noret_decl(f_7523)
static void C_fcall f_7523(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7533)
static void C_ccall f_7533(C_word c,C_word *av) C_noret;
C_noret_decl(f_7578)
static void C_ccall f_7578(C_word c,C_word *av) C_noret;
C_noret_decl(f_7584)
static void C_ccall f_7584(C_word c,C_word *av) C_noret;
C_noret_decl(f_7586)
static void C_fcall f_7586(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7611)
static void C_ccall f_7611(C_word c,C_word *av) C_noret;
C_noret_decl(f_7623)
static void C_ccall f_7623(C_word c,C_word *av) C_noret;
C_noret_decl(f_7626)
static void C_ccall f_7626(C_word c,C_word *av) C_noret;
C_noret_decl(f_7629)
static void C_ccall f_7629(C_word c,C_word *av) C_noret;
C_noret_decl(f_7632)
static void C_ccall f_7632(C_word c,C_word *av) C_noret;
C_noret_decl(f_7640)
static void C_ccall f_7640(C_word c,C_word *av) C_noret;
C_noret_decl(f_7648)
static void C_ccall f_7648(C_word c,C_word *av) C_noret;
C_noret_decl(f_7654)
static void C_ccall f_7654(C_word c,C_word *av) C_noret;
C_noret_decl(f_7687)
static void C_ccall f_7687(C_word c,C_word *av) C_noret;
C_noret_decl(f_7690)
static void C_ccall f_7690(C_word c,C_word *av) C_noret;
C_noret_decl(f_7697)
static void C_ccall f_7697(C_word c,C_word *av) C_noret;
C_noret_decl(f_7700)
static void C_ccall f_7700(C_word c,C_word *av) C_noret;
C_noret_decl(f_7703)
static void C_ccall f_7703(C_word c,C_word *av) C_noret;
C_noret_decl(f_7710)
static void C_ccall f_7710(C_word c,C_word *av) C_noret;
C_noret_decl(f_7716)
static void C_ccall f_7716(C_word c,C_word *av) C_noret;
C_noret_decl(f_7720)
static void C_ccall f_7720(C_word c,C_word *av) C_noret;
C_noret_decl(f_7749)
static void C_ccall f_7749(C_word c,C_word *av) C_noret;
C_noret_decl(f_7796)
static void C_fcall f_7796(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7821)
static void C_ccall f_7821(C_word c,C_word *av) C_noret;
C_noret_decl(f_7834)
static void C_ccall f_7834(C_word c,C_word *av) C_noret;
C_noret_decl(f_7839)
static void C_ccall f_7839(C_word c,C_word *av) C_noret;
C_noret_decl(f_7855)
static void C_ccall f_7855(C_word c,C_word *av) C_noret;
C_noret_decl(f_7860)
static void C_fcall f_7860(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7885)
static void C_ccall f_7885(C_word c,C_word *av) C_noret;
C_noret_decl(f_7896)
static void C_ccall f_7896(C_word c,C_word *av) C_noret;
C_noret_decl(f_7910)
static void C_ccall f_7910(C_word c,C_word *av) C_noret;
C_noret_decl(f_7914)
static void C_ccall f_7914(C_word c,C_word *av) C_noret;
C_noret_decl(f_7931)
static void C_fcall f_7931(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7956)
static void C_ccall f_7956(C_word c,C_word *av) C_noret;
C_noret_decl(f_7967)
static void C_ccall f_7967(C_word c,C_word *av) C_noret;
C_noret_decl(f_7971)
static void C_fcall f_7971(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7975)
static void C_ccall f_7975(C_word c,C_word *av) C_noret;
C_noret_decl(f_7999)
static void C_ccall f_7999(C_word c,C_word *av) C_noret;
C_noret_decl(f_8010)
static void C_fcall f_8010(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8029)
static void C_ccall f_8029(C_word c,C_word *av) C_noret;
C_noret_decl(f_8037)
static void C_fcall f_8037(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8044)
static void C_fcall f_8044(C_word t0,C_word t1) C_noret;
C_noret_decl(C_batch_2ddriver_toplevel)
C_externexport void C_ccall C_batch_2ddriver_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2910)
static void C_ccall trf_2910(C_word c,C_word *av) C_noret;
static void C_ccall trf_2910(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2910(t0,t1,t2,t3);}

C_noret_decl(trf_2925)
static void C_ccall trf_2925(C_word c,C_word *av) C_noret;
static void C_ccall trf_2925(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2925(t0,t1,t2);}

C_noret_decl(trf_2933)
static void C_ccall trf_2933(C_word c,C_word *av) C_noret;
static void C_ccall trf_2933(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2933(t0,t1,t2,t3);}

C_noret_decl(trf_2965)
static void C_ccall trf_2965(C_word c,C_word *av) C_noret;
static void C_ccall trf_2965(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2965(t0,t1,t2);}

C_noret_decl(trf_2997)
static void C_ccall trf_2997(C_word c,C_word *av) C_noret;
static void C_ccall trf_2997(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2997(t0,t1,t2);}

C_noret_decl(trf_3046)
static void C_ccall trf_3046(C_word c,C_word *av) C_noret;
static void C_ccall trf_3046(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3046(t0,t1,t2);}

C_noret_decl(trf_3086)
static void C_ccall trf_3086(C_word c,C_word *av) C_noret;
static void C_ccall trf_3086(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3086(t0,t1,t2);}

C_noret_decl(trf_3172)
static void C_ccall trf_3172(C_word c,C_word *av) C_noret;
static void C_ccall trf_3172(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3172(t0,t1);}

C_noret_decl(trf_3178)
static void C_ccall trf_3178(C_word c,C_word *av) C_noret;
static void C_ccall trf_3178(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3178(t0,t1,t2);}

C_noret_decl(trf_3206)
static void C_ccall trf_3206(C_word c,C_word *av) C_noret;
static void C_ccall trf_3206(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3206(t0,t1,t2);}

C_noret_decl(trf_3320)
static void C_ccall trf_3320(C_word c,C_word *av) C_noret;
static void C_ccall trf_3320(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3320(t0,t1,t2);}

C_noret_decl(trf_3329)
static void C_ccall trf_3329(C_word c,C_word *av) C_noret;
static void C_ccall trf_3329(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3329(t0,t1,t2);}

C_noret_decl(trf_3337)
static void C_ccall trf_3337(C_word c,C_word *av) C_noret;
static void C_ccall trf_3337(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3337(t0,t1,t2,t3);}

C_noret_decl(trf_4088)
static void C_ccall trf_4088(C_word c,C_word *av) C_noret;
static void C_ccall trf_4088(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4088(t0,t1);}

C_noret_decl(trf_4128)
static void C_ccall trf_4128(C_word c,C_word *av) C_noret;
static void C_ccall trf_4128(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4128(t0,t1,t2);}

C_noret_decl(trf_4151)
static void C_ccall trf_4151(C_word c,C_word *av) C_noret;
static void C_ccall trf_4151(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4151(t0,t1,t2);}

C_noret_decl(trf_4174)
static void C_ccall trf_4174(C_word c,C_word *av) C_noret;
static void C_ccall trf_4174(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4174(t0,t1,t2);}

C_noret_decl(trf_4197)
static void C_ccall trf_4197(C_word c,C_word *av) C_noret;
static void C_ccall trf_4197(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4197(t0,t1,t2);}

C_noret_decl(trf_4201)
static void C_ccall trf_4201(C_word c,C_word *av) C_noret;
static void C_ccall trf_4201(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4201(t0,t1);}

C_noret_decl(trf_4268)
static void C_ccall trf_4268(C_word c,C_word *av) C_noret;
static void C_ccall trf_4268(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4268(t0,t1,t2);}

C_noret_decl(trf_4292)
static void C_ccall trf_4292(C_word c,C_word *av) C_noret;
static void C_ccall trf_4292(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4292(t0,t1);}

C_noret_decl(trf_4319)
static void C_ccall trf_4319(C_word c,C_word *av) C_noret;
static void C_ccall trf_4319(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4319(t0,t1);}

C_noret_decl(trf_4388)
static void C_ccall trf_4388(C_word c,C_word *av) C_noret;
static void C_ccall trf_4388(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4388(t0,t1,t2);}

C_noret_decl(trf_4412)
static void C_ccall trf_4412(C_word c,C_word *av) C_noret;
static void C_ccall trf_4412(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4412(t0,t1);}

C_noret_decl(trf_4491)
static void C_ccall trf_4491(C_word c,C_word *av) C_noret;
static void C_ccall trf_4491(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4491(t0,t1);}

C_noret_decl(trf_4782)
static void C_ccall trf_4782(C_word c,C_word *av) C_noret;
static void C_ccall trf_4782(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4782(t0,t1);}

C_noret_decl(trf_4860)
static void C_ccall trf_4860(C_word c,C_word *av) C_noret;
static void C_ccall trf_4860(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4860(t0,t1);}

C_noret_decl(trf_4880)
static void C_ccall trf_4880(C_word c,C_word *av) C_noret;
static void C_ccall trf_4880(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4880(t0,t1);}

C_noret_decl(trf_4903)
static void C_ccall trf_4903(C_word c,C_word *av) C_noret;
static void C_ccall trf_4903(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4903(t0,t1,t2);}

C_noret_decl(trf_4930)
static void C_ccall trf_4930(C_word c,C_word *av) C_noret;
static void C_ccall trf_4930(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4930(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4952)
static void C_ccall trf_4952(C_word c,C_word *av) C_noret;
static void C_ccall trf_4952(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_4952(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4979)
static void C_ccall trf_4979(C_word c,C_word *av) C_noret;
static void C_ccall trf_4979(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4979(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5002)
static void C_ccall trf_5002(C_word c,C_word *av) C_noret;
static void C_ccall trf_5002(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5002(t0,t1,t2);}

C_noret_decl(trf_5025)
static void C_ccall trf_5025(C_word c,C_word *av) C_noret;
static void C_ccall trf_5025(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5025(t0,t1);}

C_noret_decl(trf_5108)
static void C_ccall trf_5108(C_word c,C_word *av) C_noret;
static void C_ccall trf_5108(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5108(t0,t1,t2);}

C_noret_decl(trf_5114)
static void C_ccall trf_5114(C_word c,C_word *av) C_noret;
static void C_ccall trf_5114(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5114(t0,t1,t2);}

C_noret_decl(trf_5122)
static void C_ccall trf_5122(C_word c,C_word *av) C_noret;
static void C_ccall trf_5122(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5122(t0,t1,t2);}

C_noret_decl(trf_5143)
static void C_ccall trf_5143(C_word c,C_word *av) C_noret;
static void C_ccall trf_5143(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5143(t0,t1);}

C_noret_decl(trf_5153)
static void C_ccall trf_5153(C_word c,C_word *av) C_noret;
static void C_ccall trf_5153(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5153(t0,t1,t2);}

C_noret_decl(trf_5191)
static void C_ccall trf_5191(C_word c,C_word *av) C_noret;
static void C_ccall trf_5191(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_5191(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5193)
static void C_ccall trf_5193(C_word c,C_word *av) C_noret;
static void C_ccall trf_5193(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5193(t0,t1,t2,t3);}

C_noret_decl(trf_5216)
static void C_ccall trf_5216(C_word c,C_word *av) C_noret;
static void C_ccall trf_5216(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5216(t0,t1,t2);}

C_noret_decl(trf_5221)
static void C_ccall trf_5221(C_word c,C_word *av) C_noret;
static void C_ccall trf_5221(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5221(t0,t1);}

C_noret_decl(trf_5257)
static void C_ccall trf_5257(C_word c,C_word *av) C_noret;
static void C_ccall trf_5257(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5257(t0,t1);}

C_noret_decl(trf_5260)
static void C_ccall trf_5260(C_word c,C_word *av) C_noret;
static void C_ccall trf_5260(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5260(t0,t1);}

C_noret_decl(trf_5308)
static void C_ccall trf_5308(C_word c,C_word *av) C_noret;
static void C_ccall trf_5308(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5308(t0,t1);}

C_noret_decl(trf_5311)
static void C_ccall trf_5311(C_word c,C_word *av) C_noret;
static void C_ccall trf_5311(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5311(t0,t1);}

C_noret_decl(trf_5317)
static void C_ccall trf_5317(C_word c,C_word *av) C_noret;
static void C_ccall trf_5317(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5317(t0,t1);}

C_noret_decl(trf_5320)
static void C_ccall trf_5320(C_word c,C_word *av) C_noret;
static void C_ccall trf_5320(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5320(t0,t1);}

C_noret_decl(trf_5323)
static void C_ccall trf_5323(C_word c,C_word *av) C_noret;
static void C_ccall trf_5323(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5323(t0,t1);}

C_noret_decl(trf_5326)
static void C_ccall trf_5326(C_word c,C_word *av) C_noret;
static void C_ccall trf_5326(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5326(t0,t1);}

C_noret_decl(trf_5329)
static void C_ccall trf_5329(C_word c,C_word *av) C_noret;
static void C_ccall trf_5329(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5329(t0,t1);}

C_noret_decl(trf_5332)
static void C_ccall trf_5332(C_word c,C_word *av) C_noret;
static void C_ccall trf_5332(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5332(t0,t1);}

C_noret_decl(trf_5335)
static void C_ccall trf_5335(C_word c,C_word *av) C_noret;
static void C_ccall trf_5335(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5335(t0,t1);}

C_noret_decl(trf_5338)
static void C_ccall trf_5338(C_word c,C_word *av) C_noret;
static void C_ccall trf_5338(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5338(t0,t1);}

C_noret_decl(trf_5341)
static void C_ccall trf_5341(C_word c,C_word *av) C_noret;
static void C_ccall trf_5341(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5341(t0,t1);}

C_noret_decl(trf_5344)
static void C_ccall trf_5344(C_word c,C_word *av) C_noret;
static void C_ccall trf_5344(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5344(t0,t1);}

C_noret_decl(trf_5347)
static void C_ccall trf_5347(C_word c,C_word *av) C_noret;
static void C_ccall trf_5347(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5347(t0,t1);}

C_noret_decl(trf_5350)
static void C_ccall trf_5350(C_word c,C_word *av) C_noret;
static void C_ccall trf_5350(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5350(t0,t1);}

C_noret_decl(trf_5353)
static void C_ccall trf_5353(C_word c,C_word *av) C_noret;
static void C_ccall trf_5353(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5353(t0,t1);}

C_noret_decl(trf_5356)
static void C_ccall trf_5356(C_word c,C_word *av) C_noret;
static void C_ccall trf_5356(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5356(t0,t1);}

C_noret_decl(trf_5359)
static void C_ccall trf_5359(C_word c,C_word *av) C_noret;
static void C_ccall trf_5359(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5359(t0,t1);}

C_noret_decl(trf_5362)
static void C_ccall trf_5362(C_word c,C_word *av) C_noret;
static void C_ccall trf_5362(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5362(t0,t1);}

C_noret_decl(trf_5365)
static void C_ccall trf_5365(C_word c,C_word *av) C_noret;
static void C_ccall trf_5365(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5365(t0,t1);}

C_noret_decl(trf_5370)
static void C_ccall trf_5370(C_word c,C_word *av) C_noret;
static void C_ccall trf_5370(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5370(t0,t1);}

C_noret_decl(trf_5375)
static void C_ccall trf_5375(C_word c,C_word *av) C_noret;
static void C_ccall trf_5375(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5375(t0,t1);}

C_noret_decl(trf_5380)
static void C_ccall trf_5380(C_word c,C_word *av) C_noret;
static void C_ccall trf_5380(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5380(t0,t1);}

C_noret_decl(trf_5385)
static void C_ccall trf_5385(C_word c,C_word *av) C_noret;
static void C_ccall trf_5385(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5385(t0,t1);}

C_noret_decl(trf_5412)
static void C_ccall trf_5412(C_word c,C_word *av) C_noret;
static void C_ccall trf_5412(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5412(t0,t1);}

C_noret_decl(trf_5415)
static void C_ccall trf_5415(C_word c,C_word *av) C_noret;
static void C_ccall trf_5415(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5415(t0,t1);}

C_noret_decl(trf_5418)
static void C_ccall trf_5418(C_word c,C_word *av) C_noret;
static void C_ccall trf_5418(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5418(t0,t1);}

C_noret_decl(trf_5421)
static void C_ccall trf_5421(C_word c,C_word *av) C_noret;
static void C_ccall trf_5421(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5421(t0,t1);}

C_noret_decl(trf_5424)
static void C_ccall trf_5424(C_word c,C_word *av) C_noret;
static void C_ccall trf_5424(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5424(t0,t1);}

C_noret_decl(trf_5499)
static void C_ccall trf_5499(C_word c,C_word *av) C_noret;
static void C_ccall trf_5499(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5499(t0,t1);}

C_noret_decl(trf_5506)
static void C_ccall trf_5506(C_word c,C_word *av) C_noret;
static void C_ccall trf_5506(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5506(t0,t1);}

C_noret_decl(trf_5531)
static void C_ccall trf_5531(C_word c,C_word *av) C_noret;
static void C_ccall trf_5531(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5531(t0,t1);}

C_noret_decl(trf_5559)
static void C_ccall trf_5559(C_word c,C_word *av) C_noret;
static void C_ccall trf_5559(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5559(t0,t1);}

C_noret_decl(trf_5639)
static void C_ccall trf_5639(C_word c,C_word *av) C_noret;
static void C_ccall trf_5639(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5639(t0,t1);}

C_noret_decl(trf_5649)
static void C_ccall trf_5649(C_word c,C_word *av) C_noret;
static void C_ccall trf_5649(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5649(t0,t1,t2);}

C_noret_decl(trf_5675)
static void C_ccall trf_5675(C_word c,C_word *av) C_noret;
static void C_ccall trf_5675(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5675(t0,t1);}

C_noret_decl(trf_5749)
static void C_ccall trf_5749(C_word c,C_word *av) C_noret;
static void C_ccall trf_5749(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5749(t0,t1);}

C_noret_decl(trf_5772)
static void C_ccall trf_5772(C_word c,C_word *av) C_noret;
static void C_ccall trf_5772(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_5772(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_6173)
static void C_ccall trf_6173(C_word c,C_word *av) C_noret;
static void C_ccall trf_6173(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6173(t0,t1,t2);}

C_noret_decl(trf_6196)
static void C_ccall trf_6196(C_word c,C_word *av) C_noret;
static void C_ccall trf_6196(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6196(t0,t1,t2);}

C_noret_decl(trf_6248)
static void C_ccall trf_6248(C_word c,C_word *av) C_noret;
static void C_ccall trf_6248(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6248(t0,t1,t2);}

C_noret_decl(trf_6295)
static void C_ccall trf_6295(C_word c,C_word *av) C_noret;
static void C_ccall trf_6295(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6295(t0,t1,t2);}

C_noret_decl(trf_6334)
static void C_ccall trf_6334(C_word c,C_word *av) C_noret;
static void C_ccall trf_6334(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6334(t0,t1,t2);}

C_noret_decl(trf_6399)
static void C_ccall trf_6399(C_word c,C_word *av) C_noret;
static void C_ccall trf_6399(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6399(t0,t1,t2);}

C_noret_decl(trf_6494)
static void C_ccall trf_6494(C_word c,C_word *av) C_noret;
static void C_ccall trf_6494(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6494(t0,t1,t2);}

C_noret_decl(trf_6562)
static void C_ccall trf_6562(C_word c,C_word *av) C_noret;
static void C_ccall trf_6562(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6562(t0,t1,t2);}

C_noret_decl(trf_6635)
static void C_ccall trf_6635(C_word c,C_word *av) C_noret;
static void C_ccall trf_6635(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6635(t0,t1,t2);}

C_noret_decl(trf_6715)
static void C_ccall trf_6715(C_word c,C_word *av) C_noret;
static void C_ccall trf_6715(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6715(t0,t1,t2);}

C_noret_decl(trf_6791)
static void C_ccall trf_6791(C_word c,C_word *av) C_noret;
static void C_ccall trf_6791(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6791(t0,t1);}

C_noret_decl(trf_6821)
static void C_ccall trf_6821(C_word c,C_word *av) C_noret;
static void C_ccall trf_6821(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6821(t0,t1,t2);}

C_noret_decl(trf_6855)
static void C_ccall trf_6855(C_word c,C_word *av) C_noret;
static void C_ccall trf_6855(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6855(t0,t1,t2);}

C_noret_decl(trf_6889)
static void C_ccall trf_6889(C_word c,C_word *av) C_noret;
static void C_ccall trf_6889(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6889(t0,t1,t2);}

C_noret_decl(trf_6958)
static void C_ccall trf_6958(C_word c,C_word *av) C_noret;
static void C_ccall trf_6958(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6958(t0,t1,t2);}

C_noret_decl(trf_7002)
static void C_ccall trf_7002(C_word c,C_word *av) C_noret;
static void C_ccall trf_7002(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7002(t0,t1,t2);}

C_noret_decl(trf_7039)
static void C_ccall trf_7039(C_word c,C_word *av) C_noret;
static void C_ccall trf_7039(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7039(t0,t1,t2);}

C_noret_decl(trf_7073)
static void C_ccall trf_7073(C_word c,C_word *av) C_noret;
static void C_ccall trf_7073(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7073(t0,t1,t2);}

C_noret_decl(trf_7132)
static void C_ccall trf_7132(C_word c,C_word *av) C_noret;
static void C_ccall trf_7132(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7132(t0,t1);}

C_noret_decl(trf_7276)
static void C_ccall trf_7276(C_word c,C_word *av) C_noret;
static void C_ccall trf_7276(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7276(t0,t1,t2);}

C_noret_decl(trf_7337)
static void C_ccall trf_7337(C_word c,C_word *av) C_noret;
static void C_ccall trf_7337(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7337(t0,t1,t2);}

C_noret_decl(trf_7375)
static void C_ccall trf_7375(C_word c,C_word *av) C_noret;
static void C_ccall trf_7375(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7375(t0,t1,t2);}

C_noret_decl(trf_7398)
static void C_ccall trf_7398(C_word c,C_word *av) C_noret;
static void C_ccall trf_7398(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7398(t0,t1,t2);}

C_noret_decl(trf_7431)
static void C_ccall trf_7431(C_word c,C_word *av) C_noret;
static void C_ccall trf_7431(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7431(t0,t1,t2);}

C_noret_decl(trf_7500)
static void C_ccall trf_7500(C_word c,C_word *av) C_noret;
static void C_ccall trf_7500(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7500(t0,t1,t2);}

C_noret_decl(trf_7523)
static void C_ccall trf_7523(C_word c,C_word *av) C_noret;
static void C_ccall trf_7523(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7523(t0,t1,t2);}

C_noret_decl(trf_7586)
static void C_ccall trf_7586(C_word c,C_word *av) C_noret;
static void C_ccall trf_7586(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7586(t0,t1,t2);}

C_noret_decl(trf_7796)
static void C_ccall trf_7796(C_word c,C_word *av) C_noret;
static void C_ccall trf_7796(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7796(t0,t1,t2);}

C_noret_decl(trf_7860)
static void C_ccall trf_7860(C_word c,C_word *av) C_noret;
static void C_ccall trf_7860(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7860(t0,t1,t2);}

C_noret_decl(trf_7931)
static void C_ccall trf_7931(C_word c,C_word *av) C_noret;
static void C_ccall trf_7931(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7931(t0,t1,t2);}

C_noret_decl(trf_7971)
static void C_ccall trf_7971(C_word c,C_word *av) C_noret;
static void C_ccall trf_7971(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7971(t0,t1,t2);}

C_noret_decl(trf_8010)
static void C_ccall trf_8010(C_word c,C_word *av) C_noret;
static void C_ccall trf_8010(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8010(t0,t1);}

C_noret_decl(trf_8037)
static void C_ccall trf_8037(C_word c,C_word *av) C_noret;
static void C_ccall trf_8037(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8037(t0,t1);}

C_noret_decl(trf_8044)
static void C_ccall trf_8044(C_word c,C_word *av) C_noret;
static void C_ccall trf_8044(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8044(t0,t1);}

/* f8581 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in a5940 in k5928 in k5925 in k5922 in k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in ... */
static void C_ccall f8581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f8581,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9062,a[2]=t2,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[179]+1);
av2[3]=lf[180];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}

/* f9056 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in a5940 in k5928 in k5925 in k5922 in k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in ... */
static void C_ccall f9056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9056,2,av);}
/* batch-driver.scm:253: chicken.compiler.support#debugging */
t2=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9062 */
static void C_ccall f9062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9062,2,av);}
/* batch-driver.scm:253: chicken.compiler.support#debugging */
t2=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9068 in k5952 in k5949 in k5946 in k5943 in a5940 in k5928 in k5925 in k5922 in k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in ... */
static void C_ccall f9068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9068,2,av);}
/* batch-driver.scm:253: chicken.compiler.support#debugging */
t2=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9074 in k5946 in k5943 in a5940 in k5928 in k5925 in k5922 in k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in ... */
static void C_ccall f9074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9074,2,av);}
/* batch-driver.scm:253: chicken.compiler.support#debugging */
t2=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9080 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in ... */
static void C_ccall f9080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9080,2,av);}
/* batch-driver.scm:253: chicken.compiler.support#debugging */
t2=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9086 in k6053 in k6050 in k6047 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in ... */
static void C_ccall f9086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9086,2,av);}
/* batch-driver.scm:253: chicken.compiler.support#debugging */
t2=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9098 in for-each-loop2006 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in ... */
static void C_ccall f9098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9098,2,av);}
/* batch-driver.scm:253: chicken.compiler.support#debugging */
t2=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9106 in k6272 in for-each-loop1984 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in ... */
static void C_ccall f9106(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9106,2,av);}
/* batch-driver.scm:253: chicken.compiler.support#debugging */
t2=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9118 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in ... */
static void C_ccall f9118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9118,2,av);}
/* batch-driver.scm:253: chicken.compiler.support#debugging */
t2=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9142 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in ... */
static void C_ccall f9142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9142,2,av);}
/* batch-driver.scm:253: chicken.compiler.support#debugging */
t2=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9148 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in ... */
static void C_ccall f9148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9148,2,av);}
/* batch-driver.scm:253: chicken.compiler.support#debugging */
t2=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9162 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in ... */
static void C_ccall f9162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9162,2,av);}
/* batch-driver.scm:253: chicken.compiler.support#debugging */
t2=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9168 in k7191 in k7185 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in ... */
static void C_ccall f9168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9168,2,av);}
/* batch-driver.scm:253: chicken.compiler.support#debugging */
t2=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9174 in k7191 in k7185 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in ... */
static void C_ccall f9174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9174,2,av);}
/* batch-driver.scm:253: chicken.compiler.support#debugging */
t2=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9180 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in ... */
static void C_ccall f9180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9180,2,av);}
/* batch-driver.scm:253: chicken.compiler.support#debugging */
t2=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9186 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in ... */
static void C_ccall f9186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9186,2,av);}
/* batch-driver.scm:253: chicken.compiler.support#debugging */
t2=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9200 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in ... */
static void C_ccall f9200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9200,2,av);}
/* batch-driver.scm:253: chicken.compiler.support#debugging */
t2=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9216 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in ... */
static void C_ccall f9216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9216,2,av);}
/* batch-driver.scm:253: chicken.compiler.support#debugging */
t2=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9222 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in ... */
static void C_ccall f9222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9222,2,av);}
/* batch-driver.scm:253: chicken.compiler.support#debugging */
t2=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9228 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in ... */
static void C_ccall f9228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9228,2,av);}
/* batch-driver.scm:253: chicken.compiler.support#debugging */
t2=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9234 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in ... */
static void C_ccall f9234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9234,2,av);}
/* batch-driver.scm:253: chicken.compiler.support#debugging */
t2=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9240 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in k5309 in k5306 in k5303 in k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in ... */
static void C_ccall f9240(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9240,2,av);}
/* batch-driver.scm:253: chicken.compiler.support#debugging */
t2=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2662 */
static void C_ccall f_2664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2664,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2667,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k2665 in k2662 */
static void C_ccall f_2667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2667,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2670,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k2668 in k2665 in k2662 */
static void C_ccall f_2670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2670,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2673,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_2673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2673,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2676,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_2676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2676,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2679,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_2679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2679,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2682,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_support_toplevel(2,av2);}}

/* k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_2682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2682,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2685,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_compiler_2dsyntax_toplevel(2,av2);}}

/* k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_2685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2685,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2688,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_compiler_toplevel(2,av2);}}

/* k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_2688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2688,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2691,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_optimizer_toplevel(2,av2);}}

/* k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_2691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2691,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2694,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_2694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2694,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2697,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_scrutinizer_toplevel(2,av2);}}

/* k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_2697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2697,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2700,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_lfa2_toplevel(2,av2);}}

/* k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_2700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2700,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2703,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_c_2dplatform_toplevel(2,av2);}}

/* k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_2703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2703,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2706,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_c_2dbackend_toplevel(2,av2);}}

/* k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_2706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2706,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2709,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_user_2dpass_toplevel(2,av2);}}

/* k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_2709(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(34,c,5)))){
C_save_and_reclaim((void *)f_2709,2,av);}
a=C_alloc(34);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_mutate(&lf[2] /* (set! chicken.compiler.batch-driver#append-map ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2910,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[6] /* (set! chicken.compiler.batch-driver#concatenate ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3172,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate(&lf[7] /* (set! chicken.compiler.batch-driver#filter ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3320,tmp=(C_word)a,a+=2,tmp));
t7=C_SCHEME_TRUE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_mutate(&lf[8] /* (set! chicken.compiler.batch-driver#initialize-analysis-database ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4088,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_mutate(&lf[18] /* (set! chicken.compiler.batch-driver#display-analysis-database ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4197,a[2]=t11,tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[74]+1 /* (set! chicken.compiler.batch-driver#compile-source-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4779,tmp=(C_word)a,a+=2,tmp));
t14=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}

/* chicken.compiler.batch-driver#append-map in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_fcall f_2910(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_2910,4,t1,t2,t3,t4);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t4))){
t5=t3;
t6=C_i_check_list_2(t5,lf[3]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2925,a[2]=t2,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_2925(t10,t1,t5);}
else{
t5=C_a_i_cons(&a,2,t3,t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2965,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_2965(t9,t1,t5);}}

/* foldr242 in chicken.compiler.batch-driver#append-map in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_fcall f_2925(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_2925,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2933,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2952,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
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

/* g247 in foldr242 in chicken.compiler.batch-driver#append-map in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_fcall f_2933(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2933,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2941,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:72: proc */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2939 in g247 in foldr242 in chicken.compiler.batch-driver#append-map in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_2941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2941,2,av);}
/* mini-srfi-1.scm:72: scheme#append */
t2=*((C_word*)lf[4]+1);{
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

/* k2950 in foldr242 in chicken.compiler.batch-driver#append-map in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_2952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2952,2,av);}
/* mini-srfi-1.scm:72: g247 */
t2=((C_word*)t0)[2];
f_2933(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in chicken.compiler.batch-driver#append-map in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_fcall f_2965(C_word t0,C_word t1,C_word t2){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,0,3)))){
C_save_and_reclaim_args((void *)trf_2965,3,t0,t1,t2);}
a=C_alloc(23);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3120,tmp=(C_word)a,a+=2,tmp);
t5=(
  f_3120(t3)
);
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2979,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=t2;
t12=C_i_check_list_2(t11,lf[5]);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3044,a[2]=t6,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3046,a[2]=t9,a[3]=t15,a[4]=t10,tmp=(C_word)a,a+=5,tmp));
t17=((C_word*)t15)[1];
f_3046(t17,t13,t11);}}

/* k2977 in loop in chicken.compiler.batch-driver#append-map in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_2979(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_2979,2,av);}
a=C_alloc(20);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2983,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=((C_word*)t0)[3];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2995,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2997,a[2]=t6,a[3]=t11,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_2997(t13,t9,t8);}

/* k2981 in k2977 in loop in chicken.compiler.batch-driver#append-map in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_2983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2983,2,av);}
/* mini-srfi-1.scm:76: scheme#append */
t2=*((C_word*)lf[4]+1);{
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

/* k2993 in k2977 in loop in chicken.compiler.batch-driver#append-map in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_2995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2995,2,av);}
/* mini-srfi-1.scm:77: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2965(t2,((C_word*)t0)[3],t1);}

/* map-loop284 in k2977 in loop in chicken.compiler.batch-driver#append-map in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_fcall f_2997(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2997,3,t0,t1,t2);}
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

/* k3042 in loop in chicken.compiler.batch-driver#append-map in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_3044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3044,2,av);}{
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

/* map-loop257 in loop in chicken.compiler.batch-driver#append-map in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3046,3,t0,t1,t2);}
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

/* loop in a3709 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in ... */
static void C_fcall f_3086(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3086,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3108,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(t2);
/* mini-srfi-1.scm:82: pred */
t6=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k3106 in loop in a3709 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in ... */
static void C_ccall f_3108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3108,2,av);}
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
f_3086(t4,((C_word*)t0)[2],t3);}}

/* loop in loop in chicken.compiler.batch-driver#append-map in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static C_word C_fcall f_3120(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t2=C_i_car(t1);
t3=C_i_nullp(t2);
if(C_truep(t3)){
return(t3);}
else{
t4=t1;
t5=C_u_i_cdr(t4);
t7=t5;
t1=t7;
goto loop;}}}

/* chicken.compiler.batch-driver#concatenate in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_fcall f_3172(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_3172,2,t1,t2);}
a=C_alloc(5);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3178,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_3178(t6,t1,t2);}

/* loop in chicken.compiler.batch-driver#concatenate in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_fcall f_3178(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3178,3,t0,t1,t2);}
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
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3196,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=t2;
t7=C_u_i_cdr(t6);
/* mini-srfi-1.scm:101: loop */
t9=t5;
t10=t7;
t1=t9;
t2=t10;
goto loop;}}

/* k3194 in loop in chicken.compiler.batch-driver#concatenate in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_3196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3196,2,av);}
/* mini-srfi-1.scm:101: scheme#append */
t2=*((C_word*)lf[4]+1);{
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

/* loop in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in ... */
static void C_fcall f_3206(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3206,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=t2;
t6=C_u_i_cdr(t5);
/* mini-srfi-1.scm:107: loop */
t11=t1;
t12=t6;
t1=t11;
t2=t12;
goto loop;}
else{
t5=t2;
t6=C_u_i_car(t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3233,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=t2;
t9=C_u_i_cdr(t8);
/* mini-srfi-1.scm:109: loop */
t11=t7;
t12=t9;
t1=t11;
t2=t12;
goto loop;}}}

/* k3231 in loop in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in ... */
static void C_ccall f_3233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3233,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.compiler.batch-driver#filter in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_fcall f_3320(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3320,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_check_list_2(t3,lf[3]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3329,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_3329(t8,t1,t3);}

/* foldr389 in chicken.compiler.batch-driver#filter in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_fcall f_3329(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_3329,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3337,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3358,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
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

/* g394 in foldr389 in chicken.compiler.batch-driver#filter in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_fcall f_3337(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3337,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3344,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:131: pred */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3342 in g394 in foldr389 in chicken.compiler.batch-driver#filter in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_3344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3344,2,av);}
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

/* k3356 in foldr389 in chicken.compiler.batch-driver#filter in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_3358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3358,2,av);}
/* mini-srfi-1.scm:131: g394 */
t2=((C_word*)t0)[2];
f_3337(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* a3418 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in ... */
static void C_ccall f_3419(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3419,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3427,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* mini-srfi-1.scm:141: pred */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3425 in a3418 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in ... */
static void C_ccall f_3427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3427,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_not(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3709 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in ... */
static void C_ccall f_3710(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3710,3,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3716,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=t3;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3086,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_3086(t8,t1,((C_word*)t0)[2]);}

/* a3715 in a3709 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in ... */
static void C_ccall f_3716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3716,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_memq(((C_word*)t0)[2],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a3994 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in ... */
static void C_ccall f_3995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3995,2,av);}
/* batch-driver.scm:70: chicken.compiler.core#compute-database-statistics */
t2=*((C_word*)lf[214]+1);{
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

/* a4000 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in ... */
static void C_ccall f_4001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7=av[7];
C_word t8=av[8];
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_4001,9,av);}
a=C_alloc(10);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4008,a[2]=t1,a[3]=t8,a[4]=t7,a[5]=t6,a[6]=t5,a[7]=t4,a[8]=t3,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:71: chicken.compiler.support#debugging */
t10=*((C_word*)lf[102]+1);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[213];
av2[3]=lf[222];
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}

/* k4006 in a4000 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in ... */
static void C_ccall f_4008(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4008,2,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4014,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:72: ##sys#print */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[221];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4012 in k4006 in a4000 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in ... */
static void C_ccall f_4014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_4014,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4017,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:72: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4015 in k4012 in k4006 in a4000 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in ... */
static void C_ccall f_4017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_4017,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:72: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[220];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4018 in k4015 in k4012 in k4006 in a4000 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in ... */
static void C_ccall f_4020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_4020,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4023,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:72: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4021 in k4018 in k4015 in k4012 in k4006 in a4000 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in ... */
static void C_ccall f_4023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4023,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4026,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:72: ##sys#write-char-0 */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4024 in k4021 in k4018 in k4015 in k4012 in k4006 in a4000 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in ... */
static void C_ccall f_4026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_4026,2,av);}
a=C_alloc(9);
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4032,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:73: ##sys#print */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[219];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4030 in k4024 in k4021 in k4018 in k4015 in k4012 in k4006 in a4000 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in ... */
static void C_ccall f_4032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_4032,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4035,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:73: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4033 in k4030 in k4024 in k4021 in k4018 in k4015 in k4012 in k4006 in a4000 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in ... */
static void C_ccall f_4035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4035,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4038,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:73: ##sys#write-char-0 */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4036 in k4033 in k4030 in k4024 in k4021 in k4018 in k4015 in k4012 in k4006 in a4000 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in ... */
static void C_ccall f_4038(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4038,2,av);}
a=C_alloc(8);
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4044,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:74: ##sys#print */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[218];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4042 in k4036 in k4033 in k4030 in k4024 in k4021 in k4018 in k4015 in k4012 in k4006 in a4000 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in ... */
static void C_ccall f_4044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4044,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4047,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:74: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4045 in k4042 in k4036 in k4033 in k4030 in k4024 in k4021 in k4018 in k4015 in k4012 in k4006 in a4000 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in ... */
static void C_ccall f_4047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4047,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4050,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:74: ##sys#write-char-0 */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4048 in k4045 in k4042 in k4036 in k4033 in k4030 in k4024 in k4021 in k4018 in k4015 in k4012 in k4006 in a4000 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in ... */
static void C_ccall f_4050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4050,2,av);}
a=C_alloc(7);
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4056,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:75: ##sys#print */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[217];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4054 in k4048 in k4045 in k4042 in k4036 in k4033 in k4030 in k4024 in k4021 in k4018 in k4015 in k4012 in k4006 in a4000 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in ... */
static void C_ccall f_4056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4056,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4059,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:75: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4057 in k4054 in k4048 in k4045 in k4042 in k4036 in k4033 in k4030 in k4024 in k4021 in k4018 in k4015 in k4012 in k4006 in a4000 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in ... */
static void C_ccall f_4059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4059,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4062,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:75: ##sys#write-char-0 */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4060 in k4057 in k4054 in k4048 in k4045 in k4042 in k4036 in k4033 in k4030 in k4024 in k4021 in k4018 in k4015 in k4012 in k4006 in a4000 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in ... */
static void C_ccall f_4062(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4062,2,av);}
a=C_alloc(6);
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4068,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:76: ##sys#print */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[216];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4066 in k4060 in k4057 in k4054 in k4048 in k4045 in k4042 in k4036 in k4033 in k4030 in k4024 in k4021 in k4018 in k4015 in k4012 in k4006 in a4000 in k5787 in k5784 in k5780 in k5777 in k5774 in ... */
static void C_ccall f_4068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4068,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4071,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:76: ##sys#print */
t3=*((C_word*)lf[22]+1);{
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
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4069 in k4066 in k4060 in k4057 in k4054 in k4048 in k4045 in k4042 in k4036 in k4033 in k4030 in k4024 in k4021 in k4018 in k4015 in k4012 in k4006 in a4000 in k5787 in k5784 in k5780 in k5777 in ... */
static void C_ccall f_4071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4071,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4074,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:76: ##sys#write-char-0 */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4072 in k4069 in k4066 in k4060 in k4057 in k4054 in k4048 in k4045 in k4042 in k4036 in k4033 in k4030 in k4024 in k4021 in k4018 in k4015 in k4012 in k4006 in a4000 in k5787 in k5784 in k5780 in ... */
static void C_ccall f_4074(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4074,2,av);}
a=C_alloc(5);
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4080,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:77: ##sys#print */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[215];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4078 in k4072 in k4069 in k4066 in k4060 in k4057 in k4054 in k4048 in k4045 in k4042 in k4036 in k4033 in k4030 in k4024 in k4021 in k4018 in k4015 in k4012 in k4006 in a4000 in k5787 in k5784 in ... */
static void C_ccall f_4080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4080,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4083,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:77: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4081 in k4078 in k4072 in k4069 in k4066 in k4060 in k4057 in k4054 in k4048 in k4045 in k4042 in k4036 in k4033 in k4030 in k4024 in k4021 in k4018 in k4015 in k4012 in k4006 in a4000 in k5787 in ... */
static void C_ccall f_4083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4083,2,av);}
/* batch-driver.scm:77: ##sys#write-char-0 */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.compiler.batch-driver#initialize-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_fcall f_4088(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_4088,2,t0,t1);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4092,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=*((C_word*)lf[9]+1);
t4=C_i_check_list_2(*((C_word*)lf[9]+1),lf[10]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4104,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4174,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_4174(t9,t5,*((C_word*)lf[9]+1));}
else{
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4090 in chicken.compiler.batch-driver#initialize-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_4092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4092,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4102 in chicken.compiler.batch-driver#initialize-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_4104(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4104,2,av);}
a=C_alloc(8);
t2=*((C_word*)lf[11]+1);
t3=C_i_check_list_2(*((C_word*)lf[11]+1),lf[10]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4115,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4151,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_4151(t8,t4,*((C_word*)lf[11]+1));}

/* k4113 in k4102 in chicken.compiler.batch-driver#initialize-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_4115(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4115,2,av);}
a=C_alloc(5);
t2=*((C_word*)lf[12]+1);
t3=C_i_check_list_2(*((C_word*)lf[12]+1),lf[10]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4128,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4128(t7,((C_word*)t0)[2],*((C_word*)lf[12]+1));}

/* for-each-loop775 in k4113 in k4102 in chicken.compiler.batch-driver#initialize-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_fcall f_4128(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_4128,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4138,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:99: chicken.compiler.support#mark-variable */
t5=*((C_word*)lf[13]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[14];
av2[4]=lf[15];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4136 in for-each-loop775 in k4113 in k4102 in chicken.compiler.batch-driver#initialize-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_4138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4138,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4128(t3,((C_word*)t0)[4],t2);}

/* for-each-loop757 in k4102 in chicken.compiler.batch-driver#initialize-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_fcall f_4151(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_4151,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4161,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:95: chicken.compiler.support#mark-variable */
t5=*((C_word*)lf[13]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[14];
av2[4]=lf[16];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4159 in for-each-loop757 in k4102 in chicken.compiler.batch-driver#initialize-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_4161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4161,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4151(t3,((C_word*)t0)[4],t2);}

/* for-each-loop739 in chicken.compiler.batch-driver#initialize-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_fcall f_4174(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_4174,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4184,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:91: chicken.compiler.support#mark-variable */
t5=*((C_word*)lf[13]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[14];
av2[4]=lf[17];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4182 in for-each-loop739 in chicken.compiler.batch-driver#initialize-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_4184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4184,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4174(t3,((C_word*)t0)[4],t2);}

/* chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_fcall f_4197(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_4197,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4201,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_4201(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4777,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:120: scheme#append */
t5=*((C_word*)lf[4]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=*((C_word*)lf[72]+1);
av2[3]=*((C_word*)lf[73]+1);
av2[4]=*((C_word*)lf[12]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_fcall f_4201(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_4201,2,t0,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4206,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:123: chicken.internal#hash-table-for-each */
t3=*((C_word*)lf[71]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_4206(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_4206,4,av);}
a=C_alloc(19);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_END_OF_LIST;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_memq(t2,((C_word*)((C_word*)t0)[2])[1]))){
t14=C_SCHEME_UNDEFINED;
t15=t1;{
C_word *av2=av;
av2[0]=t15;
av2[1]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}
else{
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4216,a[2]=t1,a[3]=t9,a[4]=t5,a[5]=t7,a[6]=t11,a[7]=t13,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:131: scheme#write */
t15=*((C_word*)lf[70]+1);{
C_word *av2=av;
av2[0]=t15;
av2[1]=t14;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}}

/* k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_4216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_4216,2,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4219,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4388,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_4388(t6,t2,((C_word*)t0)[8]);}

/* k4217 in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_4219(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_4219,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4222,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[7])[1]))){
t3=*((C_word*)lf[20]+1);
t4=*((C_word*)lf[20]+1);
t5=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4379,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:157: ##sys#print */
t7=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[30];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4222(2,av2);}}}

/* k4220 in k4217 in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in ... */
static void C_ccall f_4222(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_4222,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4225,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[6])[1]))){
t3=*((C_word*)lf[20]+1);
t4=*((C_word*)lf[20]+1);
t5=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4363,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:158: ##sys#print */
t7=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[29];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4225(2,av2);}}}

/* k4223 in k4220 in k4217 in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in ... */
static void C_ccall f_4225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4225,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4228,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4292,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t4=C_eqp(((C_word*)((C_word*)t0)[4])[1],lf[28]);
t5=t3;
f_4292(t5,C_i_not(t4));}
else{
t4=t3;
f_4292(t4,C_SCHEME_FALSE);}}

/* k4226 in k4223 in k4220 in k4217 in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in ... */
static void C_ccall f_4228(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4228,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4231,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[3])[1]))){
t3=((C_word*)((C_word*)t0)[3])[1];
t4=C_i_check_list_2(t3,lf[10]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4268,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_4268(t8,t2,t3);}
else{
/* batch-driver.scm:168: scheme#newline */
t3=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in ... */
static void C_ccall f_4231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4231,2,av);}
/* batch-driver.scm:168: scheme#newline */
t2=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4243 in for-each-loop945 in k4226 in k4223 in k4220 in k4217 in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in ... */
static void C_ccall f_4245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4245,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4256,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:166: chicken.compiler.support#node-class */
t3=*((C_word*)lf[24]+1);{
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

/* k4254 in k4243 in for-each-loop945 in k4226 in k4223 in k4220 in k4217 in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in ... */
static void C_ccall f_4256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4256,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4260,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:166: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[23]+1);{
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

/* k4258 in k4254 in k4243 in for-each-loop945 in k4226 in k4223 in k4220 in k4217 in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in ... */
static void C_ccall f_4260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4260,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* batch-driver.scm:166: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* for-each-loop945 in k4226 in k4223 in k4220 in k4217 in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in ... */
static void C_fcall f_4268(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4268,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4278,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=*((C_word*)lf[20]+1);
t8=*((C_word*)lf[20]+1);
t9=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4245,a[2]=t5,a[3]=t7,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:166: ##sys#print */
t11=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[25];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4276 in for-each-loop945 in k4226 in k4223 in k4220 in k4217 in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in ... */
static void C_ccall f_4278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4278,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4268(t3,((C_word*)t0)[4],t2);}

/* k4290 in k4223 in k4220 in k4217 in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in ... */
static void C_fcall f_4292(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_4292,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4298,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:160: ##sys#print */
t6=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[26];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=C_eqp(((C_word*)((C_word*)t0)[3])[1],lf[28]);
t4=t2;
f_4319(t4,C_i_not(t3));}
else{
t3=t2;
f_4319(t3,C_SCHEME_FALSE);}}}

/* k4296 in k4290 in k4223 in k4220 in k4217 in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in ... */
static void C_ccall f_4298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4298,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4309,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:160: chicken.compiler.support#node-class */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4307 in k4296 in k4290 in k4223 in k4220 in k4217 in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in ... */
static void C_ccall f_4309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4309,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4313,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:160: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4311 in k4307 in k4296 in k4290 in k4223 in k4220 in k4217 in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in ... */
static void C_ccall f_4313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4313,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* batch-driver.scm:160: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4317 in k4290 in k4223 in k4220 in k4217 in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in ... */
static void C_fcall f_4319(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_4319,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4325,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:162: ##sys#print */
t6=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[27];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
f_4228(2,av2);}}}

/* k4323 in k4317 in k4290 in k4223 in k4220 in k4217 in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in ... */
static void C_ccall f_4325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4325,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4336,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:162: chicken.compiler.support#node-class */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4334 in k4323 in k4317 in k4290 in k4223 in k4220 in k4217 in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in ... */
static void C_ccall f_4336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4336,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4340,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:162: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4338 in k4334 in k4323 in k4317 in k4290 in k4223 in k4220 in k4217 in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in ... */
static void C_ccall f_4340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4340,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* batch-driver.scm:162: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4361 in k4220 in k4217 in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in ... */
static void C_ccall f_4363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4363,2,av);}
t2=C_i_length(((C_word*)((C_word*)t0)[2])[1]);
/* batch-driver.scm:158: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4377 in k4217 in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in ... */
static void C_ccall f_4379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4379,2,av);}
t2=C_i_length(((C_word*)((C_word*)t0)[2])[1]);
/* batch-driver.scm:157: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* loop in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_fcall f_4388(C_word t0,C_word t1,C_word t2){
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
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,2)))){
C_save_and_reclaim_args((void *)trf_4388,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_i_pairp(t2))){
t3=C_i_caar(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4401,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_eqp(t4,lf[31]);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4412,a[2]=t2,a[3]=t5,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],a[7]=t1,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t6)){
t8=t7;
f_4412(t8,t6);}
else{
t8=C_eqp(t4,lf[50]);
if(C_truep(t8)){
t9=t7;
f_4412(t9,t8);}
else{
t9=C_eqp(t4,lf[51]);
if(C_truep(t9)){
t10=t7;
f_4412(t10,t9);}
else{
t10=C_eqp(t4,lf[52]);
if(C_truep(t10)){
t11=t7;
f_4412(t11,t10);}
else{
t11=C_eqp(t4,lf[53]);
if(C_truep(t11)){
t12=t7;
f_4412(t12,t11);}
else{
t12=C_eqp(t4,lf[54]);
if(C_truep(t12)){
t13=t7;
f_4412(t13,t12);}
else{
t13=C_eqp(t4,lf[55]);
if(C_truep(t13)){
t14=t7;
f_4412(t14,t13);}
else{
t14=C_eqp(t4,lf[56]);
if(C_truep(t14)){
t15=t7;
f_4412(t15,t14);}
else{
t15=C_eqp(t4,lf[57]);
if(C_truep(t15)){
t16=t7;
f_4412(t16,t15);}
else{
t16=C_eqp(t4,lf[58]);
if(C_truep(t16)){
t17=t7;
f_4412(t17,t16);}
else{
t17=C_eqp(t4,lf[59]);
if(C_truep(t17)){
t18=t7;
f_4412(t18,t17);}
else{
t18=C_eqp(t4,lf[60]);
if(C_truep(t18)){
t19=t7;
f_4412(t19,t18);}
else{
t19=C_eqp(t4,lf[61]);
if(C_truep(t19)){
t20=t7;
f_4412(t20,t19);}
else{
t20=C_eqp(t4,lf[62]);
if(C_truep(t20)){
t21=t7;
f_4412(t21,t20);}
else{
t21=C_eqp(t4,lf[63]);
if(C_truep(t21)){
t22=t7;
f_4412(t22,t21);}
else{
t22=C_eqp(t4,lf[64]);
if(C_truep(t22)){
t23=t7;
f_4412(t23,t22);}
else{
t23=C_eqp(t4,lf[65]);
if(C_truep(t23)){
t24=t7;
f_4412(t24,t23);}
else{
t24=C_eqp(t4,lf[66]);
if(C_truep(t24)){
t25=t7;
f_4412(t25,t24);}
else{
t25=C_eqp(t4,lf[67]);
if(C_truep(t25)){
t26=t7;
f_4412(t26,t25);}
else{
t26=C_eqp(t4,lf[68]);
t27=t7;
f_4412(t27,(C_truep(t26)?t26:C_eqp(t4,lf[69])));}}}}}}}}}}}}}}}}}}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4399 in loop in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in ... */
static void C_ccall f_4401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4401,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* batch-driver.scm:156: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4388(t4,((C_word*)t0)[4],t3);}

/* k4410 in loop in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in ... */
static void C_fcall f_4412(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4412,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:139: ##sys#write-char-0 */
t6=*((C_word*)lf[33]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_make_character(9);
av2[3]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[28]);
if(C_truep(t2)){
t3=C_mutate(((C_word *)((C_word*)t0)[5])+1,lf[28]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
/* batch-driver.scm:156: loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_4388(t6,((C_word*)t0)[7],t5);}
else{
t3=C_eqp(((C_word*)t0)[4],lf[34]);
if(C_truep(t3)){
t4=C_eqp(((C_word*)((C_word*)t0)[5])[1],lf[28]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* batch-driver.scm:156: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_4388(t7,((C_word*)t0)[7],t6);}
else{
t5=C_i_cdar(((C_word*)t0)[2]);
t6=C_mutate(((C_word *)((C_word*)t0)[5])+1,t5);
t7=((C_word*)t0)[2];
t8=C_u_i_cdr(t7);
/* batch-driver.scm:156: loop */
t9=((C_word*)((C_word*)t0)[6])[1];
f_4388(t9,((C_word*)t0)[7],t8);}}
else{
t4=C_eqp(((C_word*)t0)[4],lf[35]);
if(C_truep(t4)){
t5=C_eqp(((C_word*)((C_word*)t0)[5])[1],lf[28]);
if(C_truep(t5)){
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
/* batch-driver.scm:156: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_4388(t8,((C_word*)t0)[7],t7);}
else{
t6=C_i_cdar(((C_word*)t0)[2]);
t7=C_mutate(((C_word *)((C_word*)t0)[8])+1,t6);
t8=((C_word*)t0)[2];
t9=C_u_i_cdr(t8);
/* batch-driver.scm:156: loop */
t10=((C_word*)((C_word*)t0)[6])[1];
f_4388(t10,((C_word*)t0)[7],t9);}}
else{
t5=C_eqp(((C_word*)t0)[4],lf[36]);
if(C_truep(t5)){
t6=C_i_cdar(((C_word*)t0)[2]);
t7=C_mutate(((C_word *)((C_word*)t0)[9])+1,t6);
t8=((C_word*)t0)[2];
t9=C_u_i_cdr(t8);
/* batch-driver.scm:156: loop */
t10=((C_word*)((C_word*)t0)[6])[1];
f_4388(t10,((C_word*)t0)[7],t9);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[37]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4491,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t6)){
t8=t7;
f_4491(t8,t6);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[42]);
if(C_truep(t8)){
t9=t7;
f_4491(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[43]);
if(C_truep(t9)){
t10=t7;
f_4491(t10,t9);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[44]);
if(C_truep(t10)){
t11=t7;
f_4491(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[45]);
if(C_truep(t11)){
t12=t7;
f_4491(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[46]);
if(C_truep(t12)){
t13=t7;
f_4491(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[47]);
if(C_truep(t13)){
t14=t7;
f_4491(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[48]);
t15=t7;
f_4491(t15,(C_truep(t14)?t14:C_eqp(((C_word*)t0)[4],lf[49])));}}}}}}}}}}}}}

/* k4416 in k4410 in loop in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in ... */
static void C_ccall f_4418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4418,2,av);}
t2=C_i_caar(((C_word*)t0)[2]);
t3=C_i_assq(t2,lf[32]);
t4=C_i_cdr(t3);
/* batch-driver.scm:139: ##sys#print */
t5=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k4489 in k4410 in loop in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in ... */
static void C_fcall f_4491(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4491,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4497,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:150: ##sys#write-char-0 */
t6=*((C_word*)lf[33]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_make_character(9);
av2[3]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[38]);
if(C_truep(t2)){
t3=C_i_cdar(((C_word*)t0)[2]);
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,t3);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* batch-driver.scm:156: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_4388(t7,((C_word*)t0)[7],t6);}
else{
t3=C_eqp(((C_word*)t0)[4],lf[39]);
if(C_truep(t3)){
t4=C_i_cdar(((C_word*)t0)[2]);
t5=C_mutate(((C_word *)((C_word*)t0)[8])+1,t4);
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
/* batch-driver.scm:156: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_4388(t8,((C_word*)t0)[7],t7);}
else{
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
/* batch-driver.scm:155: chicken.compiler.support#bomb */
t6=*((C_word*)lf[40]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[41];
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}}}

/* k4495 in k4489 in k4410 in loop in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in ... */
static void C_ccall f_4497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4497,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4500,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_caar(((C_word*)t0)[2]);
/* batch-driver.scm:150: ##sys#print */
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4498 in k4495 in k4489 in k4410 in loop in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in ... */
static void C_ccall f_4500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4500,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4503,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:150: ##sys#write-char-0 */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(61);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4501 in k4498 in k4495 in k4489 in k4410 in loop in k4214 in a4205 in k4199 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in ... */
static void C_ccall f_4503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4503,2,av);}
t2=C_i_cdar(((C_word*)t0)[2]);
/* batch-driver.scm:150: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4775 in chicken.compiler.batch-driver#display-analysis-database in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_4777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4777,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_4201(t3,t2);}

/* chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_4779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +9,c,3)))){
C_save_and_reclaim((void*)f_4779,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+9);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4782,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4813,a[2]=t4,a[3]=t5,a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:181: chicken.compiler.core#initialize-compiler */
t7=*((C_word*)lf[481]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* option-arg in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_fcall f_4782(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_4782,2,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
t4=t2;
t5=C_u_i_car(t4);
/* batch-driver.scm:176: chicken.compiler.support#quit-compiling */
t6=*((C_word*)lf[75]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[76];
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t4=C_i_cadr(t2);
if(C_truep(C_i_symbolp(t4))){
/* batch-driver.scm:179: chicken.compiler.support#quit-compiling */
t5=*((C_word*)lf[75]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[77];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}

/* k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_4813(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4813,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=C_mutate((C_word*)lf[78]+1 /* (set! chicken.compiler.core#explicit-use-flag ...) */,C_u_i_memq(lf[79],t2));
t4=((C_word*)t0)[2];
t5=C_mutate((C_word*)lf[80]+1 /* (set! chicken.compiler.core#emit-debug-info ...) */,C_u_i_memq(lf[81],t4));
t6=((C_word*)t0)[2];
t7=C_u_i_memq(lf[82],t6);
t8=C_i_not(t7);
t9=C_set_block_item(lf[83] /* chicken.compiler.core#enable-module-registration */,0,t8);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4826,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t11=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[479],t11))){
t12=C_set_block_item(lf[477] /* chicken.compiler.core#static-extensions */,0,C_SCHEME_TRUE);
/* batch-driver.scm:188: chicken.platform#register-feature! */
t13=*((C_word*)lf[131]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t13;
av2[1]=t10;
av2[2]=lf[480];
((C_proc)(void*)(*((C_word*)t13+1)))(3,av2);}}
else{
t12=t10;{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_SCHEME_UNDEFINED;
f_4826(2,av2);}}}

/* k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_4826(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,2)))){
C_save_and_reclaim((void *)f_4826,2,av);}
a=C_alloc(28);
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[84],t2);
t4=((C_word*)t0)[2];
t5=C_u_i_memq(lf[85],t4);
t6=C_a_i_cons(&a,2,lf[86],*((C_word*)lf[87]+1));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8010,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=t5,tmp=(C_word)a,a+=10,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8029,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
t10=(C_truep(*((C_word*)lf[80]+1))?lf[474]:C_SCHEME_END_OF_LIST);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8037,a[2]=t9,a[3]=t11,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(*((C_word*)lf[78]+1))){
t13=t12;
f_8037(t13,C_SCHEME_END_OF_LIST);}
else{
t13=C_a_i_cons(&a,2,lf[378],*((C_word*)lf[478]+1));
t14=t12;
f_8037(t14,C_a_i_list(&a,1,t13));}}

/* k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_4840(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_4840,2,av);}
a=C_alloc(23);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=*((C_word*)lf[90]+1);
t8=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4846,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=t5,a[13]=t7,a[14]=t6,tmp=(C_word)a,a+=15,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7967,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:222: chicken.process-context#get-environment-variable */
t10=*((C_word*)lf[467]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[468];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in ... */
static void C_ccall f_4846(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_4846,2,av);}
a=C_alloc(20);
t2=C_i_check_list_2(t1,lf[5]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4852,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7931,a[2]=((C_word*)t0)[12],a[3]=t5,a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[14],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_7931(t7,t3,t1);}

/* k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in ... */
static void C_ccall f_4852(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_4852,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4855,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* batch-driver.scm:224: chicken.compiler.optimizer#default-optimization-passes */
t4=*((C_word*)lf[464]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in ... */
static void C_ccall f_4855(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,2)))){
C_save_and_reclaim((void *)f_4855,2,av);}
a=C_alloc(31);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=lf[91];
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=((C_word*)t0)[2];
t15=C_u_i_memq(lf[92],t14);
t16=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_4860,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=t9,a[14]=t11,a[15]=t13,a[16]=t7,a[17]=((C_word*)t0)[11],a[18]=((C_word*)t0)[12],tmp=(C_word)a,a+=19,tmp);
if(C_truep(t15)){
t17=t16;
f_4860(t17,t15);}
else{
t17=((C_word*)t0)[2];
t18=C_u_i_memq(lf[357],t17);
if(C_truep(t18)){
t19=t16;
f_4860(t19,t18);}
else{
t19=((C_word*)t0)[2];
t20=C_u_i_memq(lf[93],t19);
t21=t16;
f_4860(t21,t20);}}}

/* k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in ... */
static void C_fcall f_4860(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(38,0,2)))){
C_save_and_reclaim_args((void *)trf_4860,2,t0,t1);}
a=C_alloc(38);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_u_i_memq(lf[93],t3);
t5=(C_truep(t4)?C_i_cadr(t4):C_SCHEME_FALSE);
t6=t5;
t7=((C_word*)t0)[2];
t8=C_u_i_memq(lf[94],t7);
t9=((C_word*)t0)[2];
t10=C_u_i_memq(lf[95],t9);
t11=((C_word*)t0)[2];
t12=C_u_i_memq(lf[96],t11);
t13=((C_word*)t0)[2];
t14=C_u_i_memq(lf[97],t13);
t15=C_SCHEME_TRUE;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=((C_word*)t0)[2];
t18=C_u_i_memq(lf[98],t17);
t19=C_SCHEME_FALSE;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_SCHEME_FALSE;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_SCHEME_FALSE;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=((C_word*)t0)[2];
t26=C_u_i_memq(lf[99],t25);
t27=(*a=C_CLOSURE_TYPE|29,a[1]=(C_word)f_4880,a[2]=((C_word*)t0)[2],a[3]=t20,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t24,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=t22,a[13]=t12,a[14]=((C_word*)t0)[10],a[15]=((C_word*)t0)[11],a[16]=((C_word*)t0)[12],a[17]=t14,a[18]=((C_word*)t0)[13],a[19]=t18,a[20]=((C_word*)t0)[14],a[21]=t16,a[22]=((C_word*)t0)[15],a[23]=t6,a[24]=((C_word*)t0)[16],a[25]=t2,a[26]=t8,a[27]=((C_word*)t0)[17],a[28]=t10,a[29]=((C_word*)t0)[18],tmp=(C_word)a,a+=30,tmp);
if(C_truep(t26)){
t28=t27;
f_4880(t28,t26);}
else{
t28=((C_word*)t0)[2];
t29=t27;
f_4880(t29,C_u_i_memq(lf[463],t28));}}

/* k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in ... */
static void C_fcall f_4880(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(31,0,2)))){
C_save_and_reclaim_args((void *)trf_4880,2,t0,t1);}
a=C_alloc(31);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_u_i_memq(lf[100],t3);
t5=(*a=C_CLOSURE_TYPE|30,a[1]=(C_word)f_4885,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=t2,a[27]=((C_word*)t0)[26],a[28]=((C_word*)t0)[27],a[29]=((C_word*)t0)[28],a[30]=((C_word*)t0)[29],tmp=(C_word)a,a+=31,tmp);
if(C_truep(t4)){
/* batch-driver.scm:248: option-arg */
f_4782(t5,t4);}
else{
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_4885(2,av2);}}}

/* k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in ... */
static void C_ccall f_4885(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(91,c,6)))){
C_save_and_reclaim((void *)f_4885,2,av);}
a=C_alloc(91);
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
t21=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4903,tmp=(C_word)a,a+=2,tmp));
t22=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4930,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t23=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4952,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t24=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4979,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t25=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5025,tmp=(C_word)a,a+=2,tmp));
t26=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5108,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp));
t27=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5143,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp));
t28=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5153,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp));
t29=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5191,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp));
t30=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_5257,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=t18,a[12]=t16,a[13]=t20,a[14]=t6,a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=t8,a[20]=((C_word*)t0)[18],a[21]=((C_word*)t0)[19],a[22]=((C_word*)t0)[20],a[23]=((C_word*)t0)[21],a[24]=t14,a[25]=t10,a[26]=((C_word*)t0)[22],a[27]=((C_word*)t0)[23],a[28]=t2,a[29]=((C_word*)t0)[24],a[30]=((C_word*)t0)[25],a[31]=((C_word*)t0)[26],a[32]=t12,a[33]=((C_word*)t0)[3],a[34]=((C_word*)t0)[27],a[35]=((C_word*)t0)[28],a[36]=((C_word*)t0)[29],a[37]=((C_word*)t0)[5],tmp=(C_word)a,a+=38,tmp);
if(C_truep(((C_word*)t0)[30])){
t31=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7910,a[2]=t30,tmp=(C_word)a,a+=3,tmp);
t32=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7914,a[2]=t31,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:317: option-arg */
f_4782(t32,((C_word*)t0)[30]);}
else{
t31=t30;
f_5257(t31,C_SCHEME_UNDEFINED);}}

/* print-header in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in ... */
static void C_fcall f_4903(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_4903,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4907,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:256: chicken.compiler.support#debugging */
t5=*((C_word*)lf[102]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[103];
av2[3]=lf[104];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k4905 in print-header in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in ... */
static void C_ccall f_4907(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4907,2,av);}
a=C_alloc(5);
if(C_truep(C_i_memq(((C_word*)t0)[2],*((C_word*)lf[101]+1)))){
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4919,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:259: ##sys#write-char-0 */
t6=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_make_character(91);
av2[3]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4917 in k4905 in print-header in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in ... */
static void C_ccall f_4919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4919,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4922,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:259: ##sys#print */
t3=*((C_word*)lf[22]+1);{
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

/* k4920 in k4917 in k4905 in print-header in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in ... */
static void C_ccall f_4922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4922,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4925,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:259: ##sys#write-char-0 */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(93);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4923 in k4920 in k4917 in k4905 in print-header in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in ... */
static void C_ccall f_4925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4925,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4928,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:259: ##sys#write-char-0 */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4926 in k4923 in k4920 in k4917 in k4905 in print-header in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in ... */
static void C_ccall f_4928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4928,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* print-node in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in ... */
static void C_fcall f_4930(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4930,5,t0,t1,t2,t3,t4);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4937,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:263: print-header */
f_4903(t5,t2,t3);}

/* k4935 in print-node in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in ... */
static void C_ccall f_4937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4937,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
/* batch-driver.scm:265: chicken.compiler.support#dump-nodes */
t2=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4950,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:266: chicken.compiler.support#build-expression-tree */
t3=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
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
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4948 in k4935 in print-node in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in ... */
static void C_ccall f_4950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4950,2,av);}
/* batch-driver.scm:266: chicken.pretty-print#pretty-print */
t2=*((C_word*)lf[106]+1);{
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

/* print-db in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in ... */
static void C_fcall f_4952(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4952,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(5);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4959,a[2]=t1,a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:269: print-header */
f_4903(t6,t2,t3);}

/* k4957 in print-db in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in ... */
static void C_ccall f_4959(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4959,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4965,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:270: ##sys#print */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[108];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4963 in k4957 in print-db in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in ... */
static void C_ccall f_4965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4965,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4968,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:270: ##sys#print */
t3=*((C_word*)lf[22]+1);{
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
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4966 in k4963 in k4957 in print-db in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in ... */
static void C_ccall f_4968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4968,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4971,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:270: ##sys#write-char-0 */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(41);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4969 in k4966 in k4963 in k4957 in print-db in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in ... */
static void C_ccall f_4971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4971,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4974,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:270: ##sys#write-char-0 */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4972 in k4969 in k4966 in k4963 in k4957 in print-db in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in ... */
static void C_ccall f_4974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4974,2,av);}
/* batch-driver.scm:271: display-analysis-database */
t2=lf[18];
f_4197(t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* print-expr in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in ... */
static void C_fcall f_4979(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_4979,5,t0,t1,t2,t3,t4);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4986,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:274: print-header */
f_4903(t5,t2,t3);}

/* k4984 in print-expr in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in ... */
static void C_ccall f_4986(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4986,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_check_list_2(t2,lf[10]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5002,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_5002(t7,((C_word*)t0)[3],t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4989 in for-each-loop1148 in k4984 in print-expr in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in ... */
static void C_ccall f_4991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4991,2,av);}
/* batch-driver.scm:278: scheme#newline */
t2=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop1148 in k4984 in print-expr in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in ... */
static void C_fcall f_5002(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5002,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5012,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4991,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:277: chicken.pretty-print#pretty-print */
t7=*((C_word*)lf[106]+1);{
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

/* k5010 in for-each-loop1148 in k4984 in print-expr in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in ... */
static void C_ccall f_5012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5012,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5002(t3,((C_word*)t0)[4],t2);}

/* arg-val in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in ... */
static void C_fcall f_5025(C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,0,4)))){
C_save_and_reclaim_args((void *)trf_5025,2,t1,t2);}
a=C_alloc(16);
t3=C_i_string_length(t2);
t4=C_a_i_fixnum_difference(&a,2,t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5034,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t3,C_fix(2)))){
/* batch-driver.scm:285: scheme#string->number */
t6=*((C_word*)lf[110]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t6=C_i_string_ref(t2,t4);
t7=C_eqp(t6,C_make_character(109));
t8=(C_truep(t7)?t7:C_eqp(t6,C_make_character(77)));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5062,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5069,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:287: scheme#substring */
t11=*((C_word*)lf[111]+1);{
C_word av2[5];
av2[0]=t11;
av2[1]=t10;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
t9=C_eqp(t6,C_make_character(107));
t10=(C_truep(t9)?t9:C_eqp(t6,C_make_character(75)));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5082,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5087,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:288: scheme#substring */
t13=*((C_word*)lf[111]+1);{
C_word av2[5];
av2[0]=t13;
av2[1]=t12;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}
else{
/* batch-driver.scm:289: scheme#string->number */
t11=*((C_word*)lf[110]+1);{
C_word av2[3];
av2[0]=t11;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}}}}

/* k5032 in arg-val in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in ... */
static void C_ccall f_5034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5034,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* batch-driver.scm:290: chicken.compiler.support#quit-compiling */
t2=*((C_word*)lf[75]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[109];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k5060 in arg-val in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in ... */
static void C_ccall f_5062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(38,c,3)))){
C_save_and_reclaim((void *)f_5062,2,av);}
a=C_alloc(38);
t2=C_a_i_fixnum_times(&a,2,C_fix(1024),C_fix(1024));
t3=C_s_a_i_times(&a,2,t1,t2);
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* batch-driver.scm:290: chicken.compiler.support#quit-compiling */
t4=*((C_word*)lf[75]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[109];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k5067 in arg-val in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in ... */
static void C_ccall f_5069(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5069,2,av);}
/* batch-driver.scm:287: scheme#string->number */
t2=*((C_word*)lf[110]+1);{
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

/* k5080 in arg-val in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in ... */
static void C_ccall f_5082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_5082,2,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,C_fix(1024));
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* batch-driver.scm:290: chicken.compiler.support#quit-compiling */
t3=*((C_word*)lf[75]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[109];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k5085 in arg-val in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in ... */
static void C_ccall f_5087(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5087,2,av);}
/* batch-driver.scm:288: scheme#string->number */
t2=*((C_word*)lf[110]+1);{
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

/* collect-options in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in ... */
static void C_fcall f_5108(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_5108,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5114,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5114(t6,t1,((C_word*)t0)[3]);}

/* loop in collect-options in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in ... */
static void C_fcall f_5114(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_5114,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_memq(((C_word*)t0)[2],t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5122,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:294: g1192 */
t5=t4;
f_5122(t5,t1,t3);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* g1192 in loop in collect-options in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in ... */
static void C_fcall f_5122(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5122,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5130,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:294: option-arg */
f_4782(t3,t2);}

/* k5128 in g1192 in loop in collect-options in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in ... */
static void C_ccall f_5130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5130,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5134,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cddr(((C_word*)t0)[3]);
/* batch-driver.scm:294: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5114(t5,t3,t4);}

/* k5132 in k5128 in g1192 in loop in collect-options in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in ... */
static void C_ccall f_5134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5134,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* begin-time in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in ... */
static void C_fcall f_5143(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_5143,2,t0,t1);}
a=C_alloc(4);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5151,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:250: chicken.time#current-milliseconds */
t3=*((C_word*)lf[112]+1);{
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

/* k5149 in begin-time in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in ... */
static void C_ccall f_5151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5151,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* end-time in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in ... */
static void C_fcall f_5153(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_5153,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=*((C_word*)lf[20]+1);
t4=*((C_word*)lf[20]+1);
t5=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5163,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:302: ##sys#print */
t7=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[116];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5161 in end-time in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in ... */
static void C_ccall f_5163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5163,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5166,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:302: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5164 in k5161 in end-time in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in ... */
static void C_ccall f_5166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5166,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5169,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:302: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[115];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5167 in k5164 in k5161 in end-time in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in ... */
static void C_ccall f_5169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_5169,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5172,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5179,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5183,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5188,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:250: chicken.time#current-milliseconds */
t6=*((C_word*)lf[112]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k5170 in k5167 in k5164 in k5161 in end-time in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in ... */
static void C_ccall f_5172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5172,2,av);}
/* batch-driver.scm:302: ##sys#write-char-0 */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5177 in k5167 in k5164 in k5161 in end-time in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in ... */
static void C_ccall f_5179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5179,2,av);}
/* batch-driver.scm:302: ##sys#print */
t2=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5181 in k5167 in k5164 in k5161 in end-time in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in ... */
static void C_ccall f_5183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5183,2,av);}
/* batch-driver.scm:304: scheme#inexact->exact */
t2=*((C_word*)lf[113]+1);{
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

/* k5186 in k5167 in k5164 in k5161 in end-time in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in ... */
static void C_ccall f_5188(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_5188,2,av);}
a=C_alloc(29);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_s_a_i_minus(&a,2,t1,t2);
/* batch-driver.scm:304: scheme#round */
t4=*((C_word*)lf[114]+1);{
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

/* analyze in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in ... */
static void C_fcall f_5191(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim_args((void *)trf_5191,5,t0,t1,t2,t3,t4);}
a=C_alloc(11);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5193,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5216,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5221,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t4))){
/* batch-driver.scm:307: def-no1213 */
t8=t7;
f_5221(t8,t1);}
else{
t8=C_i_car(t4);
t9=C_u_i_cdr(t4);
if(C_truep(C_i_nullp(t9))){
/* batch-driver.scm:307: def-contf1214 */
t10=t6;
f_5216(t10,t1,t8);}
else{
t10=C_i_car(t9);
t11=C_u_i_cdr(t9);
/* batch-driver.scm:307: body1211 */
t12=t5;
f_5193(t12,t1,t8,t10);}}}

/* body1211 in analyze in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in ... */
static void C_fcall f_5193(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5193,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5197,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:308: chicken.compiler.core#analyze-expression */
t5=*((C_word*)lf[119]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5195 in body1211 in analyze in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in ... */
static void C_ccall f_5197(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5197,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5200,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5205,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5211,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:310: upap */
t6=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 9) {
  av2=av;
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
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5198 in k5195 in body1211 in analyze in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in ... */
static void C_ccall f_5200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5200,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5204 in k5195 in body1211 in analyze in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in ... */
static void C_ccall f_5205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5205,4,av);}
t4=*((C_word*)lf[117]+1);
/* batch-driver.scm:311: g1233 */
t5=*((C_word*)lf[117]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* a5210 in k5195 in body1211 in analyze in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in ... */
static void C_ccall f_5211(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5211,5,av);}
t5=*((C_word*)lf[118]+1);
/* batch-driver.scm:312: g1247 */
t6=*((C_word*)lf[118]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
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

/* def-contf1214 in analyze in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in ... */
static void C_fcall f_5216(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_5216,3,t0,t1,t2);}
/* batch-driver.scm:307: body1211 */
t3=((C_word*)t0)[2];
f_5193(t3,t1,t2,C_SCHEME_TRUE);}

/* def-no1213 in analyze in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in ... */
static void C_fcall f_5221(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_5221,2,t0,t1);}
/* batch-driver.scm:307: def-contf1214 */
t2=((C_word*)t0)[2];
f_5216(t2,t1,C_fix(0));}

/* k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in ... */
static void C_fcall f_5257(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(38,0,2)))){
C_save_and_reclaim_args((void *)trf_5257,2,t0,t1);}
a=C_alloc(38);
t2=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_5260,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],tmp=(C_word)a,a+=38,tmp);
t3=*((C_word*)lf[308]+1);
if(C_truep(*((C_word*)lf[308]+1))){
t4=*((C_word*)lf[308]+1);
if(C_truep(*((C_word*)lf[308]+1))){
t5=C_set_block_item(lf[319] /* chicken.compiler.core#standalone-executable */,0,C_SCHEME_FALSE);
t6=t2;
f_5260(t6,t5);}
else{
t5=t2;
f_5260(t5,C_SCHEME_UNDEFINED);}}
else{
if(C_truep(((C_word*)t0)[17])){
t4=C_set_block_item(lf[319] /* chicken.compiler.core#standalone-executable */,0,C_SCHEME_FALSE);
t5=t2;
f_5260(t5,t4);}
else{
t4=t2;
f_5260(t4,C_SCHEME_UNDEFINED);}}}

/* k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in ... */
static void C_fcall f_5260(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(38,0,2)))){
C_save_and_reclaim_args((void *)trf_5260,2,t0,t1);}
a=C_alloc(38);
t2=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_5263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],tmp=(C_word)a,a+=38,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[258],t3))){
t4=C_set_block_item(lf[461] /* ##sys#dload-disabled */,0,C_SCHEME_TRUE);
/* batch-driver.scm:322: chicken.platform#repository-path */
t5=*((C_word*)lf[462]+1);{
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
f_5263(2,av2);}}}

/* k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in ... */
static void C_ccall f_5263(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5263,2,av);}
a=C_alloc(44);
t2=((C_word*)t0)[2];
t3=C_mutate((C_word*)lf[120]+1 /* (set! chicken.compiler.core#enable-specialization ...) */,C_u_i_memq(lf[121],t2));
t4=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_5270,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],tmp=(C_word)a,a+=38,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7839,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7896,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:329: collect-options */
t7=((C_word*)((C_word*)t0)[24])[1];
f_5108(t7,t6,lf[460]);}

/* k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in ... */
static void C_ccall f_5270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(41,c,2)))){
C_save_and_reclaim((void *)f_5270,2,av);}
a=C_alloc(41);
t2=C_mutate((C_word*)lf[101]+1 /* (set! chicken.compiler.support#debugging-chicken ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_5273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],tmp=(C_word)a,a+=38,tmp);
if(C_truep(C_i_memq(lf[353],*((C_word*)lf[101]+1)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7834,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:331: chicken.compiler.support#print-debug-options */
t5=*((C_word*)lf[458]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5273(2,av2);}}}

/* k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in ... */
static void C_ccall f_5273(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5273,2,av);}
a=C_alloc(44);
t2=C_i_memq(lf[122],*((C_word*)lf[101]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|38,a[1]=(C_word)f_5299,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=t6,a[38]=t7,tmp=(C_word)a,a+=39,tmp);
/* batch-driver.scm:338: collect-options */
t9=((C_word*)((C_word*)t0)[24])[1];
f_5108(t9,t8,lf[457]);}

/* k5288 in map-loop1292 in k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in ... */
static void C_ccall f_5290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5290,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5294,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
t4=*((C_word*)lf[455]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[456];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5292 in k5288 in map-loop1292 in k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in ... */
static void C_ccall f_5294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5294,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in ... */
static void C_ccall f_5299(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5299,2,av);}
a=C_alloc(44);
t2=C_i_check_list_2(t1,lf[5]);
t3=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_5305,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7796,a[2]=((C_word*)t0)[37],a[3]=t5,a[4]=((C_word*)t0)[38],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_7796(t7,t3,t1);}

/* k5303 in k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in ... */
static void C_ccall f_5305(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5305,2,av);}
a=C_alloc(37);
t2=C_mutate((C_word*)lf[123]+1 /* (set! chicken.compiler.core#import-libraries ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_5308,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
t4=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[453],t4))){
if(C_truep(C_i_not(((C_word*)t0)[17]))){
t5=C_set_block_item(lf[454] /* chicken.compiler.core#all-import-libraries */,0,C_SCHEME_TRUE);
t6=t3;
f_5308(t6,t5);}
else{
t5=t3;
f_5308(t5,C_SCHEME_UNDEFINED);}}
else{
t5=t3;
f_5308(t5,C_SCHEME_UNDEFINED);}}

/* k5306 in k5303 in k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in ... */
static void C_fcall f_5308(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(37,0,2)))){
C_save_and_reclaim_args((void *)trf_5308,2,t0,t1);}
a=C_alloc(37);
t2=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_5311,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
if(C_truep(*((C_word*)lf[120]+1))){
t3=C_set_block_item(((C_word*)t0)[22],0,C_SCHEME_TRUE);
t4=t2;
f_5311(t4,t3);}
else{
t3=t2;
f_5311(t3,C_SCHEME_UNDEFINED);}}

/* k5309 in k5306 in k5303 in k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in ... */
static void C_fcall f_5311(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(37,0,2)))){
C_save_and_reclaim_args((void *)trf_5311,2,t0,t1);}
a=C_alloc(37);
t2=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_5314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
if(C_truep(C_i_memq(lf[182],*((C_word*)lf[101]+1)))){
/* batch-driver.scm:344: ##sys#start-timer */
t3=*((C_word*)lf[452]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5314(2,av2);}}}

/* k5312 in k5309 in k5306 in k5303 in k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in ... */
static void C_ccall f_5314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,c,2)))){
C_save_and_reclaim((void *)f_5314,2,av);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_i_memq(lf[451],*((C_word*)lf[101]+1)))){
t3=C_set_block_item(((C_word*)t0)[36],0,C_SCHEME_TRUE);
t4=t2;
f_5317(t4,t3);}
else{
t3=t2;
f_5317(t3,C_SCHEME_UNDEFINED);}}

/* k5315 in k5312 in k5309 in k5306 in k5303 in k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in ... */
static void C_fcall f_5317(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_5317,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[450],t3))){
t4=C_set_block_item(lf[78] /* chicken.compiler.core#explicit-use-flag */,0,C_SCHEME_TRUE);
t5=C_set_block_item(((C_word*)t0)[25],0,C_SCHEME_END_OF_LIST);
t6=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_END_OF_LIST);
t7=t2;
f_5320(t7,t6);}
else{
t4=t2;
f_5320(t4,C_SCHEME_UNDEFINED);}}

/* k5318 in k5315 in k5312 in k5309 in k5306 in k5303 in k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in ... */
static void C_fcall f_5320(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_5320,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[448],t3))){
t4=C_set_block_item(lf[449] /* chicken.compiler.core#emit-closure-info */,0,C_SCHEME_FALSE);
t5=t2;
f_5323(t5,t4);}
else{
t4=t2;
f_5323(t4,C_SCHEME_UNDEFINED);}}

/* k5321 in k5318 in k5315 in k5312 in k5309 in k5306 in k5303 in k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in ... */
static void C_fcall f_5323(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_5323,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5326,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[446],t3))){
t4=C_set_block_item(lf[447] /* chicken.compiler.core#compiler-syntax-enabled */,0,C_SCHEME_FALSE);
t5=t2;
f_5326(t5,t4);}
else{
t4=t2;
f_5326(t4,C_SCHEME_UNDEFINED);}}

/* k5324 in k5321 in k5318 in k5315 in k5312 in k5309 in k5306 in k5303 in k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in ... */
static void C_fcall f_5326(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_5326,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[445],t3))){
t4=C_set_block_item(lf[427] /* chicken.compiler.core#local-definitions */,0,C_SCHEME_TRUE);
t5=t2;
f_5329(t5,t4);}
else{
t4=t2;
f_5329(t4,C_SCHEME_UNDEFINED);}}

/* k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in k5309 in k5306 in k5303 in k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in ... */
static void C_fcall f_5329(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_5329,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5332,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[444],t3))){
t4=C_set_block_item(lf[264] /* chicken.compiler.core#enable-inline-files */,0,C_SCHEME_TRUE);
t5=C_set_block_item(lf[164] /* chicken.compiler.core#inline-locally */,0,C_SCHEME_TRUE);
t6=t2;
f_5332(t6,t5);}
else{
t4=t2;
f_5332(t4,C_SCHEME_UNDEFINED);}}

/* k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in k5309 in k5306 in k5303 in k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in ... */
static void C_fcall f_5332(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_5332,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5335,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=C_set_block_item(lf[443] /* ##sys#notices-enabled */,0,C_SCHEME_TRUE);
t4=t2;
f_5335(t4,t3);}
else{
t3=t2;
f_5335(t3,C_SCHEME_UNDEFINED);}}

/* k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in k5309 in k5306 in k5303 in k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in ... */
static void C_fcall f_5335(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_5335,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5338,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[442],t3))){
t4=C_set_block_item(lf[246] /* chicken.compiler.core#strict-variable-types */,0,C_SCHEME_TRUE);
t5=C_set_block_item(lf[120] /* chicken.compiler.core#enable-specialization */,0,C_SCHEME_TRUE);
t6=t2;
f_5338(t6,t5);}
else{
t4=t2;
f_5338(t4,C_SCHEME_UNDEFINED);}}

/* k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in k5309 in k5306 in k5303 in k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in ... */
static void C_fcall f_5338(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(43,0,4)))){
C_save_and_reclaim_args((void *)trf_5338,2,t0,t1);}
a=C_alloc(43);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[440],t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7749,a[2]=((C_word*)t0)[22],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9240,a[2]=t5,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[179]+1);
av2[3]=lf[441];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t4=t2;
f_5341(t4,C_SCHEME_UNDEFINED);}}

/* k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in k5309 in k5306 in k5303 in k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in ... */
static void C_fcall f_5341(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_5341,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5344,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[439],t3))){
t4=C_set_block_item(lf[169] /* chicken.compiler.core#optimize-leaf-routines */,0,C_SCHEME_TRUE);
t5=t2;
f_5344(t5,t4);}
else{
t4=t2;
f_5344(t4,C_SCHEME_UNDEFINED);}}

/* k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in k5309 in k5306 in k5303 in k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in ... */
static void C_fcall f_5344(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_5344,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5347,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[438],t3))){
t4=C_set_block_item(lf[239] /* chicken.compiler.support#unsafe */,0,C_SCHEME_TRUE);
t5=t2;
f_5347(t5,t4);}
else{
t4=t2;
f_5347(t4,C_SCHEME_UNDEFINED);}}

/* k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in k5309 in k5306 in k5303 in k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in ... */
static void C_fcall f_5347(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_5347,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5350,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[436],t3))){
t4=C_set_block_item(lf[437] /* ##sys#setup-mode */,0,C_SCHEME_TRUE);
t5=t2;
f_5350(t5,t4);}
else{
t4=t2;
f_5350(t4,C_SCHEME_UNDEFINED);}}

/* k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in k5309 in k5306 in k5303 in k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in ... */
static void C_fcall f_5350(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_5350,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5353,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[435],t3))){
t4=C_set_block_item(lf[205] /* chicken.compiler.core#insert-timer-checks */,0,C_SCHEME_FALSE);
t5=t2;
f_5353(t5,t4);}
else{
t4=t2;
f_5353(t4,C_SCHEME_UNDEFINED);}}

/* k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in k5309 in k5306 in k5303 in k5297 in k5271 in k5268 in k5261 in k5258 in ... */
static void C_fcall f_5353(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_5353,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5356,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[432],t3))){
t4=C_mutate((C_word*)lf[433]+1 /* (set! chicken.compiler.support#number-type ...) */,lf[434]);
t5=t2;
f_5356(t5,t4);}
else{
t4=t2;
f_5356(t4,C_SCHEME_UNDEFINED);}}

/* k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in k5309 in k5306 in k5303 in k5297 in k5271 in k5268 in k5261 in ... */
static void C_fcall f_5356(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_5356,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5359,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[431],t3))){
t4=C_set_block_item(lf[163] /* chicken.compiler.core#block-compilation */,0,C_SCHEME_TRUE);
t5=t2;
f_5359(t5,t4);}
else{
t4=t2;
f_5359(t4,C_SCHEME_UNDEFINED);}}

/* k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in k5309 in k5306 in k5303 in k5297 in k5271 in k5268 in ... */
static void C_fcall f_5359(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_5359,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5362,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[429],t3))){
t4=C_set_block_item(lf[430] /* chicken.compiler.core#external-protos-first */,0,C_SCHEME_TRUE);
t5=t2;
f_5362(t5,t4);}
else{
t4=t2;
f_5362(t4,C_SCHEME_UNDEFINED);}}

/* k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in k5309 in k5306 in k5303 in k5297 in k5271 in ... */
static void C_fcall f_5362(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_5362,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5365,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[428],t3))){
t4=C_set_block_item(lf[164] /* chicken.compiler.core#inline-locally */,0,C_SCHEME_TRUE);
t5=t2;
f_5365(t5,t4);}
else{
t4=t2;
f_5365(t4,C_SCHEME_UNDEFINED);}}

/* k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in k5309 in k5306 in k5303 in k5297 in ... */
static void C_fcall f_5365(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(39,0,2)))){
C_save_and_reclaim_args((void *)trf_5365,2,t0,t1);}
a=C_alloc(39);
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[124],t2);
t4=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5370,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7720,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:380: option-arg */
f_4782(t5,t3);}
else{
t5=t4;
f_5370(t5,C_SCHEME_FALSE);}}

/* k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in k5309 in k5306 in k5303 in ... */
static void C_fcall f_5370(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_5370,2,t0,t1);}
a=C_alloc(40);
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[125],t2);
t4=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5375,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(t3)){
t5=C_set_block_item(lf[164] /* chicken.compiler.core#inline-locally */,0,C_SCHEME_TRUE);
t6=C_set_block_item(lf[427] /* chicken.compiler.core#local-definitions */,0,C_SCHEME_TRUE);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7716,a[2]=((C_word*)t0)[19],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:384: option-arg */
f_4782(t7,t3);}
else{
t5=t4;
f_5375(t5,C_SCHEME_FALSE);}}

/* k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in k5309 in k5306 in ... */
static void C_fcall f_5375(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(40,0,2)))){
C_save_and_reclaim_args((void *)trf_5375,2,t0,t1);}
a=C_alloc(40);
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[126],t2);
t4=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5380,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7710,a[2]=((C_word*)t0)[21],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:386: option-arg */
f_4782(t5,t3);}
else{
t5=t4;
f_5380(t5,C_SCHEME_FALSE);}}

/* k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in k5309 in ... */
static void C_fcall f_5380(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(39,0,2)))){
C_save_and_reclaim_args((void *)trf_5380,2,t0,t1);}
a=C_alloc(39);
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[127],t2);
t4=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5385,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7697,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:389: option-arg */
f_4782(t5,t3);}
else{
t5=t4;
f_5385(t5,C_SCHEME_FALSE);}}

/* k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in ... */
static void C_fcall f_5385(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(42,0,4)))){
C_save_and_reclaim_args((void *)trf_5385,2,t0,t1);}
a=C_alloc(42);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5388,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[5];
if(C_truep(C_u_i_memq(lf[424],t3))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7687,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9234,a[2]=t5,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[179]+1);
av2[3]=lf[425];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t4=t2;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5388(2,av2);}}}

/* k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in ... */
static void C_ccall f_5388(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(38,c,2)))){
C_save_and_reclaim((void *)f_5388,2,av);}
a=C_alloc(38);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5391,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(((C_word*)t0)[35])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7654,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:398: option-arg */
f_4782(t3,((C_word*)t0)[35]);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5391(2,av2);}}}

/* k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in ... */
static void C_ccall f_5391(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5391,2,av);}
a=C_alloc(41);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5394,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[5];
if(C_truep(C_u_i_memq(lf[416],t3))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7648,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9228,a[2]=t5,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[179]+1);
av2[3]=lf[417];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5394(2,av2);}}}

/* k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in ... */
static void C_ccall f_5394(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5394,2,av);}
a=C_alloc(41);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5397,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[5];
if(C_truep(C_u_i_memq(lf[414],t3))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7640,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9222,a[2]=t5,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[179]+1);
av2[3]=lf[415];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5397(2,av2);}}}

/* k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in ... */
static void C_ccall f_5397(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5397,2,av);}
a=C_alloc(41);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5400,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[5];
if(C_truep(C_u_i_memq(lf[407],t3))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7623,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9216,a[2]=t5,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[179]+1);
av2[3]=lf[413];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5400(2,av2);}}}

/* k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in ... */
static void C_ccall f_5400(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5400,2,av);}
a=C_alloc(45);
t2=C_mutate((C_word*)lf[128]+1 /* (set! chicken.compiler.core#verbose-mode ...) */,((C_word*)t0)[2]);
t3=C_set_block_item(lf[129] /* ##sys#read-error-with-line-number */,0,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5406,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],tmp=(C_word)a,a+=33,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=*((C_word*)lf[90]+1);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7578,a[2]=t4,a[3]=((C_word*)t0)[34],a[4]=t7,a[5]=t9,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:419: collect-options */
t11=((C_word*)((C_word*)t0)[23])[1];
f_5108(t11,t10,lf[406]);}

/* k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in ... */
static void C_ccall f_5406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,2)))){
C_save_and_reclaim((void *)f_5406,2,av);}
a=C_alloc(33);
t2=C_mutate((C_word*)lf[130]+1 /* (set! ##sys#include-pathnames ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5409,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
if(C_truep(((C_word*)t0)[13])){
if(C_truep(((C_word*)t0)[6])){
if(C_truep(C_i_string_equal_p(((C_word*)t0)[13],((C_word*)t0)[6]))){
/* batch-driver.scm:423: chicken.compiler.support#quit-compiling */
t4=*((C_word*)lf[75]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[405];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5409(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5409(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5409(2,av2);}}}

/* k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in ... */
static void C_ccall f_5409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,2)))){
C_save_and_reclaim((void *)f_5409,2,av);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5412,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=((C_word*)t0)[4];
if(C_truep(C_u_i_memq(lf[403],t3))){
t4=C_set_block_item(lf[404] /* chicken.compiler.core#undefine-shadowed-macros */,0,C_SCHEME_FALSE);
t5=t2;
f_5412(t5,t4);}
else{
t4=t2;
f_5412(t4,C_SCHEME_UNDEFINED);}}

/* k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in ... */
static void C_fcall f_5412(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,2)))){
C_save_and_reclaim_args((void *)trf_5412,2,t0,t1);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5415,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=((C_word*)t0)[4];
if(C_truep(C_u_i_memq(lf[401],t3))){
t4=C_set_block_item(lf[402] /* chicken.compiler.core#no-argc-checks */,0,C_SCHEME_TRUE);
t5=t2;
f_5415(t5,t4);}
else{
t4=t2;
f_5415(t4,C_SCHEME_UNDEFINED);}}

/* k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in ... */
static void C_fcall f_5415(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,2)))){
C_save_and_reclaim_args((void *)trf_5415,2,t0,t1);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=((C_word*)t0)[4];
if(C_truep(C_u_i_memq(lf[399],t3))){
t4=C_set_block_item(lf[400] /* chicken.compiler.core#no-bound-checks */,0,C_SCHEME_TRUE);
t5=t2;
f_5418(t5,t4);}
else{
t4=t2;
f_5418(t4,C_SCHEME_UNDEFINED);}}

/* k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in ... */
static void C_fcall f_5418(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,2)))){
C_save_and_reclaim_args((void *)trf_5418,2,t0,t1);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=((C_word*)t0)[4];
if(C_truep(C_u_i_memq(lf[397],t3))){
t4=C_set_block_item(lf[398] /* chicken.compiler.core#no-procedure-checks */,0,C_SCHEME_TRUE);
t5=t2;
f_5421(t5,t4);}
else{
t4=t2;
f_5421(t4,C_SCHEME_UNDEFINED);}}

/* k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in ... */
static void C_fcall f_5421(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,2)))){
C_save_and_reclaim_args((void *)trf_5421,2,t0,t1);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5424,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=((C_word*)t0)[4];
if(C_truep(C_u_i_memq(lf[395],t3))){
t4=C_set_block_item(lf[396] /* chicken.compiler.core#no-global-procedure-checks */,0,C_SCHEME_TRUE);
t5=t2;
f_5424(t5,t4);}
else{
t4=t2;
f_5424(t4,C_SCHEME_UNDEFINED);}}

/* k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in ... */
static void C_fcall f_5424(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_5424,2,t0,t1);}
a=C_alloc(41);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=((C_word*)t0)[4];
if(C_truep(C_u_i_memq(lf[392],t3))){
t4=*((C_word*)lf[72]+1);
t5=C_i_check_list_2(*((C_word*)lf[72]+1),lf[10]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7484,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7523,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=((C_word*)t8)[1];
f_7523(t10,t6,*((C_word*)lf[72]+1));}
else{
t4=t2;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5427(2,av2);}}}

/* k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in ... */
static void C_ccall f_5427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,2)))){
C_save_and_reclaim((void *)f_5427,2,av);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5430,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
if(C_truep(C_i_memq(lf[103],*((C_word*)lf[101]+1)))){
/* batch-driver.scm:445: chicken.load#load-verbose */
t3=*((C_word*)lf[391]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5430(2,av2);}}}

/* k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in ... */
static void C_ccall f_5430(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5430,2,av);}
a=C_alloc(40);
t2=*((C_word*)lf[131]+1);
t3=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_5433,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=t2,tmp=(C_word)a,a+=34,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7454,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7462,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:450: collect-options */
t6=((C_word*)((C_word*)t0)[22])[1];
f_5108(t6,t5,lf[390]);}

/* k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in ... */
static void C_ccall f_5433(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,c,3)))){
C_save_and_reclaim((void *)f_5433,2,av);}
a=C_alloc(39);
t2=C_i_check_list_2(t1,lf[10]);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5439,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7431,a[2]=t5,a[3]=((C_word*)t0)[33],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_7431(t7,t3,t1);}

/* k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in ... */
static void C_ccall f_5439(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5439,2,av);}
a=C_alloc(40);
t2=*((C_word*)lf[132]+1);
t3=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_5442,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=t2,tmp=(C_word)a,a+=34,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7421,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7429,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:453: collect-options */
t6=((C_word*)((C_word*)t0)[22])[1];
f_5108(t6,t5,lf[388]);}

/* k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in ... */
static void C_ccall f_5442(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,c,3)))){
C_save_and_reclaim((void *)f_5442,2,av);}
a=C_alloc(39);
t2=C_i_check_list_2(t1,lf[10]);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5448,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7398,a[2]=t5,a[3]=((C_word*)t0)[33],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_7398(t7,t3,t1);}

/* k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in ... */
static void C_ccall f_5448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,c,2)))){
C_save_and_reclaim((void *)f_5448,2,av);}
a=C_alloc(36);
t2=C_a_i_cons(&a,2,lf[133],*((C_word*)lf[134]+1));
t3=C_mutate((C_word*)lf[134]+1 /* (set! ##sys#features ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5455,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
/* batch-driver.scm:457: collect-options */
t5=((C_word*)((C_word*)t0)[22])[1];
f_5108(t5,t4,lf[386]);}

/* k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in ... */
static void C_ccall f_5455(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5455,2,av);}
a=C_alloc(37);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_5458,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],a[27]=((C_word*)t0)[26],a[28]=((C_word*)t0)[27],a[29]=((C_word*)t0)[28],a[30]=((C_word*)t0)[29],a[31]=((C_word*)t0)[30],a[32]=((C_word*)t0)[31],a[33]=((C_word*)t0)[32],tmp=(C_word)a,a+=34,tmp);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9200,a[2]=t4,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[179]+1);
av2[3]=lf[385];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}

/* k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in ... */
static void C_ccall f_5458(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5458,2,av);}
a=C_alloc(38);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[10]);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5481,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],tmp=(C_word)a,a+=33,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7375,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_7375(t7,t3,((C_word*)t0)[2]);}

/* k5461 in for-each-loop1451 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in ... */
static void C_ccall f_5463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5463,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5466,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_not(t2))){
/* batch-driver.scm:462: chicken.compiler.support#quit-compiling */
t4=*((C_word*)lf[75]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[384];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
/* batch-driver.scm:463: scheme#load */
t4=*((C_word*)lf[383]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k5464 in k5461 in for-each-loop1451 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in ... */
static void C_ccall f_5466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5466,2,av);}
/* batch-driver.scm:463: scheme#load */
t2=*((C_word*)lf[383]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in ... */
static void C_ccall f_5481(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,c,3)))){
C_save_and_reclaim((void *)f_5481,2,av);}
a=C_alloc(39);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5485,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=lf[133];
t4=*((C_word*)lf[134]+1);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3206,a[2]=t3,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_3206(t8,t2,*((C_word*)lf[134]+1));}

/* k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in ... */
static void C_ccall f_5485(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5485,2,av);}
a=C_alloc(36);
t2=C_mutate((C_word*)lf[134]+1 /* (set! ##sys#features ...) */,t1);
t3=C_a_i_cons(&a,2,lf[135],*((C_word*)lf[134]+1));
t4=C_mutate((C_word*)lf[134]+1 /* (set! ##sys#features ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
/* batch-driver.scm:467: chicken.compiler.user-pass#user-post-analysis-pass */
t6=*((C_word*)lf[382]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in ... */
static void C_ccall f_5493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(38,c,3)))){
C_save_and_reclaim((void *)f_5493,2,av);}
a=C_alloc(38);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_5496,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],tmp=(C_word)a,a+=32,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7325,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7373,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:472: collect-options */
t6=((C_word*)((C_word*)t0)[22])[1];
f_5108(t6,t5,lf[378]);}

/* k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in ... */
static void C_ccall f_5496(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(44,c,2)))){
C_save_and_reclaim((void *)f_5496,2,av);}
a=C_alloc(44);
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_5499,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
if(C_truep(C_i_nullp(t1))){
t3=t2;
f_5499(t3,C_SCHEME_UNDEFINED);}
else{
t3=C_a_i_cons(&a,2,lf[378],t1);
t4=C_a_i_list(&a,2,lf[379],t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)((C_word*)t0)[26])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[26])+1,t5);
t7=t2;
f_5499(t7,t6);}}

/* k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in ... */
static void C_fcall f_5499(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(43,0,2)))){
C_save_and_reclaim_args((void *)trf_5499,2,t0,t1);}
a=C_alloc(43);
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_5503,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7268,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:482: collect-options */
t8=((C_word*)((C_word*)t0)[21])[1];
f_5108(t8,t7,lf[377]);}

/* k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in ... */
static void C_ccall f_5503(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5503,2,av);}
a=C_alloc(32);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_5506,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[2],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t4=((C_word*)t0)[3];
if(C_truep(C_u_i_memq(lf[374],t4))){
t5=C_set_block_item(lf[375] /* ##sys#enable-runtime-macros */,0,C_SCHEME_TRUE);
t6=t3;
f_5506(t6,t5);}
else{
t5=t3;
f_5506(t5,C_SCHEME_UNDEFINED);}}

/* k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in ... */
static void C_fcall f_5506(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,0,2)))){
C_save_and_reclaim_args((void *)trf_5506,2,t0,t1);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|30,a[1]=(C_word)f_5510,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],tmp=(C_word)a,a+=31,tmp);
if(C_truep(((C_word*)t0)[31])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7249,a[2]=((C_word*)t0)[29],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:488: option-arg */
f_4782(t3,((C_word*)t0)[31]);}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_5510(2,av2);}}}

/* k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in ... */
static void C_ccall f_5510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,2)))){
C_save_and_reclaim((void *)f_5510,2,av);}
a=C_alloc(32);
t2=C_mutate((C_word*)lf[136]+1 /* (set! chicken.compiler.core#target-heap-size ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_5514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],tmp=(C_word)a,a+=28,tmp);
if(C_truep(((C_word*)t0)[28])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7242,a[2]=((C_word*)t0)[29],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:491: option-arg */
f_4782(t4,((C_word*)t0)[28]);}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_5514(2,av2);}}}

/* k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in ... */
static void C_ccall f_5514(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5514,2,av);}
a=C_alloc(28);
t2=C_mutate((C_word*)lf[137]+1 /* (set! chicken.compiler.core#target-stack-size ...) */,t1);
t3=((C_word*)t0)[2];
t4=C_u_i_memq(lf[138],t3);
t5=C_i_not(t4);
t6=C_set_block_item(lf[139] /* chicken.compiler.core#emit-trace-info */,0,t5);
t7=((C_word*)t0)[2];
t8=C_mutate((C_word*)lf[140]+1 /* (set! chicken.compiler.core#disable-stack-overflow-checking ...) */,C_u_i_memq(lf[141],t7));
t9=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_5525,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],tmp=(C_word)a,a+=28,tmp);
/* batch-driver.scm:494: chicken.platform#feature? */
t10=*((C_word*)lf[372]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[373];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in ... */
static void C_ccall f_5525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,2)))){
C_save_and_reclaim((void *)f_5525,2,av);}
a=C_alloc(28);
t2=C_set_block_item(lf[142] /* chicken.compiler.core#bootstrap-mode */,0,t1);
t3=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_5528,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],tmp=(C_word)a,a+=28,tmp);
if(C_truep(C_i_memq(lf[370],*((C_word*)lf[101]+1)))){
/* batch-driver.scm:495: chicken.gc#set-gc-report! */
t4=*((C_word*)lf[371]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5528(2,av2);}}}

/* k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in ... */
static void C_ccall f_5528(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5528,2,av);}
a=C_alloc(28);
t2=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_5531,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],tmp=(C_word)a,a+=28,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[369],t3))){
t4=C_set_block_item(((C_word*)t0)[19],0,C_SCHEME_FALSE);
t5=t2;
f_5531(t5,t4);}
else{
t4=C_mutate((C_word*)lf[9]+1 /* (set! chicken.compiler.core#standard-bindings ...) */,*((C_word*)lf[72]+1));
t5=C_mutate((C_word*)lf[11]+1 /* (set! chicken.compiler.core#extended-bindings ...) */,*((C_word*)lf[73]+1));
t6=t2;
f_5531(t6,t5);}}

/* k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in ... */
static void C_fcall f_5531(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(34,0,4)))){
C_save_and_reclaim_args((void *)trf_5531,2,t0,t1);}
a=C_alloc(34);
t2=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_5534,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],tmp=(C_word)a,a+=28,tmp);
if(C_truep(*((C_word*)lf[139]+1))){
t3=t2;
t4=C_a_i_list(&a,1,lf[366]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9180,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[179]+1);
av2[3]=lf[367];
av2[4]=t4;
C_apply(5,av2);}}
else{
t3=t2;
t4=C_a_i_list(&a,1,lf[368]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9186,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[179]+1);
av2[3]=lf[367];
av2[4]=t4;
C_apply(5,av2);}}}

/* k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in ... */
static void C_ccall f_5534(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5534,2,av);}
a=C_alloc(32);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5537,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(((C_word*)t0)[27])){
t3=C_i_car(((C_word*)t0)[27]);
t4=C_eqp(lf[357],t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7187,a[2]=((C_word*)t0)[25],a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
if(C_truep(C_i_not(((C_word*)t0)[23]))){
/* batch-driver.scm:508: chicken.compiler.support#quit-compiling */
t7=*((C_word*)lf[75]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[365];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_7187(2,av2);}}}
else{
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_7187(2,av2);}}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5537(2,av2);}}}

/* k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in ... */
static void C_ccall f_5537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,2)))){
C_save_and_reclaim((void *)f_5537,2,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5540,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:522: chicken.compiler.support#load-identifier-database */
t3=*((C_word*)lf[355]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[356];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in ... */
static void C_ccall f_5540(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5540,2,av);}
a=C_alloc(27);
t2=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[143],t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5548,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:525: chicken.compiler.support#print-version */
t4=*((C_word*)lf[144]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];
t4=C_u_i_memq(lf[145],t3);
t5=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5559,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(t4)){
t6=t5;
f_5559(t6,t4);}
else{
t6=((C_word*)t0)[2];
t7=C_u_i_memq(lf[352],t6);
if(C_truep(t7)){
t8=t5;
f_5559(t8,t7);}
else{
t8=((C_word*)t0)[2];
t9=C_u_i_memq(lf[353],t8);
if(C_truep(t9)){
t10=t5;
f_5559(t10,t9);}
else{
t10=((C_word*)t0)[2];
t11=t5;
f_5559(t11,C_u_i_memq(lf[354],t10));}}}}}

/* k5546 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in ... */
static void C_ccall f_5548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5548,2,av);}
/* batch-driver.scm:526: scheme#newline */
t2=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in ... */
static void C_fcall f_5559(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,4)))){
C_save_and_reclaim_args((void *)trf_5559,2,t0,t1);}
a=C_alloc(33);
if(C_truep(t1)){
/* batch-driver.scm:528: chicken.compiler.support#print-usage */
t2=*((C_word*)lf[146]+1);{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
if(C_truep(C_u_i_memq(lf[147],t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5570,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5577,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:530: chicken.platform#chicken-version */
t5=*((C_word*)lf[149]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_i_not(((C_word*)t0)[4]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5586,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:533: chicken.compiler.support#print-version */
t4=*((C_word*)lf[144]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5598,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[2],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[3],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
t4=t3;
t5=C_a_i_list(&a,1,((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9162,a[2]=t4,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[179]+1);
av2[3]=lf[351];
av2[4]=t5;
C_apply(5,av2);}}}}}

/* k5568 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in ... */
static void C_ccall f_5570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5570,2,av);}
/* batch-driver.scm:531: scheme#newline */
t2=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5575 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in ... */
static void C_ccall f_5577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5577,2,av);}
/* batch-driver.scm:530: scheme#display */
t2=*((C_word*)lf[148]+1);{
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

/* k5584 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in ... */
static void C_ccall f_5586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5586,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5589,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:534: scheme#display */
t3=*((C_word*)lf[148]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[152];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5587 in k5584 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in ... */
static void C_ccall f_5589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5589,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5592,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:535: scheme#display */
t3=*((C_word*)lf[148]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[151];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5590 in k5587 in k5584 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in ... */
static void C_ccall f_5592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5592,2,av);}
/* batch-driver.scm:536: scheme#display */
t2=*((C_word*)lf[148]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[150];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in ... */
static void C_ccall f_5598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_5598,2,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5601,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:541: chicken.compiler.support#debugging */
t3=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[346];
av2[3]=lf[350];
av2[4]=((C_word*)t0)[20];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in ... */
static void C_ccall f_5601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_5601,2,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5604,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:542: chicken.compiler.support#debugging */
t3=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[346];
av2[3]=lf[349];
av2[4]=*((C_word*)lf[101]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in ... */
static void C_ccall f_5604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_5604,2,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5607,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:543: chicken.compiler.support#debugging */
t3=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[346];
av2[3]=lf[348];
av2[4]=*((C_word*)lf[136]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in ... */
static void C_ccall f_5607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_5607,2,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5610,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:544: chicken.compiler.support#debugging */
t3=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[346];
av2[3]=lf[347];
av2[4]=*((C_word*)lf[137]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in ... */
static void C_ccall f_5610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,2)))){
C_save_and_reclaim((void *)f_5610,2,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5614,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:250: chicken.time#current-milliseconds */
t3=*((C_word*)lf[112]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in ... */
static void C_ccall f_5614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_5614,2,av);}
a=C_alloc(27);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5618,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[2],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:548: scheme#make-vector */
t4=*((C_word*)lf[344]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[345]+1);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in ... */
static void C_ccall f_5618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,2)))){
C_save_and_reclaim((void *)f_5618,2,av);}
a=C_alloc(27);
t2=C_mutate((C_word*)lf[153]+1 /* (set! ##sys#line-number-database ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5621,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:549: collect-options */
t4=((C_word*)((C_word*)t0)[19])[1];
f_5108(t4,t3,lf[343]);}

/* k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in ... */
static void C_ccall f_5621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,2)))){
C_save_and_reclaim((void *)f_5621,2,av);}
a=C_alloc(28);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_5624,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=t2,tmp=(C_word)a,a+=28,tmp);
/* batch-driver.scm:550: collect-options */
t4=((C_word*)((C_word*)t0)[19])[1];
f_5108(t4,t3,lf[342]);}

/* k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in ... */
static void C_ccall f_5624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(34,c,2)))){
C_save_and_reclaim((void *)f_5624,2,av);}
a=C_alloc(34);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|28,a[1]=(C_word)f_5627,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=t2,tmp=(C_word)a,a+=29,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7161,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[19],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:552: collect-options */
t5=((C_word*)((C_word*)t0)[19])[1];
f_5108(t5,t4,lf[341]);}

/* k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in ... */
static void C_ccall f_5627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,2)))){
C_save_and_reclaim((void *)f_5627,2,av);}
a=C_alloc(30);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|29,a[1]=(C_word)f_5630,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=t2,a[29]=((C_word*)t0)[28],tmp=(C_word)a,a+=30,tmp);
/* batch-driver.scm:556: chicken.compiler.user-pass#user-read-pass */
t4=*((C_word*)lf[339]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in ... */
static void C_ccall f_5630(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5630,2,av);}
a=C_alloc(38);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5633,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6993,a[2]=((C_word*)t0)[26],a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[27],a[6]=((C_word*)t0)[28],a[7]=((C_word*)t0)[29],tmp=(C_word)a,a+=8,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9148,a[2]=t5,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[179]+1);
av2[3]=lf[333];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7002,a[2]=((C_word*)t0)[26],a[3]=((C_word*)t0)[27],a[4]=((C_word*)t0)[29],a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_7002(t7,t3,((C_word*)t0)[28]);}}

/* k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in ... */
static void C_ccall f_5633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,2)))){
C_save_and_reclaim((void *)f_5633,2,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5636,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:579: chicken.compiler.user-pass#user-preprocessor-pass */
t3=*((C_word*)lf[332]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in ... */
static void C_ccall f_5636(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5636,2,av);}
a=C_alloc(35);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5639,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6946,a[2]=t2,a[3]=((C_word*)t0)[26],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9142,a[2]=t5,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[179]+1);
av2[3]=lf[331];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t4=t3;
f_5639(t4,C_SCHEME_UNDEFINED);}}

/* k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in ... */
static void C_fcall f_5639(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,0,4)))){
C_save_and_reclaim_args((void *)trf_5639,2,t0,t1);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5642,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:584: print-expr */
t3=((C_word*)((C_word*)t0)[21])[1];
f_4979(t3,t2,lf[329],lf[330],((C_word*)((C_word*)t0)[26])[1]);}

/* k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in ... */
static void C_ccall f_5642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,2)))){
C_save_and_reclaim((void *)f_5642,2,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5645,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:585: begin-time */
t3=((C_word*)((C_word*)t0)[5])[1];
f_5143(t3,t2);}

/* k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in ... */
static void C_ccall f_5645(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(36,c,3)))){
C_save_and_reclaim((void *)f_5645,2,av);}
a=C_alloc(36);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5649,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_5672,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=t4,a[25]=t6,a[26]=t5,a[27]=((C_word*)t0)[24],tmp=(C_word)a,a+=28,tmp);
/* batch-driver.scm:590: scheme#append */
t8=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)((C_word*)t0)[25])[1];
av2[3]=((C_word*)((C_word*)t0)[26])[1];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* g1676 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in ... */
static void C_fcall f_5649(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_5649,3,t0,t1,t2);}
a=C_alloc(15);
t3=((C_word*)t0)[2];
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5655,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5660,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5666,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:588: ##sys#dynamic-wind */
t10=*((C_word*)lf[156]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t1;
av2[2]=t7;
av2[3]=t8;
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* a5654 in g1676 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in ... */
static void C_ccall f_5655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5655,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[154]+1));
t3=C_mutate((C_word*)lf[154]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a5659 in g1676 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in ... */
static void C_ccall f_5660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5660,2,av);}
/* batch-driver.scm:589: chicken.compiler.core#canonicalize-expression */
t2=*((C_word*)lf[155]+1);{
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

/* a5665 in g1676 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in ... */
static void C_ccall f_5666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5666,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[154]+1));
t3=C_mutate((C_word*)lf[154]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in ... */
static void C_ccall f_5672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,2)))){
C_save_and_reclaim((void *)f_5672,2,av);}
a=C_alloc(31);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5675,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(C_i_not(((C_word*)t0)[27]))){
t4=t3;
f_5675(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6939,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:594: scheme#string->symbol */
t5=*((C_word*)lf[328]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[27];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in ... */
static void C_fcall f_5675(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(32,0,3)))){
C_save_and_reclaim_args((void *)trf_5675,2,t0,t1);}
a=C_alloc(32);
t2=C_i_check_list_2(t1,lf[5]);
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5681,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6889,a[2]=((C_word*)t0)[24],a[3]=t5,a[4]=((C_word*)t0)[25],a[5]=((C_word*)t0)[26],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6889(t7,t3,t1);}

/* k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in ... */
static void C_ccall f_5681(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(40,c,3)))){
C_save_and_reclaim((void *)f_5681,2,av);}
a=C_alloc(40);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_5684,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=*((C_word*)lf[318]+1);
t9=C_i_check_list_2(*((C_word*)lf[318]+1),lf[5]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6772,a[2]=((C_word*)t0)[22],a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[23],tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6855,a[2]=t6,a[3]=t12,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_6855(t14,t10,*((C_word*)lf[318]+1));}

/* k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in ... */
static void C_ccall f_5684(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(43,c,3)))){
C_save_and_reclaim((void *)f_5684,2,av);}
a=C_alloc(43);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5687,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=t3,a[22]=((C_word*)t0)[21],tmp=(C_word)a,a+=23,tmp);
if(C_truep(C_i_nullp(*((C_word*)lf[123]+1)))){
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_5687(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6694,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=*((C_word*)lf[123]+1);
t11=C_i_check_list_2(*((C_word*)lf[123]+1),lf[5]);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6713,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6715,a[2]=t8,a[3]=t14,a[4]=t9,tmp=(C_word)a,a+=5,tmp));
t16=((C_word*)t14)[1];
f_6715(t16,t12,*((C_word*)lf[123]+1));}}

/* k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in ... */
static void C_ccall f_5687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_5687,2,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5690,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
/* batch-driver.scm:617: chicken.internal#hash-table-ref */
t3=*((C_word*)lf[315]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=*((C_word*)lf[271]+1);
av2[3]=lf[84];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in ... */
static void C_ccall f_5690(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_5690,2,av);}
a=C_alloc(33);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5693,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6518,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6680,tmp=(C_word)a,a+=2,tmp);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3419,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* mini-srfi-1.scm:141: filter */
f_3320(t4,t7,t2);}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_5693(2,av2);}}}

/* k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in ... */
static void C_ccall f_5693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_5693,2,av);}
a=C_alloc(25);
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5696,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
if(C_truep(C_i_pairp(*((C_word*)lf[290]+1)))){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6456,tmp=(C_word)a,a+=2,tmp);
/* batch-driver.scm:630: chicken.compiler.support#with-debugging-output */
t4=*((C_word*)lf[295]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[296];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5696(2,av2);}}}

/* k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in ... */
static void C_ccall f_5696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_5696,2,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5699,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6445,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:637: chicken.compiler.support#debugging */
t4=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[288];
av2[3]=lf[289];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in ... */
static void C_ccall f_5699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_5699,2,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5702,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6439,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:639: chicken.compiler.support#debugging */
t4=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[285];
av2[3]=lf[286];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in ... */
static void C_ccall f_5702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_5702,2,av);}
a=C_alloc(23);
t2=C_mutate((C_word*)lf[153]+1 /* (set! ##sys#line-number-database ...) */,*((C_word*)lf[157]+1));
t3=C_set_block_item(lf[157] /* chicken.compiler.core#line-number-database-2 */,0,C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5707,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
/* batch-driver.scm:645: end-time */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5153(t5,t4,lf[283]);}

/* k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in ... */
static void C_ccall f_5707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_5707,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_5710,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
/* batch-driver.scm:646: print-expr */
t3=((C_word*)((C_word*)t0)[22])[1];
f_4979(t3,t2,lf[281],lf[282],((C_word*)((C_word*)t0)[21])[1]);}

/* k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in ... */
static void C_ccall f_5710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_5710,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_5713,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
t3=((C_word*)t0)[20];
if(C_truep(C_u_i_memq(lf[280],t3))){
/* batch-driver.scm:648: chicken.base#exit */
t4=*((C_word*)lf[196]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5713(2,av2);}}}

/* k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in ... */
static void C_ccall f_5713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_5713,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_5716,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
/* batch-driver.scm:651: chicken.compiler.user-pass#user-pass */
t3=*((C_word*)lf[279]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in ... */
static void C_ccall f_5716(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,4)))){
C_save_and_reclaim((void *)f_5716,2,av);}
a=C_alloc(32);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_5719,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6381,a[2]=t2,a[3]=((C_word*)t0)[21],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9118,a[2]=t5,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[179]+1);
av2[3]=lf[278];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5719(2,av2);}}}

/* k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in ... */
static void C_ccall f_5719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,2)))){
C_save_and_reclaim((void *)f_5719,2,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_5722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6374,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6378,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:661: chicken.compiler.support#canonicalize-begin-body */
t5=*((C_word*)lf[276]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t0)[21])[1];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in ... */
static void C_ccall f_5722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,4)))){
C_save_and_reclaim((void *)f_5722,2,av);}
a=C_alloc(25);
t2=t1;
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=t2,a[19]=((C_word*)t0)[18],a[20]=t4,a[21]=((C_word*)t0)[19],a[22]=((C_word*)t0)[20],tmp=(C_word)a,a+=23,tmp);
/* batch-driver.scm:663: print-node */
t6=((C_word*)((C_word*)t0)[6])[1];
f_4930(t6,t5,lf[272],lf[273],t2);}

/* k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in ... */
static void C_ccall f_5725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_5725,2,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5728,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
/* batch-driver.scm:664: initialize-analysis-database */
t3=lf[8];
f_4088(t3,t2);}

/* k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in ... */
static void C_ccall f_5728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,2)))){
C_save_and_reclaim((void *)f_5728,2,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5731,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6370,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:667: scheme#vector->list */
t4=*((C_word*)lf[270]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[271]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in ... */
static void C_ccall f_5731(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,c,3)))){
C_save_and_reclaim((void *)f_5731,2,av);}
a=C_alloc(39);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5734,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=t2,tmp=(C_word)a,a+=24,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(t2,lf[5]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6332,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6334,a[2]=t6,a[3]=t11,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_6334(t13,t9,t2);}

/* k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in ... */
static void C_ccall f_5734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_5734,2,av);}
a=C_alloc(28);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5737,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=t2,a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6319,a[2]=t3,a[3]=((C_word*)t0)[23],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:669: chicken.compiler.support#debugging */
t5=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[268];
av2[3]=lf[269];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in ... */
static void C_ccall f_5737(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,3)))){
C_save_and_reclaim((void *)f_5737,2,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
if(C_truep(*((C_word*)lf[264]+1))){
t3=C_i_check_list_2(((C_word*)t0)[20],lf[10]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6295,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_6295(t7,t2,((C_word*)t0)[20]);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5740(2,av2);}}}

/* k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in ... */
static void C_ccall f_5740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_5740,2,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5743,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm:679: collect-options */
t3=((C_word*)((C_word*)t0)[22])[1];
f_5108(t3,t2,lf[263]);}

/* k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in ... */
static void C_ccall f_5743(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,3)))){
C_save_and_reclaim((void *)f_5743,2,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
if(C_truep(C_i_nullp(t1))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5746(2,av2);}}
else{
t3=C_set_block_item(lf[164] /* chicken.compiler.core#inline-locally */,0,C_SCHEME_TRUE);
t4=C_i_check_list_2(t1,lf[10]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6248,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_6248(t8,t2,t1);}}

/* k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in ... */
static void C_ccall f_5746(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,3)))){
C_save_and_reclaim((void *)f_5746,2,av);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_5749,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
t3=((C_word*)((C_word*)t0)[19])[1];
t4=(C_truep(t3)?t3:*((C_word*)lf[120]+1));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6099,a[2]=((C_word*)t0)[20],a[3]=((C_word*)t0)[21],a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[18],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[19],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[5],a[12]=((C_word*)t0)[22],tmp=(C_word)a,a+=13,tmp);
t6=((C_word*)t0)[23];
if(C_truep(C_u_i_memq(lf[258],t6))){
t7=t5;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_6099(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6225,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:691: chicken.compiler.scrutinizer#load-type-database */
t8=*((C_word*)lf[252]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[260];
av2[3]=*((C_word*)lf[120]+1);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}
else{
t5=t2;
f_5749(t5,C_SCHEME_UNDEFINED);}}

/* k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in ... */
static void C_fcall f_5749(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,0,2)))){
C_save_and_reclaim_args((void *)trf_5749,2,t0,t1);}
a=C_alloc(22);
t2=C_set_block_item(lf[153] /* ##sys#line-number-database */,0,C_SCHEME_FALSE);
t3=C_set_block_item(lf[158] /* chicken.compiler.core#constant-table */,0,C_SCHEME_FALSE);
t4=C_set_block_item(lf[159] /* chicken.compiler.core#inline-table */,0,C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_5755,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
if(C_truep(*((C_word*)lf[239]+1))){
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_5755(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6093,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:727: chicken.compiler.support#node-subexpressions */
t7=*((C_word*)lf[241]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[18];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in ... */
static void C_ccall f_5755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_5755,2,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_5758,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
/* batch-driver.scm:729: begin-time */
t3=((C_word*)((C_word*)t0)[4])[1];
f_5143(t3,t2);}

/* k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in ... */
static void C_ccall f_5758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_5758,2,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5761,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
/* batch-driver.scm:731: chicken.compiler.core#perform-cps-conversion */
t3=*((C_word*)lf[238]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[18];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in ... */
static void C_ccall f_5761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_5761,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_5764,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=t2,tmp=(C_word)a,a+=19,tmp);
/* batch-driver.scm:732: end-time */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5153(t4,t3,lf[237]);}

/* k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in ... */
static void C_ccall f_5764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_5764,2,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_5767,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
/* batch-driver.scm:733: print-node */
t3=((C_word*)((C_word*)t0)[6])[1];
f_4930(t3,t2,lf[235],lf[236],((C_word*)t0)[18]);}

/* k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in ... */
static void C_ccall f_5767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,7)))){
C_save_and_reclaim((void *)f_5767,2,av);}
a=C_alloc(20);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5772,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp));
t5=((C_word*)t3)[1];
f_5772(t5,((C_word*)t0)[17],C_fix(1),((C_word*)t0)[18],C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in ... */
static void C_fcall f_5772(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(26,0,2)))){
C_save_and_reclaim_args((void *)trf_5772,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(26);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5776,a[2]=t4,a[3]=t5,a[4]=t7,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=t6,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],a[13]=t1,a[14]=((C_word*)t0)[8],a[15]=((C_word*)t0)[9],a[16]=((C_word*)t0)[10],a[17]=((C_word*)t0)[11],a[18]=((C_word*)t0)[12],a[19]=((C_word*)t0)[13],a[20]=((C_word*)t0)[14],a[21]=((C_word*)t0)[15],a[22]=((C_word*)t0)[16],a[23]=((C_word*)t0)[17],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm:741: begin-time */
t9=((C_word*)((C_word*)t0)[5])[1];
f_5143(t9,t8);}

/* k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in ... */
static void C_ccall f_5776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,4)))){
C_save_and_reclaim((void *)f_5776,2,av);}
a=C_alloc(30);
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5779,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm:743: analyze */
t3=((C_word*)((C_word*)t0)[11])[1];
f_5191(t3,t2,lf[234],((C_word*)((C_word*)t0)[4])[1],C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[2]));}

/* k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in ... */
static void C_ccall f_5779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,2)))){
C_save_and_reclaim((void *)f_5779,2,av);}
a=C_alloc(30);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5782,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
if(C_truep(*((C_word*)lf[160]+1))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6049,a[2]=((C_word*)t0)[23],a[3]=t3,a[4]=((C_word*)t0)[15],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_memq(lf[232],*((C_word*)lf[101]+1)))){
/* batch-driver.scm:746: chicken.compiler.support#dump-undefined-globals */
t5=*((C_word*)lf[233]+1);{
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
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_6049(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5782(2,av2);}}}

/* k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in ... */
static void C_ccall f_5782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_5782,2,av);}
a=C_alloc(24);
t2=C_set_block_item(lf[160] /* chicken.compiler.core#first-analysis */,0,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5786,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm:756: end-time */
t4=((C_word*)((C_word*)t0)[10])[1];
f_5153(t4,t3,lf[225]);}

/* k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in ... */
static void C_ccall f_5786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,5)))){
C_save_and_reclaim((void *)f_5786,2,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5789,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm:757: print-db */
t3=((C_word*)((C_word*)t0)[21])[1];
f_4952(t3,t2,lf[223],lf[224],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in ... */
static void C_ccall f_5789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,9)))){
C_save_and_reclaim((void *)f_5789,2,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5792,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
if(C_truep(C_i_memq(lf[213],*((C_word*)lf[101]+1)))){
t3=((C_word*)t0)[5];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3995,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4001,tmp=(C_word)a,a+=2,tmp);
/* batch-driver.scm:69: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t2;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5792(2,av2);}}}

/* k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in ... */
static void C_ccall f_5792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_5792,2,av);}
a=C_alloc(23);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5798,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm:764: chicken.compiler.support#debugging */
t3=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[103];
av2[3]=lf[177];
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5899,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[16],a[7]=((C_word*)t0)[17],a[8]=((C_word*)t0)[18],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[19],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[20],a[14]=((C_word*)t0)[21],a[15]=((C_word*)t0)[6],a[16]=((C_word*)t0)[22],tmp=(C_word)a,a+=17,tmp);
if(C_truep(((C_word*)t0)[23])){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6031,a[2]=((C_word*)t0)[10],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:803: begin-time */
t4=((C_word*)((C_word*)t0)[11])[1];
f_5143(t4,t3);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5899(2,av2);}}}}

/* k5796 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in ... */
static void C_ccall f_5798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_5798,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5801,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm:765: begin-time */
t3=((C_word*)((C_word*)t0)[10])[1];
f_5143(t3,t2);}

/* k5799 in k5796 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in ... */
static void C_ccall f_5801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_5801,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5806,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5818,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:766: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[13];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a5805 in k5799 in k5796 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in ... */
static void C_ccall f_5806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_5806,2,av);}
if(C_truep(((C_word*)t0)[2])){
/* batch-driver.scm:768: chicken.compiler.optimizer#determine-loop-and-dispatch */
t2=*((C_word*)lf[161]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
/* batch-driver.scm:769: chicken.compiler.optimizer#perform-high-level-optimizations */
t2=*((C_word*)lf[162]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)t0)[4];
av2[4]=*((C_word*)lf[163]+1);
av2[5]=*((C_word*)lf[164]+1);
av2[6]=*((C_word*)lf[165]+1);
av2[7]=*((C_word*)lf[166]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}}

/* a5817 in k5799 in k5796 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in ... */
static void C_ccall f_5818(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_5818,4,av);}
a=C_alloc(14);
t4=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5822,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm:773: end-time */
t5=((C_word*)((C_word*)t0)[7])[1];
f_5153(t5,t4,lf[176]);}

/* k5820 in a5817 in k5799 in k5796 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in ... */
static void C_ccall f_5822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_5822,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5825,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* batch-driver.scm:774: print-node */
t3=((C_word*)((C_word*)t0)[13])[1];
f_4930(t3,t2,lf[174],lf[175],((C_word*)t0)[6]);}

/* k5823 in k5820 in a5817 in k5799 in k5796 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in ... */
static void C_ccall f_5825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,6)))){
C_save_and_reclaim((void *)f_5825,2,av);}
a=C_alloc(29);
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];
t3=C_s_a_i_plus(&a,2,t2,C_fix(1));
/* batch-driver.scm:776: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_5772(t4,((C_word*)t0)[5],t3,((C_word*)t0)[6],C_SCHEME_TRUE,C_SCHEME_FALSE,((C_word*)t0)[7]);}
else{
t2=C_i_not(((C_word*)t0)[8]);
t3=(C_truep(t2)?((C_word*)t0)[9]:C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5842,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:778: chicken.compiler.support#debugging */
t5=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[103];
av2[3]=lf[167];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
if(C_truep(C_i_not(*((C_word*)lf[166]+1)))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5856,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:781: chicken.compiler.support#debugging */
t5=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[103];
av2[3]=lf[168];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
if(C_truep(*((C_word*)lf[169]+1))){
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5868,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:785: begin-time */
t5=((C_word*)((C_word*)t0)[11])[1];
f_5143(t5,t4);}
else{
t4=((C_word*)t0)[3];
t5=C_s_a_i_plus(&a,2,t4,C_fix(1));
/* batch-driver.scm:798: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_5772(t6,((C_word*)t0)[5],t5,((C_word*)t0)[6],C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[8]);}}}}}

/* k5840 in k5823 in k5820 in a5817 in k5799 in k5796 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in ... */
static void C_ccall f_5842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,6)))){
C_save_and_reclaim((void *)f_5842,2,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
t3=C_s_a_i_plus(&a,2,t2,C_fix(1));
/* batch-driver.scm:779: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5772(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* k5854 in k5823 in k5820 in a5817 in k5799 in k5796 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in ... */
static void C_ccall f_5856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,6)))){
C_save_and_reclaim((void *)f_5856,2,av);}
a=C_alloc(29);
t2=C_set_block_item(lf[166] /* chicken.compiler.core#inline-substitutions-enabled */,0,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
t4=C_s_a_i_plus(&a,2,t3,C_fix(1));
/* batch-driver.scm:783: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5772(t5,((C_word*)t0)[4],t4,((C_word*)t0)[5],C_SCHEME_TRUE,C_SCHEME_FALSE,((C_word*)t0)[6]);}

/* k5866 in k5823 in k5820 in a5817 in k5799 in k5796 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in ... */
static void C_ccall f_5868(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5868,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5871,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:786: analyze */
t3=((C_word*)((C_word*)t0)[9])[1];
f_5191(t3,t2,lf[173],((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k5869 in k5866 in k5823 in k5820 in a5817 in k5799 in k5796 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in ... */
static void C_ccall f_5871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_5871,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5874,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:787: end-time */
t4=((C_word*)((C_word*)t0)[7])[1];
f_5153(t4,t3,lf[172]);}

/* k5872 in k5869 in k5866 in k5823 in k5820 in a5817 in k5799 in k5796 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in ... */
static void C_ccall f_5874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5874,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5877,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:788: begin-time */
t3=((C_word*)((C_word*)t0)[9])[1];
f_5143(t3,t2);}

/* k5875 in k5872 in k5869 in k5866 in k5823 in k5820 in a5817 in k5799 in k5796 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in ... */
static void C_ccall f_5877(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5877,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5880,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:790: chicken.compiler.optimizer#transform-direct-lambdas! */
t3=*((C_word*)lf[171]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5878 in k5875 in k5872 in k5869 in k5866 in k5823 in k5820 in a5817 in k5799 in k5796 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in ... */
static void C_ccall f_5880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5880,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5883,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:791: end-time */
t4=((C_word*)((C_word*)t0)[7])[1];
f_5153(t4,t3,lf[170]);}

/* k5881 in k5878 in k5875 in k5872 in k5869 in k5866 in k5823 in k5820 in a5817 in k5799 in k5796 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in ... */
static void C_ccall f_5883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,6)))){
C_save_and_reclaim((void *)f_5883,2,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
t3=C_s_a_i_plus(&a,2,t2,C_fix(1));
/* batch-driver.scm:792: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5772(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[7]);}

/* k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in ... */
static void C_ccall f_5899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_5899,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5902,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* batch-driver.scm:807: print-node */
t3=((C_word*)((C_word*)t0)[12])[1];
f_4930(t3,t2,lf[208],lf[209],((C_word*)((C_word*)t0)[2])[1]);}

/* k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in ... */
static void C_ccall f_5902(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,4)))){
C_save_and_reclaim((void *)f_5902,2,av);}
a=C_alloc(28);
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_5905,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
t3=(C_truep(((C_word*)((C_word*)t0)[16])[1])?*((C_word*)lf[205]+1):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=((C_word*)((C_word*)t0)[16])[1];
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6025,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=t4,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t6=t5;
t7=C_a_i_list(&a,1,t4);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9080,a[2]=t6,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t8;
av2[2]=*((C_word*)lf[179]+1);
av2[3]=lf[207];
av2[4]=t7;
C_apply(5,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5905(2,av2);}}}

/* k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in ... */
static void C_ccall f_5905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_5905,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_5908,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* batch-driver.scm:816: begin-time */
t3=((C_word*)((C_word*)t0)[9])[1];
f_5143(t3,t2);}

/* k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in ... */
static void C_ccall f_5908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_5908,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_5912,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* batch-driver.scm:818: chicken.compiler.core#perform-closure-conversion */
t3=*((C_word*)lf[204]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in ... */
static void C_ccall f_5912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_5912,2,av);}
a=C_alloc(16);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_5915,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* batch-driver.scm:819: end-time */
t4=((C_word*)((C_word*)t0)[4])[1];
f_5153(t4,t3,lf[203]);}

/* k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in ... */
static void C_ccall f_5915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_5915,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5918,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm:820: print-db */
t3=((C_word*)((C_word*)t0)[14])[1];
f_4952(t3,t2,lf[201],lf[202],((C_word*)t0)[3],((C_word*)t0)[15]);}

/* k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in ... */
static void C_ccall f_5918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_5918,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5921,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep(*((C_word*)lf[199]+1))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6017,a[2]=((C_word*)t0)[13],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:250: chicken.time#current-milliseconds */
t4=*((C_word*)lf[112]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5921(2,av2);}}}

/* k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in ... */
static void C_ccall f_5921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_5921,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5924,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* batch-driver.scm:824: print-node */
t3=((C_word*)((C_word*)t0)[12])[1];
f_4930(t3,t2,lf[197],lf[198],((C_word*)((C_word*)t0)[2])[1]);}

/* k5922 in k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in ... */
static void C_ccall f_5924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5924,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5927,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[11])){
/* batch-driver.scm:825: chicken.base#exit */
t3=*((C_word*)lf[196]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5927(2,av2);}}}

/* k5925 in k5922 in k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in ... */
static void C_ccall f_5927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5927,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5930,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:826: begin-time */
t3=((C_word*)((C_word*)t0)[9])[1];
f_5143(t3,t2);}

/* k5928 in k5925 in k5922 in k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in ... */
static void C_ccall f_5930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,7)))){
C_save_and_reclaim((void *)f_5930,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5935,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5941,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:828: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[10];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a5934 in k5928 in k5925 in k5922 in k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in ... */
static void C_ccall f_5935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5935,2,av);}
/* batch-driver.scm:829: chicken.compiler.core#prepare-for-code-generation */
t2=*((C_word*)lf[178]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a5940 in k5928 in k5925 in k5922 in k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in ... */
static void C_ccall f_5941(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_5941,7,av);}
a=C_alloc(14);
t7=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5945,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t4,a[7]=t5,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=t6,a[13]=((C_word*)t0)[8],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm:830: end-time */
t8=((C_word*)((C_word*)t0)[2])[1];
f_5153(t8,t7,lf[195]);}

/* k5943 in a5940 in k5928 in k5925 in k5922 in k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in ... */
static void C_ccall f_5945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_5945,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5948,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* batch-driver.scm:831: begin-time */
t3=((C_word*)((C_word*)t0)[13])[1];
f_5143(t3,t2);}

/* k5946 in k5943 in a5940 in k5928 in k5925 in k5922 in k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in ... */
static void C_ccall f_5948(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_5948,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5951,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep(*((C_word*)lf[190]+1))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5994,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=t3;
t5=C_a_i_list(&a,1,*((C_word*)lf[190]+1));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9074,a[2]=t4,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[179]+1);
av2[3]=lf[194];
av2[4]=t5;
C_apply(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5951(2,av2);}}}

/* k5949 in k5946 in k5943 in a5940 in k5928 in k5925 in k5922 in k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in ... */
static void C_ccall f_5951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_5951,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5954,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)t0)[4])){
/* batch-driver.scm:841: scheme#open-output-file */
t3=*((C_word*)lf[189]+1);{
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
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=*((C_word*)lf[20]+1);
f_5954(2,av2);}}}

/* k5952 in k5949 in k5946 in k5943 in a5940 in k5928 in k5925 in k5922 in k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in ... */
static void C_ccall f_5954(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_5954,2,av);}
a=C_alloc(20);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5957,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
t4=t3;
t5=C_a_i_list(&a,1,((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9068,a[2]=t4,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[179]+1);
av2[3]=lf[188];
av2[4]=t5;
C_apply(5,av2);}}

/* k5955 in k5952 in k5949 in k5946 in k5943 in a5940 in k5928 in k5925 in k5922 in k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in ... */
static void C_ccall f_5957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,10)))){
C_save_and_reclaim((void *)f_5957,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5960,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:843: chicken.compiler.c-backend#generate-code */
t3=*((C_word*)lf[187]+1);{
C_word *av2;
if(c >= 11) {
  av2=av;
} else {
  av2=C_alloc(11);
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
av2[10]=((C_word*)t0)[13];
((C_proc)(void*)(*((C_word*)t3+1)))(11,av2);}}

/* k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in a5940 in k5928 in k5925 in k5922 in k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in ... */
static void C_ccall f_5960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5960,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5963,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
/* batch-driver.scm:846: scheme#close-output-port */
t3=*((C_word*)lf[186]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5963(2,av2);}}}

/* k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in a5940 in k5928 in k5925 in k5922 in k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in ... */
static void C_ccall f_5963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5963,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5966,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:847: end-time */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5153(t3,t2,lf[185]);}

/* k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in a5940 in k5928 in k5925 in k5922 in k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in ... */
static void C_ccall f_5966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5966,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5969,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_memq(lf[182],*((C_word*)lf[101]+1)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5985,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:849: ##sys#stop-timer */
t4=*((C_word*)lf[184]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8581,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:850: chicken.compiler.support#compiler-cleanup-hook */
t4=*((C_word*)lf[181]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in a5940 in k5928 in k5925 in k5922 in k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in ... */
static void C_ccall f_5969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5969,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5972,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:850: chicken.compiler.support#compiler-cleanup-hook */
t3=*((C_word*)lf[181]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in a5940 in k5928 in k5925 in k5922 in k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in ... */
static void C_ccall f_5972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5972,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9056,a[2]=t2,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[179]+1);
av2[3]=lf[180];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}

/* k5983 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in a5940 in k5928 in k5925 in k5922 in k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in ... */
static void C_ccall f_5985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5985,2,av);}
/* batch-driver.scm:849: ##sys#display-times */
t2=*((C_word*)lf[183]+1);{
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

/* k5992 in k5946 in k5943 in a5940 in k5928 in k5925 in k5922 in k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in ... */
static void C_ccall f_5994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,3)))){
C_save_and_reclaim((void *)f_5994,2,av);}
a=C_alloc(2);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5999,tmp=(C_word)a,a+=2,tmp);
/* batch-driver.scm:836: scheme#with-output-to-file */
t3=*((C_word*)lf[193]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[190]+1);
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a5998 in k5992 in k5946 in k5943 in a5940 in k5928 in k5925 in k5922 in k5919 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in ... */
static void C_ccall f_5999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5999,2,av);}
t2=*((C_word*)lf[191]+1);
/* batch-driver.scm:838: g2132 */
t3=*((C_word*)lf[191]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=*((C_word*)lf[192]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6015 in k5916 in k5913 in k5910 in k5906 in k5903 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in ... */
static void C_ccall f_6017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_6017,2,av);}
a=C_alloc(29);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_s_a_i_minus(&a,2,t1,t2);
if(C_truep(C_i_greaterp(t3,C_fix(60000)))){
/* batch-driver.scm:823: scheme#display */
t4=*((C_word*)lf[148]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[200];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5921(2,av2);}}}

/* k6023 in k5900 in k5897 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in ... */
static void C_ccall f_6025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_6025,2,av);}
/* batch-driver.scm:813: chicken.compiler.support#emit-global-inline-file */
t2=*((C_word*)lf[206]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=*((C_word*)lf[163]+1);
av2[6]=*((C_word*)lf[165]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k6029 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in ... */
static void C_ccall f_6031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6031,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6034,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:804: chicken.compiler.support#debugging */
t3=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[103];
av2[3]=lf[212];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6032 in k6029 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in ... */
static void C_ccall f_6034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6034,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6037,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:805: chicken.compiler.lfa2#perform-secondary-flow-analysis */
t3=*((C_word*)lf[211]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6035 in k6032 in k6029 in k5790 in k5787 in k5784 in k5780 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in ... */
static void C_ccall f_6037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6037,2,av);}
/* batch-driver.scm:806: end-time */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5153(t2,((C_word*)t0)[3],lf[210]);}

/* k6047 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in ... */
static void C_ccall f_6049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6049,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6052,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_memq(lf[230],*((C_word*)lf[101]+1)))){
/* batch-driver.scm:748: chicken.compiler.support#dump-defined-globals */
t3=*((C_word*)lf[231]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6052(2,av2);}}}

/* k6050 in k6047 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in ... */
static void C_ccall f_6052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6052,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6055,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_memq(lf[228],*((C_word*)lf[101]+1)))){
/* batch-driver.scm:750: chicken.compiler.support#dump-global-refs */
t3=*((C_word*)lf[229]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6055(2,av2);}}}

/* k6053 in k6050 in k6047 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in ... */
static void C_ccall f_6055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6055,2,av);}
a=C_alloc(12);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6061,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=t2;
t4=C_a_i_list(&a,1,((C_word*)((C_word*)t0)[2])[1]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9086,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[179]+1);
av2[3]=lf[227];
av2[4]=t4;
C_apply(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_5782(2,av2);}}}

/* k6059 in k6053 in k6050 in k6047 in k5777 in k5774 in loop in k5765 in k5762 in k5759 in k5756 in k5753 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in ... */
static void C_ccall f_6061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6061,2,av);}
/* batch-driver.scm:754: chicken.compiler.scrutinizer#emit-types-file */
t2=*((C_word*)lf[226]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)((C_word*)t0)[4])[1];
av2[4]=((C_word*)t0)[5];
av2[5]=*((C_word*)lf[163]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k6091 in k5747 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in ... */
static void C_ccall f_6093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6093,2,av);}
t2=C_i_car(t1);
/* batch-driver.scm:727: chicken.compiler.optimizer#scan-toplevel-assignments */
t3=*((C_word*)lf[240]+1);{
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

/* k6097 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in ... */
static void C_ccall f_6099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6099,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6113,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* batch-driver.scm:699: collect-options */
t3=((C_word*)((C_word*)t0)[12])[1];
f_5108(t3,t2,lf[257]);}

/* k6102 in for-each-loop2029 in k6111 in k6097 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in ... */
static void C_ccall f_6104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6104,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* batch-driver.scm:698: chicken.compiler.support#quit-compiling */
t2=*((C_word*)lf[75]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[256];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k6111 in k6097 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in ... */
static void C_ccall f_6113(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6113,2,av);}
a=C_alloc(17);
t2=C_i_check_list_2(t1,lf[10]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6196,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_6196(t7,t3,t1);}

/* k6117 in k6111 in k6097 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in ... */
static void C_ccall f_6119(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_6119,2,av);}
a=C_alloc(16);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[10]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6138,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6173,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_6173(t7,t3,((C_word*)t0)[2]);}

/* k6126 in for-each-loop2050 in k6117 in k6111 in k6097 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in ... */
static void C_ccall f_6128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6128,2,av);}
/* batch-driver.scm:702: chicken.compiler.scrutinizer#load-type-database */
t2=*((C_word*)lf[252]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=*((C_word*)lf[120]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k6130 in for-each-loop2050 in k6117 in k6111 in k6097 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in ... */
static void C_ccall f_6132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6132,2,av);}
/* batch-driver.scm:703: chicken.pathname#make-pathname */
t2=*((C_word*)lf[253]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=t1;
av2[4]=lf[254];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6136 in k6117 in k6111 in k6097 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in ... */
static void C_ccall f_6138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6138,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6141,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:706: begin-time */
t3=((C_word*)((C_word*)t0)[8])[1];
f_5143(t3,t2);}

/* k6139 in k6136 in k6117 in k6111 in k6097 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in ... */
static void C_ccall f_6141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6141,2,av);}
a=C_alloc(10);
t2=C_set_block_item(lf[160] /* chicken.compiler.core#first-analysis */,0,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6146,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:708: analyze */
t4=((C_word*)((C_word*)t0)[10])[1];
f_5191(t4,t3,lf[251],((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k6144 in k6139 in k6136 in k6117 in k6111 in k6097 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in ... */
static void C_ccall f_6146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_6146,2,av);}
a=C_alloc(9);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6149,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:709: print-db */
t4=((C_word*)((C_word*)t0)[9])[1];
f_4952(t4,t3,lf[249],lf[250],((C_word*)((C_word*)t0)[2])[1],C_fix(0));}

/* k6147 in k6144 in k6139 in k6136 in k6117 in k6111 in k6097 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in ... */
static void C_ccall f_6149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6149,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6152,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:710: end-time */
t3=((C_word*)((C_word*)t0)[5])[1];
f_5153(t3,t2,lf[248]);}

/* k6150 in k6147 in k6144 in k6139 in k6136 in k6117 in k6111 in k6097 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in ... */
static void C_ccall f_6152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6152,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6155,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:711: begin-time */
t3=((C_word*)((C_word*)t0)[8])[1];
f_5143(t3,t2);}

/* k6153 in k6150 in k6147 in k6144 in k6139 in k6136 in k6117 in k6111 in k6097 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in ... */
static void C_ccall f_6155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_6155,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6158,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:712: chicken.compiler.support#debugging */
t3=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[103];
av2[3]=lf[247];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6156 in k6153 in k6150 in k6147 in k6144 in k6139 in k6136 in k6117 in k6111 in k6097 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in ... */
static void C_ccall f_6158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_6158,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6161,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:713: chicken.compiler.scrutinizer#scrutinize */
t3=*((C_word*)lf[245]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)((C_word*)t0)[6])[1];
av2[4]=((C_word*)((C_word*)t0)[7])[1];
av2[5]=*((C_word*)lf[120]+1);
av2[6]=*((C_word*)lf[246]+1);
av2[7]=*((C_word*)lf[163]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k6159 in k6156 in k6153 in k6150 in k6147 in k6144 in k6139 in k6136 in k6117 in k6111 in k6097 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in ... */
static void C_ccall f_6161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6161,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6164,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:716: end-time */
t3=((C_word*)((C_word*)t0)[5])[1];
f_5153(t3,t2,lf[244]);}

/* k6162 in k6159 in k6156 in k6153 in k6150 in k6147 in k6144 in k6139 in k6136 in k6117 in k6111 in k6097 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in ... */
static void C_ccall f_6164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6164,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6167,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[120]+1))){
/* batch-driver.scm:718: print-node */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4930(t3,t2,lf[242],lf[243],((C_word*)t0)[4]);}
else{
t3=C_set_block_item(lf[160] /* chicken.compiler.core#first-analysis */,0,C_SCHEME_TRUE);
t4=((C_word*)t0)[2];
f_5749(t4,t3);}}

/* k6165 in k6162 in k6159 in k6156 in k6153 in k6150 in k6147 in k6144 in k6139 in k6136 in k6117 in k6111 in k6097 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in ... */
static void C_ccall f_6167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6167,2,av);}
t2=C_set_block_item(lf[160] /* chicken.compiler.core#first-analysis */,0,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
f_5749(t3,t2);}

/* for-each-loop2050 in k6117 in k6111 in k6097 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in ... */
static void C_fcall f_6173(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_6173,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6183,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6128,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6132,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:703: scheme#symbol->string */
t8=*((C_word*)lf[255]+1);{
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

/* k6181 in for-each-loop2050 in k6117 in k6111 in k6097 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in ... */
static void C_ccall f_6183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6183,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6173(t3,((C_word*)t0)[4],t2);}

/* for-each-loop2029 in k6111 in k6097 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in ... */
static void C_fcall f_6196(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_6196,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6206,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6104,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:697: chicken.compiler.scrutinizer#load-type-database */
t8=*((C_word*)lf[252]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
av2[3]=*((C_word*)lf[120]+1);
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6204 in for-each-loop2029 in k6111 in k6097 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in ... */
static void C_ccall f_6206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6206,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6196(t3,((C_word*)t0)[4],t2);}

/* k6223 in k5744 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in ... */
static void C_ccall f_6225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6225,2,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_6099(2,av2);}}
else{
/* batch-driver.scm:693: chicken.compiler.support#quit-compiling */
t2=*((C_word*)lf[75]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[259];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k6235 in for-each-loop2006 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in ... */
static void C_ccall f_6237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6237,2,av);}
/* batch-driver.scm:685: chicken.compiler.support#load-inline-file */
t2=*((C_word*)lf[261]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* for-each-loop2006 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in ... */
static void C_fcall f_6248(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6248,3,t0,t1,t2);}
a=C_alloc(15);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6258,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6237,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=t7;
t9=C_a_i_list(&a,1,t6);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9098,a[2]=t8,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t10;
av2[2]=*((C_word*)lf[179]+1);
av2[3]=lf[262];
av2[4]=t9;
C_apply(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6256 in for-each-loop2006 in k5741 in k5738 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in ... */
static void C_ccall f_6258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6258,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6248(t3,((C_word*)t0)[4],t2);}

/* k6272 in for-each-loop1984 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in ... */
static void C_ccall f_6274(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6274,2,av);}
a=C_alloc(10);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6280,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=t3;
t5=C_a_i_list(&a,1,t2);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9106,a[2]=t4,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[179]+1);
av2[3]=lf[265];
av2[4]=t5;
C_apply(5,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6278 in k6272 in for-each-loop1984 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in ... */
static void C_ccall f_6280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6280,2,av);}
/* batch-driver.scm:677: chicken.compiler.support#load-inline-file */
t2=*((C_word*)lf[261]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6285 in for-each-loop1984 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in ... */
static void C_ccall f_6287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6287,2,av);}
/* batch-driver.scm:674: ##sys#resolve-include-filename */
t2=*((C_word*)lf[266]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[267];
av2[4]=C_SCHEME_TRUE;
av2[5]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* for-each-loop1984 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in ... */
static void C_fcall f_6295(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_6295,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6305,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6274,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6287,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:675: scheme#symbol->string */
t8=*((C_word*)lf[255]+1);{
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

/* k6303 in for-each-loop1984 in k5735 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in ... */
static void C_ccall f_6305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6305,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6295(t3,((C_word*)t0)[4],t2);}

/* k6317 in k5732 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in ... */
static void C_ccall f_6319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6319,2,av);}
if(C_truep(t1)){
/* batch-driver.scm:670: chicken.pretty-print#pp */
t2=*((C_word*)lf[191]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_5737(2,av2);}}}

/* k6330 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in ... */
static void C_ccall f_6332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6332,2,av);}
/* batch-driver.scm:668: concatenate */
f_3172(((C_word*)t0)[2],t1);}

/* map-loop1958 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in ... */
static void C_fcall f_6334(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6334,3,t0,t1,t2);}
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

/* k6368 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in ... */
static void C_ccall f_6370(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6370,2,av);}
/* batch-driver.scm:667: concatenate */
f_3172(((C_word*)t0)[2],t1);}

/* k6372 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in ... */
static void C_ccall f_6374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6374,2,av);}
/* batch-driver.scm:659: chicken.compiler.core#build-toplevel-procedure */
t2=*((C_word*)lf[274]+1);{
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

/* k6376 in k5717 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in ... */
static void C_ccall f_6378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6378,2,av);}
/* batch-driver.scm:660: chicken.compiler.support#build-node-graph */
t2=*((C_word*)lf[275]+1);{
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

/* k6379 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in ... */
static void C_ccall f_6381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6381,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6384,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:654: begin-time */
t3=((C_word*)((C_word*)t0)[6])[1];
f_5143(t3,t2);}

/* k6382 in k6379 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in ... */
static void C_ccall f_6384(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6384,2,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=((C_word*)t0)[2];
t7=((C_word*)((C_word*)t0)[3])[1];
t8=C_i_check_list_2(t7,lf[5]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6394,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6399,a[2]=t4,a[3]=t11,a[4]=t6,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_6399(t13,t9,t7);}

/* k6392 in k6382 in k6379 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in ... */
static void C_ccall f_6394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6394,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* batch-driver.scm:656: end-time */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5153(t3,((C_word*)t0)[4],lf[277]);}

/* map-loop1925 in k6382 in k6379 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in ... */
static void C_fcall f_6399(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6399,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6424,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:655: g1931 */
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

/* k6422 in map-loop1925 in k6382 in k6379 in k5714 in k5711 in k5708 in k5705 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in ... */
static void C_ccall f_6424(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6424,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6399(t6,((C_word*)t0)[5],t5);}

/* k6437 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in ... */
static void C_ccall f_6439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6439,2,av);}
if(C_truep(t1)){
/* batch-driver.scm:640: chicken.compiler.support#display-line-number-database */
t2=*((C_word*)lf[284]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_5702(2,av2);}}}

/* k6443 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in ... */
static void C_ccall f_6445(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6445,2,av);}
if(C_truep(t1)){
/* batch-driver.scm:638: chicken.compiler.support#display-real-name-table */
t2=*((C_word*)lf[287]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_5699(2,av2);}}}

/* a6455 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in ... */
static void C_ccall f_6456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6456,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6460,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:633: chicken.base#print */
t3=*((C_word*)lf[293]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[294];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6458 in a6455 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in ... */
static void C_ccall f_6460(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6460,2,av);}
a=C_alloc(5);
t2=*((C_word*)lf[290]+1);
t3=C_i_check_list_2(*((C_word*)lf[290]+1),lf[10]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6494,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_6494(t7,((C_word*)t0)[2],*((C_word*)lf[290]+1));}

/* k6466 in for-each-loop1896 in k6458 in a6455 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in ... */
static void C_ccall f_6468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6468,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6471,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* batch-driver.scm:635: ##sys#print */
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k6469 in k6466 in for-each-loop1896 in k6458 in a6455 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in ... */
static void C_ccall f_6471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6471,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6474,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:635: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[291];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6472 in k6469 in k6466 in for-each-loop1896 in k6458 in a6455 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in ... */
static void C_ccall f_6474(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6474,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6477,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* batch-driver.scm:635: ##sys#print */
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k6475 in k6472 in k6469 in k6466 in for-each-loop1896 in k6458 in a6455 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in ... */
static void C_ccall f_6477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6477,2,av);}
/* batch-driver.scm:635: ##sys#write-char-0 */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* for-each-loop1896 in k6458 in a6455 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in ... */
static void C_fcall f_6494(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6494,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6504,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=*((C_word*)lf[20]+1);
t8=*((C_word*)lf[20]+1);
t9=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6468,a[2]=t5,a[3]=t7,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:635: ##sys#print */
t11=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[292];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6502 in for-each-loop1896 in k6458 in a6455 in k5691 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in ... */
static void C_ccall f_6504(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6504,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6494(t3,((C_word*)t0)[4],t2);}

/* k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in ... */
static void C_ccall f_6518(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_6518,2,av);}
a=C_alloc(15);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6524,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6678,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_list(&a,1,*((C_word*)lf[312]+1));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3710,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* mini-srfi-1.scm:182: filter */
f_3320(t4,t6,lf[313]);}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_5693(2,av2);}}}

/* k6522 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in ... */
static void C_ccall f_6524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6524,2,av);}
a=C_alloc(4);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6537,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:626: chicken.base#open-output-string */
t3=*((C_word*)lf[304]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_5693(2,av2);}}}

/* k6535 in k6522 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in ... */
static void C_ccall f_6537(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6537,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_fix(2),C_SCHEME_TRUE,lf[297]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6543,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:626: ##sys#print */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[303];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6541 in k6535 in k6522 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in ... */
static void C_ccall f_6543(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_6543,2,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6546,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6553,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=*((C_word*)lf[300]+1);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6560,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6562,a[2]=t6,a[3]=t11,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_6562(t13,t9,((C_word*)t0)[5]);}

/* k6544 in k6541 in k6535 in k6522 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in ... */
static void C_ccall f_6546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6546,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6549,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:626: chicken.base#get-output-string */
t3=*((C_word*)lf[299]+1);{
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

/* k6547 in k6544 in k6541 in k6535 in k6522 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in ... */
static void C_ccall f_6549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6549,2,av);}
/* batch-driver.scm:625: chicken.base#warning */
t2=*((C_word*)lf[298]+1);{
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

/* k6551 in k6541 in k6535 in k6522 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in ... */
static void C_ccall f_6553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6553,2,av);}
/* batch-driver.scm:626: ##sys#print */
t2=*((C_word*)lf[22]+1);{
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

/* k6558 in k6541 in k6535 in k6522 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in ... */
static void C_ccall f_6560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6560,2,av);}
/* batch-driver.scm:627: chicken.string#string-intersperse */
t2=*((C_word*)lf[301]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[302];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1865 in k6541 in k6535 in k6522 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in ... */
static void C_fcall f_6562(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6562,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6587,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:627: g1871 */
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

/* k6585 in map-loop1865 in k6541 in k6535 in k6522 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in ... */
static void C_ccall f_6587(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6587,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6562(t6,((C_word*)t0)[5],t5);}

/* k6602 in k6676 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in ... */
static void C_ccall f_6604(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6604,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_fix(2),C_SCHEME_TRUE,lf[297]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6610,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(*((C_word*)lf[308]+1))){
/* batch-driver.scm:621: ##sys#print */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[309];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
if(C_truep(((C_word*)t0)[4])){
/* batch-driver.scm:621: ##sys#print */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[310];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
/* batch-driver.scm:621: ##sys#print */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[311];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}}

/* k6608 in k6602 in k6676 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in ... */
static void C_ccall f_6610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6610,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6613,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:621: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[307];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6611 in k6608 in k6602 in k6676 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in ... */
static void C_ccall f_6613(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_6613,2,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6616,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6623,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=*((C_word*)lf[300]+1);
t9=C_i_check_list_2(((C_word*)t0)[5],lf[5]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6633,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6635,a[2]=t6,a[3]=t12,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_6635(t14,t10,((C_word*)t0)[5]);}

/* k6614 in k6611 in k6608 in k6602 in k6676 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in ... */
static void C_ccall f_6616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6616,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6619,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:621: chicken.base#get-output-string */
t3=*((C_word*)lf[299]+1);{
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

/* k6617 in k6614 in k6611 in k6608 in k6602 in k6676 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in ... */
static void C_ccall f_6619(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6619,2,av);}
/* batch-driver.scm:620: chicken.base#notice */
t2=*((C_word*)lf[305]+1);{
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

/* k6621 in k6611 in k6608 in k6602 in k6676 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in ... */
static void C_ccall f_6623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6623,2,av);}
/* batch-driver.scm:621: ##sys#print */
t2=*((C_word*)lf[22]+1);{
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

/* k6631 in k6611 in k6608 in k6602 in k6676 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in ... */
static void C_ccall f_6633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6633,2,av);}
/* batch-driver.scm:623: chicken.string#string-intersperse */
t2=*((C_word*)lf[301]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[306];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1827 in k6611 in k6608 in k6602 in k6676 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in ... */
static void C_fcall f_6635(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6635,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6660,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:623: g1833 */
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

/* k6658 in map-loop1827 in k6611 in k6608 in k6602 in k6676 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in ... */
static void C_ccall f_6660(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6660,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6635(t6,((C_word*)t0)[5],t5);}

/* k6676 in k6516 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in ... */
static void C_ccall f_6678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6678,2,av);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6604,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:621: chicken.base#open-output-string */
t3=*((C_word*)lf[304]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_6524(2,av2);}}}

/* a6679 in k5688 in k5685 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in ... */
static void C_ccall f_6680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6680,3,av);}
t3=*((C_word*)lf[314]+1);
/* batch-driver.scm:618: g1812 */
t4=*((C_word*)lf[314]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6692 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in ... */
static void C_ccall f_6694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6694,2,av);}
/* batch-driver.scm:610: chicken.compiler.support#quit-compiling */
t2=*((C_word*)lf[75]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[316];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k6711 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in ... */
static void C_ccall f_6713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6713,2,av);}
/* batch-driver.scm:613: chicken.string#string-intersperse */
t2=*((C_word*)lf[301]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[317];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1779 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in ... */
static void C_fcall f_6715(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6715,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6740,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
/* batch-driver.scm:614: chicken.string#->string */
t6=*((C_word*)lf[300]+1);{
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

/* k6738 in map-loop1779 in k5682 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in ... */
static void C_ccall f_6740(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6740,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6715(t6,((C_word*)t0)[5],t5);}

/* k6770 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in ... */
static void C_ccall f_6772(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_6772,2,av);}
a=C_alloc(19);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=*((C_word*)lf[312]+1);
t8=C_i_check_list_2(*((C_word*)lf[312]+1),lf[5]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6821,a[2]=t5,a[3]=t11,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_6821(t13,t9,*((C_word*)lf[312]+1));}

/* k6785 in k6770 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in ... */
static void C_ccall f_6787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_6787,2,av);}
a=C_alloc(17);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6791,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(*((C_word*)lf[308]+1))){
t4=C_a_i_list(&a,2,lf[323],*((C_word*)lf[308]+1));
t5=t3;
f_6791(t5,C_a_i_list(&a,1,t4));}
else{
t4=t3;
f_6791(t4,C_SCHEME_END_OF_LIST);}}

/* k6789 in k6785 in k6770 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in ... */
static void C_fcall f_6791(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_6791,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(*((C_word*)lf[321]+1))){
if(C_truep(C_i_not(*((C_word*)lf[308]+1)))){
if(C_truep(((C_word*)t0)[7])){
/* batch-driver.scm:601: chicken.compiler.support#profiling-prelude-exps */
t4=*((C_word*)lf[322]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* batch-driver.scm:601: chicken.compiler.support#profiling-prelude-exps */
t4=*((C_word*)lf[322]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}
else{
/* batch-driver.scm:601: chicken.compiler.support#profiling-prelude-exps */
t4=*((C_word*)lf[322]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
f_6795(2,av2);}}}

/* k6793 in k6789 in k6785 in k6770 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in ... */
static void C_ccall f_6795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6795,2,av);}
if(C_truep(*((C_word*)lf[319]+1))){
t2=((C_word*)((C_word*)t0)[2])[1];
/* batch-driver.scm:596: scheme#append */
t3=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
av2[5]=t1;
av2[6]=((C_word*)t0)[7];
av2[7]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}
else{
/* batch-driver.scm:596: scheme#append */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
av2[5]=t1;
av2[6]=((C_word*)t0)[7];
av2[7]=lf[320];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}}

/* map-loop1742 in k6770 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in ... */
static void C_fcall f_6821(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6821,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,lf[324],t3);
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

/* map-loop1712 in k5679 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in ... */
static void C_fcall f_6855(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6855,3,t0,t1,t2);}
a=C_alloc(18);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
t5=C_u_i_car(t3);
t6=C_a_i_list(&a,2,lf[325],t5);
t7=C_a_i_list(&a,3,lf[326],t4,t6);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t8);
t10=C_mutate(((C_word *)((C_word*)t0)[2])+1,t8);
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

/* map-loop1670 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in ... */
static void C_fcall f_6889(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6889,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6914,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:587: g1676 */
t5=((C_word*)t0)[4];
f_5649(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6912 in map-loop1670 in k5673 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in ... */
static void C_ccall f_6914(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6914,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6889(t6,((C_word*)t0)[5],t5);}

/* k6937 in k5670 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in ... */
static void C_ccall f_6939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6939,2,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,lf[327],t3);
t5=((C_word*)t0)[3];
f_5675(t5,C_a_i_list(&a,1,t4));}

/* k6944 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in ... */
static void C_ccall f_6946(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6946,2,av);}
a=C_alloc(17);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=((C_word*)t0)[2];
t7=((C_word*)((C_word*)t0)[3])[1];
t8=C_i_check_list_2(t7,lf[5]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6956,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6958,a[2]=t4,a[3]=t11,a[4]=t6,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_6958(t13,t9,t7);}

/* k6954 in k6944 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in ... */
static void C_ccall f_6956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6956,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5639(t3,t2);}

/* map-loop1642 in k6944 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in ... */
static void C_fcall f_6958(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6958,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6983,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:582: g1648 */
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

/* k6981 in map-loop1642 in k6944 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in ... */
static void C_ccall f_6983(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6983,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6958(t6,((C_word*)t0)[5],t5);}

/* k6991 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in ... */
static void C_ccall f_6993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6993,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6997,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:559: proc */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
av2[4]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6995 in k6991 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in ... */
static void C_ccall f_6997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6997,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_5633(2,av2);}}

/* doloop1562 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in ... */
static void C_fcall f_7002(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_7002,3,t0,t1,t2);}
a=C_alloc(22);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7013,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=*((C_word*)lf[334]+1);
t9=C_i_check_list_2(((C_word*)t0)[3],lf[5]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7023,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7073,a[2]=t6,a[3]=t12,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_7073(t14,t10,((C_word*)t0)[3]);}
else{
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7111,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:568: chicken.compiler.support#check-and-open-input-file */
t6=*((C_word*)lf[338]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k7011 in doloop1562 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in ... */
static void C_ccall f_7013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7013,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7021 in doloop1562 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in ... */
static void C_ccall f_7023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7023,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:565: scheme#reverse */
t4=*((C_word*)lf[335]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7025 in k7021 in doloop1562 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in ... */
static void C_ccall f_7027(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7027,2,av);}
a=C_alloc(18);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=*((C_word*)lf[334]+1);
t8=C_i_check_list_2(((C_word*)t0)[2],lf[5]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7037,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7039,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_7039(t13,t9,((C_word*)t0)[2]);}

/* k7035 in k7025 in k7021 in doloop1562 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in ... */
static void C_ccall f_7037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7037,2,av);}
/* batch-driver.scm:564: scheme#append */
t2=*((C_word*)lf[4]+1);{
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

/* map-loop1593 in k7025 in k7021 in doloop1562 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in ... */
static void C_fcall f_7039(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7039,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7064,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:566: g1599 */
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

/* k7062 in map-loop1593 in k7025 in k7021 in doloop1562 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in ... */
static void C_ccall f_7064(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7064,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7039(t6,((C_word*)t0)[5],t5);}

/* map-loop1567 in doloop1562 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in ... */
static void C_fcall f_7073(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7073,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7098,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:564: g1573 */
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

/* k7096 in map-loop1567 in doloop1562 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in ... */
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7098,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7073(t6,((C_word*)t0)[5],t5);}

/* k7109 in doloop1562 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in ... */
static void C_ccall f_7111(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7111,2,av);}
a=C_alloc(22);
t2=t1;
t3=((C_word*)t0)[2];
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7114,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7121,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7126,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7154,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:569: ##sys#dynamic-wind */
t11=*((C_word*)lf[156]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t11;
av2[1]=t7;
av2[2]=t8;
av2[3]=t9;
av2[4]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}

/* k7112 in k7109 in doloop1562 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in ... */
static void C_ccall f_7114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7114,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)((C_word*)t0)[3])[1];
f_7002(t4,((C_word*)t0)[4],t3);}

/* a7120 in k7109 in doloop1562 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in ... */
static void C_ccall f_7121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7121,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[154]+1));
t3=C_mutate((C_word*)lf[154]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a7125 in k7109 in doloop1562 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in ... */
static void C_ccall f_7126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7126,2,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7132,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_7132(t5,t1);}

/* loop in a7125 in k7109 in doloop1562 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in ... */
static void C_fcall f_7132(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_7132,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7136,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:571: chicken.compiler.support#read/source-info */
t3=*((C_word*)lf[337]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7134 in loop in a7125 in k7109 in doloop1562 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in ... */
static void C_ccall f_7136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7136,2,av);}
a=C_alloc(3);
if(C_truep(C_eofp(t1))){
/* batch-driver.scm:573: chicken.compiler.support#close-checked-input-file */
t2=*((C_word*)lf[336]+1);{
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
else{
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[5])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[5])+1,t2);
/* batch-driver.scm:576: loop */
t4=((C_word*)((C_word*)t0)[6])[1];
f_7132(t4,((C_word*)t0)[2]);}}

/* a7153 in k7109 in doloop1562 in k5628 in k5625 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in ... */
static void C_ccall f_7154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7154,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[154]+1));
t3=C_mutate((C_word*)lf[154]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7159 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in ... */
static void C_ccall f_7161(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7161,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7169,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:554: collect-options */
t6=((C_word*)((C_word*)t0)[4])[1];
f_5108(t6,t5,lf[340]);}

/* k7167 in k7159 in k5622 in k5619 in k5616 in k5612 in k5608 in k5605 in k5602 in k5599 in k5596 in k5557 in k5538 in k5535 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in ... */
static void C_ccall f_7169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7169,2,av);}
/* batch-driver.scm:551: scheme#append */
t2=*((C_word*)lf[4]+1);{
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

/* k7185 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in ... */
static void C_ccall f_7187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7187,2,av);}
a=C_alloc(5);
t2=C_set_block_item(lf[321] /* chicken.compiler.core#emit-profile */,0,C_SCHEME_TRUE);
t3=C_mutate((C_word*)lf[358]+1 /* (set! chicken.compiler.core#profiled-procedures ...) */,lf[359]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7193,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
/* batch-driver.scm:513: scheme#append */
t5=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=*((C_word*)lf[363]+1);
av2[4]=lf[364];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
/* batch-driver.scm:513: scheme#append */
t5=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=*((C_word*)lf[363]+1);
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k7191 in k7185 in k5532 in k5529 in k5526 in k5523 in k5512 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in ... */
static void C_ccall f_7193(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7193,2,av);}
a=C_alloc(6);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
if(C_truep(((C_word*)t0)[3])){
t3=((C_word*)t0)[4];
t4=C_a_i_list(&a,1,lf[360]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9168,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[179]+1);
av2[3]=lf[361];
av2[4]=t4;
C_apply(5,av2);}}
else{
t3=((C_word*)t0)[4];
t4=C_a_i_list(&a,1,lf[362]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9174,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[179]+1);
av2[3]=lf[361];
av2[4]=t4;
C_apply(5,av2);}}}

/* k7240 in k5508 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in ... */
static void C_ccall f_7242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7242,2,av);}
/* batch-driver.scm:491: arg-val */
f_5025(((C_word*)t0)[3],t1);}

/* k7247 in k5504 in k5501 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in ... */
static void C_ccall f_7249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7249,2,av);}
/* batch-driver.scm:488: arg-val */
f_5025(((C_word*)t0)[3],t1);}

/* k7263 in map-loop1503 in k7266 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in ... */
static void C_ccall f_7265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_7265,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,lf[376],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7266 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in ... */
static void C_ccall f_7268(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7268,2,av);}
a=C_alloc(11);
t2=C_i_check_list_2(t1,lf[5]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7274,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7276,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_7276(t7,t3,t1);}

/* k7272 in k7266 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in ... */
static void C_ccall f_7274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7274,2,av);}
/* batch-driver.scm:479: scheme#append */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1503 in k7266 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in ... */
static void C_fcall f_7276(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_7276,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7301,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7265,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:481: scheme#string->symbol */
t7=*((C_word*)lf[328]+1);{
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

/* k7299 in map-loop1503 in k7266 in k5497 in k5494 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in ... */
static void C_ccall f_7301(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7301,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7276(t6,((C_word*)t0)[5],t5);}

/* a7324 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in ... */
static void C_ccall f_7325(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7325,3,av);}
a=C_alloc(10);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7332,a[2]=t5,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:471: chicken.string#string-split */
t8=*((C_word*)lf[380]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
av2[3]=lf[381];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k7330 in a7324 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in ... */
static void C_ccall f_7332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7332,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7337,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_7337(t5,((C_word*)t0)[4],t1);}

/* map-loop1474 in k7330 in a7324 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in ... */
static void C_fcall f_7337(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7337,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7362,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:471: g1480 */
t5=*((C_word*)lf[328]+1);{
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

/* k7360 in map-loop1474 in k7330 in a7324 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in ... */
static void C_ccall f_7362(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7362,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7337(t6,((C_word*)t0)[5],t5);}

/* k7371 in k5491 in k5483 in k5479 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in ... */
static void C_ccall f_7373(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7373,2,av);}
/* batch-driver.scm:470: append-map */
f_2910(((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* for-each-loop1451 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in ... */
static void C_fcall f_7375(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_7375,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7385,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5463,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:461: ##sys#resolve-include-filename */
t8=*((C_word*)lf[266]+1);{
C_word av2[6];
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
av2[5]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(6,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7383 in for-each-loop1451 in k5456 in k5453 in k5446 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in ... */
static void C_ccall f_7385(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7385,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7375(t3,((C_word*)t0)[4],t2);}

/* for-each-loop1096 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in ... */
static void C_fcall f_7398(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7398,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7408,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:451: g1097 */
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

/* k7406 in for-each-loop1096 in k5440 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in ... */
static void C_ccall f_7408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7408,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7398(t3,((C_word*)t0)[4],t2);}

/* a7420 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in ... */
static void C_ccall f_7421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7421,3,av);}
t3=*((C_word*)lf[380]+1);
/* batch-driver.scm:453: g1441 */
t4=*((C_word*)lf[380]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[387];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k7427 in k5437 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in ... */
static void C_ccall f_7429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7429,2,av);}
/* batch-driver.scm:453: append-map */
f_2910(((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* for-each-loop1086 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in ... */
static void C_fcall f_7431(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7431,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7441,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:448: g1087 */
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

/* k7439 in for-each-loop1086 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in ... */
static void C_ccall f_7441(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7441,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7431(t3,((C_word*)t0)[4],t2);}

/* a7453 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in ... */
static void C_ccall f_7454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7454,3,av);}
t3=*((C_word*)lf[380]+1);
/* batch-driver.scm:450: g1426 */
t4=*((C_word*)lf[380]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[389];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k7460 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in ... */
static void C_ccall f_7462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7462,2,av);}
/* batch-driver.scm:450: append-map */
f_2910(((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* k7473 in for-each-loop1381 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in ... */
static void C_ccall f_7475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7475,2,av);}
/* batch-driver.scm:438: chicken.compiler.support#mark-variable */
t2=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[393];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k7482 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in ... */
static void C_ccall f_7484(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7484,2,av);}
a=C_alloc(5);
t2=*((C_word*)lf[73]+1);
t3=C_i_check_list_2(*((C_word*)lf[73]+1),lf[10]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7500,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_7500(t7,((C_word*)t0)[2],*((C_word*)lf[73]+1));}

/* k7487 in for-each-loop1400 in k7482 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in ... */
static void C_ccall f_7489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7489,2,av);}
/* batch-driver.scm:443: chicken.compiler.support#mark-variable */
t2=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[393];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* for-each-loop1400 in k7482 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in ... */
static void C_fcall f_7500(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_7500,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7510,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7489,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:442: chicken.compiler.support#mark-variable */
t8=*((C_word*)lf[13]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
av2[3]=lf[394];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7508 in for-each-loop1400 in k7482 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in ... */
static void C_ccall f_7510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7510,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7500(t3,((C_word*)t0)[4],t2);}

/* for-each-loop1381 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in ... */
static void C_fcall f_7523(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_7523,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7533,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7475,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:437: chicken.compiler.support#mark-variable */
t8=*((C_word*)lf[13]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
av2[3]=lf[394];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7531 in for-each-loop1381 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in ... */
static void C_ccall f_7533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7533,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7523(t3,((C_word*)t0)[4],t2);}

/* k7576 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in ... */
static void C_ccall f_7578(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7578,2,av);}
a=C_alloc(12);
t2=C_i_check_list_2(t1,lf[5]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7584,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7586,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_7586(t7,t3,t1);}

/* k7582 in k7576 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in ... */
static void C_ccall f_7584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7584,2,av);}
/* batch-driver.scm:419: scheme#append */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=*((C_word*)lf[130]+1);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop1353 in k7576 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in ... */
static void C_fcall f_7586(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7586,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7611,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:419: g1359 */
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

/* k7609 in map-loop1353 in k7576 in k5398 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in ... */
static void C_ccall f_7611(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7611,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7586(t6,((C_word*)t0)[5],t5);}

/* k7621 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in ... */
static void C_ccall f_7623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7623,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7626,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:412: chicken.base#case-sensitive */
t3=*((C_word*)lf[412]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7624 in k7621 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in ... */
static void C_ccall f_7626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7626,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7629,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:413: chicken.base#keyword-style */
t3=*((C_word*)lf[410]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[411];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7627 in k7624 in k7621 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in ... */
static void C_ccall f_7629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7629,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7632,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:414: chicken.base#parentheses-synonyms */
t3=*((C_word*)lf[409]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7630 in k7627 in k7624 in k7621 in k5395 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in ... */
static void C_ccall f_7632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7632,2,av);}
/* batch-driver.scm:415: chicken.base#symbol-escape */
t2=*((C_word*)lf[408]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7638 in k5392 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in ... */
static void C_ccall f_7640(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7640,2,av);}
/* batch-driver.scm:409: chicken.base#symbol-escape */
t2=*((C_word*)lf[408]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7646 in k5389 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in ... */
static void C_ccall f_7648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7648,2,av);}
/* batch-driver.scm:406: chicken.base#parentheses-synonyms */
t2=*((C_word*)lf[409]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7652 in k5386 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in ... */
static void C_ccall f_7654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7654,2,av);}
if(C_truep(C_i_string_equal_p(lf[418],t1))){
/* batch-driver.scm:399: chicken.base#keyword-style */
t2=*((C_word*)lf[410]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[419];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(lf[420],t1))){
/* batch-driver.scm:400: chicken.base#keyword-style */
t2=*((C_word*)lf[410]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[411];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(lf[421],t1))){
/* batch-driver.scm:401: chicken.base#keyword-style */
t2=*((C_word*)lf[410]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[422];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
/* batch-driver.scm:402: chicken.compiler.support#quit-compiling */
t2=*((C_word*)lf[75]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[423];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}}}

/* k7685 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in ... */
static void C_ccall f_7687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7687,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7690,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:395: chicken.platform#register-feature! */
t3=*((C_word*)lf[131]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[424];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7688 in k7685 in k5383 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in ... */
static void C_ccall f_7690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7690,2,av);}
/* batch-driver.scm:396: chicken.base#case-sensitive */
t2=*((C_word*)lf[412]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7695 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in ... */
static void C_ccall f_7697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7697,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7700,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:390: scheme#string->number */
t4=*((C_word*)lf[110]+1);{
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

/* k7698 in k7695 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in ... */
static void C_ccall f_7700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7700,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7703,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t1;
t4=C_mutate((C_word*)lf[165]+1 /* (set! chicken.compiler.core#inline-max-size ...) */,t3);
t5=((C_word*)t0)[2];
f_5385(t5,t4);}
else{
/* batch-driver.scm:391: chicken.compiler.support#quit-compiling */
t3=*((C_word*)lf[75]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[426];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k7701 in k7698 in k7695 in k5378 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in ... */
static void C_ccall f_7703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7703,2,av);}
t2=C_mutate((C_word*)lf[165]+1 /* (set! chicken.compiler.core#inline-max-size ...) */,t1);
t3=((C_word*)t0)[2];
f_5385(t3,t2);}

/* k7708 in k5373 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in k5309 in ... */
static void C_ccall f_7710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7710,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5380(t3,t2);}

/* k7714 in k5368 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in k5309 in k5306 in ... */
static void C_ccall f_7716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7716,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5375(t3,t2);}

/* k7718 in k5363 in k5360 in k5357 in k5354 in k5351 in k5348 in k5345 in k5342 in k5339 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in k5309 in k5306 in k5303 in ... */
static void C_ccall f_7720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7720,2,av);}
t2=C_mutate((C_word*)lf[190]+1 /* (set! chicken.compiler.core#emit-link-file ...) */,t1);
t3=((C_word*)t0)[2];
f_5370(t3,t2);}

/* k7747 in k5336 in k5333 in k5330 in k5327 in k5324 in k5321 in k5318 in k5315 in k5312 in k5309 in k5306 in k5303 in k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in ... */
static void C_ccall f_7749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7749,2,av);}
t2=C_set_block_item(lf[199] /* ##sys#warnings-enabled */,0,C_SCHEME_FALSE);
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t4=((C_word*)t0)[3];
f_5341(t4,t3);}

/* map-loop1292 in k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in ... */
static void C_fcall f_7796(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_7796,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7821,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5290,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:336: scheme#string->symbol */
t8=*((C_word*)lf[328]+1);{
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

/* k7819 in map-loop1292 in k5297 in k5271 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in ... */
static void C_ccall f_7821(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7821,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7796(t6,((C_word*)t0)[5],t5);}

/* k7832 in k5268 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in ... */
static void C_ccall f_7834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7834,2,av);}
/* batch-driver.scm:332: chicken.base#exit */
t2=*((C_word*)lf[196]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7838 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in ... */
static void C_ccall f_7839(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7839,3,av);}
a=C_alloc(10);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7855,a[2]=t5,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* string->list */
t8=*((C_word*)lf[459]+1);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k7853 in a7838 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in ... */
static void C_ccall f_7855(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7855,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7860,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_7860(t5,((C_word*)t0)[4],t1);}

/* map-loop1264 in k7853 in a7838 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in ... */
static void C_fcall f_7860(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_7860,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7885,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_string(&a,1,t4);
/* batch-driver.scm:327: scheme#string->symbol */
t6=*((C_word*)lf[328]+1);{
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

/* k7883 in map-loop1264 in k7853 in a7838 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in ... */
static void C_ccall f_7885(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7885,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7860(t6,((C_word*)t0)[5],t5);}

/* k7894 in k5261 in k5258 in k5255 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in ... */
static void C_ccall f_7896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7896,2,av);}
/* batch-driver.scm:325: append-map */
f_2910(((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* k7908 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in ... */
static void C_ccall f_7910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7910,2,av);}
t2=C_mutate((C_word*)lf[308]+1 /* (set! chicken.compiler.core#unit-name ...) */,t1);
t3=((C_word*)t0)[2];
f_5257(t3,t2);}

/* k7912 in k4883 in k4878 in k4858 in k4853 in k4850 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in ... */
static void C_ccall f_7914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7914,2,av);}
/* batch-driver.scm:317: scheme#string->symbol */
t2=*((C_word*)lf[328]+1);{
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

/* map-loop1013 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in ... */
static void C_fcall f_7931(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7931,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7956,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:220: g1019 */
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

/* k7954 in map-loop1013 in k4844 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in ... */
static void C_ccall f_7956(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7956,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7931(t6,((C_word*)t0)[5],t5);}

/* k7965 in k4838 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in ... */
static void C_ccall f_7967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7967,2,av);}
if(C_truep(t1)){
t2=t1;
/* batch-driver.scm:221: ##sys#split-path */
t3=*((C_word*)lf[465]+1);{
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
/* batch-driver.scm:221: ##sys#split-path */
t2=*((C_word*)lf[465]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[466];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* g1006 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_fcall f_7971(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_7971,3,t0,t1,t2);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7975,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:214: option-arg */
f_4782(t3,t2);}

/* k7973 in g1006 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in ... */
static void C_ccall f_7975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7975,2,av);}
if(C_truep(C_i_symbolp(t1))){
/* batch-driver.scm:216: scheme#symbol->string */
t2=*((C_word*)lf[255]+1);{
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
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k7997 in k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_7999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7999,2,av);}
/* batch-driver.scm:219: chicken.pathname#make-pathname */
t2=*((C_word*)lf[253]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=t1;
av2[4]=lf[470];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8008 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_fcall f_8010(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,0,4)))){
C_save_and_reclaim_args((void *)trf_8010,2,t0,t1);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t0)[3];
t6=C_u_i_memq(lf[88],t5);
t7=((C_word*)t0)[3];
t8=C_u_i_memq(lf[89],t7);
t9=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4840,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t8)){
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7971,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:212: g1006 */
t11=t10;
f_7971(t11,t9,t8);}
else{
t10=((C_word*)t0)[3];
if(C_truep(C_u_i_memq(lf[469],t10))){
t11=t9;{
C_word av2[2];
av2[0]=t11;
av2[1]=C_SCHEME_FALSE;
f_4840(2,av2);}}
else{
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7999,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[6])){
/* batch-driver.scm:219: chicken.pathname#pathname-file */
t12=*((C_word*)lf[471]+1);{
C_word av2[3];
av2[0]=t12;
av2[1]=t11;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
/* batch-driver.scm:219: chicken.pathname#make-pathname */
t12=*((C_word*)lf[253]+1);{
C_word av2[5];
av2[0]=t12;
av2[1]=t9;
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[472];
av2[4]=lf[470];
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}}}}

/* k8027 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_ccall f_8029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_8029,2,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,lf[379],t1);
if(C_truep(*((C_word*)lf[78]+1))){
t3=((C_word*)t0)[2];
f_8010(t3,C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST));}
else{
t3=C_a_i_cons(&a,2,lf[376],*((C_word*)lf[473]+1));
t4=C_a_i_list(&a,1,t3);
t5=((C_word*)t0)[2];
f_8010(t5,C_a_i_cons(&a,2,t2,t4));}}

/* k8035 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_fcall f_8037(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8037,2,t0,t1);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8044,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[477]+1))){
if(C_truep(*((C_word*)lf[83]+1))){
if(C_truep(C_i_not(((C_word*)t0)[4]))){
t4=C_i_not(((C_word*)t0)[5]);
t5=t3;
f_8044(t5,(C_truep(t4)?C_i_not(*((C_word*)lf[78]+1)):C_SCHEME_FALSE));}
else{
t4=t3;
f_8044(t4,C_SCHEME_FALSE);}}
else{
t4=t3;
f_8044(t4,C_SCHEME_FALSE);}}
else{
t4=t3;
f_8044(t4,C_SCHEME_FALSE);}}

/* k8042 in k8035 in k4824 in k4811 in chicken.compiler.batch-driver#compile-source-file in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 */
static void C_fcall f_8044(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_8044,2,t0,t1);}
if(C_truep(t1)){
/* batch-driver.scm:193: scheme#append */
t2=*((C_word*)lf[4]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[475]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=lf[476];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
/* batch-driver.scm:193: scheme#append */
t2=*((C_word*)lf[4]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[475]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_batch_2ddriver_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("batch-driver"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_batch_2ddriver_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(3068))){
C_save(t1);
C_rereclaim2(3068*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,482);
lf[0]=C_h_intern(&lf[0],12, C_text("batch-driver"));
lf[1]=C_h_intern(&lf[1],30, C_text("chicken.compiler.batch-driver#"));
lf[3]=C_h_intern(&lf[3],5, C_text("foldr"));
lf[4]=C_h_intern(&lf[4],13, C_text("scheme#append"));
lf[5]=C_h_intern(&lf[5],3, C_text("map"));
lf[9]=C_h_intern(&lf[9],39, C_text("chicken.compiler.core#standard-bindings"));
lf[10]=C_h_intern(&lf[10],8, C_text("for-each"));
lf[11]=C_h_intern(&lf[11],39, C_text("chicken.compiler.core#extended-bindings"));
lf[12]=C_h_intern(&lf[12],39, C_text("chicken.compiler.core#internal-bindings"));
lf[13]=C_h_intern(&lf[13],38, C_text("chicken.compiler.support#mark-variable"));
lf[14]=C_h_intern(&lf[14],18, C_text("\010compilerintrinsic"));
lf[15]=C_h_intern(&lf[15],8, C_text("internal"));
lf[16]=C_h_intern(&lf[16],8, C_text("extended"));
lf[17]=C_h_intern(&lf[17],8, C_text("standard"));
lf[19]=C_h_intern(&lf[19],14, C_text("scheme#newline"));
lf[20]=C_h_intern(&lf[20],19, C_text("\003sysstandard-output"));
lf[21]=C_h_intern(&lf[21],6, C_text("printf"));
lf[22]=C_h_intern(&lf[22],9, C_text("\003sysprint"));
lf[23]=C_h_intern(&lf[23],40, C_text("chicken.compiler.support#node-parameters"));
lf[24]=C_h_intern(&lf[24],35, C_text("chicken.compiler.support#node-class"));
lf[25]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006\011pval="));
lf[26]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005\011val="));
lf[27]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006\011lval="));
lf[28]=C_h_intern(&lf[28],7, C_text("unknown"));
lf[29]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005\011css="));
lf[30]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006\011refs="));
lf[31]=C_h_intern(&lf[31],8, C_text("captured"));
lf[32]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010captured\376\001\000\000\003cpt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010assigned\376\001\000\000\003set\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005box"
"ed\376\001\000\000\003box\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006global\376\001\000\000\003glo\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020assigned-locally\376\001\000\000\003stl\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\014contractable\376\001\000\000\003con\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020standard-binding\376\001\000\000\003stb\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\006simple\376\001\000\000\003sim\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011inlinable\376\001\000\000\003inl\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013collapsable\376"
"\001\000\000\003col\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011removable\376\001\000\000\003rem\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010constant\376\001\000\000\003con\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\015inline-target\376\001\000\000\003ilt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020inline-transient\376\001\000\000\003itr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011"
"undefined\376\001\000\000\003und\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011replacing\376\001\000\000\003rpg\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006unused\376\001\000\000\003uud\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\020extended-binding\376\001\000\000\003xtb\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015inline-export\376\001\000\000\003ilx\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\013hidden-refs\376\001\000\000\003hrf\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011value-ref\376\001\000\000\003vvf\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014custom"
"izable\376\001\000\000\003cst\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025has-unused-parameters\376\001\000\000\003hup\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012boxed-r"
"est\376\001\000\000\003bxr\376\377\016"));
lf[33]=C_h_intern(&lf[33],16, C_text("\003syswrite-char-0"));
lf[34]=C_h_intern(&lf[34],5, C_text("value"));
lf[35]=C_h_intern(&lf[35],11, C_text("local-value"));
lf[36]=C_h_intern(&lf[36],16, C_text("potential-values"));
lf[37]=C_h_intern(&lf[37],10, C_text("replacable"));
lf[38]=C_h_intern(&lf[38],10, C_text("references"));
lf[39]=C_h_intern(&lf[39],10, C_text("call-sites"));
lf[40]=C_h_intern(&lf[40],29, C_text("chicken.compiler.support#bomb"));
lf[41]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020Illegal property"));
lf[42]=C_h_intern(&lf[42],4, C_text("home"));
lf[43]=C_h_intern(&lf[43],8, C_text("contains"));
lf[44]=C_h_intern(&lf[44],12, C_text("contained-in"));
lf[45]=C_h_intern(&lf[45],8, C_text("use-expr"));
lf[46]=C_h_intern(&lf[46],12, C_text("closure-size"));
lf[47]=C_h_intern(&lf[47],14, C_text("rest-parameter"));
lf[48]=C_h_intern(&lf[48],18, C_text("captured-variables"));
lf[49]=C_h_intern(&lf[49],13, C_text("explicit-rest"));
lf[50]=C_h_intern(&lf[50],8, C_text("assigned"));
lf[51]=C_h_intern(&lf[51],5, C_text("boxed"));
lf[52]=C_h_intern(&lf[52],6, C_text("global"));
lf[53]=C_h_intern(&lf[53],12, C_text("contractable"));
lf[54]=C_h_intern(&lf[54],16, C_text("standard-binding"));
lf[55]=C_h_intern(&lf[55],16, C_text("assigned-locally"));
lf[56]=C_h_intern(&lf[56],11, C_text("collapsable"));
lf[57]=C_h_intern(&lf[57],9, C_text("removable"));
lf[58]=C_h_intern(&lf[58],9, C_text("undefined"));
lf[59]=C_h_intern(&lf[59],9, C_text("replacing"));
lf[60]=C_h_intern(&lf[60],6, C_text("unused"));
lf[61]=C_h_intern(&lf[61],6, C_text("simple"));
lf[62]=C_h_intern(&lf[62],9, C_text("inlinable"));
lf[63]=C_h_intern(&lf[63],13, C_text("inline-export"));
lf[64]=C_h_intern(&lf[64],21, C_text("has-unused-parameters"));
lf[65]=C_h_intern(&lf[65],16, C_text("extended-binding"));
lf[66]=C_h_intern(&lf[66],12, C_text("customizable"));
lf[67]=C_h_intern(&lf[67],8, C_text("constant"));
lf[68]=C_h_intern(&lf[68],10, C_text("boxed-rest"));
lf[69]=C_h_intern(&lf[69],11, C_text("hidden-refs"));
lf[70]=C_h_intern(&lf[70],12, C_text("scheme#write"));
lf[71]=C_h_intern(&lf[71],36, C_text("chicken.internal#hash-table-for-each"));
lf[72]=C_h_intern(&lf[72],47, C_text("chicken.compiler.core#default-standard-bindings"));
lf[73]=C_h_intern(&lf[73],47, C_text("chicken.compiler.core#default-extended-bindings"));
lf[74]=C_h_intern(&lf[74],49, C_text("chicken.compiler.batch-driver#compile-source-file"));
lf[75]=C_h_intern(&lf[75],39, C_text("chicken.compiler.support#quit-compiling"));
lf[76]=C_decode_literal(C_heaptop,C_text("\376B\000\000 missing argument to `-~A\047 option"));
lf[77]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037invalid argument to `~A\047 option"));
lf[78]=C_h_intern(&lf[78],39, C_text("chicken.compiler.core#explicit-use-flag"));
lf[79]=C_h_intern(&lf[79],12, C_text("explicit-use"));
lf[80]=C_h_intern(&lf[80],37, C_text("chicken.compiler.core#emit-debug-info"));
lf[81]=C_h_intern(&lf[81],10, C_text("debug-info"));
lf[82]=C_h_intern(&lf[82],22, C_text("no-module-registration"));
lf[83]=C_h_intern(&lf[83],48, C_text("chicken.compiler.core#enable-module-registration"));
lf[84]=C_h_intern(&lf[84],7, C_text("dynamic"));
lf[85]=C_h_intern(&lf[85],4, C_text("unit"));
lf[86]=C_h_intern(&lf[86],17, C_text("import-for-syntax"));
lf[87]=C_h_intern(&lf[87],39, C_text("chicken.internal#default-syntax-imports"));
lf[88]=C_h_intern(&lf[88],7, C_text("verbose"));
lf[89]=C_h_intern(&lf[89],11, C_text("output-file"));
lf[90]=C_h_intern(&lf[90],39, C_text("chicken.compiler.support#chop-separator"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\003\000\000\002\376\001\000\000\042chicken.base#implicit-exit-handler\376\377\016\376\377\016\376\377\016"));
lf[92]=C_h_intern(&lf[92],7, C_text("profile"));
lf[93]=C_h_intern(&lf[93],12, C_text("profile-name"));
lf[94]=C_h_intern(&lf[94],9, C_text("heap-size"));
lf[95]=C_h_intern(&lf[95],13, C_text("keyword-style"));
lf[96]=C_h_intern(&lf[96],10, C_text("clustering"));
lf[97]=C_h_intern(&lf[97],12, C_text("analyze-only"));
lf[98]=C_h_intern(&lf[98],4, C_text("lfa2"));
lf[99]=C_h_intern(&lf[99],7, C_text("nursery"));
lf[100]=C_h_intern(&lf[100],6, C_text("module"));
lf[101]=C_h_intern(&lf[101],42, C_text("chicken.compiler.support#debugging-chicken"));
lf[102]=C_h_intern(&lf[102],34, C_text("chicken.compiler.support#debugging"));
lf[103]=C_h_intern(&lf[103],1, C_text("p"));
lf[104]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004pass"));
lf[105]=C_h_intern(&lf[105],35, C_text("chicken.compiler.support#dump-nodes"));
lf[106]=C_h_intern(&lf[106],33, C_text("chicken.pretty-print#pretty-print"));
lf[107]=C_h_intern(&lf[107],46, C_text("chicken.compiler.support#build-expression-tree"));
lf[108]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013(iteration "));
lf[109]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033invalid numeric argument ~S"));
lf[110]=C_h_intern(&lf[110],21, C_text("scheme#string->number"));
lf[111]=C_h_intern(&lf[111],16, C_text("scheme#substring"));
lf[112]=C_h_intern(&lf[112],33, C_text("chicken.time#current-milliseconds"));
lf[113]=C_h_intern(&lf[113],21, C_text("scheme#inexact->exact"));
lf[114]=C_h_intern(&lf[114],12, C_text("scheme#round"));
lf[115]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003: \011"));
lf[116]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030milliseconds needed for "));
lf[117]=C_h_intern(&lf[117],31, C_text("chicken.compiler.support#db-get"));
lf[118]=C_h_intern(&lf[118],32, C_text("chicken.compiler.support#db-put!"));
lf[119]=C_h_intern(&lf[119],40, C_text("chicken.compiler.core#analyze-expression"));
lf[120]=C_h_intern(&lf[120],43, C_text("chicken.compiler.core#enable-specialization"));
lf[121]=C_h_intern(&lf[121],10, C_text("specialize"));
lf[122]=C_h_intern(&lf[122],1, C_text("D"));
lf[123]=C_h_intern(&lf[123],38, C_text("chicken.compiler.core#import-libraries"));
lf[124]=C_h_intern(&lf[124],14, C_text("emit-link-file"));
lf[125]=C_h_intern(&lf[125],16, C_text("emit-inline-file"));
lf[126]=C_h_intern(&lf[126],15, C_text("emit-types-file"));
lf[127]=C_h_intern(&lf[127],12, C_text("inline-limit"));
lf[128]=C_h_intern(&lf[128],34, C_text("chicken.compiler.core#verbose-mode"));
lf[129]=C_h_intern(&lf[129],31, C_text("\003sysread-error-with-line-number"));
lf[130]=C_h_intern(&lf[130],21, C_text("\003sysinclude-pathnames"));
lf[131]=C_h_intern(&lf[131],34, C_text("chicken.platform#register-feature!"));
lf[132]=C_h_intern(&lf[132],36, C_text("chicken.platform#unregister-feature!"));
lf[133]=C_h_intern(&lf[133],19, C_text("\000compiler-extension"));
lf[134]=C_h_intern(&lf[134],12, C_text("\003sysfeatures"));
lf[135]=C_h_intern(&lf[135],10, C_text("\000compiling"));
lf[136]=C_h_intern(&lf[136],38, C_text("chicken.compiler.core#target-heap-size"));
lf[137]=C_h_intern(&lf[137],39, C_text("chicken.compiler.core#target-stack-size"));
lf[138]=C_h_intern(&lf[138],8, C_text("no-trace"));
lf[139]=C_h_intern(&lf[139],37, C_text("chicken.compiler.core#emit-trace-info"));
lf[140]=C_h_intern(&lf[140],53, C_text("chicken.compiler.core#disable-stack-overflow-checking"));
lf[141]=C_h_intern(&lf[141],29, C_text("disable-stack-overflow-checks"));
lf[142]=C_h_intern(&lf[142],36, C_text("chicken.compiler.core#bootstrap-mode"));
lf[143]=C_h_intern(&lf[143],7, C_text("version"));
lf[144]=C_h_intern(&lf[144],38, C_text("chicken.compiler.support#print-version"));
lf[145]=C_h_intern(&lf[145],4, C_text("help"));
lf[146]=C_h_intern(&lf[146],36, C_text("chicken.compiler.support#print-usage"));
lf[147]=C_h_intern(&lf[147],7, C_text("release"));
lf[148]=C_h_intern(&lf[148],14, C_text("scheme#display"));
lf[149]=C_h_intern(&lf[149],32, C_text("chicken.platform#chicken-version"));
lf[150]=C_decode_literal(C_heaptop,C_text("\376B\000\0001\012Run `csi\047 to start the interactive interpreter.\012"));
lf[151]=C_decode_literal(C_heaptop,C_text("\376B\000\000.or try `csc\047 for a more convenient interface.\012"));
lf[152]=C_decode_literal(C_heaptop,C_text("\376B\000\000C\012Enter `chicken -help\047 for information on how to use the compiler,\012"));
lf[153]=C_h_intern(&lf[153],24, C_text("\003sysline-number-database"));
lf[154]=C_h_intern(&lf[154],27, C_text("\003syscurrent-source-filename"));
lf[155]=C_h_intern(&lf[155],45, C_text("chicken.compiler.core#canonicalize-expression"));
lf[156]=C_h_intern(&lf[156],16, C_text("\003sysdynamic-wind"));
lf[157]=C_h_intern(&lf[157],44, C_text("chicken.compiler.core#line-number-database-2"));
lf[158]=C_h_intern(&lf[158],36, C_text("chicken.compiler.core#constant-table"));
lf[159]=C_h_intern(&lf[159],34, C_text("chicken.compiler.core#inline-table"));
lf[160]=C_h_intern(&lf[160],36, C_text("chicken.compiler.core#first-analysis"));
lf[161]=C_h_intern(&lf[161],54, C_text("chicken.compiler.optimizer#determine-loop-and-dispatch"));
lf[162]=C_h_intern(&lf[162],59, C_text("chicken.compiler.optimizer#perform-high-level-optimizations"));
lf[163]=C_h_intern(&lf[163],39, C_text("chicken.compiler.core#block-compilation"));
lf[164]=C_h_intern(&lf[164],36, C_text("chicken.compiler.core#inline-locally"));
lf[165]=C_h_intern(&lf[165],37, C_text("chicken.compiler.core#inline-max-size"));
lf[166]=C_h_intern(&lf[166],50, C_text("chicken.compiler.core#inline-substitutions-enabled"));
lf[167]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022clustering enabled"));
lf[168]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022rewritings enabled"));
lf[169]=C_h_intern(&lf[169],44, C_text("chicken.compiler.core#optimize-leaf-routines"));
lf[170]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031leaf routine optimization"));
lf[171]=C_h_intern(&lf[171],52, C_text("chicken.compiler.optimizer#transform-direct-lambdas!"));
lf[172]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010analysis"));
lf[173]=C_h_intern(&lf[173],4, C_text("leaf"));
lf[174]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023optimized-iteration"));
lf[175]=C_h_intern(&lf[175],1, C_text("5"));
lf[176]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014optimization"));
lf[177]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021optimization pass"));
lf[178]=C_h_intern(&lf[178],49, C_text("chicken.compiler.core#prepare-for-code-generation"));
lf[179]=C_h_intern(&lf[179],22, C_text("chicken.format#sprintf"));
lf[180]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025compilation finished."));
lf[181]=C_h_intern(&lf[181],46, C_text("chicken.compiler.support#compiler-cleanup-hook"));
lf[182]=C_h_intern(&lf[182],1, C_text("t"));
lf[183]=C_h_intern(&lf[183],17, C_text("\003sysdisplay-times"));
lf[184]=C_h_intern(&lf[184],14, C_text("\003sysstop-timer"));
lf[185]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017code generation"));
lf[186]=C_h_intern(&lf[186],24, C_text("scheme#close-output-port"));
lf[187]=C_h_intern(&lf[187],40, C_text("chicken.compiler.c-backend#generate-code"));
lf[188]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023generating `~A\047 ..."));
lf[189]=C_h_intern(&lf[189],23, C_text("scheme#open-output-file"));
lf[190]=C_h_intern(&lf[190],36, C_text("chicken.compiler.core#emit-link-file"));
lf[191]=C_h_intern(&lf[191],23, C_text("chicken.pretty-print#pp"));
lf[192]=C_h_intern(&lf[192],46, C_text("chicken.compiler.core#linked-static-extensions"));
lf[193]=C_h_intern(&lf[193],26, C_text("scheme#with-output-to-file"));
lf[194]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035generating link file `~a\047 ..."));
lf[195]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013preparation"));
lf[196]=C_h_intern(&lf[196],17, C_text("chicken.base#exit"));
lf[197]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021closure-converted"));
lf[198]=C_h_intern(&lf[198],1, C_text("9"));
lf[199]=C_h_intern(&lf[199],20, C_text("\003syswarnings-enabled"));
lf[200]=C_decode_literal(C_heaptop,C_text("\376B\000\000#(don\047t worry - still compiling...)\012"));
lf[201]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016final-analysis"));
lf[202]=C_h_intern(&lf[202],1, C_text("8"));
lf[203]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022closure conversion"));
lf[204]=C_h_intern(&lf[204],48, C_text("chicken.compiler.core#perform-closure-conversion"));
lf[205]=C_h_intern(&lf[205],41, C_text("chicken.compiler.core#insert-timer-checks"));
lf[206]=C_h_intern(&lf[206],48, C_text("chicken.compiler.support#emit-global-inline-file"));
lf[207]=C_decode_literal(C_heaptop,C_text("\376B\000\000&generating global inline file `~a\047 ..."));
lf[208]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011optimized"));
lf[209]=C_h_intern(&lf[209],1, C_text("7"));
lf[210]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027secondary flow analysis"));
lf[211]=C_h_intern(&lf[211],53, C_text("chicken.compiler.lfa2#perform-secondary-flow-analysis"));
lf[212]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012doing lfa2"));
lf[213]=C_h_intern(&lf[213],1, C_text("s"));
lf[214]=C_h_intern(&lf[214],49, C_text("chicken.compiler.core#compute-database-statistics"));
lf[215]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027;   database entries: \011"));
lf[216]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027;   known call sites: \011"));
lf[217]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027;   global variables: \011"));
lf[218]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027;   known procedures: \011"));
lf[219]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042;   variables with known values: \011"));
lf[220]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032 \011original program size: \011"));
lf[221]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023;   program size: \011"));
lf[222]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023program statistics:"));
lf[223]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010analysis"));
lf[224]=C_h_intern(&lf[224],1, C_text("4"));
lf[225]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010analysis"));
lf[226]=C_h_intern(&lf[226],44, C_text("chicken.compiler.scrutinizer#emit-types-file"));
lf[227]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035generating type file `~a\047 ..."));
lf[228]=C_h_intern(&lf[228],1, C_text("v"));
lf[229]=C_h_intern(&lf[229],41, C_text("chicken.compiler.support#dump-global-refs"));
lf[230]=C_h_intern(&lf[230],1, C_text("d"));
lf[231]=C_h_intern(&lf[231],45, C_text("chicken.compiler.support#dump-defined-globals"));
lf[232]=C_h_intern(&lf[232],1, C_text("u"));
lf[233]=C_h_intern(&lf[233],47, C_text("chicken.compiler.support#dump-undefined-globals"));
lf[234]=C_h_intern(&lf[234],3, C_text("opt"));
lf[235]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003cps"));
lf[236]=C_h_intern(&lf[236],1, C_text("3"));
lf[237]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016cps conversion"));
lf[238]=C_h_intern(&lf[238],44, C_text("chicken.compiler.core#perform-cps-conversion"));
lf[239]=C_h_intern(&lf[239],31, C_text("chicken.compiler.support#unsafe"));
lf[240]=C_h_intern(&lf[240],52, C_text("chicken.compiler.optimizer#scan-toplevel-assignments"));
lf[241]=C_h_intern(&lf[241],44, C_text("chicken.compiler.support#node-subexpressions"));
lf[242]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016specialization"));
lf[243]=C_h_intern(&lf[243],1, C_text("P"));
lf[244]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010scrutiny"));
lf[245]=C_h_intern(&lf[245],39, C_text("chicken.compiler.scrutinizer#scrutinize"));
lf[246]=C_h_intern(&lf[246],43, C_text("chicken.compiler.core#strict-variable-types"));
lf[247]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023performing scrutiny"));
lf[248]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027pre-analysis (scrutiny)"));
lf[249]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010analysis"));
lf[250]=C_h_intern(&lf[250],1, C_text("0"));
lf[251]=C_h_intern(&lf[251],8, C_text("scrutiny"));
lf[252]=C_h_intern(&lf[252],47, C_text("chicken.compiler.scrutinizer#load-type-database"));
lf[253]=C_h_intern(&lf[253],30, C_text("chicken.pathname#make-pathname"));
lf[254]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005types"));
lf[255]=C_h_intern(&lf[255],21, C_text("scheme#symbol->string"));
lf[256]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034type-database `~a\047 not found"));
lf[257]=C_h_intern(&lf[257],18, C_text("consult-types-file"));
lf[258]=C_h_intern(&lf[258],17, C_text("ignore-repository"));
lf[259]=C_decode_literal(C_heaptop,C_text("\376B\000\000\052default type-database `types.db\047 not found"));
lf[260]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010types.db"));
lf[261]=C_h_intern(&lf[261],41, C_text("chicken.compiler.support#load-inline-file"));
lf[262]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032Loading inline file ~a ..."));
lf[263]=C_h_intern(&lf[263],19, C_text("consult-inline-file"));
lf[264]=C_h_intern(&lf[264],41, C_text("chicken.compiler.core#enable-inline-files"));
lf[265]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032Loading inline file ~a ..."));
lf[266]=C_h_intern(&lf[266],28, C_text("\003sysresolve-include-filename"));
lf[267]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\007.inline\376\377\016"));
lf[268]=C_h_intern(&lf[268],1, C_text("M"));
lf[269]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017; requirements:"));
lf[270]=C_h_intern(&lf[270],19, C_text("scheme#vector->list"));
lf[271]=C_h_intern(&lf[271],39, C_text("chicken.compiler.core#file-requirements"));
lf[272]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021initial node tree"));
lf[273]=C_h_intern(&lf[273],1, C_text("T"));
lf[274]=C_h_intern(&lf[274],46, C_text("chicken.compiler.core#build-toplevel-procedure"));
lf[275]=C_h_intern(&lf[275],41, C_text("chicken.compiler.support#build-node-graph"));
lf[276]=C_h_intern(&lf[276],48, C_text("chicken.compiler.support#canonicalize-begin-body"));
lf[277]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011user pass"));
lf[278]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014User pass..."));
lf[279]=C_h_intern(&lf[279],36, C_text("chicken.compiler.user-pass#user-pass"));
lf[280]=C_h_intern(&lf[280],12, C_text("check-syntax"));
lf[281]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015canonicalized"));
lf[282]=C_h_intern(&lf[282],1, C_text("2"));
lf[283]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020canonicalization"));
lf[284]=C_h_intern(&lf[284],53, C_text("chicken.compiler.support#display-line-number-database"));
lf[285]=C_h_intern(&lf[285],1, C_text("n"));
lf[286]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025line number database:"));
lf[287]=C_h_intern(&lf[287],48, C_text("chicken.compiler.support#display-real-name-table"));
lf[288]=C_h_intern(&lf[288],1, C_text("N"));
lf[289]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020real name table:"));
lf[290]=C_h_intern(&lf[290],59, C_text("chicken.compiler.compiler-syntax#compiler-syntax-statistics"));
lf[291]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002\011\011"));
lf[292]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002  "));
lf[293]=C_h_intern(&lf[293],18, C_text("chicken.base#print"));
lf[294]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030applied compiler syntax:"));
lf[295]=C_h_intern(&lf[295],46, C_text("chicken.compiler.support#with-debugging-output"));
lf[296]=C_h_intern(&lf[296],1, C_text("S"));
lf[297]=C_h_intern(&lf[297],6, C_text("format"));
lf[298]=C_h_intern(&lf[298],20, C_text("chicken.base#warning"));
lf[299]=C_h_intern(&lf[299],30, C_text("chicken.base#get-output-string"));
lf[300]=C_h_intern(&lf[300],23, C_text("chicken.string#->string"));
lf[301]=C_h_intern(&lf[301],33, C_text("chicken.string#string-intersperse"));
lf[302]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002, "));
lf[303]=C_decode_literal(C_heaptop,C_text("\376B\000\0006the following extensions are not currently installed: "));
lf[304]=C_h_intern(&lf[304],31, C_text("chicken.base#open-output-string"));
lf[305]=C_h_intern(&lf[305],19, C_text("chicken.base#notice"));
lf[306]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002, "));
lf[307]=C_decode_literal(C_heaptop,C_text("\376B\000\000; has dynamic requirements but doesn\047t load (chicken eval): "));
lf[308]=C_h_intern(&lf[308],31, C_text("chicken.compiler.core#unit-name"));
lf[309]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004unit"));
lf[310]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007library"));
lf[311]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007program"));
lf[312]=C_h_intern(&lf[312],32, C_text("chicken.compiler.core#used-units"));
lf[313]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\004eval\376\003\000\000\002\376\001\000\000\004repl\376\377\016"));
lf[314]=C_h_intern(&lf[314],35, C_text("chicken.load#find-dynamic-extension"));
lf[315]=C_h_intern(&lf[315],31, C_text("chicken.internal#hash-table-ref"));
lf[316]=C_decode_literal(C_heaptop,C_text("\376B\000\000;No module definition found for import libraries to emit: ~A"));
lf[317]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002, "));
lf[318]=C_h_intern(&lf[318],41, C_text("chicken.compiler.core#immutable-constants"));
lf[319]=C_h_intern(&lf[319],43, C_text("chicken.compiler.core#standalone-executable"));
lf[320]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016\376\377\016"));
lf[321]=C_h_intern(&lf[321],34, C_text("chicken.compiler.core#emit-profile"));
lf[322]=C_h_intern(&lf[322],47, C_text("chicken.compiler.support#profiling-prelude-exps"));
lf[323]=C_h_intern(&lf[323],12, C_text("\004coreprovide"));
lf[324]=C_h_intern(&lf[324],13, C_text("\004corecallunit"));
lf[325]=C_h_intern(&lf[325],5, C_text("quote"));
lf[326]=C_h_intern(&lf[326],4, C_text("set!"));
lf[327]=C_h_intern(&lf[327],11, C_text("\004coremodule"));
lf[328]=C_h_intern(&lf[328],21, C_text("scheme#string->symbol"));
lf[329]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006source"));
lf[330]=C_h_intern(&lf[330],1, C_text("1"));
lf[331]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032User preprocessing pass..."));
lf[332]=C_h_intern(&lf[332],49, C_text("chicken.compiler.user-pass#user-preprocessor-pass"));
lf[333]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021User read pass..."));
lf[334]=C_h_intern(&lf[334],37, C_text("chicken.compiler.support#string->expr"));
lf[335]=C_h_intern(&lf[335],14, C_text("scheme#reverse"));
lf[336]=C_h_intern(&lf[336],49, C_text("chicken.compiler.support#close-checked-input-file"));
lf[337]=C_h_intern(&lf[337],41, C_text("chicken.compiler.support#read/source-info"));
lf[338]=C_h_intern(&lf[338],50, C_text("chicken.compiler.support#check-and-open-input-file"));
lf[339]=C_h_intern(&lf[339],41, C_text("chicken.compiler.user-pass#user-read-pass"));
lf[340]=C_h_intern(&lf[340],8, C_text("epilogue"));
lf[341]=C_h_intern(&lf[341],8, C_text("prologue"));
lf[342]=C_h_intern(&lf[342],8, C_text("postlude"));
lf[343]=C_h_intern(&lf[343],7, C_text("prelude"));
lf[344]=C_h_intern(&lf[344],18, C_text("scheme#make-vector"));
lf[345]=C_h_intern(&lf[345],47, C_text("chicken.compiler.core#line-number-database-size"));
lf[346]=C_h_intern(&lf[346],1, C_text("r"));
lf[347]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021target stack size"));
lf[348]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020target heap size"));
lf[349]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021debugging options"));
lf[350]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007options"));
lf[351]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022compiling `~a\047 ..."));
lf[352]=C_h_intern(&lf[352],5, C_text("-help"));
lf[353]=C_h_intern(&lf[353],1, C_text("h"));
lf[354]=C_h_intern(&lf[354],2, C_text("-h"));
lf[355]=C_h_intern(&lf[355],49, C_text("chicken.compiler.support#load-identifier-database"));
lf[356]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012modules.db"));
lf[357]=C_h_intern(&lf[357],18, C_text("accumulate-profile"));
lf[358]=C_h_intern(&lf[358],41, C_text("chicken.compiler.core#profiled-procedures"));
lf[359]=C_h_intern(&lf[359],3, C_text("all"));
lf[360]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015accumulative "));
lf[361]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032generating ~aprofiled code"));
lf[362]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[363]=C_h_intern(&lf[363],58, C_text("chicken.compiler.c-platform#default-profiling-declarations"));
lf[364]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004set!\376\003\000\000\002\376\001\000\000\027\003sysprofile-append-mode\376\003\000\000\002\376\377\006\001\376\377\016\376\377\016"));
lf[365]=C_decode_literal(C_heaptop,C_text("\376B\000\000Eyou need to specify -profile-name if using accumulated profiling runs"));
lf[366]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011calltrace"));
lf[367]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022debugging info: ~A"));
lf[368]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004none"));
lf[369]=C_h_intern(&lf[369],21, C_text("no-usual-integrations"));
lf[370]=C_h_intern(&lf[370],1, C_text("m"));
lf[371]=C_h_intern(&lf[371],25, C_text("chicken.gc#set-gc-report!"));
lf[372]=C_h_intern(&lf[372],25, C_text("chicken.platform#feature\077"));
lf[373]=C_h_intern(&lf[373],18, C_text("\000chicken-bootstrap"));
lf[374]=C_h_intern(&lf[374],14, C_text("compile-syntax"));
lf[375]=C_h_intern(&lf[375],25, C_text("\003sysenable-runtime-macros"));
lf[376]=C_h_intern(&lf[376],6, C_text("import"));
lf[377]=C_h_intern(&lf[377],17, C_text("require-extension"));
lf[378]=C_h_intern(&lf[378],4, C_text("uses"));
lf[379]=C_h_intern(&lf[379],12, C_text("\004coredeclare"));
lf[380]=C_h_intern(&lf[380],27, C_text("chicken.string#string-split"));
lf[381]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002, "));
lf[382]=C_h_intern(&lf[382],50, C_text("chicken.compiler.user-pass#user-post-analysis-pass"));
lf[383]=C_h_intern(&lf[383],11, C_text("scheme#load"));
lf[384]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031cannot load extension: ~a"));
lf[385]=C_decode_literal(C_heaptop,C_text("\376B\000\000\036Loading compiler extensions..."));
lf[386]=C_h_intern(&lf[386],6, C_text("extend"));
lf[387]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001,"));
lf[388]=C_h_intern(&lf[388],10, C_text("no-feature"));
lf[389]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002, "));
lf[390]=C_h_intern(&lf[390],7, C_text("feature"));
lf[391]=C_h_intern(&lf[391],25, C_text("chicken.load#load-verbose"));
lf[392]=C_h_intern(&lf[392],38, C_text("no-procedure-checks-for-usual-bindings"));
lf[393]=C_h_intern(&lf[393],21, C_text("\010compileralways-bound"));
lf[394]=C_h_intern(&lf[394],34, C_text("\010compileralways-bound-to-procedure"));
lf[395]=C_h_intern(&lf[395],41, C_text("no-procedure-checks-for-toplevel-bindings"));
lf[396]=C_h_intern(&lf[396],48, C_text("chicken.compiler.core#no-global-procedure-checks"));
lf[397]=C_h_intern(&lf[397],19, C_text("no-procedure-checks"));
lf[398]=C_h_intern(&lf[398],41, C_text("chicken.compiler.core#no-procedure-checks"));
lf[399]=C_h_intern(&lf[399],15, C_text("no-bound-checks"));
lf[400]=C_h_intern(&lf[400],37, C_text("chicken.compiler.core#no-bound-checks"));
lf[401]=C_h_intern(&lf[401],14, C_text("no-argc-checks"));
lf[402]=C_h_intern(&lf[402],36, C_text("chicken.compiler.core#no-argc-checks"));
lf[403]=C_h_intern(&lf[403],20, C_text("keep-shadowed-macros"));
lf[404]=C_h_intern(&lf[404],46, C_text("chicken.compiler.core#undefine-shadowed-macros"));
lf[405]=C_decode_literal(C_heaptop,C_text("\376B\000\000(source- and output-filename are the same"));
lf[406]=C_h_intern(&lf[406],12, C_text("include-path"));
lf[407]=C_h_intern(&lf[407],11, C_text("r5rs-syntax"));
lf[408]=C_h_intern(&lf[408],26, C_text("chicken.base#symbol-escape"));
lf[409]=C_h_intern(&lf[409],33, C_text("chicken.base#parentheses-synonyms"));
lf[410]=C_h_intern(&lf[410],26, C_text("chicken.base#keyword-style"));
lf[411]=C_h_intern(&lf[411],5, C_text("\000none"));
lf[412]=C_h_intern(&lf[412],27, C_text("chicken.base#case-sensitive"));
lf[413]=C_decode_literal(C_heaptop,C_text("\376B\000\000.Disabled the CHICKEN extensions to R5RS syntax"));
lf[414]=C_h_intern(&lf[414],16, C_text("no-symbol-escape"));
lf[415]=C_decode_literal(C_heaptop,C_text("\376B\000\000$Disabled support for escaped symbols"));
lf[416]=C_h_intern(&lf[416],23, C_text("no-parentheses-synonyms"));
lf[417]=C_decode_literal(C_heaptop,C_text("\376B\000\000)Disabled support for parentheses synonyms"));
lf[418]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006prefix"));
lf[419]=C_h_intern(&lf[419],7, C_text("\000prefix"));
lf[420]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004none"));
lf[421]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006suffix"));
lf[422]=C_h_intern(&lf[422],7, C_text("\000suffix"));
lf[423]=C_decode_literal(C_heaptop,C_text("\376B\000\000+invalid argument to `-keyword-style\047 option"));
lf[424]=C_h_intern(&lf[424],16, C_text("case-insensitive"));
lf[425]=C_decode_literal(C_heaptop,C_text("\376B\000\000,Identifiers and symbols are case insensitive"));
lf[426]=C_decode_literal(C_heaptop,C_text("\376B\000\0000invalid argument to `-inline-limit\047 option: `~A\047"));
lf[427]=C_h_intern(&lf[427],39, C_text("chicken.compiler.core#local-definitions"));
lf[428]=C_h_intern(&lf[428],6, C_text("inline"));
lf[429]=C_h_intern(&lf[429],30, C_text("emit-external-prototypes-first"));
lf[430]=C_h_intern(&lf[430],43, C_text("chicken.compiler.core#external-protos-first"));
lf[431]=C_h_intern(&lf[431],5, C_text("block"));
lf[432]=C_h_intern(&lf[432],17, C_text("fixnum-arithmetic"));
lf[433]=C_h_intern(&lf[433],36, C_text("chicken.compiler.support#number-type"));
lf[434]=C_h_intern(&lf[434],6, C_text("fixnum"));
lf[435]=C_h_intern(&lf[435],18, C_text("disable-interrupts"));
lf[436]=C_h_intern(&lf[436],10, C_text("setup-mode"));
lf[437]=C_h_intern(&lf[437],14, C_text("\003syssetup-mode"));
lf[438]=C_h_intern(&lf[438],6, C_text("unsafe"));
lf[439]=C_h_intern(&lf[439],22, C_text("optimize-leaf-routines"));
lf[440]=C_h_intern(&lf[440],11, C_text("no-warnings"));
lf[441]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025Warnings are disabled"));
lf[442]=C_h_intern(&lf[442],12, C_text("strict-types"));
lf[443]=C_h_intern(&lf[443],19, C_text("\003sysnotices-enabled"));
lf[444]=C_h_intern(&lf[444],13, C_text("inline-global"));
lf[445]=C_h_intern(&lf[445],5, C_text("local"));
lf[446]=C_h_intern(&lf[446],18, C_text("no-compiler-syntax"));
lf[447]=C_h_intern(&lf[447],45, C_text("chicken.compiler.core#compiler-syntax-enabled"));
lf[448]=C_h_intern(&lf[448],14, C_text("no-lambda-info"));
lf[449]=C_h_intern(&lf[449],39, C_text("chicken.compiler.core#emit-closure-info"));
lf[450]=C_h_intern(&lf[450],3, C_text("raw"));
lf[451]=C_h_intern(&lf[451],1, C_text("b"));
lf[452]=C_h_intern(&lf[452],15, C_text("\003sysstart-timer"));
lf[453]=C_h_intern(&lf[453],25, C_text("emit-all-import-libraries"));
lf[454]=C_h_intern(&lf[454],42, C_text("chicken.compiler.core#all-import-libraries"));
lf[455]=C_h_intern(&lf[455],17, C_text("\003sysstring-append"));
lf[456]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013.import.scm"));
lf[457]=C_h_intern(&lf[457],19, C_text("emit-import-library"));
lf[458]=C_h_intern(&lf[458],44, C_text("chicken.compiler.support#print-debug-options"));
lf[459]=C_h_intern(&lf[459],16, C_text("\003sysstring->list"));
lf[460]=C_h_intern(&lf[460],5, C_text("debug"));
lf[461]=C_h_intern(&lf[461],18, C_text("\003sysdload-disabled"));
lf[462]=C_h_intern(&lf[462],32, C_text("chicken.platform#repository-path"));
lf[463]=C_h_intern(&lf[463],10, C_text("stack-size"));
lf[464]=C_h_intern(&lf[464],54, C_text("chicken.compiler.optimizer#default-optimization-passes"));
lf[465]=C_h_intern(&lf[465],14, C_text("\003syssplit-path"));
lf[466]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[467]=C_h_intern(&lf[467],48, C_text("chicken.process-context#get-environment-variable"));
lf[468]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024CHICKEN_INCLUDE_PATH"));
lf[469]=C_h_intern(&lf[469],9, C_text("to-stdout"));
lf[470]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001c"));
lf[471]=C_h_intern(&lf[471],30, C_text("chicken.pathname#pathname-file"));
lf[472]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003out"));
lf[473]=C_h_intern(&lf[473],32, C_text("chicken.internal#default-imports"));
lf[474]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004uses\376\003\000\000\002\376\001\000\000\017debugger-client\376\377\016\376\377\016"));
lf[475]=C_h_intern(&lf[475],48, C_text("chicken.compiler.c-platform#default-declarations"));
lf[476]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004uses\376\003\000\000\002\376\001\000\000\014eval-modules\376\377\016\376\377\016"));
lf[477]=C_h_intern(&lf[477],39, C_text("chicken.compiler.core#static-extensions"));
lf[478]=C_h_intern(&lf[478],41, C_text("chicken.compiler.c-platform#default-units"));
lf[479]=C_h_intern(&lf[479],6, C_text("static"));
lf[480]=C_h_intern(&lf[480],22, C_text("chicken-compile-static"));
lf[481]=C_h_intern(&lf[481],41, C_text("chicken.compiler.core#initialize-compiler"));
C_register_lf2(lf,482,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2664,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[558] = {
{C_text("f8581:batch_2ddriver_2escm"),(void*)f8581},
{C_text("f9056:batch_2ddriver_2escm"),(void*)f9056},
{C_text("f9062:batch_2ddriver_2escm"),(void*)f9062},
{C_text("f9068:batch_2ddriver_2escm"),(void*)f9068},
{C_text("f9074:batch_2ddriver_2escm"),(void*)f9074},
{C_text("f9080:batch_2ddriver_2escm"),(void*)f9080},
{C_text("f9086:batch_2ddriver_2escm"),(void*)f9086},
{C_text("f9098:batch_2ddriver_2escm"),(void*)f9098},
{C_text("f9106:batch_2ddriver_2escm"),(void*)f9106},
{C_text("f9118:batch_2ddriver_2escm"),(void*)f9118},
{C_text("f9142:batch_2ddriver_2escm"),(void*)f9142},
{C_text("f9148:batch_2ddriver_2escm"),(void*)f9148},
{C_text("f9162:batch_2ddriver_2escm"),(void*)f9162},
{C_text("f9168:batch_2ddriver_2escm"),(void*)f9168},
{C_text("f9174:batch_2ddriver_2escm"),(void*)f9174},
{C_text("f9180:batch_2ddriver_2escm"),(void*)f9180},
{C_text("f9186:batch_2ddriver_2escm"),(void*)f9186},
{C_text("f9200:batch_2ddriver_2escm"),(void*)f9200},
{C_text("f9216:batch_2ddriver_2escm"),(void*)f9216},
{C_text("f9222:batch_2ddriver_2escm"),(void*)f9222},
{C_text("f9228:batch_2ddriver_2escm"),(void*)f9228},
{C_text("f9234:batch_2ddriver_2escm"),(void*)f9234},
{C_text("f9240:batch_2ddriver_2escm"),(void*)f9240},
{C_text("f_2664:batch_2ddriver_2escm"),(void*)f_2664},
{C_text("f_2667:batch_2ddriver_2escm"),(void*)f_2667},
{C_text("f_2670:batch_2ddriver_2escm"),(void*)f_2670},
{C_text("f_2673:batch_2ddriver_2escm"),(void*)f_2673},
{C_text("f_2676:batch_2ddriver_2escm"),(void*)f_2676},
{C_text("f_2679:batch_2ddriver_2escm"),(void*)f_2679},
{C_text("f_2682:batch_2ddriver_2escm"),(void*)f_2682},
{C_text("f_2685:batch_2ddriver_2escm"),(void*)f_2685},
{C_text("f_2688:batch_2ddriver_2escm"),(void*)f_2688},
{C_text("f_2691:batch_2ddriver_2escm"),(void*)f_2691},
{C_text("f_2694:batch_2ddriver_2escm"),(void*)f_2694},
{C_text("f_2697:batch_2ddriver_2escm"),(void*)f_2697},
{C_text("f_2700:batch_2ddriver_2escm"),(void*)f_2700},
{C_text("f_2703:batch_2ddriver_2escm"),(void*)f_2703},
{C_text("f_2706:batch_2ddriver_2escm"),(void*)f_2706},
{C_text("f_2709:batch_2ddriver_2escm"),(void*)f_2709},
{C_text("f_2910:batch_2ddriver_2escm"),(void*)f_2910},
{C_text("f_2925:batch_2ddriver_2escm"),(void*)f_2925},
{C_text("f_2933:batch_2ddriver_2escm"),(void*)f_2933},
{C_text("f_2941:batch_2ddriver_2escm"),(void*)f_2941},
{C_text("f_2952:batch_2ddriver_2escm"),(void*)f_2952},
{C_text("f_2965:batch_2ddriver_2escm"),(void*)f_2965},
{C_text("f_2979:batch_2ddriver_2escm"),(void*)f_2979},
{C_text("f_2983:batch_2ddriver_2escm"),(void*)f_2983},
{C_text("f_2995:batch_2ddriver_2escm"),(void*)f_2995},
{C_text("f_2997:batch_2ddriver_2escm"),(void*)f_2997},
{C_text("f_3044:batch_2ddriver_2escm"),(void*)f_3044},
{C_text("f_3046:batch_2ddriver_2escm"),(void*)f_3046},
{C_text("f_3086:batch_2ddriver_2escm"),(void*)f_3086},
{C_text("f_3108:batch_2ddriver_2escm"),(void*)f_3108},
{C_text("f_3120:batch_2ddriver_2escm"),(void*)f_3120},
{C_text("f_3172:batch_2ddriver_2escm"),(void*)f_3172},
{C_text("f_3178:batch_2ddriver_2escm"),(void*)f_3178},
{C_text("f_3196:batch_2ddriver_2escm"),(void*)f_3196},
{C_text("f_3206:batch_2ddriver_2escm"),(void*)f_3206},
{C_text("f_3233:batch_2ddriver_2escm"),(void*)f_3233},
{C_text("f_3320:batch_2ddriver_2escm"),(void*)f_3320},
{C_text("f_3329:batch_2ddriver_2escm"),(void*)f_3329},
{C_text("f_3337:batch_2ddriver_2escm"),(void*)f_3337},
{C_text("f_3344:batch_2ddriver_2escm"),(void*)f_3344},
{C_text("f_3358:batch_2ddriver_2escm"),(void*)f_3358},
{C_text("f_3419:batch_2ddriver_2escm"),(void*)f_3419},
{C_text("f_3427:batch_2ddriver_2escm"),(void*)f_3427},
{C_text("f_3710:batch_2ddriver_2escm"),(void*)f_3710},
{C_text("f_3716:batch_2ddriver_2escm"),(void*)f_3716},
{C_text("f_3995:batch_2ddriver_2escm"),(void*)f_3995},
{C_text("f_4001:batch_2ddriver_2escm"),(void*)f_4001},
{C_text("f_4008:batch_2ddriver_2escm"),(void*)f_4008},
{C_text("f_4014:batch_2ddriver_2escm"),(void*)f_4014},
{C_text("f_4017:batch_2ddriver_2escm"),(void*)f_4017},
{C_text("f_4020:batch_2ddriver_2escm"),(void*)f_4020},
{C_text("f_4023:batch_2ddriver_2escm"),(void*)f_4023},
{C_text("f_4026:batch_2ddriver_2escm"),(void*)f_4026},
{C_text("f_4032:batch_2ddriver_2escm"),(void*)f_4032},
{C_text("f_4035:batch_2ddriver_2escm"),(void*)f_4035},
{C_text("f_4038:batch_2ddriver_2escm"),(void*)f_4038},
{C_text("f_4044:batch_2ddriver_2escm"),(void*)f_4044},
{C_text("f_4047:batch_2ddriver_2escm"),(void*)f_4047},
{C_text("f_4050:batch_2ddriver_2escm"),(void*)f_4050},
{C_text("f_4056:batch_2ddriver_2escm"),(void*)f_4056},
{C_text("f_4059:batch_2ddriver_2escm"),(void*)f_4059},
{C_text("f_4062:batch_2ddriver_2escm"),(void*)f_4062},
{C_text("f_4068:batch_2ddriver_2escm"),(void*)f_4068},
{C_text("f_4071:batch_2ddriver_2escm"),(void*)f_4071},
{C_text("f_4074:batch_2ddriver_2escm"),(void*)f_4074},
{C_text("f_4080:batch_2ddriver_2escm"),(void*)f_4080},
{C_text("f_4083:batch_2ddriver_2escm"),(void*)f_4083},
{C_text("f_4088:batch_2ddriver_2escm"),(void*)f_4088},
{C_text("f_4092:batch_2ddriver_2escm"),(void*)f_4092},
{C_text("f_4104:batch_2ddriver_2escm"),(void*)f_4104},
{C_text("f_4115:batch_2ddriver_2escm"),(void*)f_4115},
{C_text("f_4128:batch_2ddriver_2escm"),(void*)f_4128},
{C_text("f_4138:batch_2ddriver_2escm"),(void*)f_4138},
{C_text("f_4151:batch_2ddriver_2escm"),(void*)f_4151},
{C_text("f_4161:batch_2ddriver_2escm"),(void*)f_4161},
{C_text("f_4174:batch_2ddriver_2escm"),(void*)f_4174},
{C_text("f_4184:batch_2ddriver_2escm"),(void*)f_4184},
{C_text("f_4197:batch_2ddriver_2escm"),(void*)f_4197},
{C_text("f_4201:batch_2ddriver_2escm"),(void*)f_4201},
{C_text("f_4206:batch_2ddriver_2escm"),(void*)f_4206},
{C_text("f_4216:batch_2ddriver_2escm"),(void*)f_4216},
{C_text("f_4219:batch_2ddriver_2escm"),(void*)f_4219},
{C_text("f_4222:batch_2ddriver_2escm"),(void*)f_4222},
{C_text("f_4225:batch_2ddriver_2escm"),(void*)f_4225},
{C_text("f_4228:batch_2ddriver_2escm"),(void*)f_4228},
{C_text("f_4231:batch_2ddriver_2escm"),(void*)f_4231},
{C_text("f_4245:batch_2ddriver_2escm"),(void*)f_4245},
{C_text("f_4256:batch_2ddriver_2escm"),(void*)f_4256},
{C_text("f_4260:batch_2ddriver_2escm"),(void*)f_4260},
{C_text("f_4268:batch_2ddriver_2escm"),(void*)f_4268},
{C_text("f_4278:batch_2ddriver_2escm"),(void*)f_4278},
{C_text("f_4292:batch_2ddriver_2escm"),(void*)f_4292},
{C_text("f_4298:batch_2ddriver_2escm"),(void*)f_4298},
{C_text("f_4309:batch_2ddriver_2escm"),(void*)f_4309},
{C_text("f_4313:batch_2ddriver_2escm"),(void*)f_4313},
{C_text("f_4319:batch_2ddriver_2escm"),(void*)f_4319},
{C_text("f_4325:batch_2ddriver_2escm"),(void*)f_4325},
{C_text("f_4336:batch_2ddriver_2escm"),(void*)f_4336},
{C_text("f_4340:batch_2ddriver_2escm"),(void*)f_4340},
{C_text("f_4363:batch_2ddriver_2escm"),(void*)f_4363},
{C_text("f_4379:batch_2ddriver_2escm"),(void*)f_4379},
{C_text("f_4388:batch_2ddriver_2escm"),(void*)f_4388},
{C_text("f_4401:batch_2ddriver_2escm"),(void*)f_4401},
{C_text("f_4412:batch_2ddriver_2escm"),(void*)f_4412},
{C_text("f_4418:batch_2ddriver_2escm"),(void*)f_4418},
{C_text("f_4491:batch_2ddriver_2escm"),(void*)f_4491},
{C_text("f_4497:batch_2ddriver_2escm"),(void*)f_4497},
{C_text("f_4500:batch_2ddriver_2escm"),(void*)f_4500},
{C_text("f_4503:batch_2ddriver_2escm"),(void*)f_4503},
{C_text("f_4777:batch_2ddriver_2escm"),(void*)f_4777},
{C_text("f_4779:batch_2ddriver_2escm"),(void*)f_4779},
{C_text("f_4782:batch_2ddriver_2escm"),(void*)f_4782},
{C_text("f_4813:batch_2ddriver_2escm"),(void*)f_4813},
{C_text("f_4826:batch_2ddriver_2escm"),(void*)f_4826},
{C_text("f_4840:batch_2ddriver_2escm"),(void*)f_4840},
{C_text("f_4846:batch_2ddriver_2escm"),(void*)f_4846},
{C_text("f_4852:batch_2ddriver_2escm"),(void*)f_4852},
{C_text("f_4855:batch_2ddriver_2escm"),(void*)f_4855},
{C_text("f_4860:batch_2ddriver_2escm"),(void*)f_4860},
{C_text("f_4880:batch_2ddriver_2escm"),(void*)f_4880},
{C_text("f_4885:batch_2ddriver_2escm"),(void*)f_4885},
{C_text("f_4903:batch_2ddriver_2escm"),(void*)f_4903},
{C_text("f_4907:batch_2ddriver_2escm"),(void*)f_4907},
{C_text("f_4919:batch_2ddriver_2escm"),(void*)f_4919},
{C_text("f_4922:batch_2ddriver_2escm"),(void*)f_4922},
{C_text("f_4925:batch_2ddriver_2escm"),(void*)f_4925},
{C_text("f_4928:batch_2ddriver_2escm"),(void*)f_4928},
{C_text("f_4930:batch_2ddriver_2escm"),(void*)f_4930},
{C_text("f_4937:batch_2ddriver_2escm"),(void*)f_4937},
{C_text("f_4950:batch_2ddriver_2escm"),(void*)f_4950},
{C_text("f_4952:batch_2ddriver_2escm"),(void*)f_4952},
{C_text("f_4959:batch_2ddriver_2escm"),(void*)f_4959},
{C_text("f_4965:batch_2ddriver_2escm"),(void*)f_4965},
{C_text("f_4968:batch_2ddriver_2escm"),(void*)f_4968},
{C_text("f_4971:batch_2ddriver_2escm"),(void*)f_4971},
{C_text("f_4974:batch_2ddriver_2escm"),(void*)f_4974},
{C_text("f_4979:batch_2ddriver_2escm"),(void*)f_4979},
{C_text("f_4986:batch_2ddriver_2escm"),(void*)f_4986},
{C_text("f_4991:batch_2ddriver_2escm"),(void*)f_4991},
{C_text("f_5002:batch_2ddriver_2escm"),(void*)f_5002},
{C_text("f_5012:batch_2ddriver_2escm"),(void*)f_5012},
{C_text("f_5025:batch_2ddriver_2escm"),(void*)f_5025},
{C_text("f_5034:batch_2ddriver_2escm"),(void*)f_5034},
{C_text("f_5062:batch_2ddriver_2escm"),(void*)f_5062},
{C_text("f_5069:batch_2ddriver_2escm"),(void*)f_5069},
{C_text("f_5082:batch_2ddriver_2escm"),(void*)f_5082},
{C_text("f_5087:batch_2ddriver_2escm"),(void*)f_5087},
{C_text("f_5108:batch_2ddriver_2escm"),(void*)f_5108},
{C_text("f_5114:batch_2ddriver_2escm"),(void*)f_5114},
{C_text("f_5122:batch_2ddriver_2escm"),(void*)f_5122},
{C_text("f_5130:batch_2ddriver_2escm"),(void*)f_5130},
{C_text("f_5134:batch_2ddriver_2escm"),(void*)f_5134},
{C_text("f_5143:batch_2ddriver_2escm"),(void*)f_5143},
{C_text("f_5151:batch_2ddriver_2escm"),(void*)f_5151},
{C_text("f_5153:batch_2ddriver_2escm"),(void*)f_5153},
{C_text("f_5163:batch_2ddriver_2escm"),(void*)f_5163},
{C_text("f_5166:batch_2ddriver_2escm"),(void*)f_5166},
{C_text("f_5169:batch_2ddriver_2escm"),(void*)f_5169},
{C_text("f_5172:batch_2ddriver_2escm"),(void*)f_5172},
{C_text("f_5179:batch_2ddriver_2escm"),(void*)f_5179},
{C_text("f_5183:batch_2ddriver_2escm"),(void*)f_5183},
{C_text("f_5188:batch_2ddriver_2escm"),(void*)f_5188},
{C_text("f_5191:batch_2ddriver_2escm"),(void*)f_5191},
{C_text("f_5193:batch_2ddriver_2escm"),(void*)f_5193},
{C_text("f_5197:batch_2ddriver_2escm"),(void*)f_5197},
{C_text("f_5200:batch_2ddriver_2escm"),(void*)f_5200},
{C_text("f_5205:batch_2ddriver_2escm"),(void*)f_5205},
{C_text("f_5211:batch_2ddriver_2escm"),(void*)f_5211},
{C_text("f_5216:batch_2ddriver_2escm"),(void*)f_5216},
{C_text("f_5221:batch_2ddriver_2escm"),(void*)f_5221},
{C_text("f_5257:batch_2ddriver_2escm"),(void*)f_5257},
{C_text("f_5260:batch_2ddriver_2escm"),(void*)f_5260},
{C_text("f_5263:batch_2ddriver_2escm"),(void*)f_5263},
{C_text("f_5270:batch_2ddriver_2escm"),(void*)f_5270},
{C_text("f_5273:batch_2ddriver_2escm"),(void*)f_5273},
{C_text("f_5290:batch_2ddriver_2escm"),(void*)f_5290},
{C_text("f_5294:batch_2ddriver_2escm"),(void*)f_5294},
{C_text("f_5299:batch_2ddriver_2escm"),(void*)f_5299},
{C_text("f_5305:batch_2ddriver_2escm"),(void*)f_5305},
{C_text("f_5308:batch_2ddriver_2escm"),(void*)f_5308},
{C_text("f_5311:batch_2ddriver_2escm"),(void*)f_5311},
{C_text("f_5314:batch_2ddriver_2escm"),(void*)f_5314},
{C_text("f_5317:batch_2ddriver_2escm"),(void*)f_5317},
{C_text("f_5320:batch_2ddriver_2escm"),(void*)f_5320},
{C_text("f_5323:batch_2ddriver_2escm"),(void*)f_5323},
{C_text("f_5326:batch_2ddriver_2escm"),(void*)f_5326},
{C_text("f_5329:batch_2ddriver_2escm"),(void*)f_5329},
{C_text("f_5332:batch_2ddriver_2escm"),(void*)f_5332},
{C_text("f_5335:batch_2ddriver_2escm"),(void*)f_5335},
{C_text("f_5338:batch_2ddriver_2escm"),(void*)f_5338},
{C_text("f_5341:batch_2ddriver_2escm"),(void*)f_5341},
{C_text("f_5344:batch_2ddriver_2escm"),(void*)f_5344},
{C_text("f_5347:batch_2ddriver_2escm"),(void*)f_5347},
{C_text("f_5350:batch_2ddriver_2escm"),(void*)f_5350},
{C_text("f_5353:batch_2ddriver_2escm"),(void*)f_5353},
{C_text("f_5356:batch_2ddriver_2escm"),(void*)f_5356},
{C_text("f_5359:batch_2ddriver_2escm"),(void*)f_5359},
{C_text("f_5362:batch_2ddriver_2escm"),(void*)f_5362},
{C_text("f_5365:batch_2ddriver_2escm"),(void*)f_5365},
{C_text("f_5370:batch_2ddriver_2escm"),(void*)f_5370},
{C_text("f_5375:batch_2ddriver_2escm"),(void*)f_5375},
{C_text("f_5380:batch_2ddriver_2escm"),(void*)f_5380},
{C_text("f_5385:batch_2ddriver_2escm"),(void*)f_5385},
{C_text("f_5388:batch_2ddriver_2escm"),(void*)f_5388},
{C_text("f_5391:batch_2ddriver_2escm"),(void*)f_5391},
{C_text("f_5394:batch_2ddriver_2escm"),(void*)f_5394},
{C_text("f_5397:batch_2ddriver_2escm"),(void*)f_5397},
{C_text("f_5400:batch_2ddriver_2escm"),(void*)f_5400},
{C_text("f_5406:batch_2ddriver_2escm"),(void*)f_5406},
{C_text("f_5409:batch_2ddriver_2escm"),(void*)f_5409},
{C_text("f_5412:batch_2ddriver_2escm"),(void*)f_5412},
{C_text("f_5415:batch_2ddriver_2escm"),(void*)f_5415},
{C_text("f_5418:batch_2ddriver_2escm"),(void*)f_5418},
{C_text("f_5421:batch_2ddriver_2escm"),(void*)f_5421},
{C_text("f_5424:batch_2ddriver_2escm"),(void*)f_5424},
{C_text("f_5427:batch_2ddriver_2escm"),(void*)f_5427},
{C_text("f_5430:batch_2ddriver_2escm"),(void*)f_5430},
{C_text("f_5433:batch_2ddriver_2escm"),(void*)f_5433},
{C_text("f_5439:batch_2ddriver_2escm"),(void*)f_5439},
{C_text("f_5442:batch_2ddriver_2escm"),(void*)f_5442},
{C_text("f_5448:batch_2ddriver_2escm"),(void*)f_5448},
{C_text("f_5455:batch_2ddriver_2escm"),(void*)f_5455},
{C_text("f_5458:batch_2ddriver_2escm"),(void*)f_5458},
{C_text("f_5463:batch_2ddriver_2escm"),(void*)f_5463},
{C_text("f_5466:batch_2ddriver_2escm"),(void*)f_5466},
{C_text("f_5481:batch_2ddriver_2escm"),(void*)f_5481},
{C_text("f_5485:batch_2ddriver_2escm"),(void*)f_5485},
{C_text("f_5493:batch_2ddriver_2escm"),(void*)f_5493},
{C_text("f_5496:batch_2ddriver_2escm"),(void*)f_5496},
{C_text("f_5499:batch_2ddriver_2escm"),(void*)f_5499},
{C_text("f_5503:batch_2ddriver_2escm"),(void*)f_5503},
{C_text("f_5506:batch_2ddriver_2escm"),(void*)f_5506},
{C_text("f_5510:batch_2ddriver_2escm"),(void*)f_5510},
{C_text("f_5514:batch_2ddriver_2escm"),(void*)f_5514},
{C_text("f_5525:batch_2ddriver_2escm"),(void*)f_5525},
{C_text("f_5528:batch_2ddriver_2escm"),(void*)f_5528},
{C_text("f_5531:batch_2ddriver_2escm"),(void*)f_5531},
{C_text("f_5534:batch_2ddriver_2escm"),(void*)f_5534},
{C_text("f_5537:batch_2ddriver_2escm"),(void*)f_5537},
{C_text("f_5540:batch_2ddriver_2escm"),(void*)f_5540},
{C_text("f_5548:batch_2ddriver_2escm"),(void*)f_5548},
{C_text("f_5559:batch_2ddriver_2escm"),(void*)f_5559},
{C_text("f_5570:batch_2ddriver_2escm"),(void*)f_5570},
{C_text("f_5577:batch_2ddriver_2escm"),(void*)f_5577},
{C_text("f_5586:batch_2ddriver_2escm"),(void*)f_5586},
{C_text("f_5589:batch_2ddriver_2escm"),(void*)f_5589},
{C_text("f_5592:batch_2ddriver_2escm"),(void*)f_5592},
{C_text("f_5598:batch_2ddriver_2escm"),(void*)f_5598},
{C_text("f_5601:batch_2ddriver_2escm"),(void*)f_5601},
{C_text("f_5604:batch_2ddriver_2escm"),(void*)f_5604},
{C_text("f_5607:batch_2ddriver_2escm"),(void*)f_5607},
{C_text("f_5610:batch_2ddriver_2escm"),(void*)f_5610},
{C_text("f_5614:batch_2ddriver_2escm"),(void*)f_5614},
{C_text("f_5618:batch_2ddriver_2escm"),(void*)f_5618},
{C_text("f_5621:batch_2ddriver_2escm"),(void*)f_5621},
{C_text("f_5624:batch_2ddriver_2escm"),(void*)f_5624},
{C_text("f_5627:batch_2ddriver_2escm"),(void*)f_5627},
{C_text("f_5630:batch_2ddriver_2escm"),(void*)f_5630},
{C_text("f_5633:batch_2ddriver_2escm"),(void*)f_5633},
{C_text("f_5636:batch_2ddriver_2escm"),(void*)f_5636},
{C_text("f_5639:batch_2ddriver_2escm"),(void*)f_5639},
{C_text("f_5642:batch_2ddriver_2escm"),(void*)f_5642},
{C_text("f_5645:batch_2ddriver_2escm"),(void*)f_5645},
{C_text("f_5649:batch_2ddriver_2escm"),(void*)f_5649},
{C_text("f_5655:batch_2ddriver_2escm"),(void*)f_5655},
{C_text("f_5660:batch_2ddriver_2escm"),(void*)f_5660},
{C_text("f_5666:batch_2ddriver_2escm"),(void*)f_5666},
{C_text("f_5672:batch_2ddriver_2escm"),(void*)f_5672},
{C_text("f_5675:batch_2ddriver_2escm"),(void*)f_5675},
{C_text("f_5681:batch_2ddriver_2escm"),(void*)f_5681},
{C_text("f_5684:batch_2ddriver_2escm"),(void*)f_5684},
{C_text("f_5687:batch_2ddriver_2escm"),(void*)f_5687},
{C_text("f_5690:batch_2ddriver_2escm"),(void*)f_5690},
{C_text("f_5693:batch_2ddriver_2escm"),(void*)f_5693},
{C_text("f_5696:batch_2ddriver_2escm"),(void*)f_5696},
{C_text("f_5699:batch_2ddriver_2escm"),(void*)f_5699},
{C_text("f_5702:batch_2ddriver_2escm"),(void*)f_5702},
{C_text("f_5707:batch_2ddriver_2escm"),(void*)f_5707},
{C_text("f_5710:batch_2ddriver_2escm"),(void*)f_5710},
{C_text("f_5713:batch_2ddriver_2escm"),(void*)f_5713},
{C_text("f_5716:batch_2ddriver_2escm"),(void*)f_5716},
{C_text("f_5719:batch_2ddriver_2escm"),(void*)f_5719},
{C_text("f_5722:batch_2ddriver_2escm"),(void*)f_5722},
{C_text("f_5725:batch_2ddriver_2escm"),(void*)f_5725},
{C_text("f_5728:batch_2ddriver_2escm"),(void*)f_5728},
{C_text("f_5731:batch_2ddriver_2escm"),(void*)f_5731},
{C_text("f_5734:batch_2ddriver_2escm"),(void*)f_5734},
{C_text("f_5737:batch_2ddriver_2escm"),(void*)f_5737},
{C_text("f_5740:batch_2ddriver_2escm"),(void*)f_5740},
{C_text("f_5743:batch_2ddriver_2escm"),(void*)f_5743},
{C_text("f_5746:batch_2ddriver_2escm"),(void*)f_5746},
{C_text("f_5749:batch_2ddriver_2escm"),(void*)f_5749},
{C_text("f_5755:batch_2ddriver_2escm"),(void*)f_5755},
{C_text("f_5758:batch_2ddriver_2escm"),(void*)f_5758},
{C_text("f_5761:batch_2ddriver_2escm"),(void*)f_5761},
{C_text("f_5764:batch_2ddriver_2escm"),(void*)f_5764},
{C_text("f_5767:batch_2ddriver_2escm"),(void*)f_5767},
{C_text("f_5772:batch_2ddriver_2escm"),(void*)f_5772},
{C_text("f_5776:batch_2ddriver_2escm"),(void*)f_5776},
{C_text("f_5779:batch_2ddriver_2escm"),(void*)f_5779},
{C_text("f_5782:batch_2ddriver_2escm"),(void*)f_5782},
{C_text("f_5786:batch_2ddriver_2escm"),(void*)f_5786},
{C_text("f_5789:batch_2ddriver_2escm"),(void*)f_5789},
{C_text("f_5792:batch_2ddriver_2escm"),(void*)f_5792},
{C_text("f_5798:batch_2ddriver_2escm"),(void*)f_5798},
{C_text("f_5801:batch_2ddriver_2escm"),(void*)f_5801},
{C_text("f_5806:batch_2ddriver_2escm"),(void*)f_5806},
{C_text("f_5818:batch_2ddriver_2escm"),(void*)f_5818},
{C_text("f_5822:batch_2ddriver_2escm"),(void*)f_5822},
{C_text("f_5825:batch_2ddriver_2escm"),(void*)f_5825},
{C_text("f_5842:batch_2ddriver_2escm"),(void*)f_5842},
{C_text("f_5856:batch_2ddriver_2escm"),(void*)f_5856},
{C_text("f_5868:batch_2ddriver_2escm"),(void*)f_5868},
{C_text("f_5871:batch_2ddriver_2escm"),(void*)f_5871},
{C_text("f_5874:batch_2ddriver_2escm"),(void*)f_5874},
{C_text("f_5877:batch_2ddriver_2escm"),(void*)f_5877},
{C_text("f_5880:batch_2ddriver_2escm"),(void*)f_5880},
{C_text("f_5883:batch_2ddriver_2escm"),(void*)f_5883},
{C_text("f_5899:batch_2ddriver_2escm"),(void*)f_5899},
{C_text("f_5902:batch_2ddriver_2escm"),(void*)f_5902},
{C_text("f_5905:batch_2ddriver_2escm"),(void*)f_5905},
{C_text("f_5908:batch_2ddriver_2escm"),(void*)f_5908},
{C_text("f_5912:batch_2ddriver_2escm"),(void*)f_5912},
{C_text("f_5915:batch_2ddriver_2escm"),(void*)f_5915},
{C_text("f_5918:batch_2ddriver_2escm"),(void*)f_5918},
{C_text("f_5921:batch_2ddriver_2escm"),(void*)f_5921},
{C_text("f_5924:batch_2ddriver_2escm"),(void*)f_5924},
{C_text("f_5927:batch_2ddriver_2escm"),(void*)f_5927},
{C_text("f_5930:batch_2ddriver_2escm"),(void*)f_5930},
{C_text("f_5935:batch_2ddriver_2escm"),(void*)f_5935},
{C_text("f_5941:batch_2ddriver_2escm"),(void*)f_5941},
{C_text("f_5945:batch_2ddriver_2escm"),(void*)f_5945},
{C_text("f_5948:batch_2ddriver_2escm"),(void*)f_5948},
{C_text("f_5951:batch_2ddriver_2escm"),(void*)f_5951},
{C_text("f_5954:batch_2ddriver_2escm"),(void*)f_5954},
{C_text("f_5957:batch_2ddriver_2escm"),(void*)f_5957},
{C_text("f_5960:batch_2ddriver_2escm"),(void*)f_5960},
{C_text("f_5963:batch_2ddriver_2escm"),(void*)f_5963},
{C_text("f_5966:batch_2ddriver_2escm"),(void*)f_5966},
{C_text("f_5969:batch_2ddriver_2escm"),(void*)f_5969},
{C_text("f_5972:batch_2ddriver_2escm"),(void*)f_5972},
{C_text("f_5985:batch_2ddriver_2escm"),(void*)f_5985},
{C_text("f_5994:batch_2ddriver_2escm"),(void*)f_5994},
{C_text("f_5999:batch_2ddriver_2escm"),(void*)f_5999},
{C_text("f_6017:batch_2ddriver_2escm"),(void*)f_6017},
{C_text("f_6025:batch_2ddriver_2escm"),(void*)f_6025},
{C_text("f_6031:batch_2ddriver_2escm"),(void*)f_6031},
{C_text("f_6034:batch_2ddriver_2escm"),(void*)f_6034},
{C_text("f_6037:batch_2ddriver_2escm"),(void*)f_6037},
{C_text("f_6049:batch_2ddriver_2escm"),(void*)f_6049},
{C_text("f_6052:batch_2ddriver_2escm"),(void*)f_6052},
{C_text("f_6055:batch_2ddriver_2escm"),(void*)f_6055},
{C_text("f_6061:batch_2ddriver_2escm"),(void*)f_6061},
{C_text("f_6093:batch_2ddriver_2escm"),(void*)f_6093},
{C_text("f_6099:batch_2ddriver_2escm"),(void*)f_6099},
{C_text("f_6104:batch_2ddriver_2escm"),(void*)f_6104},
{C_text("f_6113:batch_2ddriver_2escm"),(void*)f_6113},
{C_text("f_6119:batch_2ddriver_2escm"),(void*)f_6119},
{C_text("f_6128:batch_2ddriver_2escm"),(void*)f_6128},
{C_text("f_6132:batch_2ddriver_2escm"),(void*)f_6132},
{C_text("f_6138:batch_2ddriver_2escm"),(void*)f_6138},
{C_text("f_6141:batch_2ddriver_2escm"),(void*)f_6141},
{C_text("f_6146:batch_2ddriver_2escm"),(void*)f_6146},
{C_text("f_6149:batch_2ddriver_2escm"),(void*)f_6149},
{C_text("f_6152:batch_2ddriver_2escm"),(void*)f_6152},
{C_text("f_6155:batch_2ddriver_2escm"),(void*)f_6155},
{C_text("f_6158:batch_2ddriver_2escm"),(void*)f_6158},
{C_text("f_6161:batch_2ddriver_2escm"),(void*)f_6161},
{C_text("f_6164:batch_2ddriver_2escm"),(void*)f_6164},
{C_text("f_6167:batch_2ddriver_2escm"),(void*)f_6167},
{C_text("f_6173:batch_2ddriver_2escm"),(void*)f_6173},
{C_text("f_6183:batch_2ddriver_2escm"),(void*)f_6183},
{C_text("f_6196:batch_2ddriver_2escm"),(void*)f_6196},
{C_text("f_6206:batch_2ddriver_2escm"),(void*)f_6206},
{C_text("f_6225:batch_2ddriver_2escm"),(void*)f_6225},
{C_text("f_6237:batch_2ddriver_2escm"),(void*)f_6237},
{C_text("f_6248:batch_2ddriver_2escm"),(void*)f_6248},
{C_text("f_6258:batch_2ddriver_2escm"),(void*)f_6258},
{C_text("f_6274:batch_2ddriver_2escm"),(void*)f_6274},
{C_text("f_6280:batch_2ddriver_2escm"),(void*)f_6280},
{C_text("f_6287:batch_2ddriver_2escm"),(void*)f_6287},
{C_text("f_6295:batch_2ddriver_2escm"),(void*)f_6295},
{C_text("f_6305:batch_2ddriver_2escm"),(void*)f_6305},
{C_text("f_6319:batch_2ddriver_2escm"),(void*)f_6319},
{C_text("f_6332:batch_2ddriver_2escm"),(void*)f_6332},
{C_text("f_6334:batch_2ddriver_2escm"),(void*)f_6334},
{C_text("f_6370:batch_2ddriver_2escm"),(void*)f_6370},
{C_text("f_6374:batch_2ddriver_2escm"),(void*)f_6374},
{C_text("f_6378:batch_2ddriver_2escm"),(void*)f_6378},
{C_text("f_6381:batch_2ddriver_2escm"),(void*)f_6381},
{C_text("f_6384:batch_2ddriver_2escm"),(void*)f_6384},
{C_text("f_6394:batch_2ddriver_2escm"),(void*)f_6394},
{C_text("f_6399:batch_2ddriver_2escm"),(void*)f_6399},
{C_text("f_6424:batch_2ddriver_2escm"),(void*)f_6424},
{C_text("f_6439:batch_2ddriver_2escm"),(void*)f_6439},
{C_text("f_6445:batch_2ddriver_2escm"),(void*)f_6445},
{C_text("f_6456:batch_2ddriver_2escm"),(void*)f_6456},
{C_text("f_6460:batch_2ddriver_2escm"),(void*)f_6460},
{C_text("f_6468:batch_2ddriver_2escm"),(void*)f_6468},
{C_text("f_6471:batch_2ddriver_2escm"),(void*)f_6471},
{C_text("f_6474:batch_2ddriver_2escm"),(void*)f_6474},
{C_text("f_6477:batch_2ddriver_2escm"),(void*)f_6477},
{C_text("f_6494:batch_2ddriver_2escm"),(void*)f_6494},
{C_text("f_6504:batch_2ddriver_2escm"),(void*)f_6504},
{C_text("f_6518:batch_2ddriver_2escm"),(void*)f_6518},
{C_text("f_6524:batch_2ddriver_2escm"),(void*)f_6524},
{C_text("f_6537:batch_2ddriver_2escm"),(void*)f_6537},
{C_text("f_6543:batch_2ddriver_2escm"),(void*)f_6543},
{C_text("f_6546:batch_2ddriver_2escm"),(void*)f_6546},
{C_text("f_6549:batch_2ddriver_2escm"),(void*)f_6549},
{C_text("f_6553:batch_2ddriver_2escm"),(void*)f_6553},
{C_text("f_6560:batch_2ddriver_2escm"),(void*)f_6560},
{C_text("f_6562:batch_2ddriver_2escm"),(void*)f_6562},
{C_text("f_6587:batch_2ddriver_2escm"),(void*)f_6587},
{C_text("f_6604:batch_2ddriver_2escm"),(void*)f_6604},
{C_text("f_6610:batch_2ddriver_2escm"),(void*)f_6610},
{C_text("f_6613:batch_2ddriver_2escm"),(void*)f_6613},
{C_text("f_6616:batch_2ddriver_2escm"),(void*)f_6616},
{C_text("f_6619:batch_2ddriver_2escm"),(void*)f_6619},
{C_text("f_6623:batch_2ddriver_2escm"),(void*)f_6623},
{C_text("f_6633:batch_2ddriver_2escm"),(void*)f_6633},
{C_text("f_6635:batch_2ddriver_2escm"),(void*)f_6635},
{C_text("f_6660:batch_2ddriver_2escm"),(void*)f_6660},
{C_text("f_6678:batch_2ddriver_2escm"),(void*)f_6678},
{C_text("f_6680:batch_2ddriver_2escm"),(void*)f_6680},
{C_text("f_6694:batch_2ddriver_2escm"),(void*)f_6694},
{C_text("f_6713:batch_2ddriver_2escm"),(void*)f_6713},
{C_text("f_6715:batch_2ddriver_2escm"),(void*)f_6715},
{C_text("f_6740:batch_2ddriver_2escm"),(void*)f_6740},
{C_text("f_6772:batch_2ddriver_2escm"),(void*)f_6772},
{C_text("f_6787:batch_2ddriver_2escm"),(void*)f_6787},
{C_text("f_6791:batch_2ddriver_2escm"),(void*)f_6791},
{C_text("f_6795:batch_2ddriver_2escm"),(void*)f_6795},
{C_text("f_6821:batch_2ddriver_2escm"),(void*)f_6821},
{C_text("f_6855:batch_2ddriver_2escm"),(void*)f_6855},
{C_text("f_6889:batch_2ddriver_2escm"),(void*)f_6889},
{C_text("f_6914:batch_2ddriver_2escm"),(void*)f_6914},
{C_text("f_6939:batch_2ddriver_2escm"),(void*)f_6939},
{C_text("f_6946:batch_2ddriver_2escm"),(void*)f_6946},
{C_text("f_6956:batch_2ddriver_2escm"),(void*)f_6956},
{C_text("f_6958:batch_2ddriver_2escm"),(void*)f_6958},
{C_text("f_6983:batch_2ddriver_2escm"),(void*)f_6983},
{C_text("f_6993:batch_2ddriver_2escm"),(void*)f_6993},
{C_text("f_6997:batch_2ddriver_2escm"),(void*)f_6997},
{C_text("f_7002:batch_2ddriver_2escm"),(void*)f_7002},
{C_text("f_7013:batch_2ddriver_2escm"),(void*)f_7013},
{C_text("f_7023:batch_2ddriver_2escm"),(void*)f_7023},
{C_text("f_7027:batch_2ddriver_2escm"),(void*)f_7027},
{C_text("f_7037:batch_2ddriver_2escm"),(void*)f_7037},
{C_text("f_7039:batch_2ddriver_2escm"),(void*)f_7039},
{C_text("f_7064:batch_2ddriver_2escm"),(void*)f_7064},
{C_text("f_7073:batch_2ddriver_2escm"),(void*)f_7073},
{C_text("f_7098:batch_2ddriver_2escm"),(void*)f_7098},
{C_text("f_7111:batch_2ddriver_2escm"),(void*)f_7111},
{C_text("f_7114:batch_2ddriver_2escm"),(void*)f_7114},
{C_text("f_7121:batch_2ddriver_2escm"),(void*)f_7121},
{C_text("f_7126:batch_2ddriver_2escm"),(void*)f_7126},
{C_text("f_7132:batch_2ddriver_2escm"),(void*)f_7132},
{C_text("f_7136:batch_2ddriver_2escm"),(void*)f_7136},
{C_text("f_7154:batch_2ddriver_2escm"),(void*)f_7154},
{C_text("f_7161:batch_2ddriver_2escm"),(void*)f_7161},
{C_text("f_7169:batch_2ddriver_2escm"),(void*)f_7169},
{C_text("f_7187:batch_2ddriver_2escm"),(void*)f_7187},
{C_text("f_7193:batch_2ddriver_2escm"),(void*)f_7193},
{C_text("f_7242:batch_2ddriver_2escm"),(void*)f_7242},
{C_text("f_7249:batch_2ddriver_2escm"),(void*)f_7249},
{C_text("f_7265:batch_2ddriver_2escm"),(void*)f_7265},
{C_text("f_7268:batch_2ddriver_2escm"),(void*)f_7268},
{C_text("f_7274:batch_2ddriver_2escm"),(void*)f_7274},
{C_text("f_7276:batch_2ddriver_2escm"),(void*)f_7276},
{C_text("f_7301:batch_2ddriver_2escm"),(void*)f_7301},
{C_text("f_7325:batch_2ddriver_2escm"),(void*)f_7325},
{C_text("f_7332:batch_2ddriver_2escm"),(void*)f_7332},
{C_text("f_7337:batch_2ddriver_2escm"),(void*)f_7337},
{C_text("f_7362:batch_2ddriver_2escm"),(void*)f_7362},
{C_text("f_7373:batch_2ddriver_2escm"),(void*)f_7373},
{C_text("f_7375:batch_2ddriver_2escm"),(void*)f_7375},
{C_text("f_7385:batch_2ddriver_2escm"),(void*)f_7385},
{C_text("f_7398:batch_2ddriver_2escm"),(void*)f_7398},
{C_text("f_7408:batch_2ddriver_2escm"),(void*)f_7408},
{C_text("f_7421:batch_2ddriver_2escm"),(void*)f_7421},
{C_text("f_7429:batch_2ddriver_2escm"),(void*)f_7429},
{C_text("f_7431:batch_2ddriver_2escm"),(void*)f_7431},
{C_text("f_7441:batch_2ddriver_2escm"),(void*)f_7441},
{C_text("f_7454:batch_2ddriver_2escm"),(void*)f_7454},
{C_text("f_7462:batch_2ddriver_2escm"),(void*)f_7462},
{C_text("f_7475:batch_2ddriver_2escm"),(void*)f_7475},
{C_text("f_7484:batch_2ddriver_2escm"),(void*)f_7484},
{C_text("f_7489:batch_2ddriver_2escm"),(void*)f_7489},
{C_text("f_7500:batch_2ddriver_2escm"),(void*)f_7500},
{C_text("f_7510:batch_2ddriver_2escm"),(void*)f_7510},
{C_text("f_7523:batch_2ddriver_2escm"),(void*)f_7523},
{C_text("f_7533:batch_2ddriver_2escm"),(void*)f_7533},
{C_text("f_7578:batch_2ddriver_2escm"),(void*)f_7578},
{C_text("f_7584:batch_2ddriver_2escm"),(void*)f_7584},
{C_text("f_7586:batch_2ddriver_2escm"),(void*)f_7586},
{C_text("f_7611:batch_2ddriver_2escm"),(void*)f_7611},
{C_text("f_7623:batch_2ddriver_2escm"),(void*)f_7623},
{C_text("f_7626:batch_2ddriver_2escm"),(void*)f_7626},
{C_text("f_7629:batch_2ddriver_2escm"),(void*)f_7629},
{C_text("f_7632:batch_2ddriver_2escm"),(void*)f_7632},
{C_text("f_7640:batch_2ddriver_2escm"),(void*)f_7640},
{C_text("f_7648:batch_2ddriver_2escm"),(void*)f_7648},
{C_text("f_7654:batch_2ddriver_2escm"),(void*)f_7654},
{C_text("f_7687:batch_2ddriver_2escm"),(void*)f_7687},
{C_text("f_7690:batch_2ddriver_2escm"),(void*)f_7690},
{C_text("f_7697:batch_2ddriver_2escm"),(void*)f_7697},
{C_text("f_7700:batch_2ddriver_2escm"),(void*)f_7700},
{C_text("f_7703:batch_2ddriver_2escm"),(void*)f_7703},
{C_text("f_7710:batch_2ddriver_2escm"),(void*)f_7710},
{C_text("f_7716:batch_2ddriver_2escm"),(void*)f_7716},
{C_text("f_7720:batch_2ddriver_2escm"),(void*)f_7720},
{C_text("f_7749:batch_2ddriver_2escm"),(void*)f_7749},
{C_text("f_7796:batch_2ddriver_2escm"),(void*)f_7796},
{C_text("f_7821:batch_2ddriver_2escm"),(void*)f_7821},
{C_text("f_7834:batch_2ddriver_2escm"),(void*)f_7834},
{C_text("f_7839:batch_2ddriver_2escm"),(void*)f_7839},
{C_text("f_7855:batch_2ddriver_2escm"),(void*)f_7855},
{C_text("f_7860:batch_2ddriver_2escm"),(void*)f_7860},
{C_text("f_7885:batch_2ddriver_2escm"),(void*)f_7885},
{C_text("f_7896:batch_2ddriver_2escm"),(void*)f_7896},
{C_text("f_7910:batch_2ddriver_2escm"),(void*)f_7910},
{C_text("f_7914:batch_2ddriver_2escm"),(void*)f_7914},
{C_text("f_7931:batch_2ddriver_2escm"),(void*)f_7931},
{C_text("f_7956:batch_2ddriver_2escm"),(void*)f_7956},
{C_text("f_7967:batch_2ddriver_2escm"),(void*)f_7967},
{C_text("f_7971:batch_2ddriver_2escm"),(void*)f_7971},
{C_text("f_7975:batch_2ddriver_2escm"),(void*)f_7975},
{C_text("f_7999:batch_2ddriver_2escm"),(void*)f_7999},
{C_text("f_8010:batch_2ddriver_2escm"),(void*)f_8010},
{C_text("f_8029:batch_2ddriver_2escm"),(void*)f_8029},
{C_text("f_8037:batch_2ddriver_2escm"),(void*)f_8037},
{C_text("f_8044:batch_2ddriver_2escm"),(void*)f_8044},
{C_text("toplevel:batch_2ddriver_2escm"),(void*)C_batch_2ddriver_toplevel},
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
o|hiding unexported module binding: chicken.compiler.batch-driver#partition 
o|hiding unexported module binding: chicken.compiler.batch-driver#span 
o|hiding unexported module binding: chicken.compiler.batch-driver#take 
o|hiding unexported module binding: chicken.compiler.batch-driver#drop 
o|hiding unexported module binding: chicken.compiler.batch-driver#split-at 
o|hiding unexported module binding: chicken.compiler.batch-driver#append-map 
o|hiding unexported module binding: chicken.compiler.batch-driver#every 
o|hiding unexported module binding: chicken.compiler.batch-driver#any 
o|hiding unexported module binding: chicken.compiler.batch-driver#cons* 
o|hiding unexported module binding: chicken.compiler.batch-driver#concatenate 
o|hiding unexported module binding: chicken.compiler.batch-driver#delete 
o|hiding unexported module binding: chicken.compiler.batch-driver#first 
o|hiding unexported module binding: chicken.compiler.batch-driver#second 
o|hiding unexported module binding: chicken.compiler.batch-driver#third 
o|hiding unexported module binding: chicken.compiler.batch-driver#fourth 
o|hiding unexported module binding: chicken.compiler.batch-driver#fifth 
o|hiding unexported module binding: chicken.compiler.batch-driver#delete-duplicates 
o|hiding unexported module binding: chicken.compiler.batch-driver#alist-cons 
o|hiding unexported module binding: chicken.compiler.batch-driver#filter 
o|hiding unexported module binding: chicken.compiler.batch-driver#filter-map 
o|hiding unexported module binding: chicken.compiler.batch-driver#remove 
o|hiding unexported module binding: chicken.compiler.batch-driver#unzip1 
o|hiding unexported module binding: chicken.compiler.batch-driver#last 
o|hiding unexported module binding: chicken.compiler.batch-driver#list-index 
o|hiding unexported module binding: chicken.compiler.batch-driver#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.compiler.batch-driver#lset-difference/eq? 
o|hiding unexported module binding: chicken.compiler.batch-driver#lset-union/eq? 
o|hiding unexported module binding: chicken.compiler.batch-driver#lset-intersection/eq? 
o|hiding unexported module binding: chicken.compiler.batch-driver#list-tabulate 
o|hiding unexported module binding: chicken.compiler.batch-driver#lset<=/eq? 
o|hiding unexported module binding: chicken.compiler.batch-driver#lset=/eq? 
o|hiding unexported module binding: chicken.compiler.batch-driver#length+ 
o|hiding unexported module binding: chicken.compiler.batch-driver#find 
o|hiding unexported module binding: chicken.compiler.batch-driver#find-tail 
o|hiding unexported module binding: chicken.compiler.batch-driver#iota 
o|hiding unexported module binding: chicken.compiler.batch-driver#make-list 
o|hiding unexported module binding: chicken.compiler.batch-driver#posq 
o|hiding unexported module binding: chicken.compiler.batch-driver#posv 
o|hiding unexported module binding: chicken.compiler.batch-driver#print-program-statistics 
o|hiding unexported module binding: chicken.compiler.batch-driver#initialize-analysis-database 
o|hiding unexported module binding: chicken.compiler.batch-driver#display-analysis-database 
S|applied compiler syntax:
S|  sprintf		2
S|  for-each		15
S|  printf		17
S|  foldl		3
S|  map		20
S|  foldr		3
o|eliminated procedure checks: 192 
o|specializations:
o|  1 (scheme#current-output-port)
o|  1 (scheme#> * *)
o|  5 (chicken.base#add1 *)
o|  2 (scheme#string=? string string)
o|  1 (scheme#string-append string string)
o|  2 (scheme#- * *)
o|  2 (scheme#* * *)
o|  1 (scheme#* fixnum fixnum)
o|  4 (scheme#eqv? (or eof null fixnum char boolean symbol) *)
o|  1 (scheme#< fixnum fixnum)
o|  1 (scheme#- fixnum fixnum)
o|  65 (scheme#memq * list)
o|  36 (scheme#eqv? * (or eof null fixnum char boolean symbol))
o|  19 (##sys#check-output-port * * *)
o|  1 (scheme#eqv? * *)
o|  6 (##sys#check-list (or pair list) *)
o|  27 (scheme#cdr pair)
o|  10 (scheme#car pair)
(o e)|safe calls: 670 
(o e)|assignments to immediate values: 5 
o|safe globals: (chicken.compiler.batch-driver#compile-source-file chicken.compiler.batch-driver#display-analysis-database chicken.compiler.batch-driver#initialize-analysis-database chicken.compiler.batch-driver#print-program-statistics chicken.compiler.batch-driver#posv chicken.compiler.batch-driver#posq chicken.compiler.batch-driver#make-list chicken.compiler.batch-driver#iota chicken.compiler.batch-driver#find-tail chicken.compiler.batch-driver#find chicken.compiler.batch-driver#length+ chicken.compiler.batch-driver#lset=/eq? chicken.compiler.batch-driver#lset<=/eq? chicken.compiler.batch-driver#list-tabulate chicken.compiler.batch-driver#lset-intersection/eq? chicken.compiler.batch-driver#lset-union/eq? chicken.compiler.batch-driver#lset-difference/eq? chicken.compiler.batch-driver#lset-adjoin/eq? chicken.compiler.batch-driver#list-index chicken.compiler.batch-driver#last chicken.compiler.batch-driver#unzip1 chicken.compiler.batch-driver#remove chicken.compiler.batch-driver#filter-map chicken.compiler.batch-driver#filter chicken.compiler.batch-driver#alist-cons chicken.compiler.batch-driver#delete-duplicates chicken.compiler.batch-driver#fifth chicken.compiler.batch-driver#fourth chicken.compiler.batch-driver#third chicken.compiler.batch-driver#second chicken.compiler.batch-driver#first chicken.compiler.batch-driver#delete chicken.compiler.batch-driver#concatenate chicken.compiler.batch-driver#cons* chicken.compiler.batch-driver#any chicken.compiler.batch-driver#every chicken.compiler.batch-driver#append-map chicken.compiler.batch-driver#split-at chicken.compiler.batch-driver#drop chicken.compiler.batch-driver#take chicken.compiler.batch-driver#span chicken.compiler.batch-driver#partition) 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#partition 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#span 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#drop 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#split-at 
o|merged explicitly consed rest parameter: lsts237 
o|inlining procedure: k2912 
o|inlining procedure: k2927 
o|inlining procedure: k2927 
o|inlining procedure: k2912 
o|inlining procedure: k2967 
o|inlining procedure: k2967 
o|inlining procedure: k2999 
o|contracted procedure: "(mini-srfi-1.scm:77) g290299" 
o|inlining procedure: k2999 
o|inlining procedure: k3048 
o|contracted procedure: "(mini-srfi-1.scm:76) g263272" 
o|inlining procedure: k3048 
o|inlining procedure: k3091 
o|inlining procedure: k3091 
o|inlining procedure: k3122 
o|inlining procedure: k3122 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#cons* 
o|inlining procedure: k3180 
o|inlining procedure: k3180 
o|inlining procedure: k3208 
o|inlining procedure: k3208 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#second 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#third 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#fourth 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#fifth 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#delete-duplicates 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#alist-cons 
o|inlining procedure: k3339 
o|inlining procedure: k3339 
o|inlining procedure: k3331 
o|inlining procedure: k3331 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#filter-map 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#unzip1 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#last 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#list-index 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#lset-union/eq? 
o|inlining procedure: k3730 
o|inlining procedure: k3730 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#length+ 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#find 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#find-tail 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#iota 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#make-list 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#posq 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#posv 
o|inlining procedure: k4090 
o|inlining procedure: k4130 
o|contracted procedure: "(batch-driver.scm:97) g776783" 
o|inlining procedure: k4130 
o|propagated global variable: g782784 chicken.compiler.core#internal-bindings 
o|inlining procedure: k4153 
o|contracted procedure: "(batch-driver.scm:93) g758765" 
o|inlining procedure: k4153 
o|propagated global variable: g764766 chicken.compiler.core#extended-bindings 
o|inlining procedure: k4176 
o|contracted procedure: "(batch-driver.scm:89) g740747" 
o|inlining procedure: k4176 
o|propagated global variable: g746748 chicken.compiler.core#standard-bindings 
o|inlining procedure: k4090 
o|inlining procedure: k4208 
o|inlining procedure: k4208 
o|inlining procedure: k4270 
o|contracted procedure: "(batch-driver.scm:164) g946953" 
o|propagated global variable: out956959 ##sys#standard-output 
o|substituted constant variable: a4241 
o|substituted constant variable: a4242 
o|propagated global variable: out956959 ##sys#standard-output 
o|inlining procedure: k4270 
o|propagated global variable: out930933 ##sys#standard-output 
o|substituted constant variable: a4294 
o|substituted constant variable: a4295 
o|propagated global variable: out930933 ##sys#standard-output 
o|propagated global variable: out937940 ##sys#standard-output 
o|substituted constant variable: a4321 
o|substituted constant variable: a4322 
o|inlining procedure: k4314 
o|propagated global variable: out937940 ##sys#standard-output 
o|inlining procedure: k4314 
o|propagated global variable: out919922 ##sys#standard-output 
o|substituted constant variable: a4359 
o|substituted constant variable: a4360 
o|propagated global variable: out919922 ##sys#standard-output 
o|propagated global variable: out913916 ##sys#standard-output 
o|substituted constant variable: a4375 
o|substituted constant variable: a4376 
o|propagated global variable: out913916 ##sys#standard-output 
o|inlining procedure: k4390 
o|propagated global variable: out873876 ##sys#standard-output 
o|substituted constant variable: a4414 
o|substituted constant variable: a4415 
o|substituted constant variable: names795 
o|propagated global variable: out873876 ##sys#standard-output 
o|inlining procedure: k4434 
o|inlining procedure: k4434 
o|inlining procedure: k4447 
o|inlining procedure: k4447 
o|inlining procedure: k4457 
o|inlining procedure: k4457 
o|propagated global variable: out903906 ##sys#standard-output 
o|substituted constant variable: a4493 
o|substituted constant variable: a4494 
o|inlining procedure: k4483 
o|propagated global variable: out903906 ##sys#standard-output 
o|inlining procedure: k4483 
o|inlining procedure: k4525 
o|inlining procedure: k4525 
o|substituted constant variable: a4541 
o|substituted constant variable: a4543 
o|inlining procedure: k4547 
o|inlining procedure: k4547 
o|inlining procedure: k4559 
o|inlining procedure: k4559 
o|inlining procedure: k4571 
o|inlining procedure: k4571 
o|inlining procedure: k4583 
o|inlining procedure: k4583 
o|substituted constant variable: a4590 
o|substituted constant variable: a4592 
o|substituted constant variable: a4594 
o|substituted constant variable: a4596 
o|substituted constant variable: a4598 
o|substituted constant variable: a4600 
o|substituted constant variable: a4602 
o|substituted constant variable: a4604 
o|substituted constant variable: a4606 
o|substituted constant variable: a4608 
o|substituted constant variable: a4610 
o|substituted constant variable: a4612 
o|substituted constant variable: a4614 
o|inlining procedure: k4618 
o|inlining procedure: k4618 
o|inlining procedure: k4630 
o|inlining procedure: k4630 
o|inlining procedure: k4642 
o|inlining procedure: k4642 
o|inlining procedure: k4654 
o|inlining procedure: k4654 
o|inlining procedure: k4666 
o|inlining procedure: k4666 
o|inlining procedure: k4678 
o|inlining procedure: k4678 
o|inlining procedure: k4690 
o|inlining procedure: k4690 
o|inlining procedure: k4702 
o|inlining procedure: k4702 
o|inlining procedure: k4714 
o|inlining procedure: k4714 
o|inlining procedure: k4726 
o|inlining procedure: k4726 
o|substituted constant variable: a4733 
o|substituted constant variable: a4735 
o|substituted constant variable: a4737 
o|substituted constant variable: a4739 
o|substituted constant variable: a4741 
o|substituted constant variable: a4743 
o|substituted constant variable: a4745 
o|substituted constant variable: a4747 
o|substituted constant variable: a4749 
o|substituted constant variable: a4751 
o|substituted constant variable: a4753 
o|substituted constant variable: a4755 
o|substituted constant variable: a4757 
o|substituted constant variable: a4759 
o|substituted constant variable: a4761 
o|substituted constant variable: a4763 
o|substituted constant variable: a4765 
o|substituted constant variable: a4767 
o|substituted constant variable: a4769 
o|substituted constant variable: a4771 
o|substituted constant variable: a4773 
o|inlining procedure: k4390 
o|inlining procedure: k4784 
o|inlining procedure: k4784 
o|substituted constant variable: a4815 
o|substituted constant variable: a4818 
o|substituted constant variable: a4827 
o|substituted constant variable: a4829 
o|substituted constant variable: a4834 
o|substituted constant variable: a4836 
o|substituted constant variable: a4856 
o|substituted constant variable: a4861 
o|substituted constant variable: a4866 
o|substituted constant variable: a4868 
o|substituted constant variable: a4870 
o|substituted constant variable: a4872 
o|substituted constant variable: a4874 
o|substituted constant variable: a4876 
o|substituted constant variable: a4881 
o|merged explicitly consed rest parameter: args1113 
o|propagated global variable: out11171120 ##sys#standard-output 
o|substituted constant variable: a4915 
o|substituted constant variable: a4916 
o|inlining procedure: k4908 
o|propagated global variable: out11171120 ##sys#standard-output 
o|inlining procedure: k4908 
o|inlining procedure: k4932 
o|inlining procedure: k4932 
o|propagated global variable: out11341137 ##sys#standard-output 
o|substituted constant variable: a4961 
o|substituted constant variable: a4962 
o|inlining procedure: k4954 
o|propagated global variable: out11341137 ##sys#standard-output 
o|inlining procedure: k4954 
o|inlining procedure: k4981 
o|inlining procedure: k5004 
o|contracted procedure: "(batch-driver.scm:275) g11491156" 
o|inlining procedure: k5004 
o|inlining procedure: k4981 
o|substituted constant variable: a5031 
o|inlining procedure: k5035 
o|inlining procedure: k5035 
o|substituted constant variable: a5064 
o|substituted constant variable: a5065 
o|inlining procedure: k5050 
o|inlining procedure: k5050 
o|substituted constant variable: a5083 
o|substituted constant variable: a5095 
o|substituted constant variable: a5097 
o|substituted constant variable: a5102 
o|substituted constant variable: a5104 
o|substituted constant variable: a5106 
o|inlining procedure: k5119 
o|inlining procedure: k5119 
o|inlining procedure: k5145 
o|inlining procedure: "(batch-driver.scm:298) cputime1073" 
o|inlining procedure: k5145 
o|propagated global variable: out11971200 ##sys#standard-output 
o|substituted constant variable: a5159 
o|substituted constant variable: a5160 
o|inlining procedure: k5155 
o|inlining procedure: "(batch-driver.scm:304) cputime1073" 
o|propagated global variable: out11971200 ##sys#standard-output 
o|inlining procedure: k5155 
o|merged explicitly consed rest parameter: args1208 
o|inlining procedure: k5198 
o|propagated global variable: g12331234 chicken.compiler.support#db-get 
o|propagated global variable: g12471248 chicken.compiler.support#db-put! 
o|inlining procedure: k5198 
o|inlining procedure: k5226 
o|inlining procedure: k5226 
o|substituted constant variable: a5265 
o|substituted constant variable: a5366 
o|substituted constant variable: a5371 
o|substituted constant variable: a5376 
o|substituted constant variable: a5381 
o|substituted constant variable: a5520 
o|substituted constant variable: a5544 
o|inlining procedure: k5541 
o|inlining procedure: k5541 
o|substituted constant variable: a5555 
o|substituted constant variable: a5566 
o|inlining procedure: k5563 
o|inlining procedure: k5563 
o|inlining procedure: k5793 
o|inlining procedure: k5808 
o|inlining procedure: k5808 
o|inlining procedure: k5826 
o|inlining procedure: k5826 
o|inlining procedure: k5848 
o|inlining procedure: k5848 
o|consed rest parameter at call site: "(batch-driver.scm:786) analyze1083" 3 
o|inlining procedure: k5793 
o|consed rest parameter at call site: "(batch-driver.scm:851) dribble1074" 2 
o|consed rest parameter at call site: "(batch-driver.scm:842) dribble1074" 2 
o|propagated global variable: g21322133 chicken.pretty-print#pp 
o|consed rest parameter at call site: "(batch-driver.scm:835) dribble1074" 2 
o|substituted constant variable: a6019 
o|inlining procedure: "(batch-driver.scm:822) cputime1073" 
o|consed rest parameter at call site: "(batch-driver.scm:812) dribble1074" 2 
o|contracted procedure: "(batch-driver.scm:760) chicken.compiler.batch-driver#print-program-statistics" 
o|propagated global variable: out686689 ##sys#standard-output 
o|substituted constant variable: a4010 
o|substituted constant variable: a4011 
o|propagated global variable: out695698 ##sys#standard-output 
o|substituted constant variable: a4028 
o|substituted constant variable: a4029 
o|propagated global variable: out702705 ##sys#standard-output 
o|substituted constant variable: a4040 
o|substituted constant variable: a4041 
o|propagated global variable: out709712 ##sys#standard-output 
o|substituted constant variable: a4052 
o|substituted constant variable: a4053 
o|propagated global variable: out716719 ##sys#standard-output 
o|substituted constant variable: a4064 
o|substituted constant variable: a4065 
o|propagated global variable: out723726 ##sys#standard-output 
o|substituted constant variable: a4076 
o|substituted constant variable: a4077 
o|inlining procedure: k4003 
o|propagated global variable: out723726 ##sys#standard-output 
o|propagated global variable: out716719 ##sys#standard-output 
o|propagated global variable: out709712 ##sys#standard-output 
o|propagated global variable: out702705 ##sys#standard-output 
o|propagated global variable: out695698 ##sys#standard-output 
o|propagated global variable: out686689 ##sys#standard-output 
o|inlining procedure: k4003 
o|inlining procedure: k6056 
o|consed rest parameter at call site: "(batch-driver.scm:753) dribble1074" 2 
o|inlining procedure: k6056 
o|consed rest parameter at call site: "(batch-driver.scm:743) analyze1083" 3 
o|contracted procedure: "(batch-driver.scm:727) chicken.compiler.batch-driver#first" 
o|inlining procedure: k6165 
o|inlining procedure: k6165 
o|consed rest parameter at call site: "(batch-driver.scm:708) analyze1083" 3 
o|inlining procedure: k6175 
o|contracted procedure: "(batch-driver.scm:700) g20512058" 
o|inlining procedure: k6175 
o|inlining procedure: k6198 
o|contracted procedure: "(batch-driver.scm:695) g20302037" 
o|inlining procedure: k6105 
o|inlining procedure: k6105 
o|inlining procedure: k6198 
o|substituted constant variable: a6218 
o|inlining procedure: k6220 
o|inlining procedure: k6220 
o|consed rest parameter at call site: "(batch-driver.scm:684) dribble1074" 2 
o|inlining procedure: k6250 
o|inlining procedure: k6250 
o|inlining procedure: k6275 
o|consed rest parameter at call site: "(batch-driver.scm:676) dribble1074" 2 
o|inlining procedure: k6275 
o|inlining procedure: k6297 
o|inlining procedure: k6297 
o|inlining procedure: k6336 
o|inlining procedure: k6336 
o|inlining procedure: k6401 
o|inlining procedure: k6401 
o|consed rest parameter at call site: "(batch-driver.scm:653) dribble1074" 2 
o|substituted constant variable: a6432 
o|inlining procedure: k6496 
o|contracted procedure: "(batch-driver.scm:634) g18971904" 
o|propagated global variable: out19071910 ##sys#standard-output 
o|substituted constant variable: a6464 
o|substituted constant variable: a6465 
o|propagated global variable: out19071910 ##sys#standard-output 
o|inlining procedure: k6496 
o|propagated global variable: g19031905 chicken.compiler.compiler-syntax#compiler-syntax-statistics 
o|inlining procedure: k6519 
o|substituted constant variable: a6539 
o|substituted constant variable: a6540 
o|inlining procedure: k6564 
o|inlining procedure: k6564 
o|substituted constant variable: a6606 
o|substituted constant variable: a6607 
o|inlining procedure: k6637 
o|inlining procedure: k6637 
o|inlining procedure: k6669 
o|inlining procedure: k6669 
o|contracted procedure: "(batch-driver.scm:619) chicken.compiler.batch-driver#lset-intersection/eq?" 
o|inlining procedure: k6519 
o|propagated global variable: g18121813 chicken.load#find-dynamic-extension 
o|contracted procedure: "(batch-driver.scm:618) chicken.compiler.batch-driver#remove" 
o|inlining procedure: k6717 
o|contracted procedure: "(batch-driver.scm:614) g17851794" 
o|inlining procedure: k6717 
o|propagated global variable: g17911795 chicken.compiler.core#import-libraries 
o|inlining procedure: k6797 
o|inlining procedure: k6797 
o|inlining procedure: k6804 
o|inlining procedure: k6804 
o|inlining procedure: k6823 
o|contracted procedure: "(batch-driver.scm:598) g17481757" 
o|inlining procedure: k6823 
o|propagated global variable: g17541758 chicken.compiler.core#used-units 
o|inlining procedure: k6857 
o|contracted procedure: "(batch-driver.scm:597) g17181727" 
o|inlining procedure: k6857 
o|propagated global variable: g17241728 chicken.compiler.core#immutable-constants 
o|inlining procedure: k6891 
o|inlining procedure: k6891 
o|inlining procedure: k6960 
o|inlining procedure: k6960 
o|consed rest parameter at call site: "(batch-driver.scm:581) dribble1074" 2 
o|consed rest parameter at call site: "(batch-driver.scm:558) dribble1074" 2 
o|inlining procedure: k7004 
o|inlining procedure: k7041 
o|inlining procedure: k7041 
o|inlining procedure: k7075 
o|inlining procedure: k7075 
o|inlining procedure: k7004 
o|inlining procedure: k7137 
o|inlining procedure: k7137 
o|inlining procedure: "(batch-driver.scm:545) cputime1073" 
o|consed rest parameter at call site: "(batch-driver.scm:540) dribble1074" 2 
o|substituted constant variable: a7170 
o|inlining procedure: k7172 
o|substituted constant variable: a7175 
o|inlining procedure: k7172 
o|substituted constant variable: a7180 
o|consed rest parameter at call site: "(batch-driver.scm:519) dribble1074" 2 
o|inlining procedure: k7198 
o|consed rest parameter at call site: "(batch-driver.scm:519) dribble1074" 2 
o|inlining procedure: k7198 
o|consed rest parameter at call site: "(batch-driver.scm:519) dribble1074" 2 
o|inlining procedure: k7202 
o|inlining procedure: k7202 
o|consed rest parameter at call site: "(batch-driver.scm:501) dribble1074" 2 
o|inlining procedure: k7219 
o|consed rest parameter at call site: "(batch-driver.scm:501) dribble1074" 2 
o|inlining procedure: k7219 
o|consed rest parameter at call site: "(batch-driver.scm:501) dribble1074" 2 
o|substituted constant variable: a7222 
o|substituted constant variable: a7234 
o|substituted constant variable: a7250 
o|inlining procedure: k7278 
o|contracted procedure: "(batch-driver.scm:481) g15091518" 
o|inlining procedure: k7278 
o|inlining procedure: k7339 
o|inlining procedure: k7339 
o|consed rest parameter at call site: "(batch-driver.scm:470) chicken.compiler.batch-driver#append-map" 3 
o|inlining procedure: k7377 
o|contracted procedure: "(batch-driver.scm:459) g14521459" 
o|inlining procedure: k5464 
o|inlining procedure: k5464 
o|inlining procedure: k7377 
o|consed rest parameter at call site: "(batch-driver.scm:458) dribble1074" 2 
o|inlining procedure: k7400 
o|inlining procedure: k7400 
o|propagated global variable: g14411442 chicken.string#string-split 
o|consed rest parameter at call site: "(batch-driver.scm:453) chicken.compiler.batch-driver#append-map" 3 
o|inlining procedure: k7433 
o|inlining procedure: k7433 
o|propagated global variable: g14261427 chicken.string#string-split 
o|consed rest parameter at call site: "(batch-driver.scm:450) chicken.compiler.batch-driver#append-map" 3 
o|substituted constant variable: a7469 
o|inlining procedure: k7502 
o|contracted procedure: "(batch-driver.scm:440) g14011408" 
o|inlining procedure: k7502 
o|propagated global variable: g14071409 chicken.compiler.core#default-extended-bindings 
o|inlining procedure: k7525 
o|contracted procedure: "(batch-driver.scm:435) g13821389" 
o|inlining procedure: k7525 
o|propagated global variable: g13881390 chicken.compiler.core#default-standard-bindings 
o|substituted constant variable: a7545 
o|substituted constant variable: a7548 
o|substituted constant variable: a7551 
o|substituted constant variable: a7554 
o|substituted constant variable: a7557 
o|inlining procedure: k7566 
o|inlining procedure: k7566 
o|inlining procedure: k7588 
o|inlining procedure: k7588 
o|substituted constant variable: a7619 
o|consed rest parameter at call site: "(batch-driver.scm:411) dribble1074" 2 
o|substituted constant variable: a7636 
o|consed rest parameter at call site: "(batch-driver.scm:408) dribble1074" 2 
o|substituted constant variable: a7644 
o|consed rest parameter at call site: "(batch-driver.scm:405) dribble1074" 2 
o|inlining procedure: k7655 
o|inlining procedure: k7655 
o|substituted constant variable: a7667 
o|substituted constant variable: a7675 
o|inlining procedure: k7672 
o|inlining procedure: k7672 
o|substituted constant variable: a7683 
o|consed rest parameter at call site: "(batch-driver.scm:394) dribble1074" 2 
o|inlining procedure: k7701 
o|inlining procedure: k7701 
o|substituted constant variable: a7721 
o|substituted constant variable: a7724 
o|substituted constant variable: a7727 
o|substituted constant variable: a7730 
o|substituted constant variable: a7733 
o|substituted constant variable: a7736 
o|substituted constant variable: a7739 
o|substituted constant variable: a7742 
o|substituted constant variable: a7745 
o|consed rest parameter at call site: "(batch-driver.scm:365) dribble1074" 2 
o|substituted constant variable: a7752 
o|substituted constant variable: a7757 
o|substituted constant variable: a7761 
o|substituted constant variable: a7764 
o|substituted constant variable: a7767 
o|substituted constant variable: a7770 
o|substituted constant variable: a7790 
o|inlining procedure: k7786 
o|inlining procedure: k7786 
o|inlining procedure: k7798 
o|contracted procedure: "(batch-driver.scm:335) g12981307" 
o|substituted constant variable: a5296 
o|inlining procedure: k7798 
o|inlining procedure: k7862 
o|contracted procedure: "(batch-driver.scm:327) g12701279" 
o|inlining procedure: k7862 
o|consed rest parameter at call site: "(batch-driver.scm:325) chicken.compiler.batch-driver#append-map" 3 
o|substituted constant variable: a7897 
o|propagated global variable: tmp12571259 chicken.compiler.core#unit-name 
o|inlining procedure: k7903 
o|propagated global variable: tmp12571259 chicken.compiler.core#unit-name 
o|inlining procedure: k7903 
o|substituted constant variable: a7918 
o|substituted constant variable: a7923 
o|inlining procedure: k7925 
o|inlining procedure: k7925 
o|substituted constant variable: a7928 
o|inlining procedure: k7933 
o|inlining procedure: k7933 
o|inlining procedure: k7968 
o|inlining procedure: k7968 
o|inlining procedure: k7976 
o|inlining procedure: k7976 
o|substituted constant variable: a7991 
o|inlining procedure: k7988 
o|inlining procedure: k7988 
o|inlining procedure: k7997 
o|inlining procedure: k7997 
o|inlining procedure: k8016 
o|inlining procedure: k8016 
o|inlining procedure: k8039 
o|inlining procedure: k8039 
o|inlining procedure: k8045 
o|inlining procedure: k8054 
o|inlining procedure: k8054 
o|inlining procedure: k8045 
o|substituted constant variable: a8070 
o|substituted constant variable: a8077 
o|replaced variables: 687 
o|removed binding forms: 522 
o|substituted constant variable: r29288081 
o|substituted constant variable: r29688083 
o|contracted procedure: "(mini-srfi-1.scm:74) chicken.compiler.batch-driver#any" 
o|substituted constant variable: r31238091 
o|substituted constant variable: r31818093 
o|substituted constant variable: r33328100 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#list-tabulate 
o|propagated global variable: out956959 ##sys#standard-output 
o|inlining procedure: k4229 
o|propagated global variable: out930933 ##sys#standard-output 
o|propagated global variable: out937940 ##sys#standard-output 
o|propagated global variable: out919922 ##sys#standard-output 
o|propagated global variable: out913916 ##sys#standard-output 
o|propagated global variable: out873876 ##sys#standard-output 
o|propagated global variable: out903906 ##sys#standard-output 
o|removed side-effect free assignment to unused variable: cputime1073 
o|propagated global variable: out11171120 ##sys#standard-output 
o|substituted constant variable: r49098163 
o|substituted constant variable: r49098164 
o|propagated global variable: out11341137 ##sys#standard-output 
o|substituted constant variable: r51208178 
o|propagated global variable: out11971200 ##sys#standard-output 
o|propagated global variable: out686689 ##sys#standard-output 
o|propagated global variable: out695698 ##sys#standard-output 
o|propagated global variable: out702705 ##sys#standard-output 
o|propagated global variable: out709712 ##sys#standard-output 
o|propagated global variable: out716719 ##sys#standard-output 
o|propagated global variable: out723726 ##sys#standard-output 
o|substituted constant variable: r62768234 
o|propagated global variable: out19071910 ##sys#standard-output 
o|substituted constant variable: r66708248 
o|substituted constant variable: r66708248 
o|inlining procedure: k6669 
o|inlining procedure: k6669 
o|contracted procedure: "(mini-srfi-1.scm:183) chicken.compiler.batch-driver#every" 
o|substituted constant variable: ls1550 
o|substituted constant variable: r65208252 
o|substituted constant variable: r67988257 
o|substituted constant variable: r67988257 
o|inlining procedure: k6804 
o|inlining procedure: k6804 
o|substituted constant variable: r68058261 
o|substituted constant variable: r68058261 
o|substituted constant variable: r71998285 
o|substituted constant variable: r71998285 
o|substituted constant variable: r71998287 
o|substituted constant variable: r71998287 
o|substituted constant variable: r72038289 
o|substituted constant variable: r72038289 
o|substituted constant variable: r72038291 
o|substituted constant variable: r72038291 
o|substituted constant variable: r72208293 
o|substituted constant variable: r72208293 
o|substituted constant variable: r72208295 
o|substituted constant variable: r72208295 
o|contracted procedure: "(batch-driver.scm:465) chicken.compiler.batch-driver#delete" 
o|propagated global variable: lst350 ##sys#features 
o|substituted constant variable: r75678322 
o|substituted constant variable: r77878335 
o|propagated global variable: r79048341 chicken.compiler.core#unit-name 
o|substituted constant variable: r79698351 
o|substituted constant variable: r79698351 
o|substituted constant variable: r79898355 
o|substituted constant variable: r79988359 
o|substituted constant variable: r79988359 
o|substituted constant variable: r80178361 
o|substituted constant variable: r80178361 
o|substituted constant variable: r80408365 
o|substituted constant variable: r80408365 
o|substituted constant variable: r80408367 
o|substituted constant variable: r80408367 
o|substituted constant variable: r80558371 
o|substituted constant variable: r80468372 
o|converted assignments to bindings: (option-arg978) 
o|simplifications: ((let . 1)) 
o|replaced variables: 20 
o|removed binding forms: 838 
o|removed conditional forms: 1 
o|inlining procedure: k4399 
o|inlining procedure: k4399 
o|inlining procedure: k4399 
o|inlining procedure: k4399 
o|inlining procedure: k4399 
o|inlining procedure: k4399 
o|inlining procedure: k4399 
o|inlining procedure: k4399 
o|inlining procedure: k5032 
o|inlining procedure: k5032 
o|inlining procedure: k5967 
o|inlining procedure: k6007 
o|inlining procedure: k6007 
o|substituted constant variable: r68058464 
o|inlining procedure: k7205 
o|inlining procedure: k7560 
o|inlining procedure: k7560 
o|replaced variables: 29 
o|removed binding forms: 82 
o|substituted constant variable: r60088584 
o|substituted constant variable: r66708452 
o|substituted constant variable: r66708454 
o|substituted constant variable: r72068625 
o|substituted constant variable: r75618642 
o|substituted constant variable: r75618643 
o|simplifications: ((let . 1)) 
o|replaced variables: 8 
o|removed binding forms: 41 
o|removed conditional forms: 4 
o|removed binding forms: 14 
o|simplifications: ((if . 8) (##core#call . 395)) 
o|  call simplifications:
o|    scheme#string->list
o|    scheme#string
o|    scheme#string=?	2
o|    scheme#list
o|    scheme#eof-object?
o|    ##sys#cons	11
o|    ##sys#list	10
o|    ##sys#call-with-values	3
o|    scheme#cddr
o|    scheme#string-length
o|    chicken.fixnum#fx<
o|    scheme#string-ref
o|    scheme#cadr	2
o|    scheme#symbol?	2
o|    scheme#memq	15
o|    scheme#cdar	6
o|    scheme#caar	3
o|    scheme#assq
o|    scheme#length	2
o|    scheme#eq?	46
o|    scheme#not	17
o|    scheme#null?	14
o|    scheme#car	12
o|    scheme#apply	2
o|    scheme#cdr	5
o|    scheme#cons	50
o|    ##sys#setslot	19
o|    ##sys#check-list	32
o|    scheme#pair?	42
o|    ##sys#slot	91
o|contracted procedure: k2915 
o|contracted procedure: k2918 
o|contracted procedure: k2930 
o|contracted procedure: k2946 
o|contracted procedure: k2954 
o|contracted procedure: k2961 
o|contracted procedure: k2985 
o|contracted procedure: k3002 
o|contracted procedure: k3024 
o|contracted procedure: k3020 
o|contracted procedure: k3005 
o|contracted procedure: k3008 
o|contracted procedure: k3016 
o|contracted procedure: k3031 
o|contracted procedure: k3039 
o|contracted procedure: k3051 
o|contracted procedure: k3073 
o|contracted procedure: k3069 
o|contracted procedure: k3054 
o|contracted procedure: k3057 
o|contracted procedure: k3065 
o|contracted procedure: k3125 
o|contracted procedure: k3140 
o|contracted procedure: k3128 
o|contracted procedure: k3183 
o|contracted procedure: k3190 
o|contracted procedure: k3322 
o|contracted procedure: k3334 
o|contracted procedure: k3352 
o|contracted procedure: k3360 
o|contracted procedure: k4099 
o|contracted procedure: k4110 
o|contracted procedure: k4121 
o|contracted procedure: k4133 
o|contracted procedure: k4143 
o|contracted procedure: k4147 
o|propagated global variable: g782784 chicken.compiler.core#internal-bindings 
o|contracted procedure: k4156 
o|contracted procedure: k4166 
o|contracted procedure: k4170 
o|propagated global variable: g764766 chicken.compiler.core#extended-bindings 
o|contracted procedure: k4179 
o|contracted procedure: k4189 
o|contracted procedure: k4193 
o|propagated global variable: g746748 chicken.compiler.core#standard-bindings 
o|contracted procedure: k4211 
o|contracted procedure: k4235 
o|contracted procedure: k4261 
o|contracted procedure: k4273 
o|contracted procedure: k4283 
o|contracted procedure: k4287 
o|contracted procedure: k4250 
o|contracted procedure: k4303 
o|contracted procedure: k4330 
o|contracted procedure: k4345 
o|contracted procedure: k4352 
o|contracted procedure: k4355 
o|contracted procedure: k4368 
o|contracted procedure: k4371 
o|contracted procedure: k4384 
o|contracted procedure: k4393 
o|contracted procedure: k4396 
o|contracted procedure: k4407 
o|contracted procedure: k4431 
o|contracted procedure: k4427 
o|contracted procedure: k4423 
o|contracted procedure: k4437 
o|contracted procedure: k4444 
o|contracted procedure: k4450 
o|contracted procedure: k4454 
o|contracted procedure: k4460 
o|contracted procedure: k4466 
o|contracted procedure: k4470 
o|contracted procedure: k4476 
o|contracted procedure: k4480 
o|contracted procedure: k4486 
o|contracted procedure: k4508 
o|contracted procedure: k4512 
o|contracted procedure: k4518 
o|contracted procedure: k4522 
o|contracted procedure: k4528 
o|contracted procedure: k4532 
o|contracted procedure: k4544 
o|contracted procedure: k4550 
o|contracted procedure: k4556 
o|contracted procedure: k4562 
o|contracted procedure: k4568 
o|contracted procedure: k4574 
o|contracted procedure: k4580 
o|contracted procedure: k4615 
o|contracted procedure: k4621 
o|contracted procedure: k4627 
o|contracted procedure: k4633 
o|contracted procedure: k4639 
o|contracted procedure: k4645 
o|contracted procedure: k4651 
o|contracted procedure: k4657 
o|contracted procedure: k4663 
o|contracted procedure: k4669 
o|contracted procedure: k4675 
o|contracted procedure: k4681 
o|contracted procedure: k4687 
o|contracted procedure: k4693 
o|contracted procedure: k4699 
o|contracted procedure: k4705 
o|contracted procedure: k4711 
o|contracted procedure: k4717 
o|contracted procedure: k4723 
o|contracted procedure: k4808 
o|contracted procedure: k4787 
o|contracted procedure: k4795 
o|contracted procedure: k4801 
o|contracted procedure: k4821 
o|contracted procedure: k8004 
o|contracted procedure: k4831 
o|contracted procedure: k4841 
o|contracted procedure: k4847 
o|contracted procedure: k4863 
o|contracted procedure: k4911 
o|contracted procedure: k4995 
o|contracted procedure: k5007 
o|contracted procedure: k5017 
o|contracted procedure: k5021 
o|contracted procedure: k5027 
o|contracted procedure: k5041 
o|contracted procedure: k5047 
o|contracted procedure: k5053 
o|contracted procedure: k5056 
o|contracted procedure: k5073 
o|contracted procedure: k5076 
o|contracted procedure: k5116 
o|contracted procedure: k5136 
o|contracted procedure: k5229 
o|contracted procedure: k5235 
o|contracted procedure: k5242 
o|contracted procedure: k5248 
o|contracted procedure: k5275 
o|contracted procedure: k5279 
o|contracted procedure: k5300 
o|contracted procedure: k5434 
o|contracted procedure: k5443 
o|contracted procedure: k5450 
o|contracted procedure: k5476 
o|contracted procedure: k5487 
o|contracted procedure: k5516 
o|contracted procedure: k5581 
o|contracted procedure: k5646 
o|contracted procedure: k5676 
o|contracted procedure: k5894 
o|contracted procedure: k5837 
o|contracted procedure: k5851 
o|inlining procedure: "(batch-driver.scm:851) dribble1074" 
o|contracted procedure: k5976 
o|inlining procedure: "(batch-driver.scm:851) dribble1074" 
o|inlining procedure: "(batch-driver.scm:842) dribble1074" 
o|inlining procedure: "(batch-driver.scm:835) dribble1074" 
o|contracted procedure: k6020 
o|inlining procedure: "(batch-driver.scm:812) dribble1074" 
o|contracted procedure: k6041 
o|inlining procedure: "(batch-driver.scm:753) dribble1074" 
o|contracted procedure: k6065 
o|contracted procedure: k6071 
o|contracted procedure: k6077 
o|contracted procedure: k6087 
o|contracted procedure: k6094 
o|contracted procedure: k6114 
o|contracted procedure: k6133 
o|contracted procedure: k6178 
o|contracted procedure: k6188 
o|contracted procedure: k6192 
o|contracted procedure: k6201 
o|contracted procedure: k6211 
o|contracted procedure: k6215 
o|contracted procedure: k6229 
o|inlining procedure: "(batch-driver.scm:684) dribble1074" 
o|contracted procedure: k6241 
o|contracted procedure: k6253 
o|contracted procedure: k6263 
o|contracted procedure: k6267 
o|inlining procedure: "(batch-driver.scm:676) dribble1074" 
o|contracted procedure: k6288 
o|contracted procedure: k6300 
o|contracted procedure: k6310 
o|contracted procedure: k6314 
o|contracted procedure: k6324 
o|contracted procedure: k6327 
o|contracted procedure: k6339 
o|contracted procedure: k6361 
o|contracted procedure: k6357 
o|contracted procedure: k6342 
o|contracted procedure: k6345 
o|contracted procedure: k6353 
o|contracted procedure: k6386 
o|contracted procedure: k6389 
o|contracted procedure: k6404 
o|contracted procedure: k6407 
o|contracted procedure: k6410 
o|contracted procedure: k6418 
o|contracted procedure: k6426 
o|inlining procedure: "(batch-driver.scm:653) dribble1074" 
o|contracted procedure: k6449 
o|contracted procedure: k6487 
o|contracted procedure: k6499 
o|contracted procedure: k6509 
o|contracted procedure: k6513 
o|contracted procedure: k6484 
o|propagated global variable: g19031905 chicken.compiler.compiler-syntax#compiler-syntax-statistics 
o|contracted procedure: k6528 
o|contracted procedure: k6555 
o|contracted procedure: k6567 
o|contracted procedure: k6570 
o|contracted procedure: k6573 
o|contracted procedure: k6581 
o|contracted procedure: k6589 
o|contracted procedure: k6595 
o|contracted procedure: k6625 
o|contracted procedure: k6628 
o|contracted procedure: k6640 
o|contracted procedure: k6643 
o|contracted procedure: k6646 
o|contracted procedure: k6654 
o|contracted procedure: k6662 
o|contracted procedure: k3088 
o|contracted procedure: k3097 
o|contracted procedure: k3110 
o|contracted procedure: k6685 
o|contracted procedure: k6696 
o|contracted procedure: k6708 
o|contracted procedure: k6720 
o|contracted procedure: k6723 
o|contracted procedure: k6726 
o|contracted procedure: k6734 
o|contracted procedure: k6742 
o|contracted procedure: k6705 
o|propagated global variable: g17911795 chicken.compiler.core#import-libraries 
o|contracted procedure: k6749 
o|contracted procedure: k6767 
o|contracted procedure: k6774 
o|contracted procedure: k6782 
o|contracted procedure: k6807 
o|contracted procedure: k6817 
o|contracted procedure: k6826 
o|contracted procedure: k6848 
o|contracted procedure: k6844 
o|contracted procedure: k6829 
o|contracted procedure: k6832 
o|contracted procedure: k6840 
o|propagated global variable: g17541758 chicken.compiler.core#used-units 
o|contracted procedure: k6860 
o|contracted procedure: k6863 
o|contracted procedure: k6866 
o|contracted procedure: k6874 
o|contracted procedure: k6882 
o|contracted procedure: k6758 
o|contracted procedure: k6762 
o|propagated global variable: g17241728 chicken.compiler.core#immutable-constants 
o|contracted procedure: k6894 
o|contracted procedure: k6897 
o|contracted procedure: k6900 
o|contracted procedure: k6908 
o|contracted procedure: k6916 
o|contracted procedure: k6922 
o|contracted procedure: k6941 
o|contracted procedure: k6933 
o|contracted procedure: k6929 
o|contracted procedure: k6948 
o|contracted procedure: k6951 
o|contracted procedure: k6963 
o|contracted procedure: k6966 
o|contracted procedure: k6969 
o|contracted procedure: k6977 
o|contracted procedure: k6985 
o|inlining procedure: "(batch-driver.scm:581) dribble1074" 
o|inlining procedure: "(batch-driver.scm:558) dribble1074" 
o|contracted procedure: k7007 
o|contracted procedure: k7015 
o|contracted procedure: k7018 
o|contracted procedure: k7029 
o|contracted procedure: k7032 
o|contracted procedure: k7044 
o|contracted procedure: k7047 
o|contracted procedure: k7050 
o|contracted procedure: k7058 
o|contracted procedure: k7066 
o|contracted procedure: k7078 
o|contracted procedure: k7081 
o|contracted procedure: k7084 
o|contracted procedure: k7092 
o|contracted procedure: k7100 
o|contracted procedure: k7106 
o|contracted procedure: k7140 
o|contracted procedure: k7147 
o|contracted procedure: k7163 
o|inlining procedure: "(batch-driver.scm:540) dribble1074" 
o|contracted procedure: k7215 
o|contracted procedure: k7182 
o|inlining procedure: "(batch-driver.scm:519) dribble1074" 
o|inlining procedure: "(batch-driver.scm:519) dribble1074" 
o|contracted procedure: k7205 
o|inlining procedure: "(batch-driver.scm:501) dribble1074" 
o|inlining procedure: "(batch-driver.scm:501) dribble1074" 
o|contracted procedure: k7227 
o|contracted procedure: k7254 
o|contracted procedure: k7269 
o|contracted procedure: k7281 
o|contracted procedure: k7284 
o|contracted procedure: k7287 
o|contracted procedure: k7295 
o|contracted procedure: k7303 
o|contracted procedure: k7309 
o|contracted procedure: k7321 
o|contracted procedure: k7317 
o|contracted procedure: k7313 
o|contracted procedure: k7327 
o|contracted procedure: k7342 
o|contracted procedure: k7345 
o|contracted procedure: k7348 
o|contracted procedure: k7356 
o|contracted procedure: k7364 
o|contracted procedure: k3211 
o|contracted procedure: k3237 
o|contracted procedure: k3217 
o|contracted procedure: k7380 
o|contracted procedure: k7390 
o|contracted procedure: k7394 
o|contracted procedure: k5470 
o|inlining procedure: "(batch-driver.scm:458) dribble1074" 
o|contracted procedure: k7403 
o|contracted procedure: k7413 
o|contracted procedure: k7417 
o|contracted procedure: k7436 
o|contracted procedure: k7446 
o|contracted procedure: k7450 
o|contracted procedure: k7463 
o|contracted procedure: k7479 
o|contracted procedure: k7493 
o|contracted procedure: k7505 
o|contracted procedure: k7515 
o|contracted procedure: k7519 
o|propagated global variable: g14071409 chicken.compiler.core#default-extended-bindings 
o|contracted procedure: k7528 
o|contracted procedure: k7538 
o|contracted procedure: k7542 
o|propagated global variable: g13881390 chicken.compiler.core#default-standard-bindings 
o|contracted procedure: k7560 
o|contracted procedure: k7573 
o|contracted procedure: k7579 
o|contracted procedure: k7591 
o|contracted procedure: k7594 
o|contracted procedure: k7597 
o|contracted procedure: k7605 
o|contracted procedure: k7613 
o|inlining procedure: "(batch-driver.scm:411) dribble1074" 
o|inlining procedure: "(batch-driver.scm:408) dribble1074" 
o|inlining procedure: "(batch-driver.scm:405) dribble1074" 
o|contracted procedure: k7658 
o|inlining procedure: "(batch-driver.scm:394) dribble1074" 
o|inlining procedure: "(batch-driver.scm:365) dribble1074" 
o|contracted procedure: k7775 
o|contracted procedure: k7779 
o|contracted procedure: k7786 
o|contracted procedure: k7801 
o|contracted procedure: k7804 
o|contracted procedure: k7807 
o|contracted procedure: k7815 
o|contracted procedure: k7823 
o|contracted procedure: k7829 
o|contracted procedure: k7841 
o|contracted procedure: k7865 
o|contracted procedure: k7868 
o|contracted procedure: k7871 
o|contracted procedure: k7879 
o|contracted procedure: k7887 
o|contracted procedure: k7850 
o|contracted procedure: k7936 
o|contracted procedure: k7939 
o|contracted procedure: k7942 
o|contracted procedure: k7950 
o|contracted procedure: k7958 
o|contracted procedure: k7979 
o|contracted procedure: k8012 
o|contracted procedure: k8023 
o|contracted procedure: k8016 
o|contracted procedure: k8031 
o|contracted procedure: k8051 
o|contracted procedure: k8057 
o|contracted procedure: k8067 
o|simplifications: ((let . 81)) 
o|removed binding forms: 356 
o|removed side-effect free assignment to unused variable: dribble1074 
o|substituted constant variable: fstr11129053 
o|substituted constant variable: args11139054 
o|substituted constant variable: fstr11129059 
o|substituted constant variable: args11139060 
o|substituted constant variable: fstr11129065 
o|substituted constant variable: fstr11129071 
o|substituted constant variable: fstr11129077 
o|substituted constant variable: fstr11129083 
o|contracted procedure: "(batch-driver.scm:682) g20072014" 
o|substituted constant variable: fstr11129095 
o|contracted procedure: "(batch-driver.scm:672) g19851992" 
o|substituted constant variable: fstr11129103 
o|substituted constant variable: fstr11129115 
o|substituted constant variable: args11139116 
o|substituted constant variable: fstr11129139 
o|substituted constant variable: args11139140 
o|substituted constant variable: fstr11129145 
o|substituted constant variable: args11139146 
o|substituted constant variable: fstr11129159 
o|substituted constant variable: fstr11129165 
o|substituted constant variable: fstr11129171 
o|substituted constant variable: fstr11129177 
o|substituted constant variable: fstr11129183 
o|substituted constant variable: fstr11129197 
o|substituted constant variable: args11139198 
o|substituted constant variable: fstr11129213 
o|substituted constant variable: args11139214 
o|substituted constant variable: fstr11129219 
o|substituted constant variable: args11139220 
o|substituted constant variable: fstr11129225 
o|substituted constant variable: args11139226 
o|substituted constant variable: fstr11129231 
o|substituted constant variable: args11139232 
o|substituted constant variable: fstr11129237 
o|substituted constant variable: args11139238 
o|replaced variables: 120 
o|removed binding forms: 2 
o|simplifications: ((if . 2)) 
o|replaced variables: 1 
o|removed binding forms: 102 
o|contracted procedure: k6878 
o|removed binding forms: 2 
o|direct leaf routine/allocation: loop326 0 
o|contracted procedure: k2970 
o|converted assignments to bindings: (loop326) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|customizable procedures: (k8035 k8042 k8008 g10061007 map-loop10131033 k4858 k4878 k5255 k5258 map-loop12641282 map-loop12921310 k5306 k5309 k5315 k5318 k5321 k5324 k5327 k5330 k5333 k5336 k5339 k5342 k5345 k5348 k5351 k5354 k5357 k5360 k5363 k5368 k5373 k5378 k5383 map-loop13531370 k5410 k5413 k5416 k5419 k5422 for-each-loop13811393 for-each-loop14001412 for-each-loop10861428 for-each-loop10961443 for-each-loop14511464 loop352 chicken.compiler.batch-driver#append-map map-loop14741491 k5497 map-loop15031524 k5504 arg-val1079 k5529 k5557 loop1627 doloop15621563 map-loop15671584 map-loop15931610 map-loop16421659 k5637 k5673 g16761685 map-loop16701702 map-loop17121733 map-loop17421763 k6789 map-loop17791797 chicken.compiler.batch-driver#filter loop313 map-loop18271844 map-loop18651882 for-each-loop18961916 print-expr1078 map-loop19251942 chicken.compiler.batch-driver#initialize-analysis-database map-loop19581975 chicken.compiler.batch-driver#concatenate for-each-loop19841998 for-each-loop20062018 collect-options1080 for-each-loop20292043 for-each-loop20502061 k5747 print-db1077 print-node1076 analyze1083 begin-time1081 end-time1082 loop2083 def-no12131252 def-contf12141250 body12111220 g11921193 option-arg978 loop1184 for-each-loop11481160 chicken.compiler.batch-driver#display-analysis-database print-header1075 k4199 k4410 k4489 loop805 k4290 k4317 for-each-loop945962 for-each-loop739750 for-each-loop757768 for-each-loop775786 foldr389392 g394395 loop345 map-loop257275 map-loop284302 loop253 foldr242245 g247248) 
o|calls to known targets: 380 
o|identified direct recursive calls: f_2925 1 
o|identified direct recursive calls: f_3120 1 
o|identified direct recursive calls: f_2997 1 
o|identified direct recursive calls: f_3046 1 
o|identified direct recursive calls: f_3178 1 
o|identified direct recursive calls: f_3329 1 
o|identified direct recursive calls: f_6334 1 
o|identified direct recursive calls: f_6821 1 
o|identified direct recursive calls: f_6855 1 
o|identified direct recursive calls: f_3206 2 
o|fast box initializations: 54 
o|fast global references: 10 
o|fast global assignments: 5 
o|dropping unused closure argument: f_2910 
o|dropping unused closure argument: f_3120 
o|dropping unused closure argument: f_3172 
o|dropping unused closure argument: f_3320 
o|dropping unused closure argument: f_4782 
o|dropping unused closure argument: f_4903 
o|dropping unused closure argument: f_5025 
*/
/* end of file */

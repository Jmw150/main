/* Generated from csi.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: csi.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -output-file csi.c
   uses: library eval expand extras file internal port posix repl data-structures
*/
#include "chicken.h"

#include <signal.h>

#if defined(HAVE_DIRECT_H)
# include <direct.h>
#else
# define _getcwd(buf, len)       NULL
#endif

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_file_toplevel)
C_externimport void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_port_toplevel)
C_externimport void C_ccall C_port_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_repl_toplevel)
C_externimport void C_ccall C_repl_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[406];
static double C_possibly_force_alignment;


/* from k3922 */
C_regparm static C_word C_fcall stub703(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_mpointer(&C_a,(void*)_getcwd(t0,t1));
return C_r;}

C_noret_decl(f9362)
static void C_ccall f9362(C_word c,C_word *av) C_noret;
C_noret_decl(f9402)
static void C_ccall f9402(C_word c,C_word *av) C_noret;
C_noret_decl(f9420)
static void C_ccall f9420(C_word c,C_word *av) C_noret;
C_noret_decl(f9424)
static void C_ccall f9424(C_word c,C_word *av) C_noret;
C_noret_decl(f_2500)
static void C_ccall f_2500(C_word c,C_word *av) C_noret;
C_noret_decl(f_2503)
static void C_ccall f_2503(C_word c,C_word *av) C_noret;
C_noret_decl(f_2506)
static void C_ccall f_2506(C_word c,C_word *av) C_noret;
C_noret_decl(f_2509)
static void C_ccall f_2509(C_word c,C_word *av) C_noret;
C_noret_decl(f_2512)
static void C_ccall f_2512(C_word c,C_word *av) C_noret;
C_noret_decl(f_2515)
static void C_ccall f_2515(C_word c,C_word *av) C_noret;
C_noret_decl(f_2518)
static void C_ccall f_2518(C_word c,C_word *av) C_noret;
C_noret_decl(f_2521)
static void C_ccall f_2521(C_word c,C_word *av) C_noret;
C_noret_decl(f_2524)
static void C_ccall f_2524(C_word c,C_word *av) C_noret;
C_noret_decl(f_2527)
static void C_ccall f_2527(C_word c,C_word *av) C_noret;
C_noret_decl(f_2530)
static void C_ccall f_2530(C_word c,C_word *av) C_noret;
C_noret_decl(f_3028)
static void C_fcall f_3028(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3041)
static void C_ccall f_3041(C_word c,C_word *av) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word *av) C_noret;
C_noret_decl(f_3103)
static void C_fcall f_3103(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3117)
static void C_ccall f_3117(C_word c,C_word *av) C_noret;
C_noret_decl(f_3130)
static void C_ccall f_3130(C_word c,C_word *av) C_noret;
C_noret_decl(f_3820)
static void C_ccall f_3820(C_word c,C_word *av) C_noret;
C_noret_decl(f_3825)
static void C_ccall f_3825(C_word c,C_word *av) C_noret;
C_noret_decl(f_3828)
static void C_fcall f_3828(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3834)
static void C_ccall f_3834(C_word c,C_word *av) C_noret;
C_noret_decl(f_3837)
static void C_ccall f_3837(C_word c,C_word *av) C_noret;
C_noret_decl(f_3844)
static void C_ccall f_3844(C_word c,C_word *av) C_noret;
C_noret_decl(f_3868)
static void C_ccall f_3868(C_word c,C_word *av) C_noret;
C_noret_decl(f_3883)
static void C_ccall f_3883(C_word c,C_word *av) C_noret;
C_noret_decl(f_3897)
static void C_ccall f_3897(C_word c,C_word *av) C_noret;
C_noret_decl(f_3910)
static void C_ccall f_3910(C_word c,C_word *av) C_noret;
C_noret_decl(f_3929)
static void C_fcall f_3929(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3936)
static void C_ccall f_3936(C_word c,C_word *av) C_noret;
C_noret_decl(f_3939)
static void C_ccall f_3939(C_word c,C_word *av) C_noret;
C_noret_decl(f_3945)
static void C_ccall f_3945(C_word c,C_word *av) C_noret;
C_noret_decl(f_3958)
static void C_fcall f_3958(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3971)
static void C_ccall f_3971(C_word c,C_word *av) C_noret;
C_noret_decl(f_3980)
static void C_fcall f_3980(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3984)
static void C_ccall f_3984(C_word c,C_word *av) C_noret;
C_noret_decl(f_3996)
static void C_ccall f_3996(C_word c,C_word *av) C_noret;
C_noret_decl(f_4005)
static void C_ccall f_4005(C_word c,C_word *av) C_noret;
C_noret_decl(f_4008)
static void C_ccall f_4008(C_word c,C_word *av) C_noret;
C_noret_decl(f_4015)
static void C_ccall f_4015(C_word c,C_word *av) C_noret;
C_noret_decl(f_4019)
static void C_ccall f_4019(C_word c,C_word *av) C_noret;
C_noret_decl(f_4022)
static void C_ccall f_4022(C_word c,C_word *av) C_noret;
C_noret_decl(f_4028)
static void C_ccall f_4028(C_word c,C_word *av) C_noret;
C_noret_decl(f_4035)
static void C_ccall f_4035(C_word c,C_word *av) C_noret;
C_noret_decl(f_4037)
static void C_fcall f_4037(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4047)
static void C_ccall f_4047(C_word c,C_word *av) C_noret;
C_noret_decl(f_4050)
static void C_ccall f_4050(C_word c,C_word *av) C_noret;
C_noret_decl(f_4064)
static void C_ccall f_4064(C_word c,C_word *av) C_noret;
C_noret_decl(f_4087)
static void C_fcall f_4087(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4097)
static void C_fcall f_4097(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4111)
static void C_ccall f_4111(C_word c,C_word *av) C_noret;
C_noret_decl(f_4142)
static void C_fcall f_4142(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4154)
static void C_ccall f_4154(C_word c,C_word *av) C_noret;
C_noret_decl(f_4157)
static void C_ccall f_4157(C_word c,C_word *av) C_noret;
C_noret_decl(f_4160)
static void C_ccall f_4160(C_word c,C_word *av) C_noret;
C_noret_decl(f_4163)
static void C_ccall f_4163(C_word c,C_word *av) C_noret;
C_noret_decl(f_4166)
static void C_ccall f_4166(C_word c,C_word *av) C_noret;
C_noret_decl(f_4175)
static void C_ccall f_4175(C_word c,C_word *av) C_noret;
C_noret_decl(f_4185)
static void C_fcall f_4185(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4189)
static void C_ccall f_4189(C_word c,C_word *av) C_noret;
C_noret_decl(f_4212)
static void C_ccall f_4212(C_word c,C_word *av) C_noret;
C_noret_decl(f_4229)
static void C_ccall f_4229(C_word c,C_word *av) C_noret;
C_noret_decl(f_4241)
static void C_ccall f_4241(C_word c,C_word *av) C_noret;
C_noret_decl(f_4249)
static void C_ccall f_4249(C_word c,C_word *av) C_noret;
C_noret_decl(f_4252)
static void C_ccall f_4252(C_word c,C_word *av) C_noret;
C_noret_decl(f_4264)
static void C_ccall f_4264(C_word c,C_word *av) C_noret;
C_noret_decl(f_4271)
static void C_ccall f_4271(C_word c,C_word *av) C_noret;
C_noret_decl(f_4277)
static void C_ccall f_4277(C_word c,C_word *av) C_noret;
C_noret_decl(f_4297)
static C_word C_fcall f_4297(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4327)
static void C_ccall f_4327(C_word c,C_word *av) C_noret;
C_noret_decl(f_4343)
static void C_fcall f_4343(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4360)
static void C_ccall f_4360(C_word c,C_word *av) C_noret;
C_noret_decl(f_4375)
static void C_ccall f_4375(C_word c,C_word *av) C_noret;
C_noret_decl(f_4378)
static void C_ccall f_4378(C_word c,C_word *av) C_noret;
C_noret_decl(f_4385)
static void C_ccall f_4385(C_word c,C_word *av) C_noret;
C_noret_decl(f_4389)
static void C_ccall f_4389(C_word c,C_word *av) C_noret;
C_noret_decl(f_4398)
static void C_ccall f_4398(C_word c,C_word *av) C_noret;
C_noret_decl(f_4401)
static void C_ccall f_4401(C_word c,C_word *av) C_noret;
C_noret_decl(f_4404)
static void C_ccall f_4404(C_word c,C_word *av) C_noret;
C_noret_decl(f_4416)
static void C_ccall f_4416(C_word c,C_word *av) C_noret;
C_noret_decl(f_4419)
static void C_ccall f_4419(C_word c,C_word *av) C_noret;
C_noret_decl(f_4431)
static void C_ccall f_4431(C_word c,C_word *av) C_noret;
C_noret_decl(f_4434)
static void C_ccall f_4434(C_word c,C_word *av) C_noret;
C_noret_decl(f_4446)
static void C_ccall f_4446(C_word c,C_word *av) C_noret;
C_noret_decl(f_4449)
static void C_ccall f_4449(C_word c,C_word *av) C_noret;
C_noret_decl(f_4452)
static void C_ccall f_4452(C_word c,C_word *av) C_noret;
C_noret_decl(f_4455)
static void C_ccall f_4455(C_word c,C_word *av) C_noret;
C_noret_decl(f_4485)
static void C_ccall f_4485(C_word c,C_word *av) C_noret;
C_noret_decl(f_4488)
static void C_ccall f_4488(C_word c,C_word *av) C_noret;
C_noret_decl(f_4493)
static void C_fcall f_4493(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4503)
static void C_ccall f_4503(C_word c,C_word *av) C_noret;
C_noret_decl(f_4518)
static void C_ccall f_4518(C_word c,C_word *av) C_noret;
C_noret_decl(f_4527)
static void C_ccall f_4527(C_word c,C_word *av) C_noret;
C_noret_decl(f_4528)
static void C_fcall f_4528(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4534)
static void C_ccall f_4534(C_word c,C_word *av) C_noret;
C_noret_decl(f_4538)
static void C_ccall f_4538(C_word c,C_word *av) C_noret;
C_noret_decl(f_4544)
static void C_ccall f_4544(C_word c,C_word *av) C_noret;
C_noret_decl(f_4549)
static void C_fcall f_4549(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4559)
static void C_ccall f_4559(C_word c,C_word *av) C_noret;
C_noret_decl(f_4574)
static void C_ccall f_4574(C_word c,C_word *av) C_noret;
C_noret_decl(f_4583)
static void C_ccall f_4583(C_word c,C_word *av) C_noret;
C_noret_decl(f_4588)
static void C_ccall f_4588(C_word c,C_word *av) C_noret;
C_noret_decl(f_4592)
static void C_ccall f_4592(C_word c,C_word *av) C_noret;
C_noret_decl(f_4597)
static void C_ccall f_4597(C_word c,C_word *av) C_noret;
C_noret_decl(f_4603)
static void C_ccall f_4603(C_word c,C_word *av) C_noret;
C_noret_decl(f_4607)
static void C_ccall f_4607(C_word c,C_word *av) C_noret;
C_noret_decl(f_4614)
static void C_ccall f_4614(C_word c,C_word *av) C_noret;
C_noret_decl(f_4616)
static void C_ccall f_4616(C_word c,C_word *av) C_noret;
C_noret_decl(f_4620)
static void C_ccall f_4620(C_word c,C_word *av) C_noret;
C_noret_decl(f_4635)
static void C_ccall f_4635(C_word c,C_word *av) C_noret;
C_noret_decl(f_4651)
static void C_ccall f_4651(C_word c,C_word *av) C_noret;
C_noret_decl(f_4669)
static void C_ccall f_4669(C_word c,C_word *av) C_noret;
C_noret_decl(f_4673)
static void C_ccall f_4673(C_word c,C_word *av) C_noret;
C_noret_decl(f_4680)
static void C_ccall f_4680(C_word c,C_word *av) C_noret;
C_noret_decl(f_4689)
static void C_ccall f_4689(C_word c,C_word *av) C_noret;
C_noret_decl(f_4701)
static void C_ccall f_4701(C_word c,C_word *av) C_noret;
C_noret_decl(f_4713)
static void C_ccall f_4713(C_word c,C_word *av) C_noret;
C_noret_decl(f_4725)
static void C_ccall f_4725(C_word c,C_word *av) C_noret;
C_noret_decl(f_4732)
static void C_ccall f_4732(C_word c,C_word *av) C_noret;
C_noret_decl(f_4745)
static void C_ccall f_4745(C_word c,C_word *av) C_noret;
C_noret_decl(f_4754)
static void C_ccall f_4754(C_word c,C_word *av) C_noret;
C_noret_decl(f_4757)
static void C_ccall f_4757(C_word c,C_word *av) C_noret;
C_noret_decl(f_4760)
static void C_ccall f_4760(C_word c,C_word *av) C_noret;
C_noret_decl(f_4773)
static void C_ccall f_4773(C_word c,C_word *av) C_noret;
C_noret_decl(f_4795)
static void C_ccall f_4795(C_word c,C_word *av) C_noret;
C_noret_decl(f_4800)
static void C_fcall f_4800(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4810)
static void C_ccall f_4810(C_word c,C_word *av) C_noret;
C_noret_decl(f_4824)
static void C_ccall f_4824(C_word c,C_word *av) C_noret;
C_noret_decl(f_4870)
static void C_ccall f_4870(C_word c,C_word *av) C_noret;
C_noret_decl(f_4876)
static void C_ccall f_4876(C_word c,C_word *av) C_noret;
C_noret_decl(f_4880)
static void C_ccall f_4880(C_word c,C_word *av) C_noret;
C_noret_decl(f_4896)
static void C_ccall f_4896(C_word c,C_word *av) C_noret;
C_noret_decl(f_4902)
static void C_ccall f_4902(C_word c,C_word *av) C_noret;
C_noret_decl(f_4916)
static void C_ccall f_4916(C_word c,C_word *av) C_noret;
C_noret_decl(f_4919)
static void C_ccall f_4919(C_word c,C_word *av) C_noret;
C_noret_decl(f_4925)
static void C_ccall f_4925(C_word c,C_word *av) C_noret;
C_noret_decl(f_4928)
static void C_ccall f_4928(C_word c,C_word *av) C_noret;
C_noret_decl(f_4936)
static void C_fcall f_4936(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4961)
static void C_ccall f_4961(C_word c,C_word *av) C_noret;
C_noret_decl(f_4970)
static void C_ccall f_4970(C_word c,C_word *av) C_noret;
C_noret_decl(f_4976)
static void C_ccall f_4976(C_word c,C_word *av) C_noret;
C_noret_decl(f_4982)
static void C_ccall f_4982(C_word c,C_word *av) C_noret;
C_noret_decl(f_4988)
static void C_ccall f_4988(C_word c,C_word *av) C_noret;
C_noret_decl(f_4994)
static void C_ccall f_4994(C_word c,C_word *av) C_noret;
C_noret_decl(f_5002)
static void C_ccall f_5002(C_word c,C_word *av) C_noret;
C_noret_decl(f_5004)
static void C_fcall f_5004(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5021)
static void C_ccall f_5021(C_word c,C_word *av) C_noret;
C_noret_decl(f_5027)
static void C_ccall f_5027(C_word c,C_word *av) C_noret;
C_noret_decl(f_5033)
static void C_ccall f_5033(C_word c,C_word *av) C_noret;
C_noret_decl(f_5041)
static void C_ccall f_5041(C_word c,C_word *av) C_noret;
C_noret_decl(f_5042)
static void C_fcall f_5042(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5050)
static void C_fcall f_5050(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5052)
static void C_ccall f_5052(C_word c,C_word *av) C_noret;
C_noret_decl(f_5056)
static void C_ccall f_5056(C_word c,C_word *av) C_noret;
C_noret_decl(f_5059)
static void C_ccall f_5059(C_word c,C_word *av) C_noret;
C_noret_decl(f_5062)
static void C_ccall f_5062(C_word c,C_word *av) C_noret;
C_noret_decl(f_5064)
static void C_fcall f_5064(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5072)
static void C_ccall f_5072(C_word c,C_word *av) C_noret;
C_noret_decl(f_5079)
static void C_ccall f_5079(C_word c,C_word *av) C_noret;
C_noret_decl(f_5082)
static void C_ccall f_5082(C_word c,C_word *av) C_noret;
C_noret_decl(f_5083)
static void C_fcall f_5083(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5087)
static void C_ccall f_5087(C_word c,C_word *av) C_noret;
C_noret_decl(f_5097)
static void C_fcall f_5097(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5105)
static void C_ccall f_5105(C_word c,C_word *av) C_noret;
C_noret_decl(f_5113)
static void C_ccall f_5113(C_word c,C_word *av) C_noret;
C_noret_decl(f_5126)
static void C_ccall f_5126(C_word c,C_word *av) C_noret;
C_noret_decl(f_5129)
static void C_ccall f_5129(C_word c,C_word *av) C_noret;
C_noret_decl(f_5132)
static void C_ccall f_5132(C_word c,C_word *av) C_noret;
C_noret_decl(f_5135)
static void C_ccall f_5135(C_word c,C_word *av) C_noret;
C_noret_decl(f_5142)
static void C_ccall f_5142(C_word c,C_word *av) C_noret;
C_noret_decl(f_5150)
static void C_ccall f_5150(C_word c,C_word *av) C_noret;
C_noret_decl(f_5154)
static void C_ccall f_5154(C_word c,C_word *av) C_noret;
C_noret_decl(f_5158)
static void C_ccall f_5158(C_word c,C_word *av) C_noret;
C_noret_decl(f_5162)
static void C_ccall f_5162(C_word c,C_word *av) C_noret;
C_noret_decl(f_5166)
static void C_ccall f_5166(C_word c,C_word *av) C_noret;
C_noret_decl(f_5170)
static void C_ccall f_5170(C_word c,C_word *av) C_noret;
C_noret_decl(f_5174)
static void C_ccall f_5174(C_word c,C_word *av) C_noret;
C_noret_decl(f_5178)
static void C_ccall f_5178(C_word c,C_word *av) C_noret;
C_noret_decl(f_5206)
static void C_ccall f_5206(C_word c,C_word *av) C_noret;
C_noret_decl(f_5218)
static void C_ccall f_5218(C_word c,C_word *av) C_noret;
C_noret_decl(f_5221)
static void C_ccall f_5221(C_word c,C_word *av) C_noret;
C_noret_decl(f_5223)
static void C_fcall f_5223(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5233)
static void C_ccall f_5233(C_word c,C_word *av) C_noret;
C_noret_decl(f_5254)
static void C_ccall f_5254(C_word c,C_word *av) C_noret;
C_noret_decl(f_5256)
static void C_fcall f_5256(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5281)
static void C_ccall f_5281(C_word c,C_word *av) C_noret;
C_noret_decl(f_5301)
static C_word C_fcall f_5301(C_word t0,C_word t1);
C_noret_decl(f_5336)
static C_word C_fcall f_5336(C_word t0);
C_noret_decl(f_5366)
static void C_ccall f_5366(C_word c,C_word *av) C_noret;
C_noret_decl(f_5368)
static void C_fcall f_5368(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5374)
static void C_ccall f_5374(C_word c,C_word *av) C_noret;
C_noret_decl(f_5381)
static void C_ccall f_5381(C_word c,C_word *av) C_noret;
C_noret_decl(f_5386)
static void C_fcall f_5386(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5409)
static void C_ccall f_5409(C_word c,C_word *av) C_noret;
C_noret_decl(f_5418)
static void C_fcall f_5418(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5428)
static void C_ccall f_5428(C_word c,C_word *av) C_noret;
C_noret_decl(f_5431)
static void C_ccall f_5431(C_word c,C_word *av) C_noret;
C_noret_decl(f_5460)
static void C_ccall f_5460(C_word c,C_word *av) C_noret;
C_noret_decl(f_5488)
static void C_ccall f_5488(C_word c,C_word *av) C_noret;
C_noret_decl(f_5503)
static void C_ccall f_5503(C_word c,C_word *av) C_noret;
C_noret_decl(f_5506)
static void C_ccall f_5506(C_word c,C_word *av) C_noret;
C_noret_decl(f_5509)
static void C_ccall f_5509(C_word c,C_word *av) C_noret;
C_noret_decl(f_5575)
static void C_ccall f_5575(C_word c,C_word *av) C_noret;
C_noret_decl(f_5581)
static void C_ccall f_5581(C_word c,C_word *av) C_noret;
C_noret_decl(f_5672)
static void C_ccall f_5672(C_word c,C_word *av) C_noret;
C_noret_decl(f_5679)
static void C_ccall f_5679(C_word c,C_word *av) C_noret;
C_noret_decl(f_5688)
static void C_ccall f_5688(C_word c,C_word *av) C_noret;
C_noret_decl(f_5691)
static void C_ccall f_5691(C_word c,C_word *av) C_noret;
C_noret_decl(f_5694)
static void C_ccall f_5694(C_word c,C_word *av) C_noret;
C_noret_decl(f_5706)
static void C_ccall f_5706(C_word c,C_word *av) C_noret;
C_noret_decl(f_5711)
static void C_fcall f_5711(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5721)
static void C_ccall f_5721(C_word c,C_word *av) C_noret;
C_noret_decl(f_5724)
static void C_ccall f_5724(C_word c,C_word *av) C_noret;
C_noret_decl(f_5727)
static void C_ccall f_5727(C_word c,C_word *av) C_noret;
C_noret_decl(f_5736)
static void C_ccall f_5736(C_word c,C_word *av) C_noret;
C_noret_decl(f_5760)
static void C_ccall f_5760(C_word c,C_word *av) C_noret;
C_noret_decl(f_5769)
static void C_ccall f_5769(C_word c,C_word *av) C_noret;
C_noret_decl(f_5772)
static void C_ccall f_5772(C_word c,C_word *av) C_noret;
C_noret_decl(f_5784)
static void C_fcall f_5784(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5787)
static void C_ccall f_5787(C_word c,C_word *av) C_noret;
C_noret_decl(f_5796)
static void C_fcall f_5796(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5827)
static void C_ccall f_5827(C_word c,C_word *av) C_noret;
C_noret_decl(f_5891)
static void C_ccall f_5891(C_word c,C_word *av) C_noret;
C_noret_decl(f_5895)
static void C_ccall f_5895(C_word c,C_word *av) C_noret;
C_noret_decl(f_5901)
static void C_ccall f_5901(C_word c,C_word *av) C_noret;
C_noret_decl(f_5920)
static void C_ccall f_5920(C_word c,C_word *av) C_noret;
C_noret_decl(f_5929)
static void C_ccall f_5929(C_word c,C_word *av) C_noret;
C_noret_decl(f_5936)
static void C_ccall f_5936(C_word c,C_word *av) C_noret;
C_noret_decl(f_6053)
static void C_ccall f_6053(C_word c,C_word *av) C_noret;
C_noret_decl(f_6059)
static void C_ccall f_6059(C_word c,C_word *av) C_noret;
C_noret_decl(f_6065)
static void C_ccall f_6065(C_word c,C_word *av) C_noret;
C_noret_decl(f_6078)
static void C_ccall f_6078(C_word c,C_word *av) C_noret;
C_noret_decl(f_6090)
static void C_ccall f_6090(C_word c,C_word *av) C_noret;
C_noret_decl(f_6093)
static void C_ccall f_6093(C_word c,C_word *av) C_noret;
C_noret_decl(f_6104)
static void C_fcall f_6104(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6112)
static void C_fcall f_6112(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6133)
static void C_ccall f_6133(C_word c,C_word *av) C_noret;
C_noret_decl(f_6142)
static void C_fcall f_6142(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6152)
static void C_ccall f_6152(C_word c,C_word *av) C_noret;
C_noret_decl(f_6187)
static void C_ccall f_6187(C_word c,C_word *av) C_noret;
C_noret_decl(f_6188)
static void C_fcall f_6188(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6192)
static void C_ccall f_6192(C_word c,C_word *av) C_noret;
C_noret_decl(f_6201)
static void C_fcall f_6201(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6211)
static void C_ccall f_6211(C_word c,C_word *av) C_noret;
C_noret_decl(f_6224)
static void C_ccall f_6224(C_word c,C_word *av) C_noret;
C_noret_decl(f_6229)
static void C_ccall f_6229(C_word c,C_word *av) C_noret;
C_noret_decl(f_6256)
static void C_fcall f_6256(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6266)
static void C_ccall f_6266(C_word c,C_word *av) C_noret;
C_noret_decl(f_6293)
static void C_ccall f_6293(C_word c,C_word *av) C_noret;
C_noret_decl(f_6297)
static void C_fcall f_6297(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6311)
static void C_fcall f_6311(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6319)
static void C_ccall f_6319(C_word c,C_word *av) C_noret;
C_noret_decl(f_6332)
static void C_ccall f_6332(C_word c,C_word *av) C_noret;
C_noret_decl(f_6338)
static void C_fcall f_6338(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6363)
static void C_ccall f_6363(C_word c,C_word *av) C_noret;
C_noret_decl(f_6376)
static void C_ccall f_6376(C_word c,C_word *av) C_noret;
C_noret_decl(f_6403)
static void C_ccall f_6403(C_word c,C_word *av) C_noret;
C_noret_decl(f_6411)
static void C_ccall f_6411(C_word c,C_word *av) C_noret;
C_noret_decl(f_6420)
static void C_fcall f_6420(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6422)
static void C_fcall f_6422(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6425)
static void C_fcall f_6425(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6447)
static void C_ccall f_6447(C_word c,C_word *av) C_noret;
C_noret_decl(f_6454)
static void C_ccall f_6454(C_word c,C_word *av) C_noret;
C_noret_decl(f_6471)
static void C_ccall f_6471(C_word c,C_word *av) C_noret;
C_noret_decl(f_6490)
static void C_fcall f_6490(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6500)
static void C_ccall f_6500(C_word c,C_word *av) C_noret;
C_noret_decl(f_6528)
static void C_fcall f_6528(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6533)
static void C_fcall f_6533(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6568)
static void C_fcall f_6568(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6571)
static void C_fcall f_6571(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6575)
static void C_ccall f_6575(C_word c,C_word *av) C_noret;
C_noret_decl(f_6591)
static void C_ccall f_6591(C_word c,C_word *av) C_noret;
C_noret_decl(f_6603)
static void C_fcall f_6603(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6613)
static void C_ccall f_6613(C_word c,C_word *av) C_noret;
C_noret_decl(f_6616)
static void C_ccall f_6616(C_word c,C_word *av) C_noret;
C_noret_decl(f_6619)
static void C_ccall f_6619(C_word c,C_word *av) C_noret;
C_noret_decl(f_6622)
static void C_ccall f_6622(C_word c,C_word *av) C_noret;
C_noret_decl(f_6625)
static void C_ccall f_6625(C_word c,C_word *av) C_noret;
C_noret_decl(f_6628)
static void C_ccall f_6628(C_word c,C_word *av) C_noret;
C_noret_decl(f_6637)
static void C_fcall f_6637(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6650)
static void C_ccall f_6650(C_word c,C_word *av) C_noret;
C_noret_decl(f_6653)
static void C_ccall f_6653(C_word c,C_word *av) C_noret;
C_noret_decl(f_6688)
static void C_fcall f_6688(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6722)
static void C_fcall f_6722(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6732)
static void C_ccall f_6732(C_word c,C_word *av) C_noret;
C_noret_decl(f_6742)
static void C_ccall f_6742(C_word c,C_word *av) C_noret;
C_noret_decl(f_6745)
static void C_ccall f_6745(C_word c,C_word *av) C_noret;
C_noret_decl(f_6760)
static void C_ccall f_6760(C_word c,C_word *av) C_noret;
C_noret_decl(f_6764)
static void C_ccall f_6764(C_word c,C_word *av) C_noret;
C_noret_decl(f_6771)
static void C_ccall f_6771(C_word c,C_word *av) C_noret;
C_noret_decl(f_6773)
static void C_fcall f_6773(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6776)
static void C_fcall f_6776(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6782)
static void C_ccall f_6782(C_word c,C_word *av) C_noret;
C_noret_decl(f_6799)
static void C_fcall f_6799(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6808)
static void C_fcall f_6808(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6839)
static void C_ccall f_6839(C_word c,C_word *av) C_noret;
C_noret_decl(f_6842)
static void C_ccall f_6842(C_word c,C_word *av) C_noret;
C_noret_decl(f_6845)
static void C_ccall f_6845(C_word c,C_word *av) C_noret;
C_noret_decl(f_6848)
static void C_ccall f_6848(C_word c,C_word *av) C_noret;
C_noret_decl(f_6851)
static void C_ccall f_6851(C_word c,C_word *av) C_noret;
C_noret_decl(f_6854)
static void C_ccall f_6854(C_word c,C_word *av) C_noret;
C_noret_decl(f_6857)
static void C_ccall f_6857(C_word c,C_word *av) C_noret;
C_noret_decl(f_6860)
static void C_ccall f_6860(C_word c,C_word *av) C_noret;
C_noret_decl(f_6863)
static void C_ccall f_6863(C_word c,C_word *av) C_noret;
C_noret_decl(f_6866)
static void C_ccall f_6866(C_word c,C_word *av) C_noret;
C_noret_decl(f_6869)
static void C_ccall f_6869(C_word c,C_word *av) C_noret;
C_noret_decl(f_6882)
static void C_fcall f_6882(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6892)
static void C_ccall f_6892(C_word c,C_word *av) C_noret;
C_noret_decl(f_6897)
static void C_fcall f_6897(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6910)
static void C_ccall f_6910(C_word c,C_word *av) C_noret;
C_noret_decl(f_6913)
static void C_ccall f_6913(C_word c,C_word *av) C_noret;
C_noret_decl(f_6916)
static void C_ccall f_6916(C_word c,C_word *av) C_noret;
C_noret_decl(f_6919)
static void C_ccall f_6919(C_word c,C_word *av) C_noret;
C_noret_decl(f_6922)
static void C_ccall f_6922(C_word c,C_word *av) C_noret;
C_noret_decl(f_6956)
static void C_fcall f_6956(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6966)
static void C_ccall f_6966(C_word c,C_word *av) C_noret;
C_noret_decl(f_7000)
static void C_ccall f_7000(C_word c,C_word *av) C_noret;
C_noret_decl(f_7003)
static void C_ccall f_7003(C_word c,C_word *av) C_noret;
C_noret_decl(f_7017)
static void C_fcall f_7017(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7058)
static void C_fcall f_7058(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7115)
static void C_fcall f_7115(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7117)
static void C_fcall f_7117(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7128)
static void C_ccall f_7128(C_word c,C_word *av) C_noret;
C_noret_decl(f_7148)
static void C_ccall f_7148(C_word c,C_word *av) C_noret;
C_noret_decl(f_7151)
static void C_fcall f_7151(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7155)
static void C_ccall f_7155(C_word c,C_word *av) C_noret;
C_noret_decl(f_7158)
static void C_ccall f_7158(C_word c,C_word *av) C_noret;
C_noret_decl(f_7170)
static void C_fcall f_7170(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7195)
static void C_ccall f_7195(C_word c,C_word *av) C_noret;
C_noret_decl(f_7204)
static void C_fcall f_7204(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7210)
static void C_fcall f_7210(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7220)
static void C_ccall f_7220(C_word c,C_word *av) C_noret;
C_noret_decl(f_7232)
static void C_ccall f_7232(C_word c,C_word *av) C_noret;
C_noret_decl(f_7235)
static void C_ccall f_7235(C_word c,C_word *av) C_noret;
C_noret_decl(f_7238)
static void C_ccall f_7238(C_word c,C_word *av) C_noret;
C_noret_decl(f_7241)
static void C_ccall f_7241(C_word c,C_word *av) C_noret;
C_noret_decl(f_7244)
static void C_ccall f_7244(C_word c,C_word *av) C_noret;
C_noret_decl(f_7280)
static void C_ccall f_7280(C_word c,C_word *av) C_noret;
C_noret_decl(f_7287)
static void C_ccall f_7287(C_word c,C_word *av) C_noret;
C_noret_decl(f_7289)
static void C_fcall f_7289(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7299)
static void C_ccall f_7299(C_word c,C_word *av) C_noret;
C_noret_decl(f_7342)
static void C_ccall f_7342(C_word c,C_word *av) C_noret;
C_noret_decl(f_7347)
static void C_fcall f_7347(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7353)
static void C_fcall f_7353(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7365)
static void C_fcall f_7365(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7402)
static void C_fcall f_7402(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7408)
static void C_fcall f_7408(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7430)
static void C_fcall f_7430(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7444)
static void C_ccall f_7444(C_word c,C_word *av) C_noret;
C_noret_decl(f_7465)
static void C_ccall f_7465(C_word c,C_word *av) C_noret;
C_noret_decl(f_7469)
static void C_ccall f_7469(C_word c,C_word *av) C_noret;
C_noret_decl(f_7473)
static void C_fcall f_7473(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7512)
static void C_ccall f_7512(C_word c,C_word *av) C_noret;
C_noret_decl(f_7520)
static void C_ccall f_7520(C_word c,C_word *av) C_noret;
C_noret_decl(f_7551)
static C_word C_fcall f_7551(C_word t0);
C_noret_decl(f_7581)
static void C_ccall f_7581(C_word c,C_word *av) C_noret;
C_noret_decl(f_7584)
static void C_ccall f_7584(C_word c,C_word *av) C_noret;
C_noret_decl(f_7587)
static void C_ccall f_7587(C_word c,C_word *av) C_noret;
C_noret_decl(f_7590)
static void C_ccall f_7590(C_word c,C_word *av) C_noret;
C_noret_decl(f_7593)
static void C_fcall f_7593(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7596)
static void C_ccall f_7596(C_word c,C_word *av) C_noret;
C_noret_decl(f_7599)
static void C_fcall f_7599(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7602)
static void C_ccall f_7602(C_word c,C_word *av) C_noret;
C_noret_decl(f_7605)
static void C_fcall f_7605(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7611)
static void C_ccall f_7611(C_word c,C_word *av) C_noret;
C_noret_decl(f_7617)
static void C_ccall f_7617(C_word c,C_word *av) C_noret;
C_noret_decl(f_7619)
static void C_fcall f_7619(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7625)
static void C_fcall f_7625(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7633)
static void C_fcall f_7633(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7654)
static void C_ccall f_7654(C_word c,C_word *av) C_noret;
C_noret_decl(f_7670)
static void C_ccall f_7670(C_word c,C_word *av) C_noret;
C_noret_decl(f_7682)
static void C_ccall f_7682(C_word c,C_word *av) C_noret;
C_noret_decl(f_7688)
static void C_ccall f_7688(C_word c,C_word *av) C_noret;
C_noret_decl(f_7695)
static void C_ccall f_7695(C_word c,C_word *av) C_noret;
C_noret_decl(f_7701)
static void C_fcall f_7701(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7708)
static void C_ccall f_7708(C_word c,C_word *av) C_noret;
C_noret_decl(f_7715)
static void C_ccall f_7715(C_word c,C_word *av) C_noret;
C_noret_decl(f_7717)
static void C_fcall f_7717(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7727)
static void C_ccall f_7727(C_word c,C_word *av) C_noret;
C_noret_decl(f_7734)
static void C_ccall f_7734(C_word c,C_word *av) C_noret;
C_noret_decl(f_7738)
static void C_ccall f_7738(C_word c,C_word *av) C_noret;
C_noret_decl(f_7740)
static void C_ccall f_7740(C_word c,C_word *av) C_noret;
C_noret_decl(f_7748)
static void C_ccall f_7748(C_word c,C_word *av) C_noret;
C_noret_decl(f_7758)
static void C_ccall f_7758(C_word c,C_word *av) C_noret;
C_noret_decl(f_7761)
static void C_ccall f_7761(C_word c,C_word *av) C_noret;
C_noret_decl(f_7764)
static void C_fcall f_7764(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7767)
static void C_ccall f_7767(C_word c,C_word *av) C_noret;
C_noret_decl(f_7770)
static void C_fcall f_7770(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7773)
static void C_ccall f_7773(C_word c,C_word *av) C_noret;
C_noret_decl(f_7776)
static void C_ccall f_7776(C_word c,C_word *av) C_noret;
C_noret_decl(f_7782)
static void C_ccall f_7782(C_word c,C_word *av) C_noret;
C_noret_decl(f_7785)
static void C_ccall f_7785(C_word c,C_word *av) C_noret;
C_noret_decl(f_7791)
static void C_ccall f_7791(C_word c,C_word *av) C_noret;
C_noret_decl(f_7794)
static void C_ccall f_7794(C_word c,C_word *av) C_noret;
C_noret_decl(f_7800)
static void C_ccall f_7800(C_word c,C_word *av) C_noret;
C_noret_decl(f_7804)
static void C_ccall f_7804(C_word c,C_word *av) C_noret;
C_noret_decl(f_7807)
static void C_ccall f_7807(C_word c,C_word *av) C_noret;
C_noret_decl(f_7810)
static void C_ccall f_7810(C_word c,C_word *av) C_noret;
C_noret_decl(f_7813)
static void C_ccall f_7813(C_word c,C_word *av) C_noret;
C_noret_decl(f_7816)
static void C_ccall f_7816(C_word c,C_word *av) C_noret;
C_noret_decl(f_7819)
static void C_ccall f_7819(C_word c,C_word *av) C_noret;
C_noret_decl(f_7822)
static void C_ccall f_7822(C_word c,C_word *av) C_noret;
C_noret_decl(f_7825)
static void C_ccall f_7825(C_word c,C_word *av) C_noret;
C_noret_decl(f_7828)
static void C_ccall f_7828(C_word c,C_word *av) C_noret;
C_noret_decl(f_7831)
static void C_fcall f_7831(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7836)
static void C_fcall f_7836(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7864)
static void C_ccall f_7864(C_word c,C_word *av) C_noret;
C_noret_decl(f_7893)
static void C_ccall f_7893(C_word c,C_word *av) C_noret;
C_noret_decl(f_7905)
static void C_ccall f_7905(C_word c,C_word *av) C_noret;
C_noret_decl(f_7920)
static void C_ccall f_7920(C_word c,C_word *av) C_noret;
C_noret_decl(f_7939)
static void C_ccall f_7939(C_word c,C_word *av) C_noret;
C_noret_decl(f_7949)
static void C_ccall f_7949(C_word c,C_word *av) C_noret;
C_noret_decl(f_7964)
static void C_ccall f_7964(C_word c,C_word *av) C_noret;
C_noret_decl(f_7974)
static void C_ccall f_7974(C_word c,C_word *av) C_noret;
C_noret_decl(f_7984)
static void C_ccall f_7984(C_word c,C_word *av) C_noret;
C_noret_decl(f_7995)
static void C_ccall f_7995(C_word c,C_word *av) C_noret;
C_noret_decl(f_7999)
static void C_ccall f_7999(C_word c,C_word *av) C_noret;
C_noret_decl(f_8006)
static void C_ccall f_8006(C_word c,C_word *av) C_noret;
C_noret_decl(f_8008)
static void C_ccall f_8008(C_word c,C_word *av) C_noret;
C_noret_decl(f_8036)
static void C_ccall f_8036(C_word c,C_word *av) C_noret;
C_noret_decl(f_8040)
static void C_ccall f_8040(C_word c,C_word *av) C_noret;
C_noret_decl(f_8046)
static void C_ccall f_8046(C_word c,C_word *av) C_noret;
C_noret_decl(f_8049)
static void C_ccall f_8049(C_word c,C_word *av) C_noret;
C_noret_decl(f_8052)
static void C_ccall f_8052(C_word c,C_word *av) C_noret;
C_noret_decl(f_8055)
static void C_ccall f_8055(C_word c,C_word *av) C_noret;
C_noret_decl(f_8060)
static void C_fcall f_8060(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8073)
static void C_ccall f_8073(C_word c,C_word *av) C_noret;
C_noret_decl(f_8076)
static void C_ccall f_8076(C_word c,C_word *av) C_noret;
C_noret_decl(f_8091)
static void C_ccall f_8091(C_word c,C_word *av) C_noret;
C_noret_decl(f_8110)
static void C_ccall f_8110(C_word c,C_word *av) C_noret;
C_noret_decl(f_8122)
static void C_ccall f_8122(C_word c,C_word *av) C_noret;
C_noret_decl(f_8136)
static void C_ccall f_8136(C_word c,C_word *av) C_noret;
C_noret_decl(f_8139)
static void C_ccall f_8139(C_word c,C_word *av) C_noret;
C_noret_decl(f_8142)
static void C_ccall f_8142(C_word c,C_word *av) C_noret;
C_noret_decl(f_8145)
static void C_ccall f_8145(C_word c,C_word *av) C_noret;
C_noret_decl(f_8148)
static void C_ccall f_8148(C_word c,C_word *av) C_noret;
C_noret_decl(f_8157)
static void C_ccall f_8157(C_word c,C_word *av) C_noret;
C_noret_decl(f_8160)
static void C_ccall f_8160(C_word c,C_word *av) C_noret;
C_noret_decl(f_8169)
static void C_ccall f_8169(C_word c,C_word *av) C_noret;
C_noret_decl(f_8172)
static void C_ccall f_8172(C_word c,C_word *av) C_noret;
C_noret_decl(f_8236)
static void C_ccall f_8236(C_word c,C_word *av) C_noret;
C_noret_decl(f_8243)
static void C_ccall f_8243(C_word c,C_word *av) C_noret;
C_noret_decl(f_8249)
static void C_ccall f_8249(C_word c,C_word *av) C_noret;
C_noret_decl(f_8256)
static void C_ccall f_8256(C_word c,C_word *av) C_noret;
C_noret_decl(f_8262)
static void C_ccall f_8262(C_word c,C_word *av) C_noret;
C_noret_decl(f_8264)
static void C_fcall f_8264(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8289)
static void C_ccall f_8289(C_word c,C_word *av) C_noret;
C_noret_decl(f_8298)
static void C_fcall f_8298(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8323)
static void C_ccall f_8323(C_word c,C_word *av) C_noret;
C_noret_decl(f_8332)
static void C_fcall f_8332(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8342)
static void C_ccall f_8342(C_word c,C_word *av) C_noret;
C_noret_decl(f_8355)
static void C_fcall f_8355(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8365)
static void C_ccall f_8365(C_word c,C_word *av) C_noret;
C_noret_decl(f_8378)
static void C_fcall f_8378(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8388)
static void C_ccall f_8388(C_word c,C_word *av) C_noret;
C_noret_decl(f_8402)
static void C_ccall f_8402(C_word c,C_word *av) C_noret;
C_noret_decl(f_8405)
static void C_ccall f_8405(C_word c,C_word *av) C_noret;
C_noret_decl(f_8408)
static void C_ccall f_8408(C_word c,C_word *av) C_noret;
C_noret_decl(f_8417)
static void C_ccall f_8417(C_word c,C_word *av) C_noret;
C_noret_decl(f_8420)
static void C_ccall f_8420(C_word c,C_word *av) C_noret;
C_noret_decl(f_8430)
static void C_ccall f_8430(C_word c,C_word *av) C_noret;
C_noret_decl(f_8437)
static void C_ccall f_8437(C_word c,C_word *av) C_noret;
C_noret_decl(f_8447)
static void C_ccall f_8447(C_word c,C_word *av) C_noret;
C_noret_decl(f_8453)
static void C_ccall f_8453(C_word c,C_word *av) C_noret;
C_noret_decl(f_8456)
static void C_ccall f_8456(C_word c,C_word *av) C_noret;
C_noret_decl(f_8461)
static void C_fcall f_8461(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8486)
static void C_ccall f_8486(C_word c,C_word *av) C_noret;
C_noret_decl(f_8497)
static void C_ccall f_8497(C_word c,C_word *av) C_noret;
C_noret_decl(f_8506)
static void C_ccall f_8506(C_word c,C_word *av) C_noret;
C_noret_decl(f_8512)
static void C_ccall f_8512(C_word c,C_word *av) C_noret;
C_noret_decl(f_8515)
static void C_ccall f_8515(C_word c,C_word *av) C_noret;
C_noret_decl(f_8518)
static void C_ccall f_8518(C_word c,C_word *av) C_noret;
C_noret_decl(f_8521)
static void C_ccall f_8521(C_word c,C_word *av) C_noret;
C_noret_decl(f_8530)
static void C_ccall f_8530(C_word c,C_word *av) C_noret;
C_noret_decl(f_8595)
static void C_ccall f_8595(C_word c,C_word *av) C_noret;
C_noret_decl(f_8608)
static void C_ccall f_8608(C_word c,C_word *av) C_noret;
C_noret_decl(f_8612)
static void C_ccall f_8612(C_word c,C_word *av) C_noret;
C_noret_decl(f_8616)
static void C_ccall f_8616(C_word c,C_word *av) C_noret;
C_noret_decl(f_8622)
static void C_ccall f_8622(C_word c,C_word *av) C_noret;
C_noret_decl(f_8628)
static void C_ccall f_8628(C_word c,C_word *av) C_noret;
C_noret_decl(f_8630)
static void C_ccall f_8630(C_word c,C_word *av) C_noret;
C_noret_decl(f_8636)
static void C_ccall f_8636(C_word c,C_word *av) C_noret;
C_noret_decl(f_8640)
static void C_ccall f_8640(C_word c,C_word *av) C_noret;
C_noret_decl(f_8649)
static void C_ccall f_8649(C_word c,C_word *av) C_noret;
C_noret_decl(f_8655)
static void C_ccall f_8655(C_word c,C_word *av) C_noret;
C_noret_decl(f_8659)
static void C_fcall f_8659(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8663)
static void C_ccall f_8663(C_word c,C_word *av) C_noret;
C_noret_decl(f_8676)
static void C_ccall f_8676(C_word c,C_word *av) C_noret;
C_noret_decl(f_8678)
static void C_ccall f_8678(C_word c,C_word *av) C_noret;
C_noret_decl(f_8686)
static void C_ccall f_8686(C_word c,C_word *av) C_noret;
C_noret_decl(f_8689)
static void C_ccall f_8689(C_word c,C_word *av) C_noret;
C_noret_decl(f_8696)
static void C_ccall f_8696(C_word c,C_word *av) C_noret;
C_noret_decl(f_8700)
static void C_ccall f_8700(C_word c,C_word *av) C_noret;
C_noret_decl(f_8709)
static void C_ccall f_8709(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_3028)
static void C_ccall trf_3028(C_word c,C_word *av) C_noret;
static void C_ccall trf_3028(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3028(t0,t1,t2);}

C_noret_decl(trf_3103)
static void C_ccall trf_3103(C_word c,C_word *av) C_noret;
static void C_ccall trf_3103(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3103(t0,t1,t2);}

C_noret_decl(trf_3828)
static void C_ccall trf_3828(C_word c,C_word *av) C_noret;
static void C_ccall trf_3828(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3828(t0,t1);}

C_noret_decl(trf_3929)
static void C_ccall trf_3929(C_word c,C_word *av) C_noret;
static void C_ccall trf_3929(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3929(t0,t1);}

C_noret_decl(trf_3958)
static void C_ccall trf_3958(C_word c,C_word *av) C_noret;
static void C_ccall trf_3958(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3958(t0,t1,t2);}

C_noret_decl(trf_3980)
static void C_ccall trf_3980(C_word c,C_word *av) C_noret;
static void C_ccall trf_3980(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3980(t0,t1,t2);}

C_noret_decl(trf_4037)
static void C_ccall trf_4037(C_word c,C_word *av) C_noret;
static void C_ccall trf_4037(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4037(t0,t1,t2);}

C_noret_decl(trf_4087)
static void C_ccall trf_4087(C_word c,C_word *av) C_noret;
static void C_ccall trf_4087(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4087(t0,t1,t2);}

C_noret_decl(trf_4097)
static void C_ccall trf_4097(C_word c,C_word *av) C_noret;
static void C_ccall trf_4097(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4097(t0,t1);}

C_noret_decl(trf_4142)
static void C_ccall trf_4142(C_word c,C_word *av) C_noret;
static void C_ccall trf_4142(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4142(t0,t1,t2);}

C_noret_decl(trf_4185)
static void C_ccall trf_4185(C_word c,C_word *av) C_noret;
static void C_ccall trf_4185(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4185(t0,t1);}

C_noret_decl(trf_4343)
static void C_ccall trf_4343(C_word c,C_word *av) C_noret;
static void C_ccall trf_4343(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4343(t0,t1);}

C_noret_decl(trf_4493)
static void C_ccall trf_4493(C_word c,C_word *av) C_noret;
static void C_ccall trf_4493(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4493(t0,t1,t2);}

C_noret_decl(trf_4528)
static void C_ccall trf_4528(C_word c,C_word *av) C_noret;
static void C_ccall trf_4528(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4528(t0,t1,t2);}

C_noret_decl(trf_4549)
static void C_ccall trf_4549(C_word c,C_word *av) C_noret;
static void C_ccall trf_4549(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4549(t0,t1,t2);}

C_noret_decl(trf_4800)
static void C_ccall trf_4800(C_word c,C_word *av) C_noret;
static void C_ccall trf_4800(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4800(t0,t1,t2);}

C_noret_decl(trf_4936)
static void C_ccall trf_4936(C_word c,C_word *av) C_noret;
static void C_ccall trf_4936(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4936(t0,t1,t2);}

C_noret_decl(trf_5004)
static void C_ccall trf_5004(C_word c,C_word *av) C_noret;
static void C_ccall trf_5004(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5004(t0,t1,t2,t3);}

C_noret_decl(trf_5042)
static void C_ccall trf_5042(C_word c,C_word *av) C_noret;
static void C_ccall trf_5042(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5042(t0,t1,t2);}

C_noret_decl(trf_5050)
static void C_ccall trf_5050(C_word c,C_word *av) C_noret;
static void C_ccall trf_5050(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5050(t0,t1);}

C_noret_decl(trf_5064)
static void C_ccall trf_5064(C_word c,C_word *av) C_noret;
static void C_ccall trf_5064(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5064(t0,t1);}

C_noret_decl(trf_5083)
static void C_ccall trf_5083(C_word c,C_word *av) C_noret;
static void C_ccall trf_5083(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5083(t0,t1,t2);}

C_noret_decl(trf_5097)
static void C_ccall trf_5097(C_word c,C_word *av) C_noret;
static void C_ccall trf_5097(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5097(t0,t1);}

C_noret_decl(trf_5223)
static void C_ccall trf_5223(C_word c,C_word *av) C_noret;
static void C_ccall trf_5223(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5223(t0,t1,t2);}

C_noret_decl(trf_5256)
static void C_ccall trf_5256(C_word c,C_word *av) C_noret;
static void C_ccall trf_5256(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5256(t0,t1,t2);}

C_noret_decl(trf_5368)
static void C_ccall trf_5368(C_word c,C_word *av) C_noret;
static void C_ccall trf_5368(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5368(t0,t1,t2,t3);}

C_noret_decl(trf_5386)
static void C_ccall trf_5386(C_word c,C_word *av) C_noret;
static void C_ccall trf_5386(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5386(t0,t1,t2);}

C_noret_decl(trf_5418)
static void C_ccall trf_5418(C_word c,C_word *av) C_noret;
static void C_ccall trf_5418(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5418(t0,t1,t2,t3);}

C_noret_decl(trf_5711)
static void C_ccall trf_5711(C_word c,C_word *av) C_noret;
static void C_ccall trf_5711(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5711(t0,t1,t2);}

C_noret_decl(trf_5784)
static void C_ccall trf_5784(C_word c,C_word *av) C_noret;
static void C_ccall trf_5784(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5784(t0,t1);}

C_noret_decl(trf_5796)
static void C_ccall trf_5796(C_word c,C_word *av) C_noret;
static void C_ccall trf_5796(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5796(t0,t1,t2,t3);}

C_noret_decl(trf_6104)
static void C_ccall trf_6104(C_word c,C_word *av) C_noret;
static void C_ccall trf_6104(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6104(t0,t1,t2);}

C_noret_decl(trf_6112)
static void C_ccall trf_6112(C_word c,C_word *av) C_noret;
static void C_ccall trf_6112(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6112(t0,t1,t2);}

C_noret_decl(trf_6142)
static void C_ccall trf_6142(C_word c,C_word *av) C_noret;
static void C_ccall trf_6142(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6142(t0,t1,t2);}

C_noret_decl(trf_6188)
static void C_ccall trf_6188(C_word c,C_word *av) C_noret;
static void C_ccall trf_6188(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6188(t0,t1,t2);}

C_noret_decl(trf_6201)
static void C_ccall trf_6201(C_word c,C_word *av) C_noret;
static void C_ccall trf_6201(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6201(t0,t1,t2);}

C_noret_decl(trf_6256)
static void C_ccall trf_6256(C_word c,C_word *av) C_noret;
static void C_ccall trf_6256(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6256(t0,t1,t2);}

C_noret_decl(trf_6297)
static void C_ccall trf_6297(C_word c,C_word *av) C_noret;
static void C_ccall trf_6297(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6297(t0,t1,t2);}

C_noret_decl(trf_6311)
static void C_ccall trf_6311(C_word c,C_word *av) C_noret;
static void C_ccall trf_6311(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6311(t0,t1,t2);}

C_noret_decl(trf_6338)
static void C_ccall trf_6338(C_word c,C_word *av) C_noret;
static void C_ccall trf_6338(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6338(t0,t1,t2);}

C_noret_decl(trf_6420)
static void C_ccall trf_6420(C_word c,C_word *av) C_noret;
static void C_ccall trf_6420(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6420(t0,t1,t2);}

C_noret_decl(trf_6422)
static void C_ccall trf_6422(C_word c,C_word *av) C_noret;
static void C_ccall trf_6422(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6422(t0,t1,t2,t3);}

C_noret_decl(trf_6425)
static void C_ccall trf_6425(C_word c,C_word *av) C_noret;
static void C_ccall trf_6425(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6425(t0,t1,t2);}

C_noret_decl(trf_6490)
static void C_ccall trf_6490(C_word c,C_word *av) C_noret;
static void C_ccall trf_6490(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6490(t0,t1);}

C_noret_decl(trf_6528)
static void C_ccall trf_6528(C_word c,C_word *av) C_noret;
static void C_ccall trf_6528(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6528(t0,t1,t2);}

C_noret_decl(trf_6533)
static void C_ccall trf_6533(C_word c,C_word *av) C_noret;
static void C_ccall trf_6533(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6533(t0,t1);}

C_noret_decl(trf_6568)
static void C_ccall trf_6568(C_word c,C_word *av) C_noret;
static void C_ccall trf_6568(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6568(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6571)
static void C_ccall trf_6571(C_word c,C_word *av) C_noret;
static void C_ccall trf_6571(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6571(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6603)
static void C_ccall trf_6603(C_word c,C_word *av) C_noret;
static void C_ccall trf_6603(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6603(t0,t1,t2);}

C_noret_decl(trf_6637)
static void C_ccall trf_6637(C_word c,C_word *av) C_noret;
static void C_ccall trf_6637(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6637(t0,t1,t2,t3);}

C_noret_decl(trf_6688)
static void C_ccall trf_6688(C_word c,C_word *av) C_noret;
static void C_ccall trf_6688(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6688(t0,t1,t2,t3);}

C_noret_decl(trf_6722)
static void C_ccall trf_6722(C_word c,C_word *av) C_noret;
static void C_ccall trf_6722(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6722(t0,t1,t2);}

C_noret_decl(trf_6773)
static void C_ccall trf_6773(C_word c,C_word *av) C_noret;
static void C_ccall trf_6773(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6773(t0,t1);}

C_noret_decl(trf_6776)
static void C_ccall trf_6776(C_word c,C_word *av) C_noret;
static void C_ccall trf_6776(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6776(t0,t1);}

C_noret_decl(trf_6799)
static void C_ccall trf_6799(C_word c,C_word *av) C_noret;
static void C_ccall trf_6799(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6799(t0,t1);}

C_noret_decl(trf_6808)
static void C_ccall trf_6808(C_word c,C_word *av) C_noret;
static void C_ccall trf_6808(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6808(t0,t1,t2,t3);}

C_noret_decl(trf_6882)
static void C_ccall trf_6882(C_word c,C_word *av) C_noret;
static void C_ccall trf_6882(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6882(t0,t1,t2,t3);}

C_noret_decl(trf_6897)
static void C_ccall trf_6897(C_word c,C_word *av) C_noret;
static void C_ccall trf_6897(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6897(t0,t1,t2,t3);}

C_noret_decl(trf_6956)
static void C_ccall trf_6956(C_word c,C_word *av) C_noret;
static void C_ccall trf_6956(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6956(t0,t1,t2,t3);}

C_noret_decl(trf_7017)
static void C_ccall trf_7017(C_word c,C_word *av) C_noret;
static void C_ccall trf_7017(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7017(t0,t1);}

C_noret_decl(trf_7058)
static void C_ccall trf_7058(C_word c,C_word *av) C_noret;
static void C_ccall trf_7058(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7058(t0,t1);}

C_noret_decl(trf_7115)
static void C_ccall trf_7115(C_word c,C_word *av) C_noret;
static void C_ccall trf_7115(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7115(t0,t1);}

C_noret_decl(trf_7117)
static void C_ccall trf_7117(C_word c,C_word *av) C_noret;
static void C_ccall trf_7117(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7117(t0,t1,t2);}

C_noret_decl(trf_7151)
static void C_ccall trf_7151(C_word c,C_word *av) C_noret;
static void C_ccall trf_7151(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7151(t0,t1,t2);}

C_noret_decl(trf_7170)
static void C_ccall trf_7170(C_word c,C_word *av) C_noret;
static void C_ccall trf_7170(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7170(t0,t1,t2);}

C_noret_decl(trf_7204)
static void C_ccall trf_7204(C_word c,C_word *av) C_noret;
static void C_ccall trf_7204(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7204(t0,t1,t2,t3);}

C_noret_decl(trf_7210)
static void C_ccall trf_7210(C_word c,C_word *av) C_noret;
static void C_ccall trf_7210(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7210(t0,t1,t2,t3);}

C_noret_decl(trf_7289)
static void C_ccall trf_7289(C_word c,C_word *av) C_noret;
static void C_ccall trf_7289(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7289(t0,t1,t2,t3);}

C_noret_decl(trf_7347)
static void C_ccall trf_7347(C_word c,C_word *av) C_noret;
static void C_ccall trf_7347(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7347(t0,t1,t2);}

C_noret_decl(trf_7353)
static void C_ccall trf_7353(C_word c,C_word *av) C_noret;
static void C_ccall trf_7353(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7353(t0,t1,t2);}

C_noret_decl(trf_7365)
static void C_ccall trf_7365(C_word c,C_word *av) C_noret;
static void C_ccall trf_7365(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7365(t0,t1,t2);}

C_noret_decl(trf_7402)
static void C_ccall trf_7402(C_word c,C_word *av) C_noret;
static void C_ccall trf_7402(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7402(t0,t1);}

C_noret_decl(trf_7408)
static void C_ccall trf_7408(C_word c,C_word *av) C_noret;
static void C_ccall trf_7408(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7408(t0,t1,t2);}

C_noret_decl(trf_7430)
static void C_ccall trf_7430(C_word c,C_word *av) C_noret;
static void C_ccall trf_7430(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7430(t0,t1);}

C_noret_decl(trf_7473)
static void C_ccall trf_7473(C_word c,C_word *av) C_noret;
static void C_ccall trf_7473(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7473(t0,t1,t2);}

C_noret_decl(trf_7593)
static void C_ccall trf_7593(C_word c,C_word *av) C_noret;
static void C_ccall trf_7593(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7593(t0,t1);}

C_noret_decl(trf_7599)
static void C_ccall trf_7599(C_word c,C_word *av) C_noret;
static void C_ccall trf_7599(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7599(t0,t1);}

C_noret_decl(trf_7605)
static void C_ccall trf_7605(C_word c,C_word *av) C_noret;
static void C_ccall trf_7605(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7605(t0,t1);}

C_noret_decl(trf_7619)
static void C_ccall trf_7619(C_word c,C_word *av) C_noret;
static void C_ccall trf_7619(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7619(t0,t1,t2);}

C_noret_decl(trf_7625)
static void C_ccall trf_7625(C_word c,C_word *av) C_noret;
static void C_ccall trf_7625(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7625(t0,t1,t2);}

C_noret_decl(trf_7633)
static void C_ccall trf_7633(C_word c,C_word *av) C_noret;
static void C_ccall trf_7633(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7633(t0,t1,t2);}

C_noret_decl(trf_7701)
static void C_ccall trf_7701(C_word c,C_word *av) C_noret;
static void C_ccall trf_7701(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7701(t0,t1,t2);}

C_noret_decl(trf_7717)
static void C_ccall trf_7717(C_word c,C_word *av) C_noret;
static void C_ccall trf_7717(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7717(t0,t1,t2);}

C_noret_decl(trf_7764)
static void C_ccall trf_7764(C_word c,C_word *av) C_noret;
static void C_ccall trf_7764(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7764(t0,t1);}

C_noret_decl(trf_7770)
static void C_ccall trf_7770(C_word c,C_word *av) C_noret;
static void C_ccall trf_7770(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7770(t0,t1);}

C_noret_decl(trf_7831)
static void C_ccall trf_7831(C_word c,C_word *av) C_noret;
static void C_ccall trf_7831(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7831(t0,t1);}

C_noret_decl(trf_7836)
static void C_ccall trf_7836(C_word c,C_word *av) C_noret;
static void C_ccall trf_7836(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7836(t0,t1,t2);}

C_noret_decl(trf_8060)
static void C_ccall trf_8060(C_word c,C_word *av) C_noret;
static void C_ccall trf_8060(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8060(t0,t1,t2);}

C_noret_decl(trf_8264)
static void C_ccall trf_8264(C_word c,C_word *av) C_noret;
static void C_ccall trf_8264(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8264(t0,t1,t2);}

C_noret_decl(trf_8298)
static void C_ccall trf_8298(C_word c,C_word *av) C_noret;
static void C_ccall trf_8298(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8298(t0,t1,t2);}

C_noret_decl(trf_8332)
static void C_ccall trf_8332(C_word c,C_word *av) C_noret;
static void C_ccall trf_8332(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8332(t0,t1,t2);}

C_noret_decl(trf_8355)
static void C_ccall trf_8355(C_word c,C_word *av) C_noret;
static void C_ccall trf_8355(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8355(t0,t1,t2);}

C_noret_decl(trf_8378)
static void C_ccall trf_8378(C_word c,C_word *av) C_noret;
static void C_ccall trf_8378(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8378(t0,t1,t2);}

C_noret_decl(trf_8461)
static void C_ccall trf_8461(C_word c,C_word *av) C_noret;
static void C_ccall trf_8461(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8461(t0,t1,t2);}

C_noret_decl(trf_8659)
static void C_ccall trf_8659(C_word c,C_word *av) C_noret;
static void C_ccall trf_8659(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8659(t0,t1,t2);}

/* f9362 in doloop1843 in k7829 in k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in ... */
static void C_ccall f9362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9362,2,av);}
/* csi.scm:1091: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[89]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[89]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[83]+1);
tp(4,av2);}}

/* f9402 in k8120 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in ... */
static void C_ccall f9402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f9402,2,av);}
/* csi.scm:144: chicken.base#print */
t2=*((C_word*)lf[106]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[316];
av2[3]=t1;
av2[4]=lf[317];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* f9420 in k8400 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in ... */
static void C_ccall f9420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f9420,2,av);}
/* csi.scm:1042: chicken.base#case-sensitive */
t2=C_fast_retrieve(lf[326]);{
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

/* f9424 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in ... */
static void C_ccall f9424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f9424,2,av);}
/* csi.scm:144: chicken.base#print */
t2=*((C_word*)lf[106]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[316];
av2[3]=t1;
av2[4]=lf[317];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k2498 */
static void C_ccall f_2500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2500,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2503,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k2501 in k2498 */
static void C_ccall f_2503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2503,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2506,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k2504 in k2501 in k2498 */
static void C_ccall f_2506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2506,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2509,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_2509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2509,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2512,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_2512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2512,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2515,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_2515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2515,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2518,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

/* k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_2518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2518,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2521,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_2521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2521,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2524,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_repl_toplevel(2,av2);}}

/* k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_2524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2524,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2527,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_2527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,7)))){
C_save_and_reclaim((void *)f_2527,2,av);}
a=C_alloc(11);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2530,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:44: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[403]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[403]+1);
av2[1]=t3;
av2[2]=lf[404];
av2[3]=lf[404];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[405];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_2530(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2530,2,av);}
a=C_alloc(6);
t2=C_mutate(&lf[1] /* (set! chicken.csi#constant671 ...) */,lf[2]);
t3=C_set_block_item(lf[3] /* ##sys#repl-print-length-limit */,0,C_fix(2048));
t4=C_a_i_cons(&a,2,lf[4],C_fast_retrieve(lf[5]));
t5=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#features ...) */,t4);
t6=C_set_block_item(lf[6] /* ##sys#notices-enabled */,0,C_SCHEME_TRUE);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3820,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:81: chicken.base#make-parameter */
t8=C_fast_retrieve(lf[402]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* loop in loop in k8234 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in ... */
static void C_fcall f_3028(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_3028,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3041,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* mini-srfi-1.scm:106: test */
t5=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=t4;
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}}

/* k3039 in loop in loop in k8234 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in ... */
static void C_ccall f_3041(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3041,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* mini-srfi-1.scm:107: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3028(t4,((C_word*)t0)[4],t3);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3055,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* mini-srfi-1.scm:109: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_3028(t7,t4,t6);}}

/* k3053 in k3039 in loop in loop in k8234 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in ... */
static void C_ccall f_3055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3055,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k8234 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in ... */
static void C_fcall f_3103(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,0,3)))){
C_save_and_reclaim_args((void *)trf_3103,3,t0,t1,t2);}
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
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3117,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3130,a[2]=((C_word*)t0)[2],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=t4;
t10=((C_word*)t0)[3];
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3028,a[2]=t12,a[3]=t10,a[4]=t9,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_3028(t14,t8,t6);}}

/* k3115 in loop in k8234 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in ... */
static void C_ccall f_3117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3117,2,av);}
a=C_alloc(3);
t2=C_i_equalp(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?((C_word*)t0)[4]:C_a_i_cons(&a,2,((C_word*)t0)[5],t1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3128 in loop in k8234 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in ... */
static void C_ccall f_3130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3130,2,av);}
/* mini-srfi-1.scm:123: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3103(t2,((C_word*)t0)[3],t1);}

/* k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_3820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3820,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[7]+1 /* (set! chicken.csi#editor-command ...) */,t1);
t3=lf[8] /* chicken.csi#selected-frame */ =C_SCHEME_FALSE;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3825,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:85: chicken.process-context#get-environment-variable */
t5=C_fast_retrieve(lf[23]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[401];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_3825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3825,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3828,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_3828(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8700,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:86: chicken.process-context#get-environment-variable */
t4=C_fast_retrieve(lf[23]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[400];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_3828(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_3828,2,t0,t1);}
a=C_alloc(7);
t2=C_mutate(&lf[9] /* (set! chicken.csi#default-editor ...) */,t1);
t3=C_mutate(&lf[10] /* (set! chicken.csi#dirseparator? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3868,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate(&lf[12] /* (set! chicken.csi#chop-separator ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3883,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3910,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[396]);
C_word av2[4];
av2[0]=*((C_word*)lf[396]+1);
av2[1]=t5;
av2[2]=C_fix(256);
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k3832 in k8451 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in ... */
static void C_ccall f_3834(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3834,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3837,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3844,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[356],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,C_retrieve2(lf[1],C_text("chicken.csi#constant671")),t4);
t6=C_a_i_cons(&a,2,lf[357],t5);
/* csi.scm:44: ##sys#print-to-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[358]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[358]+1);
av2[1]=t3;
av2[2]=t6;
tp(3,av2);}}

/* k3835 in k3832 in k8451 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in ... */
static void C_ccall f_3837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3837,2,av);}
/* csi.scm:121: scheme#display */
t2=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[355];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3842 in k3832 in k8451 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in ... */
static void C_ccall f_3844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3844,2,av);}
/* csi.scm:116: scheme#display */
t2=*((C_word*)lf[93]+1);{
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

/* chicken.csi#dirseparator? in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_3868(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3868,3,av);}
if(C_truep(*((C_word*)lf[11]+1))){
t3=C_i_char_equalp(t2,C_make_character(92));
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?t3:C_i_char_equalp(t2,C_make_character(47)));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_char_equalp(t2,C_make_character(47));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.csi#chop-separator in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_3883(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3883,3,av);}
a=C_alloc(10);
t3=C_block_size(t2);
t4=C_a_i_fixnum_difference(&a,2,t3,C_fix(1));
t5=C_i_string_ref(t2,t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3897,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_greaterp(t4,C_fix(0)))){
/* csi.scm:158: dirseparator? */
t7=C_retrieve2(lf[10],C_text("chicken.csi#dirseparator\077"));{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
f_3868(3,av2);}}
else{
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_3897(2,av2);}}}

/* k3895 in chicken.csi#chop-separator in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_3897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3897,2,av);}
if(C_truep(t1)){
/* csi.scm:159: substring */
t2=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_3910(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(49,c,3)))){
C_save_and_reclaim((void *)f_3910,2,av);}
a=C_alloc(49);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3929,tmp=(C_word)a,a+=2,tmp);
t4=C_mutate(&lf[17] /* (set! chicken.csi#lookup-script-file ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3980,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t5=C_SCHEME_UNDEFINED;
t6=C_a_i_vector(&a,32,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5);
t7=C_mutate(&lf[25] /* (set! chicken.csi#history-list ...) */,t6);
t8=lf[26] /* chicken.csi#history-count */ =C_fix(1);;
t9=C_fast_retrieve(lf[27]);
t10=C_mutate(&lf[28] /* (set! chicken.csi#history-add ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4087,a[2]=t9,tmp=(C_word)a,a+=3,tmp));
t11=C_mutate(&lf[30] /* (set! chicken.csi#history-ref ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4185,tmp=(C_word)a,a+=2,tmp));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4252,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8678,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:246: chicken.repl#repl-prompt */
t14=C_fast_retrieve(lf[395]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t14;
av2[1]=t12;
av2[2]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(3,av2);}}

/* addext in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_3929(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3929,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3936,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:169: chicken.file#file-exists? */
t4=C_fast_retrieve(lf[14]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3934 in addext in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_3936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3936,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3939,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=t3;
av2[3]=lf[16];
tp(4,av2);}}}

/* k3937 in k3934 in addext in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_3939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3939,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3945,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:172: chicken.file#file-exists? */
t4=C_fast_retrieve(lf[14]);{
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

/* k3943 in k3937 in k3934 in addext in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_3945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3945,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k3994 in k3982 in chicken.csi#lookup-script-file in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_3958(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3958,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3971,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_subchar(((C_word*)t0)[4],t2);
/* csi.scm:177: proc */
t5=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}}

/* k3969 in loop in k3994 in k3982 in chicken.csi#lookup-script-file in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_3971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3971,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* csi.scm:178: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3958(t3,((C_word*)t0)[2],t2);}}

/* chicken.csi#lookup-script-file in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_3980(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3980,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3984,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:180: chicken.process-context#get-environment-variable */
t4=C_fast_retrieve(lf[23]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[24];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3982 in chicken.csi#lookup-script-file in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_3984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3984,2,av);}
a=C_alloc(7);
t2=t1;
t3=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3996,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t5=C_i_string_ref(((C_word*)t0)[2],C_fix(0));
/* csi.scm:182: dirseparator? */
t6=C_retrieve2(lf[10],C_text("chicken.csi#dirseparator\077"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
f_3868(3,av2);}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3994 in k3982 in chicken.csi#lookup-script-file in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_3996(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_3996,2,av);}
a=C_alloc(15);
if(C_truep(t1)){
/* csi.scm:182: addext */
f_3929(((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4005,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_retrieve2(lf[10],C_text("chicken.csi#dirseparator\077"));
t4=((C_word*)t0)[4];
t5=C_block_size(t4);
t6=t5;
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3958,a[2]=t6,a[3]=t8,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_3958(t10,t2,C_fix(0));}}

/* k4003 in k3994 in k3982 in chicken.csi#lookup-script-file in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4005(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_4005,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4008,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=(C_truep(((C_word*)t0)[5])?C_i_foreign_block_argumentp(((C_word*)t0)[5]):C_SCHEME_FALSE);
t5=C_i_foreign_fixnum_argumentp(C_fix(256));
t6=stub703(t3,t4,t5);
/* csi.scm:167: ##sys#peek-nonnull-c-string */
t7=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t2;
av2[2]=t6;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4022,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:186: addext */
f_3929(t2,((C_word*)t0)[4]);}}

/* k4006 in k4003 in k3994 in k3982 in chicken.csi#lookup-script-file in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4008,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4015,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4019,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:185: chop-separator */
t4=C_retrieve2(lf[12],C_text("chicken.csi#chop-separator"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
f_3883(3,av2);}}

/* k4013 in k4006 in k4003 in k3994 in k3982 in chicken.csi#lookup-script-file in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4015,2,av);}
/* csi.scm:185: addext */
f_3929(((C_word*)t0)[3],t1);}

/* k4017 in k4006 in k4003 in k3994 in k3982 in chicken.csi#lookup-script-file in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4019,2,av);}
/* csi.scm:185: scheme#string-append */
t2=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[19];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4020 in k4003 in k3994 in k3982 in chicken.csi#lookup-script-file in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4022,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4028,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=lf[22];
av2[3]=t3;
tp(4,av2);}}}

/* k4026 in k4020 in k4003 in k3994 in k3982 in chicken.csi#lookup-script-file in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4028(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4028,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4035,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:189: ##sys#split-path */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[21]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k4033 in k4026 in k4020 in k4003 in k3994 in k3982 in chicken.csi#lookup-script-file in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_ccall f_4035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4035,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4037,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4037(t5,((C_word*)t0)[4],t1);}

/* loop in k4033 in k4026 in k4020 in k4003 in k3994 in k3982 in chicken.csi#lookup-script-file in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_fcall f_4037(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_4037,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4047,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4064,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=C_slot(t2,C_fix(0));
/* csi.scm:191: chop-separator */
t6=C_retrieve2(lf[12],C_text("chicken.csi#chop-separator"));{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
f_3883(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4045 in loop in k4033 in k4026 in k4020 in k4003 in k3994 in k3982 in chicken.csi#lookup-script-file in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_ccall f_4047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4047,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4050,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:192: addext */
f_3929(t2,t1);}

/* k4048 in k4045 in loop in k4033 in k4026 in k4020 in k4003 in k3994 in k3982 in chicken.csi#lookup-script-file in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in ... */
static void C_ccall f_4050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4050,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* csi.scm:193: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4037(t3,((C_word*)t0)[2],t2);}}

/* k4062 in loop in k4033 in k4026 in k4020 in k4003 in k3994 in k3982 in chicken.csi#lookup-script-file in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_ccall f_4064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4064,2,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* chicken.csi#history-add in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_4087(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_4087,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[29]+1):C_slot(t2,C_fix(0)));
t5=t4;
t6=C_block_size(C_retrieve2(lf[25],C_text("chicken.csi#history-list")));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4097,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(C_retrieve2(lf[26],C_text("chicken.csi#history-count")),t6))){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4111,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=C_fixnum_times(C_fix(2),t6);
/* csi.scm:208: vector-resize */
t10=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t10;
av2[1]=t8;
av2[2]=C_retrieve2(lf[25],C_text("chicken.csi#history-list"));
av2[3]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
t8=t7;
f_4097(t8,C_SCHEME_UNDEFINED);}}

/* k4095 in chicken.csi#history-add in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_4097(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_4097,2,t0,t1);}
t2=C_i_vector_set(C_retrieve2(lf[25],C_text("chicken.csi#history-list")),C_retrieve2(lf[26],C_text("chicken.csi#history-count")),((C_word*)t0)[2]);
t3=C_fixnum_plus(C_retrieve2(lf[26],C_text("chicken.csi#history-count")),C_fix(1));
t4=lf[26] /* chicken.csi#history-count */ =t3;;
t5=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k4109 in chicken.csi#history-add in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4111,2,av);}
t2=C_mutate(&lf[25] /* (set! chicken.csi#history-list ...) */,t1);
t3=((C_word*)t0)[2];
f_4097(t3,t2);}

/* doloop760 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_4142(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4142,3,t0,t1,t2);}
a=C_alloc(6);
t3=t2;
t4=C_retrieve2(lf[26],C_text("chicken.csi#history-count"));
if(C_truep(C_i_greater_or_equalp(t3,C_retrieve2(lf[26],C_text("chicken.csi#history-count"))))){
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=*((C_word*)lf[83]+1);
t6=*((C_word*)lf[83]+1);
t7=C_i_check_port_2(*((C_word*)lf[83]+1),C_fix(2),C_SCHEME_TRUE,lf[84]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4154,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:221: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[89]);
C_word av2[4];
av2[0]=*((C_word*)lf[89]+1);
av2[1]=t8;
av2[2]=C_make_character(35);
av2[3]=*((C_word*)lf[83]+1);
tp(4,av2);}}}

/* k4152 in doloop760 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4154,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4157,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:221: ##sys#print */
t3=*((C_word*)lf[86]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4155 in k4152 in doloop760 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4157,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4160,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:221: ##sys#print */
t3=*((C_word*)lf[86]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[88];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4158 in k4155 in k4152 in doloop760 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_ccall f_4160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4160,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4163,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4175,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:222: ##sys#with-print-length-limit */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[87]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[87]+1);
av2[1]=t2;
av2[2]=C_fix(80);
av2[3]=t3;
tp(4,av2);}}

/* k4161 in k4158 in k4155 in k4152 in doloop760 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_4163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4163,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4166,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:226: newline */
t3=*((C_word*)lf[85]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4164 in k4161 in k4158 in k4155 in k4152 in doloop760 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_ccall f_4166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4166,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4142(t3,((C_word*)t0)[4],t2);}

/* a4174 in k4158 in k4155 in k4152 in doloop760 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_4175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4175,2,av);}
t2=C_i_vector_ref(C_retrieve2(lf[25],C_text("chicken.csi#history-list")),((C_word*)t0)[2]);
/* csi.scm:225: ##sys#print */
t3=*((C_word*)lf[86]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=*((C_word*)lf[83]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* chicken.csi#history-ref in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_4185(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4185,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4189,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:229: scheme#inexact->exact */
t4=*((C_word*)lf[33]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4187 in chicken.csi#history-ref in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4189,2,av);}
t2=C_fixnum_greaterp(t1,C_fix(0));
t3=(C_truep(t2)?C_fixnum_less_or_equal_p(t1,C_retrieve2(lf[26],C_text("chicken.csi#history-count"))):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_vector_ref(C_retrieve2(lf[25],C_text("chicken.csi#history-list")),t1);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* csi.scm:232: ##sys#error */
t4=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[32];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* ##sys#user-read-hook in doloop1843 in k7829 in k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in ... */
static void C_ccall f_4212(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4212,4,av);}
a=C_alloc(3);
t4=C_i_char_equalp(C_make_character(41),t2);
t5=(C_truep(t4)?t4:C_u_i_char_whitespacep(t2));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4229,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_fixnum_difference(C_retrieve2(lf[26],C_text("chicken.csi#history-count")),C_fix(1));
/* csi.scm:241: history-ref */
f_4185(t6,t7);}
else{
/* csi.scm:242: old-hook */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}}

/* k4227 in user-read-hook in doloop1843 in k7829 in k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in ... */
static void C_ccall f_4229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4229,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,lf[281],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#sharp-number-hook in doloop1843 in k7829 in k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in ... */
static void C_ccall f_4241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4241,4,av);}
a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4249,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:244: history-ref */
f_4185(t4,t3);}

/* k4247 in sharp-number-hook in doloop1843 in k7829 in k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in ... */
static void C_ccall f_4249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4249,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,lf[281],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4252(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_4252,2,av);}
a=C_alloc(18);
t2=C_set_block_item(lf[34] /* ##sys#break-on-error */,0,C_SCHEME_FALSE);
t3=C_fast_retrieve(lf[35]);
t4=C_mutate((C_word*)lf[35]+1 /* (set! ##sys#read-prompt-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4264,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=lf[38] /* chicken.csi#command-table */ =C_SCHEME_END_OF_LIST;;
t6=C_mutate((C_word*)lf[39]+1 /* (set! chicken.csi#toplevel-command ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4277,tmp=(C_word)a,a+=2,tmp));
t7=C_fast_retrieve(lf[41]);
t8=C_fast_retrieve(lf[42]);
t9=C_fast_retrieve(lf[43]);
t10=C_fast_retrieve(lf[44]);
t11=C_fast_retrieve(lf[45]);
t12=*((C_word*)lf[46]+1);
t13=C_mutate(&lf[47] /* (set! chicken.csi#csi-eval ...) */,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4327,a[2]=t11,a[3]=t10,a[4]=t9,a[5]=t8,a[6]=t7,a[7]=t12,tmp=(C_word)a,a+=8,tmp));
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4896,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t15=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8636,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:415: toplevel-command */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[39]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t14;
av2[2]=lf[388];
av2[3]=t15;
av2[4]=lf[389];
tp(5,av2);}}

/* ##sys#read-prompt-hook in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4264,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4271,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_tty_forcedp();
if(C_truep(t3)){
if(C_truep(t3)){
/* csi.scm:268: old */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
/* csi.scm:261: ##sys#tty-port? */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t2;
av2[2]=*((C_word*)lf[37]+1);
tp(3,av2);}}}

/* k4269 in read-prompt-hook in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4271,2,av);}
if(C_truep(t1)){
/* csi.scm:268: old */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.csi#toplevel-command in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +12,c,2)))){
C_save_and_reclaim((void*)f_4277,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+12);
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_check_symbol_2(t2,lf[40]);
t9=(C_truep(t7)?C_i_check_string_2(t7,lf[40]):C_SCHEME_UNDEFINED);
t10=C_i_assq(t2,C_retrieve2(lf[38],C_text("chicken.csi#command-table")));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4297,a[2]=t3,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t12=(
  /* csi.scm:275: g825 */
  f_4297(C_a_i(&a,6),t11,t10)
);
t13=t1;{
C_word *av2=av;
av2[0]=t13;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t11=C_a_i_list3(&a,3,t2,t3,t7);
t12=C_a_i_cons(&a,2,t11,C_retrieve2(lf[38],C_text("chicken.csi#command-table")));
t13=C_mutate(&lf[38] /* (set! chicken.csi#command-table ...) */,t12);
t14=t1;{
C_word *av2=av;
av2[0]=t14;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}}

/* g825 in chicken.csi#toplevel-command in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static C_word C_fcall f_4297(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
return(C_i_set_cdr(t1,t2));}

/* chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4327(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4327,3,av);}
a=C_alloc(10);
if(C_truep(C_eofp(t2))){
/* csi.scm:294: chicken.base#exit */
t3=C_fast_retrieve(lf[48]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4343,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(0));
t5=t3;
f_4343(t5,C_eqp(lf[110],t4));}
else{
t4=t3;
f_4343(t4,C_SCHEME_FALSE);}}}

/* k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_4343(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_4343,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_assq(t2,C_retrieve2(lf[38],C_text("chicken.csi#command-table")));
if(C_truep(t3)){
t4=((C_word*)t0)[3];
t5=C_i_cadr(t3);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4360,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:299: g858 */
t7=t5;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)C_fast_retrieve_proc(t7))(2,av2);}}
else{
t4=C_eqp(t2,lf[49]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4375,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:306: read */
t6=*((C_word*)lf[51]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_eqp(t2,lf[52]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4398,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:310: read */
t7=*((C_word*)lf[51]+1);{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=C_eqp(t2,lf[54]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4416,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:315: read */
t8=*((C_word*)lf[51]+1);{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=C_eqp(t2,lf[56]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4431,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:319: read */
t9=*((C_word*)lf[51]+1);{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t8=C_eqp(t2,lf[58]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4446,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:323: read */
t10=*((C_word*)lf[51]+1);{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t9=C_eqp(t2,lf[59]);
if(C_truep(t9)){
/* csi.scm:328: report */
t10=C_retrieve2(lf[60],C_text("chicken.csi#report"));
f_5042(t10,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}
else{
t10=C_eqp(t2,lf[61]);
if(C_truep(t10)){
/* csi.scm:329: chicken.repl#quit */
t11=C_fast_retrieve(lf[62]);{
C_word av2[2];
av2[0]=t11;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t11=C_eqp(t2,lf[63]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4485,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4518,a[2]=((C_word*)t0)[6],a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:331: read-line */
t14=((C_word*)t0)[7];{
C_word av2[2];
av2[0]=t14;
av2[1]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
t12=C_eqp(t2,lf[65]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4527,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4574,a[2]=((C_word*)t0)[6],a[3]=t13,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:335: read-line */
t15=((C_word*)t0)[7];{
C_word av2[2];
av2[0]=t15;
av2[1]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}
else{
t13=C_eqp(t2,lf[69]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4583,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:339: read */
t15=*((C_word*)lf[51]+1);{
C_word av2[2];
av2[0]=t15;
av2[1]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}
else{
t14=C_eqp(t2,lf[73]);
if(C_truep(t14)){
if(C_truep(C_fast_retrieve(lf[74]))){
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4635,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t16=C_a_i_list1(&a,1,C_fast_retrieve(lf[74]));
/* csi.scm:345: history-add */
t17=C_retrieve2(lf[28],C_text("chicken.csi#history-add"));
f_4087(t17,t15,t16);}
else{
t15=C_SCHEME_UNDEFINED;
t16=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t16;
av2[1]=t15;
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}}
else{
t15=C_eqp(t2,lf[75]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4651,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4669,a[2]=t16,tmp=(C_word)a,a+=3,tmp);
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4673,a[2]=t17,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:350: editor-command */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[7]);
C_word av2[2];
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t18;
tp(2,av2);}}
else{
t16=C_eqp(t2,lf[80]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4689,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t18=*((C_word*)lf[29]+1);
/* csi.scm:214: scheme#vector-fill! */
t19=*((C_word*)lf[81]+1);{
C_word av2[4];
av2[0]=t19;
av2[1]=t17;
av2[2]=C_retrieve2(lf[25],C_text("chicken.csi#history-list"));
av2[3]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t19+1)))(4,av2);}}
else{
t17=C_eqp(t2,lf[82]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4701,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4142,a[2]=t20,tmp=(C_word)a,a+=3,tmp));
t22=((C_word*)t20)[1];
f_4142(t22,t18,C_fix(1));}
else{
t18=C_eqp(t2,lf[90]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4713,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:361: show-frameinfo */
f_6773(t19,C_retrieve2(lf[8],C_text("chicken.csi#selected-frame")));}
else{
t19=C_eqp(t2,lf[92]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4725,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4732,a[2]=t20,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:364: read */
t22=*((C_word*)lf[51]+1);{
C_word av2[2];
av2[0]=t22;
av2[1]=t21;
((C_proc)(void*)(*((C_word*)t22+1)))(2,av2);}}
else{
t20=C_eqp(t2,lf[96]);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4745,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:367: read */
t22=*((C_word*)lf[51]+1);{
C_word av2[2];
av2[0]=t22;
av2[1]=t21;
((C_proc)(void*)(*((C_word*)t22+1)))(2,av2);}}
else{
t21=C_eqp(t2,lf[104]);
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4754,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:369: read-line */
t23=((C_word*)t0)[7];{
C_word av2[2];
av2[0]=t23;
av2[1]=t22;
((C_proc)(void*)(*((C_word*)t23+1)))(2,av2);}}
else{
t22=C_eqp(t2,lf[105]);
if(C_truep(t22)){
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4773,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:374: display */
t24=*((C_word*)lf[93]+1);{
C_word av2[3];
av2[0]=t24;
av2[1]=t23;
av2[2]=lf[108];
((C_proc)(void*)(*((C_word*)t24+1)))(3,av2);}}
else{
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4824,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:405: printf */
t24=*((C_word*)lf[76]+1);{
C_word av2[4];
av2[0]=t24;
av2[1]=t23;
av2[2]=lf[109];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t24+1)))(4,av2);}}}}}}}}}}}}}}}}}}}}}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4870,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4876,a[2]=((C_word*)t0)[9],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:408: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}}

/* k4358 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4360,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4373 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4375,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4378,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4385,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4389,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:307: expand */
t5=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4376 in k4373 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4378,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4383 in k4373 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4385(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4385,2,av);}
/* csi.scm:307: pretty-print */
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

/* k4387 in k4373 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4389,2,av);}
/* csi.scm:307: chicken.syntax#strip-syntax */
t2=C_fast_retrieve(lf[50]);{
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

/* k4396 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4398,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4401,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:311: eval */
t3=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4399 in k4396 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4401,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4404,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:312: pretty-print */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4402 in k4399 in k4396 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4404,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4414 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4416,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4419,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:316: eval */
t3=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4417 in k4414 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4419(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4419,2,av);}
/* csi.scm:317: describe */
t2=C_retrieve2(lf[55],C_text("chicken.csi#describe"));
f_5368(t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k4429 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4431,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4434,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:320: eval */
t3=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4432 in k4429 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4434,2,av);}
/* csi.scm:321: dump */
f_6420(((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k4444 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4446,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4449,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:324: read */
t4=*((C_word*)lf[51]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4447 in k4444 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4449,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4452,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:325: eval */
t4=*((C_word*)lf[53]+1);{
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

/* k4450 in k4447 in k4444 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4452,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4455,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:326: eval */
t4=*((C_word*)lf[53]+1);{
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

/* k4453 in k4450 in k4447 in k4444 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_ccall f_4455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4455,2,av);}
a=C_alloc(3);
/* csi.scm:327: dump */
f_6420(((C_word*)t0)[2],((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* k4483 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4485,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4488,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4493,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4493(t6,t2,t1);}

/* k4486 in k4483 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4488,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop883 in k4483 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_4493(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4493,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4503,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:332: g884 */
t5=*((C_word*)lf[64]+1);{
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

/* k4501 in for-each-loop883 in k4483 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4503,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4493(t3,((C_word*)t0)[4],t2);}

/* k4516 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4518,2,av);}
/* csi.scm:331: string-split */
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

/* k4525 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4527(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_4527,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4528,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4544,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4549,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4549(t7,t3,t1);}

/* g903 in k4525 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_4528(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_4528,3,t0,t1,t2);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4534,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:336: g918 */
t4=((C_word*)t0)[3];{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[68];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* a4533 in g903 in k4525 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4534,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4538,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:336: pretty-print */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4536 in a4533 in g903 in k4525 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_ccall f_4538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4538,2,av);}
/* csi.scm:336: chicken.base#print* */
t2=*((C_word*)lf[66]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[67];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4542 in k4525 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4544,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop902 in k4525 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_4549(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4549,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4559,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:336: g903 */
t5=((C_word*)t0)[3];
f_4528(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4557 in for-each-loop902 in k4525 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4559,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4549(t3,((C_word*)t0)[4],t2);}

/* k4572 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4574,2,av);}
/* csi.scm:335: string-split */
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

/* k4581 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4583,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4588,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4616,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:340: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a4587 in k4581 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4588,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4592,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:340: ##sys#start-timer */
t3=*((C_word*)lf[72]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4590 in a4587 in k4581 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4592,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4597,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4603,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:340: ##sys#call-with-values */{
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

/* a4596 in k4590 in a4587 in k4581 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_ccall f_4597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4597,2,av);}
/* csi.scm:340: eval */
t2=*((C_word*)lf[53]+1);{
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

/* a4602 in k4590 in a4587 in k4581 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_ccall f_4603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_4603,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+7);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4607,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4614,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:340: ##sys#stop-timer */
t5=*((C_word*)lf[71]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k4605 in a4602 in k4590 in a4587 in k4581 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_4607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4607,2,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
C_apply_values(3,av2);}}

/* k4612 in a4602 in k4590 in a4587 in k4581 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_4614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4614,2,av);}
/* csi.scm:340: ##sys#display-times */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* a4615 in k4581 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_4616,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4620,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:341: history-add */
t4=C_retrieve2(lf[28],C_text("chicken.csi#history-add"));
f_4087(t4,t3,t2);}

/* k4618 in a4615 in k4581 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4620,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
C_apply(4,av2);}}

/* k4633 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4635,2,av);}
/* csi.scm:346: describe */
t2=C_retrieve2(lf[55],C_text("chicken.csi#describe"));
f_5368(t2,((C_word*)t0)[2],C_fast_retrieve(lf[74]),C_SCHEME_END_OF_LIST);}

/* k4649 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4651,2,av);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(C_i_not(t2))){
/* csi.scm:353: printf */
t3=*((C_word*)lf[76]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[77];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4667 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4669,2,av);}
/* csi.scm:348: chicken.process#system */
t2=C_fast_retrieve(lf[78]);{
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

/* k4671 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4673,2,av);}
a=C_alloc(4);
t2=(C_truep(t1)?t1:C_retrieve2(lf[9],C_text("chicken.csi#default-editor")));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4680,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:351: read-line */
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k4678 in k4671 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4680,2,av);}
/* csi.scm:349: scheme#string-append */
t2=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[79];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4687 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4689,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4699 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4701,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4711 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4713,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4723 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4725,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4730 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4732(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4732,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=t1;
t4=C_i_numberp(t3);
t5=C_i_not(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7058,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
t7=t6;
f_7058(t7,t5);}
else{
t7=C_i_not(C_fast_retrieve(lf[95]));
if(C_truep(t7)){
t8=t6;
f_7058(t8,t7);}
else{
t8=C_fixnum_lessp(t3,C_fix(0));
if(C_truep(t8)){
t9=t6;
f_7058(t9,t8);}
else{
t9=C_i_length(C_fast_retrieve(lf[95]));
t10=t6;
f_7058(t10,C_fixnum_greater_or_equal_p(t3,t9));}}}}

/* k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4745(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4745,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=C_fast_retrieve(lf[95]);
t4=(C_truep(C_fast_retrieve(lf[95]))?C_fast_retrieve(lf[95]):C_SCHEME_END_OF_LIST);
t5=t4;
t6=C_i_length(t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7115,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_symbolp(t1))){
t8=t7;
f_7115(t8,C_slot(t1,C_fix(1)));}
else{
if(C_truep(C_i_stringp(t1))){
t8=t7;
f_7115(t8,t1);}
else{
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7342,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:869: display */
t9=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[103];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}}

/* k4752 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4754,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4757,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:370: chicken.process#system */
t3=C_fast_retrieve(lf[78]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4755 in k4752 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4757,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4760,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_list1(&a,1,t2);
/* csi.scm:371: history-add */
t5=C_retrieve2(lf[28],C_text("chicken.csi#history-add"));
f_4087(t5,t3,t4);}

/* k4758 in k4755 in k4752 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4760,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4771 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4773(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4773,2,av);}
a=C_alloc(8);
t2=C_retrieve2(lf[38],C_text("chicken.csi#command-table"));
t3=C_i_check_list_2(C_retrieve2(lf[38],C_text("chicken.csi#command-table")),lf[100]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4795,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4800,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_4800(t8,t4,C_retrieve2(lf[38],C_text("chicken.csi#command-table")));}

/* k4793 in k4771 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4795,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop949 in k4771 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_4800(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4800,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4810,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_caddr(t4);
if(C_truep(t5)){
/* csi.scm:400: chicken.base#print */
t6=*((C_word*)lf[106]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=C_make_character(32);
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t6=C_u_i_car(t4);
/* csi.scm:401: chicken.base#print */
t7=*((C_word*)lf[106]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t3;
av2[2]=lf[107];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4808 in for-each-loop949 in k4771 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4810,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4800(t3,((C_word*)t0)[4],t2);}

/* k4822 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4824,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a4869 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4870,2,av);}
/* csi.scm:408: eval */
t2=*((C_word*)lf[53]+1);{
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

/* a4875 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_4876,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4880,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:409: history-add */
t4=C_retrieve2(lf[28],C_text("chicken.csi#history-add"));
f_4087(t4,t3,t2);}

/* k4878 in a4875 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4880,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
C_apply(4,av2);}}

/* k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4896,2,av);}
a=C_alloc(9);
t2=C_fast_retrieve(lf[111]);
t3=C_fast_retrieve(lf[112]);
t4=C_fast_retrieve(lf[113]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5041,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[381]+1);{
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

/* k4900 in k8614 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_4902(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4902,2,av);}
a=C_alloc(14);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4925,a[2]=t5,a[3]=t6,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4970,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:442: scheme#call-with-current-continuation */
t9=*((C_word*)lf[378]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k4914 in map-loop989 in k4926 in k4923 in k4900 in k8614 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in ... */
static void C_ccall f_4916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4916,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4919,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:440: scheme#write */
t4=*((C_word*)lf[180]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4917 in k4914 in map-loop989 in k4926 in k4923 in k4900 in k8614 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_ccall f_4919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4919,2,av);}
/* csi.scm:441: chicken.base#get-output-string */
t2=C_fast_retrieve(lf[373]);{
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

/* k4923 in k4900 in k8614 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_ccall f_4925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4925,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4928,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:442: g1012 */
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k4926 in k4923 in k4900 in k8614 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_4928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4928,2,av);}
a=C_alloc(7);
t2=C_i_check_list_2(t1,lf[139]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4936,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_4936(t6,((C_word*)t0)[4],t1);}

/* map-loop989 in k4926 in k4923 in k4900 in k8614 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_fcall f_4936(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_4936,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4961,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
if(C_truep(C_i_stringp(t6))){
t7=t5;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4916,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:439: chicken.base#open-output-string */
t8=C_fast_retrieve(lf[374]);{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4959 in map-loop989 in k4926 in k4923 in k4900 in k8614 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in ... */
static void C_ccall f_4961(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4961,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4936(t6,((C_word*)t0)[5],t5);}

/* a4969 in k4900 in k8614 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_ccall f_4970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4970,3,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4976,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4988,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:442: chicken.condition#with-exception-handler */
t5=C_fast_retrieve(lf[377]);{
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

/* a4975 in a4969 in k4900 in k8614 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_4976(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4976,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4982,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:442: k1009 */
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a4981 in a4975 in a4969 in k4900 in k8614 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_ccall f_4982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4982,2,av);}
/* csi.scm:442: ##sys#error */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[375];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a4987 in a4969 in k4900 in k8614 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_4988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4988,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4994,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5027,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:442: ##sys#call-with-values */{
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

/* a4993 in a4987 in a4969 in k4900 in k8614 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_ccall f_4994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4994,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5002,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:443: scheme#read */
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5000 in a4993 in a4987 in a4969 in k4900 in k8614 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in ... */
static void C_ccall f_5002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5002,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5004,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5004(t5,((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* doloop1016 in k5000 in a4993 in a4987 in a4969 in k4900 in k8614 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_fcall f_5004(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5004,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eofp(t2))){
/* csi.scm:445: scheme#reverse */
t4=*((C_word*)lf[376]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5021,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:443: scheme#read */
t5=*((C_word*)lf[51]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k5019 in doloop1016 in k5000 in a4993 in a4987 in a4969 in k4900 in k8614 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in ... */
static void C_ccall f_5021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5021,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)((C_word*)t0)[4])[1];
f_5004(t3,((C_word*)t0)[5],t1,t2);}

/* a5026 in a4987 in a4969 in k4900 in k8614 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_ccall f_5027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_5027,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5033,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:442: k1009 */
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

/* a5032 in a5026 in a4987 in a4969 in k4900 in k8614 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in ... */
static void C_ccall f_5033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5033,2,av);}{
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

/* k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_5041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5041,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_mutate(&lf[60] /* (set! chicken.csi#report ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5042,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t4=C_mutate(&lf[145] /* (set! chicken.csi#bytevector-data ...) */,lf[146]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5366,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:556: scheme#make-vector */
t6=*((C_word*)lf[380]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_fix(37);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_5042(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_5042,3,t0,t1,t2);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5050,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=t3;
f_5050(t5,C_u_i_car(t4));}
else{
t4=t3;
f_5050(t4,*((C_word*)lf[83]+1));}}

/* k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_5050(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_5050,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5052,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:458: with-output-to-port */
t3=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t3;
av2[1]=((C_word*)t0)[6];
av2[2]=t1;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_5052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5052,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5056,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:460: chicken.gc#gc */
t3=C_fast_retrieve(lf[144]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_ccall f_5056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5056,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5059,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:461: ##sys#symbol-table-info */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[143]);
C_word *av2=av;
av2[0]=*((C_word*)lf[143]+1);
av2[1]=t2;
tp(2,av2);}}

/* k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_5059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5059,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5062,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:462: chicken.gc#memory-statistics */
t4=C_fast_retrieve(lf[142]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_ccall f_5062(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_5062,2,av);}
a=C_alloc(14);
t2=t1;
t3=C_mk_bool(C_interrupts_enabled);
t4=C_mk_bool(C_heap_size_is_fixed);
t5=C_mk_bool(C_STACK_GROWS_DOWNWARD);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5064,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5079,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t4,a[7]=t5,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=t6,a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
/* csi.scm:467: printf */
t8=*((C_word*)lf[76]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[141];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* shorten in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in ... */
static void C_fcall f_5064(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_5064,2,t1,t2);}
a=C_alloc(36);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5072,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_s_a_i_times(&a,2,t2,C_fix(100));
/* csi.scm:466: scheme#truncate */
t5=*((C_word*)lf[115]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5070 in shorten in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_ccall f_5072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5072,2,av);}
/* ##sys#/-2 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[114]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[114]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(100);
tp(4,av2);}}

/* k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in ... */
static void C_ccall f_5079(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_5079,2,av);}
a=C_alloc(28);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5082,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_fast_retrieve(lf[138]);
t8=C_fast_retrieve(lf[5]);
t9=C_i_check_list_2(C_fast_retrieve(lf[5]),lf[139]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5254,a[2]=((C_word*)t0)[11],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5256,a[2]=t5,a[3]=t12,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_5256(t14,t10,C_fast_retrieve(lf[5]));}

/* k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_ccall f_5082(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_5082,2,av);}
a=C_alloc(22);
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5083,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_check_list_2(t1,lf[100]);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5126,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5223,a[2]=t8,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_5223(t10,t6,t1);}

/* g1079 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in ... */
static void C_fcall f_5083(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_5083,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5087,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:472: printf */
t4=*((C_word*)lf[76]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[118];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5085 in g1079 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in ... */
static void C_ccall f_5087(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(99,c,2)))){
C_save_and_reclaim((void *)f_5087,2,av);}
a=C_alloc(99);
t2=C_i_string_length(((C_word*)t0)[2]);
t3=C_a_i_fixnum_difference(&a,2,C_fix(16),t2);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)((C_word*)t0)[3])[1];
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_s_a_i_plus(&a,2,t5,C_fix(1)));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5097,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t8=((C_word*)t4)[1];
if(C_truep(C_i_less_or_equalp(t8,C_fix(0)))){
t9=((C_word*)((C_word*)t0)[3])[1];
t10=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_s_a_i_plus(&a,2,t9,C_fix(1)));
t11=((C_word*)t4)[1];
t12=C_set_block_item(t4,0,C_s_a_i_plus(&a,2,t11,C_fix(18)));
t13=t7;
f_5097(t13,t12);}
else{
t9=t7;
f_5097(t9,C_SCHEME_UNDEFINED);}}

/* k5095 in k5085 in g1079 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in ... */
static void C_fcall f_5097(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_5097,2,t0,t1);}
a=C_alloc(4);
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(C_i_greater_or_equalp(t2,C_fix(3)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5105,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:480: scheme#display */
t4=*((C_word*)lf[93]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[116];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5113,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:483: scheme#make-string */
t4=*((C_word*)lf[117]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_make_character(32);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k5103 in k5095 in k5085 in g1079 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in ... */
static void C_ccall f_5105(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5105,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5111 in k5095 in k5085 in g1079 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in ... */
static void C_ccall f_5113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5113,2,av);}
/* csi.scm:483: scheme#display */
t2=*((C_word*)lf[93]+1);{
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

/* k5124 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in ... */
static void C_ccall f_5126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_5126,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5129,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5142,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t2,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* csi.scm:501: chicken.platform#machine-type */
t4=C_fast_retrieve(lf[137]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5127 in k5124 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in ... */
static void C_ccall f_5129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5129,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5132,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:520: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[89]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[89]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[83]+1);
tp(4,av2);}}

/* k5130 in k5127 in k5124 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in ... */
static void C_ccall f_5132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5132,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5135,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* csi.scm:521: scheme#display */
t3=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[119];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5133 in k5130 in k5127 in k5124 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in ... */
static void C_ccall f_5135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5135,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5140 in k5124 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in ... */
static void C_ccall f_5142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5142,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5221,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* csi.scm:502: chicken.platform#feature? */
t4=C_fast_retrieve(lf[135]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[136];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5148 in k5219 in k5140 in k5124 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in ... */
static void C_ccall f_5150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_5150,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5154,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* csi.scm:504: chicken.platform#software-version */
t4=C_fast_retrieve(lf[133]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5152 in k5148 in k5219 in k5140 in k5124 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in ... */
static void C_ccall f_5154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_5154,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5158,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* csi.scm:505: chicken.platform#build-platform */
t4=C_fast_retrieve(lf[132]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5156 in k5152 in k5148 in k5219 in k5140 in k5124 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in ... */
static void C_ccall f_5158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_5158,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_5162,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* csi.scm:507: chicken.platform#installation-repository */
t4=C_fast_retrieve(lf[131]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5160 in k5156 in k5152 in k5148 in k5219 in k5140 in k5124 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in ... */
static void C_ccall f_5162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_5162,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_5166,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t2,a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* csi.scm:508: chicken.platform#repository-path */
t4=C_fast_retrieve(lf[130]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5164 in k5160 in k5156 in k5152 in k5148 in k5219 in k5140 in k5124 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in ... */
static void C_ccall f_5166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_5166,2,av);}
a=C_alloc(20);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5170,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=t2,a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5218,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:510: chicken.base#keyword-style */
t5=C_fast_retrieve(lf[129]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k5168 in k5164 in k5160 in k5156 in k5152 in k5148 in k5219 in k5140 in k5124 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in ... */
static void C_ccall f_5170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_5170,2,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5174,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=t2,a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
t4=C_i_vector_ref(((C_word*)t0)[2],C_fix(0));
/* csi.scm:511: shorten */
f_5064(t3,t4);}

/* k5172 in k5168 in k5164 in k5160 in k5156 in k5152 in k5148 in k5219 in k5140 in k5124 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in ... */
static void C_ccall f_5174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_5174,2,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5178,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=t2,a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
t4=C_i_vector_ref(((C_word*)t0)[2],C_fix(1));
/* csi.scm:512: shorten */
f_5064(t3,t4);}

/* k5176 in k5172 in k5168 in k5164 in k5160 in k5156 in k5152 in k5148 in k5219 in k5140 in k5124 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in ... */
static void C_ccall f_5178(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_5178,2,av);}
a=C_alloc(20);
t2=t1;
t3=C_i_vector_ref(((C_word*)t0)[2],C_fix(2));
t4=t3;
t5=C_i_vector_ref(((C_word*)t0)[3],C_fix(0));
t6=t5;
t7=(C_truep(((C_word*)t0)[4])?lf[122]:lf[123]);
t8=t7;
t9=C_i_vector_ref(((C_word*)t0)[3],C_fix(1));
t10=t9;
t11=C_i_vector_ref(((C_word*)t0)[3],C_fix(2));
t12=t11;
t13=(C_truep(((C_word*)t0)[5])?lf[124]:lf[125]);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_5206,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[15],a[12]=((C_word*)t0)[16],a[13]=t2,a[14]=t4,a[15]=t6,a[16]=t8,a[17]=t10,a[18]=t12,a[19]=t14,tmp=(C_word)a,a+=20,tmp);
/* csi.scm:519: argv */
t16=((C_word*)t0)[17];{
C_word *av2=av;
av2[0]=t16;
av2[1]=t15;
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}

/* k5204 in k5176 in k5172 in k5168 in k5164 in k5160 in k5156 in k5152 in k5148 in k5219 in k5140 in k5124 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in ... */
static void C_ccall f_5206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,21)))){
C_save_and_reclaim((void *)f_5206,2,av);}
/* csi.scm:485: printf */
t2=*((C_word*)lf[76]+1);{
C_word *av2;
if(c >= 22) {
  av2=av;
} else {
  av2=C_alloc(22);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[126];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
av2[6]=((C_word*)t0)[6];
av2[7]=((C_word*)t0)[7];
av2[8]=((C_word*)t0)[8];
av2[9]=((C_word*)t0)[9];
av2[10]=((C_word*)t0)[10];
av2[11]=C_fast_retrieve(lf[127]);
av2[12]=((C_word*)t0)[11];
av2[13]=((C_word*)t0)[12];
av2[14]=((C_word*)t0)[13];
av2[15]=((C_word*)t0)[14];
av2[16]=((C_word*)t0)[15];
av2[17]=((C_word*)t0)[16];
av2[18]=((C_word*)t0)[17];
av2[19]=((C_word*)t0)[18];
av2[20]=((C_word*)t0)[19];
av2[21]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(22,av2);}}

/* k5216 in k5164 in k5160 in k5156 in k5152 in k5148 in k5219 in k5140 in k5124 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in ... */
static void C_ccall f_5218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5218,2,av);}
/* csi.scm:510: scheme#symbol->string */
t2=*((C_word*)lf[128]+1);{
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

/* k5219 in k5140 in k5124 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in ... */
static void C_ccall f_5221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_5221,2,av);}
a=C_alloc(12);
t2=(C_truep(t1)?lf[120]:lf[121]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5150,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* csi.scm:503: chicken.platform#software-type */
t5=C_fast_retrieve(lf[134]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* for-each-loop1078 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in ... */
static void C_fcall f_5223(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5223,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5233,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:470: g1079 */
t5=((C_word*)t0)[3];
f_5083(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5231 in for-each-loop1078 in k5080 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in ... */
static void C_ccall f_5233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5233,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5223(t3,((C_word*)t0)[4],t2);}

/* k5252 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_ccall f_5254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5254,2,av);}
/* csi.scm:468: sort */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=*((C_word*)lf[140]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1052 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_fcall f_5256(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5256,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5281,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:468: g1058 */
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

/* k5279 in map-loop1052 in k5077 in k5060 in k5057 in k5054 in a5051 in k5048 in chicken.csi#report in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in ... */
static void C_ccall f_5281(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5281,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5256(t6,((C_word*)t0)[5],t5);}

/* lp in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static C_word C_fcall f_5301(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t3=t1;
t4=C_u_i_cdr(t3);
if(C_truep(C_i_pairp(t4))){
t5=C_u_i_cdr(t4);
t6=C_i_cdr(t2);
t7=C_eqp(t5,t6);
if(C_truep(t7)){
return(t7);}
else{
t9=t5;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}
else{
return(C_SCHEME_FALSE);}}

/* lp in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static C_word C_fcall f_5336(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;
loop:{}
t2=C_i_pairp(t1);
if(C_truep(C_i_not(t2))){
return(C_SCHEME_FALSE);}
else{
t3=C_i_car(t1);
t4=C_eqp(t1,t3);
if(C_truep(t4)){
return(t4);}
else{
t5=t1;
t6=C_u_i_cdr(t5);
t8=t6;
t1=t8;
goto loop;}}}

/* k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_5366(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,6)))){
C_save_and_reclaim((void *)f_5366,2,av);}
a=C_alloc(28);
t2=C_mutate(&lf[147] /* (set! chicken.csi#describer-table ...) */,t1);
t3=*((C_word*)lf[148]+1);
t4=*((C_word*)lf[149]+1);
t5=*((C_word*)lf[150]+1);
t6=C_mutate(&lf[55] /* (set! chicken.csi#describe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5368,a[2]=t5,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t7=C_mutate((C_word*)lf[244]+1 /* (set! chicken.csi#set-describer! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6411,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate(&lf[57] /* (set! chicken.csi#dump ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6420,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate(&lf[219] /* (set! chicken.csi#hexdump ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6568,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[91] /* (set! chicken.csi#show-frameinfo ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6773,tmp=(C_word)a,a+=2,tmp));
t11=C_establish_signal_handler(C_fix((C_word)SIGINT),C_fix((C_word)SIGINT));
t12=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8630,tmp=(C_word)a,a+=2,tmp);
t13=C_i_setslot(C_fast_retrieve(lf[263]),C_fix((C_word)SIGINT),t12);
t14=C_mutate(&lf[264] /* (set! chicken.csi#member* ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7347,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate(&lf[265] /* (set! chicken.csi#canonicalize-args ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7402,tmp=(C_word)a,a+=2,tmp));
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8622,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t17=t16;
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7581,a[2]=t17,tmp=(C_word)a,a+=3,tmp);
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8616,a[2]=t18,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:977: chicken.process-context#get-environment-variable */
t20=C_fast_retrieve(lf[23]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t20;
av2[1]=t19;
av2[2]=lf[379];
((C_proc)(void*)(*((C_word*)t20+1)))(3,av2);}}

/* chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_5368(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,6)))){
C_save_and_reclaim_args((void *)trf_5368,4,t0,t1,t2,t3);}
a=C_alloc(17);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[83]+1):C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5374,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5506,a[2]=t1,a[3]=t2,a[4]=t6,a[5]=t7,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_permanentp(t2))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6403,a[2]=t8,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:590: ##sys#block-address */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[243]);
C_word av2[3];
av2[0]=*((C_word*)lf[243]+1);
av2[1]=t9;
av2[2]=t2;
tp(3,av2);}}
else{
t9=t8;{
C_word av2[2];
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
f_5506(2,av2);}}}

/* descseq in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_5374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5374,6,av);}
a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5503,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* csi.scm:567: plen */
t7=t3;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}

/* k5379 in k5501 in descseq in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_5381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5381,2,av);}
a=C_alloc(10);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5386,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_5386(t5,((C_word*)t0)[7],C_fix(0));}

/* loop1 in k5379 in k5501 in descseq in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_fcall f_5386(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_5386,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_greater_or_equal_p(t2,C_fix(40)))){
t4=C_fixnum_difference(((C_word*)t0)[2],t2);
/* csi.scm:572: fprintf */
t5=*((C_word*)lf[151]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[152];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5409,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t5=C_fixnum_plus(((C_word*)t0)[4],t2);
/* csi.scm:574: pref */
t6=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
av2[3]=t5;
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}}}

/* k5407 in loop1 in k5379 in k5501 in descseq in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in ... */
static void C_ccall f_5409(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_5409,2,av);}
a=C_alloc(12);
t2=t1;
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[3],t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5418,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t6,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp));
t8=((C_word*)t6)[1];
f_5418(t8,((C_word*)t0)[9],C_fix(1),t4);}

/* loop2 in k5407 in loop1 in k5379 in k5501 in descseq in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_fcall f_5418(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_5418,4,t0,t1,t2,t3);}
a=C_alloc(12);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5428,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5460,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:577: ##sys#with-print-length-limit */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[87]);
C_word av2[4];
av2[0]=*((C_word*)lf[87]+1);
av2[1]=t4;
av2[2]=C_fix(1000);
av2[3]=t5;
tp(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5488,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:587: pref */
t5=((C_word*)t0)[8];{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}}

/* k5426 in loop2 in k5407 in loop1 in k5379 in k5501 in descseq in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in ... */
static void C_ccall f_5428(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_5428,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5431,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[3],C_fix(1)))){
t3=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
t4=C_eqp(((C_word*)t0)[3],C_fix(2));
if(C_truep(t4)){
/* csi.scm:582: fprintf */
t5=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[153];
av2[4]=t3;
av2[5]=lf[154];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
/* csi.scm:582: fprintf */
t5=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[153];
av2[4]=t3;
av2[5]=lf[155];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}
else{
/* csi.scm:585: scheme#newline */
t3=*((C_word*)lf[85]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k5429 in k5426 in loop2 in k5407 in loop1 in k5379 in k5501 in descseq in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in ... */
static void C_ccall f_5431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5431,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],((C_word*)t0)[3]);
/* csi.scm:586: loop1 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_5386(t3,((C_word*)t0)[5],t2);}

/* a5459 in loop2 in k5407 in loop1 in k5379 in k5501 in descseq in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in ... */
static void C_ccall f_5460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5460,2,av);}
/* csi.scm:580: fprintf */
t2=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[156];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k5486 in loop2 in k5407 in loop1 in k5379 in k5501 in descseq in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in ... */
static void C_ccall f_5488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5488,2,av);}
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* csi.scm:587: loop2 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_5418(t5,((C_word*)t0)[6],t3,t4);}
else{
/* csi.scm:588: loop2 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_5418(t3,((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[7]);}}

/* k5501 in descseq in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_ccall f_5503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_5503,2,av);}
a=C_alloc(8);
t2=C_fixnum_difference(t1,((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5381,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
/* csi.scm:568: fprintf */
t5=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[157];
av2[4]=((C_word*)t0)[7];
av2[5]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_5381(2,av2);}}}

/* k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_5506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,7)))){
C_save_and_reclaim((void *)f_5506,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5509,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_charp(((C_word*)t0)[3]))){
t3=C_fix(C_character_code(((C_word*)t0)[3]));
/* csi.scm:593: fprintf */
t4=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[158];
av2[4]=((C_word*)t0)[3];
av2[5]=t3;
av2[6]=t3;
av2[7]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(8,av2);}}
else{
switch(((C_word*)t0)[3]){
case C_SCHEME_TRUE:
/* csi.scm:594: fprintf */
t3=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[159];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}
case C_SCHEME_FALSE:
/* csi.scm:595: fprintf */
t3=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[160];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}
default:
if(C_truep(C_i_nullp(((C_word*)t0)[3]))){
/* csi.scm:596: fprintf */
t3=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[161];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
if(C_truep(C_eofp(((C_word*)t0)[3]))){
/* csi.scm:597: fprintf */
t3=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[162];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=*((C_word*)lf[29]+1);
t4=C_eqp(*((C_word*)lf[29]+1),((C_word*)t0)[3]);
if(C_truep(t4)){
/* csi.scm:598: fprintf */
t5=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[163];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5575,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:600: fprintf */
t6=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[165];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[3];
av2[7]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(8,av2);}}
else{
if(C_truep(C_i_bignump(((C_word*)t0)[3]))){
/* csi.scm:606: fprintf */
t5=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[166];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[3];
av2[7]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(8,av2);}}
else{
if(C_truep(C_unboundvaluep(((C_word*)t0)[3]))){
/* csi.scm:609: fprintf */
t5=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[167];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
if(C_truep(C_i_flonump(((C_word*)t0)[3]))){
/* csi.scm:610: fprintf */
t5=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[168];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
if(C_truep(C_i_ratnump(((C_word*)t0)[3]))){
/* csi.scm:611: fprintf */
t5=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[169];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
if(C_truep(C_i_cplxnump(((C_word*)t0)[3]))){
if(C_truep(C_i_exactp(((C_word*)t0)[3]))){
/* csi.scm:612: fprintf */
t5=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[170];
av2[4]=lf[171];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
/* csi.scm:612: fprintf */
t5=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[170];
av2[4]=lf[172];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}
else{
if(C_truep(C_i_numberp(((C_word*)t0)[3]))){
/* csi.scm:614: fprintf */
t5=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[173];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
/* csi.scm:615: descseq */
t5=((C_word*)t0)[5];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=lf[174];
av2[3]=*((C_word*)lf[175]+1);
av2[4]=((C_word*)t0)[6];
av2[5]=C_fix(0);
f_5374(6,av2);}}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[3]))){
/* csi.scm:616: descseq */
t5=((C_word*)t0)[5];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=lf[176];
av2[3]=*((C_word*)lf[175]+1);
av2[4]=*((C_word*)lf[177]+1);
av2[5]=C_fix(0);
f_5374(6,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5672,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* csi.scm:617: chicken.keyword#keyword? */
t6=C_fast_retrieve(lf[241]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}}}}}}}}}}}}}}

/* k5507 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_ccall f_5509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5509,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5573 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_ccall f_5575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5575,2,av);}
a=C_alloc(3);
t2=C_make_character(C_unfix(((C_word*)t0)[2]));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5581,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[2],C_fix(65536)))){
/* csi.scm:603: fprintf */
t4=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[164];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
/* csi.scm:604: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[89]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[89]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[83]+1);
tp(4,av2);}}}

/* k5579 in k5573 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_5581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5581,2,av);}
/* csi.scm:604: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[89]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[89]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[83]+1);
tp(4,av2);}}

/* k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_ccall f_5672(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_5672,2,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5679,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:619: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[179]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[179]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5688,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5772,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:621: ##sys#symbol-has-toplevel-binding? */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[192]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
t2=((C_word*)t0)[4];
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5301,tmp=(C_word)a,a+=2,tmp);
t4=(
  f_5301(t2,t2)
);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5784,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_5784(t6,t4);}
else{
t6=((C_word*)t0)[4];
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5336,tmp=(C_word)a,a+=2,tmp);
t8=t5;
f_5784(t8,(
  f_5336(t6)
));}}}}

/* k5677 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_5679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5679,2,av);}
/* csi.scm:618: fprintf */
t2=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[178];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5686 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_5688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5688,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5691,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:623: ##sys#qualified-symbol? */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[190]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* k5689 in k5686 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_ccall f_5691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_5691,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5694,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5769,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:625: ##sys#interned-symbol? */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[189]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[189]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* k5692 in k5689 in k5686 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in ... */
static void C_ccall f_5694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5694,2,av);}
a=C_alloc(5);
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=t2;
if(C_truep(C_i_nullp(t3))){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5706,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:632: scheme#display */
t5=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[182];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k5704 in k5692 in k5689 in k5686 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_ccall f_5706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5706,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5711,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5711(t5,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* doloop1192 in k5704 in k5692 in k5689 in k5686 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in ... */
static void C_fcall f_5711(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_5711,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5721,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(t2);
/* csi.scm:635: fprintf */
t5=*((C_word*)lf[151]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[181];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k5719 in doloop1192 in k5704 in k5692 in k5689 in k5686 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in ... */
static void C_ccall f_5721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5721,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5724,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:636: ##sys#with-print-length-limit */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[87]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[87]+1);
av2[1]=t2;
av2[2]=C_fix(1000);
av2[3]=t3;
tp(4,av2);}}

/* k5722 in k5719 in doloop1192 in k5704 in k5692 in k5689 in k5686 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in ... */
static void C_ccall f_5724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5724,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5727,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:640: scheme#newline */
t3=*((C_word*)lf[85]+1);{
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

/* k5725 in k5722 in k5719 in doloop1192 in k5704 in k5692 in k5689 in k5686 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in ... */
static void C_ccall f_5727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5727,2,av);}
t2=C_i_cddr(((C_word*)t0)[2]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_5711(t3,((C_word*)t0)[4],t2);}

/* a5735 in k5719 in doloop1192 in k5704 in k5692 in k5689 in k5686 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in ... */
static void C_ccall f_5736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5736,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* csi.scm:639: scheme#write */
t3=*((C_word*)lf[180]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5758 in k5767 in k5689 in k5686 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_ccall f_5760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5760,2,av);}
/* csi.scm:624: fprintf */
t2=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[187];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
av2[6]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k5767 in k5689 in k5686 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in ... */
static void C_ccall f_5769(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5769,2,av);}
a=C_alloc(6);
t2=(C_truep(t1)?lf[183]:lf[184]);
t3=t2;
t4=(C_truep(((C_word*)t0)[2])?lf[185]:lf[186]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5760,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
/* csi.scm:628: ##sys#symbol->qualified-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[188]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[188]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
/* csi.scm:629: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[179]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[179]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}}

/* k5770 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_5772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5772,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_5688(2,av2);}}
else{
/* csi.scm:622: scheme#display */
t2=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[191];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_fcall f_5784(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,5)))){
C_save_and_reclaim_args((void *)trf_5784,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:642: fprintf */
t3=*((C_word*)lf[151]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[196];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
/* csi.scm:652: descseq */
t2=((C_word*)t0)[5];{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[197];
av2[3]=((C_word*)t0)[6];
av2[4]=((C_word*)t0)[7];
av2[5]=C_fix(0);
f_5374(6,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
/* csi.scm:653: fprintf */
t6=*((C_word*)lf[151]+1);{
C_word av2[6];
av2[0]=t6;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[198];
av2[4]=t3;
av2[5]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}
else{
if(C_truep(C_i_closurep(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5891,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5895,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:657: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word av2[4];
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
tp(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:659: chicken.base#port? */
t3=C_fast_retrieve(lf[240]);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}}}

/* k5785 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_ccall f_5787(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5787,2,av);}
a=C_alloc(9);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5796,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5796(t6,((C_word*)t0)[4],((C_word*)t0)[2],t2);}

/* loop-print in k5785 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in ... */
static void C_fcall f_5796(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_5796,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_not_pair_p(t2);
t5=(C_truep(t4)?t4:C_i_nullp(t2));
if(C_truep(t5)){
/* csi.scm:646: printf */
t6=*((C_word*)lf[76]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[193];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t6=C_i_car(t2);
if(C_truep(C_i_memq(t6,t3))){
/* csi.scm:648: fprintf */
t7=*((C_word*)lf[151]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[194];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t7=t2;
t8=C_u_i_car(t7);
t9=C_i_memq(t8,t3);
if(C_truep(C_i_not(t9))){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5827,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t11=t2;
t12=C_u_i_car(t11);
/* csi.scm:650: fprintf */
t13=*((C_word*)lf[151]+1);{
C_word av2[5];
av2[0]=t13;
av2[1]=t10;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[195];
av2[4]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}
else{
t10=C_SCHEME_UNDEFINED;
t11=t1;{
C_word av2[2];
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}}}

/* k5825 in loop-print in k5785 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_ccall f_5827(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5827,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[3]);
/* csi.scm:651: loop-print */
t7=((C_word*)((C_word*)t0)[4])[1];
f_5796(t7,((C_word*)t0)[5],t3,t6);}

/* k5889 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_ccall f_5891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5891,2,av);}
/* csi.scm:656: descseq */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=*((C_word*)lf[175]+1);
av2[4]=*((C_word*)lf[177]+1);
av2[5]=C_fix(1);
f_5374(6,av2);}}

/* k5893 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_ccall f_5895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5895,2,av);}
/* csi.scm:657: sprintf */
t2=*((C_word*)lf[199]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[200];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_ccall f_5901(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5901,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(C_truep(t2)?lf[202]:lf[203]);
t4=t3;
t5=C_slot(((C_word*)t0)[2],C_fix(7));
t6=t5;
t7=C_slot(((C_word*)t0)[2],C_fix(3));
t8=t7;
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5920,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t6,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
/* csi.scm:665: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t9;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
tp(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5929,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:666: ##sys#locative? */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[239]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[239]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}

/* k5918 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in ... */
static void C_ccall f_5920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_5920,2,av);}
/* csi.scm:660: fprintf */
t2=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[204];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
av2[6]=((C_word*)t0)[6];
av2[7]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}

/* k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in ... */
static void C_ccall f_5929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5929,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5936,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:668: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
tp(4,av2);}}
else{
if(C_truep(C_anypointerp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6053,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:683: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
tp(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6059,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:684: ##sys#bytevector? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[238]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[238]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}}

/* k5934 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_ccall f_5936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5936,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[2],C_fix(2));
switch(t3){
case C_fix(0):
/* csi.scm:667: fprintf */
t4=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[205];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[206];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(1):
/* csi.scm:667: fprintf */
t4=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[205];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[207];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(2):
/* csi.scm:667: fprintf */
t4=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[205];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[208];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(3):
/* csi.scm:667: fprintf */
t4=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[205];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[209];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(4):
/* csi.scm:667: fprintf */
t4=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[205];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[210];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(5):
/* csi.scm:667: fprintf */
t4=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[205];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[211];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(6):
/* csi.scm:667: fprintf */
t4=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[205];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[212];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(7):
/* csi.scm:667: fprintf */
t4=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[205];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[213];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(8):
/* csi.scm:667: fprintf */
t4=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[205];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[214];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(9):
/* csi.scm:667: fprintf */
t4=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[205];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[215];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(10):
/* csi.scm:667: fprintf */
t4=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[205];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[216];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(11):
/* csi.scm:667: fprintf */
t4=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[205];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[217];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
default:
t4=C_SCHEME_UNDEFINED;
/* csi.scm:667: fprintf */
t5=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[205];
av2[4]=t1;
av2[5]=t2;
av2[6]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}}

/* k6051 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_ccall f_6053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6053,2,av);}
/* csi.scm:683: fprintf */
t2=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[218];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_ccall f_6059(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,6)))){
C_save_and_reclaim((void *)f_6059,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6065,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:686: fprintf */
t5=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[221];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6078,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:689: ##sys#lambda-info->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[223]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[223]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
if(C_truep(C_i_structurep(((C_word*)t0)[2],lf[224]))){
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6090,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(t2,C_fix(1));
t5=(C_truep(t4)?lf[227]:lf[228]);
t6=C_slot(((C_word*)t0)[2],C_fix(3));
/* csi.scm:692: fprintf */
t7=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[229];
av2[4]=t2;
av2[5]=t5;
av2[6]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(7,av2);}}
else{
if(C_truep(C_i_structurep(((C_word*)t0)[2],lf[230]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6187,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(1));
/* csi.scm:706: fprintf */
t4=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[233];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
if(C_truep(C_structurep(((C_word*)t0)[2]))){
t2=C_slot(((C_word*)t0)[2],C_fix(0));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6293,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:722: chicken.internal#hash-table-ref */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[236]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[236]+1);
av2[1]=t4;
av2[2]=C_retrieve2(lf[147],C_text("chicken.csi#describer-table"));
av2[3]=t3;
tp(4,av2);}}
else{
/* csi.scm:729: fprintf */
t2=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[237];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}}}}}

/* k6063 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in ... */
static void C_ccall f_6065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6065,2,av);}
/* csi.scm:687: hexdump */
f_6568(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],*((C_word*)lf[220]+1),((C_word*)t0)[5]);}

/* k6076 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in ... */
static void C_ccall f_6078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6078,2,av);}
/* csi.scm:689: fprintf */
t2=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[222];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6088 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in ... */
static void C_ccall f_6090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6090,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6093,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(4));
/* csi.scm:694: fprintf */
t4=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[226];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k6091 in k6088 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in ... */
static void C_ccall f_6093(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_6093,2,av);}
a=C_alloc(8);
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=t2;
t4=C_block_size(t3);
t5=t4;
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6104,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_6104(t9,((C_word*)t0)[4],C_fix(0));}

/* doloop1230 in k6091 in k6088 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in ... */
static void C_fcall f_6104(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,0,3)))){
C_save_and_reclaim_args((void *)trf_6104,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6112,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
t5=C_i_check_list_2(t4,lf[100]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6133,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6142,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_6142(t10,t6,t4);}}

/* g1236 in doloop1230 in k6091 in k6088 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in ... */
static void C_fcall f_6112(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_6112,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
/* csi.scm:702: fprintf */
t5=*((C_word*)lf[151]+1);{
C_word av2[6];
av2[0]=t5;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[225];
av2[4]=t3;
av2[5]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}

/* k6131 in doloop1230 in k6091 in k6088 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in ... */
static void C_ccall f_6133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6133,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6104(t3,((C_word*)t0)[4],t2);}

/* for-each-loop1235 in doloop1230 in k6091 in k6088 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in ... */
static void C_fcall f_6142(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6142,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6152,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:700: g1236 */
t5=((C_word*)t0)[3];
f_6112(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6150 in for-each-loop1235 in doloop1230 in k6091 in k6088 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in ... */
static void C_ccall f_6152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6152,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6142(t3,((C_word*)t0)[4],t2);}

/* k6185 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in ... */
static void C_ccall f_6187(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6187,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6188,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_i_check_list_2(t3,lf[100]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6256,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_6256(t8,((C_word*)t0)[4],t3);}

/* g1258 in k6185 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in ... */
static void C_fcall f_6188(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_6188,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6192,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:709: fprintf */
t4=*((C_word*)lf[151]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[232];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k6190 in g1258 in k6185 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in ... */
static void C_ccall f_6192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6192,2,av);}
a=C_alloc(7);
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6201,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_6201(t6,((C_word*)t0)[5],t2);}

/* loop in k6190 in g1258 in k6185 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in ... */
static void C_fcall f_6201(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_6201,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6211,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_i_caar(t2);
t5=C_eqp(((C_word*)t0)[3],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6224,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6229,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:713: ##sys#with-print-length-limit */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[87]);
C_word av2[4];
av2[0]=*((C_word*)lf[87]+1);
av2[1]=t6;
av2[2]=C_fix(100);
av2[3]=t7;
tp(4,av2);}}
else{
t6=C_i_cddr(t2);
/* csi.scm:718: loop */
t9=t1;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}}

/* k6209 in loop in k6190 in g1258 in k6185 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in ... */
static void C_ccall f_6211(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6211,2,av);}
t2=C_i_cddr(((C_word*)t0)[2]);
/* csi.scm:718: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6201(t3,((C_word*)t0)[4],t2);}

/* k6222 in loop in k6190 in g1258 in k6185 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in ... */
static void C_ccall f_6224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6224,2,av);}
/* csi.scm:717: scheme#newline */
t2=*((C_word*)lf[85]+1);{
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

/* a6228 in loop in k6190 in g1258 in k6185 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in ... */
static void C_ccall f_6229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6229,2,av);}
t2=C_i_cdar(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
/* csi.scm:716: fprintf */
t4=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[231];
av2[4]=t2;
av2[5]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}

/* for-each-loop1257 in k6185 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in ... */
static void C_fcall f_6256(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6256,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6266,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:707: g1258 */
t5=((C_word*)t0)[3];
f_6188(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6264 in for-each-loop1257 in k6185 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in ... */
static void C_ccall f_6266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6266,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6256(t3,((C_word*)t0)[4],t2);}

/* k6291 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in ... */
static void C_ccall f_6293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6293,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6297,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:722: g1287 */
t3=t2;
f_6297(t3,((C_word*)t0)[4],t1);}
else{
t2=C_i_assq(((C_word*)t0)[5],C_retrieve2(lf[145],C_text("chicken.csi#bytevector-data")));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6311,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:722: g1298 */
t4=t3;
f_6311(t4,((C_word*)t0)[4],t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6376,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[2],C_fix(0));
/* csi.scm:727: fprintf */
t5=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[235];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}}

/* g1287 in k6291 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in ... */
static void C_fcall f_6297(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_6297,3,t0,t1,t2);}
/* csi.scm:722: g1295 */
t3=t2;{
C_word av2[4];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* g1298 in k6291 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in ... */
static void C_fcall f_6311(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,0,3)))){
C_save_and_reclaim_args((void *)trf_6311,3,t0,t1,t2);}
a=C_alloc(19);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6319,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_cdr(t2);
t9=C_i_check_list_2(t8,lf[139]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6332,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6338,a[2]=t6,a[3]=t12,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_6338(t14,t10,t8);}

/* k6317 in g1298 in k6291 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in ... */
static void C_ccall f_6319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6319,2,av);}{
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

/* k6330 in g1298 in k6291 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in ... */
static void C_ccall f_6332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6332,2,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,C_fix(0));
/* csi.scm:725: scheme#append */
t3=*((C_word*)lf[234]+1);{
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

/* map-loop1303 in g1298 in k6291 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in ... */
static void C_fcall f_6338(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6338,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6363,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:725: g1309 */
t5=*((C_word*)lf[53]+1);{
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

/* k6361 in map-loop1303 in g1298 in k6291 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in ... */
static void C_ccall f_6363(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6363,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6338(t6,((C_word*)t0)[5],t5);}

/* k6374 in k6291 in k6057 in k5927 in k5899 in k5782 in k5670 in k5504 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in ... */
static void C_ccall f_6376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6376,2,av);}
/* csi.scm:728: descseq */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_FALSE;
av2[3]=*((C_word*)lf[175]+1);
av2[4]=*((C_word*)lf[177]+1);
av2[5]=C_fix(1);
f_5374(6,av2);}}

/* k6401 in chicken.csi#describe in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_6403(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6403,2,av);}
/* csi.scm:590: fprintf */
t2=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[242];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.csi#set-describer! in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_6411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6411,4,av);}
t4=C_i_check_symbol_2(t2,lf[245]);
/* csi.scm:734: chicken.internal#hash-table-set! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[246]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[246]+1);
av2[1]=t1;
av2[2]=C_retrieve2(lf[147],C_text("chicken.csi#describer-table"));
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}

/* chicken.csi#dump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_6420(C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_6420,3,t1,t2,t3);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6422,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6528,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6533,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t3))){
/* csi.scm:741: def-len1342 */
t7=t6;
f_6533(t7,t1);}
else{
t7=C_i_car(t3);
t8=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t8))){
/* csi.scm:741: def-out1343 */
t9=t5;
f_6528(t9,t1,t7);}
else{
t9=C_i_car(t8);
t10=C_u_i_cdr(t8);
/* csi.scm:741: body1340 */
t11=t4;
f_6422(t11,t1,t7,t9);}}}

/* body1340 in chicken.csi#dump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_6422(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_6422,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6425,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_immp(((C_word*)t0)[2]))){
/* csi.scm:745: ##sys#error */
t5=*((C_word*)lf[31]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[248];
av2[3]=lf[249];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6447,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:746: ##sys#bytevector? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[238]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[238]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}

/* bestlen in body1340 in chicken.csi#dump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_fcall f_6425(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_6425,3,t0,t1,t2);}
if(C_truep(((C_word*)t0)[2])){
/* csi.scm:744: scheme#min */
t3=*((C_word*)lf[247]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6445 in body1340 in chicken.csi#dump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_ccall f_6447(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_6447,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6454,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* csi.scm:746: bestlen */
t4=((C_word*)t0)[5];
f_6425(t4,t2,t3);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6471,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* csi.scm:747: bestlen */
t4=((C_word*)t0)[5];
f_6425(t4,t2,t3);}
else{
t2=C_immp(((C_word*)t0)[3]);
t3=C_i_not(t2);
t4=(C_truep(t3)?C_anypointerp(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t4)){
/* csi.scm:749: hexdump */
f_6568(((C_word*)t0)[2],((C_word*)t0)[3],C_fix(32),*((C_word*)lf[250]+1),((C_word*)t0)[4]);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6490,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_structurep(((C_word*)t0)[3]))){
t6=C_slot(((C_word*)t0)[3],C_fix(0));
t7=t5;
f_6490(t7,C_i_assq(t6,C_retrieve2(lf[145],C_text("chicken.csi#bytevector-data"))));}
else{
t6=t5;
f_6490(t6,C_SCHEME_FALSE);}}}}}

/* k6452 in k6445 in body1340 in chicken.csi#dump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_6454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6454,2,av);}
/* csi.scm:746: hexdump */
f_6568(((C_word*)t0)[2],((C_word*)t0)[3],t1,*((C_word*)lf[220]+1),((C_word*)t0)[4]);}

/* k6469 in k6445 in body1340 in chicken.csi#dump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_6471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6471,2,av);}
/* csi.scm:747: hexdump */
f_6568(((C_word*)t0)[2],((C_word*)t0)[3],t1,*((C_word*)lf[220]+1),((C_word*)t0)[4]);}

/* k6488 in k6445 in body1340 in chicken.csi#dump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_fcall f_6490(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_6490,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6500,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_block_size(t3);
/* csi.scm:752: bestlen */
t6=((C_word*)t0)[5];
f_6425(t6,t4,t5);}
else{
/* csi.scm:753: ##sys#error */
t2=*((C_word*)lf[31]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[248];
av2[3]=lf[251];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k6498 in k6488 in k6445 in body1340 in chicken.csi#dump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_ccall f_6500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6500,2,av);}
/* csi.scm:752: hexdump */
f_6568(((C_word*)t0)[2],((C_word*)t0)[3],t1,*((C_word*)lf[220]+1),((C_word*)t0)[4]);}

/* def-out1343 in chicken.csi#dump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_6528(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_6528,3,t0,t1,t2);}
/* csi.scm:741: body1340 */
t3=((C_word*)t0)[2];
f_6422(t3,t1,t2,*((C_word*)lf[83]+1));}

/* def-len1342 in chicken.csi#dump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_6533(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_6533,2,t0,t1);}
/* csi.scm:741: def-out1343 */
t2=((C_word*)t0)[2];
f_6528(t2,t1,C_SCHEME_FALSE);}

/* chicken.csi#hexdump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_6568(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,6)))){
C_save_and_reclaim_args((void *)trf_6568,5,t1,t2,t3,t4,t5);}
a=C_alloc(12);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6571,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6603,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=t4,a[6]=t2,a[7]=t6,tmp=(C_word)a,a+=8,tmp));
t10=((C_word*)t8)[1];
f_6603(t10,t1,C_fix(0));}

/* justify in chicken.csi#hexdump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_6571(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_6571,5,t1,t2,t3,t4,t5);}
a=C_alloc(5);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6575,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[252]);
C_word av2[4];
av2[0]=*((C_word*)lf[252]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=t4;
tp(4,av2);}}

/* k6573 in justify in chicken.csi#hexdump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_ccall f_6575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6575,2,av);}
a=C_alloc(4);
t2=t1;
t3=C_block_size(t2);
if(C_truep(C_fixnum_lessp(t3,((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6591,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_difference(((C_word*)t0)[2],t3);
/* csi.scm:766: make-string */
t6=*((C_word*)lf[117]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6589 in k6573 in justify in chicken.csi#hexdump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_6591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6591,2,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* doloop1378 in chicken.csi#hexdump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_6603(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_6603,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6613,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6771,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:771: justify */
f_6571(t4,t2,C_fix(4),C_fix(10),C_make_character(32));}}

/* k6611 in doloop1378 in chicken.csi#hexdump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_ccall f_6613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6613,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6616,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[253]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(58);
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6614 in k6611 in doloop1378 in chicken.csi#hexdump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_6616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_6616,2,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6619,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6688,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_6688(t6,t2,C_fix(0),((C_word*)t0)[2]);}

/* k6617 in k6614 in k6611 in doloop1378 in chicken.csi#hexdump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_ccall f_6619(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6619,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6622,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[253]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6620 in k6617 in k6614 in k6611 in doloop1378 in chicken.csi#hexdump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in ... */
static void C_ccall f_6622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_6622,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6625,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6637,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_6637(t6,t2,C_fix(0),((C_word*)t0)[2]);}

/* k6623 in k6620 in k6617 in k6614 in k6611 in doloop1378 in chicken.csi#hexdump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_ccall f_6625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6625,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6628,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[253]);{
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

/* k6626 in k6623 in k6620 in k6617 in k6614 in k6611 in doloop1378 in chicken.csi#hexdump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in ... */
static void C_ccall f_6628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6628,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(16));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6603(t3,((C_word*)t0)[4],t2);}

/* doloop1389 in k6620 in k6617 in k6614 in k6611 in doloop1378 in chicken.csi#hexdump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_fcall f_6637(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_6637,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=C_fixnum_greater_or_equal_p(t2,C_fix(16));
t5=(C_truep(t4)?t4:C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6650,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:788: ref */
t7=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[6];
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}

/* k6648 in doloop1389 in k6620 in k6617 in k6614 in k6611 in doloop1378 in chicken.csi#hexdump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in ... */
static void C_ccall f_6650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6650,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6653,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_greater_or_equal_p(t1,C_fix(32));
t4=(C_truep(t3)?C_fixnum_lessp(t1,C_fix(128)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_make_character(C_unfix(t1));
/* write-char/port */
t6=C_fast_retrieve(lf[253]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=t5;
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
/* write-char/port */
t5=C_fast_retrieve(lf[253]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=C_make_character(46);
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k6651 in k6648 in doloop1389 in k6620 in k6617 in k6614 in k6611 in doloop1378 in chicken.csi#hexdump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in ... */
static void C_ccall f_6653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6653,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_6637(t4,((C_word*)t0)[5],t2,t3);}

/* doloop1388 in k6614 in k6611 in doloop1378 in chicken.csi#hexdump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_fcall f_6688(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_6688,4,t0,t1,t2,t3);}
a=C_alloc(10);
t4=C_fixnum_greater_or_equal_p(t2,C_fix(16));
t5=(C_truep(t4)?t4:C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]));
if(C_truep(t5)){
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]))){
t6=C_fixnum_modulo(((C_word*)t0)[2],C_fix(16));
t7=C_eqp(t6,C_fix(0));
if(C_truep(t7)){
t8=C_SCHEME_UNDEFINED;
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t8=C_fixnum_difference(C_fix(16),t6);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6722,a[2]=t10,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_6722(t12,t1,t8);}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6742,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* write-char/port */
t7=C_fast_retrieve(lf[253]);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* doloop1397 in doloop1388 in k6614 in k6611 in doloop1378 in chicken.csi#hexdump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in ... */
static void C_fcall f_6722(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_6722,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6732,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:781: display */
t5=*((C_word*)lf[93]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[254];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k6730 in doloop1397 in doloop1388 in k6614 in k6611 in doloop1378 in chicken.csi#hexdump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_ccall f_6732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6732,2,av);}
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6722(t3,((C_word*)t0)[4],t2);}

/* k6740 in doloop1388 in k6614 in k6611 in doloop1378 in chicken.csi#hexdump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in ... */
static void C_ccall f_6742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_6742,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6745,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6760,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6764,a[2]=((C_word*)t0)[7],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:783: ref */
t5=((C_word*)t0)[8];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
av2[3]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}

/* k6743 in k6740 in doloop1388 in k6614 in k6611 in doloop1378 in chicken.csi#hexdump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_ccall f_6745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6745,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_6688(t4,((C_word*)t0)[5],t2,t3);}

/* k6758 in k6740 in doloop1388 in k6614 in k6611 in doloop1378 in chicken.csi#hexdump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_ccall f_6760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6760,2,av);}
/* csi.scm:783: display */
t2=*((C_word*)lf[93]+1);{
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

/* k6762 in k6740 in doloop1388 in k6614 in k6611 in doloop1378 in chicken.csi#hexdump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_ccall f_6764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6764,2,av);}
/* csi.scm:783: justify */
f_6571(((C_word*)t0)[3],t1,C_fix(2),C_fix(16),C_make_character(48));}

/* k6769 in doloop1378 in chicken.csi#hexdump in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_ccall f_6771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6771,2,av);}
/* csi.scm:771: display */
t2=*((C_word*)lf[93]+1);{
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

/* chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_6773(C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_6773,2,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6776,tmp=(C_word)a,a+=2,tmp);
t4=C_fast_retrieve(lf[95]);
t5=(C_truep(C_fast_retrieve(lf[95]))?C_fast_retrieve(lf[95]):C_SCHEME_END_OF_LIST);
t6=t5;
t7=C_i_length(t6);
t8=t7;
t9=t2;
t10=(C_truep(C_u_i_memq(t9,t6))?t2:C_SCHEME_FALSE);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6799,a[2]=t8,a[3]=t3,a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t10)){
t12=t11;
f_6799(t12,t10);}
else{
if(C_truep(C_fixnum_greaterp(t8,C_fix(0)))){
t12=C_fixnum_difference(t8,C_fix(1));
t13=t11;
f_6799(t13,C_i_list_ref(t6,t12));}
else{
t12=t11;
f_6799(t12,C_SCHEME_FALSE);}}}

/* prin1 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_6776(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_6776,2,t1,t2);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6782,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:802: ##sys#with-print-length-limit */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[87]);
C_word av2[4];
av2[0]=*((C_word*)lf[87]+1);
av2[1]=t1;
av2[2]=C_fix(100);
av2[3]=t3;
tp(4,av2);}}

/* a6781 in prin1 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_ccall f_6782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6782,2,av);}
/* csi.scm:805: ##sys#print */
t2=*((C_word*)lf[86]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_TRUE;
av2[4]=*((C_word*)lf[83]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_6799(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_6799,2,t0,t1);}
a=C_alloc(6);
t2=C_mutate(&lf[8] /* (set! chicken.csi#selected-frame ...) */,t1);
t3=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6808,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_6808(t7,((C_word*)t0)[4],((C_word*)t0)[5],t3);}

/* doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_fcall f_6808(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_6808,4,t0,t1,t2,t3);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=t4;
t6=C_eqp(C_retrieve2(lf[8],C_text("chicken.csi#selected-frame")),t5);
t7=t6;
t8=C_slot(t5,C_fix(1));
t9=t8;
t10=C_slot(t5,C_fix(2));
t11=t10;
t12=C_i_structurep(t11,lf[98]);
t13=t12;
t14=(C_truep(t13)?C_slot(t11,C_fix(1)):t11);
t15=t14;
t16=*((C_word*)lf[83]+1);
t17=*((C_word*)lf[83]+1);
t18=C_i_check_port_2(*((C_word*)lf[83]+1),C_fix(2),C_SCHEME_TRUE,lf[84]);
t19=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6839,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t7,a[7]=t13,a[8]=((C_word*)t0)[3],a[9]=t11,a[10]=t9,a[11]=t15,a[12]=t16,a[13]=t5,tmp=(C_word)a,a+=14,tmp);
if(C_truep(t7)){
/* csi.scm:821: ##sys#print */
t20=*((C_word*)lf[86]+1);{
C_word av2[5];
av2[0]=t20;
av2[1]=t19;
av2[2]=C_make_character(42);
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[83]+1);
((C_proc)(void*)(*((C_word*)t20+1)))(5,av2);}}
else{
/* csi.scm:821: ##sys#print */
t20=*((C_word*)lf[86]+1);{
C_word av2[5];
av2[0]=t20;
av2[1]=t19;
av2[2]=C_make_character(32);
av2[3]=C_SCHEME_FALSE;
av2[4]=t16;
((C_proc)(void*)(*((C_word*)t20+1)))(5,av2);}}}}

/* k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_6839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_6839,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6842,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* csi.scm:821: ##sys#print */
t3=*((C_word*)lf[86]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[12];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_ccall f_6842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_6842,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6845,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* csi.scm:821: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[89]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[89]+1);
av2[1]=t2;
av2[2]=C_make_character(58);
av2[3]=((C_word*)t0)[12];
tp(4,av2);}}

/* k6843 in k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in ... */
static void C_ccall f_6845(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_6845,2,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6848,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7017,a[2]=t2,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[7])){
t4=C_slot(((C_word*)t0)[9],C_fix(2));
t5=t3;
f_7017(t5,C_i_pairp(t4));}
else{
t4=t3;
f_7017(t4,C_SCHEME_FALSE);}}

/* k6846 in k6843 in k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_ccall f_6848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_6848,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6851,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* csi.scm:821: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[89]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[89]+1);
av2[1]=t2;
av2[2]=C_make_character(9);
av2[3]=((C_word*)t0)[12];
tp(4,av2);}}

/* k6849 in k6846 in k6843 in k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in ... */
static void C_ccall f_6851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_6851,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6854,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
t3=C_slot(((C_word*)t0)[13],C_fix(0));
/* csi.scm:821: ##sys#print */
t4=*((C_word*)lf[86]+1);{
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
av2[4]=((C_word*)t0)[12];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k6852 in k6849 in k6846 in k6843 in k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in ... */
static void C_ccall f_6854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6854,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6857,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* csi.scm:821: ##sys#print */
t3=*((C_word*)lf[86]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[259];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[12];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6855 in k6852 in k6849 in k6846 in k6843 in k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in ... */
static void C_ccall f_6857(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6857,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6860,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[11])){
t3=*((C_word*)lf[83]+1);
t4=*((C_word*)lf[83]+1);
t5=C_i_check_port_2(*((C_word*)lf[83]+1),C_fix(2),C_SCHEME_TRUE,lf[84]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7000,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:826: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[89]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[89]+1);
av2[1]=t6;
av2[2]=C_make_character(91);
av2[3]=*((C_word*)lf[83]+1);
tp(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6860(2,av2);}}}

/* k6858 in k6855 in k6852 in k6849 in k6846 in k6843 in k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in ... */
static void C_ccall f_6860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6860,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6863,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[10])){
/* csi.scm:827: prin1 */
f_6776(t2,((C_word*)t0)[10]);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6863(2,av2);}}}

/* k6861 in k6858 in k6855 in k6852 in k6849 in k6846 in k6843 in k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in ... */
static void C_ccall f_6863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6863,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6866,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* csi.scm:828: newline */
t3=*((C_word*)lf[85]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6864 in k6861 in k6858 in k6855 in k6852 in k6849 in k6846 in k6843 in k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in ... */
static void C_ccall f_6866(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_6866,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6869,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_truep(((C_word*)t0)[6])?((C_word*)t0)[7]:C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6882,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp);
t5=C_slot(((C_word*)t0)[9],C_fix(2));
t6=C_slot(((C_word*)t0)[9],C_fix(3));
t7=C_i_check_list_2(t5,lf[100]);
t8=C_i_check_list_2(t6,lf[100]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6956,a[2]=t10,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_6956(t12,t2,t5,t6);}
else{
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
t7=((C_word*)((C_word*)t0)[4])[1];
f_6808(t7,((C_word*)t0)[5],t5,t6);}}

/* k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6849 in k6846 in k6843 in k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in ... */
static void C_ccall f_6869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6869,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
t5=((C_word*)((C_word*)t0)[4])[1];
f_6808(t5,((C_word*)t0)[5],t3,t4);}

/* g1472 in k6864 in k6861 in k6858 in k6855 in k6852 in k6849 in k6846 in k6843 in k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in ... */
static void C_fcall f_6882(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6882,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6892,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:833: display */
t5=*((C_word*)lf[93]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[257];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k6890 in g1472 in k6864 in k6861 in k6858 in k6855 in k6852 in k6849 in k6846 in k6843 in k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in ... */
static void C_ccall f_6892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_6892,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6897,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_6897(t5,((C_word*)t0)[4],C_fix(0),((C_word*)t0)[5]);}

/* doloop1485 in k6890 in g1472 in k6864 in k6861 in k6858 in k6855 in k6852 in k6849 in k6846 in k6843 in k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in ... */
static void C_fcall f_6897(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_6897,4,t0,t1,t2,t3);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=*((C_word*)lf[83]+1);
t5=*((C_word*)lf[83]+1);
t6=C_i_check_port_2(*((C_word*)lf[83]+1),C_fix(2),C_SCHEME_TRUE,lf[84]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6910,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t4,tmp=(C_word)a,a+=9,tmp);
/* csi.scm:837: ##sys#print */
t8=*((C_word*)lf[86]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[256];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[83]+1);
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}

/* k6908 in doloop1485 in k6890 in g1472 in k6864 in k6861 in k6858 in k6855 in k6852 in k6849 in k6846 in k6843 in k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in ... */
static void C_ccall f_6910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6910,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6913,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* csi.scm:837: ##sys#print */
t4=*((C_word*)lf[86]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k6911 in k6908 in doloop1485 in k6890 in g1472 in k6864 in k6861 in k6858 in k6855 in k6852 in k6849 in k6846 in k6843 in k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in ... */
static void C_ccall f_6913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_6913,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:837: ##sys#print */
t3=*((C_word*)lf[86]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[255];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6914 in k6911 in k6908 in doloop1485 in k6890 in g1472 in k6864 in k6861 in k6858 in k6855 in k6852 in k6849 in k6846 in k6843 in k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in ... */
static void C_ccall f_6916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6916,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6919,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[6],((C_word*)t0)[2]);
/* csi.scm:838: prin1 */
f_6776(t2,t3);}

/* k6917 in k6914 in k6911 in k6908 in doloop1485 in k6890 in g1472 in k6864 in k6861 in k6858 in k6855 in k6852 in k6849 in k6846 in k6843 in k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in ... */
static void C_ccall f_6919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6919,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6922,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:839: newline */
t3=*((C_word*)lf[85]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6920 in k6917 in k6914 in k6911 in k6908 in doloop1485 in k6890 in g1472 in k6864 in k6861 in k6858 in k6855 in k6852 in k6849 in k6846 in k6843 in k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in ... */
static void C_ccall f_6922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6922,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=((C_word*)((C_word*)t0)[4])[1];
f_6897(t5,((C_word*)t0)[5],t2,t4);}

/* for-each-loop1471 in k6864 in k6861 in k6858 in k6855 in k6852 in k6849 in k6846 in k6843 in k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in ... */
static void C_fcall f_6956(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_6956,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6966,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* csi.scm:830: g1472 */
t9=((C_word*)t0)[3];
f_6882(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k6964 in for-each-loop1471 in k6864 in k6861 in k6858 in k6855 in k6852 in k6849 in k6846 in k6843 in k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in ... */
static void C_ccall f_6966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6966,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_6956(t4,((C_word*)t0)[5],t2,t3);}

/* k6998 in k6855 in k6852 in k6849 in k6846 in k6843 in k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in ... */
static void C_ccall f_7000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_7000,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7003,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:826: ##sys#print */
t3=*((C_word*)lf[86]+1);{
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

/* k7001 in k6998 in k6855 in k6852 in k6849 in k6846 in k6843 in k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in ... */
static void C_ccall f_7003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7003,2,av);}
/* csi.scm:826: ##sys#print */
t2=*((C_word*)lf[86]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[258];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7015 in k6843 in k6840 in k6837 in doloop1434 in k6797 in chicken.csi#show-frameinfo in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_fcall f_7017(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_7017,2,t0,t1);}
if(C_truep(t1)){
/* csi.scm:821: ##sys#print */
t2=*((C_word*)lf[86]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[260];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
/* csi.scm:821: ##sys#print */
t2=*((C_word*)lf[86]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[261];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k7056 in k4730 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_7058(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_7058,2,t0,t1);}
if(C_truep(t1)){
/* csi.scm:850: display */
t2=*((C_word*)lf[93]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[94];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_i_length(C_fast_retrieve(lf[95]));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=C_fixnum_difference(t2,t3);
t5=C_i_list_ref(C_fast_retrieve(lf[95]),t4);
t6=C_mutate(&lf[8] /* (set! chicken.csi#selected-frame ...) */,t5);
/* csi.scm:856: show-frameinfo */
f_6773(((C_word*)t0)[2],C_retrieve2(lf[8],C_text("chicken.csi#selected-frame")));}}

/* k7113 in k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_7115(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_7115,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7117,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7148,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:877: call/cc */
t5=*((C_word*)lf[102]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t4;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* compare in k7113 in k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_7117(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_7117,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_slot(t2,C_fix(1));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7128,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=C_i_string_length(((C_word*)t0)[2]);
t6=C_i_string_length(t3);
t7=C_i_fixnum_min(t5,t6);
/* csi.scm:875: scheme#substring */
t8=*((C_word*)lf[13]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
av2[4]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}

/* k7126 in compare in k7113 in k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_ccall f_7128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7128,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_string_equal_p(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7147 in k7113 in k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_7148(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_7148,3,av);}
a=C_alloc(12);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7151,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7170,a[2]=t3,a[3]=t5,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_7170(t7,t1,((C_word*)t0)[4]);}

/* fail in a7147 in k7113 in k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_fcall f_7151(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_7151,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7155,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:880: display */
t4=*((C_word*)lf[93]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7153 in fail in a7147 in k7113 in k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_7155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7155,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7158,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:881: newline */
t3=*((C_word*)lf[85]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7156 in k7153 in fail in a7147 in k7113 in k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_ccall f_7158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7158,2,av);}
t2=*((C_word*)lf[29]+1);
/* csi.scm:882: return */
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=*((C_word*)lf[29]+1);
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* doloop1554 in a7147 in k7113 in k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_fcall f_7170(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(20,0,4)))){
C_save_and_reclaim_args((void *)trf_7170,3,t0,t1,t2);}
a=C_alloc(20);
if(C_truep(C_i_nullp(t2))){
/* csi.scm:884: fail */
t3=((C_word*)t0)[2];
f_7151(t3,t1,lf[97]);}
else{
t3=C_i_car(t2);
t4=C_eqp(C_retrieve2(lf[8],C_text("chicken.csi#selected-frame")),t3);
t5=C_slot(t3,C_fix(2));
t6=C_i_structurep(t5,lf[98]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7195,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=(C_truep(t4)?t6:C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7204,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t10=C_slot(t5,C_fix(2));
t11=C_slot(t5,C_fix(3));
t12=C_i_check_list_2(t10,lf[100]);
t13=C_i_check_list_2(t11,lf[100]);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7280,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7289,a[2]=t16,a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t18=((C_word*)t16)[1];
f_7289(t18,t14,t10,t11);}
else{
t9=t2;
t10=C_u_i_cdr(t9);
t19=t1;
t20=t10;
t1=t19;
t2=t20;
goto loop;}}}

/* k7193 in doloop1554 in a7147 in k7113 in k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_7195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7195,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)((C_word*)t0)[3])[1];
f_7170(t4,((C_word*)t0)[4],t3);}

/* g1569 in doloop1554 in a7147 in k7113 in k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_fcall f_7204(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_7204,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7210,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_7210(t7,t1,C_fix(0),t2);}

/* doloop1582 in g1569 in doloop1554 in a7147 in k7113 in k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_fcall f_7210(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_7210,4,t0,t1,t2,t3);}
a=C_alloc(15);
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7220,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7232,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=t3,a[7]=((C_word*)t0)[2],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t6=C_i_car(t3);
/* csi.scm:896: compare */
t7=((C_word*)t0)[5];
f_7117(t7,t5,t6);}}

/* k7218 in doloop1582 in g1569 in doloop1554 in a7147 in k7113 in k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in ... */
static void C_ccall f_7220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7220,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=((C_word*)((C_word*)t0)[4])[1];
f_7210(t5,((C_word*)t0)[5],t2,t4);}

/* k7230 in doloop1582 in g1569 in doloop1554 in a7147 in k7113 in k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in ... */
static void C_ccall f_7232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7232,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7235,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:897: display */
t3=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[99];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t3=((C_word*)t0)[6];
t4=C_u_i_cdr(t3);
t5=((C_word*)((C_word*)t0)[7])[1];
f_7210(t5,((C_word*)t0)[8],t2,t4);}}

/* k7233 in k7230 in doloop1582 in g1569 in doloop1554 in a7147 in k7113 in k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_ccall f_7235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7235,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7238,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[6];
t4=C_u_i_car(t3);
/* csi.scm:898: display */
t5=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7236 in k7233 in k7230 in doloop1582 in g1569 in doloop1554 in a7147 in k7113 in k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in ... */
static void C_ccall f_7238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7238,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7241,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:899: newline */
t3=*((C_word*)lf[85]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7239 in k7236 in k7233 in k7230 in doloop1582 in g1569 in doloop1554 in a7147 in k7113 in k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in ... */
static void C_ccall f_7241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7241,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7244,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_list1(&a,1,t3);
/* csi.scm:900: history-add */
t5=C_retrieve2(lf[28],C_text("chicken.csi#history-add"));
f_4087(t5,t2,t4);}

/* k7242 in k7239 in k7236 in k7233 in k7230 in doloop1582 in g1569 in doloop1554 in a7147 in k7113 in k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in ... */
static void C_ccall f_7244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7244,2,av);}
t2=C_slot(((C_word*)t0)[2],((C_word*)t0)[3]);
/* csi.scm:901: return */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k7278 in doloop1554 in a7147 in k7113 in k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_7280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7280,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:904: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=lf[101];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k7285 in k7278 in doloop1554 in a7147 in k7113 in k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_ccall f_7287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7287,2,av);}
/* csi.scm:904: fail */
t2=((C_word*)t0)[2];
f_7151(t2,((C_word*)t0)[3],t1);}

/* for-each-loop1568 in doloop1554 in a7147 in k7113 in k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_fcall f_7289(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7289,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7299,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* csi.scm:891: g1569 */
t9=((C_word*)t0)[3];
f_7204(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k7297 in for-each-loop1568 in doloop1554 in a7147 in k7113 in k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_ccall f_7299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7299,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_7289(t4,((C_word*)t0)[5],t2,t3);}

/* k7340 in k4743 in k4341 in chicken.csi#csi-eval in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_7342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7342,2,av);}
t2=((C_word*)t0)[2];
f_7115(t2,C_SCHEME_FALSE);}

/* chicken.csi#member* in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_7347(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7347,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7353,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_7353(t7,t1,t3);}

/* loop in chicken.csi#member* in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_7353(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_7353,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7365,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_7365(t6,t1,((C_word*)t0)[3]);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* find in loop in chicken.csi#member* in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_fcall f_7365(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_7365,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_i_cdr(((C_word*)t0)[2]);
/* csi.scm:928: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7353(t4,t1,t3);}
else{
t3=C_i_car(t2);
t4=C_i_car(((C_word*)t0)[2]);
if(C_truep(C_i_equalp(t3,t4))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t2;
t6=C_u_i_cdr(t5);
/* csi.scm:930: find */
t8=t1;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}}

/* chicken.csi#canonicalize-args in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_7402(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_7402,2,t1,t2);}
a=C_alloc(5);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7408,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_7408(t6,t1,t2);}

/* loop in chicken.csi#canonicalize-args in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_7408(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7408,3,t0,t1,t2);}
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
if(C_truep((C_truep(C_i_equalp(t4,lf[266]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[267]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[268]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[269]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[270]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7430,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=C_block_size(t4);
if(C_truep(C_fixnum_greaterp(t6,C_fix(2)))){
t7=C_subchar(t4,C_fix(0));
if(C_truep(C_i_char_equalp(C_make_character(45),t7))){
t8=C_i_member(t4,lf[273]);
t9=t5;
f_7430(t9,C_i_not(t8));}
else{
t8=t5;
f_7430(t8,C_SCHEME_FALSE);}}
else{
t7=t5;
f_7430(t7,C_SCHEME_FALSE);}}}}

/* k7428 in loop in chicken.csi#canonicalize-args in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_fcall f_7430(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_7430,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_subchar(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_i_char_equalp(C_make_character(58),t2))){
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* csi.scm:952: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_7408(t5,((C_word*)t0)[5],t4);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7444,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7512,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:953: scheme#substring */
t5=*((C_word*)lf[13]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7520,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* csi.scm:957: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_7408(t5,t2,t4);}}

/* k7442 in k7428 in loop in chicken.csi#canonicalize-args in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_7444(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_7444,2,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7551,tmp=(C_word)a,a+=2,tmp);
t3=(
  f_7551(t1)
);
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7465,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7473,a[2]=t6,a[3]=t10,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_7473(t12,t8,t1);}
else{
/* csi.scm:956: ##sys#error */
t4=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[271];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k7463 in k7442 in k7428 in loop in chicken.csi#canonicalize-args in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_ccall f_7465(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7465,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7469,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* csi.scm:955: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7408(t6,t3,t5);}

/* k7467 in k7463 in k7442 in k7428 in loop in chicken.csi#canonicalize-args in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in ... */
static void C_ccall f_7469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7469,2,av);}
/* csi.scm:955: scheme#append */
t2=*((C_word*)lf[234]+1);{
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

/* map-loop1679 in k7442 in k7428 in loop in chicken.csi#canonicalize-args in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_fcall f_7473(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7473,3,t0,t1,t2);}
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

/* k7510 in k7428 in loop in chicken.csi#canonicalize-args in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_7512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7512,2,av);}
/* string->list */
t2=C_fast_retrieve(lf[272]);{
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

/* k7518 in k7428 in loop in chicken.csi#canonicalize-args in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_7520(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7520,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k7442 in k7428 in loop in chicken.csi#canonicalize-args in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static C_word C_fcall f_7551(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_car(t1);
if(C_truep((C_truep(C_eqp(t3,C_make_character(107)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(115)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(118)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(104)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(68)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(101)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(105)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(82)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(98)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(110)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(113)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(119)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(45)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(73)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(112)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(80)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))))))))))))){
t4=t1;
t5=C_u_i_cdr(t4);
t7=t5;
t1=t7;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_7581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7581,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7584,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8612,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:978: chicken.process-context#command-line-arguments */
t5=C_fast_retrieve(lf[304]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_7584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7584,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7587,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:980: member* */
f_7347(t4,lf[371],((C_word*)t3)[1]);}

/* k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 in ... */
static void C_ccall f_7587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7587,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7590,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:981: member* */
f_7347(t3,lf[370],((C_word*)((C_word*)t0)[2])[1]);}

/* k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_7590(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_7590,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7593,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8512,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cdr(t2);
t6=C_i_pairp(t5);
t7=C_i_not(t6);
if(C_truep(t7)){
if(C_truep(t7)){
/* csi.scm:986: ##sys#error */
t8=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t4;
av2[2]=lf[368];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t8=t4;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
f_8512(2,av2);}}}
else{
t8=C_i_cadr(t2);
t9=C_i_string_length(t8);
t10=C_eqp(t9,C_fix(0));
if(C_truep(t10)){
if(C_truep(t10)){
/* csi.scm:986: ##sys#error */
t11=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t4;
av2[2]=lf[368];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t11=t4;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_SCHEME_UNDEFINED;
f_8512(2,av2);}}}
else{
t11=C_u_i_cdr(t2);
t12=C_u_i_car(t11);
t13=C_i_string_ref(t12,C_fix(0));
if(C_truep(C_u_i_char_equalp(C_make_character(45),t13))){
/* csi.scm:986: ##sys#error */
t14=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t14;
av2[1]=t4;
av2[2]=lf[368];
((C_proc)(void*)(*((C_word*)t14+1)))(3,av2);}}
else{
t14=t4;{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_SCHEME_UNDEFINED;
f_8512(2,av2);}}}}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8595,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8608,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:996: canonicalize-args */
f_7402(t5,((C_word*)t0)[5]);}}

/* k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_fcall f_7593(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7593,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:999: member* */
f_7347(t2,lf[365],((C_word*)((C_word*)t0)[2])[1]);}

/* k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in ... */
static void C_ccall f_7596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_7596,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7599,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=t3;
f_7599(t4,((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8506,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1000: member* */
f_7347(t4,lf[364],((C_word*)((C_word*)t0)[2])[1]);}}

/* k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_fcall f_7599(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_7599,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7602,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:1001: member* */
f_7347(t3,lf[363],((C_word*)((C_word*)t0)[2])[1]);}

/* k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in ... */
static void C_ccall f_7602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7602,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7605,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=t2;
f_7605(t3,((C_word*)t0)[4]);}
else{
if(C_truep(t1)){
t3=t1;
t4=t2;
f_7605(t4,t3);}
else{
t3=t2;
f_7605(t3,((C_word*)t0)[6]);}}}

/* k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in ... */
static void C_fcall f_7605(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,0,2)))){
C_save_and_reclaim_args((void *)trf_7605,2,t0,t1);}
a=C_alloc(20);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_retrieve2(lf[12],C_text("chicken.csi#chop-separator"));
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7611,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=t5,a[10]=t7,a[11]=t6,tmp=(C_word)a,a+=12,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8497,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1005: chicken.process-context#get-environment-variable */
t10=C_fast_retrieve(lf[23]);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[362];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in ... */
static void C_ccall f_7611(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7611,2,av);}
a=C_alloc(17);
t2=C_i_check_list_2(t1,lf[139]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7617,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8461,a[2]=((C_word*)t0)[9],a[3]=t5,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_8461(t7,t3,t1);}

/* k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in ... */
static void C_ccall f_7617(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_7617,2,av);}
a=C_alloc(24);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7619,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7701,tmp=(C_word)a,a+=2,tmp));
t9=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7758,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t2,a[11]=t4,tmp=(C_word)a,a+=12,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8453,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1025: member* */
f_7347(t10,lf[360],((C_word*)((C_word*)t0)[2])[1]);}

/* collect-options in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in ... */
static void C_fcall f_7619(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7619,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7625,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_7625(t6,t1,((C_word*)((C_word*)t0)[2])[1]);}

/* loop in collect-options in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in ... */
static void C_fcall f_7625(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_7625,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_member(((C_word*)t0)[2],t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7633,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1008: g1853 */
t5=t4;
f_7633(t5,t1,t3);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* g1853 in loop in collect-options in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in ... */
static void C_fcall f_7633(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_7633,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
/* csi.scm:1011: ##sys#error */
t4=*((C_word*)lf[31]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[275];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=C_i_cadr(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7654,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_u_i_cdr(t8);
/* csi.scm:1012: loop */
t10=((C_word*)((C_word*)t0)[3])[1];
f_7625(t10,t6,t9);}}

/* k7652 in g1853 in loop in collect-options in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in ... */
static void C_ccall f_7654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7654,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7668 in k8108 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in ... */
static void C_ccall f_7670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7670,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_string_equal_p(t1,lf[312]);
if(C_truep(C_i_not(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7682,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7695,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1017: chop-separator */
t5=C_retrieve2(lf[12],C_text("chicken.csi#chop-separator"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t1;
f_3883(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k7680 in k7668 in k8108 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in ... */
static void C_ccall f_7682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7682,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7688,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1018: chicken.file#file-exists? */
t4=C_fast_retrieve(lf[14]);{
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

/* k7686 in k7680 in k7668 in k8108 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in ... */
static void C_ccall f_7688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7688,2,av);}
if(C_truep(t1)){
/* csi.scm:1019: scheme#load */
t2=*((C_word*)lf[64]+1);{
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
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7693 in k7668 in k8108 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in ... */
static void C_ccall f_7695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7695,2,av);}
/* csi.scm:1017: scheme#string-append */
t2=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[313];
av2[4]=C_retrieve2(lf[1],C_text("chicken.csi#constant671"));
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* evalstring in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in ... */
static void C_fcall f_7701(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7701,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7748,tmp=(C_word)a,a+=2,tmp):C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7708,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1021: chicken.base#open-input-string */
t8=C_fast_retrieve(lf[277]);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k7706 in evalstring in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in ... */
static void C_ccall f_7708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7708,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7715,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:1022: scheme#read */
t4=*((C_word*)lf[51]+1);{
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

/* k7713 in k7706 in evalstring in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in ... */
static void C_ccall f_7715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7715,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7717,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_7717(t5,((C_word*)t0)[4],t1);}

/* doloop1876 in k7713 in k7706 in evalstring in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in ... */
static void C_fcall f_7717(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_7717,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_eofp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7727,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7738,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7740,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1024: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t4;
av2[2]=t5;
av2[3]=*((C_word*)lf[276]+1);
C_call_with_values(4,av2);}}}

/* k7725 in doloop1876 in k7713 in k7706 in evalstring in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in ... */
static void C_ccall f_7727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7727,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7734,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1022: scheme#read */
t3=*((C_word*)lf[51]+1);{
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

/* k7732 in k7725 in doloop1876 in k7713 in k7706 in evalstring in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in ... */
static void C_ccall f_7734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7734,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7717(t2,((C_word*)t0)[3],t1);}

/* k7736 in doloop1876 in k7713 in k7706 in evalstring in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in ... */
static void C_ccall f_7738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7738,2,av);}
/* csi.scm:1024: rec */
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
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a7739 in doloop1876 in k7713 in k7706 in evalstring in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in ... */
static void C_ccall f_7740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7740,2,av);}
/* csi.scm:1024: scheme#eval */
t2=*((C_word*)lf[53]+1);{
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

/* f_7748 in evalstring in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in ... */
static void C_ccall f_7748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7748,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in ... */
static void C_ccall f_7758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_7758,2,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7761,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_member(lf[354],((C_word*)((C_word*)t0)[6])[1]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8447,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9424,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:144: chicken.platform#chicken-version */
t6=C_fast_retrieve(lf[318]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_7761(2,av2);}}}

/* k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in ... */
static void C_ccall f_7761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7761,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7764,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_member(lf[352],((C_word*)((C_word*)t0)[6])[1]))){
t3=C_set_block_item(lf[353] /* ##sys#setup-mode */,0,C_SCHEME_TRUE);
t4=t2;
f_7764(t4,t3);}
else{
t3=t2;
f_7764(t3,C_SCHEME_UNDEFINED);}}

/* k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in ... */
static void C_fcall f_7764(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,2)))){
C_save_and_reclaim_args((void *)trf_7764,2,t0,t1);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7767,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_member(lf[351],((C_word*)((C_word*)t0)[6])[1]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8430,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8437,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1034: chicken.platform#chicken-version */
t5=C_fast_retrieve(lf[318]);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_7767(2,av2);}}}

/* k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in ... */
static void C_ccall f_7767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_7767,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7770,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8417,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1036: member* */
f_7347(t3,lf[350],((C_word*)((C_word*)t0)[6])[1]);}

/* k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in ... */
static void C_fcall f_7770(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_7770,2,t0,t1);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7773,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8402,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1039: member* */
f_7347(t3,lf[347],((C_word*)((C_word*)t0)[6])[1]);}

/* k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in ... */
static void C_ccall f_7773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7773,2,av);}
a=C_alloc(13);
t2=C_fast_retrieve(lf[278]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7776,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* csi.scm:1043: collect-options */
t4=((C_word*)((C_word*)t0)[11])[1];
f_7619(t4,t3,lf[344]);}

/* k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in ... */
static void C_ccall f_7776(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_7776,2,av);}
a=C_alloc(18);
t2=C_i_check_list_2(t1,lf[100]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7782,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8378,a[2]=t5,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_8378(t7,t3,t1);}

/* k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in ... */
static void C_ccall f_7782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7782,2,av);}
a=C_alloc(13);
t2=C_fast_retrieve(lf[278]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* csi.scm:1044: collect-options */
t4=((C_word*)((C_word*)t0)[11])[1];
f_7619(t4,t3,lf[343]);}

/* k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in ... */
static void C_ccall f_7785(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_7785,2,av);}
a=C_alloc(18);
t2=C_i_check_list_2(t1,lf[100]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7791,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8355,a[2]=t5,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_8355(t7,t3,t1);}

/* k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in ... */
static void C_ccall f_7791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7791,2,av);}
a=C_alloc(13);
t2=C_fast_retrieve(lf[279]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7794,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* csi.scm:1045: collect-options */
t4=((C_word*)((C_word*)t0)[11])[1];
f_7619(t4,t3,lf[342]);}

/* k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in ... */
static void C_ccall f_7794(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_7794,2,av);}
a=C_alloc(18);
t2=C_i_check_list_2(t1,lf[100]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7800,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8332,a[2]=t5,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_8332(t7,t3,t1);}

/* k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in ... */
static void C_ccall f_7800(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,2)))){
C_save_and_reclaim((void *)f_7800,2,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7804,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8236,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_retrieve2(lf[12],C_text("chicken.csi#chop-separator"));
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8243,a[2]=t3,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=t6,a[6]=t8,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* csi.scm:1048: collect-options */
t10=((C_word*)((C_word*)t0)[11])[1];
f_7619(t10,t9,lf[341]);}

/* k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in ... */
static void C_ccall f_7804(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7804,2,av);}
a=C_alloc(9);
t2=C_mutate((C_word*)lf[127]+1 /* (set! ##sys#include-pathnames ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7807,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[9])){
t4=C_i_cdr(((C_word*)t0)[9]);
t5=C_i_pairp(t4);
if(C_truep(C_i_not(t5))){
/* csi.scm:1055: ##sys#error */
t6=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=lf[333];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t6=C_i_cadr(((C_word*)t0)[9]);
if(C_truep(C_i_string_equal_p(lf[334],t6))){
/* csi.scm:1057: chicken.base#keyword-style */
t7=C_fast_retrieve(lf[129]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=lf[335];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t7=C_u_i_cdr(((C_word*)t0)[9]);
t8=C_u_i_car(t7);
if(C_truep(C_i_string_equal_p(lf[336],t8))){
/* csi.scm:1059: chicken.base#keyword-style */
t9=C_fast_retrieve(lf[129]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t3;
av2[2]=lf[325];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t9=C_u_i_cdr(((C_word*)t0)[9]);
t10=C_u_i_car(t9);
if(C_truep(C_i_string_equal_p(lf[337],t10))){
/* csi.scm:1061: chicken.base#keyword-style */
t11=C_fast_retrieve(lf[129]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t3;
av2[2]=lf[338];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t11=t3;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_SCHEME_UNDEFINED;
f_7807(2,av2);}}}}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_7807(2,av2);}}}

/* k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in ... */
static void C_ccall f_7807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_7807,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7810,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8169,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1062: member* */
f_7347(t3,lf[332],((C_word*)((C_word*)t0)[6])[1]);}

/* k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in ... */
static void C_ccall f_7810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_7810,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7813,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8157,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1065: member* */
f_7347(t3,lf[330],((C_word*)((C_word*)t0)[6])[1]);}

/* k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in ... */
static void C_ccall f_7813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_7813,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7816,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8136,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1068: member* */
f_7347(t3,lf[328],((C_word*)((C_word*)t0)[6])[1]);}

/* k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in ... */
static void C_ccall f_7816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7816,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7819,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_a_i_cons(&a,2,lf[321],C_fast_retrieve(lf[322]));
/* csi.scm:1077: scheme#eval */
t4=*((C_word*)lf[53]+1);{
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

/* k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in ... */
static void C_ccall f_7819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7819,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7822,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_a_i_cons(&a,2,lf[294],C_fast_retrieve(lf[320]));
/* csi.scm:1078: scheme#eval */
t4=*((C_word*)lf[53]+1);{
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

/* k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in ... */
static void C_ccall f_7822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7822,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7825,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[8])){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_7825(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8122,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1080: chicken.load#load-verbose */
t4=C_fast_retrieve(lf[319]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in ... */
static void C_ccall f_7825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_7825,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7828,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8110,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:1082: member* */
f_7347(t3,lf[315],((C_word*)((C_word*)t0)[6])[1]);}

/* k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in ... */
static void C_ccall f_7828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7828,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7831,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_set_block_item(lf[6] /* ##sys#notices-enabled */,0,C_SCHEME_FALSE);
t4=t2;
f_7831(t4,t3);}
else{
t3=t2;
f_7831(t3,C_SCHEME_UNDEFINED);}}

/* k7829 in k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in ... */
static void C_fcall f_7831(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_7831,2,t0,t1);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7836,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_7836(t5,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* doloop1843 in k7829 in k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in ... */
static void C_fcall f_7836(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(17,0,4)))){
C_save_and_reclaim_args((void *)trf_7836,3,t0,t1,t2);}
a=C_alloc(17);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_nullp(((C_word*)t3)[1]))){
if(C_truep(((C_word*)t0)[2])){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_fast_retrieve(lf[280]);
t5=C_mutate((C_word*)lf[280]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4212,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[282]+1 /* (set! ##sys#sharp-number-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4241,tmp=(C_word)a,a+=2,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9362,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1090: chicken.repl#repl */
t8=C_fast_retrieve(lf[283]);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_retrieve2(lf[47],C_text("chicken.csi#csi-eval"));
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}
else{
t4=C_i_car(((C_word*)t3)[1]);
t5=C_i_member(t4,lf[284]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7864,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=C_i_cdr(((C_word*)t3)[1]);
t20=t1;
t21=t7;
t1=t20;
t2=t21;
goto loop;}
else{
if(C_truep((C_truep(C_i_equalp(t4,lf[285]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[286]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[287]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[288]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[289]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[290]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[291]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))))){
t7=C_i_cdr(((C_word*)t3)[1]);
t8=C_set_block_item(t3,0,t7);
t9=C_i_cdr(((C_word*)t3)[1]);
t20=t1;
t21=t9;
t1=t20;
t2=t21;
goto loop;}
else{
t7=C_i_string_equal_p(lf[292],t4);
t8=(C_truep(t7)?t7:C_u_i_string_equal_p(lf[293],t4));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7893,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7905,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=C_i_cadr(((C_word*)t3)[1]);
/* csi.scm:1097: scheme#string->symbol */
t12=*((C_word*)lf[295]+1);{
C_word av2[3];
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
t9=C_u_i_string_equal_p(lf[296],t4);
t10=(C_truep(t9)?t9:C_u_i_string_equal_p(lf[297],t4));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7920,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t12=C_i_cadr(((C_word*)t3)[1]);
/* csi.scm:1100: evalstring */
f_7701(t11,t12,C_SCHEME_END_OF_LIST);}
else{
t11=C_u_i_string_equal_p(lf[298],t4);
t12=(C_truep(t11)?t11:C_u_i_string_equal_p(lf[299],t4));
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7939,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t14=C_i_cadr(((C_word*)t3)[1]);
t15=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7949,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1103: evalstring */
f_7701(t13,t14,C_a_i_list(&a,1,t15));}
else{
t13=C_u_i_string_equal_p(lf[301],t4);
t14=(C_truep(t13)?t13:C_u_i_string_equal_p(lf[302],t4));
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7964,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t16=C_i_cadr(((C_word*)t3)[1]);
t17=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7974,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1106: evalstring */
f_7701(t15,t16,C_a_i_list(&a,1,t17));}
else{
t15=(C_truep(((C_word*)t0)[5])?C_i_car(((C_word*)t0)[5]):C_SCHEME_FALSE);
t16=t15;
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7984,a[2]=t16,a[3]=t6,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_equalp(lf[306],t16))){
t18=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8036,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1110: scheme#load */
t19=*((C_word*)lf[64]+1);{
C_word av2[4];
av2[0]=t19;
av2[1]=t17;
av2[2]=t4;
av2[3]=t18;
((C_proc)(void*)(*((C_word*)t19+1)))(4,av2);}}
else{
/* csi.scm:1110: scheme#load */
t18=*((C_word*)lf[64]+1);{
C_word av2[4];
av2[0]=t18;
av2[1]=t17;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t18+1)))(4,av2);}}}}}}}}}}

/* k7862 in doloop1843 in k7829 in k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in ... */
static void C_ccall f_7864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7864,2,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_7836(t3,((C_word*)t0)[4],t2);}

/* k7891 in doloop1843 in k7829 in k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in ... */
static void C_ccall f_7893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7893,2,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7836(t5,((C_word*)t0)[4],t4);}

/* k7903 in doloop1843 in k7829 in k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in ... */
static void C_ccall f_7905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7905,2,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,2,lf[294],t1);
/* csi.scm:1097: scheme#eval */
t3=*((C_word*)lf[53]+1);{
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

/* k7918 in doloop1843 in k7829 in k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in ... */
static void C_ccall f_7920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7920,2,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7836(t5,((C_word*)t0)[4],t4);}

/* k7937 in doloop1843 in k7829 in k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in ... */
static void C_ccall f_7939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7939,2,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7836(t5,((C_word*)t0)[4],t4);}

/* a7948 in doloop1843 in k7829 in k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in ... */
static void C_ccall f_7949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_7949,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[300]+1);
av2[3]=*((C_word*)lf[106]+1);
av2[4]=t2;
C_apply(5,av2);}}

/* k7962 in doloop1843 in k7829 in k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in ... */
static void C_ccall f_7964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7964,2,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7836(t5,((C_word*)t0)[4],t4);}

/* a7973 in doloop1843 in k7829 in k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in ... */
static void C_ccall f_7974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_7974,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[300]+1);
av2[3]=C_fast_retrieve(lf[45]);
av2[4]=t2;
C_apply(5,av2);}}

/* k7982 in doloop1843 in k7829 in k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in ... */
static void C_ccall f_7984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7984,2,av);}
a=C_alloc(4);
if(C_truep(C_i_equalp(lf[303],((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7995,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8008,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1127: ##sys#call-with-values */{
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
t2=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t3=((C_word*)((C_word*)t0)[5])[1];
f_7836(t3,((C_word*)t0)[6],t2);}}

/* a7994 in k7982 in doloop1843 in k7829 in k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in ... */
static void C_ccall f_7995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7995,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7999,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1127: scheme#eval */
t3=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[305];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7997 in a7994 in k7982 in doloop1843 in k7829 in k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in ... */
static void C_ccall f_7999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7999,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8006,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1127: chicken.process-context#command-line-arguments */
t4=C_fast_retrieve(lf[304]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k8004 in k7997 in a7994 in k7982 in doloop1843 in k7829 in k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in ... */
static void C_ccall f_8006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8006,2,av);}
/* csi.scm:1127: g2048 */
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
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a8007 in k7982 in doloop1843 in k7829 in k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in ... */
static void C_ccall f_8008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_8008,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
if(C_truep(C_fixnump(t4))){
/* csi.scm:1129: chicken.base#exit */
t5=C_fast_retrieve(lf[48]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* csi.scm:1129: chicken.base#exit */
t5=C_fast_retrieve(lf[48]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* f_8036 in doloop1843 in k7829 in k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in ... */
static void C_ccall f_8036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_8036,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8040,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8091,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1114: chicken.port#with-output-to-string */
t5=C_fast_retrieve(lf[311]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k8038 */
static void C_ccall f_8040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8040,2,av);}
a=C_alloc(6);
t2=t1;
t3=C_block_size(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8046,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1116: chicken.base#flush-output */
t6=*((C_word*)lf[310]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=*((C_word*)lf[83]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k8044 in k8038 */
static void C_ccall f_8046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_8046,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8049,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1117: scheme#display */
t3=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[309];
av2[3]=*((C_word*)lf[307]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k8047 in k8044 in k8038 */
static void C_ccall f_8049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_8049,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8052,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8060,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_8060(t6,t2,C_fix(0));}

/* k8050 in k8047 in k8044 in k8038 */
static void C_ccall f_8052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8052,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8055,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1124: scheme#newline */
t3=*((C_word*)lf[85]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=*((C_word*)lf[307]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8053 in k8050 in k8047 in k8044 in k8038 */
static void C_ccall f_8055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8055,2,av);}
/* csi.scm:1125: scheme#eval */
t2=*((C_word*)lf[53]+1);{
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

/* doloop2037 in k8047 in k8044 in k8038 */
static void C_fcall f_8060(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8060,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_string_ref(((C_word*)t0)[3],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8073,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t6=C_fast_retrieve(lf[253]);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=*((C_word*)lf[307]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k8071 in doloop2037 in k8047 in k8044 in k8038 */
static void C_ccall f_8073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_8073,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8076,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_u_i_char_equalp(C_make_character(10),((C_word*)t0)[5]))){
/* csi.scm:1123: scheme#display */
t3=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[308];
av2[3]=*((C_word*)lf[307]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_8060(t4,((C_word*)t0)[4],t3);}}

/* k8074 in k8071 in doloop2037 in k8047 in k8044 in k8038 */
static void C_ccall f_8076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8076,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8060(t3,((C_word*)t0)[4],t2);}

/* a8090 */
static void C_ccall f_8091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8091,2,av);}
t2=C_fast_retrieve(lf[45]);
/* csi.scm:1114: g2034 */
t3=C_fast_retrieve(lf[45]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8108 in k7823 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in ... */
static void C_ccall f_8110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8110,2,av);}
a=C_alloc(3);
t2=(C_truep(t1)?t1:(C_truep(((C_word*)t0)[2])?((C_word*)t0)[2]:((C_word*)t0)[3]));
if(C_truep(t2)){
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_7828(2,av2);}}
else{
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7670,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1015: chicken.process-context#get-environment-variable */
t5=C_fast_retrieve(lf[23]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[314];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k8120 in k7820 in k7817 in k7814 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in ... */
static void C_ccall f_8122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8122,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9402,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:144: chicken.platform#chicken-version */
t4=C_fast_retrieve(lf[318]);{
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

/* k8134 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in ... */
static void C_ccall f_8136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8136,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8139,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_8139(2,av2);}}
else{
/* csi.scm:1069: scheme#display */
t3=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[327];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_7816(2,av2);}}}

/* k8137 in k8134 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in ... */
static void C_ccall f_8139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8139,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8142,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1070: chicken.base#case-sensitive */
t3=C_fast_retrieve(lf[326]);{
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

/* k8140 in k8137 in k8134 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in ... */
static void C_ccall f_8142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8142,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8145,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1071: chicken.base#keyword-style */
t3=C_fast_retrieve(lf[129]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[325];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8143 in k8140 in k8137 in k8134 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in ... */
static void C_ccall f_8145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8145,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8148,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1072: chicken.base#parentheses-synonyms */
t3=C_fast_retrieve(lf[324]);{
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

/* k8146 in k8143 in k8140 in k8137 in k8134 in k7811 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in ... */
static void C_ccall f_8148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8148,2,av);}
/* csi.scm:1073: chicken.base#symbol-escape */
t2=C_fast_retrieve(lf[323]);{
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

/* k8155 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in ... */
static void C_ccall f_8157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8157,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8160,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* csi.scm:1067: chicken.base#symbol-escape */
t3=C_fast_retrieve(lf[323]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* csi.scm:1066: scheme#display */
t3=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[329];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_7813(2,av2);}}}

/* k8158 in k8155 in k7808 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in ... */
static void C_ccall f_8160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8160,2,av);}
/* csi.scm:1067: chicken.base#symbol-escape */
t2=C_fast_retrieve(lf[323]);{
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

/* k8167 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in ... */
static void C_ccall f_8169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8169,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8172,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* csi.scm:1064: chicken.base#parentheses-synonyms */
t3=C_fast_retrieve(lf[324]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* csi.scm:1063: scheme#display */
t3=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[331];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_7810(2,av2);}}}

/* k8170 in k8167 in k7805 in k7802 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in ... */
static void C_ccall f_8172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8172,2,av);}
/* csi.scm:1064: chicken.base#parentheses-synonyms */
t2=C_fast_retrieve(lf[324]);{
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

/* k8234 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in ... */
static void C_ccall f_8236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_8236,2,av);}
a=C_alloc(6);
t2=*((C_word*)lf[339]+1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3103,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3103(t6,((C_word*)t0)[2],t1);}

/* k8241 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in ... */
static void C_ccall f_8243(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_8243,2,av);}
a=C_alloc(13);
t2=C_i_check_list_2(t1,lf[139]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8249,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8298,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_8298(t7,t3,t1);}

/* k8247 in k8241 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in ... */
static void C_ccall f_8249(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_8249,2,av);}
a=C_alloc(13);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_retrieve2(lf[12],C_text("chicken.csi#chop-separator"));
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8256,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=t7,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
/* csi.scm:1049: collect-options */
t9=((C_word*)((C_word*)t0)[4])[1];
f_7619(t9,t8,lf[340]);}

/* k8254 in k8247 in k8241 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in ... */
static void C_ccall f_8256(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_8256,2,av);}
a=C_alloc(13);
t2=C_i_check_list_2(t1,lf[139]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8262,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8264,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_8264(t7,t3,t1);}

/* k8260 in k8254 in k8247 in k8241 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in ... */
static void C_ccall f_8262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8262,2,av);}
/* csi.scm:1048: scheme#append */
t2=*((C_word*)lf[234]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_fast_retrieve(lf[127]);
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* map-loop1936 in k8254 in k8247 in k8241 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in ... */
static void C_fcall f_8264(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8264,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8289,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1049: g1942 */
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

/* k8287 in map-loop1936 in k8254 in k8247 in k8241 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in ... */
static void C_ccall f_8289(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8289,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8264(t6,((C_word*)t0)[5],t5);}

/* map-loop1910 in k8241 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in ... */
static void C_fcall f_8298(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8298,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8323,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1048: g1916 */
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

/* k8321 in map-loop1910 in k8241 in k7798 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in ... */
static void C_ccall f_8323(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8323,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8298(t6,((C_word*)t0)[5],t5);}

/* for-each-loop1835 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in ... */
static void C_fcall f_8332(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8332,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8342,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1045: g1836 */
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

/* k8340 in for-each-loop1835 in k7792 in k7789 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in ... */
static void C_ccall f_8342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8342,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8332(t3,((C_word*)t0)[4],t2);}

/* for-each-loop1825 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in ... */
static void C_fcall f_8355(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8355,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8365,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1044: g1826 */
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

/* k8363 in for-each-loop1825 in k7783 in k7780 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in ... */
static void C_ccall f_8365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8365,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8355(t3,((C_word*)t0)[4],t2);}

/* for-each-loop1815 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in ... */
static void C_fcall f_8378(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8378,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8388,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1043: g1816 */
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

/* k8386 in for-each-loop1815 in k7774 in k7771 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in ... */
static void C_ccall f_8388(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8388,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8378(t3,((C_word*)t0)[4],t2);}

/* k8400 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in ... */
static void C_ccall f_8402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8402,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8405,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9420,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1041: chicken.platform#register-feature! */
t4=C_fast_retrieve(lf[278]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[345];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* csi.scm:1040: scheme#display */
t3=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[346];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_7773(2,av2);}}}

/* k8403 in k8400 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in ... */
static void C_ccall f_8405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8405,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8408,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1041: chicken.platform#register-feature! */
t3=C_fast_retrieve(lf[278]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[345];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8406 in k8403 in k8400 in k7768 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in ... */
static void C_ccall f_8408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8408,2,av);}
/* csi.scm:1042: chicken.base#case-sensitive */
t2=C_fast_retrieve(lf[326]);{
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

/* k8415 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in ... */
static void C_ccall f_8417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8417,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8420,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=C_set_block_item(lf[348] /* ##sys#warnings-enabled */,0,C_SCHEME_FALSE);
t4=((C_word*)t0)[2];
f_7770(t4,t3);}
else{
/* csi.scm:1037: scheme#display */
t3=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[349];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[2];
f_7770(t2,C_SCHEME_UNDEFINED);}}

/* k8418 in k8415 in k7765 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in ... */
static void C_ccall f_8420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8420,2,av);}
t2=C_set_block_item(lf[348] /* ##sys#warnings-enabled */,0,C_SCHEME_FALSE);
t3=((C_word*)t0)[2];
f_7770(t3,t2);}

/* k8428 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in ... */
static void C_ccall f_8430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8430,2,av);}
/* csi.scm:1035: chicken.base#exit */
t2=C_fast_retrieve(lf[48]);{
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

/* k8435 in k7762 in k7759 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in ... */
static void C_ccall f_8437(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8437,2,av);}
/* csi.scm:1034: chicken.base#print */
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

/* k8445 in k7756 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in ... */
static void C_ccall f_8447(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8447,2,av);}
/* csi.scm:1030: chicken.base#exit */
t2=C_fast_retrieve(lf[48]);{
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

/* k8451 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in ... */
static void C_ccall f_8453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8453,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8456,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3834,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:95: scheme#display */
t5=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[359];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_7758(2,av2);}}}

/* k8454 in k8451 in k7615 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in ... */
static void C_ccall f_8456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8456,2,av);}
/* csi.scm:1027: chicken.base#exit */
t2=C_fast_retrieve(lf[48]);{
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

/* map-loop1783 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in ... */
static void C_fcall f_8461(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8461,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8486,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1003: g1789 */
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

/* k8484 in map-loop1783 in k7609 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in ... */
static void C_ccall f_8486(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8486,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8461(t6,((C_word*)t0)[5],t5);}

/* k8495 in k7603 in k7600 in k7597 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in ... */
static void C_ccall f_8497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8497,2,av);}
if(C_truep(t1)){
t2=t1;
/* csi.scm:1004: ##sys#split-path */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[21]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
tp(3,av2);}}
else{
/* csi.scm:1004: ##sys#split-path */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[21]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[361];
tp(3,av2);}}}

/* k8504 in k7594 in k7591 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_ccall f_8506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8506,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_7599(t3,t2);}
else{
t2=((C_word*)t0)[2];
f_7599(t2,((C_word*)t0)[3]);}}

/* k8510 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_ccall f_8512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8512,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8515,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* csi.scm:987: chicken.process-context#program-name */
t4=C_fast_retrieve(lf[367]);{
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

/* k8513 in k8510 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in ... */
static void C_ccall f_8515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8515,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8518,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
/* csi.scm:988: chicken.process-context#command-line-arguments */
t5=C_fast_retrieve(lf[304]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k8516 in k8513 in k8510 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in ... */
static void C_ccall f_8518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8518,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8521,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:990: chicken.platform#register-feature! */
t3=C_fast_retrieve(lf[278]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[366];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8519 in k8516 in k8513 in k8510 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in ... */
static void C_ccall f_8521(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8521,2,av);}
a=C_alloc(4);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_i_set_i_slot(t2,C_fix(1),C_SCHEME_END_OF_LIST);
if(C_truep(*((C_word*)lf[11]+1))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8530,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_i_cadr(((C_word*)t0)[2]);
/* csi.scm:993: lookup-script-file */
t6=C_retrieve2(lf[17],C_text("chicken.csi#lookup-script-file"));
f_3980(t6,t4,t5);}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
f_7593(t5,t4);}}

/* k8528 in k8519 in k8516 in k8513 in k8510 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in ... */
static void C_ccall f_8530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8530,2,av);}
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_7593(t3,C_i_set_car(t2,t1));}
else{
t2=((C_word*)t0)[3];
f_7593(t2,C_SCHEME_FALSE);}}

/* k8593 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_ccall f_8595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8595,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_member(lf[369],((C_word*)((C_word*)t0)[2])[1]);
t4=((C_word*)t0)[3];
f_7593(t4,(C_truep(t3)?C_i_set_cdr(t3,C_SCHEME_END_OF_LIST):C_SCHEME_FALSE));}

/* k8606 in k7588 in k7585 in k7582 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in ... */
static void C_ccall f_8608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8608,2,av);}
/* csi.scm:996: scheme#append */
t2=*((C_word*)lf[234]+1);{
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

/* k8610 in k7579 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_8612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8612,2,av);}
/* csi.scm:978: canonicalize-args */
f_7402(((C_word*)t0)[2],t1);}

/* k8614 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_8616(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8616,2,av);}
a=C_alloc(4);
t2=(C_truep(t1)?t1:lf[372]);
t3=((C_word*)t0)[2];
t4=t2;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4902,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:435: chicken.base#open-input-string */
t6=C_fast_retrieve(lf[277]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k8620 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_8622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8622,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8628,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.base#implicit-exit-handler */
t3=C_fast_retrieve(lf[274]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8626 in k8620 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_8628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8628,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a8629 in k5364 in k5039 in k4894 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_8630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8630,3,av);}
/* csi.scm:919: ##sys#user-interrupt-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[262]);
C_word *av2=av;
av2[0]=*((C_word*)lf[262]+1);
av2[1]=t1;
tp(2,av2);}}

/* a8635 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_8636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8636,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8640,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:419: scheme#read */
t3=*((C_word*)lf[51]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8638 in a8635 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_8640(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8640,2,av);}
a=C_alloc(7);
t2=t1;
if(C_truep(C_i_not(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8649,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:421: ##sys#switch-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[383]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[383]+1);
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
tp(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8655,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8676,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:423: ##sys#resolve-module-name */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[387]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[387]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}}

/* k8647 in k8638 in a8635 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_8649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8649,2,av);}
/* csi.scm:422: printf */
t2=*((C_word*)lf[76]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[382];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8653 in k8638 in a8635 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_8655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8655,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8659,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:420: g980 */
t3=t2;
f_8659(t3,((C_word*)t0)[3],t1);}
else{
/* csi.scm:428: printf */
t2=*((C_word*)lf[76]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[385];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* g980 in k8653 in k8638 in a8635 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_fcall f_8659(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_8659,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8663,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:425: ##sys#switch-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[383]);
C_word av2[3];
av2[0]=*((C_word*)lf[383]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k8661 in g980 in k8653 in k8638 in a8635 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_8663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8663,2,av);}
/* csi.scm:426: printf */
t2=*((C_word*)lf[76]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[384];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k8674 in k8638 in a8635 in k4250 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_8676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8676,2,av);}
/* csi.scm:423: ##sys#find-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[386]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[386]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}

/* a8677 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_8678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8678,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8686,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:250: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[394]);
C_word *av2=av;
av2[0]=*((C_word*)lf[394]+1);
av2[1]=t2;
tp(2,av2);}}

/* k8684 in a8677 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_8686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8686,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8689,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8696,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:252: ##sys#module-name */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[392]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[392]+1);
av2[1]=t3;
av2[2]=t1;
tp(3,av2);}}
else{
/* csi.scm:249: sprintf */
t3=*((C_word*)lf[199]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[390];
av2[3]=lf[393];
av2[4]=C_retrieve2(lf[26],C_text("chicken.csi#history-count"));
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k8687 in k8684 in a8677 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_8689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8689,2,av);}
/* csi.scm:249: sprintf */
t2=*((C_word*)lf[199]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[390];
av2[3]=t1;
av2[4]=C_retrieve2(lf[26],C_text("chicken.csi#history-count"));
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8694 in k8684 in a8677 in k3908 in k3826 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_8696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8696,2,av);}
/* csi.scm:252: sprintf */
t2=*((C_word*)lf[199]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[391];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k8698 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_8700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8700,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_3828(t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8709,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:87: chicken.process-context#get-environment-variable */
t3=C_fast_retrieve(lf[23]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[399];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k8707 in k8698 in k3823 in k3818 in k2528 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in k2498 */
static void C_ccall f_8709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8709,2,av);}
t2=((C_word*)t0)[2];
f_3828(t2,(C_truep(t1)?lf[397]:lf[398]));}

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
if(C_unlikely(!C_demand_2(1959))){
C_save(t1);
C_rereclaim2(1959*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,406);
lf[0]=C_h_intern(&lf[0],12, C_text("chicken.csi#"));
lf[2]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006.csirc"));
lf[3]=C_h_intern(&lf[3],27, C_text("\003sysrepl-print-length-limit"));
lf[4]=C_h_intern(&lf[4],4, C_text("\000csi"));
lf[5]=C_h_intern(&lf[5],12, C_text("\003sysfeatures"));
lf[6]=C_h_intern(&lf[6],19, C_text("\003sysnotices-enabled"));
lf[7]=C_h_intern(&lf[7],26, C_text("chicken.csi#editor-command"));
lf[11]=C_h_intern(&lf[11],20, C_text("\003syswindows-platform"));
lf[13]=C_h_intern(&lf[13],16, C_text("scheme#substring"));
lf[14]=C_h_intern(&lf[14],25, C_text("chicken.file#file-exists\077"));
lf[15]=C_h_intern(&lf[15],17, C_text("\003sysstring-append"));
lf[16]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004.bat"));
lf[18]=C_h_intern(&lf[18],20, C_text("scheme#string-append"));
lf[19]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[20]=C_h_intern(&lf[20],25, C_text("\003syspeek-nonnull-c-string"));
lf[21]=C_h_intern(&lf[21],14, C_text("\003syssplit-path"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[23]=C_h_intern(&lf[23],48, C_text("chicken.process-context#get-environment-variable"));
lf[24]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004PATH"));
lf[27]=C_h_intern(&lf[27],26, C_text("chicken.base#vector-resize"));
lf[29]=C_h_intern(&lf[29],19, C_text("\003sysundefined-value"));
lf[31]=C_h_intern(&lf[31],9, C_text("\003syserror"));
lf[32]=C_decode_literal(C_heaptop,C_text("\376B\000\000 history entry index out of range"));
lf[33]=C_h_intern(&lf[33],21, C_text("scheme#inexact->exact"));
lf[34]=C_h_intern(&lf[34],18, C_text("\003sysbreak-on-error"));
lf[35]=C_h_intern(&lf[35],20, C_text("\003sysread-prompt-hook"));
lf[36]=C_h_intern(&lf[36],13, C_text("\003systty-port\077"));
lf[37]=C_h_intern(&lf[37],18, C_text("\003sysstandard-input"));
lf[39]=C_h_intern(&lf[39],28, C_text("chicken.csi#toplevel-command"));
lf[40]=C_h_intern(&lf[40],16, C_text("toplevel-command"));
lf[41]=C_h_intern(&lf[41],25, C_text("chicken.load#load-noisily"));
lf[42]=C_h_intern(&lf[42],20, C_text("chicken.io#read-line"));
lf[43]=C_h_intern(&lf[43],27, C_text("chicken.string#string-split"));
lf[44]=C_h_intern(&lf[44],21, C_text("chicken.syntax#expand"));
lf[45]=C_h_intern(&lf[45],33, C_text("chicken.pretty-print#pretty-print"));
lf[46]=C_h_intern(&lf[46],13, C_text("scheme#values"));
lf[48]=C_h_intern(&lf[48],17, C_text("chicken.base#exit"));
lf[49]=C_h_intern(&lf[49],1, C_text("x"));
lf[50]=C_h_intern(&lf[50],27, C_text("chicken.syntax#strip-syntax"));
lf[51]=C_h_intern(&lf[51],11, C_text("scheme#read"));
lf[52]=C_h_intern(&lf[52],1, C_text("p"));
lf[53]=C_h_intern(&lf[53],11, C_text("scheme#eval"));
lf[54]=C_h_intern(&lf[54],1, C_text("d"));
lf[56]=C_h_intern(&lf[56],2, C_text("du"));
lf[58]=C_h_intern(&lf[58],3, C_text("dur"));
lf[59]=C_h_intern(&lf[59],1, C_text("r"));
lf[61]=C_h_intern(&lf[61],1, C_text("q"));
lf[62]=C_h_intern(&lf[62],17, C_text("chicken.repl#quit"));
lf[63]=C_h_intern(&lf[63],1, C_text("l"));
lf[64]=C_h_intern(&lf[64],11, C_text("scheme#load"));
lf[65]=C_h_intern(&lf[65],2, C_text("ln"));
lf[66]=C_h_intern(&lf[66],19, C_text("chicken.base#print\052"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004==> "));
lf[68]=C_h_intern(&lf[68],8, C_text("\000printer"));
lf[69]=C_h_intern(&lf[69],1, C_text("t"));
lf[70]=C_h_intern(&lf[70],17, C_text("\003sysdisplay-times"));
lf[71]=C_h_intern(&lf[71],14, C_text("\003sysstop-timer"));
lf[72]=C_h_intern(&lf[72],15, C_text("\003sysstart-timer"));
lf[73]=C_h_intern(&lf[73],3, C_text("exn"));
lf[74]=C_h_intern(&lf[74],18, C_text("\003syslast-exception"));
lf[75]=C_h_intern(&lf[75],1, C_text("e"));
lf[76]=C_h_intern(&lf[76],21, C_text("chicken.format#printf"));
lf[77]=C_decode_literal(C_heaptop,C_text("\376B\000\000,editor returned with non-zero exit status ~a"));
lf[78]=C_h_intern(&lf[78],22, C_text("chicken.process#system"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001 "));
lf[80]=C_h_intern(&lf[80],2, C_text("ch"));
lf[81]=C_h_intern(&lf[81],19, C_text("scheme#vector-fill!"));
lf[82]=C_h_intern(&lf[82],1, C_text("h"));
lf[83]=C_h_intern(&lf[83],19, C_text("\003sysstandard-output"));
lf[84]=C_h_intern(&lf[84],6, C_text("printf"));
lf[85]=C_h_intern(&lf[85],14, C_text("scheme#newline"));
lf[86]=C_h_intern(&lf[86],9, C_text("\003sysprint"));
lf[87]=C_h_intern(&lf[87],27, C_text("\003syswith-print-length-limit"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002: "));
lf[89]=C_h_intern(&lf[89],16, C_text("\003syswrite-char-0"));
lf[90]=C_h_intern(&lf[90],1, C_text("c"));
lf[92]=C_h_intern(&lf[92],1, C_text("f"));
lf[93]=C_h_intern(&lf[93],14, C_text("scheme#display"));
lf[94]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016no such frame\012"));
lf[95]=C_h_intern(&lf[95],26, C_text("\003sysrepl-recent-call-chain"));
lf[96]=C_h_intern(&lf[96],1, C_text("g"));
lf[97]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027no environment in frame"));
lf[98]=C_h_intern(&lf[98],9, C_text("frameinfo"));
lf[99]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012; getting "));
lf[100]=C_h_intern(&lf[100],8, C_text("for-each"));
lf[101]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022no such variable: "));
lf[102]=C_h_intern(&lf[102],20, C_text("chicken.base#call/cc"));
lf[103]=C_decode_literal(C_heaptop,C_text("\376B\000\000#string or symbol required for `,g\047\012"));
lf[104]=C_h_intern(&lf[104],1, C_text("s"));
lf[105]=C_h_intern(&lf[105],1, C_text("\077"));
lf[106]=C_h_intern(&lf[106],18, C_text("chicken.base#print"));
lf[107]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002 ,"));
lf[108]=C_decode_literal(C_heaptop,C_text("\376B\000\003\266Toplevel commands:\012\012 ,\077                Show this text\012 ,p EXP            Pr"
"etty print evaluated expression EXP\012 ,d EXP            Describe result of evalua"
"ted expression EXP\012 ,du EXP           Dump data of expression EXP\012 ,dur EXP N   "
"     Dump range\012 ,q                Quit interpreter\012 ,l FILENAME ...   Load one "
"or more files\012 ,ln FILENAME ...  Load one or more files and print result of each"
" top-level expression\012 ,r                Show system information\012 ,h            "
"    Show history of expression results\012 ,ch               Clear history of expre"
"ssion results\012 ,e FILENAME       Run external editor\012 ,s TEXT ...       Execute "
"shell-command\012 ,exn              Describe last exception\012 ,c                Show"
" call-chain of most recent error\012 ,f N              Select frame N\012 ,g NAME     "
"      Get variable NAME from current frame\012 ,t EXP            Evaluate form and "
"print elapsed time\012 ,x EXP            Pretty print expanded expression EXP\012"));
lf[109]=C_decode_literal(C_heaptop,C_text("\376B\000\0005undefined toplevel command ~s - enter `,\077\047 for help~%"));
lf[110]=C_h_intern(&lf[110],7, C_text("unquote"));
lf[111]=C_h_intern(&lf[111],17, C_text("chicken.sort#sort"));
lf[112]=C_h_intern(&lf[112],32, C_text("chicken.port#with-output-to-port"));
lf[113]=C_h_intern(&lf[113],28, C_text("chicken.process-context#argv"));
lf[114]=C_h_intern(&lf[114],7, C_text("\003sys/-2"));
lf[115]=C_h_intern(&lf[115],15, C_text("scheme#truncate"));
lf[116]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\012"));
lf[117]=C_h_intern(&lf[117],18, C_text("scheme#make-string"));
lf[118]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004  ~a"));
lf[119]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027interrupts are enabled\012"));
lf[120]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010(64-bit)"));
lf[121]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[122]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010 (fixed)"));
lf[123]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[124]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010downward"));
lf[125]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006upward"));
lf[126]=C_decode_literal(C_heaptop,C_text("\376B\000\002\354~%~%~\012                   Machine type:    \011~A ~A~%~\012                   Soft"
"ware type:   \011~A~%~\012                   Software version:\011~A~%~\012                 "
"  Build platform:  \011~A~%~\012                   Installation prefix:\011~A~%~\012        "
"           Extension installation location:\011~A~%~\012                   Extension p"
"ath:  \011~A~%~\012                   Include path:    \011~A~%~\012                   Keywo"
"rd style:   \011~A~%~\012                   Symbol-table load:\011~S~%  ~\012               "
"      Avg bucket length:\011~S~%  ~\012                     Total symbol count:\011~S~%~\012"
"                   Memory:\011heap size is ~S bytes~A with ~S bytes currently in us"
"e~%~  \012                     nursery size is ~S bytes, stack grows ~A~%~\012        "
"           Command line:    \011~S~%"));
lf[127]=C_h_intern(&lf[127],21, C_text("\003sysinclude-pathnames"));
lf[128]=C_h_intern(&lf[128],21, C_text("scheme#symbol->string"));
lf[129]=C_h_intern(&lf[129],26, C_text("chicken.base#keyword-style"));
lf[130]=C_h_intern(&lf[130],32, C_text("chicken.platform#repository-path"));
lf[131]=C_h_intern(&lf[131],40, C_text("chicken.platform#installation-repository"));
lf[132]=C_h_intern(&lf[132],31, C_text("chicken.platform#build-platform"));
lf[133]=C_h_intern(&lf[133],33, C_text("chicken.platform#software-version"));
lf[134]=C_h_intern(&lf[134],30, C_text("chicken.platform#software-type"));
lf[135]=C_h_intern(&lf[135],25, C_text("chicken.platform#feature\077"));
lf[136]=C_h_intern(&lf[136],6, C_text("\00064bit"));
lf[137]=C_h_intern(&lf[137],29, C_text("chicken.platform#machine-type"));
lf[138]=C_h_intern(&lf[138],31, C_text("chicken.keyword#keyword->string"));
lf[139]=C_h_intern(&lf[139],3, C_text("map"));
lf[140]=C_h_intern(&lf[140],15, C_text("scheme#string<\077"));
lf[141]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015Features:~%~%"));
lf[142]=C_h_intern(&lf[142],28, C_text("chicken.gc#memory-statistics"));
lf[143]=C_h_intern(&lf[143],21, C_text("\003syssymbol-table-info"));
lf[144]=C_h_intern(&lf[144],13, C_text("chicken.gc#gc"));
lf[146]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010u8vector\376\003\000\000\002\376B\000\000\030vector of unsigned bytes\376\003\000\000\002\376\001\000\000\017u8vector-leng"
"th\376\003\000\000\002\376\001\000\000\014u8vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010s8vector\376\003\000\000\002\376B\000\000\026vector of signed byt"
"es\376\003\000\000\002\376\001\000\000\017s8vector-length\376\003\000\000\002\376\001\000\000\014s8vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011u16vector\376\003\000\000"
"\002\376B\000\000\037vector of unsigned 16-bit words\376\003\000\000\002\376\001\000\000\020u16vector-length\376\003\000\000\002\376\001\000\000\015u16vect"
"or-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011s16vector\376\003\000\000\002\376B\000\000\035vector of signed 16-bit words\376\003\000\000\002\376\001\000"
"\000\020s16vector-length\376\003\000\000\002\376\001\000\000\015s16vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011u32vector\376\003\000\000\002\376B\000\000\037ve"
"ctor of unsigned 32-bit words\376\003\000\000\002\376\001\000\000\020u32vector-length\376\003\000\000\002\376\001\000\000\015u32vector-ref\376\377"
"\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011s32vector\376\003\000\000\002\376B\000\000\035vector of signed 32-bit words\376\003\000\000\002\376\001\000\000\020s32vec"
"tor-length\376\003\000\000\002\376\001\000\000\015s32vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011u64vector\376\003\000\000\002\376B\000\000\037vector of "
"unsigned 64-bit words\376\003\000\000\002\376\001\000\000\020u64vector-length\376\003\000\000\002\376\001\000\000\015u64vector-ref\376\377\016\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\011s64vector\376\003\000\000\002\376B\000\000\035vector of signed 64-bit words\376\003\000\000\002\376\001\000\000\020s64vector-leng"
"th\376\003\000\000\002\376\001\000\000\015s64vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011f32vector\376\003\000\000\002\376B\000\000\027vector of 32-bit f"
"loats\376\003\000\000\002\376\001\000\000\020f32vector-length\376\003\000\000\002\376\001\000\000\015f32vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011f64vecto"
"r\376\003\000\000\002\376B\000\000\027vector of 64-bit floats\376\003\000\000\002\376\001\000\000\020f64vector-length\376\003\000\000\002\376\001\000\000\015f64vector-"
"ref\376\377\016\376\377\016"));
lf[148]=C_h_intern(&lf[148],13, C_text("scheme#length"));
lf[149]=C_h_intern(&lf[149],15, C_text("scheme#list-ref"));
lf[150]=C_h_intern(&lf[150],17, C_text("scheme#string-ref"));
lf[151]=C_h_intern(&lf[151],22, C_text("chicken.format#fprintf"));
lf[152]=C_decode_literal(C_heaptop,C_text("\376B\000\000 ~% (~A elements not displayed)~%"));
lf[153]=C_decode_literal(C_heaptop,C_text("\376B\000\000.\011(followed by ~A identical instance~a)~% ...~%"));
lf[154]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[155]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001s"));
lf[156]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007 ~S: ~S"));
lf[157]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021~A of length ~S~%"));
lf[158]=C_decode_literal(C_heaptop,C_text("\376B\000\000$character ~S, code: ~S, #x~X, #o~O~%"));
lf[159]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016boolean true~%"));
lf[160]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017boolean false~%"));
lf[161]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014empty list~%"));
lf[162]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024end-of-file object~%"));
lf[163]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024unspecified object~%"));
lf[164]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016, character ~S"));
lf[165]=C_decode_literal(C_heaptop,C_text("\376B\000\0002exact immediate integer ~S~%  #x~X~%  #o~O~%  #b~B"));
lf[166]=C_decode_literal(C_heaptop,C_text("\376B\000\0000exact large integer ~S~%  #x~X~%  #o~O~%  #b~B~%"));
lf[167]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017unbound value~%"));
lf[168]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034inexact rational number ~S~%"));
lf[169]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020exact ratio ~S~%"));
lf[170]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026~A complex number ~S~%"));
lf[171]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005exact"));
lf[172]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007inexact"));
lf[173]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013number ~S~%"));
lf[174]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006string"));
lf[175]=C_h_intern(&lf[175],8, C_text("\003syssize"));
lf[176]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006vector"));
lf[177]=C_h_intern(&lf[177],8, C_text("\003sysslot"));
lf[178]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035keyword symbol with name ~s~%"));
lf[179]=C_h_intern(&lf[179],18, C_text("\003syssymbol->string"));
lf[180]=C_h_intern(&lf[180],12, C_text("scheme#write"));
lf[181]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005  ~s\011"));
lf[182]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020  \012properties:\012\012"));
lf[183]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[184]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013uninterned "));
lf[185]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012qualified "));
lf[186]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[187]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031~a~asymbol with name ~S~%"));
lf[188]=C_h_intern(&lf[188],28, C_text("\003syssymbol->qualified-string"));
lf[189]=C_h_intern(&lf[189],20, C_text("\003sysinterned-symbol\077"));
lf[190]=C_h_intern(&lf[190],21, C_text("\003sysqualified-symbol\077"));
lf[191]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010unbound "));
lf[192]=C_h_intern(&lf[192],32, C_text("\003syssymbol-has-toplevel-binding\077"));
lf[193]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005eol~%"));
lf[194]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012(circle)~%"));
lf[195]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006~S -> "));
lf[196]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024circular structure: "));
lf[197]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004list"));
lf[198]=C_decode_literal(C_heaptop,C_text("\376B\000\000\036pair with car ~S~%and cdr ~S~%"));
lf[199]=C_h_intern(&lf[199],22, C_text("chicken.format#sprintf"));
lf[200]=C_decode_literal(C_heaptop,C_text("\376B\000\000 procedure with code pointer 0x~X"));
lf[201]=C_h_intern(&lf[201],25, C_text("\003syspeek-unsigned-integer"));
lf[202]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005input"));
lf[203]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006output"));
lf[204]=C_decode_literal(C_heaptop,C_text("\376B\000\0005~A port of type ~A with name ~S and file pointer ~X~%"));
lf[205]=C_decode_literal(C_heaptop,C_text("\376B\000\000/locative~%  pointer ~X~%  index ~A~%  type ~A~%"));
lf[206]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004slot"));
lf[207]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004char"));
lf[208]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010u8vector"));
lf[209]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010s8vector"));
lf[210]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011u16vector"));
lf[211]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011s16vector"));
lf[212]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011u32vector"));
lf[213]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011s32vector"));
lf[214]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011u64vector"));
lf[215]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011s64vector"));
lf[216]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011f32vector"));
lf[217]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011f64vector"));
lf[218]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024machine pointer ~X~%"));
lf[220]=C_h_intern(&lf[220],8, C_text("\003sysbyte"));
lf[221]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022blob of size ~S:~%"));
lf[222]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030lambda information: ~s~%"));
lf[223]=C_h_intern(&lf[223],23, C_text("\003syslambda-info->string"));
lf[224]=C_h_intern(&lf[224],10, C_text("hash-table"));
lf[225]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013 ~S\011-> ~S~%"));
lf[226]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025  hash function: ~a~%"));
lf[227]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[228]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001s"));
lf[229]=C_decode_literal(C_heaptop,C_text("\376B\000\000:hash-table with ~S element~a~%  comparison procedure: ~A~%"));
lf[230]=C_h_intern(&lf[230],9, C_text("condition"));
lf[231]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007\011~s: ~s"));
lf[232]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005 ~s~%"));
lf[233]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017condition: ~s~%"));
lf[234]=C_h_intern(&lf[234],13, C_text("scheme#append"));
lf[235]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031structure of type `~S\047:~%"));
lf[236]=C_h_intern(&lf[236],31, C_text("chicken.internal#hash-table-ref"));
lf[237]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020unknown object~%"));
lf[238]=C_h_intern(&lf[238],15, C_text("\003sysbytevector\077"));
lf[239]=C_h_intern(&lf[239],13, C_text("\003syslocative\077"));
lf[240]=C_h_intern(&lf[240],18, C_text("chicken.base#port\077"));
lf[241]=C_h_intern(&lf[241],24, C_text("chicken.keyword#keyword\077"));
lf[242]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034statically allocated (0x~X) "));
lf[243]=C_h_intern(&lf[243],17, C_text("\003sysblock-address"));
lf[244]=C_h_intern(&lf[244],26, C_text("chicken.csi#set-describer!"));
lf[245]=C_h_intern(&lf[245],14, C_text("set-describer!"));
lf[246]=C_h_intern(&lf[246],32, C_text("chicken.internal#hash-table-set!"));
lf[247]=C_h_intern(&lf[247],10, C_text("scheme#min"));
lf[248]=C_h_intern(&lf[248],4, C_text("dump"));
lf[249]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034cannot dump immediate object"));
lf[250]=C_h_intern(&lf[250],13, C_text("\003syspeek-byte"));
lf[251]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022cannot dump object"));
lf[252]=C_h_intern(&lf[252],18, C_text("\003sysnumber->string"));
lf[253]=C_h_intern(&lf[253],19, C_text("\003syswrite-char/port"));
lf[254]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003   "));
lf[255]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004:\011  "));
lf[256]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002  "));
lf[257]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006  ---\012"));
lf[258]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002] "));
lf[259]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003\011  "));
lf[260]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002[]"));
lf[261]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002  "));
lf[262]=C_h_intern(&lf[262],23, C_text("\003sysuser-interrupt-hook"));
lf[263]=C_h_intern(&lf[263],17, C_text("\003syssignal-vector"));
lf[266]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-s"));
lf[267]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003-ss"));
lf[268]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007-script"));
lf[269]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003-sx"));
lf[270]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002--"));
lf[271]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016invalid option"));
lf[272]=C_h_intern(&lf[272],16, C_text("\003sysstring->list"));
lf[273]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\003-ss\376\003\000\000\002\376B\000\000\003-sx\376\003\000\000\002\376B\000\000\007-script\376\003\000\000\002\376B\000\000\010-version\376\003\000\000\002\376B\000\000\005-help\376\003\000\000"
"\002\376B\000\000\006--help\376\003\000\000\002\376B\000\000\010-feature\376\003\000\000\002\376B\000\000\013-no-feature\376\003\000\000\002\376B\000\000\005-eval\376\003\000\000\002\376B\000\000\021-cas"
"e-insensitive\376\003\000\000\002\376B\000\000\016-keyword-style\376\003\000\000\002\376B\000\000\030-no-parentheses-synonyms\376\003\000\000\002\376B\000\000"
"\021-no-symbol-escape\376\003\000\000\002\376B\000\000\014-r5rs-syntax\376\003\000\000\002\376B\000\000\013-setup-mode\376\003\000\000\002\376B\000\000\022-require-"
"extension\376\003\000\000\002\376B\000\000\006-batch\376\003\000\000\002\376B\000\000\006-quiet\376\003\000\000\002\376B\000\000\014-no-warnings\376\003\000\000\002\376B\000\000\010-no-ini"
"t\376\003\000\000\002\376B\000\000\015-include-path\376\003\000\000\002\376B\000\000\010-release\376\003\000\000\002\376B\000\000\006-print\376\003\000\000\002\376B\000\000\015-pretty-prin"
"t\376\003\000\000\002\376B\000\000\002--\376\377\016"));
lf[274]=C_h_intern(&lf[274],34, C_text("chicken.base#implicit-exit-handler"));
lf[275]=C_decode_literal(C_heaptop,C_text("\376B\000\000\047missing argument to command-line option"));
lf[276]=C_h_intern(&lf[276],8, C_text("\003syslist"));
lf[277]=C_h_intern(&lf[277],30, C_text("chicken.base#open-input-string"));
lf[278]=C_h_intern(&lf[278],34, C_text("chicken.platform#register-feature!"));
lf[279]=C_h_intern(&lf[279],36, C_text("chicken.platform#unregister-feature!"));
lf[280]=C_h_intern(&lf[280],18, C_text("\003sysuser-read-hook"));
lf[281]=C_h_intern(&lf[281],5, C_text("quote"));
lf[282]=C_h_intern(&lf[282],21, C_text("\003syssharp-number-hook"));
lf[283]=C_h_intern(&lf[283],17, C_text("chicken.repl#repl"));
lf[284]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\002--\376\003\000\000\002\376B\000\000\002-b\376\003\000\000\002\376B\000\000\006-batch\376\003\000\000\002\376B\000\000\002-q\376\003\000\000\002\376B\000\000\006-quiet\376\003\000\000\002\376B\000\000\002-n"
"\376\003\000\000\002\376B\000\000\010-no-init\376\003\000\000\002\376B\000\000\002-w\376\003\000\000\002\376B\000\000\014-no-warnings\376\003\000\000\002\376B\000\000\002-i\376\003\000\000\002\376B\000\000\021-case-"
"insensitive\376\003\000\000\002\376B\000\000\030-no-parentheses-synonyms\376\003\000\000\002\376B\000\000\021-no-symbol-escape\376\003\000\000\002\376B\000"
"\000\014-r5rs-syntax\376\003\000\000\002\376B\000\000\013-setup-mode\376\003\000\000\002\376B\000\000\003-ss\376\003\000\000\002\376B\000\000\003-sx\376\003\000\000\002\376B\000\000\002-s\376\003\000\000\002\376B"
"\000\000\007-script\376\377\016"));
lf[285]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-D"));
lf[286]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-feature"));
lf[287]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-I"));
lf[288]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015-include-path"));
lf[289]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-K"));
lf[290]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016-keyword-style"));
lf[291]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013-no-feature"));
lf[292]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-R"));
lf[293]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022-require-extension"));
lf[294]=C_h_intern(&lf[294],6, C_text("import"));
lf[295]=C_h_intern(&lf[295],21, C_text("scheme#string->symbol"));
lf[296]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-e"));
lf[297]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-eval"));
lf[298]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-p"));
lf[299]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006-print"));
lf[300]=C_h_intern(&lf[300],15, C_text("scheme#for-each"));
lf[301]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-P"));
lf[302]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015-pretty-print"));
lf[303]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003-ss"));
lf[304]=C_h_intern(&lf[304],46, C_text("chicken.process-context#command-line-arguments"));
lf[305]=C_h_intern(&lf[305],4, C_text("main"));
lf[306]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003-sx"));
lf[307]=C_h_intern(&lf[307],18, C_text("\003sysstandard-error"));
lf[308]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002; "));
lf[309]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003\012; "));
lf[310]=C_h_intern(&lf[310],25, C_text("chicken.base#flush-output"));
lf[311]=C_h_intern(&lf[311],34, C_text("chicken.port#with-output-to-string"));
lf[312]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[313]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[314]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004HOME"));
lf[315]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\002-n\376\003\000\000\002\376B\000\000\010-no-init\376\377\016"));
lf[316]=C_decode_literal(C_heaptop,C_text("\376B\000\000KCHICKEN\012(c) 2008-2018, The CHICKEN Team\012(c) 2000-2007, Felix L. Winkelmann\012"
));
lf[317]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\012"));
lf[318]=C_h_intern(&lf[318],32, C_text("chicken.platform#chicken-version"));
lf[319]=C_h_intern(&lf[319],25, C_text("chicken.load#load-verbose"));
lf[320]=C_h_intern(&lf[320],32, C_text("chicken.internal#default-imports"));
lf[321]=C_h_intern(&lf[321],17, C_text("import-for-syntax"));
lf[322]=C_h_intern(&lf[322],39, C_text("chicken.internal#default-syntax-imports"));
lf[323]=C_h_intern(&lf[323],26, C_text("chicken.base#symbol-escape"));
lf[324]=C_h_intern(&lf[324],33, C_text("chicken.base#parentheses-synonyms"));
lf[325]=C_h_intern(&lf[325],5, C_text("\000none"));
lf[326]=C_h_intern(&lf[326],27, C_text("chicken.base#case-sensitive"));
lf[327]=C_decode_literal(C_heaptop,C_text("\376B\000\000/Disabled the CHICKEN extensions to R5RS syntax\012"));
lf[328]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\014-r5rs-syntax\376\377\016"));
lf[329]=C_decode_literal(C_heaptop,C_text("\376B\000\000%Disabled support for escaped symbols\012"));
lf[330]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\021-no-symbol-escape\376\377\016"));
lf[331]=C_decode_literal(C_heaptop,C_text("\376B\000\000\052Disabled support for parentheses synonyms\012"));
lf[332]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\030-no-parentheses-synonyms\376\377\016"));
lf[333]=C_decode_literal(C_heaptop,C_text("\376B\000\000+missing argument to `-keyword-style\047 option"));
lf[334]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006prefix"));
lf[335]=C_h_intern(&lf[335],7, C_text("\000prefix"));
lf[336]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004none"));
lf[337]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006suffix"));
lf[338]=C_h_intern(&lf[338],7, C_text("\000suffix"));
lf[339]=C_h_intern(&lf[339],15, C_text("scheme#string=\077"));
lf[340]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-I"));
lf[341]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015-include-path"));
lf[342]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013-no-feature"));
lf[343]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-D"));
lf[344]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-feature"));
lf[345]=C_h_intern(&lf[345],16, C_text("case-insensitive"));
lf[346]=C_decode_literal(C_heaptop,C_text("\376B\000\000-Identifiers and symbols are case insensitive\012"));
lf[347]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\002-i\376\003\000\000\002\376B\000\000\021-case-insensitive\376\377\016"));
lf[348]=C_h_intern(&lf[348],20, C_text("\003syswarnings-enabled"));
lf[349]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026Warnings are disabled\012"));
lf[350]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\002-w\376\003\000\000\002\376B\000\000\014-no-warnings\376\377\016"));
lf[351]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-release"));
lf[352]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013-setup-mode"));
lf[353]=C_h_intern(&lf[353],14, C_text("\003syssetup-mode"));
lf[354]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-version"));
lf[355]=C_decode_literal(C_heaptop,C_text("\376B\000\004e    -b  -batch                    terminate after command-line processing\012 "
"   -w  -no-warnings              disable all warnings\012    -K  -keyword-style STY"
"LE      enable alternative keyword-syntax\012                                   (pr"
"efix, suffix or none)\012        -no-parentheses-synonyms  disables list delimiter "
"synonyms\012        -no-symbol-escape         disables support for escaped symbols\012"
"        -r5rs-syntax              disables the CHICKEN extensions to\012           "
"                        R5RS syntax\012    -s  -script PATHNAME          use csi as"
" interpreter for Scheme scripts\012        -ss PATHNAME              same as `-s\047, "
"but invoke `main\047 procedure\012        -sx PATHNAME              same as `-s\047, but "
"print each expression\012                                   as it is evaluated\012    "
"    -setup-mode               prefer the current directory when locating extensi"
"ons\012    -R  -require-extension NAME   require extension and import before\012      "
"                             executing code\012    -I  -include-path PATHNAME    ad"
"d PATHNAME to include path\012    --                            ignore all followin"
"g options\012"));
lf[356]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003 \047\012"));
lf[357]=C_decode_literal(C_heaptop,C_text("\376B\000\000D    -n  -no-init                  do not load initialization file ` "));
lf[358]=C_h_intern(&lf[358],19, C_text("\003sysprint-to-string"));
lf[359]=C_decode_literal(C_heaptop,C_text("\376B\000\003.usage: csi [OPTION ...] [FILENAME ...]\012\012  `csi\047 is the CHICKEN interpreter."
"\012  \012  FILENAME is a Scheme source file name with optional extension. OPTION may "
"be\012  one of the following:\012\012    -h  -help                     display this text "
"and exit\012        -version                  display version and exit\012        -rel"
"ease                  print release number and exit\012    -i  -case-insensitive   "
"      enable case-insensitive reading\012    -e  -eval EXPRESSION          evaluate"
" given expression\012    -p  -print EXPRESSION         evaluate and print result(s)"
"\012    -P  -pretty-print EXPRESSION  evaluate and print result(s) prettily\012    -D "
" -feature SYMBOL           register feature identifier\012        -no-feature SYMBO"
"L        disable built-in feature identifier\012    -q  -quiet                    d"
"o not print banner\012"));
lf[360]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\002-h\376\003\000\000\002\376B\000\000\005-help\376\003\000\000\002\376B\000\000\006--help\376\377\016"));
lf[361]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[362]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024CHICKEN_INCLUDE_PATH"));
lf[363]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\002-q\376\003\000\000\002\376B\000\000\006-quiet\376\377\016"));
lf[364]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\002-b\376\003\000\000\002\376B\000\000\006-batch\376\377\016"));
lf[365]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\002-e\376\003\000\000\002\376B\000\000\002-p\376\003\000\000\002\376B\000\000\002-P\376\003\000\000\002\376B\000\000\005-eval\376\003\000\000\002\376B\000\000\006-print\376\003\000\000\002\376B\000\000\015-pr"
"etty-print\376\377\016"));
lf[366]=C_h_intern(&lf[366],14, C_text("chicken-script"));
lf[367]=C_h_intern(&lf[367],36, C_text("chicken.process-context#program-name"));
lf[368]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042missing or invalid script argument"));
lf[369]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002--"));
lf[370]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\003-ss\376\003\000\000\002\376B\000\000\003-sx\376\003\000\000\002\376B\000\000\002-s\376\003\000\000\002\376B\000\000\007-script\376\377\016"));
lf[371]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\002-K\376\003\000\000\002\376B\000\000\016-keyword-style\376\377\016"));
lf[372]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[373]=C_h_intern(&lf[373],30, C_text("chicken.base#get-output-string"));
lf[374]=C_h_intern(&lf[374],31, C_text("chicken.base#open-output-string"));
lf[375]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025invalid option syntax"));
lf[376]=C_h_intern(&lf[376],14, C_text("scheme#reverse"));
lf[377]=C_h_intern(&lf[377],40, C_text("chicken.condition#with-exception-handler"));
lf[378]=C_h_intern(&lf[378],37, C_text("scheme#call-with-current-continuation"));
lf[379]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013CSI_OPTIONS"));
lf[380]=C_h_intern(&lf[380],18, C_text("scheme#make-vector"));
lf[381]=C_h_intern(&lf[381],17, C_text("\003syspeek-c-string"));
lf[382]=C_decode_literal(C_heaptop,C_text("\376B\000\000(; resetting current module to toplevel~%"));
lf[383]=C_h_intern(&lf[383],17, C_text("\003sysswitch-module"));
lf[384]=C_decode_literal(C_heaptop,C_text("\376B\000\000$; switching current module to `~a\047~%"));
lf[385]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027undefined module `~a\047~%"));
lf[386]=C_h_intern(&lf[386],15, C_text("\003sysfind-module"));
lf[387]=C_h_intern(&lf[387],23, C_text("\003sysresolve-module-name"));
lf[388]=C_h_intern(&lf[388],1, C_text("m"));
lf[389]=C_decode_literal(C_heaptop,C_text("\376B\000\0005,m MODULE         switch to module with name `MODULE\047"));
lf[390]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010#;~A~A> "));
lf[391]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003~a:"));
lf[392]=C_h_intern(&lf[392],15, C_text("\003sysmodule-name"));
lf[393]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[394]=C_h_intern(&lf[394],18, C_text("\003syscurrent-module"));
lf[395]=C_h_intern(&lf[395],24, C_text("chicken.repl#repl-prompt"));
lf[396]=C_h_intern(&lf[396],15, C_text("\003sysmake-string"));
lf[397]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013emacsclient"));
lf[398]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002vi"));
lf[399]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005EMACS"));
lf[400]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006VISUAL"));
lf[401]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006EDITOR"));
lf[402]=C_h_intern(&lf[402],27, C_text("chicken.base#make-parameter"));
lf[403]=C_h_intern(&lf[403],28, C_text("\003sysregister-compiled-module"));
lf[404]=C_h_intern(&lf[404],11, C_text("chicken.csi"));
lf[405]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016editor-command\376\001\000\000\032chicken.csi#editor-command\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020tople"
"vel-command\376\001\000\000\034chicken.csi#toplevel-command\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016set-describer!\376\001\000\000\032ch"
"icken.csi#set-describer!\376\377\016"));
C_register_lf2(lf,406,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2500,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[499] = {
{C_text("f9362:csi_2escm"),(void*)f9362},
{C_text("f9402:csi_2escm"),(void*)f9402},
{C_text("f9420:csi_2escm"),(void*)f9420},
{C_text("f9424:csi_2escm"),(void*)f9424},
{C_text("f_2500:csi_2escm"),(void*)f_2500},
{C_text("f_2503:csi_2escm"),(void*)f_2503},
{C_text("f_2506:csi_2escm"),(void*)f_2506},
{C_text("f_2509:csi_2escm"),(void*)f_2509},
{C_text("f_2512:csi_2escm"),(void*)f_2512},
{C_text("f_2515:csi_2escm"),(void*)f_2515},
{C_text("f_2518:csi_2escm"),(void*)f_2518},
{C_text("f_2521:csi_2escm"),(void*)f_2521},
{C_text("f_2524:csi_2escm"),(void*)f_2524},
{C_text("f_2527:csi_2escm"),(void*)f_2527},
{C_text("f_2530:csi_2escm"),(void*)f_2530},
{C_text("f_3028:csi_2escm"),(void*)f_3028},
{C_text("f_3041:csi_2escm"),(void*)f_3041},
{C_text("f_3055:csi_2escm"),(void*)f_3055},
{C_text("f_3103:csi_2escm"),(void*)f_3103},
{C_text("f_3117:csi_2escm"),(void*)f_3117},
{C_text("f_3130:csi_2escm"),(void*)f_3130},
{C_text("f_3820:csi_2escm"),(void*)f_3820},
{C_text("f_3825:csi_2escm"),(void*)f_3825},
{C_text("f_3828:csi_2escm"),(void*)f_3828},
{C_text("f_3834:csi_2escm"),(void*)f_3834},
{C_text("f_3837:csi_2escm"),(void*)f_3837},
{C_text("f_3844:csi_2escm"),(void*)f_3844},
{C_text("f_3868:csi_2escm"),(void*)f_3868},
{C_text("f_3883:csi_2escm"),(void*)f_3883},
{C_text("f_3897:csi_2escm"),(void*)f_3897},
{C_text("f_3910:csi_2escm"),(void*)f_3910},
{C_text("f_3929:csi_2escm"),(void*)f_3929},
{C_text("f_3936:csi_2escm"),(void*)f_3936},
{C_text("f_3939:csi_2escm"),(void*)f_3939},
{C_text("f_3945:csi_2escm"),(void*)f_3945},
{C_text("f_3958:csi_2escm"),(void*)f_3958},
{C_text("f_3971:csi_2escm"),(void*)f_3971},
{C_text("f_3980:csi_2escm"),(void*)f_3980},
{C_text("f_3984:csi_2escm"),(void*)f_3984},
{C_text("f_3996:csi_2escm"),(void*)f_3996},
{C_text("f_4005:csi_2escm"),(void*)f_4005},
{C_text("f_4008:csi_2escm"),(void*)f_4008},
{C_text("f_4015:csi_2escm"),(void*)f_4015},
{C_text("f_4019:csi_2escm"),(void*)f_4019},
{C_text("f_4022:csi_2escm"),(void*)f_4022},
{C_text("f_4028:csi_2escm"),(void*)f_4028},
{C_text("f_4035:csi_2escm"),(void*)f_4035},
{C_text("f_4037:csi_2escm"),(void*)f_4037},
{C_text("f_4047:csi_2escm"),(void*)f_4047},
{C_text("f_4050:csi_2escm"),(void*)f_4050},
{C_text("f_4064:csi_2escm"),(void*)f_4064},
{C_text("f_4087:csi_2escm"),(void*)f_4087},
{C_text("f_4097:csi_2escm"),(void*)f_4097},
{C_text("f_4111:csi_2escm"),(void*)f_4111},
{C_text("f_4142:csi_2escm"),(void*)f_4142},
{C_text("f_4154:csi_2escm"),(void*)f_4154},
{C_text("f_4157:csi_2escm"),(void*)f_4157},
{C_text("f_4160:csi_2escm"),(void*)f_4160},
{C_text("f_4163:csi_2escm"),(void*)f_4163},
{C_text("f_4166:csi_2escm"),(void*)f_4166},
{C_text("f_4175:csi_2escm"),(void*)f_4175},
{C_text("f_4185:csi_2escm"),(void*)f_4185},
{C_text("f_4189:csi_2escm"),(void*)f_4189},
{C_text("f_4212:csi_2escm"),(void*)f_4212},
{C_text("f_4229:csi_2escm"),(void*)f_4229},
{C_text("f_4241:csi_2escm"),(void*)f_4241},
{C_text("f_4249:csi_2escm"),(void*)f_4249},
{C_text("f_4252:csi_2escm"),(void*)f_4252},
{C_text("f_4264:csi_2escm"),(void*)f_4264},
{C_text("f_4271:csi_2escm"),(void*)f_4271},
{C_text("f_4277:csi_2escm"),(void*)f_4277},
{C_text("f_4297:csi_2escm"),(void*)f_4297},
{C_text("f_4327:csi_2escm"),(void*)f_4327},
{C_text("f_4343:csi_2escm"),(void*)f_4343},
{C_text("f_4360:csi_2escm"),(void*)f_4360},
{C_text("f_4375:csi_2escm"),(void*)f_4375},
{C_text("f_4378:csi_2escm"),(void*)f_4378},
{C_text("f_4385:csi_2escm"),(void*)f_4385},
{C_text("f_4389:csi_2escm"),(void*)f_4389},
{C_text("f_4398:csi_2escm"),(void*)f_4398},
{C_text("f_4401:csi_2escm"),(void*)f_4401},
{C_text("f_4404:csi_2escm"),(void*)f_4404},
{C_text("f_4416:csi_2escm"),(void*)f_4416},
{C_text("f_4419:csi_2escm"),(void*)f_4419},
{C_text("f_4431:csi_2escm"),(void*)f_4431},
{C_text("f_4434:csi_2escm"),(void*)f_4434},
{C_text("f_4446:csi_2escm"),(void*)f_4446},
{C_text("f_4449:csi_2escm"),(void*)f_4449},
{C_text("f_4452:csi_2escm"),(void*)f_4452},
{C_text("f_4455:csi_2escm"),(void*)f_4455},
{C_text("f_4485:csi_2escm"),(void*)f_4485},
{C_text("f_4488:csi_2escm"),(void*)f_4488},
{C_text("f_4493:csi_2escm"),(void*)f_4493},
{C_text("f_4503:csi_2escm"),(void*)f_4503},
{C_text("f_4518:csi_2escm"),(void*)f_4518},
{C_text("f_4527:csi_2escm"),(void*)f_4527},
{C_text("f_4528:csi_2escm"),(void*)f_4528},
{C_text("f_4534:csi_2escm"),(void*)f_4534},
{C_text("f_4538:csi_2escm"),(void*)f_4538},
{C_text("f_4544:csi_2escm"),(void*)f_4544},
{C_text("f_4549:csi_2escm"),(void*)f_4549},
{C_text("f_4559:csi_2escm"),(void*)f_4559},
{C_text("f_4574:csi_2escm"),(void*)f_4574},
{C_text("f_4583:csi_2escm"),(void*)f_4583},
{C_text("f_4588:csi_2escm"),(void*)f_4588},
{C_text("f_4592:csi_2escm"),(void*)f_4592},
{C_text("f_4597:csi_2escm"),(void*)f_4597},
{C_text("f_4603:csi_2escm"),(void*)f_4603},
{C_text("f_4607:csi_2escm"),(void*)f_4607},
{C_text("f_4614:csi_2escm"),(void*)f_4614},
{C_text("f_4616:csi_2escm"),(void*)f_4616},
{C_text("f_4620:csi_2escm"),(void*)f_4620},
{C_text("f_4635:csi_2escm"),(void*)f_4635},
{C_text("f_4651:csi_2escm"),(void*)f_4651},
{C_text("f_4669:csi_2escm"),(void*)f_4669},
{C_text("f_4673:csi_2escm"),(void*)f_4673},
{C_text("f_4680:csi_2escm"),(void*)f_4680},
{C_text("f_4689:csi_2escm"),(void*)f_4689},
{C_text("f_4701:csi_2escm"),(void*)f_4701},
{C_text("f_4713:csi_2escm"),(void*)f_4713},
{C_text("f_4725:csi_2escm"),(void*)f_4725},
{C_text("f_4732:csi_2escm"),(void*)f_4732},
{C_text("f_4745:csi_2escm"),(void*)f_4745},
{C_text("f_4754:csi_2escm"),(void*)f_4754},
{C_text("f_4757:csi_2escm"),(void*)f_4757},
{C_text("f_4760:csi_2escm"),(void*)f_4760},
{C_text("f_4773:csi_2escm"),(void*)f_4773},
{C_text("f_4795:csi_2escm"),(void*)f_4795},
{C_text("f_4800:csi_2escm"),(void*)f_4800},
{C_text("f_4810:csi_2escm"),(void*)f_4810},
{C_text("f_4824:csi_2escm"),(void*)f_4824},
{C_text("f_4870:csi_2escm"),(void*)f_4870},
{C_text("f_4876:csi_2escm"),(void*)f_4876},
{C_text("f_4880:csi_2escm"),(void*)f_4880},
{C_text("f_4896:csi_2escm"),(void*)f_4896},
{C_text("f_4902:csi_2escm"),(void*)f_4902},
{C_text("f_4916:csi_2escm"),(void*)f_4916},
{C_text("f_4919:csi_2escm"),(void*)f_4919},
{C_text("f_4925:csi_2escm"),(void*)f_4925},
{C_text("f_4928:csi_2escm"),(void*)f_4928},
{C_text("f_4936:csi_2escm"),(void*)f_4936},
{C_text("f_4961:csi_2escm"),(void*)f_4961},
{C_text("f_4970:csi_2escm"),(void*)f_4970},
{C_text("f_4976:csi_2escm"),(void*)f_4976},
{C_text("f_4982:csi_2escm"),(void*)f_4982},
{C_text("f_4988:csi_2escm"),(void*)f_4988},
{C_text("f_4994:csi_2escm"),(void*)f_4994},
{C_text("f_5002:csi_2escm"),(void*)f_5002},
{C_text("f_5004:csi_2escm"),(void*)f_5004},
{C_text("f_5021:csi_2escm"),(void*)f_5021},
{C_text("f_5027:csi_2escm"),(void*)f_5027},
{C_text("f_5033:csi_2escm"),(void*)f_5033},
{C_text("f_5041:csi_2escm"),(void*)f_5041},
{C_text("f_5042:csi_2escm"),(void*)f_5042},
{C_text("f_5050:csi_2escm"),(void*)f_5050},
{C_text("f_5052:csi_2escm"),(void*)f_5052},
{C_text("f_5056:csi_2escm"),(void*)f_5056},
{C_text("f_5059:csi_2escm"),(void*)f_5059},
{C_text("f_5062:csi_2escm"),(void*)f_5062},
{C_text("f_5064:csi_2escm"),(void*)f_5064},
{C_text("f_5072:csi_2escm"),(void*)f_5072},
{C_text("f_5079:csi_2escm"),(void*)f_5079},
{C_text("f_5082:csi_2escm"),(void*)f_5082},
{C_text("f_5083:csi_2escm"),(void*)f_5083},
{C_text("f_5087:csi_2escm"),(void*)f_5087},
{C_text("f_5097:csi_2escm"),(void*)f_5097},
{C_text("f_5105:csi_2escm"),(void*)f_5105},
{C_text("f_5113:csi_2escm"),(void*)f_5113},
{C_text("f_5126:csi_2escm"),(void*)f_5126},
{C_text("f_5129:csi_2escm"),(void*)f_5129},
{C_text("f_5132:csi_2escm"),(void*)f_5132},
{C_text("f_5135:csi_2escm"),(void*)f_5135},
{C_text("f_5142:csi_2escm"),(void*)f_5142},
{C_text("f_5150:csi_2escm"),(void*)f_5150},
{C_text("f_5154:csi_2escm"),(void*)f_5154},
{C_text("f_5158:csi_2escm"),(void*)f_5158},
{C_text("f_5162:csi_2escm"),(void*)f_5162},
{C_text("f_5166:csi_2escm"),(void*)f_5166},
{C_text("f_5170:csi_2escm"),(void*)f_5170},
{C_text("f_5174:csi_2escm"),(void*)f_5174},
{C_text("f_5178:csi_2escm"),(void*)f_5178},
{C_text("f_5206:csi_2escm"),(void*)f_5206},
{C_text("f_5218:csi_2escm"),(void*)f_5218},
{C_text("f_5221:csi_2escm"),(void*)f_5221},
{C_text("f_5223:csi_2escm"),(void*)f_5223},
{C_text("f_5233:csi_2escm"),(void*)f_5233},
{C_text("f_5254:csi_2escm"),(void*)f_5254},
{C_text("f_5256:csi_2escm"),(void*)f_5256},
{C_text("f_5281:csi_2escm"),(void*)f_5281},
{C_text("f_5301:csi_2escm"),(void*)f_5301},
{C_text("f_5336:csi_2escm"),(void*)f_5336},
{C_text("f_5366:csi_2escm"),(void*)f_5366},
{C_text("f_5368:csi_2escm"),(void*)f_5368},
{C_text("f_5374:csi_2escm"),(void*)f_5374},
{C_text("f_5381:csi_2escm"),(void*)f_5381},
{C_text("f_5386:csi_2escm"),(void*)f_5386},
{C_text("f_5409:csi_2escm"),(void*)f_5409},
{C_text("f_5418:csi_2escm"),(void*)f_5418},
{C_text("f_5428:csi_2escm"),(void*)f_5428},
{C_text("f_5431:csi_2escm"),(void*)f_5431},
{C_text("f_5460:csi_2escm"),(void*)f_5460},
{C_text("f_5488:csi_2escm"),(void*)f_5488},
{C_text("f_5503:csi_2escm"),(void*)f_5503},
{C_text("f_5506:csi_2escm"),(void*)f_5506},
{C_text("f_5509:csi_2escm"),(void*)f_5509},
{C_text("f_5575:csi_2escm"),(void*)f_5575},
{C_text("f_5581:csi_2escm"),(void*)f_5581},
{C_text("f_5672:csi_2escm"),(void*)f_5672},
{C_text("f_5679:csi_2escm"),(void*)f_5679},
{C_text("f_5688:csi_2escm"),(void*)f_5688},
{C_text("f_5691:csi_2escm"),(void*)f_5691},
{C_text("f_5694:csi_2escm"),(void*)f_5694},
{C_text("f_5706:csi_2escm"),(void*)f_5706},
{C_text("f_5711:csi_2escm"),(void*)f_5711},
{C_text("f_5721:csi_2escm"),(void*)f_5721},
{C_text("f_5724:csi_2escm"),(void*)f_5724},
{C_text("f_5727:csi_2escm"),(void*)f_5727},
{C_text("f_5736:csi_2escm"),(void*)f_5736},
{C_text("f_5760:csi_2escm"),(void*)f_5760},
{C_text("f_5769:csi_2escm"),(void*)f_5769},
{C_text("f_5772:csi_2escm"),(void*)f_5772},
{C_text("f_5784:csi_2escm"),(void*)f_5784},
{C_text("f_5787:csi_2escm"),(void*)f_5787},
{C_text("f_5796:csi_2escm"),(void*)f_5796},
{C_text("f_5827:csi_2escm"),(void*)f_5827},
{C_text("f_5891:csi_2escm"),(void*)f_5891},
{C_text("f_5895:csi_2escm"),(void*)f_5895},
{C_text("f_5901:csi_2escm"),(void*)f_5901},
{C_text("f_5920:csi_2escm"),(void*)f_5920},
{C_text("f_5929:csi_2escm"),(void*)f_5929},
{C_text("f_5936:csi_2escm"),(void*)f_5936},
{C_text("f_6053:csi_2escm"),(void*)f_6053},
{C_text("f_6059:csi_2escm"),(void*)f_6059},
{C_text("f_6065:csi_2escm"),(void*)f_6065},
{C_text("f_6078:csi_2escm"),(void*)f_6078},
{C_text("f_6090:csi_2escm"),(void*)f_6090},
{C_text("f_6093:csi_2escm"),(void*)f_6093},
{C_text("f_6104:csi_2escm"),(void*)f_6104},
{C_text("f_6112:csi_2escm"),(void*)f_6112},
{C_text("f_6133:csi_2escm"),(void*)f_6133},
{C_text("f_6142:csi_2escm"),(void*)f_6142},
{C_text("f_6152:csi_2escm"),(void*)f_6152},
{C_text("f_6187:csi_2escm"),(void*)f_6187},
{C_text("f_6188:csi_2escm"),(void*)f_6188},
{C_text("f_6192:csi_2escm"),(void*)f_6192},
{C_text("f_6201:csi_2escm"),(void*)f_6201},
{C_text("f_6211:csi_2escm"),(void*)f_6211},
{C_text("f_6224:csi_2escm"),(void*)f_6224},
{C_text("f_6229:csi_2escm"),(void*)f_6229},
{C_text("f_6256:csi_2escm"),(void*)f_6256},
{C_text("f_6266:csi_2escm"),(void*)f_6266},
{C_text("f_6293:csi_2escm"),(void*)f_6293},
{C_text("f_6297:csi_2escm"),(void*)f_6297},
{C_text("f_6311:csi_2escm"),(void*)f_6311},
{C_text("f_6319:csi_2escm"),(void*)f_6319},
{C_text("f_6332:csi_2escm"),(void*)f_6332},
{C_text("f_6338:csi_2escm"),(void*)f_6338},
{C_text("f_6363:csi_2escm"),(void*)f_6363},
{C_text("f_6376:csi_2escm"),(void*)f_6376},
{C_text("f_6403:csi_2escm"),(void*)f_6403},
{C_text("f_6411:csi_2escm"),(void*)f_6411},
{C_text("f_6420:csi_2escm"),(void*)f_6420},
{C_text("f_6422:csi_2escm"),(void*)f_6422},
{C_text("f_6425:csi_2escm"),(void*)f_6425},
{C_text("f_6447:csi_2escm"),(void*)f_6447},
{C_text("f_6454:csi_2escm"),(void*)f_6454},
{C_text("f_6471:csi_2escm"),(void*)f_6471},
{C_text("f_6490:csi_2escm"),(void*)f_6490},
{C_text("f_6500:csi_2escm"),(void*)f_6500},
{C_text("f_6528:csi_2escm"),(void*)f_6528},
{C_text("f_6533:csi_2escm"),(void*)f_6533},
{C_text("f_6568:csi_2escm"),(void*)f_6568},
{C_text("f_6571:csi_2escm"),(void*)f_6571},
{C_text("f_6575:csi_2escm"),(void*)f_6575},
{C_text("f_6591:csi_2escm"),(void*)f_6591},
{C_text("f_6603:csi_2escm"),(void*)f_6603},
{C_text("f_6613:csi_2escm"),(void*)f_6613},
{C_text("f_6616:csi_2escm"),(void*)f_6616},
{C_text("f_6619:csi_2escm"),(void*)f_6619},
{C_text("f_6622:csi_2escm"),(void*)f_6622},
{C_text("f_6625:csi_2escm"),(void*)f_6625},
{C_text("f_6628:csi_2escm"),(void*)f_6628},
{C_text("f_6637:csi_2escm"),(void*)f_6637},
{C_text("f_6650:csi_2escm"),(void*)f_6650},
{C_text("f_6653:csi_2escm"),(void*)f_6653},
{C_text("f_6688:csi_2escm"),(void*)f_6688},
{C_text("f_6722:csi_2escm"),(void*)f_6722},
{C_text("f_6732:csi_2escm"),(void*)f_6732},
{C_text("f_6742:csi_2escm"),(void*)f_6742},
{C_text("f_6745:csi_2escm"),(void*)f_6745},
{C_text("f_6760:csi_2escm"),(void*)f_6760},
{C_text("f_6764:csi_2escm"),(void*)f_6764},
{C_text("f_6771:csi_2escm"),(void*)f_6771},
{C_text("f_6773:csi_2escm"),(void*)f_6773},
{C_text("f_6776:csi_2escm"),(void*)f_6776},
{C_text("f_6782:csi_2escm"),(void*)f_6782},
{C_text("f_6799:csi_2escm"),(void*)f_6799},
{C_text("f_6808:csi_2escm"),(void*)f_6808},
{C_text("f_6839:csi_2escm"),(void*)f_6839},
{C_text("f_6842:csi_2escm"),(void*)f_6842},
{C_text("f_6845:csi_2escm"),(void*)f_6845},
{C_text("f_6848:csi_2escm"),(void*)f_6848},
{C_text("f_6851:csi_2escm"),(void*)f_6851},
{C_text("f_6854:csi_2escm"),(void*)f_6854},
{C_text("f_6857:csi_2escm"),(void*)f_6857},
{C_text("f_6860:csi_2escm"),(void*)f_6860},
{C_text("f_6863:csi_2escm"),(void*)f_6863},
{C_text("f_6866:csi_2escm"),(void*)f_6866},
{C_text("f_6869:csi_2escm"),(void*)f_6869},
{C_text("f_6882:csi_2escm"),(void*)f_6882},
{C_text("f_6892:csi_2escm"),(void*)f_6892},
{C_text("f_6897:csi_2escm"),(void*)f_6897},
{C_text("f_6910:csi_2escm"),(void*)f_6910},
{C_text("f_6913:csi_2escm"),(void*)f_6913},
{C_text("f_6916:csi_2escm"),(void*)f_6916},
{C_text("f_6919:csi_2escm"),(void*)f_6919},
{C_text("f_6922:csi_2escm"),(void*)f_6922},
{C_text("f_6956:csi_2escm"),(void*)f_6956},
{C_text("f_6966:csi_2escm"),(void*)f_6966},
{C_text("f_7000:csi_2escm"),(void*)f_7000},
{C_text("f_7003:csi_2escm"),(void*)f_7003},
{C_text("f_7017:csi_2escm"),(void*)f_7017},
{C_text("f_7058:csi_2escm"),(void*)f_7058},
{C_text("f_7115:csi_2escm"),(void*)f_7115},
{C_text("f_7117:csi_2escm"),(void*)f_7117},
{C_text("f_7128:csi_2escm"),(void*)f_7128},
{C_text("f_7148:csi_2escm"),(void*)f_7148},
{C_text("f_7151:csi_2escm"),(void*)f_7151},
{C_text("f_7155:csi_2escm"),(void*)f_7155},
{C_text("f_7158:csi_2escm"),(void*)f_7158},
{C_text("f_7170:csi_2escm"),(void*)f_7170},
{C_text("f_7195:csi_2escm"),(void*)f_7195},
{C_text("f_7204:csi_2escm"),(void*)f_7204},
{C_text("f_7210:csi_2escm"),(void*)f_7210},
{C_text("f_7220:csi_2escm"),(void*)f_7220},
{C_text("f_7232:csi_2escm"),(void*)f_7232},
{C_text("f_7235:csi_2escm"),(void*)f_7235},
{C_text("f_7238:csi_2escm"),(void*)f_7238},
{C_text("f_7241:csi_2escm"),(void*)f_7241},
{C_text("f_7244:csi_2escm"),(void*)f_7244},
{C_text("f_7280:csi_2escm"),(void*)f_7280},
{C_text("f_7287:csi_2escm"),(void*)f_7287},
{C_text("f_7289:csi_2escm"),(void*)f_7289},
{C_text("f_7299:csi_2escm"),(void*)f_7299},
{C_text("f_7342:csi_2escm"),(void*)f_7342},
{C_text("f_7347:csi_2escm"),(void*)f_7347},
{C_text("f_7353:csi_2escm"),(void*)f_7353},
{C_text("f_7365:csi_2escm"),(void*)f_7365},
{C_text("f_7402:csi_2escm"),(void*)f_7402},
{C_text("f_7408:csi_2escm"),(void*)f_7408},
{C_text("f_7430:csi_2escm"),(void*)f_7430},
{C_text("f_7444:csi_2escm"),(void*)f_7444},
{C_text("f_7465:csi_2escm"),(void*)f_7465},
{C_text("f_7469:csi_2escm"),(void*)f_7469},
{C_text("f_7473:csi_2escm"),(void*)f_7473},
{C_text("f_7512:csi_2escm"),(void*)f_7512},
{C_text("f_7520:csi_2escm"),(void*)f_7520},
{C_text("f_7551:csi_2escm"),(void*)f_7551},
{C_text("f_7581:csi_2escm"),(void*)f_7581},
{C_text("f_7584:csi_2escm"),(void*)f_7584},
{C_text("f_7587:csi_2escm"),(void*)f_7587},
{C_text("f_7590:csi_2escm"),(void*)f_7590},
{C_text("f_7593:csi_2escm"),(void*)f_7593},
{C_text("f_7596:csi_2escm"),(void*)f_7596},
{C_text("f_7599:csi_2escm"),(void*)f_7599},
{C_text("f_7602:csi_2escm"),(void*)f_7602},
{C_text("f_7605:csi_2escm"),(void*)f_7605},
{C_text("f_7611:csi_2escm"),(void*)f_7611},
{C_text("f_7617:csi_2escm"),(void*)f_7617},
{C_text("f_7619:csi_2escm"),(void*)f_7619},
{C_text("f_7625:csi_2escm"),(void*)f_7625},
{C_text("f_7633:csi_2escm"),(void*)f_7633},
{C_text("f_7654:csi_2escm"),(void*)f_7654},
{C_text("f_7670:csi_2escm"),(void*)f_7670},
{C_text("f_7682:csi_2escm"),(void*)f_7682},
{C_text("f_7688:csi_2escm"),(void*)f_7688},
{C_text("f_7695:csi_2escm"),(void*)f_7695},
{C_text("f_7701:csi_2escm"),(void*)f_7701},
{C_text("f_7708:csi_2escm"),(void*)f_7708},
{C_text("f_7715:csi_2escm"),(void*)f_7715},
{C_text("f_7717:csi_2escm"),(void*)f_7717},
{C_text("f_7727:csi_2escm"),(void*)f_7727},
{C_text("f_7734:csi_2escm"),(void*)f_7734},
{C_text("f_7738:csi_2escm"),(void*)f_7738},
{C_text("f_7740:csi_2escm"),(void*)f_7740},
{C_text("f_7748:csi_2escm"),(void*)f_7748},
{C_text("f_7758:csi_2escm"),(void*)f_7758},
{C_text("f_7761:csi_2escm"),(void*)f_7761},
{C_text("f_7764:csi_2escm"),(void*)f_7764},
{C_text("f_7767:csi_2escm"),(void*)f_7767},
{C_text("f_7770:csi_2escm"),(void*)f_7770},
{C_text("f_7773:csi_2escm"),(void*)f_7773},
{C_text("f_7776:csi_2escm"),(void*)f_7776},
{C_text("f_7782:csi_2escm"),(void*)f_7782},
{C_text("f_7785:csi_2escm"),(void*)f_7785},
{C_text("f_7791:csi_2escm"),(void*)f_7791},
{C_text("f_7794:csi_2escm"),(void*)f_7794},
{C_text("f_7800:csi_2escm"),(void*)f_7800},
{C_text("f_7804:csi_2escm"),(void*)f_7804},
{C_text("f_7807:csi_2escm"),(void*)f_7807},
{C_text("f_7810:csi_2escm"),(void*)f_7810},
{C_text("f_7813:csi_2escm"),(void*)f_7813},
{C_text("f_7816:csi_2escm"),(void*)f_7816},
{C_text("f_7819:csi_2escm"),(void*)f_7819},
{C_text("f_7822:csi_2escm"),(void*)f_7822},
{C_text("f_7825:csi_2escm"),(void*)f_7825},
{C_text("f_7828:csi_2escm"),(void*)f_7828},
{C_text("f_7831:csi_2escm"),(void*)f_7831},
{C_text("f_7836:csi_2escm"),(void*)f_7836},
{C_text("f_7864:csi_2escm"),(void*)f_7864},
{C_text("f_7893:csi_2escm"),(void*)f_7893},
{C_text("f_7905:csi_2escm"),(void*)f_7905},
{C_text("f_7920:csi_2escm"),(void*)f_7920},
{C_text("f_7939:csi_2escm"),(void*)f_7939},
{C_text("f_7949:csi_2escm"),(void*)f_7949},
{C_text("f_7964:csi_2escm"),(void*)f_7964},
{C_text("f_7974:csi_2escm"),(void*)f_7974},
{C_text("f_7984:csi_2escm"),(void*)f_7984},
{C_text("f_7995:csi_2escm"),(void*)f_7995},
{C_text("f_7999:csi_2escm"),(void*)f_7999},
{C_text("f_8006:csi_2escm"),(void*)f_8006},
{C_text("f_8008:csi_2escm"),(void*)f_8008},
{C_text("f_8036:csi_2escm"),(void*)f_8036},
{C_text("f_8040:csi_2escm"),(void*)f_8040},
{C_text("f_8046:csi_2escm"),(void*)f_8046},
{C_text("f_8049:csi_2escm"),(void*)f_8049},
{C_text("f_8052:csi_2escm"),(void*)f_8052},
{C_text("f_8055:csi_2escm"),(void*)f_8055},
{C_text("f_8060:csi_2escm"),(void*)f_8060},
{C_text("f_8073:csi_2escm"),(void*)f_8073},
{C_text("f_8076:csi_2escm"),(void*)f_8076},
{C_text("f_8091:csi_2escm"),(void*)f_8091},
{C_text("f_8110:csi_2escm"),(void*)f_8110},
{C_text("f_8122:csi_2escm"),(void*)f_8122},
{C_text("f_8136:csi_2escm"),(void*)f_8136},
{C_text("f_8139:csi_2escm"),(void*)f_8139},
{C_text("f_8142:csi_2escm"),(void*)f_8142},
{C_text("f_8145:csi_2escm"),(void*)f_8145},
{C_text("f_8148:csi_2escm"),(void*)f_8148},
{C_text("f_8157:csi_2escm"),(void*)f_8157},
{C_text("f_8160:csi_2escm"),(void*)f_8160},
{C_text("f_8169:csi_2escm"),(void*)f_8169},
{C_text("f_8172:csi_2escm"),(void*)f_8172},
{C_text("f_8236:csi_2escm"),(void*)f_8236},
{C_text("f_8243:csi_2escm"),(void*)f_8243},
{C_text("f_8249:csi_2escm"),(void*)f_8249},
{C_text("f_8256:csi_2escm"),(void*)f_8256},
{C_text("f_8262:csi_2escm"),(void*)f_8262},
{C_text("f_8264:csi_2escm"),(void*)f_8264},
{C_text("f_8289:csi_2escm"),(void*)f_8289},
{C_text("f_8298:csi_2escm"),(void*)f_8298},
{C_text("f_8323:csi_2escm"),(void*)f_8323},
{C_text("f_8332:csi_2escm"),(void*)f_8332},
{C_text("f_8342:csi_2escm"),(void*)f_8342},
{C_text("f_8355:csi_2escm"),(void*)f_8355},
{C_text("f_8365:csi_2escm"),(void*)f_8365},
{C_text("f_8378:csi_2escm"),(void*)f_8378},
{C_text("f_8388:csi_2escm"),(void*)f_8388},
{C_text("f_8402:csi_2escm"),(void*)f_8402},
{C_text("f_8405:csi_2escm"),(void*)f_8405},
{C_text("f_8408:csi_2escm"),(void*)f_8408},
{C_text("f_8417:csi_2escm"),(void*)f_8417},
{C_text("f_8420:csi_2escm"),(void*)f_8420},
{C_text("f_8430:csi_2escm"),(void*)f_8430},
{C_text("f_8437:csi_2escm"),(void*)f_8437},
{C_text("f_8447:csi_2escm"),(void*)f_8447},
{C_text("f_8453:csi_2escm"),(void*)f_8453},
{C_text("f_8456:csi_2escm"),(void*)f_8456},
{C_text("f_8461:csi_2escm"),(void*)f_8461},
{C_text("f_8486:csi_2escm"),(void*)f_8486},
{C_text("f_8497:csi_2escm"),(void*)f_8497},
{C_text("f_8506:csi_2escm"),(void*)f_8506},
{C_text("f_8512:csi_2escm"),(void*)f_8512},
{C_text("f_8515:csi_2escm"),(void*)f_8515},
{C_text("f_8518:csi_2escm"),(void*)f_8518},
{C_text("f_8521:csi_2escm"),(void*)f_8521},
{C_text("f_8530:csi_2escm"),(void*)f_8530},
{C_text("f_8595:csi_2escm"),(void*)f_8595},
{C_text("f_8608:csi_2escm"),(void*)f_8608},
{C_text("f_8612:csi_2escm"),(void*)f_8612},
{C_text("f_8616:csi_2escm"),(void*)f_8616},
{C_text("f_8622:csi_2escm"),(void*)f_8622},
{C_text("f_8628:csi_2escm"),(void*)f_8628},
{C_text("f_8630:csi_2escm"),(void*)f_8630},
{C_text("f_8636:csi_2escm"),(void*)f_8636},
{C_text("f_8640:csi_2escm"),(void*)f_8640},
{C_text("f_8649:csi_2escm"),(void*)f_8649},
{C_text("f_8655:csi_2escm"),(void*)f_8655},
{C_text("f_8659:csi_2escm"),(void*)f_8659},
{C_text("f_8663:csi_2escm"),(void*)f_8663},
{C_text("f_8676:csi_2escm"),(void*)f_8676},
{C_text("f_8678:csi_2escm"),(void*)f_8678},
{C_text("f_8686:csi_2escm"),(void*)f_8686},
{C_text("f_8689:csi_2escm"),(void*)f_8689},
{C_text("f_8696:csi_2escm"),(void*)f_8696},
{C_text("f_8700:csi_2escm"),(void*)f_8700},
{C_text("f_8709:csi_2escm"),(void*)f_8709},
{C_text("toplevel:csi_2escm"),(void*)C_toplevel},
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
o|hiding unexported module binding: chicken.csi#constant184 
o|hiding unexported module binding: chicken.csi#partition 
o|hiding unexported module binding: chicken.csi#span 
o|hiding unexported module binding: chicken.csi#take 
o|hiding unexported module binding: chicken.csi#drop 
o|hiding unexported module binding: chicken.csi#split-at 
o|hiding unexported module binding: chicken.csi#append-map 
o|hiding unexported module binding: chicken.csi#every 
o|hiding unexported module binding: chicken.csi#any 
o|hiding unexported module binding: chicken.csi#cons* 
o|hiding unexported module binding: chicken.csi#concatenate 
o|hiding unexported module binding: chicken.csi#delete 
o|hiding unexported module binding: chicken.csi#first 
o|hiding unexported module binding: chicken.csi#second 
o|hiding unexported module binding: chicken.csi#third 
o|hiding unexported module binding: chicken.csi#fourth 
o|hiding unexported module binding: chicken.csi#fifth 
o|hiding unexported module binding: chicken.csi#delete-duplicates 
o|hiding unexported module binding: chicken.csi#alist-cons 
o|hiding unexported module binding: chicken.csi#filter 
o|hiding unexported module binding: chicken.csi#filter-map 
o|hiding unexported module binding: chicken.csi#remove 
o|hiding unexported module binding: chicken.csi#unzip1 
o|hiding unexported module binding: chicken.csi#last 
o|hiding unexported module binding: chicken.csi#list-index 
o|hiding unexported module binding: chicken.csi#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.csi#lset-difference/eq? 
o|hiding unexported module binding: chicken.csi#lset-union/eq? 
o|hiding unexported module binding: chicken.csi#lset-intersection/eq? 
o|hiding unexported module binding: chicken.csi#list-tabulate 
o|hiding unexported module binding: chicken.csi#lset<=/eq? 
o|hiding unexported module binding: chicken.csi#lset=/eq? 
o|hiding unexported module binding: chicken.csi#length+ 
o|hiding unexported module binding: chicken.csi#find 
o|hiding unexported module binding: chicken.csi#find-tail 
o|hiding unexported module binding: chicken.csi#iota 
o|hiding unexported module binding: chicken.csi#make-list 
o|hiding unexported module binding: chicken.csi#posq 
o|hiding unexported module binding: chicken.csi#posv 
o|hiding unexported module binding: chicken.csi#constant671 
o|hiding unexported module binding: chicken.csi#selected-frame 
o|hiding unexported module binding: chicken.csi#default-editor 
o|hiding unexported module binding: chicken.csi#print-usage 
o|hiding unexported module binding: chicken.csi#print-banner 
o|hiding unexported module binding: chicken.csi#dirseparator? 
o|hiding unexported module binding: chicken.csi#chop-separator 
o|hiding unexported module binding: chicken.csi#lookup-script-file 
o|hiding unexported module binding: chicken.csi#history-list 
o|hiding unexported module binding: chicken.csi#history-count 
o|hiding unexported module binding: chicken.csi#history-add 
o|hiding unexported module binding: chicken.csi#history-clear 
o|hiding unexported module binding: chicken.csi#history-show 
o|hiding unexported module binding: chicken.csi#history-ref 
o|hiding unexported module binding: chicken.csi#register-repl-history! 
o|hiding unexported module binding: chicken.csi#tty-input? 
o|hiding unexported module binding: chicken.csi#command-table 
o|hiding unexported module binding: chicken.csi#csi-eval 
o|hiding unexported module binding: chicken.csi#parse-option-string 
o|hiding unexported module binding: chicken.csi#report 
o|hiding unexported module binding: chicken.csi#bytevector-data 
o|hiding unexported module binding: chicken.csi#circular-list? 
o|hiding unexported module binding: chicken.csi#improper-pairs? 
o|hiding unexported module binding: chicken.csi#describer-table 
o|hiding unexported module binding: chicken.csi#describe 
o|hiding unexported module binding: chicken.csi#dump 
o|hiding unexported module binding: chicken.csi#hexdump 
o|hiding unexported module binding: chicken.csi#show-frameinfo 
o|hiding unexported module binding: chicken.csi#select-frame 
o|hiding unexported module binding: chicken.csi#copy-from-frame 
o|hiding unexported module binding: chicken.csi#defhandler 
o|hiding unexported module binding: chicken.csi#member* 
o|hiding unexported module binding: chicken.csi#constant1657 
o|hiding unexported module binding: chicken.csi#constant1663 
o|hiding unexported module binding: chicken.csi#canonicalize-args 
o|hiding unexported module binding: chicken.csi#findall 
o|hiding unexported module binding: chicken.csi#constant1727 
o|hiding unexported module binding: chicken.csi#constant1735 
o|hiding unexported module binding: chicken.csi#run 
S|applied compiler syntax:
S|  for-each		11
S|  printf		4
S|  foldl		3
S|  map		10
S|  foldr		3
o|eliminated procedure checks: 161 
o|eliminated procedure checks: 1 
o|specializations:
o|  1 (scheme#string-length string)
o|  7 (scheme#string=? string string)
o|  1 (scheme#set-cdr! pair *)
o|  2 (scheme#cddr (pair * pair))
o|  2 (scheme#char=? char char)
o|  3 (scheme#cadr (pair * pair))
o|  1 (scheme#min fixnum fixnum)
o|  1 (scheme#memq * list)
o|  1 (scheme#number->string * *)
o|  1 (scheme#+ * *)
o|  1 (scheme#<= * *)
o|  2 (chicken.base#add1 *)
o|  1 (scheme#- fixnum fixnum)
o|  1 (scheme#/ * *)
o|  1 (scheme#* * *)
o|  1 (scheme#current-output-port)
o|  2 (scheme#zero? integer)
o|  31 (scheme#eqv? * (or eof null fixnum char boolean symbol))
o|  4 (##sys#check-output-port * * *)
o|  2 (scheme#>= * *)
o|  1 (scheme#> fixnum fixnum)
o|  4 (scheme#string-append string string)
o|  1 (scheme#make-string fixnum)
o|  1 (chicken.base#sub1 fixnum)
o|  1 (scheme#eqv? * *)
o|  6 (##sys#check-list (or pair list) *)
o|  40 (scheme#cdr pair)
o|  14 (scheme#car pair)
(o e)|safe calls: 993 
(o e)|assignments to immediate values: 5 
o|removed side-effect free assignment to unused variable: chicken.csi#partition 
o|removed side-effect free assignment to unused variable: chicken.csi#span 
o|removed side-effect free assignment to unused variable: chicken.csi#drop 
o|removed side-effect free assignment to unused variable: chicken.csi#split-at 
o|removed side-effect free assignment to unused variable: chicken.csi#append-map 
o|inlining procedure: k2913 
o|inlining procedure: k2913 
o|inlining procedure: k2944 
o|inlining procedure: k2944 
o|removed side-effect free assignment to unused variable: chicken.csi#cons* 
o|removed side-effect free assignment to unused variable: chicken.csi#concatenate 
o|removed side-effect free assignment to unused variable: chicken.csi#first 
o|removed side-effect free assignment to unused variable: chicken.csi#second 
o|removed side-effect free assignment to unused variable: chicken.csi#third 
o|removed side-effect free assignment to unused variable: chicken.csi#fourth 
o|removed side-effect free assignment to unused variable: chicken.csi#fifth 
o|removed side-effect free assignment to unused variable: chicken.csi#alist-cons 
o|inlining procedure: k3161 
o|inlining procedure: k3161 
o|inlining procedure: k3153 
o|inlining procedure: k3153 
o|removed side-effect free assignment to unused variable: chicken.csi#filter-map 
o|removed side-effect free assignment to unused variable: chicken.csi#remove 
o|removed side-effect free assignment to unused variable: chicken.csi#unzip1 
o|removed side-effect free assignment to unused variable: chicken.csi#last 
o|removed side-effect free assignment to unused variable: chicken.csi#list-index 
o|removed side-effect free assignment to unused variable: chicken.csi#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.csi#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.csi#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.csi#lset-intersection/eq? 
o|inlining procedure: k3552 
o|inlining procedure: k3552 
o|removed side-effect free assignment to unused variable: chicken.csi#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.csi#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.csi#length+ 
o|removed side-effect free assignment to unused variable: chicken.csi#find 
o|removed side-effect free assignment to unused variable: chicken.csi#find-tail 
o|removed side-effect free assignment to unused variable: chicken.csi#iota 
o|removed side-effect free assignment to unused variable: chicken.csi#make-list 
o|removed side-effect free assignment to unused variable: chicken.csi#posq 
o|removed side-effect free assignment to unused variable: chicken.csi#posv 
o|substituted constant variable: chicken.csi#constant184 
o|inlining procedure: k3873 
o|inlining procedure: k3873 
o|inlining procedure: k3892 
o|inlining procedure: k3892 
o|inlining procedure: k3931 
o|inlining procedure: k3931 
o|substituted constant variable: a3947 
o|inlining procedure: k3985 
o|inlining procedure: k4000 
o|contracted procedure: "(csi.scm:184) _getcwd700" 
o|inlining procedure: k4000 
o|inlining procedure: k4039 
o|inlining procedure: k4039 
o|substituted constant variable: a4070 
o|contracted procedure: "(csi.scm:183) string-index711" 
o|inlining procedure: k3960 
o|inlining procedure: k3960 
o|inlining procedure: k3985 
o|substituted constant variable: a4080 
o|propagated global variable: a4148 chicken.csi#history-count 
o|inlining procedure: k4144 
o|propagated global variable: out763766 ##sys#standard-output 
o|substituted constant variable: a4150 
o|substituted constant variable: a4151 
o|inlining procedure: k4144 
o|propagated global variable: out763766 ##sys#standard-output 
o|inlining procedure: k4190 
o|inlining procedure: k4190 
o|inlining procedure: k4266 
o|inlining procedure: k4266 
o|contracted procedure: "(csi.scm:268) chicken.csi#tty-input?" 
o|inlining procedure: k4256 
o|inlining procedure: k4256 
o|inlining procedure: k4291 
o|inlining procedure: k4291 
o|inlining procedure: k4329 
o|inlining procedure: k4329 
o|inlining procedure: k4350 
o|contracted procedure: "(csi.scm:298) g855856" 
o|inlining procedure: k4350 
o|inlining procedure: k4390 
o|inlining procedure: k4390 
o|consed rest parameter at call site: "(csi.scm:317) chicken.csi#describe" 2 
o|inlining procedure: k4423 
o|consed rest parameter at call site: "(csi.scm:321) chicken.csi#dump" 2 
o|inlining procedure: k4423 
o|consed rest parameter at call site: "(csi.scm:327) chicken.csi#dump" 2 
o|inlining procedure: k4459 
o|consed rest parameter at call site: "(csi.scm:328) chicken.csi#report" 1 
o|inlining procedure: k4459 
o|inlining procedure: k4477 
o|inlining procedure: k4495 
o|inlining procedure: k4495 
o|inlining procedure: k4477 
o|inlining procedure: k4551 
o|inlining procedure: k4551 
o|inlining procedure: k4575 
o|inlining procedure: k4575 
o|inlining procedure: k4630 
o|consed rest parameter at call site: "(csi.scm:346) chicken.csi#describe" 2 
o|inlining procedure: k4630 
o|inlining procedure: k4643 
o|inlining procedure: k4643 
o|contracted procedure: "(csi.scm:355) chicken.csi#history-clear" 
o|inlining procedure: k4693 
o|inlining procedure: k4693 
o|inlining procedure: k4717 
o|inlining procedure: k4717 
o|inlining procedure: k4746 
o|inlining procedure: k4746 
o|inlining procedure: k4802 
o|contracted procedure: "(csi.scm:396) g950957" 
o|inlining procedure: k4779 
o|inlining procedure: k4779 
o|inlining procedure: k4802 
o|propagated global variable: g956958 chicken.csi#command-table 
o|substituted constant variable: a4829 
o|substituted constant variable: a4831 
o|substituted constant variable: a4833 
o|substituted constant variable: a4835 
o|substituted constant variable: a4837 
o|substituted constant variable: a4839 
o|substituted constant variable: a4841 
o|substituted constant variable: a4843 
o|substituted constant variable: a4845 
o|substituted constant variable: a4847 
o|substituted constant variable: a4849 
o|substituted constant variable: a4851 
o|substituted constant variable: a4853 
o|substituted constant variable: a4855 
o|substituted constant variable: a4857 
o|substituted constant variable: a4859 
o|substituted constant variable: a4861 
o|substituted constant variable: a4863 
o|substituted constant variable: a4865 
o|merged explicitly consed rest parameter: port1037 
o|substituted constant variable: a5073 
o|substituted constant variable: a5076 
o|substituted constant variable: a5091 
o|substituted constant variable: a5102 
o|inlining procedure: k5098 
o|inlining procedure: k5098 
o|substituted constant variable: a5115 
o|substituted constant variable: a5120 
o|inlining procedure: k5133 
o|inlining procedure: k5133 
o|inlining procedure: k5225 
o|inlining procedure: k5225 
o|inlining procedure: k5258 
o|inlining procedure: k5258 
o|propagated global variable: g10641068 ##sys#features 
o|merged explicitly consed rest parameter: rest11461148 
o|inlining procedure: k5391 
o|inlining procedure: k5391 
o|inlining procedure: k5420 
o|inlining procedure: k5450 
o|inlining procedure: k5450 
o|inlining procedure: k5420 
o|inlining procedure: k5507 
o|inlining procedure: k5507 
o|inlining procedure: k5531 
o|inlining procedure: k5531 
o|inlining procedure: k5549 
o|inlining procedure: k5549 
o|inlining procedure: k5567 
o|inlining procedure: k5567 
o|inlining procedure: k5600 
o|inlining procedure: k5600 
o|inlining procedure: k5615 
o|inlining procedure: k5615 
o|inlining procedure: k5634 
o|inlining procedure: k5634 
o|inlining procedure: k5640 
o|inlining procedure: k5640 
o|inlining procedure: k5658 
o|inlining procedure: k5658 
o|inlining procedure: k5680 
o|inlining procedure: k5713 
o|inlining procedure: k5713 
o|inlining procedure: k5758 
o|inlining procedure: k5758 
o|inlining procedure: k5680 
o|inlining procedure: k5798 
o|inlining procedure: k5798 
o|inlining procedure: k5819 
o|inlining procedure: k5819 
o|inlining procedure: k5854 
o|inlining procedure: k5854 
o|inlining procedure: k5876 
o|inlining procedure: k5876 
o|inlining procedure: k5924 
o|inlining procedure: k5945 
o|inlining procedure: k5945 
o|inlining procedure: k5957 
o|inlining procedure: k5957 
o|inlining procedure: k5969 
o|inlining procedure: k5969 
o|inlining procedure: k5981 
o|inlining procedure: k5981 
o|inlining procedure: k5993 
o|inlining procedure: k5993 
o|inlining procedure: k6005 
o|inlining procedure: k6005 
o|substituted constant variable: a6018 
o|substituted constant variable: a6020 
o|substituted constant variable: a6022 
o|substituted constant variable: a6024 
o|substituted constant variable: a6026 
o|substituted constant variable: a6028 
o|substituted constant variable: a6030 
o|substituted constant variable: a6032 
o|substituted constant variable: a6034 
o|substituted constant variable: a6036 
o|substituted constant variable: a6038 
o|substituted constant variable: a6040 
o|inlining procedure: k5924 
o|inlining procedure: k6054 
o|inlining procedure: k6054 
o|inlining procedure: k6079 
o|inlining procedure: k6106 
o|inlining procedure: k6106 
o|inlining procedure: k6144 
o|inlining procedure: k6144 
o|inlining procedure: k6079 
o|inlining procedure: k6203 
o|inlining procedure: k6203 
o|inlining procedure: k6258 
o|inlining procedure: k6258 
o|inlining procedure: k6282 
o|inlining procedure: k6340 
o|inlining procedure: k6340 
o|inlining procedure: k6308 
o|inlining procedure: k6308 
o|inlining procedure: k6282 
o|contracted procedure: "(csi.scm:641) chicken.csi#improper-pairs?" 
o|inlining procedure: k5338 
o|inlining procedure: k5338 
o|contracted procedure: "(csi.scm:641) chicken.csi#circular-list?" 
o|inlining procedure: k5303 
o|inlining procedure: k5323 
o|inlining procedure: k5323 
o|inlining procedure: k5303 
o|merged explicitly consed rest parameter: len-out1337 
o|inlining procedure: k6427 
o|inlining procedure: k6427 
o|inlining procedure: k6433 
o|inlining procedure: k6433 
o|inlining procedure: k6459 
o|inlining procedure: k6459 
o|inlining procedure: k6485 
o|inlining procedure: k6485 
o|inlining procedure: k6538 
o|inlining procedure: k6538 
o|inlining procedure: k6579 
o|inlining procedure: k6579 
o|inlining procedure: k6605 
o|inlining procedure: k6605 
o|inlining procedure: k6639 
o|inlining procedure: k6639 
o|inlining procedure: k6690 
o|inlining procedure: k6708 
o|inlining procedure: k6708 
o|inlining procedure: k6724 
o|inlining procedure: k6724 
o|inlining procedure: k6690 
o|inlining procedure: k6810 
o|propagated global variable: out14491452 ##sys#standard-output 
o|substituted constant variable: a6835 
o|substituted constant variable: a6836 
o|inlining procedure: k6810 
o|inlining procedure: k6884 
o|inlining procedure: k6884 
o|inlining procedure: k6899 
o|propagated global variable: out14891492 ##sys#standard-output 
o|substituted constant variable: a6906 
o|substituted constant variable: a6907 
o|inlining procedure: k6899 
o|propagated global variable: out14891492 ##sys#standard-output 
o|inlining procedure: k6958 
o|inlining procedure: k6958 
o|propagated global variable: out14611464 ##sys#standard-output 
o|substituted constant variable: a6996 
o|substituted constant variable: a6997 
o|propagated global variable: out14611464 ##sys#standard-output 
o|inlining procedure: k7012 
o|inlining procedure: k7012 
o|inlining procedure: k7026 
o|propagated global variable: out14491452 ##sys#standard-output 
o|inlining procedure: k7026 
o|inlining procedure: k7032 
o|inlining procedure: k7032 
o|propagated global variable: tmp14301432 ##sys#repl-recent-call-chain 
o|propagated global variable: tmp14301432 ##sys#repl-recent-call-chain 
o|inlining procedure: k7050 
o|inlining procedure: k7050 
o|inlining procedure: k7084 
o|inlining procedure: k7084 
o|inlining procedure: k7141 
o|inlining procedure: k7172 
o|inlining procedure: k7172 
o|inlining procedure: k7212 
o|inlining procedure: k7212 
o|inlining procedure: k7291 
o|inlining procedure: k7291 
o|inlining procedure: k7141 
o|inlining procedure: k7334 
o|inlining procedure: k7334 
o|propagated global variable: tmp15401542 ##sys#repl-recent-call-chain 
o|propagated global variable: tmp15401542 ##sys#repl-recent-call-chain 
o|inlining procedure: k7355 
o|inlining procedure: k7367 
o|inlining procedure: k7367 
o|inlining procedure: k7355 
o|inlining procedure: k7410 
o|inlining procedure: k7410 
o|inlining procedure: k7425 
o|inlining procedure: k7445 
o|inlining procedure: k7475 
o|contracted procedure: "(csi.scm:955) g16851694" 
o|inlining procedure: k7475 
o|inlining procedure: k7445 
o|contracted procedure: "(csi.scm:954) chicken.csi#findall" 
o|substituted constant variable: chicken.csi#constant1657 
o|inlining procedure: k7556 
o|inlining procedure: k7556 
o|inlining procedure: k7425 
o|inlining procedure: k7526 
o|substituted constant variable: chicken.csi#constant1663 
o|inlining procedure: k7526 
o|contracted procedure: "(csi.scm:1131) chicken.csi#run" 
o|inlining procedure: k7635 
o|inlining procedure: k7635 
o|inlining procedure: k7630 
o|inlining procedure: k7630 
o|merged explicitly consed rest parameter: rest18661868 
o|inlining procedure: k7719 
o|inlining procedure: k7719 
o|inlining procedure: k7838 
o|contracted procedure: "(csi.scm:1089) chicken.csi#register-repl-history!" 
o|inlining procedure: k4214 
o|inlining procedure: k4214 
o|inlining procedure: k7838 
o|inlining procedure: k7872 
o|inlining procedure: k7872 
o|substituted constant variable: a7913 
o|inlining procedure: k7910 
o|consed rest parameter at call site: "(csi.scm:1100) evalstring1812" 2 
o|inlining procedure: k7910 
o|substituted constant variable: a7932 
o|consed rest parameter at call site: "(csi.scm:1103) evalstring1812" 2 
o|substituted constant variable: a7957 
o|inlining procedure: k7954 
o|consed rest parameter at call site: "(csi.scm:1106) evalstring1812" 2 
o|inlining procedure: k7954 
o|inlining procedure: k8017 
o|inlining procedure: k8017 
o|inlining procedure: k8030 
o|inlining procedure: k8062 
o|inlining procedure: k8062 
o|substituted constant variable: a8084 
o|propagated global variable: g20342035 chicken.pretty-print#pretty-print 
o|inlining procedure: k8030 
o|substituted constant variable: a8099 
o|substituted constant variable: a8101 
o|substituted constant variable: a8103 
o|substituted constant variable: a8105 
o|substituted constant variable: chicken.csi#constant1735 
o|substituted constant variable: chicken.csi#constant1727 
o|contracted procedure: "(csi.scm:1083) loadinit1811" 
o|inlining procedure: k7671 
o|inlining procedure: k7683 
o|inlining procedure: k7683 
o|inlining procedure: k7671 
o|inlining procedure: k8117 
o|inlining procedure: k8117 
o|inlining procedure: k8158 
o|inlining procedure: k8158 
o|inlining procedure: k8170 
o|inlining procedure: k8170 
o|inlining procedure: k8179 
o|inlining procedure: k8179 
o|inlining procedure: k8197 
o|inlining procedure: k8197 
o|contracted procedure: "(csi.scm:1047) chicken.csi#delete-duplicates" 
o|inlining procedure: k3105 
o|inlining procedure: k3105 
o|contracted procedure: "(mini-srfi-1.scm:123) chicken.csi#delete" 
o|inlining procedure: k3030 
o|inlining procedure: k3030 
o|inlining procedure: k8266 
o|inlining procedure: k8266 
o|inlining procedure: k8300 
o|inlining procedure: k8300 
o|inlining procedure: k8334 
o|inlining procedure: k8334 
o|inlining procedure: k8357 
o|inlining procedure: k8357 
o|inlining procedure: k8380 
o|inlining procedure: k8380 
o|inlining procedure: k8418 
o|inlining procedure: k8418 
o|contracted procedure: "(csi.scm:1026) chicken.csi#print-usage" 
o|inlining procedure: k8463 
o|inlining procedure: k8463 
o|inlining procedure: k8498 
o|inlining procedure: k8498 
o|inlining procedure: k8501 
o|inlining procedure: k8501 
o|inlining procedure: k8507 
o|inlining procedure: k8507 
o|inlining procedure: k8525 
o|inlining procedure: k8525 
o|substituted constant variable: a8545 
o|inlining procedure: k8565 
o|inlining procedure: k8565 
o|substituted constant variable: a8568 
o|inlining procedure: k8599 
o|inlining procedure: k8599 
o|contracted procedure: "(csi.scm:977) chicken.csi#parse-option-string" 
o|inlining procedure: k4938 
o|contracted procedure: "(csi.scm:436) g9951004" 
o|inlining procedure: k4908 
o|inlining procedure: k4908 
o|inlining procedure: k4938 
o|inlining procedure: k5006 
o|inlining procedure: k5006 
o|inlining procedure: k8641 
o|inlining procedure: k8641 
o|inlining procedure: k8687 
o|inlining procedure: k8687 
o|substituted constant variable: a8697 
o|inlining procedure: k8701 
o|inlining procedure: k8701 
o|replaced variables: 954 
o|removed binding forms: 394 
o|removed side-effect free assignment to unused variable: chicken.csi#constant184 
o|removed side-effect free assignment to unused variable: chicken.csi#every 
o|removed side-effect free assignment to unused variable: chicken.csi#any 
o|removed side-effect free assignment to unused variable: chicken.csi#filter 
o|removed side-effect free assignment to unused variable: chicken.csi#list-tabulate 
o|substituted constant variable: int702707 
o|substituted constant variable: r40408742 
o|substituted constant variable: r39618743 
o|substituted constant variable: r39868745 
o|contracted procedure: "(csi.scm:358) chicken.csi#history-show" 
o|propagated global variable: out763766 ##sys#standard-output 
o|contracted procedure: "(csi.scm:364) chicken.csi#select-frame" 
o|contracted procedure: "(csi.scm:367) chicken.csi#copy-from-frame" 
o|converted assignments to bindings: (fail1555) 
o|converted assignments to bindings: (compare1550) 
o|substituted constant variable: r73358951 
o|converted assignments to bindings: (shorten1046) 
o|substituted constant variable: r54518809 
o|substituted constant variable: r54518809 
o|substituted constant variable: r54518811 
o|substituted constant variable: r54518811 
o|inlining procedure: k5579 
o|inlining procedure: k5507 
o|substituted constant variable: r56358834 
o|substituted constant variable: r56358834 
o|substituted constant variable: r56358836 
o|substituted constant variable: r56358836 
o|inlining procedure: k5507 
o|removed call to pure procedure with unused result: "(csi.scm:655) size" 
o|substituted constant variable: r59468859 
o|substituted constant variable: r59468859 
o|inlining procedure: k5945 
o|inlining procedure: k5945 
o|substituted constant variable: r59588863 
o|inlining procedure: k5945 
o|inlining procedure: k5945 
o|substituted constant variable: r59708865 
o|inlining procedure: k5945 
o|inlining procedure: k5945 
o|substituted constant variable: r59828867 
o|inlining procedure: k5945 
o|inlining procedure: k5945 
o|substituted constant variable: r59948869 
o|inlining procedure: k5945 
o|inlining procedure: k5945 
o|substituted constant variable: r60068871 
o|inlining procedure: k5945 
o|inlining procedure: k5945 
o|substituted constant variable: r53398892 
o|substituted constant variable: r53048897 
o|converted assignments to bindings: (descseq1154) 
o|converted assignments to bindings: (bestlen1356) 
o|converted assignments to bindings: (justify1379) 
o|propagated global variable: out14491452 ##sys#standard-output 
o|propagated global variable: out14891492 ##sys#standard-output 
o|propagated global variable: out14611464 ##sys#standard-output 
o|substituted constant variable: r70138928 
o|substituted constant variable: r70138928 
o|substituted constant variable: r70138930 
o|substituted constant variable: r70138930 
o|substituted constant variable: r70278932 
o|substituted constant variable: r70278932 
o|substituted constant variable: r70278934 
o|substituted constant variable: r70278934 
o|substituted constant variable: r70338937 
o|converted assignments to bindings: (prin11427) 
o|substituted constant variable: r73568955 
o|removed side-effect free assignment to unused variable: chicken.csi#constant1657 
o|removed side-effect free assignment to unused variable: chicken.csi#constant1663 
o|substituted constant variable: r74118956 
o|substituted constant variable: clist1714 
o|substituted constant variable: r75278967 
o|removed side-effect free assignment to unused variable: chicken.csi#constant1727 
o|removed side-effect free assignment to unused variable: chicken.csi#constant1735 
o|substituted constant variable: r76318971 
o|substituted constant variable: r80188986 
o|substituted constant variable: r80188986 
o|substituted constant variable: r80318992 
o|substituted constant variable: r80318992 
o|substituted constant variable: r76728997 
o|substituted constant variable: r84999048 
o|substituted constant variable: r84999048 
o|substituted constant variable: r86009059 
o|substituted constant variable: r86889070 
o|substituted constant variable: r86889070 
o|converted assignments to bindings: (addext710) 
o|simplifications: ((let . 8)) 
o|replaced variables: 25 
o|removed binding forms: 980 
o|inlining procedure: k3870 
o|inlining procedure: k7193 
o|contracted procedure: k5882 
o|inlining procedure: k6209 
o|inlining procedure: k7847 
o|inlining procedure: k7862 
o|inlining procedure: k7862 
o|inlining procedure: k7862 
o|inlining procedure: k7862 
o|inlining procedure: k7862 
o|inlining procedure: k7862 
o|inlining procedure: k7862 
o|inlining procedure: k8074 
o|inlining procedure: "(csi.scm:1081) chicken.csi#print-banner" 
o|inlining procedure: k8403 
o|inlining procedure: "(csi.scm:1029) chicken.csi#print-banner" 
o|inlining procedure: k8556 
o|inlining procedure: k8556 
o|inlining procedure: k8556 
o|replaced variables: 12 
o|removed binding forms: 105 
o|removed side-effect free assignment to unused variable: chicken.csi#print-banner 
o|substituted constant variable: r38719275 
o|substituted constant variable: r38719275 
o|substituted constant variable: r38719275 
o|inlining procedure: k4269 
o|substituted constant variable: r59469138 
o|substituted constant variable: r59469140 
o|substituted constant variable: r59469142 
o|substituted constant variable: r59469144 
o|substituted constant variable: r59469146 
o|substituted constant variable: r59469148 
o|substituted constant variable: r59469150 
o|substituted constant variable: r59469152 
o|substituted constant variable: r59469154 
o|substituted constant variable: r59469156 
o|substituted constant variable: r59469158 
o|replaced variables: 2 
o|removed binding forms: 26 
o|removed conditional forms: 1 
o|replaced variables: 1 
o|removed binding forms: 15 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|simplifications: ((if . 42) (##core#call . 542)) 
o|  call simplifications:
o|    scheme#make-vector
o|    scheme#set-car!
o|    ##sys#cons	2
o|    scheme#char-whitespace?
o|    ##sys#list	3
o|    chicken.base#void
o|    scheme#member	9
o|    scheme#string->list
o|    scheme#string
o|    scheme#equal?	4
o|    chicken.fixnum#fxmod
o|    scheme#write-char	7
o|    ##sys#immediate?	2
o|    ##sys#permanent?
o|    scheme#char?
o|    chicken.base#fixnum?	2
o|    chicken.base#bignum?
o|    chicken.base#flonum?
o|    chicken.base#ratnum?
o|    chicken.base#cplxnum?
o|    scheme#vector?
o|    scheme#list?
o|    scheme#procedure?
o|    ##sys#pointer?	2
o|    ##sys#generic-structure?	2
o|    scheme#cdr	19
o|    scheme#caar
o|    scheme#cdar
o|    chicken.fixnum#fx=	3
o|    chicken.base#atom?
o|    scheme#memq	3
o|    scheme#cddr	3
o|    scheme#exact?
o|    scheme#integer->char	2
o|    scheme#char->integer
o|    ##sys#setslot	9
o|    scheme#eof-object?	4
o|    scheme#caddr
o|    scheme#symbol?	2
o|    scheme#string?	4
o|    ##sys#structure?	4
o|    ##sys#check-list	17
o|    scheme#string-length	4
o|    chicken.fixnum#fxmin
o|    scheme#string=?	6
o|    scheme#number?	2
o|    chicken.fixnum#fx<	4
o|    scheme#length	4
o|    chicken.fixnum#fx-	11
o|    scheme#list-ref	2
o|    scheme#eq?	44
o|    scheme#not	11
o|    scheme#apply	5
o|    ##sys#call-with-values	6
o|    ##sys#apply	2
o|    scheme#cadr	13
o|    scheme#car	21
o|    ##sys#check-symbol	2
o|    ##sys#check-string
o|    scheme#assq	4
o|    scheme#cons	25
o|    scheme#list	10
o|    scheme#set-cdr!	2
o|    chicken.fixnum#fx<=
o|    scheme#vector-ref	8
o|    scheme#null?	24
o|    ##sys#void	20
o|    chicken.fixnum#fx*
o|    scheme#vector-set!
o|    chicken.fixnum#fx>=	15
o|    chicken.fixnum#fx+	20
o|    scheme#pair?	31
o|    ##sys#slot	86
o|    ##sys#foreign-block-argument
o|    ##sys#foreign-fixnum-argument
o|    ##sys#size	12
o|    scheme#string-ref	4
o|    chicken.fixnum#fx>	6
o|    scheme#char=?	6
o|contracted procedure: k3813 
o|contracted procedure: k3870 
o|contracted procedure: k3886 
o|contracted procedure: k3889 
o|contracted procedure: k3901 
o|contracted procedure: k4077 
o|contracted procedure: k3988 
o|contracted procedure: k3918 
o|contracted procedure: k3922 
o|contracted procedure: k4042 
o|contracted procedure: k4058 
o|contracted procedure: k4067 
o|contracted procedure: k3951 
o|contracted procedure: k3963 
o|contracted procedure: k3976 
o|contracted procedure: k4073 
o|contracted procedure: k4082 
o|contracted procedure: k4116 
o|contracted procedure: k4089 
o|contracted procedure: k4092 
o|contracted procedure: k4098 
o|contracted procedure: k4102 
o|contracted procedure: k4105 
o|contracted procedure: k4113 
o|contracted procedure: k4202 
o|contracted procedure: k4193 
o|contracted procedure: k4320 
o|contracted procedure: k4279 
o|contracted procedure: k4282 
o|contracted procedure: k4285 
o|contracted procedure: k4288 
o|contracted procedure: k4303 
o|contracted procedure: k4314 
o|contracted procedure: k4310 
o|contracted procedure: k4332 
o|contracted procedure: k4344 
o|contracted procedure: k4347 
o|contracted procedure: k4355 
o|contracted procedure: k4370 
o|contracted procedure: k4393 
o|contracted procedure: k4411 
o|contracted procedure: k4426 
o|contracted procedure: k4441 
o|contracted procedure: k4462 
o|contracted procedure: k4471 
o|contracted procedure: k4480 
o|contracted procedure: k4498 
o|contracted procedure: k4508 
o|contracted procedure: k4512 
o|contracted procedure: k4522 
o|contracted procedure: k4554 
o|contracted procedure: k4564 
o|contracted procedure: k4568 
o|contracted procedure: k4578 
o|contracted procedure: k4627 
o|contracted procedure: k4640 
o|contracted procedure: k4646 
o|contracted procedure: k4662 
o|contracted procedure: k4655 
o|contracted procedure: k4674 
o|contracted procedure: k4684 
o|contracted procedure: k4132 
o|propagated global variable: r4133 ##sys#undefined-value 
o|contracted procedure: k4696 
o|contracted procedure: k4171 
o|contracted procedure: k4181 
o|contracted procedure: k4708 
o|contracted procedure: k4720 
o|contracted procedure: k7101 
o|contracted procedure: k7053 
o|contracted procedure: k7074 
o|contracted procedure: k7078 
o|contracted procedure: k7070 
o|contracted procedure: k7063 
o|contracted procedure: k7081 
o|contracted procedure: k7087 
o|contracted procedure: k7097 
o|contracted procedure: k4736 
o|contracted procedure: k7107 
o|contracted procedure: k7110 
o|contracted procedure: k7119 
o|contracted procedure: k7134 
o|contracted procedure: k7138 
o|contracted procedure: k7130 
o|contracted procedure: k7163 
o|propagated global variable: r7164 ##sys#undefined-value 
o|contracted procedure: k7175 
o|contracted procedure: k7181 
o|contracted procedure: k7184 
o|contracted procedure: k7187 
o|contracted procedure: k7190 
o|contracted procedure: k7201 
o|contracted procedure: k7215 
o|contracted procedure: k7225 
o|contracted procedure: k7249 
o|contracted procedure: k7257 
o|contracted procedure: k7253 
o|contracted procedure: k7263 
o|contracted procedure: k7266 
o|contracted procedure: k7269 
o|contracted procedure: k7272 
o|contracted procedure: k7275 
o|contracted procedure: k7319 
o|contracted procedure: k7294 
o|contracted procedure: k7304 
o|contracted procedure: k7308 
o|contracted procedure: k7312 
o|contracted procedure: k7316 
o|contracted procedure: k7328 
o|contracted procedure: k7337 
o|contracted procedure: k4749 
o|contracted procedure: k4762 
o|contracted procedure: k4768 
o|contracted procedure: k4790 
o|contracted procedure: k4805 
o|contracted procedure: k4815 
o|contracted procedure: k4819 
o|contracted procedure: k4776 
o|propagated global variable: g956958 chicken.csi#command-table 
o|contracted procedure: k4884 
o|contracted procedure: k4891 
o|contracted procedure: k5088 
o|contracted procedure: k5121 
o|contracted procedure: k5144 
o|contracted procedure: k5180 
o|contracted procedure: k5184 
o|contracted procedure: k5188 
o|contracted procedure: k5192 
o|contracted procedure: k5196 
o|contracted procedure: k5200 
o|contracted procedure: k5208 
o|contracted procedure: k5212 
o|contracted procedure: k5228 
o|contracted procedure: k5238 
o|contracted procedure: k5242 
o|contracted procedure: k5246 
o|contracted procedure: k5249 
o|contracted procedure: k5261 
o|contracted procedure: k5264 
o|contracted procedure: k5267 
o|contracted procedure: k5275 
o|contracted procedure: k5283 
o|propagated global variable: g10641068 ##sys#features 
o|contracted procedure: k5289 
o|contracted procedure: k6404 
o|contracted procedure: k5370 
o|contracted procedure: k5376 
o|contracted procedure: k5388 
o|contracted procedure: k5397 
o|contracted procedure: k5404 
o|contracted procedure: k5490 
o|contracted procedure: k5414 
o|contracted procedure: k5423 
o|contracted procedure: k5436 
o|contracted procedure: k5439 
o|contracted procedure: k5446 
o|contracted procedure: k5453 
o|contracted procedure: k5468 
o|contracted procedure: k5475 
o|contracted procedure: k5479 
o|contracted procedure: k5494 
o|contracted procedure: k5513 
o|contracted procedure: k5516 
o|contracted procedure: k5525 
o|contracted procedure: k5534 
o|contracted procedure: k5543 
o|contracted procedure: k5552 
o|contracted procedure: k6391 
o|contracted procedure: k5561 
o|propagated global variable: r6392 ##sys#undefined-value 
o|contracted procedure: k5570 
o|contracted procedure: k5576 
o|contracted procedure: k5585 
o|contracted procedure: k5594 
o|contracted procedure: k5609 
o|contracted procedure: k5618 
o|contracted procedure: k5627 
o|contracted procedure: k5637 
o|contracted procedure: k5643 
o|contracted procedure: k5652 
o|contracted procedure: k5661 
o|contracted procedure: k5683 
o|contracted procedure: k5695 
o|contracted procedure: k5701 
o|contracted procedure: k5716 
o|contracted procedure: k5732 
o|contracted procedure: k5742 
o|contracted procedure: k5746 
o|contracted procedure: k5750 
o|contracted procedure: k5754 
o|contracted procedure: k5792 
o|contracted procedure: k5801 
o|contracted procedure: k5804 
o|contracted procedure: k5848 
o|contracted procedure: k5813 
o|contracted procedure: k5842 
o|contracted procedure: k5822 
o|contracted procedure: k5834 
o|contracted procedure: k5857 
o|contracted procedure: k5866 
o|contracted procedure: k5879 
o|contracted procedure: k5921 
o|contracted procedure: k5906 
o|contracted procedure: k5910 
o|contracted procedure: k5914 
o|contracted procedure: k5938 
o|contracted procedure: k5942 
o|contracted procedure: k5948 
o|contracted procedure: k5954 
o|contracted procedure: k5960 
o|contracted procedure: k5966 
o|contracted procedure: k5972 
o|contracted procedure: k5978 
o|contracted procedure: k5984 
o|contracted procedure: k5990 
o|contracted procedure: k5996 
o|contracted procedure: k6002 
o|contracted procedure: k6008 
o|contracted procedure: k6014 
o|contracted procedure: k6044 
o|contracted procedure: k6060 
o|contracted procedure: k6082 
o|contracted procedure: k6085 
o|contracted procedure: k6094 
o|contracted procedure: k6097 
o|contracted procedure: k6109 
o|contracted procedure: k6118 
o|contracted procedure: k6122 
o|contracted procedure: k6125 
o|contracted procedure: k6128 
o|contracted procedure: k6138 
o|contracted procedure: k6147 
o|contracted procedure: k6157 
o|contracted procedure: k6161 
o|contracted procedure: k6165 
o|contracted procedure: k6176 
o|contracted procedure: k6169 
o|contracted procedure: k6173 
o|contracted procedure: k6182 
o|contracted procedure: k6197 
o|contracted procedure: k6206 
o|contracted procedure: k6216 
o|contracted procedure: k6243 
o|contracted procedure: k6219 
o|contracted procedure: k6235 
o|contracted procedure: k6239 
o|contracted procedure: k62169317 
o|contracted procedure: k6246 
o|contracted procedure: k6249 
o|contracted procedure: k6261 
o|contracted procedure: k6271 
o|contracted procedure: k6275 
o|contracted procedure: k6279 
o|contracted procedure: k6285 
o|contracted procedure: k6288 
o|contracted procedure: k6305 
o|contracted procedure: k6321 
o|contracted procedure: k6324 
o|contracted procedure: k6327 
o|contracted procedure: k6334 
o|contracted procedure: k6343 
o|contracted procedure: k6346 
o|contracted procedure: k6349 
o|contracted procedure: k6357 
o|contracted procedure: k6365 
o|contracted procedure: k6381 
o|contracted procedure: k5360 
o|contracted procedure: k5341 
o|contracted procedure: k5356 
o|contracted procedure: k5344 
o|contracted procedure: k5306 
o|contracted procedure: k5313 
o|contracted procedure: k5317 
o|contracted procedure: k5320 
o|contracted procedure: k6394 
o|contracted procedure: k6413 
o|contracted procedure: k6436 
o|contracted procedure: k6456 
o|contracted procedure: k6462 
o|contracted procedure: k6473 
o|contracted procedure: k6525 
o|contracted procedure: k6518 
o|contracted procedure: k6479 
o|contracted procedure: k6491 
o|contracted procedure: k6502 
o|contracted procedure: k6508 
o|contracted procedure: k6515 
o|contracted procedure: k6541 
o|contracted procedure: k6547 
o|contracted procedure: k6554 
o|contracted procedure: k6560 
o|contracted procedure: k6576 
o|contracted procedure: k6582 
o|contracted procedure: k6594 
o|contracted procedure: k6608 
o|contracted procedure: k6633 
o|contracted procedure: k6642 
o|contracted procedure: k6645 
o|contracted procedure: k6658 
o|contracted procedure: k6662 
o|contracted procedure: k6678 
o|contracted procedure: k6665 
o|contracted procedure: k6672 
o|contracted procedure: k6693 
o|contracted procedure: k6696 
o|contracted procedure: k6702 
o|contracted procedure: k6705 
o|contracted procedure: k6711 
o|contracted procedure: k6718 
o|contracted procedure: k6727 
o|contracted procedure: k6737 
o|contracted procedure: k6750 
o|contracted procedure: k6754 
o|contracted procedure: k6787 
o|contracted procedure: k6790 
o|contracted procedure: k6794 
o|contracted procedure: k6804 
o|contracted procedure: k6813 
o|contracted procedure: k6816 
o|contracted procedure: k6819 
o|contracted procedure: k6822 
o|contracted procedure: k6825 
o|contracted procedure: k6828 
o|contracted procedure: k6831 
o|contracted procedure: k6876 
o|contracted procedure: k6879 
o|contracted procedure: k6887 
o|contracted procedure: k6902 
o|contracted procedure: k6927 
o|contracted procedure: k6933 
o|contracted procedure: k6937 
o|contracted procedure: k6940 
o|contracted procedure: k6943 
o|contracted procedure: k6946 
o|contracted procedure: k6949 
o|contracted procedure: k6986 
o|contracted procedure: k6961 
o|contracted procedure: k6971 
o|contracted procedure: k6975 
o|contracted procedure: k6979 
o|contracted procedure: k6983 
o|contracted procedure: k7008 
o|contracted procedure: k7022 
o|contracted procedure: k7035 
o|contracted procedure: k7042 
o|contracted procedure: k7343 
o|contracted procedure: k7358 
o|contracted procedure: k7370 
o|contracted procedure: k7377 
o|contracted procedure: k7392 
o|contracted procedure: k7396 
o|contracted procedure: k7383 
o|contracted procedure: k7413 
o|contracted procedure: k7416 
o|contracted procedure: k7422 
o|contracted procedure: k7434 
o|contracted procedure: k7455 
o|contracted procedure: k7478 
o|contracted procedure: k7500 
o|contracted procedure: k7496 
o|contracted procedure: k7481 
o|contracted procedure: k7484 
o|contracted procedure: k7492 
o|contracted procedure: k7553 
o|contracted procedure: k7571 
o|contracted procedure: k7562 
o|contracted procedure: k7541 
o|contracted procedure: k7523 
o|contracted procedure: k7529 
o|contracted procedure: k7536 
o|contracted procedure: k7606 
o|contracted procedure: k7612 
o|contracted procedure: k7627 
o|contracted procedure: k7659 
o|contracted procedure: k7638 
o|contracted procedure: k7648 
o|contracted procedure: k7745 
o|contracted procedure: k7703 
o|contracted procedure: k7722 
o|contracted procedure: k7777 
o|contracted procedure: k7786 
o|contracted procedure: k7795 
o|contracted procedure: k7841 
o|contracted procedure: k4217 
o|contracted procedure: k4220 
o|contracted procedure: k4231 
o|contracted procedure: k7856 
o|contracted procedure: k7859 
o|contracted procedure: k7869 
o|contracted procedure: k78699367 
o|contracted procedure: k7875 
o|contracted procedure: k7879 
o|contracted procedure: k78699371 
o|contracted procedure: k7885 
o|contracted procedure: k7888 
o|contracted procedure: k7895 
o|contracted procedure: k78699375 
o|contracted procedure: k7899 
o|contracted procedure: k7907 
o|contracted procedure: k7915 
o|contracted procedure: k7922 
o|contracted procedure: k78699379 
o|contracted procedure: k7926 
o|contracted procedure: k7934 
o|contracted procedure: k7941 
o|contracted procedure: k78699383 
o|contracted procedure: k7945 
o|contracted procedure: k7959 
o|contracted procedure: k7966 
o|contracted procedure: k78699387 
o|contracted procedure: k7970 
o|contracted procedure: k7979 
o|contracted procedure: k7988 
o|contracted procedure: k8023 
o|contracted procedure: k8010 
o|contracted procedure: k8020 
o|contracted procedure: k78699391 
o|contracted procedure: k8033 
o|contracted procedure: k8041 
o|contracted procedure: k8065 
o|contracted procedure: k8068 
o|contracted procedure: k8081 
o|contracted procedure: k80819395 
o|contracted procedure: k8111 
o|contracted procedure: k7697 
o|contracted procedure: k7674 
o|contracted procedure: k8127 
o|contracted procedure: k8131 
o|contracted procedure: k8230 
o|contracted procedure: k8226 
o|contracted procedure: k8182 
o|contracted procedure: k8222 
o|contracted procedure: k8191 
o|contracted procedure: k8200 
o|contracted procedure: k8209 
o|contracted procedure: k3108 
o|contracted procedure: k3111 
o|contracted procedure: k3121 
o|contracted procedure: k3033 
o|contracted procedure: k3059 
o|contracted procedure: k8238 
o|contracted procedure: k8244 
o|contracted procedure: k8251 
o|contracted procedure: k8257 
o|contracted procedure: k8269 
o|contracted procedure: k8272 
o|contracted procedure: k8275 
o|contracted procedure: k8283 
o|contracted procedure: k8291 
o|contracted procedure: k8303 
o|contracted procedure: k8306 
o|contracted procedure: k8309 
o|contracted procedure: k8317 
o|contracted procedure: k8325 
o|contracted procedure: k8337 
o|contracted procedure: k8347 
o|contracted procedure: k8351 
o|contracted procedure: k8360 
o|contracted procedure: k8370 
o|contracted procedure: k8374 
o|contracted procedure: k8383 
o|contracted procedure: k8393 
o|contracted procedure: k8397 
o|contracted procedure: k8425 
o|contracted procedure: k8438 
o|contracted procedure: k8442 
o|contracted procedure: k3854 
o|contracted procedure: k3850 
o|contracted procedure: k3846 
o|contracted procedure: k8466 
o|contracted procedure: k8469 
o|contracted procedure: k8472 
o|contracted procedure: k8480 
o|contracted procedure: k8488 
o|contracted procedure: k8522 
o|contracted procedure: k8540 
o|contracted procedure: k8550 
o|contracted procedure: k8589 
o|contracted procedure: k8585 
o|contracted procedure: k8553 
o|contracted procedure: k8581 
o|contracted procedure: k8577 
o|contracted procedure: k8562 
o|contracted procedure: k8570 
o|contracted procedure: k8596 
o|contracted procedure: k8617 
o|contracted procedure: k4903 
o|contracted procedure: k4929 
o|contracted procedure: k4941 
o|contracted procedure: k4944 
o|contracted procedure: k4947 
o|contracted procedure: k4955 
o|contracted procedure: k4963 
o|contracted procedure: k4911 
o|contracted procedure: k5009 
o|contracted procedure: k5023 
o|contracted procedure: k8644 
o|contracted procedure: k8711 
o|contracted procedure: k8715 
o|contracted procedure: k8719 
o|simplifications: ((if . 3) (let . 117)) 
o|removed binding forms: 495 
o|inlining procedure: k7218 
o|inlining procedure: k6867 
o|substituted constant variable: r8712 
o|substituted constant variable: r8716 
o|substituted constant variable: r8712 
o|substituted constant variable: r8716 
o|substituted constant variable: r8720 
o|replaced variables: 217 
o|simplifications: ((if . 1)) 
o|removed binding forms: 92 
o|direct leaf routine/allocation: g825826 6 
o|direct leaf routine/allocation: lp1129 0 
o|direct leaf routine/allocation: lp1115 0 
o|direct leaf routine/allocation: loop1715 0 
o|contracted procedure: "(csi.scm:275) k4291" 
o|contracted procedure: k5779 
o|converted assignments to bindings: (lp1129) 
o|converted assignments to bindings: (lp1115) 
o|contracted procedure: k7448 
o|converted assignments to bindings: (loop1715) 
o|simplifications: ((let . 3)) 
o|removed binding forms: 3 
o|replaced variables: 2 
o|removed binding forms: 1 
o|customizable procedures: (k3826 g980981 doloop10161017 map-loop9891022 chicken.csi#canonicalize-args chicken.csi#lookup-script-file k7591 k7597 k7603 map-loop17831803 k7762 k7768 for-each-loop18151889 for-each-loop18251896 for-each-loop18351903 map-loop19101927 collect-options1810 map-loop19361953 loop345 loop365 chicken.csi#member* k7829 doloop20372038 evalstring1812 doloop18431983 chicken.csi#history-ref doloop18761877 g18531854 loop1845 k7428 map-loop16791704 loop1667 find1646 loop1643 k6797 k7015 g14721480 for-each-loop14711501 prin11427 doloop14851486 doloop14341440 justify1379 doloop13881390 doloop13971398 doloop13891405 doloop13781386 def-len13421364 def-out13431362 body13401349 k6488 bestlen1356 k5782 g12981299 map-loop13031320 g12871288 g12581265 for-each-loop12571274 loop1268 g12361243 for-each-loop12351246 doloop12301231 chicken.csi#hexdump loop-print1205 doloop11921193 loop21174 loop11164 k5048 map-loop10521069 g10791086 for-each-loop10781100 shorten1046 k5095 k4341 for-each-loop949961 k7113 g15691577 for-each-loop15681592 compare1550 doloop15821583 doloop15541559 fail1555 k7056 chicken.csi#show-frameinfo doloop760761 chicken.csi#history-add g903910 for-each-loop902922 for-each-loop883893 chicken.csi#report chicken.csi#dump chicken.csi#describe k4095 loop718 loop737 addext710) 
o|calls to known targets: 257 
o|identified direct recursive calls: f_7170 1 
o|identified direct recursive calls: f_5301 1 
o|identified direct recursive calls: f_6201 1 
o|identified direct recursive calls: f_5336 1 
o|identified direct recursive calls: f_7365 1 
o|identified direct recursive calls: f_7551 1 
o|identified direct recursive calls: f_7473 1 
o|unused rest argument: _1874 f_7748 
o|identified direct recursive calls: f_7836 2 
o|fast box initializations: 49 
o|fast global references: 76 
o|fast global assignments: 26 
o|dropping unused closure argument: f_3929 
o|dropping unused closure argument: f_4185 
o|dropping unused closure argument: f_5064 
o|dropping unused closure argument: f_5301 
o|dropping unused closure argument: f_5336 
o|dropping unused closure argument: f_6420 
o|dropping unused closure argument: f_6568 
o|dropping unused closure argument: f_6571 
o|dropping unused closure argument: f_6773 
o|dropping unused closure argument: f_6776 
o|dropping unused closure argument: f_7347 
o|dropping unused closure argument: f_7402 
o|dropping unused closure argument: f_7551 
o|dropping unused closure argument: f_7701 
*/
/* end of file */

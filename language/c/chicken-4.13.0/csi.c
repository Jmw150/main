/* Generated from csi.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: csi.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -output-file csi.c
   used units: library eval chicken_2dsyntax ports extras
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
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[405];
static double C_possibly_force_alignment;


/* from k2054 */
C_regparm static C_word C_fcall stub63(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_mpointer(&C_a,(void*)_getcwd(t0,t1));
return C_r;}

C_noret_decl(f_4177)
static void C_fcall f_4177(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4151)
static void C_ccall f_4151(C_word c,C_word *av) C_noret;
C_noret_decl(f_3149)
static void C_ccall f_3149(C_word c,C_word *av) C_noret;
C_noret_decl(f_3147)
static void C_fcall f_3147(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4166)
static void C_ccall f_4166(C_word c,C_word *av) C_noret;
C_noret_decl(f_4163)
static void C_ccall f_4163(C_word c,C_word *av) C_noret;
C_noret_decl(f_6692)
static void C_ccall f_6692(C_word c,C_word *av) C_noret;
C_noret_decl(f_6697)
static void C_ccall f_6697(C_word c,C_word *av) C_noret;
C_noret_decl(f_6695)
static void C_ccall f_6695(C_word c,C_word *av) C_noret;
C_noret_decl(f7572)
static void C_ccall f7572(C_word c,C_word *av) C_noret;
C_noret_decl(f_3127)
static void C_ccall f_3127(C_word c,C_word *av) C_noret;
C_noret_decl(f_3240)
static void C_ccall f_3240(C_word c,C_word *av) C_noret;
C_noret_decl(f_3121)
static void C_ccall f_3121(C_word c,C_word *av) C_noret;
C_noret_decl(f_3243)
static void C_ccall f_3243(C_word c,C_word *av) C_noret;
C_noret_decl(f_3138)
static void C_ccall f_3138(C_word c,C_word *av) C_noret;
C_noret_decl(f_3139)
static void C_fcall f_3139(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5918)
static void C_ccall f_5918(C_word c,C_word *av) C_noret;
C_noret_decl(f_3135)
static void C_ccall f_3135(C_word c,C_word *av) C_noret;
C_noret_decl(f_3214)
static void C_ccall f_3214(C_word c,C_word *av) C_noret;
C_noret_decl(f_6679)
static void C_ccall f_6679(C_word c,C_word *av) C_noret;
C_noret_decl(f_6675)
static void C_ccall f_6675(C_word c,C_word *av) C_noret;
C_noret_decl(f_6689)
static void C_ccall f_6689(C_word c,C_word *av) C_noret;
C_noret_decl(f_6683)
static void C_ccall f_6683(C_word c,C_word *av) C_noret;
C_noret_decl(f_3231)
static void C_ccall f_3231(C_word c,C_word *av) C_noret;
C_noret_decl(f_3234)
static void C_ccall f_3234(C_word c,C_word *av) C_noret;
C_noret_decl(f_5923)
static void C_ccall f_5923(C_word c,C_word *av) C_noret;
C_noret_decl(f_3237)
static void C_ccall f_3237(C_word c,C_word *av) C_noret;
C_noret_decl(f_5926)
static void C_ccall f_5926(C_word c,C_word *av) C_noret;
C_noret_decl(f_3206)
static void C_ccall f_3206(C_word c,C_word *av) C_noret;
C_noret_decl(f_5900)
static void C_fcall f_5900(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5905)
static void C_fcall f_5905(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3159)
static void C_ccall f_3159(C_word c,C_word *av) C_noret;
C_noret_decl(f_5374)
static void C_ccall f_5374(C_word c,C_word *av) C_noret;
C_noret_decl(f_3153)
static void C_ccall f_3153(C_word c,C_word *av) C_noret;
C_noret_decl(f_3156)
static void C_ccall f_3156(C_word c,C_word *av) C_noret;
C_noret_decl(f_5362)
static void C_ccall f_5362(C_word c,C_word *av) C_noret;
C_noret_decl(f_5364)
static void C_fcall f_5364(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3291)
static void C_ccall f_3291(C_word c,C_word *av) C_noret;
C_noret_decl(f_6113)
static void C_ccall f_6113(C_word c,C_word *av) C_noret;
C_noret_decl(f_6119)
static void C_ccall f_6119(C_word c,C_word *av) C_noret;
C_noret_decl(f_3184)
static void C_ccall f_3184(C_word c,C_word *av) C_noret;
C_noret_decl(f_3180)
static void C_fcall f_3180(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3267)
static void C_ccall f_3267(C_word c,C_word *av) C_noret;
C_noret_decl(f_5971)
static void C_ccall f_5971(C_word c,C_word *av) C_noret;
C_noret_decl(f_6122)
static void C_ccall f_6122(C_word c,C_word *av) C_noret;
C_noret_decl(f_6125)
static void C_ccall f_6125(C_word c,C_word *av) C_noret;
C_noret_decl(f_6128)
static void C_ccall f_6128(C_word c,C_word *av) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word *av) C_noret;
C_noret_decl(f_3169)
static void C_ccall f_3169(C_word c,C_word *av) C_noret;
C_noret_decl(f_2243)
static void C_ccall f_2243(C_word c,C_word *av) C_noret;
C_noret_decl(f_6662)
static void C_ccall f_6662(C_word c,C_word *av) C_noret;
C_noret_decl(f_3283)
static void C_ccall f_3283(C_word c,C_word *av) C_noret;
C_noret_decl(f_3608)
static void C_ccall f_3608(C_word c,C_word *av) C_noret;
C_noret_decl(f_3161)
static void C_fcall f_3161(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3179)
static void C_ccall f_3179(C_word c,C_word *av) C_noret;
C_noret_decl(f_3287)
static void C_ccall f_3287(C_word c,C_word *av) C_noret;
C_noret_decl(f_6109)
static void C_ccall f_6109(C_word c,C_word *av) C_noret;
C_noret_decl(f_2147)
static void C_ccall f_2147(C_word c,C_word *av) C_noret;
C_noret_decl(f_2140)
static void C_ccall f_2140(C_word c,C_word *av) C_noret;
C_noret_decl(f_3176)
static void C_ccall f_3176(C_word c,C_word *av) C_noret;
C_noret_decl(f_5985)
static void C_ccall f_5985(C_word c,C_word *av) C_noret;
C_noret_decl(f_3259)
static void C_ccall f_3259(C_word c,C_word *av) C_noret;
C_noret_decl(f_3623)
static void C_ccall f_3623(C_word c,C_word *av) C_noret;
C_noret_decl(f_2229)
static void C_fcall f_2229(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2137)
static void C_ccall f_2137(C_word c,C_word *av) C_noret;
C_noret_decl(f_5307)
static void C_ccall f_5307(C_word c,C_word *av) C_noret;
C_noret_decl(f_3629)
static void C_ccall f_3629(C_word c,C_word *av) C_noret;
C_noret_decl(f_3626)
static void C_ccall f_3626(C_word c,C_word *av) C_noret;
C_noret_decl(f_3275)
static void C_ccall f_3275(C_word c,C_word *av) C_noret;
C_noret_decl(f_3271)
static void C_ccall f_3271(C_word c,C_word *av) C_noret;
C_noret_decl(f_3279)
static void C_ccall f_3279(C_word c,C_word *av) C_noret;
C_noret_decl(f_6215)
static void C_ccall f_6215(C_word c,C_word *av) C_noret;
C_noret_decl(f_6218)
static void C_ccall f_6218(C_word c,C_word *av) C_noret;
C_noret_decl(f_2103)
static void C_ccall f_2103(C_word c,C_word *av) C_noret;
C_noret_decl(f_5942)
static void C_ccall f_5942(C_word c,C_word *av) C_noret;
C_noret_decl(f_4411)
static void C_fcall f_4411(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4449)
static void C_ccall f_4449(C_word c,C_word *av) C_noret;
C_noret_decl(f_5823)
static void C_ccall f_5823(C_word c,C_word *av) C_noret;
C_noret_decl(f_3197)
static void C_fcall f_3197(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4436)
static void C_ccall f_4436(C_word c,C_word *av) C_noret;
C_noret_decl(f_5813)
static void C_ccall f_5813(C_word c,C_word *av) C_noret;
C_noret_decl(f_5815)
static void C_ccall f_5815(C_word c,C_word *av) C_noret;
C_noret_decl(f_6203)
static void C_ccall f_6203(C_word c,C_word *av) C_noret;
C_noret_decl(f_6206)
static void C_ccall f_6206(C_word c,C_word *av) C_noret;
C_noret_decl(f_6200)
static void C_ccall f_6200(C_word c,C_word *av) C_noret;
C_noret_decl(f_5802)
static void C_ccall f_5802(C_word c,C_word *av) C_noret;
C_noret_decl(f_2546)
static void C_ccall f_2546(C_word c,C_word *av) C_noret;
C_noret_decl(f_2543)
static void C_ccall f_2543(C_word c,C_word *av) C_noret;
C_noret_decl(f_2540)
static void C_ccall f_2540(C_word c,C_word *av) C_noret;
C_noret_decl(f_5809)
static void C_ccall f_5809(C_word c,C_word *av) C_noret;
C_noret_decl(f_2549)
static void C_ccall f_2549(C_word c,C_word *av) C_noret;
C_noret_decl(f_6058)
static void C_ccall f_6058(C_word c,C_word *av) C_noret;
C_noret_decl(f_6069)
static void C_ccall f_6069(C_word c,C_word *av) C_noret;
C_noret_decl(f_2160)
static void C_ccall f_2160(C_word c,C_word *av) C_noret;
C_noret_decl(f_2219)
static void C_fcall f_2219(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2167)
static void C_ccall f_2167(C_word c,C_word *av) C_noret;
C_noret_decl(f_2169)
static void C_fcall f_2169(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6852)
static void C_fcall f_6852(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6856)
static void C_ccall f_6856(C_word c,C_word *av) C_noret;
C_noret_decl(f_4009)
static void C_ccall f_4009(C_word c,C_word *av) C_noret;
C_noret_decl(f_2151)
static void C_ccall f_2151(C_word c,C_word *av) C_noret;
C_noret_decl(f_2287)
static void C_ccall f_2287(C_word c,C_word *av) C_noret;
C_noret_decl(f_2154)
static void C_ccall f_2154(C_word c,C_word *av) C_noret;
C_noret_decl(f_6869)
static void C_ccall f_6869(C_word c,C_word *av) C_noret;
C_noret_decl(f_5845)
static void C_fcall f_5845(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5848)
static void C_ccall f_5848(C_word c,C_word *av) C_noret;
C_noret_decl(f_5842)
static void C_ccall f_5842(C_word c,C_word *av) C_noret;
C_noret_decl(f_6048)
static void C_ccall f_6048(C_word c,C_word *av) C_noret;
C_noret_decl(f_2182)
static void C_ccall f_2182(C_word c,C_word *av) C_noret;
C_noret_decl(f_6294)
static void C_ccall f_6294(C_word c,C_word *av) C_noret;
C_noret_decl(f_4728)
static void C_ccall f_4728(C_word c,C_word *av) C_noret;
C_noret_decl(f_6040)
static void C_ccall f_6040(C_word c,C_word *av) C_noret;
C_noret_decl(f_4652)
static void C_ccall f_4652(C_word c,C_word *av) C_noret;
C_noret_decl(f_2274)
static void C_fcall f_2274(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5192)
static void C_fcall f_5192(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5190)
static void C_fcall f_5190(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5836)
static void C_ccall f_5836(C_word c,C_word *av) C_noret;
C_noret_decl(f_4025)
static void C_ccall f_4025(C_word c,C_word *av) C_noret;
C_noret_decl(f_5833)
static void C_ccall f_5833(C_word c,C_word *av) C_noret;
C_noret_decl(f_4725)
static void C_ccall f_4725(C_word c,C_word *av) C_noret;
C_noret_decl(f_4645)
static void C_fcall f_4645(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2179)
static void C_ccall f_2179(C_word c,C_word *av) C_noret;
C_noret_decl(f_4648)
static void C_fcall f_4648(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5839)
static void C_fcall f_5839(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4018)
static void C_ccall f_4018(C_word c,C_word *av) C_noret;
C_noret_decl(f_2525)
static void C_ccall f_2525(C_word c,C_word *av) C_noret;
C_noret_decl(f_2528)
static void C_ccall f_2528(C_word c,C_word *av) C_noret;
C_noret_decl(f_4712)
static void C_fcall f_4712(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2128)
static void C_ccall f_2128(C_word c,C_word *av) C_noret;
C_noret_decl(f_6890)
static void C_ccall f_6890(C_word c,C_word *av) C_noret;
C_noret_decl(f_6893)
static void C_ccall f_6893(C_word c,C_word *av) C_noret;
C_noret_decl(f_5894)
static void C_ccall f_5894(C_word c,C_word *av) C_noret;
C_noret_decl(f_5897)
static void C_ccall f_5897(C_word c,C_word *av) C_noret;
C_noret_decl(f_6077)
static void C_ccall f_6077(C_word c,C_word *av) C_noret;
C_noret_decl(f_5891)
static void C_ccall f_5891(C_word c,C_word *av) C_noret;
C_noret_decl(f_6079)
static void C_ccall f_6079(C_word c,C_word *av) C_noret;
C_noret_decl(f_4700)
static void C_ccall f_4700(C_word c,C_word *av) C_noret;
C_noret_decl(f_4703)
static void C_ccall f_4703(C_word c,C_word *av) C_noret;
C_noret_decl(f_2112)
static void C_fcall f_2112(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2116)
static void C_ccall f_2116(C_word c,C_word *av) C_noret;
C_noret_decl(f_5882)
static void C_ccall f_5882(C_word c,C_word *av) C_noret;
C_noret_decl(f_5885)
static void C_ccall f_5885(C_word c,C_word *av) C_noret;
C_noret_decl(f_5888)
static void C_ccall f_5888(C_word c,C_word *av) C_noret;
C_noret_decl(f_2904)
static void C_ccall f_2904(C_word c,C_word *av) C_noret;
C_noret_decl(f_5872)
static void C_ccall f_5872(C_word c,C_word *av) C_noret;
C_noret_decl(f_5878)
static void C_ccall f_5878(C_word c,C_word *av) C_noret;
C_noret_decl(f_2290)
static void C_ccall f_2290(C_word c,C_word *av) C_noret;
C_noret_decl(f_2293)
static void C_ccall f_2293(C_word c,C_word *av) C_noret;
C_noret_decl(f_4206)
static void C_ccall f_4206(C_word c,C_word *av) C_noret;
C_noret_decl(f_2296)
static void C_ccall f_2296(C_word c,C_word *av) C_noret;
C_noret_decl(f_2299)
static void C_ccall f_2299(C_word c,C_word *av) C_noret;
C_noret_decl(f_5133)
static void C_fcall f_5133(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3916)
static void C_ccall f_3916(C_word c,C_word *av) C_noret;
C_noret_decl(f_2918)
static void C_ccall f_2918(C_word c,C_word *av) C_noret;
C_noret_decl(f_4225)
static void C_ccall f_4225(C_word c,C_word *av) C_noret;
C_noret_decl(f_6833)
static void C_ccall f_6833(C_word c,C_word *av) C_noret;
C_noret_decl(f_4215)
static void C_fcall f_4215(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4797)
static void C_fcall f_4797(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6848)
static void C_ccall f_6848(C_word c,C_word *av) C_noret;
C_noret_decl(f_6817)
static void C_ccall f_6817(C_word c,C_word *av) C_noret;
C_noret_decl(f_1986)
static void C_ccall f_1986(C_word c,C_word *av) C_noret;
C_noret_decl(f_2196)
static void C_ccall f_2196(C_word c,C_word *av) C_noret;
C_noret_decl(f_6824)
static void C_fcall f_6824(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1996)
static void C_ccall f_1996(C_word c,C_word *av) C_noret;
C_noret_decl(f_1994)
static void C_ccall f_1994(C_word c,C_word *av) C_noret;
C_noret_decl(f_6821)
static void C_ccall f_6821(C_word c,C_word *av) C_noret;
C_noret_decl(f_6436)
static void C_fcall f_6436(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4265)
static void C_ccall f_4265(C_word c,C_word *av) C_noret;
C_noret_decl(f_3695)
static void C_ccall f_3695(C_word c,C_word *av) C_noret;
C_noret_decl(f_4261)
static void C_fcall f_4261(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4260)
static void C_ccall f_4260(C_word c,C_word *av) C_noret;
C_noret_decl(f_4763)
static void C_fcall f_4763(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2970)
static void C_ccall f_2970(C_word c,C_word *av) C_noret;
C_noret_decl(f_6400)
static void C_ccall f_6400(C_word c,C_word *av) C_noret;
C_noret_decl(f_2974)
static void C_ccall f_2974(C_word c,C_word *av) C_noret;
C_noret_decl(f_2579)
static void C_ccall f_2579(C_word c,C_word *av) C_noret;
C_noret_decl(f_6882)
static void C_ccall f_6882(C_word c,C_word *av) C_noret;
C_noret_decl(f_6880)
static void C_ccall f_6880(C_word c,C_word *av) C_noret;
C_noret_decl(f_4488)
static void C_ccall f_4488(C_word c,C_word *av) C_noret;
C_noret_decl(f_5863)
static void C_ccall f_5863(C_word c,C_word *av) C_noret;
C_noret_decl(f_6413)
static void C_fcall f_6413(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5860)
static void C_ccall f_5860(C_word c,C_word *av) C_noret;
C_noret_decl(f_4480)
static void C_ccall f_4480(C_word c,C_word *av) C_noret;
C_noret_decl(f_4284)
static void C_ccall f_4284(C_word c,C_word *av) C_noret;
C_noret_decl(f_3984)
static void C_ccall f_3984(C_word c,C_word *av) C_noret;
C_noret_decl(f_6230)
static void C_ccall f_6230(C_word c,C_word *av) C_noret;
C_noret_decl(f_3980)
static void C_ccall f_3980(C_word c,C_word *av) C_noret;
C_noret_decl(f_1945)
static void C_ccall f_1945(C_word c,C_word *av) C_noret;
C_noret_decl(f_1948)
static void C_ccall f_1948(C_word c,C_word *av) C_noret;
C_noret_decl(f_1941)
static void C_fcall f_1941(C_word t0) C_noret;
C_noret_decl(f_5869)
static void C_ccall f_5869(C_word c,C_word *av) C_noret;
C_noret_decl(f_5854)
static void C_ccall f_5854(C_word c,C_word *av) C_noret;
C_noret_decl(f_2996)
static void C_ccall f_2996(C_word c,C_word *av) C_noret;
C_noret_decl(f_5851)
static void C_ccall f_5851(C_word c,C_word *av) C_noret;
C_noret_decl(f_2990)
static void C_ccall f_2990(C_word c,C_word *av) C_noret;
C_noret_decl(f_2597)
static void C_ccall f_2597(C_word c,C_word *av) C_noret;
C_noret_decl(f_4274)
static void C_fcall f_4274(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3990)
static void C_ccall f_3990(C_word c,C_word *av) C_noret;
C_noret_decl(f_1955)
static void C_ccall f_1955(C_word c,C_word *av) C_noret;
C_noret_decl(f_1957)
static void C_ccall f_1957(C_word c,C_word *av) C_noret;
C_noret_decl(f_6475)
static void C_ccall f_6475(C_word c,C_word *av) C_noret;
C_noret_decl(f_4497)
static void C_fcall f_4497(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5629)
static C_word C_fcall f_5629(C_word t0);
C_noret_decl(f_4499)
static void C_fcall f_4499(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6227)
static void C_ccall f_6227(C_word c,C_word *av) C_noret;
C_noret_decl(f_4297)
static void C_ccall f_4297(C_word c,C_word *av) C_noret;
C_noret_decl(f_5425)
static void C_fcall f_5425(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5420)
static void C_ccall f_5420(C_word c,C_word *av) C_noret;
C_noret_decl(f_1974)
static void C_ccall f_1974(C_word c,C_word *av) C_noret;
C_noret_decl(f_2964)
static void C_ccall f_2964(C_word c,C_word *av) C_noret;
C_noret_decl(f_1908)
static void C_ccall f_1908(C_word c,C_word *av) C_noret;
C_noret_decl(f_1903)
static void C_ccall f_1903(C_word c,C_word *av) C_noret;
C_noret_decl(f_4668)
static void C_ccall f_4668(C_word c,C_word *av) C_noret;
C_noret_decl(f_1911)
static void C_fcall f_1911(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1917)
static void C_ccall f_1917(C_word c,C_word *av) C_noret;
C_noret_decl(f_4694)
static void C_ccall f_4694(C_word c,C_word *av) C_noret;
C_noret_decl(f_4697)
static void C_ccall f_4697(C_word c,C_word *av) C_noret;
C_noret_decl(f_5431)
static void C_fcall f_5431(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4691)
static void C_ccall f_4691(C_word c,C_word *av) C_noret;
C_noret_decl(f_1920)
static void C_ccall f_1920(C_word c,C_word *av) C_noret;
C_noret_decl(f_1927)
static void C_ccall f_1927(C_word c,C_word *av) C_noret;
C_noret_decl(f_6481)
static void C_ccall f_6481(C_word c,C_word *av) C_noret;
C_noret_decl(f_6484)
static void C_ccall f_6484(C_word c,C_word *av) C_noret;
C_noret_decl(f_4688)
static void C_ccall f_4688(C_word c,C_word *av) C_noret;
C_noret_decl(f_5659)
static void C_ccall f_5659(C_word c,C_word *av) C_noret;
C_noret_decl(f_4405)
static void C_ccall f_4405(C_word c,C_word *av) C_noret;
C_noret_decl(f_6494)
static void C_ccall f_6494(C_word c,C_word *av) C_noret;
C_noret_decl(f_6460)
static void C_ccall f_6460(C_word c,C_word *av) C_noret;
C_noret_decl(f_2513)
static void C_ccall f_2513(C_word c,C_word *av) C_noret;
C_noret_decl(f_6463)
static void C_ccall f_6463(C_word c,C_word *av) C_noret;
C_noret_decl(f_6466)
static void C_ccall f_6466(C_word c,C_word *av) C_noret;
C_noret_decl(f_2510)
static void C_ccall f_2510(C_word c,C_word *av) C_noret;
C_noret_decl(f_5443)
static void C_fcall f_5443(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2582)
static void C_ccall f_2582(C_word c,C_word *av) C_noret;
C_noret_decl(f_2587)
static void C_fcall f_2587(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3010)
static void C_ccall f_3010(C_word c,C_word *av) C_noret;
C_noret_decl(f_3013)
static void C_ccall f_3013(C_word c,C_word *av) C_noret;
C_noret_decl(f_3019)
static void C_ccall f_3019(C_word c,C_word *av) C_noret;
C_noret_decl(f_3022)
static void C_ccall f_3022(C_word c,C_word *av) C_noret;
C_noret_decl(f_4678)
static void C_fcall f_4678(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5041)
static void C_ccall f_5041(C_word c,C_word *av) C_noret;
C_noret_decl(f_5680)
static void C_ccall f_5680(C_word c,C_word *av) C_noret;
C_noret_decl(f_5683)
static void C_fcall f_5683(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3030)
static void C_fcall f_3030(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5689)
static void C_ccall f_5689(C_word c,C_word *av) C_noret;
C_noret_decl(f_5031)
static void C_fcall f_5031(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5671)
static void C_fcall f_5671(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5677)
static void C_fcall f_5677(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5674)
static void C_ccall f_5674(C_word c,C_word *av) C_noret;
C_noret_decl(f_4610)
static void C_fcall f_4610(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5662)
static void C_ccall f_5662(C_word c,C_word *av) C_noret;
C_noret_decl(f_5665)
static void C_ccall f_5665(C_word c,C_word *av) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word *av) C_noret;
C_noret_decl(f_5668)
static void C_ccall f_5668(C_word c,C_word *av) C_noret;
C_noret_decl(f_4605)
static void C_fcall f_4605(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3064)
static void C_ccall f_3064(C_word c,C_word *av) C_noret;
C_noret_decl(f_6163)
static void C_ccall f_6163(C_word c,C_word *av) C_noret;
C_noret_decl(f_3076)
static void C_ccall f_3076(C_word c,C_word *av) C_noret;
C_noret_decl(f_3070)
static void C_ccall f_3070(C_word c,C_word *av) C_noret;
C_noret_decl(f_5075)
static void C_ccall f_5075(C_word c,C_word *av) C_noret;
C_noret_decl(f_6133)
static void C_fcall f_6133(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5078)
static void C_ccall f_5078(C_word c,C_word *av) C_noret;
C_noret_decl(f_3082)
static void C_ccall f_3082(C_word c,C_word *av) C_noret;
C_noret_decl(f_3088)
static void C_ccall f_3088(C_word c,C_word *av) C_noret;
C_noret_decl(f_6149)
static void C_ccall f_6149(C_word c,C_word *av) C_noret;
C_noret_decl(f_6146)
static void C_ccall f_6146(C_word c,C_word *av) C_noret;
C_noret_decl(f_6446)
static void C_ccall f_6446(C_word c,C_word *av) C_noret;
C_noret_decl(f_3096)
static void C_ccall f_3096(C_word c,C_word *av) C_noret;
C_noret_decl(f_3548)
static void C_ccall f_3548(C_word c,C_word *av) C_noret;
C_noret_decl(f_3098)
static void C_fcall f_3098(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6197)
static void C_ccall f_6197(C_word c,C_word *av) C_noret;
C_noret_decl(f_6194)
static void C_ccall f_6194(C_word c,C_word *av) C_noret;
C_noret_decl(f_5692)
static void C_ccall f_5692(C_word c,C_word *av) C_noret;
C_noret_decl(f_5694)
static void C_fcall f_5694(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3551)
static void C_ccall f_3551(C_word c,C_word *av) C_noret;
C_noret_decl(f_3529)
static void C_ccall f_3529(C_word c,C_word *av) C_noret;
C_noret_decl(f_6423)
static void C_ccall f_6423(C_word c,C_word *av) C_noret;
C_noret_decl(f_3538)
static void C_fcall f_3538(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6182)
static void C_ccall f_6182(C_word c,C_word *av) C_noret;
C_noret_decl(f_3506)
static void C_fcall f_3506(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3456)
static C_word C_fcall f_3456(C_word t0);
C_noret_decl(f_5092)
static void C_fcall f_5092(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3501)
static void C_ccall f_3501(C_word c,C_word *av) C_noret;
C_noret_decl(f_4920)
static void C_ccall f_4920(C_word c,C_word *av) C_noret;
C_noret_decl(f_4923)
static void C_ccall f_4923(C_word c,C_word *av) C_noret;
C_noret_decl(f_4926)
static void C_ccall f_4926(C_word c,C_word *av) C_noret;
C_noret_decl(f_4914)
static void C_ccall f_4914(C_word c,C_word *av) C_noret;
C_noret_decl(f_4917)
static void C_ccall f_4917(C_word c,C_word *av) C_noret;
C_noret_decl(f_4929)
static void C_ccall f_4929(C_word c,C_word *av) C_noret;
C_noret_decl(f_3401)
static void C_ccall f_3401(C_word c,C_word *av) C_noret;
C_noret_decl(f_6774)
static void C_ccall f_6774(C_word c,C_word *av) C_noret;
C_noret_decl(f_6017)
static void C_ccall f_6017(C_word c,C_word *av) C_noret;
C_noret_decl(f_3421)
static C_word C_fcall f_3421(C_word t0,C_word t1);
C_noret_decl(f_6754)
static void C_ccall f_6754(C_word c,C_word *av) C_noret;
C_noret_decl(f_6913)
static void C_ccall f_6913(C_word c,C_word *av) C_noret;
C_noret_decl(f_6025)
static void C_ccall f_6025(C_word c,C_word *av) C_noret;
C_noret_decl(f_5480)
static void C_fcall f_5480(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5486)
static void C_fcall f_5486(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3341)
static void C_ccall f_3341(C_word c,C_word *av) C_noret;
C_noret_decl(f_2011)
static void C_ccall f_2011(C_word c,C_word *av) C_noret;
C_noret_decl(f_6000)
static void C_ccall f_6000(C_word c,C_word *av) C_noret;
C_noret_decl(f_2042)
static void C_ccall f_2042(C_word c,C_word *av) C_noret;
C_noret_decl(f_2701)
static void C_ccall f_2701(C_word c,C_word *av) C_noret;
C_noret_decl(f_2708)
static void C_ccall f_2708(C_word c,C_word *av) C_noret;
C_noret_decl(f_3346)
static void C_fcall f_3346(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5417)
static void C_ccall f_5417(C_word c,C_word *av) C_noret;
C_noret_decl(f_4548)
static void C_ccall f_4548(C_word c,C_word *av) C_noret;
C_noret_decl(f_3356)
static void C_ccall f_3356(C_word c,C_word *av) C_noret;
C_noret_decl(f_2653)
static void C_ccall f_2653(C_word c,C_word *av) C_noret;
C_noret_decl(f_4938)
static void C_ccall f_4938(C_word c,C_word *av) C_noret;
C_noret_decl(f_4935)
static void C_ccall f_4935(C_word c,C_word *av) C_noret;
C_noret_decl(f_6721)
static void C_fcall f_6721(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2024)
static void C_ccall f_2024(C_word c,C_word *av) C_noret;
C_noret_decl(f_4991)
static void C_ccall f_4991(C_word c,C_word *av) C_noret;
C_noret_decl(f_4820)
static void C_ccall f_4820(C_word c,C_word *av) C_noret;
C_noret_decl(f_4994)
static void C_ccall f_4994(C_word c,C_word *av) C_noret;
C_noret_decl(f_2729)
static void C_ccall f_2729(C_word c,C_word *av) C_noret;
C_noret_decl(f_4531)
static void C_ccall f_4531(C_word c,C_word *av) C_noret;
C_noret_decl(f_2643)
static void C_fcall f_2643(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4329)
static void C_fcall f_4329(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3486)
static void C_ccall f_3486(C_word c,C_word *av) C_noret;
C_noret_decl(f_3488)
static void C_fcall f_3488(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2710)
static void C_ccall f_2710(C_word c,C_word *av) C_noret;
C_noret_decl(f_2714)
static void C_ccall f_2714(C_word c,C_word *av) C_noret;
C_noret_decl(f_4985)
static void C_ccall f_4985(C_word c,C_word *av) C_noret;
C_noret_decl(f_4817)
static void C_ccall f_4817(C_word c,C_word *av) C_noret;
C_noret_decl(f_4997)
static void C_ccall f_4997(C_word c,C_word *av) C_noret;
C_noret_decl(f_4524)
static void C_ccall f_4524(C_word c,C_word *av) C_noret;
C_noret_decl(f_2638)
static void C_ccall f_2638(C_word c,C_word *av) C_noret;
C_noret_decl(f_2632)
static void C_ccall f_2632(C_word c,C_word *av) C_noret;
C_noret_decl(f_6705)
static void C_ccall f_6705(C_word c,C_word *av) C_noret;
C_noret_decl(f_4972)
static void C_fcall f_4972(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4988)
static void C_ccall f_4988(C_word c,C_word *av) C_noret;
C_noret_decl(f_5226)
static void C_fcall f_5226(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2628)
static void C_ccall f_2628(C_word c,C_word *av) C_noret;
C_noret_decl(f_2621)
static void C_ccall f_2621(C_word c,C_word *av) C_noret;
C_noret_decl(f_2622)
static void C_fcall f_2622(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6709)
static void C_ccall f_6709(C_word c,C_word *av) C_noret;
C_noret_decl(f_5223)
static void C_ccall f_5223(C_word c,C_word *av) C_noret;
C_noret_decl(f_4302)
static void C_ccall f_4302(C_word c,C_word *av) C_noret;
C_noret_decl(f_6517)
static void C_ccall f_6517(C_word c,C_word *av) C_noret;
C_noret_decl(f_6511)
static void C_ccall f_6511(C_word c,C_word *av) C_noret;
C_noret_decl(f_4502)
static void C_fcall f_4502(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2612)
static void C_ccall f_2612(C_word c,C_word *av) C_noret;
C_noret_decl(f_2358)
static void C_ccall f_2358(C_word c,C_word *av) C_noret;
C_noret_decl(f_6762)
static void C_ccall f_6762(C_word c,C_word *av) C_noret;
C_noret_decl(f_4339)
static void C_ccall f_4339(C_word c,C_word *av) C_noret;
C_noret_decl(f_6525)
static void C_fcall f_6525(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2767)
static void C_ccall f_2767(C_word c,C_word *av) C_noret;
C_noret_decl(f_2763)
static void C_ccall f_2763(C_word c,C_word *av) C_noret;
C_noret_decl(f_6520)
static void C_ccall f_6520(C_word c,C_word *av) C_noret;
C_noret_decl(f_4967)
static void C_ccall f_4967(C_word c,C_word *av) C_noret;
C_noret_decl(f_2308)
static void C_ccall f_2308(C_word c,C_word *av) C_noret;
C_noret_decl(f_5203)
static void C_ccall f_5203(C_word c,C_word *av) C_noret;
C_noret_decl(f_6734)
static void C_ccall f_6734(C_word c,C_word *av) C_noret;
C_noret_decl(f_2437)
static void C_fcall f_2437(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4944)
static void C_ccall f_4944(C_word c,C_word *av) C_noret;
C_noret_decl(f_4941)
static void C_ccall f_4941(C_word c,C_word *av) C_noret;
C_noret_decl(f_2090)
static void C_fcall f_2090(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1878)
static void C_ccall f_1878(C_word c,C_word *av) C_noret;
C_noret_decl(f_4957)
static void C_fcall f_4957(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2421)
static void C_ccall f_2421(C_word c,C_word *av) C_noret;
C_noret_decl(f_4932)
static void C_ccall f_4932(C_word c,C_word *av) C_noret;
C_noret_decl(f_4807)
static void C_ccall f_4807(C_word c,C_word *av) C_noret;
C_noret_decl(f_6501)
static void C_ccall f_6501(C_word c,C_word *av) C_noret;
C_noret_decl(f_1887)
static void C_ccall f_1887(C_word c,C_word *av) C_noret;
C_noret_decl(f_2783)
static void C_ccall f_2783(C_word c,C_word *av) C_noret;
C_noret_decl(f_1881)
static void C_ccall f_1881(C_word c,C_word *av) C_noret;
C_noret_decl(f_6904)
static void C_ccall f_6904(C_word c,C_word *av) C_noret;
C_noret_decl(f_1884)
static void C_ccall f_1884(C_word c,C_word *av) C_noret;
C_noret_decl(f_6900)
static void C_ccall f_6900(C_word c,C_word *av) C_noret;
C_noret_decl(f_6711)
static void C_ccall f_6711(C_word c,C_word *av) C_noret;
C_noret_decl(f_2071)
static void C_ccall f_2071(C_word c,C_word *av) C_noret;
C_noret_decl(f_2077)
static void C_ccall f_2077(C_word c,C_word *av) C_noret;
C_noret_decl(f_2774)
static void C_ccall f_2774(C_word c,C_word *av) C_noret;
C_noret_decl(f_6561)
static void C_ccall f_6561(C_word c,C_word *av) C_noret;
C_noret_decl(f_2343)
static void C_ccall f_2343(C_word c,C_word *av) C_noret;
C_noret_decl(f_2795)
static void C_ccall f_2795(C_word c,C_word *av) C_noret;
C_noret_decl(f_6307)
static void C_ccall f_6307(C_word c,C_word *av) C_noret;
C_noret_decl(f_6301)
static void C_ccall f_6301(C_word c,C_word *av) C_noret;
C_noret_decl(f_3494)
static void C_ccall f_3494(C_word c,C_word *av) C_noret;
C_noret_decl(f_2745)
static void C_ccall f_2745(C_word c,C_word *av) C_noret;
C_noret_decl(f_4846)
static void C_ccall f_4846(C_word c,C_word *av) C_noret;
C_noret_decl(f_4848)
static void C_fcall f_4848(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6314)
static void C_ccall f_6314(C_word c,C_word *av) C_noret;
C_noret_decl(f_3800)
static void C_fcall f_3800(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2365)
static void C_ccall f_2365(C_word c,C_word *av) C_noret;
C_noret_decl(f_2454)
static void C_ccall f_2454(C_word c,C_word *av) C_noret;
C_noret_decl(f_3816)
static void C_ccall f_3816(C_word c,C_word *av) C_noret;
C_noret_decl(f_6597)
static void C_ccall f_6597(C_word c,C_word *av) C_noret;
C_noret_decl(f_4839)
static void C_ccall f_4839(C_word c,C_word *av) C_noret;
C_noret_decl(f_1890)
static void C_ccall f_1890(C_word c,C_word *av) C_noret;
C_noret_decl(f_4835)
static void C_ccall f_4835(C_word c,C_word *av) C_noret;
C_noret_decl(f_3810)
static void C_ccall f_3810(C_word c,C_word *av) C_noret;
C_noret_decl(f_3813)
static void C_ccall f_3813(C_word c,C_word *av) C_noret;
C_noret_decl(f_5295)
static void C_ccall f_5295(C_word c,C_word *av) C_noret;
C_noret_decl(f_5729)
static void C_ccall f_5729(C_word c,C_word *av) C_noret;
C_noret_decl(f_3825)
static void C_ccall f_3825(C_word c,C_word *av) C_noret;
C_noret_decl(f_2061)
static void C_fcall f_2061(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2068)
static void C_ccall f_2068(C_word c,C_word *av) C_noret;
C_noret_decl(f_4577)
static void C_ccall f_4577(C_word c,C_word *av) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word *av) C_noret;
C_noret_decl(f_5285)
static void C_fcall f_5285(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6570)
static void C_ccall f_6570(C_word c,C_word *av) C_noret;
C_noret_decl(f_6576)
static void C_ccall f_6576(C_word c,C_word *av) C_noret;
C_noret_decl(f_6579)
static void C_ccall f_6579(C_word c,C_word *av) C_noret;
C_noret_decl(f_4567)
static void C_fcall f_4567(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6347)
static void C_ccall f_6347(C_word c,C_word *av) C_noret;
C_noret_decl(f_5270)
static void C_ccall f_5270(C_word c,C_word *av) C_noret;
C_noret_decl(f_2371)
static void C_ccall f_2371(C_word c,C_word *av) C_noret;
C_noret_decl(f_2677)
static void C_ccall f_2677(C_word c,C_word *av) C_noret;
C_noret_decl(f_5279)
static void C_fcall f_5279(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5700)
static void C_fcall f_5700(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5708)
static void C_fcall f_5708(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4883)
static void C_fcall f_4883(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6582)
static void C_ccall f_6582(C_word c,C_word *av) C_noret;
C_noret_decl(f_6585)
static void C_ccall f_6585(C_word c,C_word *av) C_noret;
C_noret_decl(f_6588)
static void C_ccall f_6588(C_word c,C_word *av) C_noret;
C_noret_decl(f_6356)
static void C_fcall f_6356(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2668)
static void C_ccall f_2668(C_word c,C_word *av) C_noret;
C_noret_decl(f_3580)
static void C_ccall f_3580(C_word c,C_word *av) C_noret;
C_noret_decl(f_4874)
static void C_fcall f_4874(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3858)
static void C_ccall f_3858(C_word c,C_word *av) C_noret;
C_noret_decl(f_2826)
static void C_ccall f_2826(C_word c,C_word *av) C_noret;
C_noret_decl(f_2318)
static void C_fcall f_2318(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3861)
static void C_ccall f_3861(C_word c,C_word *av) C_noret;
C_noret_decl(f_5245)
static void C_fcall f_5245(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3873)
static void C_fcall f_3873(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3876)
static void C_ccall f_3876(C_word c,C_word *av) C_noret;
C_noret_decl(f_2807)
static void C_ccall f_2807(C_word c,C_word *av) C_noret;
C_noret_decl(f_6381)
static void C_ccall f_6381(C_word c,C_word *av) C_noret;
C_noret_decl(f_5230)
static void C_ccall f_5230(C_word c,C_word *av) C_noret;
C_noret_decl(f_5233)
static void C_ccall f_5233(C_word c,C_word *av) C_noret;
C_noret_decl(f_5745)
static void C_ccall f_5745(C_word c,C_word *av) C_noret;
C_noret_decl(f_3885)
static void C_fcall f_3885(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6390)
static void C_fcall f_6390(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3319)
static void C_ccall f_3319(C_word c,C_word *av) C_noret;
C_noret_decl(f_3376)
static void C_fcall f_3376(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3374)
static void C_ccall f_3374(C_word c,C_word *av) C_noret;
C_noret_decl(f_2894)
static void C_fcall f_2894(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4366)
static void C_ccall f_4366(C_word c,C_word *av) C_noret;
C_noret_decl(f_5792)
static void C_fcall f_5792(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5790)
static void C_ccall f_5790(C_word c,C_word *av) C_noret;
C_noret_decl(f_2848)
static void C_ccall f_2848(C_word c,C_word *av) C_noret;
C_noret_decl(f_5783)
static void C_ccall f_5783(C_word c,C_word *av) C_noret;
C_noret_decl(f_4392)
static void C_ccall f_4392(C_word c,C_word *av) C_noret;
C_noret_decl(f_5776)
static void C_fcall f_5776(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5770)
static void C_ccall f_5770(C_word c,C_word *av) C_noret;
C_noret_decl(f_2492)
static void C_ccall f_2492(C_word c,C_word *av) C_noret;
C_noret_decl(f_2495)
static void C_ccall f_2495(C_word c,C_word *av) C_noret;
C_noret_decl(f_2498)
static void C_ccall f_2498(C_word c,C_word *av) C_noret;
C_noret_decl(f_6550)
static void C_ccall f_6550(C_word c,C_word *av) C_noret;
C_noret_decl(f_2391)
static C_word C_fcall f_2391(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_2483)
static void C_ccall f_2483(C_word c,C_word *av) C_noret;
C_noret_decl(f_4370)
static void C_fcall f_4370(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2851)
static void C_ccall f_2851(C_word c,C_word *av) C_noret;
C_noret_decl(f_2854)
static void C_ccall f_2854(C_word c,C_word *av) C_noret;
C_noret_decl(f_2889)
static void C_ccall f_2889(C_word c,C_word *av) C_noret;
C_noret_decl(f_2839)
static void C_ccall f_2839(C_word c,C_word *av) C_noret;
C_noret_decl(f_4384)
static void C_fcall f_4384(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3701)
static void C_ccall f_3701(C_word c,C_word *av) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867(C_word c,C_word *av) C_noret;
C_noret_decl(f_2691)
static void C_ccall f_2691(C_word c,C_word *av) C_noret;
C_noret_decl(f_2697)
static void C_ccall f_2697(C_word c,C_word *av) C_noret;
C_noret_decl(f_2682)
static void C_ccall f_2682(C_word c,C_word *av) C_noret;
C_noret_decl(f_2686)
static void C_ccall f_2686(C_word c,C_word *av) C_noret;
C_noret_decl(f_4851)
static void C_fcall f_4851(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4857)
static void C_ccall f_4857(C_word c,C_word *av) C_noret;
C_noret_decl(f_3849)
static void C_ccall f_3849(C_word c,C_word *av) C_noret;
C_noret_decl(f_5551)
static void C_fcall f_5551(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6322)
static void C_fcall f_6322(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6320)
static void C_ccall f_6320(C_word c,C_word *av) C_noret;
C_noret_decl(f_5763)
static void C_ccall f_5763(C_word c,C_word *av) C_noret;
C_noret_decl(f_5547)
static void C_ccall f_5547(C_word c,C_word *av) C_noret;
C_noret_decl(f_5543)
static void C_ccall f_5543(C_word c,C_word *av) C_noret;
C_noret_decl(f_5757)
static void C_ccall f_5757(C_word c,C_word *av) C_noret;
C_noret_decl(f_2472)
static void C_ccall f_2472(C_word c,C_word *av) C_noret;
C_noret_decl(f_4132)
static void C_ccall f_4132(C_word c,C_word *av) C_noret;
C_noret_decl(f_2479)
static void C_ccall f_2479(C_word c,C_word *av) C_noret;
C_noret_decl(f_4138)
static void C_ccall f_4138(C_word c,C_word *av) C_noret;
C_noret_decl(f_3795)
static void C_ccall f_3795(C_word c,C_word *av) C_noret;
C_noret_decl(f_4126)
static void C_ccall f_4126(C_word c,C_word *av) C_noret;
C_noret_decl(f_2469)
static void C_ccall f_2469(C_word c,C_word *av) C_noret;
C_noret_decl(f_5522)
static void C_ccall f_5522(C_word c,C_word *av) C_noret;
C_noret_decl(f_3780)
static void C_ccall f_3780(C_word c,C_word *av) C_noret;
C_noret_decl(f_3777)
static void C_ccall f_3777(C_word c,C_word *av) C_noret;
C_noret_decl(f_5508)
static void C_fcall f_5508(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3783)
static void C_ccall f_3783(C_word c,C_word *av) C_noret;
C_noret_decl(f_5319)
static void C_ccall f_5319(C_word c,C_word *av) C_noret;
C_noret_decl(f_5316)
static void C_ccall f_5316(C_word c,C_word *av) C_noret;
C_noret_decl(f_5310)
static void C_ccall f_5310(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_5313)
static void C_ccall f_5313(C_word c,C_word *av) C_noret;
C_noret_decl(f_3768)
static void C_ccall f_3768(C_word c,C_word *av) C_noret;
C_noret_decl(f_3761)
static void C_ccall f_3761(C_word c,C_word *av) C_noret;
C_noret_decl(f_5355)
static void C_ccall f_5355(C_word c,C_word *av) C_noret;
C_noret_decl(f_5590)
static void C_ccall f_5590(C_word c,C_word *av) C_noret;
C_noret_decl(f_5598)
static void C_ccall f_5598(C_word c,C_word *av) C_noret;
C_noret_decl(f_4185)
static void C_fcall f_4185(C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_4177)
static void C_ccall trf_4177(C_word c,C_word *av) C_noret;
static void C_ccall trf_4177(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4177(t0,t1,t2);}

C_noret_decl(trf_3147)
static void C_ccall trf_3147(C_word c,C_word *av) C_noret;
static void C_ccall trf_3147(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3147(t0,t1);}

C_noret_decl(trf_3139)
static void C_ccall trf_3139(C_word c,C_word *av) C_noret;
static void C_ccall trf_3139(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3139(t0,t1,t2);}

C_noret_decl(trf_5900)
static void C_ccall trf_5900(C_word c,C_word *av) C_noret;
static void C_ccall trf_5900(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5900(t0,t1);}

C_noret_decl(trf_5905)
static void C_ccall trf_5905(C_word c,C_word *av) C_noret;
static void C_ccall trf_5905(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5905(t0,t1,t2);}

C_noret_decl(trf_5364)
static void C_ccall trf_5364(C_word c,C_word *av) C_noret;
static void C_ccall trf_5364(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5364(t0,t1,t2,t3);}

C_noret_decl(trf_3180)
static void C_ccall trf_3180(C_word c,C_word *av) C_noret;
static void C_ccall trf_3180(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3180(t0,t1,t2);}

C_noret_decl(trf_3161)
static void C_ccall trf_3161(C_word c,C_word *av) C_noret;
static void C_ccall trf_3161(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3161(t0,t1);}

C_noret_decl(trf_2229)
static void C_ccall trf_2229(C_word c,C_word *av) C_noret;
static void C_ccall trf_2229(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2229(t0,t1);}

C_noret_decl(trf_4411)
static void C_ccall trf_4411(C_word c,C_word *av) C_noret;
static void C_ccall trf_4411(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4411(t0,t1,t2);}

C_noret_decl(trf_3197)
static void C_ccall trf_3197(C_word c,C_word *av) C_noret;
static void C_ccall trf_3197(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3197(t0,t1);}

C_noret_decl(trf_2219)
static void C_ccall trf_2219(C_word c,C_word *av) C_noret;
static void C_ccall trf_2219(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2219(t0,t1,t2);}

C_noret_decl(trf_2169)
static void C_ccall trf_2169(C_word c,C_word *av) C_noret;
static void C_ccall trf_2169(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2169(t0,t1,t2);}

C_noret_decl(trf_6852)
static void C_ccall trf_6852(C_word c,C_word *av) C_noret;
static void C_ccall trf_6852(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6852(t0,t1,t2);}

C_noret_decl(trf_5845)
static void C_ccall trf_5845(C_word c,C_word *av) C_noret;
static void C_ccall trf_5845(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5845(t0,t1);}

C_noret_decl(trf_2274)
static void C_ccall trf_2274(C_word c,C_word *av) C_noret;
static void C_ccall trf_2274(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2274(t0,t1,t2);}

C_noret_decl(trf_5192)
static void C_ccall trf_5192(C_word c,C_word *av) C_noret;
static void C_ccall trf_5192(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5192(t0,t1,t2);}

C_noret_decl(trf_5190)
static void C_ccall trf_5190(C_word c,C_word *av) C_noret;
static void C_ccall trf_5190(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5190(t0,t1);}

C_noret_decl(trf_4645)
static void C_ccall trf_4645(C_word c,C_word *av) C_noret;
static void C_ccall trf_4645(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4645(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4648)
static void C_ccall trf_4648(C_word c,C_word *av) C_noret;
static void C_ccall trf_4648(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4648(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5839)
static void C_ccall trf_5839(C_word c,C_word *av) C_noret;
static void C_ccall trf_5839(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5839(t0,t1);}

C_noret_decl(trf_4712)
static void C_ccall trf_4712(C_word c,C_word *av) C_noret;
static void C_ccall trf_4712(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4712(t0,t1,t2,t3);}

C_noret_decl(trf_2112)
static void C_ccall trf_2112(C_word c,C_word *av) C_noret;
static void C_ccall trf_2112(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2112(t0,t1,t2);}

C_noret_decl(trf_5133)
static void C_ccall trf_5133(C_word c,C_word *av) C_noret;
static void C_ccall trf_5133(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5133(t0,t1);}

C_noret_decl(trf_4215)
static void C_ccall trf_4215(C_word c,C_word *av) C_noret;
static void C_ccall trf_4215(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4215(t0,t1,t2);}

C_noret_decl(trf_4797)
static void C_ccall trf_4797(C_word c,C_word *av) C_noret;
static void C_ccall trf_4797(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4797(t0,t1,t2);}

C_noret_decl(trf_6824)
static void C_ccall trf_6824(C_word c,C_word *av) C_noret;
static void C_ccall trf_6824(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6824(t0,t1);}

C_noret_decl(trf_6436)
static void C_ccall trf_6436(C_word c,C_word *av) C_noret;
static void C_ccall trf_6436(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6436(t0,t1,t2);}

C_noret_decl(trf_4261)
static void C_ccall trf_4261(C_word c,C_word *av) C_noret;
static void C_ccall trf_4261(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4261(t0,t1,t2);}

C_noret_decl(trf_4763)
static void C_ccall trf_4763(C_word c,C_word *av) C_noret;
static void C_ccall trf_4763(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4763(t0,t1,t2,t3);}

C_noret_decl(trf_6413)
static void C_ccall trf_6413(C_word c,C_word *av) C_noret;
static void C_ccall trf_6413(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6413(t0,t1,t2);}

C_noret_decl(trf_1941)
static void C_ccall trf_1941(C_word c,C_word *av) C_noret;
static void C_ccall trf_1941(C_word c,C_word *av){
C_word t0=av[0];
f_1941(t0);}

C_noret_decl(trf_4274)
static void C_ccall trf_4274(C_word c,C_word *av) C_noret;
static void C_ccall trf_4274(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4274(t0,t1,t2);}

C_noret_decl(trf_4497)
static void C_ccall trf_4497(C_word c,C_word *av) C_noret;
static void C_ccall trf_4497(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4497(t0,t1,t2);}

C_noret_decl(trf_4499)
static void C_ccall trf_4499(C_word c,C_word *av) C_noret;
static void C_ccall trf_4499(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4499(t0,t1,t2,t3);}

C_noret_decl(trf_5425)
static void C_ccall trf_5425(C_word c,C_word *av) C_noret;
static void C_ccall trf_5425(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5425(t0,t1,t2);}

C_noret_decl(trf_1911)
static void C_ccall trf_1911(C_word c,C_word *av) C_noret;
static void C_ccall trf_1911(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1911(t0,t1);}

C_noret_decl(trf_5431)
static void C_ccall trf_5431(C_word c,C_word *av) C_noret;
static void C_ccall trf_5431(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5431(t0,t1,t2);}

C_noret_decl(trf_5443)
static void C_ccall trf_5443(C_word c,C_word *av) C_noret;
static void C_ccall trf_5443(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5443(t0,t1,t2);}

C_noret_decl(trf_2587)
static void C_ccall trf_2587(C_word c,C_word *av) C_noret;
static void C_ccall trf_2587(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2587(t0,t1,t2);}

C_noret_decl(trf_4678)
static void C_ccall trf_4678(C_word c,C_word *av) C_noret;
static void C_ccall trf_4678(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4678(t0,t1,t2);}

C_noret_decl(trf_5683)
static void C_ccall trf_5683(C_word c,C_word *av) C_noret;
static void C_ccall trf_5683(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5683(t0,t1);}

C_noret_decl(trf_3030)
static void C_ccall trf_3030(C_word c,C_word *av) C_noret;
static void C_ccall trf_3030(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3030(t0,t1,t2);}

C_noret_decl(trf_5031)
static void C_ccall trf_5031(C_word c,C_word *av) C_noret;
static void C_ccall trf_5031(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5031(t0,t1,t2,t3);}

C_noret_decl(trf_5671)
static void C_ccall trf_5671(C_word c,C_word *av) C_noret;
static void C_ccall trf_5671(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5671(t0,t1);}

C_noret_decl(trf_5677)
static void C_ccall trf_5677(C_word c,C_word *av) C_noret;
static void C_ccall trf_5677(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5677(t0,t1);}

C_noret_decl(trf_4610)
static void C_ccall trf_4610(C_word c,C_word *av) C_noret;
static void C_ccall trf_4610(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4610(t0,t1);}

C_noret_decl(trf_4605)
static void C_ccall trf_4605(C_word c,C_word *av) C_noret;
static void C_ccall trf_4605(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4605(t0,t1,t2);}

C_noret_decl(trf_6133)
static void C_ccall trf_6133(C_word c,C_word *av) C_noret;
static void C_ccall trf_6133(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6133(t0,t1,t2);}

C_noret_decl(trf_3098)
static void C_ccall trf_3098(C_word c,C_word *av) C_noret;
static void C_ccall trf_3098(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3098(t0,t1,t2,t3);}

C_noret_decl(trf_5694)
static void C_ccall trf_5694(C_word c,C_word *av) C_noret;
static void C_ccall trf_5694(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5694(t0,t1,t2);}

C_noret_decl(trf_3538)
static void C_ccall trf_3538(C_word c,C_word *av) C_noret;
static void C_ccall trf_3538(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3538(t0,t1,t2,t3);}

C_noret_decl(trf_3506)
static void C_ccall trf_3506(C_word c,C_word *av) C_noret;
static void C_ccall trf_3506(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3506(t0,t1,t2);}

C_noret_decl(trf_5092)
static void C_ccall trf_5092(C_word c,C_word *av) C_noret;
static void C_ccall trf_5092(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5092(t0,t1);}

C_noret_decl(trf_5480)
static void C_ccall trf_5480(C_word c,C_word *av) C_noret;
static void C_ccall trf_5480(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5480(t0,t1);}

C_noret_decl(trf_5486)
static void C_ccall trf_5486(C_word c,C_word *av) C_noret;
static void C_ccall trf_5486(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5486(t0,t1,t2);}

C_noret_decl(trf_3346)
static void C_ccall trf_3346(C_word c,C_word *av) C_noret;
static void C_ccall trf_3346(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3346(t0,t1,t2);}

C_noret_decl(trf_6721)
static void C_ccall trf_6721(C_word c,C_word *av) C_noret;
static void C_ccall trf_6721(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6721(t0,t1);}

C_noret_decl(trf_2643)
static void C_ccall trf_2643(C_word c,C_word *av) C_noret;
static void C_ccall trf_2643(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2643(t0,t1,t2);}

C_noret_decl(trf_4329)
static void C_ccall trf_4329(C_word c,C_word *av) C_noret;
static void C_ccall trf_4329(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4329(t0,t1,t2);}

C_noret_decl(trf_3488)
static void C_ccall trf_3488(C_word c,C_word *av) C_noret;
static void C_ccall trf_3488(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3488(t0,t1,t2,t3);}

C_noret_decl(trf_4972)
static void C_ccall trf_4972(C_word c,C_word *av) C_noret;
static void C_ccall trf_4972(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4972(t0,t1,t2,t3);}

C_noret_decl(trf_5226)
static void C_ccall trf_5226(C_word c,C_word *av) C_noret;
static void C_ccall trf_5226(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5226(t0,t1,t2);}

C_noret_decl(trf_2622)
static void C_ccall trf_2622(C_word c,C_word *av) C_noret;
static void C_ccall trf_2622(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2622(t0,t1,t2);}

C_noret_decl(trf_4502)
static void C_ccall trf_4502(C_word c,C_word *av) C_noret;
static void C_ccall trf_4502(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4502(t0,t1,t2);}

C_noret_decl(trf_6525)
static void C_ccall trf_6525(C_word c,C_word *av) C_noret;
static void C_ccall trf_6525(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6525(t0,t1,t2);}

C_noret_decl(trf_2437)
static void C_ccall trf_2437(C_word c,C_word *av) C_noret;
static void C_ccall trf_2437(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2437(t0,t1);}

C_noret_decl(trf_2090)
static void C_ccall trf_2090(C_word c,C_word *av) C_noret;
static void C_ccall trf_2090(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2090(t0,t1,t2);}

C_noret_decl(trf_4957)
static void C_ccall trf_4957(C_word c,C_word *av) C_noret;
static void C_ccall trf_4957(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4957(t0,t1,t2,t3);}

C_noret_decl(trf_4848)
static void C_ccall trf_4848(C_word c,C_word *av) C_noret;
static void C_ccall trf_4848(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4848(t0,t1);}

C_noret_decl(trf_3800)
static void C_ccall trf_3800(C_word c,C_word *av) C_noret;
static void C_ccall trf_3800(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3800(t0,t1,t2);}

C_noret_decl(trf_2061)
static void C_ccall trf_2061(C_word c,C_word *av) C_noret;
static void C_ccall trf_2061(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2061(t0,t1);}

C_noret_decl(trf_5285)
static void C_ccall trf_5285(C_word c,C_word *av) C_noret;
static void C_ccall trf_5285(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5285(t0,t1,t2,t3);}

C_noret_decl(trf_4567)
static void C_ccall trf_4567(C_word c,C_word *av) C_noret;
static void C_ccall trf_4567(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4567(t0,t1);}

C_noret_decl(trf_5279)
static void C_ccall trf_5279(C_word c,C_word *av) C_noret;
static void C_ccall trf_5279(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5279(t0,t1,t2,t3);}

C_noret_decl(trf_5700)
static void C_ccall trf_5700(C_word c,C_word *av) C_noret;
static void C_ccall trf_5700(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5700(t0,t1,t2);}

C_noret_decl(trf_5708)
static void C_ccall trf_5708(C_word c,C_word *av) C_noret;
static void C_ccall trf_5708(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5708(t0,t1,t2);}

C_noret_decl(trf_4883)
static void C_ccall trf_4883(C_word c,C_word *av) C_noret;
static void C_ccall trf_4883(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4883(t0,t1,t2,t3);}

C_noret_decl(trf_6356)
static void C_ccall trf_6356(C_word c,C_word *av) C_noret;
static void C_ccall trf_6356(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6356(t0,t1,t2);}

C_noret_decl(trf_4874)
static void C_ccall trf_4874(C_word c,C_word *av) C_noret;
static void C_ccall trf_4874(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4874(t0,t1);}

C_noret_decl(trf_2318)
static void C_ccall trf_2318(C_word c,C_word *av) C_noret;
static void C_ccall trf_2318(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2318(t0,t1);}

C_noret_decl(trf_5245)
static void C_ccall trf_5245(C_word c,C_word *av) C_noret;
static void C_ccall trf_5245(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5245(t0,t1,t2);}

C_noret_decl(trf_3873)
static void C_ccall trf_3873(C_word c,C_word *av) C_noret;
static void C_ccall trf_3873(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3873(t0,t1);}

C_noret_decl(trf_3885)
static void C_ccall trf_3885(C_word c,C_word *av) C_noret;
static void C_ccall trf_3885(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3885(t0,t1,t2,t3);}

C_noret_decl(trf_6390)
static void C_ccall trf_6390(C_word c,C_word *av) C_noret;
static void C_ccall trf_6390(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6390(t0,t1,t2);}

C_noret_decl(trf_3376)
static void C_ccall trf_3376(C_word c,C_word *av) C_noret;
static void C_ccall trf_3376(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3376(t0,t1,t2);}

C_noret_decl(trf_2894)
static void C_ccall trf_2894(C_word c,C_word *av) C_noret;
static void C_ccall trf_2894(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2894(t0,t1,t2);}

C_noret_decl(trf_5792)
static void C_ccall trf_5792(C_word c,C_word *av) C_noret;
static void C_ccall trf_5792(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5792(t0,t1,t2);}

C_noret_decl(trf_5776)
static void C_ccall trf_5776(C_word c,C_word *av) C_noret;
static void C_ccall trf_5776(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5776(t0,t1,t2);}

C_noret_decl(trf_4370)
static void C_ccall trf_4370(C_word c,C_word *av) C_noret;
static void C_ccall trf_4370(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4370(t0,t1,t2);}

C_noret_decl(trf_4384)
static void C_ccall trf_4384(C_word c,C_word *av) C_noret;
static void C_ccall trf_4384(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4384(t0,t1,t2);}

C_noret_decl(trf_4851)
static void C_ccall trf_4851(C_word c,C_word *av) C_noret;
static void C_ccall trf_4851(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4851(t0,t1);}

C_noret_decl(trf_5551)
static void C_ccall trf_5551(C_word c,C_word *av) C_noret;
static void C_ccall trf_5551(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5551(t0,t1,t2);}

C_noret_decl(trf_6322)
static void C_ccall trf_6322(C_word c,C_word *av) C_noret;
static void C_ccall trf_6322(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6322(t0,t1,t2);}

C_noret_decl(trf_5508)
static void C_ccall trf_5508(C_word c,C_word *av) C_noret;
static void C_ccall trf_5508(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5508(t0,t1);}

C_noret_decl(trf_4185)
static void C_ccall trf_4185(C_word c,C_word *av) C_noret;
static void C_ccall trf_4185(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4185(t0,t1,t2);}

/* doloop574 in k4164 in k4161 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in ... */
static void C_fcall f_4177(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4177,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4185,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
t5=C_i_check_list_2(t4,lf[106]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4206,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4215,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_4215(t10,t6,t4);}}

/* k4149 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 in ... */
static void C_ccall f_4151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4151,2,av);}
/* csi.scm:689: fprintf */
t2=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[218];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3149,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3153,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:475: gc */
t3=C_fast_retrieve(lf[146]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_3147(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_3147,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:473: with-output-to-port */
t3=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t3;
av2[1]=((C_word*)t0)[6];
av2[2]=t1;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4164 in k4161 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in ... */
static void C_ccall f_4166(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4166,2,av);}
a=C_alloc(8);
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=t2;
t4=C_block_size(t3);
t5=t4;
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4177,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_4177(t9,((C_word*)t0)[4],C_fix(0));}

/* k4161 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 in ... */
static void C_ccall f_4163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4163,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4166,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(4));
/* csi.scm:694: fprintf */
t4=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[222];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k6690 in k6687 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6692,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a6696 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6697,3,av);}
/* csi.scm:920: ##sys#user-interrupt-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[258]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[258]+1);
av2[1]=t1;
tp(2,av2);}}

/* k6693 in k6687 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6695,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* f7572 in k6458 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in ... */
static void C_ccall f7572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f7572,2,av);}
/* csi.scm:1047: case-sensitive */
t2=C_fast_retrieve(lf[312]);{
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

/* a3126 in a3120 in a3081 in a3063 in k2994 in k6681 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3127,2,av);}{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
C_apply_values(3,av2);}}

/* k3238 in k3235 in k3232 in k3229 in k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in ... */
static void C_ccall f_3240(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3240,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3243,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fudge(C_fix(15)))){
/* csi.scm:532: display */
t3=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[124];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a3120 in a3081 in a3063 in k2994 in k6681 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_3121,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3127,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:454: k353 */
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k3241 in k3238 in k3235 in k3232 in k3229 in k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in ... */
static void C_ccall f_3243(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3243,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3138(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3138,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_mutate2(&lf[68] /* (set! report ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3139,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t4=C_mutate2(&lf[147] /* (set! bytevector-data ...) */,lf[148]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3486,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:565: make-vector */
t6=*((C_word*)lf[379]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_fix(37);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_3139(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3139,3,t0,t1,t2);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3147,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=t3;
f_3147(t5,C_u_i_car(t4));}
else{
t4=t3;
f_3147(t4,*((C_word*)lf[91]+1));}}

/* k5916 in doloop1353 in k5898 in k5895 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in ... */
static void C_ccall f_5918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5918,2,av);}
/* csi.scm:1089: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[95]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[95]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[91]+1);
tp(4,av2);}}

/* k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3135,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3138,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
f_3138(2,av2);}}
else{
/* ##sys#peek-c-string */
t3=*((C_word*)lf[380]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_PREFIX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k3212 in k3195 in k3182 in g422 in k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in ... */
static void C_ccall f_3214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3214,2,av);}
/* csi.scm:495: display */
t2=*((C_word*)lf[99]+1);{
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

/* k6677 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6679,2,av);}
/* csi.scm:978: canonicalize-args */
f_5480(((C_word*)t0)[2],t1);}

/* k6673 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6675,2,av);}
/* csi.scm:997: append */
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
av2[3]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k6687 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6689,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6692,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6695,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[270]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[270]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6681 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6683(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6683,2,av);}
a=C_alloc(4);
t2=(C_truep(t1)?t1:lf[362]);
t3=((C_word*)t0)[2];
t4=t2;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2996,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:447: open-input-string */
t6=C_fast_retrieve(lf[273]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3229 in k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 in ... */
static void C_ccall f_3231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3231,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3234,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3259,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:512: machine-type */
t4=C_fast_retrieve(lf[140]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3232 in k3229 in k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in ... */
static void C_ccall f_3234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3234,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3237,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:530: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[95]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[91]+1);
tp(4,av2);}}

/* a5922 in doloop1353 in k5898 in k5895 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in ... */
static void C_ccall f_5923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5923,3,av);}
a=C_alloc(3);
t3=C_mutate2((C_word*)lf[70]+1 /* (set! ##sys#quit-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5926,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
/* csi.scm:1088: repl */
t4=C_fast_retrieve(lf[276]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=C_retrieve2(lf[56],"csi-eval");
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3235 in k3232 in k3229 in k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in ... */
static void C_ccall f_3237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3237,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3240,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fudge(C_fix(14)))){
/* csi.scm:531: display */
t3=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[125];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_3240(2,av2);}}}

/* ##sys#quit-hook in a5922 in doloop1353 in k5898 in k5895 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in ... */
static void C_ccall f_5926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5926,2,av);}
/* csi.scm:1087: k */
t2=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t2;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k3204 in k3195 in k3182 in g422 in k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in ... */
static void C_ccall f_3206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3206,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5898 in k5895 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in ... */
static void C_fcall f_5900(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_5900,2,t0,t1);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5905,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_5905(t5,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* doloop1353 in k5898 in k5895 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in ... */
static void C_fcall f_5905(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_5905,3,t0,t1,t2);}
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
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5918,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5923,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1085: call/cc */
t6=*((C_word*)lf[108]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}
else{
t4=C_i_car(((C_word*)t3)[1]);
t5=C_i_member(t4,lf[277]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5942,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=C_i_cdr(((C_word*)t3)[1]);
t20=t1;
t21=t7;
t1=t20;
t2=t21;
goto loop;}
else{
if(C_truep((C_truep(C_i_equalp(t4,lf[278]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[279]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[280]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[281]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[282]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[283]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[284]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))))){
t7=C_i_cdr(((C_word*)t3)[1]);
t8=C_set_block_item(t3,0,t7);
t9=C_i_cdr(((C_word*)t3)[1]);
t20=t1;
t21=t9;
t1=t20;
t2=t21;
goto loop;}
else{
t7=C_i_string_equal_p(lf[285],t4);
t8=(C_truep(t7)?t7:C_u_i_string_equal_p(lf[286],t4));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5971,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5985,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=C_i_cadr(((C_word*)t3)[1]);
/* csi.scm:1095: string->symbol */
t12=*((C_word*)lf[288]+1);{
C_word av2[3];
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
t9=C_u_i_string_equal_p(lf[289],t4);
t10=(C_truep(t9)?t9:C_u_i_string_equal_p(lf[290],t4));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6000,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t12=C_i_cadr(((C_word*)t3)[1]);
/* csi.scm:1098: evalstring */
f_5776(t11,t12,C_SCHEME_END_OF_LIST);}
else{
t11=C_u_i_string_equal_p(lf[291],t4);
t12=(C_truep(t11)?t11:C_u_i_string_equal_p(lf[292],t4));
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6017,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t14=C_i_cadr(((C_word*)t3)[1]);
t15=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6025,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1101: evalstring */
f_5776(t13,t14,C_a_i_list(&a,1,t15));}
else{
t13=C_u_i_string_equal_p(lf[293],t4);
t14=(C_truep(t13)?t13:C_u_i_string_equal_p(lf[294],t4));
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6040,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t16=C_i_cadr(((C_word*)t3)[1]);
t17=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6048,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1104: evalstring */
f_5776(t15,t16,C_a_i_list(&a,1,t17));}
else{
t15=(C_truep(((C_word*)t0)[5])?C_i_car(((C_word*)t0)[5]):C_SCHEME_FALSE);
t16=t15;
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6058,a[2]=t16,a[3]=t6,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_equalp(lf[298],t16))){
t18=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6109,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1108: ##sys#load */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[304]);
C_word av2[5];
av2[0]=*((C_word*)lf[304]+1);
av2[1]=t17;
av2[2]=t4;
av2[3]=t18;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}
else{
/* csi.scm:1108: ##sys#load */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[304]);
C_word av2[5];
av2[0]=*((C_word*)lf[304]+1);
av2[1]=t17;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}}}}}}}}}

/* k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_3159,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3161,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3176,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* csi.scm:479: printf */
t5=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[143];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5372 in for-each-loop915 in doloop901 in a5222 in k5188 in k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5374,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_5364(t4,((C_word*)t0)[5],t2,t3);}

/* k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3153,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:476: ##sys#symbol-table-info */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[145]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[145]+1);
av2[1]=t2;
tp(2,av2);}}

/* k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3156,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3159,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:477: memory-statistics */
t4=C_fast_retrieve(lf[144]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5360 in k5353 in doloop901 in a5222 in k5188 in k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5362,2,av);}
/* csi.scm:905: fail */
t2=((C_word*)t0)[2];
f_5226(t2,((C_word*)t0)[3],t1);}

/* for-each-loop915 in doloop901 in a5222 in k5188 in k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_5364(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5364,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5374,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* csi.scm:892: g916 */
t9=((C_word*)t0)[3];
f_5279(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k3289 in k3285 in k3281 in k3277 in k3273 in k3269 in k3265 in k3257 in k3229 in k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in ... */
static void C_ccall f_3291(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_3291,2,av);}
a=C_alloc(19);
t2=t1;
t3=C_i_vector_ref(((C_word*)t0)[2],C_fix(2));
t4=t3;
t5=C_i_vector_ref(((C_word*)t0)[3],C_fix(0));
t6=t5;
t7=C_fudge(C_fix(17));
t8=(C_truep(t7)?lf[128]:lf[129]);
t9=t8;
t10=C_i_vector_ref(((C_word*)t0)[3],C_fix(1));
t11=t10;
t12=C_i_vector_ref(((C_word*)t0)[3],C_fix(2));
t13=t12;
t14=C_fudge(C_fix(18));
t15=C_i_nequalp(C_fix(1),t14);
t16=(C_truep(t15)?lf[130]:lf[131]);
t17=t16;
t18=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_3319,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=t2,a[13]=t4,a[14]=t6,a[15]=t9,a[16]=t11,a[17]=t13,a[18]=t17,tmp=(C_word)a,a+=19,tmp);
/* csi.scm:529: argv */
t19=((C_word*)t0)[14];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t19;
av2[1]=t18;
((C_proc)(void*)(*((C_word*)t19+1)))(2,av2);}}

/* k6111 */
static void C_ccall f_6113(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6113,2,av);}
a=C_alloc(6);
t2=t1;
t3=C_i_string_length(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1114: flush-output */
t6=*((C_word*)lf[302]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=*((C_word*)lf[91]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6117 in k6111 */
static void C_ccall f_6119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6119,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6122,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1115: display */
t3=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[301];
av2[3]=*((C_word*)lf[299]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3182 in g422 in k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in ... */
static void C_ccall f_3184(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_3184,2,av);}
a=C_alloc(23);
t2=C_i_string_length(((C_word*)t0)[2]);
t3=C_a_i_minus(&a,2,C_fix(16),t2);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3197,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_less_or_equalp(((C_word*)t5)[1],C_fix(0)))){
t9=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t10=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t9);
t11=C_a_i_plus(&a,2,((C_word*)t5)[1],C_fix(18));
t12=C_set_block_item(t5,0,t11);
t13=t8;
f_3197(t13,t12);}
else{
t9=t8;
f_3197(t9,C_SCHEME_UNDEFINED);}}

/* g422 in k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 in ... */
static void C_fcall f_3180(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_3180,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3184,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:484: printf */
t4=*((C_word*)lf[84]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[123];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3265 in k3257 in k3229 in k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in ... */
static void C_ccall f_3267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3267,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3271,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* csi.scm:515: software-version */
t4=C_fast_retrieve(lf[138]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5969 in doloop1353 in k5898 in k5895 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in ... */
static void C_ccall f_5971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5971,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_u_i_cdr(t2));
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5905(t5,((C_word*)t0)[4],t4);}

/* k6120 in k6117 in k6111 */
static void C_ccall f_6122(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6122,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6125,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6133,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_6133(t6,t2,C_fix(0));}

/* k6123 in k6120 in k6117 in k6111 */
static void C_ccall f_6125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6125,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6128,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1122: newline */
t3=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=*((C_word*)lf[299]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6126 in k6123 in k6120 in k6117 in k6111 */
static void C_ccall f_6128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6128,2,av);}
/* csi.scm:1123: eval */
t2=C_fast_retrieve(lf[50]);{
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

/* k3113 in doloop361 in k3094 in a3087 in a3081 in a3063 in k2994 in k6681 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in ... */
static void C_ccall f_3115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3115,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)((C_word*)t0)[4])[1];
f_3098(t3,((C_word*)t0)[5],t1,t2);}

/* k3167 in shorten in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_3169,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_divide(&a,2,t1,C_fix(100));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2241 in history-add in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2243(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2243,2,av);}
t2=C_mutate2(&lf[38] /* (set! history-list ...) */,t1);
t3=((C_word*)t0)[2];
f_2229(t3,t2);}

/* k6660 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6662,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_member(lf[359],((C_word*)((C_word*)t0)[2])[1]);
t4=((C_word*)t0)[3];
f_5671(t4,(C_truep(t3)?C_i_set_cdr(t3,C_SCHEME_END_OF_LIST):C_SCHEME_FALSE));}

/* k3281 in k3277 in k3273 in k3269 in k3265 in k3257 in k3229 in k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in ... */
static void C_ccall f_3283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3283,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t4=C_i_vector_ref(((C_word*)t0)[2],C_fix(0));
/* csi.scm:521: shorten */
f_3161(t3,t4);}

/* k3606 in loop2 in k3527 in loop1 in k3499 in k3621 in descseq in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 in ... */
static void C_ccall f_3608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3608,2,av);}
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* csi.scm:596: loop2 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3538(t5,((C_word*)t0)[6],t3,t4);}
else{
/* csi.scm:597: loop2 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_3538(t3,((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[7]);}}

/* shorten in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_3161(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3161,2,t1,t2);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3169,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_times(&a,2,t2,C_fix(100));
/* csi.scm:478: truncate */
t5=*((C_word*)lf[120]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3179(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_3179,2,av);}
a=C_alloc(19);
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3180,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_check_list_2(t1,lf[106]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3231,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3346,a[2]=t8,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_3346(t10,t6,t1);}

/* k3285 in k3281 in k3277 in k3273 in k3269 in k3265 in k3257 in k3229 in k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in ... */
static void C_ccall f_3287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3287,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3291,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t2,a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t4=C_i_vector_ref(((C_word*)t0)[2],C_fix(1));
/* csi.scm:522: shorten */
f_3161(t3,t4);}

/* f_6109 in doloop1353 in k5898 in k5895 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in ... */
static void C_ccall f_6109(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6109,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6113,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6163,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1112: with-output-to-string */
t5=C_fast_retrieve(lf[303]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2145 in k2138 in k2135 in k2126 in k2114 in lookup-script-file in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2147,2,av);}
/* csi.scm:207: addext */
f_2061(((C_word*)t0)[3],t1);}

/* k2138 in k2135 in k2126 in k2114 in lookup-script-file in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2140,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2147,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2151,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:207: chop-separator */
t4=C_retrieve2(lf[23],"chop-separator");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
f_2011(3,av2);}}

/* k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3176(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_3176,2,av);}
a=C_alloc(25);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3179,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_fast_retrieve(lf[141]);
t8=C_fast_retrieve(lf[4]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3374,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3376,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3376(t13,t9,C_fast_retrieve(lf[4]));}

/* k5983 in doloop1353 in k5898 in k5895 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in ... */
static void C_ccall f_5985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_5985,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,1,t1);
t3=C_a_i_list(&a,3,lf[287],t2,C_SCHEME_TRUE);
/* csi.scm:1095: eval */
t4=C_fast_retrieve(lf[50]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3257 in k3229 in k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in ... */
static void C_ccall f_3259(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3259,2,av);}
a=C_alloc(10);
t2=t1;
t3=C_fudge(C_fix(3));
t4=(C_truep(t3)?lf[126]:lf[127]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3267,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t5,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* csi.scm:514: software-type */
t7=C_fast_retrieve(lf[139]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k3621 in descseq in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_3623,2,av);}
a=C_alloc(8);
t2=C_fixnum_difference(t1,((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3501,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
/* csi.scm:577: fprintf */
t5=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[159];
av2[4]=((C_word*)t0)[7];
av2[5]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3501(2,av2);}}}

/* k2227 in history-add in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_2229(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_2229,2,t0,t1);}
t2=C_i_vector_set(C_retrieve2(lf[38],"history-list"),C_retrieve2(lf[18],"history-count"),((C_word*)t0)[2]);
t3=C_fixnum_plus(C_retrieve2(lf[18],"history-count"),C_fix(1));
t4=lf[18] /* history-count */ =t3;;
t5=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k2135 in k2126 in k2114 in lookup-script-file in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2137(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2137,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2140,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=(C_truep(((C_word*)t0)[5])?C_i_foreign_block_argumentp(((C_word*)t0)[5]):C_SCHEME_FALSE);
t5=C_i_foreign_fixnum_argumentp(C_fix(256));
t6=stub63(t3,t4,t5);
/* csi.scm:189: ##sys#peek-nonnull-c-string */
t7=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t2;
av2[2]=t6;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2154,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:208: addext */
f_2061(t2,((C_word*)t0)[4]);}}

/* k5305 in doloop929 in g916 in doloop901 in a5222 in k5188 in k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5307(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5307,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5310,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:898: display */
t3=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[105];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t3=((C_word*)t0)[6];
t4=C_u_i_cdr(t3);
t5=((C_word*)((C_word*)t0)[7])[1];
f_5285(t5,((C_word*)t0)[8],t2,t4);}}

/* k3627 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3629,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=*((C_word*)lf[41]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3626(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,7)))){
C_save_and_reclaim((void *)f_3626,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3629,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_charp(((C_word*)t0)[3]))){
t3=C_fix(C_character_code(((C_word*)t0)[3]));
/* csi.scm:602: fprintf */
t4=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[160];
av2[4]=((C_word*)t0)[3];
av2[5]=t3;
av2[6]=t3;
av2[7]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(8,av2);}}
else{
switch(((C_word*)t0)[3]){
case C_SCHEME_TRUE:
/* csi.scm:603: fprintf */
t3=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[161];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}
case C_SCHEME_FALSE:
/* csi.scm:604: fprintf */
t3=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[162];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}
default:
if(C_truep(C_i_nullp(((C_word*)t0)[3]))){
/* csi.scm:605: fprintf */
t3=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[163];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
if(C_truep(C_eofp(((C_word*)t0)[3]))){
/* csi.scm:606: fprintf */
t3=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[164];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=*((C_word*)lf[41]+1);
t4=C_eqp(*((C_word*)lf[41]+1),((C_word*)t0)[3]);
if(C_truep(t4)){
/* csi.scm:607: fprintf */
t5=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[165];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3695,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:609: fprintf */
t6=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[167];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[3];
av2[7]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(8,av2);}}
else{
t5=C_slot(lf[168],C_fix(0));
t6=C_eqp(((C_word*)t0)[3],t5);
if(C_truep(t6)){
/* csi.scm:614: fprintf */
t7=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[169];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
if(C_truep(C_i_flonump(((C_word*)t0)[3]))){
/* csi.scm:615: fprintf */
t7=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[170];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
if(C_truep(C_i_numberp(((C_word*)t0)[3]))){
/* csi.scm:616: fprintf */
t7=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[171];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
/* csi.scm:617: descseq */
t7=((C_word*)t0)[5];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t2;
av2[2]=lf[172];
av2[3]=*((C_word*)lf[173]+1);
av2[4]=((C_word*)t0)[6];
av2[5]=C_fix(0);
f_3494(6,av2);}}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[3]))){
/* csi.scm:618: descseq */
t7=((C_word*)t0)[5];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t2;
av2[2]=lf[174];
av2[3]=*((C_word*)lf[173]+1);
av2[4]=*((C_word*)lf[175]+1);
av2[5]=C_fix(0);
f_3494(6,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3761,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* csi.scm:619: keyword? */
t8=C_fast_retrieve(lf[238]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}}}}}}}}}}}

/* k3273 in k3269 in k3265 in k3257 in k3229 in k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in ... */
static void C_ccall f_3275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3275,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3279,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* csi.scm:518: repository-path */
t4=C_fast_retrieve(lf[136]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3269 in k3265 in k3257 in k3229 in k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in ... */
static void C_ccall f_3271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_3271,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3275,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* csi.scm:516: build-platform */
t4=C_fast_retrieve(lf[137]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3277 in k3273 in k3269 in k3265 in k3257 in k3229 in k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in ... */
static void C_ccall f_3279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_3279,2,av);}
a=C_alloc(17);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3283,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3341,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:520: keyword-style */
t5=C_fast_retrieve(lf[135]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k6213 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in ... */
static void C_ccall f_6215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6215,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6218,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* csi.scm:1072: symbol-escape */
t3=C_fast_retrieve(lf[309]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* csi.scm:1071: display */
t3=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[315];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_5891(2,av2);}}}

/* k6216 in k6213 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in ... */
static void C_ccall f_6218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6218,2,av);}
/* csi.scm:1072: symbol-escape */
t2=C_fast_retrieve(lf[309]);{
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

/* k2101 in loop in k2126 in k2114 in lookup-script-file in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2103,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* csi.scm:200: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2090(t3,((C_word*)t0)[2],t2);}}

/* k5940 in doloop1353 in k5898 in k5895 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in ... */
static void C_ccall f_5942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5942,2,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_5905(t3,((C_word*)t0)[4],t2);}

/* map-loop647 in g642 in k4364 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in ... */
static void C_fcall f_4411(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4411,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4436,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:725: g653 */
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

/* k4447 in k4364 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in ... */
static void C_ccall f_4449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4449,2,av);}
/* csi.scm:728: descseq */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_FALSE;
av2[3]=*((C_word*)lf[173]+1);
av2[4]=*((C_word*)lf[175]+1);
av2[5]=C_fix(1);
f_3494(6,av2);}}

/* f_5823 in evalstring in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in ... */
static void C_ccall f_5823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5823,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=*((C_word*)lf[41]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3195 in k3182 in g422 in k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in ... */
static void C_fcall f_3197(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_3197,2,t0,t1);}
a=C_alloc(4);
if(C_truep(C_i_greater_or_equalp(((C_word*)((C_word*)t0)[2])[1],C_fix(3)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3206,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:492: display */
t3=*((C_word*)lf[99]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[121];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3214,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:495: make-string */
t3=*((C_word*)lf[122]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_make_character(32);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k4434 in map-loop647 in g642 in k4364 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in ... */
static void C_ccall f_4436(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4436,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4411(t6,((C_word*)t0)[5],t5);}

/* k5811 in doloop1222 in k5788 in k5781 in evalstring in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in ... */
static void C_ccall f_5813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5813,2,av);}
/* csi.scm:1026: rec */
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
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a5814 in doloop1222 in k5788 in k5781 in evalstring in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in ... */
static void C_ccall f_5815(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5815,2,av);}
/* csi.scm:1026: eval */
t2=C_fast_retrieve(lf[50]);{
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

/* k6201 in k6198 in k6195 in k6192 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in ... */
static void C_ccall f_6203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6203,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6206,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1077: parentheses-synonyms */
t3=C_fast_retrieve(lf[310]);{
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

/* k6204 in k6201 in k6198 in k6195 in k6192 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in ... */
static void C_ccall f_6206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6206,2,av);}
/* csi.scm:1078: symbol-escape */
t2=C_fast_retrieve(lf[309]);{
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

/* k6198 in k6195 in k6192 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in ... */
static void C_ccall f_6200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6200,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6203,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1076: keyword-style */
t3=C_fast_retrieve(lf[135]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[311];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5800 in doloop1222 in k5788 in k5781 in evalstring in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in ... */
static void C_ccall f_5802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5802,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5809,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1024: read */
t3=*((C_word*)lf[60]+1);{
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

/* k2544 in k2541 in k2538 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2546,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2549,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:334: eval */
t4=((C_word*)t0)[3];{
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

/* k2541 in k2538 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2543,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2546,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:333: eval */
t4=((C_word*)t0)[3];{
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

/* k2538 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2540,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2543,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:332: read */
t4=*((C_word*)lf[60]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5807 in k5800 in doloop1222 in k5788 in k5781 in evalstring in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in ... */
static void C_ccall f_5809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5809,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_5792(t2,((C_word*)t0)[3],t1);}

/* k2547 in k2544 in k2541 in k2538 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2549,2,av);}
a=C_alloc(3);
/* csi.scm:335: dump */
f_4497(((C_word*)t0)[2],((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* k6056 in doloop1353 in k5898 in k5895 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in ... */
static void C_ccall f_6058(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6058,2,av);}
a=C_alloc(4);
if(C_truep(C_i_equalp(lf[295],((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6069,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6079,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1126: call-with-values */{
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
t2=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t3=((C_word*)((C_word*)t0)[5])[1];
f_5905(t3,((C_word*)t0)[6],t2);}}

/* a6068 in k6056 in doloop1353 in k5898 in k5895 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in ... */
static void C_ccall f_6069(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6069,2,av);}
a=C_alloc(4);
t2=C_fast_retrieve(lf[296]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6077,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1126: command-line-arguments */
t4=C_fast_retrieve(lf[297]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2158 in k2152 in k2135 in k2126 in k2114 in lookup-script-file in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2160,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2167,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:211: string-split */
t4=C_fast_retrieve(lf[33]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[34];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* history-add in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_2219(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2219,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[41]+1):C_slot(t2,C_fix(0)));
t5=t4;
t6=C_block_size(C_retrieve2(lf[38],"history-list"));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2229,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(C_retrieve2(lf[18],"history-count"),t6))){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2243,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=C_fixnum_times(C_fix(2),t6);
/* csi.scm:229: vector-resize */
t10=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t10;
av2[1]=t8;
av2[2]=C_retrieve2(lf[38],"history-list");
av2[3]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
t8=t7;
f_2229(t8,C_SCHEME_UNDEFINED);}}

/* k2165 in k2158 in k2152 in k2135 in k2126 in k2114 in lookup-script-file in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2167,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2169,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2169(t5,((C_word*)t0)[4],t1);}

/* loop in k2165 in k2158 in k2152 in k2135 in k2126 in k2114 in lookup-script-file in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_2169(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_2169,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2179,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2196,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=C_slot(t2,C_fix(0));
/* csi.scm:213: chop-separator */
t6=C_retrieve2(lf[23],"chop-separator");{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
f_2011(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g323 in k6846 in k6822 in k6819 in a6816 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_6852(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_6852,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6856,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:437: ##sys#switch-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[383]);
C_word av2[3];
av2[0]=*((C_word*)lf[383]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k6854 in g323 in k6846 in k6822 in k6819 in a6816 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6856,2,av);}
/* csi.scm:438: printf */
t2=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[382];
av2[3]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4007 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4009,2,av);}
/* csi.scm:662: fprintf */
t2=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[202];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
av2[6]=((C_word*)t0)[6];
av2[7]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}

/* k2149 in k2138 in k2135 in k2126 in k2114 in lookup-script-file in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2151,2,av);}
/* csi.scm:207: string-append */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[31];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k2285 in doloop120 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2287,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2290,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:238: ##sys#print */
t3=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2152 in k2135 in k2126 in k2114 in lookup-script-file in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2154,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2160,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[27]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t2;
av2[2]=lf[35];
av2[3]=t3;
tp(4,av2);}}}

/* k6867 in k6822 in k6819 in a6816 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6869,2,av);}
/* csi.scm:435: ##sys#find-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[385]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[385]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}

/* k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in ... */
static void C_fcall f_5845(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_5845,2,t0,t1);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5848,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[8])){
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5848(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6475,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1042: load-verbose */
t4=C_fast_retrieve(lf[335]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in ... */
static void C_ccall f_5848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_5848,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5851,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6460,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1044: member* */
f_5425(t3,lf[334],((C_word*)((C_word*)t0)[6])[1]);}

/* k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in ... */
static void C_ccall f_5842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_5842,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5845,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6481,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1038: member* */
f_5425(t3,lf[338],((C_word*)((C_word*)t0)[6])[1]);}

/* a6047 in doloop1353 in k5898 in k5895 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in ... */
static void C_ccall f_6048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_6048,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[106]+1);
av2[3]=C_fast_retrieve(lf[54]);
av2[4]=t2;
C_apply(5,av2);}}

/* k2180 in k2177 in loop in k2165 in k2158 in k2152 in k2135 in k2126 in k2114 in lookup-script-file in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2182,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* csi.scm:215: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2169(t3,((C_word*)t0)[2],t2);}}

/* k6292 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in ... */
static void C_ccall f_6294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6294,2,av);}
/* csi.scm:1052: ##sys#nodups */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[325]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[325]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=*((C_word*)lf[326]+1);
tp(4,av2);}}

/* k4726 in k4723 in doloop747 in k4695 in k4692 in k4689 in k4686 in doloop721 in hexdump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in ... */
static void C_ccall f_4728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4728,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4712(t4,((C_word*)t0)[5],t2,t3);}

/* k6038 in doloop1353 in k5898 in k5895 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in ... */
static void C_ccall f_6040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6040,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_u_i_cdr(t2));
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5905(t5,((C_word*)t0)[4],t4);}

/* k4650 in justify in hexdump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4652(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4652,2,av);}
a=C_alloc(4);
t2=t1;
t3=C_block_size(t2);
if(C_truep(C_fixnum_lessp(t3,((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4668,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_difference(((C_word*)t0)[2],t3);
/* csi.scm:766: make-string */
t6=*((C_word*)lf[122]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* doloop120 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_2274(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2274,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_greater_or_equalp(t2,C_retrieve2(lf[18],"history-count")))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=*((C_word*)lf[91]+1);
t4=*((C_word*)lf[91]+1);
t5=C_i_check_port_2(*((C_word*)lf[91]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[84]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2287,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:238: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[95]);
C_word av2[4];
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t6;
av2[2]=C_make_character(35);
av2[3]=*((C_word*)lf[91]+1);
tp(4,av2);}}}

/* compare in k5188 in k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_5192(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_5192,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_slot(t2,C_fix(1));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5203,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=C_i_string_length(((C_word*)t0)[2]);
t6=C_i_string_length(t3);
t7=C_i_fixnum_min(t5,t6);
/* csi.scm:876: substring */
t8=*((C_word*)lf[24]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
av2[4]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}

/* k5188 in k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_5190(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_5190,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5192,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5223,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:878: call/cc */
t5=*((C_word*)lf[108]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t4;
av2[1]=*((C_word*)lf[41]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in ... */
static void C_ccall f_5836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_5836,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5839,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_member(lf[340],((C_word*)((C_word*)t0)[6])[1]))){
t3=C_set_block_item(lf[341] /* ##sys#setup-mode */,0,C_SCHEME_TRUE);
t4=t2;
f_5839(t4,t3);}
else{
t3=t2;
f_5839(t3,C_SCHEME_UNDEFINED);}}

/* k4023 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_4025,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[2],C_fix(2));
switch(t3){
case C_fix(0):
/* csi.scm:669: fprintf */
t4=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[203];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[204];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(1):
/* csi.scm:669: fprintf */
t4=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[203];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[205];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(2):
/* csi.scm:669: fprintf */
t4=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[203];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[206];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(3):
/* csi.scm:669: fprintf */
t4=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[203];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[207];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(4):
/* csi.scm:669: fprintf */
t4=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[203];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[208];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(5):
/* csi.scm:669: fprintf */
t4=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[203];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[209];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(6):
/* csi.scm:669: fprintf */
t4=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[203];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[210];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(7):
/* csi.scm:669: fprintf */
t4=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[203];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[211];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(8):
/* csi.scm:669: fprintf */
t4=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[203];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[212];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(9):
/* csi.scm:669: fprintf */
t4=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[203];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[213];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
default:
t4=C_SCHEME_UNDEFINED;
/* csi.scm:669: fprintf */
t5=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[203];
av2[4]=t1;
av2[5]=t2;
av2[6]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}}

/* k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in ... */
static void C_ccall f_5833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_5833,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5836,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_member(lf[342],((C_word*)((C_word*)t0)[6])[1]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6511,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1031: print-banner */
f_1941(t3);}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5836(2,av2);}}}

/* k4723 in doloop747 in k4695 in k4692 in k4689 in k4686 in doloop721 in hexdump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 in ... */
static void C_ccall f_4725(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4725,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4728,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_greater_or_equal_p(t1,C_fix(32));
t4=(C_truep(t3)?C_fixnum_lessp(t1,C_fix(128)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_make_character(C_unfix(t1));
/* write-char/port */
t6=C_fast_retrieve(lf[249]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
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
t5=C_fast_retrieve(lf[249]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=C_make_character(46);
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* hexdump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_4645(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,6)))){
C_save_and_reclaim_args((void *)trf_4645,5,t1,t2,t3,t4,t5);}
a=C_alloc(12);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4648,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4678,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=t4,a[6]=t2,a[7]=t6,tmp=(C_word)a,a+=8,tmp));
t10=((C_word*)t8)[1];
f_4678(t10,t1,C_fix(0));}

/* k2177 in loop in k2165 in k2158 in k2152 in k2135 in k2126 in k2114 in lookup-script-file in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2179,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2182,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:214: addext */
f_2061(t2,t1);}

/* justify in hexdump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_4648(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4648,5,t1,t2,t3,t4,t5);}
a=C_alloc(5);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4652,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:763: number->string */
t7=*((C_word*)lf[248]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in ... */
static void C_fcall f_5839(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,2)))){
C_save_and_reclaim_args((void *)trf_5839,2,t0,t1);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5842,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_member(lf[339],((C_word*)((C_word*)t0)[6])[1]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6494,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6501,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1036: chicken-version */
t5=C_fast_retrieve(lf[13]);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5842(2,av2);}}}

/* k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4018,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4025,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:670: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
tp(4,av2);}}
else{
if(C_truep(C_anypointerp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4126,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:683: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
tp(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4132,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:684: ##sys#bytevector? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[235]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[235]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}}

/* k2523 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2525,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2528,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:328: eval */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2526 in k2523 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2528,2,av);}
/* csi.scm:329: dump */
f_4497(((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* doloop747 in k4695 in k4692 in k4689 in k4686 in doloop721 in hexdump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_4712(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_4712,4,t0,t1,t2,t3);}
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
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4725,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:788: ref */
t7=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[6];
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}

/* k2126 in k2114 in lookup-script-file in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2128(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2128,2,av);}
a=C_alloc(15);
if(C_truep(t1)){
/* csi.scm:204: addext */
f_2061(((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2137,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_retrieve2(lf[21],"dirseparator\077");
t4=((C_word*)t0)[4];
t5=C_block_size(t4);
t6=t5;
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2090,a[2]=t6,a[3]=t8,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_2090(t10,t2,C_fix(0));}}

/* k6888 in a6881 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6890,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6893,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6900,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:261: ##sys#module-name */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[394]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[394]+1);
av2[1]=t3;
av2[2]=t1;
tp(3,av2);}}
else{
/* csi.scm:258: sprintf */
t3=*((C_word*)lf[197]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[392];
av2[3]=lf[395];
av2[4]=C_retrieve2(lf[18],"history-count");
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k6891 in k6888 in a6881 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6893,2,av);}
/* csi.scm:258: sprintf */
t2=*((C_word*)lf[197]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[392];
av2[3]=t1;
av2[4]=C_retrieve2(lf[18],"history-count");
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in ... */
static void C_ccall f_5894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_5894,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5897,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6182,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:1079: member* */
f_5425(t3,lf[308],((C_word*)((C_word*)t0)[6])[1]);}

/* k5895 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in ... */
static void C_ccall f_5897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5897,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5900,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_set_block_item(lf[5] /* ##sys#notices-enabled */,0,C_SCHEME_FALSE);
t4=t2;
f_5900(t4,t3);}
else{
t3=t2;
f_5900(t3,C_SCHEME_UNDEFINED);}}

/* k6075 in a6068 in k6056 in doloop1353 in k5898 in k5895 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in ... */
static void C_ccall f_6077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6077,2,av);}
/* csi.scm:1126: g1424 */
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
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in ... */
static void C_ccall f_5891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_5891,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5894,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6194,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1073: member* */
f_5425(t3,lf[314],((C_word*)((C_word*)t0)[6])[1]);}

/* a6078 in k6056 in doloop1353 in k5898 in k5895 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in ... */
static void C_ccall f_6079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_6079,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
if(C_truep(C_fixnump(t4))){
t5=C_i_car(t2);
/* csi.scm:1128: exit */
t6=C_fast_retrieve(lf[57]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
/* csi.scm:1128: exit */
t5=C_fast_retrieve(lf[57]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
/* csi.scm:1128: exit */
t3=C_fast_retrieve(lf[57]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k4698 in k4695 in k4692 in k4689 in k4686 in doloop721 in hexdump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4700,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4703,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[249]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4701 in k4698 in k4695 in k4692 in k4689 in k4686 in doloop721 in hexdump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 in ... */
static void C_ccall f_4703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4703,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(16));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4678(t3,((C_word*)t0)[4],t2);}

/* lookup-script-file in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_2112(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2112,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2116,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:202: get-environment-variable */
t4=C_fast_retrieve(lf[36]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[37];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2114 in lookup-script-file in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2116(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2116,2,av);}
a=C_alloc(7);
t2=t1;
t3=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2128,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t5=C_i_string_ref(((C_word*)t0)[2],C_fix(0));
/* csi.scm:204: dirseparator? */
t6=C_retrieve2(lf[21],"dirseparator\077");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
f_1996(3,av2);}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in ... */
static void C_ccall f_5882(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5882,2,av);}
a=C_alloc(9);
t2=C_mutate2((C_word*)lf[133]+1 /* (set! ##sys#include-pathnames ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5885,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[9])){
t4=C_i_cdr(((C_word*)t0)[9]);
if(C_truep(C_i_pairp(t4))){
t5=C_i_cadr(((C_word*)t0)[9]);
if(C_truep(C_i_string_equal_p(lf[319],t5))){
/* csi.scm:1062: keyword-style */
t6=C_fast_retrieve(lf[135]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=lf[320];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t6=C_u_i_cdr(((C_word*)t0)[9]);
t7=C_u_i_car(t6);
if(C_truep(C_i_string_equal_p(lf[321],t7))){
/* csi.scm:1064: keyword-style */
t8=C_fast_retrieve(lf[135]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=lf[311];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t8=C_u_i_cdr(((C_word*)t0)[9]);
t9=C_u_i_car(t8);
if(C_truep(C_i_string_equal_p(lf[322],t9))){
/* csi.scm:1066: keyword-style */
t10=C_fast_retrieve(lf[135]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t3;
av2[2]=lf[323];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t10=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
f_5885(2,av2);}}}}}
else{
/* csi.scm:1060: ##sys#error */
t5=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[324];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5885(2,av2);}}}

/* k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in ... */
static void C_ccall f_5885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_5885,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5888,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6227,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1067: member* */
f_5425(t3,lf[318],((C_word*)((C_word*)t0)[6])[1]);}

/* k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in ... */
static void C_ccall f_5888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_5888,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5891,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6215,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1070: member* */
f_5425(t3,lf[316],((C_word*)((C_word*)t0)[6])[1]);}

/* k2902 in for-each-loop292 in k2865 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2904,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2894(t3,((C_word*)t0)[4],t2);}

/* k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in ... */
static void C_ccall f_5872(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5872,2,av);}
a=C_alloc(18);
t2=C_i_check_list_2(t1,lf[106]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5878,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6390,a[2]=t5,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_6390(t7,t3,t1);}

/* k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in ... */
static void C_ccall f_5878(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5878,2,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5882,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6294,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_retrieve2(lf[23],"chop-separator");
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6301,a[2]=t3,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=t6,a[6]=t8,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* csi.scm:1053: collect-options */
t10=((C_word*)((C_word*)t0)[11])[1];
f_5694(t10,t9,lf[328]);}

/* k2288 in k2285 in doloop120 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2290,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2293,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:238: ##sys#print */
t3=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[94];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2291 in k2288 in k2285 in doloop120 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2293,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2296,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2308,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:243: ##sys#with-print-length-limit */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[93]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t2;
av2[2]=C_fix(80);
av2[3]=t3;
tp(4,av2);}}

/* k4204 in doloop574 in k4164 in k4161 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in ... */
static void C_ccall f_4206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4206,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4177(t3,((C_word*)t0)[4],t2);}

/* k2294 in k2291 in k2288 in k2285 in doloop120 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2296,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2299,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:247: newline */
t3=*((C_word*)lf[15]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2297 in k2294 in k2291 in k2288 in k2285 in doloop120 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2299,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2274(t3,((C_word*)t0)[4],t2);}

/* k5131 in k2824 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_5133(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_5133,2,t0,t1);}
if(C_truep(t1)){
/* csi.scm:851: display */
t2=*((C_word*)lf[99]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[100];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_i_length(C_fast_retrieve(lf[101]));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=C_fixnum_difference(t2,t3);
t5=C_i_list_ref(C_fast_retrieve(lf[101]),t4);
t6=C_mutate2(&lf[7] /* (set! selected-frame ...) */,t5);
/* csi.scm:857: show-frameinfo */
f_4848(((C_word*)t0)[2],C_retrieve2(lf[7],"selected-frame"));}}

/* k3914 in loop-print in k3874 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3916(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3916,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[3]);
/* csi.scm:653: loop-print */
t7=((C_word*)((C_word*)t0)[4])[1];
f_3885(t7,((C_word*)t0)[5],t3,t6);}

/* k2916 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2918,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=*((C_word*)lf[41]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4223 in for-each-loop579 in doloop574 in k4164 in k4161 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in ... */
static void C_ccall f_4225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4225,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4215(t3,((C_word*)t0)[4],t2);}

/* k6831 in k6822 in k6819 in a6816 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6833,2,av);}
/* csi.scm:432: printf */
t2=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[388];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* for-each-loop579 in doloop574 in k4164 in k4161 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in ... */
static void C_fcall f_4215(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4215,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4225,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:696: g580 */
t5=((C_word*)t0)[3];
f_4185(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* doloop739 in doloop731 in k4689 in k4686 in doloop721 in hexdump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_4797(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4797,3,t0,t1,t2);}
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
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4807,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:781: display */
t5=*((C_word*)lf[99]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[250];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k6846 in k6822 in k6819 in a6816 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6848,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6852,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:430: g323 */
t3=t2;
f_6852(t3,((C_word*)t0)[3],t1);}
else{
/* csi.scm:440: printf */
t2=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[384];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* a6816 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6817,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6821,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:427: read */
t3=*((C_word*)lf[60]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##sys#sharp-number-hook in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_1986(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1986,4,av);}
a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1994,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:164: history-ref */
f_2318(t4,t3);}

/* k2194 in loop in k2165 in k2158 in k2152 in k2135 in k2126 in k2114 in lookup-script-file in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2196,2,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[27]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k6822 in k6819 in a6816 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_6824(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_6824,2,t0,t1);}
a=C_alloc(7);
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t2)){
if(C_truep(C_i_symbolp(((C_word*)((C_word*)t0)[2])[1]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6848,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6869,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:435: ##sys#resolve-module-name */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[386]);
C_word av2[4];
av2[0]=*((C_word*)lf[386]+1);
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}
else{
/* csi.scm:434: printf */
t3=*((C_word*)lf[84]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[387];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6833,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:431: ##sys#switch-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[383]);
C_word av2[3];
av2[0]=*((C_word*)lf[383]+1);
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
tp(3,av2);}}}

/* dirseparator? in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_1996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1996,3,av);}
if(C_truep(*((C_word*)lf[22]+1))){
t3=C_i_char_equalp(t2,C_make_character(92));
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(C_truep(t3)?t3:C_i_char_equalp(t2,C_make_character(47)));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_char_equalp(t2,C_make_character(47));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1992 in sharp-number-hook in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_1994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_1994,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,lf[17],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6819 in a6816 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6821(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6821,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6824,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_stringp(((C_word*)t3)[1]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6880,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:429: ##sys#string->symbol */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[389]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[389]+1);
av2[1]=t5;
av2[2]=((C_word*)t3)[1];
tp(3,av2);}}
else{
t5=t4;
f_6824(t5,C_SCHEME_UNDEFINED);}}

/* for-each-loop1236 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in ... */
static void C_fcall f_6436(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6436,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6446,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1048: g1237 */
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

/* k4263 in g602 in k4258 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in ... */
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4265,2,av);}
a=C_alloc(7);
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4274,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_4274(t6,((C_word*)t0)[5],t2);}

/* k3693 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3695,2,av);}
a=C_alloc(3);
t2=C_make_character(C_unfix(((C_word*)t0)[2]));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3701,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[2],C_fix(65536)))){
/* csi.scm:611: fprintf */
t4=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[166];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
/* csi.scm:612: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[95]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[95]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[91]+1);
tp(4,av2);}}}

/* g602 in k4258 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in ... */
static void C_fcall f_4261(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_4261,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4265,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:709: fprintf */
t4=*((C_word*)lf[153]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[228];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4258 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 in ... */
static void C_ccall f_4260(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4260,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4261,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_i_check_list_2(t3,lf[106]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4329,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_4329(t8,((C_word*)t0)[4],t3);}

/* doloop731 in k4689 in k4686 in doloop721 in hexdump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_4763(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_4763,4,t0,t1,t2,t3);}
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
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4797,a[2]=t10,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_4797(t12,t1,t8);}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4817,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* write-char/port */
t7=C_fast_retrieve(lf[249]);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* a2969 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_2970,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2974,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:417: history-add */
t4=C_retrieve2(lf[40],"history-add");
f_2219(t4,t3,t2);}

/* k6398 in for-each-loop1270 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in ... */
static void C_ccall f_6400(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6400,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6390(t3,((C_word*)t0)[4],t2);}

/* k2972 in a2969 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2974,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
C_apply(4,av2);}}

/* k2577 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2579(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2579,2,av);}
a=C_alloc(9);
t2=C_fast_retrieve(lf[72]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2582,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2587,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_2587(t7,t3,t1);}

/* a6881 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6882,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6890,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:259: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[396]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[396]+1);
av2[1]=t2;
tp(2,av2);}}

/* k6878 in k6819 in a6816 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6880,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_6824(t3,t2);}

/* set-describer! in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4488(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4488,4,av);}
t4=C_i_check_symbol_2(t2,lf[241]);
/* csi.scm:734: ##sys#hash-table-set! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[242]);
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[242]+1);
av2[1]=t1;
av2[2]=C_retrieve2(lf[149],"describer-table");
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}

/* k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in ... */
static void C_ccall f_5863(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5863,2,av);}
a=C_alloc(18);
t2=C_i_check_list_2(t1,lf[106]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5869,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6413,a[2]=t5,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_6413(t7,t3,t1);}

/* for-each-loop1253 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in ... */
static void C_fcall f_6413(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6413,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6423,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1049: g1254 */
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

/* k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in ... */
static void C_ccall f_5860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_5860,2,av);}
a=C_alloc(13);
t2=C_fast_retrieve(lf[274]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5863,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* csi.scm:1049: collect-options */
t4=((C_word*)((C_word*)t0)[11])[1];
f_5694(t4,t3,lf[330]);}

/* k4478 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4480,2,av);}
/* csi.scm:599: fprintf */
t2=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[239];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4282 in loop in k4263 in g602 in k4258 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in ... */
static void C_ccall f_4284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4284,2,av);}
t2=C_i_cddr(((C_word*)t0)[2]);
/* csi.scm:718: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4274(t3,((C_word*)t0)[4],t2);}

/* k3982 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3984,2,av);}
/* csi.scm:659: sprintf */
t2=*((C_word*)lf[197]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[198];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k6228 in k6225 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in ... */
static void C_ccall f_6230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6230,2,av);}
/* csi.scm:1069: parentheses-synonyms */
t2=C_fast_retrieve(lf[310]);{
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

/* k3978 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3980,2,av);}
/* csi.scm:658: descseq */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=*((C_word*)lf[173]+1);
av2[4]=*((C_word*)lf[175]+1);
av2[5]=C_fix(1);
f_3494(6,av2);}}

/* k1943 in print-banner in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_1945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1945,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1948,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:147: print */
t3=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[14];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1946 in k1943 in print-banner in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_1948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1948,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1955,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:148: chicken-version */
t3=C_fast_retrieve(lf[13]);{
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

/* print-banner in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_1941(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_1941,1,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1945,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:129: newline */
t3=*((C_word*)lf[15]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in ... */
static void C_ccall f_5869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_5869,2,av);}
a=C_alloc(13);
t2=C_fast_retrieve(lf[275]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5872,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* csi.scm:1050: collect-options */
t4=((C_word*)((C_word*)t0)[11])[1];
f_5694(t4,t3,lf[329]);}

/* k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in ... */
static void C_ccall f_5854(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5854,2,av);}
a=C_alloc(18);
t2=C_i_check_list_2(t1,lf[106]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5860,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6436,a[2]=t5,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_6436(t7,t3,t1);}

/* k2994 in k6681 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2996(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2996,2,av);}
a=C_alloc(14);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3019,a[2]=t5,a[3]=t6,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3064,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:454: call-with-current-continuation */
t9=*((C_word*)lf[368]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in ... */
static void C_ccall f_5851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_5851,2,av);}
a=C_alloc(13);
t2=C_fast_retrieve(lf[274]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5854,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* csi.scm:1048: collect-options */
t4=((C_word*)((C_word*)t0)[11])[1];
f_5694(t4,t3,lf[331]);}

/* k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2990(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2990,2,av);}
a=C_alloc(6);
t2=C_fast_retrieve(lf[116]);
t3=C_fast_retrieve(lf[117]);
t4=C_fast_retrieve(lf[118]);
t5=C_fast_retrieve(lf[119]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3135,a[2]=t5,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:470: get-environment-variable */
t7=C_fast_retrieve(lf[36]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[381];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k2595 in for-each-loop226 in k2577 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2597,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2587(t3,((C_word*)t0)[4],t2);}

/* loop in k4263 in g602 in k4258 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in ... */
static void C_fcall f_4274(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4274,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4284,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_i_caar(t2);
t5=C_eqp(((C_word*)t0)[3],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4297,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4302,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:713: ##sys#with-print-length-limit */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[93]);
C_word av2[4];
av2[0]=*((C_word*)lf[93]+1);
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

/* k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3990(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3990,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(C_truep(t2)?lf[200]:lf[201]);
t4=t3;
t5=C_slot(((C_word*)t0)[2],C_fix(7));
t6=t5;
t7=C_slot(((C_word*)t0)[2],C_fix(3));
t8=t7;
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4009,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t6,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
/* csi.scm:667: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t9;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
tp(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4018,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:668: ##sys#locative? */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[236]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[236]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}

/* k1953 in k1946 in k1943 in print-banner in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_1955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1955,2,av);}
/* csi.scm:148: print */
t2=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[11];
av2[3]=t1;
av2[4]=lf[12];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* ##sys#user-read-hook in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_1957(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1957,4,av);}
a=C_alloc(3);
t4=C_i_char_equalp(C_make_character(41),t2);
t5=(C_truep(t4)?t4:C_u_i_char_whitespacep(t2));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1974,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_fixnum_difference(C_retrieve2(lf[18],"history-count"),C_fix(1));
/* csi.scm:159: history-ref */
f_2318(t6,t7);}
else{
/* csi.scm:160: old-hook */
t6=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}}

/* k6473 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in ... */
static void C_ccall f_6475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6475,2,av);}
/* csi.scm:1043: print-banner */
f_1941(((C_word*)t0)[2]);}

/* dump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_4497(C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_4497,3,t1,t2,t3);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4499,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4605,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4610,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t3))){
/* csi.scm:740: def-len686 */
t7=t6;
f_4610(t7,t1);}
else{
t7=C_i_car(t3);
t8=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t8))){
/* csi.scm:740: def-out687 */
t9=t5;
f_4605(t9,t1,t7);}
else{
t9=C_i_car(t8);
t10=C_u_i_cdr(t8);
/* csi.scm:740: body684 */
t11=t4;
f_4499(t11,t1,t7,t9);}}}

/* loop in k5520 in k5506 in loop in canonicalize-args in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static C_word C_fcall f_5629(C_word t1){
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

/* body684 in dump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_4499(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_4499,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4502,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_immp(((C_word*)t0)[2]))){
/* csi.scm:745: ##sys#error */
t5=*((C_word*)lf[42]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[244];
av2[3]=lf[245];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4524,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:746: ##sys#bytevector? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[235]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[235]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}

/* k6225 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in ... */
static void C_ccall f_6227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6227,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6230,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* csi.scm:1069: parentheses-synonyms */
t3=C_fast_retrieve(lf[310]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* csi.scm:1068: display */
t3=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[317];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_5888(2,av2);}}}

/* k4295 in loop in k4263 in g602 in k4258 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in ... */
static void C_ccall f_4297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4297,2,av);}
/* csi.scm:717: newline */
t2=*((C_word*)lf[15]+1);{
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

/* member* in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_5425(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5425,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5431,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5431(t7,t1,t3);}

/* k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5420(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_5420,2,av);}
a=C_alloc(15);
t2=C_establish_signal_handler(C_fix((C_word)SIGINT),C_fix((C_word)SIGINT));
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6697,tmp=(C_word)a,a+=2,tmp);
t4=C_i_setslot(C_fast_retrieve(lf[259]),C_fix((C_word)SIGINT),t3);
t5=C_mutate2(&lf[260] /* (set! member* ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5425,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate2(&lf[261] /* (set! canonicalize-args ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5480,tmp=(C_word)a,a+=2,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6689,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5659,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6683,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:977: get-environment-variable */
t11=C_fast_retrieve(lf[36]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[369];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}

/* k1972 in user-read-hook in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_1974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_1974,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,lf[17],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2963 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2964,2,av);}
/* csi.scm:416: eval */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_1908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1908,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1911,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_1911(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6904,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:71: get-environment-variable */
t4=C_fast_retrieve(lf[36]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[402];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_1903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1903,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[6]+1 /* (set! editor-command ...) */,t1);
t3=lf[7] /* selected-frame */ =C_SCHEME_FALSE;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1908,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:70: get-environment-variable */
t5=C_fast_retrieve(lf[36]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[403];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4666 in k4650 in justify in hexdump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4668,2,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[27]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_1911(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_1911,2,t0,t1);}
a=C_alloc(14);
t2=C_mutate2(&lf[8] /* (set! default-editor ...) */,t1);
t3=C_mutate2(&lf[9] /* (set! print-banner ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1941,tmp=(C_word)a,a+=2,tmp));
t4=C_fast_retrieve(lf[16]);
t5=C_mutate2((C_word*)lf[16]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1957,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[20]+1 /* (set! ##sys#sharp-number-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1986,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate2(&lf[21] /* (set! dirseparator? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1996,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate2(&lf[23] /* (set! chop-separator ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2011,tmp=(C_word)a,a+=2,tmp));
t9=C_set_block_item(lf[25] /* @ */,0,C_SCHEME_FALSE);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2042,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[398]);
C_word av2[4];
av2[0]=*((C_word*)lf[398]+1);
av2[1]=t10;
av2[2]=C_fix(256);
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k1915 in k6515 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in ... */
static void C_ccall f_1917(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1917,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1920,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1927,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[344],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,lf[0],t4);
t6=C_a_i_cons(&a,2,lf[345],t5);
/* csi.scm:79: ##sys#print-to-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[346]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[346]+1);
av2[1]=t3;
av2[2]=t6;
tp(3,av2);}}

/* k4692 in k4689 in k4686 in doloop721 in hexdump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4694,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4697,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[249]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4695 in k4692 in k4689 in k4686 in doloop721 in hexdump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4697(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4697,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4700,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4712,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_4712(t6,t2,C_fix(0),((C_word*)t0)[2]);}

/* loop in member* in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_5431(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_5431,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5443,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5443(t6,t1,((C_word*)t0)[3]);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4689 in k4686 in doloop721 in hexdump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4691(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4691,2,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4694,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4763,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_4763(t6,t2,C_fix(0),((C_word*)t0)[2]);}

/* k1918 in k1915 in k6515 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in ... */
static void C_ccall f_1920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1920,2,av);}
/* csi.scm:106: display */
t2=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[343];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k1925 in k1915 in k6515 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in ... */
static void C_ccall f_1927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1927,2,av);}
/* csi.scm:101: display */
t2=*((C_word*)lf[99]+1);{
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

/* k6479 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in ... */
static void C_ccall f_6481(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6481,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6484,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=C_set_block_item(lf[336] /* ##sys#warnings-enabled */,0,C_SCHEME_FALSE);
t4=((C_word*)t0)[2];
f_5845(t4,t3);}
else{
/* csi.scm:1039: display */
t3=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[337];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[2];
f_5845(t2,C_SCHEME_UNDEFINED);}}

/* k6482 in k6479 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in ... */
static void C_ccall f_6484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6484,2,av);}
t2=C_set_block_item(lf[336] /* ##sys#warnings-enabled */,0,C_SCHEME_FALSE);
t3=((C_word*)t0)[2];
f_5845(t3,t2);}

/* k4686 in doloop721 in hexdump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_4688,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4691,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[249]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(58);
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5659(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5659,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5662,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6679,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:978: command-line-arguments */
t5=C_fast_retrieve(lf[297]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k4403 in g642 in k4364 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in ... */
static void C_ccall f_4405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4405,2,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,C_fix(0));
/* csi.scm:725: append */
t3=*((C_word*)lf[231]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6492 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in ... */
static void C_ccall f_6494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6494,2,av);}
/* csi.scm:1037: exit */
t2=C_fast_retrieve(lf[57]);{
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

/* k6458 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in ... */
static void C_ccall f_6460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6460,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6463,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7572,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1046: register-feature! */
t4=C_fast_retrieve(lf[274]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[332];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* csi.scm:1045: display */
t3=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[333];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_5851(2,av2);}}}

/* k2511 in k2508 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2513,2,av);}
/* csi.scm:325: describe */
t2=C_retrieve2(lf[63],"describe");
f_3488(t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k6461 in k6458 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in ... */
static void C_ccall f_6463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6463,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6466,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1046: register-feature! */
t3=C_fast_retrieve(lf[274]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[332];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6464 in k6461 in k6458 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in ... */
static void C_ccall f_6466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6466,2,av);}
/* csi.scm:1047: case-sensitive */
t2=C_fast_retrieve(lf[312]);{
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

/* k2508 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
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
/* csi.scm:324: eval */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* find in loop in member* in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_5443(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_5443,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_i_cdr(((C_word*)t0)[2]);
/* csi.scm:929: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5431(t4,t1,t3);}
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
/* csi.scm:931: find */
t8=t1;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}}

/* k2580 in k2577 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2582,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=*((C_word*)lf[41]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop226 in k2577 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_2587(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2587,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2597,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:339: g227 */
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

/* k3008 in map-loop333 in k3020 in k3017 in k2994 in k6681 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3010,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3013,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:452: write */
t4=*((C_word*)lf[178]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3011 in k3008 in map-loop333 in k3020 in k3017 in k2994 in k6681 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 in ... */
static void C_ccall f_3013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3013,2,av);}
/* csi.scm:453: get-output-string */
t2=C_fast_retrieve(lf[363]);{
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

/* k3017 in k2994 in k6681 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3019,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3022,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:454: g357 */
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k3020 in k3017 in k2994 in k6681 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3022(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3022,2,av);}
a=C_alloc(7);
t2=C_i_check_list_2(t1,lf[230]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3030,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_3030(t6,((C_word*)t0)[4],t1);}

/* doloop721 in hexdump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_4678(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_4678,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4688,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4846,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:771: justify */
f_4648(t4,t2,C_fix(4),C_fix(10),C_make_character(32));}}

/* k5039 in for-each-loop817 in k4939 in k4936 in k4933 in k4930 in k4927 in k4924 in k4921 in k4918 in k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in ... */
static void C_ccall f_5041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5041,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_5031(t4,((C_word*)t0)[5],t2,t3);}

/* k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in ... */
static void C_ccall f_5680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5680,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5683,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=t2;
f_5683(t3,((C_word*)t0)[4]);}
else{
if(C_truep(t1)){
t3=t1;
t4=t2;
f_5683(t4,t3);}
else{
t3=t2;
f_5683(t3,((C_word*)t0)[6]);}}}

/* k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in ... */
static void C_fcall f_5683(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_5683,2,t0,t1);}
a=C_alloc(20);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_retrieve2(lf[23],"chop-separator");
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5689,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=t5,a[10]=t7,a[11]=t6,tmp=(C_word)a,a+=12,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6561,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1006: get-environment-variable */
t10=C_fast_retrieve(lf[36]);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[351];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* map-loop333 in k3020 in k3017 in k2994 in k6681 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_3030(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_3030,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3055,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
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
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3010,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:451: open-output-string */
t8=C_fast_retrieve(lf[364]);{
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

/* k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in ... */
static void C_ccall f_5689(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5689,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5692,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6525,a[2]=((C_word*)t0)[9],a[3]=t4,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_6525(t6,t2,t1);}

/* for-each-loop817 in k4939 in k4936 in k4933 in k4930 in k4927 in k4924 in k4921 in k4918 in k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in ... */
static void C_fcall f_5031(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5031,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5041,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* csi.scm:831: g818 */
t9=((C_word*)t0)[3];
f_4957(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_5671(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5671,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5674,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1000: member* */
f_5425(t2,lf[354],((C_word*)((C_word*)t0)[2])[1]);}

/* k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 in ... */
static void C_fcall f_5677(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_5677,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5680,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:1002: member* */
f_5425(t3,lf[352],((C_word*)((C_word*)t0)[2])[1]);}

/* k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5674(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_5674,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5677,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=t3;
f_5677(t4,((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6570,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1001: member* */
f_5425(t4,lf[353],((C_word*)((C_word*)t0)[2])[1]);}}

/* def-len686 in dump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_4610(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_4610,2,t0,t1);}
/* csi.scm:740: def-out687 */
t2=((C_word*)t0)[2];
f_4605(t2,t1,C_SCHEME_FALSE);}

/* k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5662,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5665,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:980: member* */
f_5425(t4,lf[361],((C_word*)t3)[1]);}

/* k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5665,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5668,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:981: member* */
f_5425(t3,lf[360],((C_word*)((C_word*)t0)[2])[1]);}

/* k3053 in map-loop333 in k3020 in k3017 in k2994 in k6681 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3055(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3055,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3030(t6,((C_word*)t0)[5],t5);}

/* k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5668(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5668,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5671,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6576,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cdr(t2);
t6=C_i_pairp(t5);
t7=C_i_not(t6);
if(C_truep(t7)){
if(C_truep(t7)){
/* csi.scm:986: ##sys#error */
t8=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t4;
av2[2]=lf[358];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t8=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
f_6576(2,av2);}}}
else{
t8=C_i_cadr(t2);
t9=C_i_string_length(t8);
t10=C_eqp(t9,C_fix(0));
if(C_truep(t10)){
if(C_truep(t10)){
/* csi.scm:986: ##sys#error */
t11=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t4;
av2[2]=lf[358];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t11=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_SCHEME_UNDEFINED;
f_6576(2,av2);}}}
else{
t11=C_u_i_cdr(t2);
t12=C_u_i_car(t11);
t13=C_i_string_ref(t12,C_fix(0));
if(C_truep(C_u_i_char_equalp(C_make_character(45),t13))){
/* csi.scm:986: ##sys#error */
t14=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t14;
av2[1]=t4;
av2[2]=lf[358];
((C_proc)(void*)(*((C_word*)t14+1)))(3,av2);}}
else{
t14=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=C_SCHEME_UNDEFINED;
f_6576(2,av2);}}}}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6662,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6675,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:997: canonicalize-args */
f_5480(t5,((C_word*)t0)[5]);}}

/* def-out687 in dump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_4605(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_4605,3,t0,t1,t2);}
/* csi.scm:740: body684 */
t3=((C_word*)t0)[2];
f_4499(t3,t1,t2,*((C_word*)lf[91]+1));}

/* a3063 in k2994 in k6681 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3064(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3064,3,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3070,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3082,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:454: with-exception-handler */
t5=C_fast_retrieve(lf[367]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a6162 */
static void C_ccall f_6163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6163,2,av);}
t2=C_fast_retrieve(lf[54]);
/* csi.scm:1112: g1407 */
t3=C_fast_retrieve(lf[54]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a3075 in a3069 in a3063 in k2994 in k6681 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3076,2,av);}
/* csi.scm:454: ##sys#error */
t2=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[365];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a3069 in a3063 in k2994 in k6681 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3070,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3076,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:454: k353 */
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k5073 in k4930 in k4927 in k4924 in k4921 in k4918 in k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in ... */
static void C_ccall f_5075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5075,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5078,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:827: ##sys#print */
t3=*((C_word*)lf[92]+1);{
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

/* doloop1410 in k6120 in k6117 in k6111 */
static void C_fcall f_6133(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_6133,3,t0,t1,t2);}
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
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6146,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t6=C_fast_retrieve(lf[249]);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=*((C_word*)lf[299]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k5076 in k5073 in k4930 in k4927 in k4924 in k4921 in k4918 in k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in ... */
static void C_ccall f_5078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5078,2,av);}
/* csi.scm:827: ##sys#print */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[254];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3081 in a3063 in k2994 in k6681 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3082,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3088,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3121,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:454: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a3087 in a3081 in a3063 in k2994 in k6681 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3088,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3096,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:455: read */
t3=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6147 in k6144 in doloop1410 in k6120 in k6117 in k6111 */
static void C_ccall f_6149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6149,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6133(t3,((C_word*)t0)[4],t2);}

/* k6144 in doloop1410 in k6120 in k6117 in k6111 */
static void C_ccall f_6146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6146,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_u_i_char_equalp(C_make_character(10),((C_word*)t0)[5]))){
/* csi.scm:1121: display */
t3=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[300];
av2[3]=*((C_word*)lf[299]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_6133(t4,((C_word*)t0)[4],t3);}}

/* k6444 in for-each-loop1236 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in ... */
static void C_ccall f_6446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6446,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6436(t3,((C_word*)t0)[4],t2);}

/* k3094 in a3087 in a3081 in a3063 in k2994 in k6681 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3096,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3098,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_3098(t5,((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* k3546 in loop2 in k3527 in loop1 in k3499 in k3621 in descseq in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 in ... */
static void C_ccall f_3548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_3548,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3551,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[3],C_fix(1)))){
t3=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
t4=C_eqp(((C_word*)t0)[3],C_fix(2));
if(C_truep(t4)){
/* csi.scm:591: fprintf */
t5=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[155];
av2[4]=t3;
av2[5]=lf[156];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
/* csi.scm:591: fprintf */
t5=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[155];
av2[4]=t3;
av2[5]=lf[157];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}
else{
/* csi.scm:594: newline */
t3=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* doloop361 in k3094 in a3087 in a3081 in a3063 in k2994 in k6681 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 in ... */
static void C_fcall f_3098(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3098,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eofp(t2))){
/* csi.scm:457: reverse */
t4=*((C_word*)lf[366]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3115,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:455: read */
t5=*((C_word*)lf[60]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k6195 in k6192 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in ... */
static void C_ccall f_6197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6197,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6200,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1075: case-sensitive */
t3=C_fast_retrieve(lf[312]);{
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

/* k6192 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in ... */
static void C_ccall f_6194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6194,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6197,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6197(2,av2);}}
else{
/* csi.scm:1074: display */
t3=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[313];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_5894(2,av2);}}}

/* k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in ... */
static void C_ccall f_5692(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5692,2,av);}
a=C_alloc(24);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5694,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5776,tmp=(C_word)a,a+=2,tmp));
t9=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5833,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t2,a[11]=t4,tmp=(C_word)a,a+=12,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6517,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1027: member* */
f_5425(t10,lf[348],((C_word*)((C_word*)t0)[2])[1]);}

/* collect-options in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in ... */
static void C_fcall f_5694(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5694,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5700,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5700(t6,t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k3549 in k3546 in loop2 in k3527 in loop1 in k3499 in k3621 in descseq in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in ... */
static void C_ccall f_3551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3551,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],((C_word*)t0)[3]);
/* csi.scm:595: loop1 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3506(t3,((C_word*)t0)[5],t2);}

/* k3527 in loop1 in k3499 in k3621 in descseq in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3529(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3529,2,av);}
a=C_alloc(12);
t2=t1;
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[3],t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3538,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t6,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp));
t8=((C_word*)t6)[1];
f_3538(t8,((C_word*)t0)[9],C_fix(1),t4);}

/* k6421 in for-each-loop1253 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in ... */
static void C_ccall f_6423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6423,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6413(t3,((C_word*)t0)[4],t2);}

/* loop2 in k3527 in loop1 in k3499 in k3621 in descseq in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_3538(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_3538,4,t0,t1,t2,t3);}
a=C_alloc(12);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3548,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3580,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:586: ##sys#with-print-length-limit */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[93]);
C_word av2[4];
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t4;
av2[2]=C_fix(1000);
av2[3]=t5;
tp(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3608,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:596: pref */
t5=((C_word*)t0)[8];{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}}

/* k6180 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in ... */
static void C_ccall f_6182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6182,2,av);}
a=C_alloc(3);
t2=(C_truep(t1)?t1:(C_truep(((C_word*)t0)[2])?((C_word*)t0)[2]:((C_word*)t0)[3]));
if(C_truep(t2)){
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5897(2,av2);}}
else{
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5745,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1017: get-environment-variable */
t5=C_fast_retrieve(lf[36]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[307];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* loop1 in k3499 in k3621 in descseq in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_3506(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_3506,3,t0,t1,t2);}
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
/* csi.scm:581: fprintf */
t5=*((C_word*)lf[153]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[154];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3529,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t5=C_fixnum_plus(((C_word*)t0)[4],t2);
/* csi.scm:583: pref */
t6=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
av2[3]=t5;
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}}}

/* lp in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static C_word C_fcall f_3456(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=C_i_car(t1);
t3=C_eqp(t1,t2);
if(C_truep(t3)){
return(t3);}
else{
t4=t1;
t5=C_u_i_cdr(t4);
t7=t5;
t1=t7;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}

/* k5090 in k4918 in k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_5092(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5092,2,t0,t1);}
if(C_truep(t1)){
/* csi.scm:813: ##sys#print */
t2=*((C_word*)lf[92]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[256];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
/* csi.scm:813: ##sys#print */
t2=*((C_word*)lf[92]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[257];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k3499 in k3621 in descseq in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3501,2,av);}
a=C_alloc(10);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3506,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_3506(t5,((C_word*)t0)[7],C_fix(0));}

/* k4918 in k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_4920,2,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4923,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5092,a[2]=t2,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[7])){
t4=C_slot(((C_word*)t0)[9],C_fix(2));
t5=t3;
f_5092(t5,C_i_pairp(t4));}
else{
t4=t3;
f_5092(t4,C_SCHEME_FALSE);}}

/* k4921 in k4918 in k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4923,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4926,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* csi.scm:813: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[95]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t2;
av2[2]=C_make_character(9);
av2[3]=((C_word*)t0)[12];
tp(4,av2);}}

/* k4924 in k4921 in k4918 in k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 in ... */
static void C_ccall f_4926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_4926,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4929,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
t3=C_slot(((C_word*)t0)[13],C_fix(0));
/* csi.scm:813: ##sys#print */
t4=*((C_word*)lf[92]+1);{
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
av2[4]=((C_word*)t0)[12];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_4914,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4917,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* csi.scm:813: ##sys#print */
t3=*((C_word*)lf[92]+1);{
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
av2[4]=((C_word*)t0)[12];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4917,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4920,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* csi.scm:813: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[95]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t2;
av2[2]=C_make_character(58);
av2[3]=((C_word*)t0)[12];
tp(4,av2);}}

/* k4927 in k4924 in k4921 in k4918 in k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in ... */
static void C_ccall f_4929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_4929,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4932,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* csi.scm:813: ##sys#print */
t3=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[255];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[12];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3399 in map-loop395 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 in ... */
static void C_ccall f_3401(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3401,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3376(t6,((C_word*)t0)[5],t5);}

/* k6772 in k6732 in k6719 in a6710 in k6703 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6774(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_6774,2,av);}
a=C_alloc(20);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_cons(&a,2,lf[372],t3);
t5=C_a_i_cons(&a,2,t1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6754,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:914: rename997 */
t8=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[373];
((C_proc)C_fast_retrieve_proc(t8))(3,av2);}}

/* k6015 in doloop1353 in k5898 in k5895 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in ... */
static void C_ccall f_6017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6017,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_u_i_cdr(t2));
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5905(t5,((C_word*)t0)[4],t4);}

/* lp in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static C_word C_fcall f_3421(C_word t1,C_word t2){
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

/* k6752 in k6772 in k6732 in k6719 in a6710 in k6703 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6754,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6762,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:914: rename997 */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[259];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k6911 in k6902 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6913,2,av);}
t2=((C_word*)t0)[2];
f_1911(t2,(C_truep(t1)?lf[399]:lf[400]));}

/* a6024 in doloop1353 in k5898 in k5895 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in ... */
static void C_ccall f_6025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_6025,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[106]+1);
av2[3]=*((C_word*)lf[10]+1);
av2[4]=t2;
C_apply(5,av2);}}

/* canonicalize-args in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_5480(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_5480,2,t1,t2);}
a=C_alloc(5);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5486,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_5486(t6,t1,t2);}

/* loop in canonicalize-args in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_5486(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_5486,3,t0,t1,t2);}
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
if(C_truep((C_truep(C_i_equalp(t4,lf[262]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[263]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[264]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[265]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[266]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5508,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=C_block_size(t4);
if(C_truep(C_fixnum_greaterp(t6,C_fix(2)))){
t7=C_subchar(t4,C_fix(0));
if(C_truep(C_i_char_equalp(C_make_character(45),t7))){
t8=C_i_member(t4,lf[269]);
t9=t5;
f_5508(t9,C_i_not(t8));}
else{
t8=t5;
f_5508(t8,C_SCHEME_FALSE);}}
else{
t7=t5;
f_5508(t7,C_SCHEME_FALSE);}}}}

/* k3339 in k3277 in k3273 in k3269 in k3265 in k3257 in k3229 in k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in ... */
static void C_ccall f_3341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3341,2,av);}
/* csi.scm:520: symbol->string */
t2=*((C_word*)lf[134]+1);{
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

/* chop-separator in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2011(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_2011,3,av);}
a=C_alloc(9);
t3=C_block_size(t2);
t4=C_a_i_minus(&a,2,t3,C_fix(1));
t5=t4;
t6=C_i_string_ref(t2,t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2024,a[2]=t1,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_greaterp(t5,C_fix(0)))){
/* csi.scm:178: dirseparator? */
t8=C_retrieve2(lf[21],"dirseparator\077");{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
f_1996(3,av2);}}
else{
t8=t7;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_2024(2,av2);}}}

/* k5998 in doloop1353 in k5898 in k5895 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in ... */
static void C_ccall f_6000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6000,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_u_i_cdr(t2));
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5905(t5,((C_word*)t0)[4],t4);}

/* k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2042(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2042,2,av);}
a=C_alloc(49);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2061,tmp=(C_word)a,a+=2,tmp);
t4=C_mutate2(&lf[29] /* (set! lookup-script-file ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2112,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t5=C_SCHEME_UNDEFINED;
t6=C_a_i_vector(&a,32,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5);
t7=C_mutate2(&lf[38] /* (set! history-list ...) */,t6);
t8=lf[18] /* history-count */ =C_fix(1);;
t9=C_fast_retrieve(lf[39]);
t10=C_mutate2(&lf[40] /* (set! history-add ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2219,a[2]=t9,tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2(&lf[19] /* (set! history-ref ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2318,tmp=(C_word)a,a+=2,tmp));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2343,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6882,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:255: repl-prompt */
t14=C_fast_retrieve(lf[397]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t14;
av2[1]=t12;
av2[2]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(3,av2);}}

/* k2699 in a2696 in k2684 in a2681 in k2675 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2701,2,av);}{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
C_apply_values(3,av2);}}

/* k2706 in a2696 in k2684 in a2681 in k2675 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2708,2,av);}
/* csi.scm:347: ##sys#display-times */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[78]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[78]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* for-each-loop421 in k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 in ... */
static void C_fcall f_3346(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3346,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3356,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:480: g422 */
t5=((C_word*)t0)[3];
f_3180(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5415 in k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5417,2,av);}
t2=((C_word*)t0)[2];
f_5190(t2,C_SCHEME_FALSE);}

/* k4546 in k4522 in body684 in dump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4548,2,av);}
/* csi.scm:747: hexdump */
f_4645(((C_word*)t0)[2],((C_word*)t0)[3],t1,*((C_word*)lf[216]+1),((C_word*)t0)[4]);}

/* k3354 in for-each-loop421 in k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in ... */
static void C_ccall f_3356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3356,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3346(t3,((C_word*)t0)[4],t2);}

/* k2651 in for-each-loop245 in k2619 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2653,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2643(t3,((C_word*)t0)[4],t2);}

/* k4936 in k4933 in k4930 in k4927 in k4924 in k4921 in k4918 in k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in ... */
static void C_ccall f_4938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4938,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4941,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* csi.scm:829: newline */
t3=*((C_word*)lf[15]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4933 in k4930 in k4927 in k4924 in k4921 in k4918 in k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in ... */
static void C_ccall f_4935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4935,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4938,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[10])){
/* csi.scm:828: prin1 */
f_4851(t2,((C_word*)t0)[10]);}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4938(2,av2);}}}

/* k6719 in a6710 in k6703 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_6721(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6721,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_i_cdr(((C_word*)t0)[2]);
t5=C_i_car(t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6734,a[2]=t3,a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:914: rename997 */
t8=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[375];
((C_proc)C_fast_retrieve_proc(t8))(3,av2);}}
else{
/* csi.scm:914: ##sys#syntax-rules-mismatch */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[376]);
C_word av2[3];
av2[0]=*((C_word*)lf[376]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}}

/* k2022 in chop-separator in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2024,2,av);}
if(C_truep(t1)){
/* csi.scm:179: substring */
t2=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4989 in k4986 in k4983 in doloop831 in k4965 in g818 in k4939 in k4936 in k4933 in k4930 in k4927 in k4924 in k4921 in k4918 in k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in ... */
static void C_ccall f_4991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4991,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4994,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[6],((C_word*)t0)[2]);
/* csi.scm:839: prin1 */
f_4851(t2,t3);}

/* k4818 in k4815 in doloop731 in k4689 in k4686 in doloop721 in hexdump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4820,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4763(t4,((C_word*)t0)[5],t2,t3);}

/* k4992 in k4989 in k4986 in k4983 in doloop831 in k4965 in g818 in k4939 in k4936 in k4933 in k4930 in k4927 in k4924 in k4921 in k4918 in k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in ... */
static void C_ccall f_4994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4994,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4997,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:840: newline */
t3=*((C_word*)lf[15]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2727 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2729,2,av);}
/* csi.scm:354: describe */
t2=C_retrieve2(lf[63],"describe");
f_3488(t2,((C_word*)t0)[2],C_fast_retrieve(lf[82]),C_SCHEME_END_OF_LIST);}

/* k4529 in k4522 in body684 in dump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4531(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4531,2,av);}
/* csi.scm:746: hexdump */
f_4645(((C_word*)t0)[2],((C_word*)t0)[3],t1,*((C_word*)lf[216]+1),((C_word*)t0)[4]);}

/* for-each-loop245 in k2619 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_2643(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2643,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2653,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:343: g246 */
t5=((C_word*)t0)[3];
f_2622(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* for-each-loop601 in k4258 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in ... */
static void C_fcall f_4329(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4329,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4339,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:707: g602 */
t5=((C_word*)t0)[3];
f_4261(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3486(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,6)))){
C_save_and_reclaim((void *)f_3486,2,av);}
a=C_alloc(19);
t2=C_mutate2(&lf[149] /* (set! describer-table ...) */,t1);
t3=*((C_word*)lf[150]+1);
t4=*((C_word*)lf[151]+1);
t5=*((C_word*)lf[152]+1);
t6=C_mutate2(&lf[63] /* (set! describe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3488,a[2]=t5,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t7=C_mutate2((C_word*)lf[241]+1 /* (set! set-describer! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4488,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate2(&lf[65] /* (set! dump ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4497,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate2(&lf[215] /* (set! hexdump ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4645,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate2(&lf[97] /* (set! show-frameinfo ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4848,tmp=(C_word)a,a+=2,tmp));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5420,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6705,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:913: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[378]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[378]+1);
av2[1]=t12;
tp(2,av2);}}

/* describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_3488(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_3488,4,t0,t1,t2,t3);}
a=C_alloc(17);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[91]+1):C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3494,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3626,a[2]=t1,a[3]=t2,a[4]=t6,a[5]=t7,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_permanentp(t2))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4480,a[2]=t8,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:599: ##sys#block-address */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[240]);
C_word av2[3];
av2[0]=*((C_word*)lf[240]+1);
av2[1]=t9;
av2[2]=t2;
tp(3,av2);}}
else{
t9=t8;{
C_word av2[2];
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
f_3626(2,av2);}}}

/* a2709 in k2675 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_2710,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2714,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:349: history-add */
t4=C_retrieve2(lf[40],"history-add");
f_2219(t4,t3,t2);}

/* k2712 in a2709 in k2675 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2714,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
C_apply(4,av2);}}

/* k4983 in doloop831 in k4965 in g818 in k4939 in k4936 in k4933 in k4930 in k4927 in k4924 in k4921 in k4918 in k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in ... */
static void C_ccall f_4985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_4985,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4988,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* csi.scm:835: ##sys#print */
t4=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4815 in doloop731 in k4689 in k4686 in doloop721 in hexdump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4817,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4820,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4835,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4839,a[2]=((C_word*)t0)[7],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:783: ref */
t5=((C_word*)t0)[8];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
av2[3]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}

/* k4995 in k4992 in k4989 in k4986 in k4983 in doloop831 in k4965 in g818 in k4939 in k4936 in k4933 in k4930 in k4927 in k4924 in k4921 in k4918 in k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in ... */
static void C_ccall f_4997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4997,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=((C_word*)((C_word*)t0)[4])[1];
f_4972(t5,((C_word*)t0)[5],t2,t4);}

/* k4522 in body684 in dump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_4524,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4531,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* csi.scm:746: bestlen */
t4=((C_word*)t0)[5];
f_4502(t4,t2,t3);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4548,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* csi.scm:747: bestlen */
t4=((C_word*)t0)[5];
f_4502(t4,t2,t3);}
else{
t2=C_immp(((C_word*)t0)[3]);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_anypointerp(((C_word*)t0)[3]));
if(C_truep(t3)){
/* csi.scm:749: hexdump */
f_4645(((C_word*)t0)[2],((C_word*)t0)[3],C_fix(32),*((C_word*)lf[246]+1),((C_word*)t0)[4]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4567,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_structurep(((C_word*)t0)[3]))){
t5=C_slot(((C_word*)t0)[3],C_fix(0));
t6=t4;
f_4567(t6,C_i_assq(t5,C_retrieve2(lf[147],"bytevector-data")));}
else{
t5=t4;
f_4567(t5,C_SCHEME_FALSE);}}}}}

/* k2636 in k2619 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2638,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=*((C_word*)lf[41]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2630 in a2627 in g246 in k2619 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2632,2,av);}
/* csi.scm:344: print* */
t2=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[75];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6703 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_6705,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6709,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6711,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:914: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[377]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[377]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* doloop831 in k4965 in g818 in k4939 in k4936 in k4933 in k4930 in k4927 in k4924 in k4921 in k4918 in k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in ... */
static void C_fcall f_4972(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_4972,4,t0,t1,t2,t3);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=*((C_word*)lf[91]+1);
t5=*((C_word*)lf[91]+1);
t6=C_i_check_port_2(*((C_word*)lf[91]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[84]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4985,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t4,tmp=(C_word)a,a+=9,tmp);
/* csi.scm:835: ##sys#print */
t8=*((C_word*)lf[92]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[252];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[91]+1);
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}

/* k4986 in k4983 in doloop831 in k4965 in g818 in k4939 in k4936 in k4933 in k4930 in k4927 in k4924 in k4921 in k4918 in k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in ... */
static void C_ccall f_4988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_4988,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4991,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:835: ##sys#print */
t3=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[251];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* fail in a5222 in k5188 in k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_5226(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_5226,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5230,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:881: display */
t4=*((C_word*)lf[99]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a2627 in g246 in k2619 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2628,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2632,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:344: pretty-print */
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2619 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2621(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2621,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2622,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2638,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2643,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_2643(t7,t3,t1);}

/* g246 in k2619 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_2622(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_2622,3,t0,t1,t2);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2628,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:344: g261 */
t4=((C_word*)t0)[3];{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[76];
av2[4]=t3;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k6707 in k6703 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6709,2,av);}
/* csi.scm:913: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[370]);
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[370]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[371];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* a5222 in k5188 in k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5223(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5223,3,av);}
a=C_alloc(12);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5226,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5245,a[2]=t3,a[3]=t5,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_5245(t7,t1,((C_word*)t0)[4]);}

/* a4301 in loop in k4263 in g602 in k4258 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in ... */
static void C_ccall f_4302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4302,2,av);}
t2=C_i_cdar(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
/* csi.scm:716: fprintf */
t4=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[227];
av2[4]=t2;
av2[5]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}

/* k6515 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in ... */
static void C_ccall f_6517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6517,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6520,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1917,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:80: display */
t5=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[347];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_5833(2,av2);}}}

/* k6509 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in ... */
static void C_ccall f_6511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6511,2,av);}
/* csi.scm:1032: exit */
t2=C_fast_retrieve(lf[57]);{
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

/* bestlen in body684 in dump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_4502(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_4502,3,t0,t1,t2);}
if(C_truep(((C_word*)t0)[2])){
/* csi.scm:744: min */
t3=*((C_word*)lf[243]+1);{
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

/* k2610 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2612,2,av);}
/* csi.scm:339: string-split */
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

/* ##sys#read-prompt-hook in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2358(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2358,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2365,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_fudge(C_fix(12));
if(C_truep(t3)){
if(C_truep(t3)){
/* csi.scm:273: old */
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
/* csi.scm:266: ##sys#tty-port? */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=*((C_word*)lf[47]+1);
tp(3,av2);}}}

/* k6760 in k6752 in k6772 in k6732 in k6719 in a6710 in k6703 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6762(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_6762,2,av);}
a=C_alloc(21);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,((C_word*)t0)[5],t6);
t8=((C_word*)t0)[6];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[7],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k4337 in for-each-loop601 in k4258 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in ... */
static void C_ccall f_4339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4339,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4329(t3,((C_word*)t0)[4],t2);}

/* map-loop1164 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in ... */
static void C_fcall f_6525(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6525,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6550,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1004: g1170 */
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

/* k2765 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2767,2,av);}
a=C_alloc(4);
t2=(C_truep(t1)?t1:C_retrieve2(lf[8],"default-editor"));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2774,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:359: read-line */
t5=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k2761 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2763,2,av);}
/* csi.scm:356: system */
t2=C_fast_retrieve(lf[86]);{
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

/* k6518 in k6515 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in ... */
static void C_ccall f_6520(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6520,2,av);}
/* csi.scm:1029: exit */
t2=C_fast_retrieve(lf[57]);{
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

/* k4965 in g818 in k4939 in k4936 in k4933 in k4930 in k4927 in k4924 in k4921 in k4918 in k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in ... */
static void C_ccall f_4967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4967,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4972,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4972(t5,((C_word*)t0)[4],C_fix(0),((C_word*)t0)[5]);}

/* a2307 in k2291 in k2288 in k2285 in doloop120 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2308,2,av);}
t2=C_i_vector_ref(C_retrieve2(lf[38],"history-list"),((C_word*)t0)[2]);
/* csi.scm:246: ##sys#print */
t3=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=*((C_word*)lf[91]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5201 in compare in k5188 in k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5203,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_string_equal_p(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6732 in k6719 in a6710 in k6703 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6734,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6774,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:914: rename997 */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[374];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_2437(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_2437,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_assq(t2,C_retrieve2(lf[48],"command-table"));
if(C_truep(t3)){
t4=((C_word*)t0)[3];
t5=C_i_cadr(t3);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2454,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:307: g201 */
t7=t5;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)C_fast_retrieve_proc(t7))(2,av2);}}
else{
t4=C_eqp(t2,lf[58]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2469,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:314: read */
t6=*((C_word*)lf[60]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_eqp(t2,lf[61]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2492,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:318: read */
t7=*((C_word*)lf[60]+1);{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=C_eqp(t2,lf[62]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2510,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:323: read */
t8=*((C_word*)lf[60]+1);{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=C_eqp(t2,lf[64]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2525,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:327: read */
t9=*((C_word*)lf[60]+1);{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t8=C_eqp(t2,lf[66]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2540,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:331: read */
t10=*((C_word*)lf[60]+1);{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t9=C_eqp(t2,lf[67]);
if(C_truep(t9)){
/* csi.scm:336: report */
t10=C_retrieve2(lf[68],"report");
f_3139(t10,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}
else{
t10=C_eqp(t2,lf[69]);
if(C_truep(t10)){
/* csi.scm:337: ##sys#quit-hook */
t11=C_fast_retrieve(lf[70]);{
C_word av2[3];
av2[0]=t11;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_FALSE;
f_5926(3,av2);}}
else{
t11=C_eqp(t2,lf[71]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2579,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2612,a[2]=((C_word*)t0)[7],a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:339: read-line */
t14=((C_word*)t0)[8];{
C_word av2[2];
av2[0]=t14;
av2[1]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
t12=C_eqp(t2,lf[73]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2621,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2668,a[2]=((C_word*)t0)[7],a[3]=t13,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:343: read-line */
t15=((C_word*)t0)[8];{
C_word av2[2];
av2[0]=t15;
av2[1]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}
else{
t13=C_eqp(t2,lf[77]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2677,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:347: read */
t15=*((C_word*)lf[60]+1);{
C_word av2[2];
av2[0]=t15;
av2[1]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}
else{
t14=C_eqp(t2,lf[81]);
if(C_truep(t14)){
if(C_truep(C_fast_retrieve(lf[82]))){
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2729,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t16=C_a_i_list1(&a,1,C_fast_retrieve(lf[82]));
/* csi.scm:353: history-add */
t17=C_retrieve2(lf[40],"history-add");
f_2219(t17,t15,t16);}
else{
t15=C_SCHEME_UNDEFINED;
t16=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t16;
av2[1]=t15;
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}}
else{
t15=C_eqp(t2,lf[83]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2745,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2763,a[2]=t16,tmp=(C_word)a,a+=3,tmp);
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2767,a[2]=t17,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:358: editor-command */
t19=C_fast_retrieve(lf[6]);{
C_word av2[2];
av2[0]=t19;
av2[1]=t18;
((C_proc)(void*)(*((C_word*)t19+1)))(2,av2);}}
else{
t16=C_eqp(t2,lf[88]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2783,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t18=*((C_word*)lf[41]+1);
/* csi.scm:235: vector-fill! */
t19=*((C_word*)lf[89]+1);{
C_word av2[4];
av2[0]=t19;
av2[1]=t17;
av2[2]=C_retrieve2(lf[38],"history-list");
av2[3]=*((C_word*)lf[41]+1);
((C_proc)(void*)(*((C_word*)t19+1)))(4,av2);}}
else{
t17=C_eqp(t2,lf[90]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2795,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2274,a[2]=t20,tmp=(C_word)a,a+=3,tmp));
t22=((C_word*)t20)[1];
f_2274(t22,t18,C_fix(1));}
else{
t18=C_eqp(t2,lf[96]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2807,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:369: show-frameinfo */
f_4848(t19,C_retrieve2(lf[7],"selected-frame"));}
else{
t19=C_eqp(t2,lf[98]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2819,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2826,a[2]=t20,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:372: read */
t22=*((C_word*)lf[60]+1);{
C_word av2[2];
av2[0]=t22;
av2[1]=t21;
((C_proc)(void*)(*((C_word*)t22+1)))(2,av2);}}
else{
t20=C_eqp(t2,lf[102]);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2839,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:375: read */
t22=*((C_word*)lf[60]+1);{
C_word av2[2];
av2[0]=t22;
av2[1]=t21;
((C_proc)(void*)(*((C_word*)t22+1)))(2,av2);}}
else{
t21=C_eqp(t2,lf[110]);
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2848,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:377: read-line */
t23=((C_word*)t0)[8];{
C_word av2[2];
av2[0]=t23;
av2[1]=t22;
((C_proc)(void*)(*((C_word*)t23+1)))(2,av2);}}
else{
t22=C_eqp(t2,lf[111]);
if(C_truep(t22)){
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2867,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:382: display */
t24=*((C_word*)lf[99]+1);{
C_word av2[3];
av2[0]=t24;
av2[1]=t23;
av2[2]=lf[113];
((C_proc)(void*)(*((C_word*)t24+1)))(3,av2);}}
else{
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2918,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:413: printf */
t24=*((C_word*)lf[84]+1);{
C_word av2[4];
av2[0]=t24;
av2[1]=t23;
av2[2]=lf[114];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t24+1)))(4,av2);}}}}}}}}}}}}}}}}}}}}}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2964,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2970,a[2]=((C_word*)t0)[10],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:416: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}}

/* k4942 in k4939 in k4936 in k4933 in k4930 in k4927 in k4924 in k4921 in k4918 in k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in ... */
static void C_ccall f_4944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4944,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
t5=((C_word*)((C_word*)t0)[4])[1];
f_4883(t5,((C_word*)t0)[5],t3,t4);}

/* k4939 in k4936 in k4933 in k4930 in k4927 in k4924 in k4921 in k4918 in k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in ... */
static void C_ccall f_4941(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4941,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4944,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_truep(((C_word*)t0)[6])?((C_word*)t0)[7]:C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4957,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp);
t5=C_slot(((C_word*)t0)[9],C_fix(2));
t6=C_slot(((C_word*)t0)[9],C_fix(3));
t7=C_i_check_list_2(t5,lf[106]);
t8=C_i_check_list_2(t6,lf[106]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5031,a[2]=t10,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_5031(t12,t2,t5,t6);}
else{
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
t7=((C_word*)((C_word*)t0)[4])[1];
f_4883(t7,((C_word*)t0)[5],t5,t6);}}

/* loop in k2126 in k2114 in lookup-script-file in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_2090(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2090,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2103,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_subchar(((C_word*)t0)[4],t2);
/* csi.scm:199: proc */
t5=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}}

/* k1876 */
static void C_ccall f_1878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1878,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1881,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* g818 in k4939 in k4936 in k4933 in k4930 in k4927 in k4924 in k4921 in k4918 in k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in ... */
static void C_fcall f_4957(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4957,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4967,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:834: display */
t5=*((C_word*)lf[99]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[253];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2421,3,av);}
a=C_alloc(11);
if(C_truep(C_eofp(t2))){
/* csi.scm:302: exit */
t3=C_fast_retrieve(lf[57]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2437,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(0));
t5=t3;
f_2437(t5,C_eqp(lf[115],t4));}
else{
t4=t3;
f_2437(t4,C_SCHEME_FALSE);}}}

/* k4930 in k4927 in k4924 in k4921 in k4918 in k4915 in k4912 in doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in ... */
static void C_ccall f_4932(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4932,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4935,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[11])){
t3=*((C_word*)lf[91]+1);
t4=*((C_word*)lf[91]+1);
t5=C_i_check_port_2(*((C_word*)lf[91]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[84]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5075,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:827: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[95]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t6;
av2[2]=C_make_character(91);
av2[3]=*((C_word*)lf[91]+1);
tp(4,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4935(2,av2);}}}

/* k4805 in doloop739 in doloop731 in k4689 in k4686 in doloop721 in hexdump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4807,2,av);}
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4797(t3,((C_word*)t0)[4],t2);}

/* k6499 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in ... */
static void C_ccall f_6501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6501,2,av);}
/* csi.scm:1036: print */
t2=*((C_word*)lf[10]+1);{
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

/* k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_1887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1887,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1890,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k2781 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2783,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=*((C_word*)lf[41]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1879 in k1876 */
static void C_ccall f_1881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1881,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1884,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k6902 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6904,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_1911(t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6913,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:72: get-environment-variable */
t3=C_fast_retrieve(lf[36]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[401];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k1882 in k1879 in k1876 */
static void C_ccall f_1884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1884,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1887,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_ports_toplevel(2,av2);}}

/* k6898 in k6888 in a6881 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6900,2,av);}
/* csi.scm:261: sprintf */
t2=*((C_word*)lf[197]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[393];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a6710 in k6703 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6711(C_word c,C_word *av){
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
C_word t10;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6711,5,av);}
a=C_alloc(6);
t5=C_i_cdr(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6721,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t6))){
t8=C_i_cdr(t6);
if(C_truep(C_i_pairp(t8))){
t9=C_i_cdr(t8);
t10=t7;
f_6721(t10,C_eqp(t9,C_SCHEME_END_OF_LIST));}
else{
t9=t7;
f_6721(t9,C_SCHEME_FALSE);}}
else{
t8=t7;
f_6721(t8,C_SCHEME_FALSE);}}

/* k2069 in k2066 in addext in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2071,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2077,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:194: file-exists? */
t4=C_fast_retrieve(lf[26]);{
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

/* k2075 in k2069 in k2066 in addext in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2077,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2772 in k2765 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2774,2,av);}
/* csi.scm:357: string-append */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[87];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6559 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in ... */
static void C_ccall f_6561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6561,2,av);}
if(C_truep(t1)){
t2=t1;
/* csi.scm:1005: string-split */
t3=C_fast_retrieve(lf[33]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=lf[349];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* csi.scm:1005: string-split */
t2=C_fast_retrieve(lf[33]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[350];
av2[3]=lf[349];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2343(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_2343,2,av);}
a=C_alloc(19);
t2=C_set_block_item(lf[44] /* ##sys#break-on-error */,0,C_SCHEME_FALSE);
t3=C_fast_retrieve(lf[45]);
t4=C_mutate2((C_word*)lf[45]+1 /* (set! ##sys#read-prompt-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2358,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=lf[48] /* command-table */ =C_SCHEME_END_OF_LIST;;
t6=C_mutate2((C_word*)lf[49]+1 /* (set! toplevel-command ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2371,tmp=(C_word)a,a+=2,tmp));
t7=C_fast_retrieve(lf[50]);
t8=C_fast_retrieve(lf[51]);
t9=C_fast_retrieve(lf[52]);
t10=C_fast_retrieve(lf[33]);
t11=C_fast_retrieve(lf[53]);
t12=C_fast_retrieve(lf[54]);
t13=*((C_word*)lf[55]+1);
t14=C_mutate2(&lf[56] /* (set! csi-eval ...) */,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2421,a[2]=t12,a[3]=t11,a[4]=t7,a[5]=t10,a[6]=t9,a[7]=t8,a[8]=t13,tmp=(C_word)a,a+=9,tmp));
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2990,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6817,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:423: toplevel-command */
t17=C_fast_retrieve(lf[49]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t17;
av2[1]=t15;
av2[2]=lf[390];
av2[3]=t16;
av2[4]=lf[391];
f_2371(5,av2);}}

/* k2793 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2795,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=*((C_word*)lf[41]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6305 in k6299 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in ... */
static void C_ccall f_6307(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6307,2,av);}
a=C_alloc(13);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_retrieve2(lf[23],"chop-separator");
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6314,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=t7,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
/* csi.scm:1054: collect-options */
t9=((C_word*)((C_word*)t0)[4])[1];
f_5694(t9,t8,lf[327]);}

/* k6299 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in ... */
static void C_ccall f_6301(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6301,2,av);}
a=C_alloc(13);
t2=C_i_check_list_2(t1,lf[230]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6307,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6356,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6356(t7,t3,t1);}

/* descseq in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3494(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3494,6,av);}
a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3623,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* csi.scm:576: plen */
t7=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}

/* k2743 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2745,2,av);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* csi.scm:361: printf */
t3=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[85];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k4844 in doloop721 in hexdump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4846,2,av);}
/* csi.scm:771: display */
t2=*((C_word*)lf[99]+1);{
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

/* show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_4848(C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4848,2,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4851,tmp=(C_word)a,a+=2,tmp);
t4=C_fast_retrieve(lf[101]);
t5=(C_truep(C_fast_retrieve(lf[101]))?C_fast_retrieve(lf[101]):C_SCHEME_END_OF_LIST);
t6=t5;
t7=C_i_length(t6);
t8=t7;
t9=t2;
t10=(C_truep(C_u_i_memq(t9,t6))?t2:C_SCHEME_FALSE);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4874,a[2]=t8,a[3]=t3,a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t10)){
t12=t11;
f_4874(t12,t10);}
else{
if(C_truep(C_fixnum_greaterp(t8,C_fix(0)))){
t12=C_fixnum_difference(t8,C_fix(1));
t13=t11;
f_4874(t13,C_i_list_ref(t6,t12));}
else{
t12=t11;
f_4874(t12,C_SCHEME_FALSE);}}}

/* k6312 in k6305 in k6299 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in ... */
static void C_ccall f_6314(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6314,2,av);}
a=C_alloc(13);
t2=C_i_check_list_2(t1,lf[230]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6322,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6322(t7,t3,t1);}

/* doloop536 in k3793 in k3781 in k3778 in k3775 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 in ... */
static void C_fcall f_3800(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3800,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3810,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(t2);
/* csi.scm:637: fprintf */
t5=*((C_word*)lf[153]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[179];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k2363 in read-prompt-hook in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2365,2,av);}
if(C_truep(t1)){
/* csi.scm:273: old */
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2452 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2454,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=*((C_word*)lf[41]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3814 in k3811 in k3808 in doloop536 in k3793 in k3781 in k3778 in k3775 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in ... */
static void C_ccall f_3816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3816,2,av);}
t2=C_i_cddr(((C_word*)t0)[2]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_3800(t3,((C_word*)t0)[4],t2);}

/* k6595 in k6586 in k6583 in k6580 in k6577 in k6574 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in ... */
static void C_ccall f_6597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6597,2,av);}
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_5671(t3,C_i_set_car(t2,t1));}
else{
t2=((C_word*)t0)[3];
f_5671(t2,C_SCHEME_FALSE);}}

/* k4837 in k4815 in doloop731 in k4689 in k4686 in doloop721 in hexdump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4839,2,av);}
/* csi.scm:783: justify */
f_4648(((C_word*)t0)[3],t1,C_fix(2),C_fix(16),C_make_character(48));}

/* k1888 in k1885 in k1882 in k1879 in k1876 */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1890,2,av);}
a=C_alloc(6);
t2=C_mutate2(&lf[0] /* (set! constant8 ...) */,lf[1]);
t3=C_set_block_item(lf[2] /* ##sys#repl-print-length-limit */,0,C_fix(2048));
t4=C_a_i_cons(&a,2,lf[3],C_fast_retrieve(lf[4]));
t5=C_mutate2((C_word*)lf[4]+1 /* (set! ##sys#features ...) */,t4);
t6=C_set_block_item(lf[5] /* ##sys#notices-enabled */,0,C_SCHEME_TRUE);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1903,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:66: make-parameter */
t8=C_fast_retrieve(lf[404]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k4833 in k4815 in doloop731 in k4689 in k4686 in doloop721 in hexdump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4835,2,av);}
/* csi.scm:783: display */
t2=*((C_word*)lf[99]+1);{
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

/* k3808 in doloop536 in k3793 in k3781 in k3778 in k3775 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in ... */
static void C_ccall f_3810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3810,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3813,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3825,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:638: ##sys#with-print-length-limit */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[93]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t2;
av2[2]=C_fix(1000);
av2[3]=t3;
tp(4,av2);}}

/* k3811 in k3808 in doloop536 in k3793 in k3781 in k3778 in k3775 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in ... */
static void C_ccall f_3813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3813,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3816,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:642: newline */
t3=*((C_word*)lf[15]+1);{
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

/* k5293 in doloop929 in g916 in doloop901 in a5222 in k5188 in k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5295,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=((C_word*)((C_word*)t0)[4])[1];
f_5285(t5,((C_word*)t0)[5],t2,t4);}

/* k5727 in g1203 in loop in collect-options in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in ... */
static void C_ccall f_5729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5729,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3824 in k3808 in doloop536 in k3793 in k3781 in k3778 in k3775 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in ... */
static void C_ccall f_3825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3825,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* csi.scm:641: write */
t3=*((C_word*)lf[178]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* addext in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_2061(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2061,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2068,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:191: file-exists? */
t4=C_fast_retrieve(lf[26]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2066 in addext in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2068,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2071,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[27]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t2;
av2[2]=t3;
av2[3]=lf[28];
tp(4,av2);}}}

/* k4575 in k4565 in k4522 in body684 in dump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4577,2,av);}
/* csi.scm:752: hexdump */
f_4645(((C_word*)t0)[2],((C_word*)t0)[3],t1,*((C_word*)lf[216]+1),((C_word*)t0)[4]);}

/* k2817 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2819,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=*((C_word*)lf[41]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* doloop929 in g916 in doloop901 in a5222 in k5188 in k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_5285(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_5285,4,t0,t1,t2,t3);}
a=C_alloc(15);
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5295,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5307,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=t3,a[7]=((C_word*)t0)[2],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t6=C_i_car(t3);
/* csi.scm:897: compare */
t7=((C_word*)t0)[5];
f_5192(t7,t5,t6);}}

/* k6568 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 in ... */
static void C_ccall f_6570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6570,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_5677(t3,t2);}
else{
t2=((C_word*)t0)[2];
f_5677(t2,((C_word*)t0)[3]);}}

/* k6574 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6576,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6579,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* csi.scm:987: program-name */
t4=C_fast_retrieve(lf[357]);{
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

/* k6577 in k6574 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_6579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6579,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6582,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
/* csi.scm:988: command-line-arguments */
t5=C_fast_retrieve(lf[297]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4565 in k4522 in body684 in dump in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_4567(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_4567,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4577,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_block_size(t3);
/* csi.scm:752: bestlen */
t6=((C_word*)t0)[5];
f_4502(t6,t4,t5);}
else{
/* csi.scm:753: ##sys#error */
t2=*((C_word*)lf[42]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[244];
av2[3]=lf[247];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k6345 in map-loop1313 in k6312 in k6305 in k6299 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in ... */
static void C_ccall f_6347(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6347,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6322(t6,((C_word*)t0)[5],t5);}

/* k5268 in doloop901 in a5222 in k5188 in k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5270,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)((C_word*)t0)[3])[1];
f_5245(t4,((C_word*)t0)[4],t3);}

/* toplevel-command in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +12,c,2)))){
C_save_and_reclaim((void*)f_2371,c,av);}
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
t8=C_i_check_symbol_2(t2,lf[49]);
t9=(C_truep(t7)?C_i_check_string_2(t7,lf[49]):C_SCHEME_UNDEFINED);
t10=C_i_assq(t2,C_retrieve2(lf[48],"command-table"));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2391,a[2]=t3,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t12=(
  /* csi.scm:280: g166 */
  f_2391(C_a_i(&a,6),t11,t10)
);
t13=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=*((C_word*)lf[41]+1);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t11=C_a_i_list3(&a,3,t2,t3,t7);
t12=C_a_i_cons(&a,2,t11,C_retrieve2(lf[48],"command-table"));
t13=C_mutate2(&lf[48] /* (set! command-table ...) */,t12);
t14=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=*((C_word*)lf[41]+1);
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}}

/* k2675 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2677,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2682,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2710,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:347: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* g916 in doloop901 in a5222 in k5188 in k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_5279(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_5279,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5285,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5285(t7,t1,C_fix(0),t2);}

/* loop in collect-options in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in ... */
static void C_fcall f_5700(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_5700,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_member(((C_word*)t0)[2],t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5708,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1000: g1203 */
t5=t4;
f_5708(t5,t1,t3);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* g1203 in loop in collect-options in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in ... */
static void C_fcall f_5708(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_5708,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
/* csi.scm:1013: ##sys#error */
t4=*((C_word*)lf[42]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[271];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=C_i_cadr(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5729,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_u_i_cdr(t8);
/* csi.scm:1014: loop */
t10=((C_word*)((C_word*)t0)[3])[1];
f_5700(t10,t6,t9);}}

/* doloop783 in k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_4883(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_4883,4,t0,t1,t2,t3);}
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
t6=C_eqp(C_retrieve2(lf[7],"selected-frame"),t5);
t7=t6;
t8=C_slot(t5,C_fix(1));
t9=t8;
t10=C_slot(t5,C_fix(2));
t11=t10;
t12=C_i_structurep(t11,lf[104]);
t13=t12;
t14=(C_truep(t13)?C_slot(t11,C_fix(1)):t11);
t15=t14;
t16=*((C_word*)lf[91]+1);
t17=*((C_word*)lf[91]+1);
t18=C_i_check_port_2(*((C_word*)lf[91]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[84]);
t19=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4914,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t7,a[7]=t13,a[8]=((C_word*)t0)[3],a[9]=t11,a[10]=t9,a[11]=t15,a[12]=t16,a[13]=t5,tmp=(C_word)a,a+=14,tmp);
if(C_truep(t7)){
/* csi.scm:813: ##sys#print */
t20=*((C_word*)lf[92]+1);{
C_word av2[5];
av2[0]=t20;
av2[1]=t19;
av2[2]=C_make_character(42);
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[91]+1);
((C_proc)(void*)(*((C_word*)t20+1)))(5,av2);}}
else{
/* csi.scm:813: ##sys#print */
t20=*((C_word*)lf[92]+1);{
C_word av2[5];
av2[0]=t20;
av2[1]=t19;
av2[2]=C_make_character(32);
av2[3]=C_SCHEME_FALSE;
av2[4]=t16;
((C_proc)(void*)(*((C_word*)t20+1)))(5,av2);}}}}

/* k6580 in k6577 in k6574 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 in ... */
static void C_ccall f_6582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6582,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:990: register-feature! */
t3=C_fast_retrieve(lf[274]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[356];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6583 in k6580 in k6577 in k6574 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in ... */
static void C_ccall f_6585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6585,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6588,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:991: register-feature! */
t3=C_fast_retrieve(lf[274]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[355];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6586 in k6583 in k6580 in k6577 in k6574 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in ... */
static void C_ccall f_6588(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6588,2,av);}
a=C_alloc(4);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_i_set_i_slot(t2,C_fix(1),C_SCHEME_END_OF_LIST);
if(C_truep(*((C_word*)lf[22]+1))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6597,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_i_cadr(((C_word*)t0)[2]);
/* csi.scm:994: lookup-script-file */
t6=C_retrieve2(lf[29],"lookup-script-file");
f_2112(t6,t4,t5);}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
f_5671(t5,t4);}}

/* map-loop1287 in k6299 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in ... */
static void C_fcall f_6356(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6356,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6381,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1053: g1293 */
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

/* k2666 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2668,2,av);}
/* csi.scm:343: string-split */
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

/* a3579 in loop2 in k3527 in loop1 in k3499 in k3621 in descseq in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 in ... */
static void C_ccall f_3580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3580,2,av);}
/* csi.scm:589: fprintf */
t2=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[158];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k4872 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_4874(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_4874,2,t0,t1);}
a=C_alloc(6);
t2=C_mutate2(&lf[7] /* (set! selected-frame ...) */,t1);
t3=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4883,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4883(t7,((C_word*)t0)[4],((C_word*)t0)[5],t3);}

/* k3856 in k3778 in k3775 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3858(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3858,2,av);}
a=C_alloc(6);
t2=(C_truep(t1)?lf[181]:lf[182]);
t3=t2;
t4=(C_truep(((C_word*)t0)[2])?lf[183]:lf[184]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3849,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
/* csi.scm:630: ##sys#symbol->qualified-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[186]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[186]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
/* csi.scm:631: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[177]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[177]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}}

/* k2824 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2826(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2826,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=t1;
t4=C_i_numberp(t3);
t5=C_i_not(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5133,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
t7=t6;
f_5133(t7,t5);}
else{
t7=C_i_not(C_fast_retrieve(lf[101]));
if(C_truep(t7)){
t8=t6;
f_5133(t8,t7);}
else{
t8=C_fixnum_lessp(t3,C_fix(0));
if(C_truep(t8)){
t9=t6;
f_5133(t9,t8);}
else{
t9=C_i_length(C_fast_retrieve(lf[101]));
t10=t6;
f_5133(t10,C_fixnum_greater_or_equal_p(t3,t9));}}}}

/* history-ref in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_2318(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_2318,2,t1,t2);}
t3=C_i_inexact_to_exact(t2);
t4=C_fixnum_greaterp(t3,C_fix(0));
t5=(C_truep(t4)?C_fixnum_less_or_equal_p(t3,C_retrieve2(lf[18],"history-count")):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_i_vector_ref(C_retrieve2(lf[38],"history-list"),t3);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
/* csi.scm:253: ##sys#error */
t6=*((C_word*)lf[42]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[43];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k3859 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3861,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_3777(2,av2);}}
else{
/* csi.scm:624: display */
t2=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[189];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* doloop901 in a5222 in k5188 in k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_5245(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_5245,3,t0,t1,t2);}
a=C_alloc(20);
if(C_truep(C_i_nullp(t2))){
/* csi.scm:885: fail */
t3=((C_word*)t0)[2];
f_5226(t3,t1,lf[103]);}
else{
t3=C_i_car(t2);
t4=C_eqp(C_retrieve2(lf[7],"selected-frame"),t3);
t5=C_slot(t3,C_fix(2));
t6=C_i_structurep(t5,lf[104]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5270,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=(C_truep(t4)?t6:C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5279,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t10=C_slot(t5,C_fix(2));
t11=C_slot(t5,C_fix(3));
t12=C_i_check_list_2(t10,lf[106]);
t13=C_i_check_list_2(t11,lf[106]);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5355,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5364,a[2]=t16,a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t18=((C_word*)t16)[1];
f_5364(t18,t14,t10,t11);}
else{
t9=t2;
t10=C_u_i_cdr(t9);
t19=t1;
t20=t10;
t1=t19;
t2=t20;
goto loop;}}}

/* k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_3873(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,5)))){
C_save_and_reclaim_args((void *)trf_3873,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3876,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:644: fprintf */
t3=*((C_word*)lf[153]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[194];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
/* csi.scm:654: descseq */
t2=((C_word*)t0)[5];{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[195];
av2[3]=((C_word*)t0)[6];
av2[4]=((C_word*)t0)[7];
av2[5]=C_fix(0);
f_3494(6,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
/* csi.scm:655: fprintf */
t6=*((C_word*)lf[153]+1);{
C_word av2[6];
av2[0]=t6;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[196];
av2[4]=t3;
av2[5]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}
else{
if(C_truep(C_i_closurep(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3980,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3984,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:659: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word av2[4];
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
tp(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3990,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:661: port? */
t3=C_fast_retrieve(lf[237]);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}}}

/* k3874 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_3876,2,av);}
a=C_alloc(9);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3885,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3885(t6,((C_word*)t0)[4],((C_word*)t0)[2],t2);}

/* k2805 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2807,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=*((C_word*)lf[41]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6379 in map-loop1287 in k6299 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in ... */
static void C_ccall f_6381(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6381,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6356(t6,((C_word*)t0)[5],t5);}

/* k5228 in fail in a5222 in k5188 in k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5230,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5233,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:882: newline */
t3=*((C_word*)lf[15]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5231 in k5228 in fail in a5222 in k5188 in k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5233,2,av);}
t2=*((C_word*)lf[41]+1);
/* csi.scm:883: return */
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=*((C_word*)lf[41]+1);
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k5743 in k6180 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in ... */
static void C_ccall f_5745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5745,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
if(C_truep(C_i_string_equal_p(t1,lf[305]))){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5757,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5770,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1019: chop-separator */
t4=C_retrieve2(lf[23],"chop-separator");{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
f_2011(3,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* loop-print in k3874 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_3885(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3885,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_not_pair_p(t2);
t5=(C_truep(t4)?t4:C_i_nullp(t2));
if(C_truep(t5)){
/* csi.scm:648: printf */
t6=*((C_word*)lf[84]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[191];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t6=C_i_car(t2);
if(C_truep(C_i_memq(t6,t3))){
/* csi.scm:650: fprintf */
t7=*((C_word*)lf[153]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[192];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t7=t2;
t8=C_u_i_car(t7);
if(C_truep(C_i_memq(t8,t3))){
t9=C_SCHEME_UNDEFINED;
t10=t1;{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3916,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t10=t2;
t11=C_u_i_car(t10);
/* csi.scm:652: fprintf */
t12=*((C_word*)lf[153]+1);{
C_word av2[5];
av2[0]=t12;
av2[1]=t9;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[193];
av2[4]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}}}}

/* for-each-loop1270 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in ... */
static void C_fcall f_6390(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6390,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6400,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1050: g1271 */
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

/* k3317 in k3289 in k3285 in k3281 in k3277 in k3273 in k3269 in k3265 in k3257 in k3229 in k3177 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in ... */
static void C_ccall f_3319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,20)))){
C_save_and_reclaim((void *)f_3319,2,av);}
/* csi.scm:497: printf */
t2=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 21) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(21);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[132];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
av2[6]=((C_word*)t0)[6];
av2[7]=((C_word*)t0)[7];
av2[8]=((C_word*)t0)[8];
av2[9]=((C_word*)t0)[9];
av2[10]=C_fast_retrieve(lf[133]);
av2[11]=((C_word*)t0)[10];
av2[12]=((C_word*)t0)[11];
av2[13]=((C_word*)t0)[12];
av2[14]=((C_word*)t0)[13];
av2[15]=((C_word*)t0)[14];
av2[16]=((C_word*)t0)[15];
av2[17]=((C_word*)t0)[16];
av2[18]=((C_word*)t0)[17];
av2[19]=((C_word*)t0)[18];
av2[20]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(21,av2);}}

/* map-loop395 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_3376(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3376,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3401,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:480: g401 */
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

/* k3372 in k3174 in k3157 in k3154 in k3151 in a3148 in k3145 in report in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3374,2,av);}
/* csi.scm:480: sort */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=*((C_word*)lf[142]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* for-each-loop292 in k2865 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_2894(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2894,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2904,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_caddr(t4);
if(C_truep(t5)){
/* csi.scm:408: print */
t6=*((C_word*)lf[10]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=C_make_character(32);
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t6=C_u_i_car(t4);
/* csi.scm:409: print */
t7=*((C_word*)lf[10]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t3;
av2[2]=lf[112];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4364 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 in ... */
static void C_ccall f_4366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4366,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4370,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:721: g631 */
t3=t2;
f_4370(t3,((C_word*)t0)[4],t1);}
else{
t2=C_i_assq(((C_word*)t0)[5],C_retrieve2(lf[147],"bytevector-data"));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4384,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:721: g642 */
t4=t3;
f_4384(t4,((C_word*)t0)[4],t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4449,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[2],C_fix(0));
/* csi.scm:727: fprintf */
t5=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[232];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}}

/* doloop1222 in k5788 in k5781 in evalstring in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in ... */
static void C_fcall f_5792(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_5792,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_eofp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5802,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5813,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5815,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1026: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t4;
av2[2]=t5;
av2[3]=*((C_word*)lf[272]+1);
C_call_with_values(4,av2);}}}

/* k5788 in k5781 in evalstring in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in ... */
static void C_ccall f_5790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5790,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5792,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_5792(t5,((C_word*)t0)[4],t1);}

/* k2846 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2848,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2851,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:378: system */
t3=C_fast_retrieve(lf[86]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5781 in evalstring in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in ... */
static void C_ccall f_5783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5783,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5790,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:1024: read */
t4=*((C_word*)lf[60]+1);{
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

/* k4390 in g642 in k4364 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in ... */
static void C_ccall f_4392(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4392,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
C_apply(4,av2);}}

/* evalstring in k5690 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in ... */
static void C_fcall f_5776(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5776,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5823,tmp=(C_word)a,a+=2,tmp):C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5783,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1023: open-input-string */
t8=C_fast_retrieve(lf[273]);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k5768 in k5743 in k6180 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in ... */
static void C_ccall f_5770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5770,2,av);}
/* csi.scm:1019: string-append */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[306];
av2[4]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k2490 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2492,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2495,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:319: eval */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2493 in k2490 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2495,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2498,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:320: pretty-print */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2496 in k2493 in k2490 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2498,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=*((C_word*)lf[41]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6548 in map-loop1164 in k5687 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in ... */
static void C_ccall f_6550(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6550,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6525(t6,((C_word*)t0)[5],t5);}

/* g166 in toplevel-command in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static C_word C_fcall f_2391(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
return(C_i_set_cdr(t1,t2));}

/* k2481 in k2467 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2483,2,av);}
/* csi.scm:315: ##sys#strip-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[59]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[59]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* g631 in k4364 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in ... */
static void C_fcall f_4370(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_4370,3,t0,t1,t2);}
/* csi.scm:722: g639 */
t3=t2;{
C_word av2[4];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k2849 in k2846 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2851,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2854,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_list1(&a,1,t2);
/* csi.scm:379: history-add */
t5=C_retrieve2(lf[40],"history-add");
f_2219(t5,t3,t4);}

/* k2852 in k2849 in k2846 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2854,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2887 in k2865 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2889,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=*((C_word*)lf[41]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2839(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2839,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=C_fast_retrieve(lf[101]);
t4=(C_truep(C_fast_retrieve(lf[101]))?C_fast_retrieve(lf[101]):C_SCHEME_END_OF_LIST);
t5=t4;
t6=C_i_length(t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5190,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_symbolp(t1))){
t8=t7;
f_5190(t8,C_slot(t1,C_fix(1)));}
else{
if(C_truep(C_i_stringp(t1))){
t8=t7;
f_5190(t8,t1);}
else{
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5417,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:870: display */
t9=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[109];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}}

/* g642 in k4364 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in ... */
static void C_fcall f_4384(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,0,3)))){
C_save_and_reclaim_args((void *)trf_4384,3,t0,t1,t2);}
a=C_alloc(20);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4392,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_fast_retrieve(lf[50]);
t9=C_i_cdr(t2);
t10=C_i_check_list_2(t9,lf[230]);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4405,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4411,a[2]=t6,a[3]=t13,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_4411(t15,t11,t9);}

/* k3699 in k3693 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3701,2,av);}
/* csi.scm:612: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[95]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[95]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[91]+1);
tp(4,av2);}}

/* k2865 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2867(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2867,2,av);}
a=C_alloc(8);
t2=C_retrieve2(lf[48],"command-table");
t3=C_i_check_list_2(C_retrieve2(lf[48],"command-table"),lf[106]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2889,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2894,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_2894(t8,t4,C_retrieve2(lf[48],"command-table"));}

/* a2690 in k2684 in a2681 in k2675 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2691,2,av);}
/* csi.scm:348: eval */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a2696 in k2684 in a2681 in k2675 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_2697,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+7);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2701,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2708,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:347: ##sys#stop-timer */
t5=*((C_word*)lf[79]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* a2681 in k2675 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2682,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2686,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:347: ##sys#start-timer */
t3=*((C_word*)lf[80]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2684 in a2681 in k2675 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2686,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2691,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2697,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:347: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* prin1 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_4851(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_4851,2,t1,t2);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4857,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:803: ##sys#with-print-length-limit */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[93]);
C_word av2[4];
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t1;
av2[2]=C_fix(100);
av2[3]=t3;
tp(4,av2);}}

/* a4856 in prin1 in show-frameinfo in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4857,2,av);}
/* csi.scm:806: ##sys#print */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_TRUE;
av2[4]=*((C_word*)lf[91]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3847 in k3856 in k3778 in k3775 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3849,2,av);}
/* csi.scm:626: fprintf */
t2=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[185];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
av2[6]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* map-loop1059 in k5520 in k5506 in loop in canonicalize-args in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_5551(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_5551,3,t0,t1,t2);}
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

/* map-loop1313 in k6312 in k6305 in k6299 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in ... */
static void C_fcall f_6322(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6322,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6347,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1054: g1319 */
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

/* k6318 in k6312 in k6305 in k6299 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in k5687 in k5681 in k5678 in k5675 in ... */
static void C_ccall f_6320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6320,2,av);}
/* csi.scm:1053: append */
t2=*((C_word*)lf[231]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_fast_retrieve(lf[133]);
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k5761 in k5755 in k5743 in k6180 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in ... */
static void C_ccall f_5763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5763,2,av);}
if(C_truep(t1)){
/* csi.scm:1021: load */
t2=C_fast_retrieve(lf[72]);{
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
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5545 in k5541 in k5520 in k5506 in loop in canonicalize-args in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5547,2,av);}
/* csi.scm:956: append */
t2=*((C_word*)lf[231]+1);{
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

/* k5541 in k5520 in k5506 in loop in canonicalize-args in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5543(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5543,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5547,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* csi.scm:956: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_5486(t6,t3,t5);}

/* k5755 in k5743 in k6180 in k5892 in k5889 in k5886 in k5883 in k5880 in k5876 in k5870 in k5867 in k5861 in k5858 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5690 in ... */
static void C_ccall f_5757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5757,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5763,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1020: file-exists? */
t4=C_fast_retrieve(lf[26]);{
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

/* k2470 in k2467 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2472,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=*((C_word*)lf[41]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4132(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4132,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4138,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:686: fprintf */
t5=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[217];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4151,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:689: ##sys#lambda-info->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[219]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[219]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
if(C_truep(C_i_structurep(((C_word*)t0)[2],lf[220]))){
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4163,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(t2,C_fix(1));
t5=(C_truep(t4)?lf[223]:lf[224]);
t6=C_slot(((C_word*)t0)[2],C_fix(3));
/* csi.scm:692: fprintf */
t7=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[225];
av2[4]=t2;
av2[5]=t5;
av2[6]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(7,av2);}}
else{
if(C_truep(C_i_structurep(((C_word*)t0)[2],lf[226]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4260,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(1));
/* csi.scm:706: fprintf */
t4=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[229];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
if(C_truep(C_structurep(((C_word*)t0)[2]))){
t2=C_slot(((C_word*)t0)[2],C_fix(0));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4366,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:722: ##sys#hash-table-ref */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[233]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[233]+1);
av2[1]=t4;
av2[2]=C_retrieve2(lf[149],"describer-table");
av2[3]=t3;
tp(4,av2);}}
else{
/* csi.scm:729: fprintf */
t2=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[234];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}}}}}

/* k2477 in k2467 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2479,2,av);}
/* csi.scm:315: pretty-print */
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

/* k4136 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 in ... */
static void C_ccall f_4138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4138,2,av);}
/* csi.scm:687: hexdump */
f_4645(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],*((C_word*)lf[216]+1),((C_word*)t0)[5]);}

/* k3793 in k3781 in k3778 in k3775 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3795,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3800,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_3800(t5,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k4124 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_4126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4126,2,av);}
/* csi.scm:683: fprintf */
t2=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[214];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k2467 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_2469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2469,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2472,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2479,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2483,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:315: expand */
t5=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5520 in k5506 in loop in canonicalize-args in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5522(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5522,2,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5629,tmp=(C_word)a,a+=2,tmp);
t3=(
  f_5629(t1)
);
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5543,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5551,a[2]=t6,a[3]=t10,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_5551(t12,t8,t1);}
else{
/* csi.scm:957: ##sys#error */
t4=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[267];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k3778 in k3775 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_3780,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3783,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3858,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:627: ##sys#interned-symbol? */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[187]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[187]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* k3775 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3777,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:625: ##sys#qualified-symbol? */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[188]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[188]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* k5506 in loop in canonicalize-args in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_fcall f_5508(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_5508,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_subchar(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_i_char_equalp(C_make_character(58),t2))){
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* csi.scm:953: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5486(t5,((C_word*)t0)[5],t4);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5522,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5590,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:954: substring */
t5=*((C_word*)lf[24]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5598,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* csi.scm:958: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5486(t5,t2,t4);}}

/* k3781 in k3778 in k3775 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3783,2,av);}
a=C_alloc(5);
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=t2;
if(C_truep(C_i_nullp(t3))){
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=*((C_word*)lf[41]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3795,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:634: display */
t5=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[180];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k5317 in k5314 in k5311 in k5308 in k5305 in doloop929 in g916 in doloop901 in a5222 in k5188 in k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in ... */
static void C_ccall f_5319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5319,2,av);}
t2=C_slot(((C_word*)t0)[2],((C_word*)t0)[3]);
/* csi.scm:902: return */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k5314 in k5311 in k5308 in k5305 in doloop929 in g916 in doloop901 in a5222 in k5188 in k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 in ... */
static void C_ccall f_5316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5316,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_list1(&a,1,t3);
/* csi.scm:901: history-add */
t5=C_retrieve2(lf[40],"history-add");
f_2219(t5,t2,t4);}

/* k5308 in k5305 in doloop929 in g916 in doloop901 in a5222 in k5188 in k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5310,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[6];
t4=C_u_i_car(t3);
/* csi.scm:899: display */
t5=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

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
if(C_unlikely(!C_demand_2(1820))){
C_save(t1);
C_rereclaim2(1820*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,405);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\006.csirc");
lf[2]=C_h_intern(&lf[2],27,"\003sysrepl-print-length-limit");
lf[3]=C_h_intern(&lf[3],4,"\000csi");
lf[4]=C_h_intern(&lf[4],12,"\003sysfeatures");
lf[5]=C_h_intern(&lf[5],19,"\003sysnotices-enabled");
lf[6]=C_h_intern(&lf[6],14,"editor-command");
lf[10]=C_h_intern(&lf[10],5,"print");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000C(c) 2008-2017, The CHICKEN Team\012(c) 2000-2007, Felix L. Winkelmann\012");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[13]=C_h_intern(&lf[13],15,"chicken-version");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\007CHICKEN");
lf[15]=C_h_intern(&lf[15],7,"newline");
lf[16]=C_h_intern(&lf[16],18,"\003sysuser-read-hook");
lf[17]=C_h_intern(&lf[17],5,"quote");
lf[20]=C_h_intern(&lf[20],21,"\003syssharp-number-hook");
lf[22]=C_h_intern(&lf[22],20,"\003syswindows-platform");
lf[24]=C_h_intern(&lf[24],9,"substring");
lf[25]=C_h_intern(&lf[25],1,"@");
lf[26]=C_h_intern(&lf[26],12,"file-exists\077");
lf[27]=C_h_intern(&lf[27],17,"\003sysstring-append");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000\004.bat");
lf[30]=C_h_intern(&lf[30],13,"string-append");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[32]=C_h_intern(&lf[32],25,"\003syspeek-nonnull-c-string");
lf[33]=C_h_intern(&lf[33],12,"string-split");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\001;");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[36]=C_h_intern(&lf[36],24,"get-environment-variable");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\004PATH");
lf[39]=C_h_intern(&lf[39],13,"vector-resize");
lf[41]=C_h_intern(&lf[41],19,"\003sysundefined-value");
lf[42]=C_h_intern(&lf[42],9,"\003syserror");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000 history entry index out of range");
lf[44]=C_h_intern(&lf[44],18,"\003sysbreak-on-error");
lf[45]=C_h_intern(&lf[45],20,"\003sysread-prompt-hook");
lf[46]=C_h_intern(&lf[46],13,"\003systty-port\077");
lf[47]=C_h_intern(&lf[47],18,"\003sysstandard-input");
lf[49]=C_h_intern(&lf[49],16,"toplevel-command");
lf[50]=C_h_intern(&lf[50],4,"eval");
lf[51]=C_h_intern(&lf[51],12,"load-noisily");
lf[52]=C_h_intern(&lf[52],9,"read-line");
lf[53]=C_h_intern(&lf[53],6,"expand");
lf[54]=C_h_intern(&lf[54],12,"pretty-print");
lf[55]=C_h_intern(&lf[55],6,"values");
lf[57]=C_h_intern(&lf[57],4,"exit");
lf[58]=C_h_intern(&lf[58],1,"x");
lf[59]=C_h_intern(&lf[59],16,"\003sysstrip-syntax");
lf[60]=C_h_intern(&lf[60],4,"read");
lf[61]=C_h_intern(&lf[61],1,"p");
lf[62]=C_h_intern(&lf[62],1,"d");
lf[64]=C_h_intern(&lf[64],2,"du");
lf[66]=C_h_intern(&lf[66],3,"dur");
lf[67]=C_h_intern(&lf[67],1,"r");
lf[69]=C_h_intern(&lf[69],1,"q");
lf[70]=C_h_intern(&lf[70],13,"\003sysquit-hook");
lf[71]=C_h_intern(&lf[71],1,"l");
lf[72]=C_h_intern(&lf[72],4,"load");
lf[73]=C_h_intern(&lf[73],2,"ln");
lf[74]=C_h_intern(&lf[74],6,"print\052");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\004==> ");
lf[76]=C_h_intern(&lf[76],8,"\000printer");
lf[77]=C_h_intern(&lf[77],1,"t");
lf[78]=C_h_intern(&lf[78],17,"\003sysdisplay-times");
lf[79]=C_h_intern(&lf[79],14,"\003sysstop-timer");
lf[80]=C_h_intern(&lf[80],15,"\003sysstart-timer");
lf[81]=C_h_intern(&lf[81],3,"exn");
lf[82]=C_h_intern(&lf[82],18,"\003syslast-exception");
lf[83]=C_h_intern(&lf[83],1,"e");
lf[84]=C_h_intern(&lf[84],6,"printf");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000,editor returned with non-zero exit status ~a");
lf[86]=C_h_intern(&lf[86],6,"system");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[88]=C_h_intern(&lf[88],2,"ch");
lf[89]=C_h_intern(&lf[89],12,"vector-fill!");
lf[90]=C_h_intern(&lf[90],1,"h");
lf[91]=C_h_intern(&lf[91],19,"\003sysstandard-output");
lf[92]=C_h_intern(&lf[92],9,"\003sysprint");
lf[93]=C_h_intern(&lf[93],27,"\003syswith-print-length-limit");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[95]=C_h_intern(&lf[95],16,"\003syswrite-char-0");
lf[96]=C_h_intern(&lf[96],1,"c");
lf[98]=C_h_intern(&lf[98],1,"f");
lf[99]=C_h_intern(&lf[99],7,"display");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000\016no such frame\012");
lf[101]=C_h_intern(&lf[101],26,"\003sysrepl-recent-call-chain");
lf[102]=C_h_intern(&lf[102],1,"g");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\027no environment in frame");
lf[104]=C_h_intern(&lf[104],9,"frameinfo");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\012; getting ");
lf[106]=C_h_intern(&lf[106],8,"for-each");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\022no such variable: ");
lf[108]=C_h_intern(&lf[108],7,"call/cc");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000#string or symbol required for `,g\047\012");
lf[110]=C_h_intern(&lf[110],1,"s");
lf[111]=C_h_intern(&lf[111],1,"\077");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\002 ,");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\003\266Toplevel commands:\012\012 ,\077                Show this text\012 ,p EXP            Pr"
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
"print elapsed time\012 ,x EXP            Pretty print expanded expression EXP\012");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\0005undefined toplevel command ~s - enter `,\077\047 for help~%");
lf[115]=C_h_intern(&lf[115],7,"unquote");
lf[116]=C_h_intern(&lf[116],4,"chop");
lf[117]=C_h_intern(&lf[117],4,"sort");
lf[118]=C_h_intern(&lf[118],19,"with-output-to-port");
lf[119]=C_h_intern(&lf[119],4,"argv");
lf[120]=C_h_intern(&lf[120],8,"truncate");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[122]=C_h_intern(&lf[122],11,"make-string");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\004  ~a");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\025symbol gc is enabled\012");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\027interrupts are enabled\012");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\010(64-bit)");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\010 (fixed)");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\010downward");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\006upward");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\002\262~%~%~\012                   Machine type:    \011~A ~A~%~\012                   Soft"
"ware type:   \011~A~%~\012                   Software version:\011~A~%~\012                 "
"  Build platform:  \011~A~%~\012                   Installation prefix:\011~A~%~\012        "
"           Extension path:  \011~A~%~\012                   Include path:    \011~A~%~\012  "
"                 Keyword style:   \011~A~%~\012                   Symbol-table load:\011~"
"S~%  ~\012                     Avg bucket length:\011~S~%  ~\012                     Tota"
"l symbol count:\011~S~%~\012                   Memory:\011heap size is ~S bytes~A with ~S"
" bytes currently in use~%~  \012                     nursery size is ~S bytes, stac"
"k grows ~A~%~\012                   Command line:    \011~S~%");
lf[133]=C_h_intern(&lf[133],21,"\003sysinclude-pathnames");
lf[134]=C_h_intern(&lf[134],14,"symbol->string");
lf[135]=C_h_intern(&lf[135],13,"keyword-style");
lf[136]=C_h_intern(&lf[136],15,"repository-path");
lf[137]=C_h_intern(&lf[137],14,"build-platform");
lf[138]=C_h_intern(&lf[138],16,"software-version");
lf[139]=C_h_intern(&lf[139],13,"software-type");
lf[140]=C_h_intern(&lf[140],12,"machine-type");
lf[141]=C_h_intern(&lf[141],15,"keyword->string");
lf[142]=C_h_intern(&lf[142],8,"string<\077");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\015Features:~%~%");
lf[144]=C_h_intern(&lf[144],17,"memory-statistics");
lf[145]=C_h_intern(&lf[145],21,"\003syssymbol-table-info");
lf[146]=C_h_intern(&lf[146],2,"gc");
lf[148]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010u8vector\376\003\000\000\002\376B\000\000\030vector of unsigned bytes\376\003\000\000\002\376\001\000\000\017u8vector-leng"
"th\376\003\000\000\002\376\001\000\000\014u8vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010s8vector\376\003\000\000\002\376B\000\000\026vector of signed byt"
"es\376\003\000\000\002\376\001\000\000\017s8vector-length\376\003\000\000\002\376\001\000\000\014s8vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011u16vector\376\003\000\000"
"\002\376B\000\000\037vector of unsigned 16-bit words\376\003\000\000\002\376\001\000\000\020u16vector-length\376\003\000\000\002\376\001\000\000\015u16vect"
"or-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011s16vector\376\003\000\000\002\376B\000\000\035vector of signed 16-bit words\376\003\000\000\002\376\001\000"
"\000\020s16vector-length\376\003\000\000\002\376\001\000\000\015s16vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011u32vector\376\003\000\000\002\376B\000\000\037ve"
"ctor of unsigned 32-bit words\376\003\000\000\002\376\001\000\000\020u32vector-length\376\003\000\000\002\376\001\000\000\015u32vector-ref\376\377"
"\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011s32vector\376\003\000\000\002\376B\000\000\035vector of signed 32-bit words\376\003\000\000\002\376\001\000\000\020s32vec"
"tor-length\376\003\000\000\002\376\001\000\000\015s32vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011f32vector\376\003\000\000\002\376B\000\000\027vector of "
"32-bit floats\376\003\000\000\002\376\001\000\000\020f32vector-length\376\003\000\000\002\376\001\000\000\015f32vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011"
"f64vector\376\003\000\000\002\376B\000\000\027vector of 64-bit floats\376\003\000\000\002\376\001\000\000\020f64vector-length\376\003\000\000\002\376\001\000\000\015f6"
"4vector-ref\376\377\016\376\377\016");
lf[150]=C_h_intern(&lf[150],6,"length");
lf[151]=C_h_intern(&lf[151],8,"list-ref");
lf[152]=C_h_intern(&lf[152],10,"string-ref");
lf[153]=C_h_intern(&lf[153],7,"fprintf");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000 ~% (~A elements not displayed)~%");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000.\011(followed by ~A identical instance~a)~% ...~%");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\001s");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\007 ~S: ~S");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\021~A of length ~S~%");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000$character ~S, code: ~S, #x~X, #o~O~%");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\016boolean true~%");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\017boolean false~%");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\014empty list~%");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\024end-of-file object~%");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\024unspecified object~%");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\016, character ~S");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000(exact integer ~S~%  #x~X~%  #o~O~%  #b~B");
lf[168]=C_h_intern(&lf[168],28,"\003sysarbitrary-unbound-symbol");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\017unbound value~%");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\023inexact number ~S~%");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\013number ~S~%");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\006string");
lf[173]=C_h_intern(&lf[173],8,"\003syssize");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000\006vector");
lf[175]=C_h_intern(&lf[175],8,"\003sysslot");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\035keyword symbol with name ~s~%");
lf[177]=C_h_intern(&lf[177],18,"\003syssymbol->string");
lf[178]=C_h_intern(&lf[178],5,"write");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000\005  ~s\011");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\020  \012properties:\012\012");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000\013uninterned ");
lf[183]=C_decode_literal(C_heaptop,"\376B\000\000\012qualified ");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\031~a~asymbol with name ~S~%");
lf[186]=C_h_intern(&lf[186],28,"\003syssymbol->qualified-string");
lf[187]=C_h_intern(&lf[187],20,"\003sysinterned-symbol\077");
lf[188]=C_h_intern(&lf[188],21,"\003sysqualified-symbol\077");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\010unbound ");
lf[190]=C_h_intern(&lf[190],32,"\003syssymbol-has-toplevel-binding\077");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\005eol~%");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\012(circle)~%");
lf[193]=C_decode_literal(C_heaptop,"\376B\000\000\006~S -> ");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\024circular structure: ");
lf[195]=C_decode_literal(C_heaptop,"\376B\000\000\004list");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\036pair with car ~S~%and cdr ~S~%");
lf[197]=C_h_intern(&lf[197],7,"sprintf");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000 procedure with code pointer 0x~X");
lf[199]=C_h_intern(&lf[199],25,"\003syspeek-unsigned-integer");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\005input");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\006output");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\0005~A port of type ~A with name ~S and file pointer ~X~%");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000/locative~%  pointer ~X~%  index ~A~%  type ~A~%");
lf[204]=C_decode_literal(C_heaptop,"\376B\000\000\004slot");
lf[205]=C_decode_literal(C_heaptop,"\376B\000\000\004char");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\010u8vector");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000\010s8vector");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\011u16vector");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\000\011s16vector");
lf[210]=C_decode_literal(C_heaptop,"\376B\000\000\011u32vector");
lf[211]=C_decode_literal(C_heaptop,"\376B\000\000\011s32vector");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000\011f32vector");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\000\011f64vector");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000\024machine pointer ~X~%");
lf[216]=C_h_intern(&lf[216],8,"\003sysbyte");
lf[217]=C_decode_literal(C_heaptop,"\376B\000\000\022blob of size ~S:~%");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\030lambda information: ~s~%");
lf[219]=C_h_intern(&lf[219],23,"\003syslambda-info->string");
lf[220]=C_h_intern(&lf[220],10,"hash-table");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\013 ~S\011-> ~S~%");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\025  hash function: ~a~%");
lf[223]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\001s");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000:hash-table with ~S element~a~%  comparison procedure: ~A~%");
lf[226]=C_h_intern(&lf[226],9,"condition");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\007\011~s: ~s");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\005 ~s~%");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000\017condition: ~s~%");
lf[230]=C_h_intern(&lf[230],3,"map");
lf[231]=C_h_intern(&lf[231],6,"append");
lf[232]=C_decode_literal(C_heaptop,"\376B\000\000\031structure of type `~S\047:~%");
lf[233]=C_h_intern(&lf[233],18,"\003syshash-table-ref");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\020unknown object~%");
lf[235]=C_h_intern(&lf[235],15,"\003sysbytevector\077");
lf[236]=C_h_intern(&lf[236],13,"\003syslocative\077");
lf[237]=C_h_intern(&lf[237],5,"port\077");
lf[238]=C_h_intern(&lf[238],8,"keyword\077");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\034statically allocated (0x~X) ");
lf[240]=C_h_intern(&lf[240],17,"\003sysblock-address");
lf[241]=C_h_intern(&lf[241],14,"set-describer!");
lf[242]=C_h_intern(&lf[242],19,"\003syshash-table-set!");
lf[243]=C_h_intern(&lf[243],3,"min");
lf[244]=C_h_intern(&lf[244],4,"dump");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot dump immediate object");
lf[246]=C_h_intern(&lf[246],13,"\003syspeek-byte");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot dump object");
lf[248]=C_h_intern(&lf[248],14,"number->string");
lf[249]=C_h_intern(&lf[249],19,"\003syswrite-char/port");
lf[250]=C_decode_literal(C_heaptop,"\376B\000\000\003   ");
lf[251]=C_decode_literal(C_heaptop,"\376B\000\000\004:\011  ");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[253]=C_decode_literal(C_heaptop,"\376B\000\000\006  ---\012");
lf[254]=C_decode_literal(C_heaptop,"\376B\000\000\002] ");
lf[255]=C_decode_literal(C_heaptop,"\376B\000\000\003\011  ");
lf[256]=C_decode_literal(C_heaptop,"\376B\000\000\002[]");
lf[257]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[258]=C_h_intern(&lf[258],23,"\003sysuser-interrupt-hook");
lf[259]=C_h_intern(&lf[259],17,"\003syssignal-vector");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\002-s");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\003-ss");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\007-script");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\000\003-sx");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000\002--");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid option");
lf[268]=C_h_intern(&lf[268],16,"\003sysstring->list");
lf[269]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\003-ss\376\003\000\000\002\376B\000\000\003-sx\376\003\000\000\002\376B\000\000\007-script\376\003\000\000\002\376B\000\000\010-version\376\003\000\000\002\376B\000\000\005-help\376\003\000\000"
"\002\376B\000\000\006--help\376\003\000\000\002\376B\000\000\010-feature\376\003\000\000\002\376B\000\000\013-no-feature\376\003\000\000\002\376B\000\000\005-eval\376\003\000\000\002\376B\000\000\021-cas"
"e-insensitive\376\003\000\000\002\376B\000\000\016-keyword-style\376\003\000\000\002\376B\000\000\030-no-parentheses-synonyms\376\003\000\000\002\376B\000\000"
"\021-no-symbol-escape\376\003\000\000\002\376B\000\000\014-r5rs-syntax\376\003\000\000\002\376B\000\000\013-setup-mode\376\003\000\000\002\376B\000\000\022-require-"
"extension\376\003\000\000\002\376B\000\000\006-batch\376\003\000\000\002\376B\000\000\006-quiet\376\003\000\000\002\376B\000\000\014-no-warnings\376\003\000\000\002\376B\000\000\010-no-ini"
"t\376\003\000\000\002\376B\000\000\015-include-path\376\003\000\000\002\376B\000\000\010-release\376\003\000\000\002\376B\000\000\006-print\376\003\000\000\002\376B\000\000\015-pretty-prin"
"t\376\003\000\000\002\376B\000\000\002--\376\377\016");
lf[270]=C_h_intern(&lf[270],25,"\003sysimplicit-exit-handler");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000\047missing argument to command-line option");
lf[272]=C_h_intern(&lf[272],8,"\003syslist");
lf[273]=C_h_intern(&lf[273],17,"open-input-string");
lf[274]=C_h_intern(&lf[274],17,"register-feature!");
lf[275]=C_h_intern(&lf[275],19,"unregister-feature!");
lf[276]=C_h_intern(&lf[276],4,"repl");
lf[277]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002--\376\003\000\000\002\376B\000\000\002-b\376\003\000\000\002\376B\000\000\006-batch\376\003\000\000\002\376B\000\000\002-q\376\003\000\000\002\376B\000\000\006-quiet\376\003\000\000\002\376B\000\000\002-n"
"\376\003\000\000\002\376B\000\000\010-no-init\376\003\000\000\002\376B\000\000\002-w\376\003\000\000\002\376B\000\000\014-no-warnings\376\003\000\000\002\376B\000\000\002-i\376\003\000\000\002\376B\000\000\021-case-"
"insensitive\376\003\000\000\002\376B\000\000\030-no-parentheses-synonyms\376\003\000\000\002\376B\000\000\021-no-symbol-escape\376\003\000\000\002\376B\000"
"\000\014-r5rs-syntax\376\003\000\000\002\376B\000\000\013-setup-mode\376\003\000\000\002\376B\000\000\003-ss\376\003\000\000\002\376B\000\000\003-sx\376\003\000\000\002\376B\000\000\002-s\376\003\000\000\002\376B"
"\000\000\007-script\376\377\016");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000\002-D");
lf[279]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[280]=C_decode_literal(C_heaptop,"\376B\000\000\002-I");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000\015-include-path");
lf[282]=C_decode_literal(C_heaptop,"\376B\000\000\002-K");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000\016-keyword-style");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\013-no-feature");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\002-R");
lf[286]=C_decode_literal(C_heaptop,"\376B\000\000\022-require-extension");
lf[287]=C_h_intern(&lf[287],22,"\004corerequire-extension");
lf[288]=C_h_intern(&lf[288],14,"string->symbol");
lf[289]=C_decode_literal(C_heaptop,"\376B\000\000\002-e");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\005-eval");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\002-p");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\000\006-print");
lf[293]=C_decode_literal(C_heaptop,"\376B\000\000\002-P");
lf[294]=C_decode_literal(C_heaptop,"\376B\000\000\015-pretty-print");
lf[295]=C_decode_literal(C_heaptop,"\376B\000\000\003-ss");
lf[296]=C_h_intern(&lf[296],4,"main");
lf[297]=C_h_intern(&lf[297],22,"command-line-arguments");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\000\003-sx");
lf[299]=C_h_intern(&lf[299],18,"\003sysstandard-error");
lf[300]=C_decode_literal(C_heaptop,"\376B\000\000\002; ");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\000\003\012; ");
lf[302]=C_h_intern(&lf[302],12,"flush-output");
lf[303]=C_h_intern(&lf[303],21,"with-output-to-string");
lf[304]=C_h_intern(&lf[304],8,"\003sysload");
lf[305]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\004HOME");
lf[308]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-n\376\003\000\000\002\376B\000\000\010-no-init\376\377\016");
lf[309]=C_h_intern(&lf[309],13,"symbol-escape");
lf[310]=C_h_intern(&lf[310],20,"parentheses-synonyms");
lf[311]=C_h_intern(&lf[311],5,"\000none");
lf[312]=C_h_intern(&lf[312],14,"case-sensitive");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000/Disabled the CHICKEN extensions to R5RS syntax\012");
lf[314]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\014-r5rs-syntax\376\377\016");
lf[315]=C_decode_literal(C_heaptop,"\376B\000\000%Disabled support for escaped symbols\012");
lf[316]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\021-no-symbol-escape\376\377\016");
lf[317]=C_decode_literal(C_heaptop,"\376B\000\000\052Disabled support for parentheses synonyms\012");
lf[318]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\030-no-parentheses-synonyms\376\377\016");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\006prefix");
lf[320]=C_h_intern(&lf[320],7,"\000prefix");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\004none");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\000\006suffix");
lf[323]=C_h_intern(&lf[323],7,"\000suffix");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000+missing argument to `-keyword-style\047 option");
lf[325]=C_h_intern(&lf[325],10,"\003sysnodups");
lf[326]=C_h_intern(&lf[326],8,"string=\077");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000\002-I");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\015-include-path");
lf[329]=C_decode_literal(C_heaptop,"\376B\000\000\013-no-feature");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000\002-D");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[332]=C_h_intern(&lf[332],16,"case-insensitive");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000-Identifiers and symbols are case insensitive\012");
lf[334]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-i\376\003\000\000\002\376B\000\000\021-case-insensitive\376\377\016");
lf[335]=C_h_intern(&lf[335],12,"load-verbose");
lf[336]=C_h_intern(&lf[336],20,"\003syswarnings-enabled");
lf[337]=C_decode_literal(C_heaptop,"\376B\000\000\026Warnings are disabled\012");
lf[338]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-w\376\003\000\000\002\376B\000\000\014-no-warnings\376\377\016");
lf[339]=C_decode_literal(C_heaptop,"\376B\000\000\010-release");
lf[340]=C_decode_literal(C_heaptop,"\376B\000\000\013-setup-mode");
lf[341]=C_h_intern(&lf[341],14,"\003syssetup-mode");
lf[342]=C_decode_literal(C_heaptop,"\376B\000\000\010-version");
lf[343]=C_decode_literal(C_heaptop,"\376B\000\004V    -b  -batch                    terminate after command-line processing\012 "
"   -w  -no-warnings              disable all warnings\012    -K  -keyword-style STY"
"LE      enable alternative keyword-syntax\012                                   (pr"
"efix, suffix or none)\012        -no-parentheses-synonyms  disables list delimiter "
"synonyms\012        -no-symbol-escape         disables support for escaped symbols\012"
"        -r5rs-syntax              disables the CHICKEN extensions to\012           "
"                        R5RS syntax\012    -s  -script PATHNAME          use interp"
"reter for shell scripts\012        -ss PATHNAME              shell script with `mai"
"n\047 procedure\012        -sx PATHNAME              same as `-s\047, but print each expr"
"ession\012                                   as it is evaluated\012        -setup-mode"
"               prefer the current directory when locating extensions\012    -R  -re"
"quire-extension NAME   require extension and import before\012                     "
"              executing code\012    -I  -include-path PATHNAME    add PATHNAME to i"
"nclude path\012    --                            ignore all following options\012");
lf[344]=C_decode_literal(C_heaptop,"\376B\000\000\003 \047\012");
lf[345]=C_decode_literal(C_heaptop,"\376B\000\000D    -n  -no-init                  do not load initialization file ` ");
lf[346]=C_h_intern(&lf[346],19,"\003sysprint-to-string");
lf[347]=C_decode_literal(C_heaptop,"\376B\000\003\052usage: csi [FILENAME | OPTION ...]\012\012  `csi\047 is the CHICKEN interpreter.\012  \012"
"  FILENAME is a Scheme source file name with optional extension. OPTION may be\012 "
" one of the following:\012\012    -h  -help  --help             display this text and "
"exit\012        -version                  display version and exit\012        -release"
"                  print release number and exit\012    -i  -case-insensitive       "
"  enable case-insensitive reading\012    -e  -eval EXPRESSION          evaluate giv"
"en expression\012    -p  -print EXPRESSION         evaluate and print result(s)\012   "
" -P  -pretty-print EXPRESSION  evaluate and print result(s) prettily\012    -D  -fe"
"ature SYMBOL           register feature identifier\012        -no-feature SYMBOL   "
"     disable built-in feature identifier\012    -q  -quiet                    do no"
"t print banner\012");
lf[348]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-h\376\003\000\000\002\376B\000\000\005-help\376\003\000\000\002\376B\000\000\006--help\376\377\016");
lf[349]=C_decode_literal(C_heaptop,"\376B\000\000\001;");
lf[350]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[351]=C_decode_literal(C_heaptop,"\376B\000\000\024CHICKEN_INCLUDE_PATH");
lf[352]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-q\376\003\000\000\002\376B\000\000\006-quiet\376\377\016");
lf[353]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-b\376\003\000\000\002\376B\000\000\006-batch\376\377\016");
lf[354]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-e\376\003\000\000\002\376B\000\000\002-p\376\003\000\000\002\376B\000\000\002-P\376\003\000\000\002\376B\000\000\005-eval\376\003\000\000\002\376B\000\000\006-print\376\003\000\000\002\376B\000\000\015-pr"
"etty-print\376\377\016");
lf[355]=C_h_intern(&lf[355],14,"chicken-script");
lf[356]=C_h_intern(&lf[356],6,"script");
lf[357]=C_h_intern(&lf[357],12,"program-name");
lf[358]=C_decode_literal(C_heaptop,"\376B\000\000\042missing or invalid script argument");
lf[359]=C_decode_literal(C_heaptop,"\376B\000\000\002--");
lf[360]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\003-ss\376\003\000\000\002\376B\000\000\003-sx\376\003\000\000\002\376B\000\000\002-s\376\003\000\000\002\376B\000\000\007-script\376\377\016");
lf[361]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-K\376\003\000\000\002\376B\000\000\016-keyword-style\376\377\016");
lf[362]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[363]=C_h_intern(&lf[363],17,"get-output-string");
lf[364]=C_h_intern(&lf[364],18,"open-output-string");
lf[365]=C_decode_literal(C_heaptop,"\376B\000\000\025invalid option syntax");
lf[366]=C_h_intern(&lf[366],7,"reverse");
lf[367]=C_h_intern(&lf[367],22,"with-exception-handler");
lf[368]=C_h_intern(&lf[368],30,"call-with-current-continuation");
lf[369]=C_decode_literal(C_heaptop,"\376B\000\000\013CSI_OPTIONS");
lf[370]=C_h_intern(&lf[370],28,"\003sysextend-macro-environment");
lf[371]=C_h_intern(&lf[371],10,"defhandler");
lf[372]=C_decode_literal(C_heaptop,"\376B\000\000\032C_establish_signal_handler");
lf[373]=C_h_intern(&lf[373],11,"\003syssetslot");
lf[374]=C_h_intern(&lf[374],11,"\004coreinline");
lf[375]=C_h_intern(&lf[375],5,"begin");
lf[376]=C_h_intern(&lf[376],25,"\003syssyntax-rules-mismatch");
lf[377]=C_h_intern(&lf[377],18,"\003syser-transformer");
lf[378]=C_h_intern(&lf[378],23,"\003syscurrent-environment");
lf[379]=C_h_intern(&lf[379],11,"make-vector");
lf[380]=C_h_intern(&lf[380],17,"\003syspeek-c-string");
lf[381]=C_decode_literal(C_heaptop,"\376B\000\000\016CHICKEN_PREFIX");
lf[382]=C_decode_literal(C_heaptop,"\376B\000\000$; switching current module to `~a\047~%");
lf[383]=C_h_intern(&lf[383],17,"\003sysswitch-module");
lf[384]=C_decode_literal(C_heaptop,"\376B\000\000\027undefined module `~a\047~%");
lf[385]=C_h_intern(&lf[385],15,"\003sysfind-module");
lf[386]=C_h_intern(&lf[386],23,"\003sysresolve-module-name");
lf[387]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid module name `~a\047~%");
lf[388]=C_decode_literal(C_heaptop,"\376B\000\000(; resetting current module to toplevel~%");
lf[389]=C_h_intern(&lf[389],18,"\003sysstring->symbol");
lf[390]=C_h_intern(&lf[390],1,"m");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\0005,m MODULE         switch to module with name `MODULE\047");
lf[392]=C_decode_literal(C_heaptop,"\376B\000\000\010#;~A~A> ");
lf[393]=C_decode_literal(C_heaptop,"\376B\000\000\003~a:");
lf[394]=C_h_intern(&lf[394],15,"\003sysmodule-name");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[396]=C_h_intern(&lf[396],18,"\003syscurrent-module");
lf[397]=C_h_intern(&lf[397],11,"repl-prompt");
lf[398]=C_h_intern(&lf[398],15,"\003sysmake-string");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\013emacsclient");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\002vi");
lf[401]=C_decode_literal(C_heaptop,"\376B\000\000\005EMACS");
lf[402]=C_decode_literal(C_heaptop,"\376B\000\000\006VISUAL");
lf[403]=C_decode_literal(C_heaptop,"\376B\000\000\006EDITOR");
lf[404]=C_h_intern(&lf[404],14,"make-parameter");
C_register_lf2(lf,405,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1878,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k5311 in k5308 in k5305 in doloop929 in g916 in doloop901 in a5222 in k5188 in k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5313,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:900: newline */
t3=*((C_word*)lf[15]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3766 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3768,2,av);}
/* csi.scm:620: fprintf */
t2=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[176];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_3761(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3761,2,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3768,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:621: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[177]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[177]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3777,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3861,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:623: ##sys#symbol-has-toplevel-binding? */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[190]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
t2=((C_word*)t0)[4];
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3421,tmp=(C_word)a,a+=2,tmp);
t4=(
  f_3421(t2,t2)
);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3873,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_3873(t6,t4);}
else{
t6=((C_word*)t0)[4];
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3456,tmp=(C_word)a,a+=2,tmp);
t8=t5;
f_3873(t8,(
  f_3456(t6)
));}}}}

/* k5353 in doloop901 in a5222 in k5188 in k2837 in k2435 in csi-eval in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5355,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5362,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:905: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[27]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t2;
av2[2]=lf[107];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k5588 in k5506 in loop in canonicalize-args in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5590,2,av);}
/* string->list */
t2=C_fast_retrieve(lf[268]);{
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

/* k5596 in k5506 in loop in canonicalize-args in k5418 in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in k1882 in k1879 in k1876 */
static void C_ccall f_5598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5598,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* g580 in doloop574 in k4164 in k4161 in k4130 in k4016 in k3988 in k3871 in k3759 in k3624 in describe in k3484 in k3136 in k3133 in k2988 in k2341 in k2040 in k1909 in k1906 in k1901 in k1888 in k1885 in ... */
static void C_fcall f_4185(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_4185,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
/* csi.scm:702: fprintf */
t5=*((C_word*)lf[153]+1);{
C_word av2[6];
av2[0]=t5;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[221];
av2[4]=t3;
av2[5]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[500] = {
{"f_4177:csi_2escm",(void*)f_4177},
{"f_4151:csi_2escm",(void*)f_4151},
{"f_3149:csi_2escm",(void*)f_3149},
{"f_3147:csi_2escm",(void*)f_3147},
{"f_4166:csi_2escm",(void*)f_4166},
{"f_4163:csi_2escm",(void*)f_4163},
{"f_6692:csi_2escm",(void*)f_6692},
{"f_6697:csi_2escm",(void*)f_6697},
{"f_6695:csi_2escm",(void*)f_6695},
{"f7572:csi_2escm",(void*)f7572},
{"f_3127:csi_2escm",(void*)f_3127},
{"f_3240:csi_2escm",(void*)f_3240},
{"f_3121:csi_2escm",(void*)f_3121},
{"f_3243:csi_2escm",(void*)f_3243},
{"f_3138:csi_2escm",(void*)f_3138},
{"f_3139:csi_2escm",(void*)f_3139},
{"f_5918:csi_2escm",(void*)f_5918},
{"f_3135:csi_2escm",(void*)f_3135},
{"f_3214:csi_2escm",(void*)f_3214},
{"f_6679:csi_2escm",(void*)f_6679},
{"f_6675:csi_2escm",(void*)f_6675},
{"f_6689:csi_2escm",(void*)f_6689},
{"f_6683:csi_2escm",(void*)f_6683},
{"f_3231:csi_2escm",(void*)f_3231},
{"f_3234:csi_2escm",(void*)f_3234},
{"f_5923:csi_2escm",(void*)f_5923},
{"f_3237:csi_2escm",(void*)f_3237},
{"f_5926:csi_2escm",(void*)f_5926},
{"f_3206:csi_2escm",(void*)f_3206},
{"f_5900:csi_2escm",(void*)f_5900},
{"f_5905:csi_2escm",(void*)f_5905},
{"f_3159:csi_2escm",(void*)f_3159},
{"f_5374:csi_2escm",(void*)f_5374},
{"f_3153:csi_2escm",(void*)f_3153},
{"f_3156:csi_2escm",(void*)f_3156},
{"f_5362:csi_2escm",(void*)f_5362},
{"f_5364:csi_2escm",(void*)f_5364},
{"f_3291:csi_2escm",(void*)f_3291},
{"f_6113:csi_2escm",(void*)f_6113},
{"f_6119:csi_2escm",(void*)f_6119},
{"f_3184:csi_2escm",(void*)f_3184},
{"f_3180:csi_2escm",(void*)f_3180},
{"f_3267:csi_2escm",(void*)f_3267},
{"f_5971:csi_2escm",(void*)f_5971},
{"f_6122:csi_2escm",(void*)f_6122},
{"f_6125:csi_2escm",(void*)f_6125},
{"f_6128:csi_2escm",(void*)f_6128},
{"f_3115:csi_2escm",(void*)f_3115},
{"f_3169:csi_2escm",(void*)f_3169},
{"f_2243:csi_2escm",(void*)f_2243},
{"f_6662:csi_2escm",(void*)f_6662},
{"f_3283:csi_2escm",(void*)f_3283},
{"f_3608:csi_2escm",(void*)f_3608},
{"f_3161:csi_2escm",(void*)f_3161},
{"f_3179:csi_2escm",(void*)f_3179},
{"f_3287:csi_2escm",(void*)f_3287},
{"f_6109:csi_2escm",(void*)f_6109},
{"f_2147:csi_2escm",(void*)f_2147},
{"f_2140:csi_2escm",(void*)f_2140},
{"f_3176:csi_2escm",(void*)f_3176},
{"f_5985:csi_2escm",(void*)f_5985},
{"f_3259:csi_2escm",(void*)f_3259},
{"f_3623:csi_2escm",(void*)f_3623},
{"f_2229:csi_2escm",(void*)f_2229},
{"f_2137:csi_2escm",(void*)f_2137},
{"f_5307:csi_2escm",(void*)f_5307},
{"f_3629:csi_2escm",(void*)f_3629},
{"f_3626:csi_2escm",(void*)f_3626},
{"f_3275:csi_2escm",(void*)f_3275},
{"f_3271:csi_2escm",(void*)f_3271},
{"f_3279:csi_2escm",(void*)f_3279},
{"f_6215:csi_2escm",(void*)f_6215},
{"f_6218:csi_2escm",(void*)f_6218},
{"f_2103:csi_2escm",(void*)f_2103},
{"f_5942:csi_2escm",(void*)f_5942},
{"f_4411:csi_2escm",(void*)f_4411},
{"f_4449:csi_2escm",(void*)f_4449},
{"f_5823:csi_2escm",(void*)f_5823},
{"f_3197:csi_2escm",(void*)f_3197},
{"f_4436:csi_2escm",(void*)f_4436},
{"f_5813:csi_2escm",(void*)f_5813},
{"f_5815:csi_2escm",(void*)f_5815},
{"f_6203:csi_2escm",(void*)f_6203},
{"f_6206:csi_2escm",(void*)f_6206},
{"f_6200:csi_2escm",(void*)f_6200},
{"f_5802:csi_2escm",(void*)f_5802},
{"f_2546:csi_2escm",(void*)f_2546},
{"f_2543:csi_2escm",(void*)f_2543},
{"f_2540:csi_2escm",(void*)f_2540},
{"f_5809:csi_2escm",(void*)f_5809},
{"f_2549:csi_2escm",(void*)f_2549},
{"f_6058:csi_2escm",(void*)f_6058},
{"f_6069:csi_2escm",(void*)f_6069},
{"f_2160:csi_2escm",(void*)f_2160},
{"f_2219:csi_2escm",(void*)f_2219},
{"f_2167:csi_2escm",(void*)f_2167},
{"f_2169:csi_2escm",(void*)f_2169},
{"f_6852:csi_2escm",(void*)f_6852},
{"f_6856:csi_2escm",(void*)f_6856},
{"f_4009:csi_2escm",(void*)f_4009},
{"f_2151:csi_2escm",(void*)f_2151},
{"f_2287:csi_2escm",(void*)f_2287},
{"f_2154:csi_2escm",(void*)f_2154},
{"f_6869:csi_2escm",(void*)f_6869},
{"f_5845:csi_2escm",(void*)f_5845},
{"f_5848:csi_2escm",(void*)f_5848},
{"f_5842:csi_2escm",(void*)f_5842},
{"f_6048:csi_2escm",(void*)f_6048},
{"f_2182:csi_2escm",(void*)f_2182},
{"f_6294:csi_2escm",(void*)f_6294},
{"f_4728:csi_2escm",(void*)f_4728},
{"f_6040:csi_2escm",(void*)f_6040},
{"f_4652:csi_2escm",(void*)f_4652},
{"f_2274:csi_2escm",(void*)f_2274},
{"f_5192:csi_2escm",(void*)f_5192},
{"f_5190:csi_2escm",(void*)f_5190},
{"f_5836:csi_2escm",(void*)f_5836},
{"f_4025:csi_2escm",(void*)f_4025},
{"f_5833:csi_2escm",(void*)f_5833},
{"f_4725:csi_2escm",(void*)f_4725},
{"f_4645:csi_2escm",(void*)f_4645},
{"f_2179:csi_2escm",(void*)f_2179},
{"f_4648:csi_2escm",(void*)f_4648},
{"f_5839:csi_2escm",(void*)f_5839},
{"f_4018:csi_2escm",(void*)f_4018},
{"f_2525:csi_2escm",(void*)f_2525},
{"f_2528:csi_2escm",(void*)f_2528},
{"f_4712:csi_2escm",(void*)f_4712},
{"f_2128:csi_2escm",(void*)f_2128},
{"f_6890:csi_2escm",(void*)f_6890},
{"f_6893:csi_2escm",(void*)f_6893},
{"f_5894:csi_2escm",(void*)f_5894},
{"f_5897:csi_2escm",(void*)f_5897},
{"f_6077:csi_2escm",(void*)f_6077},
{"f_5891:csi_2escm",(void*)f_5891},
{"f_6079:csi_2escm",(void*)f_6079},
{"f_4700:csi_2escm",(void*)f_4700},
{"f_4703:csi_2escm",(void*)f_4703},
{"f_2112:csi_2escm",(void*)f_2112},
{"f_2116:csi_2escm",(void*)f_2116},
{"f_5882:csi_2escm",(void*)f_5882},
{"f_5885:csi_2escm",(void*)f_5885},
{"f_5888:csi_2escm",(void*)f_5888},
{"f_2904:csi_2escm",(void*)f_2904},
{"f_5872:csi_2escm",(void*)f_5872},
{"f_5878:csi_2escm",(void*)f_5878},
{"f_2290:csi_2escm",(void*)f_2290},
{"f_2293:csi_2escm",(void*)f_2293},
{"f_4206:csi_2escm",(void*)f_4206},
{"f_2296:csi_2escm",(void*)f_2296},
{"f_2299:csi_2escm",(void*)f_2299},
{"f_5133:csi_2escm",(void*)f_5133},
{"f_3916:csi_2escm",(void*)f_3916},
{"f_2918:csi_2escm",(void*)f_2918},
{"f_4225:csi_2escm",(void*)f_4225},
{"f_6833:csi_2escm",(void*)f_6833},
{"f_4215:csi_2escm",(void*)f_4215},
{"f_4797:csi_2escm",(void*)f_4797},
{"f_6848:csi_2escm",(void*)f_6848},
{"f_6817:csi_2escm",(void*)f_6817},
{"f_1986:csi_2escm",(void*)f_1986},
{"f_2196:csi_2escm",(void*)f_2196},
{"f_6824:csi_2escm",(void*)f_6824},
{"f_1996:csi_2escm",(void*)f_1996},
{"f_1994:csi_2escm",(void*)f_1994},
{"f_6821:csi_2escm",(void*)f_6821},
{"f_6436:csi_2escm",(void*)f_6436},
{"f_4265:csi_2escm",(void*)f_4265},
{"f_3695:csi_2escm",(void*)f_3695},
{"f_4261:csi_2escm",(void*)f_4261},
{"f_4260:csi_2escm",(void*)f_4260},
{"f_4763:csi_2escm",(void*)f_4763},
{"f_2970:csi_2escm",(void*)f_2970},
{"f_6400:csi_2escm",(void*)f_6400},
{"f_2974:csi_2escm",(void*)f_2974},
{"f_2579:csi_2escm",(void*)f_2579},
{"f_6882:csi_2escm",(void*)f_6882},
{"f_6880:csi_2escm",(void*)f_6880},
{"f_4488:csi_2escm",(void*)f_4488},
{"f_5863:csi_2escm",(void*)f_5863},
{"f_6413:csi_2escm",(void*)f_6413},
{"f_5860:csi_2escm",(void*)f_5860},
{"f_4480:csi_2escm",(void*)f_4480},
{"f_4284:csi_2escm",(void*)f_4284},
{"f_3984:csi_2escm",(void*)f_3984},
{"f_6230:csi_2escm",(void*)f_6230},
{"f_3980:csi_2escm",(void*)f_3980},
{"f_1945:csi_2escm",(void*)f_1945},
{"f_1948:csi_2escm",(void*)f_1948},
{"f_1941:csi_2escm",(void*)f_1941},
{"f_5869:csi_2escm",(void*)f_5869},
{"f_5854:csi_2escm",(void*)f_5854},
{"f_2996:csi_2escm",(void*)f_2996},
{"f_5851:csi_2escm",(void*)f_5851},
{"f_2990:csi_2escm",(void*)f_2990},
{"f_2597:csi_2escm",(void*)f_2597},
{"f_4274:csi_2escm",(void*)f_4274},
{"f_3990:csi_2escm",(void*)f_3990},
{"f_1955:csi_2escm",(void*)f_1955},
{"f_1957:csi_2escm",(void*)f_1957},
{"f_6475:csi_2escm",(void*)f_6475},
{"f_4497:csi_2escm",(void*)f_4497},
{"f_5629:csi_2escm",(void*)f_5629},
{"f_4499:csi_2escm",(void*)f_4499},
{"f_6227:csi_2escm",(void*)f_6227},
{"f_4297:csi_2escm",(void*)f_4297},
{"f_5425:csi_2escm",(void*)f_5425},
{"f_5420:csi_2escm",(void*)f_5420},
{"f_1974:csi_2escm",(void*)f_1974},
{"f_2964:csi_2escm",(void*)f_2964},
{"f_1908:csi_2escm",(void*)f_1908},
{"f_1903:csi_2escm",(void*)f_1903},
{"f_4668:csi_2escm",(void*)f_4668},
{"f_1911:csi_2escm",(void*)f_1911},
{"f_1917:csi_2escm",(void*)f_1917},
{"f_4694:csi_2escm",(void*)f_4694},
{"f_4697:csi_2escm",(void*)f_4697},
{"f_5431:csi_2escm",(void*)f_5431},
{"f_4691:csi_2escm",(void*)f_4691},
{"f_1920:csi_2escm",(void*)f_1920},
{"f_1927:csi_2escm",(void*)f_1927},
{"f_6481:csi_2escm",(void*)f_6481},
{"f_6484:csi_2escm",(void*)f_6484},
{"f_4688:csi_2escm",(void*)f_4688},
{"f_5659:csi_2escm",(void*)f_5659},
{"f_4405:csi_2escm",(void*)f_4405},
{"f_6494:csi_2escm",(void*)f_6494},
{"f_6460:csi_2escm",(void*)f_6460},
{"f_2513:csi_2escm",(void*)f_2513},
{"f_6463:csi_2escm",(void*)f_6463},
{"f_6466:csi_2escm",(void*)f_6466},
{"f_2510:csi_2escm",(void*)f_2510},
{"f_5443:csi_2escm",(void*)f_5443},
{"f_2582:csi_2escm",(void*)f_2582},
{"f_2587:csi_2escm",(void*)f_2587},
{"f_3010:csi_2escm",(void*)f_3010},
{"f_3013:csi_2escm",(void*)f_3013},
{"f_3019:csi_2escm",(void*)f_3019},
{"f_3022:csi_2escm",(void*)f_3022},
{"f_4678:csi_2escm",(void*)f_4678},
{"f_5041:csi_2escm",(void*)f_5041},
{"f_5680:csi_2escm",(void*)f_5680},
{"f_5683:csi_2escm",(void*)f_5683},
{"f_3030:csi_2escm",(void*)f_3030},
{"f_5689:csi_2escm",(void*)f_5689},
{"f_5031:csi_2escm",(void*)f_5031},
{"f_5671:csi_2escm",(void*)f_5671},
{"f_5677:csi_2escm",(void*)f_5677},
{"f_5674:csi_2escm",(void*)f_5674},
{"f_4610:csi_2escm",(void*)f_4610},
{"f_5662:csi_2escm",(void*)f_5662},
{"f_5665:csi_2escm",(void*)f_5665},
{"f_3055:csi_2escm",(void*)f_3055},
{"f_5668:csi_2escm",(void*)f_5668},
{"f_4605:csi_2escm",(void*)f_4605},
{"f_3064:csi_2escm",(void*)f_3064},
{"f_6163:csi_2escm",(void*)f_6163},
{"f_3076:csi_2escm",(void*)f_3076},
{"f_3070:csi_2escm",(void*)f_3070},
{"f_5075:csi_2escm",(void*)f_5075},
{"f_6133:csi_2escm",(void*)f_6133},
{"f_5078:csi_2escm",(void*)f_5078},
{"f_3082:csi_2escm",(void*)f_3082},
{"f_3088:csi_2escm",(void*)f_3088},
{"f_6149:csi_2escm",(void*)f_6149},
{"f_6146:csi_2escm",(void*)f_6146},
{"f_6446:csi_2escm",(void*)f_6446},
{"f_3096:csi_2escm",(void*)f_3096},
{"f_3548:csi_2escm",(void*)f_3548},
{"f_3098:csi_2escm",(void*)f_3098},
{"f_6197:csi_2escm",(void*)f_6197},
{"f_6194:csi_2escm",(void*)f_6194},
{"f_5692:csi_2escm",(void*)f_5692},
{"f_5694:csi_2escm",(void*)f_5694},
{"f_3551:csi_2escm",(void*)f_3551},
{"f_3529:csi_2escm",(void*)f_3529},
{"f_6423:csi_2escm",(void*)f_6423},
{"f_3538:csi_2escm",(void*)f_3538},
{"f_6182:csi_2escm",(void*)f_6182},
{"f_3506:csi_2escm",(void*)f_3506},
{"f_3456:csi_2escm",(void*)f_3456},
{"f_5092:csi_2escm",(void*)f_5092},
{"f_3501:csi_2escm",(void*)f_3501},
{"f_4920:csi_2escm",(void*)f_4920},
{"f_4923:csi_2escm",(void*)f_4923},
{"f_4926:csi_2escm",(void*)f_4926},
{"f_4914:csi_2escm",(void*)f_4914},
{"f_4917:csi_2escm",(void*)f_4917},
{"f_4929:csi_2escm",(void*)f_4929},
{"f_3401:csi_2escm",(void*)f_3401},
{"f_6774:csi_2escm",(void*)f_6774},
{"f_6017:csi_2escm",(void*)f_6017},
{"f_3421:csi_2escm",(void*)f_3421},
{"f_6754:csi_2escm",(void*)f_6754},
{"f_6913:csi_2escm",(void*)f_6913},
{"f_6025:csi_2escm",(void*)f_6025},
{"f_5480:csi_2escm",(void*)f_5480},
{"f_5486:csi_2escm",(void*)f_5486},
{"f_3341:csi_2escm",(void*)f_3341},
{"f_2011:csi_2escm",(void*)f_2011},
{"f_6000:csi_2escm",(void*)f_6000},
{"f_2042:csi_2escm",(void*)f_2042},
{"f_2701:csi_2escm",(void*)f_2701},
{"f_2708:csi_2escm",(void*)f_2708},
{"f_3346:csi_2escm",(void*)f_3346},
{"f_5417:csi_2escm",(void*)f_5417},
{"f_4548:csi_2escm",(void*)f_4548},
{"f_3356:csi_2escm",(void*)f_3356},
{"f_2653:csi_2escm",(void*)f_2653},
{"f_4938:csi_2escm",(void*)f_4938},
{"f_4935:csi_2escm",(void*)f_4935},
{"f_6721:csi_2escm",(void*)f_6721},
{"f_2024:csi_2escm",(void*)f_2024},
{"f_4991:csi_2escm",(void*)f_4991},
{"f_4820:csi_2escm",(void*)f_4820},
{"f_4994:csi_2escm",(void*)f_4994},
{"f_2729:csi_2escm",(void*)f_2729},
{"f_4531:csi_2escm",(void*)f_4531},
{"f_2643:csi_2escm",(void*)f_2643},
{"f_4329:csi_2escm",(void*)f_4329},
{"f_3486:csi_2escm",(void*)f_3486},
{"f_3488:csi_2escm",(void*)f_3488},
{"f_2710:csi_2escm",(void*)f_2710},
{"f_2714:csi_2escm",(void*)f_2714},
{"f_4985:csi_2escm",(void*)f_4985},
{"f_4817:csi_2escm",(void*)f_4817},
{"f_4997:csi_2escm",(void*)f_4997},
{"f_4524:csi_2escm",(void*)f_4524},
{"f_2638:csi_2escm",(void*)f_2638},
{"f_2632:csi_2escm",(void*)f_2632},
{"f_6705:csi_2escm",(void*)f_6705},
{"f_4972:csi_2escm",(void*)f_4972},
{"f_4988:csi_2escm",(void*)f_4988},
{"f_5226:csi_2escm",(void*)f_5226},
{"f_2628:csi_2escm",(void*)f_2628},
{"f_2621:csi_2escm",(void*)f_2621},
{"f_2622:csi_2escm",(void*)f_2622},
{"f_6709:csi_2escm",(void*)f_6709},
{"f_5223:csi_2escm",(void*)f_5223},
{"f_4302:csi_2escm",(void*)f_4302},
{"f_6517:csi_2escm",(void*)f_6517},
{"f_6511:csi_2escm",(void*)f_6511},
{"f_4502:csi_2escm",(void*)f_4502},
{"f_2612:csi_2escm",(void*)f_2612},
{"f_2358:csi_2escm",(void*)f_2358},
{"f_6762:csi_2escm",(void*)f_6762},
{"f_4339:csi_2escm",(void*)f_4339},
{"f_6525:csi_2escm",(void*)f_6525},
{"f_2767:csi_2escm",(void*)f_2767},
{"f_2763:csi_2escm",(void*)f_2763},
{"f_6520:csi_2escm",(void*)f_6520},
{"f_4967:csi_2escm",(void*)f_4967},
{"f_2308:csi_2escm",(void*)f_2308},
{"f_5203:csi_2escm",(void*)f_5203},
{"f_6734:csi_2escm",(void*)f_6734},
{"f_2437:csi_2escm",(void*)f_2437},
{"f_4944:csi_2escm",(void*)f_4944},
{"f_4941:csi_2escm",(void*)f_4941},
{"f_2090:csi_2escm",(void*)f_2090},
{"f_1878:csi_2escm",(void*)f_1878},
{"f_4957:csi_2escm",(void*)f_4957},
{"f_2421:csi_2escm",(void*)f_2421},
{"f_4932:csi_2escm",(void*)f_4932},
{"f_4807:csi_2escm",(void*)f_4807},
{"f_6501:csi_2escm",(void*)f_6501},
{"f_1887:csi_2escm",(void*)f_1887},
{"f_2783:csi_2escm",(void*)f_2783},
{"f_1881:csi_2escm",(void*)f_1881},
{"f_6904:csi_2escm",(void*)f_6904},
{"f_1884:csi_2escm",(void*)f_1884},
{"f_6900:csi_2escm",(void*)f_6900},
{"f_6711:csi_2escm",(void*)f_6711},
{"f_2071:csi_2escm",(void*)f_2071},
{"f_2077:csi_2escm",(void*)f_2077},
{"f_2774:csi_2escm",(void*)f_2774},
{"f_6561:csi_2escm",(void*)f_6561},
{"f_2343:csi_2escm",(void*)f_2343},
{"f_2795:csi_2escm",(void*)f_2795},
{"f_6307:csi_2escm",(void*)f_6307},
{"f_6301:csi_2escm",(void*)f_6301},
{"f_3494:csi_2escm",(void*)f_3494},
{"f_2745:csi_2escm",(void*)f_2745},
{"f_4846:csi_2escm",(void*)f_4846},
{"f_4848:csi_2escm",(void*)f_4848},
{"f_6314:csi_2escm",(void*)f_6314},
{"f_3800:csi_2escm",(void*)f_3800},
{"f_2365:csi_2escm",(void*)f_2365},
{"f_2454:csi_2escm",(void*)f_2454},
{"f_3816:csi_2escm",(void*)f_3816},
{"f_6597:csi_2escm",(void*)f_6597},
{"f_4839:csi_2escm",(void*)f_4839},
{"f_1890:csi_2escm",(void*)f_1890},
{"f_4835:csi_2escm",(void*)f_4835},
{"f_3810:csi_2escm",(void*)f_3810},
{"f_3813:csi_2escm",(void*)f_3813},
{"f_5295:csi_2escm",(void*)f_5295},
{"f_5729:csi_2escm",(void*)f_5729},
{"f_3825:csi_2escm",(void*)f_3825},
{"f_2061:csi_2escm",(void*)f_2061},
{"f_2068:csi_2escm",(void*)f_2068},
{"f_4577:csi_2escm",(void*)f_4577},
{"f_2819:csi_2escm",(void*)f_2819},
{"f_5285:csi_2escm",(void*)f_5285},
{"f_6570:csi_2escm",(void*)f_6570},
{"f_6576:csi_2escm",(void*)f_6576},
{"f_6579:csi_2escm",(void*)f_6579},
{"f_4567:csi_2escm",(void*)f_4567},
{"f_6347:csi_2escm",(void*)f_6347},
{"f_5270:csi_2escm",(void*)f_5270},
{"f_2371:csi_2escm",(void*)f_2371},
{"f_2677:csi_2escm",(void*)f_2677},
{"f_5279:csi_2escm",(void*)f_5279},
{"f_5700:csi_2escm",(void*)f_5700},
{"f_5708:csi_2escm",(void*)f_5708},
{"f_4883:csi_2escm",(void*)f_4883},
{"f_6582:csi_2escm",(void*)f_6582},
{"f_6585:csi_2escm",(void*)f_6585},
{"f_6588:csi_2escm",(void*)f_6588},
{"f_6356:csi_2escm",(void*)f_6356},
{"f_2668:csi_2escm",(void*)f_2668},
{"f_3580:csi_2escm",(void*)f_3580},
{"f_4874:csi_2escm",(void*)f_4874},
{"f_3858:csi_2escm",(void*)f_3858},
{"f_2826:csi_2escm",(void*)f_2826},
{"f_2318:csi_2escm",(void*)f_2318},
{"f_3861:csi_2escm",(void*)f_3861},
{"f_5245:csi_2escm",(void*)f_5245},
{"f_3873:csi_2escm",(void*)f_3873},
{"f_3876:csi_2escm",(void*)f_3876},
{"f_2807:csi_2escm",(void*)f_2807},
{"f_6381:csi_2escm",(void*)f_6381},
{"f_5230:csi_2escm",(void*)f_5230},
{"f_5233:csi_2escm",(void*)f_5233},
{"f_5745:csi_2escm",(void*)f_5745},
{"f_3885:csi_2escm",(void*)f_3885},
{"f_6390:csi_2escm",(void*)f_6390},
{"f_3319:csi_2escm",(void*)f_3319},
{"f_3376:csi_2escm",(void*)f_3376},
{"f_3374:csi_2escm",(void*)f_3374},
{"f_2894:csi_2escm",(void*)f_2894},
{"f_4366:csi_2escm",(void*)f_4366},
{"f_5792:csi_2escm",(void*)f_5792},
{"f_5790:csi_2escm",(void*)f_5790},
{"f_2848:csi_2escm",(void*)f_2848},
{"f_5783:csi_2escm",(void*)f_5783},
{"f_4392:csi_2escm",(void*)f_4392},
{"f_5776:csi_2escm",(void*)f_5776},
{"f_5770:csi_2escm",(void*)f_5770},
{"f_2492:csi_2escm",(void*)f_2492},
{"f_2495:csi_2escm",(void*)f_2495},
{"f_2498:csi_2escm",(void*)f_2498},
{"f_6550:csi_2escm",(void*)f_6550},
{"f_2391:csi_2escm",(void*)f_2391},
{"f_2483:csi_2escm",(void*)f_2483},
{"f_4370:csi_2escm",(void*)f_4370},
{"f_2851:csi_2escm",(void*)f_2851},
{"f_2854:csi_2escm",(void*)f_2854},
{"f_2889:csi_2escm",(void*)f_2889},
{"f_2839:csi_2escm",(void*)f_2839},
{"f_4384:csi_2escm",(void*)f_4384},
{"f_3701:csi_2escm",(void*)f_3701},
{"f_2867:csi_2escm",(void*)f_2867},
{"f_2691:csi_2escm",(void*)f_2691},
{"f_2697:csi_2escm",(void*)f_2697},
{"f_2682:csi_2escm",(void*)f_2682},
{"f_2686:csi_2escm",(void*)f_2686},
{"f_4851:csi_2escm",(void*)f_4851},
{"f_4857:csi_2escm",(void*)f_4857},
{"f_3849:csi_2escm",(void*)f_3849},
{"f_5551:csi_2escm",(void*)f_5551},
{"f_6322:csi_2escm",(void*)f_6322},
{"f_6320:csi_2escm",(void*)f_6320},
{"f_5763:csi_2escm",(void*)f_5763},
{"f_5547:csi_2escm",(void*)f_5547},
{"f_5543:csi_2escm",(void*)f_5543},
{"f_5757:csi_2escm",(void*)f_5757},
{"f_2472:csi_2escm",(void*)f_2472},
{"f_4132:csi_2escm",(void*)f_4132},
{"f_2479:csi_2escm",(void*)f_2479},
{"f_4138:csi_2escm",(void*)f_4138},
{"f_3795:csi_2escm",(void*)f_3795},
{"f_4126:csi_2escm",(void*)f_4126},
{"f_2469:csi_2escm",(void*)f_2469},
{"f_5522:csi_2escm",(void*)f_5522},
{"f_3780:csi_2escm",(void*)f_3780},
{"f_3777:csi_2escm",(void*)f_3777},
{"f_5508:csi_2escm",(void*)f_5508},
{"f_3783:csi_2escm",(void*)f_3783},
{"f_5319:csi_2escm",(void*)f_5319},
{"f_5316:csi_2escm",(void*)f_5316},
{"f_5310:csi_2escm",(void*)f_5310},
{"toplevel:csi_2escm",(void*)C_toplevel},
{"f_5313:csi_2escm",(void*)f_5313},
{"f_3768:csi_2escm",(void*)f_3768},
{"f_3761:csi_2escm",(void*)f_3761},
{"f_5355:csi_2escm",(void*)f_5355},
{"f_5590:csi_2escm",(void*)f_5590},
{"f_5598:csi_2escm",(void*)f_5598},
{"f_4185:csi_2escm",(void*)f_4185},
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
S|  map		7
S|  for-each		11
S|  printf		4
o|eliminated procedure checks: 147 
o|eliminated procedure checks: 1 
o|specializations:
o|  7 (string=? string string)
o|  1 (set-cdr! pair *)
o|  2 (cddr (pair * pair))
o|  2 (char=? char char)
o|  3 (cadr (pair * pair))
o|  1 (min fixnum fixnum)
o|  1 (memq * list)
o|  22 (cdr pair)
o|  1 (current-output-port)
o|  8 (car pair)
o|  2 (zero? fixnum)
o|  5 (##sys#check-list (or pair list) *)
o|  29 (eqv? * (not float))
o|  4 (##sys#check-output-port * * *)
o|  1 (> fixnum fixnum)
o|  4 (string-append string string)
o|  1 (make-string fixnum)
(o e)|safe calls: 740 
(o e)|assignments to immediate values: 5 
o|safe globals: (##sys#repl-print-length-limit constant8 constant3 constant0) 
o|Removed `not' forms: 8 
o|substituted constant variable: constant3 
o|substituted constant variable: constant0 
o|inlining procedure: k1959 
o|inlining procedure: k1959 
o|inlining procedure: k2001 
o|inlining procedure: k2001 
o|inlining procedure: k2019 
o|inlining procedure: k2019 
o|inlining procedure: k2063 
o|inlining procedure: k2063 
o|substituted constant variable: a2079 
o|inlining procedure: k2117 
o|inlining procedure: k2132 
o|contracted procedure: "(csi.scm:206) _getcwd60" 
o|inlining procedure: k2132 
o|inlining procedure: k2171 
o|inlining procedure: k2171 
o|substituted constant variable: a2202 
o|contracted procedure: "(csi.scm:205) string-index71" 
o|inlining procedure: k2092 
o|inlining procedure: k2092 
o|inlining procedure: k2117 
o|substituted constant variable: a2212 
o|inlining procedure: k2276 
o|propagated global variable: out123127 ##sys#standard-output 
o|substituted constant variable: a2283 
o|substituted constant variable: a2284 
o|inlining procedure: k2276 
o|propagated global variable: out123127 ##sys#standard-output 
o|inlining procedure: k2323 
o|inlining procedure: k2323 
o|inlining procedure: k2360 
o|inlining procedure: k2360 
o|contracted procedure: "(csi.scm:273) tty-input?" 
o|inlining procedure: k2350 
o|inlining procedure: k2350 
o|inlining procedure: k2385 
o|inlining procedure: k2385 
o|inlining procedure: k2423 
o|inlining procedure: k2423 
o|inlining procedure: k2444 
o|contracted procedure: "(csi.scm:305) g198199" 
o|inlining procedure: k2444 
o|inlining procedure: k2484 
o|inlining procedure: k2484 
o|consed rest parameter at call site: "(csi.scm:325) describe" 2 
o|inlining procedure: k2517 
o|consed rest parameter at call site: "(csi.scm:329) dump" 2 
o|inlining procedure: k2517 
o|consed rest parameter at call site: "(csi.scm:335) dump" 2 
o|inlining procedure: k2553 
o|consed rest parameter at call site: "(csi.scm:336) report" 1 
o|inlining procedure: k2553 
o|inlining procedure: k2571 
o|inlining procedure: k2589 
o|inlining procedure: k2589 
o|inlining procedure: k2571 
o|inlining procedure: k2645 
o|inlining procedure: k2645 
o|inlining procedure: k2669 
o|inlining procedure: k2669 
o|inlining procedure: k2724 
o|consed rest parameter at call site: "(csi.scm:354) describe" 2 
o|inlining procedure: k2724 
o|inlining procedure: k2737 
o|contracted procedure: k2749 
o|inlining procedure: k2737 
o|contracted procedure: "(csi.scm:363) history-clear" 
o|inlining procedure: k2787 
o|inlining procedure: k2787 
o|inlining procedure: k2811 
o|inlining procedure: k2811 
o|inlining procedure: k2840 
o|inlining procedure: k2840 
o|inlining procedure: k2896 
o|contracted procedure: "(csi.scm:404) g293300" 
o|inlining procedure: k2873 
o|inlining procedure: k2873 
o|inlining procedure: k2896 
o|propagated global variable: g299301 command-table 
o|substituted constant variable: a2923 
o|substituted constant variable: a2925 
o|substituted constant variable: a2927 
o|substituted constant variable: a2929 
o|substituted constant variable: a2931 
o|substituted constant variable: a2933 
o|substituted constant variable: a2935 
o|substituted constant variable: a2937 
o|substituted constant variable: a2939 
o|substituted constant variable: a2941 
o|substituted constant variable: a2943 
o|substituted constant variable: a2945 
o|substituted constant variable: a2947 
o|substituted constant variable: a2949 
o|substituted constant variable: a2951 
o|substituted constant variable: a2953 
o|substituted constant variable: a2955 
o|substituted constant variable: a2957 
o|substituted constant variable: a2959 
o|merged explicitly consed rest parameter: port386 
o|inlining procedure: k3198 
o|inlining procedure: k3198 
o|inlining procedure: k3241 
o|inlining procedure: k3241 
o|inlining procedure: k3348 
o|inlining procedure: k3348 
o|inlining procedure: k3378 
o|inlining procedure: k3378 
o|propagated global variable: g407411 ##sys#features 
o|merged explicitly consed rest parameter: tmp490492 
o|inlining procedure: k3511 
o|inlining procedure: k3511 
o|inlining procedure: k3540 
o|inlining procedure: k3570 
o|inlining procedure: k3570 
o|inlining procedure: k3540 
o|inlining procedure: k3627 
o|inlining procedure: k3627 
o|inlining procedure: k3651 
o|inlining procedure: k3651 
o|inlining procedure: k3669 
o|inlining procedure: k3669 
o|inlining procedure: k3687 
o|inlining procedure: k3687 
o|inlining procedure: k3720 
o|inlining procedure: k3720 
o|inlining procedure: k3738 
o|inlining procedure: k3738 
o|inlining procedure: k3756 
o|inlining procedure: k3756 
o|inlining procedure: k3787 
o|inlining procedure: k3787 
o|inlining procedure: k3802 
o|inlining procedure: k3802 
o|inlining procedure: k3847 
o|inlining procedure: k3847 
o|inlining procedure: k3865 
o|inlining procedure: k3887 
o|inlining procedure: k3887 
o|contracted procedure: k3911 
o|inlining procedure: k3908 
o|inlining procedure: k3908 
o|inlining procedure: k3865 
o|inlining procedure: k3952 
o|inlining procedure: k3952 
o|inlining procedure: k3985 
o|inlining procedure: k3985 
o|inlining procedure: k4034 
o|inlining procedure: k4034 
o|inlining procedure: k4046 
o|inlining procedure: k4046 
o|inlining procedure: k4058 
o|inlining procedure: k4058 
o|inlining procedure: k4070 
o|inlining procedure: k4070 
o|inlining procedure: k4082 
o|inlining procedure: k4082 
o|substituted constant variable: a4095 
o|substituted constant variable: a4097 
o|substituted constant variable: a4099 
o|substituted constant variable: a4101 
o|substituted constant variable: a4103 
o|substituted constant variable: a4105 
o|substituted constant variable: a4107 
o|substituted constant variable: a4109 
o|substituted constant variable: a4111 
o|substituted constant variable: a4113 
o|inlining procedure: k4114 
o|inlining procedure: k4114 
o|inlining procedure: k4142 
o|inlining procedure: k4142 
o|inlining procedure: k4179 
o|inlining procedure: k4179 
o|inlining procedure: k4217 
o|inlining procedure: k4217 
o|inlining procedure: k4276 
o|inlining procedure: k4276 
o|inlining procedure: k4252 
o|inlining procedure: k4331 
o|inlining procedure: k4331 
o|inlining procedure: k4252 
o|inlining procedure: k4367 
o|inlining procedure: k4367 
o|inlining procedure: k4413 
o|inlining procedure: k4413 
o|contracted procedure: "(csi.scm:643) improper-pairs?" 
o|contracted procedure: k3461 
o|inlining procedure: k3458 
o|inlining procedure: k3458 
o|contracted procedure: "(csi.scm:643) circular-list?" 
o|inlining procedure: k3423 
o|inlining procedure: k3443 
o|inlining procedure: k3443 
o|inlining procedure: k3423 
o|merged explicitly consed rest parameter: len-out681 
o|inlining procedure: k4504 
o|inlining procedure: k4504 
o|inlining procedure: k4510 
o|inlining procedure: k4510 
o|inlining procedure: k4536 
o|inlining procedure: k4536 
o|inlining procedure: k4562 
o|inlining procedure: k4562 
o|contracted procedure: k4595 
o|inlining procedure: k4615 
o|inlining procedure: k4615 
o|inlining procedure: k4656 
o|inlining procedure: k4656 
o|inlining procedure: k4680 
o|inlining procedure: k4680 
o|inlining procedure: k4714 
o|inlining procedure: k4714 
o|inlining procedure: k4765 
o|inlining procedure: k4783 
o|inlining procedure: k4783 
o|inlining procedure: k4799 
o|inlining procedure: k4799 
o|inlining procedure: k4765 
o|inlining procedure: k4885 
o|propagated global variable: out793797 ##sys#standard-output 
o|substituted constant variable: a4910 
o|substituted constant variable: a4911 
o|inlining procedure: k4885 
o|inlining procedure: k4959 
o|inlining procedure: k4959 
o|inlining procedure: k4974 
o|propagated global variable: out835839 ##sys#standard-output 
o|substituted constant variable: a4981 
o|substituted constant variable: a4982 
o|inlining procedure: k4974 
o|propagated global variable: out835839 ##sys#standard-output 
o|inlining procedure: k5033 
o|inlining procedure: k5033 
o|propagated global variable: out806810 ##sys#standard-output 
o|substituted constant variable: a5071 
o|substituted constant variable: a5072 
o|propagated global variable: out806810 ##sys#standard-output 
o|inlining procedure: k5087 
o|inlining procedure: k5087 
o|inlining procedure: k5101 
o|propagated global variable: out793797 ##sys#standard-output 
o|inlining procedure: k5101 
o|inlining procedure: k5107 
o|inlining procedure: k5107 
o|propagated global variable: tmp774776 ##sys#repl-recent-call-chain 
o|propagated global variable: tmp774776 ##sys#repl-recent-call-chain 
o|inlining procedure: k5125 
o|inlining procedure: k5125 
o|inlining procedure: k5159 
o|inlining procedure: k5159 
o|inlining procedure: k5216 
o|inlining procedure: k5247 
o|inlining procedure: k5247 
o|inlining procedure: k5287 
o|inlining procedure: k5287 
o|inlining procedure: k5366 
o|inlining procedure: k5366 
o|inlining procedure: k5216 
o|inlining procedure: k5409 
o|inlining procedure: k5409 
o|propagated global variable: tmp887889 ##sys#repl-recent-call-chain 
o|propagated global variable: tmp887889 ##sys#repl-recent-call-chain 
o|inlining procedure: k5433 
o|inlining procedure: k5445 
o|inlining procedure: k5445 
o|inlining procedure: k5433 
o|inlining procedure: k5488 
o|inlining procedure: k5488 
o|inlining procedure: k5503 
o|inlining procedure: k5523 
o|inlining procedure: k5553 
o|contracted procedure: "(csi.scm:956) g10651074" 
o|inlining procedure: k5553 
o|inlining procedure: k5523 
o|contracted procedure: "(csi.scm:955) findall" 
o|substituted constant variable: constant1036 
o|inlining procedure: k5634 
o|inlining procedure: k5634 
o|inlining procedure: k5503 
o|inlining procedure: k5604 
o|substituted constant variable: constant1043 
o|inlining procedure: k5604 
o|contracted procedure: "(csi.scm:1133) run" 
o|inlining procedure: k5710 
o|inlining procedure: k5710 
o|inlining procedure: k5705 
o|inlining procedure: k5705 
o|merged explicitly consed rest parameter: tmp12121214 
o|inlining procedure: k5794 
o|inlining procedure: k5794 
o|inlining procedure: k5907 
o|inlining procedure: k5907 
o|inlining procedure: k5950 
o|inlining procedure: k5950 
o|substituted constant variable: a5993 
o|inlining procedure: k5990 
o|consed rest parameter at call site: "(csi.scm:1098) evalstring1193" 2 
o|inlining procedure: k5990 
o|substituted constant variable: a6010 
o|consed rest parameter at call site: "(csi.scm:1101) evalstring1193" 2 
o|substituted constant variable: a6033 
o|inlining procedure: k6030 
o|consed rest parameter at call site: "(csi.scm:1104) evalstring1193" 2 
o|inlining procedure: k6030 
o|inlining procedure: k6085 
o|inlining procedure: k6085 
o|inlining procedure: k6103 
o|inlining procedure: k6135 
o|inlining procedure: k6135 
o|substituted constant variable: a6157 
o|propagated global variable: g14071408 pretty-print 
o|inlining procedure: k6103 
o|substituted constant variable: a6171 
o|substituted constant variable: a6173 
o|substituted constant variable: a6175 
o|substituted constant variable: a6177 
o|substituted constant variable: constant1117 
o|substituted constant variable: constant1108 
o|contracted procedure: "(csi.scm:1079) loadinit1192" 
o|inlining procedure: k5746 
o|contracted procedure: k5752 
o|inlining procedure: k5758 
o|inlining procedure: k5758 
o|inlining procedure: k5746 
o|inlining procedure: k6189 
o|inlining procedure: k6189 
o|inlining procedure: k6216 
o|inlining procedure: k6216 
o|inlining procedure: k6228 
o|inlining procedure: k6228 
o|contracted procedure: k6240 
o|inlining procedure: k6237 
o|inlining procedure: k6255 
o|inlining procedure: k6255 
o|inlining procedure: k6237 
o|inlining procedure: k6324 
o|inlining procedure: k6324 
o|inlining procedure: k6358 
o|inlining procedure: k6358 
o|inlining procedure: k6392 
o|inlining procedure: k6392 
o|inlining procedure: k6415 
o|inlining procedure: k6415 
o|inlining procedure: k6438 
o|inlining procedure: k6438 
o|inlining procedure: k6482 
o|inlining procedure: k6482 
o|contracted procedure: "(csi.scm:1028) print-usage" 
o|inlining procedure: k6527 
o|inlining procedure: k6527 
o|inlining procedure: k6562 
o|inlining procedure: k6562 
o|inlining procedure: k6565 
o|inlining procedure: k6565 
o|inlining procedure: k6571 
o|inlining procedure: k6571 
o|inlining procedure: k6592 
o|inlining procedure: k6592 
o|substituted constant variable: a6612 
o|inlining procedure: k6632 
o|inlining procedure: k6632 
o|substituted constant variable: a6635 
o|inlining procedure: k6666 
o|inlining procedure: k6666 
o|contracted procedure: "(csi.scm:977) parse-option-string" 
o|inlining procedure: k3032 
o|contracted procedure: "(csi.scm:446) g339348" 
o|inlining procedure: k3002 
o|inlining procedure: k3002 
o|inlining procedure: k3032 
o|inlining procedure: k3100 
o|inlining procedure: k3100 
o|inlining procedure: k6716 
o|inlining procedure: k6716 
o|inlining procedure: k6800 
o|inlining procedure: k6800 
o|contracted procedure: k6828 
o|inlining procedure: k6825 
o|contracted procedure: k6840 
o|inlining procedure: k6849 
o|inlining procedure: k6849 
o|inlining procedure: k6825 
o|inlining procedure: k6891 
o|inlining procedure: k6891 
o|substituted constant variable: a6901 
o|inlining procedure: k6905 
o|inlining procedure: k6905 
o|replaced variables: 923 
o|removed binding forms: 363 
o|removed side-effect free assignment to unused variable: constant0 
o|removed side-effect free assignment to unused variable: constant3 
o|substituted constant variable: int6267 
o|substituted constant variable: r21726926 
o|substituted constant variable: r20936927 
o|substituted constant variable: r21186929 
o|contracted procedure: "(csi.scm:366) history-show" 
o|propagated global variable: out123127 ##sys#standard-output 
o|contracted procedure: "(csi.scm:372) select-frame" 
o|contracted procedure: "(csi.scm:375) copy-from-frame" 
o|converted assignments to bindings: (fail902) 
o|converted assignments to bindings: (compare897) 
o|substituted constant variable: r54107127 
o|converted assignments to bindings: (shorten389) 
o|substituted constant variable: r35716993 
o|substituted constant variable: r35716993 
o|substituted constant variable: r35716995 
o|substituted constant variable: r35716995 
o|inlining procedure: k3699 
o|inlining procedure: k3627 
o|inlining procedure: k3627 
o|removed call to pure procedure with unused result: "(csi.scm:657) size" 
o|substituted constant variable: r40357038 
o|substituted constant variable: r40357038 
o|inlining procedure: k4034 
o|inlining procedure: k4034 
o|substituted constant variable: r40477042 
o|inlining procedure: k4034 
o|inlining procedure: k4034 
o|substituted constant variable: r40597044 
o|inlining procedure: k4034 
o|inlining procedure: k4034 
o|substituted constant variable: r40717046 
o|inlining procedure: k4034 
o|inlining procedure: k4034 
o|substituted constant variable: r40837048 
o|inlining procedure: k4034 
o|inlining procedure: k4034 
o|substituted constant variable: r34597069 
o|substituted constant variable: r34247073 
o|converted assignments to bindings: (descseq498) 
o|converted assignments to bindings: (bestlen699) 
o|converted assignments to bindings: (justify722) 
o|propagated global variable: out793797 ##sys#standard-output 
o|propagated global variable: out835839 ##sys#standard-output 
o|propagated global variable: out806810 ##sys#standard-output 
o|substituted constant variable: r50887104 
o|substituted constant variable: r50887104 
o|substituted constant variable: r50887106 
o|substituted constant variable: r50887106 
o|substituted constant variable: r51027108 
o|substituted constant variable: r51027108 
o|substituted constant variable: r51027110 
o|substituted constant variable: r51027110 
o|substituted constant variable: r51087113 
o|converted assignments to bindings: (prin1771) 
o|substituted constant variable: r54347131 
o|removed side-effect free assignment to unused variable: constant1036 
o|removed side-effect free assignment to unused variable: constant1043 
o|substituted constant variable: r54897132 
o|substituted constant variable: clist1094 
o|substituted constant variable: r56057143 
o|removed side-effect free assignment to unused variable: constant1108 
o|removed side-effect free assignment to unused variable: constant1117 
o|substituted constant variable: r57067147 
o|substituted constant variable: r60867160 
o|substituted constant variable: r60867160 
o|substituted constant variable: r61047166 
o|substituted constant variable: r61047166 
o|substituted constant variable: r57477171 
o|substituted constant variable: r65637218 
o|substituted constant variable: r65637218 
o|substituted constant variable: r66677229 
o|substituted constant variable: r68017239 
o|substituted constant variable: r68927246 
o|substituted constant variable: r68927246 
o|converted assignments to bindings: (addext70) 
o|simplifications: ((let . 8)) 
o|replaced variables: 20 
o|removed binding forms: 933 
o|inlining procedure: k1998 
o|inlining procedure: k5268 
o|contracted procedure: k3971 
o|inlining procedure: k4282 
o|inlining procedure: k5940 
o|inlining procedure: k5940 
o|inlining procedure: k5940 
o|inlining procedure: k5940 
o|inlining procedure: k5940 
o|inlining procedure: k5940 
o|inlining procedure: k5940 
o|inlining procedure: k6147 
o|inlining procedure: k6461 
o|inlining procedure: k6623 
o|inlining procedure: k6623 
o|inlining procedure: k6623 
o|replaced variables: 14 
o|removed binding forms: 91 
o|substituted constant variable: r19997439 
o|substituted constant variable: r19997439 
o|substituted constant variable: r19997439 
o|substituted constant variable: r40357314 
o|substituted constant variable: r40357316 
o|substituted constant variable: r40357318 
o|substituted constant variable: r40357320 
o|substituted constant variable: r40357322 
o|substituted constant variable: r40357324 
o|substituted constant variable: r40357326 
o|substituted constant variable: r40357328 
o|substituted constant variable: r40357330 
o|inlining procedure: k6088 
o|replaced variables: 2 
o|removed binding forms: 28 
o|removed conditional forms: 1 
o|substituted constant variable: r60897659 
o|removed binding forms: 12 
o|removed conditional forms: 1 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|simplifications: ((if . 40) (##core#call . 554)) 
o|  call simplifications:
o|    make-vector
o|    ##sys#pair?	2
o|    ##sys#eq?
o|    ##sys#cdr	4
o|    ##sys#car	2
o|    ##sys#cons	11
o|    set-car!
o|    call-with-values
o|    void
o|    member	9
o|    string->list
o|    string
o|    equal?	3
o|    fxmod
o|    write-char	7
o|    ##sys#immediate?	2
o|    ##sys#permanent?
o|    char?
o|    fixnum?	2
o|    flonum?
o|    vector?
o|    list?
o|    procedure?
o|    ##sys#pointer?	2
o|    ##sys#generic-structure?	2
o|    cdr	15
o|    caar
o|    cdar
o|    fx=	3
o|    atom?
o|    memq	3
o|    cddr	3
o|    integer->char	2
o|    char->integer
o|    ##sys#setslot	9
o|    =
o|    -
o|    <=
o|    add1	2
o|    +
o|    *
o|    /
o|    eof-object?	4
o|    caddr
o|    symbol?	3
o|    string?	5
o|    ##sys#structure?	4
o|    ##sys#check-list	15
o|    string-length	5
o|    fxmin
o|    string=?	6
o|    number?	2
o|    not	4
o|    fx<	4
o|    length	4
o|    list-ref	2
o|    >=	2
o|    eq?	43
o|    apply	5
o|    ##sys#call-with-values	5
o|    ##sys#apply	2
o|    cadr	13
o|    car	19
o|    ##sys#check-symbol	2
o|    ##sys#check-string
o|    assq	4
o|    cons	23
o|    list	7
o|    set-cdr!	2
o|    ##sys#fudge	6
o|    inexact->exact
o|    fx<=
o|    vector-ref	8
o|    null?	21
o|    ##sys#void	20
o|    fx*
o|    vector-set!
o|    fx>=	15
o|    fx+	20
o|    pair?	32
o|    ##sys#slot	87
o|    ##sys#foreign-block-argument
o|    ##sys#foreign-fixnum-argument
o|    ##sys#size	11
o|    sub1
o|    string-ref	4
o|    fx>	6
o|    char=?	6
o|    char-whitespace?
o|    fx-	11
o|    ##sys#list	4
o|contracted procedure: k1896 
o|contracted procedure: k1962 
o|contracted procedure: k1965 
o|contracted procedure: k1976 
o|contracted procedure: k1998 
o|contracted procedure: k2035 
o|contracted procedure: k2013 
o|contracted procedure: k2016 
o|contracted procedure: k2028 
o|contracted procedure: k2209 
o|contracted procedure: k2120 
o|contracted procedure: k2050 
o|contracted procedure: k2054 
o|contracted procedure: k2174 
o|contracted procedure: k2190 
o|contracted procedure: k2199 
o|contracted procedure: k2083 
o|contracted procedure: k2095 
o|contracted procedure: k2108 
o|contracted procedure: k2205 
o|contracted procedure: k2214 
o|contracted procedure: k2248 
o|contracted procedure: k2221 
o|contracted procedure: k2224 
o|contracted procedure: k2230 
o|contracted procedure: k2234 
o|contracted procedure: k2237 
o|contracted procedure: k2245 
o|contracted procedure: k2320 
o|contracted procedure: k2335 
o|contracted procedure: k2326 
o|contracted procedure: k2347 
o|contracted procedure: k2414 
o|contracted procedure: k2373 
o|contracted procedure: k2376 
o|contracted procedure: k2379 
o|contracted procedure: k2382 
o|contracted procedure: k2397 
o|contracted procedure: k2408 
o|contracted procedure: k2404 
o|contracted procedure: k2426 
o|contracted procedure: k2438 
o|contracted procedure: k2441 
o|contracted procedure: k2449 
o|contracted procedure: k2464 
o|contracted procedure: k2487 
o|contracted procedure: k2505 
o|contracted procedure: k2520 
o|contracted procedure: k2535 
o|contracted procedure: k2556 
o|contracted procedure: k2565 
o|contracted procedure: k2574 
o|contracted procedure: k2592 
o|contracted procedure: k2602 
o|contracted procedure: k2606 
o|contracted procedure: k2616 
o|contracted procedure: k2648 
o|contracted procedure: k2658 
o|contracted procedure: k2662 
o|contracted procedure: k2672 
o|contracted procedure: k2721 
o|contracted procedure: k2734 
o|contracted procedure: k2740 
o|contracted procedure: k2756 
o|contracted procedure: k2768 
o|contracted procedure: k2778 
o|contracted procedure: k2264 
o|propagated global variable: r2265 ##sys#undefined-value 
o|contracted procedure: k2790 
o|contracted procedure: k2279 
o|contracted procedure: k2304 
o|contracted procedure: k2314 
o|contracted procedure: k2802 
o|contracted procedure: k2814 
o|contracted procedure: k5176 
o|contracted procedure: k5128 
o|contracted procedure: k5149 
o|contracted procedure: k5153 
o|contracted procedure: k5145 
o|contracted procedure: k5138 
o|contracted procedure: k5156 
o|contracted procedure: k5162 
o|contracted procedure: k5172 
o|contracted procedure: k2830 
o|contracted procedure: k5182 
o|contracted procedure: k5185 
o|contracted procedure: k5194 
o|contracted procedure: k5209 
o|contracted procedure: k5213 
o|contracted procedure: k5205 
o|contracted procedure: k5238 
o|propagated global variable: r5239 ##sys#undefined-value 
o|contracted procedure: k5250 
o|contracted procedure: k5256 
o|contracted procedure: k5259 
o|contracted procedure: k5262 
o|contracted procedure: k5265 
o|contracted procedure: k5276 
o|contracted procedure: k5290 
o|contracted procedure: k5300 
o|contracted procedure: k5324 
o|contracted procedure: k5332 
o|contracted procedure: k5328 
o|contracted procedure: k5338 
o|contracted procedure: k5341 
o|contracted procedure: k5344 
o|contracted procedure: k5347 
o|contracted procedure: k5350 
o|contracted procedure: k5394 
o|contracted procedure: k5369 
o|contracted procedure: k5379 
o|contracted procedure: k5383 
o|contracted procedure: k5387 
o|contracted procedure: k5391 
o|contracted procedure: k5403 
o|contracted procedure: k5412 
o|contracted procedure: k2843 
o|contracted procedure: k2856 
o|contracted procedure: k2862 
o|contracted procedure: k2884 
o|contracted procedure: k2899 
o|contracted procedure: k2909 
o|contracted procedure: k2913 
o|contracted procedure: k2870 
o|propagated global variable: g299301 command-table 
o|contracted procedure: k2978 
o|contracted procedure: k2985 
o|contracted procedure: k3171 
o|contracted procedure: k3185 
o|contracted procedure: k3188 
o|contracted procedure: k3192 
o|contracted procedure: k3201 
o|contracted procedure: k3215 
o|contracted procedure: k3219 
o|contracted procedure: k3223 
o|contracted procedure: k3226 
o|contracted procedure: k3244 
o|contracted procedure: k3250 
o|contracted procedure: k3342 
o|contracted procedure: k3261 
o|contracted procedure: k3293 
o|contracted procedure: k3297 
o|contracted procedure: k3327 
o|contracted procedure: k3301 
o|contracted procedure: k3305 
o|contracted procedure: k3309 
o|contracted procedure: k3324 
o|contracted procedure: k3320 
o|contracted procedure: k3313 
o|contracted procedure: k3331 
o|contracted procedure: k3335 
o|contracted procedure: k3351 
o|contracted procedure: k3361 
o|contracted procedure: k3365 
o|contracted procedure: k3369 
o|contracted procedure: k3381 
o|contracted procedure: k3384 
o|contracted procedure: k3387 
o|contracted procedure: k3395 
o|contracted procedure: k3403 
o|contracted procedure: k3409 
o|contracted procedure: k4481 
o|contracted procedure: k3490 
o|contracted procedure: k3496 
o|contracted procedure: k3508 
o|contracted procedure: k3517 
o|contracted procedure: k3524 
o|contracted procedure: k3610 
o|contracted procedure: k3534 
o|contracted procedure: k3543 
o|contracted procedure: k3556 
o|contracted procedure: k3559 
o|contracted procedure: k3566 
o|contracted procedure: k3573 
o|contracted procedure: k3588 
o|contracted procedure: k3595 
o|contracted procedure: k3599 
o|contracted procedure: k3614 
o|contracted procedure: k3633 
o|contracted procedure: k3636 
o|contracted procedure: k3645 
o|contracted procedure: k3654 
o|contracted procedure: k3663 
o|contracted procedure: k3672 
o|contracted procedure: k4468 
o|contracted procedure: k3681 
o|propagated global variable: r4469 ##sys#undefined-value 
o|contracted procedure: k3690 
o|contracted procedure: k3696 
o|contracted procedure: k3705 
o|contracted procedure: k4464 
o|contracted procedure: k3714 
o|contracted procedure: k3723 
o|contracted procedure: k3732 
o|contracted procedure: k3741 
o|contracted procedure: k3750 
o|contracted procedure: k3772 
o|contracted procedure: k3784 
o|contracted procedure: k3790 
o|contracted procedure: k3805 
o|contracted procedure: k3821 
o|contracted procedure: k3831 
o|contracted procedure: k3835 
o|contracted procedure: k3839 
o|contracted procedure: k3843 
o|contracted procedure: k3881 
o|contracted procedure: k3890 
o|contracted procedure: k3893 
o|contracted procedure: k3937 
o|contracted procedure: k3902 
o|contracted procedure: k3931 
o|contracted procedure: k3923 
o|contracted procedure: k3946 
o|contracted procedure: k3955 
o|contracted procedure: k3968 
o|contracted procedure: k4010 
o|contracted procedure: k3995 
o|contracted procedure: k3999 
o|contracted procedure: k4003 
o|contracted procedure: k4027 
o|contracted procedure: k4031 
o|contracted procedure: k4037 
o|contracted procedure: k4043 
o|contracted procedure: k4049 
o|contracted procedure: k4055 
o|contracted procedure: k4061 
o|contracted procedure: k4067 
o|contracted procedure: k4073 
o|contracted procedure: k4079 
o|contracted procedure: k4085 
o|contracted procedure: k4091 
o|contracted procedure: k4117 
o|contracted procedure: k4133 
o|contracted procedure: k4155 
o|contracted procedure: k4158 
o|contracted procedure: k4167 
o|contracted procedure: k4170 
o|contracted procedure: k4182 
o|contracted procedure: k4191 
o|contracted procedure: k4195 
o|contracted procedure: k4198 
o|contracted procedure: k4201 
o|contracted procedure: k4211 
o|contracted procedure: k4220 
o|contracted procedure: k4230 
o|contracted procedure: k4234 
o|contracted procedure: k4238 
o|contracted procedure: k4249 
o|contracted procedure: k4242 
o|contracted procedure: k4246 
o|contracted procedure: k4255 
o|contracted procedure: k4270 
o|contracted procedure: k4279 
o|contracted procedure: k4289 
o|contracted procedure: k4316 
o|contracted procedure: k4292 
o|contracted procedure: k4308 
o|contracted procedure: k4312 
o|contracted procedure: k42897481 
o|contracted procedure: k4319 
o|contracted procedure: k4322 
o|contracted procedure: k4334 
o|contracted procedure: k4344 
o|contracted procedure: k4348 
o|contracted procedure: k4352 
o|contracted procedure: k4358 
o|contracted procedure: k4361 
o|contracted procedure: k4378 
o|contracted procedure: k4394 
o|contracted procedure: k4397 
o|contracted procedure: k4400 
o|contracted procedure: k4407 
o|contracted procedure: k4416 
o|contracted procedure: k4419 
o|contracted procedure: k4422 
o|contracted procedure: k4430 
o|contracted procedure: k4438 
o|contracted procedure: k4454 
o|contracted procedure: k3480 
o|contracted procedure: k3476 
o|contracted procedure: k3464 
o|contracted procedure: k3426 
o|contracted procedure: k3433 
o|contracted procedure: k3437 
o|contracted procedure: k3440 
o|contracted procedure: k4471 
o|contracted procedure: k4490 
o|contracted procedure: k4513 
o|contracted procedure: k4533 
o|contracted procedure: k4539 
o|contracted procedure: k4550 
o|contracted procedure: k4602 
o|contracted procedure: k4556 
o|contracted procedure: k4568 
o|contracted procedure: k4579 
o|contracted procedure: k4585 
o|contracted procedure: k4592 
o|contracted procedure: k4618 
o|contracted procedure: k4624 
o|contracted procedure: k4631 
o|contracted procedure: k4637 
o|contracted procedure: k4653 
o|contracted procedure: k4659 
o|contracted procedure: k4671 
o|contracted procedure: k4683 
o|contracted procedure: k4708 
o|contracted procedure: k4717 
o|contracted procedure: k4720 
o|contracted procedure: k4733 
o|contracted procedure: k4737 
o|contracted procedure: k4753 
o|contracted procedure: k4740 
o|contracted procedure: k4747 
o|contracted procedure: k4768 
o|contracted procedure: k4771 
o|contracted procedure: k4777 
o|contracted procedure: k4780 
o|contracted procedure: k4786 
o|contracted procedure: k4793 
o|contracted procedure: k4802 
o|contracted procedure: k4812 
o|contracted procedure: k4825 
o|contracted procedure: k4829 
o|contracted procedure: k4862 
o|contracted procedure: k4865 
o|contracted procedure: k4869 
o|contracted procedure: k4879 
o|contracted procedure: k4888 
o|contracted procedure: k4891 
o|contracted procedure: k4894 
o|contracted procedure: k4897 
o|contracted procedure: k4900 
o|contracted procedure: k4903 
o|contracted procedure: k4906 
o|contracted procedure: k4951 
o|contracted procedure: k4954 
o|contracted procedure: k4962 
o|contracted procedure: k4977 
o|contracted procedure: k5002 
o|contracted procedure: k5008 
o|contracted procedure: k5012 
o|contracted procedure: k5015 
o|contracted procedure: k5018 
o|contracted procedure: k5021 
o|contracted procedure: k5024 
o|contracted procedure: k5061 
o|contracted procedure: k5036 
o|contracted procedure: k5046 
o|contracted procedure: k5050 
o|contracted procedure: k5054 
o|contracted procedure: k5058 
o|contracted procedure: k5083 
o|contracted procedure: k5097 
o|contracted procedure: k5110 
o|contracted procedure: k5117 
o|contracted procedure: k5421 
o|contracted procedure: k5436 
o|contracted procedure: k5448 
o|contracted procedure: k5455 
o|contracted procedure: k5470 
o|contracted procedure: k5474 
o|contracted procedure: k5461 
o|contracted procedure: k5491 
o|contracted procedure: k5494 
o|contracted procedure: k5500 
o|contracted procedure: k5512 
o|contracted procedure: k5533 
o|contracted procedure: k5556 
o|contracted procedure: k5578 
o|contracted procedure: k5574 
o|contracted procedure: k5559 
o|contracted procedure: k5562 
o|contracted procedure: k5570 
o|contracted procedure: k5631 
o|contracted procedure: k5649 
o|contracted procedure: k5640 
o|contracted procedure: k5619 
o|contracted procedure: k5601 
o|contracted procedure: k5607 
o|contracted procedure: k5614 
o|contracted procedure: k5684 
o|contracted procedure: k5702 
o|contracted procedure: k5734 
o|contracted procedure: k5713 
o|contracted procedure: k5723 
o|contracted procedure: k5820 
o|contracted procedure: k5778 
o|contracted procedure: k5797 
o|contracted procedure: k5855 
o|contracted procedure: k5864 
o|contracted procedure: k5873 
o|contracted procedure: k5910 
o|contracted procedure: k5934 
o|contracted procedure: k5937 
o|contracted procedure: k5947 
o|contracted procedure: k59477527 
o|contracted procedure: k5953 
o|contracted procedure: k5957 
o|contracted procedure: k59477531 
o|contracted procedure: k5963 
o|contracted procedure: k5966 
o|contracted procedure: k59477535 
o|contracted procedure: k5979 
o|contracted procedure: k5975 
o|contracted procedure: k5987 
o|contracted procedure: k5995 
o|contracted procedure: k59477539 
o|contracted procedure: k6004 
o|contracted procedure: k6012 
o|contracted procedure: k59477543 
o|contracted procedure: k6021 
o|contracted procedure: k6035 
o|contracted procedure: k59477547 
o|contracted procedure: k6044 
o|contracted procedure: k6053 
o|contracted procedure: k6062 
o|contracted procedure: k6094 
o|contracted procedure: k6088 
o|contracted procedure: k6085 
o|contracted procedure: k59477551 
o|contracted procedure: k6106 
o|contracted procedure: k6114 
o|contracted procedure: k6138 
o|contracted procedure: k6141 
o|contracted procedure: k6154 
o|contracted procedure: k61547555 
o|contracted procedure: k6183 
o|contracted procedure: k5772 
o|contracted procedure: k6288 
o|contracted procedure: k6284 
o|contracted procedure: k6280 
o|contracted procedure: k6249 
o|contracted procedure: k6258 
o|contracted procedure: k6267 
o|contracted procedure: k6296 
o|contracted procedure: k6302 
o|contracted procedure: k6309 
o|contracted procedure: k6315 
o|contracted procedure: k6327 
o|contracted procedure: k6330 
o|contracted procedure: k6333 
o|contracted procedure: k6341 
o|contracted procedure: k6349 
o|contracted procedure: k6361 
o|contracted procedure: k6364 
o|contracted procedure: k6367 
o|contracted procedure: k6375 
o|contracted procedure: k6383 
o|contracted procedure: k6395 
o|contracted procedure: k6405 
o|contracted procedure: k6409 
o|contracted procedure: k6418 
o|contracted procedure: k6428 
o|contracted procedure: k6432 
o|contracted procedure: k6441 
o|contracted procedure: k6451 
o|contracted procedure: k6455 
o|contracted procedure: k6489 
o|contracted procedure: k6502 
o|contracted procedure: k6506 
o|contracted procedure: k1937 
o|contracted procedure: k1933 
o|contracted procedure: k1929 
o|contracted procedure: k6530 
o|contracted procedure: k6533 
o|contracted procedure: k6536 
o|contracted procedure: k6544 
o|contracted procedure: k6552 
o|contracted procedure: k6589 
o|contracted procedure: k6607 
o|contracted procedure: k6617 
o|contracted procedure: k6656 
o|contracted procedure: k6652 
o|contracted procedure: k6620 
o|contracted procedure: k6648 
o|contracted procedure: k6644 
o|contracted procedure: k6629 
o|contracted procedure: k6637 
o|contracted procedure: k6663 
o|contracted procedure: k6684 
o|contracted procedure: k2997 
o|contracted procedure: k3023 
o|contracted procedure: k3035 
o|contracted procedure: k3038 
o|contracted procedure: k3041 
o|contracted procedure: k3049 
o|contracted procedure: k3057 
o|contracted procedure: k3005 
o|contracted procedure: k3103 
o|contracted procedure: k3117 
o|contracted procedure: k6713 
o|contracted procedure: k6722 
o|contracted procedure: k6788 
o|contracted procedure: k6725 
o|contracted procedure: k6784 
o|contracted procedure: k6780 
o|contracted procedure: k6776 
o|contracted procedure: k6740 
o|contracted procedure: k6768 
o|contracted procedure: k6764 
o|contracted procedure: k6756 
o|contracted procedure: k6748 
o|contracted procedure: k6744 
o|contracted procedure: k6736 
o|contracted procedure: k6794 
o|contracted procedure: k6797 
o|contracted procedure: k6803 
o|contracted procedure: k6810 
o|contracted procedure: k6871 
o|contracted procedure: k6874 
o|simplifications: ((if . 3) (let . 117)) 
o|removed binding forms: 506 
o|inlining procedure: k5293 
o|inlining procedure: k4942 
o|replaced variables: 214 
o|inlining procedure: k2363 
o|simplifications: ((if . 1)) 
o|removed binding forms: 89 
o|replaced variables: 1 
o|removed binding forms: 1 
o|direct leaf routine/allocation: g166167 6 
o|direct leaf routine/allocation: lp473 0 
o|direct leaf routine/allocation: lp459 0 
o|direct leaf routine/allocation: loop1095 0 
o|contracted procedure: "(csi.scm:280) k2385" 
o|contracted procedure: k3868 
o|converted assignments to bindings: (lp473) 
o|converted assignments to bindings: (lp459) 
o|contracted procedure: k5526 
o|converted assignments to bindings: (loop1095) 
o|simplifications: ((let . 3)) 
o|removed binding forms: 3 
o|replaced variables: 2 
o|removed binding forms: 1 
o|customizable procedures: (k1909 k6822 g323324 k6719 doloop361362 map-loop333367 canonicalize-args lookup-script-file k5669 k5675 k5681 map-loop11641184 k5837 k5843 print-banner for-each-loop12361246 for-each-loop12531263 for-each-loop12701280 map-loop12871304 collect-options1191 map-loop13131330 member* k5898 doloop14101411 evalstring1193 doloop13531354 doloop12221223 g12031204 loop1195 k5506 map-loop10591084 loop1047 find1024 loop1021 k4872 k5090 g818826 for-each-loop817848 prin1771 doloop831832 doloop783784 justify722 doloop731732 doloop739740 doloop747748 doloop721729 def-len686707 def-out687705 body684692 k4565 bestlen699 k3871 g642643 map-loop647664 g631632 g602609 for-each-loop601618 loop612 g580587 for-each-loop579590 doloop574575 hexdump loop-print549 doloop536537 loop2514 loop1504 k3145 map-loop395412 g422429 for-each-loop421443 shorten389 k3195 k2435 for-each-loop292304 k5188 g916924 for-each-loop915939 compare897 doloop929930 doloop901906 fail902 k5131 show-frameinfo doloop120121 history-add g246253 for-each-loop245265 for-each-loop226236 report dump describe k2227 loop78 loop97 addext70 history-ref) 
o|calls to known targets: 263 
o|identified direct recursive calls: f_5245 1 
o|identified direct recursive calls: f_3421 1 
o|identified direct recursive calls: f_4274 1 
o|identified direct recursive calls: f_3456 1 
o|identified direct recursive calls: f_5443 1 
o|identified direct recursive calls: f_5629 1 
o|identified direct recursive calls: f_5551 1 
o|unused rest argument: _1220 f_5823 
o|unused rest argument: _1357 f_5926 
o|identified direct recursive calls: f_5905 2 
o|fast box initializations: 47 
o|fast global references: 77 
o|fast global assignments: 27 
o|dropping unused closure argument: f_3161 
o|dropping unused closure argument: f_4645 
o|dropping unused closure argument: f_4648 
o|dropping unused closure argument: f_1941 
o|dropping unused closure argument: f_4497 
o|dropping unused closure argument: f_5629 
o|dropping unused closure argument: f_5425 
o|dropping unused closure argument: f_3456 
o|dropping unused closure argument: f_3421 
o|dropping unused closure argument: f_5480 
o|dropping unused closure argument: f_4848 
o|dropping unused closure argument: f_2061 
o|dropping unused closure argument: f_2318 
o|dropping unused closure argument: f_5776 
o|dropping unused closure argument: f_4851 
*/
/* end of file */

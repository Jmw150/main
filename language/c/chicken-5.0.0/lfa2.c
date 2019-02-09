/* Generated from lfa2.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: lfa2.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -emit-import-library chicken.compiler.lfa2 -output-file lfa2.c
   unit: lfa2
   uses: library eval expand extras support
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
C_noret_decl(C_support_toplevel)
C_externimport void C_ccall C_support_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[80];
static double C_possibly_force_alignment;


C_noret_decl(f_1146)
static void C_ccall f_1146(C_word c,C_word *av) C_noret;
C_noret_decl(f_1149)
static void C_ccall f_1149(C_word c,C_word *av) C_noret;
C_noret_decl(f_1152)
static void C_ccall f_1152(C_word c,C_word *av) C_noret;
C_noret_decl(f_1155)
static void C_ccall f_1155(C_word c,C_word *av) C_noret;
C_noret_decl(f_1158)
static void C_ccall f_1158(C_word c,C_word *av) C_noret;
C_noret_decl(f_2478)
static void C_ccall f_2478(C_word c,C_word *av) C_noret;
C_noret_decl(f_2500)
static void C_ccall f_2500(C_word c,C_word *av) C_noret;
C_noret_decl(f_2503)
static void C_ccall f_2503(C_word c,C_word *av) C_noret;
C_noret_decl(f_2603)
static void C_fcall f_2603(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2629)
static void C_fcall f_2629(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2635)
static void C_fcall f_2635(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2640)
static void C_ccall f_2640(C_word c,C_word *av) C_noret;
C_noret_decl(f_2666)
static void C_ccall f_2666(C_word c,C_word *av) C_noret;
C_noret_decl(f_2670)
static void C_ccall f_2670(C_word c,C_word *av) C_noret;
C_noret_decl(f_2674)
static void C_ccall f_2674(C_word c,C_word *av) C_noret;
C_noret_decl(f_2676)
static void C_fcall f_2676(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2680)
static void C_ccall f_2680(C_word c,C_word *av) C_noret;
C_noret_decl(f_2683)
static void C_ccall f_2683(C_word c,C_word *av) C_noret;
C_noret_decl(f_2688)
static void C_fcall f_2688(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2692)
static void C_ccall f_2692(C_word c,C_word *av) C_noret;
C_noret_decl(f_2695)
static void C_ccall f_2695(C_word c,C_word *av) C_noret;
C_noret_decl(f_2696)
static void C_fcall f_2696(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2703)
static void C_ccall f_2703(C_word c,C_word *av) C_noret;
C_noret_decl(f_2713)
static void C_ccall f_2713(C_word c,C_word *av) C_noret;
C_noret_decl(f_2730)
static void C_ccall f_2730(C_word c,C_word *av) C_noret;
C_noret_decl(f_2737)
static void C_ccall f_2737(C_word c,C_word *av) C_noret;
C_noret_decl(f_2765)
static void C_ccall f_2765(C_word c,C_word *av) C_noret;
C_noret_decl(f_2767)
static void C_fcall f_2767(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2777)
static void C_ccall f_2777(C_word c,C_word *av) C_noret;
C_noret_decl(f_2796)
static void C_ccall f_2796(C_word c,C_word *av) C_noret;
C_noret_decl(f_2813)
static void C_fcall f_2813(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2823)
static void C_fcall f_2823(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2849)
static void C_fcall f_2849(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2853)
static void C_ccall f_2853(C_word c,C_word *av) C_noret;
C_noret_decl(f_2856)
static void C_ccall f_2856(C_word c,C_word *av) C_noret;
C_noret_decl(f_2859)
static void C_ccall f_2859(C_word c,C_word *av) C_noret;
C_noret_decl(f_2884)
static void C_ccall f_2884(C_word c,C_word *av) C_noret;
C_noret_decl(f_2890)
static void C_fcall f_2890(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2893)
static void C_ccall f_2893(C_word c,C_word *av) C_noret;
C_noret_decl(f_2904)
static void C_ccall f_2904(C_word c,C_word *av) C_noret;
C_noret_decl(f_2916)
static void C_ccall f_2916(C_word c,C_word *av) C_noret;
C_noret_decl(f_2923)
static void C_ccall f_2923(C_word c,C_word *av) C_noret;
C_noret_decl(f_2974)
static void C_ccall f_2974(C_word c,C_word *av) C_noret;
C_noret_decl(f_2985)
static void C_fcall f_2985(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2992)
static void C_fcall f_2992(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3006)
static void C_ccall f_3006(C_word c,C_word *av) C_noret;
C_noret_decl(f_3022)
static void C_ccall f_3022(C_word c,C_word *av) C_noret;
C_noret_decl(f_3030)
static void C_ccall f_3030(C_word c,C_word *av) C_noret;
C_noret_decl(f_3034)
static void C_ccall f_3034(C_word c,C_word *av) C_noret;
C_noret_decl(f_3038)
static void C_ccall f_3038(C_word c,C_word *av) C_noret;
C_noret_decl(f_3041)
static void C_ccall f_3041(C_word c,C_word *av) C_noret;
C_noret_decl(f_3056)
static void C_ccall f_3056(C_word c,C_word *av) C_noret;
C_noret_decl(f_3072)
static void C_ccall f_3072(C_word c,C_word *av) C_noret;
C_noret_decl(f_3098)
static void C_fcall f_3098(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3108)
static void C_ccall f_3108(C_word c,C_word *av) C_noret;
C_noret_decl(f_3115)
static void C_fcall f_3115(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3119)
static void C_ccall f_3119(C_word c,C_word *av) C_noret;
C_noret_decl(f_3122)
static void C_ccall f_3122(C_word c,C_word *av) C_noret;
C_noret_decl(f_3137)
static void C_fcall f_3137(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3163)
static void C_ccall f_3163(C_word c,C_word *av) C_noret;
C_noret_decl(f_3183)
static void C_ccall f_3183(C_word c,C_word *av) C_noret;
C_noret_decl(f_3197)
static void C_fcall f_3197(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3245)
static void C_fcall f_3245(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3252)
static void C_ccall f_3252(C_word c,C_word *av) C_noret;
C_noret_decl(f_3255)
static void C_ccall f_3255(C_word c,C_word *av) C_noret;
C_noret_decl(f_3261)
static void C_ccall f_3261(C_word c,C_word *av) C_noret;
C_noret_decl(f_3264)
static void C_ccall f_3264(C_word c,C_word *av) C_noret;
C_noret_decl(f_3271)
static void C_ccall f_3271(C_word c,C_word *av) C_noret;
C_noret_decl(f_3275)
static void C_ccall f_3275(C_word c,C_word *av) C_noret;
C_noret_decl(f_3279)
static void C_ccall f_3279(C_word c,C_word *av) C_noret;
C_noret_decl(f_3297)
static void C_fcall f_3297(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3351)
static void C_ccall f_3351(C_word c,C_word *av) C_noret;
C_noret_decl(f_3359)
static void C_ccall f_3359(C_word c,C_word *av) C_noret;
C_noret_decl(f_3374)
static void C_ccall f_3374(C_word c,C_word *av) C_noret;
C_noret_decl(f_3377)
static void C_ccall f_3377(C_word c,C_word *av) C_noret;
C_noret_decl(f_3380)
static void C_ccall f_3380(C_word c,C_word *av) C_noret;
C_noret_decl(f_3389)
static void C_fcall f_3389(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3415)
static void C_ccall f_3415(C_word c,C_word *av) C_noret;
C_noret_decl(f_3435)
static void C_ccall f_3435(C_word c,C_word *av) C_noret;
C_noret_decl(f_3449)
static void C_fcall f_3449(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3491)
static void C_ccall f_3491(C_word c,C_word *av) C_noret;
C_noret_decl(f_3501)
static void C_fcall f_3501(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3511)
static void C_fcall f_3511(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3527)
static void C_ccall f_3527(C_word c,C_word *av) C_noret;
C_noret_decl(f_3543)
static void C_ccall f_3543(C_word c,C_word *av) C_noret;
C_noret_decl(f_3574)
static void C_fcall f_3574(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3584)
static void C_ccall f_3584(C_word c,C_word *av) C_noret;
C_noret_decl(f_3596)
static void C_fcall f_3596(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3606)
static void C_ccall f_3606(C_word c,C_word *av) C_noret;
C_noret_decl(f_3608)
static void C_fcall f_3608(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word *av) C_noret;
C_noret_decl(f_3670)
static void C_ccall f_3670(C_word c,C_word *av) C_noret;
C_noret_decl(f_3681)
static void C_ccall f_3681(C_word c,C_word *av) C_noret;
C_noret_decl(f_3685)
static void C_ccall f_3685(C_word c,C_word *av) C_noret;
C_noret_decl(f_3693)
static void C_ccall f_3693(C_word c,C_word *av) C_noret;
C_noret_decl(f_3696)
static void C_ccall f_3696(C_word c,C_word *av) C_noret;
C_noret_decl(f_3699)
static void C_ccall f_3699(C_word c,C_word *av) C_noret;
C_noret_decl(f_3702)
static void C_ccall f_3702(C_word c,C_word *av) C_noret;
C_noret_decl(f_3719)
static void C_fcall f_3719(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3729)
static void C_ccall f_3729(C_word c,C_word *av) C_noret;
C_noret_decl(C_lfa2_toplevel)
C_externexport void C_ccall C_lfa2_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2603)
static void C_ccall trf_2603(C_word c,C_word *av) C_noret;
static void C_ccall trf_2603(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2603(t0,t1,t2);}

C_noret_decl(trf_2629)
static void C_ccall trf_2629(C_word c,C_word *av) C_noret;
static void C_ccall trf_2629(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2629(t0,t1,t2);}

C_noret_decl(trf_2635)
static void C_ccall trf_2635(C_word c,C_word *av) C_noret;
static void C_ccall trf_2635(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2635(t0,t1,t2);}

C_noret_decl(trf_2676)
static void C_ccall trf_2676(C_word c,C_word *av) C_noret;
static void C_ccall trf_2676(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2676(t0,t1);}

C_noret_decl(trf_2688)
static void C_ccall trf_2688(C_word c,C_word *av) C_noret;
static void C_ccall trf_2688(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2688(t0,t1,t2,t3);}

C_noret_decl(trf_2696)
static void C_ccall trf_2696(C_word c,C_word *av) C_noret;
static void C_ccall trf_2696(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2696(t0,t1,t2);}

C_noret_decl(trf_2767)
static void C_ccall trf_2767(C_word c,C_word *av) C_noret;
static void C_ccall trf_2767(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2767(t0,t1,t2);}

C_noret_decl(trf_2813)
static void C_ccall trf_2813(C_word c,C_word *av) C_noret;
static void C_ccall trf_2813(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2813(t0,t1,t2);}

C_noret_decl(trf_2823)
static void C_ccall trf_2823(C_word c,C_word *av) C_noret;
static void C_ccall trf_2823(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2823(t0,t1);}

C_noret_decl(trf_2849)
static void C_ccall trf_2849(C_word c,C_word *av) C_noret;
static void C_ccall trf_2849(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2849(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2890)
static void C_ccall trf_2890(C_word c,C_word *av) C_noret;
static void C_ccall trf_2890(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2890(t0,t1);}

C_noret_decl(trf_2985)
static void C_ccall trf_2985(C_word c,C_word *av) C_noret;
static void C_ccall trf_2985(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2985(t0,t1);}

C_noret_decl(trf_2992)
static void C_ccall trf_2992(C_word c,C_word *av) C_noret;
static void C_ccall trf_2992(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2992(t0,t1);}

C_noret_decl(trf_3098)
static void C_ccall trf_3098(C_word c,C_word *av) C_noret;
static void C_ccall trf_3098(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3098(t0,t1,t2);}

C_noret_decl(trf_3115)
static void C_ccall trf_3115(C_word c,C_word *av) C_noret;
static void C_ccall trf_3115(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3115(t0,t1,t2);}

C_noret_decl(trf_3137)
static void C_ccall trf_3137(C_word c,C_word *av) C_noret;
static void C_ccall trf_3137(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3137(t0,t1);}

C_noret_decl(trf_3197)
static void C_ccall trf_3197(C_word c,C_word *av) C_noret;
static void C_ccall trf_3197(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3197(t0,t1);}

C_noret_decl(trf_3245)
static void C_ccall trf_3245(C_word c,C_word *av) C_noret;
static void C_ccall trf_3245(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3245(t0,t1,t2);}

C_noret_decl(trf_3297)
static void C_ccall trf_3297(C_word c,C_word *av) C_noret;
static void C_ccall trf_3297(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3297(t0,t1,t2);}

C_noret_decl(trf_3389)
static void C_ccall trf_3389(C_word c,C_word *av) C_noret;
static void C_ccall trf_3389(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3389(t0,t1);}

C_noret_decl(trf_3449)
static void C_ccall trf_3449(C_word c,C_word *av) C_noret;
static void C_ccall trf_3449(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3449(t0,t1);}

C_noret_decl(trf_3501)
static void C_ccall trf_3501(C_word c,C_word *av) C_noret;
static void C_ccall trf_3501(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3501(t0,t1,t2);}

C_noret_decl(trf_3511)
static void C_ccall trf_3511(C_word c,C_word *av) C_noret;
static void C_ccall trf_3511(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3511(t0,t1);}

C_noret_decl(trf_3574)
static void C_ccall trf_3574(C_word c,C_word *av) C_noret;
static void C_ccall trf_3574(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3574(t0,t1,t2);}

C_noret_decl(trf_3596)
static void C_ccall trf_3596(C_word c,C_word *av) C_noret;
static void C_ccall trf_3596(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3596(t0,t1,t2);}

C_noret_decl(trf_3608)
static void C_ccall trf_3608(C_word c,C_word *av) C_noret;
static void C_ccall trf_3608(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3608(t0,t1,t2);}

C_noret_decl(trf_3719)
static void C_ccall trf_3719(C_word c,C_word *av) C_noret;
static void C_ccall trf_3719(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3719(t0,t1,t2);}

/* k1144 */
static void C_ccall f_1146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1146,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1149,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1147 in k1144 */
static void C_ccall f_1149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1149,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1152,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k1150 in k1147 in k1144 */
static void C_ccall f_1152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1152,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1155,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_1155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1155,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1158,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_support_toplevel(2,av2);}}

/* k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_1158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1158,2,av);}
a=C_alloc(18);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_mutate((C_word*)lf[2]+1 /* (set! chicken.compiler.lfa2#perform-secondary-flow-analysis ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2478,tmp=(C_word)a,a+=2,tmp));
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2478(C_word c,C_word *av){
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
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(39,c,5)))){
C_save_and_reclaim((void *)f_2478,4,av);}
a=C_alloc(39);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2603,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t19=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2629,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t20=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2635,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t21=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2676,tmp=(C_word)a,a+=2,tmp));
t22=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2688,a[2]=t13,a[3]=t11,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t23=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2849,a[2]=t17,a[3]=t9,a[4]=t15,tmp=(C_word)a,a+=5,tmp));
t24=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3670,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:389: walk */
t25=((C_word*)t17)[1];
f_2849(t25,t24,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k2498 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2500,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2503,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
f_2503(2,av2);}}
else{
/* lfa2.scm:188: chicken.compiler.support#small-bignum? */
t3=*((C_word*)lf[45]+1);{
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

/* k2501 in k2498 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_2503,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[32];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[33];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_bignump(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[34];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_flonump(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[35];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_ratnump(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[36];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_cplxnump(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[37];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_booleanp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[28];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[38];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_listp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[39];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[40];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_eofp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[41];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[42];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_immp(((C_word*)t0)[3]);
t3=C_i_not(t2);
t4=(C_truep(t3)?C_structurep(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_slot(((C_word*)t0)[3],C_fix(0));
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,2,lf[43],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_charp(((C_word*)t0)[3]);
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=(C_truep(t5)?lf[44]:lf[24]);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}}}}}}}}}}}}

/* report in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_2603(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,0,1)))){
C_save_and_reclaim_args((void *)trf_2603,3,t0,t1,t2);}
a=C_alloc(29);
t3=C_i_assoc(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t3)){
t4=t1;
t5=C_i_cdr(t3);
t6=C_s_a_i_plus(&a,2,t5,C_fix(1));
t7=t4;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_i_set_cdr(t3,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t4=t2;
t5=((C_word*)((C_word*)t0)[2])[1];
t6=C_a_i_cons(&a,2,t4,C_fix(1));
t7=C_a_i_cons(&a,2,t6,t5);
t8=C_mutate(((C_word *)((C_word*)t0)[2])+1,t7);
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* assigned? in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_2629(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_2629,3,t0,t1,t2);}
/* lfa2.scm:211: chicken.compiler.support#db-get */
t3=*((C_word*)lf[3]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=lf[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* droppable? in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_2635(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2635,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2640,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:214: chicken.compiler.support#node-class */
t4=*((C_word*)lf[11]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2638 in droppable? in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2640(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2640,2,av);}
a=C_alloc(5);
t2=C_u_i_memq(t1,lf[5]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2674,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:216: chicken.compiler.support#node-class */
t4=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k2664 in k2668 in k2672 in k2638 in droppable? in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2666,2,av);}
t2=C_i_not(t1);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* lfa2.scm:219: chicken.compiler.support#variable-mark */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k2668 in k2672 in k2638 in droppable? in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2670,2,av);}
a=C_alloc(4);
t2=C_i_car(t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2666,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:218: chicken.compiler.support#db-get */
t5=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
av2[4]=lf[9];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k2672 in k2638 in droppable? in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2674(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2674,2,av);}
a=C_alloc(4);
t2=C_eqp(lf[6],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2670,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:217: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[10]+1);{
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
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* drop! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_2676(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_2676,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2680,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:222: chicken.compiler.support#node-class-set! */
t4=*((C_word*)lf[14]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[15];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2678 in drop! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2680,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2683,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:223: chicken.compiler.support#node-parameters-set! */
t3=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2681 in k2678 in drop! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2683,2,av);}
/* lfa2.scm:224: chicken.compiler.support#node-subexpressions-set! */
t2=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_2688(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_2688,4,t0,t1,t2,t3);}
a=C_alloc(11);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2692,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2796,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:227: chicken.compiler.support#node-parameters */
t6=*((C_word*)lf[10]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2690 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2692,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* lfa2.scm:228: chicken.compiler.support#node-subexpressions */
t3=*((C_word*)lf[23]+1);{
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

/* k2693 in k2690 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2695(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_2695,2,av);}
a=C_alloc(20);
t2=C_SCHEME_TRUE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2696,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=C_i_check_list_2(t1,lf[16]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2713,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2767,a[2]=t8,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_2767(t10,t6,t1);}

/* g653 in k2693 in k2690 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_2696(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2696,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2703,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:232: droppable? */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2635(t4,t3,t2);}

/* k2701 in g653 in k2693 in k2690 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2703,2,av);}
if(C_truep(t1)){
/* lfa2.scm:233: drop! */
f_2676(((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2711 in k2693 in k2690 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2713,2,av);}
a=C_alloc(8);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
/* lfa2.scm:237: drop! */
f_2676(((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2730,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2765,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:243: chicken.compiler.support#node-subexpressions */
t4=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k2728 in k2711 in k2693 in k2690 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2730,2,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* lfa2.scm:238: chicken.compiler.support#node-parameters-set! */
t3=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2735 in k2763 in k2711 in k2693 in k2690 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2737,2,av);}
/* lfa2.scm:241: scheme#string-append */
t2=*((C_word*)lf[17]+1);{
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

/* k2763 in k2711 in k2693 in k2690 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2765,2,av);}
a=C_alloc(4);
t2=C_i_length(t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2737,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
switch(t2){
case C_fix(1):
/* lfa2.scm:241: scheme#string-append */
t4=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[18];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}
case C_fix(2):
/* lfa2.scm:241: scheme#string-append */
t4=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[19];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}
case C_fix(3):
/* lfa2.scm:241: scheme#string-append */
t4=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[20];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}
default:
/* lfa2.scm:247: chicken.compiler.support#bomb */
t4=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[22];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* for-each-loop652 in k2693 in k2690 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_2767(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2767,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2777,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* lfa2.scm:230: g653 */
t5=((C_word*)t0)[3];
f_2696(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2775 in for-each-loop652 in k2693 in k2690 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2777,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2767(t3,((C_word*)t0)[4],t2);}

/* k2794 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2796,2,av);}
t2=C_i_car(t1);
/* lfa2.scm:227: report */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2603(t3,((C_word*)t0)[3],t2);}

/* loop in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_2813(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2813,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[24];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2823,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_cdar(t2);
t5=C_eqp(((C_word*)t0)[3],t4);
if(C_truep(t5)){
t6=t2;
t7=C_u_i_car(t6);
t8=C_u_i_car(t7);
t9=t3;
f_2823(t9,C_i_assq(t8,((C_word*)t0)[4]));}
else{
t6=t3;
f_2823(t6,C_SCHEME_FALSE);}}}

/* k2821 in loop in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_2823(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_2823,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_i_cdr(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* lfa2.scm:257: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2813(t4,((C_word*)t0)[2],t3);}}

/* walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_2849(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_2849,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2853,a[2]=t1,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* lfa2.scm:260: chicken.compiler.support#node-class */
t6=*((C_word*)lf[11]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2853,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2856,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* lfa2.scm:261: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2856,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2859,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* lfa2.scm:262: chicken.compiler.support#node-subexpressions */
t4=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2859(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_2859,2,av);}
a=C_alloc(21);
t2=t1;
t3=C_eqp(((C_word*)t0)[2],lf[6]);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[3]);
t5=((C_word*)t0)[4];
t6=t4;
t7=((C_word*)t0)[5];
t8=((C_word*)t0)[6];
t9=C_i_assq(t6,t7);
if(C_truep(t9)){
t10=t5;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_i_cdr(t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2813,a[2]=t11,a[3]=t6,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_2813(t13,t5,t8);}}
else{
t4=C_eqp(((C_word*)t0)[2],lf[25]);
t5=(C_truep(t4)?t4:C_eqp(((C_word*)t0)[2],lf[26]));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2884,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t7=C_i_car(t2);
/* lfa2.scm:267: walk */
t8=((C_word*)((C_word*)t0)[7])[1];
f_2849(t8,t6,t7,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t6=C_eqp(((C_word*)t0)[2],lf[29]);
if(C_truep(t6)){
t7=C_i_car(((C_word*)t0)[3]);
t8=((C_word*)t0)[4];
t9=t7;
if(C_truep(C_i_stringp(t9))){
t10=t8;{
C_word *av2=av;
av2[0]=t10;
av2[1]=lf[30];
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t9))){
t10=t8;{
C_word *av2=av;
av2[0]=t10;
av2[1]=lf[31];
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2500,a[2]=t8,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:188: chicken.compiler.support#big-fixnum? */
t11=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=t9;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}}}
else{
t7=C_eqp(((C_word*)t0)[2],lf[47]);
if(C_truep(t7)){
t8=C_i_car(t2);
t9=t8;
t10=C_i_car(((C_word*)t0)[3]);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2974,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=t11,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=t9,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
/* lfa2.scm:282: walk */
t13=((C_word*)((C_word*)t0)[7])[1];
f_2849(t13,t12,t9,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t8=C_eqp(((C_word*)t0)[2],lf[48]);
t9=(C_truep(t8)?t8:C_eqp(((C_word*)t0)[2],lf[49]));
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3056,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t11=C_i_car(t2);
/* lfa2.scm:297: walk */
t12=((C_word*)((C_word*)t0)[7])[1];
f_2849(t12,t10,t11,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}
else{
t10=C_eqp(((C_word*)t0)[2],lf[51]);
t11=(C_truep(t10)?t10:C_eqp(((C_word*)t0)[2],lf[52]));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3072,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t13=C_i_car(t2);
/* lfa2.scm:300: walk */
t14=((C_word*)((C_word*)t0)[7])[1];
f_2849(t14,t12,t13,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t12=C_eqp(((C_word*)t0)[2],lf[15]);
if(C_truep(t12)){
t13=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t13;
av2[1]=lf[53];
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t13=C_eqp(((C_word*)t0)[2],lf[54]);
if(C_truep(t13)){
t14=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t14;
av2[1]=lf[50];
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
t14=C_eqp(((C_word*)t0)[2],lf[55]);
t15=(C_truep(t14)?t14:C_eqp(((C_word*)t0)[2],lf[56]));
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3098,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t17=C_i_check_list_2(t2,lf[16]);
t18=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3108,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[4],tmp=(C_word)a,a+=10,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3574,a[2]=t20,a[3]=t16,tmp=(C_word)a,a+=4,tmp));
t22=((C_word*)t20)[1];
f_3574(t22,t18,t2);}
else{
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3596,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t17=C_i_check_list_2(t2,lf[16]);
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3606,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3608,a[2]=t20,a[3]=t16,tmp=(C_word)a,a+=4,tmp));
t22=((C_word*)t20)[1];
f_3608(t22,t18,t2);}}}}}}}}}}

/* k2882 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2884,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_car(t2);
t5=t3;
f_2890(t5,C_eqp(lf[28],t4));}
else{
t4=t3;
f_2890(t4,C_SCHEME_FALSE);}}

/* k2888 in k2882 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_2890(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_2890,2,t0,t1);}
a=C_alloc(14);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2893,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2916,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t6=C_i_cadr(((C_word*)t0)[6]);
/* lfa2.scm:270: scheme#append */
t7=*((C_word*)lf[27]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2923,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* lfa2.scm:276: walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2849(t4,t2,t3,((C_word*)t0)[7],((C_word*)t0)[5]);}}

/* k2891 in k2888 in k2882 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2893(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2893,2,av);}
a=C_alloc(6);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2904,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=C_i_caddr(((C_word*)t0)[6]);
/* lfa2.scm:273: scheme#append */
t6=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2902 in k2891 in k2888 in k2882 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2904,2,av);}
/* lfa2.scm:272: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2849(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* k2914 in k2888 in k2882 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2916,2,av);}
/* lfa2.scm:269: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2849(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* k2921 in k2888 in k2882 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2923,2,av);}
t2=C_i_caddr(((C_word*)t0)[2]);
/* lfa2.scm:277: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2849(t3,((C_word*)t0)[4],t2,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2972 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_2974(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2974,2,av);}
a=C_alloc(15);
t2=t1;
t3=C_i_cadr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2985,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t4,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3041,a[2]=t5,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:284: assigned? */
t7=((C_word*)((C_word*)t0)[8])[1];
f_2629(t7,t6,((C_word*)t0)[4]);}

/* k2983 in k2972 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_2985(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_2985,2,t0,t1);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2992,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3038,a[2]=t3,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:287: chicken.compiler.support#node-class */
t5=*((C_word*)lf[11]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2990 in k2983 in k2972 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_2992(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_2992,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* lfa2.scm:290: chicken.compiler.support#node-parameters */
t3=*((C_word*)lf[10]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];
/* lfa2.scm:283: walk */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2849(t3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2);}}

/* k3004 in k2990 in k2983 in k2972 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3006(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3006,2,av);}
a=C_alloc(12);
t2=C_i_car(t1);
t3=((C_word*)t0)[2];
t4=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t4,t3);
t6=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t7=C_a_i_cons(&a,2,t6,t5);
/* lfa2.scm:283: walk */
t8=((C_word*)((C_word*)t0)[4])[1];
f_2849(t8,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t7);}

/* k3020 in k3032 in k3036 in k2983 in k2972 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3022,2,av);}
t2=((C_word*)t0)[2];
f_2992(t2,C_i_not(t1));}

/* k3028 in k3032 in k3036 in k2983 in k2972 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3030,2,av);}
t2=C_i_car(t1);
/* lfa2.scm:289: assigned? */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2629(t3,((C_word*)t0)[3],t2);}

/* k3032 in k3036 in k2983 in k2972 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3034,2,av);}
a=C_alloc(7);
if(C_truep(C_i_not(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3022,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3030,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:289: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[10]+1);{
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
else{
t2=((C_word*)t0)[2];
f_2992(t2,C_SCHEME_FALSE);}}

/* k3036 in k2983 in k2972 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3038,2,av);}
a=C_alloc(5);
t2=C_eqp(lf[6],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3034,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:288: assigned? */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2629(t4,t3,((C_word*)t0)[5]);}
else{
t3=((C_word*)t0)[2];
f_2992(t3,C_SCHEME_FALSE);}}

/* k3039 in k2972 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_3041,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_2985(t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[3];
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
t4=((C_word*)t0)[2];
f_2985(t4,C_a_i_cons(&a,2,t3,t2));}}

/* k3054 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3056,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[50];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3070 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3072,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[53];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* g738 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_3098(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3098,3,t0,t1,t2);}
/* lfa2.scm:305: g753 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2849(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3108(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3108,2,av);}
a=C_alloc(8);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_assoc(t2,lf[57]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3115,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* lfa2.scm:306: g766 */
t5=t4;
f_3115(t5,((C_word*)t0)[9],t3);}
else{
t4=C_i_car(((C_word*)t0)[2]);
t5=C_i_assoc(t4,lf[64]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3245,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* lfa2.scm:306: g781 */
t7=t6;
f_3245(t7,((C_word*)t0)[9],t5);}
else{
t6=C_i_car(((C_word*)t0)[2]);
t7=C_i_assoc(t6,lf[65]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3297,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* lfa2.scm:306: g790 */
t9=t8;
f_3297(t9,((C_word*)t0)[9],t7);}
else{
t8=C_i_car(((C_word*)t0)[2]);
t9=C_i_assoc(t8,lf[69]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3501,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* lfa2.scm:306: g813 */
t11=t10;
f_3501(t11,((C_word*)t0)[9],t9);}
else{
t10=C_SCHEME_UNDEFINED;
t11=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}}}}

/* g766 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_3115(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_3115,3,t0,t1,t2);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3119,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_i_car(((C_word*)t0)[4]);
/* lfa2.scm:308: walk */
t5=((C_word*)((C_word*)t0)[5])[1];
f_2849(t5,t3,t4,((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k3117 in g766 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3119(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_3119,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3122,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[58]+1))){
/* lfa2.scm:310: extinguish! */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2688(t4,t3,((C_word*)t0)[4],lf[59]);}
else{
t4=C_i_cadr(((C_word*)t0)[5]);
t5=C_eqp(lf[60],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3137,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t2))){
t7=C_i_car(t2);
t8=C_eqp(lf[43],t7);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3183,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t10=C_i_cadr(((C_word*)t0)[6]);
/* lfa2.scm:315: chicken.compiler.support#node-class */
t11=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t9;
av2[2]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t9=t6;
f_3137(t9,C_SCHEME_FALSE);}}
else{
t7=t6;
f_3137(t7,C_SCHEME_FALSE);}}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3197,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t2))){
t7=C_u_i_car(t2);
t8=t6;
f_3197(t8,C_eqp(lf[28],t7));}
else{
t7=t6;
f_3197(t7,C_SCHEME_FALSE);}}}}

/* k3120 in k3117 in g766 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3122,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[24];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3135 in k3117 in g766 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_3137(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3137,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3163,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cadr(((C_word*)t0)[7]);
/* lfa2.scm:316: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[10]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t2;
av2[1]=lf[24];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3161 in k3135 in k3117 in g766 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3163,2,av);}
t2=C_i_car(t1);
if(C_truep(C_i_symbolp(t2))){
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_eqp(t2,t3);
if(C_truep(t4)){
/* lfa2.scm:319: extinguish! */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2688(t5,((C_word*)t0)[4],((C_word*)t0)[5],lf[61]);}
else{
t5=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t5;
av2[1]=lf[24];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[24];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3181 in k3117 in g766 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3183,2,av);}
t2=((C_word*)t0)[2];
f_3137(t2,C_eqp(lf[29],t1));}

/* k3195 in k3117 in g766 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_3197(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_3197,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_memq(lf[28],t3))){
/* lfa2.scm:322: extinguish! */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2688(t4,((C_word*)t0)[4],((C_word*)t0)[5],lf[62]);}
else{
t4=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[24];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_member(((C_word*)t0)[7],t3))){
/* lfa2.scm:325: extinguish! */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2688(t4,((C_word*)t0)[4],((C_word*)t0)[5],lf[63]);}
else{
t4=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[24];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* g781 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_3245(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3245,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_car(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3252,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=C_i_car(((C_word*)t0)[2]);
/* lfa2.scm:330: walk */
t7=((C_word*)((C_word*)t0)[4])[1];
f_2849(t7,t5,t6,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3250 in g781 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3252(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3252,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3255,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[3]);
if(C_truep(C_i_member(t2,t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3261,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3279,a[2]=t5,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:332: chicken.compiler.support#node-class */
t7=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k3253 in k3250 in g781 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3255,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3259 in k3250 in g781 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3261,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3264,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3275,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:333: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[10]+1);{
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

/* k3262 in k3259 in k3250 in g781 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3264,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3271,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:334: chicken.compiler.support#node-subexpressions */
t3=*((C_word*)lf[23]+1);{
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

/* k3269 in k3262 in k3259 in k3250 in g781 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3271,2,av);}
/* lfa2.scm:334: chicken.compiler.support#node-subexpressions-set! */
t2=*((C_word*)lf[12]+1);{
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

/* k3273 in k3259 in k3250 in g781 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3275,2,av);}
/* lfa2.scm:333: chicken.compiler.support#node-parameters-set! */
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
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3277 in k3250 in g781 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3279,2,av);}
/* lfa2.scm:332: chicken.compiler.support#node-class-set! */
t2=*((C_word*)lf[14]+1);{
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

/* g790 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_3297(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_3297,3,t0,t1,t2);}
a=C_alloc(11);
t3=C_i_car(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3491,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* lfa2.scm:341: chicken.compiler.support#node-class */
t6=*((C_word*)lf[11]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3349 in k3357 in k3372 in k3489 in g790 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_3351,2,av);}
a=C_alloc(21);
t2=C_i_car(t1);
if(C_truep(C_i_symbolp(t2))){
t3=C_a_i_list(&a,2,lf[43],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_list(&a,1,t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[28],t5,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],lf[43]);
t4=C_a_i_list(&a,1,t3);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[28],t4,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k3357 in k3372 in k3489 in g790 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3359,2,av);}
a=C_alloc(15);
t2=C_eqp(lf[29],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3351,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(((C_word*)t0)[4]);
/* lfa2.scm:348: chicken.compiler.support#node-parameters */
t5=*((C_word*)lf[10]+1);{
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
else{
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],lf[43]);
t4=C_a_i_list(&a,1,t3);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[28],t4,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k3372 in k3489 in g790 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3374(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3374,2,av);}
a=C_alloc(15);
t2=C_i_car(t1);
t3=t2;
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_eqp(lf[60],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3359,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=C_i_cadr(((C_word*)t0)[4]);
/* lfa2.scm:346: chicken.compiler.support#node-class */
t8=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t6=C_i_cadr(((C_word*)t0)[2]);
t7=C_a_i_cons(&a,2,t3,t6);
t8=C_a_i_list(&a,1,t7);
t9=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_a_i_list(&a,3,lf[28],t8,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k3375 in k3489 in g790 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3377(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_3377,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3380,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_i_cadr(((C_word*)t0)[3]);
t5=C_eqp(lf[60],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3389,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t2))){
t7=C_i_car(t2);
t8=C_eqp(lf[43],t7);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3435,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t10=C_i_cadr(((C_word*)t0)[6]);
/* lfa2.scm:361: chicken.compiler.support#node-class */
t11=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t9;
av2[2]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t9=t6;
f_3389(t9,C_SCHEME_FALSE);}}
else{
t7=t6;
f_3389(t7,C_SCHEME_FALSE);}}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3449,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t2))){
t7=C_u_i_car(t2);
t8=t6;
f_3449(t8,C_eqp(lf[28],t7));}
else{
t7=t6;
f_3449(t7,C_SCHEME_FALSE);}}}

/* k3378 in k3375 in k3489 in g790 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3380,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[28];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3387 in k3375 in k3489 in g790 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_3389(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3389,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3415,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cadr(((C_word*)t0)[7]);
/* lfa2.scm:363: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[10]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t2;
av2[1]=lf[28];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3413 in k3387 in k3375 in k3489 in g790 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3415,2,av);}
t2=C_i_car(t1);
if(C_truep(C_i_symbolp(t2))){
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_eqp(t2,t3);
if(C_truep(t4)){
/* lfa2.scm:366: extinguish! */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2688(t5,((C_word*)t0)[4],((C_word*)t0)[5],lf[66]);}
else{
t5=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t5;
av2[1]=lf[28];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[28];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3433 in k3375 in k3489 in g790 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3435,2,av);}
t2=((C_word*)t0)[2];
f_3389(t2,C_eqp(lf[29],t1));}

/* k3447 in k3375 in k3489 in g790 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_3449(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_3449,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_memq(lf[28],t3))){
/* lfa2.scm:369: extinguish! */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2688(t4,((C_word*)t0)[4],((C_word*)t0)[5],lf[67]);}
else{
t4=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[28];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_member(((C_word*)t0)[7],t3))){
/* lfa2.scm:372: extinguish! */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2688(t4,((C_word*)t0)[4],((C_word*)t0)[5],lf[68]);}
else{
t4=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[28];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k3489 in g790 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3491,2,av);}
a=C_alloc(7);
t2=C_eqp(lf[6],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3374,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:343: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3377,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_i_car(((C_word*)t0)[4]);
/* lfa2.scm:356: walk */
t5=((C_word*)((C_word*)t0)[8])[1];
f_2849(t5,t3,t4,((C_word*)t0)[9],((C_word*)t0)[10]);}}

/* g813 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_3501(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3501,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_i_pairp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_i_car(((C_word*)t0)[2]):C_SCHEME_FALSE);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3511,a[2]=t1,a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=C_i_cadr(t2);
t8=C_eqp(lf[60],t7);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3543,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* lfa2.scm:379: chicken.compiler.support#node-class */
t10=*((C_word*)lf[11]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t9=t6;
f_3511(t9,C_SCHEME_FALSE);}}
else{
t7=t6;
f_3511(t7,C_SCHEME_FALSE);}}

/* k3509 in g813 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_3511(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3511,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3527,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lfa2.scm:380: chicken.compiler.support#node-parameters */
t3=*((C_word*)lf[10]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_i_cadr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3525 in k3509 in g813 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_3527,2,av);}
a=C_alloc(6);
t2=C_i_car(t1);
t3=C_i_symbolp(t2);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_a_i_list(&a,2,lf[43],t2):lf[43]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3541 in g813 in k3106 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3543,2,av);}
t2=((C_word*)t0)[2];
f_3511(t2,C_eqp(lf[29],t1));}

/* for-each-loop737 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_3574(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3574,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3584,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* lfa2.scm:305: g738 */
t5=((C_word*)t0)[3];
f_3098(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3582 in for-each-loop737 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3584,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3574(t3,((C_word*)t0)[4],t2);}

/* g828 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_3596(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3596,3,t0,t1,t2);}
/* lfa2.scm:386: g843 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2849(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k3604 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3606,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[24];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop827 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_3608(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3608,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3618,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* lfa2.scm:386: g828 */
t5=((C_word*)t0)[3];
f_3596(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3616 in for-each-loop827 in k2857 in k2854 in k2851 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3618,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3608(t3,((C_word*)t0)[4],t2);}

/* k3668 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3670,2,av);}
a=C_alloc(3);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3681,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lfa2.scm:391: chicken.compiler.support#with-debugging-output */
t3=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[79];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a3680 in k3668 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3681,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3685,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:394: chicken.base#print */
t3=*((C_word*)lf[76]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[77];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3683 in a3680 in k3668 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3685(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3685,2,av);}
a=C_alloc(5);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_i_check_list_2(t2,lf[16]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3719,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3719(t7,((C_word*)t0)[3],t2);}

/* k3691 in for-each-loop853 in k3683 in a3680 in k3668 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3693,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3696,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* lfa2.scm:396: ##sys#print */
t4=*((C_word*)lf[73]+1);{
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

/* k3694 in k3691 in for-each-loop853 in k3683 in a3680 in k3668 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3696,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3699,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:396: ##sys#print */
t3=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[74];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3697 in k3694 in k3691 in for-each-loop853 in k3683 in a3680 in k3668 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3699,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3702,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* lfa2.scm:396: ##sys#print */
t4=*((C_word*)lf[73]+1);{
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

/* k3700 in k3697 in k3694 in k3691 in for-each-loop853 in k3683 in a3680 in k3668 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3702,2,av);}
/* lfa2.scm:396: ##sys#write-char-0 */
t2=*((C_word*)lf[72]+1);{
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

/* for-each-loop853 in k3683 in a3680 in k3668 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_fcall f_3719(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3719,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3729,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=*((C_word*)lf[70]+1);
t8=*((C_word*)lf[70]+1);
t9=C_i_check_port_2(*((C_word*)lf[70]+1),C_fix(2),C_SCHEME_TRUE,lf[71]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3693,a[2]=t5,a[3]=t7,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:396: ##sys#print */
t11=*((C_word*)lf[73]+1);{
C_word av2[5];
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[75];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[70]+1);
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3727 in for-each-loop853 in k3683 in a3680 in k3668 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1156 in k1153 in k1150 in k1147 in k1144 */
static void C_ccall f_3729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3729,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3719(t3,((C_word*)t0)[4],t2);}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_lfa2_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("lfa2"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_lfa2_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(2304))){
C_save(t1);
C_rereclaim2(2304*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,80);
lf[0]=C_h_intern(&lf[0],4, C_text("lfa2"));
lf[1]=C_h_intern(&lf[1],22, C_text("chicken.compiler.lfa2#"));
lf[2]=C_h_intern(&lf[2],53, C_text("chicken.compiler.lfa2#perform-secondary-flow-analysis"));
lf[3]=C_h_intern(&lf[3],31, C_text("chicken.compiler.support#db-get"));
lf[4]=C_h_intern(&lf[4],8, C_text("assigned"));
lf[5]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\005quote\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\003\000\000\002\376\001\000\000\016\004coreprimitive\376\003\000\000\002\376\001\000\000\013\004corela"
"mbda\376\377\016"));
lf[6]=C_h_intern(&lf[6],13, C_text("\004corevariable"));
lf[7]=C_h_intern(&lf[7],38, C_text("chicken.compiler.support#variable-mark"));
lf[8]=C_h_intern(&lf[8],21, C_text("\010compileralways-bound"));
lf[9]=C_h_intern(&lf[9],6, C_text("global"));
lf[10]=C_h_intern(&lf[10],40, C_text("chicken.compiler.support#node-parameters"));
lf[11]=C_h_intern(&lf[11],35, C_text("chicken.compiler.support#node-class"));
lf[12]=C_h_intern(&lf[12],49, C_text("chicken.compiler.support#node-subexpressions-set!"));
lf[13]=C_h_intern(&lf[13],45, C_text("chicken.compiler.support#node-parameters-set!"));
lf[14]=C_h_intern(&lf[14],40, C_text("chicken.compiler.support#node-class-set!"));
lf[15]=C_h_intern(&lf[15],14, C_text("\004coreundefined"));
lf[16]=C_h_intern(&lf[16],8, C_text("for-each"));
lf[17]=C_h_intern(&lf[17],20, C_text("scheme#string-append"));
lf[18]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0011"));
lf[19]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0012"));
lf[20]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0013"));
lf[21]=C_h_intern(&lf[21],29, C_text("chicken.compiler.support#bomb"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376B\000\0005bad number of arguments to extinguished ##core#inline"));
lf[23]=C_h_intern(&lf[23],44, C_text("chicken.compiler.support#node-subexpressions"));
lf[24]=C_h_intern(&lf[24],1, C_text("\052"));
lf[25]=C_h_intern(&lf[25],2, C_text("if"));
lf[26]=C_h_intern(&lf[26],9, C_text("\004corecond"));
lf[27]=C_h_intern(&lf[27],13, C_text("scheme#append"));
lf[28]=C_h_intern(&lf[28],7, C_text("boolean"));
lf[29]=C_h_intern(&lf[29],5, C_text("quote"));
lf[30]=C_h_intern(&lf[30],6, C_text("string"));
lf[31]=C_h_intern(&lf[31],6, C_text("symbol"));
lf[32]=C_h_intern(&lf[32],7, C_text("integer"));
lf[33]=C_h_intern(&lf[33],6, C_text("fixnum"));
lf[34]=C_h_intern(&lf[34],6, C_text("bignum"));
lf[35]=C_h_intern(&lf[35],5, C_text("float"));
lf[36]=C_h_intern(&lf[36],6, C_text("ratnum"));
lf[37]=C_h_intern(&lf[37],7, C_text("cplxnum"));
lf[38]=C_h_intern(&lf[38],4, C_text("null"));
lf[39]=C_h_intern(&lf[39],4, C_text("list"));
lf[40]=C_h_intern(&lf[40],4, C_text("pair"));
lf[41]=C_h_intern(&lf[41],3, C_text("eof"));
lf[42]=C_h_intern(&lf[42],6, C_text("vector"));
lf[43]=C_h_intern(&lf[43],6, C_text("struct"));
lf[44]=C_h_intern(&lf[44],4, C_text("char"));
lf[45]=C_h_intern(&lf[45],38, C_text("chicken.compiler.support#small-bignum\077"));
lf[46]=C_h_intern(&lf[46],36, C_text("chicken.compiler.support#big-fixnum\077"));
lf[47]=C_h_intern(&lf[47],3, C_text("let"));
lf[48]=C_h_intern(&lf[48],11, C_text("\004corelambda"));
lf[49]=C_h_intern(&lf[49],18, C_text("\004coredirect_lambda"));
lf[50]=C_h_intern(&lf[50],9, C_text("procedure"));
lf[51]=C_h_intern(&lf[51],4, C_text("set!"));
lf[52]=C_h_intern(&lf[52],9, C_text("\004coreset!"));
lf[53]=C_h_intern(&lf[53],9, C_text("undefined"));
lf[54]=C_h_intern(&lf[54],14, C_text("\004coreprimitive"));
lf[55]=C_h_intern(&lf[55],11, C_text("\004coreinline"));
lf[56]=C_h_intern(&lf[56],20, C_text("\004coreinline_allocate"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_i_check_closure\376\003\000\000\002\376\001\000\000\011procedure\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\017C_i_check_e"
"xact\376\003\000\000\002\376\001\000\000\006fixnum\376\003\000\000\002\376\001\000\000\006bignum\376\003\000\000\002\376\001\000\000\007integer\376\003\000\000\002\376\001\000\000\006ratnum\376\377\016\376\003\000\000\002\376\003\000"
"\000\002\376B\000\000\021C_i_check_inexact\376\003\000\000\002\376\001\000\000\006flonum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_i_check_number\376\003\000\000\002\376"
"\001\000\000\006fixnum\376\003\000\000\002\376\001\000\000\007integer\376\003\000\000\002\376\001\000\000\006bignum\376\003\000\000\002\376\001\000\000\006ratnum\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002"
"\376\001\000\000\007cplxnum\376\003\000\000\002\376\001\000\000\006number\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_i_check_string\376\003\000\000\002\376\001\000\000\006string\376\377"
"\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\024C_i_check_bytevector\376\003\000\000\002\376\001\000\000\004blob\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_i_check_sy"
"mbol\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\016C_i_check_list\376\003\000\000\002\376\001\000\000\004null\376\003\000\000\002\376\001\000\000\004pair"
"\376\003\000\000\002\376\001\000\000\004list\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\016C_i_check_pair\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_"
"i_check_locative\376\003\000\000\002\376\001\000\000\010locative\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_i_check_boolean\376\003\000\000\002\376\001\000\000\007b"
"oolean\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_i_check_vector\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\023C_i_ch"
"eck_structure\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\016C_i_check_char\376\003\000\000\002\376\001\000\000\004char\376\377\016"
"\376\003\000\000\002\376\003\000\000\002\376B\000\000\023C_i_check_closure_2\376\003\000\000\002\376\001\000\000\011procedure\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_i_check"
"_exact_2\376\003\000\000\002\376\001\000\000\006fixnum\376\003\000\000\002\376\001\000\000\006bignum\376\003\000\000\002\376\001\000\000\007integer\376\003\000\000\002\376\001\000\000\006ratnum\376\377\016\376\003\000\000"
"\002\376\003\000\000\002\376B\000\000\023C_i_check_inexact_2\376\003\000\000\002\376\001\000\000\006flonum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_i_check_number"
"_2\376\003\000\000\002\376\001\000\000\006fixnum\376\003\000\000\002\376\001\000\000\007integer\376\003\000\000\002\376\001\000\000\006bignum\376\003\000\000\002\376\001\000\000\006ratnum\376\003\000\000\002\376\001\000\000\006flo"
"num\376\003\000\000\002\376\001\000\000\007cplxnum\376\003\000\000\002\376\001\000\000\006number\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_i_check_string_2\376\003\000\000\002\376\001\000"
"\000\006string\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\026C_i_check_bytevector_2\376\003\000\000\002\376\001\000\000\004blob\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022"
"C_i_check_symbol_2\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_i_check_list_2\376\003\000\000\002\376\001\000\000\004nu"
"ll\376\003\000\000\002\376\001\000\000\004pair\376\003\000\000\002\376\001\000\000\004list\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_i_check_pair_2\376\003\000\000\002\376\001\000\000\004pair\376\377"
"\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\024C_i_check_locative_2\376\003\000\000\002\376\001\000\000\010locative\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\023C_i_chec"
"k_boolean_2\376\003\000\000\002\376\001\000\000\007boolean\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_i_check_vector_2\376\003\000\000\002\376\001\000\000\006vector"
"\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\025C_i_check_structure_2\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_i_c"
"heck_char_2\376\003\000\000\002\376\001\000\000\004char\376\377\016\376\377\016"));
lf[58]=C_h_intern(&lf[58],31, C_text("chicken.compiler.support#unsafe"));
lf[59]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_noop"));
lf[60]=C_h_intern(&lf[60],8, C_text("\052struct\052"));
lf[61]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_noop"));
lf[62]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_noop"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_noop"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376B\000\000\034C_i_foreign_fixnum_argumentp\376\003\000\000\002\376\001\000\000\006fixnum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\035C_i"
"_foreign_integer_argumentp\376\003\000\000\002\376\001\000\000\007integer\376\003\000\000\002\376\001\000\000\006fixnum\376\003\000\000\002\376\001\000\000\006bignum\376\377\016\376\003"
"\000\000\002\376\003\000\000\002\376B\000\000\032C_i_foreign_char_argumentp\376\003\000\000\002\376\001\000\000\004char\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\034C_i_forei"
"gn_flonum_argumentp\376\003\000\000\002\376\001\000\000\006flonum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\034C_i_foreign_string_argument"
"p\376\003\000\000\002\376\001\000\000\006string\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\034C_i_foreign_symbol_argumentp\376\003\000\000\002\376\001\000\000\006symbol\376"
"\377\016\376\377\016"));
lf[65]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376B\000\000\014C_i_closurep\376\003\000\000\002\376\001\000\000\011procedure\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\011C_fixnump\376\003\000\000\002\376\001"
"\000\000\006fixnum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\011C_bignump\376\003\000\000\002\376\001\000\000\006bignum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_i_exact_"
"integerp\376\003\000\000\002\376\001\000\000\007integer\376\003\000\000\002\376\001\000\000\006fixnum\376\003\000\000\002\376\001\000\000\006bignum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_i_f"
"lonump\376\003\000\000\002\376\001\000\000\006flonum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_i_numberp\376\003\000\000\002\376\001\000\000\006number\376\003\000\000\002\376\001\000\000\006fix"
"num\376\003\000\000\002\376\001\000\000\007integer\376\003\000\000\002\376\001\000\000\006bignum\376\003\000\000\002\376\001\000\000\006ratnum\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\007cp"
"lxnum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_i_ratnump\376\003\000\000\002\376\001\000\000\006ratnum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\014C_i_cplxnump"
"\376\003\000\000\002\376\001\000\000\007cplxnum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\011C_stringp\376\003\000\000\002\376\001\000\000\006string\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_"
"bytevectorp\376\003\000\000\002\376\001\000\000\004blob\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_i_symbolp\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\003\000\000\002\376\003"
"\000\000\002\376B\000\000\011C_i_listp\376\003\000\000\002\376\001\000\000\004list\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\011C_i_pairp\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002"
"\376\003\000\000\002\376B\000\000\013C_locativep\376\003\000\000\002\376\001\000\000\010locative\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\012C_booleanp\376\003\000\000\002\376\001\000\000\007boo"
"lean\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_i_vectorp\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\014C_structurep\376"
"\003\000\000\002\376\001\000\000\006struct\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\016C_i_structurep\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B"
"\000\000\007C_charp\376\003\000\000\002\376\001\000\000\004char\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\011C_i_portp\376\003\000\000\002\376\001\000\000\004port\376\377\016\376\003\000\000\002\376\003\000\000\002\376B"
"\000\000\011C_i_nullp\376\003\000\000\002\376\001\000\000\004null\376\377\016\376\377\016"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_true"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_true"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_true"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record1\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record2\376\003\000"
"\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record3\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000"
"\000\015C_a_i_record4\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record5\376\003\000\000\002\376\001\000\000\010\052struc"
"t\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record6\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_recor"
"d7\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record8\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000"
"\000\002\376B\000\000\014C_a_i_record\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\014C_a_i_string\376\003\000\000\002\376\001\000\000\006str"
"ing\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\012C_a_i_port\376\003\000\000\002\376\001\000\000\004port\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_vector1\376\003\000\000"
"\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_vector2\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a"
"_i_vector3\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_vector4\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000"
"\002\376\003\000\000\002\376B\000\000\015C_a_i_vector5\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_vector6\376\003\000\000\002\376\001\000\000"
"\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_vector7\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_ve"
"ctor8\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\010C_a_pair\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C"
"_a_i_bytevector\376\003\000\000\002\376\001\000\000\004blob\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\023C_a_i_make_locative\376\003\000\000\002\376\001\000\000\010loca"
"tive\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\014C_a_i_vector\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_list1\376"
"\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_list2\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_"
"list3\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_list4\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013"
"C_a_i_list5\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_list6\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000"
"\002\376B\000\000\013C_a_i_list7\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_list8\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000"
"\000\002\376\003\000\000\002\376B\000\000\012C_a_i_cons\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\014C_a_i_flonum\376\003\000\000\002\376\001\000\000\006flon"
"um\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_a_i_fix_to_flo\376\003\000\000\002\376\001\000\000\006flonum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_a_i_big_"
"to_flo\376\003\000\000\002\376\001\000\000\006flonum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_a_i_fix_to_big\376\003\000\000\002\376\001\000\000\006bignum\376\377\016\376\003\000\000\002"
"\376\003\000\000\002\376B\000\000\015C_a_i_bignum0\376\003\000\000\002\376\001\000\000\006bignum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_bignum1\376\003\000\000\002\376\001\000\000\006"
"bignum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_bignum2\376\003\000\000\002\376\001\000\000\006bignum\376\377\016\376\377\016"));
lf[70]=C_h_intern(&lf[70],19, C_text("\003sysstandard-output"));
lf[71]=C_h_intern(&lf[71],6, C_text("printf"));
lf[72]=C_h_intern(&lf[72],16, C_text("\003syswrite-char-0"));
lf[73]=C_h_intern(&lf[73],9, C_text("\003sysprint"));
lf[74]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002:\011"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002  "));
lf[76]=C_h_intern(&lf[76],18, C_text("chicken.base#print"));
lf[77]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027eliminated type checks:"));
lf[78]=C_h_intern(&lf[78],46, C_text("chicken.compiler.support#with-debugging-output"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001x\376\003\000\000\002\376\001\000\000\001o\376\377\016"));
C_register_lf2(lf,80,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1146,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[102] = {
{C_text("f_1146:lfa2_2escm"),(void*)f_1146},
{C_text("f_1149:lfa2_2escm"),(void*)f_1149},
{C_text("f_1152:lfa2_2escm"),(void*)f_1152},
{C_text("f_1155:lfa2_2escm"),(void*)f_1155},
{C_text("f_1158:lfa2_2escm"),(void*)f_1158},
{C_text("f_2478:lfa2_2escm"),(void*)f_2478},
{C_text("f_2500:lfa2_2escm"),(void*)f_2500},
{C_text("f_2503:lfa2_2escm"),(void*)f_2503},
{C_text("f_2603:lfa2_2escm"),(void*)f_2603},
{C_text("f_2629:lfa2_2escm"),(void*)f_2629},
{C_text("f_2635:lfa2_2escm"),(void*)f_2635},
{C_text("f_2640:lfa2_2escm"),(void*)f_2640},
{C_text("f_2666:lfa2_2escm"),(void*)f_2666},
{C_text("f_2670:lfa2_2escm"),(void*)f_2670},
{C_text("f_2674:lfa2_2escm"),(void*)f_2674},
{C_text("f_2676:lfa2_2escm"),(void*)f_2676},
{C_text("f_2680:lfa2_2escm"),(void*)f_2680},
{C_text("f_2683:lfa2_2escm"),(void*)f_2683},
{C_text("f_2688:lfa2_2escm"),(void*)f_2688},
{C_text("f_2692:lfa2_2escm"),(void*)f_2692},
{C_text("f_2695:lfa2_2escm"),(void*)f_2695},
{C_text("f_2696:lfa2_2escm"),(void*)f_2696},
{C_text("f_2703:lfa2_2escm"),(void*)f_2703},
{C_text("f_2713:lfa2_2escm"),(void*)f_2713},
{C_text("f_2730:lfa2_2escm"),(void*)f_2730},
{C_text("f_2737:lfa2_2escm"),(void*)f_2737},
{C_text("f_2765:lfa2_2escm"),(void*)f_2765},
{C_text("f_2767:lfa2_2escm"),(void*)f_2767},
{C_text("f_2777:lfa2_2escm"),(void*)f_2777},
{C_text("f_2796:lfa2_2escm"),(void*)f_2796},
{C_text("f_2813:lfa2_2escm"),(void*)f_2813},
{C_text("f_2823:lfa2_2escm"),(void*)f_2823},
{C_text("f_2849:lfa2_2escm"),(void*)f_2849},
{C_text("f_2853:lfa2_2escm"),(void*)f_2853},
{C_text("f_2856:lfa2_2escm"),(void*)f_2856},
{C_text("f_2859:lfa2_2escm"),(void*)f_2859},
{C_text("f_2884:lfa2_2escm"),(void*)f_2884},
{C_text("f_2890:lfa2_2escm"),(void*)f_2890},
{C_text("f_2893:lfa2_2escm"),(void*)f_2893},
{C_text("f_2904:lfa2_2escm"),(void*)f_2904},
{C_text("f_2916:lfa2_2escm"),(void*)f_2916},
{C_text("f_2923:lfa2_2escm"),(void*)f_2923},
{C_text("f_2974:lfa2_2escm"),(void*)f_2974},
{C_text("f_2985:lfa2_2escm"),(void*)f_2985},
{C_text("f_2992:lfa2_2escm"),(void*)f_2992},
{C_text("f_3006:lfa2_2escm"),(void*)f_3006},
{C_text("f_3022:lfa2_2escm"),(void*)f_3022},
{C_text("f_3030:lfa2_2escm"),(void*)f_3030},
{C_text("f_3034:lfa2_2escm"),(void*)f_3034},
{C_text("f_3038:lfa2_2escm"),(void*)f_3038},
{C_text("f_3041:lfa2_2escm"),(void*)f_3041},
{C_text("f_3056:lfa2_2escm"),(void*)f_3056},
{C_text("f_3072:lfa2_2escm"),(void*)f_3072},
{C_text("f_3098:lfa2_2escm"),(void*)f_3098},
{C_text("f_3108:lfa2_2escm"),(void*)f_3108},
{C_text("f_3115:lfa2_2escm"),(void*)f_3115},
{C_text("f_3119:lfa2_2escm"),(void*)f_3119},
{C_text("f_3122:lfa2_2escm"),(void*)f_3122},
{C_text("f_3137:lfa2_2escm"),(void*)f_3137},
{C_text("f_3163:lfa2_2escm"),(void*)f_3163},
{C_text("f_3183:lfa2_2escm"),(void*)f_3183},
{C_text("f_3197:lfa2_2escm"),(void*)f_3197},
{C_text("f_3245:lfa2_2escm"),(void*)f_3245},
{C_text("f_3252:lfa2_2escm"),(void*)f_3252},
{C_text("f_3255:lfa2_2escm"),(void*)f_3255},
{C_text("f_3261:lfa2_2escm"),(void*)f_3261},
{C_text("f_3264:lfa2_2escm"),(void*)f_3264},
{C_text("f_3271:lfa2_2escm"),(void*)f_3271},
{C_text("f_3275:lfa2_2escm"),(void*)f_3275},
{C_text("f_3279:lfa2_2escm"),(void*)f_3279},
{C_text("f_3297:lfa2_2escm"),(void*)f_3297},
{C_text("f_3351:lfa2_2escm"),(void*)f_3351},
{C_text("f_3359:lfa2_2escm"),(void*)f_3359},
{C_text("f_3374:lfa2_2escm"),(void*)f_3374},
{C_text("f_3377:lfa2_2escm"),(void*)f_3377},
{C_text("f_3380:lfa2_2escm"),(void*)f_3380},
{C_text("f_3389:lfa2_2escm"),(void*)f_3389},
{C_text("f_3415:lfa2_2escm"),(void*)f_3415},
{C_text("f_3435:lfa2_2escm"),(void*)f_3435},
{C_text("f_3449:lfa2_2escm"),(void*)f_3449},
{C_text("f_3491:lfa2_2escm"),(void*)f_3491},
{C_text("f_3501:lfa2_2escm"),(void*)f_3501},
{C_text("f_3511:lfa2_2escm"),(void*)f_3511},
{C_text("f_3527:lfa2_2escm"),(void*)f_3527},
{C_text("f_3543:lfa2_2escm"),(void*)f_3543},
{C_text("f_3574:lfa2_2escm"),(void*)f_3574},
{C_text("f_3584:lfa2_2escm"),(void*)f_3584},
{C_text("f_3596:lfa2_2escm"),(void*)f_3596},
{C_text("f_3606:lfa2_2escm"),(void*)f_3606},
{C_text("f_3608:lfa2_2escm"),(void*)f_3608},
{C_text("f_3618:lfa2_2escm"),(void*)f_3618},
{C_text("f_3670:lfa2_2escm"),(void*)f_3670},
{C_text("f_3681:lfa2_2escm"),(void*)f_3681},
{C_text("f_3685:lfa2_2escm"),(void*)f_3685},
{C_text("f_3693:lfa2_2escm"),(void*)f_3693},
{C_text("f_3696:lfa2_2escm"),(void*)f_3696},
{C_text("f_3699:lfa2_2escm"),(void*)f_3699},
{C_text("f_3702:lfa2_2escm"),(void*)f_3702},
{C_text("f_3719:lfa2_2escm"),(void*)f_3719},
{C_text("f_3729:lfa2_2escm"),(void*)f_3729},
{C_text("toplevel:lfa2_2escm"),(void*)C_lfa2_toplevel},
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
o|hiding unexported module binding: chicken.compiler.lfa2#partition 
o|hiding unexported module binding: chicken.compiler.lfa2#span 
o|hiding unexported module binding: chicken.compiler.lfa2#take 
o|hiding unexported module binding: chicken.compiler.lfa2#drop 
o|hiding unexported module binding: chicken.compiler.lfa2#split-at 
o|hiding unexported module binding: chicken.compiler.lfa2#append-map 
o|hiding unexported module binding: chicken.compiler.lfa2#every 
o|hiding unexported module binding: chicken.compiler.lfa2#any 
o|hiding unexported module binding: chicken.compiler.lfa2#cons* 
o|hiding unexported module binding: chicken.compiler.lfa2#concatenate 
o|hiding unexported module binding: chicken.compiler.lfa2#delete 
o|hiding unexported module binding: chicken.compiler.lfa2#first 
o|hiding unexported module binding: chicken.compiler.lfa2#second 
o|hiding unexported module binding: chicken.compiler.lfa2#third 
o|hiding unexported module binding: chicken.compiler.lfa2#fourth 
o|hiding unexported module binding: chicken.compiler.lfa2#fifth 
o|hiding unexported module binding: chicken.compiler.lfa2#delete-duplicates 
o|hiding unexported module binding: chicken.compiler.lfa2#alist-cons 
o|hiding unexported module binding: chicken.compiler.lfa2#filter 
o|hiding unexported module binding: chicken.compiler.lfa2#filter-map 
o|hiding unexported module binding: chicken.compiler.lfa2#remove 
o|hiding unexported module binding: chicken.compiler.lfa2#unzip1 
o|hiding unexported module binding: chicken.compiler.lfa2#last 
o|hiding unexported module binding: chicken.compiler.lfa2#list-index 
o|hiding unexported module binding: chicken.compiler.lfa2#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.compiler.lfa2#lset-difference/eq? 
o|hiding unexported module binding: chicken.compiler.lfa2#lset-union/eq? 
o|hiding unexported module binding: chicken.compiler.lfa2#lset-intersection/eq? 
o|hiding unexported module binding: chicken.compiler.lfa2#list-tabulate 
o|hiding unexported module binding: chicken.compiler.lfa2#lset<=/eq? 
o|hiding unexported module binding: chicken.compiler.lfa2#lset=/eq? 
o|hiding unexported module binding: chicken.compiler.lfa2#length+ 
o|hiding unexported module binding: chicken.compiler.lfa2#find 
o|hiding unexported module binding: chicken.compiler.lfa2#find-tail 
o|hiding unexported module binding: chicken.compiler.lfa2#iota 
o|hiding unexported module binding: chicken.compiler.lfa2#make-list 
o|hiding unexported module binding: chicken.compiler.lfa2#posq 
o|hiding unexported module binding: chicken.compiler.lfa2#posv 
o|hiding unexported module binding: chicken.compiler.lfa2#d-depth 
o|hiding unexported module binding: chicken.compiler.lfa2#lfa2-debug 
o|hiding unexported module binding: chicken.compiler.lfa2#d 
o|hiding unexported module binding: chicken.compiler.lfa2#dd 
o|hiding unexported module binding: chicken.compiler.lfa2#d 
o|hiding unexported module binding: chicken.compiler.lfa2#dd 
o|hiding unexported module binding: chicken.compiler.lfa2#+type-check-map+ 
o|hiding unexported module binding: chicken.compiler.lfa2#+predicate-map+ 
o|hiding unexported module binding: chicken.compiler.lfa2#+ffi-type-check-map+ 
o|hiding unexported module binding: chicken.compiler.lfa2#+constructor-map+ 
S|applied compiler syntax:
S|  for-each		4
S|  printf		2
S|  foldl		3
S|  map		3
S|  foldr		3
o|eliminated procedure checks: 47 
o|specializations:
o|  13 (scheme#eqv? * (or eof null fixnum char boolean symbol))
o|  1 (scheme#caar (pair pair *))
o|  3 (scheme#eqv? (or eof null fixnum char boolean symbol) *)
o|  1 (scheme#memq * list)
o|  1 (chicken.base#add1 *)
o|  1 (scheme#make-string fixnum char)
o|  2 (##sys#check-output-port * * *)
o|  1 (##sys#debug-mode?)
o|  1 (scheme#eqv? * *)
o|  3 (##sys#check-list (or pair list) *)
o|  28 (scheme#cdr pair)
o|  10 (scheme#car pair)
(o e)|safe calls: 347 
(o e)|dropped branches: 1 
(o e)|assignments to immediate values: 1 
o|safe globals: (chicken.compiler.lfa2#perform-secondary-flow-analysis chicken.compiler.lfa2#+constructor-map+ chicken.compiler.lfa2#+ffi-type-check-map+ chicken.compiler.lfa2#+predicate-map+ chicken.compiler.lfa2#+type-check-map+ chicken.compiler.lfa2#dd chicken.compiler.lfa2#d chicken.compiler.lfa2#lfa2-debug chicken.compiler.lfa2#d-depth chicken.compiler.lfa2#posv chicken.compiler.lfa2#posq chicken.compiler.lfa2#make-list chicken.compiler.lfa2#iota chicken.compiler.lfa2#find-tail chicken.compiler.lfa2#find chicken.compiler.lfa2#length+ chicken.compiler.lfa2#lset=/eq? chicken.compiler.lfa2#lset<=/eq? chicken.compiler.lfa2#list-tabulate chicken.compiler.lfa2#lset-intersection/eq? chicken.compiler.lfa2#lset-union/eq? chicken.compiler.lfa2#lset-difference/eq? chicken.compiler.lfa2#lset-adjoin/eq? chicken.compiler.lfa2#list-index chicken.compiler.lfa2#last chicken.compiler.lfa2#unzip1 chicken.compiler.lfa2#remove chicken.compiler.lfa2#filter-map chicken.compiler.lfa2#filter chicken.compiler.lfa2#alist-cons chicken.compiler.lfa2#delete-duplicates chicken.compiler.lfa2#fifth chicken.compiler.lfa2#fourth chicken.compiler.lfa2#third chicken.compiler.lfa2#second chicken.compiler.lfa2#first chicken.compiler.lfa2#delete chicken.compiler.lfa2#concatenate chicken.compiler.lfa2#cons* chicken.compiler.lfa2#any chicken.compiler.lfa2#every chicken.compiler.lfa2#append-map chicken.compiler.lfa2#split-at chicken.compiler.lfa2#drop chicken.compiler.lfa2#take chicken.compiler.lfa2#span chicken.compiler.lfa2#partition) 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#partition 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#span 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#drop 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#split-at 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#append-map 
o|inlining procedure: k1540 
o|inlining procedure: k1540 
o|inlining procedure: k1571 
o|inlining procedure: k1571 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#cons* 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#concatenate 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#fourth 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#fifth 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#delete-duplicates 
o|inlining procedure: k1788 
o|inlining procedure: k1788 
o|inlining procedure: k1780 
o|inlining procedure: k1780 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#filter-map 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#remove 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#unzip1 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#last 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#list-index 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#lset-intersection/eq? 
o|inlining procedure: k2179 
o|inlining procedure: k2179 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#length+ 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#find 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#find-tail 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#iota 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#make-list 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#posq 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#posv 
o|substituted constant variable: chicken.compiler.lfa2#lfa2-debug 
o|propagated global variable: out530533 ##sys#standard-output 
o|substituted constant variable: a2446 
o|substituted constant variable: a2447 
o|inlining procedure: k2442 
o|substituted constant variable: chicken.compiler.lfa2#d-depth 
o|substituted constant variable: chicken.compiler.lfa2#d-depth 
o|substituted constant variable: a2471 
o|substituted constant variable: chicken.compiler.lfa2#d-depth 
o|propagated global variable: out530533 ##sys#standard-output 
o|inlining procedure: k2442 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#dd 
o|inlining procedure: k2608 
o|contracted procedure: "(lfa2.scm:206) g630631" 
o|inlining procedure: k2608 
o|substituted constant variable: a2641 
o|inlining procedure: k2642 
o|inlining procedure: k2642 
o|inlining procedure: k2657 
o|inlining procedure: k2657 
o|inlining procedure: "(lfa2.scm:217) chicken.compiler.lfa2#first" 
o|inlining procedure: k2698 
o|inlining procedure: k2698 
o|inlining procedure: k2714 
o|inlining procedure: k2714 
o|inlining procedure: k2735 
o|inlining procedure: k2735 
o|inlining procedure: k2747 
o|inlining procedure: k2747 
o|substituted constant variable: a2757 
o|substituted constant variable: a2759 
o|substituted constant variable: a2761 
o|inlining procedure: k2769 
o|inlining procedure: k2769 
o|inlining procedure: "(lfa2.scm:227) chicken.compiler.lfa2#first" 
o|inlining procedure: k2860 
o|contracted procedure: "(lfa2.scm:265) vartype609" 
o|inlining procedure: k2803 
o|inlining procedure: k2803 
o|inlining procedure: k2815 
o|inlining procedure: k2815 
o|inlining procedure: "(lfa2.scm:265) chicken.compiler.lfa2#first" 
o|inlining procedure: k2860 
o|inlining procedure: k2885 
o|inlining procedure: "(lfa2.scm:273) chicken.compiler.lfa2#third" 
o|inlining procedure: "(lfa2.scm:272) chicken.compiler.lfa2#third" 
o|inlining procedure: "(lfa2.scm:270) chicken.compiler.lfa2#second" 
o|inlining procedure: "(lfa2.scm:269) chicken.compiler.lfa2#second" 
o|inlining procedure: k2885 
o|inlining procedure: "(lfa2.scm:277) chicken.compiler.lfa2#third" 
o|inlining procedure: "(lfa2.scm:276) chicken.compiler.lfa2#second" 
o|inlining procedure: "(lfa2.scm:267) chicken.compiler.lfa2#first" 
o|inlining procedure: k2947 
o|contracted procedure: "(lfa2.scm:278) constant-result603" 
o|inlining procedure: k2483 
o|inlining procedure: k2483 
o|inlining procedure: k2495 
o|inlining procedure: k2495 
o|inlining procedure: k2510 
o|inlining procedure: k2510 
o|inlining procedure: k2522 
o|inlining procedure: k2522 
o|inlining procedure: k2534 
o|inlining procedure: k2534 
o|inlining procedure: k2546 
o|inlining procedure: k2546 
o|inlining procedure: k2558 
o|inlining procedure: k2558 
o|inlining procedure: k2570 
o|inlining procedure: k2570 
o|inlining procedure: "(lfa2.scm:278) chicken.compiler.lfa2#first" 
o|inlining procedure: k2947 
o|inlining procedure: k2987 
o|inlining procedure: "(lfa2.scm:290) chicken.compiler.lfa2#first" 
o|inlining procedure: k2987 
o|inlining procedure: k3010 
o|inlining procedure: "(lfa2.scm:289) chicken.compiler.lfa2#first" 
o|inlining procedure: k3010 
o|inlining procedure: "(lfa2.scm:283) chicken.compiler.lfa2#second" 
o|inlining procedure: "(lfa2.scm:281) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:280) chicken.compiler.lfa2#first" 
o|inlining procedure: k3045 
o|inlining procedure: "(lfa2.scm:297) chicken.compiler.lfa2#first" 
o|inlining procedure: k3045 
o|inlining procedure: "(lfa2.scm:300) chicken.compiler.lfa2#first" 
o|inlining procedure: k3077 
o|inlining procedure: k3077 
o|inlining procedure: k3089 
o|inlining procedure: k3120 
o|inlining procedure: k3120 
o|inlining procedure: k3132 
o|inlining procedure: "(lfa2.scm:318) chicken.compiler.lfa2#second" 
o|inlining procedure: "(lfa2.scm:316) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:316) chicken.compiler.lfa2#second" 
o|inlining procedure: k3132 
o|inlining procedure: k3171 
o|inlining procedure: "(lfa2.scm:315) chicken.compiler.lfa2#second" 
o|inlining procedure: k3171 
o|inlining procedure: "(lfa2.scm:314) chicken.compiler.lfa2#first" 
o|inlining procedure: k3192 
o|inlining procedure: k3192 
o|inlining procedure: "(lfa2.scm:308) chicken.compiler.lfa2#first" 
o|inlining procedure: k3253 
o|inlining procedure: k3253 
o|inlining procedure: "(lfa2.scm:330) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:329) chicken.compiler.lfa2#first" 
o|inlining procedure: k3242 
o|inlining procedure: k3242 
o|inlining procedure: k3302 
o|inlining procedure: k3324 
o|inlining procedure: k3339 
o|inlining procedure: k3339 
o|inlining procedure: "(lfa2.scm:347) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:349) chicken.compiler.lfa2#second" 
o|inlining procedure: "(lfa2.scm:346) chicken.compiler.lfa2#second" 
o|inlining procedure: k3324 
o|inlining procedure: "(lfa2.scm:343) chicken.compiler.lfa2#first" 
o|inlining procedure: k3302 
o|inlining procedure: k3384 
o|inlining procedure: "(lfa2.scm:365) chicken.compiler.lfa2#second" 
o|inlining procedure: "(lfa2.scm:362) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:363) chicken.compiler.lfa2#second" 
o|inlining procedure: k3384 
o|inlining procedure: k3423 
o|inlining procedure: "(lfa2.scm:361) chicken.compiler.lfa2#second" 
o|inlining procedure: k3423 
o|inlining procedure: "(lfa2.scm:360) chicken.compiler.lfa2#first" 
o|inlining procedure: k3444 
o|inlining procedure: k3444 
o|inlining procedure: "(lfa2.scm:356) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:340) chicken.compiler.lfa2#first" 
o|inlining procedure: k3506 
o|inlining procedure: "(lfa2.scm:380) chicken.compiler.lfa2#first" 
o|inlining procedure: k3506 
o|inlining procedure: k3531 
o|inlining procedure: k3531 
o|inlining procedure: "(lfa2.scm:376) chicken.compiler.lfa2#first" 
o|inlining procedure: k3498 
o|inlining procedure: k3498 
o|substituted constant variable: chicken.compiler.lfa2#+constructor-map+ 
o|inlining procedure: "(lfa2.scm:374) chicken.compiler.lfa2#first" 
o|substituted constant variable: chicken.compiler.lfa2#+predicate-map+ 
o|inlining procedure: "(lfa2.scm:338) chicken.compiler.lfa2#first" 
o|substituted constant variable: chicken.compiler.lfa2#+ffi-type-check-map+ 
o|inlining procedure: "(lfa2.scm:327) chicken.compiler.lfa2#first" 
o|substituted constant variable: chicken.compiler.lfa2#+type-check-map+ 
o|inlining procedure: "(lfa2.scm:306) chicken.compiler.lfa2#first" 
o|inlining procedure: k3576 
o|inlining procedure: k3576 
o|inlining procedure: k3089 
o|inlining procedure: k3610 
o|inlining procedure: k3610 
o|substituted constant variable: a3634 
o|substituted constant variable: a3636 
o|substituted constant variable: a3638 
o|substituted constant variable: a3640 
o|substituted constant variable: a3645 
o|substituted constant variable: a3647 
o|substituted constant variable: a3652 
o|substituted constant variable: a3654 
o|substituted constant variable: a3656 
o|substituted constant variable: a3658 
o|substituted constant variable: a3663 
o|substituted constant variable: a3665 
o|substituted constant variable: a3667 
o|inlining procedure: k3671 
o|inlining procedure: k3721 
o|contracted procedure: "(lfa2.scm:395) g854861" 
o|propagated global variable: out864867 ##sys#standard-output 
o|substituted constant variable: a3689 
o|substituted constant variable: a3690 
o|propagated global variable: out864867 ##sys#standard-output 
o|inlining procedure: k3721 
o|inlining procedure: k3671 
o|replaced variables: 317 
o|removed binding forms: 108 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#every 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#any 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#first 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#second 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#third 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#filter 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#list-tabulate 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#d-depth 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#lfa2-debug 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#d 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#+type-check-map+ 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#+predicate-map+ 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#+ffi-type-check-map+ 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#+constructor-map+ 
o|substituted constant variable: r27363768 
o|substituted constant variable: r27363768 
o|inlining procedure: k2735 
o|inlining procedure: k2735 
o|substituted constant variable: r27483772 
o|substituted constant variable: r28163784 
o|substituted constant variable: r24843830 
o|substituted constant variable: r24963832 
o|substituted constant variable: r25113834 
o|substituted constant variable: r25233836 
o|substituted constant variable: r25353838 
o|substituted constant variable: r25473840 
o|substituted constant variable: r25593842 
o|substituted constant variable: r30113867 
o|substituted constant variable: r30463883 
o|substituted constant variable: r30783895 
o|inlining procedure: k3120 
o|inlining procedure: k3120 
o|substituted constant variable: r31723925 
o|inlining procedure: k3120 
o|inlining procedure: k3120 
o|inlining procedure: k3324 
o|substituted constant variable: r33403958 
o|inlining procedure: k3324 
o|substituted constant variable: r33033981 
o|inlining procedure: k3378 
o|inlining procedure: k3378 
o|substituted constant variable: r34244005 
o|inlining procedure: k3378 
o|inlining procedure: k3378 
o|substituted constant variable: r35324031 
o|substituted constant variable: r30904061 
o|propagated global variable: out864867 ##sys#standard-output 
o|replaced variables: 82 
o|removed binding forms: 300 
o|inlining procedure: "(lfa2.scm:208) chicken.compiler.lfa2#alist-cons" 
o|inlining procedure: "(lfa2.scm:291) chicken.compiler.lfa2#alist-cons" 
o|inlining procedure: "(lfa2.scm:291) chicken.compiler.lfa2#alist-cons" 
o|inlining procedure: "(lfa2.scm:286) chicken.compiler.lfa2#alist-cons" 
o|inlining procedure: k3144 
o|substituted constant variable: r33254082 
o|substituted constant variable: r33254084 
o|substituted constant variable: r330339814087 
o|substituted constant variable: r330339814089 
o|substituted constant variable: r330339814091 
o|substituted constant variable: r330339814093 
o|replaced variables: 9 
o|removed binding forms: 129 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#alist-cons 
o|substituted constant variable: y2274104 
o|substituted constant variable: r27364068 
o|substituted constant variable: r27364070 
o|substituted constant variable: r31454134 
o|inlining procedure: k3396 
o|replaced variables: 49 
o|removed binding forms: 18 
o|removed conditional forms: 1 
o|substituted constant variable: r33974146 
o|removed binding forms: 55 
o|removed conditional forms: 1 
o|removed binding forms: 1 
o|simplifications: ((if . 8) (##core#call . 170)) 
o|  call simplifications:
o|    ##sys#cons	3
o|    scheme#member	3
o|    scheme#memq	2
o|    scheme#string?
o|    scheme#symbol?	5
o|    chicken.base#fixnum?
o|    chicken.base#bignum?
o|    chicken.base#flonum?
o|    chicken.base#ratnum?
o|    chicken.base#cplxnum?
o|    scheme#boolean?
o|    scheme#list?
o|    scheme#eof-object?
o|    scheme#vector?
o|    ##sys#immediate?
o|    ##sys#generic-structure?
o|    scheme#char?
o|    ##sys#list	5
o|    scheme#cadr	18
o|    scheme#caddr	3
o|    scheme#null?	2
o|    scheme#cdar
o|    scheme#assq	2
o|    ##sys#check-list	4
o|    scheme#pair?	12
o|    ##sys#slot	9
o|    scheme#length
o|    scheme#list
o|    scheme#eq?	35
o|    scheme#car	29
o|    scheme#not	4
o|    scheme#assoc	5
o|    scheme#cons	8
o|    scheme#cdr	4
o|    scheme#set-cdr!
o|contracted procedure: k2605 
o|contracted procedure: k2618 
o|contracted procedure: k17654108 
o|contracted procedure: k2648 
o|contracted procedure: k2651 
o|contracted procedure: k2654 
o|contracted procedure: k2708 
o|contracted procedure: k2724 
o|contracted procedure: k2732 
o|contracted procedure: k2738 
o|contracted procedure: k2744 
o|contracted procedure: k2750 
o|contracted procedure: k2772 
o|contracted procedure: k2782 
o|contracted procedure: k2786 
o|contracted procedure: k2790 
o|contracted procedure: k2863 
o|contracted procedure: k2870 
o|contracted procedure: k2800 
o|contracted procedure: k2818 
o|contracted procedure: k2845 
o|contracted procedure: k2835 
o|contracted procedure: k2876 
o|contracted procedure: k2879 
o|contracted procedure: k2898 
o|contracted procedure: k2906 
o|contracted procedure: k2910 
o|contracted procedure: k2918 
o|contracted procedure: k2928 
o|contracted procedure: k2932 
o|contracted procedure: k2935 
o|contracted procedure: k2944 
o|contracted procedure: k2950 
o|contracted procedure: k2957 
o|contracted procedure: k2486 
o|contracted procedure: k2492 
o|contracted procedure: k2507 
o|contracted procedure: k2513 
o|contracted procedure: k2519 
o|contracted procedure: k2525 
o|contracted procedure: k2531 
o|contracted procedure: k2537 
o|contracted procedure: k2543 
o|contracted procedure: k2549 
o|contracted procedure: k2555 
o|contracted procedure: k2561 
o|contracted procedure: k2567 
o|contracted procedure: k2596 
o|contracted procedure: k2589 
o|contracted procedure: k2573 
o|contracted procedure: k2580 
o|contracted procedure: k2586 
o|contracted procedure: k2963 
o|contracted procedure: k2966 
o|contracted procedure: k2969 
o|contracted procedure: k2979 
o|contracted procedure: k2993 
o|contracted procedure: k17654119 
o|contracted procedure: k17654126 
o|contracted procedure: k3007 
o|contracted procedure: k3013 
o|contracted procedure: k3024 
o|contracted procedure: k17654133 
o|contracted procedure: k3048 
o|contracted procedure: k3051 
o|contracted procedure: k3058 
o|contracted procedure: k3064 
o|contracted procedure: k3067 
o|contracted procedure: k3074 
o|contracted procedure: k3080 
o|contracted procedure: k3086 
o|contracted procedure: k3092 
o|contracted procedure: k3095 
o|contracted procedure: k3103 
o|contracted procedure: k3570 
o|contracted procedure: k3109 
o|contracted procedure: k3229 
o|contracted procedure: k3129 
o|contracted procedure: k3138 
o|contracted procedure: k3150 
o|contracted procedure: k3157 
o|contracted procedure: k3144 
o|contracted procedure: k3165 
o|contracted procedure: k3168 
o|contracted procedure: k3189 
o|contracted procedure: k3174 
o|contracted procedure: k3185 
o|contracted procedure: k3201 
o|contracted procedure: k3212 
o|contracted procedure: k3220 
o|contracted procedure: k3233 
o|contracted procedure: k3566 
o|contracted procedure: k3239 
o|contracted procedure: k3247 
o|contracted procedure: k3281 
o|contracted procedure: k3256 
o|contracted procedure: k3285 
o|contracted procedure: k3562 
o|contracted procedure: k3291 
o|contracted procedure: k3299 
o|contracted procedure: k3305 
o|contracted procedure: k3312 
o|contracted procedure: k3320 
o|contracted procedure: k3368 
o|contracted procedure: k3327 
o|contracted procedure: k3333 
o|contracted procedure: k3336 
o|contracted procedure: k3342 
o|inlining procedure: k3324 
o|contracted procedure: k3353 
o|contracted procedure: k3361 
o|inlining procedure: k3324 
o|contracted procedure: k3481 
o|contracted procedure: k3381 
o|contracted procedure: k3390 
o|contracted procedure: k3402 
o|contracted procedure: k3409 
o|contracted procedure: k3396 
o|contracted procedure: k3417 
o|contracted procedure: k3420 
o|contracted procedure: k3441 
o|contracted procedure: k3426 
o|contracted procedure: k3437 
o|contracted procedure: k3453 
o|contracted procedure: k3464 
o|contracted procedure: k3472 
o|contracted procedure: k3485 
o|contracted procedure: k3558 
o|contracted procedure: k3495 
o|contracted procedure: k3548 
o|contracted procedure: k3503 
o|contracted procedure: k3512 
o|contracted procedure: k3518 
o|contracted procedure: k3545 
o|contracted procedure: k3534 
o|contracted procedure: k3579 
o|contracted procedure: k3589 
o|contracted procedure: k3593 
o|contracted procedure: k3601 
o|contracted procedure: k3613 
o|contracted procedure: k3623 
o|contracted procedure: k3627 
o|contracted procedure: k3674 
o|contracted procedure: k3712 
o|contracted procedure: k3724 
o|contracted procedure: k3734 
o|contracted procedure: k3738 
o|contracted procedure: k3709 
o|simplifications: ((let . 35)) 
o|removed binding forms: 146 
o|inlining procedure: k3316 
o|inlining procedure: k3316 
o|inlining procedure: k3316 
o|inlining procedure: k3316 
o|replaced variables: 36 
o|removed binding forms: 1 
o|inlining procedure: k2625 
o|inlining procedure: k2987 
o|removed binding forms: 17 
o|contracted procedure: k3000 
o|removed binding forms: 3 
o|replaced variables: 2 
o|removed binding forms: 1 
o|customizable procedures: (for-each-loop853873 g828835 for-each-loop827845 g738745 for-each-loop737755 g813814 k3509 g790791 k3447 k3387 g781782 g766767 k3195 k3135 extinguish!608 k2983 assigned?605 k2990 k2888 walk610 k2821 loop685 report604 g653660 for-each-loop652663 droppable?606 drop!607) 
o|calls to known targets: 70 
o|fast box initializations: 11 
o|dropping unused closure argument: f_2676 
*/
/* end of file */

/* Generated from internal.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: internal.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file internal.c -emit-import-library chicken.internal
   unit: internal
   uses: library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[42];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,53,54,53,32,105,41,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,115,116,114,105,110,103,45,62,99,45,105,100,101,110,116,105,102,105,101,114,32,115,116,114,41,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,9),40,97,50,51,56,53,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,118,97,108,105,100,45,108,105,98,114,97,114,121,45,115,112,101,99,105,102,105,101,114,63,32,120,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,6),40,102,97,105,108,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,24),40,108,105,98,114,97,114,121,45,112,97,114,116,45,62,115,116,114,105,110,103,32,120,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,19),40,100,111,108,111,111,112,54,48,55,32,108,115,116,32,115,116,114,41,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,108,105,98,114,97,114,121,45,105,100,32,108,105,98,41,0,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,109,111,100,117,108,101,45,114,101,113,117,105,114,101,109,101,110,116,32,105,100,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,98,115,32,115,101,101,110,32,119,97,114,110,101,100,41,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,64),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,99,104,101,99,107,45,102,111,114,45,109,117,108,116,105,112,108,101,45,98,105,110,100,105,110,103,115,32,98,105,110,100,105,110,103,115,32,102,111,114,109,32,108,111,99,41};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,109,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,109,97,99,114,111,45,115,117,98,115,101,116,32,109,101,48,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,11),40,103,54,55,48,32,115,100,101,102,41,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,54,57,32,103,54,55,54,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,102,105,120,117,112,45,109,97,99,114,111,45,101,110,118,105,114,111,110,109,101,110,116,32,115,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,115,121,109,98,111,108,32,110,41};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,116,97,98,108,101,45,114,101,102,32,104,116,32,107,101,121,41};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,98,117,99,107,101,116,41,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,116,97,98,108,101,45,115,101,116,33,32,104,116,32,107,101,121,32,118,97,108,41,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,62),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,116,97,98,108,101,45,117,112,100,97,116,101,33,32,104,116,32,107,101,121,32,117,112,100,116,102,117,110,99,32,118,97,108,117,102,117,110,99,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,13),40,103,55,50,56,32,98,117,99,107,101,116,41,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,55,50,55,32,103,55,51,52,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,55,50,50,32,105,41,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,116,97,98,108,101,45,102,111,114,45,101,97,99,104,32,112,32,104,116,41,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,108,101,110,32,98,107,116,32,115,105,122,101,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,116,97,98,108,101,45,115,105,122,101,32,104,116,41,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1372)
static void C_fcall f_1372(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1394)
static void C_ccall f_1394(C_word c,C_word *av) C_noret;
C_noret_decl(f_2275)
static void C_ccall f_2275(C_word c,C_word *av) C_noret;
C_noret_decl(f_2279)
static void C_ccall f_2279(C_word c,C_word *av) C_noret;
C_noret_decl(f_2287)
static void C_fcall f_2287(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2303)
static void C_ccall f_2303(C_word c,C_word *av) C_noret;
C_noret_decl(f_2313)
static void C_fcall f_2313(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2319)
static void C_ccall f_2319(C_word c,C_word *av) C_noret;
C_noret_decl(f_2322)
static void C_ccall f_2322(C_word c,C_word *av) C_noret;
C_noret_decl(f_2329)
static void C_ccall f_2329(C_word c,C_word *av) C_noret;
C_noret_decl(f_2362)
static void C_ccall f_2362(C_word c,C_word *av) C_noret;
C_noret_decl(f_2386)
static void C_ccall f_2386(C_word c,C_word *av) C_noret;
C_noret_decl(f_2402)
static void C_ccall f_2402(C_word c,C_word *av) C_noret;
C_noret_decl(f_2405)
static void C_fcall f_2405(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2448)
static void C_fcall f_2448(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2500)
static void C_fcall f_2500(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2507)
static void C_ccall f_2507(C_word c,C_word *av) C_noret;
C_noret_decl(f_2511)
static void C_ccall f_2511(C_word c,C_word *av) C_noret;
C_noret_decl(f_2526)
static void C_ccall f_2526(C_word c,C_word *av) C_noret;
C_noret_decl(f_2528)
static void C_fcall f_2528(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2549)
static void C_ccall f_2549(C_word c,C_word *av) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word *av) C_noret;
C_noret_decl(f_2563)
static void C_ccall f_2563(C_word c,C_word *av) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571(C_word c,C_word *av) C_noret;
C_noret_decl(f_2577)
static void C_ccall f_2577(C_word c,C_word *av) C_noret;
C_noret_decl(f_2583)
static void C_fcall f_2583(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2596)
static void C_fcall f_2596(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2599)
static void C_ccall f_2599(C_word c,C_word *av) C_noret;
C_noret_decl(f_2616)
static void C_ccall f_2616(C_word c,C_word *av) C_noret;
C_noret_decl(f_2651)
static void C_ccall f_2651(C_word c,C_word *av) C_noret;
C_noret_decl(f_2658)
static void C_ccall f_2658(C_word c,C_word *av) C_noret;
C_noret_decl(f_2665)
static void C_ccall f_2665(C_word c,C_word *av) C_noret;
C_noret_decl(f_2667)
static void C_fcall f_2667(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2688)
static void C_ccall f_2688(C_word c,C_word *av) C_noret;
C_noret_decl(f_2701)
static void C_ccall f_2701(C_word c,C_word *av) C_noret;
C_noret_decl(f_2708)
static void C_ccall f_2708(C_word c,C_word *av) C_noret;
C_noret_decl(f_2709)
static void C_fcall f_2709(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2725)
static void C_ccall f_2725(C_word c,C_word *av) C_noret;
C_noret_decl(f_2748)
static void C_ccall f_2748(C_word c,C_word *av) C_noret;
C_noret_decl(f_2750)
static void C_fcall f_2750(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2760)
static void C_ccall f_2760(C_word c,C_word *av) C_noret;
C_noret_decl(f_2782)
static C_word C_fcall f_2782(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2797)
static void C_ccall f_2797(C_word c,C_word *av) C_noret;
C_noret_decl(f_2807)
static C_word C_fcall f_2807(C_word t0,C_word t1);
C_noret_decl(f_2853)
static void C_ccall f_2853(C_word c,C_word *av) C_noret;
C_noret_decl(f_2865)
static void C_fcall f_2865(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2914)
static void C_ccall f_2914(C_word c,C_word *av) C_noret;
C_noret_decl(f_2922)
static void C_ccall f_2922(C_word c,C_word *av) C_noret;
C_noret_decl(f_2926)
static void C_ccall f_2926(C_word c,C_word *av) C_noret;
C_noret_decl(f_2929)
static void C_ccall f_2929(C_word c,C_word *av) C_noret;
C_noret_decl(f_2934)
static void C_ccall f_2934(C_word c,C_word *av) C_noret;
C_noret_decl(f_2940)
static void C_fcall f_2940(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2948)
static void C_fcall f_2948(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2969)
static void C_ccall f_2969(C_word c,C_word *av) C_noret;
C_noret_decl(f_2978)
static void C_fcall f_2978(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2988)
static void C_ccall f_2988(C_word c,C_word *av) C_noret;
C_noret_decl(f_3001)
static void C_ccall f_3001(C_word c,C_word *av) C_noret;
C_noret_decl(f_3011)
static void C_fcall f_3011(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3033)
static void C_ccall f_3033(C_word c,C_word *av) C_noret;
C_noret_decl(f_995)
static void C_ccall f_995(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externexport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1372)
static void C_ccall trf_1372(C_word c,C_word *av) C_noret;
static void C_ccall trf_1372(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1372(t0,t1,t2);}

C_noret_decl(trf_2287)
static void C_ccall trf_2287(C_word c,C_word *av) C_noret;
static void C_ccall trf_2287(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2287(t0,t1,t2);}

C_noret_decl(trf_2313)
static void C_ccall trf_2313(C_word c,C_word *av) C_noret;
static void C_ccall trf_2313(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2313(t0,t1);}

C_noret_decl(trf_2405)
static void C_ccall trf_2405(C_word c,C_word *av) C_noret;
static void C_ccall trf_2405(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2405(t0,t1);}

C_noret_decl(trf_2448)
static void C_ccall trf_2448(C_word c,C_word *av) C_noret;
static void C_ccall trf_2448(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2448(t0,t1,t2);}

C_noret_decl(trf_2500)
static void C_ccall trf_2500(C_word c,C_word *av) C_noret;
static void C_ccall trf_2500(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2500(t0,t1);}

C_noret_decl(trf_2528)
static void C_ccall trf_2528(C_word c,C_word *av) C_noret;
static void C_ccall trf_2528(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2528(t0,t1,t2,t3);}

C_noret_decl(trf_2583)
static void C_ccall trf_2583(C_word c,C_word *av) C_noret;
static void C_ccall trf_2583(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2583(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2596)
static void C_ccall trf_2596(C_word c,C_word *av) C_noret;
static void C_ccall trf_2596(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2596(t0,t1);}

C_noret_decl(trf_2667)
static void C_ccall trf_2667(C_word c,C_word *av) C_noret;
static void C_ccall trf_2667(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2667(t0,t1,t2);}

C_noret_decl(trf_2709)
static void C_ccall trf_2709(C_word c,C_word *av) C_noret;
static void C_ccall trf_2709(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2709(t0,t1,t2);}

C_noret_decl(trf_2750)
static void C_ccall trf_2750(C_word c,C_word *av) C_noret;
static void C_ccall trf_2750(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2750(t0,t1,t2);}

C_noret_decl(trf_2865)
static void C_ccall trf_2865(C_word c,C_word *av) C_noret;
static void C_ccall trf_2865(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2865(t0,t1,t2);}

C_noret_decl(trf_2940)
static void C_ccall trf_2940(C_word c,C_word *av) C_noret;
static void C_ccall trf_2940(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2940(t0,t1,t2);}

C_noret_decl(trf_2948)
static void C_ccall trf_2948(C_word c,C_word *av) C_noret;
static void C_ccall trf_2948(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2948(t0,t1,t2);}

C_noret_decl(trf_2978)
static void C_ccall trf_2978(C_word c,C_word *av) C_noret;
static void C_ccall trf_2978(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2978(t0,t1,t2);}

C_noret_decl(trf_3011)
static void C_ccall trf_3011(C_word c,C_word *av) C_noret;
static void C_ccall trf_3011(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3011(t0,t1,t2,t3,t4);}

/* loop in chicken.internal#valid-library-specifier? in k993 */
static void C_fcall f_1372(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1372,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1394,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(t2);
/* mini-srfi-1.scm:82: pred */
t6=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}}

/* k1392 in loop in chicken.internal#valid-library-specifier? in k993 */
static void C_ccall f_1394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1394,2,av);}
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
f_1372(t4,((C_word*)t0)[2],t3);}}

/* chicken.internal#string->c-identifier in k993 */
static void C_ccall f_2275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2275,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2279,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* internal.scm:68: chicken.base#open-output-string */
t4=*((C_word*)lf[7]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2277 in chicken.internal#string->c-identifier in k993 */
static void C_ccall f_2279(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2279,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_i_string_length(((C_word*)t0)[2]);
t4=t3;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2287,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t6,a[6]=((C_word)li0),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_2287(t8,((C_word*)t0)[3],C_fix(0));}

/* doloop565 in k2277 in chicken.internal#string->c-identifier in k993 */
static void C_fcall f_2287(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_2287,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
/* internal.scm:71: chicken.base#get-output-string */
t3=*((C_word*)lf[3]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=C_i_string_ref(((C_word*)t0)[4],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2303,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2313,a[2]=t4,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=C_u_i_char_alphabeticp(t4);
if(C_truep(C_i_not(t7))){
t8=C_u_i_char_numericp(t4);
t9=C_i_not(t8);
t10=t6;
f_2313(t10,(C_truep(t9)?t9:C_eqp(t2,C_fix(0))));}
else{
t8=t6;
f_2313(t8,C_SCHEME_FALSE);}}}

/* k2301 in doloop565 in k2277 in chicken.internal#string->c-identifier in k993 */
static void C_ccall f_2303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2303,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2287(t3,((C_word*)t0)[4],t2);}

/* k2311 in doloop565 in k2277 in chicken.internal#string->c-identifier in k993 */
static void C_fcall f_2313(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2313,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_fix(C_character_code(((C_word*)t0)[2]));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2319,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t5=*((C_word*)lf[6]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_make_character(95);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* write-char/port */
t2=*((C_word*)lf[6]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2317 in k2311 in doloop565 in k2277 in chicken.internal#string->c-identifier in k993 */
static void C_ccall f_2319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2319,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2322,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[4],C_fix(16)))){
/* write-char/port */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(48);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2322(2,av2);}}}

/* k2320 in k2317 in k2311 in doloop565 in k2277 in chicken.internal#string->c-identifier in k993 */
static void C_ccall f_2322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2322,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#fixnum->string */
t3=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2327 in k2320 in k2317 in k2311 in doloop565 in k2277 in chicken.internal#string->c-identifier in k993 */
static void C_ccall f_2329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2329,2,av);}
/* internal.scm:78: scheme#display */
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

/* chicken.internal#valid-library-specifier? in k993 */
static void C_ccall f_2362(C_word c,C_word *av){
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
C_word t11;
C_word t12;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2362,3,av);}
a=C_alloc(10);
t3=C_i_symbolp(t2);
if(C_truep(t3)){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_listp(t2))){
t4=C_i_nullp(t2);
if(C_truep(C_i_not(t4))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2386,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
t6=t1;
t7=t5;
t8=t2;
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1372,a[2]=t10,a[3]=t7,a[4]=((C_word)li3),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_1372(t12,t6,t8);}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* a2385 in chicken.internal#valid-library-specifier? in k993 */
static void C_ccall f_2386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2386,3,av);}
t3=C_i_symbolp(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?t3:C_fixnump(t2));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.internal#library-id in k993 */
static void C_ccall f_2402(C_word c,C_word *av){
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
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_2402,3,av);}
a=C_alloc(17);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2405,a[2]=t2,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2448,a[2]=t4,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp));
if(C_truep(C_i_symbolp(t2))){
t9=t2;
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(t2))){
/* internal.scm:104: fail */
t9=((C_word*)t4)[1];
f_2405(t9,t1);}
else{
t9=C_i_listp(t2);
if(C_truep(C_i_not(t9))){
/* internal.scm:105: fail */
t10=((C_word*)t4)[1];
f_2405(t10,t1);}
else{
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2500,a[2]=t1,a[3]=t2,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t11=t2;
t12=C_i_cdr(t11);
if(C_truep(C_i_pairp(t12))){
t13=C_i_cddr(t11);
if(C_truep(C_i_nullp(t13))){
t14=C_u_i_car(t11);
t15=C_eqp(lf[18],t14);
if(C_truep(t15)){
t16=C_u_i_cdr(t11);
t17=C_u_i_car(t16);
t18=t10;
f_2500(t18,C_fixnump(t17));}
else{
t16=t10;
f_2500(t16,C_SCHEME_FALSE);}}
else{
t14=t10;
f_2500(t14,C_SCHEME_FALSE);}}
else{
t13=t10;
f_2500(t13,C_SCHEME_FALSE);}}}}}

/* fail in chicken.internal#library-id in k993 */
static void C_fcall f_2405(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_2405,2,t0,t1);}
/* internal.scm:92: ##sys#error */
t2=*((C_word*)lf[10]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[11];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* library-part->string in chicken.internal#library-id in k993 */
static void C_fcall f_2448(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_2448,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
/* internal.scm:99: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}
else{
if(C_truep(C_fixnump(t2))){
/* internal.scm:100: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}
else{
/* internal.scm:101: fail */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2405(t3,t1);}}}

/* k2498 in chicken.internal#library-id in k993 */
static void C_fcall f_2500(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2500,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2507,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2511,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_cadr(((C_word*)t0)[3]);
/* internal.scm:108: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2526,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[3];
t6=C_u_i_car(t5);
/* internal.scm:111: library-part->string */
t7=((C_word*)((C_word*)t0)[4])[1];
f_2448(t7,t4,t6);}}

/* k2505 in k2498 in chicken.internal#library-id in k993 */
static void C_ccall f_2507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2507,2,av);}
/* internal.scm:107: ##sys#intern-symbol */{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
C_string_to_symbol(3,av2);}}

/* k2509 in k2498 in chicken.internal#library-id in k993 */
static void C_ccall f_2511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2511,2,av);}
/* internal.scm:108: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[15];
av2[3]=t1;
tp(4,av2);}}

/* k2524 in k2498 in chicken.internal#library-id in k993 */
static void C_ccall f_2526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2526,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2528,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2528(t5,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* doloop607 in k2524 in k2498 in chicken.internal#library-id in k993 */
static void C_fcall f_2528(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_2528,4,t0,t1,t2,t3);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
/* internal.scm:114: ##sys#intern-symbol */{
C_word av2[3];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
C_string_to_symbol(3,av2);}}
else{
t4=C_i_cdr(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2549,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2553,a[2]=t6,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=t2;
t9=C_u_i_car(t8);
/* internal.scm:112: library-part->string */
t10=((C_word*)((C_word*)t0)[3])[1];
f_2448(t10,t7,t9);}}

/* k2547 in doloop607 in k2524 in k2498 in chicken.internal#library-id in k993 */
static void C_ccall f_2549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2549,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_2528(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2551 in doloop607 in k2524 in k2498 in chicken.internal#library-id in k993 */
static void C_ccall f_2553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2553,2,av);}
/* internal.scm:112: scheme#string-append */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[17];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.internal#module-requirement in k993 */
static void C_ccall f_2563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2563,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2571,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(1));
/* internal.scm:121: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[21];
tp(4,av2);}}

/* k2569 in chicken.internal#module-requirement in k993 */
static void C_ccall f_2571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2571,2,av);}
/* internal.scm:120: ##sys#string->symbol */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* chicken.internal#check-for-multiple-bindings in k993 */
static void C_ccall f_2577(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2577,5,av);}
a=C_alloc(8);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2583,a[2]=t6,a[3]=t3,a[4]=t4,a[5]=((C_word)li10),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_2583(t8,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in chicken.internal#check-for-multiple-bindings in k993 */
static void C_fcall f_2583(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_2583,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=C_i_nullp(t2);
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2596,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t3,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
t7=C_i_caar(t2);
if(C_truep(C_i_memq(t7,t3))){
t8=t2;
t9=C_u_i_car(t8);
t10=C_u_i_car(t9);
t11=C_i_memq(t10,t4);
t12=t6;
f_2596(t12,C_i_not(t11));}
else{
t8=t6;
f_2596(t8,C_SCHEME_FALSE);}}}

/* k2594 in loop in chicken.internal#check-for-multiple-bindings in k993 */
static void C_fcall f_2596(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_2596,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2599,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2616,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* internal.scm:133: scheme#string-append */
t4=*((C_word*)lf[16]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[24];
av2[3]=((C_word*)t0)[8];
av2[4]=lf[25];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_i_caar(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[6]);
/* internal.scm:137: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2583(t6,((C_word*)t0)[5],t3,t5,((C_word*)t0)[3]);}}

/* k2597 in k2594 in loop in chicken.internal#check-for-multiple-bindings in k993 */
static void C_ccall f_2599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2599,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_i_caar(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
/* internal.scm:136: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2583(t6,((C_word*)t0)[5],t3,((C_word*)t0)[6],t5);}

/* k2614 in k2594 in loop in chicken.internal#check-for-multiple-bindings in k993 */
static void C_ccall f_2616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2616,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_u_i_car(t3);
/* internal.scm:132: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t4;
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* chicken.internal#macro-subset in k993 */
static void C_ccall f_2651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,2)))){
C_save_and_reclaim((void*)f_2651,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+8);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2658,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2665,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* internal.scm:142: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t8;
tp(2,av2);}}

/* k2656 in chicken.internal#macro-subset in k993 */
static void C_ccall f_2658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2658,2,av);}
/* internal.scm:146: fixup-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k2663 in chicken.internal#macro-subset in k993 */
static void C_ccall f_2665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2665,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2667,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2667(t5,((C_word*)t0)[3],t1);}

/* loop in k2663 in chicken.internal#macro-subset in k993 */
static void C_fcall f_2667(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2667,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?t3:C_eqp(t2,((C_word*)t0)[2]));
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2688,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=t2;
t9=C_u_i_cdr(t8);
/* internal.scm:145: loop */
t11=t7;
t12=t9;
t1=t11;
t2=t12;
goto loop;}}

/* k2686 in loop in k2663 in chicken.internal#macro-subset in k993 */
static void C_ccall f_2688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2688,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.internal#fixup-macro-environment in k993 */
static void C_ccall f_2701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_2701,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2708,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
/* internal.scm:149: ##sys#append */
t7=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t2;
f_2708(2,av2);}}}

/* k2706 in chicken.internal#fixup-macro-environment in k993 */
static void C_ccall f_2708(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2708,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2709,a[2]=t2,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
t5=C_i_check_list_2(t4,lf[30]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2748,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2750,a[2]=t8,a[3]=t3,a[4]=((C_word)li15),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_2750(t10,t6,t4);}

/* g670 in k2706 in chicken.internal#fixup-macro-environment in k993 */
static void C_fcall f_2709(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_2709,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2725,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cadr(t2);
if(C_truep(C_i_nullp(t7))){
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_i_set_car(t5,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=t2;
t9=C_u_i_cdr(t8);
t10=C_u_i_car(t9);
/* internal.scm:157: ##sys#append */
t11=*((C_word*)lf[29]+1);{
C_word av2[4];
av2[0]=t11;
av2[1]=t6;
av2[2]=t10;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2723 in g670 in k2706 in chicken.internal#fixup-macro-environment in k993 */
static void C_ccall f_2725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2725,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_set_car(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2746 in k2706 in chicken.internal#fixup-macro-environment in k993 */
static void C_ccall f_2748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2748,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop669 in k2706 in chicken.internal#fixup-macro-environment in k993 */
static void C_fcall f_2750(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2750,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2760,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* internal.scm:150: g670 */
t5=((C_word*)t0)[3];
f_2709(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2758 in for-each-loop669 in k2706 in chicken.internal#fixup-macro-environment in k993 */
static void C_ccall f_2760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2760,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2750(t3,((C_word*)t0)[4],t2);}

/* chicken.internal#hash-symbol in k993 */
static C_word C_fcall f_2782(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;{}
t3=C_eqp(t1,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t3)){
t4=C_fixnum_modulo(((C_word*)((C_word*)t0)[3])[1],t2);
return(t4);}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t5=C_slot(t1,C_fix(1));
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_u_i_string_hash(t5,((C_word*)t0)[4]));
t7=C_fixnum_modulo(((C_word*)((C_word*)t0)[3])[1],t2);
return(t7);}}

/* chicken.internal#hash-table-ref in k993 */
static void C_ccall f_2797(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2797,4,av);}
a=C_alloc(4);
t4=C_block_size(t2);
t5=(
  /* internal.scm:178: hash-symbol */
  f_2782(lf[31],t3,t4)
);
t6=C_slot(t2,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2807,a[2]=t3,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=(
  f_2807(t7,t6)
);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* loop in chicken.internal#hash-table-ref in k993 */
static C_word C_fcall f_2807(C_word t0,C_word t1){
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
t2=C_eqp(C_SCHEME_END_OF_LIST,t1);
if(C_truep(C_i_not(t2))){
t3=C_slot(t1,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=C_slot(t1,C_fix(0));
return(C_slot(t6,C_fix(1)));}
else{
t6=C_slot(t1,C_fix(1));
t8=t6;
t1=t8;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}

/* chicken.internal#hash-table-set! in k993 */
static void C_ccall f_2853(C_word c,C_word *av){
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
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2853,5,av);}
a=C_alloc(11);
t5=C_block_size(t2);
t6=(
  /* internal.scm:185: hash-symbol */
  f_2782(lf[31],t3,t5)
);
t7=t6;
t8=C_slot(t2,t7);
t9=t8;
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2865,a[2]=t3,a[3]=t4,a[4]=t9,a[5]=t2,a[6]=t7,a[7]=t11,a[8]=((C_word)li20),tmp=(C_word)a,a+=9,tmp));
t13=((C_word*)t11)[1];
f_2865(t13,t1,t9);}

/* loop in chicken.internal#hash-table-set! in k993 */
static void C_fcall f_2865(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2865,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_eqp(C_SCHEME_END_OF_LIST,t2);
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[6],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t4=C_slot(t2,C_fix(0));
t5=C_slot(t4,C_fix(0));
t6=C_eqp(((C_word*)t0)[2],t5);
if(C_truep(t6)){
t7=C_slot(t2,C_fix(0));
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_i_setslot(t7,C_fix(1),((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=C_slot(t2,C_fix(1));
/* internal.scm:192: loop */
t9=t1;
t10=t7;
t1=t9;
t2=t10;
goto loop;}}}

/* chicken.internal#hash-table-update! in k993 */
static void C_ccall f_2914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2914,6,av);}
a=C_alloc(10);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2922,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2926,a[2]=t4,a[3]=t6,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* internal.scm:195: hash-table-ref */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[32]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[32]+1);
av2[1]=t7;
av2[2]=t2;
av2[3]=t3;
tp(4,av2);}}

/* k2920 in chicken.internal#hash-table-update! in k993 */
static void C_ccall f_2922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2922,2,av);}
/* internal.scm:195: hash-table-set! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[33]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
tp(5,av2);}}

/* k2924 in chicken.internal#hash-table-update! in k993 */
static void C_ccall f_2926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2926,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2929,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t1;
/* internal.scm:195: updtfunc */
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
/* internal.scm:195: valufunc */
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}}

/* k2927 in k2924 in chicken.internal#hash-table-update! in k993 */
static void C_ccall f_2929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2929,2,av);}
/* internal.scm:195: updtfunc */
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

/* chicken.internal#hash-table-for-each in k993 */
static void C_ccall f_2934(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2934,4,av);}
a=C_alloc(9);
t4=C_block_size(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2940,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=t6,a[6]=((C_word)li25),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_2940(t8,t1,C_fix(0));}

/* doloop722 in chicken.internal#hash-table-for-each in k993 */
static void C_fcall f_2940(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_2940,3,t0,t1,t2);}
a=C_alloc(16);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2948,a[2]=((C_word*)t0)[3],a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
t5=C_i_check_list_2(t4,lf[30]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2969,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2978,a[2]=t8,a[3]=t3,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_2978(t10,t6,t4);}}

/* g728 in doloop722 in chicken.internal#hash-table-for-each in k993 */
static void C_fcall f_2948(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_2948,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
/* internal.scm:201: p */
t5=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}

/* k2967 in doloop722 in chicken.internal#hash-table-for-each in k993 */
static void C_ccall f_2969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2969,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2940(t3,((C_word*)t0)[4],t2);}

/* for-each-loop727 in doloop722 in chicken.internal#hash-table-for-each in k993 */
static void C_fcall f_2978(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2978,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2988,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* internal.scm:201: g728 */
t5=((C_word*)t0)[3];
f_2948(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2986 in for-each-loop727 in doloop722 in chicken.internal#hash-table-for-each in k993 */
static void C_ccall f_2988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2988,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2978(t3,((C_word*)t0)[4],t2);}

/* chicken.internal#hash-table-size in k993 */
static void C_ccall f_3001(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_3001,3,av);}
a=C_alloc(7);
t3=C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3011,a[2]=t5,a[3]=t2,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3011(t7,t1,t3,C_fix(0),C_fix(0));}

/* loop in chicken.internal#hash-table-size in k993 */
static void C_fcall f_3011(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3011,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
t5=C_eqp(t3,t2);
if(C_truep(t5)){
t6=t4;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=C_fixnum_plus(t3,C_fix(1));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3033,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t9=C_slot(((C_word*)t0)[3],t3);
/* internal.scm:208: ##sys#length */
t10=*((C_word*)lf[37]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t8;
av2[2]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}}

/* k3031 in loop in chicken.internal#hash-table-size in k993 */
static void C_ccall f_3033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3033,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],t1);
/* internal.scm:208: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3011(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k993 */
static void C_ccall f_995(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(62,c,6)))){
C_save_and_reclaim((void *)f_995,2,av);}
a=C_alloc(62);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_mutate((C_word*)lf[2]+1 /* (set! chicken.internal#string->c-identifier ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2275,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[8]+1 /* (set! chicken.internal#valid-library-specifier? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2362,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[9]+1 /* (set! chicken.internal#library-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2402,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[19]+1 /* (set! chicken.internal#module-requirement ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2563,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[22]+1 /* (set! chicken.internal#check-for-multiple-bindings ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2577,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[26]+1 /* (set! chicken.internal#macro-subset ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2651,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[27]+1 /* (set! chicken.internal#fixup-macro-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2701,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_rand(C_fix(65536));
t16=C_mutate(&lf[31] /* (set! chicken.internal#hash-symbol ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2782,a[2]=t12,a[3]=t14,a[4]=t15,a[5]=((C_word)li17),tmp=(C_word)a,a+=6,tmp));
t17=C_mutate((C_word*)lf[32]+1 /* (set! chicken.internal#hash-table-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2797,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[33]+1 /* (set! chicken.internal#hash-table-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2853,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[34]+1 /* (set! chicken.internal#hash-table-update! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2914,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[35]+1 /* (set! chicken.internal#hash-table-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2934,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[36]+1 /* (set! chicken.internal#hash-table-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3001,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[38]+1 /* (set! chicken.internal#default-imports ...) */,lf[39]);
t23=C_mutate((C_word*)lf[40]+1 /* (set! chicken.internal#default-syntax-imports ...) */,lf[41]);
t24=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t24;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t24+1)))(2,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_internal_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("internal"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_internal_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(291))){
C_save(t1);
C_rereclaim2(291*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,42);
lf[0]=C_h_intern(&lf[0],8, C_text("internal"));
lf[1]=C_h_intern(&lf[1],17, C_text("chicken.internal#"));
lf[2]=C_h_intern(&lf[2],37, C_text("chicken.internal#string->c-identifier"));
lf[3]=C_h_intern(&lf[3],30, C_text("chicken.base#get-output-string"));
lf[4]=C_h_intern(&lf[4],14, C_text("scheme#display"));
lf[5]=C_h_intern(&lf[5],18, C_text("\003sysfixnum->string"));
lf[6]=C_h_intern(&lf[6],19, C_text("\003syswrite-char/port"));
lf[7]=C_h_intern(&lf[7],31, C_text("chicken.base#open-output-string"));
lf[8]=C_h_intern(&lf[8],41, C_text("chicken.internal#valid-library-specifier\077"));
lf[9]=C_h_intern(&lf[9],27, C_text("chicken.internal#library-id"));
lf[10]=C_h_intern(&lf[10],9, C_text("\003syserror"));
lf[11]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031invalid library specifier"));
lf[12]=C_h_intern(&lf[12],18, C_text("\003syssymbol->string"));
lf[13]=C_h_intern(&lf[13],18, C_text("\003sysnumber->string"));
lf[14]=C_h_intern(&lf[14],17, C_text("\003sysstring-append"));
lf[15]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005srfi-"));
lf[16]=C_h_intern(&lf[16],20, C_text("scheme#string-append"));
lf[17]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[18]=C_h_intern(&lf[18],4, C_text("srfi"));
lf[19]=C_h_intern(&lf[19],35, C_text("chicken.internal#module-requirement"));
lf[20]=C_h_intern(&lf[20],18, C_text("\003sysstring->symbol"));
lf[21]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001#"));
lf[22]=C_h_intern(&lf[22],44, C_text("chicken.internal#check-for-multiple-bindings"));
lf[23]=C_h_intern(&lf[23],8, C_text("\003syswarn"));
lf[24]=C_decode_literal(C_heaptop,C_text("\376B\000\000!variable bound multiple times in "));
lf[25]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012 construct"));
lf[26]=C_h_intern(&lf[26],29, C_text("chicken.internal#macro-subset"));
lf[27]=C_h_intern(&lf[27],40, C_text("chicken.internal#fixup-macro-environment"));
lf[28]=C_h_intern(&lf[28],21, C_text("\003sysmacro-environment"));
lf[29]=C_h_intern(&lf[29],10, C_text("\003sysappend"));
lf[30]=C_h_intern(&lf[30],8, C_text("for-each"));
lf[32]=C_h_intern(&lf[32],31, C_text("chicken.internal#hash-table-ref"));
lf[33]=C_h_intern(&lf[33],32, C_text("chicken.internal#hash-table-set!"));
lf[34]=C_h_intern(&lf[34],35, C_text("chicken.internal#hash-table-update!"));
lf[35]=C_h_intern(&lf[35],36, C_text("chicken.internal#hash-table-for-each"));
lf[36]=C_h_intern(&lf[36],32, C_text("chicken.internal#hash-table-size"));
lf[37]=C_h_intern(&lf[37],10, C_text("\003syslength"));
lf[38]=C_h_intern(&lf[38],32, C_text("chicken.internal#default-imports"));
lf[39]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006scheme\376\003\000\000\002\376\001\000\000\014chicken.base\376\003\000\000\002\376\001\000\000\016chicken.syntax\376\377\016"));
lf[40]=C_h_intern(&lf[40],39, C_text("chicken.internal#default-syntax-imports"));
lf[41]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006scheme\376\003\000\000\002\376\001\000\000\014chicken.base\376\003\000\000\002\376\001\000\000\016chicken.syntax\376\377\016"));
C_register_lf2(lf,42,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_995,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[62] = {
{C_text("f_1372:internal_2escm"),(void*)f_1372},
{C_text("f_1394:internal_2escm"),(void*)f_1394},
{C_text("f_2275:internal_2escm"),(void*)f_2275},
{C_text("f_2279:internal_2escm"),(void*)f_2279},
{C_text("f_2287:internal_2escm"),(void*)f_2287},
{C_text("f_2303:internal_2escm"),(void*)f_2303},
{C_text("f_2313:internal_2escm"),(void*)f_2313},
{C_text("f_2319:internal_2escm"),(void*)f_2319},
{C_text("f_2322:internal_2escm"),(void*)f_2322},
{C_text("f_2329:internal_2escm"),(void*)f_2329},
{C_text("f_2362:internal_2escm"),(void*)f_2362},
{C_text("f_2386:internal_2escm"),(void*)f_2386},
{C_text("f_2402:internal_2escm"),(void*)f_2402},
{C_text("f_2405:internal_2escm"),(void*)f_2405},
{C_text("f_2448:internal_2escm"),(void*)f_2448},
{C_text("f_2500:internal_2escm"),(void*)f_2500},
{C_text("f_2507:internal_2escm"),(void*)f_2507},
{C_text("f_2511:internal_2escm"),(void*)f_2511},
{C_text("f_2526:internal_2escm"),(void*)f_2526},
{C_text("f_2528:internal_2escm"),(void*)f_2528},
{C_text("f_2549:internal_2escm"),(void*)f_2549},
{C_text("f_2553:internal_2escm"),(void*)f_2553},
{C_text("f_2563:internal_2escm"),(void*)f_2563},
{C_text("f_2571:internal_2escm"),(void*)f_2571},
{C_text("f_2577:internal_2escm"),(void*)f_2577},
{C_text("f_2583:internal_2escm"),(void*)f_2583},
{C_text("f_2596:internal_2escm"),(void*)f_2596},
{C_text("f_2599:internal_2escm"),(void*)f_2599},
{C_text("f_2616:internal_2escm"),(void*)f_2616},
{C_text("f_2651:internal_2escm"),(void*)f_2651},
{C_text("f_2658:internal_2escm"),(void*)f_2658},
{C_text("f_2665:internal_2escm"),(void*)f_2665},
{C_text("f_2667:internal_2escm"),(void*)f_2667},
{C_text("f_2688:internal_2escm"),(void*)f_2688},
{C_text("f_2701:internal_2escm"),(void*)f_2701},
{C_text("f_2708:internal_2escm"),(void*)f_2708},
{C_text("f_2709:internal_2escm"),(void*)f_2709},
{C_text("f_2725:internal_2escm"),(void*)f_2725},
{C_text("f_2748:internal_2escm"),(void*)f_2748},
{C_text("f_2750:internal_2escm"),(void*)f_2750},
{C_text("f_2760:internal_2escm"),(void*)f_2760},
{C_text("f_2782:internal_2escm"),(void*)f_2782},
{C_text("f_2797:internal_2escm"),(void*)f_2797},
{C_text("f_2807:internal_2escm"),(void*)f_2807},
{C_text("f_2853:internal_2escm"),(void*)f_2853},
{C_text("f_2865:internal_2escm"),(void*)f_2865},
{C_text("f_2914:internal_2escm"),(void*)f_2914},
{C_text("f_2922:internal_2escm"),(void*)f_2922},
{C_text("f_2926:internal_2escm"),(void*)f_2926},
{C_text("f_2929:internal_2escm"),(void*)f_2929},
{C_text("f_2934:internal_2escm"),(void*)f_2934},
{C_text("f_2940:internal_2escm"),(void*)f_2940},
{C_text("f_2948:internal_2escm"),(void*)f_2948},
{C_text("f_2969:internal_2escm"),(void*)f_2969},
{C_text("f_2978:internal_2escm"),(void*)f_2978},
{C_text("f_2988:internal_2escm"),(void*)f_2988},
{C_text("f_3001:internal_2escm"),(void*)f_3001},
{C_text("f_3011:internal_2escm"),(void*)f_3011},
{C_text("f_3033:internal_2escm"),(void*)f_3033},
{C_text("f_995:internal_2escm"),(void*)f_995},
{C_text("toplevel:internal_2escm"),(void*)C_internal_toplevel},
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
o|hiding unexported module binding: chicken.internal#d 
o|hiding unexported module binding: chicken.internal#define-alias 
o|hiding unexported module binding: chicken.internal#partition 
o|hiding unexported module binding: chicken.internal#span 
o|hiding unexported module binding: chicken.internal#take 
o|hiding unexported module binding: chicken.internal#drop 
o|hiding unexported module binding: chicken.internal#split-at 
o|hiding unexported module binding: chicken.internal#append-map 
o|hiding unexported module binding: chicken.internal#every 
o|hiding unexported module binding: chicken.internal#any 
o|hiding unexported module binding: chicken.internal#cons* 
o|hiding unexported module binding: chicken.internal#concatenate 
o|hiding unexported module binding: chicken.internal#delete 
o|hiding unexported module binding: chicken.internal#first 
o|hiding unexported module binding: chicken.internal#second 
o|hiding unexported module binding: chicken.internal#third 
o|hiding unexported module binding: chicken.internal#fourth 
o|hiding unexported module binding: chicken.internal#fifth 
o|hiding unexported module binding: chicken.internal#delete-duplicates 
o|hiding unexported module binding: chicken.internal#alist-cons 
o|hiding unexported module binding: chicken.internal#filter 
o|hiding unexported module binding: chicken.internal#filter-map 
o|hiding unexported module binding: chicken.internal#remove 
o|hiding unexported module binding: chicken.internal#unzip1 
o|hiding unexported module binding: chicken.internal#last 
o|hiding unexported module binding: chicken.internal#list-index 
o|hiding unexported module binding: chicken.internal#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.internal#lset-difference/eq? 
o|hiding unexported module binding: chicken.internal#lset-union/eq? 
o|hiding unexported module binding: chicken.internal#lset-intersection/eq? 
o|hiding unexported module binding: chicken.internal#list-tabulate 
o|hiding unexported module binding: chicken.internal#lset<=/eq? 
o|hiding unexported module binding: chicken.internal#lset=/eq? 
o|hiding unexported module binding: chicken.internal#length+ 
o|hiding unexported module binding: chicken.internal#find 
o|hiding unexported module binding: chicken.internal#find-tail 
o|hiding unexported module binding: chicken.internal#iota 
o|hiding unexported module binding: chicken.internal#make-list 
o|hiding unexported module binding: chicken.internal#posq 
o|hiding unexported module binding: chicken.internal#posv 
o|hiding unexported module binding: chicken.internal#hash-symbol 
S|applied compiler syntax:
S|  ##sys#for-each		1
S|  for-each		1
S|  foldl		3
S|  map		3
S|  foldr		3
o|eliminated procedure checks: 50 
o|specializations:
o|  2 (scheme#caar (pair pair *))
o|  2 (scheme#cadr (pair * pair))
o|  1 (scheme#number->string fixnum fixnum)
o|  1 (scheme#eqv? * *)
o|  3 (##sys#check-list (or pair list) *)
o|  26 (scheme#cdr pair)
o|  10 (scheme#car pair)
(o e)|safe calls: 286 
o|safe globals: (chicken.internal#default-syntax-imports chicken.internal#default-imports chicken.internal#hash-table-size chicken.internal#hash-table-for-each chicken.internal#hash-table-update! chicken.internal#hash-table-set! chicken.internal#hash-table-ref chicken.internal#hash-symbol chicken.internal#fixup-macro-environment chicken.internal#macro-subset chicken.internal#check-for-multiple-bindings chicken.internal#module-requirement chicken.internal#library-id chicken.internal#valid-library-specifier? chicken.internal#string->c-identifier chicken.internal#posv chicken.internal#posq chicken.internal#make-list chicken.internal#iota chicken.internal#find-tail chicken.internal#find chicken.internal#length+ chicken.internal#lset=/eq? chicken.internal#lset<=/eq? chicken.internal#list-tabulate chicken.internal#lset-intersection/eq? chicken.internal#lset-union/eq? chicken.internal#lset-difference/eq? chicken.internal#lset-adjoin/eq? chicken.internal#list-index chicken.internal#last chicken.internal#unzip1 chicken.internal#remove chicken.internal#filter-map chicken.internal#filter chicken.internal#alist-cons chicken.internal#delete-duplicates chicken.internal#fifth chicken.internal#fourth chicken.internal#third chicken.internal#second chicken.internal#first chicken.internal#delete chicken.internal#concatenate chicken.internal#cons* chicken.internal#any chicken.internal#every chicken.internal#append-map chicken.internal#split-at chicken.internal#drop chicken.internal#take chicken.internal#span chicken.internal#partition) 
o|removed side-effect free assignment to unused variable: chicken.internal#partition 
o|removed side-effect free assignment to unused variable: chicken.internal#span 
o|removed side-effect free assignment to unused variable: chicken.internal#drop 
o|removed side-effect free assignment to unused variable: chicken.internal#split-at 
o|removed side-effect free assignment to unused variable: chicken.internal#append-map 
o|inlining procedure: k1377 
o|inlining procedure: k1377 
o|inlining procedure: k1408 
o|inlining procedure: k1408 
o|removed side-effect free assignment to unused variable: chicken.internal#cons* 
o|removed side-effect free assignment to unused variable: chicken.internal#concatenate 
o|removed side-effect free assignment to unused variable: chicken.internal#first 
o|removed side-effect free assignment to unused variable: chicken.internal#second 
o|removed side-effect free assignment to unused variable: chicken.internal#third 
o|removed side-effect free assignment to unused variable: chicken.internal#fourth 
o|removed side-effect free assignment to unused variable: chicken.internal#fifth 
o|removed side-effect free assignment to unused variable: chicken.internal#delete-duplicates 
o|removed side-effect free assignment to unused variable: chicken.internal#alist-cons 
o|inlining procedure: k1625 
o|inlining procedure: k1625 
o|inlining procedure: k1617 
o|inlining procedure: k1617 
o|removed side-effect free assignment to unused variable: chicken.internal#filter-map 
o|removed side-effect free assignment to unused variable: chicken.internal#remove 
o|removed side-effect free assignment to unused variable: chicken.internal#unzip1 
o|removed side-effect free assignment to unused variable: chicken.internal#last 
o|removed side-effect free assignment to unused variable: chicken.internal#list-index 
o|removed side-effect free assignment to unused variable: chicken.internal#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.internal#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.internal#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.internal#lset-intersection/eq? 
o|inlining procedure: k2016 
o|inlining procedure: k2016 
o|removed side-effect free assignment to unused variable: chicken.internal#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.internal#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.internal#length+ 
o|removed side-effect free assignment to unused variable: chicken.internal#find 
o|removed side-effect free assignment to unused variable: chicken.internal#find-tail 
o|removed side-effect free assignment to unused variable: chicken.internal#iota 
o|removed side-effect free assignment to unused variable: chicken.internal#make-list 
o|removed side-effect free assignment to unused variable: chicken.internal#posq 
o|removed side-effect free assignment to unused variable: chicken.internal#posv 
o|inlining procedure: k2289 
o|inlining procedure: k2289 
o|substituted constant variable: a2331 
o|inlining procedure: k2347 
o|inlining procedure: k2347 
o|inlining procedure: k2367 
o|inlining procedure: k2367 
o|inlining procedure: k2376 
o|inlining procedure: k2391 
o|inlining procedure: k2391 
o|inlining procedure: k2376 
o|inlining procedure: k2450 
o|inlining procedure: k2450 
o|inlining procedure: k2471 
o|inlining procedure: k2471 
o|inlining procedure: k2486 
o|inlining procedure: k2486 
o|inlining procedure: k2530 
o|inlining procedure: k2530 
o|contracted procedure: "(internal.scm:106) srfi?596" 
o|inlining procedure: k2413 
o|inlining procedure: k2425 
o|inlining procedure: k2425 
o|inlining procedure: k2413 
o|inlining procedure: k2588 
o|inlining procedure: k2588 
o|inlining procedure: k2669 
o|inlining procedure: k2669 
o|inlining procedure: k2711 
o|inlining procedure: k2723 
o|inlining procedure: k2723 
o|inlining procedure: k2711 
o|inlining procedure: k2752 
o|inlining procedure: k2752 
o|inlining procedure: k2784 
o|inlining procedure: k2784 
o|inlining procedure: k2809 
o|inlining procedure: k2809 
o|inlining procedure: k2867 
o|inlining procedure: k2867 
o|inlining procedure: k2927 
o|inlining procedure: k2927 
o|inlining procedure: k2942 
o|inlining procedure: k2942 
o|inlining procedure: k2980 
o|inlining procedure: k2980 
o|inlining procedure: k3013 
o|inlining procedure: k3013 
o|replaced variables: 167 
o|removed binding forms: 85 
o|removed side-effect free assignment to unused variable: chicken.internal#any 
o|removed side-effect free assignment to unused variable: chicken.internal#filter 
o|removed side-effect free assignment to unused variable: chicken.internal#list-tabulate 
o|contracted procedure: "(internal.scm:88) chicken.internal#every" 
o|substituted constant variable: r23773059 
o|substituted constant variable: r24263070 
o|substituted constant variable: r24143071 
o|substituted constant variable: r26703074 
o|substituted constant variable: r28103087 
o|replaced variables: 5 
o|removed binding forms: 184 
o|removed binding forms: 14 
o|simplifications: ((if . 3) (##core#call . 105)) 
o|  call simplifications:
o|    ##sys#size
o|    ##sys#setslot	2
o|    ##sys#check-list	2
o|    scheme#set-car!	2
o|    scheme#memq	2
o|    scheme#caar	3
o|    scheme#cons	5
o|    ##sys#slot	21
o|    scheme#pair?	4
o|    scheme#cddr
o|    scheme#eq?	7
o|    scheme#cdr	4
o|    scheme#cadr	2
o|    ##sys#intern-symbol	2
o|    scheme#list?	2
o|    scheme#null?	10
o|    scheme#car	4
o|    scheme#symbol?	4
o|    chicken.base#fixnum?	3
o|    scheme#string-length
o|    chicken.fixnum#fx>=	2
o|    scheme#string-ref
o|    scheme#char-alphabetic?
o|    scheme#char-numeric?
o|    scheme#not	7
o|    chicken.fixnum#fx=	2
o|    scheme#char->integer
o|    chicken.fixnum#fx<
o|    scheme#write-char	3
o|    chicken.fixnum#fx+	4
o|contracted procedure: k2280 
o|contracted procedure: k2292 
o|contracted procedure: k2298 
o|contracted procedure: k2308 
o|contracted procedure: k2314 
o|contracted procedure: k2332 
o|contracted procedure: k2358 
o|contracted procedure: k2341 
o|contracted procedure: k2354 
o|contracted procedure: k2344 
o|contracted procedure: k2364 
o|contracted procedure: k2373 
o|contracted procedure: k2398 
o|contracted procedure: k2379 
o|contracted procedure: k2388 
o|contracted procedure: k1374 
o|contracted procedure: k1383 
o|contracted procedure: k1396 
o|contracted procedure: k2453 
o|contracted procedure: k2462 
o|contracted procedure: k2474 
o|contracted procedure: k2480 
o|contracted procedure: k2559 
o|contracted procedure: k2489 
o|contracted procedure: k2513 
o|contracted procedure: k2520 
o|contracted procedure: k2533 
o|contracted procedure: k2543 
o|contracted procedure: k2444 
o|contracted procedure: k2416 
o|contracted procedure: k2440 
o|contracted procedure: k2422 
o|contracted procedure: k2428 
o|contracted procedure: k2573 
o|contracted procedure: k2585 
o|contracted procedure: k2610 
o|contracted procedure: k2606 
o|contracted procedure: k2630 
o|contracted procedure: k2626 
o|contracted procedure: k2647 
o|contracted procedure: k2633 
o|contracted procedure: k2640 
o|contracted procedure: k2694 
o|contracted procedure: k2653 
o|contracted procedure: k2672 
o|contracted procedure: k2675 
o|contracted procedure: k2682 
o|contracted procedure: k2775 
o|contracted procedure: k2703 
o|contracted procedure: k2740 
o|contracted procedure: k2714 
o|contracted procedure: k2736 
o|contracted procedure: k2726 
o|contracted procedure: k2743 
o|contracted procedure: k2755 
o|contracted procedure: k2765 
o|contracted procedure: k2769 
o|contracted procedure: k2787 
o|contracted procedure: k2793 
o|contracted procedure: k2803 
o|contracted procedure: k2844 
o|contracted procedure: k2812 
o|contracted procedure: k2840 
o|contracted procedure: k2836 
o|contracted procedure: k2818 
o|contracted procedure: k2825 
o|contracted procedure: k2832 
o|contracted procedure: k2858 
o|contracted procedure: k2870 
o|contracted procedure: k2881 
o|contracted procedure: k2877 
o|contracted procedure: k2909 
o|contracted procedure: k2905 
o|contracted procedure: k2887 
o|contracted procedure: k2894 
o|contracted procedure: k2901 
o|contracted procedure: k2945 
o|contracted procedure: k2954 
o|contracted procedure: k2958 
o|contracted procedure: k2961 
o|contracted procedure: k2964 
o|contracted procedure: k2974 
o|contracted procedure: k2983 
o|contracted procedure: k2993 
o|contracted procedure: k2997 
o|contracted procedure: k3007 
o|contracted procedure: k3016 
o|contracted procedure: k3023 
o|contracted procedure: k3027 
o|contracted procedure: k3035 
o|simplifications: ((let . 21)) 
o|removed binding forms: 90 
o|replaced variables: 16 
o|simplifications: ((if . 2)) 
o|removed binding forms: 10 
o|direct leaf routine/allocation: chicken.internal#hash-symbol 0 
o|direct leaf routine/allocation: loop697 0 
o|contracted procedure: "(internal.scm:178) k2848" 
o|converted assignments to bindings: (loop697) 
o|contracted procedure: "(internal.scm:185) k2855" 
o|simplifications: ((let . 1)) 
o|removed binding forms: 2 
o|customizable procedures: (loop747 g728735 for-each-loop727738 doloop722723 loop707 g670677 for-each-loop669680 loop648 k2594 loop621 k2498 library-part->string597 doloop607608 fail595 loop197 k2311 doloop565566) 
o|calls to known targets: 38 
o|identified direct recursive calls: f_2667 1 
o|identified direct recursive calls: f_2807 1 
o|identified direct recursive calls: f_2865 1 
o|fast box initializations: 12 
o|fast global references: 2 
o|fast global assignments: 1 
*/
/* end of file */

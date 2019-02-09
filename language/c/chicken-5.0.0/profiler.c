/* Generated from profiler.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: profiler.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file profiler.c
   unit: profiler
   uses: library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[25];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,6),40,97,51,50,56,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,13),40,97,51,51,55,32,46,32,97,114,103,115,41,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,43),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,112,114,111,102,105,108,101,45,105,110,102,111,32,115,105,122,101,32,102,105,108,101,110,97,109,101,41,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,115,101,116,45,112,114,111,102,105,108,101,45,105,110,102,111,45,118,101,99,116,111,114,33,32,118,101,99,32,105,32,120,41};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,112,114,111,102,105,108,101,45,101,110,116,114,121,32,105,110,100,101,120,32,118,101,99,41,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,112,114,111,102,105,108,101,45,101,120,105,116,32,105,110,100,101,120,32,118,101,99,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,49,53,49,32,105,41,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,51,56,32,103,49,52,53,41,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,6),40,97,52,57,52,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,22),40,35,35,115,121,115,35,102,105,110,105,115,104,45,112,114,111,102,105,108,101,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from cpu-ms */
C_regparm static C_word C_fcall stub103(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_unsigned_int_to_num(&C_a,C_cpu_milliseconds());
return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub79(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word p=(C_word )(C_a0);
C_return(ftell(C_port_file(p)) == 0);
C_ret:
#undef return

return C_r;}

C_noret_decl(f_288)
static void C_ccall f_288(C_word c,C_word *av) C_noret;
C_noret_decl(f_296)
static void C_ccall f_296(C_word c,C_word *av) C_noret;
C_noret_decl(f_300)
static void C_ccall f_300(C_word c,C_word *av) C_noret;
C_noret_decl(f_303)
static void C_ccall f_303(C_word c,C_word *av) C_noret;
C_noret_decl(f_315)
static void C_ccall f_315(C_word c,C_word *av) C_noret;
C_noret_decl(f_318)
static void C_ccall f_318(C_word c,C_word *av) C_noret;
C_noret_decl(f_321)
static void C_ccall f_321(C_word c,C_word *av) C_noret;
C_noret_decl(f_324)
static void C_ccall f_324(C_word c,C_word *av) C_noret;
C_noret_decl(f_329)
static void C_ccall f_329(C_word c,C_word *av) C_noret;
C_noret_decl(f_333)
static void C_ccall f_333(C_word c,C_word *av) C_noret;
C_noret_decl(f_338)
static void C_ccall f_338(C_word c,C_word *av) C_noret;
C_noret_decl(f_342)
static void C_ccall f_342(C_word c,C_word *av) C_noret;
C_noret_decl(f_356)
static void C_ccall f_356(C_word c,C_word *av) C_noret;
C_noret_decl(f_359)
static void C_ccall f_359(C_word c,C_word *av) C_noret;
C_noret_decl(f_372)
static void C_ccall f_372(C_word c,C_word *av) C_noret;
C_noret_decl(f_394)
static void C_fcall f_394(C_word t0,C_word t1) C_noret;
C_noret_decl(f_432)
static void C_ccall f_432(C_word c,C_word *av) C_noret;
C_noret_decl(f_486)
static void C_ccall f_486(C_word c,C_word *av) C_noret;
C_noret_decl(f_490)
static void C_ccall f_490(C_word c,C_word *av) C_noret;
C_noret_decl(f_495)
static void C_ccall f_495(C_word c,C_word *av) C_noret;
C_noret_decl(f_499)
static void C_ccall f_499(C_word c,C_word *av) C_noret;
C_noret_decl(f_509)
static void C_fcall f_509(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_519)
static void C_ccall f_519(C_word c,C_word *av) C_noret;
C_noret_decl(f_522)
static void C_ccall f_522(C_word c,C_word *av) C_noret;
C_noret_decl(f_525)
static void C_ccall f_525(C_word c,C_word *av) C_noret;
C_noret_decl(f_528)
static void C_ccall f_528(C_word c,C_word *av) C_noret;
C_noret_decl(f_531)
static void C_ccall f_531(C_word c,C_word *av) C_noret;
C_noret_decl(f_534)
static void C_ccall f_534(C_word c,C_word *av) C_noret;
C_noret_decl(f_537)
static void C_ccall f_537(C_word c,C_word *av) C_noret;
C_noret_decl(f_540)
static void C_ccall f_540(C_word c,C_word *av) C_noret;
C_noret_decl(f_572)
static void C_fcall f_572(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_582)
static void C_ccall f_582(C_word c,C_word *av) C_noret;
C_noret_decl(f_599)
static void C_ccall f_599(C_word c,C_word *av) C_noret;
C_noret_decl(C_profiler_toplevel)
C_externexport void C_ccall C_profiler_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_394)
static void C_ccall trf_394(C_word c,C_word *av) C_noret;
static void C_ccall trf_394(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_394(t0,t1);}

C_noret_decl(trf_509)
static void C_ccall trf_509(C_word c,C_word *av) C_noret;
static void C_ccall trf_509(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_509(t0,t1,t2);}

C_noret_decl(trf_572)
static void C_ccall trf_572(C_word c,C_word *av) C_noret;
static void C_ccall trf_572(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_572(t0,t1,t2);}

/* k286 */
static void C_ccall f_288(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,5)))){
C_save_and_reclaim((void *)f_288,2,av);}
a=C_alloc(25);
t2=C_a_i_provide(&a,1,lf[0]);
t3=lf[1] /* ##sys#profile-vector-list */ =C_SCHEME_END_OF_LIST;;
t4=lf[2] /* ##sys#profile-name */ =C_SCHEME_FALSE;;
t5=C_set_block_item(lf[3] /* ##sys#profile-append-mode */,0,C_SCHEME_FALSE);
t6=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#register-profile-info ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_296,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[12]+1 /* (set! ##sys#set-profile-info-vector! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_359,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t8=*((C_word*)lf[13]+1);
t9=C_mutate((C_word*)lf[14]+1 /* (set! ##sys#profile-entry ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_372,a[2]=t8,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));
t10=C_mutate((C_word*)lf[15]+1 /* (set! ##sys#profile-exit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_432,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t11=*((C_word*)lf[16]+1);
t12=C_mutate((C_word*)lf[6]+1 /* (set! ##sys#finish-profile ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_486,a[2]=t11,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t13=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}

/* ##sys#register-profile-info in k286 */
static void C_ccall f_296(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_296,4,av);}
a=C_alloc(10);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_300,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_315,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(t3))){
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t3;
f_315(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_356,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_fix((C_word)C_getpid());
/* ##sys#fixnum->string */
t8=*((C_word*)lf[11]+1);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_300(2,av2);}}}

/* k298 in register-profile-info in k286 */
static void C_ccall f_300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_300,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_303,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_fixnum_times(((C_word*)t0)[3],C_fix(5));
/* profiler.scm:74: scheme#make-vector */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k301 in k298 in register-profile-info in k286 */
static void C_ccall f_303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_303,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,lf[1]);
t3=C_mutate(&lf[1] /* (set! ##sys#profile-vector-list ...) */,t2);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k313 in register-profile-info in k286 */
static void C_ccall f_315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_315,2,av);}
a=C_alloc(3);
t2=C_mutate(&lf[2] /* (set! ##sys#profile-name ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_318,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* profiler.scm:63: chicken.base#exit-handler */
t4=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k316 in k313 in register-profile-info in k286 */
static void C_ccall f_318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_318,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_321,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:64: chicken.base#implicit-exit-handler */
t4=*((C_word*)lf[7]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k319 in k316 in k313 in register-profile-info in k286 */
static void C_ccall f_321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_321,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_324,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_338,a[2]=((C_word*)t0)[3],a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:65: chicken.base#exit-handler */
t5=*((C_word*)lf[8]+1);{
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

/* k322 in k319 in k316 in k313 in register-profile-info in k286 */
static void C_ccall f_324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_324,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_329,a[2]=((C_word*)t0)[2],a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:69: chicken.base#implicit-exit-handler */
t3=*((C_word*)lf[7]+1);{
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

/* a328 in k322 in k319 in k316 in k313 in register-profile-info in k286 */
static void C_ccall f_329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_329,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_333,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:71: ##sys#finish-profile */
t3=*((C_word*)lf[6]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k331 in a328 in k322 in k319 in k316 in k313 in register-profile-info in k286 */
static void C_ccall f_333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_333,2,av);}
/* profiler.scm:72: oldieh */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a337 in k319 in k316 in k313 in register-profile-info in k286 */
static void C_ccall f_338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_338,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_342,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* profiler.scm:67: ##sys#finish-profile */
t4=*((C_word*)lf[6]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k340 in a337 in k319 in k316 in k313 in register-profile-info in k286 */
static void C_ccall f_342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_342,2,av);}{
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

/* k354 in register-profile-info in k286 */
static void C_ccall f_356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_356,2,av);}
/* ##sys#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[10];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* ##sys#set-profile-info-vector! in k286 */
static void C_ccall f_359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_359,5,av);}
t5=C_fixnum_times(t3,C_fix(5));
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_i_setslot(t2,t5,t4);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* ##sys#profile-entry in k286 */
static void C_ccall f_372(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_372,4,av);}
a=C_alloc(7);
t4=C_fixnum_times(t2,C_fix(5));
t5=C_u_fixnum_plus(t4,C_fix(1));
t6=C_slot(t3,t5);
t7=C_u_fixnum_plus(t4,C_fix(2));
t8=t7;
t9=C_u_fixnum_plus(t4,C_fix(4));
t10=t9;
t11=C_slot(t3,t10);
t12=t11;
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_394,a[2]=t12,a[3]=t3,a[4]=t8,a[5]=t1,a[6]=t10,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_not(t6))){
t14=t13;
f_394(t14,C_i_set_i_slot(t3,t5,C_SCHEME_FALSE));}
else{
t14=C_eqp(((C_word*)t0)[2],t6);
if(C_truep(t14)){
t15=t13;
f_394(t15,C_i_set_i_slot(t3,t5,C_SCHEME_FALSE));}
else{
t15=C_u_fixnum_plus(t6,C_fix(1));
t16=t13;
f_394(t16,C_i_set_i_slot(t3,t5,t15));}}}

/* k392 in profile-entry in k286 */
static void C_fcall f_394(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,1)))){
C_save_and_reclaim_args((void *)trf_394,2,t0,t1);}
a=C_alloc(8);
t2=C_eqp(C_fix(0),((C_word*)t0)[2]);
if(C_truep(t2)){
t3=C_a_i_bytevector(&a,1,C_fix(6));
t4=stub103(t3);
t5=C_i_setslot(((C_word*)t0)[3],((C_word*)t0)[4],t4);
t6=C_u_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t7=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t7;
av2[1]=C_i_set_i_slot(((C_word*)t0)[3],((C_word*)t0)[6],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t3=C_u_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_set_i_slot(((C_word*)t0)[3],((C_word*)t0)[6],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* ##sys#profile-exit in k286 */
static void C_ccall f_432(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(66,c,1)))){
C_save_and_reclaim((void *)f_432,4,av);}
a=C_alloc(66);
t4=C_fixnum_times(t2,C_fix(5));
t5=C_u_fixnum_plus(t4,C_fix(2));
t6=C_u_fixnum_plus(t4,C_fix(3));
t7=C_u_fixnum_plus(t4,C_fix(4));
t8=C_slot(t3,t7);
t9=C_u_fixnum_difference(t8,C_fix(1));
t10=C_i_set_i_slot(t3,t7,t9);
t11=C_eqp(C_fix(0),t9);
if(C_truep(t11)){
t12=C_slot(t3,t6);
t13=C_eqp(t12,C_fix(0));
t14=(C_truep(t13)?C_fix(0):t12);
t15=C_a_i_bytevector(&a,1,C_fix(6));
t16=stub103(t15);
t17=C_slot(t3,t5);
t18=C_s_a_i_minus(&a,2,t16,t17);
t19=C_s_a_i_plus(&a,2,t14,t18);
t20=t1;{
C_word *av2=av;
av2[0]=t20;
av2[1]=C_i_setslot(t3,t6,t19);
((C_proc)(void*)(*((C_word*)t20+1)))(2,av2);}}
else{
t12=C_SCHEME_UNDEFINED;
t13=t1;{
C_word *av2=av;
av2[0]=t13;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}}

/* ##sys#finish-profile in k286 */
static void C_ccall f_486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_486,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_490,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_debug_modep())){
/* profiler.scm:128: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[23];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[24]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_490(2,av2);}}}

/* k488 in finish-profile in k286 */
static void C_ccall f_490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_490,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_495,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[3]+1))){
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[2];
av2[3]=t2;
av2[4]=lf[21];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* a494 in k488 in finish-profile in k286 */
static void C_ccall f_495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_495,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_499,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=*((C_word*)lf[18]+1);
if(C_truep(stub79(C_SCHEME_UNDEFINED,*((C_word*)lf[18]+1)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_599,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* profiler.scm:133: write */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[20];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_499(2,av2);}}}

/* k497 in a494 in k488 in finish-profile in k286 */
static void C_ccall f_499(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_499,2,av);}
a=C_alloc(6);
t2=lf[1];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_572,a[2]=t4,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_572(t6,((C_word*)t0)[2],lf[1]);}

/* doloop151 in for-each-loop138 in k497 in a494 in k488 in finish-profile in k286 */
static void C_fcall f_509(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_509,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_519,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t4=*((C_word*)lf[17]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_make_character(40);
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k517 in doloop151 in for-each-loop138 in k497 in a494 in k488 in finish-profile in k286 */
static void C_ccall f_519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_519,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_522,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[5],((C_word*)t0)[2]);
/* profiler.scm:141: write */
t4=*((C_word*)lf[19]+1);{
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

/* k520 in k517 in doloop151 in for-each-loop138 in k497 in a494 in k488 in finish-profile in k286 */
static void C_ccall f_522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_522,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_525,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k523 in k520 in k517 in doloop151 in for-each-loop138 in k497 in a494 in k488 in finish-profile in k286 */
static void C_ccall f_525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_525,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_528,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_u_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=C_slot(((C_word*)t0)[5],t3);
/* profiler.scm:143: write */
t5=*((C_word*)lf[19]+1);{
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

/* k526 in k523 in k520 in k517 in doloop151 in for-each-loop138 in k497 in a494 in k488 in finish-profile in k286 */
static void C_ccall f_528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_528,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_531,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k529 in k526 in k523 in k520 in k517 in doloop151 in for-each-loop138 in k497 in a494 in k488 in finish-profile in k286 */
static void C_ccall f_531(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_531,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_534,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_u_fixnum_plus(((C_word*)t0)[2],C_fix(3));
t4=C_slot(((C_word*)t0)[5],t3);
/* profiler.scm:145: write */
t5=*((C_word*)lf[19]+1);{
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

/* k532 in k529 in k526 in k523 in k520 in k517 in doloop151 in for-each-loop138 in k497 in a494 in k488 in finish-profile in k286 */
static void C_ccall f_534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_534,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_537,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(41);
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k535 in k532 in k529 in k526 in k523 in k520 in k517 in doloop151 in for-each-loop138 in k497 in a494 in k488 in finish-profile in k286 */
static void C_ccall f_537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_537,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_540,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in doloop151 in for-each-loop138 in k497 in a494 in k488 in finish-profile in k286 */
static void C_ccall f_540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_540,2,av);}
t2=C_u_fixnum_plus(((C_word*)t0)[2],C_fix(5));
t3=((C_word*)((C_word*)t0)[3])[1];
f_509(t3,((C_word*)t0)[4],t2);}

/* for-each-loop138 in k497 in a494 in k488 in finish-profile in k286 */
static void C_fcall f_572(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_572,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_582,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=C_block_size(t5);
t7=t6;
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_509,a[2]=t7,a[3]=t9,a[4]=t5,a[5]=((C_word)li6),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_509(t11,t3,C_fix(0));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k580 in for-each-loop138 in k497 in a494 in k488 in finish-profile in k286 */
static void C_ccall f_582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_582,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_572(t3,((C_word*)t0)[4],t2);}

/* k597 in a494 in k488 in finish-profile in k286 */
static void C_ccall f_599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_599,2,av);}
/* write-char/port */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_profiler_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("profiler"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_profiler_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(147))){
C_save(t1);
C_rereclaim2(147*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,25);
lf[0]=C_h_intern(&lf[0],8, C_text("profiler"));
lf[3]=C_h_intern(&lf[3],23, C_text("\003sysprofile-append-mode"));
lf[4]=C_h_intern(&lf[4],25, C_text("\003sysregister-profile-info"));
lf[5]=C_h_intern(&lf[5],18, C_text("scheme#make-vector"));
lf[6]=C_h_intern(&lf[6],18, C_text("\003sysfinish-profile"));
lf[7]=C_h_intern(&lf[7],34, C_text("chicken.base#implicit-exit-handler"));
lf[8]=C_h_intern(&lf[8],25, C_text("chicken.base#exit-handler"));
lf[9]=C_h_intern(&lf[9],17, C_text("\003sysstring-append"));
lf[10]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010PROFILE."));
lf[11]=C_h_intern(&lf[11],18, C_text("\003sysfixnum->string"));
lf[12]=C_h_intern(&lf[12],28, C_text("\003sysset-profile-info-vector!"));
lf[13]=C_h_intern(&lf[13],35, C_text("chicken.fixnum#most-positive-fixnum"));
lf[14]=C_h_intern(&lf[14],17, C_text("\003sysprofile-entry"));
lf[15]=C_h_intern(&lf[15],16, C_text("\003sysprofile-exit"));
lf[16]=C_h_intern(&lf[16],26, C_text("scheme#with-output-to-file"));
lf[17]=C_h_intern(&lf[17],19, C_text("\003syswrite-char/port"));
lf[18]=C_h_intern(&lf[18],19, C_text("\003sysstandard-output"));
lf[19]=C_h_intern(&lf[19],12, C_text("scheme#write"));
lf[20]=C_h_intern(&lf[20],12, C_text("instrumented"));
lf[21]=C_h_intern(&lf[21],7, C_text("\000append"));
lf[22]=C_h_intern(&lf[22],9, C_text("\003sysprint"));
lf[23]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033[debug] writing profile...\012"));
lf[24]=C_h_intern(&lf[24],18, C_text("\003sysstandard-error"));
C_register_lf2(lf,25,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_288,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[35] = {
{C_text("f_288:profiler_2escm"),(void*)f_288},
{C_text("f_296:profiler_2escm"),(void*)f_296},
{C_text("f_300:profiler_2escm"),(void*)f_300},
{C_text("f_303:profiler_2escm"),(void*)f_303},
{C_text("f_315:profiler_2escm"),(void*)f_315},
{C_text("f_318:profiler_2escm"),(void*)f_318},
{C_text("f_321:profiler_2escm"),(void*)f_321},
{C_text("f_324:profiler_2escm"),(void*)f_324},
{C_text("f_329:profiler_2escm"),(void*)f_329},
{C_text("f_333:profiler_2escm"),(void*)f_333},
{C_text("f_338:profiler_2escm"),(void*)f_338},
{C_text("f_342:profiler_2escm"),(void*)f_342},
{C_text("f_356:profiler_2escm"),(void*)f_356},
{C_text("f_359:profiler_2escm"),(void*)f_359},
{C_text("f_372:profiler_2escm"),(void*)f_372},
{C_text("f_394:profiler_2escm"),(void*)f_394},
{C_text("f_432:profiler_2escm"),(void*)f_432},
{C_text("f_486:profiler_2escm"),(void*)f_486},
{C_text("f_490:profiler_2escm"),(void*)f_490},
{C_text("f_495:profiler_2escm"),(void*)f_495},
{C_text("f_499:profiler_2escm"),(void*)f_499},
{C_text("f_509:profiler_2escm"),(void*)f_509},
{C_text("f_519:profiler_2escm"),(void*)f_519},
{C_text("f_522:profiler_2escm"),(void*)f_522},
{C_text("f_525:profiler_2escm"),(void*)f_525},
{C_text("f_528:profiler_2escm"),(void*)f_528},
{C_text("f_531:profiler_2escm"),(void*)f_531},
{C_text("f_534:profiler_2escm"),(void*)f_534},
{C_text("f_537:profiler_2escm"),(void*)f_537},
{C_text("f_540:profiler_2escm"),(void*)f_540},
{C_text("f_572:profiler_2escm"),(void*)f_572},
{C_text("f_582:profiler_2escm"),(void*)f_582},
{C_text("f_599:profiler_2escm"),(void*)f_599},
{C_text("toplevel:profiler_2escm"),(void*)C_profiler_toplevel},
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
S|  for-each		1
o|eliminated procedure checks: 19 
o|specializations:
o|  1 (scheme#current-output-port)
o|  1 (##sys#debug-mode?)
o|  1 (scheme#+ * *)
o|  1 (scheme#- * *)
o|  1 (scheme#string-append string string)
o|  1 (scheme#number->string fixnum)
(o e)|safe calls: 62 
(o e)|assignments to immediate values: 1 
o|substituted constant variable: a352 
o|inlining procedure: "(profiler.scm:102) cpu-ms" 
o|inlining procedure: k416 
o|inlining procedure: k416 
o|inlining procedure: k452 
o|inlining procedure: "(profiler.scm:117) cpu-ms" 
o|inlining procedure: k452 
o|inlining procedure: k511 
o|inlining procedure: k511 
o|inlining procedure: k574 
o|inlining procedure: k574 
o|propagated global variable: g145148 ##sys#profile-vector-list 
o|contracted procedure: "(profiler.scm:132) empty-file?" 
o|propagated global variable: p7881 ##sys#standard-output 
o|inlining procedure: k604 
o|inlining procedure: k604 
o|replaced variables: 37 
o|removed binding forms: 34 
o|removed side-effect free assignment to unused variable: cpu-ms 
o|substituted constant variable: r417612 
o|substituted constant variable: r417612 
o|inlining procedure: k416 
o|contracted procedure: "(profiler.scm:135) g139147" 
o|substituted constant variable: r605624 
o|substituted constant variable: r605624 
o|substituted constant variable: r605626 
o|substituted constant variable: r605626 
o|replaced variables: 3 
o|removed binding forms: 42 
o|inlining procedure: k412 
o|substituted constant variable: r417628 
o|removed binding forms: 11 
o|contracted procedure: k471 
o|contracted procedure: k594 
o|simplifications: ((let . 1)) 
o|removed binding forms: 4 
o|simplifications: ((if . 1) (##core#call . 53)) 
o|  call simplifications:
o|    scheme#pair?
o|    ##sys#size
o|    chicken.fixnum#fx>=
o|    scheme#write-char	6
o|    chicken.fixnum#fx-
o|    ##sys#slot	10
o|    scheme#not
o|    scheme#eq?	4
o|    chicken.fixnum#fx+	11
o|    ##sys#setislot	5
o|    ##sys#setslot	3
o|    scheme#string?
o|    scheme#apply	3
o|    chicken.fixnum#fx*	4
o|    scheme#cons
o|contracted procedure: k305 
o|contracted procedure: k309 
o|contracted procedure: k346 
o|contracted procedure: k365 
o|contracted procedure: k374 
o|contracted procedure: k377 
o|contracted procedure: k380 
o|contracted procedure: k383 
o|contracted procedure: k386 
o|contracted procedure: k389 
o|contracted procedure: k402 
o|contracted procedure: k405 
o|contracted procedure: k419 
o|contracted procedure: k425 
o|contracted procedure: k416 
o|contracted procedure: k434 
o|contracted procedure: k437 
o|contracted procedure: k440 
o|contracted procedure: k443 
o|contracted procedure: k482 
o|contracted procedure: k446 
o|contracted procedure: k449 
o|contracted procedure: k455 
o|contracted procedure: k458 
o|contracted procedure: k478 
o|contracted procedure: k466 
o|contracted procedure: k475 
o|contracted procedure: k577 
o|contracted procedure: k587 
o|contracted procedure: k591 
o|contracted procedure: k502 
o|contracted procedure: k514 
o|contracted procedure: k545 
o|contracted procedure: k553 
o|contracted procedure: k549 
o|contracted procedure: k561 
o|contracted procedure: k557 
o|contracted procedure: k565 
o|simplifications: ((let . 4)) 
o|removed binding forms: 38 
o|inlining procedure: k395 
o|inlining procedure: k395 
o|replaced variables: 27 
o|removed binding forms: 15 
o|customizable procedures: (doloop151152 for-each-loop138163 k392) 
o|calls to known targets: 11 
o|fast box initializations: 2 
o|fast global references: 5 
o|fast global assignments: 4 
*/
/* end of file */

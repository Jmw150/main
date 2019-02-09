/* Generated from profiler.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: profiler.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file profiler.c
   unit: profiler
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[25];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,6),40,97,52,48,48,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,15),40,97,52,48,57,32,46,32,97,114,103,115,55,54,41,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,47),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,112,114,111,102,105,108,101,45,105,110,102,111,32,115,105,122,101,55,50,32,102,105,108,101,110,97,109,101,55,51,41,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,46),40,35,35,115,121,115,35,115,101,116,45,112,114,111,102,105,108,101,45,105,110,102,111,45,118,101,99,116,111,114,33,32,118,101,99,56,53,32,105,56,54,32,120,56,55,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,112,114,111,102,105,108,101,45,101,110,116,114,121,32,105,110,100,101,120,57,52,32,118,101,99,57,53,41,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,112,114,111,102,105,108,101,45,101,120,105,116,32,105,110,100,101,120,49,48,57,32,118,101,99,49,49,48,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,49,51,55,32,105,49,51,57,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,50,53,32,103,49,51,50,49,53,48,41,0,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,6),40,97,53,55,49,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,22),40,35,35,115,121,115,35,102,105,110,105,115,104,45,112,114,111,102,105,108,101,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from cpu-ms */
C_regparm static C_word C_fcall stub89(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_flonum(&C_a,C_cpu_milliseconds());
return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub65(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word p=(C_word )(C_a0);
C_return(ftell(C_port_file(p)) == 0);
C_ret:
#undef return

return C_r;}

C_noret_decl(f_401)
static void C_ccall f_401(C_word c,C_word *av) C_noret;
C_noret_decl(f_405)
static void C_ccall f_405(C_word c,C_word *av) C_noret;
C_noret_decl(f_676)
static void C_ccall f_676(C_word c,C_word *av) C_noret;
C_noret_decl(f_586)
static void C_fcall f_586(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_572)
static void C_ccall f_572(C_word c,C_word *av) C_noret;
C_noret_decl(f_576)
static void C_ccall f_576(C_word c,C_word *av) C_noret;
C_noret_decl(f_465)
static void C_fcall f_465(C_word t0,C_word t1) C_noret;
C_noret_decl(f_608)
static void C_ccall f_608(C_word c,C_word *av) C_noret;
C_noret_decl(f_503)
static void C_ccall f_503(C_word c,C_word *av) C_noret;
C_noret_decl(f_605)
static void C_ccall f_605(C_word c,C_word *av) C_noret;
C_noret_decl(f_602)
static void C_ccall f_602(C_word c,C_word *av) C_noret;
C_noret_decl(f_617)
static void C_ccall f_617(C_word c,C_word *av) C_noret;
C_noret_decl(f_410)
static void C_ccall f_410(C_word c,C_word *av) C_noret;
C_noret_decl(f_414)
static void C_ccall f_414(C_word c,C_word *av) C_noret;
C_noret_decl(f_611)
static void C_ccall f_611(C_word c,C_word *av) C_noret;
C_noret_decl(f_614)
static void C_ccall f_614(C_word c,C_word *av) C_noret;
C_noret_decl(f_563)
static void C_ccall f_563(C_word c,C_word *av) C_noret;
C_noret_decl(f_387)
static void C_ccall f_387(C_word c,C_word *av) C_noret;
C_noret_decl(f_567)
static void C_ccall f_567(C_word c,C_word *av) C_noret;
C_noret_decl(C_profiler_toplevel)
C_externexport void C_ccall C_profiler_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_396)
static void C_ccall f_396(C_word c,C_word *av) C_noret;
C_noret_decl(f_430)
static void C_ccall f_430(C_word c,C_word *av) C_noret;
C_noret_decl(f_390)
static void C_ccall f_390(C_word c,C_word *av) C_noret;
C_noret_decl(f_393)
static void C_ccall f_393(C_word c,C_word *av) C_noret;
C_noret_decl(f_428)
static void C_ccall f_428(C_word c,C_word *av) C_noret;
C_noret_decl(f_443)
static void C_ccall f_443(C_word c,C_word *av) C_noret;
C_noret_decl(f_368)
static void C_ccall f_368(C_word c,C_word *av) C_noret;
C_noret_decl(f_649)
static void C_fcall f_649(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_596)
static void C_ccall f_596(C_word c,C_word *av) C_noret;
C_noret_decl(f_599)
static void C_ccall f_599(C_word c,C_word *av) C_noret;
C_noret_decl(f_372)
static void C_ccall f_372(C_word c,C_word *av) C_noret;
C_noret_decl(f_375)
static void C_ccall f_375(C_word c,C_word *av) C_noret;
C_noret_decl(f_659)
static void C_ccall f_659(C_word c,C_word *av) C_noret;

C_noret_decl(trf_586)
static void C_ccall trf_586(C_word c,C_word *av) C_noret;
static void C_ccall trf_586(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_586(t0,t1,t2);}

C_noret_decl(trf_465)
static void C_ccall trf_465(C_word c,C_word *av) C_noret;
static void C_ccall trf_465(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_465(t0,t1);}

C_noret_decl(trf_649)
static void C_ccall trf_649(C_word c,C_word *av) C_noret;
static void C_ccall trf_649(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_649(t0,t1,t2);}

/* a400 in k394 in k391 in k388 in k385 in register-profile-info */
static void C_ccall f_401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_401,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_405,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:69: ##sys#finish-profile */
t3=*((C_word*)lf[5]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k403 in a400 in k394 in k391 in k388 in k385 in register-profile-info */
static void C_ccall f_405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_405,2,av);}
/* profiler.scm:70: oldieh */
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k674 in a571 in k565 in finish-profile */
static void C_ccall f_676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_676,2,av);}
/* write-char/port */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* doloop137 in for-each-loop125 in k574 in a571 in k565 in finish-profile */
static void C_fcall f_586(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_586,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_596,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t4=*((C_word*)lf[17]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_make_character(40);
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* a571 in k565 in finish-profile */
static void C_ccall f_572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_572,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_576,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=*((C_word*)lf[18]+1);
if(C_truep(stub65(C_SCHEME_UNDEFINED,*((C_word*)lf[18]+1)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_676,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* profiler.scm:130: write */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[20];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_576(2,av2);}}}

/* k574 in a571 in k565 in finish-profile */
static void C_ccall f_576(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_576,2,av);}
a=C_alloc(6);
t2=lf[0];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_649,a[2]=t4,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_649(t6,((C_word*)t0)[2],lf[0]);}

/* k463 in profile-entry */
static void C_fcall f_465(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,1)))){
C_save_and_reclaim_args((void *)trf_465,2,t0,t1);}
a=C_alloc(6);
t2=C_eqp(C_fix(0),((C_word*)t0)[2]);
if(C_truep(t2)){
t3=C_a_i_bytevector(&a,1,C_fix(4));
t4=stub89(t3);
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

/* k606 in k603 in k600 in k597 in k594 in doloop137 in for-each-loop125 in k574 in a571 in k565 in finish-profile */
static void C_ccall f_608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_608,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_611,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_u_fixnum_plus(((C_word*)t0)[2],C_fix(3));
t4=C_slot(((C_word*)t0)[5],t3);
/* profiler.scm:142: write */
t5=*((C_word*)lf[19]+1);{
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

/* ##sys#profile-exit */
static void C_ccall f_503(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,1)))){
C_save_and_reclaim((void *)f_503,4,av);}
a=C_alloc(14);
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
t14=(C_truep(t13)?lf[15]:t12);
t15=C_a_i_bytevector(&a,1,C_fix(4));
t16=stub89(t15);
t17=C_slot(t3,t5);
t18=C_a_i_flonum_difference(&a,2,t16,t17);
t19=C_a_i_flonum_plus(&a,2,t14,t18);
t20=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t20;
av2[1]=C_i_setslot(t3,t6,t19);
((C_proc)(void*)(*((C_word*)t20+1)))(2,av2);}}
else{
t12=C_SCHEME_UNDEFINED;
t13=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}}

/* k603 in k600 in k597 in k594 in doloop137 in for-each-loop125 in k574 in a571 in k565 in finish-profile */
static void C_ccall f_605(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_605,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_608,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k600 in k597 in k594 in doloop137 in for-each-loop125 in k574 in a571 in k565 in finish-profile */
static void C_ccall f_602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_602,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_605,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_u_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=C_slot(((C_word*)t0)[5],t3);
/* profiler.scm:140: write */
t5=*((C_word*)lf[19]+1);{
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

/* k615 in k612 in k609 in k606 in k603 in k600 in k597 in k594 in doloop137 in for-each-loop125 in k574 in a571 in k565 in finish-profile */
static void C_ccall f_617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_617,2,av);}
t2=C_u_fixnum_plus(((C_word*)t0)[2],C_fix(5));
t3=((C_word*)((C_word*)t0)[3])[1];
f_586(t3,((C_word*)t0)[4],t2);}

/* a409 in k391 in k388 in k385 in register-profile-info */
static void C_ccall f_410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_410,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_414,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* profiler.scm:65: ##sys#finish-profile */
t4=*((C_word*)lf[5]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k412 in a409 in k391 in k388 in k385 in register-profile-info */
static void C_ccall f_414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_414,2,av);}{
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

/* k609 in k606 in k603 in k600 in k597 in k594 in doloop137 in for-each-loop125 in k574 in a571 in k565 in finish-profile */
static void C_ccall f_611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_611,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_614,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(41);
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k612 in k609 in k606 in k603 in k600 in k597 in k594 in doloop137 in for-each-loop125 in k574 in a571 in k565 in finish-profile */
static void C_ccall f_614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_614,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_617,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* ##sys#finish-profile */
static void C_ccall f_563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_563,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_567,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fudge(C_fix(13)))){
/* profiler.scm:125: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_567(2,av2);}}}

/* k385 in register-profile-info */
static void C_ccall f_387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_387,2,av);}
a=C_alloc(3);
t2=C_mutate2(&lf[1] /* (set! ##sys#profile-name ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_390,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* profiler.scm:61: ##sys#exit-handler */
t4=*((C_word*)lf[7]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k565 in finish-profile */
static void C_ccall f_567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_567,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_572,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[2]+1))){
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[1];
av2[3]=t2;
av2[4]=lf[21];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[1];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_profiler_toplevel(C_word c,C_word *av){
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
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("profiler_toplevel"));
C_check_nursery_minimum(C_calculate_demand(17,c,5));
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void*)C_profiler_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(144))){
C_save(t1);
C_rereclaim2(144*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(17);
C_initialize_lf(lf,25);
lf[2]=C_h_intern(&lf[2],23,"\003sysprofile-append-mode");
lf[3]=C_h_intern(&lf[3],25,"\003sysregister-profile-info");
lf[4]=C_h_intern(&lf[4],11,"make-vector");
lf[5]=C_h_intern(&lf[5],18,"\003sysfinish-profile");
lf[6]=C_h_intern(&lf[6],25,"\003sysimplicit-exit-handler");
lf[7]=C_h_intern(&lf[7],16,"\003sysexit-handler");
lf[8]=C_h_intern(&lf[8],17,"\003sysstring-append");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000\010PROFILE.");
lf[10]=C_h_intern(&lf[10],14,"number->string");
lf[11]=C_h_intern(&lf[11],28,"\003sysset-profile-info-vector!");
lf[12]=C_h_intern(&lf[12],20,"most-positive-fixnum");
lf[13]=C_h_intern(&lf[13],17,"\003sysprofile-entry");
lf[14]=C_h_intern(&lf[14],16,"\003sysprofile-exit");
lf[15]=C_decode_literal(C_heaptop,"\376U0.0\000");
lf[16]=C_h_intern(&lf[16],19,"with-output-to-file");
lf[17]=C_h_intern(&lf[17],19,"\003syswrite-char/port");
lf[18]=C_h_intern(&lf[18],19,"\003sysstandard-output");
lf[19]=C_h_intern(&lf[19],5,"write");
lf[20]=C_h_intern(&lf[20],12,"instrumented");
lf[21]=C_h_intern(&lf[21],7,"\000append");
lf[22]=C_h_intern(&lf[22],9,"\003sysprint");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\000\033[debug] writing profile...\012");
lf[24]=C_h_intern(&lf[24],18,"\003sysstandard-error");
C_register_lf2(lf,25,create_ptable());{}
t2=lf[0] /* ##sys#profile-vector-list */ =C_SCHEME_END_OF_LIST;;
t3=lf[1] /* ##sys#profile-name */ =C_SCHEME_FALSE;;
t4=C_set_block_item(lf[2] /* ##sys#profile-append-mode */,0,C_SCHEME_FALSE);
t5=C_mutate2((C_word*)lf[3]+1 /* (set! ##sys#register-profile-info ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_368,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[11]+1 /* (set! ##sys#set-profile-info-vector! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_430,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t7=*((C_word*)lf[12]+1);
t8=C_mutate2((C_word*)lf[13]+1 /* (set! ##sys#profile-entry ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_443,a[2]=t7,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate2((C_word*)lf[14]+1 /* (set! ##sys#profile-exit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_503,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t10=*((C_word*)lf[16]+1);
t11=C_mutate2((C_word*)lf[5]+1 /* (set! ##sys#finish-profile ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_563,a[2]=t10,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}

/* k394 in k391 in k388 in k385 in register-profile-info */
static void C_ccall f_396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_396,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_401,a[2]=((C_word*)t0)[2],a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:67: ##sys#implicit-exit-handler */
t3=*((C_word*)lf[6]+1);{
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

/* ##sys#set-profile-info-vector! */
static void C_ccall f_430(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_430,5,av);}
t5=C_fixnum_times(t3,C_fix(5));
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_i_setslot(t2,t5,t4);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k388 in k385 in register-profile-info */
static void C_ccall f_390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_390,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_393,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:62: ##sys#implicit-exit-handler */
t4=*((C_word*)lf[6]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k391 in k388 in k385 in register-profile-info */
static void C_ccall f_393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_393,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_396,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_410,a[2]=((C_word*)t0)[3],a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:63: ##sys#exit-handler */
t5=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k426 in register-profile-info */
static void C_ccall f_428(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_428,2,av);}
/* ##sys#string-append */
t2=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[9];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* ##sys#profile-entry */
static void C_ccall f_443(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_443,4,av);}
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
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_465,a[2]=t12,a[3]=t3,a[4]=t8,a[5]=t1,a[6]=t10,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t14=C_eqp(((C_word*)t0)[2],t6);
if(C_truep(t14)){
t15=t13;
f_465(t15,C_i_set_i_slot(t3,t5,C_SCHEME_FALSE));}
else{
t15=C_u_fixnum_plus(t6,C_fix(1));
t16=t13;
f_465(t16,C_i_set_i_slot(t3,t5,t15));}}
else{
t14=t13;
f_465(t14,C_i_set_i_slot(t3,t5,C_SCHEME_FALSE));}}

/* ##sys#register-profile-info */
static void C_ccall f_368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_368,4,av);}
a=C_alloc(10);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_372,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_387,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(t3))){
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t3;
f_387(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_428,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* profiler.scm:60: number->string */
t7=*((C_word*)lf[10]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
av2[2]=C_fix((C_word)C_getpid());
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_372(2,av2);}}}

/* for-each-loop125 in k574 in a571 in k565 in finish-profile */
static void C_fcall f_649(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_649,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_659,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=C_block_size(t5);
t7=t6;
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_586,a[2]=t7,a[3]=t9,a[4]=t5,a[5]=((C_word)li6),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_586(t11,t3,C_fix(0));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k594 in doloop137 in for-each-loop125 in k574 in a571 in k565 in finish-profile */
static void C_ccall f_596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_596,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_599,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[5],((C_word*)t0)[2]);
/* profiler.scm:138: write */
t4=*((C_word*)lf[19]+1);{
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

/* k597 in k594 in doloop137 in for-each-loop125 in k574 in a571 in k565 in finish-profile */
static void C_ccall f_599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_599,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_602,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k370 in register-profile-info */
static void C_ccall f_372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_372,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_375,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_fixnum_times(((C_word*)t0)[3],C_fix(5));
/* profiler.scm:72: make-vector */
t4=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k373 in k370 in register-profile-info */
static void C_ccall f_375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_375,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,lf[0]);
t3=C_mutate2(&lf[0] /* (set! ##sys#profile-vector-list ...) */,t2);
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k657 in for-each-loop125 in k574 in a571 in k565 in finish-profile */
static void C_ccall f_659(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_659,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_649(t3,((C_word*)t0)[4],t2);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[34] = {
{"f_401:profiler_2escm",(void*)f_401},
{"f_405:profiler_2escm",(void*)f_405},
{"f_676:profiler_2escm",(void*)f_676},
{"f_586:profiler_2escm",(void*)f_586},
{"f_572:profiler_2escm",(void*)f_572},
{"f_576:profiler_2escm",(void*)f_576},
{"f_465:profiler_2escm",(void*)f_465},
{"f_608:profiler_2escm",(void*)f_608},
{"f_503:profiler_2escm",(void*)f_503},
{"f_605:profiler_2escm",(void*)f_605},
{"f_602:profiler_2escm",(void*)f_602},
{"f_617:profiler_2escm",(void*)f_617},
{"f_410:profiler_2escm",(void*)f_410},
{"f_414:profiler_2escm",(void*)f_414},
{"f_611:profiler_2escm",(void*)f_611},
{"f_614:profiler_2escm",(void*)f_614},
{"f_563:profiler_2escm",(void*)f_563},
{"f_387:profiler_2escm",(void*)f_387},
{"f_567:profiler_2escm",(void*)f_567},
{"toplevel:profiler_2escm",(void*)C_profiler_toplevel},
{"f_396:profiler_2escm",(void*)f_396},
{"f_430:profiler_2escm",(void*)f_430},
{"f_390:profiler_2escm",(void*)f_390},
{"f_393:profiler_2escm",(void*)f_393},
{"f_428:profiler_2escm",(void*)f_428},
{"f_443:profiler_2escm",(void*)f_443},
{"f_368:profiler_2escm",(void*)f_368},
{"f_649:profiler_2escm",(void*)f_649},
{"f_596:profiler_2escm",(void*)f_596},
{"f_599:profiler_2escm",(void*)f_599},
{"f_372:profiler_2escm",(void*)f_372},
{"f_375:profiler_2escm",(void*)f_375},
{"f_659:profiler_2escm",(void*)f_659},
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
o|  1 (current-output-port)
o|  1 (string-append string string)
(o e)|safe calls: 49 
(o e)|assignments to immediate values: 1 
o|Removed `not' forms: 1 
o|substituted constant variable: a424 
o|inlining procedure: "(profiler.scm:99) cpu-ms" 
o|contracted procedure: k490 
o|inlining procedure: k487 
o|inlining procedure: k487 
o|inlining procedure: k523 
o|inlining procedure: "(profiler.scm:114) cpu-ms" 
o|inlining procedure: k523 
o|inlining procedure: k588 
o|inlining procedure: k588 
o|inlining procedure: k651 
o|inlining procedure: k651 
o|propagated global variable: g132134 ##sys#profile-vector-list 
o|contracted procedure: "(profiler.scm:129) empty-file?" 
o|propagated global variable: p6467 ##sys#standard-output 
o|inlining procedure: k681 
o|inlining procedure: k681 
o|replaced variables: 39 
o|removed binding forms: 34 
o|removed side-effect free assignment to unused variable: cpu-ms 
o|inlining procedure: k487 
o|substituted constant variable: r488694 
o|substituted constant variable: r488694 
o|contracted procedure: "(profiler.scm:132) g126133" 
o|substituted constant variable: r682704 
o|substituted constant variable: r682704 
o|substituted constant variable: r682706 
o|substituted constant variable: r682706 
o|replaced variables: 4 
o|removed binding forms: 44 
o|inlining procedure: k483 
o|substituted constant variable: r488708 
o|removed binding forms: 12 
o|contracted procedure: k548 
o|contracted procedure: k671 
o|simplifications: ((let . 1)) 
o|removed binding forms: 4 
o|simplifications: ((if . 1) (##core#call . 55)) 
o|  call simplifications:
o|    ##sys#fudge
o|    pair?
o|    ##sys#size
o|    fx>=
o|    write-char	6
o|    fx-
o|    fp-
o|    fp+
o|    ##sys#slot	10
o|    eq?	4
o|    fx+	11
o|    ##sys#setislot	5
o|    ##sys#setslot	3
o|    string?
o|    apply	3
o|    fx*	4
o|    cons
o|contracted procedure: k377 
o|contracted procedure: k381 
o|contracted procedure: k418 
o|contracted procedure: k436 
o|contracted procedure: k445 
o|contracted procedure: k448 
o|contracted procedure: k451 
o|contracted procedure: k454 
o|contracted procedure: k457 
o|contracted procedure: k460 
o|contracted procedure: k473 
o|contracted procedure: k476 
o|contracted procedure: k496 
o|contracted procedure: k487 
o|contracted procedure: k505 
o|contracted procedure: k508 
o|contracted procedure: k511 
o|contracted procedure: k514 
o|contracted procedure: k559 
o|contracted procedure: k517 
o|contracted procedure: k520 
o|contracted procedure: k526 
o|contracted procedure: k529 
o|contracted procedure: k555 
o|contracted procedure: k540 
o|contracted procedure: k552 
o|contracted procedure: k544 
o|contracted procedure: k536 
o|contracted procedure: k654 
o|contracted procedure: k664 
o|contracted procedure: k668 
o|contracted procedure: k579 
o|contracted procedure: k591 
o|contracted procedure: k622 
o|contracted procedure: k630 
o|contracted procedure: k626 
o|contracted procedure: k638 
o|contracted procedure: k634 
o|contracted procedure: k642 
o|contracted procedure: k684 
o|simplifications: ((let . 4)) 
o|removed binding forms: 40 
o|inlining procedure: k466 
o|inlining procedure: k466 
o|replaced variables: 27 
o|removed binding forms: 15 
o|customizable procedures: (doloop137138 for-each-loop125149 k463) 
o|calls to known targets: 11 
o|fast box initializations: 2 
o|fast global references: 5 
o|fast global assignments: 4 
*/
/* end of file */

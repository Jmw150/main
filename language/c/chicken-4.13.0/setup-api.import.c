/* Generated from setup-api.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: setup-api.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file setup-api.import.c
   used units: library eval chicken_2dsyntax
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[23];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,56,53,32,108,56,48,49,48,52,32,108,101,110,56,49,49,48,53,41};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,39),40,97,51,55,51,32,105,110,112,117,116,55,57,57,50,32,114,101,110,97,109,101,56,56,57,51,32,99,111,109,112,97,114,101,55,54,57,52,41,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,12),40,97,52,57,50,32,101,120,112,55,52,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,52,55,32,108,52,50,54,54,32,108,101,110,52,51,54,55,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,39),40,97,52,53,55,32,105,110,112,117,116,52,49,53,52,32,114,101,110,97,109,101,53,48,53,53,32,99,111,109,112,97,114,101,51,56,53,54,41,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,48,32,108,53,50,57,32,108,101,110,54,51,48,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,37),40,97,53,53,49,32,105,110,112,117,116,52,49,55,32,114,101,110,97,109,101,49,51,49,56,32,99,111,109,112,97,114,101,49,49,57,41,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_412)
static void C_ccall f_412(C_word c,C_word *av) C_noret;
C_noret_decl(f_418)
static void C_ccall f_418(C_word c,C_word *av) C_noret;
C_noret_decl(f_493)
static void C_ccall f_493(C_word c,C_word *av) C_noret;
C_noret_decl(f_491)
static void C_ccall f_491(C_word c,C_word *av) C_noret;
C_noret_decl(f_622)
static void C_ccall f_622(C_word c,C_word *av) C_noret;
C_noret_decl(f_346)
static void C_ccall f_346(C_word c,C_word *av) C_noret;
C_noret_decl(f_372)
static void C_ccall f_372(C_word c,C_word *av) C_noret;
C_noret_decl(f_343)
static void C_ccall f_343(C_word c,C_word *av) C_noret;
C_noret_decl(f_340)
static void C_ccall f_340(C_word c,C_word *av) C_noret;
C_noret_decl(f_374)
static void C_ccall f_374(C_word c,C_word *av) C_noret;
C_noret_decl(f_546)
static void C_ccall f_546(C_word c,C_word *av) C_noret;
C_noret_decl(f_423)
static void C_fcall f_423(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_384)
static void C_ccall f_384(C_word c,C_word *av) C_noret;
C_noret_decl(f_349)
static void C_ccall f_349(C_word c,C_word *av) C_noret;
C_noret_decl(f_581)
static void C_ccall f_581(C_word c,C_word *av) C_noret;
C_noret_decl(f_514)
static void C_ccall f_514(C_word c,C_word *av) C_noret;
C_noret_decl(f_511)
static void C_ccall f_511(C_word c,C_word *av) C_noret;
C_noret_decl(f_587)
static void C_ccall f_587(C_word c,C_word *av) C_noret;
C_noret_decl(f_569)
static void C_ccall f_569(C_word c,C_word *av) C_noret;
C_noret_decl(f_430)
static void C_ccall f_430(C_word c,C_word *av) C_noret;
C_noret_decl(f_468)
static void C_ccall f_468(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_552)
static void C_ccall f_552(C_word c,C_word *av) C_noret;
C_noret_decl(f_562)
static void C_ccall f_562(C_word c,C_word *av) C_noret;
C_noret_decl(f_550)
static void C_ccall f_550(C_word c,C_word *av) C_noret;
C_noret_decl(f_444)
static void C_ccall f_444(C_word c,C_word *av) C_noret;
C_noret_decl(f_475)
static void C_ccall f_475(C_word c,C_word *av) C_noret;
C_noret_decl(f_532)
static void C_ccall f_532(C_word c,C_word *av) C_noret;
C_noret_decl(f_456)
static void C_ccall f_456(C_word c,C_word *av) C_noret;
C_noret_decl(f_487)
static void C_ccall f_487(C_word c,C_word *av) C_noret;
C_noret_decl(f_458)
static void C_ccall f_458(C_word c,C_word *av) C_noret;
C_noret_decl(f_501)
static void C_ccall f_501(C_word c,C_word *av) C_noret;
C_noret_decl(f_399)
static void C_ccall f_399(C_word c,C_word *av) C_noret;
C_noret_decl(f_391)
static void C_ccall f_391(C_word c,C_word *av) C_noret;
C_noret_decl(f_525)
static void C_fcall f_525(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_520)
static void C_ccall f_520(C_word c,C_word *av) C_noret;
C_noret_decl(f_352)
static void C_ccall f_352(C_word c,C_word *av) C_noret;
C_noret_decl(f_409)
static void C_ccall f_409(C_word c,C_word *av) C_noret;
C_noret_decl(f_601)
static void C_fcall f_601(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_596)
static void C_ccall f_596(C_word c,C_word *av) C_noret;
C_noret_decl(f_608)
static void C_ccall f_608(C_word c,C_word *av) C_noret;
C_noret_decl(f_590)
static void C_ccall f_590(C_word c,C_word *av) C_noret;

C_noret_decl(trf_423)
static void C_ccall trf_423(C_word c,C_word *av) C_noret;
static void C_ccall trf_423(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_423(t0,t1,t2,t3);}

C_noret_decl(trf_525)
static void C_ccall trf_525(C_word c,C_word *av) C_noret;
static void C_ccall trf_525(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_525(t0,t1,t2,t3);}

C_noret_decl(trf_601)
static void C_ccall trf_601(C_word c,C_word *av) C_noret;
static void C_ccall trf_601(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_601(t0,t1,t2,t3);}

/* k410 in k407 in a373 in k454 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_412,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:62: ##sys#>= */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[12]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=C_fix(0);
tp(4,av2);}}

/* k416 in k410 in k407 in a373 in k454 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_418(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_418,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_423,a[2]=t3,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_423(t5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_384(2,av2);}}}

/* a492 in k485 in k473 in k466 in a457 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_493(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_493,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_501,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:60: rename50 */
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[16];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k489 in k485 in k473 in k466 in a457 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_491,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k620 in k606 in loop10 in k594 in k588 in k585 in a551 in k347 in k344 in k341 in k338 */
static void C_ccall f_622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_622,2,av);}
/* setup-api.import.scm:59: loop10 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_601(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k344 in k341 in k338 */
static void C_ccall f_346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_346,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_349,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* setup-api.import.scm:3: eval */
t3=C_fast_retrieve(lf[21]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[22];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k370 in k454 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_372,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,lf[3],t1);
t3=C_a_i_list1(&a,1,t2);
/* setup-api.import.scm:16: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[4]);
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[4]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[6];
av2[5]=((C_word*)t0)[4];
av2[6]=t3;
tp(7,av2);}}

/* k341 in k338 */
static void C_ccall f_343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_343,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_346,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k338 */
static void C_ccall f_340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_340,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_343,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* a373 in k454 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_374(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_374,5,av);}
a=C_alloc(10);
t5=C_i_cdr(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_384,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_409,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:62: ##sys#list? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t8;
av2[2]=t6;
tp(3,av2);}}

/* k544 in k530 in loop47 in k518 in k512 in k509 in a457 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_546,2,av);}
/* setup-api.import.scm:60: loop47 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_525(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop85 in k416 in k410 in k407 in a373 in k454 in k548 in k347 in k344 in k341 in k338 */
static void C_fcall f_423(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_423,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_430,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* setup-api.import.scm:62: ##sys#= */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
tp(4,av2);}}

/* k382 in a373 in k454 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_384,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_391,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:62: rename88 */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[8];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
/* setup-api.import.scm:62: ##sys#syntax-rules-mismatch */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}}

/* k347 in k344 in k341 in k338 */
static void C_ccall f_349(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_349,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_352,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list1(&a,1,lf[0]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_550,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_552,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
/* setup-api.import.scm:59: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t5;
av2[2]=t6;
tp(3,av2);}}

/* k579 in k567 in k560 in a551 in k347 in k344 in k341 in k338 */
static void C_ccall f_581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_581,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k512 in k509 in a457 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_514,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_520,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:60: ##sys#>= */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[12]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=C_fix(0);
tp(4,av2);}}

/* k509 in a457 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_511,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:60: ##sys#length */
t3=C_fast_retrieve(lf[13]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_468(2,av2);}}}

/* k585 in a551 in k347 in k344 in k341 in k338 */
static void C_ccall f_587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_587,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_590,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:59: ##sys#length */
t3=C_fast_retrieve(lf[13]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_562(2,av2);}}}

/* k567 in k560 in a551 in k347 in k344 in k341 in k338 */
static void C_ccall f_569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_569,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:59: rename13 */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[20];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k428 in loop85 in k416 in k410 in k407 in a373 in k454 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_430(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_430,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_444,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:62: ##sys#+ */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[10]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
tp(4,av2);}}}

/* k466 in a457 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_468,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_475,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:60: rename50 */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[19];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
/* setup-api.import.scm:60: ##sys#syntax-rules-mismatch */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}}

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
if(C_unlikely(!C_demand_2(1087))){
C_save(t1);
C_rereclaim2(1087*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,23);
lf[0]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007execute\376\001\000\000\021setup-api#execute");
lf[1]=C_h_intern(&lf[1],7,"compile");
lf[2]=C_h_intern(&lf[2],3,"run");
lf[3]=C_h_intern(&lf[3],13,"ignore-errors");
lf[4]=C_h_intern(&lf[4],28,"\003sysregister-compiled-module");
lf[5]=C_h_intern(&lf[5],9,"setup-api");
lf[6]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022standard-extension\376\001\000\000\034setup-api#standard-extension\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\016host-extension\376\001\000\000\030setup-api#host-extension\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021install-extension\376\001\000\000"
"\033setup-api#install-extension\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017install-program\376\001\000\000\031setup-api#install"
"-program\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016install-script\376\001\000\000\030setup-api#install-script\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\022setup-verbose-mode\376\001\000\000\034setup-api#setup-verbose-mode\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022setup-install"
"-mode\376\001\000\000\034setup-api#setup-install-mode\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017deployment-mode\376\001\000\000\031setup-a"
"pi#deployment-mode\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023installation-prefix\376\001\000\000\035setup-api#installation-"
"prefix\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022destination-prefix\376\001\000\000\034setup-api#destination-prefix\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\016runtime-prefix\376\001\000\000\030setup-api#runtime-prefix\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016chicken-prefix\376"
"\001\000\000\030setup-api#chicken-prefix\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014find-library\376\001\000\000\026setup-api#find-libra"
"ry\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013find-header\376\001\000\000\025setup-api#find-header\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014program-pat"
"h\376\001\000\000\026setup-api#program-path\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014remove-file\052\376\001\000\000\026setup-api#remove-fil"
"e\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005patch\376\001\000\000\017setup-api#patch\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013abort-setup\376\001\000\000\025setup-a"
"pi#abort-setup\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024setup-root-directory\376\001\000\000\036setup-api#setup-root-direc"
"tory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030create-directory/parents\376\001\000\000\042setup-api#create-directory/paren"
"ts\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014test-compile\376\001\000\000\026setup-api#test-compile\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013try-compi"
"le\376\001\000\000\025setup-api#try-compile\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013run-verbose\376\001\000\000\025setup-api#run-verbose"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016extra-features\376\001\000\000\030setup-api#extra-features\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021extra-n"
"onfeatures\376\001\000\000\033setup-api#extra-nonfeatures\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011copy-file\376\001\000\000\023setup-api"
"#copy-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011move-file\376\001\000\000\023setup-api#move-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014sudo-in"
"stall\376\001\000\000\026setup-api#sudo-install\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022keep-intermediates\376\001\000\000\034setup-api#"
"keep-intermediates\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012version>=\077\376\001\000\000\024setup-api#version>=\077\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\032extension-name-and-version\376\001\000\000$setup-api#extension-name-and-version\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\016extension-name\376\001\000\000\030setup-api#extension-name\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021extension-version"
"\376\001\000\000\033setup-api#extension-version\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020remove-directory\376\001\000\000\032setup-api#re"
"move-directory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020remove-extension\376\001\000\000\032setup-api#remove-extension\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\011read-info\376\001\000\000\023setup-api#read-info\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020register-program\376\001\000\000\032"
"setup-api#register-program\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014find-program\376\001\000\000\026setup-api#find-program"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011shellpath\376\001\000\000\023setup-api#shellpath\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024setup-error-handl"
"ing\376\001\000\000\036setup-api#setup-error-handling\376\377\016");
lf[7]=C_h_intern(&lf[7],2,"ex");
lf[8]=C_h_intern(&lf[8],17,"handle-exceptions");
lf[9]=C_h_intern(&lf[9],25,"\003syssyntax-rules-mismatch");
lf[10]=C_h_intern(&lf[10],5,"\003sys+");
lf[11]=C_h_intern(&lf[11],5,"\003sys=");
lf[12]=C_h_intern(&lf[12],6,"\003sys>=");
lf[13]=C_h_intern(&lf[13],10,"\003syslength");
lf[14]=C_h_intern(&lf[14],9,"\003syslist\077");
lf[15]=C_h_intern(&lf[15],18,"\003syser-transformer");
lf[16]=C_h_intern(&lf[16],10,"quasiquote");
lf[17]=C_h_intern(&lf[17],9,"\003sysmap-n");
lf[18]=C_h_intern(&lf[18],4,"list");
lf[19]=C_h_intern(&lf[19],7,"execute");
lf[20]=C_h_intern(&lf[20],3,"csc");
lf[21]=C_h_intern(&lf[21],4,"eval");
lf[22]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006import\376\003\000\000\002\376\001\000\000\006scheme\376\003\000\000\002\376\001\000\000\007chicken\376\003\000\000\002\376\001\000\000\007foreign\376\003\000\000\002\376\001\000\000\007irre"
"gex\376\003\000\000\002\376\001\000\000\005utils\376\003\000\000\002\376\001\000\000\005posix\376\003\000\000\002\376\001\000\000\005ports\376\003\000\000\002\376\001\000\000\006extras\376\003\000\000\002\376\001\000\000\017data-s"
"tructures\376\003\000\000\002\376\001\000\000\006srfi-1\376\003\000\000\002\376\001\000\000\007srfi-13\376\003\000\000\002\376\001\000\000\005files\376\377\016");
C_register_lf2(lf,23,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_340,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* a551 in k347 in k344 in k341 in k338 */
static void C_ccall f_552(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_552,5,av);}
a=C_alloc(10);
t5=C_i_cdr(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_562,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_587,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:59: ##sys#list? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t8;
av2[2]=t6;
tp(3,av2);}}

/* k560 in a551 in k347 in k344 in k341 in k338 */
static void C_ccall f_562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_562,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_569,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:59: rename13 */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[2];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
/* setup-api.import.scm:59: ##sys#syntax-rules-mismatch */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}}

/* k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_550(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_550,2,av);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,lf[1],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_456,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_458,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
/* setup-api.import.scm:60: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k442 in k428 in loop85 in k416 in k410 in k407 in a373 in k454 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_444,2,av);}
/* setup-api.import.scm:62: loop85 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_423(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k473 in k466 in a457 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_475,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_487,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* setup-api.import.scm:60: rename50 */
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[18];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k530 in loop47 in k518 in k512 in k509 in a457 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_532(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_532,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_546,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:60: ##sys#+ */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[10]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
tp(4,av2);}}}

/* k454 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_456(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_456,2,av);}
a=C_alloc(17);
t2=C_a_i_cons(&a,2,lf[2],t1);
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_372,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_374,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
/* setup-api.import.scm:62: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t5;
av2[2]=t6;
tp(3,av2);}}

/* k485 in k473 in k466 in a457 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_487(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_487,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_491,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_493,a[2]=((C_word*)t0)[4],a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:60: ##sys#map-n */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[17]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t3;
av2[2]=t4;
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* a457 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_458(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_458,5,av);}
a=C_alloc(10);
t5=C_i_cdr(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_468,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_511,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:60: ##sys#list? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t8;
av2[2]=t6;
tp(3,av2);}}

/* k499 in a492 in k485 in k473 in k466 in a457 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_501,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k397 in k389 in k382 in a373 in k454 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_399,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k389 in k382 in a373 in k454 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_391,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_399,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:62: rename88 */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[7];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* loop47 in k518 in k512 in k509 in a457 in k548 in k347 in k344 in k341 in k338 */
static void C_fcall f_525(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_525,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_532,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* setup-api.import.scm:60: ##sys#= */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
tp(4,av2);}}

/* k518 in k512 in k509 in a457 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_520(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_520,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_525,a[2]=t3,a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_525(t5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_468(2,av2);}}}

/* k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_352,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k407 in a373 in k454 in k548 in k347 in k344 in k341 in k338 */
static void C_ccall f_409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_409,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_412,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:62: ##sys#length */
t3=C_fast_retrieve(lf[13]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_384(2,av2);}}}

/* loop10 in k594 in k588 in k585 in a551 in k347 in k344 in k341 in k338 */
static void C_fcall f_601(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_601,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_608,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* setup-api.import.scm:59: ##sys#= */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
tp(4,av2);}}

/* k594 in k588 in k585 in a551 in k347 in k344 in k341 in k338 */
static void C_ccall f_596(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_596,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_601,a[2]=t3,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_601(t5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_562(2,av2);}}}

/* k606 in loop10 in k594 in k588 in k585 in a551 in k347 in k344 in k341 in k338 */
static void C_ccall f_608(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_608,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_622,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:59: ##sys#+ */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[10]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
tp(4,av2);}}}

/* k588 in k585 in a551 in k347 in k344 in k341 in k338 */
static void C_ccall f_590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_590,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:59: ##sys#>= */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[12]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=C_fix(0);
tp(4,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[43] = {
{"f_412:setup_2dapi_2eimport_2escm",(void*)f_412},
{"f_418:setup_2dapi_2eimport_2escm",(void*)f_418},
{"f_493:setup_2dapi_2eimport_2escm",(void*)f_493},
{"f_491:setup_2dapi_2eimport_2escm",(void*)f_491},
{"f_622:setup_2dapi_2eimport_2escm",(void*)f_622},
{"f_346:setup_2dapi_2eimport_2escm",(void*)f_346},
{"f_372:setup_2dapi_2eimport_2escm",(void*)f_372},
{"f_343:setup_2dapi_2eimport_2escm",(void*)f_343},
{"f_340:setup_2dapi_2eimport_2escm",(void*)f_340},
{"f_374:setup_2dapi_2eimport_2escm",(void*)f_374},
{"f_546:setup_2dapi_2eimport_2escm",(void*)f_546},
{"f_423:setup_2dapi_2eimport_2escm",(void*)f_423},
{"f_384:setup_2dapi_2eimport_2escm",(void*)f_384},
{"f_349:setup_2dapi_2eimport_2escm",(void*)f_349},
{"f_581:setup_2dapi_2eimport_2escm",(void*)f_581},
{"f_514:setup_2dapi_2eimport_2escm",(void*)f_514},
{"f_511:setup_2dapi_2eimport_2escm",(void*)f_511},
{"f_587:setup_2dapi_2eimport_2escm",(void*)f_587},
{"f_569:setup_2dapi_2eimport_2escm",(void*)f_569},
{"f_430:setup_2dapi_2eimport_2escm",(void*)f_430},
{"f_468:setup_2dapi_2eimport_2escm",(void*)f_468},
{"toplevel:setup_2dapi_2eimport_2escm",(void*)C_toplevel},
{"f_552:setup_2dapi_2eimport_2escm",(void*)f_552},
{"f_562:setup_2dapi_2eimport_2escm",(void*)f_562},
{"f_550:setup_2dapi_2eimport_2escm",(void*)f_550},
{"f_444:setup_2dapi_2eimport_2escm",(void*)f_444},
{"f_475:setup_2dapi_2eimport_2escm",(void*)f_475},
{"f_532:setup_2dapi_2eimport_2escm",(void*)f_532},
{"f_456:setup_2dapi_2eimport_2escm",(void*)f_456},
{"f_487:setup_2dapi_2eimport_2escm",(void*)f_487},
{"f_458:setup_2dapi_2eimport_2escm",(void*)f_458},
{"f_501:setup_2dapi_2eimport_2escm",(void*)f_501},
{"f_399:setup_2dapi_2eimport_2escm",(void*)f_399},
{"f_391:setup_2dapi_2eimport_2escm",(void*)f_391},
{"f_525:setup_2dapi_2eimport_2escm",(void*)f_525},
{"f_520:setup_2dapi_2eimport_2escm",(void*)f_520},
{"f_352:setup_2dapi_2eimport_2escm",(void*)f_352},
{"f_409:setup_2dapi_2eimport_2escm",(void*)f_409},
{"f_601:setup_2dapi_2eimport_2escm",(void*)f_601},
{"f_596:setup_2dapi_2eimport_2escm",(void*)f_596},
{"f_608:setup_2dapi_2eimport_2escm",(void*)f_608},
{"f_590:setup_2dapi_2eimport_2escm",(void*)f_590},
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
o|eliminated procedure checks: 11 
(o e)|safe calls: 21 
o|inlining procedure: k379 
o|inlining procedure: k379 
o|inlining procedure: k413 
o|inlining procedure: k425 
o|inlining procedure: k425 
o|inlining procedure: k413 
o|inlining procedure: k463 
o|inlining procedure: k463 
o|inlining procedure: k515 
o|inlining procedure: k527 
o|inlining procedure: k527 
o|inlining procedure: k515 
o|inlining procedure: k557 
o|inlining procedure: k557 
o|inlining procedure: k591 
o|inlining procedure: k603 
o|inlining procedure: k603 
o|inlining procedure: k591 
o|replaced variables: 34 
o|removed binding forms: 8 
o|substituted constant variable: r414628 
o|substituted constant variable: r516634 
o|substituted constant variable: r592640 
o|removed binding forms: 43 
o|removed binding forms: 3 
o|simplifications: ((##core#call . 26)) 
o|  call simplifications:
o|    ##sys#cdr	6
o|    ##sys#eq?	3
o|    ##sys#cons	11
o|    cons	3
o|    list	3
o|contracted procedure: k354 
o|contracted procedure: k446 
o|contracted procedure: k450 
o|contracted procedure: k358 
o|contracted procedure: k366 
o|contracted procedure: k362 
o|contracted procedure: k376 
o|contracted procedure: k401 
o|contracted procedure: k393 
o|contracted procedure: k438 
o|contracted procedure: k460 
o|contracted procedure: k481 
o|contracted procedure: k477 
o|contracted procedure: k503 
o|contracted procedure: k540 
o|contracted procedure: k554 
o|contracted procedure: k575 
o|contracted procedure: k571 
o|contracted procedure: k616 
o|removed binding forms: 19 
o|replaced variables: 2 
o|removed binding forms: 2 
o|customizable procedures: (loop1028 loop4765 loop85103) 
o|calls to known targets: 12 
o|fast box initializations: 3 
*/
/* end of file */

/* Generated from read-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: read-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file read-syntax.c -emit-import-library chicken.read-syntax
   unit: read-syntax
   uses: internal library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[34];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,16),40,102,95,51,48,56,32,99,104,114,32,112,114,111,99,41};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,114,101,97,100,45,115,121,110,116,97,120,35,115,121,110,116,97,120,45,115,101,116,116,101,114,32,108,111,99,32,115,108,111,116,32,119,114,97,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,114,101,97,100,45,115,121,110,116,97,120,35,99,111,112,121,45,114,101,97,100,45,116,97,98,108,101,32,114,116,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,50),40,99,104,105,99,107,101,110,46,114,101,97,100,45,115,121,110,116,97,120,35,100,101,102,105,110,101,45,114,101,97,100,101,114,45,99,116,111,114,32,115,112,101,99,32,112,114,111,99,41,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,5),40,101,114,114,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,117,115,101,114,45,114,101,97,100,45,104,111,111,107,32,99,104,97,114,32,112,111,114,116,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,18),40,102,95,53,50,52,32,95,32,112,111,114,116,32,110,117,109,41,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,11),40,97,53,50,49,32,112,114,111,99,41,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,14),40,102,95,53,51,53,32,95,32,112,111,114,116,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,11),40,97,53,51,50,32,112,114,111,99,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,14),40,102,95,53,52,54,32,95,32,112,111,114,116,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,11),40,97,53,52,51,32,112,114,111,99,41,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_280)
static void C_ccall f_280(C_word c,C_word *av) C_noret;
C_noret_decl(f_283)
static void C_ccall f_283(C_word c,C_word *av) C_noret;
C_noret_decl(f_306)
static void C_fcall f_306(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_308)
static void C_ccall f_308(C_word c,C_word *av) C_noret;
C_noret_decl(f_321)
static void C_ccall f_321(C_word c,C_word *av) C_noret;
C_noret_decl(f_324)
static void C_fcall f_324(C_word t0,C_word t1) C_noret;
C_noret_decl(f_333)
static void C_ccall f_333(C_word c,C_word *av) C_noret;
C_noret_decl(f_339)
static void C_ccall f_339(C_word c,C_word *av) C_noret;
C_noret_decl(f_350)
static void C_ccall f_350(C_word c,C_word *av) C_noret;
C_noret_decl(f_367)
static void C_ccall f_367(C_word c,C_word *av) C_noret;
C_noret_decl(f_371)
static void C_ccall f_371(C_word c,C_word *av) C_noret;
C_noret_decl(f_375)
static void C_ccall f_375(C_word c,C_word *av) C_noret;
C_noret_decl(f_379)
static void C_ccall f_379(C_word c,C_word *av) C_noret;
C_noret_decl(f_381)
static void C_ccall f_381(C_word c,C_word *av) C_noret;
C_noret_decl(f_395)
static void C_ccall f_395(C_word c,C_word *av) C_noret;
C_noret_decl(f_402)
static void C_ccall f_402(C_word c,C_word *av) C_noret;
C_noret_decl(f_409)
static void C_ccall f_409(C_word c,C_word *av) C_noret;
C_noret_decl(f_434)
static void C_ccall f_434(C_word c,C_word *av) C_noret;
C_noret_decl(f_436)
static void C_ccall f_436(C_word c,C_word *av) C_noret;
C_noret_decl(f_445)
static void C_ccall f_445(C_word c,C_word *av) C_noret;
C_noret_decl(f_455)
static void C_ccall f_455(C_word c,C_word *av) C_noret;
C_noret_decl(f_458)
static void C_ccall f_458(C_word c,C_word *av) C_noret;
C_noret_decl(f_459)
static void C_fcall f_459(C_word t0,C_word t1) C_noret;
C_noret_decl(f_472)
static void C_fcall f_472(C_word t0,C_word t1) C_noret;
C_noret_decl(f_490)
static void C_ccall f_490(C_word c,C_word *av) C_noret;
C_noret_decl(f_520)
static void C_ccall f_520(C_word c,C_word *av) C_noret;
C_noret_decl(f_522)
static void C_ccall f_522(C_word c,C_word *av) C_noret;
C_noret_decl(f_524)
static void C_ccall f_524(C_word c,C_word *av) C_noret;
C_noret_decl(f_528)
static void C_ccall f_528(C_word c,C_word *av) C_noret;
C_noret_decl(f_533)
static void C_ccall f_533(C_word c,C_word *av) C_noret;
C_noret_decl(f_535)
static void C_ccall f_535(C_word c,C_word *av) C_noret;
C_noret_decl(f_539)
static void C_ccall f_539(C_word c,C_word *av) C_noret;
C_noret_decl(f_544)
static void C_ccall f_544(C_word c,C_word *av) C_noret;
C_noret_decl(f_546)
static void C_ccall f_546(C_word c,C_word *av) C_noret;
C_noret_decl(f_550)
static void C_ccall f_550(C_word c,C_word *av) C_noret;
C_noret_decl(C_read_2dsyntax_toplevel)
C_externexport void C_ccall C_read_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_306)
static void C_ccall trf_306(C_word c,C_word *av) C_noret;
static void C_ccall trf_306(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_306(t0,t1,t2,t3);}

C_noret_decl(trf_324)
static void C_ccall trf_324(C_word c,C_word *av) C_noret;
static void C_ccall trf_324(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_324(t0,t1);}

C_noret_decl(trf_459)
static void C_ccall trf_459(C_word c,C_word *av) C_noret;
static void C_ccall trf_459(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_459(t0,t1);}

C_noret_decl(trf_472)
static void C_ccall trf_472(C_word c,C_word *av) C_noret;
static void C_ccall trf_472(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_472(t0,t1);}

/* k278 */
static void C_ccall f_280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_280,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_283,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k281 in k278 */
static void C_ccall f_283(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,5)))){
C_save_and_reclaim((void *)f_283,2,av);}
a=C_alloc(25);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_mutate((C_word*)lf[2]+1 /* (set! chicken.read-syntax#current-read-table ...) */,*((C_word*)lf[3]+1));
t5=C_mutate(&lf[4] /* (set! chicken.read-syntax#syntax-setter ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_306,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_371,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_544,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
/* read-syntax.scm:64: syntax-setter */
f_306(t6,lf[33],C_fix(1),t7);}

/* chicken.read-syntax#syntax-setter in k281 in k278 */
static void C_fcall f_306(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_306,4,t1,t2,t3,t4);}
a=C_alloc(6);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_308,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word)li0),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* f_308 in chicken.read-syntax#syntax-setter in k281 in k278 */
static void C_ccall f_308(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_308,4,av);}
a=C_alloc(8);
if(C_truep(C_i_symbolp(t2))){
t4=t1;
t5=t2;
t6=t3;
t7=C_i_assq(t5,*((C_word*)lf[5]+1));
if(C_truep(t7)){
t8=t4;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_i_setslot(t7,C_fix(1),t6);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_a_i_cons(&a,2,t5,t6);
t9=C_a_i_cons(&a,2,t8,*((C_word*)lf[5]+1));
t10=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#read-marks ...) */,t9);
t11=t4;{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_321,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* read-syntax.scm:51: current-read-table */
t5=*((C_word*)lf[2]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k319 */
static void C_ccall f_321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_321,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_slot(t2,((C_word*)t0)[5]))){
t4=t3;
f_324(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_367,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* read-syntax.scm:53: ##sys#make-vector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t4;
av2[2]=C_fix(256);
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}}

/* k322 in k319 */
static void C_fcall f_324(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_324,2,t0,t1);}
a=C_alloc(9);
t2=C_i_check_char_2(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_fix(C_character_code(((C_word*)t0)[2]));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_333,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t4,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
/* read-syntax.scm:56: ##sys#check-range */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t5;
av2[2]=t4;
av2[3]=C_fix(0);
av2[4]=C_fix(256);
av2[5]=((C_word*)t0)[3];
tp(6,av2);}}

/* k331 in k322 in k319 */
static void C_ccall f_333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_333,2,av);}
a=C_alloc(8);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_339,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* read-syntax.scm:58: ##sys#check-closure */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=C_slot(((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_set_i_slot(t2,((C_word*)t0)[6],C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k337 in k331 in k322 in k319 */
static void C_ccall f_339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_339,2,av);}
a=C_alloc(5);
t2=C_slot(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_350,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* read-syntax.scm:59: wrap */
t5=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k348 in k337 in k331 in k322 in k319 */
static void C_ccall f_350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_350,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_setslot(((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k365 in k319 */
static void C_ccall f_367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_367,2,av);}
t2=((C_word*)t0)[2];
f_324(t2,C_i_setslot(((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k369 in k281 in k278 */
static void C_ccall f_371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_371,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[9]+1 /* (set! chicken.read-syntax#set-read-syntax! ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_375,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_533,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp);
/* read-syntax.scm:72: syntax-setter */
f_306(t3,lf[32],C_fix(2),t4);}

/* k373 in k369 in k281 in k278 */
static void C_ccall f_375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_375,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[10]+1 /* (set! chicken.read-syntax#set-sharp-read-syntax! ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_379,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_522,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp);
/* read-syntax.scm:80: syntax-setter */
f_306(t3,lf[31],C_fix(3),t4);}

/* k377 in k373 in k369 in k281 in k278 */
static void C_ccall f_379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_379,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[11]+1 /* (set! chicken.read-syntax#set-parameterized-read-syntax! ...) */,t1);
t3=C_mutate((C_word*)lf[12]+1 /* (set! chicken.read-syntax#copy-read-table ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_381,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_434,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* read-syntax.scm:102: scheme#make-vector */
t5=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_fix(301);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* chicken.read-syntax#copy-read-table in k377 in k373 in k369 in k281 in k278 */
static void C_ccall f_381(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_381,3,av);}
a=C_alloc(4);
t3=C_i_check_structure_2(t2,lf[13],lf[14]);
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_395,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=C_block_size(t4);
/* read-syntax.scm:94: ##sys#vector-resize */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[15]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t5;
av2[2]=t4;
av2[3]=t6;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_395(2,av2);}}}

/* k393 in chicken.read-syntax#copy-read-table in k377 in k373 in k369 in k281 in k278 */
static void C_ccall f_395(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_395,2,av);}
a=C_alloc(5);
t2=t1;
t3=C_slot(((C_word*)t0)[2],C_fix(2));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_402,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t5=C_block_size(t3);
/* read-syntax.scm:96: ##sys#vector-resize */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[15]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=t5;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_402(2,av2);}}}

/* k400 in k393 in chicken.read-syntax#copy-read-table in k377 in k373 in k369 in k281 in k278 */
static void C_ccall f_402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_402,2,av);}
a=C_alloc(10);
t2=t1;
t3=C_slot(((C_word*)t0)[2],C_fix(3));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_409,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t5=C_block_size(t3);
/* read-syntax.scm:98: ##sys#vector-resize */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[15]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=t5;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}
else{
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_record4(&a,4,lf[13],((C_word*)t0)[4],t2,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k407 in k400 in k393 in chicken.read-syntax#copy-read-table in k377 in k373 in k369 in k281 in k278 */
static void C_ccall f_409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_409,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_record4(&a,4,lf[13],((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k432 in k377 in k373 in k369 in k281 in k278 */
static void C_ccall f_434(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_434,2,av);}
a=C_alloc(10);
t2=C_mutate(&lf[16] /* (set! chicken.read-syntax#sharp-comma-reader-ctors ...) */,t1);
t3=C_mutate((C_word*)lf[17]+1 /* (set! chicken.read-syntax#define-reader-ctor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_436,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=*((C_word*)lf[20]+1);
t5=C_mutate((C_word*)lf[20]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_445,a[2]=t4,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_520,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* read-syntax.scm:128: chicken.platform#register-feature! */
t7=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[28];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* chicken.read-syntax#define-reader-ctor in k432 in k377 in k373 in k369 in k281 in k278 */
static void C_ccall f_436(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_436,4,av);}
t4=C_i_check_symbol_2(t2,lf[18]);
/* read-syntax.scm:106: chicken.internal#hash-table-set! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[19]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t1;
av2[2]=lf[16];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}

/* ##sys#user-read-hook in k432 in k377 in k373 in k369 in k281 in k278 */
static void C_ccall f_445(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_445,4,av);}
a=C_alloc(4);
if(C_truep(C_i_char_equalp(t2,C_make_character(44)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_455,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* read-char/port */
t5=*((C_word*)lf[26]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* read-syntax.scm:126: old */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k453 in user-read-hook in k432 in k377 in k373 in k369 in k281 in k278 */
static void C_ccall f_455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_455,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_458,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* read-syntax.scm:115: read */
t3=*((C_word*)lf[25]+1);{
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

/* k456 in k453 in user-read-hook in k432 in k377 in k373 in k369 in k281 in k278 */
static void C_ccall f_458(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_458,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_459,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp);
t4=C_i_nullp(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_472,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_472(t6,t4);}
else{
t6=C_i_listp(t2);
t7=t5;
f_472(t7,C_i_not(t6));}}

/* err in k456 in k453 in user-read-hook in k432 in k377 in k373 in k369 in k281 in k278 */
static void C_fcall f_459(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_459,2,t0,t1);}
/* read-syntax.scm:116: ##sys#read-error */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[21]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[22];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}

/* k470 in k456 in k453 in user-read-hook in k432 in k377 in k373 in k369 in k281 in k278 */
static void C_fcall f_472(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_472,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
/* read-syntax.scm:118: err */
t2=((C_word*)t0)[2];
f_459(t2,((C_word*)t0)[3]);}
else{
t2=C_slot(((C_word*)t0)[4],C_fix(0));
t3=t2;
t4=C_i_symbolp(t3);
if(C_truep(C_i_not(t4))){
/* read-syntax.scm:121: err */
t5=((C_word*)t0)[2];
f_459(t5,((C_word*)t0)[3]);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_490,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* read-syntax.scm:122: chicken.internal#hash-table-ref */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[24]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[24]+1);
av2[1]=t5;
av2[2]=lf[16];
av2[3]=t3;
tp(4,av2);}}}}

/* k488 in k470 in k456 in k453 in user-read-hook in k432 in k377 in k373 in k369 in k281 in k278 */
static void C_ccall f_490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_490,2,av);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t2;
C_apply(4,av2);}}
else{
/* read-syntax.scm:125: ##sys#read-error */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[23];
av2[4]=((C_word*)t0)[5];
tp(5,av2);}}}

/* k518 in k432 in k377 in k373 in k369 in k281 in k278 */
static void C_ccall f_520(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_520,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a521 in k373 in k369 in k281 in k278 */
static void C_ccall f_522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_522,3,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_524,a[2]=t2,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_524 in a521 in k373 in k369 in k281 in k278 */
static void C_ccall f_524(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_524,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_528,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* read-syntax.scm:84: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t5;
av2[2]=t3;
tp(3,av2);}}

/* k526 */
static void C_ccall f_528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_528,2,av);}
/* read-syntax.scm:85: proc */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* a532 in k369 in k281 in k278 */
static void C_ccall f_533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_533,3,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_535,a[2]=t2,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_535 in a532 in k369 in k281 in k278 */
static void C_ccall f_535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_535,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_539,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* read-syntax.scm:76: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t4;
av2[2]=t3;
tp(3,av2);}}

/* k537 */
static void C_ccall f_539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_539,2,av);}
/* read-syntax.scm:77: proc */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a543 in k281 in k278 */
static void C_ccall f_544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_544,3,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_546,a[2]=t2,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_546 in a543 in k281 in k278 */
static void C_ccall f_546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_546,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_550,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* read-syntax.scm:68: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t4;
av2[2]=t3;
tp(3,av2);}}

/* k548 */
static void C_ccall f_550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_550,2,av);}
/* read-syntax.scm:69: proc */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_read_2dsyntax_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("read-syntax"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_read_2dsyntax_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(210))){
C_save(t1);
C_rereclaim2(210*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,34);
lf[0]=C_h_intern(&lf[0],11, C_text("read-syntax"));
lf[1]=C_h_intern(&lf[1],20, C_text("chicken.read-syntax#"));
lf[2]=C_h_intern(&lf[2],38, C_text("chicken.read-syntax#current-read-table"));
lf[3]=C_h_intern(&lf[3],22, C_text("\003syscurrent-read-table"));
lf[5]=C_h_intern(&lf[5],14, C_text("\003sysread-marks"));
lf[6]=C_h_intern(&lf[6],17, C_text("\003syscheck-closure"));
lf[7]=C_h_intern(&lf[7],15, C_text("\003syscheck-range"));
lf[8]=C_h_intern(&lf[8],15, C_text("\003sysmake-vector"));
lf[9]=C_h_intern(&lf[9],36, C_text("chicken.read-syntax#set-read-syntax!"));
lf[10]=C_h_intern(&lf[10],42, C_text("chicken.read-syntax#set-sharp-read-syntax!"));
lf[11]=C_h_intern(&lf[11],50, C_text("chicken.read-syntax#set-parameterized-read-syntax!"));
lf[12]=C_h_intern(&lf[12],35, C_text("chicken.read-syntax#copy-read-table"));
lf[13]=C_h_intern(&lf[13],10, C_text("read-table"));
lf[14]=C_h_intern(&lf[14],15, C_text("copy-read-table"));
lf[15]=C_h_intern(&lf[15],17, C_text("\003sysvector-resize"));
lf[17]=C_h_intern(&lf[17],38, C_text("chicken.read-syntax#define-reader-ctor"));
lf[18]=C_h_intern(&lf[18],18, C_text("define-reader-ctor"));
lf[19]=C_h_intern(&lf[19],32, C_text("chicken.internal#hash-table-set!"));
lf[20]=C_h_intern(&lf[20],18, C_text("\003sysuser-read-hook"));
lf[21]=C_h_intern(&lf[21],14, C_text("\003sysread-error"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376B\000\000!invalid sharp-comma external form"));
lf[23]=C_decode_literal(C_heaptop,C_text("\376B\000\000!undefined sharp-comma constructor"));
lf[24]=C_h_intern(&lf[24],31, C_text("chicken.internal#hash-table-ref"));
lf[25]=C_h_intern(&lf[25],11, C_text("scheme#read"));
lf[26]=C_h_intern(&lf[26],18, C_text("\003sysread-char/port"));
lf[27]=C_h_intern(&lf[27],34, C_text("chicken.platform#register-feature!"));
lf[28]=C_h_intern(&lf[28],7, C_text("srfi-10"));
lf[29]=C_h_intern(&lf[29],18, C_text("scheme#make-vector"));
lf[30]=C_h_intern(&lf[30],15, C_text("\003sysread-char-0"));
lf[31]=C_h_intern(&lf[31],30, C_text("set-parameterized-read-syntax!"));
lf[32]=C_h_intern(&lf[32],22, C_text("set-sharp-read-syntax!"));
lf[33]=C_h_intern(&lf[33],16, C_text("set-read-syntax!"));
C_register_lf2(lf,34,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_280,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[37] = {
{C_text("f_280:read_2dsyntax_2escm"),(void*)f_280},
{C_text("f_283:read_2dsyntax_2escm"),(void*)f_283},
{C_text("f_306:read_2dsyntax_2escm"),(void*)f_306},
{C_text("f_308:read_2dsyntax_2escm"),(void*)f_308},
{C_text("f_321:read_2dsyntax_2escm"),(void*)f_321},
{C_text("f_324:read_2dsyntax_2escm"),(void*)f_324},
{C_text("f_333:read_2dsyntax_2escm"),(void*)f_333},
{C_text("f_339:read_2dsyntax_2escm"),(void*)f_339},
{C_text("f_350:read_2dsyntax_2escm"),(void*)f_350},
{C_text("f_367:read_2dsyntax_2escm"),(void*)f_367},
{C_text("f_371:read_2dsyntax_2escm"),(void*)f_371},
{C_text("f_375:read_2dsyntax_2escm"),(void*)f_375},
{C_text("f_379:read_2dsyntax_2escm"),(void*)f_379},
{C_text("f_381:read_2dsyntax_2escm"),(void*)f_381},
{C_text("f_395:read_2dsyntax_2escm"),(void*)f_395},
{C_text("f_402:read_2dsyntax_2escm"),(void*)f_402},
{C_text("f_409:read_2dsyntax_2escm"),(void*)f_409},
{C_text("f_434:read_2dsyntax_2escm"),(void*)f_434},
{C_text("f_436:read_2dsyntax_2escm"),(void*)f_436},
{C_text("f_445:read_2dsyntax_2escm"),(void*)f_445},
{C_text("f_455:read_2dsyntax_2escm"),(void*)f_455},
{C_text("f_458:read_2dsyntax_2escm"),(void*)f_458},
{C_text("f_459:read_2dsyntax_2escm"),(void*)f_459},
{C_text("f_472:read_2dsyntax_2escm"),(void*)f_472},
{C_text("f_490:read_2dsyntax_2escm"),(void*)f_490},
{C_text("f_520:read_2dsyntax_2escm"),(void*)f_520},
{C_text("f_522:read_2dsyntax_2escm"),(void*)f_522},
{C_text("f_524:read_2dsyntax_2escm"),(void*)f_524},
{C_text("f_528:read_2dsyntax_2escm"),(void*)f_528},
{C_text("f_533:read_2dsyntax_2escm"),(void*)f_533},
{C_text("f_535:read_2dsyntax_2escm"),(void*)f_535},
{C_text("f_539:read_2dsyntax_2escm"),(void*)f_539},
{C_text("f_544:read_2dsyntax_2escm"),(void*)f_544},
{C_text("f_546:read_2dsyntax_2escm"),(void*)f_546},
{C_text("f_550:read_2dsyntax_2escm"),(void*)f_550},
{C_text("toplevel:read_2dsyntax_2escm"),(void*)C_read_2dsyntax_toplevel},
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
o|hiding unexported module binding: chicken.read-syntax#d 
o|hiding unexported module binding: chicken.read-syntax#define-alias 
o|hiding unexported module binding: chicken.read-syntax#set-read-mark! 
o|hiding unexported module binding: chicken.read-syntax#syntax-setter 
o|hiding unexported module binding: chicken.read-syntax#sharp-comma-reader-ctors 
o|eliminated procedure checks: 12 
(o e)|safe calls: 41 
o|safe globals: (chicken.read-syntax#syntax-setter chicken.read-syntax#current-read-table chicken.read-syntax#set-read-mark!) 
o|inlining procedure: k310 
o|contracted procedure: "(read-syntax.scm:50) chicken.read-syntax#set-read-mark!" 
o|inlining procedure: k290 
o|inlining procedure: k290 
o|inlining procedure: k310 
o|inlining procedure: k407 
o|inlining procedure: k407 
o|inlining procedure: k447 
o|inlining procedure: k479 
o|inlining procedure: k479 
o|inlining procedure: k447 
o|replaced variables: 45 
o|removed binding forms: 23 
o|substituted constant variable: r408560 
o|substituted constant variable: r408560 
o|replaced variables: 1 
o|removed binding forms: 43 
o|removed binding forms: 3 
o|simplifications: ((##core#call . 33)) 
o|  call simplifications:
o|    scheme#char=?
o|    scheme#read-char
o|    scheme#null?
o|    scheme#list?
o|    scheme#not	2
o|    scheme#apply
o|    ##sys#check-symbol
o|    ##sys#check-structure
o|    ##sys#size	3
o|    ##sys#make-structure	2
o|    scheme#symbol?	2
o|    ##sys#check-char
o|    scheme#char->integer
o|    ##sys#slot	8
o|    scheme#assq
o|    scheme#cons	2
o|    ##sys#setslot	4
o|contracted procedure: k313 
o|contracted procedure: k287 
o|contracted procedure: k301 
o|contracted procedure: k297 
o|contracted procedure: k325 
o|contracted procedure: k328 
o|contracted procedure: k344 
o|contracted procedure: k355 
o|contracted procedure: k358 
o|contracted procedure: k383 
o|contracted procedure: k390 
o|contracted procedure: k397 
o|contracted procedure: k404 
o|contracted procedure: k414 
o|contracted procedure: k421 
o|contracted procedure: k428 
o|contracted procedure: k438 
o|contracted procedure: k450 
o|contracted procedure: k467 
o|contracted procedure: k476 
o|contracted procedure: k505 
o|contracted procedure: k482 
o|contracted procedure: k498 
o|contracted procedure: k512 
o|simplifications: ((let . 4)) 
o|removed binding forms: 24 
o|replaced variables: 11 
o|removed binding forms: 4 
o|customizable procedures: (chicken.read-syntax#syntax-setter k470 err146 k322) 
o|calls to known targets: 11 
o|fast global references: 5 
o|fast global assignments: 2 
o|dropping unused closure argument: f_306 
*/
/* end of file */

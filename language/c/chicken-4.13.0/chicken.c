/* Generated from chicken.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: chicken.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -extend private-namespace.scm -no-trace -output-file chicken.c
   used units: library eval chicken_2dsyntax chicken_2dsyntax chicken_2dffi_2dsyntax srfi_2d1 srfi_2d4 utils files extras data_2dstructures srfi_2d69 lolevel support compiler optimizer lfa2 compiler_2dsyntax scrutinizer driver platform backend
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dffi_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d4_toplevel)
C_externimport void C_ccall C_srfi_2d4_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d69_toplevel)
C_externimport void C_ccall C_srfi_2d69_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_lolevel_toplevel)
C_externimport void C_ccall C_lolevel_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_support_toplevel)
C_externimport void C_ccall C_support_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_compiler_toplevel)
C_externimport void C_ccall C_compiler_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_optimizer_toplevel)
C_externimport void C_ccall C_optimizer_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_lfa2_toplevel)
C_externimport void C_ccall C_lfa2_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_compiler_2dsyntax_toplevel)
C_externimport void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_scrutinizer_toplevel)
C_externimport void C_ccall C_scrutinizer_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_driver_toplevel)
C_externimport void C_ccall C_driver_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_platform_toplevel)
C_externimport void C_ccall C_platform_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_backend_toplevel)
C_externimport void C_ccall C_backend_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[44];
static double C_possibly_force_alignment;


C_noret_decl(f_379)
static void C_ccall f_379(C_word c,C_word *av) C_noret;
C_noret_decl(f_376)
static void C_ccall f_376(C_word c,C_word *av) C_noret;
C_noret_decl(f_606)
static void C_ccall f_606(C_word c,C_word *av) C_noret;
C_noret_decl(f_373)
static void C_ccall f_373(C_word c,C_word *av) C_noret;
C_noret_decl(f_453)
static void C_ccall f_453(C_word c,C_word *av) C_noret;
C_noret_decl(f_370)
static void C_ccall f_370(C_word c,C_word *av) C_noret;
C_noret_decl(f_509)
static void C_ccall f_509(C_word c,C_word *av) C_noret;
C_noret_decl(f_367)
static void C_ccall f_367(C_word c,C_word *av) C_noret;
C_noret_decl(f_361)
static void C_ccall f_361(C_word c,C_word *av) C_noret;
C_noret_decl(f_501)
static void C_ccall f_501(C_word c,C_word *av) C_noret;
C_noret_decl(f_364)
static void C_ccall f_364(C_word c,C_word *av) C_noret;
C_noret_decl(f_449)
static void C_ccall f_449(C_word c,C_word *av) C_noret;
C_noret_decl(f_576)
static void C_ccall f_576(C_word c,C_word *av) C_noret;
C_noret_decl(f_431)
static void C_fcall f_431(C_word t0,C_word t1) C_noret;
C_noret_decl(f_727)
static void C_ccall f_727(C_word c,C_word *av) C_noret;
C_noret_decl(f_586)
static void C_ccall f_586(C_word c,C_word *av) C_noret;
C_noret_decl(f_521)
static void C_fcall f_521(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_717)
static void C_ccall f_717(C_word c,C_word *av) C_noret;
C_noret_decl(f_495)
static void C_ccall f_495(C_word c,C_word *av) C_noret;
C_noret_decl(f_492)
static void C_ccall f_492(C_word c,C_word *av) C_noret;
C_noret_decl(f_710)
static void C_ccall f_710(C_word c,C_word *av) C_noret;
C_noret_decl(f_497)
static void C_ccall f_497(C_word c,C_word *av) C_noret;
C_noret_decl(f_382)
static void C_ccall f_382(C_word c,C_word *av) C_noret;
C_noret_decl(f_385)
static void C_ccall f_385(C_word c,C_word *av) C_noret;
C_noret_decl(f_516)
static void C_ccall f_516(C_word c,C_word *av) C_noret;
C_noret_decl(f_513)
static void C_ccall f_513(C_word c,C_word *av) C_noret;
C_noret_decl(f_745)
static void C_ccall f_745(C_word c,C_word *av) C_noret;
C_noret_decl(f_749)
static void C_ccall f_749(C_word c,C_word *av) C_noret;
C_noret_decl(f_391)
static void C_ccall f_391(C_word c,C_word *av) C_noret;
C_noret_decl(f_397)
static void C_fcall f_397(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_389)
static void C_ccall f_389(C_word c,C_word *av) C_noret;
C_noret_decl(f_735)
static void C_ccall f_735(C_word c,C_word *av) C_noret;
C_noret_decl(f_737)
static void C_ccall f_737(C_word c,C_word *av) C_noret;
C_noret_decl(f_358)
static void C_ccall f_358(C_word c,C_word *av) C_noret;
C_noret_decl(f_355)
static void C_ccall f_355(C_word c,C_word *av) C_noret;
C_noret_decl(f_352)
static void C_ccall f_352(C_word c,C_word *av) C_noret;
C_noret_decl(f_489)
static void C_ccall f_489(C_word c,C_word *av) C_noret;
C_noret_decl(f_566)
static void C_ccall f_566(C_word c,C_word *av) C_noret;
C_noret_decl(f_644)
static void C_ccall f_644(C_word c,C_word *av) C_noret;
C_noret_decl(f_334)
static void C_ccall f_334(C_word c,C_word *av) C_noret;
C_noret_decl(f_337)
static void C_ccall f_337(C_word c,C_word *av) C_noret;
C_noret_decl(f_331)
static void C_ccall f_331(C_word c,C_word *av) C_noret;
C_noret_decl(f_411)
static void C_ccall f_411(C_word c,C_word *av) C_noret;
C_noret_decl(f_556)
static void C_ccall f_556(C_word c,C_word *av) C_noret;
C_noret_decl(f_322)
static void C_ccall f_322(C_word c,C_word *av) C_noret;
C_noret_decl(f_325)
static void C_ccall f_325(C_word c,C_word *av) C_noret;
C_noret_decl(f_328)
static void C_ccall f_328(C_word c,C_word *av) C_noret;
C_noret_decl(f_668)
static void C_ccall f_668(C_word c,C_word *av) C_noret;
C_noret_decl(f_349)
static void C_ccall f_349(C_word c,C_word *av) C_noret;
C_noret_decl(f_346)
static void C_ccall f_346(C_word c,C_word *av) C_noret;
C_noret_decl(f_343)
static void C_ccall f_343(C_word c,C_word *av) C_noret;
C_noret_decl(f_340)
static void C_ccall f_340(C_word c,C_word *av) C_noret;
C_noret_decl(f_596)
static void C_ccall f_596(C_word c,C_word *av) C_noret;

C_noret_decl(trf_431)
static void C_ccall trf_431(C_word c,C_word *av) C_noret;
static void C_ccall trf_431(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_431(t0,t1);}

C_noret_decl(trf_521)
static void C_ccall trf_521(C_word c,C_word *av) C_noret;
static void C_ccall trf_521(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_521(t0,t1,t2);}

C_noret_decl(trf_397)
static void C_ccall trf_397(C_word c,C_word *av) C_noret;
static void C_ccall trf_397(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_397(t0,t1,t2,t3,t4);}

/* k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 */
static void C_ccall f_379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_379,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_382,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_platform_toplevel(2,av2);}}

/* k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 */
static void C_ccall f_376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_376,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_379,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_driver_toplevel(2,av2);}}

/* k604 in loop in a508 in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in ... */
static void C_ccall f_606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_606,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
/* chicken.scm:134: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_521(t4,((C_word*)t0)[5],t3);}

/* k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 */
static void C_ccall f_373(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_373,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_376,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_scrutinizer_toplevel(2,av2);}}

/* k451 in k429 in loop in process-command-line in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in ... */
static void C_ccall f_453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_453,2,av);}
/* chicken.scm:66: string->symbol */
t2=*((C_word*)lf[3]+1);{
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

/* k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 */
static void C_ccall f_370(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_370,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_373,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_compiler_2dsyntax_toplevel(2,av2);}}

/* a508 in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in ... */
static void C_ccall f_509(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_509,4,av);}
a=C_alloc(13);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_513,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_521,a[2]=t4,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_521(t9,t5,((C_word*)t4)[1]);}

/* k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 */
static void C_ccall f_367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_367,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_370,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_lfa2_toplevel(2,av2);}}

/* k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 */
static void C_ccall f_361(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_361,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_364,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_compiler_toplevel(2,av2);}}

/* k499 in a496 in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in ... */
static void C_ccall f_501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_501,2,av);}
if(C_truep(t1)){
t2=t1;
/* chicken.scm:74: g39 */
t3=t2;{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[0]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=*((C_word*)lf[1]+1);
t3=*((C_word*)lf[1]+1);
/* chicken.scm:74: g39 */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[0]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 */
static void C_ccall f_364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_364,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_367,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_optimizer_toplevel(2,av2);}}

/* k447 in k429 in loop in process-command-line in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in ... */
static void C_ccall f_449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_449,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken.scm:66: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_397(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2,((C_word*)t0)[6]);}

/* k574 in loop in a508 in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in ... */
static void C_ccall f_576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_576,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
/* chicken.scm:134: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_521(t4,((C_word*)t0)[5],t3);}

/* k429 in loop in process-command-line in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in ... */
static void C_fcall f_431(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_431,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken.scm:65: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_397(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_449,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_453,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm:66: substring */
t6=*((C_word*)lf[4]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[7];
av2[3]=C_fix(1);
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k725 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in ... */
static void C_ccall f_727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_727,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_735,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm:47: argv */
t4=*((C_word*)lf[37]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k584 in loop in a508 in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in ... */
static void C_ccall f_586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_586,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
/* chicken.scm:134: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_521(t4,((C_word*)t0)[5],t3);}

/* loop in a508 in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in ... */
static void C_fcall f_521(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,0,15)))){
C_save_and_reclaim_args((void *)trf_521,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_eqp(lf[9],t3);
if(C_truep(t6)){
t7=C_i_car(t5);
t8=C_a_i_string_to_number(&a,2,t7,C_fix(10));
switch(t8){
case C_fix(0):
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_556,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:84: cons* */
t10=*((C_word*)lf[10]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[11];
av2[3]=lf[12];
av2[4]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}
case C_fix(1):
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_566,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:87: cons* */
t10=*((C_word*)lf[10]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[13];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}
case C_fix(2):
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_576,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:92: cons* */
t10=*((C_word*)lf[10]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[13];
av2[3]=lf[14];
av2[4]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}
case C_fix(3):
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_586,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:99: cons* */
t10=*((C_word*)lf[10]+1);{
C_word av2[8];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[13];
av2[3]=lf[14];
av2[4]=lf[15];
av2[5]=lf[16];
av2[6]=lf[17];
av2[7]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t10+1)))(8,av2);}
case C_fix(4):
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_596,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:109: cons* */
t10=*((C_word*)lf[10]+1);{
C_word av2[9];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[13];
av2[3]=lf[14];
av2[4]=lf[15];
av2[5]=lf[17];
av2[6]=lf[16];
av2[7]=lf[18];
av2[8]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t10+1)))(9,av2);}
default:
if(C_truep(C_i_greater_or_equalp(t8,C_fix(5)))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_606,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:120: cons* */
t10=*((C_word*)lf[10]+1);{
C_word av2[16];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[19];
av2[3]=lf[20];
av2[4]=lf[18];
av2[5]=lf[21];
av2[6]=lf[13];
av2[7]=lf[22];
av2[8]=lf[17];
av2[9]=lf[13];
av2[10]=lf[22];
av2[11]=lf[14];
av2[12]=lf[15];
av2[13]=lf[23];
av2[14]=lf[24];
av2[15]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t10+1)))(16,av2);}}
else{
t9=C_u_i_cdr(t5);
/* chicken.scm:134: loop */
t19=t1;
t20=t9;
t1=t19;
t2=t20;
goto loop;}}}
else{
t7=C_eqp(lf[25],t3);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=C_a_i_string_to_number(&a,2,t8,C_fix(10));
switch(t9){
case C_fix(0):
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_644,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:138: cons* */
t11=*((C_word*)lf[10]+1);{
C_word av2[5];
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[22];
av2[3]=lf[20];
av2[4]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}
case C_fix(1):
t10=C_a_i_cons(&a,2,lf[20],((C_word*)((C_word*)t0)[2])[1]);
t11=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t10);
t12=C_u_i_cdr(t5);
/* chicken.scm:142: loop */
t19=t1;
t20=t12;
t1=t19;
t2=t20;
goto loop;
case C_fix(2):
t10=C_a_i_cons(&a,2,lf[26],((C_word*)((C_word*)t0)[2])[1]);
t11=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t10);
t12=C_u_i_cdr(t5);
/* chicken.scm:142: loop */
t19=t1;
t20=t12;
t1=t19;
t2=t20;
goto loop;
default:
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_668,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:141: cons* */
t11=*((C_word*)lf[10]+1);{
C_word av2[5];
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[26];
av2[3]=lf[27];
av2[4]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}}
else{
if(C_truep(C_i_memq(t3,*((C_word*)lf[28]+1)))){
/* chicken.scm:143: loop */
t19=t1;
t20=t5;
t1=t19;
t2=t20;
goto loop;}
else{
if(C_truep(C_i_memq(t3,*((C_word*)lf[29]+1)))){
if(C_truep(C_i_pairp(t5))){
t8=C_u_i_cdr(t5);
/* chicken.scm:146: loop */
t19=t1;
t20=t8;
t1=t19;
t2=t20;
goto loop;}
else{
/* chicken.scm:147: quit */
t8=*((C_word*)lf[30]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t1;
av2[2]=lf[31];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}
else{
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_710,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_717,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(t3))){
/* chicken.scm:149: warning */
t10=*((C_word*)lf[32]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=t8;
av2[2]=lf[33];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
/* chicken.scm:151: conc */
t10=*((C_word*)lf[34]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[35];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}}}}}}

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
if(C_unlikely(!C_demand_2(266))){
C_save(t1);
C_rereclaim2(266*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,44);
lf[0]=C_h_intern(&lf[0],27,"\010compilercompiler-arguments");
lf[1]=C_h_intern(&lf[1],29,"\010compilerprocess-command-line");
lf[2]=C_h_intern(&lf[2],7,"reverse");
lf[3]=C_h_intern(&lf[3],14,"string->symbol");
lf[4]=C_h_intern(&lf[4],9,"substring");
lf[5]=C_h_intern(&lf[5],25,"\003sysimplicit-exit-handler");
lf[6]=C_h_intern(&lf[6],17,"user-options-pass");
lf[7]=C_h_intern(&lf[7],4,"exit");
lf[8]=C_h_intern(&lf[8],19,"compile-source-file");
lf[9]=C_h_intern(&lf[9],14,"optimize-level");
lf[10]=C_h_intern(&lf[10],5,"cons\052");
lf[11]=C_h_intern(&lf[11],18,"no-compiler-syntax");
lf[12]=C_h_intern(&lf[12],21,"no-usual-integrations");
lf[13]=C_h_intern(&lf[13],22,"optimize-leaf-routines");
lf[14]=C_h_intern(&lf[14],6,"inline");
lf[15]=C_h_intern(&lf[15],13,"inline-global");
lf[16]=C_h_intern(&lf[16],5,"local");
lf[17]=C_h_intern(&lf[17],10,"specialize");
lf[18]=C_h_intern(&lf[18],6,"unsafe");
lf[19]=C_h_intern(&lf[19],18,"disable-interrupts");
lf[20]=C_h_intern(&lf[20],8,"no-trace");
lf[21]=C_h_intern(&lf[21],5,"block");
lf[22]=C_h_intern(&lf[22],14,"no-lambda-info");
lf[23]=C_h_intern(&lf[23],10,"clustering");
lf[24]=C_h_intern(&lf[24],4,"lfa2");
lf[25]=C_h_intern(&lf[25],11,"debug-level");
lf[26]=C_h_intern(&lf[26],10,"scrutinize");
lf[27]=C_h_intern(&lf[27],10,"debug-info");
lf[28]=C_h_intern(&lf[28],31,"\010compilervalid-compiler-options");
lf[29]=C_h_intern(&lf[29],45,"\010compilervalid-compiler-options-with-argument");
lf[30]=C_h_intern(&lf[30],13,"\010compilerquit");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000 missing argument to `-~s\047 option");
lf[32]=C_h_intern(&lf[32],7,"warning");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000!invalid compiler option (ignored)");
lf[34]=C_h_intern(&lf[34],4,"conc");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[36]=C_h_intern(&lf[36],6,"append");
lf[37]=C_h_intern(&lf[37],4,"argv");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[39]=C_h_intern(&lf[39],6,"remove");
lf[40]=C_h_intern(&lf[40],12,"string-split");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[42]=C_h_intern(&lf[42],24,"get-environment-variable");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\017CHICKEN_OPTIONS");
C_register_lf2(lf,44,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_322,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k715 in loop in a508 in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in ... */
static void C_ccall f_717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_717,2,av);}
/* chicken.scm:149: warning */
t2=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[33];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k493 in k487 in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in ... */
static void C_ccall f_495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_495,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k490 in k487 in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in ... */
static void C_ccall f_492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_492,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k708 in loop in a508 in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in ... */
static void C_ccall f_710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_710,2,av);}
/* chicken.scm:152: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_521(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* a496 in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in ... */
static void C_ccall f_497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_497,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_501,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm:74: user-options-pass */
t3=*((C_word*)lf[6]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 */
static void C_ccall f_382(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_382,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_385,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_backend_toplevel(2,av2);}}

/* k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in ... */
static void C_ccall f_385(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_385,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_389,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_727,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_737,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_745,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_749,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm:46: get-environment-variable */
t7=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[43];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k514 in k511 in a508 in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in ... */
static void C_ccall f_516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_516,2,av);}
/* chicken.scm:154: exit */
t2=*((C_word*)lf[7]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k511 in a508 in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in ... */
static void C_ccall f_513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_513,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_516,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t2;
av2[2]=*((C_word*)lf[8]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)((C_word*)t0)[4])[1];
C_apply(5,av2);}}

/* k743 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in ... */
static void C_ccall f_745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_745,2,av);}
/* chicken.scm:44: remove */
t2=*((C_word*)lf[39]+1);{
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

/* k747 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in ... */
static void C_ccall f_749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_749,2,av);}
if(C_truep(t1)){
t2=t1;
/* chicken.scm:46: string-split */
t3=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* chicken.scm:46: string-split */
t2=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[41];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* ##compiler#process-command-line in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in ... */
static void C_ccall f_391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_391,3,av);}
a=C_alloc(5);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_397,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_397(t6,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in process-command-line in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in ... */
static void C_fcall f_397(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_397,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_411,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm:59: reverse */
t6=*((C_word*)lf[2]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_i_car(t2);
t6=t5;
t7=C_i_string_length(t6);
t8=t7;
t9=C_i_string_ref(t6,C_fix(0));
t10=(C_truep(C_u_i_char_equalp(C_make_character(45),t9))?C_fixnum_greaterp(t8,C_fix(1)):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_431,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=t4,a[7]=t6,a[8]=t8,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greaterp(t8,C_fix(1)))){
t12=C_i_string_ref(t6,C_fix(1));
t13=t11;
f_431(t13,C_u_i_char_equalp(C_make_character(58),t12));}
else{
t12=t11;
f_431(t12,C_SCHEME_FALSE);}}
else{
if(C_truep(t4)){
t11=t2;
t12=C_u_i_cdr(t11);
t13=C_a_i_cons(&a,2,t6,t3);
/* chicken.scm:68: loop */
t15=t1;
t16=t12;
t17=t13;
t18=t4;
t1=t15;
t2=t16;
t3=t17;
t4=t18;
goto loop;}
else{
t11=t2;
t12=C_u_i_cdr(t11);
/* chicken.scm:69: loop */
t15=t1;
t16=t12;
t17=t3;
t18=t6;
t1=t15;
t2=t16;
t3=t17;
t4=t18;
goto loop;}}}}

/* k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in ... */
static void C_ccall f_389(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_389,2,av);}
a=C_alloc(9);
t2=C_mutate2((C_word*)lf[0]+1 /* (set! ##compiler#compiler-arguments ...) */,t1);
t3=C_mutate2((C_word*)lf[1]+1 /* (set! ##compiler#process-command-line ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_391,tmp=(C_word)a,a+=2,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_489,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_497,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_509,tmp=(C_word)a,a+=2,tmp);
/* chicken.scm:74: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t4;
av2[2]=t5;
av2[3]=t6;
C_call_with_values(4,av2);}}

/* k733 in k725 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in ... */
static void C_ccall f_735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_735,2,av);}
t2=C_i_cdr(t1);
/* chicken.scm:43: append */
t3=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a736 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in ... */
static void C_ccall f_737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_737,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_string_equal_p(t2,lf[38]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 */
static void C_ccall f_358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_358,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_361,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_support_toplevel(2,av2);}}

/* k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 */
static void C_ccall f_355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_355,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_358,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_lolevel_toplevel(2,av2);}}

/* k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 */
static void C_ccall f_352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_352,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_355,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d69_toplevel(2,av2);}}

/* k487 in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in ... */
static void C_ccall f_489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_489,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_492,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_495,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
t4=*((C_word*)lf[5]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k564 in loop in a508 in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in ... */
static void C_ccall f_566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_566,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
/* chicken.scm:134: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_521(t4,((C_word*)t0)[5],t3);}

/* k642 in loop in a508 in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in ... */
static void C_ccall f_644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_644,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
/* chicken.scm:142: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_521(t4,((C_word*)t0)[5],t3);}

/* k332 in k329 in k326 in k323 in k320 */
static void C_ccall f_334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_334,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_337,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d1_toplevel(2,av2);}}

/* k335 in k332 in k329 in k326 in k323 in k320 */
static void C_ccall f_337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_337,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_340,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d4_toplevel(2,av2);}}

/* k329 in k326 in k323 in k320 */
static void C_ccall f_331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_331,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_334,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dffi_2dsyntax_toplevel(2,av2);}}

/* k409 in loop in process-command-line in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in ... */
static void C_ccall f_411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_411,2,av);}
/* chicken.scm:59: values */{
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
C_values(4,av2);}}

/* k554 in loop in a508 in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in ... */
static void C_ccall f_556(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_556,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
/* chicken.scm:134: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_521(t4,((C_word*)t0)[5],t3);}

/* k320 */
static void C_ccall f_322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_322,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_325,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k323 in k320 */
static void C_ccall f_325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_325,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_328,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k326 in k323 in k320 */
static void C_ccall f_328(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_328,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_331,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k666 in loop in a508 in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in ... */
static void C_ccall f_668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_668,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
/* chicken.scm:142: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_521(t4,((C_word*)t0)[5],t3);}

/* k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 */
static void C_ccall f_349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_349,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_352,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 */
static void C_ccall f_346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_346,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_349,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 */
static void C_ccall f_343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_343,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_346,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_files_toplevel(2,av2);}}

/* k338 in k335 in k332 in k329 in k326 in k323 in k320 */
static void C_ccall f_340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_340,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_343,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_utils_toplevel(2,av2);}}

/* k594 in loop in a508 in k387 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in ... */
static void C_ccall f_596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_596,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
/* chicken.scm:134: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_521(t4,((C_word*)t0)[5],t3);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[55] = {
{"f_379:chicken_2escm",(void*)f_379},
{"f_376:chicken_2escm",(void*)f_376},
{"f_606:chicken_2escm",(void*)f_606},
{"f_373:chicken_2escm",(void*)f_373},
{"f_453:chicken_2escm",(void*)f_453},
{"f_370:chicken_2escm",(void*)f_370},
{"f_509:chicken_2escm",(void*)f_509},
{"f_367:chicken_2escm",(void*)f_367},
{"f_361:chicken_2escm",(void*)f_361},
{"f_501:chicken_2escm",(void*)f_501},
{"f_364:chicken_2escm",(void*)f_364},
{"f_449:chicken_2escm",(void*)f_449},
{"f_576:chicken_2escm",(void*)f_576},
{"f_431:chicken_2escm",(void*)f_431},
{"f_727:chicken_2escm",(void*)f_727},
{"f_586:chicken_2escm",(void*)f_586},
{"f_521:chicken_2escm",(void*)f_521},
{"toplevel:chicken_2escm",(void*)C_toplevel},
{"f_717:chicken_2escm",(void*)f_717},
{"f_495:chicken_2escm",(void*)f_495},
{"f_492:chicken_2escm",(void*)f_492},
{"f_710:chicken_2escm",(void*)f_710},
{"f_497:chicken_2escm",(void*)f_497},
{"f_382:chicken_2escm",(void*)f_382},
{"f_385:chicken_2escm",(void*)f_385},
{"f_516:chicken_2escm",(void*)f_516},
{"f_513:chicken_2escm",(void*)f_513},
{"f_745:chicken_2escm",(void*)f_745},
{"f_749:chicken_2escm",(void*)f_749},
{"f_391:chicken_2escm",(void*)f_391},
{"f_397:chicken_2escm",(void*)f_397},
{"f_389:chicken_2escm",(void*)f_389},
{"f_735:chicken_2escm",(void*)f_735},
{"f_737:chicken_2escm",(void*)f_737},
{"f_358:chicken_2escm",(void*)f_358},
{"f_355:chicken_2escm",(void*)f_355},
{"f_352:chicken_2escm",(void*)f_352},
{"f_489:chicken_2escm",(void*)f_489},
{"f_566:chicken_2escm",(void*)f_566},
{"f_644:chicken_2escm",(void*)f_644},
{"f_334:chicken_2escm",(void*)f_334},
{"f_337:chicken_2escm",(void*)f_337},
{"f_331:chicken_2escm",(void*)f_331},
{"f_411:chicken_2escm",(void*)f_411},
{"f_556:chicken_2escm",(void*)f_556},
{"f_322:chicken_2escm",(void*)f_322},
{"f_325:chicken_2escm",(void*)f_325},
{"f_328:chicken_2escm",(void*)f_328},
{"f_668:chicken_2escm",(void*)f_668},
{"f_349:chicken_2escm",(void*)f_349},
{"f_346:chicken_2escm",(void*)f_346},
{"f_343:chicken_2escm",(void*)f_343},
{"f_340:chicken_2escm",(void*)f_340},
{"f_596:chicken_2escm",(void*)f_596},
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
o|eliminated procedure checks: 1 
o|specializations:
o|  8 (eqv? * (not float))
o|  8 (cdr pair)
o|  2 (> fixnum fixnum)
o|  2 (char=? char char)
o|  2 (string-ref string fixnum)
(o e)|safe calls: 54 
o|inlining procedure: k399 
o|substituted constant variable: a419 
o|inlining procedure: k399 
o|inlining procedure: k426 
o|inlining procedure: k426 
o|substituted constant variable: a460 
o|substituted constant variable: a457 
o|substituted constant variable: a462 
o|inlining procedure: k463 
o|inlining procedure: k463 
o|substituted constant variable: a480 
o|substituted constant variable: a486 
o|inlining procedure: k502 
o|inlining procedure: k502 
o|propagated global variable: r503764 ##compiler#process-command-line 
o|inlining procedure: k523 
o|inlining procedure: k523 
o|inlining procedure: k557 
o|inlining procedure: k557 
o|inlining procedure: k577 
o|inlining procedure: k577 
o|inlining procedure: k597 
o|inlining procedure: k597 
o|substituted constant variable: a608 
o|substituted constant variable: a610 
o|substituted constant variable: a612 
o|substituted constant variable: a614 
o|substituted constant variable: a616 
o|inlining procedure: k621 
o|inlining procedure: k645 
o|inlining procedure: k645 
o|substituted constant variable: a670 
o|substituted constant variable: a672 
o|substituted constant variable: a674 
o|inlining procedure: k621 
o|inlining procedure: k688 
o|inlining procedure: k688 
o|inlining procedure: k715 
o|inlining procedure: k715 
o|inlining procedure: k750 
o|inlining procedure: k750 
o|replaced variables: 77 
o|removed binding forms: 33 
o|propagated global variable: g3940765 ##compiler#process-command-line 
o|substituted constant variable: r751789 
o|substituted constant variable: r751789 
o|replaced variables: 10 
o|removed binding forms: 79 
o|inlining procedure: k542 
o|inlining procedure: k542 
o|inlining procedure: k542 
o|inlining procedure: k542 
o|inlining procedure: k542 
o|inlining procedure: k542 
o|inlining procedure: k542 
o|inlining procedure: k630 
o|inlining procedure: k630 
o|inlining procedure: k630 
o|inlining procedure: k630 
o|removed binding forms: 12 
o|removed binding forms: 13 
o|removed binding forms: 1 
o|simplifications: ((if . 1) (##core#call . 35)) 
o|  call simplifications:
o|    string=?
o|    cdr
o|    ##sys#call-with-values
o|    memq	2
o|    string?
o|    pair?
o|    string->number	2
o|    eq?	10
o|    >=
o|    apply
o|    null?	2
o|    car	4
o|    string-length
o|    fx>	2
o|    cons	4
o|    values
o|contracted procedure: k402 
o|contracted procedure: k412 
o|contracted procedure: k415 
o|contracted procedure: k423 
o|contracted procedure: k443 
o|contracted procedure: k454 
o|contracted procedure: k472 
o|contracted procedure: k526 
o|contracted procedure: k529 
o|contracted procedure: k536 
o|contracted procedure: k618 
o|contracted procedure: k539 
o|contracted procedure: k550 
o|contracted procedure: k560 
o|contracted procedure: k570 
o|contracted procedure: k580 
o|contracted procedure: k590 
o|contracted procedure: k600 
o|contracted procedure: k624 
o|contracted procedure: k676 
o|contracted procedure: k627 
o|contracted procedure: k638 
o|contracted procedure: k648 
o|contracted procedure: k652 
o|contracted procedure: k658 
o|contracted procedure: k662 
o|contracted procedure: k682 
o|contracted procedure: k691 
o|contracted procedure: k697 
o|contracted procedure: k718 
o|contracted procedure: k729 
o|simplifications: ((let . 14)) 
o|removed binding forms: 31 
o|replaced variables: 12 
o|removed binding forms: 4 
o|customizable procedures: (loop46 k429 loop29) 
o|calls to known targets: 22 
o|identified direct recursive calls: f_397 2 
o|identified direct recursive calls: f_521 5 
o|fast box initializations: 2 
*/
/* end of file */

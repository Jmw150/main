/* Generated from chicken-bug.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: chicken-bug.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -output-file chicken-bug.c
   used units: library eval chicken_2dsyntax srfi_2d13 posix tcp data_2dstructures utils extras
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_tcp_toplevel)
C_externimport void C_ccall C_tcp_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[94];
static double C_possibly_force_alignment;


C_noret_decl(f_1025)
static void C_ccall f_1025(C_word c,C_word *av) C_noret;
C_noret_decl(f_783)
static void C_ccall f_783(C_word c,C_word *av) C_noret;
C_noret_decl(f_571)
static void C_ccall f_571(C_word c,C_word *av) C_noret;
C_noret_decl(f_469)
static void C_ccall f_469(C_word c,C_word *av) C_noret;
C_noret_decl(f_1020)
static void C_ccall f_1020(C_word c,C_word *av) C_noret;
C_noret_decl(f_787)
static void C_ccall f_787(C_word c,C_word *av) C_noret;
C_noret_decl(f_700)
static void C_ccall f_700(C_word c,C_word *av) C_noret;
C_noret_decl(f_466)
static void C_ccall f_466(C_word c,C_word *av) C_noret;
C_noret_decl(f_578)
static void C_ccall f_578(C_word c,C_word *av) C_noret;
C_noret_decl(f_463)
static void C_ccall f_463(C_word c,C_word *av) C_noret;
C_noret_decl(f_460)
static void C_ccall f_460(C_word c,C_word *av) C_noret;
C_noret_decl(f_475)
static void C_ccall f_475(C_word c,C_word *av) C_noret;
C_noret_decl(f_478)
static void C_ccall f_478(C_word c,C_word *av) C_noret;
C_noret_decl(f_886)
static void C_ccall f_886(C_word c,C_word *av) C_noret;
C_noret_decl(f_472)
static void C_ccall f_472(C_word c,C_word *av) C_noret;
C_noret_decl(f_725)
static void C_ccall f_725(C_word c,C_word *av) C_noret;
C_noret_decl(f_727)
static void C_fcall f_727(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1016)
static void C_ccall f_1016(C_word c,C_word *av) C_noret;
C_noret_decl(f_1042)
static void C_ccall f_1042(C_word c,C_word *av) C_noret;
C_noret_decl(f_599)
static void C_fcall f_599(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_481)
static void C_ccall f_481(C_word c,C_word *av) C_noret;
C_noret_decl(f_484)
static void C_ccall f_484(C_word c,C_word *av) C_noret;
C_noret_decl(f_752)
static void C_ccall f_752(C_word c,C_word *av) C_noret;
C_noret_decl(f_498)
static void C_ccall f_498(C_word c,C_word *av) C_noret;
C_noret_decl(f_1003)
static void C_ccall f_1003(C_word c,C_word *av) C_noret;
C_noret_decl(f_494)
static void C_ccall f_494(C_word c,C_word *av) C_noret;
C_noret_decl(f_492)
static void C_ccall f_492(C_word c,C_word *av) C_noret;
C_noret_decl(f_501)
static void C_ccall f_501(C_word c,C_word *av) C_noret;
C_noret_decl(f_504)
static void C_ccall f_504(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_522)
static void C_ccall f_522(C_word c,C_word *av) C_noret;
C_noret_decl(f_525)
static void C_ccall f_525(C_word c,C_word *av) C_noret;
C_noret_decl(f_528)
static void C_ccall f_528(C_word c,C_word *av) C_noret;
C_noret_decl(f_975)
static void C_ccall f_975(C_word c,C_word *av) C_noret;
C_noret_decl(f_806)
static void C_ccall f_806(C_word c,C_word *av) C_noret;
C_noret_decl(f_801)
static void C_ccall f_801(C_word c,C_word *av) C_noret;
C_noret_decl(f_513)
static void C_ccall f_513(C_word c,C_word *av) C_noret;
C_noret_decl(f_510)
static void C_ccall f_510(C_word c,C_word *av) C_noret;
C_noret_decl(f_516)
static void C_ccall f_516(C_word c,C_word *av) C_noret;
C_noret_decl(f_519)
static void C_ccall f_519(C_word c,C_word *av) C_noret;
C_noret_decl(f_979)
static void C_ccall f_979(C_word c,C_word *av) C_noret;
C_noret_decl(f_923)
static void C_fcall f_923(C_word t0,C_word t1) C_noret;
C_noret_decl(f_926)
static void C_ccall f_926(C_word c,C_word *av) C_noret;
C_noret_decl(f_929)
static void C_ccall f_929(C_word c,C_word *av) C_noret;
C_noret_decl(f_920)
static void C_ccall f_920(C_word c,C_word *av) C_noret;
C_noret_decl(f_540)
static void C_ccall f_540(C_word c,C_word *av) C_noret;
C_noret_decl(f_546)
static void C_ccall f_546(C_word c,C_word *av) C_noret;
C_noret_decl(f_549)
static void C_ccall f_549(C_word c,C_word *av) C_noret;
C_noret_decl(f_676)
static void C_ccall f_676(C_word c,C_word *av) C_noret;
C_noret_decl(f_674)
static void C_ccall f_674(C_word c,C_word *av) C_noret;
C_noret_decl(f_670)
static void C_ccall f_670(C_word c,C_word *av) C_noret;
C_noret_decl(f_914)
static void C_ccall f_914(C_word c,C_word *av) C_noret;
C_noret_decl(f_910)
static void C_ccall f_910(C_word c,C_word *av) C_noret;
C_noret_decl(f_531)
static void C_ccall f_531(C_word c,C_word *av) C_noret;
C_noret_decl(f_534)
static void C_ccall f_534(C_word c,C_word *av) C_noret;
C_noret_decl(f_537)
static void C_ccall f_537(C_word c,C_word *av) C_noret;
C_noret_decl(f_660)
static void C_ccall f_660(C_word c,C_word *av) C_noret;
C_noret_decl(f_815)
static void C_fcall f_815(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_819)
static void C_ccall f_819(C_word c,C_word *av) C_noret;
C_noret_decl(f_810)
static void C_ccall f_810(C_word c,C_word *av) C_noret;
C_noret_decl(f_775)
static void C_ccall f_775(C_word c,C_word *av) C_noret;
C_noret_decl(f_771)
static void C_ccall f_771(C_word c,C_word *av) C_noret;
C_noret_decl(f_652)
static void C_ccall f_652(C_word c,C_word *av) C_noret;
C_noret_decl(f_779)
static void C_ccall f_779(C_word c,C_word *av) C_noret;
C_noret_decl(f_767)
static void C_ccall f_767(C_word c,C_word *av) C_noret;
C_noret_decl(f_763)
static void C_ccall f_763(C_word c,C_word *av) C_noret;
C_noret_decl(f_647)
static void C_ccall f_647(C_word c,C_word *av) C_noret;
C_noret_decl(f1100)
static void C_ccall f1100(C_word c,C_word *av) C_noret;
C_noret_decl(f_644)
static void C_ccall f_644(C_word c,C_word *av) C_noret;
C_noret_decl(f_684)
static void C_ccall f_684(C_word c,C_word *av) C_noret;
C_noret_decl(f_635)
static void C_ccall f_635(C_word c,C_word *av) C_noret;
C_noret_decl(f_632)
static void C_ccall f_632(C_word c,C_word *av) C_noret;
C_noret_decl(f_638)
static void C_ccall f_638(C_word c,C_word *av) C_noret;
C_noret_decl(f_690)
static void C_fcall f_690(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_688)
static void C_ccall f_688(C_word c,C_word *av) C_noret;
C_noret_decl(f_623)
static void C_ccall f_623(C_word c,C_word *av) C_noret;
C_noret_decl(f_629)
static void C_ccall f_629(C_word c,C_word *av) C_noret;
C_noret_decl(f_626)
static void C_ccall f_626(C_word c,C_word *av) C_noret;
C_noret_decl(f_944)
static void C_ccall f_944(C_word c,C_word *av) C_noret;
C_noret_decl(f1093)
static void C_ccall f1093(C_word c,C_word *av) C_noret;
C_noret_decl(f_609)
static void C_ccall f_609(C_word c,C_word *av) C_noret;
C_noret_decl(f_849)
static void C_ccall f_849(C_word c,C_word *av) C_noret;
C_noret_decl(f_844)
static void C_ccall f_844(C_word c,C_word *av) C_noret;
C_noret_decl(f_964)
static void C_ccall f_964(C_word c,C_word *av) C_noret;
C_noret_decl(f_960)
static void C_ccall f_960(C_word c,C_word *av) C_noret;
C_noret_decl(f_872)
static void C_ccall f_872(C_word c,C_word *av) C_noret;
C_noret_decl(f_874)
static void C_fcall f_874(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_958)
static void C_ccall f_958(C_word c,C_word *av) C_noret;
C_noret_decl(f_954)
static void C_ccall f_954(C_word c,C_word *av) C_noret;
C_noret_decl(f_791)
static void C_ccall f_791(C_word c,C_word *av) C_noret;
C_noret_decl(f_795)
static void C_ccall f_795(C_word c,C_word *av) C_noret;
C_noret_decl(f_797)
static void C_ccall f_797(C_word c,C_word *av) C_noret;
C_noret_decl(f_853)
static void C_ccall f_853(C_word c,C_word *av) C_noret;
C_noret_decl(f_983)
static void C_ccall f_983(C_word c,C_word *av) C_noret;
C_noret_decl(f_987)
static void C_ccall f_987(C_word c,C_word *av) C_noret;
C_noret_decl(f_552)
static void C_ccall f_552(C_word c,C_word *av) C_noret;
C_noret_decl(f_890)
static void C_ccall f_890(C_word c,C_word *av) C_noret;
C_noret_decl(f_558)
static void C_ccall f_558(C_word c,C_word *av) C_noret;
C_noret_decl(f_555)
static void C_ccall f_555(C_word c,C_word *av) C_noret;
C_noret_decl(f_993)
static void C_fcall f_993(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_991)
static void C_ccall f_991(C_word c,C_word *av) C_noret;
C_noret_decl(f_715)
static void C_ccall f_715(C_word c,C_word *av) C_noret;
C_noret_decl(f_1035)
static void C_ccall f_1035(C_word c,C_word *av) C_noret;
C_noret_decl(f_563)
static void C_ccall f_563(C_word c,C_word *av) C_noret;
C_noret_decl(f_1032)
static void C_ccall f_1032(C_word c,C_word *av) C_noret;
C_noret_decl(f_457)
static void C_ccall f_457(C_word c,C_word *av) C_noret;
C_noret_decl(f_1038)
static void C_ccall f_1038(C_word c,C_word *av) C_noret;

C_noret_decl(trf_727)
static void C_ccall trf_727(C_word c,C_word *av) C_noret;
static void C_ccall trf_727(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_727(t0,t1,t2);}

C_noret_decl(trf_599)
static void C_ccall trf_599(C_word c,C_word *av) C_noret;
static void C_ccall trf_599(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_599(t0,t1,t2);}

C_noret_decl(trf_923)
static void C_ccall trf_923(C_word c,C_word *av) C_noret;
static void C_ccall trf_923(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_923(t0,t1);}

C_noret_decl(trf_815)
static void C_ccall trf_815(C_word c,C_word *av) C_noret;
static void C_ccall trf_815(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_815(t0,t1,t2);}

C_noret_decl(trf_690)
static void C_ccall trf_690(C_word c,C_word *av) C_noret;
static void C_ccall trf_690(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_690(t0,t1,t2);}

C_noret_decl(trf_874)
static void C_ccall trf_874(C_word c,C_word *av) C_noret;
static void C_ccall trf_874(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_874(t0,t1,t2);}

C_noret_decl(trf_993)
static void C_ccall trf_993(C_word c,C_word *av) C_noret;
static void C_ccall trf_993(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_993(t0,t1,t2);}

/* a1024 in generate-report in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_1025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1025,2,av);}
/* chicken-bug.scm:154: print */
t2=*((C_word*)lf[11]+1);{
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

/* k781 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_783,2,av);}
/* chicken-bug.scm:47: print */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[48];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k569 in for-each-loop91 in k561 in for-each-loop78 in k621 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in ... */
static void C_ccall f_571(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_571,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_578,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_string_length(((C_word*)t0)[4]);
t4=C_fixnum_difference(C_fix(16),t3);
t5=C_i_fixnum_max(C_fix(1),t4);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[23]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=t2;
av2[2]=t5;
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_469,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_472,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_tcp_toplevel(2,av2);}}

/* k1018 in generate-report in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_1020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1020,2,av);}
/* chicken-bug.scm:155: print */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[89];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[90];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k785 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_787,2,av);}
/* chicken-bug.scm:45: ##sys#print */
t2=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k698 in for-each-loop78 in k621 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in ... */
static void C_ccall f_700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_700,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_690(t3,((C_word*)t0)[4],t2);}

/* k464 in k461 in k458 in k455 */
static void C_ccall f_466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_466,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_469,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k576 in k569 in for-each-loop91 in k561 in for-each-loop78 in k621 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in ... */
static void C_ccall f_578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_578,2,av);}
/* chicken-bug.scm:59: ##sys#print */
t2=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k461 in k458 in k455 */
static void C_ccall f_463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_463,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_466,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d13_toplevel(2,av2);}}

/* k458 in k455 */
static void C_ccall f_460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_460,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_463,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_475,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_478,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_utils_toplevel(2,av2);}}

/* k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_478,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_481,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k884 in g193 in main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_886,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_472,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_475,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k723 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in ... */
static void C_ccall f_725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_725,2,av);}
/* chicken-bug.scm:62: sort */
t2=C_fast_retrieve(lf[29]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=*((C_word*)lf[30]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop117 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in ... */
static void C_fcall f_727(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_727,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_752,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-bug.scm:62: g123 */
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

/* generate-report in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_1016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1016,4,av);}
a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1020,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1025,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:153: with-output-to-file */
t6=C_fast_retrieve(lf[91]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t4;
av2[2]=t2;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k1040 in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_1042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1042,2,av);}
/* chicken-bug.scm:157: main */
t2=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_872(3,av2);}}

/* for-each-loop91 in k561 in for-each-loop78 in k621 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in ... */
static void C_fcall f_599(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_599,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_609,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=*((C_word*)lf[4]+1);
t8=*((C_word*)lf[4]+1);
t9=C_i_check_port_2(*((C_word*)lf[4]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[5]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_571,a[2]=t5,a[3]=t7,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:59: ##sys#print */
t11=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t11;
av2[1]=t10;
av2[2]=t6;
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[4]+1);
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_481(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_481,2,av);}
a=C_alloc(20);
t2=C_mutate2((C_word*)lf[0]+1 /* (set! user-id ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_484,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate2((C_word*)lf[3]+1 /* (set! collect-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_494,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate2((C_word*)lf[58]+1 /* (set! usage ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_797,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate2((C_word*)lf[61]+1 /* (set! user-input ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_806,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate2((C_word*)lf[68]+1 /* (set! justify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_849,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate2((C_word*)lf[72]+1 /* (set! main ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_872,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate2((C_word*)lf[83]+1 /* (set! generate-report ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1016,tmp=(C_word)a,a+=2,tmp));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1032,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1042,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:157: command-line-arguments */
t11=C_fast_retrieve(lf[93]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}

/* user-id in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_484,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_492,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:39: current-user-id */
t3=C_fast_retrieve(lf[2]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k750 in map-loop117 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in ... */
static void C_ccall f_752(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_752,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_727(t6,((C_word*)t0)[5],t5);}

/* k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_498,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_501,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:43: print */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[56];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1001 in for-each-loop192 in main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_1003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1003,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_993(t3,((C_word*)t0)[4],t2);}

/* collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_494,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_498,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:42: print */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[57];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k490 in user-id in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_492,2,av);}
/* chicken-bug.scm:39: user-information */
t2=C_fast_retrieve(lf[1]);{
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

/* k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_501,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_504,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_791,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_795,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:44: current-seconds */
t5=C_fast_retrieve(lf[55]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_504(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_504,2,av);}
a=C_alloc(4);
t2=*((C_word*)lf[4]+1);
t3=*((C_word*)lf[4]+1);
t4=C_i_check_port_2(*((C_word*)lf[4]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[5]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_510,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:45: ##sys#print */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[51];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[4]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

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
if(C_unlikely(!C_demand_2(378))){
C_save(t1);
C_rereclaim2(378*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,94);
lf[0]=C_h_intern(&lf[0],7,"user-id");
lf[1]=C_h_intern(&lf[1],16,"user-information");
lf[2]=C_h_intern(&lf[2],15,"current-user-id");
lf[3]=C_h_intern(&lf[3],12,"collect-info");
lf[4]=C_h_intern(&lf[4],19,"\003sysstandard-output");
lf[5]=C_h_intern(&lf[5],6,"printf");
lf[6]=C_h_intern(&lf[6],7,"newline");
lf[7]=C_h_intern(&lf[7],7,"display");
lf[8]=C_h_intern(&lf[8],8,"read-all");
lf[9]=C_h_intern(&lf[9],20,"with-input-from-pipe");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000\013gcc -v 2>&1");
lf[11]=C_h_intern(&lf[11],5,"print");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\0000CC seems to be gcc, trying to obtain version...\012");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\003gcc");
lf[14]=C_h_intern(&lf[14],8,"feature\077");
lf[15]=C_h_intern(&lf[15],4,"unix");
lf[16]=C_h_intern(&lf[16],17,"\003syspeek-c-string");
lf[17]=C_h_intern(&lf[17],20,"with-input-from-file");
lf[18]=C_h_intern(&lf[18],13,"make-pathname");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000\020chicken-config.h");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\024\012\012chicken-config.h:\012");
lf[21]=C_h_intern(&lf[21],8,"for-each");
lf[22]=C_h_intern(&lf[22],9,"\003sysprint");
lf[23]=C_h_intern(&lf[23],15,"\003sysmake-string");
lf[24]=C_decode_literal(C_heaptop,"\376B\000\000\003\012  ");
lf[25]=C_h_intern(&lf[25],4,"chop");
lf[26]=C_h_intern(&lf[26],15,"keyword->string");
lf[27]=C_h_intern(&lf[27],12,"\003sysfeatures");
lf[28]=C_h_intern(&lf[28],3,"map");
lf[29]=C_h_intern(&lf[29],4,"sort");
lf[30]=C_h_intern(&lf[30],8,"string<\077");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000\011Features:");
lf[32]=C_h_intern(&lf[32],16,"\003syswrite-char-0");
lf[33]=C_h_intern(&lf[33],21,"\003sysinclude-pathnames");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\016Include path:\011");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\020Home directory:\011");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[37]=C_h_intern(&lf[37],12,"chicken-home");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\024CHICKEN version is:\012");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[40]=C_h_intern(&lf[40],15,"chicken-version");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\021\011build platform:\011");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[43]=C_h_intern(&lf[43],14,"build-platform");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\023\011software version:\011");
lf[45]=C_h_intern(&lf[45],16,"software-version");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\020\011software type:\011");
lf[47]=C_h_intern(&lf[47],13,"software-type");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\017\011machine type:\011");
lf[49]=C_h_intern(&lf[49],12,"machine-type");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\022Host information:\012");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\022User information:\011");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\006Date:\011");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\002\012\012");
lf[54]=C_h_intern(&lf[54],15,"seconds->string");
lf[55]=C_h_intern(&lf[55],15,"current-seconds");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\0002This is a bug report generated by chicken-bug(1).\012");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\0004\012--------------------------------------------------\012");
lf[58]=C_h_intern(&lf[58],5,"usage");
lf[59]=C_h_intern(&lf[59],4,"exit");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\0017usage: chicken-bug [FILENAME ...]\012\012  -help  -h            show this message"
"\012  -to-stdout           write bug report to standard output\012  -                 "
"   read description from standard input\012\012Generates a bug report file from user i"
"nput or alternatively\012from the contents of files given on the command line.\012");
lf[61]=C_h_intern(&lf[61],10,"user-input");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[63]=C_h_intern(&lf[63],26,"string-concatenate-reverse");
lf[64]=C_h_intern(&lf[64],9,"read-line");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\001jThis is the CHICKEN bug report generator. Please enter a detailed\012descripti"
"on of the problem you have encountered and enter CTRL-D (EOF)\012or a line consisti"
"ng only of \042.\042 to finish. Press CTRL-C to abort the program. You can\012also pass t"
"he description from a file (just abort now and re-invoke\012\042chicken-bug\042 with one "
"or more input files given on the command-line)\012");
lf[66]=C_h_intern(&lf[66],13,"\003systty-port\077");
lf[67]=C_h_intern(&lf[67],18,"\003sysstandard-input");
lf[68]=C_h_intern(&lf[68],7,"justify");
lf[69]=C_h_intern(&lf[69],17,"\003sysstring-append");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[71]=C_h_intern(&lf[71],14,"number->string");
lf[72]=C_h_intern(&lf[72],4,"main");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[75]=C_h_intern(&lf[75],13,"string-append");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\017\012\012User input:\012\012");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\006--help");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\002-h");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\005-help");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\012-to-stdout");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\016\012\012File added: ");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\002\012\012");
lf[83]=C_h_intern(&lf[83],15,"generate-report");
lf[84]=C_h_intern(&lf[84],21,"with-output-to-string");
lf[85]=C_h_intern(&lf[85],7,"sprintf");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\033chicken-bug-report.~a-~a-~a");
lf[87]=C_h_intern(&lf[87],19,"seconds->local-time");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\002\012\012");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000#\012A bug report has been written to `");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\002\047.");
lf[91]=C_h_intern(&lf[91],19,"with-output-to-file");
lf[92]=C_h_intern(&lf[92],25,"\003sysimplicit-exit-handler");
lf[93]=C_h_intern(&lf[93],22,"command-line-arguments");
C_register_lf2(lf,94,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_457,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_522,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_525,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_783,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:47: machine-type */
t4=C_fast_retrieve(lf[49]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_525,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_528,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_779,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:48: software-type */
t4=C_fast_retrieve(lf[47]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_528,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_531,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_775,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:49: software-version */
t4=C_fast_retrieve(lf[45]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k973 in k927 in k924 in k921 in k918 in main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_975,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_979,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:146: justify */
t4=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
f_849(3,av2);}}

/* user-input in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_806,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_810,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_844,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:91: ##sys#tty-port? */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[66]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[66]+1);
av2[1]=t3;
av2[2]=*((C_word*)lf[67]+1);
tp(3,av2);}}

/* k799 in usage in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_801,2,av);}
/* chicken-bug.scm:88: exit */
t2=C_fast_retrieve(lf[59]);{
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

/* k511 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_513,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_516,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:45: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[32]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[32]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_510(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_510,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_513,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_787,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1093,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:39: current-user-id */
t6=C_fast_retrieve(lf[2]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_516,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_519,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:45: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[32]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[32]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_519,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_522,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:46: print */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[50];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k977 in k973 in k927 in k924 in k921 in k918 in main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_979,2,av);}
/* chicken-bug.scm:146: sprintf */
t2=*((C_word*)lf[85]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[86];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k921 in k918 in main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_fcall f_923(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_923,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_926,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:136: newline */
t3=*((C_word*)lf[6]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k924 in k921 in k918 in main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_926,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_929,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_983,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:137: current-seconds */
t4=C_fast_retrieve(lf[55]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k927 in k924 in k921 in k918 in main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_929(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_929,2,av);}
a=C_alloc(13);
t2=C_slot(t1,C_fix(3));
t3=t2;
t4=C_slot(t1,C_fix(4));
t5=C_slot(t1,C_fix(5));
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_944,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:143: print */
t7=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_954,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=C_a_i_plus(&a,2,C_fix(1900),t5);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_975,a[2]=t6,a[3]=t8,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:146: justify */
t10=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=t4;
f_849(3,av2);}}}

/* k918 in main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_920,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_923,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t3=t2;
f_923(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_987,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_991,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:135: user-input */
t5=*((C_word*)lf[61]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
f_806(2,av2);}}}

/* k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in ... */
static void C_ccall f_540(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_540,2,av);}
a=C_alloc(4);
t2=*((C_word*)lf[4]+1);
t3=*((C_word*)lf[4]+1);
t4=C_i_check_port_2(*((C_word*)lf[4]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[5]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_546,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:53: ##sys#print */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[34];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[4]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in ... */
static void C_ccall f_546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_546,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_549,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:53: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[33]);
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in ... */
static void C_ccall f_549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_549,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_552,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:53: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[32]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[32]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* a675 in k672 in k627 in k624 in k621 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in ... */
static void C_ccall f_676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_676,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_684,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:66: read-all */
t3=C_fast_retrieve(lf[8]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k672 in k627 in k624 in k621 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in ... */
static void C_ccall f_674(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,3)))){
C_save_and_reclaim((void *)f_674,2,av);}
a=C_alloc(2);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_676,tmp=(C_word)a,a+=2,tmp);
/* chicken-bug.scm:64: with-input-from-file */
t3=C_fast_retrieve(lf[17]);{
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

/* k668 in k633 in k630 in k627 in k624 in k621 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in ... */
static void C_ccall f_670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_670,2,av);}
if(C_truep(C_i_string_equal_p(t1,lf[13]))){
/* chicken-bug.scm:68: feature? */
t2=C_fast_retrieve(lf[14]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[15];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_644(2,av2);}}}

/* k912 in g193 in main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_914,2,av);}
/* chicken-bug.scm:129: string-append */
t2=*((C_word*)lf[75]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=lf[81];
av2[4]=((C_word*)t0)[4];
av2[5]=lf[82];
av2[6]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k908 in g193 in main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_910,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_531(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_531,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_534,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_771,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:50: build-platform */
t4=C_fast_retrieve(lf[43]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 in ... */
static void C_ccall f_534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_534,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_537,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_767,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:51: chicken-version */
t4=C_fast_retrieve(lf[40]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in ... */
static void C_ccall f_537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_537,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_540,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_763,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:52: chicken-home */
t4=C_fast_retrieve(lf[37]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k658 in a651 in k645 in k642 in k633 in k630 in k627 in k624 in k621 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in ... */
static void C_ccall f_660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_660,2,av);}
/* chicken-bug.scm:72: display */
t2=*((C_word*)lf[7]+1);{
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

/* loop in k808 in user-input in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_fcall f_815(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_815,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_819,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:102: read-line */
t4=C_fast_retrieve(lf[64]);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k817 in loop in k808 in user-input in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_819,2,av);}
a=C_alloc(3);
t2=C_eofp(t1);
t3=(C_truep(t2)?t2:C_i_string_equal_p(lf[62],t1));
if(C_truep(t3)){
/* chicken-bug.scm:104: string-concatenate-reverse */
t4=C_fast_retrieve(lf[63]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
/* chicken-bug.scm:105: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_815(t5,((C_word*)t0)[2],t4);}}

/* k808 in user-input in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_810(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_810,2,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_815,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_815(t5,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k773 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_775,2,av);}
/* chicken-bug.scm:49: print */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[44];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k769 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 in ... */
static void C_ccall f_771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_771,2,av);}
/* chicken-bug.scm:50: print */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[41];
av2[3]=t1;
av2[4]=lf[42];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a651 in k645 in k642 in k633 in k630 in k627 in k624 in k621 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in ... */
static void C_ccall f_652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_652,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_660,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:72: read-all */
t3=C_fast_retrieve(lf[8]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k777 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_779,2,av);}
/* chicken-bug.scm:48: print */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[46];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k765 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in ... */
static void C_ccall f_767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_767,2,av);}
/* chicken-bug.scm:51: print */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[38];
av2[3]=t1;
av2[4]=lf[39];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k761 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in ... */
static void C_ccall f_763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_763,2,av);}
/* chicken-bug.scm:52: print */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[35];
av2[3]=t1;
av2[4]=lf[36];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k645 in k642 in k633 in k630 in k627 in k624 in k621 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in ... */
static void C_ccall f_647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,3)))){
C_save_and_reclaim((void *)f_647,2,av);}
a=C_alloc(2);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_652,tmp=(C_word)a,a+=2,tmp);
/* chicken-bug.scm:70: with-input-from-pipe */
t3=C_fast_retrieve(lf[9]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[10];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* f1100 in g193 in main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f1100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f1100,2,av);}
/* chicken-bug.scm:88: exit */
t2=C_fast_retrieve(lf[59]);{
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

/* k642 in k633 in k630 in k627 in k624 in k621 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in ... */
static void C_ccall f_644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_644,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_647,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:69: print */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[12];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* chicken-bug.scm:73: newline */
t2=*((C_word*)lf[6]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k682 in a675 in k672 in k627 in k624 in k621 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in ... */
static void C_ccall f_684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_684,2,av);}
/* chicken-bug.scm:66: display */
t2=*((C_word*)lf[7]+1);{
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

/* k633 in k630 in k627 in k624 in k621 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in ... */
static void C_ccall f_635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_635,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_638,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_644,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_670,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CC);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k630 in k627 in k624 in k621 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in ... */
static void C_ccall f_632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_632,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_635,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:67: newline */
t3=*((C_word*)lf[6]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k636 in k633 in k630 in k627 in k624 in k621 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in ... */
static void C_ccall f_638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_638,2,av);}
/* chicken-bug.scm:73: newline */
t2=*((C_word*)lf[6]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop78 in k621 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in ... */
static void C_fcall f_690(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_690,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_700,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_563,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:57: display */
t8=*((C_word*)lf[7]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[24];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k686 in k627 in k624 in k621 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in ... */
static void C_ccall f_688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_688,2,av);}
/* chicken-bug.scm:64: make-pathname */
t2=C_fast_retrieve(lf[18]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[19];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k621 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in ... */
static void C_ccall f_623(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_623,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_626,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_690,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_690(t6,t2,t1);}

/* k627 in k624 in k621 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in ... */
static void C_ccall f_629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_629,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_632,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_674,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_688,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_INCLUDE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k624 in k621 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in ... */
static void C_ccall f_626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_626,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_629,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:63: print */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[20];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k942 in k927 in k924 in k921 in k918 in main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_944,2,av);}
/* chicken-bug.scm:144: collect-info */
t2=*((C_word*)lf[3]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
f_494(2,av2);}}

/* f1093 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f1093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f1093,2,av);}
/* chicken-bug.scm:39: user-information */
t2=C_fast_retrieve(lf[1]);{
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

/* k607 in for-each-loop91 in k561 in for-each-loop78 in k621 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in ... */
static void C_ccall f_609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_609,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_599(t3,((C_word*)t0)[4],t2);}

/* justify in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_849,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_853,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:108: number->string */
t4=*((C_word*)lf[71]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k842 in user-input in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_844,2,av);}
if(C_truep(t1)){
/* chicken-bug.scm:92: print */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[65];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_810(2,av2);}}}

/* k962 in a959 in k952 in k927 in k924 in k921 in k918 in main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_964,2,av);}
/* chicken-bug.scm:150: collect-info */
t2=*((C_word*)lf[3]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
f_494(2,av2);}}

/* a959 in k952 in k927 in k924 in k921 in k918 in main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_960,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_964,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:149: print */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_872(C_word c,C_word *av){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_872,3,av);}
a=C_alloc(23);
t3=lf[73];
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_874,a[2]=t6,a[3]=t4,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=C_i_check_list_2(t2,lf[21]);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_920,a[2]=t8,a[3]=t1,a[4]=t4,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_993,a[2]=t13,a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t15=((C_word*)t13)[1];
f_993(t15,t11,t2);}

/* g193 in main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_fcall f_874(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_874,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_string_equal_p(lf[74],t2))){
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_886,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_890,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:121: user-input */
t6=*((C_word*)lf[61]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
f_806(2,av2);}}
else{
t3=t2;
if(C_truep((C_truep(C_i_equalp(t3,lf[77]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[78]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[79]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
t4=t1;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1100,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:76: print */
t6=*((C_word*)lf[11]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[60];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t4=t2;
if(C_truep(C_u_i_string_equal_p(lf[80],t4))){
t5=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_910,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_914,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:132: read-all */
t8=C_fast_retrieve(lf[8]);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}}}

/* k956 in k952 in k927 in k924 in k921 in k918 in main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_958,2,av);}
/* chicken-bug.scm:145: generate-report */
t2=*((C_word*)lf[83]+1);{
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
f_1016(4,av2);}}

/* k952 in k927 in k924 in k921 in k918 in main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_954,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_958,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_960,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:147: with-output-to-string */
t5=C_fast_retrieve(lf[84]);{
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

/* k789 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_791,2,av);}
/* chicken-bug.scm:44: print */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[52];
av2[3]=t1;
av2[4]=lf[53];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k793 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_795,2,av);}
/* chicken-bug.scm:44: seconds->string */
t2=C_fast_retrieve(lf[54]);{
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

/* usage in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_797(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_797,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_801,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:76: print */
t4=*((C_word*)lf[11]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[60];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k851 in justify in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_853,2,av);}
t2=C_block_size(t1);
if(C_truep(C_fixnum_greaterp(t2,C_fix(1)))){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[69]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[69]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[70];
av2[3]=t1;
tp(4,av2);}}}

/* k981 in k924 in k921 in k918 in main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_983,2,av);}
/* chicken-bug.scm:137: seconds->local-time */
t2=C_fast_retrieve(lf[87]);{
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

/* k985 in k918 in main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_987,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_923(t3,t2);}

/* k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in k470 in ... */
static void C_ccall f_552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_552,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_555,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:53: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[32]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[32]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k888 in g193 in main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_890,2,av);}
/* chicken-bug.scm:121: string-append */
t2=*((C_word*)lf[75]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=lf[76];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in ... */
static void C_ccall f_558(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_558,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_623,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_715,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_fast_retrieve(lf[26]);
t9=C_fast_retrieve(lf[27]);
t10=C_i_check_list_2(C_fast_retrieve(lf[27]),lf[28]);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_725,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_727,a[2]=t6,a[3]=t13,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_727(t15,t11,C_fast_retrieve(lf[27]));}

/* k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in k476 in k473 in ... */
static void C_ccall f_555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_555,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_558,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:54: print */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[31];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* for-each-loop192 in main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_fcall f_993(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_993,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1003,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-bug.scm:113: g193 */
t5=((C_word*)t0)[3];
f_874(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k989 in k918 in main in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_991,2,av);}
/* chicken-bug.scm:135: string-append */
t2=*((C_word*)lf[75]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=lf[88];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k713 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in collect-info in k479 in ... */
static void C_ccall f_715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_715,2,av);}
/* chicken-bug.scm:62: chop */
t2=C_fast_retrieve(lf[25]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(5);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1033 in k1030 in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_1035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1035,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k561 in for-each-loop78 in k621 in k556 in k553 in k550 in k547 in k544 in k538 in k535 in k532 in k529 in k526 in k523 in k520 in k517 in k514 in k511 in k508 in k502 in k499 in k496 in ... */
static void C_ccall f_563(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_563,2,av);}
a=C_alloc(5);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[21]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_599,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_599(t6,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1030 in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_1032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1032,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1035,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1038,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[92]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[92]+1);
av2[1]=t3;
tp(2,av2);}}

/* k455 */
static void C_ccall f_457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_457,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_460,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1036 in k1030 in k479 in k476 in k473 in k470 in k467 in k464 in k461 in k458 in k455 */
static void C_ccall f_1038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1038,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[108] = {
{"f_1025:chicken_2dbug_2escm",(void*)f_1025},
{"f_783:chicken_2dbug_2escm",(void*)f_783},
{"f_571:chicken_2dbug_2escm",(void*)f_571},
{"f_469:chicken_2dbug_2escm",(void*)f_469},
{"f_1020:chicken_2dbug_2escm",(void*)f_1020},
{"f_787:chicken_2dbug_2escm",(void*)f_787},
{"f_700:chicken_2dbug_2escm",(void*)f_700},
{"f_466:chicken_2dbug_2escm",(void*)f_466},
{"f_578:chicken_2dbug_2escm",(void*)f_578},
{"f_463:chicken_2dbug_2escm",(void*)f_463},
{"f_460:chicken_2dbug_2escm",(void*)f_460},
{"f_475:chicken_2dbug_2escm",(void*)f_475},
{"f_478:chicken_2dbug_2escm",(void*)f_478},
{"f_886:chicken_2dbug_2escm",(void*)f_886},
{"f_472:chicken_2dbug_2escm",(void*)f_472},
{"f_725:chicken_2dbug_2escm",(void*)f_725},
{"f_727:chicken_2dbug_2escm",(void*)f_727},
{"f_1016:chicken_2dbug_2escm",(void*)f_1016},
{"f_1042:chicken_2dbug_2escm",(void*)f_1042},
{"f_599:chicken_2dbug_2escm",(void*)f_599},
{"f_481:chicken_2dbug_2escm",(void*)f_481},
{"f_484:chicken_2dbug_2escm",(void*)f_484},
{"f_752:chicken_2dbug_2escm",(void*)f_752},
{"f_498:chicken_2dbug_2escm",(void*)f_498},
{"f_1003:chicken_2dbug_2escm",(void*)f_1003},
{"f_494:chicken_2dbug_2escm",(void*)f_494},
{"f_492:chicken_2dbug_2escm",(void*)f_492},
{"f_501:chicken_2dbug_2escm",(void*)f_501},
{"f_504:chicken_2dbug_2escm",(void*)f_504},
{"toplevel:chicken_2dbug_2escm",(void*)C_toplevel},
{"f_522:chicken_2dbug_2escm",(void*)f_522},
{"f_525:chicken_2dbug_2escm",(void*)f_525},
{"f_528:chicken_2dbug_2escm",(void*)f_528},
{"f_975:chicken_2dbug_2escm",(void*)f_975},
{"f_806:chicken_2dbug_2escm",(void*)f_806},
{"f_801:chicken_2dbug_2escm",(void*)f_801},
{"f_513:chicken_2dbug_2escm",(void*)f_513},
{"f_510:chicken_2dbug_2escm",(void*)f_510},
{"f_516:chicken_2dbug_2escm",(void*)f_516},
{"f_519:chicken_2dbug_2escm",(void*)f_519},
{"f_979:chicken_2dbug_2escm",(void*)f_979},
{"f_923:chicken_2dbug_2escm",(void*)f_923},
{"f_926:chicken_2dbug_2escm",(void*)f_926},
{"f_929:chicken_2dbug_2escm",(void*)f_929},
{"f_920:chicken_2dbug_2escm",(void*)f_920},
{"f_540:chicken_2dbug_2escm",(void*)f_540},
{"f_546:chicken_2dbug_2escm",(void*)f_546},
{"f_549:chicken_2dbug_2escm",(void*)f_549},
{"f_676:chicken_2dbug_2escm",(void*)f_676},
{"f_674:chicken_2dbug_2escm",(void*)f_674},
{"f_670:chicken_2dbug_2escm",(void*)f_670},
{"f_914:chicken_2dbug_2escm",(void*)f_914},
{"f_910:chicken_2dbug_2escm",(void*)f_910},
{"f_531:chicken_2dbug_2escm",(void*)f_531},
{"f_534:chicken_2dbug_2escm",(void*)f_534},
{"f_537:chicken_2dbug_2escm",(void*)f_537},
{"f_660:chicken_2dbug_2escm",(void*)f_660},
{"f_815:chicken_2dbug_2escm",(void*)f_815},
{"f_819:chicken_2dbug_2escm",(void*)f_819},
{"f_810:chicken_2dbug_2escm",(void*)f_810},
{"f_775:chicken_2dbug_2escm",(void*)f_775},
{"f_771:chicken_2dbug_2escm",(void*)f_771},
{"f_652:chicken_2dbug_2escm",(void*)f_652},
{"f_779:chicken_2dbug_2escm",(void*)f_779},
{"f_767:chicken_2dbug_2escm",(void*)f_767},
{"f_763:chicken_2dbug_2escm",(void*)f_763},
{"f_647:chicken_2dbug_2escm",(void*)f_647},
{"f1100:chicken_2dbug_2escm",(void*)f1100},
{"f_644:chicken_2dbug_2escm",(void*)f_644},
{"f_684:chicken_2dbug_2escm",(void*)f_684},
{"f_635:chicken_2dbug_2escm",(void*)f_635},
{"f_632:chicken_2dbug_2escm",(void*)f_632},
{"f_638:chicken_2dbug_2escm",(void*)f_638},
{"f_690:chicken_2dbug_2escm",(void*)f_690},
{"f_688:chicken_2dbug_2escm",(void*)f_688},
{"f_623:chicken_2dbug_2escm",(void*)f_623},
{"f_629:chicken_2dbug_2escm",(void*)f_629},
{"f_626:chicken_2dbug_2escm",(void*)f_626},
{"f_944:chicken_2dbug_2escm",(void*)f_944},
{"f1093:chicken_2dbug_2escm",(void*)f1093},
{"f_609:chicken_2dbug_2escm",(void*)f_609},
{"f_849:chicken_2dbug_2escm",(void*)f_849},
{"f_844:chicken_2dbug_2escm",(void*)f_844},
{"f_964:chicken_2dbug_2escm",(void*)f_964},
{"f_960:chicken_2dbug_2escm",(void*)f_960},
{"f_872:chicken_2dbug_2escm",(void*)f_872},
{"f_874:chicken_2dbug_2escm",(void*)f_874},
{"f_958:chicken_2dbug_2escm",(void*)f_958},
{"f_954:chicken_2dbug_2escm",(void*)f_954},
{"f_791:chicken_2dbug_2escm",(void*)f_791},
{"f_795:chicken_2dbug_2escm",(void*)f_795},
{"f_797:chicken_2dbug_2escm",(void*)f_797},
{"f_853:chicken_2dbug_2escm",(void*)f_853},
{"f_983:chicken_2dbug_2escm",(void*)f_983},
{"f_987:chicken_2dbug_2escm",(void*)f_987},
{"f_552:chicken_2dbug_2escm",(void*)f_552},
{"f_890:chicken_2dbug_2escm",(void*)f_890},
{"f_558:chicken_2dbug_2escm",(void*)f_558},
{"f_555:chicken_2dbug_2escm",(void*)f_555},
{"f_993:chicken_2dbug_2escm",(void*)f_993},
{"f_991:chicken_2dbug_2escm",(void*)f_991},
{"f_715:chicken_2dbug_2escm",(void*)f_715},
{"f_1035:chicken_2dbug_2escm",(void*)f_1035},
{"f_563:chicken_2dbug_2escm",(void*)f_563},
{"f_1032:chicken_2dbug_2escm",(void*)f_1032},
{"f_457:chicken_2dbug_2escm",(void*)f_457},
{"f_1038:chicken_2dbug_2escm",(void*)f_1038},
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
S|  map		1
S|  for-each		3
S|  printf		3
o|eliminated procedure checks: 18 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|specializations:
o|  1 (string=? string string)
o|  1 (string-append string string)
o|  1 (> fixnum fixnum)
o|  1 (string-length string)
o|  1 (current-input-port)
o|  1 (##sys#check-list (or pair list) *)
o|  1 (make-string fixnum char)
o|  3 (##sys#check-output-port * * *)
(o e)|safe calls: 95 
o|safe globals: (generate-report main justify user-input usage collect-info user-id constant50) 
o|propagated global variable: out5862 ##sys#standard-output 
o|substituted constant variable: a506 
o|substituted constant variable: a507 
o|propagated global variable: out6771 ##sys#standard-output 
o|substituted constant variable: a542 
o|substituted constant variable: a543 
o|inlining procedure: k636 
o|inlining procedure: k636 
o|inlining procedure: k692 
o|contracted procedure: "(chicken-bug.scm:55) g7986" 
o|inlining procedure: k601 
o|contracted procedure: "(chicken-bug.scm:58) g9299" 
o|propagated global variable: out102106 ##sys#standard-output 
o|substituted constant variable: a567 
o|substituted constant variable: a568 
o|substituted constant variable: a583 
o|propagated global variable: out102106 ##sys#standard-output 
o|inlining procedure: k601 
o|inlining procedure: k692 
o|inlining procedure: k729 
o|inlining procedure: k729 
o|propagated global variable: g129133 ##sys#features 
o|propagated global variable: out6771 ##sys#standard-output 
o|propagated global variable: out5862 ##sys#standard-output 
o|inlining procedure: k820 
o|inlining procedure: k820 
o|inlining procedure: k854 
o|inlining procedure: k854 
o|substituted constant variable: a863 
o|substituted constant variable: a869 
o|inlining procedure: k876 
o|inlining procedure: k876 
o|substituted constant variable: a903 
o|inlining procedure: k900 
o|inlining procedure: k900 
o|inlining procedure: k939 
o|inlining procedure: k939 
o|substituted constant variable: constant50 
o|inlining procedure: k995 
o|inlining procedure: k995 
o|replaced variables: 78 
o|removed binding forms: 73 
o|removed side-effect free assignment to unused variable: constant50 
o|propagated global variable: out5862 ##sys#standard-output 
o|propagated global variable: out6771 ##sys#standard-output 
o|propagated global variable: out102106 ##sys#standard-output 
o|replaced variables: 5 
o|removed binding forms: 91 
o|inlining procedure: "(chicken-bug.scm:45) user-id" 
o|inlining procedure: "(chicken-bug.scm:123) usage" 
o|removed binding forms: 7 
o|substituted constant variable: code1671098 
o|removed binding forms: 1 
o|simplifications: ((if . 1) (##core#call . 34)) 
o|  call simplifications:
o|    +
o|    member
o|    ##sys#size
o|    fx>
o|    eof-object?
o|    cons	3
o|    ##sys#setslot
o|    ##sys#check-list	3
o|    pair?	4
o|    string-length
o|    fx-
o|    fxmax
o|    ##sys#slot	12
o|    string=?	3
o|contracted procedure: k661 
o|contracted procedure: k695 
o|contracted procedure: k705 
o|contracted procedure: k709 
o|contracted procedure: k592 
o|contracted procedure: k604 
o|contracted procedure: k614 
o|contracted procedure: k618 
o|contracted procedure: k589 
o|contracted procedure: k585 
o|contracted procedure: k580 
o|contracted procedure: k717 
o|contracted procedure: k720 
o|contracted procedure: k732 
o|contracted procedure: k735 
o|contracted procedure: k738 
o|contracted procedure: k746 
o|contracted procedure: k754 
o|propagated global variable: g129133 ##sys#features 
o|contracted procedure: k823 
o|contracted procedure: k826 
o|contracted procedure: k836 
o|contracted procedure: k866 
o|contracted procedure: k857 
o|contracted procedure: k879 
o|contracted procedure: k894 
o|contracted procedure: k915 
o|contracted procedure: k930 
o|contracted procedure: k933 
o|contracted procedure: k936 
o|contracted procedure: k969 
o|contracted procedure: k998 
o|contracted procedure: k1008 
o|contracted procedure: k1012 
o|simplifications: ((if . 1) (let . 8)) 
o|removed binding forms: 33 
o|replaced variables: 16 
o|removed binding forms: 7 
o|customizable procedures: (g193200 for-each-loop192209 k921 loop170 map-loop117134 for-each-loop91109 for-each-loop78141) 
o|calls to known targets: 23 
o|fast box initializations: 5 
*/
/* end of file */

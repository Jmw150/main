/* Generated from srfi-13.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:51
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: srfi-13.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file srfi-13.import.c
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

static C_TLS C_word lf[11];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,18),40,97,50,54,55,32,102,111,114,109,51,32,114,52,32,99,53,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_250)
static void C_ccall f_250(C_word c,C_word *av) C_noret;
C_noret_decl(f_244)
static void C_ccall f_244(C_word c,C_word *av) C_noret;
C_noret_decl(f_247)
static void C_ccall f_247(C_word c,C_word *av) C_noret;
C_noret_decl(f_241)
static void C_ccall f_241(C_word c,C_word *av) C_noret;
C_noret_decl(f_262)
static void C_ccall f_262(C_word c,C_word *av) C_noret;
C_noret_decl(f_268)
static void C_ccall f_268(C_word c,C_word *av) C_noret;
C_noret_decl(f_266)
static void C_ccall f_266(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_272)
static void C_ccall f_272(C_word c,C_word *av) C_noret;
C_noret_decl(f_296)
static void C_ccall f_296(C_word c,C_word *av) C_noret;
C_noret_decl(f_293)
static void C_ccall f_293(C_word c,C_word *av) C_noret;
C_noret_decl(f_290)
static void C_ccall f_290(C_word c,C_word *av) C_noret;

/* k248 in k245 in k242 in k239 */
static void C_ccall f_250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_250,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k242 in k239 */
static void C_ccall f_244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_244,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_247,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k245 in k242 in k239 */
static void C_ccall f_247(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_247,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_250,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_262,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_266,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_268,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
/* srfi-13.import.scm:115: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[10]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k239 */
static void C_ccall f_241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_241,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_244,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k260 in k245 in k242 in k239 */
static void C_ccall f_262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_262,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,lf[0],C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_list(&a,1,t2);
/* srfi-13.import.scm:27: ##sys#register-primitive-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[2];
av2[3]=lf[3];
av2[4]=t3;
tp(5,av2);}}

/* a267 in k245 in k242 in k239 */
static void C_ccall f_268(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_268,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_272,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-13.import.scm:117: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[8]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t5;
av2[2]=lf[0];
av2[3]=t2;
av2[4]=lf[9];
tp(5,av2);}}

/* k264 in k245 in k242 in k239 */
static void C_ccall f_266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_266,2,av);}
/* srfi-13.import.scm:114: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[4]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[4]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[0];
tp(4,av2);}}

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
if(C_unlikely(!C_demand_2(950))){
C_save(t1);
C_rereclaim2(950*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,11);
lf[0]=C_h_intern(&lf[0],20,"let-string-start+end");
lf[1]=C_h_intern(&lf[1],29,"\003sysregister-primitive-module");
lf[2]=C_h_intern(&lf[2],7,"srfi-13");
lf[3]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\024check-substring-spec\376\003\000\000\002\376\001\000\000\010kmp-step\376\003\000\000\002\376\001\000\000\027make-kmp-restart-vecto"
"r\376\003\000\000\002\376\001\000\000\024reverse-list->string\376\003\000\000\002\376\001\000\000\014string->list\376\003\000\000\002\376\001\000\000\012string-any\376\003\000\000\002\376\001"
"\000\000\024string-append/shared\376\003\000\000\002\376\001\000\000\012string-ci<\376\003\000\000\002\376\001\000\000\013string-ci<=\376\003\000\000\002\376\001\000\000\013string"
"-ci<>\376\003\000\000\002\376\001\000\000\012string-ci=\376\003\000\000\002\376\001\000\000\012string-ci>\376\003\000\000\002\376\001\000\000\013string-ci>=\376\003\000\000\002\376\001\000\000\016stri"
"ng-compare\376\003\000\000\002\376\001\000\000\021string-compare-ci\376\003\000\000\002\376\001\000\000\022string-concatenate\376\003\000\000\002\376\001\000\000\032strin"
"g-concatenate-reverse\376\003\000\000\002\376\001\000\000!string-concatenate-reverse/shared\376\003\000\000\002\376\001\000\000\031string"
"-concatenate/shared\376\003\000\000\002\376\001\000\000\017string-contains\376\003\000\000\002\376\001\000\000\022string-contains-ci\376\003\000\000\002\376\001\000"
"\000\013string-copy\376\003\000\000\002\376\001\000\000\014string-copy!\376\003\000\000\002\376\001\000\000\014string-count\376\003\000\000\002\376\001\000\000\015string-delete"
"\376\003\000\000\002\376\001\000\000\017string-downcase\376\003\000\000\002\376\001\000\000\020string-downcase!\376\003\000\000\002\376\001\000\000\013string-drop\376\003\000\000\002\376\001\000"
"\000\021string-drop-right\376\003\000\000\002\376\001\000\000\014string-every\376\003\000\000\002\376\001\000\000\014string-fill!\376\003\000\000\002\376\001\000\000\015string-"
"filter\376\003\000\000\002\376\001\000\000\013string-fold\376\003\000\000\002\376\001\000\000\021string-fold-right\376\003\000\000\002\376\001\000\000\017string-for-each\376"
"\003\000\000\002\376\001\000\000\025string-for-each-index\376\003\000\000\002\376\001\000\000\014string-index\376\003\000\000\002\376\001\000\000\022string-index-right"
"\376\003\000\000\002\376\001\000\000\013string-join\376\003\000\000\002\376\001\000\000\031string-kmp-partial-search\376\003\000\000\002\376\001\000\000\012string-map\376\003\000\000"
"\002\376\001\000\000\013string-map!\376\003\000\000\002\376\001\000\000\014string-null\077\376\003\000\000\002\376\001\000\000\012string-pad\376\003\000\000\002\376\001\000\000\020string-pad-"
"right\376\003\000\000\002\376\001\000\000\034string-parse-final-start+end\376\003\000\000\002\376\001\000\000\026string-parse-start+end\376\003\000\000\002"
"\376\001\000\000\021string-prefix-ci\077\376\003\000\000\002\376\001\000\000\024string-prefix-length\376\003\000\000\002\376\001\000\000\027string-prefix-leng"
"th-ci\376\003\000\000\002\376\001\000\000\016string-prefix\077\376\003\000\000\002\376\001\000\000\016string-replace\376\003\000\000\002\376\001\000\000\016string-reverse\376\003\000"
"\000\002\376\001\000\000\017string-reverse!\376\003\000\000\002\376\001\000\000\013string-skip\376\003\000\000\002\376\001\000\000\021string-skip-right\376\003\000\000\002\376\001\000\000\021"
"string-suffix-ci\077\376\003\000\000\002\376\001\000\000\024string-suffix-length\376\003\000\000\002\376\001\000\000\027string-suffix-length-ci"
"\376\003\000\000\002\376\001\000\000\016string-suffix\077\376\003\000\000\002\376\001\000\000\017string-tabulate\376\003\000\000\002\376\001\000\000\013string-take\376\003\000\000\002\376\001\000\000\021"
"string-take-right\376\003\000\000\002\376\001\000\000\020string-titlecase\376\003\000\000\002\376\001\000\000\021string-titlecase!\376\003\000\000\002\376\001\000\000\017"
"string-tokenize\376\003\000\000\002\376\001\000\000\013string-trim\376\003\000\000\002\376\001\000\000\020string-trim-both\376\003\000\000\002\376\001\000\000\021string-t"
"rim-right\376\003\000\000\002\376\001\000\000\015string-unfold\376\003\000\000\002\376\001\000\000\023string-unfold-right\376\003\000\000\002\376\001\000\000\015string-up"
"case\376\003\000\000\002\376\001\000\000\016string-upcase!\376\003\000\000\002\376\001\000\000\015string-xcopy!\376\003\000\000\002\376\001\000\000\007string<\376\003\000\000\002\376\001\000\000\010st"
"ring<=\376\003\000\000\002\376\001\000\000\010string<>\376\003\000\000\002\376\001\000\000\007string=\376\003\000\000\002\376\001\000\000\007string>\376\003\000\000\002\376\001\000\000\010string>=\376\003\000\000"
"\002\376\001\000\000\022substring-spec-ok\077\376\003\000\000\002\376\001\000\000\020substring/shared\376\003\000\000\002\376\001\000\000\012xsubstring\376\377\016");
lf[4]=C_h_intern(&lf[4],22,"\003sysensure-transformer");
lf[5]=C_h_intern(&lf[5],28,"string-parse-final-start+end");
lf[6]=C_h_intern(&lf[6],22,"string-parse-start+end");
lf[7]=C_h_intern(&lf[7],7,"receive");
lf[8]=C_h_intern(&lf[8],16,"\003syscheck-syntax");
lf[9]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[10]=C_h_intern(&lf[10],18,"\003syser-transformer");
C_register_lf2(lf,11,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_241,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k270 in a267 in k245 in k242 in k239 */
static void C_ccall f_272(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_272,2,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=C_i_cadddr(((C_word*)t0)[2]);
t7=t6;
t8=C_i_cddddr(((C_word*)t0)[2]);
t9=C_i_car(t8);
t10=t9;
t11=C_i_cddddr(((C_word*)t0)[2]);
t12=C_i_cdr(t11);
t13=t12;
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_290,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t10,a[6]=t13,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
/* srfi-13.import.scm:123: r */
t15=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t15;
av2[1]=t14;
av2[2]=lf[7];
((C_proc)C_fast_retrieve_proc(t15))(3,av2);}}

/* k294 in k291 in k288 in k270 in a267 in k245 in k242 in k239 */
static void C_ccall f_296(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,c,1)))){
C_save_and_reclaim((void *)f_296,2,av);}
a=C_alloc(30);
t2=C_i_cddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t2))){
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_u_i_car(((C_word*)t0)[2]);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_u_i_car(t5);
t7=C_a_i_list(&a,3,t3,t4,t6);
t8=C_a_i_list(&a,4,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);
t9=C_a_i_cons(&a,2,t8,((C_word*)t0)[7]);
t10=C_a_i_cons(&a,2,t7,t9);
t11=((C_word*)t0)[8];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[9],t10);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t3=C_a_i_list(&a,4,t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[7]);
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],t4);
t6=((C_word*)t0)[8];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[9],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k291 in k288 in k270 in a267 in k245 in k242 in k239 */
static void C_ccall f_293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_293,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_296,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* srfi-13.import.scm:125: r */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[5];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k288 in k270 in a267 in k245 in k242 in k239 */
static void C_ccall f_290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_290,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_293,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* srfi-13.import.scm:124: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[6];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[13] = {
{"f_250:srfi_2d13_2eimport_2escm",(void*)f_250},
{"f_244:srfi_2d13_2eimport_2escm",(void*)f_244},
{"f_247:srfi_2d13_2eimport_2escm",(void*)f_247},
{"f_241:srfi_2d13_2eimport_2escm",(void*)f_241},
{"f_262:srfi_2d13_2eimport_2escm",(void*)f_262},
{"f_268:srfi_2d13_2eimport_2escm",(void*)f_268},
{"f_266:srfi_2d13_2eimport_2escm",(void*)f_266},
{"toplevel:srfi_2d13_2eimport_2escm",(void*)C_toplevel},
{"f_272:srfi_2d13_2eimport_2escm",(void*)f_272},
{"f_296:srfi_2d13_2eimport_2escm",(void*)f_296},
{"f_293:srfi_2d13_2eimport_2escm",(void*)f_293},
{"f_290:srfi_2d13_2eimport_2escm",(void*)f_290},
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
o|specializations:
o|  1 (cadr (pair * pair))
o|  1 (car pair)
(o e)|safe calls: 21 
o|inlining procedure: k297 
o|inlining procedure: k297 
o|replaced variables: 18 
o|removed binding forms: 5 
o|removed binding forms: 19 
o|simplifications: ((##core#call . 21)) 
o|  call simplifications:
o|    cadr
o|    cadddr
o|    car
o|    cddddr	2
o|    cdr
o|    cddr
o|    pair?
o|    caddr	2
o|    ##sys#cons	6
o|    ##sys#list	5
o|contracted procedure: k256 
o|contracted procedure: k252 
o|contracted procedure: k273 
o|contracted procedure: k276 
o|contracted procedure: k279 
o|contracted procedure: k355 
o|contracted procedure: k282 
o|contracted procedure: k351 
o|contracted procedure: k285 
o|contracted procedure: k347 
o|contracted procedure: k300 
o|contracted procedure: k323 
o|contracted procedure: k311 
o|contracted procedure: k319 
o|contracted procedure: k315 
o|contracted procedure: k307 
o|contracted procedure: k343 
o|contracted procedure: k339 
o|contracted procedure: k335 
o|simplifications: ((let . 1)) 
o|removed binding forms: 19 
o|replaced variables: 2 
o|removed binding forms: 2 
*/
/* end of file */

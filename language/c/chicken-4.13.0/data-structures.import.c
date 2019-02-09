/* Generated from data-structures.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: data-structures.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file data-structures.import.c
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

static C_TLS C_word lf[3];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_202)
static void C_ccall f_202(C_word c,C_word *av) C_noret;
C_noret_decl(f_205)
static void C_ccall f_205(C_word c,C_word *av) C_noret;
C_noret_decl(f_208)
static void C_ccall f_208(C_word c,C_word *av) C_noret;
C_noret_decl(f_199)
static void C_ccall f_199(C_word c,C_word *av) C_noret;

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
if(C_unlikely(!C_demand_2(584))){
C_save(t1);
C_rereclaim2(584*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,3);
lf[0]=C_h_intern(&lf[0],29,"\003sysregister-primitive-module");
lf[1]=C_h_intern(&lf[1],15,"data-structures");
lf[2]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010->string\376\003\000\000\002\376\001\000\000\011alist-ref\376\003\000\000\002\376\001\000\000\015alist-update!\376\003\000\000\002\376\001\000\000\014alist-upda"
"te\376\003\000\000\002\376\001\000\000\004any\077\376\003\000\000\002\376\001\000\000\005atom\077\376\003\000\000\002\376\001\000\000\015binary-search\376\003\000\000\002\376\001\000\000\007butlast\376\003\000\000\002\376\001\000\000"
"\004chop\376\003\000\000\002\376\001\000\000\012complement\376\003\000\000\002\376\001\000\000\007compose\376\003\000\000\002\376\001\000\000\010compress\376\003\000\000\002\376\001\000\000\004conc\376\003\000\000\002\376"
"\001\000\000\007conjoin\376\003\000\000\002\376\001\000\000\012constantly\376\003\000\000\002\376\001\000\000\007disjoin\376\003\000\000\002\376\001\000\000\004each\376\003\000\000\002\376\001\000\000\007flatten\376"
"\003\000\000\002\376\001\000\000\004flip\376\003\000\000\002\376\001\000\000\010identity\376\003\000\000\002\376\001\000\000\013intersperse\376\003\000\000\002\376\001\000\000\004join\376\003\000\000\002\376\001\000\000\013list"
"->queue\376\003\000\000\002\376\001\000\000\010list-of\077\376\003\000\000\002\376\001\000\000\012make-queue\376\003\000\000\002\376\001\000\000\005merge\376\003\000\000\002\376\001\000\000\006merge!\376\003\000\000"
"\002\376\001\000\000\001o\376\003\000\000\002\376\001\000\000\013queue->list\376\003\000\000\002\376\001\000\000\012queue-add!\376\003\000\000\002\376\001\000\000\014queue-empty\077\376\003\000\000\002\376\001\000\000\013"
"queue-first\376\003\000\000\002\376\001\000\000\012queue-last\376\003\000\000\002\376\001\000\000\014queue-length\376\003\000\000\002\376\001\000\000\020queue-push-back!\376"
"\003\000\000\002\376\001\000\000\025queue-push-back-list!\376\003\000\000\002\376\001\000\000\015queue-remove!\376\003\000\000\002\376\001\000\000\006queue\077\376\003\000\000\002\376\001\000\000\006r"
"assoc\376\003\000\000\002\376\001\000\000\025reverse-string-append\376\003\000\000\002\376\001\000\000\004sort\376\003\000\000\002\376\001\000\000\005sort!\376\003\000\000\002\376\001\000\000\007sorte"
"d\077\376\003\000\000\002\376\001\000\000\020topological-sort\376\003\000\000\002\376\001\000\000\014string-chomp\376\003\000\000\002\376\001\000\000\013string-chop\376\003\000\000\002\376\001\000\000"
"\017string-compare3\376\003\000\000\002\376\001\000\000\022string-compare3-ci\376\003\000\000\002\376\001\000\000\022string-intersperse\376\003\000\000\002\376\001\000"
"\000\014string-split\376\003\000\000\002\376\001\000\000\020string-translate\376\003\000\000\002\376\001\000\000\021string-translate\052\376\003\000\000\002\376\001\000\000\016sub"
"string-ci=\077\376\003\000\000\002\376\001\000\000\017substring-index\376\003\000\000\002\376\001\000\000\022substring-index-ci\376\003\000\000\002\376\001\000\000\013substr"
"ing=\077\376\003\000\000\002\376\001\000\000\005tail\077\376\377\016");
C_register_lf2(lf,3,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_199,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k200 in k197 */
static void C_ccall f_202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_202,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_205,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k203 in k200 in k197 */
static void C_ccall f_205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_205,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_208,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* data-structures.import.scm:27: ##sys#register-primitive-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[0]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[0]+1);
av2[1]=t2;
av2[2]=lf[1];
av2[3]=lf[2];
tp(4,av2);}}

/* k206 in k203 in k200 in k197 */
static void C_ccall f_208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_208,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k197 */
static void C_ccall f_199(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_199,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_202,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[6] = {
{"toplevel:data_2dstructures_2eimport_2escm",(void*)C_toplevel},
{"f_202:data_2dstructures_2eimport_2escm",(void*)f_202},
{"f_205:data_2dstructures_2eimport_2escm",(void*)f_205},
{"f_208:data_2dstructures_2eimport_2escm",(void*)f_208},
{"f_199:data_2dstructures_2eimport_2escm",(void*)f_199},
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
o|removed binding forms: 4 
*/
/* end of file */

/* Generated from srfi-18.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:51
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: srfi-18.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file srfi-18.import.c
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


C_noret_decl(f_202)
static void C_ccall f_202(C_word c,C_word *av) C_noret;
C_noret_decl(f_205)
static void C_ccall f_205(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_199)
static void C_ccall f_199(C_word c,C_word *av) C_noret;
C_noret_decl(f_208)
static void C_ccall f_208(C_word c,C_word *av) C_noret;

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
/* srfi-18.import.scm:27: ##sys#register-primitive-module */
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
if(C_unlikely(!C_demand_2(444))){
C_save(t1);
C_rereclaim2(444*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,3);
lf[0]=C_h_intern(&lf[0],29,"\003sysregister-primitive-module");
lf[1]=C_h_intern(&lf[1],7,"srfi-18");
lf[2]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\032abandoned-mutex-exception\077\376\003\000\000\002\376\001\000\000\035condition-variable-broadcast!\376\003\000\000\002"
"\376\001\000\000\032condition-variable-signal!\376\003\000\000\002\376\001\000\000\027condition-variable-name\376\003\000\000\002\376\001\000\000\033condit"
"ion-variable-specific\376\003\000\000\002\376\001\000\000 condition-variable-specific-set!\376\003\000\000\002\376\001\000\000\023conditi"
"on-variable\077\376\003\000\000\002\376\001\000\000\016current-thread\376\003\000\000\002\376\001\000\000\014current-time\376\003\000\000\002\376\001\000\000\027join-timeout"
"-exception\077\376\003\000\000\002\376\001\000\000\027make-condition-variable\376\003\000\000\002\376\001\000\000\012make-mutex\376\003\000\000\002\376\001\000\000\013make-t"
"hread\376\003\000\000\002\376\001\000\000\013mutex-lock!\376\003\000\000\002\376\001\000\000\012mutex-name\376\003\000\000\002\376\001\000\000\016mutex-specific\376\003\000\000\002\376\001\000\000\023"
"mutex-specific-set!\376\003\000\000\002\376\001\000\000\013mutex-state\376\003\000\000\002\376\001\000\000\015mutex-unlock!\376\003\000\000\002\376\001\000\000\006mutex\077\376"
"\003\000\000\002\376\001\000\000\005raise\376\003\000\000\002\376\001\000\000\015seconds->time\376\003\000\000\002\376\001\000\000\034terminated-thread-exception\077\376\003\000\000\002"
"\376\001\000\000\014thread-join!\376\003\000\000\002\376\001\000\000\013thread-name\376\003\000\000\002\376\001\000\000\016thread-quantum\376\003\000\000\002\376\001\000\000\023thread-q"
"uantum-set!\376\003\000\000\002\376\001\000\000\016thread-resume!\376\003\000\000\002\376\001\000\000\016thread-signal!\376\003\000\000\002\376\001\000\000\015thread-slee"
"p!\376\003\000\000\002\376\001\000\000\017thread-specific\376\003\000\000\002\376\001\000\000\024thread-specific-set!\376\003\000\000\002\376\001\000\000\015thread-start!"
"\376\003\000\000\002\376\001\000\000\014thread-state\376\003\000\000\002\376\001\000\000\017thread-suspend!\376\003\000\000\002\376\001\000\000\021thread-terminate!\376\003\000\000\002\376"
"\001\000\000\024thread-wait-for-i/o!\376\003\000\000\002\376\001\000\000\015thread-yield!\376\003\000\000\002\376\001\000\000\007thread\077\376\003\000\000\002\376\001\000\000\015time->"
"seconds\376\003\000\000\002\376\001\000\000\005time\077\376\003\000\000\002\376\001\000\000\031uncaught-exception-reason\376\003\000\000\002\376\001\000\000\023uncaught-exce"
"ption\077\376\377\016");
C_register_lf2(lf,3,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_199,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

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

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[6] = {
{"f_202:srfi_2d18_2eimport_2escm",(void*)f_202},
{"f_205:srfi_2d18_2eimport_2escm",(void*)f_205},
{"toplevel:srfi_2d18_2eimport_2escm",(void*)C_toplevel},
{"f_199:srfi_2d18_2eimport_2escm",(void*)f_199},
{"f_208:srfi_2d18_2eimport_2escm",(void*)f_208},
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
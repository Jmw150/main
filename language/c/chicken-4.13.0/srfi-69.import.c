/* Generated from srfi-69.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:51
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: srfi-69.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file srfi-69.import.c
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
C_noret_decl(f_205)
static void C_ccall f_205(C_word c,C_word *av) C_noret;
C_noret_decl(f_202)
static void C_ccall f_202(C_word c,C_word *av) C_noret;
C_noret_decl(f_199)
static void C_ccall f_199(C_word c,C_word *av) C_noret;
C_noret_decl(f_208)
static void C_ccall f_208(C_word c,C_word *av) C_noret;

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
if(C_unlikely(!C_demand_2(464))){
C_save(t1);
C_rereclaim2(464*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,3);
lf[0]=C_h_intern(&lf[0],29,"\003sysregister-primitive-module");
lf[1]=C_h_intern(&lf[1],7,"srfi-69");
lf[2]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\021alist->hash-table\376\003\000\000\002\376\001\000\000\010eq\077-hash\376\003\000\000\002\376\001\000\000\013equal\077-hash\376\003\000\000\002\376\001\000\000\011eqv\077"
"-hash\376\003\000\000\002\376\001\000\000\004hash\376\003\000\000\002\376\001\000\000\020hash-by-identity\376\003\000\000\002\376\001\000\000\021hash-table->alist\376\003\000\000\002\376\001\000"
"\000\021hash-table-clear!\376\003\000\000\002\376\001\000\000\017hash-table-copy\376\003\000\000\002\376\001\000\000\022hash-table-delete!\376\003\000\000\002\376\001\000"
"\000\037hash-table-equivalence-function\376\003\000\000\002\376\001\000\000\022hash-table-exists\077\376\003\000\000\002\376\001\000\000\017hash-tabl"
"e-fold\376\003\000\000\002\376\001\000\000\023hash-table-for-each\376\003\000\000\002\376\001\000\000\027hash-table-has-initial\077\376\003\000\000\002\376\001\000\000\030ha"
"sh-table-hash-function\376\003\000\000\002\376\001\000\000\022hash-table-initial\376\003\000\000\002\376\001\000\000\017hash-table-keys\376\003\000\000\002"
"\376\001\000\000\016hash-table-map\376\003\000\000\002\376\001\000\000\023hash-table-max-load\376\003\000\000\002\376\001\000\000\020hash-table-merge\376\003\000\000\002\376"
"\001\000\000\021hash-table-merge!\376\003\000\000\002\376\001\000\000\023hash-table-min-load\376\003\000\000\002\376\001\000\000\016hash-table-ref\376\003\000\000\002\376"
"\001\000\000\026hash-table-ref/default\376\003\000\000\002\376\001\000\000\022hash-table-remove!\376\003\000\000\002\376\001\000\000\017hash-table-set!\376"
"\003\000\000\002\376\001\000\000\017hash-table-size\376\003\000\000\002\376\001\000\000\022hash-table-update!\376\003\000\000\002\376\001\000\000\032hash-table-update!"
"/default\376\003\000\000\002\376\001\000\000\021hash-table-values\376\003\000\000\002\376\001\000\000\017hash-table-walk\376\003\000\000\002\376\001\000\000\024hash-table"
"-weak-keys\376\003\000\000\002\376\001\000\000\026hash-table-weak-values\376\003\000\000\002\376\001\000\000\013hash-table\077\376\003\000\000\002\376\001\000\000\014keyword"
"-hash\376\003\000\000\002\376\001\000\000\017make-hash-table\376\003\000\000\002\376\001\000\000\013number-hash\376\003\000\000\002\376\001\000\000\017object-uid-hash\376\003\000\000"
"\002\376\001\000\000\030recursive-hash-max-depth\376\003\000\000\002\376\001\000\000\031recursive-hash-max-length\376\003\000\000\002\376\001\000\000\016strin"
"g-hash-ci\376\003\000\000\002\376\001\000\000\016string-ci-hash\376\003\000\000\002\376\001\000\000\013string-hash\376\003\000\000\002\376\001\000\000\013symbol-hash\376\377\016");
C_register_lf2(lf,3,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_199,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

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
/* srfi-69.import.scm:27: ##sys#register-primitive-module */
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
{"toplevel:srfi_2d69_2eimport_2escm",(void*)C_toplevel},
{"f_205:srfi_2d69_2eimport_2escm",(void*)f_205},
{"f_202:srfi_2d69_2eimport_2escm",(void*)f_202},
{"f_199:srfi_2d69_2eimport_2escm",(void*)f_199},
{"f_208:srfi_2d69_2eimport_2escm",(void*)f_208},
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

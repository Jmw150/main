/* Generated from setup-download.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: setup-download.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file setup-download.import.c
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

static C_TLS C_word lf[5];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_203)
static void C_ccall f_203(C_word c,C_word *av) C_noret;
C_noret_decl(f_209)
static void C_ccall f_209(C_word c,C_word *av) C_noret;
C_noret_decl(f_206)
static void C_ccall f_206(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_212)
static void C_ccall f_212(C_word c,C_word *av) C_noret;
C_noret_decl(f_200)
static void C_ccall f_200(C_word c,C_word *av) C_noret;

/* k201 in k198 */
static void C_ccall f_203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_203,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_206,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k207 in k204 in k201 in k198 */
static void C_ccall f_209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_209,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_212,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* setup-download.import.scm:18: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[0]);
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[0]+1);
av2[1]=t2;
av2[2]=lf[1];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=lf[2];
av2[5]=C_SCHEME_END_OF_LIST;
av2[6]=C_SCHEME_END_OF_LIST;
tp(7,av2);}}

/* k204 in k201 in k198 */
static void C_ccall f_206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_206,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_209,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* setup-download.import.scm:3: eval */
t3=C_fast_retrieve(lf[3]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

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
if(C_unlikely(!C_demand_2(331))){
C_save(t1);
C_rereclaim2(331*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,5);
lf[0]=C_h_intern(&lf[0],28,"\003sysregister-compiled-module");
lf[1]=C_h_intern(&lf[1],14,"setup-download");
lf[2]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022retrieve-extension\376\001\000\000!setup-download#retrieve-extension\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\020locate-egg/local\376\001\000\000\037setup-download#locate-egg/local\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016locate-"
"egg/svn\376\001\000\000\035setup-download#locate-egg/svn\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017locate-egg/http\376\001\000\000\036setu"
"p-download#locate-egg/http\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026gather-egg-information\376\001\000\000%setup-downlo"
"ad#gather-egg-information\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017list-extensions\376\001\000\000\036setup-download#list-"
"extensions\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027list-extension-versions\376\001\000\000&setup-download#list-extensi"
"on-versions\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023temporary-directory\376\001\000\000\042setup-download#temporary-direc"
"tory\376\377\016");
lf[3]=C_h_intern(&lf[3],4,"eval");
lf[4]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006import\376\003\000\000\002\376\001\000\000\006scheme\376\003\000\000\002\376\001\000\000\007chicken\376\003\000\000\002\376\001\000\000\007foreign\376\003\000\000\002\376\001\000\000\006extr"
"as\376\003\000\000\002\376\001\000\000\007irregex\376\003\000\000\002\376\001\000\000\005posix\376\003\000\000\002\376\001\000\000\005utils\376\003\000\000\002\376\001\000\000\006srfi-1\376\003\000\000\002\376\001\000\000\017data-"
"structures\376\003\000\000\002\376\001\000\000\003tcp\376\003\000\000\002\376\001\000\000\007srfi-13\376\003\000\000\002\376\001\000\000\007srfi-14\376\003\000\000\002\376\001\000\000\005files\376\003\000\000\002\376\001\000"
"\000\011setup-api\376\377\016");
C_register_lf2(lf,5,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_200,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k210 in k207 in k204 in k201 in k198 */
static void C_ccall f_212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_212,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k198 */
static void C_ccall f_200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_200,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_203,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[7] = {
{"f_203:setup_2ddownload_2eimport_2escm",(void*)f_203},
{"f_209:setup_2ddownload_2eimport_2escm",(void*)f_209},
{"f_206:setup_2ddownload_2eimport_2escm",(void*)f_206},
{"toplevel:setup_2ddownload_2eimport_2escm",(void*)C_toplevel},
{"f_212:setup_2ddownload_2eimport_2escm",(void*)f_212},
{"f_200:setup_2ddownload_2eimport_2escm",(void*)f_200},
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
(o e)|safe calls: 4 
o|replaced variables: 1 
o|removed binding forms: 5 
o|removed binding forms: 1 
o|simplifications: ((##core#call . 3)) 
o|  call simplifications:
o|    list	3
o|contracted procedure: k214 
o|contracted procedure: k218 
o|contracted procedure: k222 
o|removed binding forms: 3 
o|substituted constant variable: r215 
o|substituted constant variable: r219 
o|substituted constant variable: r215 
o|substituted constant variable: r219 
o|substituted constant variable: r223 
o|removed binding forms: 5 
*/
/* end of file */

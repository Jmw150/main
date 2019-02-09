/* Generated from user-pass.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: user-pass.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -emit-import-library chicken.compiler.user-pass -output-file user-pass.c
   unit: user-pass
   uses: library eval expand
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[8];
static double C_possibly_force_alignment;


C_noret_decl(f_132)
static void C_ccall f_132(C_word c,C_word *av) C_noret;
C_noret_decl(f_135)
static void C_ccall f_135(C_word c,C_word *av) C_noret;
C_noret_decl(f_138)
static void C_ccall f_138(C_word c,C_word *av) C_noret;
C_noret_decl(f_142)
static void C_ccall f_142(C_word c,C_word *av) C_noret;
C_noret_decl(f_146)
static void C_ccall f_146(C_word c,C_word *av) C_noret;
C_noret_decl(f_150)
static void C_ccall f_150(C_word c,C_word *av) C_noret;
C_noret_decl(f_154)
static void C_ccall f_154(C_word c,C_word *av) C_noret;
C_noret_decl(f_158)
static void C_ccall f_158(C_word c,C_word *av) C_noret;
C_noret_decl(C_user_2dpass_toplevel)
C_externexport void C_ccall C_user_2dpass_toplevel(C_word c,C_word *av) C_noret;

/* k130 */
static void C_ccall f_132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_132,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_135,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k133 in k130 */
static void C_ccall f_135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_135,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_138,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k136 in k133 in k130 */
static void C_ccall f_138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_138,2,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_142,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* user-pass.scm:37: chicken.base#make-parameter */
t5=C_fast_retrieve(lf[7]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k140 in k136 in k133 in k130 */
static void C_ccall f_142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_142,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[2]+1 /* (set! chicken.compiler.user-pass#user-options-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_146,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* user-pass.scm:38: chicken.base#make-parameter */
t4=C_fast_retrieve(lf[7]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k144 in k140 in k136 in k133 in k130 */
static void C_ccall f_146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_146,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[3]+1 /* (set! chicken.compiler.user-pass#user-read-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_150,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* user-pass.scm:39: chicken.base#make-parameter */
t4=C_fast_retrieve(lf[7]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k148 in k144 in k140 in k136 in k133 in k130 */
static void C_ccall f_150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_150,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[4]+1 /* (set! chicken.compiler.user-pass#user-preprocessor-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_154,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* user-pass.scm:40: chicken.base#make-parameter */
t4=C_fast_retrieve(lf[7]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k152 in k148 in k144 in k140 in k136 in k133 in k130 */
static void C_ccall f_154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_154,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[5]+1 /* (set! chicken.compiler.user-pass#user-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_158,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* user-pass.scm:41: chicken.base#make-parameter */
t4=C_fast_retrieve(lf[7]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k156 in k152 in k148 in k144 in k140 in k136 in k133 in k130 */
static void C_ccall f_158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_158,2,av);}
t2=C_mutate((C_word*)lf[6]+1 /* (set! chicken.compiler.user-pass#user-post-analysis-pass ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_user_2dpass_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("user-pass"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_user_2dpass_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(56))){
C_save(t1);
C_rereclaim2(56*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,8);
lf[0]=C_h_intern(&lf[0],9, C_text("user-pass"));
lf[1]=C_h_intern(&lf[1],27, C_text("chicken.compiler.user-pass#"));
lf[2]=C_h_intern(&lf[2],44, C_text("chicken.compiler.user-pass#user-options-pass"));
lf[3]=C_h_intern(&lf[3],41, C_text("chicken.compiler.user-pass#user-read-pass"));
lf[4]=C_h_intern(&lf[4],49, C_text("chicken.compiler.user-pass#user-preprocessor-pass"));
lf[5]=C_h_intern(&lf[5],36, C_text("chicken.compiler.user-pass#user-pass"));
lf[6]=C_h_intern(&lf[6],50, C_text("chicken.compiler.user-pass#user-post-analysis-pass"));
lf[7]=C_h_intern(&lf[7],27, C_text("chicken.base#make-parameter"));
C_register_lf2(lf,8,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_132,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[10] = {
{C_text("f_132:user_2dpass_2escm"),(void*)f_132},
{C_text("f_135:user_2dpass_2escm"),(void*)f_135},
{C_text("f_138:user_2dpass_2escm"),(void*)f_138},
{C_text("f_142:user_2dpass_2escm"),(void*)f_142},
{C_text("f_146:user_2dpass_2escm"),(void*)f_146},
{C_text("f_150:user_2dpass_2escm"),(void*)f_150},
{C_text("f_154:user_2dpass_2escm"),(void*)f_154},
{C_text("f_158:user_2dpass_2escm"),(void*)f_158},
{C_text("toplevel:user_2dpass_2escm"),(void*)C_user_2dpass_toplevel},
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
(o e)|safe calls: 5 
o|removed binding forms: 8 
*/
/* end of file */

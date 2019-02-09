/* Generated from continuation.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: continuation.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file continuation.c -emit-import-library chicken.continuation
   unit: continuation
   uses: library
*/
#include "chicken.h"

#define C_direct_continuation(dummy) t1

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[11];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,99,111,110,116,105,110,117,97,116,105,111,110,35,99,111,110,116,105,110,117,97,116,105,111,110,45,99,97,112,116,117,114,101,32,112,114,111,99,41};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,99,111,110,116,105,110,117,97,116,105,111,110,35,99,111,110,116,105,110,117,97,116,105,111,110,63,32,120,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,20),67,95,99,111,110,116,105,110,117,97,116,105,111,110,95,103,114,97,102,116,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,20),67,95,99,111,110,116,105,110,117,97,116,105,111,110,95,103,114,97,102,116,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,99,111,110,116,105,110,117,97,116,105,111,110,35,99,111,110,116,105,110,117,97,116,105,111,110,45,103,114,97,102,116,32,107,32,116,104,117,110,107,41,0,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,20),67,95,99,111,110,116,105,110,117,97,116,105,111,110,95,103,114,97,102,116,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,6),40,97,50,54,55,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,99,111,110,116,105,110,117,97,116,105,111,110,35,99,111,110,116,105,110,117,97,116,105,111,110,45,114,101,116,117,114,110,32,107,32,46,32,118,97,108,115,41,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_208)
static void C_ccall f_208(C_word c,C_word *av) C_noret;
C_noret_decl(f_210)
static void C_ccall f_210(C_word c,C_word *av) C_noret;
C_noret_decl(f_220)
static void C_ccall f_220(C_word c,C_word *av) C_noret;
C_noret_decl(f_226)
static void C_ccall f_226(C_word c,C_word *av) C_noret;
C_noret_decl(f_236)
static void C_ccall f_236(C_word c,C_word *av) C_noret;
C_noret_decl(f_259)
static void C_ccall f_259(C_word c,C_word *av) C_noret;
C_noret_decl(f_268)
static void C_ccall f_268(C_word c,C_word *av) C_noret;
C_noret_decl(C_continuation_toplevel)
C_externexport void C_ccall C_continuation_toplevel(C_word c,C_word *av) C_noret;

/* k206 */
static void C_ccall f_208(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,4)))){
C_save_and_reclaim((void *)f_208,2,av);}
a=C_alloc(28);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_mutate((C_word*)lf[2]+1 /* (set! chicken.continuation#continuation-capture ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_210,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[4]+1 /* (set! chicken.continuation#continuation? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_220,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[5]+1 /* (set! chicken.continuation#continuation-graft ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_226,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[8]+1 /* (set! chicken.continuation#continuation-return ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_259,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* chicken.continuation#continuation-capture in k206 */
static void C_ccall f_210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_210,3,av);}
a=C_alloc(4);
t3=*((C_word*)lf[3]+1);
t4=C_direct_continuation(C_SCHEME_FALSE);
t5=C_a_i_record3(&a,3,lf[0],t4,*((C_word*)lf[3]+1));
/* continuation.scm:46: proc */
t6=t2;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t5;
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* chicken.continuation#continuation? in k206 */
static void C_ccall f_220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_220,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[0]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.continuation#continuation-graft in k206 */
static void C_ccall f_226(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_226,4,av);}
a=C_alloc(8);
t4=C_i_check_structure_2(t2,lf[0],lf[6]);
t5=C_slot(t2,C_fix(2));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_236,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=C_eqp(*((C_word*)lf[3]+1),t5);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)C_continuation_graft,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp);
/* continuation.scm:53: g87 */
t9=t8;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t9))(4,av2);}}
else{
t8=C_i_length(*((C_word*)lf[3]+1));
t9=C_i_length(t5);
t10=C_fixnum_difference(t8,t9);
/* continuation.scm:55: ##sys#dynamic-unwind */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t6;
av2[2]=t5;
av2[3]=t10;
tp(4,av2);}}}

/* k234 in chicken.continuation#continuation-graft in k206 */
static void C_ccall f_236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_236,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)C_continuation_graft,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
/* continuation.scm:53: g87 */
t3=t2;{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* chicken.continuation#continuation-return in k206 */
static void C_ccall f_259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_259,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+7);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_i_check_structure_2(t2,lf[0],lf[9]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)C_continuation_graft,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_268,a[2]=t3,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp);
/* continuation.scm:59: g94 */
t7=t5;{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t1;
av2[2]=t2;
av2[3]=t6;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}

/* a267 in chicken.continuation#continuation-return in k206 */
static void C_ccall f_268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_268,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[10]+1);
av2[3]=((C_word*)t0)[2];
C_apply(4,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_continuation_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("continuation"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_continuation_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(77))){
C_save(t1);
C_rereclaim2(77*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,11);
lf[0]=C_h_intern(&lf[0],12, C_text("continuation"));
lf[1]=C_h_intern(&lf[1],21, C_text("chicken.continuation#"));
lf[2]=C_h_intern(&lf[2],41, C_text("chicken.continuation#continuation-capture"));
lf[3]=C_h_intern(&lf[3],17, C_text("\003sysdynamic-winds"));
lf[4]=C_h_intern(&lf[4],34, C_text("chicken.continuation#continuation\077"));
lf[5]=C_h_intern(&lf[5],39, C_text("chicken.continuation#continuation-graft"));
lf[6]=C_h_intern(&lf[6],18, C_text("continuation-graft"));
lf[7]=C_h_intern(&lf[7],18, C_text("\003sysdynamic-unwind"));
lf[8]=C_h_intern(&lf[8],40, C_text("chicken.continuation#continuation-return"));
lf[9]=C_h_intern(&lf[9],19, C_text("continuation-return"));
lf[10]=C_h_intern(&lf[10],13, C_text("scheme#values"));
C_register_lf2(lf,11,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_208,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[9] = {
{C_text("f_208:continuation_2escm"),(void*)f_208},
{C_text("f_210:continuation_2escm"),(void*)f_210},
{C_text("f_220:continuation_2escm"),(void*)f_220},
{C_text("f_226:continuation_2escm"),(void*)f_226},
{C_text("f_236:continuation_2escm"),(void*)f_236},
{C_text("f_259:continuation_2escm"),(void*)f_259},
{C_text("f_268:continuation_2escm"),(void*)f_268},
{C_text("toplevel:continuation_2escm"),(void*)C_continuation_toplevel},
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
o|hiding unexported module binding: chicken.continuation#d 
o|hiding unexported module binding: chicken.continuation#define-alias 
o|eliminated procedure checks: 2 
(o e)|safe calls: 6 
o|safe globals: (chicken.continuation#continuation-return chicken.continuation#continuation-graft chicken.continuation#continuation? chicken.continuation#continuation-capture) 
o|propagated global variable: winds79 ##sys#dynamic-winds 
o|replaced variables: 9 
o|removed binding forms: 8 
o|inlining procedure: k234 
o|removed binding forms: 9 
o|removed binding forms: 2 
o|simplifications: ((##core#call . 10)) 
o|  call simplifications:
o|    scheme#apply
o|    ##sys#check-structure	2
o|    ##sys#slot
o|    scheme#eq?
o|    scheme#length	2
o|    chicken.fixnum#fx-
o|    ##sys#structure?
o|    ##sys#make-structure
o|contracted procedure: k216 
o|contracted procedure: k228 
o|contracted procedure: k231 
o|contracted procedure: k240 
o|contracted procedure: k251 
o|contracted procedure: k255 
o|contracted procedure: k247 
o|contracted procedure: k261 
o|removed binding forms: 8 
o|replaced variables: 4 
o|removed binding forms: 2 
*/
/* end of file */

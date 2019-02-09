/* Generated from srfi-1.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: srfi-1.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file srfi-1.import.c
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


C_noret_decl(f_208)
static void C_ccall f_208(C_word c,C_word *av) C_noret;
C_noret_decl(f_202)
static void C_ccall f_202(C_word c,C_word *av) C_noret;
C_noret_decl(f_199)
static void C_ccall f_199(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_205)
static void C_ccall f_205(C_word c,C_word *av) C_noret;

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
if(C_unlikely(!C_demand_2(1064))){
C_save(t1);
C_rereclaim2(1064*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,3);
lf[0]=C_h_intern(&lf[0],29,"\003sysregister-primitive-module");
lf[1]=C_h_intern(&lf[1],6,"srfi-1");
lf[2]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012alist-cons\376\003\000\000\002\376\001\000\000\012alist-copy\376\003\000\000\002\376\001\000\000\014alist-delete\376\003\000\000\002\376\001\000\000\015alist-de"
"lete!\376\003\000\000\002\376\001\000\000\003any\376\003\000\000\002\376\001\000\000\007append!\376\003\000\000\002\376\001\000\000\012append-map\376\003\000\000\002\376\001\000\000\013append-map!\376\003\000\000"
"\002\376\001\000\000\016append-reverse\376\003\000\000\002\376\001\000\000\017append-reverse!\376\003\000\000\002\376\001\000\000\005assoc\376\003\000\000\002\376\001\000\000\005break\376\003\000\000\002"
"\376\001\000\000\006break!\376\003\000\000\002\376\001\000\000\007car+cdr\376\003\000\000\002\376\001\000\000\015circular-list\376\003\000\000\002\376\001\000\000\016circular-list\077\376\003\000\000\002"
"\376\001\000\000\013concatenate\376\003\000\000\002\376\001\000\000\014concatenate!\376\003\000\000\002\376\001\000\000\005cons\052\376\003\000\000\002\376\001\000\000\005count\376\003\000\000\002\376\001\000\000\006de"
"lete\376\003\000\000\002\376\001\000\000\007delete!\376\003\000\000\002\376\001\000\000\021delete-duplicates\376\003\000\000\002\376\001\000\000\022delete-duplicates!\376\003\000\000"
"\002\376\001\000\000\014dotted-list\077\376\003\000\000\002\376\001\000\000\004drop\376\003\000\000\002\376\001\000\000\012drop-right\376\003\000\000\002\376\001\000\000\013drop-right!\376\003\000\000\002\376\001"
"\000\000\012drop-while\376\003\000\000\002\376\001\000\000\006eighth\376\003\000\000\002\376\001\000\000\005every\376\003\000\000\002\376\001\000\000\005fifth\376\003\000\000\002\376\001\000\000\006filter\376\003\000\000\002"
"\376\001\000\000\007filter!\376\003\000\000\002\376\001\000\000\012filter-map\376\003\000\000\002\376\001\000\000\004find\376\003\000\000\002\376\001\000\000\011find-tail\376\003\000\000\002\376\001\000\000\005first"
"\376\003\000\000\002\376\001\000\000\004fold\376\003\000\000\002\376\001\000\000\012fold-right\376\003\000\000\002\376\001\000\000\010for-each\376\003\000\000\002\376\001\000\000\006fourth\376\003\000\000\002\376\001\000\000\004io"
"ta\376\003\000\000\002\376\001\000\000\004last\376\003\000\000\002\376\001\000\000\011last-pair\376\003\000\000\002\376\001\000\000\007length+\376\003\000\000\002\376\001\000\000\011list-copy\376\003\000\000\002\376\001\000\000"
"\012list-index\376\003\000\000\002\376\001\000\000\015list-tabulate\376\003\000\000\002\376\001\000\000\005list=\376\003\000\000\002\376\001\000\000\013lset-adjoin\376\003\000\000\002\376\001\000\000\026"
"lset-diff+intersection\376\003\000\000\002\376\001\000\000\027lset-diff+intersection!\376\003\000\000\002\376\001\000\000\017lset-difference"
"\376\003\000\000\002\376\001\000\000\020lset-difference!\376\003\000\000\002\376\001\000\000\021lset-intersection\376\003\000\000\002\376\001\000\000\022lset-intersection"
"!\376\003\000\000\002\376\001\000\000\012lset-union\376\003\000\000\002\376\001\000\000\013lset-union!\376\003\000\000\002\376\001\000\000\010lset-xor\376\003\000\000\002\376\001\000\000\011lset-xor!\376"
"\003\000\000\002\376\001\000\000\006lset<=\376\003\000\000\002\376\001\000\000\005lset=\376\003\000\000\002\376\001\000\000\011make-list\376\003\000\000\002\376\001\000\000\003map\376\003\000\000\002\376\001\000\000\004map!\376\003\000\000"
"\002\376\001\000\000\014map-in-order\376\003\000\000\002\376\001\000\000\006member\376\003\000\000\002\376\001\000\000\005ninth\376\003\000\000\002\376\001\000\000\011not-pair\077\376\003\000\000\002\376\001\000\000\012nu"
"ll-list\077\376\003\000\000\002\376\001\000\000\011pair-fold\376\003\000\000\002\376\001\000\000\017pair-fold-right\376\003\000\000\002\376\001\000\000\015pair-for-each\376\003\000\000\002"
"\376\001\000\000\011partition\376\003\000\000\002\376\001\000\000\012partition!\376\003\000\000\002\376\001\000\000\014proper-list\077\376\003\000\000\002\376\001\000\000\006reduce\376\003\000\000\002\376\001\000"
"\000\014reduce-right\376\003\000\000\002\376\001\000\000\006remove\376\003\000\000\002\376\001\000\000\007remove!\376\003\000\000\002\376\001\000\000\010reverse!\376\003\000\000\002\376\001\000\000\006secon"
"d\376\003\000\000\002\376\001\000\000\007seventh\376\003\000\000\002\376\001\000\000\005sixth\376\003\000\000\002\376\001\000\000\004span\376\003\000\000\002\376\001\000\000\005span!\376\003\000\000\002\376\001\000\000\010split-at"
"\376\003\000\000\002\376\001\000\000\011split-at!\376\003\000\000\002\376\001\000\000\004take\376\003\000\000\002\376\001\000\000\005take!\376\003\000\000\002\376\001\000\000\012take-right\376\003\000\000\002\376\001\000\000\012ta"
"ke-while\376\003\000\000\002\376\001\000\000\013take-while!\376\003\000\000\002\376\001\000\000\005tenth\376\003\000\000\002\376\001\000\000\005third\376\003\000\000\002\376\001\000\000\006unfold\376\003\000\000\002"
"\376\001\000\000\014unfold-right\376\003\000\000\002\376\001\000\000\006unzip1\376\003\000\000\002\376\001\000\000\006unzip2\376\003\000\000\002\376\001\000\000\006unzip3\376\003\000\000\002\376\001\000\000\006unzip"
"4\376\003\000\000\002\376\001\000\000\006unzip5\376\003\000\000\002\376\001\000\000\005xcons\376\003\000\000\002\376\001\000\000\003zip\376\377\016");
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
/* srfi-1.import.scm:27: ##sys#register-primitive-module */
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

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[6] = {
{"f_208:srfi_2d1_2eimport_2escm",(void*)f_208},
{"f_202:srfi_2d1_2eimport_2escm",(void*)f_202},
{"f_199:srfi_2d1_2eimport_2escm",(void*)f_199},
{"toplevel:srfi_2d1_2eimport_2escm",(void*)C_toplevel},
{"f_205:srfi_2d1_2eimport_2escm",(void*)f_205},
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

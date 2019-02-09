/* Generated from srfi-4.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:51
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: srfi-4.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file srfi-4.import.c
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
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_208)
static void C_ccall f_208(C_word c,C_word *av) C_noret;
C_noret_decl(f_205)
static void C_ccall f_205(C_word c,C_word *av) C_noret;
C_noret_decl(f_199)
static void C_ccall f_199(C_word c,C_word *av) C_noret;

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
if(C_unlikely(!C_demand_2(1184))){
C_save(t1);
C_rereclaim2(1184*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,3);
lf[0]=C_h_intern(&lf[0],29,"\003sysregister-primitive-module");
lf[1]=C_h_intern(&lf[1],6,"srfi-4");
lf[2]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\017blob->f32vector\376\003\000\000\002\376\001\000\000\026blob->f32vector/shared\376\003\000\000\002\376\001\000\000\017blob->f64vect"
"or\376\003\000\000\002\376\001\000\000\026blob->f64vector/shared\376\003\000\000\002\376\001\000\000\017blob->s16vector\376\003\000\000\002\376\001\000\000\026blob->s16ve"
"ctor/shared\376\003\000\000\002\376\001\000\000\017blob->s32vector\376\003\000\000\002\376\001\000\000\026blob->s32vector/shared\376\003\000\000\002\376\001\000\000\016bl"
"ob->s8vector\376\003\000\000\002\376\001\000\000\025blob->s8vector/shared\376\003\000\000\002\376\001\000\000\017blob->u16vector\376\003\000\000\002\376\001\000\000\026bl"
"ob->u16vector/shared\376\003\000\000\002\376\001\000\000\017blob->u32vector\376\003\000\000\002\376\001\000\000\026blob->u32vector/shared\376\003\000"
"\000\002\376\001\000\000\016blob->u8vector\376\003\000\000\002\376\001\000\000\025blob->u8vector/shared\376\003\000\000\002\376\001\000\000\011f32vector\376\003\000\000\002\376\001\000\000"
"\017f32vector->blob\376\003\000\000\002\376\001\000\000\026f32vector->blob/shared\376\003\000\000\002\376\001\000\000\026f32vector->byte-vector"
"\376\003\000\000\002\376\001\000\000\017f32vector->list\376\003\000\000\002\376\001\000\000\020f32vector-length\376\003\000\000\002\376\001\000\000\015f32vector-ref\376\003\000\000\002\376"
"\001\000\000\016f32vector-set!\376\003\000\000\002\376\001\000\000\012f32vector\077\376\003\000\000\002\376\001\000\000\011f64vector\376\003\000\000\002\376\001\000\000\017f64vector->bl"
"ob\376\003\000\000\002\376\001\000\000\026f64vector->blob/shared\376\003\000\000\002\376\001\000\000\026f64vector->byte-vector\376\003\000\000\002\376\001\000\000\017f64v"
"ector->list\376\003\000\000\002\376\001\000\000\020f64vector-length\376\003\000\000\002\376\001\000\000\015f64vector-ref\376\003\000\000\002\376\001\000\000\016f64vector-"
"set!\376\003\000\000\002\376\001\000\000\012f64vector\077\376\003\000\000\002\376\001\000\000\017list->f32vector\376\003\000\000\002\376\001\000\000\017list->f64vector\376\003\000\000\002\376"
"\001\000\000\017list->s16vector\376\003\000\000\002\376\001\000\000\017list->s32vector\376\003\000\000\002\376\001\000\000\016list->s8vector\376\003\000\000\002\376\001\000\000\017li"
"st->u16vector\376\003\000\000\002\376\001\000\000\017list->u32vector\376\003\000\000\002\376\001\000\000\016list->u8vector\376\003\000\000\002\376\001\000\000\016make-f32"
"vector\376\003\000\000\002\376\001\000\000\016make-f64vector\376\003\000\000\002\376\001\000\000\016make-s16vector\376\003\000\000\002\376\001\000\000\016make-s32vector\376\003"
"\000\000\002\376\001\000\000\015make-s8vector\376\003\000\000\002\376\001\000\000\016make-u16vector\376\003\000\000\002\376\001\000\000\016make-u32vector\376\003\000\000\002\376\001\000\000\015m"
"ake-u8vector\376\003\000\000\002\376\001\000\000\015read-u8vector\376\003\000\000\002\376\001\000\000\016read-u8vector!\376\003\000\000\002\376\001\000\000\025release-num"
"ber-vector\376\003\000\000\002\376\001\000\000\011s16vector\376\003\000\000\002\376\001\000\000\017s16vector->blob\376\003\000\000\002\376\001\000\000\026s16vector->blob/"
"shared\376\003\000\000\002\376\001\000\000\026s16vector->byte-vector\376\003\000\000\002\376\001\000\000\017s16vector->list\376\003\000\000\002\376\001\000\000\020s16vect"
"or-length\376\003\000\000\002\376\001\000\000\015s16vector-ref\376\003\000\000\002\376\001\000\000\016s16vector-set!\376\003\000\000\002\376\001\000\000\012s16vector\077\376\003\000\000"
"\002\376\001\000\000\011s32vector\376\003\000\000\002\376\001\000\000\017s32vector->blob\376\003\000\000\002\376\001\000\000\026s32vector->blob/shared\376\003\000\000\002\376\001\000"
"\000\026s32vector->byte-vector\376\003\000\000\002\376\001\000\000\017s32vector->list\376\003\000\000\002\376\001\000\000\020s32vector-length\376\003\000\000\002"
"\376\001\000\000\015s32vector-ref\376\003\000\000\002\376\001\000\000\016s32vector-set!\376\003\000\000\002\376\001\000\000\012s32vector\077\376\003\000\000\002\376\001\000\000\010s8vector"
"\376\003\000\000\002\376\001\000\000\016s8vector->blob\376\003\000\000\002\376\001\000\000\025s8vector->blob/shared\376\003\000\000\002\376\001\000\000\025s8vector->byte-"
"vector\376\003\000\000\002\376\001\000\000\016s8vector->list\376\003\000\000\002\376\001\000\000\017s8vector-length\376\003\000\000\002\376\001\000\000\014s8vector-ref\376\003\000"
"\000\002\376\001\000\000\015s8vector-set!\376\003\000\000\002\376\001\000\000\011s8vector\077\376\003\000\000\002\376\001\000\000\014subf32vector\376\003\000\000\002\376\001\000\000\014subf64vec"
"tor\376\003\000\000\002\376\001\000\000\014subs16vector\376\003\000\000\002\376\001\000\000\014subs32vector\376\003\000\000\002\376\001\000\000\013subs8vector\376\003\000\000\002\376\001\000\000\014su"
"bu16vector\376\003\000\000\002\376\001\000\000\014subu32vector\376\003\000\000\002\376\001\000\000\013subu8vector\376\003\000\000\002\376\001\000\000\011u16vector\376\003\000\000\002\376\001\000"
"\000\017u16vector->blob\376\003\000\000\002\376\001\000\000\026u16vector->blob/shared\376\003\000\000\002\376\001\000\000\026u16vector->byte-vecto"
"r\376\003\000\000\002\376\001\000\000\017u16vector->list\376\003\000\000\002\376\001\000\000\020u16vector-length\376\003\000\000\002\376\001\000\000\015u16vector-ref\376\003\000\000\002"
"\376\001\000\000\016u16vector-set!\376\003\000\000\002\376\001\000\000\012u16vector\077\376\003\000\000\002\376\001\000\000\011u32vector\376\003\000\000\002\376\001\000\000\017u32vector->b"
"lob\376\003\000\000\002\376\001\000\000\026u32vector->blob/shared\376\003\000\000\002\376\001\000\000\026u32vector->byte-vector\376\003\000\000\002\376\001\000\000\017u32"
"vector->list\376\003\000\000\002\376\001\000\000\020u32vector-length\376\003\000\000\002\376\001\000\000\015u32vector-ref\376\003\000\000\002\376\001\000\000\016u32vector"
"-set!\376\003\000\000\002\376\001\000\000\012u32vector\077\376\003\000\000\002\376\001\000\000\010u8vector\376\003\000\000\002\376\001\000\000\016u8vector->blob\376\003\000\000\002\376\001\000\000\025u8v"
"ector->blob/shared\376\003\000\000\002\376\001\000\000\025u8vector->byte-vector\376\003\000\000\002\376\001\000\000\016u8vector->list\376\003\000\000\002\376\001"
"\000\000\017u8vector-length\376\003\000\000\002\376\001\000\000\014u8vector-ref\376\003\000\000\002\376\001\000\000\015u8vector-set!\376\003\000\000\002\376\001\000\000\011u8vecto"
"r\077\376\003\000\000\002\376\001\000\000\016write-u8vector\376\003\000\000\002\376\001\000\000\016number-vector\077\376\377\016");
C_register_lf2(lf,3,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_199,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

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
/* srfi-4.import.scm:27: ##sys#register-primitive-module */
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
{"f_202:srfi_2d4_2eimport_2escm",(void*)f_202},
{"toplevel:srfi_2d4_2eimport_2escm",(void*)C_toplevel},
{"f_208:srfi_2d4_2eimport_2escm",(void*)f_208},
{"f_205:srfi_2d4_2eimport_2escm",(void*)f_205},
{"f_199:srfi_2d4_2eimport_2escm",(void*)f_199},
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

/* Generated from srfi-4.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: srfi-4.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file srfi-4.import.c
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

static C_TLS C_word lf[3];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_117)
static void C_ccall f_117(C_word c,C_word *av) C_noret;
C_noret_decl(f_120)
static void C_ccall f_120(C_word c,C_word *av) C_noret;
C_noret_decl(f_123)
static void C_ccall f_123(C_word c,C_word *av) C_noret;
C_noret_decl(f_126)
static void C_ccall f_126(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

/* k115 */
static void C_ccall f_117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_117,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_120,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k118 in k115 */
static void C_ccall f_120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_120,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_123,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k121 in k118 in k115 */
static void C_ccall f_123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_123,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_126,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[0]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[0]+1);
av2[1]=t2;
av2[2]=lf[1];
av2[3]=lf[1];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[2];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* k124 in k121 in k118 in k115 */
static void C_ccall f_126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_126,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

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
if(C_unlikely(!C_demand_2(2694))){
C_save(t1);
C_rereclaim2(2694*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,3);
lf[0]=C_h_intern(&lf[0],28, C_text("\003sysregister-compiled-module"));
lf[1]=C_h_intern(&lf[1],6, C_text("srfi-4"));
lf[2]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017blob->f32vector\376\001\000\000\026srfi-4#blob->f32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026blob->f3"
"2vector/shared\376\001\000\000\035srfi-4#blob->f32vector/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017blob->f64vector\376\001"
"\000\000\026srfi-4#blob->f64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026blob->f64vector/shared\376\001\000\000\035srfi-4#blob->"
"f64vector/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017blob->s16vector\376\001\000\000\026srfi-4#blob->s16vector\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\026blob->s16vector/shared\376\001\000\000\035srfi-4#blob->s16vector/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017b"
"lob->s32vector\376\001\000\000\026srfi-4#blob->s32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026blob->s32vector/shared\376\001"
"\000\000\035srfi-4#blob->s32vector/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017blob->s64vector\376\001\000\000\026srfi-4#blob->"
"s64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026blob->s64vector/shared\376\001\000\000\035srfi-4#blob->s64vector/shared"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016blob->s8vector\376\001\000\000\025srfi-4#blob->s8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025blob->s8ve"
"ctor/shared\376\001\000\000\034srfi-4#blob->s8vector/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017blob->u16vector\376\001\000\000\026s"
"rfi-4#blob->u16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026blob->u16vector/shared\376\001\000\000\035srfi-4#blob->u16v"
"ector/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017blob->u32vector\376\001\000\000\026srfi-4#blob->u32vector\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\026blob->u32vector/shared\376\001\000\000\035srfi-4#blob->u32vector/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017blob-"
">u64vector\376\001\000\000\026srfi-4#blob->u64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026blob->u64vector/shared\376\001\000\000\035s"
"rfi-4#blob->u64vector/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016blob->u8vector\376\001\000\000\025srfi-4#blob->u8vec"
"tor\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025blob->u8vector/shared\376\001\000\000\034srfi-4#blob->u8vector/shared\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\011f32vector\376\001\000\000\020srfi-4#f32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017f32vector->blob\376\001\000\000\026srfi-4#f"
"32vector->blob\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026f32vector->blob/shared\376\001\000\000\035srfi-4#f32vector->blob/s"
"hared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017f32vector->list\376\001\000\000\026srfi-4#f32vector->list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020f32"
"vector-length\376\001\000\000\027srfi-4#f32vector-length\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015f32vector-ref\376\001\000\000\024srfi-4"
"#f32vector-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016f32vector-set!\376\001\000\000\025srfi-4#f32vector-set!\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\012f32vector\077\376\001\000\000\021srfi-4#f32vector\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011f64vector\376\001\000\000\020srfi-4#f64vecto"
"r\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017f64vector->blob\376\001\000\000\026srfi-4#f64vector->blob\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026f64vect"
"or->blob/shared\376\001\000\000\035srfi-4#f64vector->blob/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017f64vector->list\376"
"\001\000\000\026srfi-4#f64vector->list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020f64vector-length\376\001\000\000\027srfi-4#f64vector-l"
"ength\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015f64vector-ref\376\001\000\000\024srfi-4#f64vector-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016f64vect"
"or-set!\376\001\000\000\025srfi-4#f64vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012f64vector\077\376\001\000\000\021srfi-4#f64vector\077"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010s8vector\376\001\000\000\017srfi-4#s8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016s8vector->blob\376\001\000\000\025srf"
"i-4#s8vector->blob\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025s8vector->blob/shared\376\001\000\000\034srfi-4#s8vector->blob"
"/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016s8vector->list\376\001\000\000\025srfi-4#s8vector->list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017s8v"
"ector-length\376\001\000\000\026srfi-4#s8vector-length\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014s8vector-ref\376\001\000\000\023srfi-4#s8"
"vector-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015s8vector-set!\376\001\000\000\024srfi-4#s8vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011s8"
"vector\077\376\001\000\000\020srfi-4#s8vector\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011s16vector\376\001\000\000\020srfi-4#s16vector\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\017s16vector->blob\376\001\000\000\026srfi-4#s16vector->blob\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026s16vector->blob"
"/shared\376\001\000\000\035srfi-4#s16vector->blob/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017s16vector->list\376\001\000\000\026srfi"
"-4#s16vector->list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020s16vector-length\376\001\000\000\027srfi-4#s16vector-length\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\015s16vector-ref\376\001\000\000\024srfi-4#s16vector-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016s16vector-set!\376"
"\001\000\000\025srfi-4#s16vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012s16vector\077\376\001\000\000\021srfi-4#s16vector\077\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\011s32vector\376\001\000\000\020srfi-4#s32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017s32vector->blob\376\001\000\000\026srfi-4#s"
"32vector->blob\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026s32vector->blob/shared\376\001\000\000\035srfi-4#s32vector->blob/s"
"hared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017s32vector->list\376\001\000\000\026srfi-4#s32vector->list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020s32"
"vector-length\376\001\000\000\027srfi-4#s32vector-length\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015s32vector-ref\376\001\000\000\024srfi-4"
"#s32vector-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016s32vector-set!\376\001\000\000\025srfi-4#s32vector-set!\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\012s32vector\077\376\001\000\000\021srfi-4#s32vector\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011s64vector\376\001\000\000\020srfi-4#s64vecto"
"r\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017s64vector->blob\376\001\000\000\026srfi-4#s64vector->blob\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026s64vect"
"or->blob/shared\376\001\000\000\035srfi-4#s64vector->blob/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017s64vector->list\376"
"\001\000\000\026srfi-4#s64vector->list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020s64vector-length\376\001\000\000\027srfi-4#s64vector-l"
"ength\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015s64vector-ref\376\001\000\000\024srfi-4#s64vector-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016s64vect"
"or-set!\376\001\000\000\025srfi-4#s64vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012s64vector\077\376\001\000\000\021srfi-4#s64vector\077"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010u8vector\376\001\000\000\017srfi-4#u8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016u8vector->blob\376\001\000\000\025srf"
"i-4#u8vector->blob\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025u8vector->blob/shared\376\001\000\000\034srfi-4#u8vector->blob"
"/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016u8vector->list\376\001\000\000\025srfi-4#u8vector->list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017u8v"
"ector-length\376\001\000\000\026srfi-4#u8vector-length\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014u8vector-ref\376\001\000\000\023srfi-4#u8"
"vector-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015u8vector-set!\376\001\000\000\024srfi-4#u8vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011u8"
"vector\077\376\001\000\000\020srfi-4#u8vector\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011u16vector\376\001\000\000\020srfi-4#u16vector\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\017u16vector->blob\376\001\000\000\026srfi-4#u16vector->blob\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026u16vector->blob"
"/shared\376\001\000\000\035srfi-4#u16vector->blob/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017u16vector->list\376\001\000\000\026srfi"
"-4#u16vector->list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020u16vector-length\376\001\000\000\027srfi-4#u16vector-length\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\015u16vector-ref\376\001\000\000\024srfi-4#u16vector-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016u16vector-set!\376"
"\001\000\000\025srfi-4#u16vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012u16vector\077\376\001\000\000\021srfi-4#u16vector\077\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\011u32vector\376\001\000\000\020srfi-4#u32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017u32vector->blob\376\001\000\000\026srfi-4#u"
"32vector->blob\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026u32vector->blob/shared\376\001\000\000\035srfi-4#u32vector->blob/s"
"hared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017u32vector->list\376\001\000\000\026srfi-4#u32vector->list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020u32"
"vector-length\376\001\000\000\027srfi-4#u32vector-length\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015u32vector-ref\376\001\000\000\024srfi-4"
"#u32vector-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016u32vector-set!\376\001\000\000\025srfi-4#u32vector-set!\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\012u32vector\077\376\001\000\000\021srfi-4#u32vector\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011u64vector\376\001\000\000\020srfi-4#u64vecto"
"r\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017u64vector->blob\376\001\000\000\026srfi-4#u64vector->blob\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026u64vect"
"or->blob/shared\376\001\000\000\035srfi-4#u64vector->blob/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017u64vector->list\376"
"\001\000\000\026srfi-4#u64vector->list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020u64vector-length\376\001\000\000\027srfi-4#u64vector-l"
"ength\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015u64vector-ref\376\001\000\000\024srfi-4#u64vector-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016u64vect"
"or-set!\376\001\000\000\025srfi-4#u64vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012u64vector\077\376\001\000\000\021srfi-4#u64vector\077"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017list->f32vector\376\001\000\000\026srfi-4#list->f32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017list->f6"
"4vector\376\001\000\000\026srfi-4#list->f64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017list->s16vector\376\001\000\000\026srfi-4#list"
"->s16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017list->s32vector\376\001\000\000\026srfi-4#list->s32vector\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\016list->s8vector\376\001\000\000\025srfi-4#list->s8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017list->u16vector\376\001\000\000\026sr"
"fi-4#list->u16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017list->u32vector\376\001\000\000\026srfi-4#list->u32vector\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\016list->u8vector\376\001\000\000\025srfi-4#list->u8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017list->u64vect"
"or\376\001\000\000\026srfi-4#list->u64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016make-f32vector\376\001\000\000\025srfi-4#make-f32ve"
"ctor\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016make-f64vector\376\001\000\000\025srfi-4#make-f64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016make-s"
"16vector\376\001\000\000\025srfi-4#make-s16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016make-s32vector\376\001\000\000\025srfi-4#make-"
"s32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016make-s64vector\376\001\000\000\025srfi-4#make-s64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015m"
"ake-s8vector\376\001\000\000\024srfi-4#make-s8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016make-u16vector\376\001\000\000\025srfi-4#ma"
"ke-u16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016make-u32vector\376\001\000\000\025srfi-4#make-u32vector\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\016make-u64vector\376\001\000\000\025srfi-4#make-u64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015make-u8vector\376\001\000\000\024srfi-"
"4#make-u8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016number-vector\077\376\001\000\000\025srfi-4#number-vector\077\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\015read-u8vector\376\001\000\000\024srfi-4#read-u8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016read-u8vector!\376\001\000\000\025srf"
"i-4#read-u8vector!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025release-number-vector\376\001\000\000\034srfi-4#release-number"
"-vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014subf32vector\376\001\000\000\023srfi-4#subf32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014subf64v"
"ector\376\001\000\000\023srfi-4#subf64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014subs16vector\376\001\000\000\023srfi-4#subs16vector"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014subs32vector\376\001\000\000\023srfi-4#subs32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014subs64vector\376\001"
"\000\000\023srfi-4#subs64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013subs8vector\376\001\000\000\022srfi-4#subs8vector\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\014subu16vector\376\001\000\000\023srfi-4#subu16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013subu8vector\376\001\000\000\022srfi-4#"
"subu8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014subu32vector\376\001\000\000\023srfi-4#subu32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014sub"
"u64vector\376\001\000\000\023srfi-4#subu64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016write-u8vector\376\001\000\000\025srfi-4#write-"
"u8vector\376\377\016"));
C_register_lf2(lf,3,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_117,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[6] = {
{C_text("f_117:srfi_2d4_2eimport_2escm"),(void*)f_117},
{C_text("f_120:srfi_2d4_2eimport_2escm"),(void*)f_120},
{C_text("f_123:srfi_2d4_2eimport_2escm"),(void*)f_123},
{C_text("f_126:srfi_2d4_2eimport_2escm"),(void*)f_126},
{C_text("toplevel:srfi_2d4_2eimport_2escm"),(void*)C_toplevel},
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
(o e)|safe calls: 3 
o|replaced variables: 1 
o|removed binding forms: 4 
o|removed binding forms: 1 
o|simplifications: ((##core#call . 3)) 
o|  call simplifications:
o|    scheme#list	3
o|contracted procedure: k128 
o|contracted procedure: k132 
o|contracted procedure: k136 
o|removed binding forms: 3 
o|substituted constant variable: r129 
o|substituted constant variable: r133 
o|substituted constant variable: r129 
o|substituted constant variable: r133 
o|substituted constant variable: r137 
o|removed binding forms: 5 
*/
/* end of file */

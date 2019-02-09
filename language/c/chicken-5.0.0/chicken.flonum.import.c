/* Generated from chicken.flonum.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: chicken.flonum.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file chicken.flonum.import.c
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

static C_TLS C_word lf[4];
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
/* chicken.flonum.import.scm:3: ##sys#register-compiled-module */
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
av2[3]=lf[2];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[3];
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
if(C_unlikely(!C_demand_2(861))){
C_save(t1);
C_rereclaim2(861*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,4);
lf[0]=C_h_intern(&lf[0],28, C_text("\003sysregister-compiled-module"));
lf[1]=C_h_intern(&lf[1],14, C_text("chicken.flonum"));
lf[2]=C_h_intern(&lf[2],7, C_text("library"));
lf[3]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026flonum-print-precision\376\001\000\000%chicken.flonum#flonum-print-precision\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\012fpinteger\077\376\001\000\000\031chicken.flonum#fpinteger\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005fpabs\376\001\000\000\024c"
"hicken.flonum#fpabs\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006fpsqrt\376\001\000\000\025chicken.flonum#fpsqrt\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\005fplog\376\001\000\000\024chicken.flonum#fplog\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006fpexpt\376\001\000\000\025chicken.flonum#fpexpt\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\005fpexp\376\001\000\000\024chicken.flonum#fpexp\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007fpatan2\376\001\000\000\026chicken.fl"
"onum#fpatan2\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006fpatan\376\001\000\000\025chicken.flonum#fpatan\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006fpacos"
"\376\001\000\000\025chicken.flonum#fpacos\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006fpasin\376\001\000\000\025chicken.flonum#fpasin\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\005fptan\376\001\000\000\024chicken.flonum#fptan\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005fpcos\376\001\000\000\024chicken.flonum#fp"
"cos\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005fpsin\376\001\000\000\024chicken.flonum#fpsin\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011fpceiling\376\001\000\000\030chi"
"cken.flonum#fpceiling\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007fpround\376\001\000\000\026chicken.flonum#fpround\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\012fptruncate\376\001\000\000\031chicken.flonum#fptruncate\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007fpfloor\376\001\000\000\026chicken."
"flonum#fpfloor\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005fpmin\376\001\000\000\024chicken.flonum#fpmin\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005fpmax\376"
"\001\000\000\024chicken.flonum#fpmax\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005fpneg\376\001\000\000\024chicken.flonum#fpneg\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\004fp<=\376\001\000\000\023chicken.flonum#fp<=\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004fp>=\376\001\000\000\023chicken.flonum#fp>=\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\003fp<\376\001\000\000\022chicken.flonum#fp<\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003fp>\376\001\000\000\022chicken.flonum#fp>\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\003fp=\376\001\000\000\022chicken.flonum#fp=\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004fp/\077\376\001\000\000\023chicken.flonum#fp/"
"\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005fpgcd\376\001\000\000\024chicken.flonum#fpgcd\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003fp/\376\001\000\000\022chicken.flo"
"num#fp/\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003fp\052\376\001\000\000\022chicken.flonum#fp\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003fp-\376\001\000\000\022chicken.f"
"lonum#fp-\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003fp+\376\001\000\000\022chicken.flonum#fp+\376\003\000\000\002\376\003\000\000\002\376\001\000\000\037flonum-minimum-"
"decimal-exponent\376\001\000\000.chicken.flonum#flonum-minimum-decimal-exponent\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\037flonum-maximum-decimal-exponent\376\001\000\000.chicken.flonum#flonum-maximum-decimal-expo"
"nent\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027flonum-minimum-exponent\376\001\000\000&chicken.flonum#flonum-minimum-exp"
"onent\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027flonum-maximum-exponent\376\001\000\000&chicken.flonum#flonum-maximum-ex"
"ponent\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030flonum-decimal-precision\376\001\000\000\047chicken.flonum#flonum-decimal-"
"precision\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020flonum-precision\376\001\000\000\037chicken.flonum#flonum-precision\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\016flonum-epsilon\376\001\000\000\035chicken.flonum#flonum-epsilon\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014flonum"
"-radix\376\001\000\000\033chicken.flonum#flonum-radix\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016minimum-flonum\376\001\000\000\035chicken."
"flonum#minimum-flonum\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016maximum-flonum\376\001\000\000\035chicken.flonum#maximum-fl"
"onum\376\377\016"));
C_register_lf2(lf,4,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_117,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[6] = {
{C_text("f_117:chicken_2eflonum_2eimport_2escm"),(void*)f_117},
{C_text("f_120:chicken_2eflonum_2eimport_2escm"),(void*)f_120},
{C_text("f_123:chicken_2eflonum_2eimport_2escm"),(void*)f_123},
{C_text("f_126:chicken_2eflonum_2eimport_2escm"),(void*)f_126},
{C_text("toplevel:chicken_2eflonum_2eimport_2escm"),(void*)C_toplevel},
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

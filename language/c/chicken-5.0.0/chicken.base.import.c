/* Generated from chicken.base.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: chicken.base.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file chicken.base.import.c
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

static C_TLS C_word lf[5];
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_123,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_126,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.base.import.scm:26: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[0]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[0]+1);
av2[1]=t2;
av2[2]=lf[1];
av2[3]=lf[2];
av2[4]=lf[3];
av2[5]=C_fast_retrieve(lf[4]);
tp(6,av2);}}

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
if(C_unlikely(!C_demand_2(1688))){
C_save(t1);
C_rereclaim2(1688*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,5);
lf[0]=C_h_intern(&lf[0],24, C_text("\003sysregister-core-module"));
lf[1]=C_h_intern(&lf[1],12, C_text("chicken.base"));
lf[2]=C_h_intern(&lf[2],7, C_text("library"));
lf[3]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004add1\376\001\000\000\021chicken.base#add1\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011alist-ref\376\001\000\000\026chicken.ba"
"se#alist-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014alist-update\376\001\000\000\031chicken.base#alist-update\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\015alist-update!\376\001\000\000\032chicken.base#alist-update!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005atom\077\376\001\000\000\022chicken"
".base#atom\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007bignum\077\376\001\000\000\024chicken.base#bignum\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007butlast"
"\376\001\000\000\024chicken.base#butlast\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007call/cc\376\001\000\000\024chicken.base#call/cc\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\016case-sensitive\376\001\000\000\033chicken.base#case-sensitive\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011char-name\376\001\000"
"\000\026chicken.base#char-name\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004chop\376\001\000\000\021chicken.base#chop\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012"
"complement\376\001\000\000\027chicken.base#complement\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007compose\376\001\000\000\024chicken.base#co"
"mpose\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010compress\376\001\000\000\025chicken.base#compress\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007conjoin\376\001\000\000"
"\024chicken.base#conjoin\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012constantly\376\001\000\000\027chicken.base#constantly\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\010cplxnum\077\376\001\000\000\025chicken.base#cplxnum\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022current-error-port\376\001\000\000"
"\037chicken.base#current-error-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007disjoin\376\001\000\000\024chicken.base#disjoin\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\004each\376\001\000\000\021chicken.base#each\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016emergency-exit\376\001\000\000\033chicke"
"n.base#emergency-exit\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017enable-warnings\376\001\000\000\034chicken.base#enable-warn"
"ings\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007equal=\077\376\001\000\000\024chicken.base#equal=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005error\376\001\000\000\022chic"
"ken.base#error\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016exact-integer\077\376\001\000\000\033chicken.base#exact-integer\077\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\026exact-integer-nth-root\376\001\000\000#chicken.base#exact-integer-nth-root\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\022exact-integer-sqrt\376\001\000\000\037chicken.base#exact-integer-sqrt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004exit"
"\376\001\000\000\021chicken.base#exit\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014exit-handler\376\001\000\000\031chicken.base#exit-handler\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\007finite\077\376\001\000\000\024chicken.base#finite\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007fixnum\077\376\001\000\000\024chicken"
".base#fixnum\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007flatten\376\001\000\000\024chicken.base#flatten\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004flip\376"
"\001\000\000\021chicken.base#flip\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007flonum\077\376\001\000\000\024chicken.base#flonum\077\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\014flush-output\376\001\000\000\031chicken.base#flush-output\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005foldl\376\001\000\000\022chicken.ba"
"se#foldl\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005foldr\376\001\000\000\022chicken.base#foldr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006gensym\376\001\000\000\023chi"
"cken.base#gensym\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016get-call-chain\376\001\000\000\033chicken.base#get-call-chain\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\021get-output-string\376\001\000\000\036chicken.base#get-output-string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022g"
"etter-with-setter\376\001\000\000\037chicken.base#getter-with-setter\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010identity\376\001\000\000"
"\025chicken.base#identity\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025implicit-exit-handler\376\001\000\000\042chicken.base#impl"
"icit-exit-handler\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011infinite\077\376\001\000\000\026chicken.base#infinite\077\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\020input-port-open\077\376\001\000\000\035chicken.base#input-port-open\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013intersperse\376"
"\001\000\000\030chicken.base#intersperse\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004join\376\001\000\000\021chicken.base#join\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\015keyword-style\376\001\000\000\032chicken.base#keyword-style\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010list-of\077\376\001\000\000\025chic"
"ken.base#list-of\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016make-parameter\376\001\000\000\033chicken.base#make-parameter\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\014make-promise\376\001\000\000\031chicken.base#make-promise\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004nan\077\376\001\000\000\021c"
"hicken.base#nan\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006notice\376\001\000\000\023chicken.base#notice\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001o\376\001\000"
"\000\016chicken.base#o\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007on-exit\376\001\000\000\024chicken.base#on-exit\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021op"
"en-input-string\376\001\000\000\036chicken.base#open-input-string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022open-output-str"
"ing\376\001\000\000\037chicken.base#open-output-string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021output-port-open\077\376\001\000\000\036chic"
"ken.base#output-port-open\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024parentheses-synonyms\376\001\000\000!chicken.base#p"
"arentheses-synonyms\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005port\077\376\001\000\000\022chicken.base#port\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014por"
"t-closed\077\376\001\000\000\031chicken.base#port-closed\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020print-call-chain\376\001\000\000\035chick"
"en.base#print-call-chain\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005print\376\001\000\000\022chicken.base#print\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\006print\052\376\001\000\000\023chicken.base#print\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025procedure-information\376\001\000\000\042chicken"
".base#procedure-information\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010promise\077\376\001\000\000\025chicken.base#promise\077\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\017quotient&modulo\376\001\000\000\034chicken.base#quotient&modulo\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022quotie"
"nt&remainder\376\001\000\000\037chicken.base#quotient&remainder\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006rassoc\376\001\000\000\023chicke"
"n.base#rassoc\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007ratnum\077\376\001\000\000\024chicken.base#ratnum\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006sette"
"r\376\001\000\000\023chicken.base#setter\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006signum\376\001\000\000\023chicken.base#signum\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\005sleep\376\001\000\000\022chicken.base#sleep\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031string->uninterned-symbol\376\001\000\000&ch"
"icken.base#string->uninterned-symbol\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004sub1\376\001\000\000\021chicken.base#sub1\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\011subvector\376\001\000\000\026chicken.base#subvector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015symbol-append\376\001\000\000"
"\032chicken.base#symbol-append\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015symbol-escape\376\001\000\000\032chicken.base#symbol-"
"escape\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005tail\077\376\001\000\000\022chicken.base#tail\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014vector-copy!\376\001\000\000"
"\031chicken.base#vector-copy!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015vector-resize\376\001\000\000\032chicken.base#vector-r"
"esize\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004void\376\001\000\000\021chicken.base#void\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007warning\376\001\000\000\024chicken"
".base#warning\376\377\016"));
lf[4]=C_h_intern(&lf[4],34, C_text("\003syschicken.base-macro-environment"));
C_register_lf2(lf,5,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_117,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[6] = {
{C_text("f_117:chicken_2ebase_2eimport_2escm"),(void*)f_117},
{C_text("f_120:chicken_2ebase_2eimport_2escm"),(void*)f_120},
{C_text("f_123:chicken_2ebase_2eimport_2escm"),(void*)f_123},
{C_text("f_126:chicken_2ebase_2eimport_2escm"),(void*)f_126},
{C_text("toplevel:chicken_2ebase_2eimport_2escm"),(void*)C_toplevel},
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

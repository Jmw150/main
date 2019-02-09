/* Generated from chicken.process.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: chicken.process.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file chicken.process.import.c
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
/* chicken.process.import.scm:3: ##sys#register-compiled-module */
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
if(C_unlikely(!C_demand_2(561))){
C_save(t1);
C_rereclaim2(561*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,4);
lf[0]=C_h_intern(&lf[0],28, C_text("\003sysregister-compiled-module"));
lf[1]=C_h_intern(&lf[1],15, C_text("chicken.process"));
lf[2]=C_h_intern(&lf[2],5, C_text("posix"));
lf[3]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002qs\376\001\000\000\022chicken.process#qs\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006system\376\001\000\000\026chicken.proces"
"s#system\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007system\052\376\001\000\000\027chicken.process#system\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017process"
"-execute\376\001\000\000\037chicken.process#process-execute\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014process-fork\376\001\000\000\034chic"
"ken.process#process-fork\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013process-run\376\001\000\000\033chicken.process#process-r"
"un\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016process-signal\376\001\000\000\036chicken.process#process-signal\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\015process-spawn\376\001\000\000\035chicken.process#process-spawn\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014process-wait\376\001\000\000\034"
"chicken.process#process-wait\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024call-with-input-pipe\376\001\000\000$chicken.proc"
"ess#call-with-input-pipe\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025call-with-output-pipe\376\001\000\000%chicken.process"
"#call-with-output-pipe\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020close-input-pipe\376\001\000\000 chicken.process#close-"
"input-pipe\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021close-output-pipe\376\001\000\000!chicken.process#close-output-pipe"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013create-pipe\376\001\000\000\033chicken.process#create-pipe\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017open-in"
"put-pipe\376\001\000\000\037chicken.process#open-input-pipe\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020open-output-pipe\376\001\000\000 "
"chicken.process#open-output-pipe\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024with-input-from-pipe\376\001\000\000$chicken."
"process#with-input-from-pipe\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023with-output-to-pipe\376\001\000\000#chicken.proce"
"ss#with-output-to-pipe\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007process\376\001\000\000\027chicken.process#process\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\010process\052\376\001\000\000\030chicken.process#process\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015process-sleep\376\001\000\000\035chi"
"cken.process#process-sleep\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010pipe/buf\376\001\000\000\030chicken.process#pipe/buf\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\015spawn/overlay\376\001\000\000\035chicken.process#spawn/overlay\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012spawn"
"/wait\376\001\000\000\032chicken.process#spawn/wait\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014spawn/nowait\376\001\000\000\034chicken.proc"
"ess#spawn/nowait\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015spawn/nowaito\376\001\000\000\035chicken.process#spawn/nowaito\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\014spawn/detach\376\001\000\000\034chicken.process#spawn/detach\376\377\016"));
C_register_lf2(lf,4,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_117,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[6] = {
{C_text("f_117:chicken_2eprocess_2eimport_2escm"),(void*)f_117},
{C_text("f_120:chicken_2eprocess_2eimport_2escm"),(void*)f_120},
{C_text("f_123:chicken_2eprocess_2eimport_2escm"),(void*)f_123},
{C_text("f_126:chicken_2eprocess_2eimport_2escm"),(void*)f_126},
{C_text("toplevel:chicken_2eprocess_2eimport_2escm"),(void*)C_toplevel},
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

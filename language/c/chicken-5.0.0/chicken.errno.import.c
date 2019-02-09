/* Generated from chicken.errno.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: chicken.errno.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file chicken.errno.import.c
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
/* chicken.errno.import.scm:3: ##sys#register-compiled-module */
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
if(C_unlikely(!C_demand_2(821))){
C_save(t1);
C_rereclaim2(821*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,4);
lf[0]=C_h_intern(&lf[0],28, C_text("\003sysregister-compiled-module"));
lf[1]=C_h_intern(&lf[1],13, C_text("chicken.errno"));
lf[2]=C_h_intern(&lf[2],5, C_text("posix"));
lf[3]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012errno/xdev\376\001\000\000\030chicken.errno#errno/xdev\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020errno/would"
"block\376\001\000\000\036chicken.errno#errno/wouldblock\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012errno/srch\376\001\000\000\030chicken.er"
"rno#errno/srch\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013errno/spipe\376\001\000\000\031chicken.errno#errno/spipe\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\012errno/rofs\376\001\000\000\030chicken.errno#errno/rofs\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013errno/range\376\001\000\000\031chick"
"en.errno#errno/range\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012errno/pipe\376\001\000\000\030chicken.errno#errno/pipe\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\012errno/perm\376\001\000\000\030chicken.errno#errno/perm\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012errno/nxio\376\001\000\000\030ch"
"icken.errno#errno/nxio\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013errno/notty\376\001\000\000\031chicken.errno#errno/notty\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\016errno/notempty\376\001\000\000\034chicken.errno#errno/notempty\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014errno"
"/notdir\376\001\000\000\032chicken.errno#errno/notdir\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013errno/nosys\376\001\000\000\031chicken.err"
"no#errno/nosys\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013errno/nospc\376\001\000\000\031chicken.errno#errno/nospc\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\013errno/nomem\376\001\000\000\031chicken.errno#errno/nomem\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013errno/nolck\376\001\000\000\031chi"
"cken.errno#errno/nolck\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014errno/noexec\376\001\000\000\032chicken.errno#errno/noexec"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013errno/noent\376\001\000\000\031chicken.errno#errno/noent\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013errno/nod"
"ev\376\001\000\000\031chicken.errno#errno/nodev\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013errno/nfile\376\001\000\000\031chicken.errno#err"
"no/nfile\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021errno/nametoolong\376\001\000\000\037chicken.errno#errno/nametoolong\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\013errno/mlink\376\001\000\000\031chicken.errno#errno/mlink\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013errno/mfile\376\001"
"\000\000\031chicken.errno#errno/mfile\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013errno/isdir\376\001\000\000\031chicken.errno#errno/i"
"sdir\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010errno/io\376\001\000\000\026chicken.errno#errno/io\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013errno/inval"
"\376\001\000\000\031chicken.errno#errno/inval\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012errno/intr\376\001\000\000\030chicken.errno#errno/"
"intr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013errno/ilseq\376\001\000\000\031chicken.errno#errno/ilseq\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012errno"
"/fbig\376\001\000\000\030chicken.errno#errno/fbig\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013errno/fault\376\001\000\000\031chicken.errno#e"
"rrno/fault\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013errno/exist\376\001\000\000\031chicken.errno#errno/exist\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\011errno/dom\376\001\000\000\027chicken.errno#errno/dom\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014errno/deadlk\376\001\000\000\032chicken.er"
"rno#errno/deadlk\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013errno/child\376\001\000\000\031chicken.errno#errno/child\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\012errno/busy\376\001\000\000\030chicken.errno#errno/busy\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012errno/badf\376\001\000\000\030chic"
"ken.errno#errno/badf\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013errno/again\376\001\000\000\031chicken.errno#errno/again\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\013errno/acces\376\001\000\000\031chicken.errno#errno/acces\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012errno/2big\376\001\000"
"\000\030chicken.errno#errno/2big\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005errno\376\001\000\000\023chicken.errno#errno\376\377\016"));
C_register_lf2(lf,4,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_117,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[6] = {
{C_text("f_117:chicken_2eerrno_2eimport_2escm"),(void*)f_117},
{C_text("f_120:chicken_2eerrno_2eimport_2escm"),(void*)f_120},
{C_text("f_123:chicken_2eerrno_2eimport_2escm"),(void*)f_123},
{C_text("f_126:chicken_2eerrno_2eimport_2escm"),(void*)f_126},
{C_text("toplevel:chicken_2eerrno_2eimport_2escm"),(void*)C_toplevel},
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

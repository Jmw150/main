/* Generated from chicken.file.posix.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: chicken.file.posix.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file chicken.file.posix.import.c
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
/* chicken.file.posix.import.scm:3: ##sys#register-compiled-module */
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
if(C_unlikely(!C_demand_2(1721))){
C_save(t1);
C_rereclaim2(1721*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,4);
lf[0]=C_h_intern(&lf[0],28, C_text("\003sysregister-compiled-module"));
lf[1]=C_h_intern(&lf[1],18, C_text("chicken.file.posix"));
lf[2]=C_h_intern(&lf[2],5, C_text("posix"));
lf[3]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013create-fifo\376\001\000\000\036chicken.file.posix#create-fifo\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024crea"
"te-symbolic-link\376\001\000\000\047chicken.file.posix#create-symbolic-link\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022read-"
"symbolic-link\376\001\000\000%chicken.file.posix#read-symbolic-link\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020duplicate-"
"fileno\376\001\000\000#chicken.file.posix#duplicate-fileno\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013fcntl/dupfd\376\001\000\000\036chi"
"cken.file.posix#fcntl/dupfd\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013fcntl/getfd\376\001\000\000\036chicken.file.posix#fcn"
"tl/getfd\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013fcntl/getfl\376\001\000\000\036chicken.file.posix#fcntl/getfl\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\013fcntl/setfd\376\001\000\000\036chicken.file.posix#fcntl/setfd\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013fcntl/setfl\376\001\000\000"
"\036chicken.file.posix#fcntl/setfl\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020file-access-time\376\001\000\000#chicken.file."
"posix#file-access-time\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020file-change-time\376\001\000\000#chicken.file.posix#fil"
"e-change-time\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026file-modification-time\376\001\000\000)chicken.file.posix#file-m"
"odification-time\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012file-close\376\001\000\000\035chicken.file.posix#file-close\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\014file-control\376\001\000\000\037chicken.file.posix#file-control\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022file-cr"
"eation-mode\376\001\000\000%chicken.file.posix#file-creation-mode\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012file-group\376\001"
"\000\000\035chicken.file.posix#file-group\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011file-link\376\001\000\000\034chicken.file.posix#"
"file-link\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011file-lock\376\001\000\000\034chicken.file.posix#file-lock\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\022file-lock/blocking\376\001\000\000%chicken.file.posix#file-lock/blocking\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014file"
"-mkstemp\376\001\000\000\037chicken.file.posix#file-mkstemp\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011file-open\376\001\000\000\034chicken"
".file.posix#file-open\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012file-owner\376\001\000\000\035chicken.file.posix#file-owner"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020file-permissions\376\001\000\000#chicken.file.posix#file-permissions\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\015file-position\376\001\000\000 chicken.file.posix#file-position\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011file-read"
"\376\001\000\000\034chicken.file.posix#file-read\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013file-select\376\001\000\000\036chicken.file.pos"
"ix#file-select\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011file-size\376\001\000\000\034chicken.file.posix#file-size\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\011file-stat\376\001\000\000\034chicken.file.posix#file-stat\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016file-test-lock\376\001\000"
"\000!chicken.file.posix#file-test-lock\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015file-truncate\376\001\000\000 chicken.file"
".posix#file-truncate\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013file-unlock\376\001\000\000\036chicken.file.posix#file-unloc"
"k\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012file-write\376\001\000\000\035chicken.file.posix#file-write\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011file-"
"type\376\001\000\000\034chicken.file.posix#file-type\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015block-device\077\376\001\000\000 chicken.fi"
"le.posix#block-device\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021character-device\077\376\001\000\000$chicken.file.posix#ch"
"aracter-device\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012directory\077\376\001\000\000\035chicken.file.posix#directory\077\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\005fifo\077\376\001\000\000\030chicken.file.posix#fifo\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015regular-file\077\376\001\000\000 chic"
"ken.file.posix#regular-file\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007socket\077\376\001\000\000\032chicken.file.posix#socket"
"\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016symbolic-link\077\376\001\000\000!chicken.file.posix#symbolic-link\077\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\015fileno/stderr\376\001\000\000 chicken.file.posix#fileno/stderr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014fileno/stdin"
"\376\001\000\000\037chicken.file.posix#fileno/stdin\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015fileno/stdout\376\001\000\000 chicken.fil"
"e.posix#fileno/stdout\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020open-input-file\052\376\001\000\000#chicken.file.posix#open"
"-input-file\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021open-output-file\052\376\001\000\000$chicken.file.posix#open-output-"
"file\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013open/append\376\001\000\000\036chicken.file.posix#open/append\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\013open/binary\376\001\000\000\036chicken.file.posix#open/binary\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012open/creat\376\001\000\000\035chi"
"cken.file.posix#open/creat\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011open/excl\376\001\000\000\034chicken.file.posix#open/e"
"xcl\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012open/fsync\376\001\000\000\035chicken.file.posix#open/fsync\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013ope"
"n/noctty\376\001\000\000\036chicken.file.posix#open/noctty\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016open/noinherit\376\001\000\000!chi"
"cken.file.posix#open/noinherit\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015open/nonblock\376\001\000\000 chicken.file.posi"
"x#open/nonblock\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013open/rdonly\376\001\000\000\036chicken.file.posix#open/rdonly\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\011open/rdwr\376\001\000\000\034chicken.file.posix#open/rdwr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011open/read\376\001\000"
"\000\034chicken.file.posix#open/read\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011open/sync\376\001\000\000\034chicken.file.posix#op"
"en/sync\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011open/text\376\001\000\000\034chicken.file.posix#open/text\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012o"
"pen/trunc\376\001\000\000\035chicken.file.posix#open/trunc\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012open/write\376\001\000\000\035chicken"
".file.posix#open/write\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013open/wronly\376\001\000\000\036chicken.file.posix#open/wro"
"nly\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012perm/irgrp\376\001\000\000\035chicken.file.posix#perm/irgrp\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012per"
"m/iroth\376\001\000\000\035chicken.file.posix#perm/iroth\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012perm/irusr\376\001\000\000\035chicken.f"
"ile.posix#perm/irusr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012perm/irwxg\376\001\000\000\035chicken.file.posix#perm/irwxg\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\012perm/irwxo\376\001\000\000\035chicken.file.posix#perm/irwxo\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012perm/ir"
"wxu\376\001\000\000\035chicken.file.posix#perm/irwxu\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012perm/isgid\376\001\000\000\035chicken.file."
"posix#perm/isgid\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012perm/isuid\376\001\000\000\035chicken.file.posix#perm/isuid\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\012perm/isvtx\376\001\000\000\035chicken.file.posix#perm/isvtx\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012perm/iwgrp\376"
"\001\000\000\035chicken.file.posix#perm/iwgrp\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012perm/iwoth\376\001\000\000\035chicken.file.posi"
"x#perm/iwoth\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012perm/iwusr\376\001\000\000\035chicken.file.posix#perm/iwusr\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\012perm/ixgrp\376\001\000\000\035chicken.file.posix#perm/ixgrp\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012perm/ixoth\376\001\000\000\035"
"chicken.file.posix#perm/ixoth\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012perm/ixusr\376\001\000\000\035chicken.file.posix#pe"
"rm/ixusr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014port->fileno\376\001\000\000\037chicken.file.posix#port->fileno\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\017set-file-group!\376\001\000\000\042chicken.file.posix#set-file-group!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017set-f"
"ile-owner!\376\001\000\000\042chicken.file.posix#set-file-owner!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025set-file-permiss"
"ions!\376\001\000\000(chicken.file.posix#set-file-permissions!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022set-file-positi"
"on!\376\001\000\000%chicken.file.posix#set-file-position!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017set-file-times!\376\001\000\000\042"
"chicken.file.posix#set-file-times!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010seek/cur\376\001\000\000\033chicken.file.posix"
"#seek/cur\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010seek/set\376\001\000\000\033chicken.file.posix#seek/set\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010s"
"eek/end\376\001\000\000\033chicken.file.posix#seek/end\376\377\016"));
C_register_lf2(lf,4,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_117,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[6] = {
{C_text("f_117:chicken_2efile_2eposix_2eimport_2escm"),(void*)f_117},
{C_text("f_120:chicken_2efile_2eposix_2eimport_2escm"),(void*)f_120},
{C_text("f_123:chicken_2efile_2eposix_2eimport_2escm"),(void*)f_123},
{C_text("f_126:chicken_2efile_2eposix_2eimport_2escm"),(void*)f_126},
{C_text("toplevel:chicken_2efile_2eposix_2eimport_2escm"),(void*)C_toplevel},
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

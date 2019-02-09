/* Generated from stub.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: stub.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file stub.c
   unit: default_stub
   uses: library eval data-structures port extras
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_port_toplevel)
C_externimport void C_ccall C_port_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[2];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_132)
static void C_ccall f_132(C_word c,C_word *av) C_noret;
C_noret_decl(f_135)
static void C_ccall f_135(C_word c,C_word *av) C_noret;
C_noret_decl(f_138)
static void C_ccall f_138(C_word c,C_word *av) C_noret;
C_noret_decl(f_141)
static void C_ccall f_141(C_word c,C_word *av) C_noret;
C_noret_decl(f_144)
static void C_ccall f_144(C_word c,C_word *av) C_noret;
C_noret_decl(f_147)
static void C_ccall f_147(C_word c,C_word *av) C_noret;
C_noret_decl(f_149)
static void C_fcall f_149(C_word t0,C_word t1) C_noret;
C_noret_decl(f_153)
static void C_ccall f_153(C_word c,C_word *av) C_noret;
C_noret_decl(C_default_5fstub_toplevel)
C_externexport void C_ccall C_default_5fstub_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_149)
static void C_ccall trf_149(C_word c,C_word *av) C_noret;
static void C_ccall trf_149(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_149(t0,t1);}

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
C_data_2dstructures_toplevel(2,av2);}}

/* k136 in k133 in k130 */
static void C_ccall f_138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_138,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_141,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

/* k139 in k136 in k133 in k130 */
static void C_ccall f_141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_141,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_144,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k142 in k139 in k136 in k133 in k130 */
static void C_ccall f_144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_144,2,av);}
a=C_alloc(17);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_147,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_149,a[2]=t5,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_149(t7,t3);}

/* k145 in k142 in k139 in k136 in k133 in k130 */
static void C_ccall f_147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_147,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k142 in k139 in k136 in k133 in k130 */
static void C_fcall f_149(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_149,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_153,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* stub.scm:35: chicken.platform#return-to-host */
t3=*((C_word*)lf[1]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k151 in loop in k142 in k139 in k136 in k133 in k130 */
static void C_ccall f_153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_153,2,av);}
/* stub.scm:35: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_149(t2,((C_word*)t0)[3]);}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_default_5fstub_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("default_stub"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_default_5fstub_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(14))){
C_save(t1);
C_rereclaim2(14*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,2);
lf[0]=C_h_intern(&lf[0],12, C_text("default_stub"));
lf[1]=C_h_intern(&lf[1],31, C_text("chicken.platform#return-to-host"));
C_register_lf2(lf,2,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_132,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[10] = {
{C_text("f_132:stub_2escm"),(void*)f_132},
{C_text("f_135:stub_2escm"),(void*)f_135},
{C_text("f_138:stub_2escm"),(void*)f_138},
{C_text("f_141:stub_2escm"),(void*)f_141},
{C_text("f_144:stub_2escm"),(void*)f_144},
{C_text("f_147:stub_2escm"),(void*)f_147},
{C_text("f_149:stub_2escm"),(void*)f_149},
{C_text("f_153:stub_2escm"),(void*)f_153},
{C_text("toplevel:stub_2escm"),(void*)C_default_5fstub_toplevel},
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
(o e)|safe calls: 1 
o|replaced variables: 1 
o|removed binding forms: 8 
o|removed binding forms: 1 
o|customizable procedures: (loop18) 
o|calls to known targets: 2 
o|fast box initializations: 1 
*/
/* end of file */

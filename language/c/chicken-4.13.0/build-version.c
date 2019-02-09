/* Generated from build-version.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: build-version.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file build-version.c
   unit: build_2dversion
*/

#include "chicken.h"

#include "buildtag.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[7];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,17),40,35,35,115,121,115,35,98,117,105,108,100,45,116,97,103,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_build_2dversion_toplevel)
C_externexport void C_ccall C_build_2dversion_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_213)
static void C_ccall f_213(C_word c,C_word *av) C_noret;

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_build_2dversion_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("build_2dversion_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_build_2dversion_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(35))){
C_save(t1);
C_rereclaim2(35*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,7);
lf[0]=C_h_intern(&lf[0],13,"\003sysbuild-tag");
lf[1]=C_h_intern(&lf[1],17,"\003syspeek-c-string");
lf[2]=C_h_intern(&lf[2],12,"\003sysbuild-id");
lf[3]=C_decode_literal(C_heaptop,"\376B\000\000\01068eeaaef");
lf[4]=C_h_intern(&lf[4],16,"\003sysbuild-branch");
lf[5]=C_h_intern(&lf[5],17,"\003sysbuild-version");
lf[6]=C_decode_literal(C_heaptop,"\376B\000\000\0064.13.0");
C_register_lf2(lf,7,create_ptable());{}
t2=C_mutate2((C_word*)lf[0]+1 /* (set! ##sys#build-tag ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_213,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[2]+1 /* (set! ##sys#build-id ...) */,lf[3]);
t4=C_set_block_item(lf[4] /* ##sys#build-branch */,0,C_SCHEME_FALSE);
t5=C_mutate2((C_word*)lf[5]+1 /* (set! ##sys#build-version ...) */,lf[6]);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* ##sys#build-tag */
static void C_ccall f_213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_213,2,av);}
a=C_alloc(3);
/* ##sys#peek-c-string */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=C_mpointer(&a,(void*)C_BUILD_TAG);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[3] = {
{"toplevel:build_2dversion_2escm",(void*)C_build_2dversion_toplevel},
{"f_213:build_2dversion_2escm",(void*)f_213},
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
o|eliminated procedure checks: 1 
o|safe globals: (##sys#build-version ##sys#build-branch ##sys#build-id ##sys#build-tag) 
o|replaced variables: 1 
o|removed binding forms: 4 
o|removed binding forms: 1 
*/
/* end of file */

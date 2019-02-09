/* Generated from repl.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: repl.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file repl.c -emit-import-library chicken.repl
   unit: repl
   uses: eval library
*/
#include "chicken.h"

static C_word code_259() { C_clear_trace_buffer();
; return C_SCHEME_UNDEFINED; }


static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[59];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,6),40,97,52,55,48,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,114,101,112,108,45,112,114,105,110,116,45,104,111,111,107,32,120,32,112,111,114,116,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,114,101,112,108,35,113,117,105,116,45,104,111,111,107,32,114,101,115,117,108,116,41,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,26),40,99,104,105,99,107,101,110,46,114,101,112,108,35,113,117,105,116,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,20),40,99,104,105,99,107,101,110,46,114,101,112,108,35,114,101,115,101,116,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,24),40,35,35,115,121,115,35,114,101,97,100,45,112,114,111,109,112,116,45,104,111,111,107,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,114,101,115,105,122,101,45,116,114,97,99,101,45,98,117,102,102,101,114,32,105,41,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,53,51,32,103,49,54,48,41,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,14),40,119,114,105,116,101,45,101,114,114,32,120,115,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,114,101,112,108,35,113,117,105,116,45,104,111,111,107,32,114,101,115,117,108,116,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,17),40,97,55,48,50,32,109,115,103,32,46,32,97,114,103,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,6),40,97,54,56,51,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,6),40,97,56,49,56,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,56,51,32,103,49,57,48,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,55,50,32,103,50,55,57,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,118,97,114,115,32,117,41,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,15),40,97,56,50,52,32,46,32,114,101,115,117,108,116,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,6),40,97,57,55,57,41,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,8),40,97,57,55,51,32,99,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,6),40,97,55,56,49,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,6),40,97,57,57,48,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,8),40,97,54,55,55,32,107,41};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,26),40,99,104,105,99,107,101,110,46,114,101,112,108,35,114,101,112,108,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,7),40,97,49,48,49,48,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1000)
static void C_ccall f_1000(C_word c,C_word *av) C_noret;
C_noret_decl(f_1011)
static void C_ccall f_1011(C_word c,C_word *av) C_noret;
C_noret_decl(f_454)
static void C_ccall f_454(C_word c,C_word *av) C_noret;
C_noret_decl(f_457)
static void C_ccall f_457(C_word c,C_word *av) C_noret;
C_noret_decl(f_462)
static void C_ccall f_462(C_word c,C_word *av) C_noret;
C_noret_decl(f_466)
static void C_ccall f_466(C_word c,C_word *av) C_noret;
C_noret_decl(f_471)
static void C_ccall f_471(C_word c,C_word *av) C_noret;
C_noret_decl(f_477)
static void C_ccall f_477(C_word c,C_word *av) C_noret;
C_noret_decl(f_483)
static void C_ccall f_483(C_word c,C_word *av) C_noret;
C_noret_decl(f_499)
static void C_ccall f_499(C_word c,C_word *av) C_noret;
C_noret_decl(f_503)
static void C_ccall f_503(C_word c,C_word *av) C_noret;
C_noret_decl(f_510)
static void C_ccall f_510(C_word c,C_word *av) C_noret;
C_noret_decl(f_512)
static void C_ccall f_512(C_word c,C_word *av) C_noret;
C_noret_decl(f_516)
static void C_ccall f_516(C_word c,C_word *av) C_noret;
C_noret_decl(f_523)
static void C_ccall f_523(C_word c,C_word *av) C_noret;
C_noret_decl(f_526)
static void C_ccall f_526(C_word c,C_word *av) C_noret;
C_noret_decl(f_528)
static void C_ccall f_528(C_word c,C_word *av) C_noret;
C_noret_decl(f_532)
static void C_ccall f_532(C_word c,C_word *av) C_noret;
C_noret_decl(f_534)
static void C_ccall f_534(C_word c,C_word *av) C_noret;
C_noret_decl(f_540)
static void C_fcall f_540(C_word t0,C_word t1) C_noret;
C_noret_decl(f_554)
static void C_fcall f_554(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_564)
static void C_ccall f_564(C_word c,C_word *av) C_noret;
C_noret_decl(f_601)
static void C_ccall f_601(C_word c,C_word *av) C_noret;
C_noret_decl(f_614)
static void C_ccall f_614(C_word c,C_word *av) C_noret;
C_noret_decl(f_618)
static void C_ccall f_618(C_word c,C_word *av) C_noret;
C_noret_decl(f_626)
static void C_fcall f_626(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_636)
static void C_ccall f_636(C_word c,C_word *av) C_noret;
C_noret_decl(f_658)
static void C_ccall f_658(C_word c,C_word *av) C_noret;
C_noret_decl(f_661)
static void C_ccall f_661(C_word c,C_word *av) C_noret;
C_noret_decl(f_663)
static C_word C_fcall f_663(C_word t0);
C_noret_decl(f_669)
static C_word C_fcall f_669(C_word t0);
C_noret_decl(f_678)
static void C_ccall f_678(C_word c,C_word *av) C_noret;
C_noret_decl(f_684)
static void C_ccall f_684(C_word c,C_word *av) C_noret;
C_noret_decl(f_689)
static void C_ccall f_689(C_word c,C_word *av) C_noret;
C_noret_decl(f_691)
static void C_ccall f_691(C_word c,C_word *av) C_noret;
C_noret_decl(f_698)
static void C_ccall f_698(C_word c,C_word *av) C_noret;
C_noret_decl(f_703)
static void C_ccall f_703(C_word c,C_word *av) C_noret;
C_noret_decl(f_710)
static void C_ccall f_710(C_word c,C_word *av) C_noret;
C_noret_decl(f_713)
static void C_ccall f_713(C_word c,C_word *av) C_noret;
C_noret_decl(f_716)
static void C_ccall f_716(C_word c,C_word *av) C_noret;
C_noret_decl(f_720)
static void C_fcall f_720(C_word t0,C_word t1) C_noret;
C_noret_decl(f_723)
static void C_ccall f_723(C_word c,C_word *av) C_noret;
C_noret_decl(f_747)
static void C_ccall f_747(C_word c,C_word *av) C_noret;
C_noret_decl(f_754)
static void C_fcall f_754(C_word t0,C_word t1) C_noret;
C_noret_decl(f_757)
static void C_ccall f_757(C_word c,C_word *av) C_noret;
C_noret_decl(f_763)
static void C_ccall f_763(C_word c,C_word *av) C_noret;
C_noret_decl(f_777)
static void C_ccall f_777(C_word c,C_word *av) C_noret;
C_noret_decl(f_782)
static void C_ccall f_782(C_word c,C_word *av) C_noret;
C_noret_decl(f_788)
static void C_fcall f_788(C_word t0,C_word t1) C_noret;
C_noret_decl(f_795)
static void C_ccall f_795(C_word c,C_word *av) C_noret;
C_noret_decl(f_798)
static void C_ccall f_798(C_word c,C_word *av) C_noret;
C_noret_decl(f_804)
static void C_ccall f_804(C_word c,C_word *av) C_noret;
C_noret_decl(f_813)
static void C_ccall f_813(C_word c,C_word *av) C_noret;
C_noret_decl(f_819)
static void C_ccall f_819(C_word c,C_word *av) C_noret;
C_noret_decl(f_825)
static void C_ccall f_825(C_word c,C_word *av) C_noret;
C_noret_decl(f_829)
static void C_ccall f_829(C_word c,C_word *av) C_noret;
C_noret_decl(f_832)
static void C_ccall f_832(C_word c,C_word *av) C_noret;
C_noret_decl(f_843)
static void C_fcall f_843(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_847)
static void C_ccall f_847(C_word c,C_word *av) C_noret;
C_noret_decl(f_859)
static void C_ccall f_859(C_word c,C_word *av) C_noret;
C_noret_decl(f_864)
static void C_ccall f_864(C_word c,C_word *av) C_noret;
C_noret_decl(f_867)
static void C_ccall f_867(C_word c,C_word *av) C_noret;
C_noret_decl(f_870)
static void C_ccall f_870(C_word c,C_word *av) C_noret;
C_noret_decl(f_877)
static void C_ccall f_877(C_word c,C_word *av) C_noret;
C_noret_decl(f_880)
static void C_ccall f_880(C_word c,C_word *av) C_noret;
C_noret_decl(f_892)
static void C_ccall f_892(C_word c,C_word *av) C_noret;
C_noret_decl(f_897)
static void C_fcall f_897(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_907)
static void C_ccall f_907(C_word c,C_word *av) C_noret;
C_noret_decl(f_927)
static void C_ccall f_927(C_word c,C_word *av) C_noret;
C_noret_decl(f_972)
static void C_ccall f_972(C_word c,C_word *av) C_noret;
C_noret_decl(f_974)
static void C_ccall f_974(C_word c,C_word *av) C_noret;
C_noret_decl(f_980)
static void C_ccall f_980(C_word c,C_word *av) C_noret;
C_noret_decl(f_991)
static void C_ccall f_991(C_word c,C_word *av) C_noret;
C_noret_decl(f_995)
static void C_ccall f_995(C_word c,C_word *av) C_noret;
C_noret_decl(C_repl_toplevel)
C_externexport void C_ccall C_repl_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_540)
static void C_ccall trf_540(C_word c,C_word *av) C_noret;
static void C_ccall trf_540(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_540(t0,t1);}

C_noret_decl(trf_554)
static void C_ccall trf_554(C_word c,C_word *av) C_noret;
static void C_ccall trf_554(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_554(t0,t1,t2);}

C_noret_decl(trf_626)
static void C_ccall trf_626(C_word c,C_word *av) C_noret;
static void C_ccall trf_626(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_626(t0,t1,t2);}

C_noret_decl(trf_720)
static void C_ccall trf_720(C_word c,C_word *av) C_noret;
static void C_ccall trf_720(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_720(t0,t1);}

C_noret_decl(trf_754)
static void C_ccall trf_754(C_word c,C_word *av) C_noret;
static void C_ccall trf_754(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_754(t0,t1);}

C_noret_decl(trf_788)
static void C_ccall trf_788(C_word c,C_word *av) C_noret;
static void C_ccall trf_788(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_788(t0,t1);}

C_noret_decl(trf_843)
static void C_ccall trf_843(C_word c,C_word *av) C_noret;
static void C_ccall trf_843(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_843(t0,t1,t2,t3);}

C_noret_decl(trf_897)
static void C_ccall trf_897(C_word c,C_word *av) C_noret;
static void C_ccall trf_897(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_897(t0,t1,t2);}

/* k998 in k993 in a990 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_1000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1000,2,av);}
/* repl.scm:190: ##sys#reset-handler */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* a1010 in k455 in k452 */
static void C_ccall f_1011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1011,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[57];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k452 */
static void C_ccall f_454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_454,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_457,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k455 in k452 */
static void C_ccall f_457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(34,c,4)))){
C_save_and_reclaim((void *)f_457,2,av);}
a=C_alloc(34);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_set_block_item(lf[2] /* ##sys#repl-print-length-limit */,0,C_SCHEME_FALSE);
t5=C_set_block_item(lf[3] /* ##sys#repl-read-hook */,0,C_SCHEME_FALSE);
t6=C_set_block_item(lf[4] /* ##sys#repl-recent-call-chain */,0,C_SCHEME_FALSE);
t7=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#repl-print-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_462,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate(&lf[9] /* (set! chicken.repl#quit-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_477,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[11]+1 /* (set! chicken.repl#quit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_483,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[12]+1 /* (set! chicken.repl#reset-handler ...) */,*((C_word*)lf[13]+1));
t11=C_mutate((C_word*)lf[14]+1 /* (set! chicken.repl#reset ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_499,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_510,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1011,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
/* repl.scm:58: chicken.base#make-parameter */
t14=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t14;
av2[1]=t12;
av2[2]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(3,av2);}}

/* ##sys#repl-print-hook in k455 in k452 */
static void C_ccall f_462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_462,4,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_466,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_471,a[2]=t2,a[3]=t3,a[4]=((C_word)li0),tmp=(C_word)a,a+=5,tmp);
/* repl.scm:48: ##sys#with-print-length-limit */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t4;
av2[2]=*((C_word*)lf[2]+1);
av2[3]=t5;
tp(4,av2);}}

/* k464 in repl-print-hook in k455 in k452 */
static void C_ccall f_466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_466,2,av);}
/* repl.scm:49: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[6]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* a470 in repl-print-hook in k455 in k452 */
static void C_ccall f_471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_471,2,av);}
t2=*((C_word*)lf[7]+1);
/* repl.scm:48: g104 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}

/* chicken.repl#quit-hook in k455 in k452 */
static void C_ccall f_477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_477,3,av);}
/* repl.scm:51: chicken.base#exit */
t3=*((C_word*)lf[10]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.repl#quit in k455 in k452 */
static void C_ccall f_483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_483,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
if(C_truep(C_i_nullp(t2))){
/* repl.scm:52: quit-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[9]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=lf[9];
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
tp(3,av2);}}
else{
t3=C_i_car(t2);
/* repl.scm:52: quit-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[9]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=lf[9];
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}}

/* chicken.repl#reset in k455 in k452 */
static void C_ccall f_499(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_499,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_503,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* repl.scm:55: reset-handler */
t3=*((C_word*)lf[12]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k501 in chicken.repl#reset in k455 in k452 */
static void C_ccall f_503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_503,2,av);}
/* repl.scm:55: g122 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k508 in k455 in k452 */
static void C_ccall f_510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_510,2,av);}
a=C_alloc(12);
t2=C_mutate((C_word*)lf[15]+1 /* (set! chicken.repl#repl-prompt ...) */,t1);
t3=*((C_word*)lf[15]+1);
t4=C_mutate((C_word*)lf[16]+1 /* (set! ##sys#read-prompt-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_512,a[2]=t3,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[19]+1 /* (set! ##sys#resize-trace-buffer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_528,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t6=*((C_word*)lf[21]+1);
t7=*((C_word*)lf[22]+1);
t8=C_mutate((C_word*)lf[23]+1 /* (set! chicken.repl#repl ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_534,a[2]=t6,a[3]=t7,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* ##sys#read-prompt-hook in k508 in k455 in k452 */
static void C_ccall f_512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_512,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_516,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_523,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* repl.scm:63: repl-prompt */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k514 in read-prompt-hook in k508 in k455 in k452 */
static void C_ccall f_516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_516,2,av);}
/* repl.scm:64: ##sys#flush-output */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[18]+1);
tp(3,av2);}}

/* k521 in read-prompt-hook in k508 in k455 in k452 */
static void C_ccall f_523(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_523,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_526,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* repl.scm:63: g127 */
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k524 in k521 in read-prompt-hook in k508 in k455 in k452 */
static void C_ccall f_526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_526,2,av);}
/* repl.scm:63: ##sys#print */
t2=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* ##sys#resize-trace-buffer in k508 in k455 in k452 */
static void C_ccall f_528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_528,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_532,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* repl.scm:67: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k530 in resize-trace-buffer in k508 in k455 in k452 */
static void C_ccall f_532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_532,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_resize_trace_buffer(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +18,c,3)))){
C_save_and_reclaim((void*)f_534,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+18);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?((C_word*)t0)[2]:C_i_car(t2));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_540,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
t7=*((C_word*)lf[26]+1);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=*((C_word*)lf[18]+1);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=*((C_word*)lf[25]+1);
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_658,a[2]=t8,a[3]=t10,a[4]=t12,a[5]=t6,a[6]=((C_word*)t0)[3],a[7]=t5,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* repl.scm:93: ##sys#error-handler */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[38]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t13;
tp(2,av2);}}

/* write-err in chicken.repl#repl in k508 in k455 in k452 */
static void C_fcall f_540(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_540,2,t1,t2);}
a=C_alloc(6);
t3=C_i_check_list_2(t2,lf[24]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_554,a[2]=t5,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_554(t7,t1,t2);}

/* for-each-loop153 in write-err in chicken.repl#repl in k508 in k455 in k452 */
static void C_fcall f_554(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_554,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_564,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[5]+1);
/* repl.scm:78: g169 */
t6=t5;{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[25]+1);
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k562 in for-each-loop153 in write-err in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_564,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_554(t3,((C_word*)t0)[4],t2);}

/* k599 in k827 in a824 in k811 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_601,2,av);}
a=C_alloc(6);
t2=C_u_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_614,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_618,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_length(((C_word*)t0)[2]);
/* repl.scm:87: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k612 in k599 in k827 in a824 in k811 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_614,2,av);}
/* repl.scm:86: ##sys#print */
t2=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k616 in k599 in k827 in a824 in k811 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_618,2,av);}
/* repl.scm:87: string-append */
t2=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[42];
av2[3]=t1;
av2[4]=lf[43];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* for-each-loop183 in k827 in a824 in k811 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_fcall f_626(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_626,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_636,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[5]+1);
/* repl.scm:84: g199 */
t6=t5;{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[18]+1);
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k634 in for-each-loop183 in k827 in a824 in k811 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_636,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_626(t3,((C_word*)t0)[4],t2);}

/* k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_658,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_661,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* repl.scm:94: ##sys#reset-handler */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t3;
tp(2,av2);}}

/* k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,3)))){
C_save_and_reclaim((void *)f_661,2,av);}
a=C_alloc(29);
t2=t1;
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=lf[9];
t6=*((C_word*)lf[27]+1);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_663,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t12=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_669,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t13=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_678,a[2]=t4,a[3]=t10,a[4]=((C_word*)t0)[5],a[5]=t8,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t5,a[9]=t6,a[10]=t2,a[11]=((C_word*)t0)[8],a[12]=((C_word)li22),tmp=(C_word)a,a+=13,tmp);
/* repl.scm:109: call-with-current-continuation */
t14=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t14;
av2[1]=((C_word*)t0)[9];
av2[2]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(3,av2);}}

/* saveports in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static C_word C_fcall f_663(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t1=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[26]+1));
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[18]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,*((C_word*)lf[25]+1));
return(t3);}

/* resetports in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static C_word C_fcall f_669(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t1=C_mutate((C_word*)lf[26]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[2])[1]);
t2=C_mutate((C_word*)lf[18]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate((C_word*)lf[25]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[4])[1]);
return(t3);}

/* a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_678,3,av);}
a=C_alloc(22);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_684,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li11),tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_782,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word)li20),tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_991,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[2],a[7]=((C_word)li21),tmp=(C_word)a,a+=8,tmp);
/* repl.scm:111: ##sys#dynamic-wind */
t6=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* a683 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_684,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_689,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* repl.scm:113: chicken.load#load-verbose */
t3=*((C_word*)lf[39]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k687 in a683 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_689,2,av);}
a=C_alloc(9);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(&lf[9] /* (set! chicken.repl#quit-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_691,a[2]=((C_word*)t0)[3],a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_698,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* repl.scm:115: chicken.load#load-verbose */
t5=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* chicken.repl#quit-hook in k687 in a683 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_691,3,av);}
/* repl.scm:114: k */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k696 in k687 in a683 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_698,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_703,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp);
/* repl.scm:116: ##sys#error-handler */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[38]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
tp(3,av2);}}

/* a702 in k696 in k687 in a683 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +6,c,4)))){
C_save_and_reclaim((void*)f_703,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+6);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(
  /* repl.scm:118: resetports */
  f_669(((C_word*)((C_word*)t0)[2])[1])
);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_710,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* repl.scm:119: ##sys#print */
t6=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[37];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[25]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k708 in a702 in k696 in k687 in a683 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_710,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_713,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_777,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* repl.scm:121: ##sys#print */
t4=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[36];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[25]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_713(2,av2);}}}

/* k711 in k708 in a702 in k696 in k687 in a683 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_713,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_716,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_754,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t4=((C_word*)t0)[4];
t5=C_u_i_cdr(t4);
t6=t3;
f_754(t6,C_i_nullp(t5));}
else{
t4=t3;
f_754(t4,C_SCHEME_FALSE);}}

/* k714 in k711 in k708 in a702 in k696 in k687 in a683 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_716,2,av);}
a=C_alloc(7);
t2=*((C_word*)lf[28]+1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_720,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[28]+1))){
if(C_truep(C_i_structurep(*((C_word*)lf[28]+1),lf[31]))){
t4=C_slot(*((C_word*)lf[28]+1),C_fix(2));
t5=C_i_member(lf[32],t4);
if(C_truep(t5)){
t6=C_i_cadr(t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_747,a[2]=t3,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* repl.scm:135: ##sys#really-print-call-chain */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[33]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t8;
av2[2]=*((C_word*)lf[25]+1);
av2[3]=t7;
av2[4]=lf[34];
tp(5,av2);}}
else{
t6=t3;
f_720(t6,C_SCHEME_FALSE);}}
else{
t4=t3;
f_720(t4,C_SCHEME_FALSE);}}
else{
t4=t3;
f_720(t4,C_SCHEME_FALSE);}}

/* k718 in k714 in k711 in k708 in a702 in k696 in k687 in a683 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_fcall f_720(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_720,2,t0,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_723,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t1;
t4=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#repl-recent-call-chain ...) */,t3);
/* repl.scm:140: chicken.base#flush-output */
t5=*((C_word*)lf[29]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[25]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* repl.scm:139: chicken.base#print-call-chain */
t3=*((C_word*)lf[30]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=*((C_word*)lf[25]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k721 in k718 in k714 in k711 in k708 in a702 in k696 in k687 in a683 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_723,2,av);}
t2=C_set_block_item(lf[4] /* ##sys#repl-recent-call-chain */,0,t1);
/* repl.scm:140: chicken.base#flush-output */
t3=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[25]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k745 in k714 in k711 in k708 in a702 in k696 in k687 in a683 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_747,2,av);}
t2=((C_word*)t0)[2];
f_720(t2,((C_word*)t0)[3]);}

/* k752 in k711 in k708 in a702 in k696 in k687 in a683 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_fcall f_754(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_754,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_757,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* repl.scm:125: ##sys#print */
t3=*((C_word*)lf[7]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[35];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[25]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_763,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* repl.scm:128: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[6]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[25]+1);
tp(4,av2);}}}

/* k755 in k752 in k711 in k708 in a702 in k696 in k687 in a683 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_757,2,av);}
/* repl.scm:126: write-err */
f_540(((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k761 in k752 in k711 in k708 in a702 in k696 in k687 in a683 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_763,2,av);}
/* repl.scm:129: write-err */
f_540(((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k775 in k708 in a702 in k696 in k687 in a683 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_777,2,av);}
/* repl.scm:122: ##sys#print */
t2=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[25]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_782,2,av);}
a=C_alloc(10);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_788,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word)li19),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_788(t5,t1);}

/* loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_fcall f_788(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_788,2,t0,t1);}
a=C_alloc(10);
t2=(
  /* repl.scm:143: saveports */
  f_663(((C_word*)((C_word*)t0)[2])[1])
);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_795,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_974,a[2]=((C_word*)t0)[6],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
/* repl.scm:144: call-with-current-continuation */
t5=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_795,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_798,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* repl.scm:152: ##sys#read-prompt-hook */
t3=*((C_word*)lf[16]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_798,2,av);}
a=C_alloc(5);
t2=*((C_word*)lf[3]+1);
t3=(C_truep(t2)?t2:((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_804,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* repl.scm:153: g254 */
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_804,2,av);}
a=C_alloc(9);
t2=t1;
if(C_truep(C_eofp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_813,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_972,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* repl.scm:155: ##sys#peek-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[52]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[52]+1);
av2[1]=t4;
av2[2]=*((C_word*)lf[26]+1);
tp(3,av2);}}}

/* k811 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_813,2,av);}
a=C_alloc(9);
t2=code_259();
t3=C_set_block_item(lf[27] /* ##sys#unbound-in-eval */,0,C_SCHEME_END_OF_LIST);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_819,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_825,a[2]=((C_word*)t0)[4],a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
/* repl.scm:159: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* a818 in k811 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_819,2,av);}
/* repl.scm:159: evaluator */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a824 in k811 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +11,c,4)))){
C_save_and_reclaim((void*)f_825,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+11);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_829,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(*((C_word*)lf[45]+1))?C_i_pairp(*((C_word*)lf[27]+1)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_843,a[2]=t6,a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_843(t8,t3,*((C_word*)lf[27]+1),C_SCHEME_END_OF_LIST);}
else{
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_829(2,av2);}}}

/* k827 in a824 in k811 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_829,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_832,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=t2;
t4=((C_word*)t0)[4];
if(C_truep(C_i_nullp(t4))){
/* repl.scm:82: ##sys#print */
t5=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[40];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=C_i_car(t4);
t6=C_eqp(C_SCHEME_UNDEFINED,t5);
if(C_truep(C_i_not(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_601,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_626,a[2]=t9,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_626(t11,t7,t4);}
else{
t7=t3;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}

/* k830 in k827 in a824 in k811 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_832,2,av);}
/* repl.scm:184: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_788(t2,((C_word*)t0)[3]);}

/* loop in a824 in k811 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_fcall f_843(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_843,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_847,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_pairp(t3))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_859,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* repl.scm:165: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[48]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[48]+1);
av2[1]=t5;
av2[2]=lf[49];
tp(3,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_fix(9);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t5=C_i_caar(t2);
t6=C_i_memq(t5,t3);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_927,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t6)){
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=t6;
f_927(2,av2);}}
else{
t8=t2;
t9=C_u_i_car(t8);
t10=C_u_i_car(t9);
t11=C_u_i_namespaced_symbolp(t10);
if(C_truep(t11)){
t12=t7;{
C_word av2[2];
av2[0]=t12;
av2[1]=t11;
f_927(2,av2);}}
else{
t12=t2;
t13=C_u_i_car(t12);
t14=C_u_i_car(t13);
/* repl.scm:180: ##sys#symbol-has-toplevel-binding? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[50]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t7;
av2[2]=t14;
tp(3,av2);}}}}}

/* k845 in loop in a824 in k811 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_847,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(9);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k857 in loop in a824 in k811 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_859(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_859,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_892,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_897,a[2]=t5,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_897(t7,t3,t2);}

/* k862 in for-each-loop272 in k857 in loop in a824 in k811 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_864,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_867,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* repl.scm:170: ##sys#print */
t4=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_SCHEME_TRUE;
av2[4]=*((C_word*)lf[25]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k865 in k862 in for-each-loop272 in k857 in loop in a824 in k811 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_867,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_870,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_cdr(((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_877,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* repl.scm:172: ##sys#print */
t4=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[46];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[25]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
/* repl.scm:175: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[6]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[25]+1);
tp(4,av2);}}}

/* k868 in k865 in k862 in for-each-loop272 in k857 in loop in a824 in k811 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_870,2,av);}
/* repl.scm:175: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[6]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[25]+1);
tp(4,av2);}}

/* k875 in k865 in k862 in for-each-loop272 in k857 in loop in a824 in k811 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_877(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_877,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_880,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_u_i_cdr(((C_word*)t0)[3]);
/* repl.scm:173: ##sys#print */
t4=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_SCHEME_TRUE;
av2[4]=*((C_word*)lf[25]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k878 in k875 in k865 in k862 in for-each-loop272 in k857 in loop in a824 in k811 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_880,2,av);}
/* repl.scm:174: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[6]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(41);
av2[3]=*((C_word*)lf[25]+1);
tp(4,av2);}}

/* k890 in k857 in loop in a824 in k811 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_892,2,av);}
/* repl.scm:177: ##sys#flush-output */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[25]+1);
tp(3,av2);}}

/* for-each-loop272 in k857 in loop in a824 in k811 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_fcall f_897(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_897,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_907,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_864,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* repl.scm:169: ##sys#print */
t8=*((C_word*)lf[7]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[47];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[25]+1);
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k905 in for-each-loop272 in k857 in loop in a824 in k811 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_907,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_897(t3,((C_word*)t0)[4],t2);}

/* k925 in loop in a824 in k811 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_927(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_927,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* repl.scm:181: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_843(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[5]);
/* repl.scm:182: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_843(t7,((C_word*)t0)[4],t3,t6);}}

/* k970 in k802 in k796 in k793 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_972,2,av);}
t2=C_eqp(C_make_character(10),t1);
if(C_truep(t2)){
/* repl.scm:156: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[51]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[51]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[26]+1);
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_813(2,av2);}}}

/* a973 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_974,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_980,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li17),tmp=(C_word)a,a+=5,tmp);
/* repl.scm:146: ##sys#reset-handler */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}

/* a979 in a973 in loop in a781 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_980,2,av);}
t2=C_set_block_item(lf[53] /* ##sys#read-error-with-line-number */,0,C_SCHEME_FALSE);
t3=C_set_block_item(lf[54] /* ##sys#enable-qualifiers */,0,C_SCHEME_TRUE);
t4=(
  /* repl.scm:150: resetports */
  f_669(((C_word*)((C_word*)t0)[2])[1])
);
/* repl.scm:151: c */
t5=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* a990 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_991,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_995,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* repl.scm:186: chicken.load#load-verbose */
t3=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k993 in a990 in a677 in k659 in k656 in chicken.repl#repl in k508 in k455 in k452 */
static void C_ccall f_995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_995,2,av);}
a=C_alloc(4);
t2=C_mutate(&lf[9] /* (set! chicken.repl#quit-hook ...) */,((C_word*)t0)[2]);
t3=C_mutate((C_word*)lf[27]+1 /* (set! ##sys#unbound-in-eval ...) */,((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1000,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* repl.scm:189: ##sys#error-handler */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[38]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_repl_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("repl"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_repl_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(339))){
C_save(t1);
C_rereclaim2(339*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,59);
lf[0]=C_h_intern(&lf[0],4, C_text("repl"));
lf[1]=C_h_intern(&lf[1],13, C_text("chicken.repl#"));
lf[2]=C_h_intern(&lf[2],27, C_text("\003sysrepl-print-length-limit"));
lf[3]=C_h_intern(&lf[3],18, C_text("\003sysrepl-read-hook"));
lf[4]=C_h_intern(&lf[4],26, C_text("\003sysrepl-recent-call-chain"));
lf[5]=C_h_intern(&lf[5],19, C_text("\003sysrepl-print-hook"));
lf[6]=C_h_intern(&lf[6],16, C_text("\003syswrite-char-0"));
lf[7]=C_h_intern(&lf[7],9, C_text("\003sysprint"));
lf[8]=C_h_intern(&lf[8],27, C_text("\003syswith-print-length-limit"));
lf[10]=C_h_intern(&lf[10],17, C_text("chicken.base#exit"));
lf[11]=C_h_intern(&lf[11],17, C_text("chicken.repl#quit"));
lf[12]=C_h_intern(&lf[12],26, C_text("chicken.repl#reset-handler"));
lf[13]=C_h_intern(&lf[13],17, C_text("\003sysreset-handler"));
lf[14]=C_h_intern(&lf[14],18, C_text("chicken.repl#reset"));
lf[15]=C_h_intern(&lf[15],24, C_text("chicken.repl#repl-prompt"));
lf[16]=C_h_intern(&lf[16],20, C_text("\003sysread-prompt-hook"));
lf[17]=C_h_intern(&lf[17],16, C_text("\003sysflush-output"));
lf[18]=C_h_intern(&lf[18],19, C_text("\003sysstandard-output"));
lf[19]=C_h_intern(&lf[19],23, C_text("\003sysresize-trace-buffer"));
lf[20]=C_h_intern(&lf[20],16, C_text("\003syscheck-fixnum"));
lf[21]=C_h_intern(&lf[21],11, C_text("scheme#eval"));
lf[22]=C_h_intern(&lf[22],11, C_text("scheme#read"));
lf[23]=C_h_intern(&lf[23],17, C_text("chicken.repl#repl"));
lf[24]=C_h_intern(&lf[24],8, C_text("for-each"));
lf[25]=C_h_intern(&lf[25],18, C_text("\003sysstandard-error"));
lf[26]=C_h_intern(&lf[26],18, C_text("\003sysstandard-input"));
lf[27]=C_h_intern(&lf[27],19, C_text("\003sysunbound-in-eval"));
lf[28]=C_h_intern(&lf[28],18, C_text("\003syslast-exception"));
lf[29]=C_h_intern(&lf[29],25, C_text("chicken.base#flush-output"));
lf[30]=C_h_intern(&lf[30],29, C_text("chicken.base#print-call-chain"));
lf[31]=C_h_intern(&lf[31],9, C_text("condition"));
lf[32]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003exn\376\001\000\000\012call-chain"));
lf[33]=C_h_intern(&lf[33],27, C_text("\003sysreally-print-call-chain"));
lf[34]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020\012\011Call history:\012"));
lf[35]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002: "));
lf[36]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002: "));
lf[37]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006\012Error"));
lf[38]=C_h_intern(&lf[38],17, C_text("\003syserror-handler"));
lf[39]=C_h_intern(&lf[39],25, C_text("chicken.load#load-verbose"));
lf[40]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014; no values\012"));
lf[41]=C_h_intern(&lf[41],20, C_text("scheme#string-append"));
lf[42]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002; "));
lf[43]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010 values\012"));
lf[44]=C_h_intern(&lf[44],18, C_text("\003sysnumber->string"));
lf[45]=C_h_intern(&lf[45],20, C_text("\003syswarnings-enabled"));
lf[46]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005 (in "));
lf[47]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002  "));
lf[48]=C_h_intern(&lf[48],10, C_text("\003sysnotice"));
lf[49]=C_decode_literal(C_heaptop,C_text("\376B\000\000=the following toplevel variables are referenced but unbound:\012"));
lf[50]=C_h_intern(&lf[50],32, C_text("\003syssymbol-has-toplevel-binding\077"));
lf[51]=C_h_intern(&lf[51],15, C_text("\003sysread-char-0"));
lf[52]=C_h_intern(&lf[52],15, C_text("\003syspeek-char-0"));
lf[53]=C_h_intern(&lf[53],31, C_text("\003sysread-error-with-line-number"));
lf[54]=C_h_intern(&lf[54],21, C_text("\003sysenable-qualifiers"));
lf[55]=C_h_intern(&lf[55],37, C_text("scheme#call-with-current-continuation"));
lf[56]=C_h_intern(&lf[56],16, C_text("\003sysdynamic-wind"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004#;> "));
lf[58]=C_h_intern(&lf[58],27, C_text("chicken.base#make-parameter"));
C_register_lf2(lf,59,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_454,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[76] = {
{C_text("f_1000:repl_2escm"),(void*)f_1000},
{C_text("f_1011:repl_2escm"),(void*)f_1011},
{C_text("f_454:repl_2escm"),(void*)f_454},
{C_text("f_457:repl_2escm"),(void*)f_457},
{C_text("f_462:repl_2escm"),(void*)f_462},
{C_text("f_466:repl_2escm"),(void*)f_466},
{C_text("f_471:repl_2escm"),(void*)f_471},
{C_text("f_477:repl_2escm"),(void*)f_477},
{C_text("f_483:repl_2escm"),(void*)f_483},
{C_text("f_499:repl_2escm"),(void*)f_499},
{C_text("f_503:repl_2escm"),(void*)f_503},
{C_text("f_510:repl_2escm"),(void*)f_510},
{C_text("f_512:repl_2escm"),(void*)f_512},
{C_text("f_516:repl_2escm"),(void*)f_516},
{C_text("f_523:repl_2escm"),(void*)f_523},
{C_text("f_526:repl_2escm"),(void*)f_526},
{C_text("f_528:repl_2escm"),(void*)f_528},
{C_text("f_532:repl_2escm"),(void*)f_532},
{C_text("f_534:repl_2escm"),(void*)f_534},
{C_text("f_540:repl_2escm"),(void*)f_540},
{C_text("f_554:repl_2escm"),(void*)f_554},
{C_text("f_564:repl_2escm"),(void*)f_564},
{C_text("f_601:repl_2escm"),(void*)f_601},
{C_text("f_614:repl_2escm"),(void*)f_614},
{C_text("f_618:repl_2escm"),(void*)f_618},
{C_text("f_626:repl_2escm"),(void*)f_626},
{C_text("f_636:repl_2escm"),(void*)f_636},
{C_text("f_658:repl_2escm"),(void*)f_658},
{C_text("f_661:repl_2escm"),(void*)f_661},
{C_text("f_663:repl_2escm"),(void*)f_663},
{C_text("f_669:repl_2escm"),(void*)f_669},
{C_text("f_678:repl_2escm"),(void*)f_678},
{C_text("f_684:repl_2escm"),(void*)f_684},
{C_text("f_689:repl_2escm"),(void*)f_689},
{C_text("f_691:repl_2escm"),(void*)f_691},
{C_text("f_698:repl_2escm"),(void*)f_698},
{C_text("f_703:repl_2escm"),(void*)f_703},
{C_text("f_710:repl_2escm"),(void*)f_710},
{C_text("f_713:repl_2escm"),(void*)f_713},
{C_text("f_716:repl_2escm"),(void*)f_716},
{C_text("f_720:repl_2escm"),(void*)f_720},
{C_text("f_723:repl_2escm"),(void*)f_723},
{C_text("f_747:repl_2escm"),(void*)f_747},
{C_text("f_754:repl_2escm"),(void*)f_754},
{C_text("f_757:repl_2escm"),(void*)f_757},
{C_text("f_763:repl_2escm"),(void*)f_763},
{C_text("f_777:repl_2escm"),(void*)f_777},
{C_text("f_782:repl_2escm"),(void*)f_782},
{C_text("f_788:repl_2escm"),(void*)f_788},
{C_text("f_795:repl_2escm"),(void*)f_795},
{C_text("f_798:repl_2escm"),(void*)f_798},
{C_text("f_804:repl_2escm"),(void*)f_804},
{C_text("f_813:repl_2escm"),(void*)f_813},
{C_text("f_819:repl_2escm"),(void*)f_819},
{C_text("f_825:repl_2escm"),(void*)f_825},
{C_text("f_829:repl_2escm"),(void*)f_829},
{C_text("f_832:repl_2escm"),(void*)f_832},
{C_text("f_843:repl_2escm"),(void*)f_843},
{C_text("f_847:repl_2escm"),(void*)f_847},
{C_text("f_859:repl_2escm"),(void*)f_859},
{C_text("f_864:repl_2escm"),(void*)f_864},
{C_text("f_867:repl_2escm"),(void*)f_867},
{C_text("f_870:repl_2escm"),(void*)f_870},
{C_text("f_877:repl_2escm"),(void*)f_877},
{C_text("f_880:repl_2escm"),(void*)f_880},
{C_text("f_892:repl_2escm"),(void*)f_892},
{C_text("f_897:repl_2escm"),(void*)f_897},
{C_text("f_907:repl_2escm"),(void*)f_907},
{C_text("f_927:repl_2escm"),(void*)f_927},
{C_text("f_972:repl_2escm"),(void*)f_972},
{C_text("f_974:repl_2escm"),(void*)f_974},
{C_text("f_980:repl_2escm"),(void*)f_980},
{C_text("f_991:repl_2escm"),(void*)f_991},
{C_text("f_995:repl_2escm"),(void*)f_995},
{C_text("toplevel:repl_2escm"),(void*)C_repl_toplevel},
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
o|hiding unexported module binding: chicken.repl#d 
o|hiding unexported module binding: chicken.repl#define-alias 
o|hiding unexported module binding: chicken.repl#quit-hook 
S|applied compiler syntax:
S|  for-each		3
o|eliminated procedure checks: 22 
o|specializations:
o|  1 (scheme#car pair)
o|  2 (scheme#caar (pair pair *))
o|  6 (scheme#cdr pair)
o|  2 (##sys#check-list (or pair list) *)
(o e)|safe calls: 52 
(o e)|assignments to immediate values: 2 
o|safe globals: (chicken.repl#reset chicken.repl#reset-handler chicken.repl#quit chicken.repl#quit-hook ##sys#repl-print-hook ##sys#repl-recent-call-chain ##sys#repl-read-hook ##sys#repl-print-length-limit) 
o|propagated global variable: g104105 ##sys#print 
o|inlining procedure: k485 
o|inlining procedure: k485 
o|inlining procedure: k556 
o|contracted procedure: "(repl.scm:78) g154161" 
o|inlining procedure: k556 
o|inlining procedure: k579 
o|inlining procedure: k579 
o|inlining procedure: k602 
o|inlining procedure: k602 
o|inlining procedure: k628 
o|contracted procedure: "(repl.scm:84) g184191" 
o|inlining procedure: k628 
o|propagated global variable: lexn234 ##sys#last-exception 
o|inlining procedure: k733 
o|inlining procedure: k733 
o|propagated global variable: lexn234 ##sys#last-exception 
o|inlining procedure: k805 
o|inlining procedure: k805 
o|inlining procedure: k845 
o|inlining procedure: k899 
o|contracted procedure: "(repl.scm:167) g273280" 
o|inlining procedure: k868 
o|inlining procedure: k868 
o|inlining procedure: k899 
o|inlining procedure: k845 
o|inlining procedure: k947 
o|inlining procedure: k947 
o|replaced variables: 80 
o|removed binding forms: 77 
o|substituted constant variable: r4861013 
o|substituted constant variable: r4861013 
o|substituted constant variable: r7341032 
o|contracted procedure: "(repl.scm:183) write-results149" 
o|inlining procedure: k845 
o|converted assignments to bindings: (write-err148) 
o|simplifications: ((let . 1)) 
o|replaced variables: 5 
o|removed binding forms: 83 
o|inlining procedure: k721 
o|replaced variables: 6 
o|removed binding forms: 11 
o|removed binding forms: 6 
o|simplifications: ((if . 3) (##core#call . 36)) 
o|  call simplifications:
o|    scheme#eof-object?
o|    ##sys#call-with-values
o|    scheme#caar
o|    scheme#memq
o|    scheme#cons
o|    scheme#eq?	2
o|    scheme#not
o|    scheme#length
o|    ##sys#structure?
o|    scheme#member
o|    scheme#cadr
o|    ##sys#check-list
o|    scheme#pair?	7
o|    ##sys#slot	7
o|    scheme#null?	5
o|    scheme#car	4
o|contracted procedure: k491 
o|contracted procedure: k485 
o|contracted procedure: k1004 
o|contracted procedure: k536 
o|contracted procedure: k547 
o|contracted procedure: k559 
o|contracted procedure: k569 
o|contracted procedure: k573 
o|contracted procedure: k730 
o|contracted procedure: k749 
o|propagated global variable: lexn234 ##sys#last-exception 
o|contracted procedure: k736 
o|contracted procedure: k742 
o|contracted procedure: k767 
o|contracted procedure: k799 
o|contracted procedure: k808 
o|contracted procedure: k582 
o|contracted procedure: k653 
o|contracted procedure: k649 
o|contracted procedure: k591 
o|contracted procedure: k605 
o|contracted procedure: k620 
o|contracted procedure: k631 
o|contracted procedure: k641 
o|contracted procedure: k645 
o|contracted procedure: k836 
o|contracted procedure: k848 
o|contracted procedure: k854 
o|contracted procedure: k902 
o|contracted procedure: k912 
o|contracted procedure: k916 
o|contracted procedure: k887 
o|contracted procedure: k957 
o|contracted procedure: k922 
o|contracted procedure: k939 
o|contracted procedure: k963 
o|simplifications: ((let . 12)) 
o|removed binding forms: 35 
o|replaced variables: 6 
o|removed binding forms: 3 
o|direct leaf routine/allocation: saveports215 0 
o|direct leaf routine/allocation: resetports216 0 
o|contracted procedure: "(repl.scm:118) k705" 
o|contracted procedure: "(repl.scm:143) k790" 
o|contracted procedure: "(repl.scm:150) k984" 
o|removed binding forms: 3 
o|customizable procedures: (loop263 for-each-loop272288 for-each-loop183201 loop248 k752 write-err148 k718 for-each-loop153171) 
o|calls to known targets: 24 
o|fast box initializations: 7 
o|fast global references: 3 
o|fast global assignments: 3 
o|dropping unused closure argument: f_540 
*/
/* end of file */

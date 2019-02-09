/* Generated from eval-modules.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: eval-modules.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file eval-modules.c
   unit: eval-modules
   uses: eval
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[103];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,6),40,97,52,53,55,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,6),40,97,52,55,53,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,6),40,97,52,57,51,41,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,6),40,97,52,57,57,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,6),40,97,53,49,55,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,6),40,97,53,51,53,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,6),40,97,53,53,51,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,6),40,97,53,55,49,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,6),40,97,53,56,57,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,6),40,97,53,57,53,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,6),40,97,54,49,51,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,6),40,97,54,51,49,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,6),40,97,54,52,57,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,6),40,97,54,54,55,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,6),40,97,54,56,53,41,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,6),40,97,54,57,56,41,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,6),40,97,55,49,54,41,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,6),40,97,55,51,52,41,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,6),40,97,55,53,50,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,6),40,97,55,55,48,41,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,6),40,97,55,56,56,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,6),40,97,56,48,54,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,6),40,97,56,50,52,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,6),40,97,56,52,50,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,6),40,97,56,54,48,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,6),40,97,56,55,56,41,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,6),40,97,56,57,54,41,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,6),40,97,57,49,52,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,6),40,97,57,51,50,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,6),40,97,57,53,48,41,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,6),40,97,57,54,56,41,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,6),40,97,57,56,54,41,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,7),40,97,49,48,48,52,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,7),40,97,49,48,50,50,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,7),40,97,49,48,52,48,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,7),40,97,49,48,53,56,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,7),40,97,49,48,55,54,41,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,7),40,97,49,48,57,52,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,7),40,97,49,49,49,50,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,105,109,112,111,114,116,45,108,105,98,114,97,114,121,45,104,111,111,107,32,109,110,97,109,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1005)
static void C_ccall f_1005(C_word c,C_word *av) C_noret;
C_noret_decl(f_1023)
static void C_ccall f_1023(C_word c,C_word *av) C_noret;
C_noret_decl(f_1041)
static void C_ccall f_1041(C_word c,C_word *av) C_noret;
C_noret_decl(f_1059)
static void C_ccall f_1059(C_word c,C_word *av) C_noret;
C_noret_decl(f_1077)
static void C_ccall f_1077(C_word c,C_word *av) C_noret;
C_noret_decl(f_1095)
static void C_ccall f_1095(C_word c,C_word *av) C_noret;
C_noret_decl(f_1113)
static void C_ccall f_1113(C_word c,C_word *av) C_noret;
C_noret_decl(f_1131)
static void C_ccall f_1131(C_word c,C_word *av) C_noret;
C_noret_decl(f_456)
static void C_ccall f_456(C_word c,C_word *av) C_noret;
C_noret_decl(f_458)
static void C_ccall f_458(C_word c,C_word *av) C_noret;
C_noret_decl(f_476)
static void C_ccall f_476(C_word c,C_word *av) C_noret;
C_noret_decl(f_494)
static void C_ccall f_494(C_word c,C_word *av) C_noret;
C_noret_decl(f_500)
static void C_ccall f_500(C_word c,C_word *av) C_noret;
C_noret_decl(f_518)
static void C_ccall f_518(C_word c,C_word *av) C_noret;
C_noret_decl(f_536)
static void C_ccall f_536(C_word c,C_word *av) C_noret;
C_noret_decl(f_554)
static void C_ccall f_554(C_word c,C_word *av) C_noret;
C_noret_decl(f_572)
static void C_ccall f_572(C_word c,C_word *av) C_noret;
C_noret_decl(f_590)
static void C_ccall f_590(C_word c,C_word *av) C_noret;
C_noret_decl(f_596)
static void C_ccall f_596(C_word c,C_word *av) C_noret;
C_noret_decl(f_614)
static void C_ccall f_614(C_word c,C_word *av) C_noret;
C_noret_decl(f_632)
static void C_ccall f_632(C_word c,C_word *av) C_noret;
C_noret_decl(f_650)
static void C_ccall f_650(C_word c,C_word *av) C_noret;
C_noret_decl(f_668)
static void C_ccall f_668(C_word c,C_word *av) C_noret;
C_noret_decl(f_686)
static void C_ccall f_686(C_word c,C_word *av) C_noret;
C_noret_decl(f_697)
static void C_ccall f_697(C_word c,C_word *av) C_noret;
C_noret_decl(f_699)
static void C_ccall f_699(C_word c,C_word *av) C_noret;
C_noret_decl(f_717)
static void C_ccall f_717(C_word c,C_word *av) C_noret;
C_noret_decl(f_735)
static void C_ccall f_735(C_word c,C_word *av) C_noret;
C_noret_decl(f_753)
static void C_ccall f_753(C_word c,C_word *av) C_noret;
C_noret_decl(f_771)
static void C_ccall f_771(C_word c,C_word *av) C_noret;
C_noret_decl(f_789)
static void C_ccall f_789(C_word c,C_word *av) C_noret;
C_noret_decl(f_807)
static void C_ccall f_807(C_word c,C_word *av) C_noret;
C_noret_decl(f_825)
static void C_ccall f_825(C_word c,C_word *av) C_noret;
C_noret_decl(f_843)
static void C_ccall f_843(C_word c,C_word *av) C_noret;
C_noret_decl(f_861)
static void C_ccall f_861(C_word c,C_word *av) C_noret;
C_noret_decl(f_879)
static void C_ccall f_879(C_word c,C_word *av) C_noret;
C_noret_decl(f_897)
static void C_ccall f_897(C_word c,C_word *av) C_noret;
C_noret_decl(f_915)
static void C_ccall f_915(C_word c,C_word *av) C_noret;
C_noret_decl(f_933)
static void C_ccall f_933(C_word c,C_word *av) C_noret;
C_noret_decl(f_951)
static void C_ccall f_951(C_word c,C_word *av) C_noret;
C_noret_decl(f_969)
static void C_ccall f_969(C_word c,C_word *av) C_noret;
C_noret_decl(f_987)
static void C_ccall f_987(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_2dmodules_toplevel)
C_externexport void C_ccall C_eval_2dmodules_toplevel(C_word c,C_word *av) C_noret;

/* a1004 in k454 */
static void C_ccall f_1005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1005,2,av);}
/* chicken.time.posix.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[83];
av2[3]=lf[21];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[84];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a1022 in k454 */
static void C_ccall f_1023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1023,2,av);}
/* chicken.continuation.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[85];
av2[3]=lf[86];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[87];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a1040 in k454 */
static void C_ccall f_1041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1041,2,av);}
/* chicken.file.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[88];
av2[3]=lf[89];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[90];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a1058 in k454 */
static void C_ccall f_1059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1059,2,av);}
/* chicken.read-syntax.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[91];
av2[3]=lf[92];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[93];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a1076 in k454 */
static void C_ccall f_1077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1077,2,av);}
/* chicken.repl.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[94];
av2[3]=lf[95];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[96];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a1094 in k454 */
static void C_ccall f_1095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1095,2,av);}
/* chicken.tcp.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[97];
av2[3]=lf[98];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[99];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a1112 in k454 */
static void C_ccall f_1113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1113,2,av);}
/* srfi-4.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[100];
av2[3]=lf[100];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[101];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* ##sys#import-library-hook in k454 */
static void C_ccall f_1131(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1131,3,av);}
t3=C_i_getprop(t2,lf[5],C_SCHEME_FALSE);
if(C_truep(t3)){
t4=t1;
/* eval-modules.scm:100: il */
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}
else{
/* eval-modules.scm:101: hook */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}}

/* k454 */
static void C_ccall f_456(C_word c,C_word *av){
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
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word t59;
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word t66;
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word t81;
C_word t82;
C_word t83;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(441,c,3)))){
C_save_and_reclaim((void *)f_456,2,av);}
a=C_alloc(441);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_458,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_putprop(&a,3,lf[2],lf[5],t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_476,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_putprop(&a,3,lf[6],lf[5],t5);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_494,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
t8=C_a_i_putprop(&a,3,lf[9],lf[5],t7);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_500,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp);
t10=C_a_i_putprop(&a,3,lf[11],lf[5],t9);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_518,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
t12=C_a_i_putprop(&a,3,lf[13],lf[5],t11);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_536,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp);
t14=C_a_i_putprop(&a,3,lf[15],lf[5],t13);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_554,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
t16=C_a_i_putprop(&a,3,lf[18],lf[5],t15);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_572,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp);
t18=C_a_i_putprop(&a,3,lf[20],lf[5],t17);
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_590,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
t20=C_a_i_putprop(&a,3,lf[24],lf[5],t19);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_596,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp);
t22=C_a_i_putprop(&a,3,lf[27],lf[5],t21);
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_614,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp);
t24=C_a_i_putprop(&a,3,lf[30],lf[5],t23);
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_632,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
t26=C_a_i_putprop(&a,3,lf[33],lf[5],t25);
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_650,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp);
t28=C_a_i_putprop(&a,3,lf[36],lf[5],t27);
t29=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_668,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
t30=C_a_i_putprop(&a,3,lf[39],lf[5],t29);
t31=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_686,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp);
t32=C_a_i_putprop(&a,3,lf[43],lf[5],t31);
t33=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_699,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
t34=C_a_i_putprop(&a,3,lf[47],lf[5],t33);
t35=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_717,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
t36=C_a_i_putprop(&a,3,lf[50],lf[5],t35);
t37=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_735,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
t38=C_a_i_putprop(&a,3,lf[52],lf[5],t37);
t39=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_753,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
t40=C_a_i_putprop(&a,3,lf[54],lf[5],t39);
t41=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_771,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp);
t42=C_a_i_putprop(&a,3,lf[56],lf[5],t41);
t43=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_789,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp);
t44=C_a_i_putprop(&a,3,lf[58],lf[5],t43);
t45=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_807,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
t46=C_a_i_putprop(&a,3,lf[61],lf[5],t45);
t47=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_825,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp);
t48=C_a_i_putprop(&a,3,lf[63],lf[5],t47);
t49=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_843,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp);
t50=C_a_i_putprop(&a,3,lf[65],lf[5],t49);
t51=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_861,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
t52=C_a_i_putprop(&a,3,lf[67],lf[5],t51);
t53=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_879,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp);
t54=C_a_i_putprop(&a,3,lf[69],lf[5],t53);
t55=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_897,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp);
t56=C_a_i_putprop(&a,3,lf[71],lf[5],t55);
t57=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_915,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
t58=C_a_i_putprop(&a,3,lf[73],lf[5],t57);
t59=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_933,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp);
t60=C_a_i_putprop(&a,3,lf[75],lf[5],t59);
t61=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_951,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
t62=C_a_i_putprop(&a,3,lf[77],lf[5],t61);
t63=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_969,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
t64=C_a_i_putprop(&a,3,lf[79],lf[5],t63);
t65=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_987,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp);
t66=C_a_i_putprop(&a,3,lf[81],lf[5],t65);
t67=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1005,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp);
t68=C_a_i_putprop(&a,3,lf[83],lf[5],t67);
t69=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1023,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp);
t70=C_a_i_putprop(&a,3,lf[85],lf[5],t69);
t71=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1041,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp);
t72=C_a_i_putprop(&a,3,lf[88],lf[5],t71);
t73=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1059,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp);
t74=C_a_i_putprop(&a,3,lf[91],lf[5],t73);
t75=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1077,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp);
t76=C_a_i_putprop(&a,3,lf[94],lf[5],t75);
t77=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1095,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp);
t78=C_a_i_putprop(&a,3,lf[97],lf[5],t77);
t79=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1113,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp);
t80=C_a_i_putprop(&a,3,lf[100],lf[5],t79);
t81=*((C_word*)lf[102]+1);
t82=C_mutate((C_word*)lf[102]+1 /* (set! ##sys#import-library-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1131,a[2]=t81,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp));
t83=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t83;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t83+1)))(2,av2);}}

/* a457 in k454 */
static void C_ccall f_458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_458,2,av);}
/* chicken.bitwise.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[2];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[4];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a475 in k454 */
static void C_ccall f_476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_476,2,av);}
/* chicken.blob.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[6];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[7];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a493 in k454 */
static void C_ccall f_494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_494,2,av);}
/* chicken.foreign.import.scm:27: ##sys#register-primitive-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t1;
av2[2]=lf[9];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=*((C_word*)lf[10]+1);
tp(5,av2);}}

/* a499 in k454 */
static void C_ccall f_500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_500,2,av);}
/* chicken.fixnum.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[11];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[12];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a517 in k454 */
static void C_ccall f_518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_518,2,av);}
/* chicken.keyword.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[13];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[14];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a535 in k454 */
static void C_ccall f_536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_536,2,av);}
/* chicken.internal.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[15];
av2[3]=lf[16];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[17];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a553 in k454 */
static void C_ccall f_554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_554,2,av);}
/* chicken.platform.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[18];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[19];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a571 in k454 */
static void C_ccall f_572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_572,2,av);}
/* chicken.errno.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[20];
av2[3]=lf[21];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[22];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a589 in k454 */
static void C_ccall f_590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_590,2,av);}
/* chicken.condition.import.scm:26: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=t1;
av2[2]=lf[24];
av2[3]=lf[3];
av2[4]=lf[25];
av2[5]=*((C_word*)lf[26]+1);
tp(6,av2);}}

/* a595 in k454 */
static void C_ccall f_596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_596,2,av);}
/* chicken.string.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[27];
av2[3]=lf[28];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[29];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a613 in k454 */
static void C_ccall f_614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_614,2,av);}
/* chicken.irregex.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[30];
av2[3]=lf[31];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[32];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a631 in k454 */
static void C_ccall f_632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_632,2,av);}
/* chicken.pathname.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[33];
av2[3]=lf[34];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[35];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a649 in k454 */
static void C_ccall f_650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_650,2,av);}
/* chicken.io.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[36];
av2[3]=lf[37];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[38];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a667 in k454 */
static void C_ccall f_668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_668,2,av);}
/* chicken.port.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[39];
av2[3]=lf[40];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[41];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a685 in k454 */
static void C_ccall f_686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_686,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_697,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken.time.import.scm:33: ##sys#symbol-has-toplevel-binding? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[42];
tp(3,av2);}}

/* k695 in a685 in k454 */
static void C_ccall f_697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_697,2,av);}
if(C_truep(t1)){
t2=*((C_word*)lf[42]+1);
t3=*((C_word*)lf[42]+1);
/* chicken.time.import.scm:26: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[43];
av2[3]=lf[3];
av2[4]=lf[44];
av2[5]=*((C_word*)lf[42]+1);
tp(6,av2);}}
else{
t2=*((C_word*)lf[45]+1);
t3=*((C_word*)lf[45]+1);
/* chicken.time.import.scm:26: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[43];
av2[3]=lf[3];
av2[4]=lf[44];
av2[5]=*((C_word*)lf[45]+1);
tp(6,av2);}}}

/* a698 in k454 */
static void C_ccall f_699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_699,2,av);}
/* chicken.memory.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[47];
av2[3]=lf[48];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[49];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a716 in k454 */
static void C_ccall f_717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_717,2,av);}
/* chicken.file.posix.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[50];
av2[3]=lf[21];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[51];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a734 in k454 */
static void C_ccall f_735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_735,2,av);}
/* chicken.flonum.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[52];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[53];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a752 in k454 */
static void C_ccall f_753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_753,2,av);}
/* chicken.format.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[54];
av2[3]=lf[37];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[55];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a770 in k454 */
static void C_ccall f_771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_771,2,av);}
/* chicken.gc.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[56];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[57];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a788 in k454 */
static void C_ccall f_789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_789,2,av);}
/* chicken.eval.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[58];
av2[3]=lf[59];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[60];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a806 in k454 */
static void C_ccall f_807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_807,2,av);}
/* chicken.load.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[61];
av2[3]=lf[59];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[62];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a824 in k454 */
static void C_ccall f_825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_825,2,av);}
/* chicken.locative.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[63];
av2[3]=lf[48];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[64];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a842 in k454 */
static void C_ccall f_843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_843,2,av);}
/* chicken.memory.representation.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[65];
av2[3]=lf[48];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[66];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a860 in k454 */
static void C_ccall f_861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_861,2,av);}
/* chicken.plist.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[67];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[68];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a878 in k454 */
static void C_ccall f_879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_879,2,av);}
/* chicken.pretty-print.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[69];
av2[3]=lf[37];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[70];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a896 in k454 */
static void C_ccall f_897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_897,2,av);}
/* chicken.process.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[71];
av2[3]=lf[21];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[72];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a914 in k454 */
static void C_ccall f_915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_915,2,av);}
/* chicken.process.signal.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[73];
av2[3]=lf[21];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[74];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a932 in k454 */
static void C_ccall f_933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_933,2,av);}
/* chicken.process-context.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[75];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[76];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a950 in k454 */
static void C_ccall f_951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_951,2,av);}
/* chicken.process-context.posix.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[77];
av2[3]=lf[21];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[78];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a968 in k454 */
static void C_ccall f_969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_969,2,av);}
/* chicken.random.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[79];
av2[3]=lf[37];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[80];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a986 in k454 */
static void C_ccall f_987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_987,2,av);}
/* chicken.sort.import.scm:3: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[81];
av2[3]=lf[28];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[82];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_eval_2dmodules_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("eval-modules"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_eval_2dmodules_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(15315))){
C_save(t1);
C_rereclaim2(15315*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,103);
lf[0]=C_h_intern(&lf[0],12, C_text("eval-modules"));
lf[1]=C_h_intern(&lf[1],28, C_text("\003sysregister-compiled-module"));
lf[2]=C_h_intern(&lf[2],15, C_text("chicken.bitwise"));
lf[3]=C_h_intern(&lf[3],7, C_text("library"));
lf[4]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020arithmetic-shift\376\001\000\000 chicken.bitwise#arithmetic-shift\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\016integer-length\376\001\000\000\036chicken.bitwise#integer-length\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014bit->boolean\376"
"\001\000\000\034chicken.bitwise#bit->boolean\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013bitwise-not\376\001\000\000\033chicken.bitwise#b"
"itwise-not\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013bitwise-xor\376\001\000\000\033chicken.bitwise#bitwise-xor\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\013bitwise-ior\376\001\000\000\033chicken.bitwise#bitwise-ior\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013bitwise-and\376\001\000\000\033chi"
"cken.bitwise#bitwise-and\376\377\016"));
lf[5]=C_h_intern(&lf[5],10, C_text("\003sysimport"));
lf[6]=C_h_intern(&lf[6],12, C_text("chicken.blob"));
lf[7]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014blob->string\376\001\000\000\031chicken.blob#blob->string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014string->"
"blob\376\001\000\000\031chicken.blob#string->blob\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005blob\077\376\001\000\000\022chicken.blob#blob\077\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\006blob=\077\376\001\000\000\023chicken.blob#blob=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011blob-size\376\001\000\000\026chicken.b"
"lob#blob-size\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011make-blob\376\001\000\000\026chicken.blob#make-blob\376\377\016"));
lf[8]=C_h_intern(&lf[8],29, C_text("\003sysregister-primitive-module"));
lf[9]=C_h_intern(&lf[9],15, C_text("chicken.foreign"));
lf[10]=C_h_intern(&lf[10],33, C_text("\003syschicken-ffi-macro-environment"));
lf[11]=C_h_intern(&lf[11],14, C_text("chicken.fixnum"));
lf[12]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004fx/\077\376\001\000\000\023chicken.fixnum#fx/\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004fx\052\077\376\001\000\000\023chicken.fixnu"
"m#fx\052\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004fx-\077\376\001\000\000\023chicken.fixnum#fx-\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004fx+\077\376\001\000\000\023chicken"
".fixnum#fx+\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005fxrem\376\001\000\000\024chicken.fixnum#fxrem\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005fxmod\376\001\000"
"\000\024chicken.fixnum#fxmod\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005fxgcd\376\001\000\000\024chicken.fixnum#fxgcd\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\003fx/\376\001\000\000\022chicken.fixnum#fx/\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005fxlen\376\001\000\000\024chicken.fixnum#fxlen\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\007fxeven\077\376\001\000\000\026chicken.fixnum#fxeven\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006fxodd\077\376\001\000\000\025chicken.fixn"
"um#fxodd\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005fxshr\376\001\000\000\024chicken.fixnum#fxshr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005fxshl\376\001\000\000\024c"
"hicken.fixnum#fxshl\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005fxnot\376\001\000\000\024chicken.fixnum#fxnot\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005f"
"xxor\376\001\000\000\024chicken.fixnum#fxxor\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005fxior\376\001\000\000\024chicken.fixnum#fxior\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\005fxand\376\001\000\000\024chicken.fixnum#fxand\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005fxneg\376\001\000\000\024chicken.fixnum#f"
"xneg\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005fxmax\376\001\000\000\024chicken.fixnum#fxmax\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005fxmin\376\001\000\000\024chicke"
"n.fixnum#fxmin\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004fx<=\376\001\000\000\023chicken.fixnum#fx<=\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004fx>=\376\001\000\000"
"\023chicken.fixnum#fx>=\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003fx<\376\001\000\000\022chicken.fixnum#fx<\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003fx>\376"
"\001\000\000\022chicken.fixnum#fx>\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003fx=\376\001\000\000\022chicken.fixnum#fx=\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003fx"
"\052\376\001\000\000\022chicken.fixnum#fx\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003fx-\376\001\000\000\022chicken.fixnum#fx-\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003"
"fx+\376\001\000\000\022chicken.fixnum#fx+\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020fixnum-precision\376\001\000\000\037chicken.fixnum#fix"
"num-precision\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013fixnum-bits\376\001\000\000\032chicken.fixnum#fixnum-bits\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\024most-negative-fixnum\376\001\000\000#chicken.fixnum#most-negative-fixnum\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024"
"most-positive-fixnum\376\001\000\000#chicken.fixnum#most-positive-fixnum\376\377\016"));
lf[13]=C_h_intern(&lf[13],15, C_text("chicken.keyword"));
lf[14]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010keyword\077\376\001\000\000\030chicken.keyword#keyword\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013get-keyword\376\001"
"\000\000\033chicken.keyword#get-keyword\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017keyword->string\376\001\000\000\037chicken.keyword"
"#keyword->string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017string->keyword\376\001\000\000\037chicken.keyword#string->keywo"
"rd\376\377\016"));
lf[15]=C_h_intern(&lf[15],16, C_text("chicken.internal"));
lf[16]=C_h_intern(&lf[16],8, C_text("internal"));
lf[17]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024string->c-identifier\376\001\000\000%chicken.internal#string->c-identifier\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\012library-id\376\001\000\000\033chicken.internal#library-id\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030valid-libra"
"ry-specifier\077\376\001\000\000)chicken.internal#valid-library-specifier\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022module"
"-requirement\376\001\000\000#chicken.internal#module-requirement\376\003\000\000\002\376\003\000\000\002\376\001\000\000\033check-for-mul"
"tiple-bindings\376\001\000\000,chicken.internal#check-for-multiple-bindings\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014ma"
"cro-subset\376\001\000\000\035chicken.internal#macro-subset\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027fixup-macro-environme"
"nt\376\001\000\000(chicken.internal#fixup-macro-environment\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016hash-table-ref\376\001\000\000"
"\037chicken.internal#hash-table-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017hash-table-set!\376\001\000\000 chicken.inter"
"nal#hash-table-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022hash-table-update!\376\001\000\000#chicken.internal#hash-t"
"able-update!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023hash-table-for-each\376\001\000\000$chicken.internal#hash-table-f"
"or-each\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017hash-table-size\376\001\000\000 chicken.internal#hash-table-size\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\017default-imports\376\001\000\000 chicken.internal#default-imports\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026defa"
"ult-syntax-imports\376\001\000\000\047chicken.internal#default-syntax-imports\376\377\016"));
lf[18]=C_h_intern(&lf[18],16, C_text("chicken.platform"));
lf[19]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016build-platform\376\001\000\000\037chicken.platform#build-platform\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017"
"chicken-version\376\001\000\000 chicken.platform#chicken-version\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014chicken-home\376"
"\001\000\000\035chicken.platform#chicken-home\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010feature\077\376\001\000\000\031chicken.platform#fe"
"ature\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010features\376\001\000\000\031chicken.platform#features\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022machin"
"e-byte-order\376\001\000\000#chicken.platform#machine-byte-order\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014machine-type\376"
"\001\000\000\035chicken.platform#machine-type\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017repository-path\376\001\000\000 chicken.plat"
"form#repository-path\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027installation-repository\376\001\000\000(chicken.platform#"
"installation-repository\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021register-feature!\376\001\000\000\042chicken.platform#reg"
"ister-feature!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023unregister-feature!\376\001\000\000$chicken.platform#unregister"
"-feature!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015software-type\376\001\000\000\036chicken.platform#software-type\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\020software-version\376\001\000\000!chicken.platform#software-version\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016retu"
"rn-to-host\376\001\000\000\037chicken.platform#return-to-host\376\377\016"));
lf[20]=C_h_intern(&lf[20],13, C_text("chicken.errno"));
lf[21]=C_h_intern(&lf[21],5, C_text("posix"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012errno/xdev\376\001\000\000\030chicken.errno#errno/xdev\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020errno/would"
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
lf[23]=C_h_intern(&lf[23],24, C_text("\003sysregister-core-module"));
lf[24]=C_h_intern(&lf[24],17, C_text("chicken.condition"));
lf[25]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005abort\376\001\000\000\027chicken.condition#abort\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006signal\376\001\000\000\030chicke"
"n.condition#signal\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031current-exception-handler\376\001\000\000+chicken.condition"
"#current-exception-handler\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023print-error-message\376\001\000\000%chicken.conditi"
"on#print-error-message\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026with-exception-handler\376\001\000\000(chicken.conditio"
"n#with-exception-handler\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027make-property-condition\376\001\000\000)chicken.condi"
"tion#make-property-condition\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030make-composite-condition\376\001\000\000\052chicken."
"condition#make-composite-condition\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011condition\376\001\000\000\033chicken.condition"
"#condition\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012condition\077\376\001\000\000\034chicken.condition#condition\077\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\017condition->list\376\001\000\000!chicken.condition#condition->list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023condition"
"-predicate\376\001\000\000%chicken.condition#condition-predicate\376\003\000\000\002\376\003\000\000\002\376\001\000\000\033condition-pro"
"perty-accessor\376\001\000\000-chicken.condition#condition-property-accessor\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026g"
"et-condition-property\376\001\000\000(chicken.condition#get-condition-property\376\377\016"));
lf[26]=C_h_intern(&lf[26],39, C_text("\003syschicken.condition-macro-environment"));
lf[27]=C_h_intern(&lf[27],14, C_text("chicken.string"));
lf[28]=C_h_intern(&lf[28],15, C_text("data-structures"));
lf[29]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004conc\376\001\000\000\023chicken.string#conc\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010->string\376\001\000\000\027chicken.s"
"tring#->string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013string-chop\376\001\000\000\032chicken.string#string-chop\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\014string-chomp\376\001\000\000\033chicken.string#string-chomp\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017string-compare3"
"\376\001\000\000\036chicken.string#string-compare3\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022string-compare3-ci\376\001\000\000!chicken"
".string#string-compare3-ci\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024reverse-list->string\376\001\000\000#chicken.string"
"#reverse-list->string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025reverse-string-append\376\001\000\000$chicken.string#rev"
"erse-string-append\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022string-intersperse\376\001\000\000!chicken.string#string-in"
"tersperse\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014string-split\376\001\000\000\033chicken.string#string-split\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\020string-translate\376\001\000\000\037chicken.string#string-translate\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021string-tra"
"nslate\052\376\001\000\000 chicken.string#string-translate\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013substring=\077\376\001\000\000\032chick"
"en.string#substring=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016substring-ci=\077\376\001\000\000\035chicken.string#substring-"
"ci=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017substring-index\376\001\000\000\036chicken.string#substring-index\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\022substring-index-ci\376\001\000\000!chicken.string#substring-index-ci\376\377\016"));
lf[30]=C_h_intern(&lf[30],15, C_text("chicken.irregex"));
lf[31]=C_h_intern(&lf[31],7, C_text("irregex"));
lf[32]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007irregex\376\001\000\000\027chicken.irregex#irregex\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010irregex\077\376\001\000\000\030ch"
"icken.irregex#irregex\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013string->sre\376\001\000\000\033chicken.irregex#string->sre"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021maybe-string->sre\376\001\000\000!chicken.irregex#maybe-string->sre\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\014sre->irregex\376\001\000\000\034chicken.irregex#sre->irregex\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015irregex-names\376\001"
"\000\000\035chicken.irregex#irregex-names\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026irregex-num-submatches\376\001\000\000&chicke"
"n.irregex#irregex-num-submatches\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017string->irregex\376\001\000\000\037chicken.irreg"
"ex#string->irregex\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024make-irregex-chunker\376\001\000\000$chicken.irregex#make-i"
"rregex-chunker\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017irregex-extract\376\001\000\000\037chicken.irregex#irregex-extract"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014irregex-fold\376\001\000\000\034chicken.irregex#irregex-fold\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015irreg"
"ex-match\376\001\000\000\035chicken.irregex#irregex-match\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016irregex-match\077\376\001\000\000\036chic"
"ken.irregex#irregex-match\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016irregex-search\376\001\000\000\036chicken.irregex#irre"
"gex-search\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015irregex-split\376\001\000\000\035chicken.irregex#irregex-split\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\017irregex-replace\376\001\000\000\037chicken.irregex#irregex-replace\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023irregex"
"-replace/all\376\001\000\000#chicken.irregex#irregex-replace/all\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024irregex-fold/"
"chunked\376\001\000\000$chicken.irregex#irregex-fold/chunked\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025irregex-match/chu"
"nked\376\001\000\000%chicken.irregex#irregex-match/chunked\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026irregex-search/chun"
"ked\376\001\000\000&chicken.irregex#irregex-search/chunked\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023irregex-match-data\077"
"\376\001\000\000#chicken.irregex#irregex-match-data\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023irregex-match-names\376\001\000\000#c"
"hicken.irregex#irregex-match-names\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031irregex-match-start-index\376\001\000\000)c"
"hicken.irregex#irregex-match-start-index\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027irregex-match-end-index\376\001"
"\000\000\047chicken.irregex#irregex-match-end-index\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034irregex-match-num-subma"
"tches\376\001\000\000,chicken.irregex#irregex-match-num-submatches\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027irregex-mat"
"ch-substring\376\001\000\000\047chicken.irregex#irregex-match-substring\376\003\000\000\002\376\003\000\000\002\376\001\000\000\032irregex-m"
"atch-valid-index\077\376\001\000\000\052chicken.irregex#irregex-match-valid-index\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031i"
"rregex-match-start-chunk\376\001\000\000)chicken.irregex#irregex-match-start-chunk\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\027irregex-match-end-chunk\376\001\000\000\047chicken.irregex#irregex-match-end-chunk\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\026irregex-match-subchunk\376\001\000\000&chicken.irregex#irregex-match-subchunk\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\011glob->sre\376\001\000\000\031chicken.irregex#glob->sre\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013sre->string\376\001\000\000\033chi"
"cken.irregex#sre->string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013irregex-opt\376\001\000\000\033chicken.irregex#irregex-o"
"pt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015irregex-quote\376\001\000\000\035chicken.irregex#irregex-quote\376\377\016"));
lf[33]=C_h_intern(&lf[33],16, C_text("chicken.pathname"));
lf[34]=C_h_intern(&lf[34],8, C_text("pathname"));
lf[35]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022absolute-pathname\077\376\001\000\000#chicken.pathname#absolute-pathname\077\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\023decompose-directory\376\001\000\000$chicken.pathname#decompose-directory\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\022decompose-pathname\376\001\000\000#chicken.pathname#decompose-pathname\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017dire"
"ctory-null\077\376\001\000\000 chicken.pathname#directory-null\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026make-absolute-pat"
"hname\376\001\000\000\047chicken.pathname#make-absolute-pathname\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015make-pathname\376\001\000"
"\000\036chicken.pathname#make-pathname\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022normalize-pathname\376\001\000\000#chicken.pa"
"thname#normalize-pathname\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022pathname-directory\376\001\000\000#chicken.pathname#"
"pathname-directory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022pathname-extension\376\001\000\000#chicken.pathname#pathnam"
"e-extension\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015pathname-file\376\001\000\000\036chicken.pathname#pathname-file\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\032pathname-replace-directory\376\001\000\000+chicken.pathname#pathname-replace-direct"
"ory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\032pathname-replace-extension\376\001\000\000+chicken.pathname#pathname-repla"
"ce-extension\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025pathname-replace-file\376\001\000\000&chicken.pathname#pathname-r"
"eplace-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030pathname-strip-directory\376\001\000\000)chicken.pathname#pathname"
"-strip-directory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030pathname-strip-extension\376\001\000\000)chicken.pathname#pat"
"hname-strip-extension\376\377\016"));
lf[36]=C_h_intern(&lf[36],10, C_text("chicken.io"));
lf[37]=C_h_intern(&lf[37],6, C_text("extras"));
lf[38]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011read-list\376\001\000\000\024chicken.io#read-list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015read-buffered\376\001\000"
"\000\030chicken.io#read-buffered\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011read-byte\376\001\000\000\024chicken.io#read-byte\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\011read-line\376\001\000\000\024chicken.io#read-line\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012read-lines\376\001\000\000\025chicke"
"n.io#read-lines\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013read-string\376\001\000\000\026chicken.io#read-string\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\014read-string!\376\001\000\000\027chicken.io#read-string!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012read-token\376\001\000\000\025chicken"
".io#read-token\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012write-byte\376\001\000\000\025chicken.io#write-byte\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012"
"write-line\376\001\000\000\025chicken.io#write-line\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014write-string\376\001\000\000\027chicken.io#w"
"rite-string\376\377\016"));
lf[39]=C_h_intern(&lf[39],12, C_text("chicken.port"));
lf[40]=C_h_intern(&lf[40],4, C_text("port"));
lf[41]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026call-with-input-string\376\001\000\000#chicken.port#call-with-input-string\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\027call-with-output-string\376\001\000\000$chicken.port#call-with-output-string\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\011copy-port\376\001\000\000\026chicken.port#copy-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017make-input-port\376\001\000"
"\000\034chicken.port#make-input-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020make-output-port\376\001\000\000\035chicken.port#m"
"ake-output-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011port-fold\376\001\000\000\026chicken.port#port-fold\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\015port-for-each\376\001\000\000\032chicken.port#port-for-each\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010port-map\376\001\000\000\025chicken"
".port#port-map\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011port-name\376\001\000\000\026chicken.port#port-name\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015"
"port-position\376\001\000\000\032chicken.port#port-position\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027make-bidirectional-po"
"rt\376\001\000\000$chicken.port#make-bidirectional-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023make-broadcast-port\376\001\000"
"\000 chicken.port#make-broadcast-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026make-concatenated-port\376\001\000\000#chic"
"ken.port#make-concatenated-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023set-buffering-mode!\376\001\000\000 chicken.po"
"rt#set-buffering-mode!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016set-port-name!\376\001\000\000\033chicken.port#set-port-na"
"me!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015terminal-name\376\001\000\000\032chicken.port#terminal-name\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016ter"
"minal-port\077\376\001\000\000\033chicken.port#terminal-port\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015terminal-size\376\001\000\000\032chic"
"ken.port#terminal-size\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031with-error-output-to-port\376\001\000\000&chicken.port#"
"with-error-output-to-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024with-input-from-port\376\001\000\000!chicken.port#wi"
"th-input-from-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026with-input-from-string\376\001\000\000#chicken.port#with-in"
"put-from-string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023with-output-to-port\376\001\000\000 chicken.port#with-output-t"
"o-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025with-output-to-string\376\001\000\000\042chicken.port#with-output-to-strin"
"g\376\003\000\000\002\376\003\000\000\002\376\001\000\000\033with-error-output-to-string\376\001\000\000(chicken.port#with-error-output-t"
"o-string\376\377\016"));
lf[42]=C_h_intern(&lf[42],34, C_text("\003syschicken.time-macro-environment"));
lf[43]=C_h_intern(&lf[43],12, C_text("chicken.time"));
lf[44]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010cpu-time\376\001\000\000\025chicken.time#cpu-time\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024current-millisec"
"onds\376\001\000\000!chicken.time#current-milliseconds\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017current-seconds\376\001\000\000\034chi"
"cken.time#current-seconds\376\377\016"));
lf[45]=C_h_intern(&lf[45],34, C_text("\003syschicken.base-macro-environment"));
lf[46]=C_h_intern(&lf[46],32, C_text("\003syssymbol-has-toplevel-binding\077"));
lf[47]=C_h_intern(&lf[47],14, C_text("chicken.memory"));
lf[48]=C_h_intern(&lf[48],7, C_text("lolevel"));
lf[49]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020address->pointer\376\001\000\000\037chicken.memory#address->pointer\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\015align-to-word\376\001\000\000\034chicken.memory#align-to-word\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010allocate\376\001\000\000\027chic"
"ken.memory#allocate\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004free\376\001\000\000\023chicken.memory#free\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023mak"
"e-pointer-vector\376\001\000\000\042chicken.memory#make-pointer-vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014move-memor"
"y!\376\001\000\000\033chicken.memory#move-memory!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017object->pointer\376\001\000\000\036chicken.mem"
"ory#object->pointer\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010pointer+\376\001\000\000\027chicken.memory#pointer+\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\020pointer->address\376\001\000\000\037chicken.memory#pointer->address\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017pointer-"
">object\376\001\000\000\036chicken.memory#pointer->object\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017pointer-f32-ref\376\001\000\000\036chi"
"cken.memory#pointer-f32-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020pointer-f32-set!\376\001\000\000\037chicken.memory#po"
"inter-f32-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017pointer-f64-ref\376\001\000\000\036chicken.memory#pointer-f64-ref\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\020pointer-f64-set!\376\001\000\000\037chicken.memory#pointer-f64-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\015pointer-like\077\376\001\000\000\034chicken.memory#pointer-like\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017pointer-s16-ref\376\001\000"
"\000\036chicken.memory#pointer-s16-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020pointer-s16-set!\376\001\000\000\037chicken.memo"
"ry#pointer-s16-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017pointer-s32-ref\376\001\000\000\036chicken.memory#pointer-s32"
"-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020pointer-s32-set!\376\001\000\000\037chicken.memory#pointer-s32-set!\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\017pointer-s64-ref\376\001\000\000\036chicken.memory#pointer-s64-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020pointer-s"
"64-set!\376\001\000\000\037chicken.memory#pointer-s64-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016pointer-s8-ref\376\001\000\000\035chi"
"cken.memory#pointer-s8-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017pointer-s8-set!\376\001\000\000\036chicken.memory#poin"
"ter-s8-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013pointer-tag\376\001\000\000\032chicken.memory#pointer-tag\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\017pointer-u16-ref\376\001\000\000\036chicken.memory#pointer-u16-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020pointer-u16-"
"set!\376\001\000\000\037chicken.memory#pointer-u16-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017pointer-u32-ref\376\001\000\000\036chick"
"en.memory#pointer-u32-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020pointer-u32-set!\376\001\000\000\037chicken.memory#poin"
"ter-u32-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017pointer-u64-ref\376\001\000\000\036chicken.memory#pointer-u64-ref\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\020pointer-u64-set!\376\001\000\000\037chicken.memory#pointer-u64-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016p"
"ointer-u8-ref\376\001\000\000\035chicken.memory#pointer-u8-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017pointer-u8-set!\376\001\000"
"\000\036chicken.memory#pointer-u8-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016pointer-vector\376\001\000\000\035chicken.memory"
"#pointer-vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024pointer-vector-fill!\376\001\000\000#chicken.memory#pointer-ve"
"ctor-fill!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025pointer-vector-length\376\001\000\000$chicken.memory#pointer-vector"
"-length\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022pointer-vector-ref\376\001\000\000!chicken.memory#pointer-vector-ref\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\023pointer-vector-set!\376\001\000\000\042chicken.memory#pointer-vector-set!\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\017pointer-vector\077\376\001\000\000\036chicken.memory#pointer-vector\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011pointer=\077"
"\376\001\000\000\030chicken.memory#pointer=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010pointer\077\376\001\000\000\027chicken.memory#pointer\077"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013tag-pointer\376\001\000\000\032chicken.memory#tag-pointer\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017tagged-p"
"ointer\077\376\001\000\000\036chicken.memory#tagged-pointer\077\376\377\016"));
lf[50]=C_h_intern(&lf[50],18, C_text("chicken.file.posix"));
lf[51]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013create-fifo\376\001\000\000\036chicken.file.posix#create-fifo\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024crea"
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
lf[52]=C_h_intern(&lf[52],14, C_text("chicken.flonum"));
lf[53]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026flonum-print-precision\376\001\000\000%chicken.flonum#flonum-print-precision\376"
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
lf[54]=C_h_intern(&lf[54],14, C_text("chicken.format"));
lf[55]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006format\376\001\000\000\025chicken.format#format\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007fprintf\376\001\000\000\026chicke"
"n.format#fprintf\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006printf\376\001\000\000\025chicken.format#printf\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007sp"
"rintf\376\001\000\000\026chicken.format#sprintf\376\377\016"));
lf[56]=C_h_intern(&lf[56],10, C_text("chicken.gc"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027current-gc-milliseconds\376\001\000\000\042chicken.gc#current-gc-milliseconds\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\002gc\376\001\000\000\015chicken.gc#gc\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021memory-statistics\376\001\000\000\034chicken.gc#"
"memory-statistics\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016set-finalizer!\376\001\000\000\031chicken.gc#set-finalizer!\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\016set-gc-report!\376\001\000\000\031chicken.gc#set-gc-report!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020force-fina"
"lizers\376\001\000\000\033chicken.gc#force-finalizers\376\377\016"));
lf[58]=C_h_intern(&lf[58],12, C_text("chicken.eval"));
lf[59]=C_h_intern(&lf[59],4, C_text("eval"));
lf[60]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014eval-handler\376\001\000\000\031chicken.eval#eval-handler\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022module-e"
"nvironment\376\001\000\000\037chicken.eval#module-environment\376\377\016"));
lf[61]=C_h_intern(&lf[61],12, C_text("chicken.load"));
lf[62]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026dynamic-load-libraries\376\001\000\000#chicken.load#dynamic-load-libraries\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\026set-dynamic-load-mode!\376\001\000\000#chicken.load#set-dynamic-load-mode!\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\014load-library\376\001\000\000\031chicken.load#load-library\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014load-noisily\376\001"
"\000\000\031chicken.load#load-noisily\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015load-relative\376\001\000\000\032chicken.load#load-r"
"elative\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014load-verbose\376\001\000\000\031chicken.load#load-verbose\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007p"
"rovide\376\001\000\000\024chicken.load#provide\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011provided\077\376\001\000\000\026chicken.load#provide"
"d\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007require\376\001\000\000\024chicken.load#require\376\377\016"));
lf[63]=C_h_intern(&lf[63],16, C_text("chicken.locative"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011locative\077\376\001\000\000\032chicken.locative#locative\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015make-locat"
"ive\376\001\000\000\036chicken.locative#make-locative\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022make-weak-locative\376\001\000\000#chic"
"ken.locative#make-weak-locative\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014locative-ref\376\001\000\000\035chicken.locative#"
"locative-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015locative-set!\376\001\000\000\036chicken.locative#locative-set!\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\020locative->object\376\001\000\000!chicken.locative#locative->object\376\377\016"));
lf[65]=C_h_intern(&lf[65],29, C_text("chicken.memory.representation"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011block-ref\376\001\000\000\047chicken.memory.representation#block-ref\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\012block-set!\376\001\000\000(chicken.memory.representation#block-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020extend-"
"procedure\376\001\000\000.chicken.memory.representation#extend-procedure\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023exten"
"ded-procedure\077\376\001\000\0001chicken.memory.representation#extended-procedure\077\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\024make-record-instance\376\001\000\0002chicken.memory.representation#make-record-instance\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\021mutate-procedure!\376\001\000\000/chicken.memory.representation#mutate-procedur"
"e!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017number-of-bytes\376\001\000\000-chicken.memory.representation#number-of-byt"
"es\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017number-of-slots\376\001\000\000-chicken.memory.representation#number-of-slo"
"ts\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016object-become!\376\001\000\000,chicken.memory.representation#object-become!"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013object-copy\376\001\000\000)chicken.memory.representation#object-copy\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\016procedure-data\376\001\000\000,chicken.memory.representation#procedure-data\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\016record->vector\376\001\000\000,chicken.memory.representation#record->vector\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\026record-instance-length\376\001\000\0004chicken.memory.representation#record-instance-leng"
"th\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024record-instance-slot\376\001\000\0002chicken.memory.representation#record-i"
"nstance-slot\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031record-instance-slot-set!\376\001\000\0007chicken.memory.represen"
"tation#record-instance-slot-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024record-instance-type\376\001\000\0002chicken."
"memory.representation#record-instance-type\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020record-instance\077\376\001\000\000.ch"
"icken.memory.representation#record-instance\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023set-procedure-data!\376\001"
"\000\0001chicken.memory.representation#set-procedure-data!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014vector-like\077\376"
"\001\000\000\052chicken.memory.representation#vector-like\077\376\377\016"));
lf[67]=C_h_intern(&lf[67],13, C_text("chicken.plist"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003get\376\001\000\000\021chicken.plist#get\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016get-properties\376\001\000\000\034chicke"
"n.plist#get-properties\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004put!\376\001\000\000\022chicken.plist#put!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010r"
"emprop!\376\001\000\000\026chicken.plist#remprop!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014symbol-plist\376\001\000\000\032chicken.plist#"
"symbol-plist\376\377\016"));
lf[69]=C_h_intern(&lf[69],20, C_text("chicken.pretty-print"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002pp\376\001\000\000\027chicken.pretty-print#pp\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014pretty-print\376\001\000\000!chi"
"cken.pretty-print#pretty-print\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022pretty-print-width\376\001\000\000\047chicken.pret"
"ty-print#pretty-print-width\376\377\016"));
lf[71]=C_h_intern(&lf[71],15, C_text("chicken.process"));
lf[72]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002qs\376\001\000\000\022chicken.process#qs\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006system\376\001\000\000\026chicken.proces"
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
lf[73]=C_h_intern(&lf[73],22, C_text("chicken.process.signal"));
lf[74]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012set-alarm!\376\001\000\000!chicken.process.signal#set-alarm!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023se"
"t-signal-handler!\376\001\000\000\052chicken.process.signal#set-signal-handler!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020s"
"et-signal-mask!\376\001\000\000\047chicken.process.signal#set-signal-mask!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016signal"
"-handler\376\001\000\000%chicken.process.signal#signal-handler\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013signal-mask\376\001\000\000"
"\042chicken.process.signal#signal-mask\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014signal-mask!\376\001\000\000#chicken.proce"
"ss.signal#signal-mask!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016signal-masked\077\376\001\000\000%chicken.process.signal#s"
"ignal-masked\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016signal-unmask!\376\001\000\000%chicken.process.signal#signal-unm"
"ask!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013signal/abrt\376\001\000\000\042chicken.process.signal#signal/abrt\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\013signal/alrm\376\001\000\000\042chicken.process.signal#signal/alrm\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014signal/brea"
"k\376\001\000\000#chicken.process.signal#signal/break\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012signal/bus\376\001\000\000!chicken.p"
"rocess.signal#signal/bus\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013signal/chld\376\001\000\000\042chicken.process.signal#si"
"gnal/chld\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013signal/cont\376\001\000\000\042chicken.process.signal#signal/cont\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\012signal/fpe\376\001\000\000!chicken.process.signal#signal/fpe\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012signal/h"
"up\376\001\000\000!chicken.process.signal#signal/hup\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012signal/ill\376\001\000\000!chicken.pr"
"ocess.signal#signal/ill\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012signal/int\376\001\000\000!chicken.process.signal#sign"
"al/int\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011signal/io\376\001\000\000 chicken.process.signal#signal/io\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\013signal/kill\376\001\000\000\042chicken.process.signal#signal/kill\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013signal/pipe\376\001"
"\000\000\042chicken.process.signal#signal/pipe\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013signal/prof\376\001\000\000\042chicken.proc"
"ess.signal#signal/prof\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013signal/quit\376\001\000\000\042chicken.process.signal#sign"
"al/quit\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013signal/segv\376\001\000\000\042chicken.process.signal#signal/segv\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\013signal/stop\376\001\000\000\042chicken.process.signal#signal/stop\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013signal/t"
"erm\376\001\000\000\042chicken.process.signal#signal/term\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013signal/trap\376\001\000\000\042chicken"
".process.signal#signal/trap\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013signal/tstp\376\001\000\000\042chicken.process.signal"
"#signal/tstp\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012signal/urg\376\001\000\000!chicken.process.signal#signal/urg\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\013signal/usr1\376\001\000\000\042chicken.process.signal#signal/usr1\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013signa"
"l/usr2\376\001\000\000\042chicken.process.signal#signal/usr2\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015signal/vtalrm\376\001\000\000$ch"
"icken.process.signal#signal/vtalrm\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014signal/winch\376\001\000\000#chicken.proces"
"s.signal#signal/winch\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013signal/xcpu\376\001\000\000\042chicken.process.signal#signa"
"l/xcpu\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013signal/xfsz\376\001\000\000\042chicken.process.signal#signal/xfsz\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\014signals-list\376\001\000\000#chicken.process.signal#signals-list\376\377\016"));
lf[75]=C_h_intern(&lf[75],23, C_text("chicken.process-context"));
lf[76]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004argv\376\001\000\000\034chicken.process-context#argv\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011argc+argv\376\001\000\000"
"!chicken.process-context#argc+argv\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026command-line-arguments\376\001\000\000.chic"
"ken.process-context#command-line-arguments\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014program-name\376\001\000\000$chicke"
"n.process-context#program-name\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023executable-pathname\376\001\000\000+chicken.pro"
"cess-context#executable-pathname\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020change-directory\376\001\000\000(chicken.proc"
"ess-context#change-directory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021current-directory\376\001\000\000)chicken.process"
"-context#current-directory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030get-environment-variable\376\001\000\0000chicken.pr"
"ocess-context#get-environment-variable\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031get-environment-variables\376\001"
"\000\0001chicken.process-context#get-environment-variables\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031set-environme"
"nt-variable!\376\001\000\0001chicken.process-context#set-environment-variable!\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\033unset-environment-variable!\376\001\000\0003chicken.process-context#unset-environment-varia"
"ble!\376\377\016"));
lf[77]=C_h_intern(&lf[77],29, C_text("chicken.process-context.posix"));
lf[78]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021change-directory\052\376\001\000\000/chicken.process-context.posix#change-direct"
"ory\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023set-root-directory!\376\001\000\0001chicken.process-context.posix#set-roo"
"t-directory!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\032current-effective-group-id\376\001\000\0008chicken.process-contex"
"t.posix#current-effective-group-id\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031current-effective-user-id\376\001\000\0007c"
"hicken.process-context.posix#current-effective-user-id\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022current-pro"
"cess-id\376\001\000\0000chicken.process-context.posix#current-process-id\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020curre"
"nt-group-id\376\001\000\000.chicken.process-context.posix#current-group-id\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017cur"
"rent-user-id\376\001\000\000-chicken.process-context.posix#current-user-id\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021par"
"ent-process-id\376\001\000\000/chicken.process-context.posix#parent-process-id\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\021current-user-name\376\001\000\000/chicken.process-context.posix#current-user-name\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\033current-effective-user-name\376\001\000\0009chicken.process-context.posix#current-effec"
"tive-user-name\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016create-session\376\001\000\000,chicken.process-context.posix#cr"
"eate-session\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020process-group-id\376\001\000\000.chicken.process-context.posix#pr"
"ocess-group-id\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020user-information\376\001\000\000.chicken.process-context.posix#"
"user-information\376\377\016"));
lf[79]=C_h_intern(&lf[79],14, C_text("chicken.random"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027set-pseudo-random-seed!\376\001\000\000&chicken.random#set-pseudo-random-seed"
"!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025pseudo-random-integer\376\001\000\000$chicken.random#pseudo-random-integer\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\022pseudo-random-real\376\001\000\000!chicken.random#pseudo-random-real\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\014random-bytes\376\001\000\000\033chicken.random#random-bytes\376\377\016"));
lf[81]=C_h_intern(&lf[81],12, C_text("chicken.sort"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005merge\376\001\000\000\022chicken.sort#merge\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006merge!\376\001\000\000\023chicken.sor"
"t#merge!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004sort\376\001\000\000\021chicken.sort#sort\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005sort!\376\001\000\000\022chicke"
"n.sort#sort!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007sorted\077\376\001\000\000\024chicken.sort#sorted\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020topolo"
"gical-sort\376\001\000\000\035chicken.sort#topological-sort\376\377\016"));
lf[83]=C_h_intern(&lf[83],18, C_text("chicken.time.posix"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021seconds->utc-time\376\001\000\000$chicken.time.posix#seconds->utc-time\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\021utc-time->seconds\376\001\000\000$chicken.time.posix#utc-time->seconds\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\023seconds->local-time\376\001\000\000&chicken.time.posix#seconds->local-time\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017se"
"conds->string\376\001\000\000\042chicken.time.posix#seconds->string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023local-time->s"
"econds\376\001\000\000&chicken.time.posix#local-time->seconds\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014string->time\376\001\000\000"
"\037chicken.time.posix#string->time\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014time->string\376\001\000\000\037chicken.time.pos"
"ix#time->string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\033local-timezone-abbreviation\376\001\000\000.chicken.time.posix"
"#local-timezone-abbreviation\376\377\016"));
lf[85]=C_h_intern(&lf[85],20, C_text("chicken.continuation"));
lf[86]=C_h_intern(&lf[86],12, C_text("continuation"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015continuation\077\376\001\000\000\042chicken.continuation#continuation\077\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\024continuation-capture\376\001\000\000)chicken.continuation#continuation-capture\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\022continuation-graft\376\001\000\000\047chicken.continuation#continuation-graft\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023"
"continuation-return\376\001\000\000(chicken.continuation#continuation-return\376\377\016"));
lf[88]=C_h_intern(&lf[88],12, C_text("chicken.file"));
lf[89]=C_h_intern(&lf[89],4, C_text("file"));
lf[90]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020create-directory\376\001\000\000\035chicken.file#create-directory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020"
"delete-directory\376\001\000\000\035chicken.file#delete-directory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025create-temporar"
"y-file\376\001\000\000\042chicken.file#create-temporary-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\032create-temporary-dir"
"ectory\376\001\000\000\047chicken.file#create-temporary-directory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013delete-file\376\001\000\000"
"\030chicken.file#delete-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014delete-file\052\376\001\000\000\031chicken.file#delete-fil"
"e\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011copy-file\376\001\000\000\026chicken.file#copy-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011move-file\376\001\000"
"\000\026chicken.file#move-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013rename-file\376\001\000\000\030chicken.file#rename-file\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\014file-exists\077\376\001\000\000\031chicken.file#file-exists\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021directory"
"-exists\077\376\001\000\000\036chicken.file#directory-exists\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016file-readable\077\376\001\000\000\033chi"
"cken.file#file-readable\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016file-writable\077\376\001\000\000\033chicken.file#file-writ"
"able\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020file-executable\077\376\001\000\000\035chicken.file#file-executable\077\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\011directory\376\001\000\000\026chicken.file#directory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012find-files\376\001\000\000\027chicken.f"
"ile#find-files\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004glob\376\001\000\000\021chicken.file#glob\376\377\016"));
lf[91]=C_h_intern(&lf[91],19, C_text("chicken.read-syntax"));
lf[92]=C_h_intern(&lf[92],11, C_text("read-syntax"));
lf[93]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017copy-read-table\376\001\000\000#chicken.read-syntax#copy-read-table\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\022current-read-table\376\001\000\000&chicken.read-syntax#current-read-table\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\022define-reader-ctor\376\001\000\000&chicken.read-syntax#define-reader-ctor\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020set"
"-read-syntax!\376\001\000\000$chicken.read-syntax#set-read-syntax!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026set-sharp-r"
"ead-syntax!\376\001\000\000\052chicken.read-syntax#set-sharp-read-syntax!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036set-par"
"ameterized-read-syntax!\376\001\000\0002chicken.read-syntax#set-parameterized-read-syntax!\376\377"
"\016"));
lf[94]=C_h_intern(&lf[94],12, C_text("chicken.repl"));
lf[95]=C_h_intern(&lf[95],4, C_text("repl"));
lf[96]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004quit\376\001\000\000\021chicken.repl#quit\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004repl\376\001\000\000\021chicken.repl#re"
"pl\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013repl-prompt\376\001\000\000\030chicken.repl#repl-prompt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005reset\376\001\000"
"\000\022chicken.repl#reset\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015reset-handler\376\001\000\000\032chicken.repl#reset-handler\376"
"\377\016"));
lf[97]=C_h_intern(&lf[97],11, C_text("chicken.tcp"));
lf[98]=C_h_intern(&lf[98],3, C_text("tcp"));
lf[99]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011tcp-close\376\001\000\000\025chicken.tcp#tcp-close\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012tcp-listen\376\001\000\000\026"
"chicken.tcp#tcp-listen\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013tcp-connect\376\001\000\000\027chicken.tcp#tcp-connect\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\012tcp-accept\376\001\000\000\026chicken.tcp#tcp-accept\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021tcp-accept-ready\077"
"\376\001\000\000\035chicken.tcp#tcp-accept-ready\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015tcp-listener\077\376\001\000\000\031chicken.tcp#t"
"cp-listener\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015tcp-addresses\376\001\000\000\031chicken.tcp#tcp-addresses\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\020tcp-abandon-port\376\001\000\000\034chicken.tcp#tcp-abandon-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021tcp-listene"
"r-port\376\001\000\000\035chicken.tcp#tcp-listener-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023tcp-listener-fileno\376\001\000\000\037c"
"hicken.tcp#tcp-listener-fileno\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020tcp-port-numbers\376\001\000\000\034chicken.tcp#tc"
"p-port-numbers\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017tcp-buffer-size\376\001\000\000\033chicken.tcp#tcp-buffer-size\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\020tcp-read-timeout\376\001\000\000\034chicken.tcp#tcp-read-timeout\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021tcp-w"
"rite-timeout\376\001\000\000\035chicken.tcp#tcp-write-timeout\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022tcp-accept-timeout\376"
"\001\000\000\036chicken.tcp#tcp-accept-timeout\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023tcp-connect-timeout\376\001\000\000\037chicken"
".tcp#tcp-connect-timeout\376\377\016"));
lf[100]=C_h_intern(&lf[100],6, C_text("srfi-4"));
lf[101]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017blob->f32vector\376\001\000\000\026srfi-4#blob->f32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026blob->f3"
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
lf[102]=C_h_intern(&lf[102],23, C_text("\003sysimport-library-hook"));
C_register_lf2(lf,103,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_456,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[44] = {
{C_text("f_1005:eval_2dmodules_2escm"),(void*)f_1005},
{C_text("f_1023:eval_2dmodules_2escm"),(void*)f_1023},
{C_text("f_1041:eval_2dmodules_2escm"),(void*)f_1041},
{C_text("f_1059:eval_2dmodules_2escm"),(void*)f_1059},
{C_text("f_1077:eval_2dmodules_2escm"),(void*)f_1077},
{C_text("f_1095:eval_2dmodules_2escm"),(void*)f_1095},
{C_text("f_1113:eval_2dmodules_2escm"),(void*)f_1113},
{C_text("f_1131:eval_2dmodules_2escm"),(void*)f_1131},
{C_text("f_456:eval_2dmodules_2escm"),(void*)f_456},
{C_text("f_458:eval_2dmodules_2escm"),(void*)f_458},
{C_text("f_476:eval_2dmodules_2escm"),(void*)f_476},
{C_text("f_494:eval_2dmodules_2escm"),(void*)f_494},
{C_text("f_500:eval_2dmodules_2escm"),(void*)f_500},
{C_text("f_518:eval_2dmodules_2escm"),(void*)f_518},
{C_text("f_536:eval_2dmodules_2escm"),(void*)f_536},
{C_text("f_554:eval_2dmodules_2escm"),(void*)f_554},
{C_text("f_572:eval_2dmodules_2escm"),(void*)f_572},
{C_text("f_590:eval_2dmodules_2escm"),(void*)f_590},
{C_text("f_596:eval_2dmodules_2escm"),(void*)f_596},
{C_text("f_614:eval_2dmodules_2escm"),(void*)f_614},
{C_text("f_632:eval_2dmodules_2escm"),(void*)f_632},
{C_text("f_650:eval_2dmodules_2escm"),(void*)f_650},
{C_text("f_668:eval_2dmodules_2escm"),(void*)f_668},
{C_text("f_686:eval_2dmodules_2escm"),(void*)f_686},
{C_text("f_697:eval_2dmodules_2escm"),(void*)f_697},
{C_text("f_699:eval_2dmodules_2escm"),(void*)f_699},
{C_text("f_717:eval_2dmodules_2escm"),(void*)f_717},
{C_text("f_735:eval_2dmodules_2escm"),(void*)f_735},
{C_text("f_753:eval_2dmodules_2escm"),(void*)f_753},
{C_text("f_771:eval_2dmodules_2escm"),(void*)f_771},
{C_text("f_789:eval_2dmodules_2escm"),(void*)f_789},
{C_text("f_807:eval_2dmodules_2escm"),(void*)f_807},
{C_text("f_825:eval_2dmodules_2escm"),(void*)f_825},
{C_text("f_843:eval_2dmodules_2escm"),(void*)f_843},
{C_text("f_861:eval_2dmodules_2escm"),(void*)f_861},
{C_text("f_879:eval_2dmodules_2escm"),(void*)f_879},
{C_text("f_897:eval_2dmodules_2escm"),(void*)f_897},
{C_text("f_915:eval_2dmodules_2escm"),(void*)f_915},
{C_text("f_933:eval_2dmodules_2escm"),(void*)f_933},
{C_text("f_951:eval_2dmodules_2escm"),(void*)f_951},
{C_text("f_969:eval_2dmodules_2escm"),(void*)f_969},
{C_text("f_987:eval_2dmodules_2escm"),(void*)f_987},
{C_text("toplevel:eval_2dmodules_2escm"),(void*)C_eval_2dmodules_toplevel},
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
(o e)|safe calls: 109 
o|inlining procedure: k692 
o|propagated global variable: r6931147 ##sys#chicken.time-macro-environment 
o|inlining procedure: k692 
o|propagated global variable: r6931149 ##sys#chicken.base-macro-environment 
o|inlining procedure: k1133 
o|contracted procedure: "(eval-modules.scm:100) g307308" 
o|inlining procedure: k1133 
o|replaced variables: 81 
o|removed binding forms: 3 
o|propagated global variable: a6911148 ##sys#chicken.time-macro-environment 
o|propagated global variable: a6911150 ##sys#chicken.base-macro-environment 
o|replaced variables: 1 
o|removed binding forms: 80 
o|removed binding forms: 1 
o|simplifications: ((##core#call . 108)) 
o|  call simplifications:
o|    scheme#list	108
o|contracted procedure: k464 
o|contracted procedure: k468 
o|contracted procedure: k472 
o|contracted procedure: k482 
o|contracted procedure: k486 
o|contracted procedure: k490 
o|contracted procedure: k506 
o|contracted procedure: k510 
o|contracted procedure: k514 
o|contracted procedure: k524 
o|contracted procedure: k528 
o|contracted procedure: k532 
o|contracted procedure: k542 
o|contracted procedure: k546 
o|contracted procedure: k550 
o|contracted procedure: k560 
o|contracted procedure: k564 
o|contracted procedure: k568 
o|contracted procedure: k578 
o|contracted procedure: k582 
o|contracted procedure: k586 
o|contracted procedure: k602 
o|contracted procedure: k606 
o|contracted procedure: k610 
o|contracted procedure: k620 
o|contracted procedure: k624 
o|contracted procedure: k628 
o|contracted procedure: k638 
o|contracted procedure: k642 
o|contracted procedure: k646 
o|contracted procedure: k656 
o|contracted procedure: k660 
o|contracted procedure: k664 
o|contracted procedure: k674 
o|contracted procedure: k678 
o|contracted procedure: k682 
o|contracted procedure: k705 
o|contracted procedure: k709 
o|contracted procedure: k713 
o|contracted procedure: k723 
o|contracted procedure: k727 
o|contracted procedure: k731 
o|contracted procedure: k741 
o|contracted procedure: k745 
o|contracted procedure: k749 
o|contracted procedure: k759 
o|contracted procedure: k763 
o|contracted procedure: k767 
o|contracted procedure: k777 
o|contracted procedure: k781 
o|contracted procedure: k785 
o|contracted procedure: k795 
o|contracted procedure: k799 
o|contracted procedure: k803 
o|contracted procedure: k813 
o|contracted procedure: k817 
o|contracted procedure: k821 
o|contracted procedure: k831 
o|contracted procedure: k835 
o|contracted procedure: k839 
o|contracted procedure: k849 
o|contracted procedure: k853 
o|contracted procedure: k857 
o|contracted procedure: k867 
o|contracted procedure: k871 
o|contracted procedure: k875 
o|contracted procedure: k885 
o|contracted procedure: k889 
o|contracted procedure: k893 
o|contracted procedure: k903 
o|contracted procedure: k907 
o|contracted procedure: k911 
o|contracted procedure: k921 
o|contracted procedure: k925 
o|contracted procedure: k929 
o|contracted procedure: k939 
o|contracted procedure: k943 
o|contracted procedure: k947 
o|contracted procedure: k957 
o|contracted procedure: k961 
o|contracted procedure: k965 
o|contracted procedure: k975 
o|contracted procedure: k979 
o|contracted procedure: k983 
o|contracted procedure: k993 
o|contracted procedure: k997 
o|contracted procedure: k1001 
o|contracted procedure: k1011 
o|contracted procedure: k1015 
o|contracted procedure: k1019 
o|contracted procedure: k1029 
o|contracted procedure: k1033 
o|contracted procedure: k1037 
o|contracted procedure: k1047 
o|contracted procedure: k1051 
o|contracted procedure: k1055 
o|contracted procedure: k1065 
o|contracted procedure: k1069 
o|contracted procedure: k1073 
o|contracted procedure: k1083 
o|contracted procedure: k1087 
o|contracted procedure: k1091 
o|contracted procedure: k1101 
o|contracted procedure: k1105 
o|contracted procedure: k1109 
o|contracted procedure: k1119 
o|contracted procedure: k1123 
o|contracted procedure: k1127 
o|removed binding forms: 108 
o|substituted constant variable: r465 
o|substituted constant variable: r469 
o|substituted constant variable: r465 
o|substituted constant variable: r469 
o|substituted constant variable: r473 
o|substituted constant variable: r483 
o|substituted constant variable: r487 
o|substituted constant variable: r483 
o|substituted constant variable: r487 
o|substituted constant variable: r491 
o|substituted constant variable: r507 
o|substituted constant variable: r511 
o|substituted constant variable: r507 
o|substituted constant variable: r511 
o|substituted constant variable: r515 
o|substituted constant variable: r525 
o|substituted constant variable: r529 
o|substituted constant variable: r525 
o|substituted constant variable: r529 
o|substituted constant variable: r533 
o|substituted constant variable: r543 
o|substituted constant variable: r547 
o|substituted constant variable: r543 
o|substituted constant variable: r547 
o|substituted constant variable: r551 
o|substituted constant variable: r561 
o|substituted constant variable: r565 
o|substituted constant variable: r561 
o|substituted constant variable: r565 
o|substituted constant variable: r569 
o|substituted constant variable: r579 
o|substituted constant variable: r583 
o|substituted constant variable: r579 
o|substituted constant variable: r583 
o|substituted constant variable: r587 
o|substituted constant variable: r603 
o|substituted constant variable: r607 
o|substituted constant variable: r603 
o|substituted constant variable: r607 
o|substituted constant variable: r611 
o|substituted constant variable: r621 
o|substituted constant variable: r625 
o|substituted constant variable: r621 
o|substituted constant variable: r625 
o|substituted constant variable: r629 
o|substituted constant variable: r639 
o|substituted constant variable: r643 
o|substituted constant variable: r639 
o|substituted constant variable: r643 
o|substituted constant variable: r647 
o|substituted constant variable: r657 
o|substituted constant variable: r661 
o|substituted constant variable: r657 
o|substituted constant variable: r661 
o|substituted constant variable: r665 
o|substituted constant variable: r675 
o|substituted constant variable: r679 
o|substituted constant variable: r675 
o|substituted constant variable: r679 
o|substituted constant variable: r683 
o|substituted constant variable: r706 
o|substituted constant variable: r710 
o|substituted constant variable: r706 
o|substituted constant variable: r710 
o|substituted constant variable: r714 
o|substituted constant variable: r724 
o|substituted constant variable: r728 
o|substituted constant variable: r724 
o|substituted constant variable: r728 
o|substituted constant variable: r732 
o|substituted constant variable: r742 
o|substituted constant variable: r746 
o|substituted constant variable: r742 
o|substituted constant variable: r746 
o|substituted constant variable: r750 
o|substituted constant variable: r760 
o|substituted constant variable: r764 
o|substituted constant variable: r760 
o|substituted constant variable: r764 
o|substituted constant variable: r768 
o|substituted constant variable: r778 
o|substituted constant variable: r782 
o|substituted constant variable: r778 
o|substituted constant variable: r782 
o|substituted constant variable: r786 
o|substituted constant variable: r796 
o|substituted constant variable: r800 
o|substituted constant variable: r796 
o|substituted constant variable: r800 
o|substituted constant variable: r804 
o|substituted constant variable: r814 
o|substituted constant variable: r818 
o|substituted constant variable: r814 
o|substituted constant variable: r818 
o|substituted constant variable: r822 
o|substituted constant variable: r832 
o|substituted constant variable: r836 
o|substituted constant variable: r832 
o|substituted constant variable: r836 
o|substituted constant variable: r840 
o|substituted constant variable: r850 
o|substituted constant variable: r854 
o|substituted constant variable: r850 
o|substituted constant variable: r854 
o|substituted constant variable: r858 
o|substituted constant variable: r868 
o|substituted constant variable: r872 
o|substituted constant variable: r868 
o|substituted constant variable: r872 
o|substituted constant variable: r876 
o|substituted constant variable: r886 
o|substituted constant variable: r890 
o|substituted constant variable: r886 
o|substituted constant variable: r890 
o|substituted constant variable: r894 
o|substituted constant variable: r904 
o|substituted constant variable: r908 
o|substituted constant variable: r904 
o|substituted constant variable: r908 
o|substituted constant variable: r912 
o|substituted constant variable: r922 
o|substituted constant variable: r926 
o|substituted constant variable: r922 
o|substituted constant variable: r926 
o|substituted constant variable: r930 
o|substituted constant variable: r940 
o|substituted constant variable: r944 
o|substituted constant variable: r940 
o|substituted constant variable: r944 
o|substituted constant variable: r948 
o|substituted constant variable: r958 
o|substituted constant variable: r962 
o|substituted constant variable: r958 
o|substituted constant variable: r962 
o|substituted constant variable: r966 
o|substituted constant variable: r976 
o|substituted constant variable: r980 
o|substituted constant variable: r976 
o|substituted constant variable: r980 
o|substituted constant variable: r984 
o|substituted constant variable: r994 
o|substituted constant variable: r998 
o|substituted constant variable: r994 
o|substituted constant variable: r998 
o|substituted constant variable: r1002 
o|substituted constant variable: r1012 
o|substituted constant variable: r1016 
o|substituted constant variable: r1012 
o|substituted constant variable: r1016 
o|substituted constant variable: r1020 
o|substituted constant variable: r1030 
o|substituted constant variable: r1034 
o|substituted constant variable: r1030 
o|substituted constant variable: r1034 
o|substituted constant variable: r1038 
o|substituted constant variable: r1048 
o|substituted constant variable: r1052 
o|substituted constant variable: r1048 
o|substituted constant variable: r1052 
o|substituted constant variable: r1056 
o|substituted constant variable: r1066 
o|substituted constant variable: r1070 
o|substituted constant variable: r1066 
o|substituted constant variable: r1070 
o|substituted constant variable: r1074 
o|substituted constant variable: r1084 
o|substituted constant variable: r1088 
o|substituted constant variable: r1084 
o|substituted constant variable: r1088 
o|substituted constant variable: r1092 
o|substituted constant variable: r1102 
o|substituted constant variable: r1106 
o|substituted constant variable: r1102 
o|substituted constant variable: r1106 
o|substituted constant variable: r1110 
o|substituted constant variable: r1120 
o|substituted constant variable: r1124 
o|substituted constant variable: r1120 
o|substituted constant variable: r1124 
o|substituted constant variable: r1128 
o|removed binding forms: 180 
*/
/* end of file */

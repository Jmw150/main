/* Generated from chicken-uninstall.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: chicken-uninstall.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -output-file chicken-uninstall.c
   used units: library eval chicken_2dsyntax srfi_2d1 posix data_2dstructures utils ports irregex srfi_2d13 files
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[88];
static double C_possibly_force_alignment;


C_noret_decl(f_743)
static void C_ccall f_743(C_word c,C_word *av) C_noret;
C_noret_decl(f_749)
static void C_ccall f_749(C_word c,C_word *av) C_noret;
C_noret_decl(f_746)
static void C_ccall f_746(C_word c,C_word *av) C_noret;
C_noret_decl(f_740)
static void C_ccall f_740(C_word c,C_word *av) C_noret;
C_noret_decl(f_913)
static void C_ccall f_913(C_word c,C_word *av) C_noret;
C_noret_decl(f_774)
static void C_fcall f_774(C_word t0) C_noret;
C_noret_decl(f_734)
static void C_ccall f_734(C_word c,C_word *av) C_noret;
C_noret_decl(f_737)
static void C_ccall f_737(C_word c,C_word *av) C_noret;
C_noret_decl(f_731)
static void C_ccall f_731(C_word c,C_word *av) C_noret;
C_noret_decl(f_1504)
static void C_fcall f_1504(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_947)
static void C_ccall f_947(C_word c,C_word *av) C_noret;
C_noret_decl(f_1069)
static void C_ccall f_1069(C_word c,C_word *av) C_noret;
C_noret_decl(f_1500)
static void C_ccall f_1500(C_word c,C_word *av) C_noret;
C_noret_decl(f_764)
static void C_ccall f_764(C_word c,C_word *av) C_noret;
C_noret_decl(f_768)
static void C_ccall f_768(C_word c,C_word *av) C_noret;
C_noret_decl(f_761)
static void C_ccall f_761(C_word c,C_word *av) C_noret;
C_noret_decl(f_1077)
static void C_fcall f_1077(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_752)
static void C_ccall f_752(C_word c,C_word *av) C_noret;
C_noret_decl(f_755)
static void C_ccall f_755(C_word c,C_word *av) C_noret;
C_noret_decl(f_758)
static void C_ccall f_758(C_word c,C_word *av) C_noret;
C_noret_decl(f_871)
static void C_ccall f_871(C_word c,C_word *av) C_noret;
C_noret_decl(f_1083)
static void C_ccall f_1083(C_word c,C_word *av) C_noret;
C_noret_decl(f1674)
static void C_ccall f1674(C_word c,C_word *av) C_noret;
C_noret_decl(f_876)
static void C_fcall f_876(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f1679)
static void C_ccall f1679(C_word c,C_word *av) C_noret;
C_noret_decl(f_1432)
static void C_ccall f_1432(C_word c,C_word *av) C_noret;
C_noret_decl(f_958)
static void C_ccall f_958(C_word c,C_word *av) C_noret;
C_noret_decl(f_1441)
static void C_ccall f_1441(C_word c,C_word *av) C_noret;
C_noret_decl(f_1448)
static void C_ccall f_1448(C_word c,C_word *av) C_noret;
C_noret_decl(f_1023)
static void C_ccall f_1023(C_word c,C_word *av) C_noret;
C_noret_decl(f_1027)
static void C_ccall f_1027(C_word c,C_word *av) C_noret;
C_noret_decl(f1691)
static void C_ccall f1691(C_word c,C_word *av) C_noret;
C_noret_decl(f1696)
static void C_ccall f1696(C_word c,C_word *av) C_noret;
C_noret_decl(f_1282)
static void C_ccall f_1282(C_word c,C_word *av) C_noret;
C_noret_decl(f_801)
static void C_ccall f_801(C_word c,C_word *av) C_noret;
C_noret_decl(f_807)
static void C_ccall f_807(C_word c,C_word *av) C_noret;
C_noret_decl(f_1300)
static void C_ccall f_1300(C_word c,C_word *av) C_noret;
C_noret_decl(f_804)
static void C_ccall f_804(C_word c,C_word *av) C_noret;
C_noret_decl(f_1452)
static void C_ccall f_1452(C_word c,C_word *av) C_noret;
C_noret_decl(f_1295)
static void C_ccall f_1295(C_word c,C_word *av) C_noret;
C_noret_decl(f_994)
static void C_ccall f_994(C_word c,C_word *av) C_noret;
C_noret_decl(f_1042)
static void C_ccall f_1042(C_word c,C_word *av) C_noret;
C_noret_decl(f_1044)
static void C_fcall f_1044(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1466)
static void C_fcall f_1466(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1226)
static void C_ccall f_1226(C_word c,C_word *av) C_noret;
C_noret_decl(f_977)
static void C_ccall f_977(C_word c,C_word *av) C_noret;
C_noret_decl(f1684)
static void C_ccall f1684(C_word c,C_word *av) C_noret;
C_noret_decl(f_1475)
static void C_ccall f_1475(C_word c,C_word *av) C_noret;
C_noret_decl(f_1231)
static void C_fcall f_1231(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_817)
static void C_ccall f_817(C_word c,C_word *av) C_noret;
C_noret_decl(f_988)
static void C_ccall f_988(C_word c,C_word *av) C_noret;
C_noret_decl(f_1481)
static void C_ccall f_1481(C_word c,C_word *av) C_noret;
C_noret_decl(f_1488)
static void C_ccall f_1488(C_word c,C_word *av) C_noret;
C_noret_decl(f_1242)
static void C_ccall f_1242(C_word c,C_word *av) C_noret;
C_noret_decl(f_842)
static void C_ccall f_842(C_word c,C_word *av) C_noret;
C_noret_decl(f_1246)
static void C_ccall f_1246(C_word c,C_word *av) C_noret;
C_noret_decl(f_848)
static void C_ccall f_848(C_word c,C_word *av) C_noret;
C_noret_decl(f_982)
static void C_ccall f_982(C_word c,C_word *av) C_noret;
C_noret_decl(f_1255)
static void C_ccall f_1255(C_word c,C_word *av) C_noret;
C_noret_decl(f_1257)
static void C_fcall f_1257(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1425)
static void C_ccall f_1425(C_word c,C_word *av) C_noret;
C_noret_decl(f_829)
static void C_ccall f_829(C_word c,C_word *av) C_noret;
C_noret_decl(f_823)
static void C_ccall f_823(C_word c,C_word *av) C_noret;
C_noret_decl(f_826)
static void C_ccall f_826(C_word c,C_word *av) C_noret;
C_noret_decl(f_1094)
static void C_ccall f_1094(C_word c,C_word *av) C_noret;
C_noret_decl(f_1100)
static void C_ccall f_1100(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_1206)
static void C_fcall f_1206(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1115)
static void C_ccall f_1115(C_word c,C_word *av) C_noret;
C_noret_decl(f_1216)
static void C_ccall f_1216(C_word c,C_word *av) C_noret;
C_noret_decl(f_1219)
static void C_ccall f_1219(C_word c,C_word *av) C_noret;
C_noret_decl(f_1164)
static void C_fcall f_1164(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1600)
static void C_ccall f_1600(C_word c,C_word *av) C_noret;
C_noret_decl(f_1174)
static void C_ccall f_1174(C_word c,C_word *av) C_noret;
C_noret_decl(f_888)
static void C_fcall f_888(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_886)
static void C_ccall f_886(C_word c,C_word *av) C_noret;
C_noret_decl(f_1336)
static void C_ccall f_1336(C_word c,C_word *av) C_noret;
C_noret_decl(f_1147)
static void C_ccall f_1147(C_word c,C_word *av) C_noret;
C_noret_decl(f_1149)
static void C_ccall f_1149(C_word c,C_word *av) C_noret;
C_noret_decl(f_1343)
static void C_ccall f_1343(C_word c,C_word *av) C_noret;
C_noret_decl(f_861)
static void C_ccall f_861(C_word c,C_word *av) C_noret;
C_noret_decl(f_864)
static void C_ccall f_864(C_word c,C_word *av) C_noret;
C_noret_decl(f_1159)
static void C_ccall f_1159(C_word c,C_word *av) C_noret;
C_noret_decl(f_1398)
static void C_ccall f_1398(C_word c,C_word *av) C_noret;
C_noret_decl(f_968)
static void C_ccall f_968(C_word c,C_word *av) C_noret;
C_noret_decl(f_1120)
static void C_ccall f_1120(C_word c,C_word *av) C_noret;
C_noret_decl(f_1129)
static void C_ccall f_1129(C_word c,C_word *av) C_noret;
C_noret_decl(f_962)
static void C_ccall f_962(C_word c,C_word *av) C_noret;
C_noret_decl(f_1009)
static void C_ccall f_1009(C_word c,C_word *av) C_noret;
C_noret_decl(f_1011)
static void C_fcall f_1011(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1325)
static void C_fcall f_1325(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1134)
static void C_ccall f_1134(C_word c,C_word *av) C_noret;
C_noret_decl(f_1139)
static void C_ccall f_1139(C_word c,C_word *av) C_noret;
C_noret_decl(f_1019)
static void C_ccall f_1019(C_word c,C_word *av) C_noret;
C_noret_decl(f_1541)
static void C_ccall f_1541(C_word c,C_word *av) C_noret;
C_noret_decl(f_1549)
static void C_ccall f_1549(C_word c,C_word *av) C_noret;
C_noret_decl(f_1596)
static void C_ccall f_1596(C_word c,C_word *av) C_noret;
C_noret_decl(f_795)
static void C_ccall f_795(C_word c,C_word *av) C_noret;
C_noret_decl(f_1593)
static void C_ccall f_1593(C_word c,C_word *av) C_noret;
C_noret_decl(f_1590)
static void C_ccall f_1590(C_word c,C_word *av) C_noret;
C_noret_decl(f_791)
static void C_ccall f_791(C_word c,C_word *av) C_noret;
C_noret_decl(f_922)
static void C_fcall f_922(C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_774)
static void C_ccall trf_774(C_word c,C_word *av) C_noret;
static void C_ccall trf_774(C_word c,C_word *av){
C_word t0=av[0];
f_774(t0);}

C_noret_decl(trf_1504)
static void C_ccall trf_1504(C_word c,C_word *av) C_noret;
static void C_ccall trf_1504(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1504(t0,t1,t2);}

C_noret_decl(trf_1077)
static void C_ccall trf_1077(C_word c,C_word *av) C_noret;
static void C_ccall trf_1077(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1077(t0,t1,t2);}

C_noret_decl(trf_876)
static void C_ccall trf_876(C_word c,C_word *av) C_noret;
static void C_ccall trf_876(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_876(t0,t1,t2);}

C_noret_decl(trf_1044)
static void C_ccall trf_1044(C_word c,C_word *av) C_noret;
static void C_ccall trf_1044(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1044(t0,t1,t2);}

C_noret_decl(trf_1466)
static void C_ccall trf_1466(C_word c,C_word *av) C_noret;
static void C_ccall trf_1466(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1466(t0,t1);}

C_noret_decl(trf_1231)
static void C_ccall trf_1231(C_word c,C_word *av) C_noret;
static void C_ccall trf_1231(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1231(t0,t1,t2);}

C_noret_decl(trf_1257)
static void C_ccall trf_1257(C_word c,C_word *av) C_noret;
static void C_ccall trf_1257(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1257(t0,t1,t2);}

C_noret_decl(trf_1206)
static void C_ccall trf_1206(C_word c,C_word *av) C_noret;
static void C_ccall trf_1206(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1206(t0,t1,t2,t3);}

C_noret_decl(trf_1164)
static void C_ccall trf_1164(C_word c,C_word *av) C_noret;
static void C_ccall trf_1164(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1164(t0,t1,t2);}

C_noret_decl(trf_888)
static void C_ccall trf_888(C_word c,C_word *av) C_noret;
static void C_ccall trf_888(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_888(t0,t1,t2);}

C_noret_decl(trf_1011)
static void C_ccall trf_1011(C_word c,C_word *av) C_noret;
static void C_ccall trf_1011(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1011(t0,t1);}

C_noret_decl(trf_1325)
static void C_ccall trf_1325(C_word c,C_word *av) C_noret;
static void C_ccall trf_1325(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1325(t0,t1);}

C_noret_decl(trf_922)
static void C_ccall trf_922(C_word c,C_word *av) C_noret;
static void C_ccall trf_922(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_922(t0,t1,t2);}

/* k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_743,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_746,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_749,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_752,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_ports_toplevel(2,av2);}}

/* k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_746,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_749,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_utils_toplevel(2,av2);}}

/* k738 in k735 in k732 in k729 */
static void C_ccall f_740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_740,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_743,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k911 in map-loop225 in k862 in k859 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 in ... */
static void C_ccall f_913(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_913,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_888(t6,((C_word*)t0)[5],t5);}

/* main#repo-path in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_fcall f_774(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_774,1,t1);}
a=C_alloc(6);
if(C_truep(C_retrieve2(lf[4],"main#\052deploy\052"))){
t2=C_retrieve2(lf[3],"main#\052prefix\052");
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_retrieve2(lf[3],"main#\052prefix\052");
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(C_truep(C_retrieve2(lf[0],"main#\052cross-chicken\052"))?C_i_not(C_retrieve2(lf[1],"main#\052host-extensions\052")):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_791,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[12]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[3],"main#\052prefix\052"))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_817,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:55: open-output-string */
t4=C_fast_retrieve(lf[11]);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* chicken-uninstall.scm:56: repository-path */
t3=C_fast_retrieve(lf[14]);{
C_word av2[2];
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}}

/* k732 in k729 */
static void C_ccall f_734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_734,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_737,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k735 in k732 in k729 */
static void C_ccall f_737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_737,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_740,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d1_toplevel(2,av2);}}

/* k729 */
static void C_ccall f_731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_731,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_734,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* map-loop439 in k1479 in k1473 in k1464 in k1323 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_fcall f_1504(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1504,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_string(&a,2,C_make_character(45),t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t10=t1;
t11=t8;
t1=t10;
t2=t11;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k945 in map-loop199 in k859 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_947(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_947,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_922(t6,((C_word*)t0)[5],t5);}

/* k1067 in map-loop272 in tmp1707 in a1008 in a981 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in ... */
static void C_ccall f_1069(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1069,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1044(t6,((C_word*)t0)[5],t5);}

/* k1498 in k1479 in k1473 in k1464 in k1323 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1500,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken-uninstall.scm:182: append */
t4=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_764,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_768,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:41: feature? */
t3=C_fast_retrieve(lf[84]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[85];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_768(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_768,2,av);}
a=C_alloc(10);
t2=lf[0] /* main#*cross-chicken* */ =t1;;
t3=lf[1] /* main#*host-extensions* */ =C_retrieve2(lf[0],"main#\052cross-chicken\052");;
t4=lf[2] /* main#*target-extensions* */ =C_retrieve2(lf[0],"main#\052cross-chicken\052");;
t5=lf[3] /* main#*prefix* */ =C_SCHEME_FALSE;;
t6=lf[4] /* main#*deploy* */ =C_SCHEME_FALSE;;
t7=C_mutate2(&lf[5] /* (set! main#repo-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_774,tmp=(C_word)a,a+=2,tmp));
t8=lf[15] /* main#*force* */ =C_SCHEME_FALSE;;
t9=C_mutate2(&lf[16] /* (set! main#grep ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_842,tmp=(C_word)a,a+=2,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1590,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1600,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:187: command-line-arguments */
t12=C_fast_retrieve(lf[83]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}

/* k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_761,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_764,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:27: ##sys#require */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[86]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[86]+1);
av2[1]=t2;
av2[2]=lf[87];
tp(3,av2);}}

/* tmp2708 in a1008 in a981 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 in ... */
static void C_fcall f_1077(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_1077,3,t0,t1,t2);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1083,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:75: k262 */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_752,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_755,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_755,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_758,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d13_toplevel(2,av2);}}

/* k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_758,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_761,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_files_toplevel(2,av2);}}

/* k869 in k862 in k859 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_871,2,av);}
/* chicken-uninstall.scm:66: delete-duplicates */
t2=C_fast_retrieve(lf[45]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=*((C_word*)lf[46]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a1082 in tmp2708 in a1008 in a981 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in ... */
static void C_ccall f_1083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1083,2,av);}{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
C_apply_values(3,av2);}}

/* f1674 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f1674(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f1674,2,av);}
/* chicken-uninstall.scm:119: exit */
t2=C_fast_retrieve(lf[26]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* g231 in k862 in k859 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_fcall f_876(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_876,3,t0,t1,t2);}
t3=C_retrieve2(lf[16],"main#grep");
/* chicken-uninstall.scm:68: g248 */
t4=C_retrieve2(lf[16],"main#grep");{
C_word av2[4];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
f_842(4,av2);}}

/* f1679 in k1323 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f1679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f1679,2,av);}
/* chicken-uninstall.scm:119: exit */
t2=C_fast_retrieve(lf[26]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k1430 in k1423 in k1323 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1432(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1432,2,av);}
t2=C_mutate2(&lf[3] /* (set! main#*prefix* ...) */,t1);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
/* chicken-uninstall.scm:175: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1206(t6,((C_word*)t0)[4],t5,((C_word*)t0)[5]);}

/* k956 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_958,2,av);}
/* chicken-uninstall.scm:65: glob */
t2=C_fast_retrieve(lf[48]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k1439 in k1423 in k1323 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1441(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1441,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_1432(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1448,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1452,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:174: current-directory */
t4=C_fast_retrieve(lf[75]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1446 in k1439 in k1423 in k1323 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1448,2,av);}
/* chicken-uninstall.scm:173: normalize-pathname */
t2=C_fast_retrieve(lf[74]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k1021 in k1017 in tmp1707 in a1008 in a981 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in ... */
static void C_ccall f_1023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1023,2,av);}
/* chicken-uninstall.scm:80: yes-or-no? */
t2=C_fast_retrieve(lf[29]);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[30];
av2[4]=lf[31];
av2[5]=lf[32];
av2[6]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k1025 in tmp1707 in a1008 in a981 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in ... */
static void C_ccall f_1027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1027,2,av);}
/* chicken-uninstall.scm:81: string-concatenate */
t2=C_fast_retrieve(lf[34]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f1691 in k1479 in k1473 in k1464 in k1323 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f1691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f1691,2,av);}
/* chicken-uninstall.scm:119: exit */
t2=C_fast_retrieve(lf[26]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f1696 in k1464 in k1323 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f1696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f1696,2,av);}
/* chicken-uninstall.scm:119: exit */
t2=C_fast_retrieve(lf[26]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k1280 in map-loop373 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1282(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1282,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1257(t6,((C_word*)t0)[5],t5);}

/* k799 in k793 in k789 in main#repo-path in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_801,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_804,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-uninstall.scm:51: ##sys#print */
t3=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix((C_word)C_BINARY_VERSION);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k805 in k802 in k799 in k793 in k789 in main#repo-path in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_807,2,av);}
/* chicken-uninstall.scm:51: make-pathname */
t2=C_fast_retrieve(lf[7]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a1299 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1300,2,av);}
/* chicken-uninstall.scm:130: g368 */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[57];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k802 in k799 in k793 in k789 in main#repo-path in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_804,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_807,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:51: get-output-string */
t3=C_fast_retrieve(lf[8]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1450 in k1439 in k1423 in k1323 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1452,2,av);}
/* chicken-uninstall.scm:174: make-pathname */
t2=C_fast_retrieve(lf[7]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1293 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1295,2,av);}
/* chicken-uninstall.scm:131: exit */
t2=C_fast_retrieve(lf[26]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a993 in a987 in a981 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 in ... */
static void C_ccall f_994(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_994,2,av);}
a=C_alloc(3);
t2=C_eqp(((C_word*)t0)[2],lf[25]);
if(C_truep(t2)){
t3=t1;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_968,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:72: print */
t5=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[27];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* chicken-uninstall.scm:79: signal */
t3=C_fast_retrieve(lf[28]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k1040 in tmp1707 in a1008 in a981 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in ... */
static void C_ccall f_1042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1042,2,av);}
/* chicken-uninstall.scm:82: append */
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[37];
av2[3]=t1;
av2[4]=lf[38];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop272 in tmp1707 in a1008 in a981 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in ... */
static void C_fcall f_1044(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_1044,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1069,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-uninstall.scm:84: g295 */
t5=*((C_word*)lf[39]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[40];
av2[3]=t4;
av2[4]=lf[41];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1464 in k1323 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_fcall f_1466(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_1466,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1475,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1549,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:179: substring */
t5=*((C_word*)lf[80]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1696,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:105: print */
t5=*((C_word*)lf[20]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[60];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[6];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[5]);
/* chicken-uninstall.scm:185: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1206(t5,((C_word*)t0)[4],t3,t4);}}

/* k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1226(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_1226,2,av);}
a=C_alloc(21);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1100,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=t3;
t5=t1;
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=C_fast_retrieve(lf[44]);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_861,a[2]=t4,a[3]=t5,a[4]=t8,a[5]=t10,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_958,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_962,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:65: repo-path */
f_774(t13);}

/* k975 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_977,2,av);}
/* chicken-uninstall.scm:75: g266 */
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* f1684 in k1323 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f1684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f1684,2,av);}
/* chicken-uninstall.scm:119: exit */
t2=C_fast_retrieve(lf[26]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k1473 in k1464 in k1323 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1475(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1475,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1481,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1541,tmp=(C_word)a,a+=2,tmp);
/* chicken-uninstall.scm:180: every */
t5=C_fast_retrieve(lf[78]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* g379 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_fcall f_1231(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1231,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1242,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1246,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:137: irregex-quote */
t5=C_fast_retrieve(lf[54]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* chicken-uninstall.scm:138: ##sys#glob->regexp */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[55]);
C_word av2[3];
av2[0]=*((C_word*)lf[55]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}}

/* k815 in main#repo-path in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_817(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_817,2,av);}
a=C_alloc(5);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[6]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_823,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-uninstall.scm:55: ##sys#print */
t6=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[13];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* a987 in a981 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_988,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_994,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:75: k262 */
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k1479 in k1473 in k1464 in k1323 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1481(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_1481,2,av);}
a=C_alloc(21);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1488,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1500,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1504,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_1504(t11,t7,((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1691,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:105: print */
t4=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[60];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k1486 in k1479 in k1473 in k1464 in k1323 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1488,2,av);}
/* chicken-uninstall.scm:181: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1206(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1240 in g379 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1242,2,av);}
/* chicken-uninstall.scm:137: irregex */
t2=C_fast_retrieve(lf[51]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* main#grep in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_842,4,av);}
a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_848,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:61: filter */
t5=C_fast_retrieve(lf[18]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t1;
av2[2]=t4;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k1244 in g379 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1246,2,av);}
/* chicken-uninstall.scm:137: string-append */
t2=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[52];
av2[3]=t1;
av2[4]=lf[53];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a847 in main#grep in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_848,3,av);}
t3=C_fast_retrieve(lf[17]);
/* chicken-uninstall.scm:61: g192 */
t4=C_fast_retrieve(lf[17]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a981 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_982(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_982,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_988,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1009,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:75: with-exception-handler */
t5=C_fast_retrieve(lf[42]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k1253 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1255,2,av);}
/* chicken-uninstall.scm:133: reverse */
t2=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* map-loop373 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_fcall f_1257(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1257,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1282,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-uninstall.scm:134: g379 */
t5=((C_word*)t0)[4];
f_1231(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1423 in k1323 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1425(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_1425,2,av);}
a=C_alloc(10);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1432,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1441,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:171: absolute-pathname? */
t6=C_fast_retrieve(lf[76]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k827 in k824 in k821 in k815 in main#repo-path in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_829,2,av);}
/* chicken-uninstall.scm:53: make-pathname */
t2=C_fast_retrieve(lf[7]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[3],"main#\052prefix\052");
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k821 in k815 in main#repo-path in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_823,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_826,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_fudge(C_fix(42));
/* chicken-uninstall.scm:55: ##sys#print */
t4=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k824 in k821 in k815 in main#repo-path in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_826,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_829,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:55: get-output-string */
t3=C_fast_retrieve(lf[8]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1092 in a1008 in a981 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 in ... */
static void C_ccall f_1094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1094,2,av);}
a=C_alloc(3);
/* tmp2708 */
t2=((C_word*)t0)[2];
f_1077(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1100(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1100,2,av);}
a=C_alloc(10);
t2=t1;
if(C_truep(C_i_nullp(t2))){
/* chicken-uninstall.scm:92: print */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[21];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=C_retrieve2(lf[15],"main#\052force\052");
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1115,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[15],"main#\052force\052"))){
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_retrieve2(lf[15],"main#\052force\052");
f_1115(2,av2);}}
else{
t5=t4;
t6=t2;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_977,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_982,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:75: call-with-current-continuation */
t9=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}}

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
if(C_unlikely(!C_demand_2(365))){
C_save(t1);
C_rereclaim2(365*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,88);
lf[6]=C_h_intern(&lf[6],7,"sprintf");
lf[7]=C_h_intern(&lf[7],13,"make-pathname");
lf[8]=C_h_intern(&lf[8],17,"get-output-string");
lf[9]=C_h_intern(&lf[9],9,"\003sysprint");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000\010chicken/");
lf[11]=C_h_intern(&lf[11],18,"open-output-string");
lf[12]=C_h_intern(&lf[12],17,"\003syspeek-c-string");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\014lib/chicken/");
lf[14]=C_h_intern(&lf[14],15,"repository-path");
lf[17]=C_h_intern(&lf[17],14,"irregex-search");
lf[18]=C_h_intern(&lf[18],6,"filter");
lf[19]=C_h_intern(&lf[19],25,"\003sysimplicit-exit-handler");
lf[20]=C_h_intern(&lf[20],5,"print");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\022nothing to remove.");
lf[22]=C_h_intern(&lf[22],26,"setup-api#remove-extension");
lf[23]=C_h_intern(&lf[23],16,"\003sysdynamic-wind");
lf[24]=C_decode_literal(C_heaptop,"\376B\000\000\011removing ");
lf[25]=C_h_intern(&lf[25],7,"aborted");
lf[26]=C_h_intern(&lf[26],4,"exit");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\010aborted.");
lf[28]=C_h_intern(&lf[28],6,"signal");
lf[29]=C_h_intern(&lf[29],10,"yes-or-no\077");
lf[30]=C_h_intern(&lf[30],8,"\000default");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000\002no");
lf[32]=C_h_intern(&lf[32],6,"\000abort");
lf[33]=C_h_intern(&lf[33],21,"setup-api#abort-setup");
lf[34]=C_h_intern(&lf[34],18,"string-concatenate");
lf[35]=C_h_intern(&lf[35],3,"map");
lf[36]=C_h_intern(&lf[36],6,"append");
lf[37]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000+About to delete the following extensions:\012\012\376\377\016");
lf[38]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\030\012Do you want to proceed\077\376\377\016");
lf[39]=C_h_intern(&lf[39],13,"string-append");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[42]=C_h_intern(&lf[42],22,"with-exception-handler");
lf[43]=C_h_intern(&lf[43],30,"call-with-current-continuation");
lf[44]=C_h_intern(&lf[44],13,"pathname-file");
lf[45]=C_h_intern(&lf[45],17,"delete-duplicates");
lf[46]=C_h_intern(&lf[46],8,"string=\077");
lf[47]=C_h_intern(&lf[47],11,"concatenate");
lf[48]=C_h_intern(&lf[48],4,"glob");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\012setup-info");
lf[51]=C_h_intern(&lf[51],7,"irregex");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\001^");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\001$");
lf[54]=C_h_intern(&lf[54],13,"irregex-quote");
lf[55]=C_h_intern(&lf[55],16,"\003sysglob->regexp");
lf[56]=C_h_intern(&lf[56],7,"reverse");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000B`-deploy\047 only makes sense in combination with `-prefix DIRECTORY`");
lf[58]=C_h_intern(&lf[58],19,"with-output-to-port");
lf[59]=C_h_intern(&lf[59],18,"\003sysstandard-error");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\002\301usage: chicken-uninstall [OPTION | PATTERN] ...\012\012  -h   -help              "
"      show this message and exit\012       -version                 show version an"
"d exit\012       -force                   don\047t ask, delete whatever matches\012      "
" -exact                   treat PATTERN as exact match (not a pattern)\012  -s   -s"
"udo                    use external command to elevate privileges for deleting f"
"iles\012  -p   -prefix PREFIX           change installation prefix to PREFIX\012      "
" -deploy                  prefix is a deployment directory\012       -host         "
"           when cross-compiling, uninstall host extensions only\012       -target  "
"                when cross-compiling, uninstall target extensions only");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\005-help");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\010-version");
lf[63]=C_h_intern(&lf[63],15,"chicken-version");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\007-target");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\005-host");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\006-force");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\006-exact");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\002-s");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\005-sudo");
lf[70]=C_h_intern(&lf[70],22,"setup-api#sudo-install");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\007-deploy");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\002-p");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\007-prefix");
lf[74]=C_h_intern(&lf[74],18,"normalize-pathname");
lf[75]=C_h_intern(&lf[75],17,"current-directory");
lf[76]=C_h_intern(&lf[76],18,"absolute-pathname\077");
lf[77]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000s\376\003\000\000\002\376\377\012\000\000p\376\377\016");
lf[78]=C_h_intern(&lf[78],5,"every");
lf[79]=C_h_intern(&lf[79],16,"\003sysstring->list");
lf[80]=C_h_intern(&lf[80],9,"substring");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\002-h");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\006--help");
lf[83]=C_h_intern(&lf[83],22,"command-line-arguments");
lf[84]=C_h_intern(&lf[84],8,"feature\077");
lf[85]=C_h_intern(&lf[85],14,"\000cross-chicken");
lf[86]=C_h_intern(&lf[86],11,"\003sysrequire");
lf[87]=C_h_intern(&lf[87],9,"setup-api");
C_register_lf2(lf,88,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_731,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_fcall f_1206(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_1206,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1216,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1674,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:105: print */
t7=*((C_word*)lf[20]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[60];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_1216(2,av2);}}}
else{
t4=C_i_car(t2);
t5=t4;
t6=C_i_string_equal_p(t5,lf[61]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1325,a[2]=t1,a[3]=t5,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;
f_1325(t8,t6);}
else{
t8=C_u_i_string_equal_p(t5,lf[81]);
if(C_truep(t8)){
t9=t7;
f_1325(t9,t8);}
else{
t9=C_u_i_string_equal_p(t5,lf[82]);
t10=t7;
f_1325(t10,t9);}}}}

/* k1113 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1115,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1164,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_1164(t5,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1216(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1216,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1219,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_truep(C_retrieve2(lf[4],"main#\052deploy\052"))?C_i_not(C_retrieve2(lf[3],"main#\052prefix\052")):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1295,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1300,tmp=(C_word)a,a+=2,tmp);
/* chicken-uninstall.scm:129: with-output-to-port */
t6=C_fast_retrieve(lf[58]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=*((C_word*)lf[59]+1);
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1219(2,av2);}}}

/* k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1219(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_1219,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1226,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1231,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t8=((C_word*)t0)[4];
t9=C_i_check_list_2(t8,lf[35]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1255,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1257,a[2]=t5,a[3]=t12,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_1257(t14,t10,t8);}

/* for-each-loop317 in k1113 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_fcall f_1164(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_1164,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1174,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1120,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:96: print */
t8=*((C_word*)lf[20]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[24];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1600(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_1600,2,av);}
a=C_alloc(8);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1206,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_1206(t7,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k1172 in for-each-loop317 in k1113 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 in ... */
static void C_ccall f_1174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1174,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1164(t3,((C_word*)t0)[4],t2);}

/* map-loop225 in k862 in k859 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_fcall f_888(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_888,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_913,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-uninstall.scm:68: g231 */
t5=((C_word*)t0)[4];
f_876(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k884 in k862 in k859 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_886,2,av);}
/* chicken-uninstall.scm:67: concatenate */
t2=C_fast_retrieve(lf[47]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k1334 in k1323 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1336,2,av);}
/* chicken-uninstall.scm:148: exit */
t2=C_fast_retrieve(lf[26]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k1145 in a1138 in k1127 in k1118 in for-each-loop317 in k1113 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in ... */
static void C_ccall f_1147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1147,2,av);}
/* chicken-uninstall.scm:100: setup-api#remove-extension */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* a1148 in k1127 in k1118 in for-each-loop317 in k1113 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in ... */
static void C_ccall f_1149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1149,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[1],"main#\052host-extensions\052"));
t3=C_mutate2(&lf[1] /* (set! main#*host-extensions* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1341 in k1323 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1343,2,av);}
/* chicken-uninstall.scm:147: print */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k859 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_861(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_861,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_864,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_922,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_922(t6,t2,t1);}

/* k862 in k859 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_864(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_864,2,av);}
a=C_alloc(22);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_871,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_876,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t9=C_i_check_list_2(((C_word*)t0)[3],lf[35]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_886,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_888,a[2]=t6,a[3]=t12,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_888(t14,t10,((C_word*)t0)[3]);}

/* k1157 in k1118 in for-each-loop317 in k1113 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in ... */
static void C_ccall f_1159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1159,2,av);}
/* chicken-uninstall.scm:101: setup-api#remove-extension */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k1396 in k1323 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1398,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken-uninstall.scm:163: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1206(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5]);}

/* k966 in a993 in a987 in a981 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in ... */
static void C_ccall f_968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_968,2,av);}
/* chicken-uninstall.scm:73: exit */
t2=C_fast_retrieve(lf[26]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k1118 in for-each-loop317 in k1113 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 in ... */
static void C_ccall f_1120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1120,2,av);}
a=C_alloc(4);
t2=(C_truep(C_retrieve2(lf[1],"main#\052host-extensions\052"))?C_retrieve2(lf[2],"main#\052target-extensions\052"):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1129,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:98: setup-api#remove-extension */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1159,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:101: repo-path */
f_774(t3);}}

/* k1127 in k1118 in for-each-loop317 in k1113 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in ... */
static void C_ccall f_1129(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_1129,2,av);}
a=C_alloc(15);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1134,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1139,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1149,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:99: ##sys#dynamic-wind */
t9=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[3];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* k960 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_962,2,av);}
/* chicken-uninstall.scm:65: make-pathname */
t2=C_fast_retrieve(lf[7]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[49];
av2[4]=lf[50];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a1008 in a981 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1009(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1009,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1011,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1077,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1094,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp1707 */
t5=t2;
f_1011(t5,t4);}

/* tmp1707 in a1008 in a981 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 in ... */
static void C_fcall f_1011(C_word t0,C_word t1){
C_word tmp;
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_1011,2,t0,t1);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1019,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1027,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(((C_word*)t0)[2],lf[35]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1042,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1044,a[2]=t6,a[3]=t11,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_1044(t13,t9,((C_word*)t0)[2]);}

/* k1323 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_fcall f_1325(C_word t0,C_word t1){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_1325,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1679,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:105: print */
t4=*((C_word*)lf[20]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[60];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[62]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1336,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1343,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:147: chicken-version */
t4=C_fast_retrieve(lf[63]);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[64]))){
t2=lf[1] /* main#*host-extensions* */ =C_SCHEME_FALSE;;
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-uninstall.scm:151: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1206(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[65]))){
t2=lf[2] /* main#*target-extensions* */ =C_SCHEME_FALSE;;
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-uninstall.scm:154: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1206(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[66]))){
t2=lf[15] /* main#*force* */ =C_SCHEME_TRUE;;
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-uninstall.scm:157: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1206(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[67]))){
t2=C_set_block_item(((C_word*)t0)[7],0,C_SCHEME_TRUE);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-uninstall.scm:160: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1206(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6]);}
else{
t2=C_u_i_string_equal_p(((C_word*)t0)[3],lf[68]);
t3=(C_truep(t2)?t2:C_u_i_string_equal_p(((C_word*)t0)[3],lf[69]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1398,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* chicken-uninstall.scm:162: setup-api#sudo-install */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word av2[3];
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
tp(3,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(lf[71],((C_word*)t0)[3]))){
t4=lf[4] /* main#*deploy* */ =C_SCHEME_TRUE;;
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* chicken-uninstall.scm:166: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_1206(t7,((C_word*)t0)[2],t6,((C_word*)t0)[6]);}
else{
t4=C_u_i_string_equal_p(((C_word*)t0)[3],lf[72]);
t5=(C_truep(t4)?t4:C_u_i_string_equal_p(((C_word*)t0)[3],lf[73]));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1425,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t7=((C_word*)t0)[4];
t8=C_u_i_cdr(t7);
if(C_truep(C_i_pairp(t8))){
t9=t6;{
C_word av2[2];
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
f_1425(2,av2);}}
else{
t9=t6;
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1684,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:105: print */
t11=*((C_word*)lf[20]+1);{
C_word av2[3];
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[60];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1466,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t7=C_block_size(((C_word*)t0)[3]);
if(C_truep(C_fixnum_greaterp(t7,C_fix(0)))){
t8=C_i_string_ref(((C_word*)t0)[3],C_fix(0));
t9=t6;
f_1466(t9,C_u_i_char_equalp(C_make_character(45),t8));}
else{
t8=t6;
f_1466(t8,C_SCHEME_FALSE);}}}}}}}}}}}

/* a1133 in k1127 in k1118 in for-each-loop317 in k1113 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in ... */
static void C_ccall f_1134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1134,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[1],"main#\052host-extensions\052"));
t3=C_mutate2(&lf[1] /* (set! main#*host-extensions* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1138 in k1127 in k1118 in for-each-loop317 in k1113 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in ... */
static void C_ccall f_1139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1139,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1147,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:100: repo-path */
f_774(t2);}

/* k1017 in tmp1707 in a1008 in a981 in k1098 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in ... */
static void C_ccall f_1019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1019,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1023,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:87: setup-api#abort-setup */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t3;
tp(2,av2);}}

/* a1540 in k1473 in k1464 in k1323 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1541,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_memq(t2,lf[77]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1547 in k1464 in k1323 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1549,2,av);}
/* string->list */
t2=C_fast_retrieve(lf[79]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k1594 in k1588 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1596,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k793 in k789 in main#repo-path in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_795(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_795,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[6]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_801,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-uninstall.scm:51: ##sys#print */
t6=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[10];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k1591 in k1588 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1593,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1588 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_1590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1590,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1593,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1596,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[19]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t3;
tp(2,av2);}}

/* k789 in main#repo-path in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_ccall f_791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_791,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_795,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:51: open-output-string */
t4=C_fast_retrieve(lf[11]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop199 in k859 in k1224 in k1217 in k1214 in loop in k1598 in k766 in k762 in k759 in k756 in k753 in k750 in k747 in k744 in k741 in k738 in k735 in k732 in k729 */
static void C_fcall f_922(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_922,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_947,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-uninstall.scm:64: g205 */
t5=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[103] = {
{"f_743:chicken_2duninstall_2escm",(void*)f_743},
{"f_749:chicken_2duninstall_2escm",(void*)f_749},
{"f_746:chicken_2duninstall_2escm",(void*)f_746},
{"f_740:chicken_2duninstall_2escm",(void*)f_740},
{"f_913:chicken_2duninstall_2escm",(void*)f_913},
{"f_774:chicken_2duninstall_2escm",(void*)f_774},
{"f_734:chicken_2duninstall_2escm",(void*)f_734},
{"f_737:chicken_2duninstall_2escm",(void*)f_737},
{"f_731:chicken_2duninstall_2escm",(void*)f_731},
{"f_1504:chicken_2duninstall_2escm",(void*)f_1504},
{"f_947:chicken_2duninstall_2escm",(void*)f_947},
{"f_1069:chicken_2duninstall_2escm",(void*)f_1069},
{"f_1500:chicken_2duninstall_2escm",(void*)f_1500},
{"f_764:chicken_2duninstall_2escm",(void*)f_764},
{"f_768:chicken_2duninstall_2escm",(void*)f_768},
{"f_761:chicken_2duninstall_2escm",(void*)f_761},
{"f_1077:chicken_2duninstall_2escm",(void*)f_1077},
{"f_752:chicken_2duninstall_2escm",(void*)f_752},
{"f_755:chicken_2duninstall_2escm",(void*)f_755},
{"f_758:chicken_2duninstall_2escm",(void*)f_758},
{"f_871:chicken_2duninstall_2escm",(void*)f_871},
{"f_1083:chicken_2duninstall_2escm",(void*)f_1083},
{"f1674:chicken_2duninstall_2escm",(void*)f1674},
{"f_876:chicken_2duninstall_2escm",(void*)f_876},
{"f1679:chicken_2duninstall_2escm",(void*)f1679},
{"f_1432:chicken_2duninstall_2escm",(void*)f_1432},
{"f_958:chicken_2duninstall_2escm",(void*)f_958},
{"f_1441:chicken_2duninstall_2escm",(void*)f_1441},
{"f_1448:chicken_2duninstall_2escm",(void*)f_1448},
{"f_1023:chicken_2duninstall_2escm",(void*)f_1023},
{"f_1027:chicken_2duninstall_2escm",(void*)f_1027},
{"f1691:chicken_2duninstall_2escm",(void*)f1691},
{"f1696:chicken_2duninstall_2escm",(void*)f1696},
{"f_1282:chicken_2duninstall_2escm",(void*)f_1282},
{"f_801:chicken_2duninstall_2escm",(void*)f_801},
{"f_807:chicken_2duninstall_2escm",(void*)f_807},
{"f_1300:chicken_2duninstall_2escm",(void*)f_1300},
{"f_804:chicken_2duninstall_2escm",(void*)f_804},
{"f_1452:chicken_2duninstall_2escm",(void*)f_1452},
{"f_1295:chicken_2duninstall_2escm",(void*)f_1295},
{"f_994:chicken_2duninstall_2escm",(void*)f_994},
{"f_1042:chicken_2duninstall_2escm",(void*)f_1042},
{"f_1044:chicken_2duninstall_2escm",(void*)f_1044},
{"f_1466:chicken_2duninstall_2escm",(void*)f_1466},
{"f_1226:chicken_2duninstall_2escm",(void*)f_1226},
{"f_977:chicken_2duninstall_2escm",(void*)f_977},
{"f1684:chicken_2duninstall_2escm",(void*)f1684},
{"f_1475:chicken_2duninstall_2escm",(void*)f_1475},
{"f_1231:chicken_2duninstall_2escm",(void*)f_1231},
{"f_817:chicken_2duninstall_2escm",(void*)f_817},
{"f_988:chicken_2duninstall_2escm",(void*)f_988},
{"f_1481:chicken_2duninstall_2escm",(void*)f_1481},
{"f_1488:chicken_2duninstall_2escm",(void*)f_1488},
{"f_1242:chicken_2duninstall_2escm",(void*)f_1242},
{"f_842:chicken_2duninstall_2escm",(void*)f_842},
{"f_1246:chicken_2duninstall_2escm",(void*)f_1246},
{"f_848:chicken_2duninstall_2escm",(void*)f_848},
{"f_982:chicken_2duninstall_2escm",(void*)f_982},
{"f_1255:chicken_2duninstall_2escm",(void*)f_1255},
{"f_1257:chicken_2duninstall_2escm",(void*)f_1257},
{"f_1425:chicken_2duninstall_2escm",(void*)f_1425},
{"f_829:chicken_2duninstall_2escm",(void*)f_829},
{"f_823:chicken_2duninstall_2escm",(void*)f_823},
{"f_826:chicken_2duninstall_2escm",(void*)f_826},
{"f_1094:chicken_2duninstall_2escm",(void*)f_1094},
{"f_1100:chicken_2duninstall_2escm",(void*)f_1100},
{"toplevel:chicken_2duninstall_2escm",(void*)C_toplevel},
{"f_1206:chicken_2duninstall_2escm",(void*)f_1206},
{"f_1115:chicken_2duninstall_2escm",(void*)f_1115},
{"f_1216:chicken_2duninstall_2escm",(void*)f_1216},
{"f_1219:chicken_2duninstall_2escm",(void*)f_1219},
{"f_1164:chicken_2duninstall_2escm",(void*)f_1164},
{"f_1600:chicken_2duninstall_2escm",(void*)f_1600},
{"f_1174:chicken_2duninstall_2escm",(void*)f_1174},
{"f_888:chicken_2duninstall_2escm",(void*)f_888},
{"f_886:chicken_2duninstall_2escm",(void*)f_886},
{"f_1336:chicken_2duninstall_2escm",(void*)f_1336},
{"f_1147:chicken_2duninstall_2escm",(void*)f_1147},
{"f_1149:chicken_2duninstall_2escm",(void*)f_1149},
{"f_1343:chicken_2duninstall_2escm",(void*)f_1343},
{"f_861:chicken_2duninstall_2escm",(void*)f_861},
{"f_864:chicken_2duninstall_2escm",(void*)f_864},
{"f_1159:chicken_2duninstall_2escm",(void*)f_1159},
{"f_1398:chicken_2duninstall_2escm",(void*)f_1398},
{"f_968:chicken_2duninstall_2escm",(void*)f_968},
{"f_1120:chicken_2duninstall_2escm",(void*)f_1120},
{"f_1129:chicken_2duninstall_2escm",(void*)f_1129},
{"f_962:chicken_2duninstall_2escm",(void*)f_962},
{"f_1009:chicken_2duninstall_2escm",(void*)f_1009},
{"f_1011:chicken_2duninstall_2escm",(void*)f_1011},
{"f_1325:chicken_2duninstall_2escm",(void*)f_1325},
{"f_1134:chicken_2duninstall_2escm",(void*)f_1134},
{"f_1139:chicken_2duninstall_2escm",(void*)f_1139},
{"f_1019:chicken_2duninstall_2escm",(void*)f_1019},
{"f_1541:chicken_2duninstall_2escm",(void*)f_1541},
{"f_1549:chicken_2duninstall_2escm",(void*)f_1549},
{"f_1596:chicken_2duninstall_2escm",(void*)f_1596},
{"f_795:chicken_2duninstall_2escm",(void*)f_795},
{"f_1593:chicken_2duninstall_2escm",(void*)f_1593},
{"f_1590:chicken_2duninstall_2escm",(void*)f_1590},
{"f_791:chicken_2duninstall_2escm",(void*)f_791},
{"f_922:chicken_2duninstall_2escm",(void*)f_922},
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
o|hiding nonexported module bindings: main#*cross-chicken* 
o|hiding nonexported module bindings: main#*host-extensions* 
o|hiding nonexported module bindings: main#*target-extensions* 
o|hiding nonexported module bindings: main#*prefix* 
o|hiding nonexported module bindings: main#*deploy* 
o|hiding nonexported module bindings: main#repo-path 
o|hiding nonexported module bindings: main#*force* 
o|hiding nonexported module bindings: main#grep 
o|hiding nonexported module bindings: main#gather-eggs 
o|hiding nonexported module bindings: main#fini 
o|hiding nonexported module bindings: main#ask 
o|hiding nonexported module bindings: main#uninstall 
o|hiding nonexported module bindings: main#usage 
o|hiding nonexported module bindings: main#*short-options* 
o|hiding nonexported module bindings: main#main 
S|applied compiler syntax:
S|  for-each		1
S|  map		5
S|  sprintf		2
o|eliminated procedure checks: 29 
o|specializations:
o|  1 (> fixnum fixnum)
o|  1 (char=? char char)
o|  1 (string-ref string fixnum)
o|  1 (positive? fixnum)
o|  2 (string-length string)
o|  1 (cddr (pair * pair))
o|  9 (cdr pair)
o|  12 (string=? string string)
o|  1 (current-error-port)
o|  1 (##sys#call-with-values (procedure () *) *)
o|  3 (##sys#check-list (or pair list) *)
o|  2 (##sys#check-output-port * * *)
(o e)|safe calls: 109 
(o e)|assignments to immediate values: 3 
o|inlining procedure: k776 
o|propagated global variable: r7771601 main#*prefix* 
o|inlining procedure: k776 
o|substituted constant variable: a797 
o|substituted constant variable: a798 
o|inlining procedure: k808 
o|substituted constant variable: a819 
o|substituted constant variable: a820 
o|inlining procedure: k808 
o|propagated global variable: g192193 irregex-search 
o|contracted procedure: "(chicken-uninstall.scm:187) main#main" 
o|inlining procedure: k1208 
o|contracted procedure: "(chicken-uninstall.scm:132) main#uninstall" 
o|inlining procedure: k1101 
o|inlining procedure: k1101 
o|inlining procedure: k1166 
o|contracted procedure: "(chicken-uninstall.scm:94) g318325" 
o|inlining procedure: k1121 
o|inlining procedure: k1121 
o|inlining procedure: k1166 
o|propagated global variable: tmp312314 main#*force* 
o|propagated global variable: tmp312314 main#*force* 
o|contracted procedure: "(chicken-uninstall.scm:93) main#ask" 
o|inlining procedure: k996 
o|contracted procedure: "(chicken-uninstall.scm:78) main#fini" 
o|inlining procedure: k996 
o|inlining procedure: k1046 
o|contracted procedure: "(chicken-uninstall.scm:84) g278287" 
o|inlining procedure: k1046 
o|merged explicitly consed rest parameter: args263304 
o|consed rest parameter at call site: tmp2708 1 
o|contracted procedure: "(chicken-uninstall.scm:90) main#gather-eggs" 
o|inlining procedure: k890 
o|inlining procedure: k890 
o|inlining procedure: k924 
o|inlining procedure: k924 
o|inlining procedure: k1233 
o|inlining procedure: k1233 
o|inlining procedure: k1259 
o|inlining procedure: k1259 
o|inlining procedure: k1208 
o|substituted constant variable: a1333 
o|inlining procedure: k1329 
o|inlining procedure: k1329 
o|substituted constant variable: a1348 
o|substituted constant variable: a1359 
o|inlining procedure: k1355 
o|inlining procedure: k1355 
o|substituted constant variable: a1370 
o|substituted constant variable: a1381 
o|inlining procedure: k1377 
o|inlining procedure: k1377 
o|substituted constant variable: a1392 
o|substituted constant variable: a1407 
o|inlining procedure: k1404 
o|inlining procedure: k1404 
o|substituted constant variable: a1419 
o|inlining procedure: k1461 
o|inlining procedure: k1476 
o|inlining procedure: k1506 
o|contracted procedure: "(chicken-uninstall.scm:182) g445454" 
o|inlining procedure: k1506 
o|inlining procedure: k1476 
o|substituted constant variable: main#*short-options* 
o|substituted constant variable: a1557 
o|inlining procedure: k1461 
o|substituted constant variable: a1575 
o|substituted constant variable: a1572 
o|substituted constant variable: a1578 
o|substituted constant variable: a1580 
o|substituted constant variable: a1582 
o|inlining procedure: k1583 
o|inlining procedure: k1583 
o|substituted constant variable: a1587 
o|replaced variables: 160 
o|removed binding forms: 84 
o|removed side-effect free assignment to unused variable: main#*short-options* 
o|substituted constant variable: code258 
o|replaced variables: 1 
o|removed binding forms: 184 
o|inlining procedure: "(chicken-uninstall.scm:127) main#usage" 
o|inlining procedure: "(chicken-uninstall.scm:145) main#usage" 
o|inlining procedure: "(chicken-uninstall.scm:168) main#usage" 
o|inlining procedure: "(chicken-uninstall.scm:183) main#usage" 
o|inlining procedure: "(chicken-uninstall.scm:184) main#usage" 
o|replaced variables: 7 
o|removed binding forms: 3 
o|removed side-effect free assignment to unused variable: main#usage 
o|substituted constant variable: code3511672 
o|substituted constant variable: code3511677 
o|substituted constant variable: code3511682 
o|substituted constant variable: code3511689 
o|substituted constant variable: code3511694 
o|removed binding forms: 7 
o|removed binding forms: 6 
o|simplifications: ((if . 5) (##core#call . 60)) 
o|  call simplifications:
o|    car
o|    string=?
o|    ##sys#size	2
o|    fx>
o|    string->list
o|    memq
o|    string
o|    cadr
o|    null?	3
o|    ##sys#apply
o|    ##sys#check-list	3
o|    cons	11
o|    ##sys#setslot	5
o|    eq?
o|    pair?	7
o|    ##sys#slot	17
o|    not	2
o|    ##sys#fudge
o|contracted procedure: k782 
o|contracted procedure: k831 
o|contracted procedure: k1211 
o|contracted procedure: k1104 
o|contracted procedure: k1169 
o|contracted procedure: k1179 
o|contracted procedure: k1183 
o|contracted procedure: k1124 
o|contracted procedure: k999 
o|contracted procedure: k1029 
o|contracted procedure: k1037 
o|contracted procedure: k1049 
o|contracted procedure: k1052 
o|contracted procedure: k1055 
o|contracted procedure: k1063 
o|contracted procedure: k1071 
o|contracted procedure: k856 
o|contracted procedure: k873 
o|contracted procedure: k881 
o|contracted procedure: k893 
o|contracted procedure: k896 
o|contracted procedure: k899 
o|contracted procedure: k907 
o|contracted procedure: k915 
o|contracted procedure: k927 
o|contracted procedure: k930 
o|contracted procedure: k933 
o|contracted procedure: k941 
o|contracted procedure: k949 
o|contracted procedure: k1228 
o|contracted procedure: k1250 
o|contracted procedure: k1262 
o|contracted procedure: k1265 
o|contracted procedure: k1268 
o|contracted procedure: k1276 
o|contracted procedure: k1284 
o|contracted procedure: k1290 
o|contracted procedure: k1308 
o|contracted procedure: k1314 
o|contracted procedure: k1320 
o|contracted procedure: k1393 
o|contracted procedure: k1420 
o|contracted procedure: k1427 
o|contracted procedure: k1453 
o|contracted procedure: k1554 
o|contracted procedure: k1470 
o|contracted procedure: k1490 
o|contracted procedure: k1509 
o|contracted procedure: k1531 
o|contracted procedure: k1527 
o|contracted procedure: k1512 
o|contracted procedure: k1515 
o|contracted procedure: k1523 
o|contracted procedure: k1565 
o|contracted procedure: k1569 
o|simplifications: ((let . 11)) 
o|removed binding forms: 55 
o|replaced variables: 14 
o|removed binding forms: 7 
o|customizable procedures: (k1323 k1464 map-loop439464 loop357 g379388 map-loop373391 map-loop199216 g231240 map-loop225250 tmp1707 tmp2708 map-loop272297 main#repo-path for-each-loop317345) 
o|calls to known targets: 40 
o|identified direct recursive calls: f_1504 1 
o|fast box initializations: 7 
o|fast global references: 23 
o|fast global assignments: 15 
o|dropping unused closure argument: f_774 
*/
/* end of file */

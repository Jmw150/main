/* Generated from lfa2.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: lfa2.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -extend private-namespace.scm -no-trace -output-file lfa2.c
   unit: lfa2
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[71];
static double C_possibly_force_alignment;


C_noret_decl(f_1560)
static void C_fcall f_1560(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1148)
static void C_fcall f_1148(C_word t0,C_word t1) C_noret;
C_noret_decl(f_811)
static void C_ccall f_811(C_word c,C_word *av) C_noret;
C_noret_decl(f_1087)
static void C_fcall f_1087(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_990)
static void C_ccall f_990(C_word c,C_word *av) C_noret;
C_noret_decl(f_998)
static void C_fcall f_998(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_993)
static void C_ccall f_993(C_word c,C_word *av) C_noret;
C_noret_decl(f_1396)
static void C_ccall f_1396(C_word c,C_word *av) C_noret;
C_noret_decl(f_966)
static void C_ccall f_966(C_word c,C_word *av) C_noret;
C_noret_decl(f_1244)
static void C_ccall f_1244(C_word c,C_word *av) C_noret;
C_noret_decl(f_1256)
static void C_ccall f_1256(C_word c,C_word *av) C_noret;
C_noret_decl(f_1492)
static void C_fcall f_1492(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1384)
static void C_ccall f_1384(C_word c,C_word *av) C_noret;
C_noret_decl(f_1174)
static void C_fcall f_1174(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1052)
static void C_ccall f_1052(C_word c,C_word *av) C_noret;
C_noret_decl(f_1783)
static void C_fcall f_1783(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1045)
static void C_ccall f_1045(C_word c,C_word *av) C_noret;
C_noret_decl(f_1463)
static void C_ccall f_1463(C_word c,C_word *av) C_noret;
C_noret_decl(f_1921)
static void C_ccall f_1921(C_word c,C_word *av) C_noret;
C_noret_decl(f_1367)
static void C_ccall f_1367(C_word c,C_word *av) C_noret;
C_noret_decl(f_1608)
static void C_fcall f_1608(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1097)
static void C_ccall f_1097(C_word c,C_word *av) C_noret;
C_noret_decl(f_1477)
static void C_ccall f_1477(C_word c,C_word *av) C_noret;
C_noret_decl(f_1474)
static void C_ccall f_1474(C_word c,C_word *av) C_noret;
C_noret_decl(f_742)
static void C_ccall f_742(C_word c,C_word *av) C_noret;
C_noret_decl(f_2007)
static void C_ccall f_2007(C_word c,C_word *av) C_noret;
C_noret_decl(f_1470)
static void C_fcall f_1470(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1233)
static void C_ccall f_1233(C_word c,C_word *av) C_noret;
C_noret_decl(f_736)
static void C_ccall f_736(C_word c,C_word *av) C_noret;
C_noret_decl(f_1230)
static void C_fcall f_1230(C_word t0,C_word t1) C_noret;
C_noret_decl(f_739)
static void C_ccall f_739(C_word c,C_word *av) C_noret;
C_noret_decl(f_1263)
static void C_ccall f_1263(C_word c,C_word *av) C_noret;
C_noret_decl(f_1332)
static void C_fcall f_1332(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1411)
static void C_ccall f_1411(C_word c,C_word *av) C_noret;
C_noret_decl(f_789)
static void C_ccall f_789(C_word c,C_word *av) C_noret;
C_noret_decl(f_2018)
static void C_ccall f_2018(C_word c,C_word *av) C_noret;
C_noret_decl(C_lfa2_toplevel)
C_externexport void C_ccall C_lfa2_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_1706)
static void C_ccall f_1706(C_word c,C_word *av) C_noret;
C_noret_decl(f_1703)
static void C_ccall f_1703(C_word c,C_word *av) C_noret;
C_noret_decl(f_1933)
static void C_fcall f_1933(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_986)
static void C_fcall f_986(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1848)
static void C_fcall f_1848(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1453)
static void C_fcall f_1453(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1715)
static void C_fcall f_1715(C_word t0,C_word t1) C_noret;
C_noret_decl(f_925)
static void C_fcall f_925(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_919)
static void C_fcall f_919(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1945)
static void C_fcall f_1945(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1427)
static void C_ccall f_1427(C_word c,C_word *av) C_noret;
C_noret_decl(f_1943)
static void C_ccall f_1943(C_word c,C_word *av) C_noret;
C_noret_decl(f_1002)
static void C_ccall f_1002(C_word c,C_word *av) C_noret;
C_noret_decl(f_2022)
static void C_ccall f_2022(C_word c,C_word *av) C_noret;
C_noret_decl(f_1314)
static void C_ccall f_1314(C_word c,C_word *av) C_noret;
C_noret_decl(f_1955)
static void C_ccall f_1955(C_word c,C_word *av) C_noret;
C_noret_decl(f_890)
static void C_fcall f_890(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1224)
static void C_ccall f_1224(C_word c,C_word *av) C_noret;
C_noret_decl(f_2056)
static void C_fcall f_2056(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1911)
static void C_fcall f_1911(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2066)
static void C_ccall f_2066(C_word c,C_word *av) C_noret;
C_noret_decl(f_2039)
static void C_ccall f_2039(C_word c,C_word *av) C_noret;
C_noret_decl(f_2036)
static void C_ccall f_2036(C_word c,C_word *av) C_noret;
C_noret_decl(f_1018)
static void C_ccall f_1018(C_word c,C_word *av) C_noret;
C_noret_decl(f_1011)
static void C_fcall f_1011(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2033)
static void C_ccall f_2033(C_word c,C_word *av) C_noret;
C_noret_decl(f_2030)
static void C_ccall f_2030(C_word c,C_word *av) C_noret;
C_noret_decl(f_1028)
static void C_ccall f_1028(C_word c,C_word *av) C_noret;
C_noret_decl(f_1838)
static void C_fcall f_1838(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1138)
static void C_fcall f_1138(C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_1560)
static void C_ccall trf_1560(C_word c,C_word *av) C_noret;
static void C_ccall trf_1560(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1560(t0,t1);}

C_noret_decl(trf_1148)
static void C_ccall trf_1148(C_word c,C_word *av) C_noret;
static void C_ccall trf_1148(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1148(t0,t1);}

C_noret_decl(trf_1087)
static void C_ccall trf_1087(C_word c,C_word *av) C_noret;
static void C_ccall trf_1087(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1087(t0,t1,t2);}

C_noret_decl(trf_998)
static void C_ccall trf_998(C_word c,C_word *av) C_noret;
static void C_ccall trf_998(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_998(t0,t1,t2,t3);}

C_noret_decl(trf_1492)
static void C_ccall trf_1492(C_word c,C_word *av) C_noret;
static void C_ccall trf_1492(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1492(t0,t1);}

C_noret_decl(trf_1174)
static void C_ccall trf_1174(C_word c,C_word *av) C_noret;
static void C_ccall trf_1174(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1174(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1783)
static void C_ccall trf_1783(C_word c,C_word *av) C_noret;
static void C_ccall trf_1783(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1783(t0,t1);}

C_noret_decl(trf_1608)
static void C_ccall trf_1608(C_word c,C_word *av) C_noret;
static void C_ccall trf_1608(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1608(t0,t1,t2);}

C_noret_decl(trf_1470)
static void C_ccall trf_1470(C_word c,C_word *av) C_noret;
static void C_ccall trf_1470(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1470(t0,t1,t2);}

C_noret_decl(trf_1230)
static void C_ccall trf_1230(C_word c,C_word *av) C_noret;
static void C_ccall trf_1230(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1230(t0,t1);}

C_noret_decl(trf_1332)
static void C_ccall trf_1332(C_word c,C_word *av) C_noret;
static void C_ccall trf_1332(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1332(t0,t1);}

C_noret_decl(trf_1933)
static void C_ccall trf_1933(C_word c,C_word *av) C_noret;
static void C_ccall trf_1933(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1933(t0,t1,t2);}

C_noret_decl(trf_986)
static void C_ccall trf_986(C_word c,C_word *av) C_noret;
static void C_ccall trf_986(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_986(t0,t1);}

C_noret_decl(trf_1848)
static void C_ccall trf_1848(C_word c,C_word *av) C_noret;
static void C_ccall trf_1848(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1848(t0,t1);}

C_noret_decl(trf_1453)
static void C_ccall trf_1453(C_word c,C_word *av) C_noret;
static void C_ccall trf_1453(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1453(t0,t1,t2);}

C_noret_decl(trf_1715)
static void C_ccall trf_1715(C_word c,C_word *av) C_noret;
static void C_ccall trf_1715(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1715(t0,t1);}

C_noret_decl(trf_925)
static void C_ccall trf_925(C_word c,C_word *av) C_noret;
static void C_ccall trf_925(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_925(t0,t1,t2);}

C_noret_decl(trf_919)
static void C_ccall trf_919(C_word c,C_word *av) C_noret;
static void C_ccall trf_919(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_919(t0,t1,t2);}

C_noret_decl(trf_1945)
static void C_ccall trf_1945(C_word c,C_word *av) C_noret;
static void C_ccall trf_1945(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1945(t0,t1,t2);}

C_noret_decl(trf_890)
static void C_ccall trf_890(C_word c,C_word *av) C_noret;
static void C_ccall trf_890(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_890(t0,t1,t2);}

C_noret_decl(trf_2056)
static void C_ccall trf_2056(C_word c,C_word *av) C_noret;
static void C_ccall trf_2056(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2056(t0,t1,t2);}

C_noret_decl(trf_1911)
static void C_ccall trf_1911(C_word c,C_word *av) C_noret;
static void C_ccall trf_1911(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1911(t0,t1,t2);}

C_noret_decl(trf_1011)
static void C_ccall trf_1011(C_word c,C_word *av) C_noret;
static void C_ccall trf_1011(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1011(t0,t1,t2);}

C_noret_decl(trf_1838)
static void C_ccall trf_1838(C_word c,C_word *av) C_noret;
static void C_ccall trf_1838(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1838(t0,t1,t2);}

C_noret_decl(trf_1138)
static void C_ccall trf_1138(C_word c,C_word *av) C_noret;
static void C_ccall trf_1138(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1138(t0,t1,t2);}

/* k1558 in k1472 in g301 in k1461 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_1560(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1560,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_memq(lf[25],t3))){
/* lfa2.scm:294: extinguish! */
t4=((C_word*)((C_word*)t0)[3])[1];
f_998(t4,((C_word*)t0)[4],((C_word*)t0)[5],lf[55]);}
else{
t4=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[21];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_member(((C_word*)t0)[7],t3))){
/* lfa2.scm:297: extinguish! */
t4=((C_word*)((C_word*)t0)[3])[1];
f_998(t4,((C_word*)t0)[4],((C_word*)t0)[5],lf[56]);}
else{
t4=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[21];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k1146 in loop in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_1148(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_1148,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_i_cdr(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* lfa2.scm:229: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1138(t4,((C_word*)t0)[2],t3);}}

/* k809 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_811,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[29];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[30];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_flonump(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[31];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_booleanp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[25];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[32];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_listp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[33];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[34];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_eofp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[35];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[36];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_immp(((C_word*)t0)[3]);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_structurep(((C_word*)t0)[3]));
if(C_truep(t3)){
t4=C_slot(((C_word*)t0)[3],C_fix(0));
t5=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_list(&a,2,lf[37],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_charp(((C_word*)t0)[3]);
t5=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=(C_truep(t4)?lf[38]:lf[21]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}}}}}}}}}

/* for-each-loop166 in k1000 in extinguish! in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_1087(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1087,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1097,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* lfa2.scm:200: g167 */
t5=((C_word*)t0)[3];
f_1011(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k988 in drop! in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_990,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_993,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:195: node-parameters-set! */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* extinguish! in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_998(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_998,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1002,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=t2;
t6=C_slot(t5,C_fix(2));
t7=C_i_car(t6);
/* lfa2.scm:199: report */
t8=((C_word*)((C_word*)t0)[4])[1];
f_890(t8,t4,t7);}

/* k991 in k988 in drop! in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_993,2,av);}
/* lfa2.scm:196: node-subexpressions-set! */
t2=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1394 in k1312 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1396(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_1396,2,av);}
a=C_alloc(20);
t2=(C_truep(t1)?((C_word*)t0)[2]:C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),((C_word*)t0)[2]));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1332,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=t3,tmp=(C_word)a,a+=9,tmp);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
t6=C_eqp(lf[6],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1384,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:260: assigned? */
t8=((C_word*)((C_word*)t0)[10])[1];
f_919(t8,t7,((C_word*)t0)[3]);}
else{
t7=t4;
f_1332(t7,C_SCHEME_FALSE);}}

/* k964 in droppable? in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_966,2,av);}
t2=C_i_not(t1);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=((C_word*)t0)[2];
/* tweaks.scm:57: ##sys#get */
t4=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[8];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k1242 in k1231 in k1228 in k1222 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1244,2,av);}
/* lfa2.scm:244: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1174(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* k1254 in k1228 in k1222 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1256,2,av);}
/* lfa2.scm:241: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1174(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* k1490 in k1472 in g301 in k1461 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_1492(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1492,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_slot(t2,C_fix(2));
t4=C_i_car(t3);
if(C_truep(C_i_symbolp(t4))){
t5=C_i_cadr(((C_word*)t0)[3]);
t6=C_eqp(t4,t5);
if(C_truep(t6)){
/* lfa2.scm:291: extinguish! */
t7=((C_word*)((C_word*)t0)[4])[1];
f_998(t7,((C_word*)t0)[5],((C_word*)t0)[6],lf[54]);}
else{
t7=((C_word*)t0)[7];{
C_word av2[2];
av2[0]=t7;
av2[1]=lf[21];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t5=((C_word*)t0)[7];{
C_word av2[2];
av2[0]=t5;
av2[1]=lf[21];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[7];{
C_word av2[2];
av2[0]=t2;
av2[1]=lf[21];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1382 in k1394 in k1312 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1384,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_1332(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1367,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(2));
t4=C_i_car(t3);
/* lfa2.scm:261: assigned? */
t5=((C_word*)((C_word*)t0)[4])[1];
f_919(t5,t2,t4);}}

/* walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_1174(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(21,0,4)))){
C_save_and_reclaim_args((void *)trf_1174,5,t0,t1,t2,t3,t4);}
a=C_alloc(21);
t5=t2;
t6=C_slot(t5,C_fix(1));
t7=t2;
t8=C_slot(t7,C_fix(2));
t9=t8;
t10=t2;
t11=C_slot(t10,C_fix(3));
t12=t11;
t13=C_eqp(t6,lf[6]);
if(C_truep(t13)){
t14=C_i_car(t9);
t15=t1;
t16=t14;
t17=t3;
t18=t4;
t19=C_i_assq(t16,t17);
if(C_truep(t19)){
t20=t15;{
C_word av2[2];
av2[0]=t20;
av2[1]=C_i_cdr(t19);
((C_proc)(void*)(*((C_word*)t20+1)))(2,av2);}}
else{
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1138,a[2]=t21,a[3]=t16,a[4]=t17,tmp=(C_word)a,a+=5,tmp));
t23=((C_word*)t21)[1];
f_1138(t23,t15,t18);}}
else{
t14=C_eqp(t6,lf[22]);
t15=(C_truep(t14)?t14:C_eqp(t6,lf[23]));
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1224,a[2]=t12,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t17=C_i_car(t12);
/* lfa2.scm:239: walk */
t33=t16;
t34=t17;
t35=t3;
t36=t4;
t1=t33;
t2=t34;
t3=t35;
t4=t36;
goto loop;}
else{
t16=C_eqp(t6,lf[26]);
if(C_truep(t16)){
t17=C_i_car(t9);
t18=t1;
t19=t17;
if(C_truep(C_i_stringp(t19))){
t20=t18;{
C_word av2[2];
av2[0]=t20;
av2[1]=lf[27];
((C_proc)(void*)(*((C_word*)t20+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t19))){
t20=t18;{
C_word av2[2];
av2[0]=t20;
av2[1]=lf[28];
((C_proc)(void*)(*((C_word*)t20+1)))(2,av2);}}
else{
t20=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_811,a[2]=t18,a[3]=t19,tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:163: big-fixnum? */
t21=*((C_word*)lf[39]+1);{
C_word av2[3];
av2[0]=t21;
av2[1]=t20;
av2[2]=t19;
((C_proc)(void*)(*((C_word*)t21+1)))(3,av2);}}}}
else{
t17=C_eqp(t6,lf[40]);
if(C_truep(t17)){
t18=C_i_car(t12);
t19=t18;
t20=C_i_car(t9);
t21=t20;
t22=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1314,a[2]=t12,a[3]=t3,a[4]=t21,a[5]=t19,a[6]=t4,a[7]=((C_word*)t0)[2],a[8]=t1,a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
/* lfa2.scm:254: walk */
t33=t22;
t34=t19;
t35=t3;
t36=t4;
t1=t33;
t2=t34;
t3=t35;
t4=t36;
goto loop;}
else{
t18=C_eqp(t6,lf[41]);
t19=(C_truep(t18)?t18:C_eqp(t6,lf[42]));
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1411,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t21=C_i_car(t12);
/* lfa2.scm:269: walk */
t33=t20;
t34=t21;
t35=C_SCHEME_END_OF_LIST;
t36=C_SCHEME_END_OF_LIST;
t1=t33;
t2=t34;
t3=t35;
t4=t36;
goto loop;}
else{
t20=C_eqp(t6,lf[44]);
t21=(C_truep(t20)?t20:C_eqp(t6,lf[45]));
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1427,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t23=C_i_car(t12);
/* lfa2.scm:272: walk */
t33=t22;
t34=t23;
t35=t3;
t36=t4;
t1=t33;
t2=t34;
t3=t35;
t4=t36;
goto loop;}
else{
t22=C_eqp(t6,lf[13]);
if(C_truep(t22)){
t23=t1;{
C_word av2[2];
av2[0]=t23;
av2[1]=lf[46];
((C_proc)(void*)(*((C_word*)t23+1)))(2,av2);}}
else{
t23=C_eqp(t6,lf[47]);
if(C_truep(t23)){
t24=t1;{
C_word av2[2];
av2[0]=t24;
av2[1]=lf[43];
((C_proc)(void*)(*((C_word*)t24+1)))(2,av2);}}
else{
t24=C_eqp(t6,lf[48]);
t25=(C_truep(t24)?t24:C_eqp(t6,lf[49]));
if(C_truep(t25)){
t26=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1453,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t27=C_i_check_list_2(t12,lf[14]);
t28=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1463,a[2]=t9,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t12,a[6]=((C_word*)t0)[2],a[7]=t3,a[8]=t4,a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1911,a[2]=t30,a[3]=t26,tmp=(C_word)a,a+=4,tmp));
t32=((C_word*)t30)[1];
f_1911(t32,t28,t12);}
else{
t26=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1933,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t27=C_i_check_list_2(t12,lf[14]);
t28=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1943,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1945,a[2]=t30,a[3]=t26,tmp=(C_word)a,a+=4,tmp));
t32=((C_word*)t30)[1];
f_1945(t32,t28,t12);}}}}}}}}}}

/* k1050 in k1026 in k1000 in extinguish! in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1052,2,av);}
/* lfa2.scm:213: string-append */
t2=*((C_word*)lf[15]+1);{
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

/* k1781 in k1701 in g322 in k1461 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_1783(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1783,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_memq(lf[25],t3))){
/* lfa2.scm:330: extinguish! */
t4=((C_word*)((C_word*)t0)[3])[1];
f_998(t4,((C_word*)t0)[4],((C_word*)t0)[5],lf[59]);}
else{
t4=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[25];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_member(((C_word*)t0)[7],t3))){
/* lfa2.scm:333: extinguish! */
t4=((C_word*)((C_word*)t0)[3])[1];
f_998(t4,((C_word*)t0)[4],((C_word*)t0)[5],lf[60]);}
else{
t4=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[25];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k1043 in k1026 in k1000 in extinguish! in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1045,2,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* lfa2.scm:210: node-parameters-set! */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1461 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1463(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1463,2,av);}
a=C_alloc(8);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_assoc(t2,lf[50]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1470,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* lfa2.scm:278: g301 */
t5=t4;
f_1470(t5,((C_word*)t0)[9],t3);}
else{
t4=C_u_i_car(((C_word*)t0)[2]);
t5=C_i_assoc(t4,lf[57]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1608,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* lfa2.scm:278: g322 */
t7=t6;
f_1608(t7,((C_word*)t0)[9],t5);}
else{
t6=C_u_i_car(((C_word*)t0)[2]);
t7=C_i_assoc(t6,*((C_word*)lf[0]+1));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1838,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* lfa2.scm:278: g363 */
t9=t8;
f_1838(t9,((C_word*)t0)[9],t7);}
else{
t8=((C_word*)t0)[9];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}}

/* k1919 in for-each-loop272 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1921,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1911(t3,((C_word*)t0)[4],t2);}

/* k1365 in k1382 in k1394 in k1312 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1367,2,av);}
t2=((C_word*)t0)[2];
f_1332(t2,C_i_not(t1));}

/* g322 in k1461 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_1608(C_word t0,C_word t1,C_word t2){
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
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,4)))){
C_save_and_reclaim_args((void *)trf_1608,3,t0,t1,t2);}
a=C_alloc(21);
t3=C_i_car(((C_word*)t0)[2]);
t4=C_slot(t3,C_fix(1));
t5=C_eqp(lf[6],t4);
if(C_truep(t5)){
t6=C_slot(t3,C_fix(2));
t7=C_i_car(t6);
t8=C_i_cadr(t2);
t9=C_eqp(lf[53],t8);
if(C_truep(t9)){
t10=C_i_cadr(((C_word*)t0)[2]);
t11=C_slot(t10,C_fix(1));
t12=C_eqp(lf[26],t11);
if(C_truep(t12)){
t13=C_i_cadr(((C_word*)t0)[2]);
t14=C_slot(t13,C_fix(2));
t15=C_i_car(t14);
if(C_truep(C_i_symbolp(t15))){
t16=C_a_i_list(&a,2,lf[37],t15);
t17=C_a_i_cons(&a,2,t7,t16);
t18=C_a_i_list(&a,1,t17);
t19=t1;{
C_word av2[2];
av2[0]=t19;
av2[1]=C_a_i_list(&a,3,lf[25],t18,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t19+1)))(2,av2);}}
else{
t16=C_a_i_cons(&a,2,t7,lf[37]);
t17=C_a_i_list(&a,1,t16);
t18=t1;{
C_word av2[2];
av2[0]=t18;
av2[1]=C_a_i_list(&a,3,lf[25],t17,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}}
else{
t13=C_a_i_cons(&a,2,t7,lf[37]);
t14=C_a_i_list(&a,1,t13);
t15=t1;{
C_word av2[2];
av2[0]=t15;
av2[1]=C_a_i_list(&a,3,lf[25],t14,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}}
else{
t10=C_i_cadr(t2);
t11=C_a_i_cons(&a,2,t7,t10);
t12=C_a_i_list(&a,1,t11);
t13=t1;{
C_word av2[2];
av2[0]=t13;
av2[1]=C_a_i_list(&a,3,lf[25],t12,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1703,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t7=C_u_i_car(((C_word*)t0)[2]);
/* lfa2.scm:317: walk */
t8=((C_word*)((C_word*)t0)[5])[1];
f_1174(t8,t6,t7,((C_word*)t0)[6],((C_word*)t0)[7]);}}

/* k1095 in for-each-loop166 in k1000 in extinguish! in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1097,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1087(t3,((C_word*)t0)[4],t2);}

/* k1475 in k1472 in g301 in k1461 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1477,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[21];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1472 in g301 in k1461 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1474(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1474,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1477,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[51]+1))){
/* lfa2.scm:282: extinguish! */
t4=((C_word*)((C_word*)t0)[3])[1];
f_998(t4,t3,((C_word*)t0)[4],lf[52]);}
else{
t4=C_i_cadr(((C_word*)t0)[5]);
t5=C_eqp(lf[53],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1492,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t2))){
t7=C_u_i_car(t2);
t8=C_eqp(lf[37],t7);
if(C_truep(t8)){
t9=C_i_cadr(((C_word*)t0)[6]);
t10=C_slot(t9,C_fix(1));
t11=t6;
f_1492(t11,C_eqp(lf[26],t10));}
else{
t9=t6;
f_1492(t9,C_SCHEME_FALSE);}}
else{
t7=t6;
f_1492(t7,C_SCHEME_FALSE);}}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1560,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t2))){
t7=C_u_i_car(t2);
t8=t6;
f_1560(t8,C_eqp(lf[25],t7));}
else{
t7=t6;
f_1560(t7,C_SCHEME_FALSE);}}}}

/* k740 in k737 in k734 */
static void C_ccall f_742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_742,2,av);}
a=C_alloc(2);
t2=C_mutate2((C_word*)lf[0]+1 /* (set! +constructor-map+ ...) */,lf[1]);
t3=C_mutate2((C_word*)lf[2]+1 /* (set! ##compiler#perform-secondary-flow-analysis ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_789,tmp=(C_word)a,a+=2,tmp));
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2005 in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_2007(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2007,2,av);}
a=C_alloc(3);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2018,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lfa2.scm:352: with-debugging-output */
t3=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[70];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g301 in k1461 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_1470(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_1470,3,t0,t1,t2);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1474,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_i_car(((C_word*)t0)[4]);
/* lfa2.scm:280: walk */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1174(t5,t3,t4,((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k1231 in k1228 in k1222 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1233,2,av);}
a=C_alloc(6);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1244,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=C_i_caddr(((C_word*)t0)[6]);
/* lfa2.scm:245: append */
t6=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k734 */
static void C_ccall f_736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_736,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_739,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1228 in k1222 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_1230(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_1230,2,t0,t1);}
a=C_alloc(14);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1233,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1256,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t6=C_i_cadr(((C_word*)t0)[6]);
/* lfa2.scm:242: append */
t7=*((C_word*)lf[24]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* lfa2.scm:248: walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1174(t4,t2,t3,((C_word*)t0)[7],((C_word*)t0)[5]);}}

/* k737 in k734 */
static void C_ccall f_739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_739,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_742,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k1261 in k1228 in k1222 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1263,2,av);}
t2=C_i_caddr(((C_word*)t0)[2]);
/* lfa2.scm:249: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1174(t3,((C_word*)t0)[4],t2,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k1330 in k1394 in k1312 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_1332(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_1332,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_i_car(t2);
t4=C_a_i_cons(&a,2,C_a_i_cons(&a,2,t3,((C_word*)t0)[3]),((C_word*)t0)[4]);
t5=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[3],t3),t4);
/* lfa2.scm:255: walk */
t6=((C_word*)((C_word*)t0)[5])[1];
f_1174(t6,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],t5);}
else{
t2=((C_word*)t0)[4];
/* lfa2.scm:255: walk */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1174(t3,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],t2);}}

/* k1409 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1411,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[43];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##compiler#perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(39,c,5)))){
C_save_and_reclaim((void *)f_789,4,av);}
a=C_alloc(39);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_890,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t19=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_919,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t20=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_925,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t21=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_986,tmp=(C_word)a,a+=2,tmp));
t22=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_998,a[2]=t13,a[3]=t11,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t23=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1174,a[2]=t17,a[3]=t9,a[4]=t15,tmp=(C_word)a,a+=5,tmp));
t24=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2007,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:350: walk */
t25=((C_word*)t17)[1];
f_1174(t25,t24,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* a2017 in k2005 in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_2018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2018,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2022,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:355: print */
t3=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[68];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_lfa2_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("lfa2_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_lfa2_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(1768))){
C_save(t1);
C_rereclaim2(1768*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,71);
lf[0]=C_h_intern(&lf[0],17,"+constructor-map+");
lf[1]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record1\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record2\376\003\000"
"\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record3\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000"
"\000\015C_a_i_record4\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record5\376\003\000\000\002\376\001\000\000\010\052struc"
"t\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record6\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_recor"
"d7\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record8\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000"
"\000\002\376B\000\000\014C_a_i_record\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\014C_a_i_string\376\003\000\000\002\376\001\000\000\006str"
"ing\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\012C_a_i_port\376\003\000\000\002\376\001\000\000\004port\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_vector1\376\003\000\000"
"\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_vector2\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a"
"_i_vector3\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_vector4\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000"
"\002\376\003\000\000\002\376B\000\000\015C_a_i_vector5\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_vector6\376\003\000\000\002\376\001\000\000"
"\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_vector7\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_ve"
"ctor8\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\010C_a_pair\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C"
"_a_i_bytevector\376\003\000\000\002\376\001\000\000\004blob\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\023C_a_i_make_locative\376\003\000\000\002\376\001\000\000\010loca"
"tive\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\014C_a_i_vector\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_list1\376"
"\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_list2\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_"
"list3\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_list4\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013"
"C_a_i_list5\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_list6\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000"
"\002\376B\000\000\013C_a_i_list7\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_list8\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000"
"\000\002\376\003\000\000\002\376B\000\000\012C_a_i_cons\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\014C_a_i_flonum\376\003\000\000\002\376\001\000\000\006flon"
"um\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_a_i_fix_to_flo\376\003\000\000\002\376\001\000\000\006flonum\376\377\016\376\377\016");
lf[2]=C_h_intern(&lf[2],40,"\010compilerperform-secondary-flow-analysis");
lf[3]=C_h_intern(&lf[3],12,"\010compilerget");
lf[4]=C_h_intern(&lf[4],8,"assigned");
lf[5]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\005quote\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\003\000\000\002\376\001\000\000\016\004coreprimitive\376\003\000\000\002\376\001\000\000\013\004corela"
"mbda\376\377\016");
lf[6]=C_h_intern(&lf[6],13,"\004corevariable");
lf[7]=C_h_intern(&lf[7],7,"\003sysget");
lf[8]=C_h_intern(&lf[8],21,"\010compileralways-bound");
lf[9]=C_h_intern(&lf[9],6,"global");
lf[10]=C_h_intern(&lf[10],24,"node-subexpressions-set!");
lf[11]=C_h_intern(&lf[11],20,"node-parameters-set!");
lf[12]=C_h_intern(&lf[12],15,"node-class-set!");
lf[13]=C_h_intern(&lf[13],14,"\004coreundefined");
lf[14]=C_h_intern(&lf[14],8,"for-each");
lf[15]=C_h_intern(&lf[15],13,"string-append");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000\0011");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\000\0012");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\0013");
lf[19]=C_h_intern(&lf[19],13,"\010compilerbomb");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\0005bad number of arguments to extinguished ##core#inline");
lf[21]=C_h_intern(&lf[21],1,"\052");
lf[22]=C_h_intern(&lf[22],2,"if");
lf[23]=C_h_intern(&lf[23],9,"\004corecond");
lf[24]=C_h_intern(&lf[24],6,"append");
lf[25]=C_h_intern(&lf[25],7,"boolean");
lf[26]=C_h_intern(&lf[26],5,"quote");
lf[27]=C_h_intern(&lf[27],6,"string");
lf[28]=C_h_intern(&lf[28],6,"symbol");
lf[29]=C_h_intern(&lf[29],6,"number");
lf[30]=C_h_intern(&lf[30],6,"fixnum");
lf[31]=C_h_intern(&lf[31],5,"float");
lf[32]=C_h_intern(&lf[32],4,"null");
lf[33]=C_h_intern(&lf[33],4,"list");
lf[34]=C_h_intern(&lf[34],4,"pair");
lf[35]=C_h_intern(&lf[35],3,"eof");
lf[36]=C_h_intern(&lf[36],6,"vector");
lf[37]=C_h_intern(&lf[37],6,"struct");
lf[38]=C_h_intern(&lf[38],4,"char");
lf[39]=C_h_intern(&lf[39],20,"\010compilerbig-fixnum\077");
lf[40]=C_h_intern(&lf[40],3,"let");
lf[41]=C_h_intern(&lf[41],11,"\004corelambda");
lf[42]=C_h_intern(&lf[42],18,"\004coredirect_lambda");
lf[43]=C_h_intern(&lf[43],9,"procedure");
lf[44]=C_h_intern(&lf[44],4,"set!");
lf[45]=C_h_intern(&lf[45],9,"\004coreset!");
lf[46]=C_h_intern(&lf[46],9,"undefined");
lf[47]=C_h_intern(&lf[47],14,"\004coreprimitive");
lf[48]=C_h_intern(&lf[48],11,"\004coreinline");
lf[49]=C_h_intern(&lf[49],20,"\004coreinline_allocate");
lf[50]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_i_check_closure\376\003\000\000\002\376\001\000\000\011procedure\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\017C_i_check_e"
"xact\376\003\000\000\002\376\001\000\000\006fixnum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_i_check_inexact\376\003\000\000\002\376\001\000\000\006flonum\376\377\016\376\003\000\000\002\376"
"\003\000\000\002\376B\000\000\020C_i_check_number\376\003\000\000\002\376\001\000\000\006fixnum\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006number\376\377\016\376\003\000\000"
"\002\376\003\000\000\002\376B\000\000\020C_i_check_string\376\003\000\000\002\376\001\000\000\006string\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\024C_i_check_bytevecto"
"r\376\003\000\000\002\376\001\000\000\004blob\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_i_check_symbol\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\003\000\000\002\376\003\000\000\002\376B"
"\000\000\016C_i_check_list\376\003\000\000\002\376\001\000\000\004null\376\003\000\000\002\376\001\000\000\004pair\376\003\000\000\002\376\001\000\000\004list\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\016C_i"
"_check_pair\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_i_check_locative\376\003\000\000\002\376\001\000\000\010locative\376"
"\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_i_check_boolean\376\003\000\000\002\376\001\000\000\007boolean\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_i_check_v"
"ector\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\023C_i_check_structure\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376"
"\003\000\000\002\376\003\000\000\002\376B\000\000\016C_i_check_char\376\003\000\000\002\376\001\000\000\004char\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\023C_i_check_closure_2\376"
"\003\000\000\002\376\001\000\000\011procedure\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_i_check_exact_2\376\003\000\000\002\376\001\000\000\006fixnum\376\377\016\376\003\000\000\002\376\003\000"
"\000\002\376B\000\000\023C_i_check_inexact_2\376\003\000\000\002\376\001\000\000\006flonum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_i_check_number_2\376\003"
"\000\000\002\376\001\000\000\006fixnum\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006number\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_i_check_string"
"_2\376\003\000\000\002\376\001\000\000\006string\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\026C_i_check_bytevector_2\376\003\000\000\002\376\001\000\000\004blob\376\377\016\376\003\000\000\002"
"\376\003\000\000\002\376B\000\000\022C_i_check_symbol_2\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_i_check_list_2\376\003"
"\000\000\002\376\001\000\000\004null\376\003\000\000\002\376\001\000\000\004pair\376\003\000\000\002\376\001\000\000\004list\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_i_check_pair_2\376\003\000\000\002\376"
"\001\000\000\004pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\024C_i_check_locative_2\376\003\000\000\002\376\001\000\000\010locative\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000"
"\000\023C_i_check_boolean_2\376\003\000\000\002\376\001\000\000\007boolean\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_i_check_vector_2\376\003\000\000\002\376"
"\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\025C_i_check_structure_2\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002"
"\376B\000\000\020C_i_check_char_2\376\003\000\000\002\376\001\000\000\004char\376\377\016\376\377\016");
lf[51]=C_h_intern(&lf[51],6,"unsafe");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_noop");
lf[53]=C_h_intern(&lf[53],8,"\052struct\052");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_noop");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_noop");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_noop");
lf[57]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\014C_i_closurep\376\003\000\000\002\376\001\000\000\011procedure\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\011C_fixnump\376\003\000\000\002\376\001"
"\000\000\006fixnum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_i_flonump\376\003\000\000\002\376\001\000\000\006flonum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_i_numb"
"erp\376\003\000\000\002\376\001\000\000\006number\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\011C_stringp\376\003\000\000\002\376\001\000\000\006string\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015"
"C_bytevectorp\376\003\000\000\002\376\001\000\000\004blob\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_i_symbolp\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\003\000\000\002"
"\376\003\000\000\002\376B\000\000\011C_i_listp\376\003\000\000\002\376\001\000\000\004list\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\011C_i_pairp\376\003\000\000\002\376\001\000\000\004pair\376\377\016\376\003\000"
"\000\002\376\003\000\000\002\376B\000\000\013C_locativep\376\003\000\000\002\376\001\000\000\010locative\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\012C_booleanp\376\003\000\000\002\376\001\000\000\007b"
"oolean\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_i_vectorp\376\003\000\000\002\376\001\000\000\006vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\014C_structure"
"p\376\003\000\000\002\376\001\000\000\006struct\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\016C_i_structurep\376\003\000\000\002\376\001\000\000\010\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002"
"\376B\000\000\007C_charp\376\003\000\000\002\376\001\000\000\004char\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\011C_i_portp\376\003\000\000\002\376\001\000\000\004port\376\377\016\376\003\000\000\002\376\003\000\000\002"
"\376B\000\000\011C_i_nullp\376\003\000\000\002\376\001\000\000\004null\376\377\016\376\377\016");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_true");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_true");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_true");
lf[61]=C_h_intern(&lf[61],19,"\003sysstandard-output");
lf[62]=C_h_intern(&lf[62],6,"printf");
lf[63]=C_h_intern(&lf[63],16,"\003syswrite-char-0");
lf[64]=C_h_intern(&lf[64],9,"\003sysprint");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\002:\011");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[67]=C_h_intern(&lf[67],5,"print");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\027eliminated type checks:");
lf[69]=C_h_intern(&lf[69],30,"\010compilerwith-debugging-output");
lf[70]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001x\376\003\000\000\002\376\001\000\000\001o\376\377\016");
C_register_lf2(lf,71,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_736,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k1704 in k1701 in g322 in k1461 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1706,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[25];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1701 in g322 in k1461 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1703(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1703,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1706,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_i_cadr(((C_word*)t0)[3]);
t5=C_eqp(lf[53],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1715,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t2))){
t7=C_u_i_car(t2);
t8=C_eqp(lf[37],t7);
if(C_truep(t8)){
t9=C_i_cadr(((C_word*)t0)[4]);
t10=C_slot(t9,C_fix(1));
t11=t6;
f_1715(t11,C_eqp(lf[26],t10));}
else{
t9=t6;
f_1715(t9,C_SCHEME_FALSE);}}
else{
t7=t6;
f_1715(t7,C_SCHEME_FALSE);}}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1783,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t2))){
t7=C_u_i_car(t2);
t8=t6;
f_1783(t8,C_eqp(lf[25],t7));}
else{
t7=t6;
f_1783(t7,C_SCHEME_FALSE);}}}

/* g384 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_1933(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1933,3,t0,t1,t2);}
/* lfa2.scm:347: g399 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1174(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* drop! in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_986(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_986,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_990,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:194: node-class-set! */
t4=*((C_word*)lf[12]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[13];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1846 in g363 in k1461 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_1848(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,1)))){
C_save_and_reclaim_args((void *)trf_1848,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_i_car(t2);
t4=C_i_symbolp(t3);
t5=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t5;
av2[1]=(C_truep(t4)?C_a_i_list(&a,2,lf[37],t3):lf[37]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_i_cadr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g273 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_1453(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1453,3,t0,t1,t2);}
/* lfa2.scm:277: g288 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1174(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k1713 in k1701 in g322 in k1461 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_1715(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1715,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_slot(t2,C_fix(2));
t4=C_i_car(t3);
if(C_truep(C_i_symbolp(t4))){
t5=C_i_cadr(((C_word*)t0)[3]);
t6=C_eqp(t4,t5);
if(C_truep(t6)){
/* lfa2.scm:327: extinguish! */
t7=((C_word*)((C_word*)t0)[4])[1];
f_998(t7,((C_word*)t0)[5],((C_word*)t0)[6],lf[58]);}
else{
t7=((C_word*)t0)[7];{
C_word av2[2];
av2[0]=t7;
av2[1]=lf[25];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t5=((C_word*)t0)[7];{
C_word av2[2];
av2[0]=t5;
av2[1]=lf[25];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[7];{
C_word av2[2];
av2[0]=t2;
av2[1]=lf[25];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* droppable? in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_925(C_word t0,C_word t1,C_word t2){
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
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_925,3,t0,t1,t2);}
a=C_alloc(4);
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=C_u_i_memq(t4,lf[5]);
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=t2;
t7=C_slot(t6,C_fix(1));
t8=C_eqp(lf[6],t7);
if(C_truep(t8)){
t9=t2;
t10=C_slot(t9,C_fix(2));
t11=C_i_car(t10);
t12=t11;
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_966,a[2]=t1,a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:190: get */
t14=*((C_word*)lf[3]+1);{
C_word av2[5];
av2[0]=t14;
av2[1]=t13;
av2[2]=((C_word*)t0)[2];
av2[3]=t12;
av2[4]=lf[9];
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}
else{
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}}

/* assigned? in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_919(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_919,3,t0,t1,t2);}
/* lfa2.scm:183: get */
t3=*((C_word*)lf[3]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=lf[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* for-each-loop383 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_1945(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1945,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1955,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* lfa2.scm:347: g384 */
t5=((C_word*)t0)[3];
f_1933(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1425 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1427,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[46];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1941 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1943,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[21];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1000 in extinguish! in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1002(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_1002,2,av);}
a=C_alloc(20);
t2=((C_word*)t0)[2];
t3=C_slot(t2,C_fix(3));
t4=C_SCHEME_TRUE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1011,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(t3,lf[14]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1028,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1087,a[2]=t10,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_1087(t12,t8,t3);}

/* k2020 in a2017 in k2005 in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_2022(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2022,2,av);}
a=C_alloc(5);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_i_check_list_2(t2,lf[14]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2056,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_2056(t7,((C_word*)t0)[3],t2);}

/* k1312 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1314,2,av);}
a=C_alloc(11);
t2=t1;
t3=C_i_cadr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1396,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t4,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* lfa2.scm:256: assigned? */
t6=((C_word*)((C_word*)t0)[9])[1];
f_919(t6,t5,((C_word*)t0)[4]);}

/* k1953 in for-each-loop383 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1955,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1945(t3,((C_word*)t0)[4],t2);}

/* report in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_890(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,1)))){
C_save_and_reclaim_args((void *)trf_890,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_assoc(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t3)){
t4=t1;
t5=C_i_cdr(t3);
t6=C_a_i_plus(&a,2,t5,C_fix(1));
t7=t4;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_i_set_cdr(t3,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t4=C_a_i_cons(&a,2,C_a_i_cons(&a,2,t2,C_fix(1)),((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t4);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k1222 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1224,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1230,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_car(t2);
t5=t3;
f_1230(t5,C_eqp(lf[25],t4));}
else{
t4=t3;
f_1230(t4,C_SCHEME_FALSE);}}

/* for-each-loop409 in k2020 in a2017 in k2005 in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_2056(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_2056,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2066,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=*((C_word*)lf[61]+1);
t8=*((C_word*)lf[61]+1);
t9=C_i_check_port_2(*((C_word*)lf[61]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[62]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2030,a[2]=t5,a[3]=t7,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:357: ##sys#print */
t11=*((C_word*)lf[64]+1);{
C_word av2[5];
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[66];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[61]+1);
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* for-each-loop272 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_1911(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1911,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1921,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* lfa2.scm:277: g273 */
t5=((C_word*)t0)[3];
f_1453(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2064 in for-each-loop409 in k2020 in a2017 in k2005 in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_2066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2066,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2056(t3,((C_word*)t0)[4],t2);}

/* k2037 in k2034 in k2031 in k2028 in for-each-loop409 in k2020 in a2017 in k2005 in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_2039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2039,2,av);}
/* lfa2.scm:357: ##sys#write-char-0 */
t2=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2034 in k2031 in k2028 in for-each-loop409 in k2020 in a2017 in k2005 in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_2036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2036,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2039,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* lfa2.scm:357: ##sys#print */
t4=*((C_word*)lf[64]+1);{
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
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k1016 in g167 in k1000 in extinguish! in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1018,2,av);}
if(C_truep(t1)){
/* lfa2.scm:205: drop! */
f_986(((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g167 in k1000 in extinguish! in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_1011(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1011,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1018,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:204: droppable? */
t4=((C_word*)((C_word*)t0)[4])[1];
f_925(t4,t3,t2);}

/* k2031 in k2028 in for-each-loop409 in k2020 in a2017 in k2005 in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_2033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2033,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:357: ##sys#print */
t3=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[65];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2028 in for-each-loop409 in k2020 in a2017 in k2005 in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_2030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2030,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2033,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* lfa2.scm:357: ##sys#print */
t4=*((C_word*)lf[64]+1);{
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
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k1026 in k1000 in extinguish! in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_ccall f_1028(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1028,2,av);}
a=C_alloc(8);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
/* lfa2.scm:209: drop! */
f_986(((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1045,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[5];
t4=C_slot(t3,C_fix(3));
t5=C_i_length(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1052,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
switch(t5){
case C_fix(1):
/* lfa2.scm:213: string-append */
t7=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[16];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}
case C_fix(2):
/* lfa2.scm:213: string-append */
t7=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[17];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}
case C_fix(3):
/* lfa2.scm:213: string-append */
t7=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[18];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}
default:
/* lfa2.scm:219: bomb */
t7=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[20];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}}

/* g363 in k1461 in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_1838(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1838,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_pairp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_u_i_car(((C_word*)t0)[2]):C_SCHEME_FALSE);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1848,a[2]=t5,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=C_i_cadr(t2);
t8=C_eqp(lf[53],t7);
if(C_truep(t8)){
t9=C_slot(t5,C_fix(1));
t10=t6;
f_1848(t10,C_eqp(lf[26],t9));}
else{
t9=t6;
f_1848(t9,C_SCHEME_FALSE);}}
else{
t7=t6;
f_1848(t7,C_SCHEME_FALSE);}}

/* loop in walk in perform-secondary-flow-analysis in k740 in k737 in k734 */
static void C_fcall f_1138(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1138,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[21];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1148,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_cdar(t2);
t5=C_eqp(((C_word*)t0)[3],t4);
if(C_truep(t5)){
t6=t2;
t7=C_u_i_car(t6);
t8=C_u_i_car(t7);
t9=t3;
f_1148(t9,C_i_assq(t8,((C_word*)t0)[4]));}
else{
t6=t3;
f_1148(t6,C_SCHEME_FALSE);}}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[68] = {
{"f_1560:lfa2_2escm",(void*)f_1560},
{"f_1148:lfa2_2escm",(void*)f_1148},
{"f_811:lfa2_2escm",(void*)f_811},
{"f_1087:lfa2_2escm",(void*)f_1087},
{"f_990:lfa2_2escm",(void*)f_990},
{"f_998:lfa2_2escm",(void*)f_998},
{"f_993:lfa2_2escm",(void*)f_993},
{"f_1396:lfa2_2escm",(void*)f_1396},
{"f_966:lfa2_2escm",(void*)f_966},
{"f_1244:lfa2_2escm",(void*)f_1244},
{"f_1256:lfa2_2escm",(void*)f_1256},
{"f_1492:lfa2_2escm",(void*)f_1492},
{"f_1384:lfa2_2escm",(void*)f_1384},
{"f_1174:lfa2_2escm",(void*)f_1174},
{"f_1052:lfa2_2escm",(void*)f_1052},
{"f_1783:lfa2_2escm",(void*)f_1783},
{"f_1045:lfa2_2escm",(void*)f_1045},
{"f_1463:lfa2_2escm",(void*)f_1463},
{"f_1921:lfa2_2escm",(void*)f_1921},
{"f_1367:lfa2_2escm",(void*)f_1367},
{"f_1608:lfa2_2escm",(void*)f_1608},
{"f_1097:lfa2_2escm",(void*)f_1097},
{"f_1477:lfa2_2escm",(void*)f_1477},
{"f_1474:lfa2_2escm",(void*)f_1474},
{"f_742:lfa2_2escm",(void*)f_742},
{"f_2007:lfa2_2escm",(void*)f_2007},
{"f_1470:lfa2_2escm",(void*)f_1470},
{"f_1233:lfa2_2escm",(void*)f_1233},
{"f_736:lfa2_2escm",(void*)f_736},
{"f_1230:lfa2_2escm",(void*)f_1230},
{"f_739:lfa2_2escm",(void*)f_739},
{"f_1263:lfa2_2escm",(void*)f_1263},
{"f_1332:lfa2_2escm",(void*)f_1332},
{"f_1411:lfa2_2escm",(void*)f_1411},
{"f_789:lfa2_2escm",(void*)f_789},
{"f_2018:lfa2_2escm",(void*)f_2018},
{"toplevel:lfa2_2escm",(void*)C_lfa2_toplevel},
{"f_1706:lfa2_2escm",(void*)f_1706},
{"f_1703:lfa2_2escm",(void*)f_1703},
{"f_1933:lfa2_2escm",(void*)f_1933},
{"f_986:lfa2_2escm",(void*)f_986},
{"f_1848:lfa2_2escm",(void*)f_1848},
{"f_1453:lfa2_2escm",(void*)f_1453},
{"f_1715:lfa2_2escm",(void*)f_1715},
{"f_925:lfa2_2escm",(void*)f_925},
{"f_919:lfa2_2escm",(void*)f_919},
{"f_1945:lfa2_2escm",(void*)f_1945},
{"f_1427:lfa2_2escm",(void*)f_1427},
{"f_1943:lfa2_2escm",(void*)f_1943},
{"f_1002:lfa2_2escm",(void*)f_1002},
{"f_2022:lfa2_2escm",(void*)f_2022},
{"f_1314:lfa2_2escm",(void*)f_1314},
{"f_1955:lfa2_2escm",(void*)f_1955},
{"f_890:lfa2_2escm",(void*)f_890},
{"f_1224:lfa2_2escm",(void*)f_1224},
{"f_2056:lfa2_2escm",(void*)f_2056},
{"f_1911:lfa2_2escm",(void*)f_1911},
{"f_2066:lfa2_2escm",(void*)f_2066},
{"f_2039:lfa2_2escm",(void*)f_2039},
{"f_2036:lfa2_2escm",(void*)f_2036},
{"f_1018:lfa2_2escm",(void*)f_1018},
{"f_1011:lfa2_2escm",(void*)f_1011},
{"f_2033:lfa2_2escm",(void*)f_2033},
{"f_2030:lfa2_2escm",(void*)f_2030},
{"f_1028:lfa2_2escm",(void*)f_1028},
{"f_1838:lfa2_2escm",(void*)f_1838},
{"f_1138:lfa2_2escm",(void*)f_1138},
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
S|applied compiler syntax:
S|  for-each		4
S|  printf		2
o|eliminated procedure checks: 45 
o|specializations:
o|  6 (first pair)
o|  3 (car pair)
o|  13 (eqv? * (not float))
o|  6 (cdr pair)
o|  1 (caar (pair pair *))
o|  3 (eqv? (not float) *)
o|  1 (memq * list)
o|  1 (make-string fixnum char)
o|  2 (##sys#check-output-port * * *)
(o e)|safe calls: 175 
(o e)|assignments to immediate values: 1 
o|safe globals: (##compiler#perform-secondary-flow-analysis +constructor-map+ +predicate-map+ +type-check-map+ dd d lfa2-debug d-depth) 
o|Removed `not' forms: 2 
o|removed side-effect free assignment to unused variable: lfa2-debug 
o|propagated global variable: out2832 ##sys#standard-output 
o|substituted constant variable: a755 
o|substituted constant variable: a756 
o|inlining procedure: k748 
o|substituted constant variable: d-depth 
o|substituted constant variable: d-depth 
o|substituted constant variable: a780 
o|substituted constant variable: d-depth 
o|propagated global variable: out2832 ##sys#standard-output 
o|inlining procedure: k748 
o|removed side-effect free assignment to unused variable: dd 
o|inlining procedure: k895 
o|contracted procedure: "(lfa2.scm:155) g125126" 
o|inlining procedure: k895 
o|substituted constant variable: a936 
o|inlining procedure: k937 
o|inlining procedure: k937 
o|inlining procedure: k952 
o|inlining procedure: k952 
o|contracted procedure: "(lfa2.scm:191) g147148" 
o|contracted procedure: "(lfa2.scm:189) g141142" 
o|contracted procedure: "(lfa2.scm:188) g137138" 
o|contracted procedure: "(lfa2.scm:186) g133134" 
o|inlining procedure: k1013 
o|inlining procedure: k1013 
o|inlining procedure: k1029 
o|inlining procedure: k1029 
o|inlining procedure: k1050 
o|inlining procedure: k1050 
o|inlining procedure: k1062 
o|inlining procedure: k1062 
o|substituted constant variable: a1072 
o|substituted constant variable: a1074 
o|substituted constant variable: a1076 
o|contracted procedure: "(lfa2.scm:215) g188189" 
o|inlining procedure: k1089 
o|inlining procedure: k1089 
o|contracted procedure: "(lfa2.scm:200) g161162" 
o|contracted procedure: "(lfa2.scm:199) g156157" 
o|inlining procedure: k1200 
o|contracted procedure: "(lfa2.scm:237) vartype107" 
o|inlining procedure: k1128 
o|inlining procedure: k1128 
o|inlining procedure: k1140 
o|inlining procedure: k1140 
o|inlining procedure: k1200 
o|inlining procedure: k1225 
o|inlining procedure: k1225 
o|inlining procedure: k1287 
o|contracted procedure: "(lfa2.scm:250) constant-result101" 
o|inlining procedure: k794 
o|inlining procedure: k794 
o|inlining procedure: k806 
o|inlining procedure: k806 
o|inlining procedure: k818 
o|inlining procedure: k818 
o|inlining procedure: k830 
o|inlining procedure: k830 
o|inlining procedure: k842 
o|inlining procedure: k842 
o|inlining procedure: k854 
o|inlining procedure: k854 
o|inlining procedure: k873 
o|inlining procedure: k873 
o|contracted procedure: k879 
o|inlining procedure: k1287 
o|inlining procedure: k1327 
o|contracted procedure: "(lfa2.scm:262) g256257" 
o|inlining procedure: k1327 
o|contracted procedure: k1358 
o|inlining procedure: k1355 
o|inlining procedure: k1355 
o|contracted procedure: "(lfa2.scm:261) g252253" 
o|contracted procedure: "(lfa2.scm:259) g248249" 
o|inlining procedure: k1400 
o|inlining procedure: k1400 
o|inlining procedure: k1432 
o|inlining procedure: k1432 
o|inlining procedure: k1444 
o|inlining procedure: k1475 
o|inlining procedure: k1475 
o|inlining procedure: k1487 
o|contracted procedure: "(lfa2.scm:288) g315316" 
o|inlining procedure: k1487 
o|inlining procedure: k1531 
o|contracted procedure: "(lfa2.scm:287) g311312" 
o|inlining procedure: k1531 
o|inlining procedure: k1555 
o|inlining procedure: k1555 
o|inlining procedure: k1613 
o|inlining procedure: k1635 
o|inlining procedure: k1650 
o|inlining procedure: k1650 
o|contracted procedure: "(lfa2.scm:309) g339340" 
o|contracted procedure: "(lfa2.scm:307) g335336" 
o|inlining procedure: k1635 
o|contracted procedure: "(lfa2.scm:304) g332333" 
o|inlining procedure: k1613 
o|inlining procedure: k1710 
o|contracted procedure: "(lfa2.scm:324) g356357" 
o|inlining procedure: k1710 
o|inlining procedure: k1754 
o|contracted procedure: "(lfa2.scm:322) g352353" 
o|inlining procedure: k1754 
o|inlining procedure: k1778 
o|inlining procedure: k1778 
o|contracted procedure: "(lfa2.scm:302) g326327" 
o|inlining procedure: k1605 
o|inlining procedure: k1605 
o|inlining procedure: k1843 
o|contracted procedure: "(lfa2.scm:341) g374375" 
o|inlining procedure: k1843 
o|inlining procedure: k1873 
o|contracted procedure: "(lfa2.scm:340) g370371" 
o|inlining procedure: k1873 
o|substituted constant variable: +predicate-map+ 
o|substituted constant variable: +type-check-map+ 
o|inlining procedure: k1913 
o|inlining procedure: k1913 
o|inlining procedure: k1444 
o|inlining procedure: k1947 
o|inlining procedure: k1947 
o|substituted constant variable: a1971 
o|substituted constant variable: a1973 
o|substituted constant variable: a1975 
o|substituted constant variable: a1977 
o|substituted constant variable: a1982 
o|substituted constant variable: a1984 
o|substituted constant variable: a1989 
o|substituted constant variable: a1991 
o|substituted constant variable: a1993 
o|substituted constant variable: a1995 
o|substituted constant variable: a2000 
o|substituted constant variable: a2002 
o|substituted constant variable: a2004 
o|contracted procedure: "(lfa2.scm:234) g224225" 
o|contracted procedure: "(lfa2.scm:233) g221222" 
o|contracted procedure: "(lfa2.scm:232) g218219" 
o|inlining procedure: k2008 
o|inlining procedure: k2058 
o|contracted procedure: "(lfa2.scm:356) g410417" 
o|propagated global variable: out420424 ##sys#standard-output 
o|substituted constant variable: a2026 
o|substituted constant variable: a2027 
o|propagated global variable: out420424 ##sys#standard-output 
o|inlining procedure: k2058 
o|inlining procedure: k2008 
o|replaced variables: 292 
o|removed binding forms: 84 
o|removed side-effect free assignment to unused variable: d-depth 
o|removed side-effect free assignment to unused variable: d 
o|removed side-effect free assignment to unused variable: +type-check-map+ 
o|removed side-effect free assignment to unused variable: +predicate-map+ 
o|substituted constant variable: mark150 
o|substituted constant variable: r10512090 
o|substituted constant variable: r10512090 
o|inlining procedure: k1050 
o|inlining procedure: k1050 
o|substituted constant variable: r10632094 
o|substituted constant variable: r11412101 
o|substituted constant variable: r7952107 
o|substituted constant variable: r8072109 
o|substituted constant variable: r8192111 
o|substituted constant variable: r8312113 
o|substituted constant variable: r8432115 
o|substituted constant variable: r8552117 
o|substituted constant variable: r8742119 
o|substituted constant variable: r8742120 
o|substituted constant variable: r13562126 
o|substituted constant variable: r14012128 
o|substituted constant variable: r14332130 
o|inlining procedure: k1475 
o|inlining procedure: k1475 
o|substituted constant variable: r15322140 
o|inlining procedure: k1475 
o|inlining procedure: k1475 
o|inlining procedure: k1635 
o|substituted constant variable: r16512147 
o|inlining procedure: k1635 
o|substituted constant variable: r16142150 
o|inlining procedure: k1704 
o|inlining procedure: k1704 
o|substituted constant variable: r17552154 
o|inlining procedure: k1704 
o|inlining procedure: k1704 
o|substituted constant variable: r18742162 
o|substituted constant variable: r14452165 
o|propagated global variable: out420424 ##sys#standard-output 
o|replaced variables: 13 
o|removed binding forms: 277 
o|inlining procedure: k1499 
o|substituted constant variable: r16362186 
o|substituted constant variable: r16362188 
o|substituted constant variable: r161421502191 
o|substituted constant variable: r161421502193 
o|substituted constant variable: r161421502195 
o|substituted constant variable: r161421502197 
o|replaced variables: 30 
o|removed binding forms: 51 
o|substituted constant variable: r10512172 
o|substituted constant variable: r10512174 
o|substituted constant variable: r15002210 
o|inlining procedure: k1722 
o|removed binding forms: 39 
o|removed conditional forms: 1 
o|substituted constant variable: r17232222 
o|removed binding forms: 4 
o|removed conditional forms: 1 
o|removed binding forms: 1 
o|simplifications: ((if . 9) (##core#call . 172)) 
o|  call simplifications:
o|    car
o|    ##sys#cons	3
o|    cadr	6
o|    member	2
o|    memq	2
o|    string?
o|    symbol?	5
o|    fixnum?
o|    flonum?
o|    boolean?
o|    list?
o|    eof-object?
o|    vector?
o|    ##sys#immediate?
o|    ##sys#generic-structure?
o|    char?
o|    ##sys#list	5
o|    second	12
o|    third	3
o|    null?	2
o|    cdar
o|    assq	2
o|    ##sys#check-list	4
o|    pair?	12
o|    length
o|    list
o|    eq?	35
o|    ##sys#slot	31
o|    first	19
o|    not	2
o|    assoc	4
o|    alist-cons	4
o|    cdr	3
o|    add1
o|    set-cdr!
o|contracted procedure: k892 
o|contracted procedure: k908 
o|contracted procedure: k904 
o|contracted procedure: k915 
o|contracted procedure: k933 
o|contracted procedure: k982 
o|contracted procedure: k943 
o|contracted procedure: k973 
o|contracted procedure: k946 
o|contracted procedure: k949 
o|contracted procedure: k1008 
o|contracted procedure: k1023 
o|contracted procedure: k1039 
o|contracted procedure: k1083 
o|contracted procedure: k1047 
o|contracted procedure: k1053 
o|contracted procedure: k1059 
o|contracted procedure: k1065 
o|contracted procedure: k1092 
o|contracted procedure: k1102 
o|contracted procedure: k1106 
o|contracted procedure: k1119 
o|contracted procedure: k1110 
o|contracted procedure: k1181 
o|contracted procedure: k1189 
o|contracted procedure: k1197 
o|contracted procedure: k1203 
o|contracted procedure: k1210 
o|contracted procedure: k1125 
o|contracted procedure: k1143 
o|contracted procedure: k1170 
o|contracted procedure: k1160 
o|contracted procedure: k1216 
o|contracted procedure: k1219 
o|contracted procedure: k1238 
o|contracted procedure: k1246 
o|contracted procedure: k1250 
o|contracted procedure: k1258 
o|contracted procedure: k1268 
o|contracted procedure: k1272 
o|contracted procedure: k1275 
o|contracted procedure: k1284 
o|contracted procedure: k1290 
o|contracted procedure: k1297 
o|contracted procedure: k797 
o|contracted procedure: k803 
o|contracted procedure: k815 
o|contracted procedure: k821 
o|contracted procedure: k827 
o|contracted procedure: k833 
o|contracted procedure: k839 
o|contracted procedure: k845 
o|contracted procedure: k851 
o|contracted procedure: k857 
o|contracted procedure: k886 
o|contracted procedure: k863 
o|contracted procedure: k870 
o|contracted procedure: k876 
o|contracted procedure: k1303 
o|contracted procedure: k1306 
o|contracted procedure: k1309 
o|contracted procedure: k1319 
o|contracted procedure: k1323 
o|contracted procedure: k1349 
o|contracted procedure: k1333 
o|contracted procedure: k1340 
o|contracted procedure: k1327 
o|contracted procedure: k1391 
o|contracted procedure: k1352 
o|contracted procedure: k1378 
o|contracted procedure: k1369 
o|contracted procedure: k1403 
o|contracted procedure: k1406 
o|contracted procedure: k1413 
o|contracted procedure: k1419 
o|contracted procedure: k1422 
o|contracted procedure: k1429 
o|contracted procedure: k1435 
o|contracted procedure: k1441 
o|contracted procedure: k1447 
o|contracted procedure: k1450 
o|contracted procedure: k1458 
o|contracted procedure: k1907 
o|contracted procedure: k1464 
o|contracted procedure: k1592 
o|contracted procedure: k1484 
o|contracted procedure: k1525 
o|contracted procedure: k1521 
o|contracted procedure: k1493 
o|contracted procedure: k1505 
o|contracted procedure: k1512 
o|contracted procedure: k1499 
o|contracted procedure: k1528 
o|contracted procedure: k1534 
o|contracted procedure: k1550 
o|contracted procedure: k1546 
o|contracted procedure: k1564 
o|contracted procedure: k1575 
o|contracted procedure: k1583 
o|contracted procedure: k1596 
o|contracted procedure: k1602 
o|contracted procedure: k1610 
o|contracted procedure: k1826 
o|contracted procedure: k1616 
o|contracted procedure: k1623 
o|contracted procedure: k1698 
o|contracted procedure: k1631 
o|contracted procedure: k1689 
o|contracted procedure: k1638 
o|contracted procedure: k1682 
o|contracted procedure: k1678 
o|contracted procedure: k1644 
o|contracted procedure: k1669 
o|contracted procedure: k1665 
o|contracted procedure: k1647 
o|contracted procedure: k1653 
o|inlining procedure: k1635 
o|inlining procedure: k1635 
o|contracted procedure: k1815 
o|contracted procedure: k1707 
o|contracted procedure: k1748 
o|contracted procedure: k1744 
o|contracted procedure: k1716 
o|contracted procedure: k1728 
o|contracted procedure: k1735 
o|contracted procedure: k1722 
o|contracted procedure: k1751 
o|contracted procedure: k1757 
o|contracted procedure: k1773 
o|contracted procedure: k1769 
o|contracted procedure: k1787 
o|contracted procedure: k1798 
o|contracted procedure: k1806 
o|contracted procedure: k1832 
o|contracted procedure: k1895 
o|contracted procedure: k1840 
o|contracted procedure: k1867 
o|contracted procedure: k1849 
o|contracted procedure: k1855 
o|contracted procedure: k1892 
o|contracted procedure: k1876 
o|contracted procedure: k1888 
o|contracted procedure: k1916 
o|contracted procedure: k1926 
o|contracted procedure: k1930 
o|contracted procedure: k1938 
o|contracted procedure: k1950 
o|contracted procedure: k1960 
o|contracted procedure: k1964 
o|contracted procedure: k2011 
o|contracted procedure: k2049 
o|contracted procedure: k2061 
o|contracted procedure: k2071 
o|contracted procedure: k2075 
o|contracted procedure: k2046 
o|simplifications: ((let . 30)) 
o|removed binding forms: 153 
o|inlining procedure: k1627 
o|inlining procedure: k1627 
o|inlining procedure: k1627 
o|inlining procedure: k1627 
o|replaced variables: 36 
o|removed binding forms: 1 
o|replaced variables: 4 
o|removed binding forms: 15 
o|removed binding forms: 1 
o|customizable procedures: (for-each-loop409430 g384391 for-each-loop383401 g273280 for-each-loop272290 g363364 k1846 g322323 k1781 k1713 g301302 k1558 k1490 extinguish!106 assigned?103 k1330 k1228 walk108 k1146 loop202 report102 g167174 for-each-loop166177 droppable?104 drop!105) 
o|calls to known targets: 65 
o|identified direct recursive calls: f_1174 4 
o|fast box initializations: 11 
o|dropping unused closure argument: f_986 
*/
/* end of file */

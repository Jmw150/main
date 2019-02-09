/* Generated from chicken-profile.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: chicken-profile.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -output-file chicken-profile.c
   uses: library eval expand file posix internal data-structures
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_file_toplevel)
C_externimport void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[93];
static double C_possibly_force_alignment;


C_noret_decl(f_1250)
static void C_ccall f_1250(C_word c,C_word *av) C_noret;
C_noret_decl(f_1253)
static void C_ccall f_1253(C_word c,C_word *av) C_noret;
C_noret_decl(f_1256)
static void C_ccall f_1256(C_word c,C_word *av) C_noret;
C_noret_decl(f_1259)
static void C_ccall f_1259(C_word c,C_word *av) C_noret;
C_noret_decl(f_1262)
static void C_ccall f_1262(C_word c,C_word *av) C_noret;
C_noret_decl(f_1265)
static void C_ccall f_1265(C_word c,C_word *av) C_noret;
C_noret_decl(f_1268)
static void C_ccall f_1268(C_word c,C_word *av) C_noret;
C_noret_decl(f_1271)
static void C_ccall f_1271(C_word c,C_word *av) C_noret;
C_noret_decl(f_1381)
static void C_fcall f_1381(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1399)
static void C_ccall f_1399(C_word c,C_word *av) C_noret;
C_noret_decl(f_1891)
static void C_fcall f_1891(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1899)
static void C_fcall f_1899(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1906)
static void C_ccall f_1906(C_word c,C_word *av) C_noret;
C_noret_decl(f_1920)
static void C_ccall f_1920(C_word c,C_word *av) C_noret;
C_noret_decl(f_2558)
static void C_fcall f_2558(C_word t0) C_noret;
C_noret_decl(f_2562)
static void C_ccall f_2562(C_word c,C_word *av) C_noret;
C_noret_decl(f_2569)
static void C_ccall f_2569(C_word c,C_word *av) C_noret;
C_noret_decl(f_2605)
static void C_fcall f_2605(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2615)
static void C_fcall f_2615(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2622)
static void C_ccall f_2622(C_word c,C_word *av) C_noret;
C_noret_decl(f_2625)
static void C_ccall f_2625(C_word c,C_word *av) C_noret;
C_noret_decl(f_2638)
static void C_ccall f_2638(C_word c,C_word *av) C_noret;
C_noret_decl(f_2640)
static void C_ccall f_2640(C_word c,C_word *av) C_noret;
C_noret_decl(f_2645)
static void C_ccall f_2645(C_word c,C_word *av) C_noret;
C_noret_decl(f_2649)
static void C_ccall f_2649(C_word c,C_word *av) C_noret;
C_noret_decl(f_2655)
static void C_fcall f_2655(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2674)
static void C_fcall f_2674(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2678)
static void C_ccall f_2678(C_word c,C_word *av) C_noret;
C_noret_decl(f_2693)
static void C_ccall f_2693(C_word c,C_word *av) C_noret;
C_noret_decl(f_2696)
static void C_ccall f_2696(C_word c,C_word *av) C_noret;
C_noret_decl(f_2714)
static void C_ccall f_2714(C_word c,C_word *av) C_noret;
C_noret_decl(f_2721)
static void C_ccall f_2721(C_word c,C_word *av) C_noret;
C_noret_decl(f_2729)
static void C_ccall f_2729(C_word c,C_word *av) C_noret;
C_noret_decl(f_2736)
static void C_ccall f_2736(C_word c,C_word *av) C_noret;
C_noret_decl(f_2751)
static void C_ccall f_2751(C_word c,C_word *av) C_noret;
C_noret_decl(f_2787)
static void C_ccall f_2787(C_word c,C_word *av) C_noret;
C_noret_decl(f_2793)
static void C_fcall f_2793(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2818)
static void C_ccall f_2818(C_word c,C_word *av) C_noret;
C_noret_decl(f_2848)
static void C_ccall f_2848(C_word c,C_word *av) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872(C_word c,C_word *av) C_noret;
C_noret_decl(f_2896)
static void C_ccall f_2896(C_word c,C_word *av) C_noret;
C_noret_decl(f_2904)
static void C_ccall f_2904(C_word c,C_word *av) C_noret;
C_noret_decl(f_2908)
static void C_ccall f_2908(C_word c,C_word *av) C_noret;
C_noret_decl(f_2922)
static void C_fcall f_2922(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2937)
static void C_ccall f_2937(C_word c,C_word *av) C_noret;
C_noret_decl(f_2959)
static void C_ccall f_2959(C_word c,C_word *av) C_noret;
C_noret_decl(f_2963)
static void C_ccall f_2963(C_word c,C_word *av) C_noret;
C_noret_decl(f_2967)
static void C_ccall f_2967(C_word c,C_word *av) C_noret;
C_noret_decl(f_2983)
static void C_ccall f_2983(C_word c,C_word *av) C_noret;
C_noret_decl(f_2987)
static void C_ccall f_2987(C_word c,C_word *av) C_noret;
C_noret_decl(f_2990)
static void C_ccall f_2990(C_word c,C_word *av) C_noret;
C_noret_decl(f_2996)
static void C_ccall f_2996(C_word c,C_word *av) C_noret;
C_noret_decl(f_2999)
static void C_ccall f_2999(C_word c,C_word *av) C_noret;
C_noret_decl(f_3004)
static void C_ccall f_3004(C_word c,C_word *av) C_noret;
C_noret_decl(f_3013)
static void C_ccall f_3013(C_word c,C_word *av) C_noret;
C_noret_decl(f_3015)
static void C_fcall f_3015(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3025)
static void C_ccall f_3025(C_word c,C_word *av) C_noret;
C_noret_decl(f_3032)
static void C_ccall f_3032(C_word c,C_word *av) C_noret;
C_noret_decl(f_3053)
static void C_ccall f_3053(C_word c,C_word *av) C_noret;
C_noret_decl(f_3068)
static void C_ccall f_3068(C_word c,C_word *av) C_noret;
C_noret_decl(f_3070)
static void C_fcall f_3070(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3080)
static void C_fcall f_3080(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3131)
static void C_ccall f_3131(C_word c,C_word *av) C_noret;
C_noret_decl(f_3150)
static void C_ccall f_3150(C_word c,C_word *av) C_noret;
C_noret_decl(f_3197)
static void C_fcall f_3197(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3201)
static void C_ccall f_3201(C_word c,C_word *av) C_noret;
C_noret_decl(f_3208)
static void C_ccall f_3208(C_word c,C_word *av) C_noret;
C_noret_decl(f_3216)
static void C_ccall f_3216(C_word c,C_word *av) C_noret;
C_noret_decl(f_3220)
static void C_ccall f_3220(C_word c,C_word *av) C_noret;
C_noret_decl(f_3227)
static void C_ccall f_3227(C_word c,C_word *av) C_noret;
C_noret_decl(f_3231)
static void C_ccall f_3231(C_word c,C_word *av) C_noret;
C_noret_decl(f_3240)
static void C_ccall f_3240(C_word c,C_word *av) C_noret;
C_noret_decl(f_3247)
static void C_ccall f_3247(C_word c,C_word *av) C_noret;
C_noret_decl(f_3253)
static void C_ccall f_3253(C_word c,C_word *av) C_noret;
C_noret_decl(f_3256)
static void C_ccall f_3256(C_word c,C_word *av) C_noret;
C_noret_decl(f_3266)
static void C_ccall f_3266(C_word c,C_word *av) C_noret;
C_noret_decl(f_3269)
static void C_ccall f_3269(C_word c,C_word *av) C_noret;
C_noret_decl(f_3272)
static void C_fcall f_3272(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3297)
static void C_ccall f_3297(C_word c,C_word *av) C_noret;
C_noret_decl(f_3301)
static void C_ccall f_3301(C_word c,C_word *av) C_noret;
C_noret_decl(f_3305)
static void C_ccall f_3305(C_word c,C_word *av) C_noret;
C_noret_decl(f_3309)
static void C_ccall f_3309(C_word c,C_word *av) C_noret;
C_noret_decl(f_3313)
static void C_ccall f_3313(C_word c,C_word *av) C_noret;
C_noret_decl(f_3317)
static void C_ccall f_3317(C_word c,C_word *av) C_noret;
C_noret_decl(f_3323)
static void C_ccall f_3323(C_word c,C_word *av) C_noret;
C_noret_decl(f_3339)
static void C_ccall f_3339(C_word c,C_word *av) C_noret;
C_noret_decl(f_3345)
static void C_ccall f_3345(C_word c,C_word *av) C_noret;
C_noret_decl(f_3354)
static void C_ccall f_3354(C_word c,C_word *av) C_noret;
C_noret_decl(f_3363)
static void C_ccall f_3363(C_word c,C_word *av) C_noret;
C_noret_decl(f_3365)
static void C_ccall f_3365(C_word c,C_word *av) C_noret;
C_noret_decl(f_3373)
static void C_ccall f_3373(C_word c,C_word *av) C_noret;
C_noret_decl(f_3386)
static void C_ccall f_3386(C_word c,C_word *av) C_noret;
C_noret_decl(f_3388)
static void C_fcall f_3388(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3395)
static void C_fcall f_3395(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3421)
static void C_ccall f_3421(C_word c,C_word *av) C_noret;
C_noret_decl(f_3451)
static void C_ccall f_3451(C_word c,C_word *av) C_noret;
C_noret_decl(f_3454)
static void C_ccall f_3454(C_word c,C_word *av) C_noret;
C_noret_decl(f_3462)
static void C_fcall f_3462(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3472)
static void C_ccall f_3472(C_word c,C_word *av) C_noret;
C_noret_decl(f_3487)
static void C_ccall f_3487(C_word c,C_word *av) C_noret;
C_noret_decl(f_3495)
static void C_ccall f_3495(C_word c,C_word *av) C_noret;
C_noret_decl(f_3505)
static void C_fcall f_3505(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3527)
static void C_fcall f_3527(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3556)
static void C_ccall f_3556(C_word c,C_word *av) C_noret;
C_noret_decl(f_3567)
static void C_fcall f_3567(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3596)
static void C_ccall f_3596(C_word c,C_word *av) C_noret;
C_noret_decl(f_3615)
static void C_fcall f_3615(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3650)
static void C_ccall f_3650(C_word c,C_word *av) C_noret;
C_noret_decl(f_3658)
static void C_fcall f_3658(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3683)
static void C_ccall f_3683(C_word c,C_word *av) C_noret;
C_noret_decl(f_3695)
static void C_ccall f_3695(C_word c,C_word *av) C_noret;
C_noret_decl(f_3704)
static void C_ccall f_3704(C_word c,C_word *av) C_noret;
C_noret_decl(f_3708)
static void C_ccall f_3708(C_word c,C_word *av) C_noret;
C_noret_decl(f_3717)
static void C_fcall f_3717(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3735)
static void C_ccall f_3735(C_word c,C_word *av) C_noret;
C_noret_decl(f_3742)
static void C_fcall f_3742(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3751)
static void C_ccall f_3751(C_word c,C_word *av) C_noret;
C_noret_decl(f_3767)
static void C_ccall f_3767(C_word c,C_word *av) C_noret;
C_noret_decl(f_3769)
static void C_fcall f_3769(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3794)
static void C_ccall f_3794(C_word c,C_word *av) C_noret;
C_noret_decl(f_3803)
static void C_fcall f_3803(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3824)
static void C_ccall f_3824(C_word c,C_word *av) C_noret;
C_noret_decl(f_3832)
static void C_ccall f_3832(C_word c,C_word *av) C_noret;
C_noret_decl(f_3841)
static void C_ccall f_3841(C_word c,C_word *av) C_noret;
C_noret_decl(f_3850)
static void C_ccall f_3850(C_word c,C_word *av) C_noret;
C_noret_decl(f_3856)
static void C_ccall f_3856(C_word c,C_word *av) C_noret;
C_noret_decl(f_3860)
static void C_ccall f_3860(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(va4312)
static void C_fcall va4312(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1381)
static void C_ccall trf_1381(C_word c,C_word *av) C_noret;
static void C_ccall trf_1381(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1381(t0,t1,t2);}

C_noret_decl(trf_1891)
static void C_ccall trf_1891(C_word c,C_word *av) C_noret;
static void C_ccall trf_1891(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1891(t0,t1,t2);}

C_noret_decl(trf_1899)
static void C_ccall trf_1899(C_word c,C_word *av) C_noret;
static void C_ccall trf_1899(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1899(t0,t1,t2,t3);}

C_noret_decl(trf_2558)
static void C_ccall trf_2558(C_word c,C_word *av) C_noret;
static void C_ccall trf_2558(C_word c,C_word *av){
C_word t0=av[0];
f_2558(t0);}

C_noret_decl(trf_2605)
static void C_ccall trf_2605(C_word c,C_word *av) C_noret;
static void C_ccall trf_2605(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2605(t0,t1,t2);}

C_noret_decl(trf_2615)
static void C_ccall trf_2615(C_word c,C_word *av) C_noret;
static void C_ccall trf_2615(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2615(t0,t1);}

C_noret_decl(trf_2655)
static void C_ccall trf_2655(C_word c,C_word *av) C_noret;
static void C_ccall trf_2655(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2655(t0,t1);}

C_noret_decl(trf_2674)
static void C_ccall trf_2674(C_word c,C_word *av) C_noret;
static void C_ccall trf_2674(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2674(t0,t1);}

C_noret_decl(trf_2793)
static void C_ccall trf_2793(C_word c,C_word *av) C_noret;
static void C_ccall trf_2793(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2793(t0,t1);}

C_noret_decl(trf_2922)
static void C_ccall trf_2922(C_word c,C_word *av) C_noret;
static void C_ccall trf_2922(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2922(t0,t1,t2);}

C_noret_decl(trf_3015)
static void C_ccall trf_3015(C_word c,C_word *av) C_noret;
static void C_ccall trf_3015(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3015(t0,t1,t2);}

C_noret_decl(trf_3070)
static void C_ccall trf_3070(C_word c,C_word *av) C_noret;
static void C_ccall trf_3070(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3070(t0,t1,t2,t3);}

C_noret_decl(trf_3080)
static void C_ccall trf_3080(C_word c,C_word *av) C_noret;
static void C_ccall trf_3080(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3080(t0,t1);}

C_noret_decl(trf_3197)
static void C_ccall trf_3197(C_word c,C_word *av) C_noret;
static void C_ccall trf_3197(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3197(t0,t1,t2);}

C_noret_decl(trf_3272)
static void C_ccall trf_3272(C_word c,C_word *av) C_noret;
static void C_ccall trf_3272(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3272(t0,t1);}

C_noret_decl(trf_3388)
static void C_ccall trf_3388(C_word c,C_word *av) C_noret;
static void C_ccall trf_3388(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3388(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3395)
static void C_ccall trf_3395(C_word c,C_word *av) C_noret;
static void C_ccall trf_3395(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3395(t0,t1);}

C_noret_decl(trf_3462)
static void C_ccall trf_3462(C_word c,C_word *av) C_noret;
static void C_ccall trf_3462(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3462(t0,t1,t2);}

C_noret_decl(trf_3505)
static void C_ccall trf_3505(C_word c,C_word *av) C_noret;
static void C_ccall trf_3505(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3505(t0,t1,t2,t3);}

C_noret_decl(trf_3527)
static void C_ccall trf_3527(C_word c,C_word *av) C_noret;
static void C_ccall trf_3527(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3527(t0,t1,t2,t3);}

C_noret_decl(trf_3567)
static void C_ccall trf_3567(C_word c,C_word *av) C_noret;
static void C_ccall trf_3567(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3567(t0,t1,t2,t3);}

C_noret_decl(trf_3615)
static void C_ccall trf_3615(C_word c,C_word *av) C_noret;
static void C_ccall trf_3615(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3615(t0,t1,t2);}

C_noret_decl(trf_3658)
static void C_ccall trf_3658(C_word c,C_word *av) C_noret;
static void C_ccall trf_3658(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3658(t0,t1,t2);}

C_noret_decl(trf_3717)
static void C_ccall trf_3717(C_word c,C_word *av) C_noret;
static void C_ccall trf_3717(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3717(t0,t1,t2);}

C_noret_decl(trf_3742)
static void C_ccall trf_3742(C_word c,C_word *av) C_noret;
static void C_ccall trf_3742(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3742(t0,t1);}

C_noret_decl(trf_3769)
static void C_ccall trf_3769(C_word c,C_word *av) C_noret;
static void C_ccall trf_3769(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3769(t0,t1,t2);}

C_noret_decl(trf_3803)
static void C_ccall trf_3803(C_word c,C_word *av) C_noret;
static void C_ccall trf_3803(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3803(t0,t1,t2,t3);}

C_noret_decl(trva4312)
static void C_ccall trva4312(C_word c,C_word *av) C_noret;
static void C_ccall trva4312(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va4312(t0,t1);}

/* k1248 */
static void C_ccall f_1250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1250,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1253,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1251 in k1248 */
static void C_ccall f_1253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1253,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1256,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k1254 in k1251 in k1248 */
static void C_ccall f_1256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1256,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1259,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_1259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1259,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1262,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_1262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1262,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1265,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_1265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1265,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1268,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_1268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,7)))){
C_save_and_reclaim((void *)f_1268,2,av);}
a=C_alloc(11);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1271,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:29: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[91]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[91]+1);
av2[1]=t3;
av2[2]=lf[92];
av2[3]=lf[92];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=C_SCHEME_END_OF_LIST;
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_1271(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_1271,2,av);}
a=C_alloc(24);
t2=C_mutate(&lf[1] /* (set! main#take ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1381,tmp=(C_word)a,a+=2,tmp));
t3=lf[2] /* main#file */ =C_SCHEME_FALSE;;
t4=lf[3] /* main#no-unused */ =C_SCHEME_FALSE;;
t5=lf[4] /* main#seconds-digits */ =C_fix(3);;
t6=lf[5] /* main#average-digits */ =C_fix(3);;
t7=lf[6] /* main#percent-digits */ =C_fix(3);;
t8=lf[7] /* main#top */ =C_fix(0);;
t9=C_mutate(&lf[8] /* (set! main#print-usage ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2558,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[16] /* (set! main#sort-by-calls ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2818,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate(&lf[17] /* (set! main#sort-by-time ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2848,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate(&lf[18] /* (set! main#sort-by-avg ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2872,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate(&lf[19] /* (set! main#sort-by-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2896,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate(&lf[22] /* (set! main#sort-by ...) */,C_retrieve2(lf[17],C_text("main#sort-by-time")));
t15=C_mutate(&lf[23] /* (set! main#read-profile ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2983,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate(&lf[32] /* (set! main#format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3131,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate(&lf[35] /* (set! main#format-real ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3197,tmp=(C_word)a,a+=2,tmp));
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3850,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3860,a[2]=t18,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:262: chicken.process-context#command-line-arguments */
t20=C_fast_retrieve(lf[90]);{
C_word *av2=av;
av2[0]=t20;
av2[1]=t19;
((C_proc)(void*)(*((C_word*)t20+1)))(2,av2);}}

/* main#take in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_1381(C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_1381,3,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_fixnum_less_or_equal_p(t3,C_fix(0)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1399,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_fixnum_difference(t3,C_fix(1));
/* mini-srfi-1.scm:56: take */
t11=t6;
t12=t8;
t13=t9;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}

/* k1397 in main#take in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_1399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1399,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* foldr281 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_1891(C_word t0,C_word t1,C_word t2){
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
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_1891,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1899,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1920,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t2,C_fix(1));
t9=t6;
t10=t7;
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g286 in foldr281 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_1899(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1899,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1906,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:131: pred */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k1904 in g286 in foldr281 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_1906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1906,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1918 in foldr281 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_1920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1920,2,av);}
/* mini-srfi-1.scm:131: g286 */
t2=((C_word*)t0)[2];
f_1899(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* main#print-usage in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_2558(C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,0,2)))){
C_save_and_reclaim_args((void *)trf_2558,1,t1);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2562,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2569,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[11],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,C_retrieve2(lf[6],C_text("main#percent-digits")),t4);
t6=C_a_i_cons(&a,2,lf[12],t5);
t7=C_a_i_cons(&a,2,C_retrieve2(lf[5],C_text("main#average-digits")),t6);
t8=C_a_i_cons(&a,2,lf[13],t7);
t9=C_a_i_cons(&a,2,C_retrieve2(lf[4],C_text("main#seconds-digits")),t8);
t10=C_a_i_cons(&a,2,lf[14],t9);
/* chicken-profile.scm:29: ##sys#print-to-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word av2[3];
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t3;
av2[2]=t10;
tp(3,av2);}}

/* k2560 in main#print-usage in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2562,2,av);}
/* chicken-profile.scm:76: chicken.base#exit */
t2=C_fast_retrieve(lf[9]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(64);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k2567 in main#print-usage in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2569,2,av);}
/* chicken-profile.scm:55: scheme#display */
t2=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_2605(C_word t0,C_word t1,C_word t2){
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
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,0,2)))){
C_save_and_reclaim_args((void *)trf_2605,3,t0,t1,t2);}
a=C_alloc(24);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2615,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[2],C_text("main#file")))){
t4=t3;
f_2615(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2622,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:84: chicken.file#glob */
t5=C_fast_retrieve(lf[68]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[69];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
t3=C_i_car(t2);
t4=t3;
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2655,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t12=t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2674,a[2]=t4,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2696,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_truep(C_i_equalp(t4,lf[73]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[74]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[75]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
/* chicken-profile.scm:104: print-usage */
f_2558(t13);}
else{
if(C_truep(C_i_string_equal_p(t4,lf[76]))){
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2714,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2721,a[2]=t14,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:106: chicken.platform#chicken-version */
t16=C_fast_retrieve(lf[78]);{
C_word av2[2];
av2[0]=t16;
av2[1]=t15;
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[79]))){
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2729,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2736,a[2]=t14,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:109: chicken.platform#chicken-version */
t16=C_fast_retrieve(lf[78]);{
C_word av2[2];
av2[0]=t16;
av2[1]=t15;
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[80]))){
t14=lf[3] /* main#no-unused */ =C_SCHEME_TRUE;;
/* chicken-profile.scm:122: loop */
t18=t1;
t19=((C_word*)t7)[1];
t1=t18;
t2=t19;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[81]))){
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2751,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:112: next-number */
t15=t10;
f_2674(t15,t14);}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[82]))){
t14=C_mutate(&lf[22] /* (set! main#sort-by ...) */,C_retrieve2(lf[16],C_text("main#sort-by-calls")));
/* chicken-profile.scm:122: loop */
t18=t1;
t19=((C_word*)t7)[1];
t1=t18;
t2=t19;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[83]))){
t14=C_mutate(&lf[22] /* (set! main#sort-by ...) */,C_retrieve2(lf[17],C_text("main#sort-by-time")));
/* chicken-profile.scm:122: loop */
t18=t1;
t19=((C_word*)t7)[1];
t1=t18;
t2=t19;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[84]))){
t14=C_mutate(&lf[22] /* (set! main#sort-by ...) */,C_retrieve2(lf[18],C_text("main#sort-by-avg")));
/* chicken-profile.scm:122: loop */
t18=t1;
t19=((C_word*)t7)[1];
t1=t18;
t2=t19;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[85]))){
t14=C_mutate(&lf[22] /* (set! main#sort-by ...) */,C_retrieve2(lf[19],C_text("main#sort-by-name")));
/* chicken-profile.scm:122: loop */
t18=t1;
t19=((C_word*)t7)[1];
t1=t18;
t2=t19;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[86]))){
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2787,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:117: next-arg */
t15=((C_word*)t9)[1];
f_2655(t15,t14);}
else{
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2793,a[2]=t13,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t15=C_block_size(t4);
if(C_truep(C_fixnum_greaterp(t15,C_fix(1)))){
t16=C_i_string_ref(t4,C_fix(0));
t17=t14;
f_2793(t17,C_u_i_char_equalp(C_make_character(45),t16));}
else{
t16=t14;
f_2793(t16,C_SCHEME_FALSE);}}}}}}}}}}}}}

/* k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_2615(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_2615,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3253,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:205: chicken.base#print */
t4=*((C_word*)lf[51]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[63];
av2[3]=C_retrieve2(lf[2],C_text("main#file"));
av2[4]=lf[64];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2620 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2622,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2625,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t1))){
/* chicken-profile.scm:86: chicken.base#error */
t3=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[66];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2638,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2640,tmp=(C_word)a,a+=2,tmp);
/* chicken-profile.scm:87: chicken.sort#sort */
t5=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k2623 in k2620 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2625,2,av);}
t2=C_mutate(&lf[2] /* (set! main#file ...) */,t1);
t3=((C_word*)t0)[2];
f_2615(t3,t2);}

/* k2636 in k2620 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2638,2,av);}
t2=C_i_car(t1);
t3=C_mutate(&lf[2] /* (set! main#file ...) */,t2);
t4=((C_word*)t0)[2];
f_2615(t4,t3);}

/* a2639 in k2620 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2640(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2640,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2645,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:89: chicken.file.posix#file-modification-time */
t5=C_fast_retrieve(lf[67]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2643 in a2639 in k2620 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2645,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2649,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:90: chicken.file.posix#file-modification-time */
t4=C_fast_retrieve(lf[67]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2647 in k2643 in a2639 in k2620 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2649,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_integer_greaterp(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* next-arg in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_2655(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_2655,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
/* chicken-profile.scm:96: chicken.base#error */
t2=*((C_word*)lf[65]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[70];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* next-number in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_2674(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_2674,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2678,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2693,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:101: next-arg */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2655(t4,t3);}

/* k2676 in next-number in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2678,2,av);}
if(C_truep(t1)){
if(C_truep(C_i_greaterp(t1,C_fix(0)))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* chicken-profile.scm:102: chicken.base#error */
t2=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[71];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}
else{
/* chicken-profile.scm:102: chicken.base#error */
t2=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[71];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2691 in next-number in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2693,2,av);}
/* chicken-profile.scm:101: scheme#string->number */
t2=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k2694 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2696,2,av);}
/* chicken-profile.scm:122: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2605(t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k2712 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2714,2,av);}
/* chicken-profile.scm:107: chicken.base#exit */
t2=C_fast_retrieve(lf[9]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2719 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2721,2,av);}
/* chicken-profile.scm:106: chicken.base#print */
t2=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[77];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2727 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2729,2,av);}
/* chicken-profile.scm:110: chicken.base#exit */
t2=C_fast_retrieve(lf[9]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2734 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2736,2,av);}
/* chicken-profile.scm:109: chicken.base#print */
t2=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k2749 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2751,2,av);}
t2=C_mutate(&lf[7] /* (set! main#top ...) */,t1);
/* chicken-profile.scm:122: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2605(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k2785 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2787(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2787,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=t1;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2922,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_string_length(t3);
t6=C_eqp(t5,C_fix(3));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2959,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:159: arg-digit */
t8=t4;
f_2922(t8,t7,C_fix(0));}
else{
/* chicken-profile.scm:162: chicken.base#error */
t7=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t2;
av2[2]=lf[88];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k2791 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_2793(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_2793,2,t0,t1);}
if(C_truep(t1)){
/* chicken-profile.scm:119: chicken.base#error */
t2=*((C_word*)lf[65]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[89];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[2],C_text("main#file")))){
/* chicken-profile.scm:120: print-usage */
f_2558(((C_word*)t0)[2]);}
else{
t2=C_mutate(&lf[2] /* (set! main#file ...) */,((C_word*)t0)[3]);
/* chicken-profile.scm:122: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2605(t3,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}}}

/* main#sort-by-calls in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2818(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2818,4,av);}
t4=t2;
t5=C_i_cadr(t4);
t6=t3;
t7=C_i_cadr(t6);
if(C_truep(C_i_eqvp(t5,t7))){
t8=t2;
t9=C_i_caddr(t8);
t10=t3;
t11=C_i_caddr(t10);
t12=C_i_greaterp(t9,t11);
t13=t1;{
C_word *av2=av;
av2[0]=t13;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
if(C_truep(t5)){
if(C_truep(t7)){
t8=C_i_greaterp(t5,t7);
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}

/* main#sort-by-time in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2848(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2848,4,av);}
t4=t2;
t5=C_i_caddr(t4);
t6=t3;
t7=C_i_caddr(t6);
if(C_truep(C_i_nequalp(t5,t7))){
t8=t2;
t9=C_i_cadr(t8);
t10=t3;
t11=C_i_cadr(t10);
t12=C_i_greaterp(t9,t11);
t13=t1;{
C_word *av2=av;
av2[0]=t13;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t8=C_i_greaterp(t5,t7);
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* main#sort-by-avg in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2872(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2872,4,av);}
t4=C_i_cadddr(t2);
t5=C_i_cadddr(t3);
if(C_truep(C_i_eqvp(t4,t5))){
t6=t2;
t7=C_i_caddr(t6);
t8=t3;
t9=C_i_caddr(t8);
t10=C_i_greaterp(t7,t9);
t11=t1;{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t6=C_i_greaterp(t4,t5);
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* main#sort-by-name in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2896(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2896,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2904,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(t2);
/* chicken-profile.scm:146: scheme#symbol->string */
t6=*((C_word*)lf[21]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2902 in main#sort-by-name in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2904(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2904,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2908,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_i_car(t4);
/* chicken-profile.scm:146: scheme#symbol->string */
t6=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2906 in k2902 in main#sort-by-name in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2908,2,av);}
/* chicken-profile.scm:146: scheme#string<? */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* arg-digit in k2785 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_2922(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_2922,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_string_ref(((C_word*)t0)[2],t2);
t4=C_fix(C_character_code(t3));
t5=C_a_i_fixnum_difference(&a,2,t4,C_fix(48));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2937,a[2]=t1,a[3]=t5,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:154: scheme#<= */{
C_word av2[5];
av2[0]=0;
av2[1]=t6;
av2[2]=C_fix(0);
av2[3]=t5;
av2[4]=C_fix(9);
C_less_or_equal_p(5,av2);}}

/* k2935 in arg-digit in k2785 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2937,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(C_i_integer_equalp(((C_word*)t0)[3],C_fix(9)))?C_fix(8):((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* chicken-profile.scm:156: chicken.base#error */
t2=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[87];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2957 in k2785 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2959(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2959,2,av);}
a=C_alloc(4);
t2=C_mutate(&lf[4] /* (set! main#seconds-digits ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2963,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:160: arg-digit */
t4=((C_word*)t0)[3];
f_2922(t4,t3,C_fix(1));}

/* k2961 in k2957 in k2785 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2963,2,av);}
a=C_alloc(3);
t2=C_mutate(&lf[5] /* (set! main#average-digits ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2967,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:161: arg-digit */
t4=((C_word*)t0)[3];
f_2922(t4,t3,C_fix(2));}

/* k2965 in k2961 in k2957 in k2785 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2967,2,av);}
t2=C_mutate(&lf[6] /* (set! main#percent-digits ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2983,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2987,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:165: scheme#make-vector */
t3=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(3001);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2985 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2987,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2990,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:169: scheme#read */
t4=*((C_word*)lf[26]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2988 in k2985 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2990(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_2990,2,av);}
a=C_alloc(9);
t2=C_i_symbolp(t1);
t3=(C_truep(t2)?t1:lf[24]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2996,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3013,a[2]=((C_word*)t0)[3],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_symbolp(t1))){
/* chicken-profile.scm:171: scheme#read */
t7=*((C_word*)lf[26]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
f_3013(2,av2);}}}

/* k2994 in k2988 in k2985 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2996(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_2996,2,av);}
a=C_alloc(10);
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2999,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3004,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:179: chicken.internal#hash-table-for-each */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[25]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t4;
av2[2]=t5;
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k2997 in k2994 in k2988 in k2985 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2999,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3003 in k2994 in k2988 in k2985 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3004(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_3004,4,av);}
a=C_alloc(6);
t4=((C_word*)((C_word*)t0)[2])[1];
t5=C_a_i_cons(&a,2,t2,t3);
t6=C_a_i_cons(&a,2,t5,t4);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k3011 in k2988 in k2985 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3013,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3015,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_3015(t5,((C_word*)t0)[3],t1);}

/* doloop637 in k3011 in k2988 in k2985 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3015(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,3)))){
C_save_and_reclaim_args((void *)trf_3015,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_eofp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3025,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=C_i_car(t4);
t6=t5;
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3053,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t6,a[6]=t9,a[7]=t10,tmp=(C_word)a,a+=8,tmp);
t12=t2;
t13=C_i_car(t12);
/* chicken-profile.scm:176: chicken.internal#hash-table-ref */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word av2[4];
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t11;
av2[2]=((C_word*)t0)[3];
av2[3]=t13;
tp(4,av2);}}}

/* k3023 in doloop637 in k3011 in k2988 in k2985 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3025,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3032,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:171: scheme#read */
t3=*((C_word*)lf[26]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3030 in k3023 in doloop637 in k3011 in k2988 in k2985 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3032,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3015(t2,((C_word*)t0)[3],t1);}

/* k3051 in doloop637 in k3011 in k2988 in k2985 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3053(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_3053,2,av);}
a=C_alloc(12);
t2=(C_truep(t1)?t1:lf[27]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_i_check_list_2(t2,lf[28]);
t5=C_i_check_list_2(t3,lf[28]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3068,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3070,a[2]=((C_word*)t0)[6],a[3]=t8,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3070(t10,t6,t2,t3);}

/* k3066 in k3051 in doloop637 in k3011 in k2988 in k2985 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3068,2,av);}
/* chicken-profile.scm:173: chicken.internal#hash-table-set! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
tp(5,av2);}}

/* map-loop642 in k3051 in doloop637 in k3011 in k2988 in k2985 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3070(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,0,2)))){
C_save_and_reclaim_args((void *)trf_3070,4,t0,t1,t2,t3);}
a=C_alloc(39);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3080,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
if(C_truep(t7)){
if(C_truep(t8)){
t9=C_s_a_i_plus(&a,2,t7,t8);
t10=t6;
f_3080(t10,C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST));}
else{
t9=t6;
f_3080(t9,C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST));}}
else{
t9=t6;
f_3080(t9,C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST));}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3078 in map-loop642 in k3051 in doloop637 in k3011 in k2988 in k2985 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3080(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_3080,2,t0,t1);}
t2=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t1);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t4=C_slot(((C_word*)t0)[3],C_fix(1));
t5=C_slot(((C_word*)t0)[4],C_fix(1));
t6=((C_word*)((C_word*)t0)[5])[1];
f_3070(t6,((C_word*)t0)[6],t4,t5);}

/* main#format-string in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3131(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_3131,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+5);
t4=C_build_rest(&a,c,4,av);
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_make_character(32):C_i_car(t9));
t12=C_i_nullp(t9);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t14=C_i_string_length(t2);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3150,a[2]=t7,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t16=C_fixnum_difference(t3,t14);
t17=C_i_fixnum_max(C_fix(0),t16);
/* chicken-profile.scm:187: scheme#make-string */
t18=*((C_word*)lf[34]+1);{
C_word *av2=av;
av2[0]=t18;
av2[1]=t15;
av2[2]=t17;
av2[3]=t11;
((C_proc)(void*)(*((C_word*)t18+1)))(4,av2);}}

/* k3148 in main#format-string in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3150,2,av);}
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=t2;
tp(4,av2);}}
else{
t2=((C_word*)t0)[3];
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
av2[3]=t1;
tp(4,av2);}}}

/* main#format-real in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3197(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3197,3,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3201,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3247,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:193: scheme#truncate */
t6=*((C_word*)lf[42]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3199 in main#format-real in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3201,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3208,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=C_fix(10);
tp(4,av2);}}

/* k3206 in k3199 in main#format-real in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3208(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(48,c,2)))){
C_save_and_reclaim((void *)f_3208,2,av);}
a=C_alloc(48);
t2=t1;
t3=((C_word*)t0)[2];
t4=(C_truep(C_i_greaterp(t3,C_fix(0)))?lf[36]:lf[37]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3216,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3220,a[2]=((C_word*)t0)[2],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3227,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3231,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va4312,a[2]=t9,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t11=t10;
va4312(t11,C_s_a_i_minus(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]));}

/* k3214 in k3206 in k3199 in main#format-real in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3216,2,av);}
/* chicken-profile.scm:194: scheme#string-append */
t2=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3218 in k3206 in k3199 in main#format-real in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_3220,2,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
t3=C_s_a_i_plus(&a,2,t2,C_fix(1));
/* chicken-profile.scm:197: scheme#substring */
t4=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=C_fix(1);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3225 in k3206 in k3199 in main#format-real in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3227,2,av);}
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(10);
tp(4,av2);}}

/* k3229 in k3206 in k3199 in main#format-real in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3231,2,av);}
/* chicken-profile.scm:199: scheme#inexact->exact */
t2=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3238 */
static void C_ccall f_3240(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,2)))){
C_save_and_reclaim((void *)f_3240,2,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,((C_word*)t0)[2],t1);
/* chicken-profile.scm:200: scheme#truncate */
t3=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3245 in main#format-real in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3247,2,av);}
/* chicken-profile.scm:193: scheme#inexact->exact */
t2=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3253,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3256,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:206: scheme#with-input-from-file */
t3=C_fast_retrieve(lf[62]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_retrieve2(lf[2],C_text("main#file"));
av2[3]=C_retrieve2(lf[23],C_text("main#read-profile"));
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3256(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_3256,2,av);}
a=C_alloc(10);
t2=C_i_car(t1);
t3=t2;
t4=C_u_i_cdr(t1);
t5=C_i_check_list_2(t4,lf[45]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3266,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3803,a[2]=t3,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_3803(t10,t6,t4,C_fix(0));}

/* k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3266(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_3266,2,av);}
a=C_alloc(22);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3269,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3717,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3767,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3769,a[2]=t6,a[3]=t11,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3769(t13,t9,((C_word*)t0)[3]);}

/* k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3269(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_3269,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3272,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3704,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_length(((C_word*)t3)[1]);
/* chicken-profile.scm:230: scheme#< */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=C_fix(0);
av2[3]=C_retrieve2(lf[7],C_text("main#top"));
av2[4]=t6;
C_lessp(5,av2);}}

/* k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3272(C_word t0,C_word t1){
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
C_word t14;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,3)))){
C_save_and_reclaim_args((void *)trf_3272,2,t0,t1);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3339,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[3],C_text("main#no-unused")))){
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3695,tmp=(C_word)a,a+=2,tmp);
t8=t7;
t9=((C_word*)((C_word*)t0)[2])[1];
t10=C_i_check_list_2(t9,lf[59]);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1891,a[2]=t8,a[3]=t12,tmp=(C_word)a,a+=4,tmp));
t14=((C_word*)t12)[1];
f_1891(t14,t6,t9);}
else{
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_3339(2,av2);}}}

/* k3295 in map-loop775 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3297,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3301,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_not(((C_word*)t0)[6]))){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=lf[57];
f_3301(2,av2);}}
else{
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=C_fix(10);
tp(4,av2);}}}

/* k3299 in k3295 in map-loop775 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3301(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3301,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3305,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3323,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#/-2 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[56]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
av2[3]=C_fix(1000);
tp(4,av2);}}

/* k3303 in k3299 in k3295 in map-loop775 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3305,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3309,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3317,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#/-2 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[56]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
av2[3]=C_fix(1000);
tp(4,av2);}}

/* k3307 in k3303 in k3299 in k3295 in map-loop775 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 in ... */
static void C_ccall f_3309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3309,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-profile.scm:241: format-real */
f_3197(t3,((C_word*)t0)[6],C_retrieve2(lf[6],C_text("main#percent-digits")));}

/* k3311 in k3307 in k3303 in k3299 in k3295 in map-loop775 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in ... */
static void C_ccall f_3313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_3313,2,av);}
a=C_alloc(15);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list5(&a,5,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3315 in k3303 in k3299 in k3295 in map-loop775 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 in ... */
static void C_ccall f_3317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3317,2,av);}
/* chicken-profile.scm:240: format-real */
f_3197(((C_word*)t0)[2],t1,C_retrieve2(lf[5],C_text("main#average-digits")));}

/* k3321 in k3299 in k3295 in map-loop775 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3323,2,av);}
/* chicken-profile.scm:239: format-real */
f_3197(((C_word*)t0)[2],t1,C_retrieve2(lf[4],C_text("main#seconds-digits")));}

/* k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3339(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_3339,2,av);}
a=C_alloc(11);
t2=C_i_check_list_2(t1,lf[28]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3345,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3658,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3658(t7,t3,t1);}

/* k3343 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3345(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(36,c,3)))){
C_save_and_reclaim((void *)f_3345,2,av);}
a=C_alloc(36);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_a_i_list5(&a,5,lf[46],lf[47],lf[48],lf[49],lf[50]);
t4=t3;
t5=C_a_i_list5(&a,5,C_SCHEME_FALSE,C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3354,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[55]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=t7;
av2[2]=C_fix(2);
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k3352 in k3343 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3354(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,c,4)))){
C_save_and_reclaim((void *)f_3354,2,av);}
a=C_alloc(30);
t2=t1;
t3=C_a_i_list5(&a,5,C_fix(0),C_fix(0),C_fix(0),C_fix(0),C_fix(0));
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3363,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3527,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_3527(t9,t5,t4,t3);}

/* k3361 in k3352 in k3343 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_3363,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3365,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3451,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* chicken-profile.scm:256: print-row */
t5=t3;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
f_3365(3,av2);}}

/* print-row in k3361 in k3352 in k3343 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,5)))){
C_save_and_reclaim((void *)f_3365,3,av);}
a=C_alloc(20);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3373,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_retrieve2(lf[32],C_text("main#format-string"));
t9=C_i_check_list_2(t2,lf[28]);
t10=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3386,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3388,a[2]=t6,a[3]=t13,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_3388(t15,t11,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k3371 in print-row in k3361 in k3352 in k3343 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 in ... */
static void C_ccall f_3373(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3373,2,av);}
/* chicken-profile.scm:255: chicken.base#print */
t2=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3384 in print-row in k3361 in k3352 in k3343 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 in ... */
static void C_ccall f_3386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3386,2,av);}
/* chicken-profile.scm:255: chicken.string#string-intersperse */
t2=C_fast_retrieve(lf[52]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop899 in print-row in k3361 in k3352 in k3343 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 in ... */
static void C_fcall f_3388(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_3388,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3395,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_3395(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_3395(t6,C_SCHEME_FALSE);}}

/* k3393 in map-loop899 in print-row in k3361 in k3352 in k3343 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in ... */
static void C_fcall f_3395(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_3395,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(0));
t4=C_slot(((C_word*)t0)[4],C_fix(0));
t5=C_slot(((C_word*)t0)[5],C_fix(0));
/* chicken-profile.scm:255: g905 */
t6=((C_word*)t0)[8];{
C_word av2[5];
av2[0]=t6;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t2=((C_word*)t0)[7];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[9],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3419 in k3393 in map-loop899 in print-row in k3361 in k3352 in k3343 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in ... */
static void C_ccall f_3421(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3421,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=C_slot(((C_word*)t0)[4],C_fix(1));
t7=C_slot(((C_word*)t0)[5],C_fix(1));
t8=((C_word*)((C_word*)t0)[6])[1];
f_3388(t8,((C_word*)t0)[7],t5,t6,t7);}

/* k3449 in k3361 in k3352 in k3343 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3451(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_3451,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3454,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3487,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_check_list_2(((C_word*)t0)[5],lf[45]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3495,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3505,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_3505(t9,t5,((C_word*)t0)[5],C_fix(0));}

/* k3452 in k3449 in k3361 in k3352 in k3343 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 in ... */
static void C_ccall f_3454(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3454,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=((C_word*)((C_word*)t0)[3])[1];
t4=C_i_check_list_2(t3,lf[53]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3462,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_3462(t8,((C_word*)t0)[4],t3);}

/* for-each-loop888 in k3452 in k3449 in k3361 in k3352 in k3343 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in ... */
static void C_fcall f_3462(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3462,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3472,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-profile.scm:260: g889 */
t5=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3470 in for-each-loop888 in k3452 in k3449 in k3361 in k3352 in k3343 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in ... */
static void C_ccall f_3472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3472,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3462(t3,((C_word*)t0)[4],t2);}

/* k3485 in k3449 in k3361 in k3352 in k3343 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 in ... */
static void C_ccall f_3487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3487,2,av);}
/* chicken-profile.scm:257: chicken.base#print */
t2=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3493 in k3449 in k3361 in k3352 in k3343 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 in ... */
static void C_ccall f_3495(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,c,3)))){
C_save_and_reclaim((void *)f_3495,2,av);}
a=C_alloc(39);
t2=C_i_length(((C_word*)t0)[2]);
t3=C_a_i_fixnum_difference(&a,2,t2,C_fix(1));
t4=C_s_a_u_i_integer_times(&a,2,C_fix(2),t3);
t5=C_s_a_i_plus(&a,2,t1,t4);
/* chicken-profile.scm:257: scheme#make-string */
t6=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[3];
av2[2]=t5;
av2[3]=C_make_character(45);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* foldl938 in k3449 in k3361 in k3352 in k3343 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 in ... */
static void C_fcall f_3505(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(29,0,3)))){
C_save_and_reclaim_args((void *)trf_3505,4,t0,t1,t2,t3);}
a=C_alloc(29);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=t3;
t6=C_slot(t2,C_fix(0));
t7=C_s_a_i_plus(&a,2,t5,t6);
t9=t1;
t10=t4;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}
else{
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* foldl815 in k3352 in k3343 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3527(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(28,0,3)))){
C_save_and_reclaim_args((void *)trf_3527,4,t0,t1,t2,t3);}
a=C_alloc(28);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3650,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t2,C_fix(0));
t8=t6;
t9=t3;
t10=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t11=t10;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=((C_word*)t12)[1];
t14=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t15=t14;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=((C_word*)t16)[1];
t18=C_i_check_list_2(t7,lf[28]);
t19=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3556,a[2]=t9,a[3]=t12,a[4]=t13,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3615,a[2]=t16,a[3]=t21,a[4]=t17,tmp=(C_word)a,a+=5,tmp));
t23=((C_word*)t21)[1];
f_3615(t23,t19,t7);}
else{
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k3554 in foldl815 in k3352 in k3343 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3556(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3556,2,av);}
a=C_alloc(7);
t2=C_i_check_list_2(t1,lf[28]);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3567,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3567(t7,((C_word*)t0)[5],t1,((C_word*)t0)[2]);}

/* map-loop828 in k3554 in foldl815 in k3352 in k3343 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 in ... */
static void C_fcall f_3567(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_3567,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3596,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* chicken-profile.scm:251: g834 */
t9=*((C_word*)lf[54]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t6;
av2[2]=t7;
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3594 in map-loop828 in k3554 in foldl815 in k3352 in k3343 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in ... */
static void C_ccall f_3596(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3596,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=C_slot(((C_word*)t0)[4],C_fix(1));
t7=((C_word*)((C_word*)t0)[5])[1];
f_3567(t7,((C_word*)t0)[6],t5,t6);}

/* map-loop849 in foldl815 in k3352 in k3343 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3615(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3615,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_string_length(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
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

/* k3648 in foldl815 in k3352 in k3343 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3650,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3527(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* map-loop775 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3658(C_word t0,C_word t1,C_word t2){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_3658,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3683,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=C_i_cadr(t4);
t7=t6;
t8=C_i_caddr(t4);
t9=t8;
t10=C_i_cadddr(t4);
t11=t10;
t12=C_i_cddddr(t4);
t13=C_i_car(t12);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3297,a[2]=t5,a[3]=t14,a[4]=t11,a[5]=t9,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t16=C_i_car(t4);
/* chicken-profile.scm:237: ##sys#symbol->qualified-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[58]);
C_word av2[3];
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t15;
av2[2]=t16;
tp(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3681 in map-loop775 in k3337 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3683(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3683,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3658(t6,((C_word*)t0)[5],t5);}

/* a3694 in k3270 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3695,3,av);}
t3=C_i_cadr(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_greaterp(t3,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3702 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3704,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3708,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:231: take */
f_1381(t2,((C_word*)((C_word*)t0)[2])[1],C_retrieve2(lf[7],C_text("main#top")));}
else{
t2=((C_word*)t0)[3];
f_3272(t2,C_SCHEME_UNDEFINED);}}

/* k3706 in k3702 in k3267 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3708,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_3272(t3,t2);}

/* g743 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3717(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3717,3,t0,t1,t2);}
a=C_alloc(6);
t3=t2;
t4=C_i_cadr(t3);
t5=t2;
t6=C_i_caddr(t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3735,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t7,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
if(C_truep(C_i_greaterp(t4,C_fix(0)))){
/* ##sys#/-2 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[56]);
C_word av2[4];
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t8;
av2[2]=t7;
av2[3]=t4;
tp(4,av2);}}
else{
t9=t8;{
C_word av2[2];
av2[0]=t9;
av2[1]=C_SCHEME_FALSE;
f_3735(2,av2);}}}
else{
t9=t8;{
C_word av2[2];
av2[0]=t9;
av2[1]=C_SCHEME_FALSE;
f_3735(2,av2);}}}

/* k3733 in g743 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3735(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3735,2,av);}
a=C_alloc(8);
t2=(C_truep(t1)?t1:C_fix(0));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3742,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[4],C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3751,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#/-2 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[56]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}
else{
t5=t4;
f_3742(t5,C_SCHEME_FALSE);}}

/* k3740 in k3733 in g743 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3742(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3742,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=t1;
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],t2);
/* chicken-profile.scm:219: scheme#append */
t4=*((C_word*)lf[60]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],C_fix(0));
/* chicken-profile.scm:219: scheme#append */
t3=*((C_word*)lf[60]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k3749 in k3733 in g743 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,1)))){
C_save_and_reclaim((void *)f_3751,2,av);}
a=C_alloc(33);
t2=((C_word*)t0)[2];
f_3742(t2,C_s_a_i_times(&a,2,t1,C_fix(100)));}

/* k3765 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3767,2,av);}
/* chicken-profile.scm:217: chicken.sort#sort */
t2=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[22],C_text("main#sort-by"));
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop737 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3769(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3769,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3794,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-profile.scm:217: g743 */
t5=((C_word*)t0)[4];
f_3717(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3792 in map-loop737 in k3264 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3794(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3794,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3769(t6,((C_word*)t0)[5],t5);}

/* foldl719 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3803(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_3803,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=C_eqp(((C_word*)t0)[2],lf[24]);
t7=(C_truep(t6)?(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3832,tmp=(C_word)a,a+=2,tmp):(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3841,tmp=(C_word)a,a+=2,tmp));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3824,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t9=C_slot(t2,C_fix(0));
/* chicken-profile.scm:213: g726 */
t10=t7;{
C_word av2[4];
av2[0]=t10;
av2[1]=t8;
av2[2]=t3;
av2[3]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k3822 in foldl719 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3824,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3803(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f_3832 in foldl719 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3832(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3832,4,av);}
t4=C_i_caddr(t3);
/* chicken-profile.scm:214: scheme#max */
t5=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* f_3841 in foldl719 in k3254 in k3251 in k2613 in loop in k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3841(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_3841,4,av);}
a=C_alloc(29);
t4=C_i_caddr(t3);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_s_a_i_plus(&a,2,t2,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k3848 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3850,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3856,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.base#implicit-exit-handler */
t3=C_fast_retrieve(lf[44]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3854 in k3848 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3856,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3858 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3860(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3860,2,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2605,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_2605(t5,((C_word*)t0)[2],t1);}

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
if(C_unlikely(!C_demand_2(300))){
C_save(t1);
C_rereclaim2(300*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,93);
lf[0]=C_h_intern(&lf[0],5, C_text("main#"));
lf[9]=C_h_intern(&lf[9],17, C_text("chicken.base#exit"));
lf[10]=C_h_intern(&lf[10],14, C_text("scheme#display"));
lf[11]=C_decode_literal(C_heaptop,C_text("\376B\000\001\242)\012 -no-unused                remove procedures that are never called\012 -top "
"N                    display only the top N entries\012 -help                     s"
"how this text and exit\012 -version                  show version and exit\012 -releas"
"e                  show release number and exit\012\012 FILENAME defaults to the `PROF"
"ILE.<number>\047, selecting the one with\012 the highest modification time, in case mu"
"ltiple profiles exist.\012"));
lf[12]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[13]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[14]=C_decode_literal(C_heaptop,C_text("\376B\000\001\321Usage: chicken-profile [OPTION ...] [FILENAME ...]\012\012 -sort-by-calls        "
"    sort output by call frequency\012 -sort-by-time             sort output by proc"
"edure execution time\012 -sort-by-avg              sort output by average procedure"
" execution time\012 -sort-by-name             sort output alphabetically by procedu"
"re name\012 -decimals DDD             set number of decimals for seconds, average a"
"nd\012                           percent columns (three digits, default: "));
lf[15]=C_h_intern(&lf[15],19, C_text("\003sysprint-to-string"));
lf[20]=C_h_intern(&lf[20],15, C_text("scheme#string<\077"));
lf[21]=C_h_intern(&lf[21],21, C_text("scheme#symbol->string"));
lf[24]=C_h_intern(&lf[24],12, C_text("instrumented"));
lf[25]=C_h_intern(&lf[25],36, C_text("chicken.internal#hash-table-for-each"));
lf[26]=C_h_intern(&lf[26],11, C_text("scheme#read"));
lf[27]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\001\000\000\000\000\376\003\000\000\002\376\377\001\000\000\000\000\376\377\016"));
lf[28]=C_h_intern(&lf[28],3, C_text("map"));
lf[29]=C_h_intern(&lf[29],32, C_text("chicken.internal#hash-table-set!"));
lf[30]=C_h_intern(&lf[30],31, C_text("chicken.internal#hash-table-ref"));
lf[31]=C_h_intern(&lf[31],18, C_text("scheme#make-vector"));
lf[33]=C_h_intern(&lf[33],17, C_text("\003sysstring-append"));
lf[34]=C_h_intern(&lf[34],18, C_text("scheme#make-string"));
lf[36]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[37]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[38]=C_h_intern(&lf[38],20, C_text("scheme#string-append"));
lf[39]=C_h_intern(&lf[39],16, C_text("scheme#substring"));
lf[40]=C_h_intern(&lf[40],18, C_text("\003sysnumber->string"));
lf[41]=C_h_intern(&lf[41],21, C_text("scheme#inexact->exact"));
lf[42]=C_h_intern(&lf[42],15, C_text("scheme#truncate"));
lf[43]=C_h_intern(&lf[43],11, C_text("scheme#expt"));
lf[44]=C_h_intern(&lf[44],34, C_text("chicken.base#implicit-exit-handler"));
lf[45]=C_h_intern(&lf[45],5, C_text("foldl"));
lf[46]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011procedure"));
lf[47]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005calls"));
lf[48]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007seconds"));
lf[49]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007average"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007percent"));
lf[51]=C_h_intern(&lf[51],18, C_text("chicken.base#print"));
lf[52]=C_h_intern(&lf[52],33, C_text("chicken.string#string-intersperse"));
lf[53]=C_h_intern(&lf[53],8, C_text("for-each"));
lf[54]=C_h_intern(&lf[54],10, C_text("scheme#max"));
lf[55]=C_h_intern(&lf[55],15, C_text("\003sysmake-string"));
lf[56]=C_h_intern(&lf[56],7, C_text("\003sys/-2"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010overflow"));
lf[58]=C_h_intern(&lf[58],28, C_text("\003syssymbol->qualified-string"));
lf[59]=C_h_intern(&lf[59],5, C_text("foldr"));
lf[60]=C_h_intern(&lf[60],13, C_text("scheme#append"));
lf[61]=C_h_intern(&lf[61],17, C_text("chicken.sort#sort"));
lf[62]=C_h_intern(&lf[62],27, C_text("scheme#with-input-from-file"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011reading `"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006\047 ...\012"));
lf[65]=C_h_intern(&lf[65],18, C_text("chicken.base#error"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021no PROFILEs found"));
lf[67]=C_h_intern(&lf[67],41, C_text("chicken.file.posix#file-modification-time"));
lf[68]=C_h_intern(&lf[68],17, C_text("chicken.file#glob"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011PROFILE.\052"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032missing argument to option"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032invalid argument to option"));
lf[72]=C_h_intern(&lf[72],21, C_text("scheme#string->number"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-h"));
lf[74]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-help"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006--help"));
lf[76]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-version"));
lf[77]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032chicken-profile - Version "));
lf[78]=C_h_intern(&lf[78],32, C_text("chicken.platform#chicken-version"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-release"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012-no-unused"));
lf[81]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004-top"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016-sort-by-calls"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015-sort-by-time"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014-sort-by-avg"));
lf[85]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015-sort-by-name"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011-decimals"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376B\000\000$invalid argument to -decimals option"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376B\000\000$invalid argument to -decimals option"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016invalid option"));
lf[90]=C_h_intern(&lf[90],46, C_text("chicken.process-context#command-line-arguments"));
lf[91]=C_h_intern(&lf[91],28, C_text("\003sysregister-compiled-module"));
lf[92]=C_h_intern(&lf[92],4, C_text("main"));
C_register_lf2(lf,93,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1250,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* va4312 in k3206 in k3199 in main#format-real in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall va4312(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,3)))){
C_save_and_reclaim_args((void *)trva4312,2,t0,t1);}
a=C_alloc(33);
t2=C_s_a_i_minus(&a,2,t1,C_fix(-1));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3240,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:201: scheme#expt */
t5=*((C_word*)lf[43]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_fix(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[130] = {
{C_text("f_1250:chicken_2dprofile_2escm"),(void*)f_1250},
{C_text("f_1253:chicken_2dprofile_2escm"),(void*)f_1253},
{C_text("f_1256:chicken_2dprofile_2escm"),(void*)f_1256},
{C_text("f_1259:chicken_2dprofile_2escm"),(void*)f_1259},
{C_text("f_1262:chicken_2dprofile_2escm"),(void*)f_1262},
{C_text("f_1265:chicken_2dprofile_2escm"),(void*)f_1265},
{C_text("f_1268:chicken_2dprofile_2escm"),(void*)f_1268},
{C_text("f_1271:chicken_2dprofile_2escm"),(void*)f_1271},
{C_text("f_1381:chicken_2dprofile_2escm"),(void*)f_1381},
{C_text("f_1399:chicken_2dprofile_2escm"),(void*)f_1399},
{C_text("f_1891:chicken_2dprofile_2escm"),(void*)f_1891},
{C_text("f_1899:chicken_2dprofile_2escm"),(void*)f_1899},
{C_text("f_1906:chicken_2dprofile_2escm"),(void*)f_1906},
{C_text("f_1920:chicken_2dprofile_2escm"),(void*)f_1920},
{C_text("f_2558:chicken_2dprofile_2escm"),(void*)f_2558},
{C_text("f_2562:chicken_2dprofile_2escm"),(void*)f_2562},
{C_text("f_2569:chicken_2dprofile_2escm"),(void*)f_2569},
{C_text("f_2605:chicken_2dprofile_2escm"),(void*)f_2605},
{C_text("f_2615:chicken_2dprofile_2escm"),(void*)f_2615},
{C_text("f_2622:chicken_2dprofile_2escm"),(void*)f_2622},
{C_text("f_2625:chicken_2dprofile_2escm"),(void*)f_2625},
{C_text("f_2638:chicken_2dprofile_2escm"),(void*)f_2638},
{C_text("f_2640:chicken_2dprofile_2escm"),(void*)f_2640},
{C_text("f_2645:chicken_2dprofile_2escm"),(void*)f_2645},
{C_text("f_2649:chicken_2dprofile_2escm"),(void*)f_2649},
{C_text("f_2655:chicken_2dprofile_2escm"),(void*)f_2655},
{C_text("f_2674:chicken_2dprofile_2escm"),(void*)f_2674},
{C_text("f_2678:chicken_2dprofile_2escm"),(void*)f_2678},
{C_text("f_2693:chicken_2dprofile_2escm"),(void*)f_2693},
{C_text("f_2696:chicken_2dprofile_2escm"),(void*)f_2696},
{C_text("f_2714:chicken_2dprofile_2escm"),(void*)f_2714},
{C_text("f_2721:chicken_2dprofile_2escm"),(void*)f_2721},
{C_text("f_2729:chicken_2dprofile_2escm"),(void*)f_2729},
{C_text("f_2736:chicken_2dprofile_2escm"),(void*)f_2736},
{C_text("f_2751:chicken_2dprofile_2escm"),(void*)f_2751},
{C_text("f_2787:chicken_2dprofile_2escm"),(void*)f_2787},
{C_text("f_2793:chicken_2dprofile_2escm"),(void*)f_2793},
{C_text("f_2818:chicken_2dprofile_2escm"),(void*)f_2818},
{C_text("f_2848:chicken_2dprofile_2escm"),(void*)f_2848},
{C_text("f_2872:chicken_2dprofile_2escm"),(void*)f_2872},
{C_text("f_2896:chicken_2dprofile_2escm"),(void*)f_2896},
{C_text("f_2904:chicken_2dprofile_2escm"),(void*)f_2904},
{C_text("f_2908:chicken_2dprofile_2escm"),(void*)f_2908},
{C_text("f_2922:chicken_2dprofile_2escm"),(void*)f_2922},
{C_text("f_2937:chicken_2dprofile_2escm"),(void*)f_2937},
{C_text("f_2959:chicken_2dprofile_2escm"),(void*)f_2959},
{C_text("f_2963:chicken_2dprofile_2escm"),(void*)f_2963},
{C_text("f_2967:chicken_2dprofile_2escm"),(void*)f_2967},
{C_text("f_2983:chicken_2dprofile_2escm"),(void*)f_2983},
{C_text("f_2987:chicken_2dprofile_2escm"),(void*)f_2987},
{C_text("f_2990:chicken_2dprofile_2escm"),(void*)f_2990},
{C_text("f_2996:chicken_2dprofile_2escm"),(void*)f_2996},
{C_text("f_2999:chicken_2dprofile_2escm"),(void*)f_2999},
{C_text("f_3004:chicken_2dprofile_2escm"),(void*)f_3004},
{C_text("f_3013:chicken_2dprofile_2escm"),(void*)f_3013},
{C_text("f_3015:chicken_2dprofile_2escm"),(void*)f_3015},
{C_text("f_3025:chicken_2dprofile_2escm"),(void*)f_3025},
{C_text("f_3032:chicken_2dprofile_2escm"),(void*)f_3032},
{C_text("f_3053:chicken_2dprofile_2escm"),(void*)f_3053},
{C_text("f_3068:chicken_2dprofile_2escm"),(void*)f_3068},
{C_text("f_3070:chicken_2dprofile_2escm"),(void*)f_3070},
{C_text("f_3080:chicken_2dprofile_2escm"),(void*)f_3080},
{C_text("f_3131:chicken_2dprofile_2escm"),(void*)f_3131},
{C_text("f_3150:chicken_2dprofile_2escm"),(void*)f_3150},
{C_text("f_3197:chicken_2dprofile_2escm"),(void*)f_3197},
{C_text("f_3201:chicken_2dprofile_2escm"),(void*)f_3201},
{C_text("f_3208:chicken_2dprofile_2escm"),(void*)f_3208},
{C_text("f_3216:chicken_2dprofile_2escm"),(void*)f_3216},
{C_text("f_3220:chicken_2dprofile_2escm"),(void*)f_3220},
{C_text("f_3227:chicken_2dprofile_2escm"),(void*)f_3227},
{C_text("f_3231:chicken_2dprofile_2escm"),(void*)f_3231},
{C_text("f_3240:chicken_2dprofile_2escm"),(void*)f_3240},
{C_text("f_3247:chicken_2dprofile_2escm"),(void*)f_3247},
{C_text("f_3253:chicken_2dprofile_2escm"),(void*)f_3253},
{C_text("f_3256:chicken_2dprofile_2escm"),(void*)f_3256},
{C_text("f_3266:chicken_2dprofile_2escm"),(void*)f_3266},
{C_text("f_3269:chicken_2dprofile_2escm"),(void*)f_3269},
{C_text("f_3272:chicken_2dprofile_2escm"),(void*)f_3272},
{C_text("f_3297:chicken_2dprofile_2escm"),(void*)f_3297},
{C_text("f_3301:chicken_2dprofile_2escm"),(void*)f_3301},
{C_text("f_3305:chicken_2dprofile_2escm"),(void*)f_3305},
{C_text("f_3309:chicken_2dprofile_2escm"),(void*)f_3309},
{C_text("f_3313:chicken_2dprofile_2escm"),(void*)f_3313},
{C_text("f_3317:chicken_2dprofile_2escm"),(void*)f_3317},
{C_text("f_3323:chicken_2dprofile_2escm"),(void*)f_3323},
{C_text("f_3339:chicken_2dprofile_2escm"),(void*)f_3339},
{C_text("f_3345:chicken_2dprofile_2escm"),(void*)f_3345},
{C_text("f_3354:chicken_2dprofile_2escm"),(void*)f_3354},
{C_text("f_3363:chicken_2dprofile_2escm"),(void*)f_3363},
{C_text("f_3365:chicken_2dprofile_2escm"),(void*)f_3365},
{C_text("f_3373:chicken_2dprofile_2escm"),(void*)f_3373},
{C_text("f_3386:chicken_2dprofile_2escm"),(void*)f_3386},
{C_text("f_3388:chicken_2dprofile_2escm"),(void*)f_3388},
{C_text("f_3395:chicken_2dprofile_2escm"),(void*)f_3395},
{C_text("f_3421:chicken_2dprofile_2escm"),(void*)f_3421},
{C_text("f_3451:chicken_2dprofile_2escm"),(void*)f_3451},
{C_text("f_3454:chicken_2dprofile_2escm"),(void*)f_3454},
{C_text("f_3462:chicken_2dprofile_2escm"),(void*)f_3462},
{C_text("f_3472:chicken_2dprofile_2escm"),(void*)f_3472},
{C_text("f_3487:chicken_2dprofile_2escm"),(void*)f_3487},
{C_text("f_3495:chicken_2dprofile_2escm"),(void*)f_3495},
{C_text("f_3505:chicken_2dprofile_2escm"),(void*)f_3505},
{C_text("f_3527:chicken_2dprofile_2escm"),(void*)f_3527},
{C_text("f_3556:chicken_2dprofile_2escm"),(void*)f_3556},
{C_text("f_3567:chicken_2dprofile_2escm"),(void*)f_3567},
{C_text("f_3596:chicken_2dprofile_2escm"),(void*)f_3596},
{C_text("f_3615:chicken_2dprofile_2escm"),(void*)f_3615},
{C_text("f_3650:chicken_2dprofile_2escm"),(void*)f_3650},
{C_text("f_3658:chicken_2dprofile_2escm"),(void*)f_3658},
{C_text("f_3683:chicken_2dprofile_2escm"),(void*)f_3683},
{C_text("f_3695:chicken_2dprofile_2escm"),(void*)f_3695},
{C_text("f_3704:chicken_2dprofile_2escm"),(void*)f_3704},
{C_text("f_3708:chicken_2dprofile_2escm"),(void*)f_3708},
{C_text("f_3717:chicken_2dprofile_2escm"),(void*)f_3717},
{C_text("f_3735:chicken_2dprofile_2escm"),(void*)f_3735},
{C_text("f_3742:chicken_2dprofile_2escm"),(void*)f_3742},
{C_text("f_3751:chicken_2dprofile_2escm"),(void*)f_3751},
{C_text("f_3767:chicken_2dprofile_2escm"),(void*)f_3767},
{C_text("f_3769:chicken_2dprofile_2escm"),(void*)f_3769},
{C_text("f_3794:chicken_2dprofile_2escm"),(void*)f_3794},
{C_text("f_3803:chicken_2dprofile_2escm"),(void*)f_3803},
{C_text("f_3824:chicken_2dprofile_2escm"),(void*)f_3824},
{C_text("f_3832:chicken_2dprofile_2escm"),(void*)f_3832},
{C_text("f_3841:chicken_2dprofile_2escm"),(void*)f_3841},
{C_text("f_3850:chicken_2dprofile_2escm"),(void*)f_3850},
{C_text("f_3856:chicken_2dprofile_2escm"),(void*)f_3856},
{C_text("f_3860:chicken_2dprofile_2escm"),(void*)f_3860},
{C_text("toplevel:chicken_2dprofile_2escm"),(void*)C_toplevel},
{C_text("va4312:chicken_2dprofile_2escm"),(void*)va4312},
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
o|hiding unexported module binding: main#partition 
o|hiding unexported module binding: main#span 
o|hiding unexported module binding: main#take 
o|hiding unexported module binding: main#drop 
o|hiding unexported module binding: main#split-at 
o|hiding unexported module binding: main#append-map 
o|hiding unexported module binding: main#every 
o|hiding unexported module binding: main#any 
o|hiding unexported module binding: main#cons* 
o|hiding unexported module binding: main#concatenate 
o|hiding unexported module binding: main#delete 
o|hiding unexported module binding: main#first 
o|hiding unexported module binding: main#second 
o|hiding unexported module binding: main#third 
o|hiding unexported module binding: main#fourth 
o|hiding unexported module binding: main#fifth 
o|hiding unexported module binding: main#delete-duplicates 
o|hiding unexported module binding: main#alist-cons 
o|hiding unexported module binding: main#filter 
o|hiding unexported module binding: main#filter-map 
o|hiding unexported module binding: main#remove 
o|hiding unexported module binding: main#unzip1 
o|hiding unexported module binding: main#last 
o|hiding unexported module binding: main#list-index 
o|hiding unexported module binding: main#lset-adjoin/eq? 
o|hiding unexported module binding: main#lset-difference/eq? 
o|hiding unexported module binding: main#lset-union/eq? 
o|hiding unexported module binding: main#lset-intersection/eq? 
o|hiding unexported module binding: main#list-tabulate 
o|hiding unexported module binding: main#lset<=/eq? 
o|hiding unexported module binding: main#lset=/eq? 
o|hiding unexported module binding: main#length+ 
o|hiding unexported module binding: main#find 
o|hiding unexported module binding: main#find-tail 
o|hiding unexported module binding: main#iota 
o|hiding unexported module binding: main#make-list 
o|hiding unexported module binding: main#posq 
o|hiding unexported module binding: main#posv 
o|hiding unexported module binding: main#symbol-table-size 
o|hiding unexported module binding: main#sort-by 
o|hiding unexported module binding: main#file 
o|hiding unexported module binding: main#no-unused 
o|hiding unexported module binding: main#seconds-digits 
o|hiding unexported module binding: main#average-digits 
o|hiding unexported module binding: main#percent-digits 
o|hiding unexported module binding: main#top 
o|hiding unexported module binding: main#print-usage 
o|hiding unexported module binding: main#run 
o|hiding unexported module binding: main#sort-by-calls 
o|hiding unexported module binding: main#sort-by-time 
o|hiding unexported module binding: main#sort-by-avg 
o|hiding unexported module binding: main#sort-by-name 
o|hiding unexported module binding: main#set-decimals 
o|hiding unexported module binding: main#make-symbol-table 
o|hiding unexported module binding: main#read-profile 
o|hiding unexported module binding: main#format-string 
o|hiding unexported module binding: main#format-real 
o|hiding unexported module binding: main#write-profile 
S|applied compiler syntax:
S|  for-each		1
S|  foldl		6
S|  map		9
S|  foldr		3
o|eliminated procedure checks: 64 
o|specializations:
o|  1 (scheme#* integer integer)
o|  1 (scheme#make-string fixnum char)
o|  4 (scheme#/ * *)
o|  2 (scheme#* * *)
o|  3 (scheme#number->string *)
o|  2 (scheme#string-append string string)
o|  5 (scheme#+ * *)
o|  1 (scheme#= fixnum fixnum)
o|  1 (scheme#= integer integer)
o|  2 (scheme#- fixnum fixnum)
o|  1 (scheme#= * *)
o|  1 (scheme#char=? char char)
o|  1 (scheme#string-ref string fixnum)
o|  1 (scheme#> fixnum fixnum)
o|  1 (scheme#string-length string)
o|  8 (scheme#string=? string string)
o|  11 (scheme#> * *)
o|  1 (scheme#> integer integer)
o|  3 (scheme#eqv? * *)
o|  6 (##sys#check-list (or pair list) *)
o|  24 (scheme#cdr pair)
o|  7 (scheme#car pair)
(o e)|safe calls: 400 
(o e)|assignments to immediate values: 5 
o|dropping redundant toplevel assignment: main#sort-by 
o|removed side-effect free assignment to unused variable: main#partition 
o|removed side-effect free assignment to unused variable: main#span 
o|inlining procedure: k1383 
o|inlining procedure: k1383 
o|removed side-effect free assignment to unused variable: main#drop 
o|removed side-effect free assignment to unused variable: main#split-at 
o|removed side-effect free assignment to unused variable: main#append-map 
o|inlining procedure: k1653 
o|inlining procedure: k1653 
o|inlining procedure: k1684 
o|inlining procedure: k1684 
o|removed side-effect free assignment to unused variable: main#cons* 
o|removed side-effect free assignment to unused variable: main#concatenate 
o|removed side-effect free assignment to unused variable: main#delete-duplicates 
o|inlining procedure: k1901 
o|inlining procedure: k1901 
o|inlining procedure: k1893 
o|inlining procedure: k1893 
o|removed side-effect free assignment to unused variable: main#filter-map 
o|removed side-effect free assignment to unused variable: main#remove 
o|removed side-effect free assignment to unused variable: main#unzip1 
o|removed side-effect free assignment to unused variable: main#last 
o|removed side-effect free assignment to unused variable: main#list-index 
o|removed side-effect free assignment to unused variable: main#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: main#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: main#lset-union/eq? 
o|removed side-effect free assignment to unused variable: main#lset-intersection/eq? 
o|inlining procedure: k2292 
o|inlining procedure: k2292 
o|removed side-effect free assignment to unused variable: main#lset<=/eq? 
o|removed side-effect free assignment to unused variable: main#lset=/eq? 
o|removed side-effect free assignment to unused variable: main#length+ 
o|removed side-effect free assignment to unused variable: main#find 
o|removed side-effect free assignment to unused variable: main#find-tail 
o|removed side-effect free assignment to unused variable: main#iota 
o|removed side-effect free assignment to unused variable: main#make-list 
o|removed side-effect free assignment to unused variable: main#posq 
o|removed side-effect free assignment to unused variable: main#posv 
o|inlining procedure: k2826 
o|inlining procedure: "(chicken-profile.scm:128) main#third" 
o|inlining procedure: "(chicken-profile.scm:128) main#third" 
o|inlining procedure: k2826 
o|inlining procedure: k2842 
o|inlining procedure: k2842 
o|inlining procedure: "(chicken-profile.scm:126) main#second" 
o|inlining procedure: "(chicken-profile.scm:125) main#second" 
o|inlining procedure: k2856 
o|inlining procedure: "(chicken-profile.scm:135) main#second" 
o|inlining procedure: "(chicken-profile.scm:135) main#second" 
o|inlining procedure: k2856 
o|inlining procedure: "(chicken-profile.scm:133) main#third" 
o|inlining procedure: "(chicken-profile.scm:132) main#third" 
o|inlining procedure: k2880 
o|inlining procedure: "(chicken-profile.scm:142) main#third" 
o|inlining procedure: "(chicken-profile.scm:142) main#third" 
o|inlining procedure: k2880 
o|inlining procedure: "(chicken-profile.scm:146) main#first" 
o|inlining procedure: "(chicken-profile.scm:146) main#first" 
o|contracted procedure: "(chicken-profile.scm:181) main#alist-cons" 
o|inlining procedure: k3017 
o|inlining procedure: k3017 
o|inlining procedure: k3072 
o|contracted procedure: "(chicken-profile.scm:175) g648658" 
o|inlining procedure: k3043 
o|inlining procedure: k3043 
o|inlining procedure: k3072 
o|inlining procedure: "(chicken-profile.scm:176) main#first" 
o|inlining procedure: "(chicken-profile.scm:174) main#first" 
o|contracted procedure: "(chicken-profile.scm:168) main#make-symbol-table" 
o|substituted constant variable: main#symbol-table-size 
o|inlining procedure: k3151 
o|inlining procedure: k3151 
o|substituted constant variable: a3223 
o|substituted constant variable: a3242 
o|contracted procedure: "(chicken-profile.scm:262) main#run" 
o|inlining procedure: k2607 
o|contracted procedure: "(chicken-profile.scm:91) main#write-profile" 
o|inlining procedure: k3390 
o|inlining procedure: k3390 
o|inlining procedure: k3440 
o|inlining procedure: k3440 
o|inlining procedure: k3464 
o|inlining procedure: k3464 
o|substituted constant variable: spacing807 
o|substituted constant variable: a3503 
o|inlining procedure: k3507 
o|inlining procedure: k3507 
o|substituted constant variable: g937940 
o|inlining procedure: k3529 
o|contracted procedure: "(chicken-profile.scm:249) g822823" 
o|inlining procedure: k3569 
o|inlining procedure: k3569 
o|inlining procedure: k3617 
o|inlining procedure: k3617 
o|inlining procedure: k3529 
o|substituted constant variable: spacing807 
o|substituted constant variable: spacing807 
o|substituted constant variable: a3656 
o|inlining procedure: k3660 
o|contracted procedure: "(chicken-profile.scm:232) g781790" 
o|substituted constant variable: a3319 
o|substituted constant variable: a3325 
o|inlining procedure: "(chicken-profile.scm:237) main#first" 
o|contracted procedure: "(chicken-profile.scm:236) main#fifth" 
o|contracted procedure: "(chicken-profile.scm:235) main#fourth" 
o|inlining procedure: "(chicken-profile.scm:234) main#third" 
o|inlining procedure: "(chicken-profile.scm:233) main#second" 
o|inlining procedure: k3660 
o|substituted constant variable: a3701 
o|inlining procedure: "(chicken-profile.scm:243) main#second" 
o|inlining procedure: k3743 
o|inlining procedure: k3743 
o|substituted constant variable: a3747 
o|substituted constant variable: a3752 
o|substituted constant variable: a3759 
o|inlining procedure: k3755 
o|inlining procedure: k3755 
o|inlining procedure: "(chicken-profile.scm:222) main#third" 
o|inlining procedure: "(chicken-profile.scm:221) main#second" 
o|inlining procedure: k3771 
o|inlining procedure: k3771 
o|inlining procedure: k3805 
o|inlining procedure: "(chicken-profile.scm:214) main#third" 
o|inlining procedure: "(chicken-profile.scm:215) main#third" 
o|inlining procedure: k3805 
o|substituted constant variable: g718721 
o|inlining procedure: k2623 
o|inlining procedure: k2623 
o|inlining procedure: "(chicken-profile.scm:87) main#first" 
o|inlining procedure: k2657 
o|inlining procedure: k2657 
o|inlining procedure: k2679 
o|inlining procedure: k2679 
o|substituted constant variable: a2689 
o|inlining procedure: k2607 
o|inlining procedure: k2706 
o|inlining procedure: k2706 
o|substituted constant variable: a2726 
o|substituted constant variable: a2741 
o|inlining procedure: k2737 
o|inlining procedure: k2737 
o|substituted constant variable: a2747 
o|substituted constant variable: a2756 
o|inlining procedure: k2752 
o|inlining procedure: k2752 
o|substituted constant variable: a2762 
o|substituted constant variable: a2768 
o|inlining procedure: k2764 
o|inlining procedure: k2764 
o|substituted constant variable: a2774 
o|substituted constant variable: a2780 
o|inlining procedure: k2776 
o|contracted procedure: "(chicken-profile.scm:117) main#set-decimals" 
o|inlining procedure: k2932 
o|substituted constant variable: a2942 
o|inlining procedure: k2932 
o|folded constant expression: (scheme#char->integer (quote #\0)) 
o|inlining procedure: k2950 
o|inlining procedure: k2950 
o|substituted constant variable: a2975 
o|inlining procedure: k2776 
o|inlining procedure: k2797 
o|inlining procedure: k2797 
o|substituted constant variable: a2810 
o|substituted constant variable: a2807 
o|substituted constant variable: a2815 
o|replaced variables: 254 
o|removed binding forms: 139 
o|substituted constant variable: r13843873 
o|removed side-effect free assignment to unused variable: main#every 
o|removed side-effect free assignment to unused variable: main#any 
o|removed side-effect free assignment to unused variable: main#first 
o|removed side-effect free assignment to unused variable: main#second 
o|removed side-effect free assignment to unused variable: main#third 
o|removed side-effect free assignment to unused variable: main#list-tabulate 
o|removed side-effect free assignment to unused variable: main#symbol-table-size 
o|substituted constant variable: r28433898 
o|substituted constant variable: r30443957 
o|substituted constant variable: r34413975 
o|substituted constant variable: a3497 
o|converted assignments to bindings: (print-row885) 
o|contracted procedure: "(chicken-profile.scm:243) main#filter" 
o|substituted constant variable: r18943882 
o|substituted constant variable: r37444010 
o|substituted constant variable: r37444010 
o|substituted constant variable: r37564013 
o|inlining procedure: k2694 
o|inlining procedure: k2694 
o|inlining procedure: k2694 
o|inlining procedure: k2694 
o|inlining procedure: k2694 
o|inlining procedure: k2694 
o|contracted procedure: k2929 
o|converted assignments to bindings: (arg-digit626) 
o|inlining procedure: k2694 
o|simplifications: ((let . 2)) 
o|replaced variables: 46 
o|removed binding forms: 302 
o|substituted constant variable: r2930 
o|replaced variables: 11 
o|removed binding forms: 76 
o|inlining procedure: k3097 
o|inlining procedure: k3097 
o|inlining procedure: k3097 
o|inlining procedure: k2682 
o|inlining procedure: k2682 
o|replaced variables: 23 
o|removed binding forms: 9 
o|substituted constant variable: r30984168 
o|substituted constant variable: r30984169 
o|substituted constant variable: r26834195 
o|simplifications: ((let . 1)) 
o|removed binding forms: 25 
o|removed conditional forms: 1 
o|replaced variables: 3 
o|removed binding forms: 3 
o|removed binding forms: 1 
o|simplifications: ((if . 13) (##core#call . 174)) 
o|  call simplifications:
o|    scheme#member
o|    scheme#string=?
o|    ##sys#size
o|    chicken.fixnum#fx>
o|    scheme#string-ref
o|    scheme#char->integer
o|    scheme#<=
o|    scheme#eq?	2
o|    scheme#<
o|    scheme#cddddr
o|    scheme#not
o|    scheme#list	9
o|    scheme#length	2
o|    scheme#-
o|    scheme#null?	7
o|    scheme#string-length	3
o|    chicken.fixnum#fxmax
o|    scheme#symbol?	2
o|    scheme#eof-object?
o|    scheme#cdr	4
o|    ##sys#check-list	12
o|    scheme#pair?	15
o|    ##sys#setslot	6
o|    ##sys#slot	36
o|    scheme#cadddr	3
o|    scheme#cadr	7
o|    scheme#caddr	10
o|    chicken.fixnum#fx<=
o|    scheme#car	13
o|    chicken.fixnum#fx-	2
o|    scheme#cons	27
o|contracted procedure: k1386 
o|contracted procedure: k1393 
o|contracted procedure: k1403 
o|contracted procedure: k2595 
o|contracted procedure: k2591 
o|contracted procedure: k2587 
o|contracted procedure: k2583 
o|contracted procedure: k2579 
o|contracted procedure: k2575 
o|contracted procedure: k2571 
o|contracted procedure: k2820 
o|contracted procedure: k2823 
o|contracted procedure: k2832 
o|contracted procedure: k2836 
o|contracted procedure: k2850 
o|contracted procedure: k2853 
o|contracted procedure: k2862 
o|contracted procedure: k2866 
o|contracted procedure: k2874 
o|contracted procedure: k2877 
o|contracted procedure: k2886 
o|contracted procedure: k2890 
o|contracted procedure: k2910 
o|contracted procedure: k2914 
o|contracted procedure: k3127 
o|contracted procedure: k2991 
o|contracted procedure: k1878 
o|contracted procedure: k3020 
o|contracted procedure: k3034 
o|contracted procedure: k3038 
o|contracted procedure: k3054 
o|contracted procedure: k3057 
o|contracted procedure: k3060 
o|contracted procedure: k3063 
o|contracted procedure: k3111 
o|contracted procedure: k3075 
o|contracted procedure: k3081 
o|contracted procedure: k3089 
o|contracted procedure: k3093 
o|contracted procedure: k3101 
o|contracted procedure: k3105 
o|contracted procedure: k3118 
o|contracted procedure: k3121 
o|contracted procedure: k3190 
o|contracted procedure: k3133 
o|contracted procedure: k3184 
o|contracted procedure: k3136 
o|contracted procedure: k3178 
o|contracted procedure: k3139 
o|contracted procedure: k3172 
o|contracted procedure: k3142 
o|contracted procedure: k3145 
o|contracted procedure: k3169 
o|contracted procedure: k3165 
o|contracted procedure: k3210 
o|contracted procedure: k2610 
o|contracted procedure: k3257 
o|contracted procedure: k3261 
o|contracted procedure: k3274 
o|contracted procedure: k3340 
o|contracted procedure: k3346 
o|contracted procedure: k3349 
o|contracted procedure: k3355 
o|contracted procedure: k3358 
o|contracted procedure: k3375 
o|contracted procedure: k3378 
o|contracted procedure: k3381 
o|contracted procedure: k3396 
o|contracted procedure: k3399 
o|contracted procedure: k3407 
o|contracted procedure: k3411 
o|contracted procedure: k3415 
o|contracted procedure: k3423 
o|contracted procedure: k3427 
o|contracted procedure: k3431 
o|contracted procedure: k3437 
o|contracted procedure: k3443 
o|contracted procedure: k3455 
o|contracted procedure: k3467 
o|contracted procedure: k3477 
o|contracted procedure: k3481 
o|contracted procedure: k3490 
o|contracted procedure: k3500 
o|contracted procedure: k3510 
o|contracted procedure: k3517 
o|contracted procedure: k3523 
o|contracted procedure: k3532 
o|contracted procedure: k3539 
o|contracted procedure: k3652 
o|contracted procedure: k3545 
o|contracted procedure: k3548 
o|contracted procedure: k3551 
o|contracted procedure: k3557 
o|contracted procedure: k3560 
o|contracted procedure: k3608 
o|contracted procedure: k3572 
o|contracted procedure: k3575 
o|contracted procedure: k3578 
o|contracted procedure: k3586 
o|contracted procedure: k3590 
o|contracted procedure: k3598 
o|contracted procedure: k3602 
o|contracted procedure: k3620 
o|contracted procedure: k3642 
o|contracted procedure: k3638 
o|contracted procedure: k3623 
o|contracted procedure: k3626 
o|contracted procedure: k3634 
o|contracted procedure: k3663 
o|contracted procedure: k3666 
o|contracted procedure: k3669 
o|contracted procedure: k3677 
o|contracted procedure: k3685 
o|contracted procedure: k3279 
o|contracted procedure: k3282 
o|contracted procedure: k3285 
o|contracted procedure: k3326 
o|contracted procedure: k3334 
o|contracted procedure: k1833 
o|contracted procedure: k3698 
o|contracted procedure: k1884 
o|contracted procedure: k1896 
o|contracted procedure: k1914 
o|contracted procedure: k1922 
o|contracted procedure: k3710 
o|contracted procedure: k3714 
o|contracted procedure: k3723 
o|contracted procedure: k3726 
o|contracted procedure: k3736 
o|inlining procedure: k3729 
o|inlining procedure: k3729 
o|contracted procedure: k3774 
o|contracted procedure: k3777 
o|contracted procedure: k3780 
o|contracted procedure: k3788 
o|contracted procedure: k3796 
o|contracted procedure: k3808 
o|contracted procedure: k3815 
o|contracted procedure: k3829 
o|contracted procedure: k3819 
o|contracted procedure: k3838 
o|contracted procedure: k3845 
o|contracted procedure: k3826 
o|contracted procedure: k2626 
o|inlining procedure: k2623 
o|contracted procedure: k2650 
o|contracted procedure: k2660 
o|contracted procedure: k2666 
o|contracted procedure: k2670 
o|contracted procedure: k2700 
o|contracted procedure: k2709 
o|contracted procedure: k2947 
o|contracted procedure: k2925 
o|contracted procedure: k2972 
o|contracted procedure: k2953 
o|contracted procedure: k2812 
o|contracted procedure: k2804 
o|contracted procedure: k3862 
o|contracted procedure: k3866 
o|contracted procedure: k3870 
o|simplifications: ((if . 1) (##core#call . 2) (let . 19)) 
o|  call simplifications:
o|    scheme#-	2
o|removed binding forms: 157 
o|contracted procedure: k3234 
o|substituted constant variable: r3863 
o|substituted constant variable: r3867 
o|substituted constant variable: r3863 
o|substituted constant variable: r3867 
o|substituted constant variable: r3871 
o|replaced variables: 87 
o|removed binding forms: 2 
o|inlining procedure: k3007 
o|removed binding forms: 55 
o|contracted procedure: k3288 
o|removed binding forms: 2 
o|replaced variables: 5 
o|removed binding forms: 1 
o|customizable procedures: (k2791 arg-digit626 next-number594 main#print-usage loop581 next-arg593 k2613 foldl719723 g743752 map-loop737766 k3740 k3270 foldr281284 g286287 main#format-real map-loop775798 map-loop849866 map-loop828873 foldl815819 foldl938942 for-each-loop888949 k3393 map-loop899920 va4312 k3078 map-loop642668 doloop637638 main#take) 
o|calls to known targets: 69 
o|identified direct recursive calls: f_1381 1 
o|identified direct recursive calls: f_3505 1 
o|identified direct recursive calls: f_3615 1 
o|identified direct recursive calls: f_1891 1 
o|identified direct recursive calls: f_2605 5 
o|fast box initializations: 14 
o|fast global references: 28 
o|fast global assignments: 28 
o|dropping unused closure argument: f_1381 
o|dropping unused closure argument: f_2558 
o|dropping unused closure argument: f_3197 
*/
/* end of file */

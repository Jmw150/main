/* Generated from c-platform.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: c-platform.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -emit-import-library chicken.compiler.c-platform -output-file c-platform.c
   unit: c-platform
   uses: library eval expand internal optimizer support compiler
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_optimizer_toplevel)
C_externimport void C_ccall C_optimizer_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_support_toplevel)
C_externimport void C_ccall C_support_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_compiler_toplevel)
C_externimport void C_ccall C_compiler_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[874];
static double C_possibly_force_alignment;


C_noret_decl(f_1538)
static void C_ccall f_1538(C_word c,C_word *av) C_noret;
C_noret_decl(f_1541)
static void C_ccall f_1541(C_word c,C_word *av) C_noret;
C_noret_decl(f_1544)
static void C_ccall f_1544(C_word c,C_word *av) C_noret;
C_noret_decl(f_1547)
static void C_ccall f_1547(C_word c,C_word *av) C_noret;
C_noret_decl(f_1550)
static void C_ccall f_1550(C_word c,C_word *av) C_noret;
C_noret_decl(f_1553)
static void C_ccall f_1553(C_word c,C_word *av) C_noret;
C_noret_decl(f_1556)
static void C_ccall f_1556(C_word c,C_word *av) C_noret;
C_noret_decl(f_1991)
static void C_fcall f_1991(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1997)
static void C_fcall f_1997(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2011)
static void C_ccall f_2011(C_word c,C_word *av) C_noret;
C_noret_decl(f_2333)
static C_word C_fcall f_2333(C_word t0);
C_noret_decl(f_2575)
static void C_fcall f_2575(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2589)
static void C_ccall f_2589(C_word c,C_word *av) C_noret;
C_noret_decl(f_2593)
static void C_ccall f_2593(C_word c,C_word *av) C_noret;
C_noret_decl(f_2837)
static void C_ccall f_2837(C_word c,C_word *av) C_noret;
C_noret_decl(f_2844)
static void C_ccall f_2844(C_word c,C_word *av) C_noret;
C_noret_decl(f_2847)
static void C_ccall f_2847(C_word c,C_word *av) C_noret;
C_noret_decl(f_2850)
static void C_ccall f_2850(C_word c,C_word *av) C_noret;
C_noret_decl(f_2865)
static void C_ccall f_2865(C_word c,C_word *av) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872(C_word c,C_word *av) C_noret;
C_noret_decl(f_2881)
static void C_ccall f_2881(C_word c,C_word *av) C_noret;
C_noret_decl(f_2883)
static void C_fcall f_2883(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2885)
static void C_ccall f_2885(C_word c,C_word *av) C_noret;
C_noret_decl(f_2907)
static void C_ccall f_2907(C_word c,C_word *av) C_noret;
C_noret_decl(f_2940)
static void C_ccall f_2940(C_word c,C_word *av) C_noret;
C_noret_decl(f_2948)
static void C_ccall f_2948(C_word c,C_word *av) C_noret;
C_noret_decl(f_2951)
static void C_ccall f_2951(C_word c,C_word *av) C_noret;
C_noret_decl(f_2953)
static void C_ccall f_2953(C_word c,C_word *av) C_noret;
C_noret_decl(f_2969)
static void C_ccall f_2969(C_word c,C_word *av) C_noret;
C_noret_decl(f_2978)
static void C_fcall f_2978(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2981)
static void C_fcall f_2981(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2996)
static void C_ccall f_2996(C_word c,C_word *av) C_noret;
C_noret_decl(f_3008)
static void C_ccall f_3008(C_word c,C_word *av) C_noret;
C_noret_decl(f_3022)
static void C_ccall f_3022(C_word c,C_word *av) C_noret;
C_noret_decl(f_3026)
static void C_ccall f_3026(C_word c,C_word *av) C_noret;
C_noret_decl(f_3035)
static void C_ccall f_3035(C_word c,C_word *av) C_noret;
C_noret_decl(f_3049)
static void C_ccall f_3049(C_word c,C_word *av) C_noret;
C_noret_decl(f_3053)
static void C_ccall f_3053(C_word c,C_word *av) C_noret;
C_noret_decl(f_3083)
static void C_ccall f_3083(C_word c,C_word *av) C_noret;
C_noret_decl(f_3087)
static void C_ccall f_3087(C_word c,C_word *av) C_noret;
C_noret_decl(f_3091)
static void C_ccall f_3091(C_word c,C_word *av) C_noret;
C_noret_decl(f_3095)
static void C_ccall f_3095(C_word c,C_word *av) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word *av) C_noret;
C_noret_decl(f_3107)
static void C_ccall f_3107(C_word c,C_word *av) C_noret;
C_noret_decl(f_3110)
static void C_ccall f_3110(C_word c,C_word *av) C_noret;
C_noret_decl(f_3113)
static void C_ccall f_3113(C_word c,C_word *av) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word *av) C_noret;
C_noret_decl(f_3143)
static void C_ccall f_3143(C_word c,C_word *av) C_noret;
C_noret_decl(f_3151)
static void C_ccall f_3151(C_word c,C_word *av) C_noret;
C_noret_decl(f_3168)
static void C_ccall f_3168(C_word c,C_word *av) C_noret;
C_noret_decl(f_3170)
static void C_fcall f_3170(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3195)
static void C_ccall f_3195(C_word c,C_word *av) C_noret;
C_noret_decl(f_3206)
static void C_ccall f_3206(C_word c,C_word *av) C_noret;
C_noret_decl(f_3210)
static void C_ccall f_3210(C_word c,C_word *av) C_noret;
C_noret_decl(f_3213)
static void C_ccall f_3213(C_word c,C_word *av) C_noret;
C_noret_decl(f_3227)
static void C_ccall f_3227(C_word c,C_word *av) C_noret;
C_noret_decl(f_3231)
static void C_ccall f_3231(C_word c,C_word *av) C_noret;
C_noret_decl(f_3254)
static void C_ccall f_3254(C_word c,C_word *av) C_noret;
C_noret_decl(f_3269)
static void C_ccall f_3269(C_word c,C_word *av) C_noret;
C_noret_decl(f_3277)
static void C_ccall f_3277(C_word c,C_word *av) C_noret;
C_noret_decl(f_3286)
static void C_ccall f_3286(C_word c,C_word *av) C_noret;
C_noret_decl(f_3290)
static void C_ccall f_3290(C_word c,C_word *av) C_noret;
C_noret_decl(f_3293)
static void C_ccall f_3293(C_word c,C_word *av) C_noret;
C_noret_decl(f_3296)
static void C_ccall f_3296(C_word c,C_word *av) C_noret;
C_noret_decl(f_3298)
static void C_fcall f_3298(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3304)
static void C_ccall f_3304(C_word c,C_word *av) C_noret;
C_noret_decl(f_3316)
static void C_ccall f_3316(C_word c,C_word *av) C_noret;
C_noret_decl(f_3335)
static void C_ccall f_3335(C_word c,C_word *av) C_noret;
C_noret_decl(f_3366)
static void C_ccall f_3366(C_word c,C_word *av) C_noret;
C_noret_decl(f_3369)
static void C_ccall f_3369(C_word c,C_word *av) C_noret;
C_noret_decl(f_3372)
static void C_ccall f_3372(C_word c,C_word *av) C_noret;
C_noret_decl(f_3375)
static void C_ccall f_3375(C_word c,C_word *av) C_noret;
C_noret_decl(f_3378)
static void C_ccall f_3378(C_word c,C_word *av) C_noret;
C_noret_decl(f_3381)
static void C_ccall f_3381(C_word c,C_word *av) C_noret;
C_noret_decl(f_3382)
static void C_ccall f_3382(C_word c,C_word *av) C_noret;
C_noret_decl(f_3408)
static void C_ccall f_3408(C_word c,C_word *av) C_noret;
C_noret_decl(f_3411)
static void C_ccall f_3411(C_word c,C_word *av) C_noret;
C_noret_decl(f_3413)
static void C_ccall f_3413(C_word c,C_word *av) C_noret;
C_noret_decl(f_3447)
static void C_ccall f_3447(C_word c,C_word *av) C_noret;
C_noret_decl(f_3474)
static void C_ccall f_3474(C_word c,C_word *av) C_noret;
C_noret_decl(f_3477)
static void C_ccall f_3477(C_word c,C_word *av) C_noret;
C_noret_decl(f_3480)
static void C_ccall f_3480(C_word c,C_word *av) C_noret;
C_noret_decl(f_3495)
static void C_ccall f_3495(C_word c,C_word *av) C_noret;
C_noret_decl(f_3499)
static void C_ccall f_3499(C_word c,C_word *av) C_noret;
C_noret_decl(f_3511)
static void C_ccall f_3511(C_word c,C_word *av) C_noret;
C_noret_decl(f_3523)
static void C_ccall f_3523(C_word c,C_word *av) C_noret;
C_noret_decl(f_3535)
static void C_ccall f_3535(C_word c,C_word *av) C_noret;
C_noret_decl(f_3539)
static void C_ccall f_3539(C_word c,C_word *av) C_noret;
C_noret_decl(f_3547)
static void C_ccall f_3547(C_word c,C_word *av) C_noret;
C_noret_decl(f_3554)
static void C_ccall f_3554(C_word c,C_word *av) C_noret;
C_noret_decl(f_3558)
static void C_ccall f_3558(C_word c,C_word *av) C_noret;
C_noret_decl(f_3562)
static void C_ccall f_3562(C_word c,C_word *av) C_noret;
C_noret_decl(f_3566)
static void C_ccall f_3566(C_word c,C_word *av) C_noret;
C_noret_decl(f_3570)
static void C_ccall f_3570(C_word c,C_word *av) C_noret;
C_noret_decl(f_3578)
static void C_ccall f_3578(C_word c,C_word *av) C_noret;
C_noret_decl(f_3581)
static void C_ccall f_3581(C_word c,C_word *av) C_noret;
C_noret_decl(f_3584)
static void C_ccall f_3584(C_word c,C_word *av) C_noret;
C_noret_decl(f_3587)
static void C_ccall f_3587(C_word c,C_word *av) C_noret;
C_noret_decl(f_3590)
static void C_ccall f_3590(C_word c,C_word *av) C_noret;
C_noret_decl(f_3593)
static void C_ccall f_3593(C_word c,C_word *av) C_noret;
C_noret_decl(f_3596)
static void C_ccall f_3596(C_word c,C_word *av) C_noret;
C_noret_decl(f_3599)
static void C_ccall f_3599(C_word c,C_word *av) C_noret;
C_noret_decl(f_3602)
static void C_ccall f_3602(C_word c,C_word *av) C_noret;
C_noret_decl(f_3605)
static void C_ccall f_3605(C_word c,C_word *av) C_noret;
C_noret_decl(f_3608)
static void C_ccall f_3608(C_word c,C_word *av) C_noret;
C_noret_decl(f_3611)
static void C_ccall f_3611(C_word c,C_word *av) C_noret;
C_noret_decl(f_3614)
static void C_ccall f_3614(C_word c,C_word *av) C_noret;
C_noret_decl(f_3617)
static void C_ccall f_3617(C_word c,C_word *av) C_noret;
C_noret_decl(f_3620)
static void C_ccall f_3620(C_word c,C_word *av) C_noret;
C_noret_decl(f_3623)
static void C_ccall f_3623(C_word c,C_word *av) C_noret;
C_noret_decl(f_3626)
static void C_ccall f_3626(C_word c,C_word *av) C_noret;
C_noret_decl(f_3629)
static void C_ccall f_3629(C_word c,C_word *av) C_noret;
C_noret_decl(f_3632)
static void C_ccall f_3632(C_word c,C_word *av) C_noret;
C_noret_decl(f_3635)
static void C_ccall f_3635(C_word c,C_word *av) C_noret;
C_noret_decl(f_3638)
static void C_ccall f_3638(C_word c,C_word *av) C_noret;
C_noret_decl(f_3641)
static void C_ccall f_3641(C_word c,C_word *av) C_noret;
C_noret_decl(f_3644)
static void C_ccall f_3644(C_word c,C_word *av) C_noret;
C_noret_decl(f_3647)
static void C_ccall f_3647(C_word c,C_word *av) C_noret;
C_noret_decl(f_3650)
static void C_ccall f_3650(C_word c,C_word *av) C_noret;
C_noret_decl(f_3653)
static void C_ccall f_3653(C_word c,C_word *av) C_noret;
C_noret_decl(f_3656)
static void C_ccall f_3656(C_word c,C_word *av) C_noret;
C_noret_decl(f_3659)
static void C_ccall f_3659(C_word c,C_word *av) C_noret;
C_noret_decl(f_3662)
static void C_ccall f_3662(C_word c,C_word *av) C_noret;
C_noret_decl(f_3665)
static void C_ccall f_3665(C_word c,C_word *av) C_noret;
C_noret_decl(f_3668)
static void C_ccall f_3668(C_word c,C_word *av) C_noret;
C_noret_decl(f_3671)
static void C_ccall f_3671(C_word c,C_word *av) C_noret;
C_noret_decl(f_3674)
static void C_ccall f_3674(C_word c,C_word *av) C_noret;
C_noret_decl(f_3677)
static void C_ccall f_3677(C_word c,C_word *av) C_noret;
C_noret_decl(f_3680)
static void C_ccall f_3680(C_word c,C_word *av) C_noret;
C_noret_decl(f_3683)
static void C_ccall f_3683(C_word c,C_word *av) C_noret;
C_noret_decl(f_3686)
static void C_ccall f_3686(C_word c,C_word *av) C_noret;
C_noret_decl(f_3689)
static void C_ccall f_3689(C_word c,C_word *av) C_noret;
C_noret_decl(f_3692)
static void C_ccall f_3692(C_word c,C_word *av) C_noret;
C_noret_decl(f_3695)
static void C_ccall f_3695(C_word c,C_word *av) C_noret;
C_noret_decl(f_3698)
static void C_ccall f_3698(C_word c,C_word *av) C_noret;
C_noret_decl(f_3701)
static void C_ccall f_3701(C_word c,C_word *av) C_noret;
C_noret_decl(f_3704)
static void C_ccall f_3704(C_word c,C_word *av) C_noret;
C_noret_decl(f_3707)
static void C_ccall f_3707(C_word c,C_word *av) C_noret;
C_noret_decl(f_3710)
static void C_ccall f_3710(C_word c,C_word *av) C_noret;
C_noret_decl(f_3713)
static void C_ccall f_3713(C_word c,C_word *av) C_noret;
C_noret_decl(f_3716)
static void C_ccall f_3716(C_word c,C_word *av) C_noret;
C_noret_decl(f_3719)
static void C_ccall f_3719(C_word c,C_word *av) C_noret;
C_noret_decl(f_3722)
static void C_ccall f_3722(C_word c,C_word *av) C_noret;
C_noret_decl(f_3725)
static void C_ccall f_3725(C_word c,C_word *av) C_noret;
C_noret_decl(f_3728)
static void C_ccall f_3728(C_word c,C_word *av) C_noret;
C_noret_decl(f_3731)
static void C_ccall f_3731(C_word c,C_word *av) C_noret;
C_noret_decl(f_3734)
static void C_ccall f_3734(C_word c,C_word *av) C_noret;
C_noret_decl(f_3737)
static void C_ccall f_3737(C_word c,C_word *av) C_noret;
C_noret_decl(f_3740)
static void C_ccall f_3740(C_word c,C_word *av) C_noret;
C_noret_decl(f_3743)
static void C_ccall f_3743(C_word c,C_word *av) C_noret;
C_noret_decl(f_3746)
static void C_ccall f_3746(C_word c,C_word *av) C_noret;
C_noret_decl(f_3749)
static void C_ccall f_3749(C_word c,C_word *av) C_noret;
C_noret_decl(f_3752)
static void C_ccall f_3752(C_word c,C_word *av) C_noret;
C_noret_decl(f_3755)
static void C_ccall f_3755(C_word c,C_word *av) C_noret;
C_noret_decl(f_3758)
static void C_ccall f_3758(C_word c,C_word *av) C_noret;
C_noret_decl(f_3761)
static void C_ccall f_3761(C_word c,C_word *av) C_noret;
C_noret_decl(f_3764)
static void C_ccall f_3764(C_word c,C_word *av) C_noret;
C_noret_decl(f_3767)
static void C_ccall f_3767(C_word c,C_word *av) C_noret;
C_noret_decl(f_3770)
static void C_ccall f_3770(C_word c,C_word *av) C_noret;
C_noret_decl(f_3773)
static void C_ccall f_3773(C_word c,C_word *av) C_noret;
C_noret_decl(f_3776)
static void C_ccall f_3776(C_word c,C_word *av) C_noret;
C_noret_decl(f_3779)
static void C_ccall f_3779(C_word c,C_word *av) C_noret;
C_noret_decl(f_3782)
static void C_ccall f_3782(C_word c,C_word *av) C_noret;
C_noret_decl(f_3785)
static void C_ccall f_3785(C_word c,C_word *av) C_noret;
C_noret_decl(f_3788)
static void C_ccall f_3788(C_word c,C_word *av) C_noret;
C_noret_decl(f_3791)
static void C_ccall f_3791(C_word c,C_word *av) C_noret;
C_noret_decl(f_3794)
static void C_ccall f_3794(C_word c,C_word *av) C_noret;
C_noret_decl(f_3797)
static void C_ccall f_3797(C_word c,C_word *av) C_noret;
C_noret_decl(f_3800)
static void C_ccall f_3800(C_word c,C_word *av) C_noret;
C_noret_decl(f_3803)
static void C_ccall f_3803(C_word c,C_word *av) C_noret;
C_noret_decl(f_3806)
static void C_ccall f_3806(C_word c,C_word *av) C_noret;
C_noret_decl(f_3809)
static void C_ccall f_3809(C_word c,C_word *av) C_noret;
C_noret_decl(f_3812)
static void C_ccall f_3812(C_word c,C_word *av) C_noret;
C_noret_decl(f_3815)
static void C_ccall f_3815(C_word c,C_word *av) C_noret;
C_noret_decl(f_3818)
static void C_ccall f_3818(C_word c,C_word *av) C_noret;
C_noret_decl(f_3821)
static void C_ccall f_3821(C_word c,C_word *av) C_noret;
C_noret_decl(f_3824)
static void C_ccall f_3824(C_word c,C_word *av) C_noret;
C_noret_decl(f_3827)
static void C_ccall f_3827(C_word c,C_word *av) C_noret;
C_noret_decl(f_3830)
static void C_ccall f_3830(C_word c,C_word *av) C_noret;
C_noret_decl(f_3833)
static void C_ccall f_3833(C_word c,C_word *av) C_noret;
C_noret_decl(f_3836)
static void C_ccall f_3836(C_word c,C_word *av) C_noret;
C_noret_decl(f_3839)
static void C_ccall f_3839(C_word c,C_word *av) C_noret;
C_noret_decl(f_3842)
static void C_ccall f_3842(C_word c,C_word *av) C_noret;
C_noret_decl(f_3845)
static void C_ccall f_3845(C_word c,C_word *av) C_noret;
C_noret_decl(f_3848)
static void C_ccall f_3848(C_word c,C_word *av) C_noret;
C_noret_decl(f_3851)
static void C_ccall f_3851(C_word c,C_word *av) C_noret;
C_noret_decl(f_3854)
static void C_ccall f_3854(C_word c,C_word *av) C_noret;
C_noret_decl(f_3857)
static void C_ccall f_3857(C_word c,C_word *av) C_noret;
C_noret_decl(f_3860)
static void C_ccall f_3860(C_word c,C_word *av) C_noret;
C_noret_decl(f_3863)
static void C_ccall f_3863(C_word c,C_word *av) C_noret;
C_noret_decl(f_3866)
static void C_ccall f_3866(C_word c,C_word *av) C_noret;
C_noret_decl(f_3869)
static void C_ccall f_3869(C_word c,C_word *av) C_noret;
C_noret_decl(f_3872)
static void C_ccall f_3872(C_word c,C_word *av) C_noret;
C_noret_decl(f_3875)
static void C_ccall f_3875(C_word c,C_word *av) C_noret;
C_noret_decl(f_3878)
static void C_ccall f_3878(C_word c,C_word *av) C_noret;
C_noret_decl(f_3881)
static void C_ccall f_3881(C_word c,C_word *av) C_noret;
C_noret_decl(f_3884)
static void C_ccall f_3884(C_word c,C_word *av) C_noret;
C_noret_decl(f_3887)
static void C_ccall f_3887(C_word c,C_word *av) C_noret;
C_noret_decl(f_3890)
static void C_ccall f_3890(C_word c,C_word *av) C_noret;
C_noret_decl(f_3893)
static void C_ccall f_3893(C_word c,C_word *av) C_noret;
C_noret_decl(f_3896)
static void C_ccall f_3896(C_word c,C_word *av) C_noret;
C_noret_decl(f_3899)
static void C_ccall f_3899(C_word c,C_word *av) C_noret;
C_noret_decl(f_3902)
static void C_ccall f_3902(C_word c,C_word *av) C_noret;
C_noret_decl(f_3905)
static void C_ccall f_3905(C_word c,C_word *av) C_noret;
C_noret_decl(f_3908)
static void C_ccall f_3908(C_word c,C_word *av) C_noret;
C_noret_decl(f_3911)
static void C_ccall f_3911(C_word c,C_word *av) C_noret;
C_noret_decl(f_3914)
static void C_ccall f_3914(C_word c,C_word *av) C_noret;
C_noret_decl(f_3917)
static void C_ccall f_3917(C_word c,C_word *av) C_noret;
C_noret_decl(f_3920)
static void C_ccall f_3920(C_word c,C_word *av) C_noret;
C_noret_decl(f_3923)
static void C_ccall f_3923(C_word c,C_word *av) C_noret;
C_noret_decl(f_3926)
static void C_ccall f_3926(C_word c,C_word *av) C_noret;
C_noret_decl(f_3929)
static void C_ccall f_3929(C_word c,C_word *av) C_noret;
C_noret_decl(f_3932)
static void C_ccall f_3932(C_word c,C_word *av) C_noret;
C_noret_decl(f_3935)
static void C_ccall f_3935(C_word c,C_word *av) C_noret;
C_noret_decl(f_3938)
static void C_ccall f_3938(C_word c,C_word *av) C_noret;
C_noret_decl(f_3941)
static void C_ccall f_3941(C_word c,C_word *av) C_noret;
C_noret_decl(f_3944)
static void C_ccall f_3944(C_word c,C_word *av) C_noret;
C_noret_decl(f_3947)
static void C_ccall f_3947(C_word c,C_word *av) C_noret;
C_noret_decl(f_3950)
static void C_ccall f_3950(C_word c,C_word *av) C_noret;
C_noret_decl(f_3953)
static void C_ccall f_3953(C_word c,C_word *av) C_noret;
C_noret_decl(f_3956)
static void C_ccall f_3956(C_word c,C_word *av) C_noret;
C_noret_decl(f_3959)
static void C_ccall f_3959(C_word c,C_word *av) C_noret;
C_noret_decl(f_3962)
static void C_ccall f_3962(C_word c,C_word *av) C_noret;
C_noret_decl(f_3965)
static void C_ccall f_3965(C_word c,C_word *av) C_noret;
C_noret_decl(f_3968)
static void C_ccall f_3968(C_word c,C_word *av) C_noret;
C_noret_decl(f_3971)
static void C_ccall f_3971(C_word c,C_word *av) C_noret;
C_noret_decl(f_3974)
static void C_ccall f_3974(C_word c,C_word *av) C_noret;
C_noret_decl(f_3977)
static void C_ccall f_3977(C_word c,C_word *av) C_noret;
C_noret_decl(f_3980)
static void C_ccall f_3980(C_word c,C_word *av) C_noret;
C_noret_decl(f_3983)
static void C_ccall f_3983(C_word c,C_word *av) C_noret;
C_noret_decl(f_3986)
static void C_ccall f_3986(C_word c,C_word *av) C_noret;
C_noret_decl(f_3989)
static void C_ccall f_3989(C_word c,C_word *av) C_noret;
C_noret_decl(f_3992)
static void C_ccall f_3992(C_word c,C_word *av) C_noret;
C_noret_decl(f_3995)
static void C_ccall f_3995(C_word c,C_word *av) C_noret;
C_noret_decl(f_3998)
static void C_ccall f_3998(C_word c,C_word *av) C_noret;
C_noret_decl(f_4001)
static void C_ccall f_4001(C_word c,C_word *av) C_noret;
C_noret_decl(f_4004)
static void C_ccall f_4004(C_word c,C_word *av) C_noret;
C_noret_decl(f_4007)
static void C_ccall f_4007(C_word c,C_word *av) C_noret;
C_noret_decl(f_4010)
static void C_ccall f_4010(C_word c,C_word *av) C_noret;
C_noret_decl(f_4013)
static void C_ccall f_4013(C_word c,C_word *av) C_noret;
C_noret_decl(f_4016)
static void C_ccall f_4016(C_word c,C_word *av) C_noret;
C_noret_decl(f_4019)
static void C_ccall f_4019(C_word c,C_word *av) C_noret;
C_noret_decl(f_4022)
static void C_ccall f_4022(C_word c,C_word *av) C_noret;
C_noret_decl(f_4025)
static void C_ccall f_4025(C_word c,C_word *av) C_noret;
C_noret_decl(f_4028)
static void C_ccall f_4028(C_word c,C_word *av) C_noret;
C_noret_decl(f_4031)
static void C_ccall f_4031(C_word c,C_word *av) C_noret;
C_noret_decl(f_4034)
static void C_ccall f_4034(C_word c,C_word *av) C_noret;
C_noret_decl(f_4037)
static void C_ccall f_4037(C_word c,C_word *av) C_noret;
C_noret_decl(f_4040)
static void C_ccall f_4040(C_word c,C_word *av) C_noret;
C_noret_decl(f_4043)
static void C_ccall f_4043(C_word c,C_word *av) C_noret;
C_noret_decl(f_4046)
static void C_ccall f_4046(C_word c,C_word *av) C_noret;
C_noret_decl(f_4049)
static void C_ccall f_4049(C_word c,C_word *av) C_noret;
C_noret_decl(f_4052)
static void C_ccall f_4052(C_word c,C_word *av) C_noret;
C_noret_decl(f_4055)
static void C_ccall f_4055(C_word c,C_word *av) C_noret;
C_noret_decl(f_4058)
static void C_ccall f_4058(C_word c,C_word *av) C_noret;
C_noret_decl(f_4061)
static void C_ccall f_4061(C_word c,C_word *av) C_noret;
C_noret_decl(f_4064)
static void C_ccall f_4064(C_word c,C_word *av) C_noret;
C_noret_decl(f_4067)
static void C_ccall f_4067(C_word c,C_word *av) C_noret;
C_noret_decl(f_4070)
static void C_ccall f_4070(C_word c,C_word *av) C_noret;
C_noret_decl(f_4073)
static void C_ccall f_4073(C_word c,C_word *av) C_noret;
C_noret_decl(f_4076)
static void C_ccall f_4076(C_word c,C_word *av) C_noret;
C_noret_decl(f_4079)
static void C_ccall f_4079(C_word c,C_word *av) C_noret;
C_noret_decl(f_4082)
static void C_ccall f_4082(C_word c,C_word *av) C_noret;
C_noret_decl(f_4085)
static void C_ccall f_4085(C_word c,C_word *av) C_noret;
C_noret_decl(f_4088)
static void C_ccall f_4088(C_word c,C_word *av) C_noret;
C_noret_decl(f_4091)
static void C_ccall f_4091(C_word c,C_word *av) C_noret;
C_noret_decl(f_4094)
static void C_ccall f_4094(C_word c,C_word *av) C_noret;
C_noret_decl(f_4097)
static void C_ccall f_4097(C_word c,C_word *av) C_noret;
C_noret_decl(f_4100)
static void C_ccall f_4100(C_word c,C_word *av) C_noret;
C_noret_decl(f_4103)
static void C_ccall f_4103(C_word c,C_word *av) C_noret;
C_noret_decl(f_4106)
static void C_ccall f_4106(C_word c,C_word *av) C_noret;
C_noret_decl(f_4109)
static void C_ccall f_4109(C_word c,C_word *av) C_noret;
C_noret_decl(f_4112)
static void C_ccall f_4112(C_word c,C_word *av) C_noret;
C_noret_decl(f_4115)
static void C_ccall f_4115(C_word c,C_word *av) C_noret;
C_noret_decl(f_4118)
static void C_ccall f_4118(C_word c,C_word *av) C_noret;
C_noret_decl(f_4121)
static void C_ccall f_4121(C_word c,C_word *av) C_noret;
C_noret_decl(f_4124)
static void C_ccall f_4124(C_word c,C_word *av) C_noret;
C_noret_decl(f_4127)
static void C_ccall f_4127(C_word c,C_word *av) C_noret;
C_noret_decl(f_4130)
static void C_ccall f_4130(C_word c,C_word *av) C_noret;
C_noret_decl(f_4133)
static void C_ccall f_4133(C_word c,C_word *av) C_noret;
C_noret_decl(f_4136)
static void C_ccall f_4136(C_word c,C_word *av) C_noret;
C_noret_decl(f_4139)
static void C_ccall f_4139(C_word c,C_word *av) C_noret;
C_noret_decl(f_4142)
static void C_ccall f_4142(C_word c,C_word *av) C_noret;
C_noret_decl(f_4145)
static void C_ccall f_4145(C_word c,C_word *av) C_noret;
C_noret_decl(f_4148)
static void C_ccall f_4148(C_word c,C_word *av) C_noret;
C_noret_decl(f_4151)
static void C_ccall f_4151(C_word c,C_word *av) C_noret;
C_noret_decl(f_4154)
static void C_ccall f_4154(C_word c,C_word *av) C_noret;
C_noret_decl(f_4157)
static void C_ccall f_4157(C_word c,C_word *av) C_noret;
C_noret_decl(f_4160)
static void C_ccall f_4160(C_word c,C_word *av) C_noret;
C_noret_decl(f_4163)
static void C_ccall f_4163(C_word c,C_word *av) C_noret;
C_noret_decl(f_4166)
static void C_ccall f_4166(C_word c,C_word *av) C_noret;
C_noret_decl(f_4169)
static void C_ccall f_4169(C_word c,C_word *av) C_noret;
C_noret_decl(f_4172)
static void C_ccall f_4172(C_word c,C_word *av) C_noret;
C_noret_decl(f_4175)
static void C_ccall f_4175(C_word c,C_word *av) C_noret;
C_noret_decl(f_4178)
static void C_ccall f_4178(C_word c,C_word *av) C_noret;
C_noret_decl(f_4181)
static void C_ccall f_4181(C_word c,C_word *av) C_noret;
C_noret_decl(f_4184)
static void C_ccall f_4184(C_word c,C_word *av) C_noret;
C_noret_decl(f_4187)
static void C_ccall f_4187(C_word c,C_word *av) C_noret;
C_noret_decl(f_4190)
static void C_ccall f_4190(C_word c,C_word *av) C_noret;
C_noret_decl(f_4193)
static void C_ccall f_4193(C_word c,C_word *av) C_noret;
C_noret_decl(f_4196)
static void C_ccall f_4196(C_word c,C_word *av) C_noret;
C_noret_decl(f_4199)
static void C_ccall f_4199(C_word c,C_word *av) C_noret;
C_noret_decl(f_4202)
static void C_ccall f_4202(C_word c,C_word *av) C_noret;
C_noret_decl(f_4205)
static void C_ccall f_4205(C_word c,C_word *av) C_noret;
C_noret_decl(f_4208)
static void C_ccall f_4208(C_word c,C_word *av) C_noret;
C_noret_decl(f_4211)
static void C_ccall f_4211(C_word c,C_word *av) C_noret;
C_noret_decl(f_4214)
static void C_ccall f_4214(C_word c,C_word *av) C_noret;
C_noret_decl(f_4217)
static void C_ccall f_4217(C_word c,C_word *av) C_noret;
C_noret_decl(f_4220)
static void C_ccall f_4220(C_word c,C_word *av) C_noret;
C_noret_decl(f_4223)
static void C_ccall f_4223(C_word c,C_word *av) C_noret;
C_noret_decl(f_4226)
static void C_ccall f_4226(C_word c,C_word *av) C_noret;
C_noret_decl(f_4229)
static void C_ccall f_4229(C_word c,C_word *av) C_noret;
C_noret_decl(f_4232)
static void C_ccall f_4232(C_word c,C_word *av) C_noret;
C_noret_decl(f_4235)
static void C_ccall f_4235(C_word c,C_word *av) C_noret;
C_noret_decl(f_4238)
static void C_ccall f_4238(C_word c,C_word *av) C_noret;
C_noret_decl(f_4241)
static void C_ccall f_4241(C_word c,C_word *av) C_noret;
C_noret_decl(f_4244)
static void C_ccall f_4244(C_word c,C_word *av) C_noret;
C_noret_decl(f_4247)
static void C_ccall f_4247(C_word c,C_word *av) C_noret;
C_noret_decl(f_4250)
static void C_ccall f_4250(C_word c,C_word *av) C_noret;
C_noret_decl(f_4253)
static void C_ccall f_4253(C_word c,C_word *av) C_noret;
C_noret_decl(f_4256)
static void C_ccall f_4256(C_word c,C_word *av) C_noret;
C_noret_decl(f_4259)
static void C_ccall f_4259(C_word c,C_word *av) C_noret;
C_noret_decl(f_4262)
static void C_ccall f_4262(C_word c,C_word *av) C_noret;
C_noret_decl(f_4265)
static void C_ccall f_4265(C_word c,C_word *av) C_noret;
C_noret_decl(f_4268)
static void C_ccall f_4268(C_word c,C_word *av) C_noret;
C_noret_decl(f_4271)
static void C_ccall f_4271(C_word c,C_word *av) C_noret;
C_noret_decl(f_4274)
static void C_ccall f_4274(C_word c,C_word *av) C_noret;
C_noret_decl(f_4277)
static void C_ccall f_4277(C_word c,C_word *av) C_noret;
C_noret_decl(f_4280)
static void C_ccall f_4280(C_word c,C_word *av) C_noret;
C_noret_decl(f_4283)
static void C_ccall f_4283(C_word c,C_word *av) C_noret;
C_noret_decl(f_4286)
static void C_ccall f_4286(C_word c,C_word *av) C_noret;
C_noret_decl(f_4289)
static void C_ccall f_4289(C_word c,C_word *av) C_noret;
C_noret_decl(f_4292)
static void C_ccall f_4292(C_word c,C_word *av) C_noret;
C_noret_decl(f_4295)
static void C_ccall f_4295(C_word c,C_word *av) C_noret;
C_noret_decl(f_4298)
static void C_ccall f_4298(C_word c,C_word *av) C_noret;
C_noret_decl(f_4301)
static void C_ccall f_4301(C_word c,C_word *av) C_noret;
C_noret_decl(f_4304)
static void C_ccall f_4304(C_word c,C_word *av) C_noret;
C_noret_decl(f_4307)
static void C_ccall f_4307(C_word c,C_word *av) C_noret;
C_noret_decl(f_4310)
static void C_ccall f_4310(C_word c,C_word *av) C_noret;
C_noret_decl(f_4313)
static void C_ccall f_4313(C_word c,C_word *av) C_noret;
C_noret_decl(f_4316)
static void C_ccall f_4316(C_word c,C_word *av) C_noret;
C_noret_decl(f_4319)
static void C_ccall f_4319(C_word c,C_word *av) C_noret;
C_noret_decl(f_4322)
static void C_ccall f_4322(C_word c,C_word *av) C_noret;
C_noret_decl(f_4325)
static void C_ccall f_4325(C_word c,C_word *av) C_noret;
C_noret_decl(f_4328)
static void C_ccall f_4328(C_word c,C_word *av) C_noret;
C_noret_decl(f_4331)
static void C_ccall f_4331(C_word c,C_word *av) C_noret;
C_noret_decl(f_4334)
static void C_ccall f_4334(C_word c,C_word *av) C_noret;
C_noret_decl(f_4337)
static void C_ccall f_4337(C_word c,C_word *av) C_noret;
C_noret_decl(f_4340)
static void C_ccall f_4340(C_word c,C_word *av) C_noret;
C_noret_decl(f_4343)
static void C_ccall f_4343(C_word c,C_word *av) C_noret;
C_noret_decl(f_4346)
static void C_ccall f_4346(C_word c,C_word *av) C_noret;
C_noret_decl(f_4349)
static void C_ccall f_4349(C_word c,C_word *av) C_noret;
C_noret_decl(f_4352)
static void C_ccall f_4352(C_word c,C_word *av) C_noret;
C_noret_decl(f_4355)
static void C_ccall f_4355(C_word c,C_word *av) C_noret;
C_noret_decl(f_4358)
static void C_ccall f_4358(C_word c,C_word *av) C_noret;
C_noret_decl(f_4361)
static void C_ccall f_4361(C_word c,C_word *av) C_noret;
C_noret_decl(f_4364)
static void C_ccall f_4364(C_word c,C_word *av) C_noret;
C_noret_decl(f_4367)
static void C_ccall f_4367(C_word c,C_word *av) C_noret;
C_noret_decl(f_4370)
static void C_ccall f_4370(C_word c,C_word *av) C_noret;
C_noret_decl(f_4373)
static void C_ccall f_4373(C_word c,C_word *av) C_noret;
C_noret_decl(f_4376)
static void C_ccall f_4376(C_word c,C_word *av) C_noret;
C_noret_decl(f_4379)
static void C_ccall f_4379(C_word c,C_word *av) C_noret;
C_noret_decl(f_4382)
static void C_ccall f_4382(C_word c,C_word *av) C_noret;
C_noret_decl(f_4385)
static void C_ccall f_4385(C_word c,C_word *av) C_noret;
C_noret_decl(f_4388)
static void C_ccall f_4388(C_word c,C_word *av) C_noret;
C_noret_decl(f_4391)
static void C_ccall f_4391(C_word c,C_word *av) C_noret;
C_noret_decl(f_4394)
static void C_ccall f_4394(C_word c,C_word *av) C_noret;
C_noret_decl(f_4397)
static void C_ccall f_4397(C_word c,C_word *av) C_noret;
C_noret_decl(f_4400)
static void C_ccall f_4400(C_word c,C_word *av) C_noret;
C_noret_decl(f_4403)
static void C_ccall f_4403(C_word c,C_word *av) C_noret;
C_noret_decl(f_4406)
static void C_ccall f_4406(C_word c,C_word *av) C_noret;
C_noret_decl(f_4409)
static void C_ccall f_4409(C_word c,C_word *av) C_noret;
C_noret_decl(f_4412)
static void C_ccall f_4412(C_word c,C_word *av) C_noret;
C_noret_decl(f_4415)
static void C_ccall f_4415(C_word c,C_word *av) C_noret;
C_noret_decl(f_4418)
static void C_ccall f_4418(C_word c,C_word *av) C_noret;
C_noret_decl(f_4421)
static void C_ccall f_4421(C_word c,C_word *av) C_noret;
C_noret_decl(f_4424)
static void C_ccall f_4424(C_word c,C_word *av) C_noret;
C_noret_decl(f_4427)
static void C_ccall f_4427(C_word c,C_word *av) C_noret;
C_noret_decl(f_4430)
static void C_ccall f_4430(C_word c,C_word *av) C_noret;
C_noret_decl(f_4433)
static void C_ccall f_4433(C_word c,C_word *av) C_noret;
C_noret_decl(f_4436)
static void C_ccall f_4436(C_word c,C_word *av) C_noret;
C_noret_decl(f_4439)
static void C_ccall f_4439(C_word c,C_word *av) C_noret;
C_noret_decl(f_4442)
static void C_ccall f_4442(C_word c,C_word *av) C_noret;
C_noret_decl(f_4445)
static void C_ccall f_4445(C_word c,C_word *av) C_noret;
C_noret_decl(f_4448)
static void C_ccall f_4448(C_word c,C_word *av) C_noret;
C_noret_decl(f_4451)
static void C_ccall f_4451(C_word c,C_word *av) C_noret;
C_noret_decl(f_4454)
static void C_ccall f_4454(C_word c,C_word *av) C_noret;
C_noret_decl(f_4457)
static void C_ccall f_4457(C_word c,C_word *av) C_noret;
C_noret_decl(f_4460)
static void C_ccall f_4460(C_word c,C_word *av) C_noret;
C_noret_decl(f_4463)
static void C_ccall f_4463(C_word c,C_word *av) C_noret;
C_noret_decl(f_4466)
static void C_ccall f_4466(C_word c,C_word *av) C_noret;
C_noret_decl(f_4469)
static void C_ccall f_4469(C_word c,C_word *av) C_noret;
C_noret_decl(f_4472)
static void C_ccall f_4472(C_word c,C_word *av) C_noret;
C_noret_decl(f_4475)
static void C_ccall f_4475(C_word c,C_word *av) C_noret;
C_noret_decl(f_4478)
static void C_ccall f_4478(C_word c,C_word *av) C_noret;
C_noret_decl(f_4481)
static void C_ccall f_4481(C_word c,C_word *av) C_noret;
C_noret_decl(f_4484)
static void C_ccall f_4484(C_word c,C_word *av) C_noret;
C_noret_decl(f_4487)
static void C_ccall f_4487(C_word c,C_word *av) C_noret;
C_noret_decl(f_4490)
static void C_ccall f_4490(C_word c,C_word *av) C_noret;
C_noret_decl(f_4493)
static void C_ccall f_4493(C_word c,C_word *av) C_noret;
C_noret_decl(f_4496)
static void C_ccall f_4496(C_word c,C_word *av) C_noret;
C_noret_decl(f_4499)
static void C_ccall f_4499(C_word c,C_word *av) C_noret;
C_noret_decl(f_4502)
static void C_ccall f_4502(C_word c,C_word *av) C_noret;
C_noret_decl(f_4505)
static void C_ccall f_4505(C_word c,C_word *av) C_noret;
C_noret_decl(f_4508)
static void C_ccall f_4508(C_word c,C_word *av) C_noret;
C_noret_decl(f_4511)
static void C_ccall f_4511(C_word c,C_word *av) C_noret;
C_noret_decl(f_4514)
static void C_ccall f_4514(C_word c,C_word *av) C_noret;
C_noret_decl(f_4517)
static void C_ccall f_4517(C_word c,C_word *av) C_noret;
C_noret_decl(f_4520)
static void C_ccall f_4520(C_word c,C_word *av) C_noret;
C_noret_decl(f_4523)
static void C_ccall f_4523(C_word c,C_word *av) C_noret;
C_noret_decl(f_4526)
static void C_ccall f_4526(C_word c,C_word *av) C_noret;
C_noret_decl(f_4529)
static void C_ccall f_4529(C_word c,C_word *av) C_noret;
C_noret_decl(f_4532)
static void C_ccall f_4532(C_word c,C_word *av) C_noret;
C_noret_decl(f_4535)
static void C_ccall f_4535(C_word c,C_word *av) C_noret;
C_noret_decl(f_4538)
static void C_ccall f_4538(C_word c,C_word *av) C_noret;
C_noret_decl(f_4541)
static void C_ccall f_4541(C_word c,C_word *av) C_noret;
C_noret_decl(f_4544)
static void C_ccall f_4544(C_word c,C_word *av) C_noret;
C_noret_decl(f_4547)
static void C_ccall f_4547(C_word c,C_word *av) C_noret;
C_noret_decl(f_4550)
static void C_ccall f_4550(C_word c,C_word *av) C_noret;
C_noret_decl(f_4553)
static void C_ccall f_4553(C_word c,C_word *av) C_noret;
C_noret_decl(f_4556)
static void C_ccall f_4556(C_word c,C_word *av) C_noret;
C_noret_decl(f_4559)
static void C_ccall f_4559(C_word c,C_word *av) C_noret;
C_noret_decl(f_4562)
static void C_ccall f_4562(C_word c,C_word *av) C_noret;
C_noret_decl(f_4565)
static void C_ccall f_4565(C_word c,C_word *av) C_noret;
C_noret_decl(f_4568)
static void C_ccall f_4568(C_word c,C_word *av) C_noret;
C_noret_decl(f_4571)
static void C_ccall f_4571(C_word c,C_word *av) C_noret;
C_noret_decl(f_4574)
static void C_ccall f_4574(C_word c,C_word *av) C_noret;
C_noret_decl(f_4577)
static void C_ccall f_4577(C_word c,C_word *av) C_noret;
C_noret_decl(f_4580)
static void C_ccall f_4580(C_word c,C_word *av) C_noret;
C_noret_decl(f_4583)
static void C_ccall f_4583(C_word c,C_word *av) C_noret;
C_noret_decl(f_4586)
static void C_ccall f_4586(C_word c,C_word *av) C_noret;
C_noret_decl(f_4589)
static void C_ccall f_4589(C_word c,C_word *av) C_noret;
C_noret_decl(f_4592)
static void C_ccall f_4592(C_word c,C_word *av) C_noret;
C_noret_decl(f_4595)
static void C_ccall f_4595(C_word c,C_word *av) C_noret;
C_noret_decl(f_4598)
static void C_ccall f_4598(C_word c,C_word *av) C_noret;
C_noret_decl(f_4601)
static void C_ccall f_4601(C_word c,C_word *av) C_noret;
C_noret_decl(f_4604)
static void C_ccall f_4604(C_word c,C_word *av) C_noret;
C_noret_decl(f_4607)
static void C_ccall f_4607(C_word c,C_word *av) C_noret;
C_noret_decl(f_4610)
static void C_ccall f_4610(C_word c,C_word *av) C_noret;
C_noret_decl(f_4613)
static void C_ccall f_4613(C_word c,C_word *av) C_noret;
C_noret_decl(f_4616)
static void C_ccall f_4616(C_word c,C_word *av) C_noret;
C_noret_decl(f_4619)
static void C_ccall f_4619(C_word c,C_word *av) C_noret;
C_noret_decl(f_4622)
static void C_ccall f_4622(C_word c,C_word *av) C_noret;
C_noret_decl(f_4625)
static void C_ccall f_4625(C_word c,C_word *av) C_noret;
C_noret_decl(f_4628)
static void C_ccall f_4628(C_word c,C_word *av) C_noret;
C_noret_decl(f_4631)
static void C_ccall f_4631(C_word c,C_word *av) C_noret;
C_noret_decl(f_4634)
static void C_ccall f_4634(C_word c,C_word *av) C_noret;
C_noret_decl(f_4637)
static void C_ccall f_4637(C_word c,C_word *av) C_noret;
C_noret_decl(f_4640)
static void C_ccall f_4640(C_word c,C_word *av) C_noret;
C_noret_decl(f_4643)
static void C_ccall f_4643(C_word c,C_word *av) C_noret;
C_noret_decl(f_4646)
static void C_ccall f_4646(C_word c,C_word *av) C_noret;
C_noret_decl(f_4649)
static void C_ccall f_4649(C_word c,C_word *av) C_noret;
C_noret_decl(f_4652)
static void C_ccall f_4652(C_word c,C_word *av) C_noret;
C_noret_decl(f_4655)
static void C_ccall f_4655(C_word c,C_word *av) C_noret;
C_noret_decl(f_4658)
static void C_ccall f_4658(C_word c,C_word *av) C_noret;
C_noret_decl(f_4661)
static void C_ccall f_4661(C_word c,C_word *av) C_noret;
C_noret_decl(f_4664)
static void C_ccall f_4664(C_word c,C_word *av) C_noret;
C_noret_decl(f_4667)
static void C_ccall f_4667(C_word c,C_word *av) C_noret;
C_noret_decl(f_4670)
static void C_ccall f_4670(C_word c,C_word *av) C_noret;
C_noret_decl(f_4673)
static void C_ccall f_4673(C_word c,C_word *av) C_noret;
C_noret_decl(f_4676)
static void C_ccall f_4676(C_word c,C_word *av) C_noret;
C_noret_decl(f_4679)
static void C_ccall f_4679(C_word c,C_word *av) C_noret;
C_noret_decl(f_4682)
static void C_ccall f_4682(C_word c,C_word *av) C_noret;
C_noret_decl(f_4685)
static void C_ccall f_4685(C_word c,C_word *av) C_noret;
C_noret_decl(f_4688)
static void C_ccall f_4688(C_word c,C_word *av) C_noret;
C_noret_decl(f_4691)
static void C_ccall f_4691(C_word c,C_word *av) C_noret;
C_noret_decl(f_4694)
static void C_ccall f_4694(C_word c,C_word *av) C_noret;
C_noret_decl(f_4697)
static void C_ccall f_4697(C_word c,C_word *av) C_noret;
C_noret_decl(f_4700)
static void C_ccall f_4700(C_word c,C_word *av) C_noret;
C_noret_decl(f_4703)
static void C_ccall f_4703(C_word c,C_word *av) C_noret;
C_noret_decl(f_4706)
static void C_ccall f_4706(C_word c,C_word *av) C_noret;
C_noret_decl(f_4709)
static void C_ccall f_4709(C_word c,C_word *av) C_noret;
C_noret_decl(f_4712)
static void C_ccall f_4712(C_word c,C_word *av) C_noret;
C_noret_decl(f_4715)
static void C_ccall f_4715(C_word c,C_word *av) C_noret;
C_noret_decl(f_4718)
static void C_ccall f_4718(C_word c,C_word *av) C_noret;
C_noret_decl(f_4721)
static void C_ccall f_4721(C_word c,C_word *av) C_noret;
C_noret_decl(f_4724)
static void C_ccall f_4724(C_word c,C_word *av) C_noret;
C_noret_decl(f_4727)
static void C_ccall f_4727(C_word c,C_word *av) C_noret;
C_noret_decl(f_4730)
static void C_ccall f_4730(C_word c,C_word *av) C_noret;
C_noret_decl(f_4733)
static void C_ccall f_4733(C_word c,C_word *av) C_noret;
C_noret_decl(f_4736)
static void C_ccall f_4736(C_word c,C_word *av) C_noret;
C_noret_decl(f_4739)
static void C_ccall f_4739(C_word c,C_word *av) C_noret;
C_noret_decl(f_4742)
static void C_ccall f_4742(C_word c,C_word *av) C_noret;
C_noret_decl(f_4745)
static void C_ccall f_4745(C_word c,C_word *av) C_noret;
C_noret_decl(f_4748)
static void C_ccall f_4748(C_word c,C_word *av) C_noret;
C_noret_decl(f_4751)
static void C_ccall f_4751(C_word c,C_word *av) C_noret;
C_noret_decl(f_4754)
static void C_ccall f_4754(C_word c,C_word *av) C_noret;
C_noret_decl(f_4756)
static void C_ccall f_4756(C_word c,C_word *av) C_noret;
C_noret_decl(f_4778)
static void C_ccall f_4778(C_word c,C_word *av) C_noret;
C_noret_decl(f_4793)
static void C_ccall f_4793(C_word c,C_word *av) C_noret;
C_noret_decl(f_4796)
static void C_ccall f_4796(C_word c,C_word *av) C_noret;
C_noret_decl(f_4811)
static void C_ccall f_4811(C_word c,C_word *av) C_noret;
C_noret_decl(f_4823)
static void C_ccall f_4823(C_word c,C_word *av) C_noret;
C_noret_decl(f_4831)
static void C_ccall f_4831(C_word c,C_word *av) C_noret;
C_noret_decl(f_4833)
static void C_ccall f_4833(C_word c,C_word *av) C_noret;
C_noret_decl(f_4854)
static void C_ccall f_4854(C_word c,C_word *av) C_noret;
C_noret_decl(f_4858)
static void C_ccall f_4858(C_word c,C_word *av) C_noret;
C_noret_decl(f_4861)
static void C_ccall f_4861(C_word c,C_word *av) C_noret;
C_noret_decl(f_4864)
static void C_ccall f_4864(C_word c,C_word *av) C_noret;
C_noret_decl(f_4866)
static void C_ccall f_4866(C_word c,C_word *av) C_noret;
C_noret_decl(f_4885)
static void C_ccall f_4885(C_word c,C_word *av) C_noret;
C_noret_decl(f_4902)
static void C_ccall f_4902(C_word c,C_word *av) C_noret;
C_noret_decl(f_4944)
static void C_ccall f_4944(C_word c,C_word *av) C_noret;
C_noret_decl(f_4948)
static void C_ccall f_4948(C_word c,C_word *av) C_noret;
C_noret_decl(f_4952)
static void C_ccall f_4952(C_word c,C_word *av) C_noret;
C_noret_decl(f_4956)
static void C_ccall f_4956(C_word c,C_word *av) C_noret;
C_noret_decl(f_4963)
static void C_ccall f_4963(C_word c,C_word *av) C_noret;
C_noret_decl(f_4967)
static void C_ccall f_4967(C_word c,C_word *av) C_noret;
C_noret_decl(f_4975)
static void C_ccall f_4975(C_word c,C_word *av) C_noret;
C_noret_decl(f_4979)
static void C_ccall f_4979(C_word c,C_word *av) C_noret;
C_noret_decl(f_4987)
static void C_ccall f_4987(C_word c,C_word *av) C_noret;
C_noret_decl(f_4990)
static void C_ccall f_4990(C_word c,C_word *av) C_noret;
C_noret_decl(f_4994)
static void C_ccall f_4994(C_word c,C_word *av) C_noret;
C_noret_decl(f_4997)
static void C_ccall f_4997(C_word c,C_word *av) C_noret;
C_noret_decl(f_5000)
static void C_ccall f_5000(C_word c,C_word *av) C_noret;
C_noret_decl(f_5003)
static void C_ccall f_5003(C_word c,C_word *av) C_noret;
C_noret_decl(f_5006)
static void C_ccall f_5006(C_word c,C_word *av) C_noret;
C_noret_decl(f_5009)
static void C_ccall f_5009(C_word c,C_word *av) C_noret;
C_noret_decl(f_5012)
static void C_ccall f_5012(C_word c,C_word *av) C_noret;
C_noret_decl(f_5015)
static void C_ccall f_5015(C_word c,C_word *av) C_noret;
C_noret_decl(f_5018)
static void C_ccall f_5018(C_word c,C_word *av) C_noret;
C_noret_decl(f_5021)
static void C_ccall f_5021(C_word c,C_word *av) C_noret;
C_noret_decl(f_5024)
static void C_ccall f_5024(C_word c,C_word *av) C_noret;
C_noret_decl(f_5027)
static void C_ccall f_5027(C_word c,C_word *av) C_noret;
C_noret_decl(f_5030)
static void C_ccall f_5030(C_word c,C_word *av) C_noret;
C_noret_decl(f_5033)
static void C_ccall f_5033(C_word c,C_word *av) C_noret;
C_noret_decl(f_5036)
static void C_ccall f_5036(C_word c,C_word *av) C_noret;
C_noret_decl(f_5039)
static void C_ccall f_5039(C_word c,C_word *av) C_noret;
C_noret_decl(f_5041)
static void C_ccall f_5041(C_word c,C_word *av) C_noret;
C_noret_decl(f_5063)
static void C_ccall f_5063(C_word c,C_word *av) C_noret;
C_noret_decl(f_5081)
static void C_ccall f_5081(C_word c,C_word *av) C_noret;
C_noret_decl(f_5103)
static void C_ccall f_5103(C_word c,C_word *av) C_noret;
C_noret_decl(f_5121)
static void C_ccall f_5121(C_word c,C_word *av) C_noret;
C_noret_decl(f_5146)
static void C_ccall f_5146(C_word c,C_word *av) C_noret;
C_noret_decl(f_5167)
static void C_ccall f_5167(C_word c,C_word *av) C_noret;
C_noret_decl(f_5175)
static void C_ccall f_5175(C_word c,C_word *av) C_noret;
C_noret_decl(f_5179)
static void C_ccall f_5179(C_word c,C_word *av) C_noret;
C_noret_decl(f_5186)
static void C_ccall f_5186(C_word c,C_word *av) C_noret;
C_noret_decl(f_5214)
static void C_ccall f_5214(C_word c,C_word *av) C_noret;
C_noret_decl(f_5217)
static void C_ccall f_5217(C_word c,C_word *av) C_noret;
C_noret_decl(f_5248)
static void C_fcall f_5248(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5270)
static void C_ccall f_5270(C_word c,C_word *av) C_noret;
C_noret_decl(f_5293)
static void C_ccall f_5293(C_word c,C_word *av) C_noret;
C_noret_decl(f_5297)
static void C_ccall f_5297(C_word c,C_word *av) C_noret;
C_noret_decl(f_5301)
static void C_ccall f_5301(C_word c,C_word *av) C_noret;
C_noret_decl(f_5308)
static void C_ccall f_5308(C_word c,C_word *av) C_noret;
C_noret_decl(f_5330)
static void C_ccall f_5330(C_word c,C_word *av) C_noret;
C_noret_decl(f_5340)
static void C_ccall f_5340(C_word c,C_word *av) C_noret;
C_noret_decl(f_5354)
static void C_ccall f_5354(C_word c,C_word *av) C_noret;
C_noret_decl(f_5358)
static void C_ccall f_5358(C_word c,C_word *av) C_noret;
C_noret_decl(f_5365)
static void C_ccall f_5365(C_word c,C_word *av) C_noret;
C_noret_decl(f_5381)
static void C_ccall f_5381(C_word c,C_word *av) C_noret;
C_noret_decl(f_5387)
static void C_ccall f_5387(C_word c,C_word *av) C_noret;
C_noret_decl(f_5405)
static void C_ccall f_5405(C_word c,C_word *av) C_noret;
C_noret_decl(f_5408)
static void C_fcall f_5408(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5411)
static void C_fcall f_5411(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5426)
static void C_ccall f_5426(C_word c,C_word *av) C_noret;
C_noret_decl(f_5438)
static void C_ccall f_5438(C_word c,C_word *av) C_noret;
C_noret_decl(f_5448)
static void C_ccall f_5448(C_word c,C_word *av) C_noret;
C_noret_decl(f_5452)
static void C_ccall f_5452(C_word c,C_word *av) C_noret;
C_noret_decl(f_5461)
static void C_ccall f_5461(C_word c,C_word *av) C_noret;
C_noret_decl(f_5471)
static void C_ccall f_5471(C_word c,C_word *av) C_noret;
C_noret_decl(f_5475)
static void C_ccall f_5475(C_word c,C_word *av) C_noret;
C_noret_decl(f_5505)
static void C_ccall f_5505(C_word c,C_word *av) C_noret;
C_noret_decl(f_5509)
static void C_ccall f_5509(C_word c,C_word *av) C_noret;
C_noret_decl(f_5513)
static void C_ccall f_5513(C_word c,C_word *av) C_noret;
C_noret_decl(f_5517)
static void C_ccall f_5517(C_word c,C_word *av) C_noret;
C_noret_decl(f_5521)
static void C_ccall f_5521(C_word c,C_word *av) C_noret;
C_noret_decl(f_5530)
static void C_ccall f_5530(C_word c,C_word *av) C_noret;
C_noret_decl(f_5534)
static void C_ccall f_5534(C_word c,C_word *av) C_noret;
C_noret_decl(f_5536)
static void C_fcall f_5536(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5546)
static void C_ccall f_5546(C_word c,C_word *av) C_noret;
C_noret_decl(f_5559)
static void C_fcall f_5559(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5584)
static void C_ccall f_5584(C_word c,C_word *av) C_noret;
C_noret_decl(C_c_2dplatform_toplevel)
C_externexport void C_ccall C_c_2dplatform_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1991)
static void C_ccall trf_1991(C_word c,C_word *av) C_noret;
static void C_ccall trf_1991(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1991(t0,t1,t2);}

C_noret_decl(trf_1997)
static void C_ccall trf_1997(C_word c,C_word *av) C_noret;
static void C_ccall trf_1997(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1997(t0,t1,t2,t3);}

C_noret_decl(trf_2575)
static void C_ccall trf_2575(C_word c,C_word *av) C_noret;
static void C_ccall trf_2575(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2575(t0,t1,t2);}

C_noret_decl(trf_2883)
static void C_ccall trf_2883(C_word c,C_word *av) C_noret;
static void C_ccall trf_2883(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2883(t0,t1,t2,t3);}

C_noret_decl(trf_2978)
static void C_ccall trf_2978(C_word c,C_word *av) C_noret;
static void C_ccall trf_2978(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2978(t0,t1);}

C_noret_decl(trf_2981)
static void C_ccall trf_2981(C_word c,C_word *av) C_noret;
static void C_ccall trf_2981(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2981(t0,t1);}

C_noret_decl(trf_3170)
static void C_ccall trf_3170(C_word c,C_word *av) C_noret;
static void C_ccall trf_3170(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3170(t0,t1,t2);}

C_noret_decl(trf_3298)
static void C_ccall trf_3298(C_word c,C_word *av) C_noret;
static void C_ccall trf_3298(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3298(t0,t1,t2,t3);}

C_noret_decl(trf_5248)
static void C_ccall trf_5248(C_word c,C_word *av) C_noret;
static void C_ccall trf_5248(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5248(t0,t1);}

C_noret_decl(trf_5408)
static void C_ccall trf_5408(C_word c,C_word *av) C_noret;
static void C_ccall trf_5408(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5408(t0,t1);}

C_noret_decl(trf_5411)
static void C_ccall trf_5411(C_word c,C_word *av) C_noret;
static void C_ccall trf_5411(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5411(t0,t1);}

C_noret_decl(trf_5536)
static void C_ccall trf_5536(C_word c,C_word *av) C_noret;
static void C_ccall trf_5536(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5536(t0,t1,t2);}

C_noret_decl(trf_5559)
static void C_ccall trf_5559(C_word c,C_word *av) C_noret;
static void C_ccall trf_5559(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5559(t0,t1,t2);}

/* k1536 */
static void C_ccall f_1538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1538,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1541,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1539 in k1536 */
static void C_ccall f_1541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1541,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1544,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k1542 in k1539 in k1536 */
static void C_ccall f_1544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1544,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1547,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_1547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1547,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1550,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_optimizer_toplevel(2,av2);}}

/* k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_1550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1550,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1553,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_support_toplevel(2,av2);}}

/* k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_1553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1553,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1556,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_compiler_toplevel(2,av2);}}

/* k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_1556(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_1556,2,av);}
a=C_alloc(21);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_mutate(&lf[2] /* (set! chicken.compiler.c-platform#cons* ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1991,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2837,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:55: chicken.compiler.optimizer#default-optimization-passes */
t6=*((C_word*)lf[873]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_fix(3);
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* chicken.compiler.c-platform#cons* in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_fcall f_1991(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_1991,3,t1,t2,t3);}
a=C_alloc(5);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1997,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_1997(t7,t1,t2,t3);}

/* loop in chicken.compiler.c-platform#cons* in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_fcall f_1997(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_1997,4,t0,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t3))){
t4=t2;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2011,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(t3);
t6=t3;
t7=C_u_i_cdr(t6);
/* mini-srfi-1.scm:95: loop */
t9=t4;
t10=t5;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}

/* k2009 in loop in chicken.compiler.c-platform#cons* in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_2011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2011,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in rewrite-apply in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static C_word C_fcall f_2333(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
t2=C_i_cdr(t1);
if(C_truep(C_i_nullp(t2))){
t3=t1;
t4=C_u_i_car(t3);
return(t4);}
else{
t3=t1;
t4=C_u_i_cdr(t3);
t6=t4;
t1=t6;
goto loop;}}

/* loop in k4794 in k4791 in k4852 in k4776 in k4856 in rewrite-make-vector in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in ... */
static void C_fcall f_2575(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2575,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2589,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:190: proc */
t4=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k2587 in loop in k4794 in k4791 in k4852 in k4776 in k4856 in rewrite-make-vector in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in ... */
static void C_ccall f_2589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2589,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2593,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* mini-srfi-1.scm:190: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2575(t5,t3,t4);}

/* k2591 in k2587 in loop in k4794 in k4791 in k4852 in k4776 in k4856 in rewrite-make-vector in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in ... */
static void C_ccall f_2593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2593,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_2837(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2837,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[3]+1 /* (set! chicken.compiler.c-platform#default-declarations ...) */,lf[4]);
t3=C_mutate((C_word*)lf[5]+1 /* (set! chicken.compiler.c-platform#default-profiling-declarations ...) */,lf[6]);
t4=C_mutate((C_word*)lf[7]+1 /* (set! chicken.compiler.c-platform#default-units ...) */,lf[8]);
t5=C_set_block_item(lf[9] /* chicken.compiler.c-platform#words-per-flonum */,0,C_fix(4));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2844,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:82: chicken.compiler.optimizer#eq-inline-operator */
t7=*((C_word*)lf[871]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[872];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_2844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2844,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2847,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:83: chicken.compiler.optimizer#membership-test-operators */
t3=*((C_word*)lf[869]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[870];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_2847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2847,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2850,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:86: chicken.compiler.optimizer#membership-unfold-limit */
t3=*((C_word*)lf[868]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(20);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_2850(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_2850,2,av);}
a=C_alloc(15);
t2=C_mutate((C_word*)lf[10]+1 /* (set! chicken.compiler.c-platform#target-include-file ...) */,lf[11]);
t3=C_mutate((C_word*)lf[12]+1 /* (set! chicken.compiler.c-platform#valid-compiler-options ...) */,lf[13]);
t4=C_mutate((C_word*)lf[14]+1 /* (set! chicken.compiler.c-platform#valid-compiler-options-with-argument ...) */,lf[15]);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2865,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5559,a[2]=t7,a[3]=t11,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_5559(t13,t9,lf[867]);}

/* k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_2865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2865,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[16]+1 /* (set! chicken.compiler.core#default-standard-bindings ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2872,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:239: scheme#append */
t4=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[862];
av2[3]=lf[863];
av2[4]=lf[864];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_2872(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2872,2,av);}
a=C_alloc(8);
t2=C_mutate((C_word*)lf[17]+1 /* (set! chicken.compiler.core#default-extended-bindings ...) */,t1);
t3=C_mutate((C_word*)lf[18]+1 /* (set! chicken.compiler.core#internal-bindings ...) */,lf[19]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2881,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5536,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_5536(t8,t4,lf[861]);}

/* k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_2881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_2881,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2883,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2948,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5534,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:293: op1 */
f_2883(t4,lf[856],lf[857],lf[858]);}

/* op1 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_fcall f_2883(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,6)))){
C_save_and_reclaim_args((void *)trf_2883,4,t1,t2,t3,t4);}
a=C_alloc(5);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2885,a[2]=t3,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* f_2885 in op1 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_2885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_2885,6,av);}
a=C_alloc(19);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(1));
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2907,a[2]=t4,a[3]=t1,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
t11=C_eqp(lf[22],*((C_word*)lf[23]+1));
if(C_truep(t11)){
if(C_truep(*((C_word*)lf[24]+1))){
t12=((C_word*)t0)[2];
t13=C_a_i_list1(&a,1,t12);
/* c-platform.scm:289: chicken.compiler.support#make-node */
t14=*((C_word*)lf[20]+1);{
C_word *av2=av;
av2[0]=t14;
av2[1]=t10;
av2[2]=lf[25];
av2[3]=t13;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}
else{
t12=((C_word*)t0)[3];
t13=C_a_i_list1(&a,1,t12);
/* c-platform.scm:289: chicken.compiler.support#make-node */
t14=*((C_word*)lf[20]+1);{
C_word *av2=av;
av2[0]=t14;
av2[1]=t10;
av2[2]=lf[25];
av2[3]=t13;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}}
else{
t12=C_a_i_list2(&a,2,((C_word*)t0)[4],C_fix(36));
t13=t12;
t14=C_i_car(t5);
t15=t14;
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2940,a[2]=t15,a[3]=t10,a[4]=t13,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:292: chicken.compiler.support#qnode */
t17=*((C_word*)lf[27]+1);{
C_word *av2=av;
av2[0]=t17;
av2[1]=t16;
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t17+1)))(3,av2);}}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k2905 */
static void C_ccall f_2907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2907,2,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:284: chicken.compiler.support#make-node */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[21];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2938 */
static void C_ccall f_2940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2940,2,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:290: chicken.compiler.support#make-node */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[26];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_2948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2948,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2951,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5530,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:294: op1 */
f_2883(t3,lf[852],lf[853],lf[854]);}

/* k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_2951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_2951,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2953,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3107,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:317: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[755];
av2[3]=C_fix(8);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* eqv?-id in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_2953(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_2953,6,av);}
a=C_alloc(13);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(2));
if(C_truep(t7)){
t8=t5;
t9=C_i_car(t8);
t10=t9;
t11=t5;
t12=C_i_cadr(t11);
t13=t12;
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2969,a[2]=t1,a[3]=t4,a[4]=t5,a[5]=t13,a[6]=t10,tmp=(C_word)a,a+=7,tmp);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3099,a[2]=t4,a[3]=t14,a[4]=t13,a[5]=t10,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:304: chicken.compiler.support#node-class */
t16=*((C_word*)lf[32]+1);{
C_word *av2=av;
av2[0]=t16;
av2[1]=t15;
av2[2]=t10;
((C_proc)(void*)(*((C_word*)t16+1)))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k2967 in eqv?-id in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_2969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2969,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2978,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3053,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:308: chicken.compiler.support#node-class */
t4=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k2976 in k2967 in eqv?-id in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_fcall f_2978(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_2978,2,t0,t1);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2981,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_2981(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3026,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:311: chicken.compiler.support#node-class */
t4=*((C_word*)lf[32]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k2979 in k2976 in k2967 in eqv?-id in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_fcall f_2981(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_2981,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2996,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:316: chicken.compiler.support#make-node */
t5=*((C_word*)lf[20]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[25];
av2[3]=lf[28];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2994 in k2979 in k2976 in k2967 in eqv?-id in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_2996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2996,2,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:314: chicken.compiler.support#make-node */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[21];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3006 in k3020 in k3024 in k2976 in k2967 in eqv?-id in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 in ... */
static void C_ccall f_3008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3008,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_2981(t2,t1);}
else{
t2=C_i_numberp(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_2981(t3,C_i_not(t2));}}

/* k3020 in k3024 in k2976 in k2967 in eqv?-id in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_3022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3022,2,av);}
a=C_alloc(4);
t2=C_i_car(t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3008,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:313: chicken.compiler.support#immediate? */
t5=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3024 in k2976 in k2967 in eqv?-id in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_3026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3026,2,av);}
a=C_alloc(3);
t2=C_eqp(lf[29],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3022,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:312: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[31]+1);{
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
else{
t3=((C_word*)t0)[2];
f_2981(t3,C_SCHEME_FALSE);}}

/* k3033 in k3047 in k3051 in k2967 in eqv?-id in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_3035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3035,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_2978(t3,t2);}
else{
t2=C_i_numberp(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_2978(t3,C_i_not(t2));}}

/* k3047 in k3051 in k2967 in eqv?-id in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_3049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3049,2,av);}
a=C_alloc(4);
t2=C_i_car(t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3035,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:310: chicken.compiler.support#immediate? */
t5=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3051 in k2967 in eqv?-id in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_3053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3053,2,av);}
a=C_alloc(3);
t2=C_eqp(lf[29],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3049,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:309: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[31]+1);{
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
else{
t3=((C_word*)t0)[2];
f_2978(t3,C_SCHEME_FALSE);}}

/* k3081 in k3089 in k3085 in k3093 in k3097 in eqv?-id in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 in ... */
static void C_ccall f_3083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3083,2,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:307: chicken.compiler.support#make-node */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[21];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3085 in k3093 in k3097 in eqv?-id in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_3087(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3087,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3091,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:306: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3089 in k3085 in k3093 in k3097 in eqv?-id in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_3091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3091,2,av);}
a=C_alloc(8);
if(C_truep(C_i_equalp(((C_word*)t0)[2],t1))){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3083,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:307: chicken.compiler.support#qnode */
t5=*((C_word*)lf[27]+1);{
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
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_2969(2,av2);}}}

/* k3093 in k3097 in eqv?-id in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_3095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3095,2,av);}
a=C_alloc(5);
t2=C_eqp(lf[33],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3087,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:306: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_2969(2,av2);}}}

/* k3097 in eqv?-id in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_3099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3099,2,av);}
a=C_alloc(6);
t2=C_eqp(lf[33],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3095,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:305: chicken.compiler.support#node-class */
t4=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_2969(2,av2);}}}

/* k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_3107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3107,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3110,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:318: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[753];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_3110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_3110,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3113,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5365,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:320: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[850];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_3113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_3113,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3115,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3293,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:375: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[847];
av2[3]=C_fix(8);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* rewrite-apply in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_3115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3115,6,av);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t5))){
t6=t5;
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2333,tmp=(C_word)a,a+=2,tmp);
t8=(
  f_2333(t6)
);
t9=t8;
t10=t5;
t11=C_u_i_car(t10);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3290,a[2]=t1,a[3]=t5,a[4]=t4,a[5]=t9,a[6]=t11,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:355: chicken.compiler.support#node-class */
t13=*((C_word*)lf[32]+1);{
C_word *av2=av;
av2[0]=t13;
av2[1]=t12;
av2[2]=t9;
((C_proc)(void*)(*((C_word*)t13+1)))(3,av2);}}
else{
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3141 in k3288 in rewrite-apply in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 in ... */
static void C_ccall f_3143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3143,2,av);}
/* c-platform.scm:356: chicken.compiler.support#make-node */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[21];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3149 in k3288 in rewrite-apply in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 in ... */
static void C_ccall f_3151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3151,2,av);}
a=C_alloc(6);
/* c-platform.scm:358: cons* */
f_1991(((C_word*)t0)[2],((C_word*)t0)[3],C_a_i_list(&a,2,((C_word*)t0)[4],t1));}

/* k3166 in k3204 in k3208 in k3288 in rewrite-apply in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in ... */
static void C_ccall f_3168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3168,2,av);}
/* c-platform.scm:360: scheme#append */
t2=*((C_word*)lf[35]+1);{
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

/* map-loop693 in k3204 in k3208 in k3288 in rewrite-apply in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in ... */
static void C_fcall f_3170(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3170,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3195,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* c-platform.scm:360: g699 */
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

/* k3193 in map-loop693 in k3204 in k3208 in k3288 in rewrite-apply in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in ... */
static void C_ccall f_3195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3195,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3170(t6,((C_word*)t0)[5],t5);}

/* k3204 in k3208 in k3288 in rewrite-apply in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in ... */
static void C_ccall f_3206(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_3206,2,av);}
a=C_alloc(12);
t2=C_i_car(t1);
t3=C_i_check_list_2(t2,lf[34]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3168,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3170,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3170(t8,t4,t2);}

/* k3208 in k3288 in rewrite-apply in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 in ... */
static void C_ccall f_3210(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_3210,2,av);}
a=C_alloc(12);
t2=C_i_cdr(t1);
t3=t2;
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=*((C_word*)lf[27]+1);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3206,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t6,a[5]=t8,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:360: chicken.compiler.support#node-parameters */
t10=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k3211 in k3288 in rewrite-apply in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 in ... */
static void C_ccall f_3213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_3213,2,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3227,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3231,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:373: chicken.compiler.support#make-node */
t6=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[37];
av2[3]=lf[38];
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k3225 in k3211 in k3288 in rewrite-apply in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in ... */
static void C_ccall f_3227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3227,2,av);}
/* c-platform.scm:371: chicken.compiler.support#make-node */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[21];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3229 in k3211 in k3288 in rewrite-apply in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in ... */
static void C_ccall f_3231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3231,2,av);}
a=C_alloc(6);
/* c-platform.scm:373: cons* */
f_1991(((C_word*)t0)[2],t1,C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k3252 in k3275 in k3284 in k3288 in rewrite-apply in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in ... */
static void C_ccall f_3254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_3254,2,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3269,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:368: chicken.compiler.support#make-node */
t5=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[37];
av2[3]=lf[41];
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_3213(2,av2);}}}

/* k3267 in k3252 in k3275 in k3284 in k3288 in rewrite-apply in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in ... */
static void C_ccall f_3269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_3269,2,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list3(&a,3,t1,((C_word*)t0)[3],t2);
/* c-platform.scm:366: chicken.compiler.support#make-node */
t4=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[21];
av2[3]=((C_word*)t0)[5];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3275 in k3284 in k3288 in rewrite-apply in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in ... */
static void C_ccall f_3277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3277,2,av);}
a=C_alloc(5);
t2=C_i_car(t1);
if(C_truep((C_truep(C_eqp(t2,lf[39]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[40]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3254,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:365: chicken.compiler.support#intrinsic? */
t4=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_3213(2,av2);}}}

/* k3284 in k3288 in rewrite-apply in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 in ... */
static void C_ccall f_3286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3286,2,av);}
a=C_alloc(5);
t2=C_eqp(lf[33],t1);
if(C_truep(t2)){
t3=C_i_length(((C_word*)t0)[2]);
t4=C_eqp(C_fix(2),t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3277,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:363: chicken.compiler.support#node-parameters */
t6=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_3213(2,av2);}}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_3213(2,av2);}}}

/* k3288 in rewrite-apply in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_3290(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_3290,2,av);}
a=C_alloc(16);
t2=C_eqp(lf[29],t1);
if(C_truep(t2)){
t3=C_a_i_list1(&a,1,C_SCHEME_FALSE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3143,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=((C_word*)t0)[3];
t7=C_i_car(t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3151,a[2]=t5,a[3]=t8,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3210,a[2]=t9,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:360: chicken.base#butlast */
t11=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3213,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3286,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:361: chicken.compiler.support#node-class */
t5=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_3293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3293,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3296,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:376: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[846];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_3296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_3296,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3298,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3366,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:397: rewrite-c..r */
f_3298(t3,lf[843],lf[844],lf[845]);}

/* rewrite-c..r in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 in ... */
static void C_fcall f_3298(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,6)))){
C_save_and_reclaim_args((void *)trf_3298,4,t1,t2,t3,t4);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3304,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:380: chicken.compiler.optimizer#rewrite */
t6=*((C_word*)lf[44]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(8);
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* a3303 in rewrite-c..r in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in ... */
static void C_ccall f_3304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3304,6,av);}
a=C_alloc(6);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(1));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3316,a[2]=t5,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:386: scheme#call-with-current-continuation */
t9=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t1;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* a3315 in a3303 in rewrite-c..r in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in ... */
static void C_ccall f_3316(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_3316,3,av);}
a=C_alloc(11);
t3=((C_word*)t0)[2];
t4=C_i_car(t3);
t5=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3335,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(C_truep(*((C_word*)lf[24]+1))?((C_word*)t0)[4]:C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_a_i_list1(&a,1,((C_word*)t0)[4]);
/* c-platform.scm:393: chicken.compiler.support#make-node */
t10=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=lf[25];
av2[3]=t9;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
if(C_truep(((C_word*)t0)[5])){
t9=C_a_i_list1(&a,1,((C_word*)t0)[5]);
/* c-platform.scm:394: chicken.compiler.support#make-node */
t10=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=lf[25];
av2[3]=t9;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
/* c-platform.scm:395: return */
t9=t2;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t7;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}}

/* k3333 in a3315 in a3303 in rewrite-c..r in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in ... */
static void C_ccall f_3335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3335,2,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:389: chicken.compiler.support#make-node */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[21];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 in ... */
static void C_ccall f_3366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3366,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3369,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:398: rewrite-c..r */
f_3298(t2,lf[840],lf[841],lf[842]);}

/* k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in ... */
static void C_ccall f_3369(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3369,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3372,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:399: rewrite-c..r */
f_3298(t2,lf[837],lf[838],lf[839]);}

/* k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in ... */
static void C_ccall f_3372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3372,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3375,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:400: rewrite-c..r */
f_3298(t2,lf[834],lf[835],lf[836]);}

/* k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in ... */
static void C_ccall f_3375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3375,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3378,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:401: rewrite-c..r */
f_3298(t2,lf[810],lf[832],lf[833]);}

/* k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in ... */
static void C_ccall f_3378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3378,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3381,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:402: rewrite-c..r */
f_3298(t2,lf[789],lf[830],lf[831]);}

/* k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in ... */
static void C_ccall f_3381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_3381,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3382,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3408,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:409: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[828];
av2[3]=C_fix(8);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* rvalues in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in ... */
static void C_ccall f_3382(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3382,6,av);}
a=C_alloc(6);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(1));
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=C_a_i_cons(&a,2,t4,t5);
/* c-platform.scm:408: chicken.compiler.support#make-node */
t10=*((C_word*)lf[20]+1);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t1;
av2[2]=lf[21];
av2[3]=t8;
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in ... */
static void C_ccall f_3408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3408,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3411,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:410: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[40];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in ... */
static void C_ccall f_3411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_3411,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3413,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3578,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:441: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[824];
av2[3]=C_fix(8);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* rewrite-c-w-v in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in ... */
static void C_ccall f_3413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3413,6,av);}
a=C_alloc(7);
t6=C_i_length(t5);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=t8;
t10=C_i_cadr(t5);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3570,a[2]=t1,a[3]=t9,a[4]=t11,a[5]=t4,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:419: chicken.compiler.support#node-class */
t13=*((C_word*)lf[32]+1);{
C_word *av2=av;
av2[0]=t13;
av2[1]=t12;
av2[2]=t9;
((C_proc)(void*)(*((C_word*)t13+1)))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3445 in k3560 in k3564 in k3568 in rewrite-c-w-v in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in ... */
static void C_ccall f_3447(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3447,2,av);}
a=C_alloc(7);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3558,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:423: chicken.compiler.support#node-class */
t4=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3472 in k3552 in k3556 in k3445 in k3560 in k3564 in k3568 in rewrite-c-w-v in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in ... */
static void C_ccall f_3474(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3474,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3477,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* c-platform.scm:428: chicken.base#gensym */
t4=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[53];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3475 in k3472 in k3552 in k3556 in k3445 in k3560 in k3564 in k3568 in rewrite-c-w-v in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in ... */
static void C_ccall f_3477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3477,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3480,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3547,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:429: chicken.compiler.support#node-parameters */
t5=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3478 in k3475 in k3472 in k3552 in k3556 in k3445 in k3560 in k3564 in k3568 in rewrite-c-w-v in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in ... */
static void C_ccall f_3480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3480,2,av);}
a=C_alloc(15);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3495,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3539,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:434: chicken.base#gensym */
t6=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[49];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3493 in k3478 in k3475 in k3472 in k3552 in k3556 in k3445 in k3560 in k3564 in k3568 in rewrite-c-w-v in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in ... */
static void C_ccall f_3495(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3495,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3499,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3511,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:440: chicken.compiler.support#varnode */
t7=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k3497 in k3493 in k3478 in k3475 in k3472 in k3552 in k3556 in k3445 in k3560 in k3564 in k3568 in rewrite-c-w-v in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in ... */
static void C_ccall f_3499(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3499,2,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:430: chicken.compiler.support#make-node */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[46];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3509 in k3493 in k3478 in k3475 in k3472 in k3552 in k3556 in k3445 in k3560 in k3564 in k3568 in rewrite-c-w-v in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in ... */
static void C_ccall f_3511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3511,2,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:438: chicken.compiler.support#make-node */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[21];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3521 in k3537 in k3478 in k3475 in k3472 in k3552 in k3556 in k3445 in k3560 in k3564 in k3568 in rewrite-c-w-v in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in ... */
static void C_ccall f_3523(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3523,2,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* c-platform.scm:432: chicken.compiler.support#make-node */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[45];
av2[3]=((C_word*)t0)[3];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3533 in k3537 in k3478 in k3475 in k3472 in k3552 in k3556 in k3445 in k3560 in k3564 in k3568 in rewrite-c-w-v in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in ... */
static void C_ccall f_3535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_3535,2,av);}
a=C_alloc(9);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
/* c-platform.scm:435: chicken.compiler.support#make-node */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[21];
av2[3]=((C_word*)t0)[5];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3537 in k3478 in k3475 in k3472 in k3552 in k3556 in k3445 in k3560 in k3564 in k3568 in rewrite-c-w-v in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in ... */
static void C_ccall f_3539(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,2)))){
C_save_and_reclaim((void *)f_3539,2,av);}
a=C_alloc(28);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=C_a_i_list4(&a,4,t1,C_SCHEME_FALSE,t2,C_fix(0));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3523,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3535,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:437: chicken.compiler.support#varnode */
t9=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k3545 in k3475 in k3472 in k3552 in k3556 in k3445 in k3560 in k3564 in k3568 in rewrite-c-w-v in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in ... */
static void C_ccall f_3547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3547,2,av);}
/* c-platform.scm:429: chicken.compiler.support#debugging */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[51];
av2[3]=lf[52];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3552 in k3556 in k3445 in k3560 in k3564 in k3568 in rewrite-c-w-v in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in ... */
static void C_ccall f_3554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3554,2,av);}
a=C_alloc(7);
t2=C_i_caddr(t1);
if(C_truep(C_i_listp(t2))){
t3=C_u_i_length(t2);
t4=C_eqp(C_fix(2),t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3474,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:427: chicken.base#gensym */
t6=*((C_word*)lf[48]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3556 in k3445 in k3560 in k3564 in k3568 in rewrite-c-w-v in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in ... */
static void C_ccall f_3558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3558,2,av);}
a=C_alloc(7);
t2=C_eqp(lf[45],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3554,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:424: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3560 in k3564 in k3568 in rewrite-c-w-v in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in ... */
static void C_ccall f_3562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3562,2,av);}
a=C_alloc(6);
t2=C_i_car(t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3447,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:422: chicken.compiler.support#db-get */
t4=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=t2;
av2[4]=lf[55];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3564 in k3568 in rewrite-c-w-v in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in ... */
static void C_ccall f_3566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3566,2,av);}
a=C_alloc(7);
t2=C_eqp(lf[33],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3562,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:421: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3568 in rewrite-c-w-v in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in ... */
static void C_ccall f_3570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3570,2,av);}
a=C_alloc(7);
t2=C_eqp(lf[33],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3566,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:420: chicken.compiler.support#node-class */
t4=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3576 in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in ... */
static void C_ccall f_3578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3578,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3581,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:442: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[821];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3579 in k3576 in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in ... */
static void C_ccall f_3581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3581,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3584,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:444: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[828];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[829];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3582 in k3579 in k3576 in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in ... */
static void C_ccall f_3584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3584,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3587,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:445: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[40];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[827];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3585 in k3582 in k3579 in k3576 in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in ... */
static void C_ccall f_3587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3587,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3590,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:446: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[824];
av2[3]=C_fix(13);
av2[4]=C_fix(2);
av2[5]=lf[826];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3588 in k3585 in k3582 in k3579 in k3576 in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in ... */
static void C_ccall f_3590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3590,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3593,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:447: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[824];
av2[3]=C_fix(13);
av2[4]=C_fix(2);
av2[5]=lf[825];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in k2879 in ... */
static void C_ccall f_3593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3593,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3596,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:448: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[821];
av2[3]=C_fix(13);
av2[4]=C_fix(2);
av2[5]=lf[823];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in k2946 in ... */
static void C_ccall f_3596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3596,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3599,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:449: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[821];
av2[3]=C_fix(13);
av2[4]=C_fix(2);
av2[5]=lf[822];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in k2949 in ... */
static void C_ccall f_3599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3599,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3602,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:450: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[819];
av2[3]=C_fix(13);
av2[4]=C_fix(2);
av2[5]=lf[820];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in k3105 in ... */
static void C_ccall f_3602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3602,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3605,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:452: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[772];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[818];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in k3108 in ... */
static void C_ccall f_3605(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3605,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3608,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:453: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[770];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[817];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in k3111 in ... */
static void C_ccall f_3608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3608,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3611,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:454: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[768];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[816];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in k3291 in ... */
static void C_ccall f_3611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3611,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3614,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:455: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[814];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[815];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3294 in ... */
static void C_ccall f_3614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3614,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3617,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:456: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[812];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[813];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in ... */
static void C_ccall f_3617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3617,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3620,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:457: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[810];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[811];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in k3367 in ... */
static void C_ccall f_3620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3620,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3623,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:458: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[808];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[809];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3409 in k3406 in k3379 in k3376 in k3373 in k3370 in ... */
static void C_ccall f_3623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3623,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3626,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:459: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[806];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[807];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3409 in k3406 in k3379 in k3376 in k3373 in ... */
static void C_ccall f_3626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3626,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3629,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:460: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[804];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[805];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3409 in k3406 in k3379 in k3376 in ... */
static void C_ccall f_3629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3629,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3632,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:461: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[766];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[803];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3409 in k3406 in k3379 in ... */
static void C_ccall f_3632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3632,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3635,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:462: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[801];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[802];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3409 in k3406 in ... */
static void C_ccall f_3635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3635,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3638,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:463: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[799];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[800];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3409 in ... */
static void C_ccall f_3638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3638,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3641,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:464: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[797];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[798];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in ... */
static void C_ccall f_3641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3641,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3644,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:465: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[795];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[796];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in ... */
static void C_ccall f_3644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3644,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3647,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:466: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[793];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[794];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in ... */
static void C_ccall f_3647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3647,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3650,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:467: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[791];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[792];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in ... */
static void C_ccall f_3650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3650,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3653,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:468: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[789];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[790];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in ... */
static void C_ccall f_3653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3653,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3656,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:469: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[787];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[788];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in ... */
static void C_ccall f_3656(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3656,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3659,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:470: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[785];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[786];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in ... */
static void C_ccall f_3659(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3659,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3662,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:471: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[783];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[784];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in ... */
static void C_ccall f_3662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3662,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3665,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:472: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[781];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[782];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in ... */
static void C_ccall f_3665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3665,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3668,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:473: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[779];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[780];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in ... */
static void C_ccall f_3668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3668,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3671,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:474: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[777];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[778];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in ... */
static void C_ccall f_3671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3671,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3674,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:475: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[775];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[776];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in ... */
static void C_ccall f_3674(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3674,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3677,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:476: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[764];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[774];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in ... */
static void C_ccall f_3677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3677,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3680,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:478: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[772];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[773];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in ... */
static void C_ccall f_3680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3680,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3683,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:479: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[770];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[771];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in ... */
static void C_ccall f_3683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3683,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3686,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:480: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[768];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[769];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in ... */
static void C_ccall f_3686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3686,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3689,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:481: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[766];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[767];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in ... */
static void C_ccall f_3689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3689,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3692,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:482: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[764];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[765];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in ... */
static void C_ccall f_3692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3692,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3695,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:484: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[761];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[763];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in ... */
static void C_ccall f_3695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3695,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3698,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:485: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[761];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[762];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in ... */
static void C_ccall f_3698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3698,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3701,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:487: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[759];
av2[3]=C_fix(1);
av2[4]=C_fix(2);
av2[5]=lf[760];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in ... */
static void C_ccall f_3701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3701,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3704,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:488: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[757];
av2[3]=C_fix(1);
av2[4]=C_fix(2);
av2[5]=lf[758];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in ... */
static void C_ccall f_3704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3704,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3707,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:489: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[755];
av2[3]=C_fix(1);
av2[4]=C_fix(2);
av2[5]=lf[756];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in ... */
static void C_ccall f_3707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3707,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3710,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:490: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[753];
av2[3]=C_fix(1);
av2[4]=C_fix(2);
av2[5]=lf[754];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in ... */
static void C_ccall f_3710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3710,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3713,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:492: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[750];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[752];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in ... */
static void C_ccall f_3713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3713,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3716,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:493: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[750];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[751];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in ... */
static void C_ccall f_3716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3716,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3719,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:494: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[748];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[749];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in ... */
static void C_ccall f_3719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3719,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3722,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:495: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[746];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[747];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in ... */
static void C_ccall f_3722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3722,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3725,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:496: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[744];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[745];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in ... */
static void C_ccall f_3725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3725,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3728,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:497: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[742];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[743];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in ... */
static void C_ccall f_3728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3728,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3731,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:498: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[740];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[741];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in ... */
static void C_ccall f_3731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3731,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3734,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:499: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[738];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[739];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in ... */
static void C_ccall f_3734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3734,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3737,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:500: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[736];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[737];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in ... */
static void C_ccall f_3737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3737,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3740,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:501: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[734];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[735];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in ... */
static void C_ccall f_3740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3740,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3743,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:502: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[732];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[733];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in ... */
static void C_ccall f_3743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3743,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3746,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:503: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[730];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[731];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in ... */
static void C_ccall f_3746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3746,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3749,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:504: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[728];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[729];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in ... */
static void C_ccall f_3749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3749,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3752,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:505: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[726];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[727];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in ... */
static void C_ccall f_3752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3752,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3755,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:506: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[724];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[725];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in ... */
static void C_ccall f_3755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3755,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3758,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:507: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[722];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[723];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in ... */
static void C_ccall f_3758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3758,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3761,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:508: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[720];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[721];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in ... */
static void C_ccall f_3761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3761,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3764,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:509: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[718];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[719];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in ... */
static void C_ccall f_3764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3764,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3767,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:510: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[716];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[717];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in ... */
static void C_ccall f_3767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3767,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3770,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:511: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[714];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[715];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in ... */
static void C_ccall f_3770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3770,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3773,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:512: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[712];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[713];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3771 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in ... */
static void C_ccall f_3773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3773,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3776,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:513: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[710];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[711];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3774 in k3771 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in ... */
static void C_ccall f_3776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3776,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3779,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:514: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[708];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[709];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3777 in k3774 in k3771 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in ... */
static void C_ccall f_3779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3779,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3782,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:515: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[706];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[707];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3780 in k3777 in k3774 in k3771 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in ... */
static void C_ccall f_3782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3782,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3785,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:516: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[704];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[705];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3783 in k3780 in k3777 in k3774 in k3771 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in ... */
static void C_ccall f_3785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3785,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3788,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:517: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[702];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[703];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3786 in k3783 in k3780 in k3777 in k3774 in k3771 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in ... */
static void C_ccall f_3788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3788,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3791,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:518: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[700];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[701];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3789 in k3786 in k3783 in k3780 in k3777 in k3774 in k3771 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in ... */
static void C_ccall f_3791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3791,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3794,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:519: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[698];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[699];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3792 in k3789 in k3786 in k3783 in k3780 in k3777 in k3774 in k3771 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in ... */
static void C_ccall f_3794(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3794,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3797,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:520: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[696];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[697];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3795 in k3792 in k3789 in k3786 in k3783 in k3780 in k3777 in k3774 in k3771 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in ... */
static void C_ccall f_3797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3797,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3800,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:521: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[694];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[695];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3798 in k3795 in k3792 in k3789 in k3786 in k3783 in k3780 in k3777 in k3774 in k3771 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in ... */
static void C_ccall f_3800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3800,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3803,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:522: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[692];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[693];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3801 in k3798 in k3795 in k3792 in k3789 in k3786 in k3783 in k3780 in k3777 in k3774 in k3771 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in ... */
static void C_ccall f_3803(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3803,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3806,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:523: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[690];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[691];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3804 in k3801 in k3798 in k3795 in k3792 in k3789 in k3786 in k3783 in k3780 in k3777 in k3774 in k3771 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in ... */
static void C_ccall f_3806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3806,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3809,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:524: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[688];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[689];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3807 in k3804 in k3801 in k3798 in k3795 in k3792 in k3789 in k3786 in k3783 in k3780 in k3777 in k3774 in k3771 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in ... */
static void C_ccall f_3809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3809,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3812,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:525: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[686];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[687];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3810 in k3807 in k3804 in k3801 in k3798 in k3795 in k3792 in k3789 in k3786 in k3783 in k3780 in k3777 in k3774 in k3771 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in ... */
static void C_ccall f_3812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3812,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3815,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:526: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[684];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[685];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3813 in k3810 in k3807 in k3804 in k3801 in k3798 in k3795 in k3792 in k3789 in k3786 in k3783 in k3780 in k3777 in k3774 in k3771 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in ... */
static void C_ccall f_3815(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3815,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3818,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:527: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[681];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[683];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3816 in k3813 in k3810 in k3807 in k3804 in k3801 in k3798 in k3795 in k3792 in k3789 in k3786 in k3783 in k3780 in k3777 in k3774 in k3771 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in ... */
static void C_ccall f_3818(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3818,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3821,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:528: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[681];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[682];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3819 in k3816 in k3813 in k3810 in k3807 in k3804 in k3801 in k3798 in k3795 in k3792 in k3789 in k3786 in k3783 in k3780 in k3777 in k3774 in k3771 in k3768 in k3765 in k3762 in k3759 in k3756 in ... */
static void C_ccall f_3821(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3821,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3824,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:529: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[678];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[680];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3822 in k3819 in k3816 in k3813 in k3810 in k3807 in k3804 in k3801 in k3798 in k3795 in k3792 in k3789 in k3786 in k3783 in k3780 in k3777 in k3774 in k3771 in k3768 in k3765 in k3762 in k3759 in ... */
static void C_ccall f_3824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3824,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3827,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:530: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[678];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[679];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3825 in k3822 in k3819 in k3816 in k3813 in k3810 in k3807 in k3804 in k3801 in k3798 in k3795 in k3792 in k3789 in k3786 in k3783 in k3780 in k3777 in k3774 in k3771 in k3768 in k3765 in k3762 in ... */
static void C_ccall f_3827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3827,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3830,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:531: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[676];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[677];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3828 in k3825 in k3822 in k3819 in k3816 in k3813 in k3810 in k3807 in k3804 in k3801 in k3798 in k3795 in k3792 in k3789 in k3786 in k3783 in k3780 in k3777 in k3774 in k3771 in k3768 in k3765 in ... */
static void C_ccall f_3830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3830,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3833,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:532: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[674];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[675];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3831 in k3828 in k3825 in k3822 in k3819 in k3816 in k3813 in k3810 in k3807 in k3804 in k3801 in k3798 in k3795 in k3792 in k3789 in k3786 in k3783 in k3780 in k3777 in k3774 in k3771 in k3768 in ... */
static void C_ccall f_3833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3833,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3836,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:533: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[671];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[673];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3834 in k3831 in k3828 in k3825 in k3822 in k3819 in k3816 in k3813 in k3810 in k3807 in k3804 in k3801 in k3798 in k3795 in k3792 in k3789 in k3786 in k3783 in k3780 in k3777 in k3774 in k3771 in ... */
static void C_ccall f_3836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3836,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3839,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:534: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[671];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[672];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3837 in k3834 in k3831 in k3828 in k3825 in k3822 in k3819 in k3816 in k3813 in k3810 in k3807 in k3804 in k3801 in k3798 in k3795 in k3792 in k3789 in k3786 in k3783 in k3780 in k3777 in k3774 in ... */
static void C_ccall f_3839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3839,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3842,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:535: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[668];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[670];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3840 in k3837 in k3834 in k3831 in k3828 in k3825 in k3822 in k3819 in k3816 in k3813 in k3810 in k3807 in k3804 in k3801 in k3798 in k3795 in k3792 in k3789 in k3786 in k3783 in k3780 in k3777 in ... */
static void C_ccall f_3842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3842,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3845,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:536: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[668];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[669];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3843 in k3840 in k3837 in k3834 in k3831 in k3828 in k3825 in k3822 in k3819 in k3816 in k3813 in k3810 in k3807 in k3804 in k3801 in k3798 in k3795 in k3792 in k3789 in k3786 in k3783 in k3780 in ... */
static void C_ccall f_3845(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3845,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3848,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:537: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[665];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[667];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3846 in k3843 in k3840 in k3837 in k3834 in k3831 in k3828 in k3825 in k3822 in k3819 in k3816 in k3813 in k3810 in k3807 in k3804 in k3801 in k3798 in k3795 in k3792 in k3789 in k3786 in k3783 in ... */
static void C_ccall f_3848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3848,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3851,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:538: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[665];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[666];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3849 in k3846 in k3843 in k3840 in k3837 in k3834 in k3831 in k3828 in k3825 in k3822 in k3819 in k3816 in k3813 in k3810 in k3807 in k3804 in k3801 in k3798 in k3795 in k3792 in k3789 in k3786 in ... */
static void C_ccall f_3851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3851,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3854,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:539: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[662];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[664];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3852 in k3849 in k3846 in k3843 in k3840 in k3837 in k3834 in k3831 in k3828 in k3825 in k3822 in k3819 in k3816 in k3813 in k3810 in k3807 in k3804 in k3801 in k3798 in k3795 in k3792 in k3789 in ... */
static void C_ccall f_3854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3854,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3857,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:540: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[662];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[663];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3855 in k3852 in k3849 in k3846 in k3843 in k3840 in k3837 in k3834 in k3831 in k3828 in k3825 in k3822 in k3819 in k3816 in k3813 in k3810 in k3807 in k3804 in k3801 in k3798 in k3795 in k3792 in ... */
static void C_ccall f_3857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3857,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3860,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:541: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[659];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[661];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3858 in k3855 in k3852 in k3849 in k3846 in k3843 in k3840 in k3837 in k3834 in k3831 in k3828 in k3825 in k3822 in k3819 in k3816 in k3813 in k3810 in k3807 in k3804 in k3801 in k3798 in k3795 in ... */
static void C_ccall f_3860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3860,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3863,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:542: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[659];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[660];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3861 in k3858 in k3855 in k3852 in k3849 in k3846 in k3843 in k3840 in k3837 in k3834 in k3831 in k3828 in k3825 in k3822 in k3819 in k3816 in k3813 in k3810 in k3807 in k3804 in k3801 in k3798 in ... */
static void C_ccall f_3863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3863,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3866,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:543: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[656];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[658];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3864 in k3861 in k3858 in k3855 in k3852 in k3849 in k3846 in k3843 in k3840 in k3837 in k3834 in k3831 in k3828 in k3825 in k3822 in k3819 in k3816 in k3813 in k3810 in k3807 in k3804 in k3801 in ... */
static void C_ccall f_3866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3866,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3869,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:544: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[656];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[657];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3867 in k3864 in k3861 in k3858 in k3855 in k3852 in k3849 in k3846 in k3843 in k3840 in k3837 in k3834 in k3831 in k3828 in k3825 in k3822 in k3819 in k3816 in k3813 in k3810 in k3807 in k3804 in ... */
static void C_ccall f_3869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3869,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3872,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:545: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[653];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[655];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3870 in k3867 in k3864 in k3861 in k3858 in k3855 in k3852 in k3849 in k3846 in k3843 in k3840 in k3837 in k3834 in k3831 in k3828 in k3825 in k3822 in k3819 in k3816 in k3813 in k3810 in k3807 in ... */
static void C_ccall f_3872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3872,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3875,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:546: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[653];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[654];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3873 in k3870 in k3867 in k3864 in k3861 in k3858 in k3855 in k3852 in k3849 in k3846 in k3843 in k3840 in k3837 in k3834 in k3831 in k3828 in k3825 in k3822 in k3819 in k3816 in k3813 in k3810 in ... */
static void C_ccall f_3875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3875,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3878,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:547: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[650];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[652];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3876 in k3873 in k3870 in k3867 in k3864 in k3861 in k3858 in k3855 in k3852 in k3849 in k3846 in k3843 in k3840 in k3837 in k3834 in k3831 in k3828 in k3825 in k3822 in k3819 in k3816 in k3813 in ... */
static void C_ccall f_3878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3878,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3881,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:548: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[650];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[651];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3879 in k3876 in k3873 in k3870 in k3867 in k3864 in k3861 in k3858 in k3855 in k3852 in k3849 in k3846 in k3843 in k3840 in k3837 in k3834 in k3831 in k3828 in k3825 in k3822 in k3819 in k3816 in ... */
static void C_ccall f_3881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3881,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3884,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:549: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[648];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[649];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3882 in k3879 in k3876 in k3873 in k3870 in k3867 in k3864 in k3861 in k3858 in k3855 in k3852 in k3849 in k3846 in k3843 in k3840 in k3837 in k3834 in k3831 in k3828 in k3825 in k3822 in k3819 in ... */
static void C_ccall f_3884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3884,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3887,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:550: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[646];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[647];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3885 in k3882 in k3879 in k3876 in k3873 in k3870 in k3867 in k3864 in k3861 in k3858 in k3855 in k3852 in k3849 in k3846 in k3843 in k3840 in k3837 in k3834 in k3831 in k3828 in k3825 in k3822 in ... */
static void C_ccall f_3887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3887,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3890,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:551: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[644];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[645];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in k3870 in k3867 in k3864 in k3861 in k3858 in k3855 in k3852 in k3849 in k3846 in k3843 in k3840 in k3837 in k3834 in k3831 in k3828 in k3825 in ... */
static void C_ccall f_3890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3890,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3893,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:552: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[642];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[643];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3891 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in k3870 in k3867 in k3864 in k3861 in k3858 in k3855 in k3852 in k3849 in k3846 in k3843 in k3840 in k3837 in k3834 in k3831 in k3828 in ... */
static void C_ccall f_3893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3893,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3896,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:553: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[640];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[641];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3894 in k3891 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in k3870 in k3867 in k3864 in k3861 in k3858 in k3855 in k3852 in k3849 in k3846 in k3843 in k3840 in k3837 in k3834 in k3831 in ... */
static void C_ccall f_3896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3896,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3899,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:554: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[638];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[639];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3897 in k3894 in k3891 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in k3870 in k3867 in k3864 in k3861 in k3858 in k3855 in k3852 in k3849 in k3846 in k3843 in k3840 in k3837 in k3834 in ... */
static void C_ccall f_3899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3899,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3902,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:555: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[636];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[637];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3900 in k3897 in k3894 in k3891 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in k3870 in k3867 in k3864 in k3861 in k3858 in k3855 in k3852 in k3849 in k3846 in k3843 in k3840 in k3837 in ... */
static void C_ccall f_3902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3902,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3905,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:556: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[634];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[635];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3903 in k3900 in k3897 in k3894 in k3891 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in k3870 in k3867 in k3864 in k3861 in k3858 in k3855 in k3852 in k3849 in k3846 in k3843 in k3840 in ... */
static void C_ccall f_3905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3905,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3908,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:557: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[632];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[633];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3906 in k3903 in k3900 in k3897 in k3894 in k3891 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in k3870 in k3867 in k3864 in k3861 in k3858 in k3855 in k3852 in k3849 in k3846 in k3843 in ... */
static void C_ccall f_3908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3908,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3911,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:558: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[630];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[631];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3909 in k3906 in k3903 in k3900 in k3897 in k3894 in k3891 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in k3870 in k3867 in k3864 in k3861 in k3858 in k3855 in k3852 in k3849 in k3846 in ... */
static void C_ccall f_3911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3911,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3914,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:559: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[628];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[629];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3912 in k3909 in k3906 in k3903 in k3900 in k3897 in k3894 in k3891 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in k3870 in k3867 in k3864 in k3861 in k3858 in k3855 in k3852 in k3849 in ... */
static void C_ccall f_3914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3914,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3917,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:560: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[626];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[627];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3915 in k3912 in k3909 in k3906 in k3903 in k3900 in k3897 in k3894 in k3891 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in k3870 in k3867 in k3864 in k3861 in k3858 in k3855 in k3852 in ... */
static void C_ccall f_3917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3917,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3920,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:561: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[624];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[625];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3918 in k3915 in k3912 in k3909 in k3906 in k3903 in k3900 in k3897 in k3894 in k3891 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in k3870 in k3867 in k3864 in k3861 in k3858 in k3855 in ... */
static void C_ccall f_3920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3920,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3923,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:562: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[622];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[623];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3921 in k3918 in k3915 in k3912 in k3909 in k3906 in k3903 in k3900 in k3897 in k3894 in k3891 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in k3870 in k3867 in k3864 in k3861 in k3858 in ... */
static void C_ccall f_3923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3923,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3926,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:563: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[620];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[621];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3924 in k3921 in k3918 in k3915 in k3912 in k3909 in k3906 in k3903 in k3900 in k3897 in k3894 in k3891 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in k3870 in k3867 in k3864 in k3861 in ... */
static void C_ccall f_3926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3926,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3929,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:564: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[618];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[619];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3927 in k3924 in k3921 in k3918 in k3915 in k3912 in k3909 in k3906 in k3903 in k3900 in k3897 in k3894 in k3891 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in k3870 in k3867 in k3864 in ... */
static void C_ccall f_3929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3929,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3932,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:565: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[616];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[617];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3930 in k3927 in k3924 in k3921 in k3918 in k3915 in k3912 in k3909 in k3906 in k3903 in k3900 in k3897 in k3894 in k3891 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in k3870 in k3867 in ... */
static void C_ccall f_3932(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3932,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3935,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:566: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[614];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[615];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3933 in k3930 in k3927 in k3924 in k3921 in k3918 in k3915 in k3912 in k3909 in k3906 in k3903 in k3900 in k3897 in k3894 in k3891 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in k3870 in ... */
static void C_ccall f_3935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3935,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3938,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:567: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[612];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[613];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3936 in k3933 in k3930 in k3927 in k3924 in k3921 in k3918 in k3915 in k3912 in k3909 in k3906 in k3903 in k3900 in k3897 in k3894 in k3891 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in ... */
static void C_ccall f_3938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3938,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3941,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:568: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[610];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[611];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3939 in k3936 in k3933 in k3930 in k3927 in k3924 in k3921 in k3918 in k3915 in k3912 in k3909 in k3906 in k3903 in k3900 in k3897 in k3894 in k3891 in k3888 in k3885 in k3882 in k3879 in k3876 in ... */
static void C_ccall f_3941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3941,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3944,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:569: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[608];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[609];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3942 in k3939 in k3936 in k3933 in k3930 in k3927 in k3924 in k3921 in k3918 in k3915 in k3912 in k3909 in k3906 in k3903 in k3900 in k3897 in k3894 in k3891 in k3888 in k3885 in k3882 in k3879 in ... */
static void C_ccall f_3944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3944,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3947,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:570: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[606];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[607];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3945 in k3942 in k3939 in k3936 in k3933 in k3930 in k3927 in k3924 in k3921 in k3918 in k3915 in k3912 in k3909 in k3906 in k3903 in k3900 in k3897 in k3894 in k3891 in k3888 in k3885 in k3882 in ... */
static void C_ccall f_3947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3947,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3950,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:571: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[604];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[605];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3948 in k3945 in k3942 in k3939 in k3936 in k3933 in k3930 in k3927 in k3924 in k3921 in k3918 in k3915 in k3912 in k3909 in k3906 in k3903 in k3900 in k3897 in k3894 in k3891 in k3888 in k3885 in ... */
static void C_ccall f_3950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3950,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3953,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:572: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[602];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[603];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3951 in k3948 in k3945 in k3942 in k3939 in k3936 in k3933 in k3930 in k3927 in k3924 in k3921 in k3918 in k3915 in k3912 in k3909 in k3906 in k3903 in k3900 in k3897 in k3894 in k3891 in k3888 in ... */
static void C_ccall f_3953(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3953,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3956,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:573: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[600];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[601];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3954 in k3951 in k3948 in k3945 in k3942 in k3939 in k3936 in k3933 in k3930 in k3927 in k3924 in k3921 in k3918 in k3915 in k3912 in k3909 in k3906 in k3903 in k3900 in k3897 in k3894 in k3891 in ... */
static void C_ccall f_3956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3956,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3959,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:574: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[598];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[599];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3957 in k3954 in k3951 in k3948 in k3945 in k3942 in k3939 in k3936 in k3933 in k3930 in k3927 in k3924 in k3921 in k3918 in k3915 in k3912 in k3909 in k3906 in k3903 in k3900 in k3897 in k3894 in ... */
static void C_ccall f_3959(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3959,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3962,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:575: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[596];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[597];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3960 in k3957 in k3954 in k3951 in k3948 in k3945 in k3942 in k3939 in k3936 in k3933 in k3930 in k3927 in k3924 in k3921 in k3918 in k3915 in k3912 in k3909 in k3906 in k3903 in k3900 in k3897 in ... */
static void C_ccall f_3962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3962,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3965,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:576: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[594];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[595];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in k3945 in k3942 in k3939 in k3936 in k3933 in k3930 in k3927 in k3924 in k3921 in k3918 in k3915 in k3912 in k3909 in k3906 in k3903 in k3900 in ... */
static void C_ccall f_3965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3965,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3968,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:577: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[592];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[593];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in k3945 in k3942 in k3939 in k3936 in k3933 in k3930 in k3927 in k3924 in k3921 in k3918 in k3915 in k3912 in k3909 in k3906 in k3903 in ... */
static void C_ccall f_3968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3968,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3971,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:578: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[590];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[591];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in k3945 in k3942 in k3939 in k3936 in k3933 in k3930 in k3927 in k3924 in k3921 in k3918 in k3915 in k3912 in k3909 in k3906 in ... */
static void C_ccall f_3971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3971,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3974,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:579: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[588];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[589];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in k3945 in k3942 in k3939 in k3936 in k3933 in k3930 in k3927 in k3924 in k3921 in k3918 in k3915 in k3912 in k3909 in ... */
static void C_ccall f_3974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3974,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3977,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:580: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[586];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[587];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in k3945 in k3942 in k3939 in k3936 in k3933 in k3930 in k3927 in k3924 in k3921 in k3918 in k3915 in k3912 in ... */
static void C_ccall f_3977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3977,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3980,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:581: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[584];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[585];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3978 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in k3945 in k3942 in k3939 in k3936 in k3933 in k3930 in k3927 in k3924 in k3921 in k3918 in k3915 in ... */
static void C_ccall f_3980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3980,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3983,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:582: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[582];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[583];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3981 in k3978 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in k3945 in k3942 in k3939 in k3936 in k3933 in k3930 in k3927 in k3924 in k3921 in k3918 in ... */
static void C_ccall f_3983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3983,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3986,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:583: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[580];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[581];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3984 in k3981 in k3978 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in k3945 in k3942 in k3939 in k3936 in k3933 in k3930 in k3927 in k3924 in k3921 in ... */
static void C_ccall f_3986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3986,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3989,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:584: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[578];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[579];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3987 in k3984 in k3981 in k3978 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in k3945 in k3942 in k3939 in k3936 in k3933 in k3930 in k3927 in k3924 in ... */
static void C_ccall f_3989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3989,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3992,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:585: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[576];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[577];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3990 in k3987 in k3984 in k3981 in k3978 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in k3945 in k3942 in k3939 in k3936 in k3933 in k3930 in k3927 in ... */
static void C_ccall f_3992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3992,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3995,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:587: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[572];
av2[3]=C_fix(14);
av2[4]=lf[22];
av2[5]=C_fix(2);
av2[6]=lf[574];
av2[7]=lf[575];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3993 in k3990 in k3987 in k3984 in k3981 in k3978 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in k3945 in k3942 in k3939 in k3936 in k3933 in k3930 in ... */
static void C_ccall f_3995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3995,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3998,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:588: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[572];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[573];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3996 in k3993 in k3990 in k3987 in k3984 in k3981 in k3978 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in k3945 in k3942 in k3939 in k3936 in k3933 in ... */
static void C_ccall f_3998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3998,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4001,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:589: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[568];
av2[3]=C_fix(14);
av2[4]=lf[22];
av2[5]=C_fix(2);
av2[6]=lf[570];
av2[7]=lf[571];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3999 in k3996 in k3993 in k3990 in k3987 in k3984 in k3981 in k3978 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in k3945 in k3942 in k3939 in k3936 in ... */
static void C_ccall f_4001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4001,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4004,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:590: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[568];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[569];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4002 in k3999 in k3996 in k3993 in k3990 in k3987 in k3984 in k3981 in k3978 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in k3945 in k3942 in k3939 in ... */
static void C_ccall f_4004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4004,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4007,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:591: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[565];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[566];
av2[6]=lf[567];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4005 in k4002 in k3999 in k3996 in k3993 in k3990 in k3987 in k3984 in k3981 in k3978 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in k3945 in k3942 in ... */
static void C_ccall f_4007(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4007,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4010,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:592: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[562];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[563];
av2[6]=lf[564];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4008 in k4005 in k4002 in k3999 in k3996 in k3993 in k3990 in k3987 in k3984 in k3981 in k3978 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in k3945 in ... */
static void C_ccall f_4010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4010,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4013,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:593: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[560];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[561];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4011 in k4008 in k4005 in k4002 in k3999 in k3996 in k3993 in k3990 in k3987 in k3984 in k3981 in k3978 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in k3948 in ... */
static void C_ccall f_4013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4013,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4016,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:594: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[558];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[559];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4014 in k4011 in k4008 in k4005 in k4002 in k3999 in k3996 in k3993 in k3990 in k3987 in k3984 in k3981 in k3978 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in k3951 in ... */
static void C_ccall f_4016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4016,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4019,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:596: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[555];
av2[3]=C_fix(4);
av2[4]=lf[262];
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4017 in k4014 in k4011 in k4008 in k4005 in k4002 in k3999 in k3996 in k3993 in k3990 in k3987 in k3984 in k3981 in k3978 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in k3954 in ... */
static void C_ccall f_4019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4019,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4022,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:597: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[552];
av2[3]=C_fix(4);
av2[4]=lf[262];
av2[5]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4020 in k4017 in k4014 in k4011 in k4008 in k4005 in k4002 in k3999 in k3996 in k3993 in k3990 in k3987 in k3984 in k3981 in k3978 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in ... */
static void C_ccall f_4022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4022,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4025,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:598: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[555];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[556];
av2[6]=lf[557];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4023 in k4020 in k4017 in k4014 in k4011 in k4008 in k4005 in k4002 in k3999 in k3996 in k3993 in k3990 in k3987 in k3984 in k3981 in k3978 in k3975 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void C_ccall f_4025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4025,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4028,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:599: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[552];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[553];
av2[6]=lf[554];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4026 in k4023 in k4020 in k4017 in k4014 in k4011 in k4008 in k4005 in k4002 in k3999 in k3996 in k3993 in k3990 in k3987 in k3984 in k3981 in k3978 in k3975 in k3972 in k3969 in k3966 in k3963 in ... */
static void C_ccall f_4028(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4028,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4031,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:601: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[549];
av2[3]=C_fix(14);
av2[4]=lf[22];
av2[5]=C_fix(1);
av2[6]=lf[550];
av2[7]=lf[551];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4029 in k4026 in k4023 in k4020 in k4017 in k4014 in k4011 in k4008 in k4005 in k4002 in k3999 in k3996 in k3993 in k3990 in k3987 in k3984 in k3981 in k3978 in k3975 in k3972 in k3969 in k3966 in ... */
static void C_ccall f_4031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4031,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4034,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:603: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[545];
av2[3]=C_fix(19);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4032 in k4029 in k4026 in k4023 in k4020 in k4017 in k4014 in k4011 in k4008 in k4005 in k4002 in k3999 in k3996 in k3993 in k3990 in k3987 in k3984 in k3981 in k3978 in k3975 in k3972 in k3969 in ... */
static void C_ccall f_4034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4034,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4037,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:604: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[541];
av2[3]=C_fix(19);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4035 in k4032 in k4029 in k4026 in k4023 in k4020 in k4017 in k4014 in k4011 in k4008 in k4005 in k4002 in k3999 in k3996 in k3993 in k3990 in k3987 in k3984 in k3981 in k3978 in k3975 in k3972 in ... */
static void C_ccall f_4037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4037,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4040,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:605: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[537];
av2[3]=C_fix(19);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in k4020 in k4017 in k4014 in k4011 in k4008 in k4005 in k4002 in k3999 in k3996 in k3993 in k3990 in k3987 in k3984 in k3981 in k3978 in k3975 in ... */
static void C_ccall f_4040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4040,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4043,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:607: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[545];
av2[3]=C_fix(21);
av2[4]=C_fix(-1);
av2[5]=lf[546];
av2[6]=lf[547];
av2[7]=lf[548];
av2[8]=C_fix(5);
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k4041 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in k4020 in k4017 in k4014 in k4011 in k4008 in k4005 in k4002 in k3999 in k3996 in k3993 in k3990 in k3987 in k3984 in k3981 in k3978 in ... */
static void C_ccall f_4043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4043,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4046,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:608: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[541];
av2[3]=C_fix(21);
av2[4]=C_fix(0);
av2[5]=lf[542];
av2[6]=lf[543];
av2[7]=lf[544];
av2[8]=C_fix(5);
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k4044 in k4041 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in k4020 in k4017 in k4014 in k4011 in k4008 in k4005 in k4002 in k3999 in k3996 in k3993 in k3990 in k3987 in k3984 in k3981 in ... */
static void C_ccall f_4046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4046,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4049,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:609: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[537];
av2[3]=C_fix(21);
av2[4]=C_fix(0);
av2[5]=lf[538];
av2[6]=lf[539];
av2[7]=lf[540];
av2[8]=C_fix(5);
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in k4020 in k4017 in k4014 in k4011 in k4008 in k4005 in k4002 in k3999 in k3996 in k3993 in k3990 in k3987 in k3984 in ... */
static void C_ccall f_4049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4049,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4052,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:611: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[534];
av2[3]=C_fix(22);
av2[4]=C_fix(1);
av2[5]=lf[535];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(5);
av2[8]=lf[536];
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in k4020 in k4017 in k4014 in k4011 in k4008 in k4005 in k4002 in k3999 in k3996 in k3993 in k3990 in k3987 in ... */
static void C_ccall f_4052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4052,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4055,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:613: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[532];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[533];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in k4020 in k4017 in k4014 in k4011 in k4008 in k4005 in k4002 in k3999 in k3996 in k3993 in k3990 in ... */
static void C_ccall f_4055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4055,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4058,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:614: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[530];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[531];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in k4020 in k4017 in k4014 in k4011 in k4008 in k4005 in k4002 in k3999 in k3996 in k3993 in ... */
static void C_ccall f_4058(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4058,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4061,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:615: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[528];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[529];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in k4020 in k4017 in k4014 in k4011 in k4008 in k4005 in k4002 in k3999 in k3996 in ... */
static void C_ccall f_4061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4061,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4064,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:616: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[526];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[527];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in k4020 in k4017 in k4014 in k4011 in k4008 in k4005 in k4002 in k3999 in ... */
static void C_ccall f_4064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4064,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4067,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:617: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[524];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[525];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in k4020 in k4017 in k4014 in k4011 in k4008 in k4005 in k4002 in ... */
static void C_ccall f_4067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4067,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4070,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:618: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[522];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[523];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in k4020 in k4017 in k4014 in k4011 in k4008 in k4005 in ... */
static void C_ccall f_4070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4070,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4073,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:619: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[520];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[521];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in k4020 in k4017 in k4014 in k4011 in k4008 in ... */
static void C_ccall f_4073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4073,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4076,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:621: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[516];
av2[3]=C_fix(5);
av2[4]=lf[519];
av2[5]=C_fix(0);
av2[6]=lf[22];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in k4020 in k4017 in k4014 in k4011 in ... */
static void C_ccall f_4076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4076,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4079,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:622: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[516];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[518];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in k4020 in k4017 in k4014 in ... */
static void C_ccall f_4079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4079,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4082,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:623: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[516];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[517];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in k4020 in k4017 in ... */
static void C_ccall f_4082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4082,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4085,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:624: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[512];
av2[3]=C_fix(5);
av2[4]=lf[515];
av2[5]=C_fix(0);
av2[6]=lf[22];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in k4020 in ... */
static void C_ccall f_4085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4085,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4088,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:625: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[512];
av2[3]=C_fix(5);
av2[4]=lf[514];
av2[5]=C_fix(0);
av2[6]=lf[353];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4086 in k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in ... */
static void C_ccall f_4088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4088,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4091,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:626: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[512];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[513];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4089 in k4086 in k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void C_ccall f_4091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4091,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4094,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:627: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[508];
av2[3]=C_fix(5);
av2[4]=lf[511];
av2[5]=C_fix(0);
av2[6]=lf[22];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4092 in k4089 in k4086 in k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4029 in ... */
static void C_ccall f_4094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4094,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4097,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:628: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[508];
av2[3]=C_fix(5);
av2[4]=lf[510];
av2[5]=C_fix(0);
av2[6]=lf[353];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4095 in k4092 in k4089 in k4086 in k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in ... */
static void C_ccall f_4097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4097,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4100,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:629: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[508];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[509];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4098 in k4095 in k4092 in k4089 in k4086 in k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in ... */
static void C_ccall f_4100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4100,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4103,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:631: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[496];
av2[3]=C_fix(6);
av2[4]=lf[506];
av2[5]=lf[507];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4101 in k4098 in k4095 in k4092 in k4089 in k4086 in k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in ... */
static void C_ccall f_4103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4103,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4106,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:632: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[492];
av2[3]=C_fix(6);
av2[4]=lf[504];
av2[5]=lf[505];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4104 in k4101 in k4098 in k4095 in k4092 in k4089 in k4086 in k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in ... */
static void C_ccall f_4106(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4106,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4109,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:633: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[501];
av2[3]=C_fix(6);
av2[4]=lf[502];
av2[5]=lf[503];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4107 in k4104 in k4101 in k4098 in k4095 in k4092 in k4089 in k4086 in k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in ... */
static void C_ccall f_4109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4109,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4112,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:634: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[498];
av2[3]=C_fix(6);
av2[4]=lf[499];
av2[5]=lf[500];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4110 in k4107 in k4104 in k4101 in k4098 in k4095 in k4092 in k4089 in k4086 in k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in ... */
static void C_ccall f_4112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4112,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4115,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:636: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[496];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[497];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4113 in k4110 in k4107 in k4104 in k4101 in k4098 in k4095 in k4092 in k4089 in k4086 in k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in ... */
static void C_ccall f_4115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4115,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4118,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:637: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[494];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[495];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4116 in k4113 in k4110 in k4107 in k4104 in k4101 in k4098 in k4095 in k4092 in k4089 in k4086 in k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in ... */
static void C_ccall f_4118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4118,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4121,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:638: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[492];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[493];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4119 in k4116 in k4113 in k4110 in k4107 in k4104 in k4101 in k4098 in k4095 in k4092 in k4089 in k4086 in k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in ... */
static void C_ccall f_4121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4121,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4124,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:640: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[477];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[491];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4122 in k4119 in k4116 in k4113 in k4110 in k4107 in k4104 in k4101 in k4098 in k4095 in k4092 in k4089 in k4086 in k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in ... */
static void C_ccall f_4124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4124,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4127,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:641: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[475];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[490];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4125 in k4122 in k4119 in k4116 in k4113 in k4110 in k4107 in k4104 in k4101 in k4098 in k4095 in k4092 in k4089 in k4086 in k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in ... */
static void C_ccall f_4127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4127,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4130,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:642: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[473];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[489];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4128 in k4125 in k4122 in k4119 in k4116 in k4113 in k4110 in k4107 in k4104 in k4101 in k4098 in k4095 in k4092 in k4089 in k4086 in k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in ... */
static void C_ccall f_4130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4130,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4133,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:643: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[471];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[488];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4131 in k4128 in k4125 in k4122 in k4119 in k4116 in k4113 in k4110 in k4107 in k4104 in k4101 in k4098 in k4095 in k4092 in k4089 in k4086 in k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in ... */
static void C_ccall f_4133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4133,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4136,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:644: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[469];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[487];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4134 in k4131 in k4128 in k4125 in k4122 in k4119 in k4116 in k4113 in k4110 in k4107 in k4104 in k4101 in k4098 in k4095 in k4092 in k4089 in k4086 in k4083 in k4080 in k4077 in k4074 in k4071 in ... */
static void C_ccall f_4136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4136,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4139,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:645: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[467];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[486];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4137 in k4134 in k4131 in k4128 in k4125 in k4122 in k4119 in k4116 in k4113 in k4110 in k4107 in k4104 in k4101 in k4098 in k4095 in k4092 in k4089 in k4086 in k4083 in k4080 in k4077 in k4074 in ... */
static void C_ccall f_4139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4139,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4142,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:646: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[465];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[485];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4140 in k4137 in k4134 in k4131 in k4128 in k4125 in k4122 in k4119 in k4116 in k4113 in k4110 in k4107 in k4104 in k4101 in k4098 in k4095 in k4092 in k4089 in k4086 in k4083 in k4080 in k4077 in ... */
static void C_ccall f_4142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4142,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4145,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:647: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[463];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[484];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4143 in k4140 in k4137 in k4134 in k4131 in k4128 in k4125 in k4122 in k4119 in k4116 in k4113 in k4110 in k4107 in k4104 in k4101 in k4098 in k4095 in k4092 in k4089 in k4086 in k4083 in k4080 in ... */
static void C_ccall f_4145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4145,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4148,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:648: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[461];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[483];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4128 in k4125 in k4122 in k4119 in k4116 in k4113 in k4110 in k4107 in k4104 in k4101 in k4098 in k4095 in k4092 in k4089 in k4086 in k4083 in ... */
static void C_ccall f_4148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4148,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4151,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:649: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[459];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[482];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4128 in k4125 in k4122 in k4119 in k4116 in k4113 in k4110 in k4107 in k4104 in k4101 in k4098 in k4095 in k4092 in k4089 in k4086 in ... */
static void C_ccall f_4151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4151,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4154,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:650: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[457];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[481];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4128 in k4125 in k4122 in k4119 in k4116 in k4113 in k4110 in k4107 in k4104 in k4101 in k4098 in k4095 in k4092 in k4089 in ... */
static void C_ccall f_4154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4154,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4157,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:651: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[455];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[480];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4128 in k4125 in k4122 in k4119 in k4116 in k4113 in k4110 in k4107 in k4104 in k4101 in k4098 in k4095 in k4092 in ... */
static void C_ccall f_4157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4157,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4160,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:652: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[453];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[479];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4128 in k4125 in k4122 in k4119 in k4116 in k4113 in k4110 in k4107 in k4104 in k4101 in k4098 in k4095 in ... */
static void C_ccall f_4160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4160,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4163,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:653: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[477];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[478];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4128 in k4125 in k4122 in k4119 in k4116 in k4113 in k4110 in k4107 in k4104 in k4101 in k4098 in ... */
static void C_ccall f_4163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4163,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4166,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:654: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[475];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[476];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4164 in k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4128 in k4125 in k4122 in k4119 in k4116 in k4113 in k4110 in k4107 in k4104 in k4101 in ... */
static void C_ccall f_4166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4166,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4169,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:655: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[473];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[474];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4167 in k4164 in k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4128 in k4125 in k4122 in k4119 in k4116 in k4113 in k4110 in k4107 in k4104 in ... */
static void C_ccall f_4169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4169,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4172,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:656: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[471];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[472];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4170 in k4167 in k4164 in k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4128 in k4125 in k4122 in k4119 in k4116 in k4113 in k4110 in k4107 in ... */
static void C_ccall f_4172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4172,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4175,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:657: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[469];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[470];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4173 in k4170 in k4167 in k4164 in k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4128 in k4125 in k4122 in k4119 in k4116 in k4113 in k4110 in ... */
static void C_ccall f_4175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4175,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4178,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:658: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[467];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[468];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4176 in k4173 in k4170 in k4167 in k4164 in k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4128 in k4125 in k4122 in k4119 in k4116 in k4113 in ... */
static void C_ccall f_4178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4178,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4181,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:659: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[465];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[466];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4179 in k4176 in k4173 in k4170 in k4167 in k4164 in k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4128 in k4125 in k4122 in k4119 in k4116 in ... */
static void C_ccall f_4181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4181,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4184,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:660: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[463];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[464];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4182 in k4179 in k4176 in k4173 in k4170 in k4167 in k4164 in k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4128 in k4125 in k4122 in k4119 in ... */
static void C_ccall f_4184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4184,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4187,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:661: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[461];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[462];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4185 in k4182 in k4179 in k4176 in k4173 in k4170 in k4167 in k4164 in k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4128 in k4125 in k4122 in ... */
static void C_ccall f_4187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4187,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4190,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:662: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[459];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[460];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4188 in k4185 in k4182 in k4179 in k4176 in k4173 in k4170 in k4167 in k4164 in k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4128 in k4125 in ... */
static void C_ccall f_4190(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4190,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4193,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:663: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[457];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[458];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4191 in k4188 in k4185 in k4182 in k4179 in k4176 in k4173 in k4170 in k4167 in k4164 in k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in k4128 in ... */
static void C_ccall f_4193(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4193,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4196,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:664: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[455];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[456];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4194 in k4191 in k4188 in k4185 in k4182 in k4179 in k4176 in k4173 in k4170 in k4167 in k4164 in k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in k4131 in ... */
static void C_ccall f_4196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4196,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4199,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:665: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[453];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[454];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4197 in k4194 in k4191 in k4188 in k4185 in k4182 in k4179 in k4176 in k4173 in k4170 in k4167 in k4164 in k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in k4134 in ... */
static void C_ccall f_4199(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4199,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4202,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:667: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[404];
av2[3]=C_fix(9);
av2[4]=lf[451];
av2[5]=lf[452];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4200 in k4197 in k4194 in k4191 in k4188 in k4185 in k4182 in k4179 in k4176 in k4173 in k4170 in k4167 in k4164 in k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in k4137 in ... */
static void C_ccall f_4202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4202,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4205,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:668: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[402];
av2[3]=C_fix(9);
av2[4]=lf[449];
av2[5]=lf[450];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4203 in k4200 in k4197 in k4194 in k4191 in k4188 in k4185 in k4182 in k4179 in k4176 in k4173 in k4170 in k4167 in k4164 in k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in k4140 in ... */
static void C_ccall f_4205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4205,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4208,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:669: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[400];
av2[3]=C_fix(9);
av2[4]=lf[447];
av2[5]=lf[448];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4206 in k4203 in k4200 in k4197 in k4194 in k4191 in k4188 in k4185 in k4182 in k4179 in k4176 in k4173 in k4170 in k4167 in k4164 in k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in k4143 in ... */
static void C_ccall f_4208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4208,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4211,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:670: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[398];
av2[3]=C_fix(9);
av2[4]=lf[445];
av2[5]=lf[446];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4209 in k4206 in k4203 in k4200 in k4197 in k4194 in k4191 in k4188 in k4185 in k4182 in k4179 in k4176 in k4173 in k4170 in k4167 in k4164 in k4161 in k4158 in k4155 in k4152 in k4149 in k4146 in ... */
static void C_ccall f_4211(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4211,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4214,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:671: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[396];
av2[3]=C_fix(9);
av2[4]=lf[443];
av2[5]=lf[444];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4212 in k4209 in k4206 in k4203 in k4200 in k4197 in k4194 in k4191 in k4188 in k4185 in k4182 in k4179 in k4176 in k4173 in k4170 in k4167 in k4164 in k4161 in k4158 in k4155 in k4152 in k4149 in ... */
static void C_ccall f_4214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4214,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4217,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:673: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[442];
av2[3]=C_fix(11);
av2[4]=C_fix(1);
av2[5]=lf[94];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4215 in k4212 in k4209 in k4206 in k4203 in k4200 in k4197 in k4194 in k4191 in k4188 in k4185 in k4182 in k4179 in k4176 in k4173 in k4170 in k4167 in k4164 in k4161 in k4158 in k4155 in k4152 in ... */
static void C_ccall f_4217(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4217,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4220,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:674: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[440];
av2[3]=C_fix(11);
av2[4]=C_fix(2);
av2[5]=lf[441];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4218 in k4215 in k4212 in k4209 in k4206 in k4203 in k4200 in k4197 in k4194 in k4191 in k4188 in k4185 in k4182 in k4179 in k4176 in k4173 in k4170 in k4167 in k4164 in k4161 in k4158 in k4155 in ... */
static void C_ccall f_4220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4220,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4223,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:675: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[438];
av2[3]=C_fix(11);
av2[4]=C_fix(2);
av2[5]=lf[439];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4221 in k4218 in k4215 in k4212 in k4209 in k4206 in k4203 in k4200 in k4197 in k4194 in k4191 in k4188 in k4185 in k4182 in k4179 in k4176 in k4173 in k4170 in k4167 in k4164 in k4161 in k4158 in ... */
static void C_ccall f_4223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4223,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4226,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:676: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[437];
av2[3]=C_fix(11);
av2[4]=C_fix(3);
av2[5]=lf[262];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4224 in k4221 in k4218 in k4215 in k4212 in k4209 in k4206 in k4203 in k4200 in k4197 in k4194 in k4191 in k4188 in k4185 in k4182 in k4179 in k4176 in k4173 in k4170 in k4167 in k4164 in k4161 in ... */
static void C_ccall f_4226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4226,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4229,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:677: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[436];
av2[3]=C_fix(11);
av2[4]=C_fix(3);
av2[5]=lf[262];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4227 in k4224 in k4221 in k4218 in k4215 in k4212 in k4209 in k4206 in k4203 in k4200 in k4197 in k4194 in k4191 in k4188 in k4185 in k4182 in k4179 in k4176 in k4173 in k4170 in k4167 in k4164 in ... */
static void C_ccall f_4229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4229,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4232,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:678: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[435];
av2[3]=C_fix(11);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[305];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4230 in k4227 in k4224 in k4221 in k4218 in k4215 in k4212 in k4209 in k4206 in k4203 in k4200 in k4197 in k4194 in k4191 in k4188 in k4185 in k4182 in k4179 in k4176 in k4173 in k4170 in k4167 in ... */
static void C_ccall f_4232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4232,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4235,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:679: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[433];
av2[3]=C_fix(11);
av2[4]=C_fix(3);
av2[5]=lf[434];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4233 in k4230 in k4227 in k4224 in k4221 in k4218 in k4215 in k4212 in k4209 in k4206 in k4203 in k4200 in k4197 in k4194 in k4191 in k4188 in k4185 in k4182 in k4179 in k4176 in k4173 in k4170 in ... */
static void C_ccall f_4235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4235,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4238,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:680: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[431];
av2[3]=C_fix(11);
av2[4]=C_fix(2);
av2[5]=lf[432];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4236 in k4233 in k4230 in k4227 in k4224 in k4221 in k4218 in k4215 in k4212 in k4209 in k4206 in k4203 in k4200 in k4197 in k4194 in k4191 in k4188 in k4185 in k4182 in k4179 in k4176 in k4173 in ... */
static void C_ccall f_4238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4238,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4241,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:681: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[429];
av2[3]=C_fix(11);
av2[4]=C_fix(1);
av2[5]=lf[430];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4239 in k4236 in k4233 in k4230 in k4227 in k4224 in k4221 in k4218 in k4215 in k4212 in k4209 in k4206 in k4203 in k4200 in k4197 in k4194 in k4191 in k4188 in k4185 in k4182 in k4179 in k4176 in ... */
static void C_ccall f_4241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4241,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4244,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:682: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[427];
av2[3]=C_fix(11);
av2[4]=C_fix(1);
av2[5]=lf[428];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4242 in k4239 in k4236 in k4233 in k4230 in k4227 in k4224 in k4221 in k4218 in k4215 in k4212 in k4209 in k4206 in k4203 in k4200 in k4197 in k4194 in k4191 in k4188 in k4185 in k4182 in k4179 in ... */
static void C_ccall f_4244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4244,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4247,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:684: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[425];
av2[3]=C_fix(11);
av2[4]=C_fix(3);
av2[5]=lf[262];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4245 in k4242 in k4239 in k4236 in k4233 in k4230 in k4227 in k4224 in k4221 in k4218 in k4215 in k4212 in k4209 in k4206 in k4203 in k4200 in k4197 in k4194 in k4191 in k4188 in k4185 in k4182 in ... */
static void C_ccall f_4247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4247,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4250,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:685: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[425];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[426];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4248 in k4245 in k4242 in k4239 in k4236 in k4233 in k4230 in k4227 in k4224 in k4221 in k4218 in k4215 in k4212 in k4209 in k4206 in k4203 in k4200 in k4197 in k4194 in k4191 in k4188 in k4185 in ... */
static void C_ccall f_4250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4250,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4253,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:687: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[421];
av2[3]=C_fix(12);
av2[4]=lf[424];
av2[5]=C_SCHEME_TRUE;
av2[6]=C_fix(2);
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4251 in k4248 in k4245 in k4242 in k4239 in k4236 in k4233 in k4230 in k4227 in k4224 in k4221 in k4218 in k4215 in k4212 in k4209 in k4206 in k4203 in k4200 in k4197 in k4194 in k4191 in k4188 in ... */
static void C_ccall f_4253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4253,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4256,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:688: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[420];
av2[3]=C_fix(12);
av2[4]=lf[423];
av2[5]=C_SCHEME_TRUE;
av2[6]=C_fix(2);
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4254 in k4251 in k4248 in k4245 in k4242 in k4239 in k4236 in k4233 in k4230 in k4227 in k4224 in k4221 in k4218 in k4215 in k4212 in k4209 in k4206 in k4203 in k4200 in k4197 in k4194 in k4191 in ... */
static void C_ccall f_4256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4256,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4259,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:689: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[422];
av2[3]=C_fix(12);
av2[4]=C_SCHEME_FALSE;
av2[5]=C_SCHEME_TRUE;
av2[6]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in k4239 in k4236 in k4233 in k4230 in k4227 in k4224 in k4221 in k4218 in k4215 in k4212 in k4209 in k4206 in k4203 in k4200 in k4197 in k4194 in ... */
static void C_ccall f_4259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4259,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4262,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:691: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[421];
av2[3]=C_fix(19);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in k4239 in k4236 in k4233 in k4230 in k4227 in k4224 in k4221 in k4218 in k4215 in k4212 in k4209 in k4206 in k4203 in k4200 in k4197 in ... */
static void C_ccall f_4262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4262,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4265,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:692: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[420];
av2[3]=C_fix(19);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4263 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in k4239 in k4236 in k4233 in k4230 in k4227 in k4224 in k4221 in k4218 in k4215 in k4212 in k4209 in k4206 in k4203 in k4200 in ... */
static void C_ccall f_4265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4265,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4268,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:694: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[421];
av2[3]=C_fix(18);
av2[4]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4266 in k4263 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in k4239 in k4236 in k4233 in k4230 in k4227 in k4224 in k4221 in k4218 in k4215 in k4212 in k4209 in k4206 in k4203 in ... */
static void C_ccall f_4268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4268,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4271,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:695: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[420];
av2[3]=C_fix(18);
av2[4]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4269 in k4266 in k4263 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in k4239 in k4236 in k4233 in k4230 in k4227 in k4224 in k4221 in k4218 in k4215 in k4212 in k4209 in k4206 in ... */
static void C_ccall f_4271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4271,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4274,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:696: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[314];
av2[3]=C_fix(18);
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4272 in k4269 in k4266 in k4263 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in k4239 in k4236 in k4233 in k4230 in k4227 in k4224 in k4221 in k4218 in k4215 in k4212 in k4209 in ... */
static void C_ccall f_4274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4274,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4277,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:698: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[392];
av2[3]=C_fix(19);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4275 in k4272 in k4269 in k4266 in k4263 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in k4239 in k4236 in k4233 in k4230 in k4227 in k4224 in k4221 in k4218 in k4215 in k4212 in ... */
static void C_ccall f_4277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4277,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4280,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:699: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[389];
av2[3]=C_fix(19);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4278 in k4275 in k4272 in k4269 in k4266 in k4263 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in k4239 in k4236 in k4233 in k4230 in k4227 in k4224 in k4221 in k4218 in k4215 in ... */
static void C_ccall f_4280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4280,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4283,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:700: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[394];
av2[3]=C_fix(19);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4263 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in k4239 in k4236 in k4233 in k4230 in k4227 in k4224 in k4221 in k4218 in ... */
static void C_ccall f_4283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4283,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4286,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:701: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[419];
av2[3]=C_fix(19);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4263 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in k4239 in k4236 in k4233 in k4230 in k4227 in k4224 in k4221 in ... */
static void C_ccall f_4286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4286,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4289,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:703: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[392];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[418];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(29);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4263 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in k4239 in k4236 in k4233 in k4230 in k4227 in k4224 in ... */
static void C_ccall f_4289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4289,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4292,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:704: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[389];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[417];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(29);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4263 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in k4239 in k4236 in k4233 in k4230 in k4227 in ... */
static void C_ccall f_4292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4292,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4295,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:705: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[394];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[416];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(33);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4263 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in k4239 in k4236 in k4233 in k4230 in ... */
static void C_ccall f_4295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4295,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4298,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:706: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[414];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[415];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(5);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4263 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in k4239 in k4236 in k4233 in ... */
static void C_ccall f_4298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4298,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4301,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:707: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[365];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[413];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(5);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4263 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in k4239 in k4236 in ... */
static void C_ccall f_4301(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4301,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4304,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:708: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[411];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[412];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(5);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4263 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in k4239 in ... */
static void C_ccall f_4304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4304,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4307,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:710: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[404];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[410];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4263 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in ... */
static void C_ccall f_4307(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4307,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4310,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:711: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[402];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[409];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4263 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in ... */
static void C_ccall f_4310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4310,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4313,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:712: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[400];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[408];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4263 in k4260 in k4257 in k4254 in k4251 in k4248 in ... */
static void C_ccall f_4313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4313,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4316,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:713: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[398];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[407];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4263 in k4260 in k4257 in k4254 in k4251 in ... */
static void C_ccall f_4316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4316,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4319,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:714: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[396];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[406];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4263 in k4260 in k4257 in k4254 in ... */
static void C_ccall f_4319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4319,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4322,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:716: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[404];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[405];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4263 in k4260 in k4257 in ... */
static void C_ccall f_4322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4322,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4325,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:717: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[402];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[403];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4263 in k4260 in ... */
static void C_ccall f_4325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4325,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4328,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:718: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[400];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[401];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4263 in ... */
static void C_ccall f_4328(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4328,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4331,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:719: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[398];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[399];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in ... */
static void C_ccall f_4331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4331,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4334,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:720: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[396];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[397];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in ... */
static void C_ccall f_4334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4334,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4337,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:722: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[394];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[395];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in ... */
static void C_ccall f_4337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4337,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4340,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:723: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[392];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[393];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4338 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in ... */
static void C_ccall f_4340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4340,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4343,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:724: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[389];
av2[3]=C_fix(13);
av2[4]=lf[390];
av2[5]=lf[391];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4341 in k4338 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in ... */
static void C_ccall f_4343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4343,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4346,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:726: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[386];
av2[3]=C_fix(13);
av2[4]=lf[387];
av2[5]=lf[388];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4344 in k4341 in k4338 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in ... */
static void C_ccall f_4346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4346,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4349,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:727: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[384];
av2[3]=C_fix(13);
av2[4]=C_fix(1);
av2[5]=lf[385];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4347 in k4344 in k4341 in k4338 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in ... */
static void C_ccall f_4349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4349,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4352,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:728: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[382];
av2[3]=C_fix(13);
av2[4]=C_fix(4);
av2[5]=lf[383];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4350 in k4347 in k4344 in k4341 in k4338 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in ... */
static void C_ccall f_4352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4352,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4355,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:729: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[380];
av2[3]=C_fix(13);
av2[4]=C_fix(1);
av2[5]=lf[381];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4353 in k4350 in k4347 in k4344 in k4341 in k4338 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in ... */
static void C_ccall f_4355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4355,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4358,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:730: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[378];
av2[3]=C_fix(13);
av2[4]=C_fix(0);
av2[5]=lf[379];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4356 in k4353 in k4350 in k4347 in k4344 in k4341 in k4338 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in ... */
static void C_ccall f_4358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4358,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4361,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:731: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[376];
av2[3]=C_fix(13);
av2[4]=C_fix(1);
av2[5]=lf[377];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4359 in k4356 in k4353 in k4350 in k4347 in k4344 in k4341 in k4338 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in ... */
static void C_ccall f_4361(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4361,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4364,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:732: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[374];
av2[3]=C_fix(13);
av2[4]=C_fix(1);
av2[5]=lf[375];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4362 in k4359 in k4356 in k4353 in k4350 in k4347 in k4344 in k4341 in k4338 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in ... */
static void C_ccall f_4364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4364,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4367,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:733: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[372];
av2[3]=C_fix(13);
av2[4]=C_fix(1);
av2[5]=lf[373];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4365 in k4362 in k4359 in k4356 in k4353 in k4350 in k4347 in k4344 in k4341 in k4338 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in ... */
static void C_ccall f_4367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4367,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4370,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:735: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[363];
av2[3]=C_fix(14);
av2[4]=lf[22];
av2[5]=C_fix(1);
av2[6]=lf[370];
av2[7]=lf[371];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4368 in k4365 in k4362 in k4359 in k4356 in k4353 in k4350 in k4347 in k4344 in k4341 in k4338 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in ... */
static void C_ccall f_4370(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4370,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4373,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:736: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[361];
av2[3]=C_fix(14);
av2[4]=lf[22];
av2[5]=C_fix(1);
av2[6]=lf[368];
av2[7]=lf[369];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4371 in k4368 in k4365 in k4362 in k4359 in k4356 in k4353 in k4350 in k4347 in k4344 in k4341 in k4338 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in ... */
static void C_ccall f_4373(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4373,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4376,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:737: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[365];
av2[3]=C_fix(14);
av2[4]=lf[22];
av2[5]=C_fix(2);
av2[6]=lf[366];
av2[7]=lf[367];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4374 in k4371 in k4368 in k4365 in k4362 in k4359 in k4356 in k4353 in k4350 in k4347 in k4344 in k4341 in k4338 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in ... */
static void C_ccall f_4376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4376,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4379,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:739: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[363];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[364];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4377 in k4374 in k4371 in k4368 in k4365 in k4362 in k4359 in k4356 in k4353 in k4350 in k4347 in k4344 in k4341 in k4338 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in ... */
static void C_ccall f_4379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4379,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4382,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:740: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[361];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[362];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4380 in k4377 in k4374 in k4371 in k4368 in k4365 in k4362 in k4359 in k4356 in k4353 in k4350 in k4347 in k4344 in k4341 in k4338 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in ... */
static void C_ccall f_4382(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4382,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4385,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:742: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[359];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[360];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4383 in k4380 in k4377 in k4374 in k4371 in k4368 in k4365 in k4362 in k4359 in k4356 in k4353 in k4350 in k4347 in k4344 in k4341 in k4338 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in ... */
static void C_ccall f_4385(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4385,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4388,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:743: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[357];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[358];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4386 in k4383 in k4380 in k4377 in k4374 in k4371 in k4368 in k4365 in k4362 in k4359 in k4356 in k4353 in k4350 in k4347 in k4344 in k4341 in k4338 in k4335 in k4332 in k4329 in k4326 in k4323 in ... */
static void C_ccall f_4388(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4388,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4391,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:745: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[355];
av2[3]=C_fix(15);
av2[4]=lf[353];
av2[5]=lf[22];
av2[6]=lf[356];
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4389 in k4386 in k4383 in k4380 in k4377 in k4374 in k4371 in k4368 in k4365 in k4362 in k4359 in k4356 in k4353 in k4350 in k4347 in k4344 in k4341 in k4338 in k4335 in k4332 in k4329 in k4326 in ... */
static void C_ccall f_4391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4391,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4394,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:746: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[354];
av2[3]=C_fix(15);
av2[4]=lf[353];
av2[5]=lf[22];
av2[6]=lf[323];
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4392 in k4389 in k4386 in k4383 in k4380 in k4377 in k4374 in k4371 in k4368 in k4365 in k4362 in k4359 in k4356 in k4353 in k4350 in k4347 in k4344 in k4341 in k4338 in k4335 in k4332 in k4329 in ... */
static void C_ccall f_4394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4394,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4397,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:747: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[352];
av2[3]=C_fix(15);
av2[4]=lf[353];
av2[5]=lf[22];
av2[6]=lf[326];
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4395 in k4392 in k4389 in k4386 in k4383 in k4380 in k4377 in k4374 in k4371 in k4368 in k4365 in k4362 in k4359 in k4356 in k4353 in k4350 in k4347 in k4344 in k4341 in k4338 in k4335 in k4332 in ... */
static void C_ccall f_4397(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4397,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4400,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:749: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[350];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[351];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4398 in k4395 in k4392 in k4389 in k4386 in k4383 in k4380 in k4377 in k4374 in k4371 in k4368 in k4365 in k4362 in k4359 in k4356 in k4353 in k4350 in k4347 in k4344 in k4341 in k4338 in k4335 in ... */
static void C_ccall f_4400(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4400,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4403,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:750: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[348];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[349];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4401 in k4398 in k4395 in k4392 in k4389 in k4386 in k4383 in k4380 in k4377 in k4374 in k4371 in k4368 in k4365 in k4362 in k4359 in k4356 in k4353 in k4350 in k4347 in k4344 in k4341 in k4338 in ... */
static void C_ccall f_4403(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4403,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4406,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:751: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[346];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[347];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4404 in k4401 in k4398 in k4395 in k4392 in k4389 in k4386 in k4383 in k4380 in k4377 in k4374 in k4371 in k4368 in k4365 in k4362 in k4359 in k4356 in k4353 in k4350 in k4347 in k4344 in k4341 in ... */
static void C_ccall f_4406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4406,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4409,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:752: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[344];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[345];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4407 in k4404 in k4401 in k4398 in k4395 in k4392 in k4389 in k4386 in k4383 in k4380 in k4377 in k4374 in k4371 in k4368 in k4365 in k4362 in k4359 in k4356 in k4353 in k4350 in k4347 in k4344 in ... */
static void C_ccall f_4409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4409,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4412,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:753: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[342];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[343];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4410 in k4407 in k4404 in k4401 in k4398 in k4395 in k4392 in k4389 in k4386 in k4383 in k4380 in k4377 in k4374 in k4371 in k4368 in k4365 in k4362 in k4359 in k4356 in k4353 in k4350 in k4347 in ... */
static void C_ccall f_4412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4412,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4415,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:754: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[340];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[341];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4413 in k4410 in k4407 in k4404 in k4401 in k4398 in k4395 in k4392 in k4389 in k4386 in k4383 in k4380 in k4377 in k4374 in k4371 in k4368 in k4365 in k4362 in k4359 in k4356 in k4353 in k4350 in ... */
static void C_ccall f_4415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4415,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4418,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:755: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[338];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[339];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4416 in k4413 in k4410 in k4407 in k4404 in k4401 in k4398 in k4395 in k4392 in k4389 in k4386 in k4383 in k4380 in k4377 in k4374 in k4371 in k4368 in k4365 in k4362 in k4359 in k4356 in k4353 in ... */
static void C_ccall f_4418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4418,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4421,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:756: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[336];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[337];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4419 in k4416 in k4413 in k4410 in k4407 in k4404 in k4401 in k4398 in k4395 in k4392 in k4389 in k4386 in k4383 in k4380 in k4377 in k4374 in k4371 in k4368 in k4365 in k4362 in k4359 in k4356 in ... */
static void C_ccall f_4421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4421,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4424,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:757: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[334];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[335];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4404 in k4401 in k4398 in k4395 in k4392 in k4389 in k4386 in k4383 in k4380 in k4377 in k4374 in k4371 in k4368 in k4365 in k4362 in k4359 in ... */
static void C_ccall f_4424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4424,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4427,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:758: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[332];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[333];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4425 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4404 in k4401 in k4398 in k4395 in k4392 in k4389 in k4386 in k4383 in k4380 in k4377 in k4374 in k4371 in k4368 in k4365 in k4362 in ... */
static void C_ccall f_4427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4427,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4430,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:759: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[330];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[331];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4428 in k4425 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4404 in k4401 in k4398 in k4395 in k4392 in k4389 in k4386 in k4383 in k4380 in k4377 in k4374 in k4371 in k4368 in k4365 in ... */
static void C_ccall f_4430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4430,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4433,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:760: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[328];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[329];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4431 in k4428 in k4425 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4404 in k4401 in k4398 in k4395 in k4392 in k4389 in k4386 in k4383 in k4380 in k4377 in k4374 in k4371 in k4368 in ... */
static void C_ccall f_4433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4433,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4436,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:761: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[326];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[327];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4434 in k4431 in k4428 in k4425 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4404 in k4401 in k4398 in k4395 in k4392 in k4389 in k4386 in k4383 in k4380 in k4377 in k4374 in k4371 in ... */
static void C_ccall f_4436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4436,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4439,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:762: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[321];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[325];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4437 in k4434 in k4431 in k4428 in k4425 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4404 in k4401 in k4398 in k4395 in k4392 in k4389 in k4386 in k4383 in k4380 in k4377 in k4374 in ... */
static void C_ccall f_4439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4439,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4442,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:763: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[323];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[324];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4404 in k4401 in k4398 in k4395 in k4392 in k4389 in k4386 in k4383 in k4380 in k4377 in ... */
static void C_ccall f_4442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4442,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4445,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:764: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[321];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[322];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4443 in k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4404 in k4401 in k4398 in k4395 in k4392 in k4389 in k4386 in k4383 in k4380 in ... */
static void C_ccall f_4445(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4445,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4448,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:766: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[319];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[320];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(3);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4446 in k4443 in k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4404 in k4401 in k4398 in k4395 in k4392 in k4389 in k4386 in k4383 in ... */
static void C_ccall f_4448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4448,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4451,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:767: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[317];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[318];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(3);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4449 in k4446 in k4443 in k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4404 in k4401 in k4398 in k4395 in k4392 in k4389 in k4386 in ... */
static void C_ccall f_4451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4451,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4454,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:768: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[314];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[315];
av2[6]=C_SCHEME_TRUE;
av2[7]=lf[316];
av2[8]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k4452 in k4449 in k4446 in k4443 in k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4404 in k4401 in k4398 in k4395 in k4392 in k4389 in ... */
static void C_ccall f_4454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4454,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4457,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:769: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[311];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[312];
av2[6]=C_SCHEME_TRUE;
av2[7]=lf[313];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4455 in k4452 in k4449 in k4446 in k4443 in k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4404 in k4401 in k4398 in k4395 in k4392 in ... */
static void C_ccall f_4457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4457,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4460,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:770: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[309];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[310];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_TRUE;
av2[8]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k4458 in k4455 in k4452 in k4449 in k4446 in k4443 in k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4404 in k4401 in k4398 in k4395 in ... */
static void C_ccall f_4460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4460,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4463,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:771: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[307];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[308];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4461 in k4458 in k4455 in k4452 in k4449 in k4446 in k4443 in k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4404 in k4401 in k4398 in ... */
static void C_ccall f_4463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4463,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4466,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:772: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[305];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[306];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_TRUE;
av2[8]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k4464 in k4461 in k4458 in k4455 in k4452 in k4449 in k4446 in k4443 in k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4404 in k4401 in ... */
static void C_ccall f_4466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4466,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4469,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:773: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[303];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[304];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4467 in k4464 in k4461 in k4458 in k4455 in k4452 in k4449 in k4446 in k4443 in k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in k4404 in ... */
static void C_ccall f_4469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4469,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4472,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:774: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[301];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[302];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fix(2);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4470 in k4467 in k4464 in k4461 in k4458 in k4455 in k4452 in k4449 in k4446 in k4443 in k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in k4422 in k4419 in k4416 in k4413 in k4410 in k4407 in ... */
static void C_ccall f_4472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4472,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4475,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:775: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[299];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[300];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4473 in k4470 in k4467 in k4464 in k4461 in k4458 in k4455 in k4452 in k4449 in k4446 in k4443 in k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in k4422 in k4419 in k4416 in k4413 in k4410 in ... */
static void C_ccall f_4475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4475,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4478,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:776: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[297];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[298];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fix(2);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4476 in k4473 in k4470 in k4467 in k4464 in k4461 in k4458 in k4455 in k4452 in k4449 in k4446 in k4443 in k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in k4422 in k4419 in k4416 in k4413 in ... */
static void C_ccall f_4478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4478,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4481,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:777: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[295];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[296];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(6);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4479 in k4476 in k4473 in k4470 in k4467 in k4464 in k4461 in k4458 in k4455 in k4452 in k4449 in k4446 in k4443 in k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in k4422 in k4419 in k4416 in ... */
static void C_ccall f_4481(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4481,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4484,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:779: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[293];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[294];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4482 in k4479 in k4476 in k4473 in k4470 in k4467 in k4464 in k4461 in k4458 in k4455 in k4452 in k4449 in k4446 in k4443 in k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in k4422 in k4419 in ... */
static void C_ccall f_4484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4484,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4487,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:780: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[291];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[292];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4485 in k4482 in k4479 in k4476 in k4473 in k4470 in k4467 in k4464 in k4461 in k4458 in k4455 in k4452 in k4449 in k4446 in k4443 in k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in k4422 in ... */
static void C_ccall f_4487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4487,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4490,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:781: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[289];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[290];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4488 in k4485 in k4482 in k4479 in k4476 in k4473 in k4470 in k4467 in k4464 in k4461 in k4458 in k4455 in k4452 in k4449 in k4446 in k4443 in k4440 in k4437 in k4434 in k4431 in k4428 in k4425 in ... */
static void C_ccall f_4490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4490,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4493,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:782: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[287];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[288];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4491 in k4488 in k4485 in k4482 in k4479 in k4476 in k4473 in k4470 in k4467 in k4464 in k4461 in k4458 in k4455 in k4452 in k4449 in k4446 in k4443 in k4440 in k4437 in k4434 in k4431 in k4428 in ... */
static void C_ccall f_4493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4493,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4496,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:783: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[285];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[286];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4494 in k4491 in k4488 in k4485 in k4482 in k4479 in k4476 in k4473 in k4470 in k4467 in k4464 in k4461 in k4458 in k4455 in k4452 in k4449 in k4446 in k4443 in k4440 in k4437 in k4434 in k4431 in ... */
static void C_ccall f_4496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4496,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4499,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:784: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[283];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[284];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4497 in k4494 in k4491 in k4488 in k4485 in k4482 in k4479 in k4476 in k4473 in k4470 in k4467 in k4464 in k4461 in k4458 in k4455 in k4452 in k4449 in k4446 in k4443 in k4440 in k4437 in k4434 in ... */
static void C_ccall f_4499(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4499,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4502,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:785: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[281];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[282];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in k4482 in k4479 in k4476 in k4473 in k4470 in k4467 in k4464 in k4461 in k4458 in k4455 in k4452 in k4449 in k4446 in k4443 in k4440 in k4437 in ... */
static void C_ccall f_4502(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4502,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4505,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:786: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[279];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[280];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in k4482 in k4479 in k4476 in k4473 in k4470 in k4467 in k4464 in k4461 in k4458 in k4455 in k4452 in k4449 in k4446 in k4443 in k4440 in ... */
static void C_ccall f_4505(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4505,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4508,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:787: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[277];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[278];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in k4482 in k4479 in k4476 in k4473 in k4470 in k4467 in k4464 in k4461 in k4458 in k4455 in k4452 in k4449 in k4446 in k4443 in ... */
static void C_ccall f_4508(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4508,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4511,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:788: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[275];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[276];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in k4482 in k4479 in k4476 in k4473 in k4470 in k4467 in k4464 in k4461 in k4458 in k4455 in k4452 in k4449 in k4446 in ... */
static void C_ccall f_4511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4511,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4514,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:789: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[273];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[274];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in k4482 in k4479 in k4476 in k4473 in k4470 in k4467 in k4464 in k4461 in k4458 in k4455 in k4452 in k4449 in ... */
static void C_ccall f_4514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4514,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4517,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:790: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[271];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[272];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in k4482 in k4479 in k4476 in k4473 in k4470 in k4467 in k4464 in k4461 in k4458 in k4455 in k4452 in ... */
static void C_ccall f_4517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4517,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4520,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:792: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[269];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[270];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in k4482 in k4479 in k4476 in k4473 in k4470 in k4467 in k4464 in k4461 in k4458 in k4455 in ... */
static void C_ccall f_4520(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4520,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4523,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:793: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[267];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[268];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in k4482 in k4479 in k4476 in k4473 in k4470 in k4467 in k4464 in k4461 in k4458 in ... */
static void C_ccall f_4523(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4523,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4526,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:794: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[265];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[266];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in k4482 in k4479 in k4476 in k4473 in k4470 in k4467 in k4464 in k4461 in ... */
static void C_ccall f_4526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4526,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4529,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:795: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[263];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[264];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in k4482 in k4479 in k4476 in k4473 in k4470 in k4467 in k4464 in ... */
static void C_ccall f_4529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4529,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4532,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5308,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:797: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[262];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in k4482 in k4479 in k4476 in k4473 in k4470 in k4467 in ... */
static void C_ccall f_4532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4532,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4535,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:815: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[257];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[258];
av2[6]=lf[259];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in k4482 in k4479 in k4476 in k4473 in k4470 in ... */
static void C_ccall f_4535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4535,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4538,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:816: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[254];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[255];
av2[6]=lf[256];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in k4482 in k4479 in k4476 in k4473 in ... */
static void C_ccall f_4538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4538,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4541,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:817: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[252];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[253];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in k4482 in k4479 in k4476 in ... */
static void C_ccall f_4541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4541,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4544,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:818: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[250];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[251];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in k4482 in k4479 in ... */
static void C_ccall f_4544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4544,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4547,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:819: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[247];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[248];
av2[6]=lf[249];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in k4482 in ... */
static void C_ccall f_4547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4547,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4550,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:820: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[244];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[245];
av2[6]=lf[246];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in ... */
static void C_ccall f_4550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4550,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4553,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:821: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[241];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[242];
av2[6]=lf[243];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in ... */
static void C_ccall f_4553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4553,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4556,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:822: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[238];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[239];
av2[6]=lf[240];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in ... */
static void C_ccall f_4556(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4556,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4559,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:823: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[235];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[236];
av2[6]=lf[237];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in ... */
static void C_ccall f_4559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4559,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4562,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:824: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[232];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[233];
av2[6]=lf[234];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in ... */
static void C_ccall f_4562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4562,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4565,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:825: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[230];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[231];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in ... */
static void C_ccall f_4565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4565,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4568,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5186,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:827: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[229];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4566 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in ... */
static void C_ccall f_4568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4568,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4571,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:861: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[222];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[223];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4569 in k4566 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in ... */
static void C_ccall f_4571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4571,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4574,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:862: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[220];
av2[3]=C_fix(17);
av2[4]=C_fix(3);
av2[5]=lf[221];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4572 in k4569 in k4566 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in ... */
static void C_ccall f_4574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4574,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4577,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:863: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[218];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[219];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in ... */
static void C_ccall f_4577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4577,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4580,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:864: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[216];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[217];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in ... */
static void C_ccall f_4580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4580,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4583,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:865: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[214];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[215];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in ... */
static void C_ccall f_4583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4583,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4586,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:866: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[212];
av2[3]=C_fix(17);
av2[4]=C_fix(3);
av2[5]=lf[213];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in ... */
static void C_ccall f_4586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4586,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4589,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:867: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[210];
av2[3]=C_fix(17);
av2[4]=C_fix(3);
av2[5]=lf[211];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in ... */
static void C_ccall f_4589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4589,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4592,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:868: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[208];
av2[3]=C_fix(17);
av2[4]=C_fix(3);
av2[5]=lf[209];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in ... */
static void C_ccall f_4592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4592,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4595,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:869: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[205];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[206];
av2[6]=lf[207];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4593 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in ... */
static void C_ccall f_4595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4595,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4598,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:870: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[203];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[204];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4596 in k4593 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in ... */
static void C_ccall f_4598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4598,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4601,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:871: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[201];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[202];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in ... */
static void C_ccall f_4601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4601,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4604,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:872: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[198];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[199];
av2[6]=lf[200];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in ... */
static void C_ccall f_4604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4604,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4607,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:873: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[196];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[197];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in ... */
static void C_ccall f_4607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4607,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4610,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:874: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[194];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[195];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in ... */
static void C_ccall f_4610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4610,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4613,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:875: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[192];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[193];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4611 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in ... */
static void C_ccall f_4613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4613,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4616,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:876: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[190];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[191];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4614 in k4611 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in k4557 in k4554 in k4551 in ... */
static void C_ccall f_4616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4616,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4619,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:877: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[188];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[189];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4617 in k4614 in k4611 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in k4557 in k4554 in ... */
static void C_ccall f_4619(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4619,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4622,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:878: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[186];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[187];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4620 in k4617 in k4614 in k4611 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in k4557 in ... */
static void C_ccall f_4622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4622,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4625,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:879: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[184];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[185];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4623 in k4620 in k4617 in k4614 in k4611 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in ... */
static void C_ccall f_4625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4625,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4628,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:880: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[182];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[183];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4626 in k4623 in k4620 in k4617 in k4614 in k4611 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in ... */
static void C_ccall f_4628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4628,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4631,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:881: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[180];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[181];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4629 in k4626 in k4623 in k4620 in k4617 in k4614 in k4611 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in ... */
static void C_ccall f_4631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4631,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4634,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:882: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[178];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[179];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4632 in k4629 in k4626 in k4623 in k4620 in k4617 in k4614 in k4611 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in ... */
static void C_ccall f_4634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4634,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4637,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:883: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[176];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[177];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4635 in k4632 in k4629 in k4626 in k4623 in k4620 in k4617 in k4614 in k4611 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in ... */
static void C_ccall f_4637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4637,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4640,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:884: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[174];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[175];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4638 in k4635 in k4632 in k4629 in k4626 in k4623 in k4620 in k4617 in k4614 in k4611 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in ... */
static void C_ccall f_4640(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4640,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4643,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:886: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[172];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[173];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4641 in k4638 in k4635 in k4632 in k4629 in k4626 in k4623 in k4620 in k4617 in k4614 in k4611 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in k4581 in k4578 in ... */
static void C_ccall f_4643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4643,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4646,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:889: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[170];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[171];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4644 in k4641 in k4638 in k4635 in k4632 in k4629 in k4626 in k4623 in k4620 in k4617 in k4614 in k4611 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in k4581 in ... */
static void C_ccall f_4646(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4646,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4649,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:890: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[168];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[169];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4647 in k4644 in k4641 in k4638 in k4635 in k4632 in k4629 in k4626 in k4623 in k4620 in k4617 in k4614 in k4611 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in ... */
static void C_ccall f_4649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4649,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4652,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:891: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[166];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[167];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4650 in k4647 in k4644 in k4641 in k4638 in k4635 in k4632 in k4629 in k4626 in k4623 in k4620 in k4617 in k4614 in k4611 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in ... */
static void C_ccall f_4652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4652,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4655,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:892: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[164];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[165];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4653 in k4650 in k4647 in k4644 in k4641 in k4638 in k4635 in k4632 in k4629 in k4626 in k4623 in k4620 in k4617 in k4614 in k4611 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in ... */
static void C_ccall f_4655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4655,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4658,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:894: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[162];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[163];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4656 in k4653 in k4650 in k4647 in k4644 in k4641 in k4638 in k4635 in k4632 in k4629 in k4626 in k4623 in k4620 in k4617 in k4614 in k4611 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in ... */
static void C_ccall f_4658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4658,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4661,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:895: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[160];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[161];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4659 in k4656 in k4653 in k4650 in k4647 in k4644 in k4641 in k4638 in k4635 in k4632 in k4629 in k4626 in k4623 in k4620 in k4617 in k4614 in k4611 in k4608 in k4605 in k4602 in k4599 in k4596 in ... */
static void C_ccall f_4661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4661,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4664,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:897: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[158];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[159];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4662 in k4659 in k4656 in k4653 in k4650 in k4647 in k4644 in k4641 in k4638 in k4635 in k4632 in k4629 in k4626 in k4623 in k4620 in k4617 in k4614 in k4611 in k4608 in k4605 in k4602 in k4599 in ... */
static void C_ccall f_4664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4664,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4667,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:898: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[156];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[157];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4665 in k4662 in k4659 in k4656 in k4653 in k4650 in k4647 in k4644 in k4641 in k4638 in k4635 in k4632 in k4629 in k4626 in k4623 in k4620 in k4617 in k4614 in k4611 in k4608 in k4605 in k4602 in ... */
static void C_ccall f_4667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4667,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4670,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:899: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[154];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[155];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4668 in k4665 in k4662 in k4659 in k4656 in k4653 in k4650 in k4647 in k4644 in k4641 in k4638 in k4635 in k4632 in k4629 in k4626 in k4623 in k4620 in k4617 in k4614 in k4611 in k4608 in k4605 in ... */
static void C_ccall f_4670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4670,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4673,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:900: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[152];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[153];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4671 in k4668 in k4665 in k4662 in k4659 in k4656 in k4653 in k4650 in k4647 in k4644 in k4641 in k4638 in k4635 in k4632 in k4629 in k4626 in k4623 in k4620 in k4617 in k4614 in k4611 in k4608 in ... */
static void C_ccall f_4673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4673,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4676,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:901: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[150];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[151];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4674 in k4671 in k4668 in k4665 in k4662 in k4659 in k4656 in k4653 in k4650 in k4647 in k4644 in k4641 in k4638 in k4635 in k4632 in k4629 in k4626 in k4623 in k4620 in k4617 in k4614 in k4611 in ... */
static void C_ccall f_4676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4676,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4679,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:902: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[148];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[149];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4677 in k4674 in k4671 in k4668 in k4665 in k4662 in k4659 in k4656 in k4653 in k4650 in k4647 in k4644 in k4641 in k4638 in k4635 in k4632 in k4629 in k4626 in k4623 in k4620 in k4617 in k4614 in ... */
static void C_ccall f_4679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4679,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4682,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:903: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[146];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[147];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4662 in k4659 in k4656 in k4653 in k4650 in k4647 in k4644 in k4641 in k4638 in k4635 in k4632 in k4629 in k4626 in k4623 in k4620 in k4617 in ... */
static void C_ccall f_4682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4682,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4685,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:904: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[144];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[145];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4683 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4662 in k4659 in k4656 in k4653 in k4650 in k4647 in k4644 in k4641 in k4638 in k4635 in k4632 in k4629 in k4626 in k4623 in k4620 in ... */
static void C_ccall f_4685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4685,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4688,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:905: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[142];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[143];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4686 in k4683 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4662 in k4659 in k4656 in k4653 in k4650 in k4647 in k4644 in k4641 in k4638 in k4635 in k4632 in k4629 in k4626 in k4623 in ... */
static void C_ccall f_4688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4688,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4691,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:906: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[140];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[141];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4689 in k4686 in k4683 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4662 in k4659 in k4656 in k4653 in k4650 in k4647 in k4644 in k4641 in k4638 in k4635 in k4632 in k4629 in k4626 in ... */
static void C_ccall f_4691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4691,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4694,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:908: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[138];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[139];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4692 in k4689 in k4686 in k4683 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4662 in k4659 in k4656 in k4653 in k4650 in k4647 in k4644 in k4641 in k4638 in k4635 in k4632 in k4629 in ... */
static void C_ccall f_4694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4694,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4697,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:909: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[136];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[137];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4695 in k4692 in k4689 in k4686 in k4683 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4662 in k4659 in k4656 in k4653 in k4650 in k4647 in k4644 in k4641 in k4638 in k4635 in k4632 in ... */
static void C_ccall f_4697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4697,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4700,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:910: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[134];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[135];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4698 in k4695 in k4692 in k4689 in k4686 in k4683 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4662 in k4659 in k4656 in k4653 in k4650 in k4647 in k4644 in k4641 in k4638 in k4635 in ... */
static void C_ccall f_4700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4700,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4703,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:911: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[132];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[133];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4701 in k4698 in k4695 in k4692 in k4689 in k4686 in k4683 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4662 in k4659 in k4656 in k4653 in k4650 in k4647 in k4644 in k4641 in k4638 in ... */
static void C_ccall f_4703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4703,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4706,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:912: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[130];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[131];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4704 in k4701 in k4698 in k4695 in k4692 in k4689 in k4686 in k4683 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4662 in k4659 in k4656 in k4653 in k4650 in k4647 in k4644 in k4641 in ... */
static void C_ccall f_4706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4706,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4709,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:913: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[128];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[129];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4707 in k4704 in k4701 in k4698 in k4695 in k4692 in k4689 in k4686 in k4683 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4662 in k4659 in k4656 in k4653 in k4650 in k4647 in k4644 in ... */
static void C_ccall f_4709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4709,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4712,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:914: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[126];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[127];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4710 in k4707 in k4704 in k4701 in k4698 in k4695 in k4692 in k4689 in k4686 in k4683 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4662 in k4659 in k4656 in k4653 in k4650 in k4647 in ... */
static void C_ccall f_4712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4712,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4715,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:915: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[124];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[125];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in k4695 in k4692 in k4689 in k4686 in k4683 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4662 in k4659 in k4656 in k4653 in k4650 in ... */
static void C_ccall f_4715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4715,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4718,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:916: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[122];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[123];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in k4695 in k4692 in k4689 in k4686 in k4683 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4662 in k4659 in k4656 in k4653 in ... */
static void C_ccall f_4718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4718,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4721,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:917: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[120];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[121];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in k4695 in k4692 in k4689 in k4686 in k4683 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4662 in k4659 in k4656 in ... */
static void C_ccall f_4721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4721,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4724,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:919: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[118];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[119];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in k4695 in k4692 in k4689 in k4686 in k4683 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4662 in k4659 in ... */
static void C_ccall f_4724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4724,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4727,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:921: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[116];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[117];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in k4695 in k4692 in k4689 in k4686 in k4683 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in k4662 in ... */
static void C_ccall f_4727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4727,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4730,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:922: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[114];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[115];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in k4695 in k4692 in k4689 in k4686 in k4683 in k4680 in k4677 in k4674 in k4671 in k4668 in k4665 in ... */
static void C_ccall f_4730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4730,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4733,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:923: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[112];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[113];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in k4695 in k4692 in k4689 in k4686 in k4683 in k4680 in k4677 in k4674 in k4671 in k4668 in ... */
static void C_ccall f_4733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4733,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4736,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:924: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[110];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[111];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in k4695 in k4692 in k4689 in k4686 in k4683 in k4680 in k4677 in k4674 in k4671 in ... */
static void C_ccall f_4736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4736,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4739,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:925: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[108];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[109];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in k4695 in k4692 in k4689 in k4686 in k4683 in k4680 in k4677 in k4674 in ... */
static void C_ccall f_4739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4739,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4742,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:926: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[106];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[107];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in k4695 in k4692 in k4689 in k4686 in k4683 in k4680 in k4677 in ... */
static void C_ccall f_4742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4742,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4745,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:927: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[104];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[105];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in k4695 in k4692 in k4689 in k4686 in k4683 in k4680 in ... */
static void C_ccall f_4745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4745,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4748,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:928: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[102];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[103];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in k4695 in k4692 in k4689 in k4686 in k4683 in ... */
static void C_ccall f_4748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4748,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4751,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:929: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[100];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[101];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in k4695 in k4692 in k4689 in k4686 in ... */
static void C_ccall f_4751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4751,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4754,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:930: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[98];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[99];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in k4695 in k4692 in k4689 in ... */
static void C_ccall f_4754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_4754,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4756,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4861,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:958: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[97];
av2[3]=C_fix(8);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* rewrite-make-vector in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in k4695 in k4692 in ... */
static void C_ccall f_4756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4756,6,av);}
a=C_alloc(6);
t6=C_i_length(t5);
if(C_truep(C_i_pairp(t5))){
t7=t5;
t8=C_i_car(t7);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4858,a[2]=t1,a[3]=t4,a[4]=t5,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:939: chicken.compiler.support#node-class */
t11=*((C_word*)lf[32]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
av2[2]=t9;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k4776 in k4856 in rewrite-make-vector in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in ... */
static void C_ccall f_4778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4778,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4854,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:941: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4791 in k4852 in k4776 in k4856 in rewrite-make-vector in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in ... */
static void C_ccall f_4793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4793,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4796,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[6];
t4=C_u_i_cdr(t3);
if(C_truep(C_i_pairp(t4))){
t5=((C_word*)t0)[6];
t6=t2;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_i_cadr(t5);
f_4796(2,av2);}}
else{
/* c-platform.scm:946: chicken.compiler.support#make-node */
t5=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=lf[57];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4794 in k4791 in k4852 in k4776 in k4856 in rewrite-make-vector in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in ... */
static void C_ccall f_4796(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(41,c,3)))){
C_save_and_reclaim((void *)f_4796,2,av);}
a=C_alloc(41);
t2=t1;
t3=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4811,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4823,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t9=C_a_i_fixnum_plus(&a,2,((C_word*)t0)[5],C_fix(1));
t10=C_a_i_list2(&a,2,lf[56],t9);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4831,a[2]=t8,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4833,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t14=((C_word*)t0)[5];
t15=t13;
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2575,a[2]=t14,a[3]=t17,a[4]=t15,tmp=(C_word)a,a+=5,tmp));
t19=((C_word*)t17)[1];
f_2575(t19,t12,C_fix(0));}

/* k4809 in k4794 in k4791 in k4852 in k4776 in k4856 in rewrite-make-vector in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in ... */
static void C_ccall f_4811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4811,2,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:947: chicken.compiler.support#make-node */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[46];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4821 in k4794 in k4791 in k4852 in k4776 in k4856 in rewrite-make-vector in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in ... */
static void C_ccall f_4823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4823,2,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:951: chicken.compiler.support#make-node */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[21];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4829 in k4794 in k4791 in k4852 in k4776 in k4856 in rewrite-make-vector in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in ... */
static void C_ccall f_4831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4831,2,av);}
/* c-platform.scm:954: chicken.compiler.support#make-node */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[26];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a4832 in k4794 in k4791 in k4852 in k4776 in k4856 in rewrite-make-vector in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in ... */
static void C_ccall f_4833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4833,3,av);}
/* c-platform.scm:957: chicken.compiler.support#varnode */
t3=*((C_word*)lf[47]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4852 in k4776 in k4856 in rewrite-make-vector in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in ... */
static void C_ccall f_4854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4854,2,av);}
a=C_alloc(7);
t2=C_i_car(t1);
t3=t2;
if(C_truep(C_fixnump(t3))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4793,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:943: scheme#<= */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t4;
av2[2]=C_fix(0);
av2[3]=t3;
av2[4]=C_fix(32);
C_less_or_equal_p(5,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4856 in rewrite-make-vector in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in k4695 in ... */
static void C_ccall f_4858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4858,2,av);}
a=C_alloc(6);
t2=C_eqp(lf[29],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4778,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:940: chicken.base#gensym */
t4=*((C_word*)lf[48]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in k4695 in k4692 in ... */
static void C_ccall f_4861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4861,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4864,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:959: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[96];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in k4695 in ... */
static void C_ccall f_4864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_4864,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4866,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4987,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:981: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[43];
av2[3]=C_fix(8);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* rewrite-call/cc in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in ... */
static void C_ccall f_4866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4866,6,av);}
a=C_alloc(6);
t6=C_i_length(t5);
t7=C_eqp(C_fix(1),t6);
if(C_truep(t7)){
t8=t5;
t9=C_i_car(t8);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4979,a[2]=t10,a[3]=t4,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:966: chicken.compiler.support#node-class */
t12=*((C_word*)lf[32]+1);{
C_word *av2=av;
av2[0]=t12;
av2[1]=t11;
av2[2]=t10;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k4883 in k4977 in rewrite-call/cc in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in ... */
static void C_ccall f_4885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4885,2,av);}
a=C_alloc(7);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4967,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:968: chicken.compiler.support#node-class */
t4=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a4901 in k4961 in k4965 in k4883 in k4977 in rewrite-call/cc in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in ... */
static void C_ccall f_4902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4902,5,av);}
a=C_alloc(7);
if(C_truep(C_i_nequalp(t3,C_fix(2)))){
t5=(C_truep(t4)?t4:C_i_cadr(((C_word*)t0)[2]));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4956,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:975: chicken.compiler.support#db-get */
t8=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[5];
av2[3]=t6;
av2[4]=lf[60];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4942 in k4946 in k4950 in k4954 in a4901 in k4961 in k4965 in k4883 in k4977 in rewrite-call/cc in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in ... */
static void C_ccall f_4944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_4944,2,av);}
a=C_alloc(9);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
/* c-platform.scm:978: chicken.compiler.support#make-node */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[21];
av2[3]=((C_word*)t0)[5];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4946 in k4950 in k4954 in a4901 in k4961 in k4965 in k4883 in k4977 in rewrite-call/cc in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in ... */
static void C_ccall f_4948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4948,2,av);}
a=C_alloc(9);
if(C_truep(C_i_not(t1))){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4944,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:980: chicken.compiler.support#qnode */
t5=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4950 in k4954 in a4901 in k4961 in k4965 in k4883 in k4977 in rewrite-call/cc in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in ... */
static void C_ccall f_4952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4952,2,av);}
a=C_alloc(5);
if(C_truep(C_i_not(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4948,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:977: chicken.compiler.support#db-get */
t3=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
av2[4]=lf[58];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4954 in a4901 in k4961 in k4965 in k4883 in k4977 in rewrite-call/cc in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in ... */
static void C_ccall f_4956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4956,2,av);}
a=C_alloc(7);
if(C_truep(C_i_not(t1))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4952,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:976: chicken.compiler.support#db-get */
t3=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
av2[4]=lf[59];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4961 in k4965 in k4883 in k4977 in rewrite-call/cc in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in ... */
static void C_ccall f_4963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_4963,2,av);}
a=C_alloc(6);
t2=C_i_caddr(t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4902,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:970: ##sys#decompose-lambda-list */
t5=*((C_word*)lf[61]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[5];
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k4965 in k4883 in k4977 in rewrite-call/cc in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in ... */
static void C_ccall f_4967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4967,2,av);}
a=C_alloc(6);
t2=C_eqp(lf[45],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4963,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:969: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4973 in k4977 in rewrite-call/cc in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in ... */
static void C_ccall f_4975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4975,2,av);}
t2=C_i_car(t1);
/* c-platform.scm:967: chicken.compiler.support#db-get */
t3=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=lf[55];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4977 in rewrite-call/cc in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in ... */
static void C_ccall f_4979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4979,2,av);}
a=C_alloc(10);
t2=C_eqp(lf[33],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4885,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4975,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:967: chicken.compiler.support#node-parameters */
t5=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in k4698 in ... */
static void C_ccall f_4987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4987,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4990,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:982: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[95];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in k4701 in ... */
static void C_ccall f_4990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4990,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4994,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5121,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1010: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[94];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4992 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in ... */
static void C_ccall f_4994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4994,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4997,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1024: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[92];
av2[3]=C_fix(3);
av2[4]=lf[91];
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4995 in k4992 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in ... */
static void C_ccall f_4997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4997,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5000,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1025: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[90];
av2[3]=C_fix(3);
av2[4]=lf[91];
av2[5]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4998 in k4995 in k4992 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in ... */
static void C_ccall f_5000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5000,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5003,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1026: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[89];
av2[3]=C_fix(3);
av2[4]=lf[79];
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k5001 in k4998 in k4995 in k4992 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in ... */
static void C_ccall f_5003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5003,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5006,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1027: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[88];
av2[3]=C_fix(3);
av2[4]=lf[76];
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k5004 in k5001 in k4998 in k4995 in k4992 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in ... */
static void C_ccall f_5006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5006,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5009,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1028: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[86];
av2[3]=C_fix(3);
av2[4]=lf[87];
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k5007 in k5004 in k5001 in k4998 in k4995 in k4992 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in ... */
static void C_ccall f_5009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_5009,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5012,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5081,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1030: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[85];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k5010 in k5007 in k5004 in k5001 in k4998 in k4995 in k4992 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in ... */
static void C_ccall f_5012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_5012,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5015,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5041,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1042: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[82];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k5013 in k5010 in k5007 in k5004 in k5001 in k4998 in k4995 in k4992 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in ... */
static void C_ccall f_5015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5015,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5018,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1054: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[77];
av2[3]=C_fix(23);
av2[4]=C_fix(0);
av2[5]=lf[78];
av2[6]=lf[79];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5016 in k5013 in k5010 in k5007 in k5004 in k5001 in k4998 in k4995 in k4992 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in ... */
static void C_ccall f_5018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5018,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5021,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1055: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[74];
av2[3]=C_fix(23);
av2[4]=C_fix(1);
av2[5]=lf[75];
av2[6]=lf[76];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5019 in k5016 in k5013 in k5010 in k5007 in k5004 in k5001 in k4998 in k4995 in k4992 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in ... */
static void C_ccall f_5021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_5021,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5024,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1056: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[72];
av2[3]=C_fix(23);
av2[4]=C_fix(2);
av2[5]=lf[73];
av2[6]=C_fix(0);
av2[7]=C_fix(0);
av2[8]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k5022 in k5019 in k5016 in k5013 in k5010 in k5007 in k5004 in k5001 in k4998 in k4995 in k4992 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in ... */
static void C_ccall f_5024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_5024,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5027,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1057: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[70];
av2[3]=C_fix(23);
av2[4]=C_fix(2);
av2[5]=lf[71];
av2[6]=C_fix(0);
av2[7]=C_fix(0);
av2[8]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k5025 in k5022 in k5019 in k5016 in k5013 in k5010 in k5007 in k5004 in k5001 in k4998 in k4995 in k4992 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in ... */
static void C_ccall f_5027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5027,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5030,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1058: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[68];
av2[3]=C_fix(23);
av2[4]=C_fix(2);
av2[5]=lf[69];
av2[6]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5028 in k5025 in k5022 in k5019 in k5016 in k5013 in k5010 in k5007 in k5004 in k5001 in k4998 in k4995 in k4992 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in ... */
static void C_ccall f_5030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5030,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5033,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1059: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[66];
av2[3]=C_fix(23);
av2[4]=C_fix(2);
av2[5]=lf[67];
av2[6]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5031 in k5028 in k5025 in k5022 in k5019 in k5016 in k5013 in k5010 in k5007 in k5004 in k5001 in k4998 in k4995 in k4992 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in ... */
static void C_ccall f_5033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5033,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5036,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1061: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[64];
av2[3]=C_fix(7);
av2[4]=C_fix(2);
av2[5]=lf[65];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k5034 in k5031 in k5028 in k5025 in k5022 in k5019 in k5016 in k5013 in k5010 in k5007 in k5004 in k5001 in k4998 in k4995 in k4992 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in ... */
static void C_ccall f_5036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5036,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5039,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1062: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[62];
av2[3]=C_fix(7);
av2[4]=C_fix(2);
av2[5]=lf[63];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k5037 in k5034 in k5031 in k5028 in k5025 in k5022 in k5019 in k5016 in k5013 in k5010 in k5007 in k5004 in k5001 in k4998 in k4995 in k4992 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in ... */
static void C_ccall f_5039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5039,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5040 in k5010 in k5007 in k5004 in k5001 in k4998 in k4995 in k4992 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in ... */
static void C_ccall f_5041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_5041,6,av);}
a=C_alloc(11);
t6=C_i_length(t5);
t7=C_eqp(C_fix(1),t6);
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5063,a[2]=t4,a[3]=t1,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
t11=C_eqp(*((C_word*)lf[23]+1),lf[22]);
t12=(C_truep(t11)?C_a_i_list1(&a,1,lf[80]):C_a_i_list1(&a,1,lf[81]));
/* c-platform.scm:1049: chicken.compiler.support#make-node */
t13=*((C_word*)lf[20]+1);{
C_word *av2=av;
av2[0]=t13;
av2[1]=t10;
av2[2]=lf[25];
av2[3]=t12;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5061 in a5040 in k5010 in k5007 in k5004 in k5001 in k4998 in k4995 in k4992 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in ... */
static void C_ccall f_5063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5063,2,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:1046: chicken.compiler.support#make-node */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[21];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* a5080 in k5007 in k5004 in k5001 in k4998 in k4995 in k4992 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in ... */
static void C_ccall f_5081(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_5081,6,av);}
a=C_alloc(11);
t6=C_i_length(t5);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5103,a[2]=t4,a[3]=t1,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
t11=C_eqp(*((C_word*)lf[23]+1),lf[22]);
t12=(C_truep(t11)?C_a_i_list1(&a,1,lf[83]):C_a_i_list1(&a,1,lf[84]));
/* c-platform.scm:1037: chicken.compiler.support#make-node */
t13=*((C_word*)lf[20]+1);{
C_word *av2=av;
av2[0]=t13;
av2[1]=t10;
av2[2]=lf[25];
av2[3]=t12;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5101 in a5080 in k5007 in k5004 in k5001 in k4998 in k4995 in k4992 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in ... */
static void C_ccall f_5103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5103,2,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:1034: chicken.compiler.support#make-node */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[21];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* a5120 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in k4704 in ... */
static void C_ccall f_5121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5121,6,av);}
a=C_alloc(5);
t6=C_i_length(t5);
t7=C_eqp(C_fix(1),t6);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5179,a[2]=t4,a[3]=t1,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:1016: chicken.compiler.support#node-class */
t11=*((C_word*)lf[32]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
av2[2]=t9;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5144 in k5173 in k5177 in a5120 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in ... */
static void C_ccall f_5146(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5146,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_i_assq(((C_word*)t0)[2],lf[93]);
if(C_truep(t2)){
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5167,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_i_cdr(t2);
/* c-platform.scm:1022: chicken.compiler.support#varnode */
t7=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5165 in k5144 in k5173 in k5177 in a5120 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in ... */
static void C_ccall f_5167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5167,2,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:1020: chicken.compiler.support#make-node */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[21];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5173 in k5177 in a5120 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in ... */
static void C_ccall f_5175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5175,2,av);}
a=C_alloc(5);
t2=C_i_car(t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5146,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:1018: chicken.compiler.support#intrinsic? */
t5=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5177 in a5120 in k4988 in k4985 in k4862 in k4859 in k4752 in k4749 in k4746 in k4743 in k4740 in k4737 in k4734 in k4731 in k4728 in k4725 in k4722 in k4719 in k4716 in k4713 in k4710 in k4707 in ... */
static void C_ccall f_5179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5179,2,av);}
a=C_alloc(4);
t2=C_eqp(lf[33],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5175,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:1017: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a5185 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in ... */
static void C_ccall f_5186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_5186,6,av);}
a=C_alloc(10);
t6=C_i_length(t5);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=t5;
t9=C_i_cadr(t8);
t10=t9;
t11=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t12=t11;
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5301,a[2]=t4,a[3]=t1,a[4]=t12,a[5]=t5,a[6]=t10,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:843: chicken.compiler.support#node-class */
t14=*((C_word*)lf[32]+1);{
C_word *av2=av;
av2[0]=t14;
av2[1]=t13;
av2[2]=t10;
((C_proc)(void*)(*((C_word*)t14+1)))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5212 in k5299 in a5185 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in ... */
static void C_ccall f_5214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_5214,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5217,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t1;
t4=C_a_i_list2(&a,2,((C_word*)t0)[2],t3);
/* c-platform.scm:840: chicken.compiler.support#make-node */
t5=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[21];
av2[3]=((C_word*)t0)[4];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t3=C_eqp(*((C_word*)lf[23]+1),lf[22]);
if(C_truep(t3)){
/* c-platform.scm:855: chicken.compiler.support#make-node */
t4=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[25];
av2[3]=lf[224];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=C_a_i_list2(&a,2,lf[225],C_fix(5));
/* c-platform.scm:857: chicken.compiler.support#make-node */
t5=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=lf[26];
av2[3]=t4;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}}

/* k5215 in k5212 in k5299 in a5185 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in ... */
static void C_ccall f_5217(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5217,2,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:840: chicken.compiler.support#make-node */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[21];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5246 in k5295 in k5299 in a5185 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in ... */
static void C_fcall f_5248(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,4)))){
C_save_and_reclaim_args((void *)trf_5248,2,t0,t1);}
a=C_alloc(33);
if(C_truep(t1)){
if(C_truep(C_i_negativep(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5270,a[2]=t4,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t6=C_s_a_i_negate(&a,1,((C_word*)t0)[2]);
/* c-platform.scm:850: chicken.compiler.support#qnode */
t7=*((C_word*)lf[27]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];
t3=C_i_car(t2);
t4=C_a_i_list2(&a,2,t3,((C_word*)t0)[5]);
/* c-platform.scm:851: chicken.compiler.support#make-node */
t5=*((C_word*)lf[20]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[25];
av2[3]=lf[227];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_5214(2,av2);}}}

/* k5268 in k5246 in k5295 in k5299 in a5185 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in ... */
static void C_ccall f_5270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5270,2,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:848: chicken.compiler.support#make-node */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=lf[226];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5291 in k5295 in k5299 in a5185 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in ... */
static void C_ccall f_5293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5293,2,av);}
t2=((C_word*)t0)[2];
f_5248(t2,C_i_not(t1));}

/* k5295 in k5299 in a5185 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in ... */
static void C_ccall f_5297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5297,2,av);}
a=C_alloc(9);
t2=C_i_car(t1);
t3=t2;
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5248,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t3))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5293,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:846: chicken.compiler.support#big-fixnum? */
t6=*((C_word*)lf[228]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=t4;
f_5248(t5,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_5214(2,av2);}}}

/* k5299 in a5185 in k4563 in k4560 in k4557 in k4554 in k4551 in k4548 in k4545 in k4542 in k4539 in k4536 in k4533 in k4530 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in ... */
static void C_ccall f_5301(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5301,2,av);}
a=C_alloc(11);
t2=C_eqp(lf[29],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5214,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=C_eqp(*((C_word*)lf[23]+1),lf[22]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5297,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:845: chicken.compiler.support#node-parameters */
t6=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_5214(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_5214(2,av2);}}}

/* a5307 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in k4482 in k4479 in k4476 in k4473 in k4470 in k4467 in ... */
static void C_ccall f_5308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_5308,6,av);}
a=C_alloc(16);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(3));
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5330,a[2]=t4,a[3]=t1,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
t11=t5;
t12=C_i_caddr(t11);
t13=t12;
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5340,a[2]=t10,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5358,a[2]=t14,a[3]=t13,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:809: chicken.compiler.support#node-class */
t16=*((C_word*)lf[32]+1);{
C_word *av2=av;
av2[0]=t16;
av2[1]=t15;
av2[2]=t13;
((C_proc)(void*)(*((C_word*)t16+1)))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5328 in a5307 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in k4482 in k4479 in k4476 in k4473 in k4470 in ... */
static void C_ccall f_5330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5330,2,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:803: chicken.compiler.support#make-node */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[21];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5338 in a5307 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in k4482 in k4479 in k4476 in k4473 in k4470 in ... */
static void C_ccall f_5340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5340,2,av);}
if(C_truep(t1)){
/* c-platform.scm:806: chicken.compiler.support#make-node */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[25];
av2[3]=lf[260];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
/* c-platform.scm:806: chicken.compiler.support#make-node */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[25];
av2[3]=lf[261];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k5352 in k5356 in a5307 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in k4482 in k4479 in k4476 in k4473 in ... */
static void C_ccall f_5354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5354,2,av);}
t2=C_i_car(t1);
/* c-platform.scm:810: chicken.compiler.support#immediate? */
t3=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5356 in a5307 in k4527 in k4524 in k4521 in k4518 in k4515 in k4512 in k4509 in k4506 in k4503 in k4500 in k4497 in k4494 in k4491 in k4488 in k4485 in k4482 in k4479 in k4476 in k4473 in k4470 in ... */
static void C_ccall f_5358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5358,2,av);}
a=C_alloc(3);
t2=C_eqp(lf[29],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5354,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:810: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[31]+1);{
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
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_5340(2,av2);}}}

/* a5364 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_5365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_5365,6,av);}
a=C_alloc(13);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(2));
if(C_truep(t7)){
t8=t5;
t9=C_i_car(t8);
t10=t9;
t11=t5;
t12=C_i_cadr(t11);
t13=t12;
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5381,a[2]=t1,a[3]=t4,a[4]=t5,a[5]=t13,a[6]=t10,tmp=(C_word)a,a+=7,tmp);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5521,a[2]=t4,a[3]=t14,a[4]=t13,a[5]=t10,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:329: chicken.compiler.support#node-class */
t16=*((C_word*)lf[32]+1);{
C_word *av2=av;
av2[0]=t16;
av2[1]=t15;
av2[2]=t10;
((C_proc)(void*)(*((C_word*)t16+1)))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5379 in a5364 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_5381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_5381,2,av);}
a=C_alloc(15);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5387,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5408,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5475,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:333: chicken.compiler.support#node-class */
t5=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k5385 in k5379 in a5364 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_5387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_5387,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5405,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:344: chicken.compiler.support#make-node */
t5=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[25];
av2[3]=lf[848];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k5403 in k5385 in k5379 in a5364 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 in ... */
static void C_ccall f_5405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5405,2,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:342: chicken.compiler.support#make-node */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[21];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5406 in k5379 in a5364 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_fcall f_5408(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_5408,2,t0,t1);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5411,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_5411(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5452,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:336: chicken.compiler.support#node-class */
t4=*((C_word*)lf[32]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k5409 in k5406 in k5379 in a5364 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 in ... */
static void C_fcall f_5411(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_5411,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5426,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:341: chicken.compiler.support#make-node */
t5=*((C_word*)lf[20]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[25];
av2[3]=lf[849];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_5387(2,av2);}}}

/* k5424 in k5409 in k5406 in k5379 in a5364 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in ... */
static void C_ccall f_5426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5426,2,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:339: chicken.compiler.support#make-node */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[21];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5436 in k5446 in k5450 in k5406 in k5379 in a5364 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in ... */
static void C_ccall f_5438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5438,2,av);}
t2=((C_word*)t0)[2];
f_5411(t2,(C_truep(t1)?t1:C_i_symbolp(((C_word*)t0)[3])));}

/* k5446 in k5450 in k5406 in k5379 in a5364 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in ... */
static void C_ccall f_5448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5448,2,av);}
a=C_alloc(4);
t2=C_i_car(t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5438,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:338: chicken.compiler.support#immediate? */
t5=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5450 in k5406 in k5379 in a5364 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 in ... */
static void C_ccall f_5452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5452,2,av);}
a=C_alloc(3);
t2=C_eqp(lf[29],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5448,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:337: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[31]+1);{
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
else{
t3=((C_word*)t0)[2];
f_5411(t3,C_SCHEME_FALSE);}}

/* k5459 in k5469 in k5473 in k5379 in a5364 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in ... */
static void C_ccall f_5461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5461,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_5408(t3,t2);}
else{
t2=((C_word*)t0)[2];
f_5408(t2,C_i_symbolp(((C_word*)t0)[3]));}}

/* k5469 in k5473 in k5379 in a5364 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 in ... */
static void C_ccall f_5471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5471,2,av);}
a=C_alloc(4);
t2=C_i_car(t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5461,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:335: chicken.compiler.support#immediate? */
t5=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5473 in k5379 in a5364 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_5475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5475,2,av);}
a=C_alloc(3);
t2=C_eqp(lf[29],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5471,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:334: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[31]+1);{
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
else{
t3=((C_word*)t0)[2];
f_5408(t3,C_SCHEME_FALSE);}}

/* k5503 in k5511 in k5507 in k5515 in k5519 in a5364 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in ... */
static void C_ccall f_5505(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5505,2,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:332: chicken.compiler.support#make-node */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[21];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5507 in k5515 in k5519 in a5364 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 in ... */
static void C_ccall f_5509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5509,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5513,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:331: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5511 in k5507 in k5515 in k5519 in a5364 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in ... */
static void C_ccall f_5513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5513,2,av);}
a=C_alloc(8);
if(C_truep(C_i_equalp(((C_word*)t0)[2],t1))){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5505,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:332: chicken.compiler.support#qnode */
t5=*((C_word*)lf[27]+1);{
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
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_5381(2,av2);}}}

/* k5515 in k5519 in a5364 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_5517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5517,2,av);}
a=C_alloc(5);
t2=C_eqp(lf[33],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5509,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:331: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_5381(2,av2);}}}

/* k5519 in a5364 in k3108 in k3105 in k2949 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_5521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5521,2,av);}
a=C_alloc(6);
t2=C_eqp(lf[33],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5517,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:330: chicken.compiler.support#node-class */
t4=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_5381(2,av2);}}}

/* k5528 in k2946 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_5530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5530,2,av);}
/* c-platform.scm:294: chicken.compiler.optimizer#rewrite */
t2=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[851];
av2[3]=C_fix(8);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5532 in k2879 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_5534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5534,2,av);}
/* c-platform.scm:293: chicken.compiler.optimizer#rewrite */
t2=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[855];
av2[3]=C_fix(8);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* for-each-loop589 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_fcall f_5536(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_5536,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5546,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[859]+1);
/* c-platform.scm:265: g605 */
t6=*((C_word*)lf[859]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[860];
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5544 in for-each-loop589 in k2870 in k2863 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_5546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5546,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5536(t3,((C_word*)t0)[4],t2);}

/* map-loop551 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_fcall f_5559(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5559,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5584,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* c-platform.scm:120: chicken.base#symbol-append */
t5=*((C_word*)lf[865]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[866];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5582 in map-loop551 in k2848 in k2845 in k2842 in k2835 in k1554 in k1551 in k1548 in k1545 in k1542 in k1539 in k1536 */
static void C_ccall f_5584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5584,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5559(t6,((C_word*)t0)[5],t5);}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_c_2dplatform_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("c-platform"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_c_2dplatform_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(9484))){
C_save(t1);
C_rereclaim2(9484*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,874);
lf[0]=C_h_intern(&lf[0],10, C_text("c-platform"));
lf[1]=C_h_intern(&lf[1],28, C_text("chicken.compiler.c-platform#"));
lf[3]=C_h_intern(&lf[3],48, C_text("chicken.compiler.c-platform#default-declarations"));
lf[4]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014always-bound\376\003\000\000\002\376\001\000\000\022\003sysstandard-input\376\003\000\000\002\376\001\000\000\023\003sysstandard-ou"
"tput\376\003\000\000\002\376\001\000\000\022\003sysstandard-error\376\003\000\000\002\376\001\000\000\023\003sysundefined-value\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022b"
"ound-to-procedure\376\003\000\000\002\376\001\000\000\014\003sysfor-each\376\003\000\000\002\376\001\000\000\007\003sysmap\376\003\000\000\002\376\001\000\000\011\003sysprint\376\003\000\000\002"
"\376\001\000\000\012\003syssetter\376\003\000\000\002\376\001\000\000\013\003syssetslot\376\003\000\000\002\376\001\000\000\020\003sysdynamic-wind\376\003\000\000\002\376\001\000\000\024\003syscall"
"-with-values\376\003\000\000\002\376\001\000\000\017\003sysstart-timer\376\003\000\000\002\376\001\000\000\016\003sysstop-timer\376\003\000\000\002\376\001\000\000\007\003sysgcd\376\003"
"\000\000\002\376\001\000\000\007\003syslcm\376\003\000\000\002\376\001\000\000\016\003sysstructure\077\376\003\000\000\002\376\001\000\000\010\003sysslot\376\003\000\000\002\376\001\000\000\023\003sysallocate-"
"vector\376\003\000\000\002\376\001\000\000\020\003syslist->vector\376\003\000\000\002\376\001\000\000\015\003sysblock-ref\376\003\000\000\002\376\001\000\000\016\003sysblock-set!\376"
"\003\000\000\002\376\001\000\000\010\003syslist\376\003\000\000\002\376\001\000\000\010\003syscons\376\003\000\000\002\376\001\000\000\012\003sysappend\376\003\000\000\002\376\001\000\000\012\003sysvector\376\003\000\000\002"
"\376\001\000\000\031\003sysforeign-char-argument\376\003\000\000\002\376\001\000\000\033\003sysforeign-fixnum-argument\376\003\000\000\002\376\001\000\000\033\003sy"
"sforeign-flonum-argument\376\003\000\000\002\376\001\000\000\011\003syserror\376\003\000\000\002\376\001\000\000\021\003syspeek-c-string\376\003\000\000\002\376\001\000\000\031"
"\003syspeek-nonnull-c-string\376\003\000\000\002\376\001\000\000\032\003syspeek-and-free-c-string\376\003\000\000\002\376\001\000\000\042\003syspeek-"
"and-free-nonnull-c-string\376\003\000\000\002\376\001\000\000\032\003sysforeign-block-argument\376\003\000\000\002\376\001\000\000\033\003sysforei"
"gn-string-argument\376\003\000\000\002\376\001\000\000\034\003sysforeign-pointer-argument\376\003\000\000\002\376\001\000\000\042\003syscall-with-"
"current-continuation\376\377\016\376\377\016"));
lf[5]=C_h_intern(&lf[5],58, C_text("chicken.compiler.c-platform#default-profiling-declarations"));
lf[6]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\004coredeclare\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004uses\376\003\000\000\002\376\001\000\000\010profiler\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\022bound-to-procedure\376\003\000\000\002\376\001\000\000\021\003sysprofile-entry\376\003\000\000\002\376\001\000\000\020\003sysprofile-exit\376\377\016\376\377\016\376"
"\377\016"));
lf[7]=C_h_intern(&lf[7],41, C_text("chicken.compiler.c-platform#default-units"));
lf[8]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\007library\376\003\000\000\002\376\001\000\000\004eval\376\377\016"));
lf[9]=C_h_intern(&lf[9],44, C_text("chicken.compiler.c-platform#words-per-flonum"));
lf[10]=C_h_intern(&lf[10],47, C_text("chicken.compiler.c-platform#target-include-file"));
lf[11]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011chicken.h"));
lf[12]=C_h_intern(&lf[12],50, C_text("chicken.compiler.c-platform#valid-compiler-options"));
lf[13]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\005-help\376\003\000\000\002\376\001\000\000\001h\376\003\000\000\002\376\001\000\000\004help\376\003\000\000\002\376\001\000\000\007version\376\003\000\000\002\376\001\000\000\007verbose\376\003\000\000\002\376"
"\001\000\000\014explicit-use\376\003\000\000\002\376\001\000\000\010no-trace\376\003\000\000\002\376\001\000\000\013no-warnings\376\003\000\000\002\376\001\000\000\006unsafe\376\003\000\000\002\376\001\000\000"
"\005block\376\003\000\000\002\376\001\000\000\014check-syntax\376\003\000\000\002\376\001\000\000\011to-stdout\376\003\000\000\002\376\001\000\000\025no-usual-integrations\376\003"
"\000\000\002\376\001\000\000\020case-insensitive\376\003\000\000\002\376\001\000\000\016no-lambda-info\376\003\000\000\002\376\001\000\000\007profile\376\003\000\000\002\376\001\000\000\006inlin"
"e\376\003\000\000\002\376\001\000\000\024keep-shadowed-macros\376\003\000\000\002\376\001\000\000\021ignore-repository\376\003\000\000\002\376\001\000\000\021fixnum-arith"
"metic\376\003\000\000\002\376\001\000\000\022disable-interrupts\376\003\000\000\002\376\001\000\000\026optimize-leaf-routines\376\003\000\000\002\376\001\000\000\016compi"
"le-syntax\376\003\000\000\002\376\001\000\000\014tag-pointers\376\003\000\000\002\376\001\000\000\022accumulate-profile\376\003\000\000\002\376\001\000\000\035disable-sta"
"ck-overflow-checks\376\003\000\000\002\376\001\000\000\003raw\376\003\000\000\002\376\001\000\000\012specialize\376\003\000\000\002\376\001\000\000\036emit-external-proto"
"types-first\376\003\000\000\002\376\001\000\000\007release\376\003\000\000\002\376\001\000\000\005local\376\003\000\000\002\376\001\000\000\015inline-global\376\003\000\000\002\376\001\000\000\014anal"
"yze-only\376\003\000\000\002\376\001\000\000\007dynamic\376\003\000\000\002\376\001\000\000\006static\376\003\000\000\002\376\001\000\000\016no-argc-checks\376\003\000\000\002\376\001\000\000\023no-pr"
"ocedure-checks\376\003\000\000\002\376\001\000\000\027no-parentheses-synonyms\376\003\000\000\002\376\001\000\000)no-procedure-checks-for"
"-toplevel-bindings\376\003\000\000\002\376\001\000\000\017no-bound-checks\376\003\000\000\002\376\001\000\000&no-procedure-checks-for-usu"
"al-bindings\376\003\000\000\002\376\001\000\000\022no-compiler-syntax\376\003\000\000\002\376\001\000\000\027no-parentheses-synonyms\376\003\000\000\002\376\001\000"
"\000\020no-symbol-escape\376\003\000\000\002\376\001\000\000\013r5rs-syntax\376\003\000\000\002\376\001\000\000\031emit-all-import-libraries\376\003\000\000\002\376"
"\001\000\000\014strict-types\376\003\000\000\002\376\001\000\000\012clustering\376\003\000\000\002\376\001\000\000\004lfa2\376\003\000\000\002\376\001\000\000\012debug-info\376\003\000\000\002\376\001\000\000\012"
"setup-mode\376\003\000\000\002\376\001\000\000\026no-module-registration\376\377\016"));
lf[14]=C_h_intern(&lf[14],64, C_text("chicken.compiler.c-platform#valid-compiler-options-with-argument"));
lf[15]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\005debug\376\003\000\000\002\376\001\000\000\016emit-link-file\376\003\000\000\002\376\001\000\000\013output-file\376\003\000\000\002\376\001\000\000\014include-pa"
"th\376\003\000\000\002\376\001\000\000\011heap-size\376\003\000\000\002\376\001\000\000\012stack-size\376\003\000\000\002\376\001\000\000\004unit\376\003\000\000\002\376\001\000\000\004uses\376\003\000\000\002\376\001\000\000\006m"
"odule\376\003\000\000\002\376\001\000\000\015keyword-style\376\003\000\000\002\376\001\000\000\021require-extension\376\003\000\000\002\376\001\000\000\014inline-limit\376\003\000"
"\000\002\376\001\000\000\014profile-name\376\003\000\000\002\376\001\000\000\007prelude\376\003\000\000\002\376\001\000\000\010postlude\376\003\000\000\002\376\001\000\000\010prologue\376\003\000\000\002\376\001\000"
"\000\010epilogue\376\003\000\000\002\376\001\000\000\007nursery\376\003\000\000\002\376\001\000\000\006extend\376\003\000\000\002\376\001\000\000\007feature\376\003\000\000\002\376\001\000\000\012no-feature"
"\376\003\000\000\002\376\001\000\000\020emit-inline-file\376\003\000\000\002\376\001\000\000\023consult-inline-file\376\003\000\000\002\376\001\000\000\017emit-types-file"
"\376\003\000\000\002\376\001\000\000\022consult-types-file\376\003\000\000\002\376\001\000\000\023emit-import-library\376\377\016"));
lf[16]=C_h_intern(&lf[16],47, C_text("chicken.compiler.core#default-standard-bindings"));
lf[17]=C_h_intern(&lf[17],47, C_text("chicken.compiler.core#default-extended-bindings"));
lf[18]=C_h_intern(&lf[18],39, C_text("chicken.compiler.core#internal-bindings"));
lf[19]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\010\003sysslot\376\003\000\000\002\376\001\000\000\013\003syssetslot\376\003\000\000\002\376\001\000\000\015\003sysblock-ref\376\003\000\000\002\376\001\000\000\016\003sysbloc"
"k-set!\376\003\000\000\002\376\001\000\000\042\003syscall-with-current-continuation\376\003\000\000\002\376\001\000\000\010\003syssize\376\003\000\000\002\376\001\000\000\010\003s"
"ysbyte\376\003\000\000\002\376\001\000\000\013\003syssetbyte\376\003\000\000\002\376\001\000\000\014\003syspointer\077\376\003\000\000\002\376\001\000\000\026\003sysgeneric-structure"
"\077\376\003\000\000\002\376\001\000\000\016\003sysstructure\077\376\003\000\000\002\376\001\000\000\023\003syscheck-structure\376\003\000\000\002\376\001\000\000\017\003syscheck-exact\376"
"\003\000\000\002\376\001\000\000\020\003syscheck-number\376\003\000\000\002\376\001\000\000\016\003syscheck-list\376\003\000\000\002\376\001\000\000\016\003syscheck-pair\376\003\000\000\002\376\001"
"\000\000\020\003syscheck-string\376\003\000\000\002\376\001\000\000\020\003syscheck-symbol\376\003\000\000\002\376\001\000\000\021\003syscheck-boolean\376\003\000\000\002\376\001\000"
"\000\022\003syscheck-locative\376\003\000\000\002\376\001\000\000\016\003syscheck-port\376\003\000\000\002\376\001\000\000\024\003syscheck-input-port\376\003\000\000\002\376"
"\001\000\000\025\003syscheck-output-port\376\003\000\000\002\376\001\000\000\023\003syscheck-open-port\376\003\000\000\002\376\001\000\000\016\003syscheck-char\376\003"
"\000\000\002\376\001\000\000\020\003syscheck-vector\376\003\000\000\002\376\001\000\000\025\003syscheck-byte-vector\376\003\000\000\002\376\001\000\000\010\003syslist\376\003\000\000\002\376\001"
"\000\000\010\003syscons\376\003\000\000\002\376\001\000\000\024\003syscall-with-values\376\003\000\000\002\376\001\000\000\033\003sysflonum-in-fixnum-range\077\376\003"
"\000\000\002\376\001\000\000\016\003sysimmediate\077\376\003\000\000\002\376\001\000\000\022\003syscontext-switch\376\003\000\000\002\376\001\000\000\022\003sysmake-structure\376\003"
"\000\000\002\376\001\000\000\011\003sysapply\376\003\000\000\002\376\001\000\000\020\003sysapply-values\376\003\000\000\002\376\001\000\000\047chicken.continuation#contin"
"uation-graft\376\003\000\000\002\376\001\000\000\017\003sysbytevector\077\376\003\000\000\002\376\001\000\000\017\003sysmake-vector\376\003\000\000\002\376\001\000\000\012\003syssett"
"er\376\003\000\000\002\376\001\000\000\007\003syscar\376\003\000\000\002\376\001\000\000\007\003syscdr\376\003\000\000\002\376\001\000\000\011\003syspair\077\376\003\000\000\002\376\001\000\000\007\003syseq\077\376\003\000\000\002\376\001\000"
"\000\011\003syslist\077\376\003\000\000\002\376\001\000\000\013\003sysvector\077\376\003\000\000\002\376\001\000\000\010\003syseqv\077\376\003\000\000\002\376\001\000\000\017\003sysget-keyword\376\003\000\000\002"
"\376\001\000\000\031\003sysforeign-char-argument\376\003\000\000\002\376\001\000\000\033\003sysforeign-fixnum-argument\376\003\000\000\002\376\001\000\000\033\003sy"
"sforeign-flonum-argument\376\003\000\000\002\376\001\000\000\032\003sysforeign-block-argument\376\003\000\000\002\376\001\000\000#\003sysforeig"
"n-struct-wrapper-argument\376\003\000\000\002\376\001\000\000\033\003sysforeign-string-argument\376\003\000\000\002\376\001\000\000\034\003sysfore"
"ign-pointer-argument\376\003\000\000\002\376\001\000\000\010\003sysvoid\376\003\000\000\002\376\001\000\000#\003sysforeign-ranged-integer-argum"
"ent\376\003\000\000\002\376\001\000\000,\003sysforeign-unsigned-ranged-integer-argument\376\003\000\000\002\376\001\000\000\017\003syspeek-fixn"
"um\376\003\000\000\002\376\001\000\000\014\003syssetislot\376\003\000\000\002\376\001\000\000\020\003syspoke-integer\376\003\000\000\002\376\001\000\000\016\003syspermanent\077\376\003\000\000\002\376"
"\001\000\000\012\003sysvalues\376\003\000\000\002\376\001\000\000\017\003syspoke-double\376\003\000\000\002\376\001\000\000\021\003sysintern-symbol\376\003\000\000\002\376\001\000\000\021\003sys"
"null-pointer\077\376\003\000\000\002\376\001\000\000\015\003syspeek-byte\376\003\000\000\002\376\001\000\000\020\003sysfile-exists\077\376\003\000\000\002\376\001\000\000\023\003syssubs"
"tring-index\376\003\000\000\002\376\001\000\000\026\003syssubstring-index-ci\376\003\000\000\002\376\001\000\000\007\003syslcm\376\003\000\000\002\376\001\000\000\007\003sysgcd\376\377\016"
));
lf[20]=C_h_intern(&lf[20],34, C_text("chicken.compiler.support#make-node"));
lf[21]=C_h_intern(&lf[21],9, C_text("\004corecall"));
lf[22]=C_h_intern(&lf[22],6, C_text("fixnum"));
lf[23]=C_h_intern(&lf[23],36, C_text("chicken.compiler.support#number-type"));
lf[24]=C_h_intern(&lf[24],31, C_text("chicken.compiler.support#unsafe"));
lf[25]=C_h_intern(&lf[25],11, C_text("\004coreinline"));
lf[26]=C_h_intern(&lf[26],20, C_text("\004coreinline_allocate"));
lf[27]=C_h_intern(&lf[27],30, C_text("chicken.compiler.support#qnode"));
lf[28]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\005C_eqp\376\377\016"));
lf[29]=C_h_intern(&lf[29],5, C_text("quote"));
lf[30]=C_h_intern(&lf[30],35, C_text("chicken.compiler.support#immediate\077"));
lf[31]=C_h_intern(&lf[31],40, C_text("chicken.compiler.support#node-parameters"));
lf[32]=C_h_intern(&lf[32],35, C_text("chicken.compiler.support#node-class"));
lf[33]=C_h_intern(&lf[33],13, C_text("\004corevariable"));
lf[34]=C_h_intern(&lf[34],3, C_text("map"));
lf[35]=C_h_intern(&lf[35],13, C_text("scheme#append"));
lf[36]=C_h_intern(&lf[36],20, C_text("chicken.base#butlast"));
lf[37]=C_h_intern(&lf[37],9, C_text("\004coreproc"));
lf[38]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\007C_apply\376\003\000\000\002\376\377\006\001\376\377\016"));
lf[39]=C_h_intern(&lf[39],6, C_text("values"));
lf[40]=C_h_intern(&lf[40],10, C_text("\003sysvalues"));
lf[41]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\016C_apply_values\376\003\000\000\002\376\377\006\001\376\377\016"));
lf[42]=C_h_intern(&lf[42],35, C_text("chicken.compiler.support#intrinsic\077"));
lf[43]=C_h_intern(&lf[43],37, C_text("scheme#call-with-current-continuation"));
lf[44]=C_h_intern(&lf[44],34, C_text("chicken.compiler.optimizer#rewrite"));
lf[45]=C_h_intern(&lf[45],11, C_text("\004corelambda"));
lf[46]=C_h_intern(&lf[46],3, C_text("let"));
lf[47]=C_h_intern(&lf[47],32, C_text("chicken.compiler.support#varnode"));
lf[48]=C_h_intern(&lf[48],19, C_text("chicken.base#gensym"));
lf[49]=C_h_intern(&lf[49],2, C_text("f_"));
lf[50]=C_h_intern(&lf[50],34, C_text("chicken.compiler.support#debugging"));
lf[51]=C_h_intern(&lf[51],1, C_text("o"));
lf[52]=C_decode_literal(C_heaptop,C_text("\376B\000\000)removing single-valued `call-with-values\047"));
lf[53]=C_h_intern(&lf[53],1, C_text("r"));
lf[54]=C_h_intern(&lf[54],31, C_text("chicken.compiler.support#db-get"));
lf[55]=C_h_intern(&lf[55],5, C_text("value"));
lf[56]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_a_i_vector"));
lf[57]=C_h_intern(&lf[57],14, C_text("\004coreundefined"));
lf[58]=C_h_intern(&lf[58],16, C_text("inline-transient"));
lf[59]=C_h_intern(&lf[59],8, C_text("assigned"));
lf[60]=C_h_intern(&lf[60],10, C_text("references"));
lf[61]=C_h_intern(&lf[61],25, C_text("\003sysdecompose-lambda-list"));
lf[62]=C_h_intern(&lf[62],15, C_text("\003sysget-keyword"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_i_get_keyword"));
lf[64]=C_h_intern(&lf[64],27, C_text("chicken.keyword#get-keyword"));
lf[65]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_i_get_keyword"));
lf[66]=C_h_intern(&lf[66],33, C_text("chicken.string#substring-index-ci"));
lf[67]=C_h_intern(&lf[67],22, C_text("\003syssubstring-index-ci"));
lf[68]=C_h_intern(&lf[68],30, C_text("chicken.string#substring-index"));
lf[69]=C_h_intern(&lf[69],19, C_text("\003syssubstring-index"));
lf[70]=C_h_intern(&lf[70],29, C_text("chicken.string#substring-ci=\077"));
lf[71]=C_h_intern(&lf[71],18, C_text("\003syssubstring-ci=\077"));
lf[72]=C_h_intern(&lf[72],26, C_text("chicken.string#substring=\077"));
lf[73]=C_h_intern(&lf[73],15, C_text("\003syssubstring=\077"));
lf[74]=C_h_intern(&lf[74],17, C_text("scheme#write-char"));
lf[75]=C_h_intern(&lf[75],19, C_text("\003syswrite-char/port"));
lf[76]=C_h_intern(&lf[76],19, C_text("\003sysstandard-output"));
lf[77]=C_h_intern(&lf[77],16, C_text("scheme#read-char"));
lf[78]=C_h_intern(&lf[78],18, C_text("\003sysread-char/port"));
lf[79]=C_h_intern(&lf[79],18, C_text("\003sysstandard-input"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_fixnum_length"));
lf[81]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_integer_length"));
lf[82]=C_h_intern(&lf[82],30, C_text("chicken.bitwise#integer-length"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_u_i_bit_to_bool"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_i_bit_to_bool"));
lf[85]=C_h_intern(&lf[85],28, C_text("chicken.bitwise#bit->boolean"));
lf[86]=C_h_intern(&lf[86],31, C_text("chicken.base#current-error-port"));
lf[87]=C_h_intern(&lf[87],18, C_text("\003sysstandard-error"));
lf[88]=C_h_intern(&lf[88],26, C_text("scheme#current-output-port"));
lf[89]=C_h_intern(&lf[89],25, C_text("scheme#current-input-port"));
lf[90]=C_h_intern(&lf[90],8, C_text("\003sysvoid"));
lf[91]=C_h_intern(&lf[91],19, C_text("\003sysundefined-value"));
lf[92]=C_h_intern(&lf[92],17, C_text("chicken.base#void"));
lf[93]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012scheme#car\376\001\000\000\017scheme#set-car!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012scheme#cdr\376\001\000\000\017schem"
"e#set-cdr!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021scheme#string-ref\376\001\000\000\022scheme#string-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021"
"scheme#vector-ref\376\001\000\000\022scheme#vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023srfi-4#u8vector-ref\376\001\000\000\024s"
"rfi-4#u8vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023srfi-4#s8vector-ref\376\001\000\000\024srfi-4#s8vector-set!\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\024srfi-4#u16vector-ref\376\001\000\000\025srfi-4#u16vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024srfi-4"
"#s16vector-ref\376\001\000\000\025srfi-4#s16vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024srfi-4#u32vector-ref\376\001\000\000\025"
"srfi-4#u32vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024srfi-4#s32vector-ref\376\001\000\000\025srfi-4#s32vector-se"
"t!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024srfi-4#u64vector-ref\376\001\000\000\025srfi-4#u64vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024sr"
"fi-4#s64vector-ref\376\001\000\000\025srfi-4#s64vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024srfi-4#f32vector-ref\376"
"\001\000\000\025srfi-4#f32vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024srfi-4#f64vector-ref\376\001\000\000\025srfi-4#f64vecto"
"r-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\035chicken.locative#locative-ref\376\001\000\000\036chicken.locative#locative"
"-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\035chicken.memory#pointer-u8-ref\376\001\000\000\036chicken.memory#pointer-u8-"
"set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\035chicken.memory#pointer-s8-ref\376\001\000\000\036chicken.memory#pointer-s8-s"
"et!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036chicken.memory#pointer-u16-ref\376\001\000\000\037chicken.memory#pointer-u16-"
"set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036chicken.memory#pointer-s16-ref\376\001\000\000\037chicken.memory#pointer-s16"
"-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036chicken.memory#pointer-u32-ref\376\001\000\000\037chicken.memory#pointer-u3"
"2-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036chicken.memory#pointer-s32-ref\376\001\000\000\037chicken.memory#pointer-s"
"32-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036chicken.memory#pointer-f32-ref\376\001\000\000\037chicken.memory#pointer-"
"f32-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036chicken.memory#pointer-f64-ref\376\001\000\000\037chicken.memory#pointer"
"-f64-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\047chicken.memory.representation#block-ref\376\001\000\000(chicken.memo"
"ry.representation#block-set!\376\377\016"));
lf[94]=C_h_intern(&lf[94],10, C_text("\003syssetter"));
lf[95]=C_h_intern(&lf[95],20, C_text("chicken.base#call/cc"));
lf[96]=C_h_intern(&lf[96],15, C_text("\003sysmake-vector"));
lf[97]=C_h_intern(&lf[97],18, C_text("scheme#make-vector"));
lf[98]=C_h_intern(&lf[98],29, C_text("srfi-4#f64vector->blob/shared"));
lf[99]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[100]=C_h_intern(&lf[100],29, C_text("srfi-4#f32vector->blob/shared"));
lf[101]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[102]=C_h_intern(&lf[102],29, C_text("srfi-4#s64vector->blob/shared"));
lf[103]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[104]=C_h_intern(&lf[104],29, C_text("srfi-4#u64vector->blob/shared"));
lf[105]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[106]=C_h_intern(&lf[106],29, C_text("srfi-4#s32vector->blob/shared"));
lf[107]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[108]=C_h_intern(&lf[108],29, C_text("srfi-4#u32vector->blob/shared"));
lf[109]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[110]=C_h_intern(&lf[110],29, C_text("srfi-4#s16vector->blob/shared"));
lf[111]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[112]=C_h_intern(&lf[112],29, C_text("srfi-4#u16vector->blob/shared"));
lf[113]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[114]=C_h_intern(&lf[114],28, C_text("srfi-4#s8vector->blob/shared"));
lf[115]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[116]=C_h_intern(&lf[116],28, C_text("srfi-4#u8vector->blob/shared"));
lf[117]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[118]=C_h_intern(&lf[118],18, C_text("chicken.base#atom\077"));
lf[119]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_not_pair_p"));
lf[120]=C_h_intern(&lf[120],23, C_text("srfi-4#f64vector-length"));
lf[121]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_64vector_length"));
lf[122]=C_h_intern(&lf[122],23, C_text("srfi-4#f32vector-length"));
lf[123]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_32vector_length"));
lf[124]=C_h_intern(&lf[124],23, C_text("srfi-4#s64vector-length"));
lf[125]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_64vector_length"));
lf[126]=C_h_intern(&lf[126],23, C_text("srfi-4#u64vector-length"));
lf[127]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_64vector_length"));
lf[128]=C_h_intern(&lf[128],23, C_text("srfi-4#s32vector-length"));
lf[129]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_32vector_length"));
lf[130]=C_h_intern(&lf[130],23, C_text("srfi-4#u32vector-length"));
lf[131]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_32vector_length"));
lf[132]=C_h_intern(&lf[132],23, C_text("srfi-4#s16vector-length"));
lf[133]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_16vector_length"));
lf[134]=C_h_intern(&lf[134],23, C_text("srfi-4#u16vector-length"));
lf[135]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_16vector_length"));
lf[136]=C_h_intern(&lf[136],22, C_text("srfi-4#s8vector-length"));
lf[137]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_u_i_8vector_length"));
lf[138]=C_h_intern(&lf[138],22, C_text("srfi-4#u8vector-length"));
lf[139]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_u_i_8vector_length"));
lf[140]=C_h_intern(&lf[140],21, C_text("srfi-4#f64vector-set!"));
lf[141]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_f64vector_set"));
lf[142]=C_h_intern(&lf[142],21, C_text("srfi-4#f32vector-set!"));
lf[143]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_f32vector_set"));
lf[144]=C_h_intern(&lf[144],21, C_text("srfi-4#s64vector-set!"));
lf[145]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_s32vector_set"));
lf[146]=C_h_intern(&lf[146],21, C_text("srfi-4#u64vector-set!"));
lf[147]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_u32vector_set"));
lf[148]=C_h_intern(&lf[148],21, C_text("srfi-4#s32vector-set!"));
lf[149]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_s32vector_set"));
lf[150]=C_h_intern(&lf[150],21, C_text("srfi-4#u32vector-set!"));
lf[151]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_u32vector_set"));
lf[152]=C_h_intern(&lf[152],21, C_text("srfi-4#s16vector-set!"));
lf[153]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_s16vector_set"));
lf[154]=C_h_intern(&lf[154],21, C_text("srfi-4#u16vector-set!"));
lf[155]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_u16vector_set"));
lf[156]=C_h_intern(&lf[156],20, C_text("srfi-4#s8vector-set!"));
lf[157]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_u_i_s8vector_set"));
lf[158]=C_h_intern(&lf[158],20, C_text("srfi-4#u8vector-set!"));
lf[159]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_u_i_u8vector_set"));
lf[160]=C_h_intern(&lf[160],20, C_text("srfi-4#f64vector-ref"));
lf[161]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_a_u_i_f64vector_ref"));
lf[162]=C_h_intern(&lf[162],20, C_text("srfi-4#f32vector-ref"));
lf[163]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_a_u_i_f32vector_ref"));
lf[164]=C_h_intern(&lf[164],20, C_text("srfi-4#s16vector-ref"));
lf[165]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_s16vector_ref"));
lf[166]=C_h_intern(&lf[166],20, C_text("srfi-4#u16vector-ref"));
lf[167]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_u16vector_ref"));
lf[168]=C_h_intern(&lf[168],19, C_text("srfi-4#s8vector-ref"));
lf[169]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_u_i_s8vector_ref"));
lf[170]=C_h_intern(&lf[170],19, C_text("srfi-4#u8vector-ref"));
lf[171]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_u_i_u8vector_ref"));
lf[172]=C_h_intern(&lf[172],22, C_text("chicken.blob#blob-size"));
lf[173]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_block_size"));
lf[174]=C_h_intern(&lf[174],44, C_text("\003sysforeign-unsigned-ranged-integer-argument"));
lf[175]=C_decode_literal(C_heaptop,C_text("\376B\000\000-C_i_foreign_unsigned_ranged_integer_argumentp"));
lf[176]=C_h_intern(&lf[176],35, C_text("\003sysforeign-ranged-integer-argument"));
lf[177]=C_decode_literal(C_heaptop,C_text("\376B\000\000$C_i_foreign_ranged_integer_argumentp"));
lf[178]=C_h_intern(&lf[178],28, C_text("\003sysforeign-pointer-argument"));
lf[179]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035C_i_foreign_pointer_argumentp"));
lf[180]=C_h_intern(&lf[180],27, C_text("\003sysforeign-string-argument"));
lf[181]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034C_i_foreign_string_argumentp"));
lf[182]=C_h_intern(&lf[182],35, C_text("\003sysforeign-struct-wrapper-argument"));
lf[183]=C_decode_literal(C_heaptop,C_text("\376B\000\000$C_i_foreign_struct_wrapper_argumentp"));
lf[184]=C_h_intern(&lf[184],26, C_text("\003sysforeign-block-argument"));
lf[185]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033C_i_foreign_block_argumentp"));
lf[186]=C_h_intern(&lf[186],27, C_text("\003sysforeign-flonum-argument"));
lf[187]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034C_i_foreign_flonum_argumentp"));
lf[188]=C_h_intern(&lf[188],25, C_text("\003sysforeign-char-argument"));
lf[189]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032C_i_foreign_char_argumentp"));
lf[190]=C_h_intern(&lf[190],27, C_text("\003sysforeign-fixnum-argument"));
lf[191]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034C_i_foreign_fixnum_argumentp"));
lf[192]=C_h_intern(&lf[192],30, C_text("chicken.locative#locative-set!"));
lf[193]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_i_locative_set"));
lf[194]=C_h_intern(&lf[194],33, C_text("chicken.locative#locative->object"));
lf[195]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026C_i_locative_to_object"));
lf[196]=C_h_intern(&lf[196],14, C_text("\003sysimmediate\077"));
lf[197]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_immp"));
lf[198]=C_h_intern(&lf[198],17, C_text("\003sysnull-pointer\077"));
lf[199]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_null_pointerp"));
lf[200]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_null_pointerp"));
lf[201]=C_h_intern(&lf[201],14, C_text("\003syspermanent\077"));
lf[202]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_permanentp"));
lf[203]=C_h_intern(&lf[203],18, C_text("scheme#string-ci=\077"));
lf[204]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_i_string_ci_equal_p"));
lf[205]=C_h_intern(&lf[205],15, C_text("scheme#string=\077"));
lf[206]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_string_equal_p"));
lf[207]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_u_i_string_equal_p"));
lf[208]=C_h_intern(&lf[208],15, C_text("\003syspoke-double"));
lf[209]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_poke_double"));
lf[210]=C_h_intern(&lf[210],16, C_text("\003syspoke-integer"));
lf[211]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_poke_integer"));
lf[212]=C_h_intern(&lf[212],12, C_text("\003syssetislot"));
lf[213]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_set_i_slot"));
lf[214]=C_h_intern(&lf[214],30, C_text("chicken.memory#pointer->object"));
lf[215]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_pointer_to_object"));
lf[216]=C_h_intern(&lf[216],13, C_text("\003syspeek-byte"));
lf[217]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_peek_byte"));
lf[218]=C_h_intern(&lf[218],15, C_text("\003syspeek-fixnum"));
lf[219]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_peek_fixnum"));
lf[220]=C_h_intern(&lf[220],11, C_text("\003syssetbyte"));
lf[221]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_setbyte"));
lf[222]=C_h_intern(&lf[222],8, C_text("\003sysbyte"));
lf[223]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_subbyte"));
lf[224]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\033C_i_fixnum_arithmetic_shift\376\377\016"));
lf[225]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030C_s_a_i_arithmetic_shift"));
lf[226]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\024C_fixnum_shift_right\376\377\016"));
lf[227]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\023C_fixnum_shift_left\376\377\016"));
lf[228]=C_h_intern(&lf[228],36, C_text("chicken.compiler.support#big-fixnum\077"));
lf[229]=C_h_intern(&lf[229],32, C_text("chicken.bitwise#arithmetic-shift"));
lf[230]=C_h_intern(&lf[230],20, C_text("chicken.fixnum#fxrem"));
lf[231]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034C_i_fixnum_remainder_checked"));
lf[232]=C_h_intern(&lf[232],20, C_text("chicken.fixnum#fxmod"));
lf[233]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_fixnum_modulo"));
lf[234]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_u_fixnum_modulo"));
lf[235]=C_h_intern(&lf[235],18, C_text("chicken.fixnum#fx/"));
lf[236]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_fixnum_divide"));
lf[237]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_u_fixnum_divide"));
lf[238]=C_h_intern(&lf[238],20, C_text("chicken.fixnum#fxior"));
lf[239]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_fixnum_or"));
lf[240]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_u_fixnum_or"));
lf[241]=C_h_intern(&lf[241],20, C_text("chicken.fixnum#fxand"));
lf[242]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_fixnum_and"));
lf[243]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_u_fixnum_and"));
lf[244]=C_h_intern(&lf[244],20, C_text("chicken.fixnum#fxxor"));
lf[245]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_fixnum_xor"));
lf[246]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_fixnum_xor"));
lf[247]=C_h_intern(&lf[247],20, C_text("chicken.fixnum#fxneg"));
lf[248]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_fixnum_negate"));
lf[249]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_u_fixnum_negate"));
lf[250]=C_h_intern(&lf[250],20, C_text("chicken.fixnum#fxshr"));
lf[251]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_fixnum_shift_right"));
lf[252]=C_h_intern(&lf[252],20, C_text("chicken.fixnum#fxshl"));
lf[253]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_fixnum_shift_left"));
lf[254]=C_h_intern(&lf[254],18, C_text("chicken.fixnum#fx-"));
lf[255]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_fixnum_difference"));
lf[256]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_fixnum_difference"));
lf[257]=C_h_intern(&lf[257],18, C_text("chicken.fixnum#fx+"));
lf[258]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_fixnum_plus"));
lf[259]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_u_fixnum_plus"));
lf[260]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\016C_i_set_i_slot\376\377\016"));
lf[261]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\013C_i_setslot\376\377\016"));
lf[262]=C_h_intern(&lf[262],11, C_text("\003syssetslot"));
lf[263]=C_h_intern(&lf[263],30, C_text("chicken.memory#pointer-f64-ref"));
lf[264]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027C_a_u_i_pointer_f64_ref"));
lf[265]=C_h_intern(&lf[265],30, C_text("chicken.memory#pointer-f32-ref"));
lf[266]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027C_a_u_i_pointer_f32_ref"));
lf[267]=C_h_intern(&lf[267],30, C_text("chicken.memory#pointer-s32-ref"));
lf[268]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027C_a_u_i_pointer_s32_ref"));
lf[269]=C_h_intern(&lf[269],30, C_text("chicken.memory#pointer-u32-ref"));
lf[270]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027C_a_u_i_pointer_u32_ref"));
lf[271]=C_h_intern(&lf[271],31, C_text("chicken.memory#pointer-f64-set!"));
lf[272]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_pointer_f64_set"));
lf[273]=C_h_intern(&lf[273],31, C_text("chicken.memory#pointer-f32-set!"));
lf[274]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_pointer_f32_set"));
lf[275]=C_h_intern(&lf[275],31, C_text("chicken.memory#pointer-s32-set!"));
lf[276]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_pointer_s32_set"));
lf[277]=C_h_intern(&lf[277],31, C_text("chicken.memory#pointer-u32-set!"));
lf[278]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_pointer_u32_set"));
lf[279]=C_h_intern(&lf[279],31, C_text("chicken.memory#pointer-s16-set!"));
lf[280]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_pointer_s16_set"));
lf[281]=C_h_intern(&lf[281],31, C_text("chicken.memory#pointer-u16-set!"));
lf[282]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_pointer_u16_set"));
lf[283]=C_h_intern(&lf[283],30, C_text("chicken.memory#pointer-s8-set!"));
lf[284]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_u_i_pointer_s8_set"));
lf[285]=C_h_intern(&lf[285],30, C_text("chicken.memory#pointer-u8-set!"));
lf[286]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_u_i_pointer_u8_set"));
lf[287]=C_h_intern(&lf[287],30, C_text("chicken.memory#pointer-s16-ref"));
lf[288]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_pointer_s16_ref"));
lf[289]=C_h_intern(&lf[289],30, C_text("chicken.memory#pointer-u16-ref"));
lf[290]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_pointer_u16_ref"));
lf[291]=C_h_intern(&lf[291],29, C_text("chicken.memory#pointer-s8-ref"));
lf[292]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_u_i_pointer_s8_ref"));
lf[293]=C_h_intern(&lf[293],29, C_text("chicken.memory#pointer-u8-ref"));
lf[294]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_u_i_pointer_u8_ref"));
lf[295]=C_h_intern(&lf[295],29, C_text("chicken.locative#locative-ref"));
lf[296]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_a_i_locative_ref"));
lf[297]=C_h_intern(&lf[297],23, C_text("chicken.memory#pointer+"));
lf[298]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_a_u_i_pointer_inc"));
lf[299]=C_h_intern(&lf[299],31, C_text("chicken.memory#pointer->address"));
lf[300]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030C_a_i_pointer_to_address"));
lf[301]=C_h_intern(&lf[301],31, C_text("chicken.memory#address->pointer"));
lf[302]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030C_a_i_address_to_pointer"));
lf[303]=C_h_intern(&lf[303],13, C_text("scheme#string"));
lf[304]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_a_i_string"));
lf[305]=C_h_intern(&lf[305],18, C_text("\003sysmake-structure"));
lf[306]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_a_i_record"));
lf[307]=C_h_intern(&lf[307],10, C_text("\003sysvector"));
lf[308]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_a_i_vector"));
lf[309]=C_h_intern(&lf[309],13, C_text("scheme#vector"));
lf[310]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_a_i_vector"));
lf[311]=C_h_intern(&lf[311],8, C_text("\003syslist"));
lf[312]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_a_i_list"));
lf[313]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\001\000\000\000\000\376\003\000\000\002\376\377\001\000\000\000\003\376\377\016"));
lf[314]=C_h_intern(&lf[314],11, C_text("scheme#list"));
lf[315]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_a_i_list"));
lf[316]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\001\000\000\000\000\376\003\000\000\002\376\377\001\000\000\000\003\376\377\016"));
lf[317]=C_h_intern(&lf[317],8, C_text("\003syscons"));
lf[318]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_a_i_cons"));
lf[319]=C_h_intern(&lf[319],11, C_text("scheme#cons"));
lf[320]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_a_i_cons"));
lf[321]=C_h_intern(&lf[321],22, C_text("chicken.flonum#fpround"));
lf[322]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_a_i_flonum_floor"));
lf[323]=C_h_intern(&lf[323],24, C_text("chicken.flonum#fpceiling"));
lf[324]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_a_i_flonum_ceiling"));
lf[325]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_a_i_flonum_round"));
lf[326]=C_h_intern(&lf[326],25, C_text("chicken.flonum#fptruncate"));
lf[327]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_a_i_flonum_truncate"));
lf[328]=C_h_intern(&lf[328],20, C_text("chicken.flonum#fpabs"));
lf[329]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_a_i_flonum_abs"));
lf[330]=C_h_intern(&lf[330],21, C_text("chicken.flonum#fpsqrt"));
lf[331]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_a_i_flonum_sqrt"));
lf[332]=C_h_intern(&lf[332],20, C_text("chicken.flonum#fplog"));
lf[333]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_a_i_flonum_log"));
lf[334]=C_h_intern(&lf[334],21, C_text("chicken.flonum#fpexpt"));
lf[335]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_a_i_flonum_expt"));
lf[336]=C_h_intern(&lf[336],20, C_text("chicken.flonum#fpexp"));
lf[337]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_a_i_flonum_exp"));
lf[338]=C_h_intern(&lf[338],22, C_text("chicken.flonum#fpatan2"));
lf[339]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_a_i_flonum_atan2"));
lf[340]=C_h_intern(&lf[340],21, C_text("chicken.flonum#fpatan"));
lf[341]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_a_i_flonum_atan"));
lf[342]=C_h_intern(&lf[342],21, C_text("chicken.flonum#fpacos"));
lf[343]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_a_i_flonum_acos"));
lf[344]=C_h_intern(&lf[344],21, C_text("chicken.flonum#fpasin"));
lf[345]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_a_i_flonum_asin"));
lf[346]=C_h_intern(&lf[346],20, C_text("chicken.flonum#fptan"));
lf[347]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_a_i_flonum_tan"));
lf[348]=C_h_intern(&lf[348],20, C_text("chicken.flonum#fpcos"));
lf[349]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_a_i_flonum_cos"));
lf[350]=C_h_intern(&lf[350],20, C_text("chicken.flonum#fpsin"));
lf[351]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_a_i_flonum_sin"));
lf[352]=C_h_intern(&lf[352],15, C_text("scheme#truncate"));
lf[353]=C_h_intern(&lf[353],6, C_text("flonum"));
lf[354]=C_h_intern(&lf[354],14, C_text("scheme#ceiling"));
lf[355]=C_h_intern(&lf[355],12, C_text("scheme#floor"));
lf[356]=C_h_intern(&lf[356],22, C_text("chicken.flonum#fpfloor"));
lf[357]=C_h_intern(&lf[357],22, C_text("chicken.fixnum#fxeven\077"));
lf[358]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_i_fixnumevenp"));
lf[359]=C_h_intern(&lf[359],21, C_text("chicken.fixnum#fxodd\077"));
lf[360]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_fixnumoddp"));
lf[361]=C_h_intern(&lf[361],11, C_text("scheme#odd\077"));
lf[362]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_oddp"));
lf[363]=C_h_intern(&lf[363],12, C_text("scheme#even\077"));
lf[364]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_evenp"));
lf[365]=C_h_intern(&lf[365],16, C_text("scheme#remainder"));
lf[366]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_fixnum_modulo"));
lf[367]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_fixnum_modulo"));
lf[368]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_fixnumoddp"));
lf[369]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_fixnumoddp"));
lf[370]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_i_fixnumevenp"));
lf[371]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_i_fixnumevenp"));
lf[372]=C_h_intern(&lf[372],15, C_text("\003sysmake-symbol"));
lf[373]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_make_symbol"));
lf[374]=C_h_intern(&lf[374],17, C_text("\003sysintern-symbol"));
lf[375]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_string_to_symbol"));
lf[376]=C_h_intern(&lf[376],18, C_text("\003syscontext-switch"));
lf[377]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_context_switch"));
lf[378]=C_h_intern(&lf[378],31, C_text("chicken.platform#return-to-host"));
lf[379]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_return_to_host"));
lf[380]=C_h_intern(&lf[380],23, C_text("\003sysensure-heap-reserve"));
lf[381]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_ensure_heap_reserve"));
lf[382]=C_h_intern(&lf[382],19, C_text("\003sysallocate-vector"));
lf[383]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_allocate_vector"));
lf[384]=C_h_intern(&lf[384],34, C_text("\003syscall-with-current-continuation"));
lf[385]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_call_cc"));
lf[386]=C_h_intern(&lf[386],21, C_text("scheme#number->string"));
lf[387]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\001\000\000\000\001\376\377\001\000\000\000\002"));
lf[388]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_number_to_string"));
lf[389]=C_h_intern(&lf[389],8, C_text("scheme#-"));
lf[390]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\001\000\000\000\001\376\377\006\000"));
lf[391]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007C_minus"));
lf[392]=C_h_intern(&lf[392],8, C_text("scheme#+"));
lf[393]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_plus"));
lf[394]=C_h_intern(&lf[394],8, C_text("scheme#\052"));
lf[395]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007C_times"));
lf[396]=C_h_intern(&lf[396],9, C_text("scheme#<="));
lf[397]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_less_or_equal_p"));
lf[398]=C_h_intern(&lf[398],9, C_text("scheme#>="));
lf[399]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_greater_or_equal_p"));
lf[400]=C_h_intern(&lf[400],8, C_text("scheme#<"));
lf[401]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007C_lessp"));
lf[402]=C_h_intern(&lf[402],8, C_text("scheme#>"));
lf[403]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_greaterp"));
lf[404]=C_h_intern(&lf[404],8, C_text("scheme#="));
lf[405]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_nequalp"));
lf[406]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_less_or_equalp"));
lf[407]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_i_greater_or_equalp"));
lf[408]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_lessp"));
lf[409]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_i_greaterp"));
lf[410]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_nequalp"));
lf[411]=C_h_intern(&lf[411],13, C_text("scheme#modulo"));
lf[412]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_s_a_i_modulo"));
lf[413]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_s_a_i_remainder"));
lf[414]=C_h_intern(&lf[414],15, C_text("scheme#quotient"));
lf[415]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_s_a_i_quotient"));
lf[416]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_s_a_i_times"));
lf[417]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_s_a_i_minus"));
lf[418]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_s_a_i_plus"));
lf[419]=C_h_intern(&lf[419],8, C_text("scheme#/"));
lf[420]=C_h_intern(&lf[420],10, C_text("scheme#lcm"));
lf[421]=C_h_intern(&lf[421],10, C_text("scheme#gcd"));
lf[422]=C_h_intern(&lf[422],21, C_text("chicken.base#identity"));
lf[423]=C_h_intern(&lf[423],7, C_text("\003syslcm"));
lf[424]=C_h_intern(&lf[424],7, C_text("\003sysgcd"));
lf[425]=C_h_intern(&lf[425],18, C_text("scheme#vector-set!"));
lf[426]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_vector_set"));
lf[427]=C_h_intern(&lf[427],19, C_text("scheme#list->string"));
lf[428]=C_h_intern(&lf[428],16, C_text("\003syslist->string"));
lf[429]=C_h_intern(&lf[429],19, C_text("scheme#string->list"));
lf[430]=C_h_intern(&lf[430],16, C_text("\003sysstring->list"));
lf[431]=C_h_intern(&lf[431],20, C_text("scheme#string-append"));
lf[432]=C_h_intern(&lf[432],17, C_text("\003sysstring-append"));
lf[433]=C_h_intern(&lf[433],16, C_text("scheme#substring"));
lf[434]=C_h_intern(&lf[434],13, C_text("\003syssubstring"));
lf[435]=C_h_intern(&lf[435],50, C_text("chicken.memory.representation#make-record-instance"));
lf[436]=C_h_intern(&lf[436],14, C_text("\003sysblock-set!"));
lf[437]=C_h_intern(&lf[437],40, C_text("chicken.memory.representation#block-set!"));
lf[438]=C_h_intern(&lf[438],10, C_text("scheme#map"));
lf[439]=C_h_intern(&lf[439],7, C_text("\003sysmap"));
lf[440]=C_h_intern(&lf[440],15, C_text("scheme#for-each"));
lf[441]=C_h_intern(&lf[441],12, C_text("\003sysfor-each"));
lf[442]=C_h_intern(&lf[442],6, C_text("setter"));
lf[443]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030C_fixnum_less_or_equal_p"));
lf[444]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030C_flonum_less_or_equal_p"));
lf[445]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033C_fixnum_greater_or_equal_p"));
lf[446]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033C_flonum_greater_or_equal_p"));
lf[447]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_fixnum_lessp"));
lf[448]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_flonum_lessp"));
lf[449]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_fixnum_greaterp"));
lf[450]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_flonum_greaterp"));
lf[451]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005C_eqp"));
lf[452]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_i_equalp"));
lf[453]=C_h_intern(&lf[453],14, C_text("\003syscheck-char"));
lf[454]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_i_check_char_2"));
lf[455]=C_h_intern(&lf[455],19, C_text("\003syscheck-structure"));
lf[456]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_i_check_structure_2"));
lf[457]=C_h_intern(&lf[457],16, C_text("\003syscheck-vector"));
lf[458]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_check_vector_2"));
lf[459]=C_h_intern(&lf[459],21, C_text("\003syscheck-byte-vector"));
lf[460]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026C_i_check_bytevector_2"));
lf[461]=C_h_intern(&lf[461],16, C_text("\003syscheck-string"));
lf[462]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_check_string_2"));
lf[463]=C_h_intern(&lf[463],16, C_text("\003syscheck-symbol"));
lf[464]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_check_symbol_2"));
lf[465]=C_h_intern(&lf[465],18, C_text("\003syscheck-locative"));
lf[466]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_i_check_locative_2"));
lf[467]=C_h_intern(&lf[467],17, C_text("\003syscheck-boolean"));
lf[468]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_i_check_boolean_2"));
lf[469]=C_h_intern(&lf[469],14, C_text("\003syscheck-pair"));
lf[470]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_i_check_pair_2"));
lf[471]=C_h_intern(&lf[471],14, C_text("\003syscheck-list"));
lf[472]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_i_check_list_2"));
lf[473]=C_h_intern(&lf[473],16, C_text("\003syscheck-number"));
lf[474]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_check_number_2"));
lf[475]=C_h_intern(&lf[475],16, C_text("\003syscheck-fixnum"));
lf[476]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_check_fixnum_2"));
lf[477]=C_h_intern(&lf[477],15, C_text("\003syscheck-exact"));
lf[478]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_check_exact_2"));
lf[479]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_check_char"));
lf[480]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_i_check_structure"));
lf[481]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_i_check_vector"));
lf[482]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_i_check_bytevector"));
lf[483]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_i_check_string"));
lf[484]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_i_check_symbol"));
lf[485]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_check_locative"));
lf[486]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_check_boolean"));
lf[487]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_check_pair"));
lf[488]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_check_list"));
lf[489]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_i_check_number"));
lf[490]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_i_check_fixnum"));
lf[491]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_i_check_exact"));
lf[492]=C_h_intern(&lf[492],20, C_text("scheme#string-length"));
lf[493]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_string_length"));
lf[494]=C_h_intern(&lf[494],17, C_text("\003sysvector-length"));
lf[495]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_vector_length"));
lf[496]=C_h_intern(&lf[496],20, C_text("scheme#vector-length"));
lf[497]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_vector_length"));
lf[498]=C_h_intern(&lf[498],20, C_text("scheme#integer->char"));
lf[499]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_make_character"));
lf[500]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007C_unfix"));
lf[501]=C_h_intern(&lf[501],20, C_text("scheme#char->integer"));
lf[502]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005C_fix"));
lf[503]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_character_code"));
lf[504]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005C_fix"));
lf[505]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_header_size"));
lf[506]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005C_fix"));
lf[507]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_header_size"));
lf[508]=C_h_intern(&lf[508],16, C_text("scheme#negative\077"));
lf[509]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_i_negativep"));
lf[510]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_flonum_lessp"));
lf[511]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_fixnum_lessp"));
lf[512]=C_h_intern(&lf[512],16, C_text("scheme#positive\077"));
lf[513]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_i_positivep"));
lf[514]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_flonum_greaterp"));
lf[515]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_fixnum_greaterp"));
lf[516]=C_h_intern(&lf[516],12, C_text("scheme#zero\077"));
lf[517]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_zerop"));
lf[518]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_u_i_zerop"));
lf[519]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005C_eqp"));
lf[520]=C_h_intern(&lf[520],20, C_text("chicken.flonum#fpgcd"));
lf[521]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_a_i_flonum_gcd"));
lf[522]=C_h_intern(&lf[522],20, C_text("chicken.flonum#fpneg"));
lf[523]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_a_i_flonum_negate"));
lf[524]=C_h_intern(&lf[524],19, C_text("chicken.flonum#fp/\077"));
lf[525]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035C_a_i_flonum_quotient_checked"));
lf[526]=C_h_intern(&lf[526],18, C_text("chicken.flonum#fp/"));
lf[527]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_a_i_flonum_quotient"));
lf[528]=C_h_intern(&lf[528],18, C_text("chicken.flonum#fp\052"));
lf[529]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_a_i_flonum_times"));
lf[530]=C_h_intern(&lf[530],18, C_text("chicken.flonum#fp-"));
lf[531]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027C_a_i_flonum_difference"));
lf[532]=C_h_intern(&lf[532],18, C_text("chicken.flonum#fp+"));
lf[533]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_a_i_flonum_plus"));
lf[534]=C_h_intern(&lf[534],27, C_text("chicken.bitwise#bitwise-not"));
lf[535]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_s_a_i_bitwise_not"));
lf[536]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_fixnum_not"));
lf[537]=C_h_intern(&lf[537],27, C_text("chicken.bitwise#bitwise-ior"));
lf[538]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_fixnum_or"));
lf[539]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_u_fixnum_or"));
lf[540]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_s_a_i_bitwise_ior"));
lf[541]=C_h_intern(&lf[541],27, C_text("chicken.bitwise#bitwise-xor"));
lf[542]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_fixnum_xor"));
lf[543]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_fixnum_xor"));
lf[544]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_s_a_i_bitwise_xor"));
lf[545]=C_h_intern(&lf[545],27, C_text("chicken.bitwise#bitwise-and"));
lf[546]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_fixnum_and"));
lf[547]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_u_fixnum_and"));
lf[548]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_s_a_i_bitwise_and"));
lf[549]=C_h_intern(&lf[549],10, C_text("scheme#abs"));
lf[550]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_fixnum_abs"));
lf[551]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_fixnum_abs"));
lf[552]=C_h_intern(&lf[552],15, C_text("scheme#set-cdr!"));
lf[553]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_set_cdr"));
lf[554]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_u_i_set_cdr"));
lf[555]=C_h_intern(&lf[555],15, C_text("scheme#set-car!"));
lf[556]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_set_car"));
lf[557]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_u_i_set_car"));
lf[558]=C_h_intern(&lf[558],13, C_text("scheme#member"));
lf[559]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_i_member"));
lf[560]=C_h_intern(&lf[560],12, C_text("scheme#assoc"));
lf[561]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_assoc"));
lf[562]=C_h_intern(&lf[562],11, C_text("scheme#memq"));
lf[563]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_memq"));
lf[564]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_u_i_memq"));
lf[565]=C_h_intern(&lf[565],11, C_text("scheme#assq"));
lf[566]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_assq"));
lf[567]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_u_i_assq"));
lf[568]=C_h_intern(&lf[568],11, C_text("scheme#memv"));
lf[569]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_memv"));
lf[570]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_memq"));
lf[571]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_u_i_memq"));
lf[572]=C_h_intern(&lf[572],11, C_text("scheme#assv"));
lf[573]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_assv"));
lf[574]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_assq"));
lf[575]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_u_i_assq"));
lf[576]=C_h_intern(&lf[576],45, C_text("chicken.memory.representation#number-of-slots"));
lf[577]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_block_size"));
lf[578]=C_h_intern(&lf[578],39, C_text("chicken.memory.representation#block-ref"));
lf[579]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[580]=C_h_intern(&lf[580],15, C_text("\003sysbytevector\077"));
lf[581]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_bytevectorp"));
lf[582]=C_h_intern(&lf[582],14, C_text("\003sysstructure\077"));
lf[583]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_structurep"));
lf[584]=C_h_intern(&lf[584],16, C_text("scheme#list-tail"));
lf[585]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_i_list_tail"));
lf[586]=C_h_intern(&lf[586],20, C_text("scheme#char-downcase"));
lf[587]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_char_downcase"));
lf[588]=C_h_intern(&lf[588],18, C_text("scheme#char-upcase"));
lf[589]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_u_i_char_upcase"));
lf[590]=C_h_intern(&lf[590],23, C_text("scheme#char-lower-case\077"));
lf[591]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026C_u_i_char_lower_casep"));
lf[592]=C_h_intern(&lf[592],23, C_text("scheme#char-upper-case\077"));
lf[593]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026C_u_i_char_upper_casep"));
lf[594]=C_h_intern(&lf[594],23, C_text("scheme#char-whitespace\077"));
lf[595]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026C_u_i_char_whitespacep"));
lf[596]=C_h_intern(&lf[596],23, C_text("scheme#char-alphabetic\077"));
lf[597]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026C_u_i_char_alphabeticp"));
lf[598]=C_h_intern(&lf[598],20, C_text("scheme#char-numeric\077"));
lf[599]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_char_numericp"));
lf[600]=C_h_intern(&lf[600],20, C_text("chicken.fixnum#fxlen"));
lf[601]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_fixnum_length"));
lf[602]=C_h_intern(&lf[602],20, C_text("chicken.fixnum#fxgcd"));
lf[603]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_fixnum_gcd"));
lf[604]=C_h_intern(&lf[604],20, C_text("chicken.flonum#fpmin"));
lf[605]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_flonum_min"));
lf[606]=C_h_intern(&lf[606],20, C_text("chicken.flonum#fpmax"));
lf[607]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_flonum_max"));
lf[608]=C_h_intern(&lf[608],20, C_text("chicken.fixnum#fxmin"));
lf[609]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_fixnum_min"));
lf[610]=C_h_intern(&lf[610],20, C_text("chicken.fixnum#fxmax"));
lf[611]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_fixnum_max"));
lf[612]=C_h_intern(&lf[612],19, C_text("chicken.flonum#fp<="));
lf[613]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030C_flonum_less_or_equal_p"));
lf[614]=C_h_intern(&lf[614],19, C_text("chicken.flonum#fp>="));
lf[615]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033C_flonum_greater_or_equal_p"));
lf[616]=C_h_intern(&lf[616],18, C_text("chicken.flonum#fp<"));
lf[617]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_flonum_lessp"));
lf[618]=C_h_intern(&lf[618],18, C_text("chicken.flonum#fp>"));
lf[619]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_flonum_greaterp"));
lf[620]=C_h_intern(&lf[620],18, C_text("chicken.flonum#fp="));
lf[621]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_flonum_equalp"));
lf[622]=C_h_intern(&lf[622],19, C_text("chicken.fixnum#fx<="));
lf[623]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030C_fixnum_less_or_equal_p"));
lf[624]=C_h_intern(&lf[624],19, C_text("chicken.fixnum#fx>="));
lf[625]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033C_fixnum_greater_or_equal_p"));
lf[626]=C_h_intern(&lf[626],18, C_text("chicken.fixnum#fx<"));
lf[627]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_fixnum_lessp"));
lf[628]=C_h_intern(&lf[628],18, C_text("chicken.fixnum#fx>"));
lf[629]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_fixnum_greaterp"));
lf[630]=C_h_intern(&lf[630],18, C_text("chicken.fixnum#fx="));
lf[631]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005C_eqp"));
lf[632]=C_h_intern(&lf[632],19, C_text("chicken.fixnum#fx/\077"));
lf[633]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_i_o_fixnum_quotient"));
lf[634]=C_h_intern(&lf[634],19, C_text("chicken.fixnum#fx\052\077"));
lf[635]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_o_fixnum_times"));
lf[636]=C_h_intern(&lf[636],19, C_text("chicken.fixnum#fx-\077"));
lf[637]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027C_i_o_fixnum_difference"));
lf[638]=C_h_intern(&lf[638],19, C_text("chicken.fixnum#fx+\077"));
lf[639]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_o_fixnum_plus"));
lf[640]=C_h_intern(&lf[640],18, C_text("chicken.fixnum#fx\052"));
lf[641]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_fixnum_times"));
lf[642]=C_h_intern(&lf[642],20, C_text("chicken.fixnum#fxnot"));
lf[643]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_fixnum_not"));
lf[644]=C_h_intern(&lf[644],8, C_text("\003syssize"));
lf[645]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_block_size"));
lf[646]=C_h_intern(&lf[646],13, C_text("\003sysblock-ref"));
lf[647]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_i_block_ref"));
lf[648]=C_h_intern(&lf[648],8, C_text("\003sysslot"));
lf[649]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[650]=C_h_intern(&lf[650],14, C_text("scheme#char<=\077"));
lf[651]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030C_i_char_less_or_equal_p"));
lf[652]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032C_u_i_char_less_or_equal_p"));
lf[653]=C_h_intern(&lf[653],14, C_text("scheme#char>=\077"));
lf[654]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033C_i_char_greater_or_equal_p"));
lf[655]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035C_u_i_char_greater_or_equal_p"));
lf[656]=C_h_intern(&lf[656],13, C_text("scheme#char<\077"));
lf[657]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_char_lessp"));
lf[658]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_u_i_char_lessp"));
lf[659]=C_h_intern(&lf[659],13, C_text("scheme#char>\077"));
lf[660]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_char_greaterp"));
lf[661]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_char_greaterp"));
lf[662]=C_h_intern(&lf[662],13, C_text("scheme#char=\077"));
lf[663]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_i_char_equalp"));
lf[664]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_u_i_char_equalp"));
lf[665]=C_h_intern(&lf[665],17, C_text("scheme#vector-ref"));
lf[666]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_vector_ref"));
lf[667]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[668]=C_h_intern(&lf[668],18, C_text("scheme#string-set!"));
lf[669]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_string_set"));
lf[670]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_setsubchar"));
lf[671]=C_h_intern(&lf[671],17, C_text("scheme#string-ref"));
lf[672]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_string_ref"));
lf[673]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_subchar"));
lf[674]=C_h_intern(&lf[674],18, C_text("scheme#eof-object\077"));
lf[675]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_eofp"));
lf[676]=C_h_intern(&lf[676],12, C_text("scheme#list\077"));
lf[677]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_listp"));
lf[678]=C_h_intern(&lf[678],15, C_text("scheme#inexact\077"));
lf[679]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_u_i_inexactp"));
lf[680]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_i_inexactp"));
lf[681]=C_h_intern(&lf[681],13, C_text("scheme#exact\077"));
lf[682]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_exactp"));
lf[683]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_i_exactp"));
lf[684]=C_h_intern(&lf[684],22, C_text("\003sysgeneric-structure\077"));
lf[685]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_structurep"));
lf[686]=C_h_intern(&lf[686],8, C_text("pointer\077"));
lf[687]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_safe_pointerp"));
lf[688]=C_h_intern(&lf[688],12, C_text("\003syspointer\077"));
lf[689]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_anypointerp"));
lf[690]=C_h_intern(&lf[690],25, C_text("chicken.flonum#fpinteger\077"));
lf[691]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_u_i_fpintegerp"));
lf[692]=C_h_intern(&lf[692],22, C_text("chicken.base#infinite\077"));
lf[693]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_i_infinitep"));
lf[694]=C_h_intern(&lf[694],20, C_text("chicken.base#finite\077"));
lf[695]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_finitep"));
lf[696]=C_h_intern(&lf[696],17, C_text("chicken.base#nan\077"));
lf[697]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_nanp"));
lf[698]=C_h_intern(&lf[698],20, C_text("chicken.base#ratnum\077"));
lf[699]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_ratnump"));
lf[700]=C_h_intern(&lf[700],21, C_text("chicken.base#cplxnum\077"));
lf[701]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_i_cplxnump"));
lf[702]=C_h_intern(&lf[702],20, C_text("chicken.base#bignum\077"));
lf[703]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_bignump"));
lf[704]=C_h_intern(&lf[704],20, C_text("chicken.base#fixnum\077"));
lf[705]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_fixnump"));
lf[706]=C_h_intern(&lf[706],20, C_text("chicken.base#flonum\077"));
lf[707]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_flonump"));
lf[708]=C_h_intern(&lf[708],27, C_text("chicken.base#exact-integer\077"));
lf[709]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_exact_integerp"));
lf[710]=C_h_intern(&lf[710],15, C_text("scheme#integer\077"));
lf[711]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_i_integerp"));
lf[712]=C_h_intern(&lf[712],12, C_text("scheme#real\077"));
lf[713]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_realp"));
lf[714]=C_h_intern(&lf[714],16, C_text("scheme#rational\077"));
lf[715]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_i_rationalp"));
lf[716]=C_h_intern(&lf[716],15, C_text("scheme#complex\077"));
lf[717]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_numberp"));
lf[718]=C_h_intern(&lf[718],14, C_text("scheme#number\077"));
lf[719]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_numberp"));
lf[720]=C_h_intern(&lf[720],15, C_text("scheme#boolean\077"));
lf[721]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_booleanp"));
lf[722]=C_h_intern(&lf[722],18, C_text("chicken.base#port\077"));
lf[723]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_portp"));
lf[724]=C_h_intern(&lf[724],17, C_text("scheme#procedure\077"));
lf[725]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_i_closurep"));
lf[726]=C_h_intern(&lf[726],9, C_text("\003syspair\077"));
lf[727]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_pairp"));
lf[728]=C_h_intern(&lf[728],12, C_text("scheme#pair\077"));
lf[729]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_pairp"));
lf[730]=C_h_intern(&lf[730],11, C_text("\003sysvector\077"));
lf[731]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_vectorp"));
lf[732]=C_h_intern(&lf[732],14, C_text("scheme#vector\077"));
lf[733]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_vectorp"));
lf[734]=C_h_intern(&lf[734],14, C_text("scheme#symbol\077"));
lf[735]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_symbolp"));
lf[736]=C_h_intern(&lf[736],26, C_text("chicken.locative#locative\077"));
lf[737]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_i_locativep"));
lf[738]=C_h_intern(&lf[738],14, C_text("scheme#string\077"));
lf[739]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_stringp"));
lf[740]=C_h_intern(&lf[740],12, C_text("scheme#char\077"));
lf[741]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007C_charp"));
lf[742]=C_h_intern(&lf[742],10, C_text("scheme#not"));
lf[743]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007C_i_not"));
lf[744]=C_h_intern(&lf[744],13, C_text("scheme#length"));
lf[745]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_i_length"));
lf[746]=C_h_intern(&lf[746],9, C_text("\003sysnull\077"));
lf[747]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_nullp"));
lf[748]=C_h_intern(&lf[748],12, C_text("scheme#null\077"));
lf[749]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_nullp"));
lf[750]=C_h_intern(&lf[750],15, C_text("scheme#list-ref"));
lf[751]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_i_list_ref"));
lf[752]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_u_i_list_ref"));
lf[753]=C_h_intern(&lf[753],8, C_text("\003syseqv\077"));
lf[754]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_eqvp"));
lf[755]=C_h_intern(&lf[755],11, C_text("scheme#eqv\077"));
lf[756]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_eqvp"));
lf[757]=C_h_intern(&lf[757],7, C_text("\003syseq\077"));
lf[758]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005C_eqp"));
lf[759]=C_h_intern(&lf[759],10, C_text("scheme#eq\077"));
lf[760]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005C_eqp"));
lf[761]=C_h_intern(&lf[761],10, C_text("scheme#cdr"));
lf[762]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007C_i_cdr"));
lf[763]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[764]=C_h_intern(&lf[764],13, C_text("scheme#cddddr"));
lf[765]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_i_cddddr"));
lf[766]=C_h_intern(&lf[766],12, C_text("scheme#cdddr"));
lf[767]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_cdddr"));
lf[768]=C_h_intern(&lf[768],11, C_text("scheme#cddr"));
lf[769]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_cddr"));
lf[770]=C_h_intern(&lf[770],11, C_text("scheme#cdar"));
lf[771]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_cdar"));
lf[772]=C_h_intern(&lf[772],11, C_text("scheme#caar"));
lf[773]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_caar"));
lf[774]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cddddr"));
lf[775]=C_h_intern(&lf[775],13, C_text("scheme#cdddar"));
lf[776]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cdddar"));
lf[777]=C_h_intern(&lf[777],13, C_text("scheme#cddadr"));
lf[778]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cddadr"));
lf[779]=C_h_intern(&lf[779],13, C_text("scheme#cddaar"));
lf[780]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cddaar"));
lf[781]=C_h_intern(&lf[781],13, C_text("scheme#cdaddr"));
lf[782]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cdaddr"));
lf[783]=C_h_intern(&lf[783],13, C_text("scheme#cdadar"));
lf[784]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cdadar"));
lf[785]=C_h_intern(&lf[785],13, C_text("scheme#cdaadr"));
lf[786]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cdaadr"));
lf[787]=C_h_intern(&lf[787],13, C_text("scheme#cdaaar"));
lf[788]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cdaaar"));
lf[789]=C_h_intern(&lf[789],13, C_text("scheme#cadddr"));
lf[790]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cadddr"));
lf[791]=C_h_intern(&lf[791],13, C_text("scheme#caddar"));
lf[792]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_caddar"));
lf[793]=C_h_intern(&lf[793],13, C_text("scheme#cadadr"));
lf[794]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cadadr"));
lf[795]=C_h_intern(&lf[795],13, C_text("scheme#cadaar"));
lf[796]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cadaar"));
lf[797]=C_h_intern(&lf[797],13, C_text("scheme#caaddr"));
lf[798]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_caaddr"));
lf[799]=C_h_intern(&lf[799],13, C_text("scheme#caadar"));
lf[800]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_caadar"));
lf[801]=C_h_intern(&lf[801],13, C_text("scheme#caaaar"));
lf[802]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_caaaar"));
lf[803]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_u_i_cdddr"));
lf[804]=C_h_intern(&lf[804],12, C_text("scheme#cddar"));
lf[805]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_u_i_cddar"));
lf[806]=C_h_intern(&lf[806],12, C_text("scheme#cdadr"));
lf[807]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_u_i_cdadr"));
lf[808]=C_h_intern(&lf[808],12, C_text("scheme#cdaar"));
lf[809]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_u_i_cdaar"));
lf[810]=C_h_intern(&lf[810],12, C_text("scheme#caddr"));
lf[811]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_u_i_caddr"));
lf[812]=C_h_intern(&lf[812],12, C_text("scheme#cadar"));
lf[813]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_u_i_cadar"));
lf[814]=C_h_intern(&lf[814],12, C_text("scheme#caaar"));
lf[815]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_u_i_caaar"));
lf[816]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_u_i_cddr"));
lf[817]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_u_i_cdar"));
lf[818]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_u_i_caar"));
lf[819]=C_h_intern(&lf[819],39, C_text("chicken.continuation#continuation-graft"));
lf[820]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_continuation_graft"));
lf[821]=C_h_intern(&lf[821],20, C_text("\003syscall-with-values"));
lf[822]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_call_with_values"));
lf[823]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_u_call_with_values"));
lf[824]=C_h_intern(&lf[824],23, C_text("scheme#call-with-values"));
lf[825]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_call_with_values"));
lf[826]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_u_call_with_values"));
lf[827]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_values"));
lf[828]=C_h_intern(&lf[828],13, C_text("scheme#values"));
lf[829]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_values"));
lf[830]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_i_cadddr"));
lf[831]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cadddr"));
lf[832]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_caddr"));
lf[833]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_u_i_caddr"));
lf[834]=C_h_intern(&lf[834],11, C_text("scheme#cadr"));
lf[835]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_cadr"));
lf[836]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_u_i_cadr"));
lf[837]=C_h_intern(&lf[837],7, C_text("\003syscdr"));
lf[838]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007C_i_cdr"));
lf[839]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_u_i_cdr"));
lf[840]=C_h_intern(&lf[840],7, C_text("\003syscar"));
lf[841]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007C_i_car"));
lf[842]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_u_i_car"));
lf[843]=C_h_intern(&lf[843],10, C_text("scheme#car"));
lf[844]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007C_i_car"));
lf[845]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_u_i_car"));
lf[846]=C_h_intern(&lf[846],9, C_text("\003sysapply"));
lf[847]=C_h_intern(&lf[847],12, C_text("scheme#apply"));
lf[848]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\012C_i_equalp\376\377\016"));
lf[849]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\005C_eqp\376\377\016"));
lf[850]=C_h_intern(&lf[850],13, C_text("scheme#equal\077"));
lf[851]=C_h_intern(&lf[851],17, C_text("chicken.base#sub1"));
lf[852]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_fixnum_decrease"));
lf[853]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_fixnum_decrease"));
lf[854]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_s_a_i_minus"));
lf[855]=C_h_intern(&lf[855],17, C_text("chicken.base#add1"));
lf[856]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_fixnum_increase"));
lf[857]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_fixnum_increase"));
lf[858]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_s_a_i_plus"));
lf[859]=C_h_intern(&lf[859],38, C_text("chicken.compiler.support#mark-variable"));
lf[860]=C_h_intern(&lf[860],13, C_text("\010compilerpure"));
lf[861]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\010\003sysslot\376\003\000\000\002\376\001\000\000\015\003sysblock-ref\376\003\000\000\002\376\001\000\000\010\003syssize\376\003\000\000\002\376\001\000\000\010\003sysbyte\376\003\000"
"\000\002\376\001\000\000\014\003syspointer\077\376\003\000\000\002\376\001\000\000\026\003sysgeneric-structure\077\376\003\000\000\002\376\001\000\000\016\003sysimmediate\077\376\003\000\000\002"
"\376\001\000\000\017\003sysbytevector\077\376\003\000\000\002\376\001\000\000\011\003syspair\077\376\003\000\000\002\376\001\000\000\007\003syseq\077\376\003\000\000\002\376\001\000\000\011\003syslist\077\376\003\000\000\002"
"\376\001\000\000\013\003sysvector\077\376\003\000\000\002\376\001\000\000\010\003syseqv\077\376\003\000\000\002\376\001\000\000\017\003sysget-keyword\376\003\000\000\002\376\001\000\000\010\003sysvoid\376\003\000"
"\000\002\376\001\000\000\016\003syspermanent\077\376\377\016"));
lf[862]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\022chicken.fixnum#fx\052\376\003\000\000\002\376\001\000\000\023chicken.fixnum#fx\052\077\376\003\000\000\002\376\001\000\000\022chicken.fixnu"
"m#fx+\376\003\000\000\002\376\001\000\000\023chicken.fixnum#fx+\077\376\003\000\000\002\376\001\000\000\022chicken.fixnum#fx-\376\003\000\000\002\376\001\000\000\023chicken."
"fixnum#fx-\077\376\003\000\000\002\376\001\000\000\022chicken.fixnum#fx/\376\003\000\000\002\376\001\000\000\023chicken.fixnum#fx/\077\376\003\000\000\002\376\001\000\000\022ch"
"icken.fixnum#fx<\376\003\000\000\002\376\001\000\000\023chicken.fixnum#fx<=\376\003\000\000\002\376\001\000\000\022chicken.fixnum#fx=\376\003\000\000\002\376\001"
"\000\000\022chicken.fixnum#fx>\376\003\000\000\002\376\001\000\000\023chicken.fixnum#fx>=\376\003\000\000\002\376\001\000\000\024chicken.fixnum#fxand"
"\376\003\000\000\002\376\001\000\000\026chicken.fixnum#fxeven\077\376\003\000\000\002\376\001\000\000\024chicken.fixnum#fxgcd\376\003\000\000\002\376\001\000\000\024chicken."
"fixnum#fxior\376\003\000\000\002\376\001\000\000\024chicken.fixnum#fxlen\376\003\000\000\002\376\001\000\000\024chicken.fixnum#fxmax\376\003\000\000\002\376\001\000"
"\000\024chicken.fixnum#fxmin\376\003\000\000\002\376\001\000\000\024chicken.fixnum#fxmod\376\003\000\000\002\376\001\000\000\024chicken.fixnum#fxn"
"eg\376\003\000\000\002\376\001\000\000\024chicken.fixnum#fxnot\376\003\000\000\002\376\001\000\000\025chicken.fixnum#fxodd\077\376\003\000\000\002\376\001\000\000\024chicken"
".fixnum#fxrem\376\003\000\000\002\376\001\000\000\024chicken.fixnum#fxshl\376\003\000\000\002\376\001\000\000\024chicken.fixnum#fxshr\376\003\000\000\002\376\001"
"\000\000\024chicken.fixnum#fxxor\376\377\016"));
lf[863]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\023chicken.flonum#fp/\077\376\003\000\000\002\376\001\000\000\022chicken.flonum#fp+\376\003\000\000\002\376\001\000\000\022chicken.flonu"
"m#fp-\376\003\000\000\002\376\001\000\000\022chicken.flonum#fp\052\376\003\000\000\002\376\001\000\000\022chicken.flonum#fp/\376\003\000\000\002\376\001\000\000\022chicken.f"
"lonum#fp>\376\003\000\000\002\376\001\000\000\022chicken.flonum#fp<\376\003\000\000\002\376\001\000\000\022chicken.flonum#fp=\376\003\000\000\002\376\001\000\000\023chick"
"en.flonum#fp>=\376\003\000\000\002\376\001\000\000\023chicken.flonum#fp<=\376\003\000\000\002\376\001\000\000\024chicken.flonum#fpmin\376\003\000\000\002\376\001"
"\000\000\024chicken.flonum#fpmax\376\003\000\000\002\376\001\000\000\024chicken.flonum#fpneg\376\003\000\000\002\376\001\000\000\024chicken.flonum#fp"
"gcd\376\003\000\000\002\376\001\000\000\026chicken.flonum#fpfloor\376\003\000\000\002\376\001\000\000\030chicken.flonum#fpceiling\376\003\000\000\002\376\001\000\000\031c"
"hicken.flonum#fptruncate\376\003\000\000\002\376\001\000\000\026chicken.flonum#fpround\376\003\000\000\002\376\001\000\000\024chicken.flonum"
"#fpsin\376\003\000\000\002\376\001\000\000\024chicken.flonum#fpcos\376\003\000\000\002\376\001\000\000\024chicken.flonum#fptan\376\003\000\000\002\376\001\000\000\025chic"
"ken.flonum#fpasin\376\003\000\000\002\376\001\000\000\025chicken.flonum#fpacos\376\003\000\000\002\376\001\000\000\025chicken.flonum#fpatan\376"
"\003\000\000\002\376\001\000\000\026chicken.flonum#fpatan2\376\003\000\000\002\376\001\000\000\024chicken.flonum#fpexp\376\003\000\000\002\376\001\000\000\025chicken.f"
"lonum#fpexpt\376\003\000\000\002\376\001\000\000\024chicken.flonum#fplog\376\003\000\000\002\376\001\000\000\025chicken.flonum#fpsqrt\376\003\000\000\002\376\001"
"\000\000\024chicken.flonum#fpabs\376\003\000\000\002\376\001\000\000\031chicken.flonum#fpinteger\077\376\377\016"));
lf[864]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\024chicken.base#bignum\077\376\003\000\000\002\376\001\000\000\025chicken.base#cplxnum\077\376\003\000\000\002\376\001\000\000\024chicken.b"
"ase#fixnum\077\376\003\000\000\002\376\001\000\000\024chicken.base#flonum\077\376\003\000\000\002\376\001\000\000\024chicken.base#ratnum\077\376\003\000\000\002\376\001\000\000"
"\021chicken.base#add1\376\003\000\000\002\376\001\000\000\021chicken.base#sub1\376\003\000\000\002\376\001\000\000\021chicken.base#nan\077\376\003\000\000\002\376\001\000"
"\000\024chicken.base#finite\077\376\003\000\000\002\376\001\000\000\026chicken.base#infinite\077\376\003\000\000\002\376\001\000\000\023chicken.base#gen"
"sym\376\003\000\000\002\376\001\000\000\021chicken.base#void\376\003\000\000\002\376\001\000\000\022chicken.base#print\376\003\000\000\002\376\001\000\000\023chicken.base"
"#print\052\376\003\000\000\002\376\001\000\000\022chicken.base#error\376\003\000\000\002\376\001\000\000\024chicken.base#call/cc\376\003\000\000\002\376\001\000\000\026chick"
"en.base#char-name\376\003\000\000\002\376\001\000\000\037chicken.base#current-error-port\376\003\000\000\002\376\001\000\000\032chicken.base"
"#symbol-append\376\003\000\000\002\376\001\000\000\022chicken.base#foldl\376\003\000\000\002\376\001\000\000\022chicken.base#foldr\376\003\000\000\002\376\001\000\000\023"
"chicken.base#setter\376\003\000\000\002\376\001\000\000\037chicken.base#getter-with-setter\376\003\000\000\002\376\001\000\000\024chicken.ba"
"se#equal=\077\376\003\000\000\002\376\001\000\000\033chicken.base#exact-integer\077\376\003\000\000\002\376\001\000\000\031chicken.base#flush-outp"
"ut\376\003\000\000\002\376\001\000\000\025chicken.base#identity\376\003\000\000\002\376\001\000\000\016chicken.base#o\376\003\000\000\002\376\001\000\000\022chicken.base#"
"atom\077\376\003\000\000\002\376\001\000\000\026chicken.base#alist-ref\376\003\000\000\002\376\001\000\000\023chicken.base#rassoc\376\003\000\000\002\376\001\000\000\036chic"
"ken.bitwise#integer-length\376\003\000\000\002\376\001\000\000\033chicken.bitwise#bitwise-and\376\003\000\000\002\376\001\000\000\033chicken"
".bitwise#bitwise-not\376\003\000\000\002\376\001\000\000\033chicken.bitwise#bitwise-ior\376\003\000\000\002\376\001\000\000\033chicken.bitwi"
"se#bitwise-xor\376\003\000\000\002\376\001\000\000 chicken.bitwise#arithmetic-shift\376\003\000\000\002\376\001\000\000\034chicken.bitwis"
"e#bit->boolean\376\003\000\000\002\376\001\000\000\026chicken.blob#blob-size\376\003\000\000\002\376\001\000\000\023chicken.blob#blob=\077\376\003\000\000\002"
"\376\001\000\000\033chicken.keyword#get-keyword\376\003\000\000\002\376\001\000\000\026srfi-4#u8vector-length\376\003\000\000\002\376\001\000\000\026srfi-4"
"#s8vector-length\376\003\000\000\002\376\001\000\000\027srfi-4#u16vector-length\376\003\000\000\002\376\001\000\000\027srfi-4#s16vector-leng"
"th\376\003\000\000\002\376\001\000\000\027srfi-4#u32vector-length\376\003\000\000\002\376\001\000\000\027srfi-4#u64vector-length\376\003\000\000\002\376\001\000\000\027sr"
"fi-4#s32vector-length\376\003\000\000\002\376\001\000\000\027srfi-4#s64vector-length\376\003\000\000\002\376\001\000\000\027srfi-4#f32vector"
"-length\376\003\000\000\002\376\001\000\000\027srfi-4#f64vector-length\376\003\000\000\002\376\001\000\000\034srfi-4#u8vector->blob/shared\376\003"
"\000\000\002\376\001\000\000\034srfi-4#s8vector->blob/shared\376\003\000\000\002\376\001\000\000\035srfi-4#u16vector->blob/shared\376\003\000\000\002"
"\376\001\000\000\035srfi-4#s16vector->blob/shared\376\003\000\000\002\376\001\000\000\035srfi-4#u32vector->blob/shared\376\003\000\000\002\376\001"
"\000\000\035srfi-4#s32vector->blob/shared\376\003\000\000\002\376\001\000\000\035srfi-4#u64vector->blob/shared\376\003\000\000\002\376\001\000\000"
"\035srfi-4#s64vector->blob/shared\376\003\000\000\002\376\001\000\000\035srfi-4#f32vector->blob/shared\376\003\000\000\002\376\001\000\000\035s"
"rfi-4#f64vector->blob/shared\376\003\000\000\002\376\001\000\000\034srfi-4#blob->u8vector/shared\376\003\000\000\002\376\001\000\000\034srfi"
"-4#blob->s8vector/shared\376\003\000\000\002\376\001\000\000\035srfi-4#blob->u16vector/shared\376\003\000\000\002\376\001\000\000\035srfi-4#"
"blob->s16vector/shared\376\003\000\000\002\376\001\000\000\035srfi-4#blob->u32vector/shared\376\003\000\000\002\376\001\000\000\035srfi-4#bl"
"ob->s32vector/shared\376\003\000\000\002\376\001\000\000\035srfi-4#blob->u64vector/shared\376\003\000\000\002\376\001\000\000\035srfi-4#blob"
"->s64vector/shared\376\003\000\000\002\376\001\000\000\035srfi-4#blob->f32vector/shared\376\003\000\000\002\376\001\000\000\035srfi-4#blob->"
"f64vector/shared\376\003\000\000\002\376\001\000\000\033chicken.memory#u8vector-ref\376\003\000\000\002\376\001\000\000\033chicken.memory#s8"
"vector-ref\376\003\000\000\002\376\001\000\000\034chicken.memory#u16vector-ref\376\003\000\000\002\376\001\000\000\034chicken.memory#s16vect"
"or-ref\376\003\000\000\002\376\001\000\000\034chicken.memory#u32vector-ref\376\003\000\000\002\376\001\000\000\034chicken.memory#s32vector-r"
"ef\376\003\000\000\002\376\001\000\000\034chicken.memory#u64vector-ref\376\003\000\000\002\376\001\000\000\034chicken.memory#s64vector-ref\376\003"
"\000\000\002\376\001\000\000\034chicken.memory#f32vector-ref\376\003\000\000\002\376\001\000\000\034chicken.memory#f64vector-ref\376\003\000\000\002\376"
"\001\000\000\035chicken.memory#f32vector-set!\376\003\000\000\002\376\001\000\000\035chicken.memory#f64vector-set!\376\003\000\000\002\376\001\000"
"\000\034chicken.memory#u8vector-set!\376\003\000\000\002\376\001\000\000\034chicken.memory#s8vector-set!\376\003\000\000\002\376\001\000\000\035ch"
"icken.memory#u16vector-set!\376\003\000\000\002\376\001\000\000\035chicken.memory#s16vector-set!\376\003\000\000\002\376\001\000\000\035chic"
"ken.memory#u32vector-set!\376\003\000\000\002\376\001\000\000\035chicken.memory#s32vector-set!\376\003\000\000\002\376\001\000\000\035chicke"
"n.memory#u64vector-set!\376\003\000\000\002\376\001\000\000\035chicken.memory#s64vector-set!\376\003\000\000\002\376\001\000\000-chicken."
"memory.representation#number-of-slots\376\003\000\000\002\376\001\000\0002chicken.memory.representation#mak"
"e-record-instance\376\003\000\000\002\376\001\000\000\047chicken.memory.representation#block-ref\376\003\000\000\002\376\001\000\000(chic"
"ken.memory.representation#block-set!\376\003\000\000\002\376\001\000\000\035chicken.locative#locative-ref\376\003\000\000\002"
"\376\001\000\000\036chicken.locative#locative-set!\376\003\000\000\002\376\001\000\000!chicken.locative#locative->object\376\003"
"\000\000\002\376\001\000\000\032chicken.locative#locative\077\376\003\000\000\002\376\001\000\000\027chicken.memory#pointer+\376\003\000\000\002\376\001\000\000\030chi"
"cken.memory#pointer=\077\376\003\000\000\002\376\001\000\000\037chicken.memory#address->pointer\376\003\000\000\002\376\001\000\000\037chicken."
"memory#pointer->address\376\003\000\000\002\376\001\000\000\036chicken.memory#pointer->object\376\003\000\000\002\376\001\000\000\036chicken"
".memory#object->pointer\376\003\000\000\002\376\001\000\000\035chicken.memory#pointer-u8-ref\376\003\000\000\002\376\001\000\000\035chicken."
"memory#pointer-s8-ref\376\003\000\000\002\376\001\000\000\036chicken.memory#pointer-u16-ref\376\003\000\000\002\376\001\000\000\036chicken.m"
"emory#pointer-s16-ref\376\003\000\000\002\376\001\000\000\036chicken.memory#pointer-u32-ref\376\003\000\000\002\376\001\000\000\036chicken.m"
"emory#pointer-s32-ref\376\003\000\000\002\376\001\000\000\036chicken.memory#pointer-f32-ref\376\003\000\000\002\376\001\000\000\036chicken.m"
"emory#pointer-f64-ref\376\003\000\000\002\376\001\000\000\036chicken.memory#pointer-u8-set!\376\003\000\000\002\376\001\000\000\036chicken.m"
"emory#pointer-s8-set!\376\003\000\000\002\376\001\000\000\037chicken.memory#pointer-u16-set!\376\003\000\000\002\376\001\000\000\037chicken."
"memory#pointer-s16-set!\376\003\000\000\002\376\001\000\000\037chicken.memory#pointer-u32-set!\376\003\000\000\002\376\001\000\000\037chicke"
"n.memory#pointer-s32-set!\376\003\000\000\002\376\001\000\000\037chicken.memory#pointer-f32-set!\376\003\000\000\002\376\001\000\000\037chic"
"ken.memory#pointer-f64-set!\376\003\000\000\002\376\001\000\000\036chicken.string#substring-index\376\003\000\000\002\376\001\000\000!chi"
"cken.string#substring-index-ci\376\003\000\000\002\376\001\000\000\032chicken.string#substring=\077\376\003\000\000\002\376\001\000\000\035chic"
"ken.string#substring-ci=\077\376\003\000\000\002\376\001\000\000\026chicken.io#read-string\376\003\000\000\002\376\001\000\000\025chicken.forma"
"t#format\376\003\000\000\002\376\001\000\000\025chicken.format#printf\376\003\000\000\002\376\001\000\000\026chicken.format#sprintf\376\003\000\000\002\376\001\000\000"
"\026chicken.format#fprintf\376\377\016"));
lf[865]=C_h_intern(&lf[865],26, C_text("chicken.base#symbol-append"));
lf[866]=C_h_intern(&lf[866],7, C_text("scheme#"));
lf[867]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003not\376\003\000\000\002\376\001\000\000\010boolean\077\376\003\000\000\002\376\001\000\000\005apply\376\003\000\000\002\376\001\000\000\036call-with-current-contin"
"uation\376\003\000\000\002\376\001\000\000\003eq\077\376\003\000\000\002\376\001\000\000\004eqv\077\376\003\000\000\002\376\001\000\000\006equal\077\376\003\000\000\002\376\001\000\000\005pair\077\376\003\000\000\002\376\001\000\000\004cons\376\003"
"\000\000\002\376\001\000\000\003car\376\003\000\000\002\376\001\000\000\003cdr\376\003\000\000\002\376\001\000\000\004caar\376\003\000\000\002\376\001\000\000\004cadr\376\003\000\000\002\376\001\000\000\004cdar\376\003\000\000\002\376\001\000\000\004cddr"
"\376\003\000\000\002\376\001\000\000\005caaar\376\003\000\000\002\376\001\000\000\005caadr\376\003\000\000\002\376\001\000\000\005cadar\376\003\000\000\002\376\001\000\000\005caddr\376\003\000\000\002\376\001\000\000\005cdaar\376\003\000\000\002"
"\376\001\000\000\005cdadr\376\003\000\000\002\376\001\000\000\005cddar\376\003\000\000\002\376\001\000\000\005cdddr\376\003\000\000\002\376\001\000\000\006caaaar\376\003\000\000\002\376\001\000\000\006caaadr\376\003\000\000\002\376\001\000"
"\000\006caadar\376\003\000\000\002\376\001\000\000\006caaddr\376\003\000\000\002\376\001\000\000\006cadaar\376\003\000\000\002\376\001\000\000\006cadadr\376\003\000\000\002\376\001\000\000\006caddar\376\003\000\000\002\376\001\000"
"\000\006cadddr\376\003\000\000\002\376\001\000\000\006cdaaar\376\003\000\000\002\376\001\000\000\006cdaadr\376\003\000\000\002\376\001\000\000\006cdadar\376\003\000\000\002\376\001\000\000\006cdaddr\376\003\000\000\002\376\001\000"
"\000\006cddaar\376\003\000\000\002\376\001\000\000\006cddadr\376\003\000\000\002\376\001\000\000\006cdddar\376\003\000\000\002\376\001\000\000\006cddddr\376\003\000\000\002\376\001\000\000\010set-car!\376\003\000\000\002\376"
"\001\000\000\010set-cdr!\376\003\000\000\002\376\001\000\000\005null\077\376\003\000\000\002\376\001\000\000\004list\376\003\000\000\002\376\001\000\000\005list\077\376\003\000\000\002\376\001\000\000\006length\376\003\000\000\002\376\001\000"
"\000\005zero\077\376\003\000\000\002\376\001\000\000\001\052\376\003\000\000\002\376\001\000\000\001-\376\003\000\000\002\376\001\000\000\001+\376\003\000\000\002\376\001\000\000\001/\376\003\000\000\002\376\001\000\000\001-\376\003\000\000\002\376\001\000\000\001>\376\003\000\000\002\376\001"
"\000\000\001<\376\003\000\000\002\376\001\000\000\002>=\376\003\000\000\002\376\001\000\000\002<=\376\003\000\000\002\376\001\000\000\001=\376\003\000\000\002\376\001\000\000\023current-output-port\376\003\000\000\002\376\001\000\000\022cu"
"rrent-input-port\376\003\000\000\002\376\001\000\000\012write-char\376\003\000\000\002\376\001\000\000\007newline\376\003\000\000\002\376\001\000\000\005write\376\003\000\000\002\376\001\000\000\007di"
"splay\376\003\000\000\002\376\001\000\000\006append\376\003\000\000\002\376\001\000\000\016symbol->string\376\003\000\000\002\376\001\000\000\010for-each\376\003\000\000\002\376\001\000\000\003map\376\003\000\000"
"\002\376\001\000\000\005char\077\376\003\000\000\002\376\001\000\000\015char->integer\376\003\000\000\002\376\001\000\000\015integer->char\376\003\000\000\002\376\001\000\000\013eof-object\077\376\003"
"\000\000\002\376\001\000\000\015vector-length\376\003\000\000\002\376\001\000\000\015string-length\376\003\000\000\002\376\001\000\000\012string-ref\376\003\000\000\002\376\001\000\000\013string"
"-set!\376\003\000\000\002\376\001\000\000\012vector-ref\376\003\000\000\002\376\001\000\000\013vector-set!\376\003\000\000\002\376\001\000\000\006char=\077\376\003\000\000\002\376\001\000\000\006char<\077\376\003"
"\000\000\002\376\001\000\000\006char>\077\376\003\000\000\002\376\001\000\000\007char>=\077\376\003\000\000\002\376\001\000\000\007char<=\077\376\003\000\000\002\376\001\000\000\003gcd\376\003\000\000\002\376\001\000\000\003lcm\376\003\000\000\002\376"
"\001\000\000\007reverse\376\003\000\000\002\376\001\000\000\007symbol\077\376\003\000\000\002\376\001\000\000\016string->symbol\376\003\000\000\002\376\001\000\000\007number\077\376\003\000\000\002\376\001\000\000\010c"
"omplex\077\376\003\000\000\002\376\001\000\000\005real\077\376\003\000\000\002\376\001\000\000\010integer\077\376\003\000\000\002\376\001\000\000\011rational\077\376\003\000\000\002\376\001\000\000\004odd\077\376\003\000\000\002\376\001"
"\000\000\005even\077\376\003\000\000\002\376\001\000\000\011positive\077\376\003\000\000\002\376\001\000\000\011negative\077\376\003\000\000\002\376\001\000\000\006exact\077\376\003\000\000\002\376\001\000\000\010inexact\077"
"\376\003\000\000\002\376\001\000\000\003max\376\003\000\000\002\376\001\000\000\003min\376\003\000\000\002\376\001\000\000\010quotient\376\003\000\000\002\376\001\000\000\011remainder\376\003\000\000\002\376\001\000\000\006modulo\376"
"\003\000\000\002\376\001\000\000\005floor\376\003\000\000\002\376\001\000\000\007ceiling\376\003\000\000\002\376\001\000\000\010truncate\376\003\000\000\002\376\001\000\000\005round\376\003\000\000\002\376\001\000\000\013ration"
"alize\376\003\000\000\002\376\001\000\000\016exact->inexact\376\003\000\000\002\376\001\000\000\016inexact->exact\376\003\000\000\002\376\001\000\000\003exp\376\003\000\000\002\376\001\000\000\003log\376"
"\003\000\000\002\376\001\000\000\003sin\376\003\000\000\002\376\001\000\000\004expt\376\003\000\000\002\376\001\000\000\004sqrt\376\003\000\000\002\376\001\000\000\003cos\376\003\000\000\002\376\001\000\000\003tan\376\003\000\000\002\376\001\000\000\004asin"
"\376\003\000\000\002\376\001\000\000\004acos\376\003\000\000\002\376\001\000\000\004atan\376\003\000\000\002\376\001\000\000\016number->string\376\003\000\000\002\376\001\000\000\016string->number\376\003\000\000"
"\002\376\001\000\000\011char-ci=\077\376\003\000\000\002\376\001\000\000\011char-ci<\077\376\003\000\000\002\376\001\000\000\011char-ci>\077\376\003\000\000\002\376\001\000\000\012char-ci>=\077\376\003\000\000\002\376\001"
"\000\000\012char-ci<=\077\376\003\000\000\002\376\001\000\000\020char-alphabetic\077\376\003\000\000\002\376\001\000\000\020char-whitespace\077\376\003\000\000\002\376\001\000\000\015char-"
"numeric\077\376\003\000\000\002\376\001\000\000\020char-lower-case\077\376\003\000\000\002\376\001\000\000\020char-upper-case\077\376\003\000\000\002\376\001\000\000\013char-upcas"
"e\376\003\000\000\002\376\001\000\000\015char-downcase\376\003\000\000\002\376\001\000\000\007string\077\376\003\000\000\002\376\001\000\000\010string=\077\376\003\000\000\002\376\001\000\000\010string>\077\376\003\000"
"\000\002\376\001\000\000\010string<\077\376\003\000\000\002\376\001\000\000\011string>=\077\376\003\000\000\002\376\001\000\000\011string<=\077\376\003\000\000\002\376\001\000\000\013string-ci=\077\376\003\000\000\002\376"
"\001\000\000\013string-ci<\077\376\003\000\000\002\376\001\000\000\013string-ci>\077\376\003\000\000\002\376\001\000\000\014string-ci<=\077\376\003\000\000\002\376\001\000\000\014string-ci>=\077"
"\376\003\000\000\002\376\001\000\000\015string-append\376\003\000\000\002\376\001\000\000\014string->list\376\003\000\000\002\376\001\000\000\014list->string\376\003\000\000\002\376\001\000\000\007vec"
"tor\077\376\003\000\000\002\376\001\000\000\014vector->list\376\003\000\000\002\376\001\000\000\014list->vector\376\003\000\000\002\376\001\000\000\006string\376\003\000\000\002\376\001\000\000\004read\376\003"
"\000\000\002\376\001\000\000\011read-char\376\003\000\000\002\376\001\000\000\011substring\376\003\000\000\002\376\001\000\000\014string-fill!\376\003\000\000\002\376\001\000\000\014vector-copy!"
"\376\003\000\000\002\376\001\000\000\014vector-fill!\376\003\000\000\002\376\001\000\000\013make-string\376\003\000\000\002\376\001\000\000\013make-vector\376\003\000\000\002\376\001\000\000\017open-i"
"nput-file\376\003\000\000\002\376\001\000\000\020open-output-file\376\003\000\000\002\376\001\000\000\024call-with-input-file\376\003\000\000\002\376\001\000\000\025call-"
"with-output-file\376\003\000\000\002\376\001\000\000\020close-input-port\376\003\000\000\002\376\001\000\000\021close-output-port\376\003\000\000\002\376\001\000\000\006v"
"alues\376\003\000\000\002\376\001\000\000\020call-with-values\376\003\000\000\002\376\001\000\000\006vector\376\003\000\000\002\376\001\000\000\012procedure\077\376\003\000\000\002\376\001\000\000\004mem"
"q\376\003\000\000\002\376\001\000\000\004memv\376\003\000\000\002\376\001\000\000\006member\376\003\000\000\002\376\001\000\000\004assq\376\003\000\000\002\376\001\000\000\004assv\376\003\000\000\002\376\001\000\000\005assoc\376\003\000\000\002\376"
"\001\000\000\011list-tail\376\003\000\000\002\376\001\000\000\010list-ref\376\003\000\000\002\376\001\000\000\003abs\376\003\000\000\002\376\001\000\000\013char-ready\077\376\003\000\000\002\376\001\000\000\011peek-"
"char\376\003\000\000\002\376\001\000\000\014list->string\376\003\000\000\002\376\001\000\000\014string->list\376\003\000\000\002\376\001\000\000\022current-input-port\376\003\000\000"
"\002\376\001\000\000\023current-output-port\376\003\000\000\002\376\001\000\000\012make-polar\376\003\000\000\002\376\001\000\000\020make-rectangular\376\003\000\000\002\376\001\000\000"
"\011real-part\376\003\000\000\002\376\001\000\000\011imag-part\376\003\000\000\002\376\001\000\000\004load\376\003\000\000\002\376\001\000\000\004eval\376\003\000\000\002\376\001\000\000\027interaction-e"
"nvironment\376\003\000\000\002\376\001\000\000\020null-environment\376\003\000\000\002\376\001\000\000\031scheme-report-environment\376\377\016"));
lf[868]=C_h_intern(&lf[868],50, C_text("chicken.compiler.optimizer#membership-unfold-limit"));
lf[869]=C_h_intern(&lf[869],52, C_text("chicken.compiler.optimizer#membership-test-operators"));
lf[870]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376B\000\000\010C_i_memq\376B\000\000\005C_eqp\376\003\000\000\002\376\003\000\000\002\376B\000\000\012C_u_i_memq\376B\000\000\005C_eqp\376\003\000\000\002\376\003\000\000\002\376B"
"\000\000\012C_i_member\376B\000\000\012C_i_equalp\376\003\000\000\002\376\003\000\000\002\376B\000\000\010C_i_memv\376B\000\000\010C_i_eqvp\376\377\016"));
lf[871]=C_h_intern(&lf[871],45, C_text("chicken.compiler.optimizer#eq-inline-operator"));
lf[872]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005C_eqp"));
lf[873]=C_h_intern(&lf[873],54, C_text("chicken.compiler.optimizer#default-optimization-passes"));
C_register_lf2(lf,874,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1538,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[576] = {
{C_text("f_1538:c_2dplatform_2escm"),(void*)f_1538},
{C_text("f_1541:c_2dplatform_2escm"),(void*)f_1541},
{C_text("f_1544:c_2dplatform_2escm"),(void*)f_1544},
{C_text("f_1547:c_2dplatform_2escm"),(void*)f_1547},
{C_text("f_1550:c_2dplatform_2escm"),(void*)f_1550},
{C_text("f_1553:c_2dplatform_2escm"),(void*)f_1553},
{C_text("f_1556:c_2dplatform_2escm"),(void*)f_1556},
{C_text("f_1991:c_2dplatform_2escm"),(void*)f_1991},
{C_text("f_1997:c_2dplatform_2escm"),(void*)f_1997},
{C_text("f_2011:c_2dplatform_2escm"),(void*)f_2011},
{C_text("f_2333:c_2dplatform_2escm"),(void*)f_2333},
{C_text("f_2575:c_2dplatform_2escm"),(void*)f_2575},
{C_text("f_2589:c_2dplatform_2escm"),(void*)f_2589},
{C_text("f_2593:c_2dplatform_2escm"),(void*)f_2593},
{C_text("f_2837:c_2dplatform_2escm"),(void*)f_2837},
{C_text("f_2844:c_2dplatform_2escm"),(void*)f_2844},
{C_text("f_2847:c_2dplatform_2escm"),(void*)f_2847},
{C_text("f_2850:c_2dplatform_2escm"),(void*)f_2850},
{C_text("f_2865:c_2dplatform_2escm"),(void*)f_2865},
{C_text("f_2872:c_2dplatform_2escm"),(void*)f_2872},
{C_text("f_2881:c_2dplatform_2escm"),(void*)f_2881},
{C_text("f_2883:c_2dplatform_2escm"),(void*)f_2883},
{C_text("f_2885:c_2dplatform_2escm"),(void*)f_2885},
{C_text("f_2907:c_2dplatform_2escm"),(void*)f_2907},
{C_text("f_2940:c_2dplatform_2escm"),(void*)f_2940},
{C_text("f_2948:c_2dplatform_2escm"),(void*)f_2948},
{C_text("f_2951:c_2dplatform_2escm"),(void*)f_2951},
{C_text("f_2953:c_2dplatform_2escm"),(void*)f_2953},
{C_text("f_2969:c_2dplatform_2escm"),(void*)f_2969},
{C_text("f_2978:c_2dplatform_2escm"),(void*)f_2978},
{C_text("f_2981:c_2dplatform_2escm"),(void*)f_2981},
{C_text("f_2996:c_2dplatform_2escm"),(void*)f_2996},
{C_text("f_3008:c_2dplatform_2escm"),(void*)f_3008},
{C_text("f_3022:c_2dplatform_2escm"),(void*)f_3022},
{C_text("f_3026:c_2dplatform_2escm"),(void*)f_3026},
{C_text("f_3035:c_2dplatform_2escm"),(void*)f_3035},
{C_text("f_3049:c_2dplatform_2escm"),(void*)f_3049},
{C_text("f_3053:c_2dplatform_2escm"),(void*)f_3053},
{C_text("f_3083:c_2dplatform_2escm"),(void*)f_3083},
{C_text("f_3087:c_2dplatform_2escm"),(void*)f_3087},
{C_text("f_3091:c_2dplatform_2escm"),(void*)f_3091},
{C_text("f_3095:c_2dplatform_2escm"),(void*)f_3095},
{C_text("f_3099:c_2dplatform_2escm"),(void*)f_3099},
{C_text("f_3107:c_2dplatform_2escm"),(void*)f_3107},
{C_text("f_3110:c_2dplatform_2escm"),(void*)f_3110},
{C_text("f_3113:c_2dplatform_2escm"),(void*)f_3113},
{C_text("f_3115:c_2dplatform_2escm"),(void*)f_3115},
{C_text("f_3143:c_2dplatform_2escm"),(void*)f_3143},
{C_text("f_3151:c_2dplatform_2escm"),(void*)f_3151},
{C_text("f_3168:c_2dplatform_2escm"),(void*)f_3168},
{C_text("f_3170:c_2dplatform_2escm"),(void*)f_3170},
{C_text("f_3195:c_2dplatform_2escm"),(void*)f_3195},
{C_text("f_3206:c_2dplatform_2escm"),(void*)f_3206},
{C_text("f_3210:c_2dplatform_2escm"),(void*)f_3210},
{C_text("f_3213:c_2dplatform_2escm"),(void*)f_3213},
{C_text("f_3227:c_2dplatform_2escm"),(void*)f_3227},
{C_text("f_3231:c_2dplatform_2escm"),(void*)f_3231},
{C_text("f_3254:c_2dplatform_2escm"),(void*)f_3254},
{C_text("f_3269:c_2dplatform_2escm"),(void*)f_3269},
{C_text("f_3277:c_2dplatform_2escm"),(void*)f_3277},
{C_text("f_3286:c_2dplatform_2escm"),(void*)f_3286},
{C_text("f_3290:c_2dplatform_2escm"),(void*)f_3290},
{C_text("f_3293:c_2dplatform_2escm"),(void*)f_3293},
{C_text("f_3296:c_2dplatform_2escm"),(void*)f_3296},
{C_text("f_3298:c_2dplatform_2escm"),(void*)f_3298},
{C_text("f_3304:c_2dplatform_2escm"),(void*)f_3304},
{C_text("f_3316:c_2dplatform_2escm"),(void*)f_3316},
{C_text("f_3335:c_2dplatform_2escm"),(void*)f_3335},
{C_text("f_3366:c_2dplatform_2escm"),(void*)f_3366},
{C_text("f_3369:c_2dplatform_2escm"),(void*)f_3369},
{C_text("f_3372:c_2dplatform_2escm"),(void*)f_3372},
{C_text("f_3375:c_2dplatform_2escm"),(void*)f_3375},
{C_text("f_3378:c_2dplatform_2escm"),(void*)f_3378},
{C_text("f_3381:c_2dplatform_2escm"),(void*)f_3381},
{C_text("f_3382:c_2dplatform_2escm"),(void*)f_3382},
{C_text("f_3408:c_2dplatform_2escm"),(void*)f_3408},
{C_text("f_3411:c_2dplatform_2escm"),(void*)f_3411},
{C_text("f_3413:c_2dplatform_2escm"),(void*)f_3413},
{C_text("f_3447:c_2dplatform_2escm"),(void*)f_3447},
{C_text("f_3474:c_2dplatform_2escm"),(void*)f_3474},
{C_text("f_3477:c_2dplatform_2escm"),(void*)f_3477},
{C_text("f_3480:c_2dplatform_2escm"),(void*)f_3480},
{C_text("f_3495:c_2dplatform_2escm"),(void*)f_3495},
{C_text("f_3499:c_2dplatform_2escm"),(void*)f_3499},
{C_text("f_3511:c_2dplatform_2escm"),(void*)f_3511},
{C_text("f_3523:c_2dplatform_2escm"),(void*)f_3523},
{C_text("f_3535:c_2dplatform_2escm"),(void*)f_3535},
{C_text("f_3539:c_2dplatform_2escm"),(void*)f_3539},
{C_text("f_3547:c_2dplatform_2escm"),(void*)f_3547},
{C_text("f_3554:c_2dplatform_2escm"),(void*)f_3554},
{C_text("f_3558:c_2dplatform_2escm"),(void*)f_3558},
{C_text("f_3562:c_2dplatform_2escm"),(void*)f_3562},
{C_text("f_3566:c_2dplatform_2escm"),(void*)f_3566},
{C_text("f_3570:c_2dplatform_2escm"),(void*)f_3570},
{C_text("f_3578:c_2dplatform_2escm"),(void*)f_3578},
{C_text("f_3581:c_2dplatform_2escm"),(void*)f_3581},
{C_text("f_3584:c_2dplatform_2escm"),(void*)f_3584},
{C_text("f_3587:c_2dplatform_2escm"),(void*)f_3587},
{C_text("f_3590:c_2dplatform_2escm"),(void*)f_3590},
{C_text("f_3593:c_2dplatform_2escm"),(void*)f_3593},
{C_text("f_3596:c_2dplatform_2escm"),(void*)f_3596},
{C_text("f_3599:c_2dplatform_2escm"),(void*)f_3599},
{C_text("f_3602:c_2dplatform_2escm"),(void*)f_3602},
{C_text("f_3605:c_2dplatform_2escm"),(void*)f_3605},
{C_text("f_3608:c_2dplatform_2escm"),(void*)f_3608},
{C_text("f_3611:c_2dplatform_2escm"),(void*)f_3611},
{C_text("f_3614:c_2dplatform_2escm"),(void*)f_3614},
{C_text("f_3617:c_2dplatform_2escm"),(void*)f_3617},
{C_text("f_3620:c_2dplatform_2escm"),(void*)f_3620},
{C_text("f_3623:c_2dplatform_2escm"),(void*)f_3623},
{C_text("f_3626:c_2dplatform_2escm"),(void*)f_3626},
{C_text("f_3629:c_2dplatform_2escm"),(void*)f_3629},
{C_text("f_3632:c_2dplatform_2escm"),(void*)f_3632},
{C_text("f_3635:c_2dplatform_2escm"),(void*)f_3635},
{C_text("f_3638:c_2dplatform_2escm"),(void*)f_3638},
{C_text("f_3641:c_2dplatform_2escm"),(void*)f_3641},
{C_text("f_3644:c_2dplatform_2escm"),(void*)f_3644},
{C_text("f_3647:c_2dplatform_2escm"),(void*)f_3647},
{C_text("f_3650:c_2dplatform_2escm"),(void*)f_3650},
{C_text("f_3653:c_2dplatform_2escm"),(void*)f_3653},
{C_text("f_3656:c_2dplatform_2escm"),(void*)f_3656},
{C_text("f_3659:c_2dplatform_2escm"),(void*)f_3659},
{C_text("f_3662:c_2dplatform_2escm"),(void*)f_3662},
{C_text("f_3665:c_2dplatform_2escm"),(void*)f_3665},
{C_text("f_3668:c_2dplatform_2escm"),(void*)f_3668},
{C_text("f_3671:c_2dplatform_2escm"),(void*)f_3671},
{C_text("f_3674:c_2dplatform_2escm"),(void*)f_3674},
{C_text("f_3677:c_2dplatform_2escm"),(void*)f_3677},
{C_text("f_3680:c_2dplatform_2escm"),(void*)f_3680},
{C_text("f_3683:c_2dplatform_2escm"),(void*)f_3683},
{C_text("f_3686:c_2dplatform_2escm"),(void*)f_3686},
{C_text("f_3689:c_2dplatform_2escm"),(void*)f_3689},
{C_text("f_3692:c_2dplatform_2escm"),(void*)f_3692},
{C_text("f_3695:c_2dplatform_2escm"),(void*)f_3695},
{C_text("f_3698:c_2dplatform_2escm"),(void*)f_3698},
{C_text("f_3701:c_2dplatform_2escm"),(void*)f_3701},
{C_text("f_3704:c_2dplatform_2escm"),(void*)f_3704},
{C_text("f_3707:c_2dplatform_2escm"),(void*)f_3707},
{C_text("f_3710:c_2dplatform_2escm"),(void*)f_3710},
{C_text("f_3713:c_2dplatform_2escm"),(void*)f_3713},
{C_text("f_3716:c_2dplatform_2escm"),(void*)f_3716},
{C_text("f_3719:c_2dplatform_2escm"),(void*)f_3719},
{C_text("f_3722:c_2dplatform_2escm"),(void*)f_3722},
{C_text("f_3725:c_2dplatform_2escm"),(void*)f_3725},
{C_text("f_3728:c_2dplatform_2escm"),(void*)f_3728},
{C_text("f_3731:c_2dplatform_2escm"),(void*)f_3731},
{C_text("f_3734:c_2dplatform_2escm"),(void*)f_3734},
{C_text("f_3737:c_2dplatform_2escm"),(void*)f_3737},
{C_text("f_3740:c_2dplatform_2escm"),(void*)f_3740},
{C_text("f_3743:c_2dplatform_2escm"),(void*)f_3743},
{C_text("f_3746:c_2dplatform_2escm"),(void*)f_3746},
{C_text("f_3749:c_2dplatform_2escm"),(void*)f_3749},
{C_text("f_3752:c_2dplatform_2escm"),(void*)f_3752},
{C_text("f_3755:c_2dplatform_2escm"),(void*)f_3755},
{C_text("f_3758:c_2dplatform_2escm"),(void*)f_3758},
{C_text("f_3761:c_2dplatform_2escm"),(void*)f_3761},
{C_text("f_3764:c_2dplatform_2escm"),(void*)f_3764},
{C_text("f_3767:c_2dplatform_2escm"),(void*)f_3767},
{C_text("f_3770:c_2dplatform_2escm"),(void*)f_3770},
{C_text("f_3773:c_2dplatform_2escm"),(void*)f_3773},
{C_text("f_3776:c_2dplatform_2escm"),(void*)f_3776},
{C_text("f_3779:c_2dplatform_2escm"),(void*)f_3779},
{C_text("f_3782:c_2dplatform_2escm"),(void*)f_3782},
{C_text("f_3785:c_2dplatform_2escm"),(void*)f_3785},
{C_text("f_3788:c_2dplatform_2escm"),(void*)f_3788},
{C_text("f_3791:c_2dplatform_2escm"),(void*)f_3791},
{C_text("f_3794:c_2dplatform_2escm"),(void*)f_3794},
{C_text("f_3797:c_2dplatform_2escm"),(void*)f_3797},
{C_text("f_3800:c_2dplatform_2escm"),(void*)f_3800},
{C_text("f_3803:c_2dplatform_2escm"),(void*)f_3803},
{C_text("f_3806:c_2dplatform_2escm"),(void*)f_3806},
{C_text("f_3809:c_2dplatform_2escm"),(void*)f_3809},
{C_text("f_3812:c_2dplatform_2escm"),(void*)f_3812},
{C_text("f_3815:c_2dplatform_2escm"),(void*)f_3815},
{C_text("f_3818:c_2dplatform_2escm"),(void*)f_3818},
{C_text("f_3821:c_2dplatform_2escm"),(void*)f_3821},
{C_text("f_3824:c_2dplatform_2escm"),(void*)f_3824},
{C_text("f_3827:c_2dplatform_2escm"),(void*)f_3827},
{C_text("f_3830:c_2dplatform_2escm"),(void*)f_3830},
{C_text("f_3833:c_2dplatform_2escm"),(void*)f_3833},
{C_text("f_3836:c_2dplatform_2escm"),(void*)f_3836},
{C_text("f_3839:c_2dplatform_2escm"),(void*)f_3839},
{C_text("f_3842:c_2dplatform_2escm"),(void*)f_3842},
{C_text("f_3845:c_2dplatform_2escm"),(void*)f_3845},
{C_text("f_3848:c_2dplatform_2escm"),(void*)f_3848},
{C_text("f_3851:c_2dplatform_2escm"),(void*)f_3851},
{C_text("f_3854:c_2dplatform_2escm"),(void*)f_3854},
{C_text("f_3857:c_2dplatform_2escm"),(void*)f_3857},
{C_text("f_3860:c_2dplatform_2escm"),(void*)f_3860},
{C_text("f_3863:c_2dplatform_2escm"),(void*)f_3863},
{C_text("f_3866:c_2dplatform_2escm"),(void*)f_3866},
{C_text("f_3869:c_2dplatform_2escm"),(void*)f_3869},
{C_text("f_3872:c_2dplatform_2escm"),(void*)f_3872},
{C_text("f_3875:c_2dplatform_2escm"),(void*)f_3875},
{C_text("f_3878:c_2dplatform_2escm"),(void*)f_3878},
{C_text("f_3881:c_2dplatform_2escm"),(void*)f_3881},
{C_text("f_3884:c_2dplatform_2escm"),(void*)f_3884},
{C_text("f_3887:c_2dplatform_2escm"),(void*)f_3887},
{C_text("f_3890:c_2dplatform_2escm"),(void*)f_3890},
{C_text("f_3893:c_2dplatform_2escm"),(void*)f_3893},
{C_text("f_3896:c_2dplatform_2escm"),(void*)f_3896},
{C_text("f_3899:c_2dplatform_2escm"),(void*)f_3899},
{C_text("f_3902:c_2dplatform_2escm"),(void*)f_3902},
{C_text("f_3905:c_2dplatform_2escm"),(void*)f_3905},
{C_text("f_3908:c_2dplatform_2escm"),(void*)f_3908},
{C_text("f_3911:c_2dplatform_2escm"),(void*)f_3911},
{C_text("f_3914:c_2dplatform_2escm"),(void*)f_3914},
{C_text("f_3917:c_2dplatform_2escm"),(void*)f_3917},
{C_text("f_3920:c_2dplatform_2escm"),(void*)f_3920},
{C_text("f_3923:c_2dplatform_2escm"),(void*)f_3923},
{C_text("f_3926:c_2dplatform_2escm"),(void*)f_3926},
{C_text("f_3929:c_2dplatform_2escm"),(void*)f_3929},
{C_text("f_3932:c_2dplatform_2escm"),(void*)f_3932},
{C_text("f_3935:c_2dplatform_2escm"),(void*)f_3935},
{C_text("f_3938:c_2dplatform_2escm"),(void*)f_3938},
{C_text("f_3941:c_2dplatform_2escm"),(void*)f_3941},
{C_text("f_3944:c_2dplatform_2escm"),(void*)f_3944},
{C_text("f_3947:c_2dplatform_2escm"),(void*)f_3947},
{C_text("f_3950:c_2dplatform_2escm"),(void*)f_3950},
{C_text("f_3953:c_2dplatform_2escm"),(void*)f_3953},
{C_text("f_3956:c_2dplatform_2escm"),(void*)f_3956},
{C_text("f_3959:c_2dplatform_2escm"),(void*)f_3959},
{C_text("f_3962:c_2dplatform_2escm"),(void*)f_3962},
{C_text("f_3965:c_2dplatform_2escm"),(void*)f_3965},
{C_text("f_3968:c_2dplatform_2escm"),(void*)f_3968},
{C_text("f_3971:c_2dplatform_2escm"),(void*)f_3971},
{C_text("f_3974:c_2dplatform_2escm"),(void*)f_3974},
{C_text("f_3977:c_2dplatform_2escm"),(void*)f_3977},
{C_text("f_3980:c_2dplatform_2escm"),(void*)f_3980},
{C_text("f_3983:c_2dplatform_2escm"),(void*)f_3983},
{C_text("f_3986:c_2dplatform_2escm"),(void*)f_3986},
{C_text("f_3989:c_2dplatform_2escm"),(void*)f_3989},
{C_text("f_3992:c_2dplatform_2escm"),(void*)f_3992},
{C_text("f_3995:c_2dplatform_2escm"),(void*)f_3995},
{C_text("f_3998:c_2dplatform_2escm"),(void*)f_3998},
{C_text("f_4001:c_2dplatform_2escm"),(void*)f_4001},
{C_text("f_4004:c_2dplatform_2escm"),(void*)f_4004},
{C_text("f_4007:c_2dplatform_2escm"),(void*)f_4007},
{C_text("f_4010:c_2dplatform_2escm"),(void*)f_4010},
{C_text("f_4013:c_2dplatform_2escm"),(void*)f_4013},
{C_text("f_4016:c_2dplatform_2escm"),(void*)f_4016},
{C_text("f_4019:c_2dplatform_2escm"),(void*)f_4019},
{C_text("f_4022:c_2dplatform_2escm"),(void*)f_4022},
{C_text("f_4025:c_2dplatform_2escm"),(void*)f_4025},
{C_text("f_4028:c_2dplatform_2escm"),(void*)f_4028},
{C_text("f_4031:c_2dplatform_2escm"),(void*)f_4031},
{C_text("f_4034:c_2dplatform_2escm"),(void*)f_4034},
{C_text("f_4037:c_2dplatform_2escm"),(void*)f_4037},
{C_text("f_4040:c_2dplatform_2escm"),(void*)f_4040},
{C_text("f_4043:c_2dplatform_2escm"),(void*)f_4043},
{C_text("f_4046:c_2dplatform_2escm"),(void*)f_4046},
{C_text("f_4049:c_2dplatform_2escm"),(void*)f_4049},
{C_text("f_4052:c_2dplatform_2escm"),(void*)f_4052},
{C_text("f_4055:c_2dplatform_2escm"),(void*)f_4055},
{C_text("f_4058:c_2dplatform_2escm"),(void*)f_4058},
{C_text("f_4061:c_2dplatform_2escm"),(void*)f_4061},
{C_text("f_4064:c_2dplatform_2escm"),(void*)f_4064},
{C_text("f_4067:c_2dplatform_2escm"),(void*)f_4067},
{C_text("f_4070:c_2dplatform_2escm"),(void*)f_4070},
{C_text("f_4073:c_2dplatform_2escm"),(void*)f_4073},
{C_text("f_4076:c_2dplatform_2escm"),(void*)f_4076},
{C_text("f_4079:c_2dplatform_2escm"),(void*)f_4079},
{C_text("f_4082:c_2dplatform_2escm"),(void*)f_4082},
{C_text("f_4085:c_2dplatform_2escm"),(void*)f_4085},
{C_text("f_4088:c_2dplatform_2escm"),(void*)f_4088},
{C_text("f_4091:c_2dplatform_2escm"),(void*)f_4091},
{C_text("f_4094:c_2dplatform_2escm"),(void*)f_4094},
{C_text("f_4097:c_2dplatform_2escm"),(void*)f_4097},
{C_text("f_4100:c_2dplatform_2escm"),(void*)f_4100},
{C_text("f_4103:c_2dplatform_2escm"),(void*)f_4103},
{C_text("f_4106:c_2dplatform_2escm"),(void*)f_4106},
{C_text("f_4109:c_2dplatform_2escm"),(void*)f_4109},
{C_text("f_4112:c_2dplatform_2escm"),(void*)f_4112},
{C_text("f_4115:c_2dplatform_2escm"),(void*)f_4115},
{C_text("f_4118:c_2dplatform_2escm"),(void*)f_4118},
{C_text("f_4121:c_2dplatform_2escm"),(void*)f_4121},
{C_text("f_4124:c_2dplatform_2escm"),(void*)f_4124},
{C_text("f_4127:c_2dplatform_2escm"),(void*)f_4127},
{C_text("f_4130:c_2dplatform_2escm"),(void*)f_4130},
{C_text("f_4133:c_2dplatform_2escm"),(void*)f_4133},
{C_text("f_4136:c_2dplatform_2escm"),(void*)f_4136},
{C_text("f_4139:c_2dplatform_2escm"),(void*)f_4139},
{C_text("f_4142:c_2dplatform_2escm"),(void*)f_4142},
{C_text("f_4145:c_2dplatform_2escm"),(void*)f_4145},
{C_text("f_4148:c_2dplatform_2escm"),(void*)f_4148},
{C_text("f_4151:c_2dplatform_2escm"),(void*)f_4151},
{C_text("f_4154:c_2dplatform_2escm"),(void*)f_4154},
{C_text("f_4157:c_2dplatform_2escm"),(void*)f_4157},
{C_text("f_4160:c_2dplatform_2escm"),(void*)f_4160},
{C_text("f_4163:c_2dplatform_2escm"),(void*)f_4163},
{C_text("f_4166:c_2dplatform_2escm"),(void*)f_4166},
{C_text("f_4169:c_2dplatform_2escm"),(void*)f_4169},
{C_text("f_4172:c_2dplatform_2escm"),(void*)f_4172},
{C_text("f_4175:c_2dplatform_2escm"),(void*)f_4175},
{C_text("f_4178:c_2dplatform_2escm"),(void*)f_4178},
{C_text("f_4181:c_2dplatform_2escm"),(void*)f_4181},
{C_text("f_4184:c_2dplatform_2escm"),(void*)f_4184},
{C_text("f_4187:c_2dplatform_2escm"),(void*)f_4187},
{C_text("f_4190:c_2dplatform_2escm"),(void*)f_4190},
{C_text("f_4193:c_2dplatform_2escm"),(void*)f_4193},
{C_text("f_4196:c_2dplatform_2escm"),(void*)f_4196},
{C_text("f_4199:c_2dplatform_2escm"),(void*)f_4199},
{C_text("f_4202:c_2dplatform_2escm"),(void*)f_4202},
{C_text("f_4205:c_2dplatform_2escm"),(void*)f_4205},
{C_text("f_4208:c_2dplatform_2escm"),(void*)f_4208},
{C_text("f_4211:c_2dplatform_2escm"),(void*)f_4211},
{C_text("f_4214:c_2dplatform_2escm"),(void*)f_4214},
{C_text("f_4217:c_2dplatform_2escm"),(void*)f_4217},
{C_text("f_4220:c_2dplatform_2escm"),(void*)f_4220},
{C_text("f_4223:c_2dplatform_2escm"),(void*)f_4223},
{C_text("f_4226:c_2dplatform_2escm"),(void*)f_4226},
{C_text("f_4229:c_2dplatform_2escm"),(void*)f_4229},
{C_text("f_4232:c_2dplatform_2escm"),(void*)f_4232},
{C_text("f_4235:c_2dplatform_2escm"),(void*)f_4235},
{C_text("f_4238:c_2dplatform_2escm"),(void*)f_4238},
{C_text("f_4241:c_2dplatform_2escm"),(void*)f_4241},
{C_text("f_4244:c_2dplatform_2escm"),(void*)f_4244},
{C_text("f_4247:c_2dplatform_2escm"),(void*)f_4247},
{C_text("f_4250:c_2dplatform_2escm"),(void*)f_4250},
{C_text("f_4253:c_2dplatform_2escm"),(void*)f_4253},
{C_text("f_4256:c_2dplatform_2escm"),(void*)f_4256},
{C_text("f_4259:c_2dplatform_2escm"),(void*)f_4259},
{C_text("f_4262:c_2dplatform_2escm"),(void*)f_4262},
{C_text("f_4265:c_2dplatform_2escm"),(void*)f_4265},
{C_text("f_4268:c_2dplatform_2escm"),(void*)f_4268},
{C_text("f_4271:c_2dplatform_2escm"),(void*)f_4271},
{C_text("f_4274:c_2dplatform_2escm"),(void*)f_4274},
{C_text("f_4277:c_2dplatform_2escm"),(void*)f_4277},
{C_text("f_4280:c_2dplatform_2escm"),(void*)f_4280},
{C_text("f_4283:c_2dplatform_2escm"),(void*)f_4283},
{C_text("f_4286:c_2dplatform_2escm"),(void*)f_4286},
{C_text("f_4289:c_2dplatform_2escm"),(void*)f_4289},
{C_text("f_4292:c_2dplatform_2escm"),(void*)f_4292},
{C_text("f_4295:c_2dplatform_2escm"),(void*)f_4295},
{C_text("f_4298:c_2dplatform_2escm"),(void*)f_4298},
{C_text("f_4301:c_2dplatform_2escm"),(void*)f_4301},
{C_text("f_4304:c_2dplatform_2escm"),(void*)f_4304},
{C_text("f_4307:c_2dplatform_2escm"),(void*)f_4307},
{C_text("f_4310:c_2dplatform_2escm"),(void*)f_4310},
{C_text("f_4313:c_2dplatform_2escm"),(void*)f_4313},
{C_text("f_4316:c_2dplatform_2escm"),(void*)f_4316},
{C_text("f_4319:c_2dplatform_2escm"),(void*)f_4319},
{C_text("f_4322:c_2dplatform_2escm"),(void*)f_4322},
{C_text("f_4325:c_2dplatform_2escm"),(void*)f_4325},
{C_text("f_4328:c_2dplatform_2escm"),(void*)f_4328},
{C_text("f_4331:c_2dplatform_2escm"),(void*)f_4331},
{C_text("f_4334:c_2dplatform_2escm"),(void*)f_4334},
{C_text("f_4337:c_2dplatform_2escm"),(void*)f_4337},
{C_text("f_4340:c_2dplatform_2escm"),(void*)f_4340},
{C_text("f_4343:c_2dplatform_2escm"),(void*)f_4343},
{C_text("f_4346:c_2dplatform_2escm"),(void*)f_4346},
{C_text("f_4349:c_2dplatform_2escm"),(void*)f_4349},
{C_text("f_4352:c_2dplatform_2escm"),(void*)f_4352},
{C_text("f_4355:c_2dplatform_2escm"),(void*)f_4355},
{C_text("f_4358:c_2dplatform_2escm"),(void*)f_4358},
{C_text("f_4361:c_2dplatform_2escm"),(void*)f_4361},
{C_text("f_4364:c_2dplatform_2escm"),(void*)f_4364},
{C_text("f_4367:c_2dplatform_2escm"),(void*)f_4367},
{C_text("f_4370:c_2dplatform_2escm"),(void*)f_4370},
{C_text("f_4373:c_2dplatform_2escm"),(void*)f_4373},
{C_text("f_4376:c_2dplatform_2escm"),(void*)f_4376},
{C_text("f_4379:c_2dplatform_2escm"),(void*)f_4379},
{C_text("f_4382:c_2dplatform_2escm"),(void*)f_4382},
{C_text("f_4385:c_2dplatform_2escm"),(void*)f_4385},
{C_text("f_4388:c_2dplatform_2escm"),(void*)f_4388},
{C_text("f_4391:c_2dplatform_2escm"),(void*)f_4391},
{C_text("f_4394:c_2dplatform_2escm"),(void*)f_4394},
{C_text("f_4397:c_2dplatform_2escm"),(void*)f_4397},
{C_text("f_4400:c_2dplatform_2escm"),(void*)f_4400},
{C_text("f_4403:c_2dplatform_2escm"),(void*)f_4403},
{C_text("f_4406:c_2dplatform_2escm"),(void*)f_4406},
{C_text("f_4409:c_2dplatform_2escm"),(void*)f_4409},
{C_text("f_4412:c_2dplatform_2escm"),(void*)f_4412},
{C_text("f_4415:c_2dplatform_2escm"),(void*)f_4415},
{C_text("f_4418:c_2dplatform_2escm"),(void*)f_4418},
{C_text("f_4421:c_2dplatform_2escm"),(void*)f_4421},
{C_text("f_4424:c_2dplatform_2escm"),(void*)f_4424},
{C_text("f_4427:c_2dplatform_2escm"),(void*)f_4427},
{C_text("f_4430:c_2dplatform_2escm"),(void*)f_4430},
{C_text("f_4433:c_2dplatform_2escm"),(void*)f_4433},
{C_text("f_4436:c_2dplatform_2escm"),(void*)f_4436},
{C_text("f_4439:c_2dplatform_2escm"),(void*)f_4439},
{C_text("f_4442:c_2dplatform_2escm"),(void*)f_4442},
{C_text("f_4445:c_2dplatform_2escm"),(void*)f_4445},
{C_text("f_4448:c_2dplatform_2escm"),(void*)f_4448},
{C_text("f_4451:c_2dplatform_2escm"),(void*)f_4451},
{C_text("f_4454:c_2dplatform_2escm"),(void*)f_4454},
{C_text("f_4457:c_2dplatform_2escm"),(void*)f_4457},
{C_text("f_4460:c_2dplatform_2escm"),(void*)f_4460},
{C_text("f_4463:c_2dplatform_2escm"),(void*)f_4463},
{C_text("f_4466:c_2dplatform_2escm"),(void*)f_4466},
{C_text("f_4469:c_2dplatform_2escm"),(void*)f_4469},
{C_text("f_4472:c_2dplatform_2escm"),(void*)f_4472},
{C_text("f_4475:c_2dplatform_2escm"),(void*)f_4475},
{C_text("f_4478:c_2dplatform_2escm"),(void*)f_4478},
{C_text("f_4481:c_2dplatform_2escm"),(void*)f_4481},
{C_text("f_4484:c_2dplatform_2escm"),(void*)f_4484},
{C_text("f_4487:c_2dplatform_2escm"),(void*)f_4487},
{C_text("f_4490:c_2dplatform_2escm"),(void*)f_4490},
{C_text("f_4493:c_2dplatform_2escm"),(void*)f_4493},
{C_text("f_4496:c_2dplatform_2escm"),(void*)f_4496},
{C_text("f_4499:c_2dplatform_2escm"),(void*)f_4499},
{C_text("f_4502:c_2dplatform_2escm"),(void*)f_4502},
{C_text("f_4505:c_2dplatform_2escm"),(void*)f_4505},
{C_text("f_4508:c_2dplatform_2escm"),(void*)f_4508},
{C_text("f_4511:c_2dplatform_2escm"),(void*)f_4511},
{C_text("f_4514:c_2dplatform_2escm"),(void*)f_4514},
{C_text("f_4517:c_2dplatform_2escm"),(void*)f_4517},
{C_text("f_4520:c_2dplatform_2escm"),(void*)f_4520},
{C_text("f_4523:c_2dplatform_2escm"),(void*)f_4523},
{C_text("f_4526:c_2dplatform_2escm"),(void*)f_4526},
{C_text("f_4529:c_2dplatform_2escm"),(void*)f_4529},
{C_text("f_4532:c_2dplatform_2escm"),(void*)f_4532},
{C_text("f_4535:c_2dplatform_2escm"),(void*)f_4535},
{C_text("f_4538:c_2dplatform_2escm"),(void*)f_4538},
{C_text("f_4541:c_2dplatform_2escm"),(void*)f_4541},
{C_text("f_4544:c_2dplatform_2escm"),(void*)f_4544},
{C_text("f_4547:c_2dplatform_2escm"),(void*)f_4547},
{C_text("f_4550:c_2dplatform_2escm"),(void*)f_4550},
{C_text("f_4553:c_2dplatform_2escm"),(void*)f_4553},
{C_text("f_4556:c_2dplatform_2escm"),(void*)f_4556},
{C_text("f_4559:c_2dplatform_2escm"),(void*)f_4559},
{C_text("f_4562:c_2dplatform_2escm"),(void*)f_4562},
{C_text("f_4565:c_2dplatform_2escm"),(void*)f_4565},
{C_text("f_4568:c_2dplatform_2escm"),(void*)f_4568},
{C_text("f_4571:c_2dplatform_2escm"),(void*)f_4571},
{C_text("f_4574:c_2dplatform_2escm"),(void*)f_4574},
{C_text("f_4577:c_2dplatform_2escm"),(void*)f_4577},
{C_text("f_4580:c_2dplatform_2escm"),(void*)f_4580},
{C_text("f_4583:c_2dplatform_2escm"),(void*)f_4583},
{C_text("f_4586:c_2dplatform_2escm"),(void*)f_4586},
{C_text("f_4589:c_2dplatform_2escm"),(void*)f_4589},
{C_text("f_4592:c_2dplatform_2escm"),(void*)f_4592},
{C_text("f_4595:c_2dplatform_2escm"),(void*)f_4595},
{C_text("f_4598:c_2dplatform_2escm"),(void*)f_4598},
{C_text("f_4601:c_2dplatform_2escm"),(void*)f_4601},
{C_text("f_4604:c_2dplatform_2escm"),(void*)f_4604},
{C_text("f_4607:c_2dplatform_2escm"),(void*)f_4607},
{C_text("f_4610:c_2dplatform_2escm"),(void*)f_4610},
{C_text("f_4613:c_2dplatform_2escm"),(void*)f_4613},
{C_text("f_4616:c_2dplatform_2escm"),(void*)f_4616},
{C_text("f_4619:c_2dplatform_2escm"),(void*)f_4619},
{C_text("f_4622:c_2dplatform_2escm"),(void*)f_4622},
{C_text("f_4625:c_2dplatform_2escm"),(void*)f_4625},
{C_text("f_4628:c_2dplatform_2escm"),(void*)f_4628},
{C_text("f_4631:c_2dplatform_2escm"),(void*)f_4631},
{C_text("f_4634:c_2dplatform_2escm"),(void*)f_4634},
{C_text("f_4637:c_2dplatform_2escm"),(void*)f_4637},
{C_text("f_4640:c_2dplatform_2escm"),(void*)f_4640},
{C_text("f_4643:c_2dplatform_2escm"),(void*)f_4643},
{C_text("f_4646:c_2dplatform_2escm"),(void*)f_4646},
{C_text("f_4649:c_2dplatform_2escm"),(void*)f_4649},
{C_text("f_4652:c_2dplatform_2escm"),(void*)f_4652},
{C_text("f_4655:c_2dplatform_2escm"),(void*)f_4655},
{C_text("f_4658:c_2dplatform_2escm"),(void*)f_4658},
{C_text("f_4661:c_2dplatform_2escm"),(void*)f_4661},
{C_text("f_4664:c_2dplatform_2escm"),(void*)f_4664},
{C_text("f_4667:c_2dplatform_2escm"),(void*)f_4667},
{C_text("f_4670:c_2dplatform_2escm"),(void*)f_4670},
{C_text("f_4673:c_2dplatform_2escm"),(void*)f_4673},
{C_text("f_4676:c_2dplatform_2escm"),(void*)f_4676},
{C_text("f_4679:c_2dplatform_2escm"),(void*)f_4679},
{C_text("f_4682:c_2dplatform_2escm"),(void*)f_4682},
{C_text("f_4685:c_2dplatform_2escm"),(void*)f_4685},
{C_text("f_4688:c_2dplatform_2escm"),(void*)f_4688},
{C_text("f_4691:c_2dplatform_2escm"),(void*)f_4691},
{C_text("f_4694:c_2dplatform_2escm"),(void*)f_4694},
{C_text("f_4697:c_2dplatform_2escm"),(void*)f_4697},
{C_text("f_4700:c_2dplatform_2escm"),(void*)f_4700},
{C_text("f_4703:c_2dplatform_2escm"),(void*)f_4703},
{C_text("f_4706:c_2dplatform_2escm"),(void*)f_4706},
{C_text("f_4709:c_2dplatform_2escm"),(void*)f_4709},
{C_text("f_4712:c_2dplatform_2escm"),(void*)f_4712},
{C_text("f_4715:c_2dplatform_2escm"),(void*)f_4715},
{C_text("f_4718:c_2dplatform_2escm"),(void*)f_4718},
{C_text("f_4721:c_2dplatform_2escm"),(void*)f_4721},
{C_text("f_4724:c_2dplatform_2escm"),(void*)f_4724},
{C_text("f_4727:c_2dplatform_2escm"),(void*)f_4727},
{C_text("f_4730:c_2dplatform_2escm"),(void*)f_4730},
{C_text("f_4733:c_2dplatform_2escm"),(void*)f_4733},
{C_text("f_4736:c_2dplatform_2escm"),(void*)f_4736},
{C_text("f_4739:c_2dplatform_2escm"),(void*)f_4739},
{C_text("f_4742:c_2dplatform_2escm"),(void*)f_4742},
{C_text("f_4745:c_2dplatform_2escm"),(void*)f_4745},
{C_text("f_4748:c_2dplatform_2escm"),(void*)f_4748},
{C_text("f_4751:c_2dplatform_2escm"),(void*)f_4751},
{C_text("f_4754:c_2dplatform_2escm"),(void*)f_4754},
{C_text("f_4756:c_2dplatform_2escm"),(void*)f_4756},
{C_text("f_4778:c_2dplatform_2escm"),(void*)f_4778},
{C_text("f_4793:c_2dplatform_2escm"),(void*)f_4793},
{C_text("f_4796:c_2dplatform_2escm"),(void*)f_4796},
{C_text("f_4811:c_2dplatform_2escm"),(void*)f_4811},
{C_text("f_4823:c_2dplatform_2escm"),(void*)f_4823},
{C_text("f_4831:c_2dplatform_2escm"),(void*)f_4831},
{C_text("f_4833:c_2dplatform_2escm"),(void*)f_4833},
{C_text("f_4854:c_2dplatform_2escm"),(void*)f_4854},
{C_text("f_4858:c_2dplatform_2escm"),(void*)f_4858},
{C_text("f_4861:c_2dplatform_2escm"),(void*)f_4861},
{C_text("f_4864:c_2dplatform_2escm"),(void*)f_4864},
{C_text("f_4866:c_2dplatform_2escm"),(void*)f_4866},
{C_text("f_4885:c_2dplatform_2escm"),(void*)f_4885},
{C_text("f_4902:c_2dplatform_2escm"),(void*)f_4902},
{C_text("f_4944:c_2dplatform_2escm"),(void*)f_4944},
{C_text("f_4948:c_2dplatform_2escm"),(void*)f_4948},
{C_text("f_4952:c_2dplatform_2escm"),(void*)f_4952},
{C_text("f_4956:c_2dplatform_2escm"),(void*)f_4956},
{C_text("f_4963:c_2dplatform_2escm"),(void*)f_4963},
{C_text("f_4967:c_2dplatform_2escm"),(void*)f_4967},
{C_text("f_4975:c_2dplatform_2escm"),(void*)f_4975},
{C_text("f_4979:c_2dplatform_2escm"),(void*)f_4979},
{C_text("f_4987:c_2dplatform_2escm"),(void*)f_4987},
{C_text("f_4990:c_2dplatform_2escm"),(void*)f_4990},
{C_text("f_4994:c_2dplatform_2escm"),(void*)f_4994},
{C_text("f_4997:c_2dplatform_2escm"),(void*)f_4997},
{C_text("f_5000:c_2dplatform_2escm"),(void*)f_5000},
{C_text("f_5003:c_2dplatform_2escm"),(void*)f_5003},
{C_text("f_5006:c_2dplatform_2escm"),(void*)f_5006},
{C_text("f_5009:c_2dplatform_2escm"),(void*)f_5009},
{C_text("f_5012:c_2dplatform_2escm"),(void*)f_5012},
{C_text("f_5015:c_2dplatform_2escm"),(void*)f_5015},
{C_text("f_5018:c_2dplatform_2escm"),(void*)f_5018},
{C_text("f_5021:c_2dplatform_2escm"),(void*)f_5021},
{C_text("f_5024:c_2dplatform_2escm"),(void*)f_5024},
{C_text("f_5027:c_2dplatform_2escm"),(void*)f_5027},
{C_text("f_5030:c_2dplatform_2escm"),(void*)f_5030},
{C_text("f_5033:c_2dplatform_2escm"),(void*)f_5033},
{C_text("f_5036:c_2dplatform_2escm"),(void*)f_5036},
{C_text("f_5039:c_2dplatform_2escm"),(void*)f_5039},
{C_text("f_5041:c_2dplatform_2escm"),(void*)f_5041},
{C_text("f_5063:c_2dplatform_2escm"),(void*)f_5063},
{C_text("f_5081:c_2dplatform_2escm"),(void*)f_5081},
{C_text("f_5103:c_2dplatform_2escm"),(void*)f_5103},
{C_text("f_5121:c_2dplatform_2escm"),(void*)f_5121},
{C_text("f_5146:c_2dplatform_2escm"),(void*)f_5146},
{C_text("f_5167:c_2dplatform_2escm"),(void*)f_5167},
{C_text("f_5175:c_2dplatform_2escm"),(void*)f_5175},
{C_text("f_5179:c_2dplatform_2escm"),(void*)f_5179},
{C_text("f_5186:c_2dplatform_2escm"),(void*)f_5186},
{C_text("f_5214:c_2dplatform_2escm"),(void*)f_5214},
{C_text("f_5217:c_2dplatform_2escm"),(void*)f_5217},
{C_text("f_5248:c_2dplatform_2escm"),(void*)f_5248},
{C_text("f_5270:c_2dplatform_2escm"),(void*)f_5270},
{C_text("f_5293:c_2dplatform_2escm"),(void*)f_5293},
{C_text("f_5297:c_2dplatform_2escm"),(void*)f_5297},
{C_text("f_5301:c_2dplatform_2escm"),(void*)f_5301},
{C_text("f_5308:c_2dplatform_2escm"),(void*)f_5308},
{C_text("f_5330:c_2dplatform_2escm"),(void*)f_5330},
{C_text("f_5340:c_2dplatform_2escm"),(void*)f_5340},
{C_text("f_5354:c_2dplatform_2escm"),(void*)f_5354},
{C_text("f_5358:c_2dplatform_2escm"),(void*)f_5358},
{C_text("f_5365:c_2dplatform_2escm"),(void*)f_5365},
{C_text("f_5381:c_2dplatform_2escm"),(void*)f_5381},
{C_text("f_5387:c_2dplatform_2escm"),(void*)f_5387},
{C_text("f_5405:c_2dplatform_2escm"),(void*)f_5405},
{C_text("f_5408:c_2dplatform_2escm"),(void*)f_5408},
{C_text("f_5411:c_2dplatform_2escm"),(void*)f_5411},
{C_text("f_5426:c_2dplatform_2escm"),(void*)f_5426},
{C_text("f_5438:c_2dplatform_2escm"),(void*)f_5438},
{C_text("f_5448:c_2dplatform_2escm"),(void*)f_5448},
{C_text("f_5452:c_2dplatform_2escm"),(void*)f_5452},
{C_text("f_5461:c_2dplatform_2escm"),(void*)f_5461},
{C_text("f_5471:c_2dplatform_2escm"),(void*)f_5471},
{C_text("f_5475:c_2dplatform_2escm"),(void*)f_5475},
{C_text("f_5505:c_2dplatform_2escm"),(void*)f_5505},
{C_text("f_5509:c_2dplatform_2escm"),(void*)f_5509},
{C_text("f_5513:c_2dplatform_2escm"),(void*)f_5513},
{C_text("f_5517:c_2dplatform_2escm"),(void*)f_5517},
{C_text("f_5521:c_2dplatform_2escm"),(void*)f_5521},
{C_text("f_5530:c_2dplatform_2escm"),(void*)f_5530},
{C_text("f_5534:c_2dplatform_2escm"),(void*)f_5534},
{C_text("f_5536:c_2dplatform_2escm"),(void*)f_5536},
{C_text("f_5546:c_2dplatform_2escm"),(void*)f_5546},
{C_text("f_5559:c_2dplatform_2escm"),(void*)f_5559},
{C_text("f_5584:c_2dplatform_2escm"),(void*)f_5584},
{C_text("toplevel:c_2dplatform_2escm"),(void*)C_c_2dplatform_toplevel},
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
o|hiding unexported module binding: chicken.compiler.c-platform#partition 
o|hiding unexported module binding: chicken.compiler.c-platform#span 
o|hiding unexported module binding: chicken.compiler.c-platform#take 
o|hiding unexported module binding: chicken.compiler.c-platform#drop 
o|hiding unexported module binding: chicken.compiler.c-platform#split-at 
o|hiding unexported module binding: chicken.compiler.c-platform#append-map 
o|hiding unexported module binding: chicken.compiler.c-platform#every 
o|hiding unexported module binding: chicken.compiler.c-platform#any 
o|hiding unexported module binding: chicken.compiler.c-platform#cons* 
o|hiding unexported module binding: chicken.compiler.c-platform#concatenate 
o|hiding unexported module binding: chicken.compiler.c-platform#delete 
o|hiding unexported module binding: chicken.compiler.c-platform#first 
o|hiding unexported module binding: chicken.compiler.c-platform#second 
o|hiding unexported module binding: chicken.compiler.c-platform#third 
o|hiding unexported module binding: chicken.compiler.c-platform#fourth 
o|hiding unexported module binding: chicken.compiler.c-platform#fifth 
o|hiding unexported module binding: chicken.compiler.c-platform#delete-duplicates 
o|hiding unexported module binding: chicken.compiler.c-platform#alist-cons 
o|hiding unexported module binding: chicken.compiler.c-platform#filter 
o|hiding unexported module binding: chicken.compiler.c-platform#filter-map 
o|hiding unexported module binding: chicken.compiler.c-platform#remove 
o|hiding unexported module binding: chicken.compiler.c-platform#unzip1 
o|hiding unexported module binding: chicken.compiler.c-platform#last 
o|hiding unexported module binding: chicken.compiler.c-platform#list-index 
o|hiding unexported module binding: chicken.compiler.c-platform#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.compiler.c-platform#lset-difference/eq? 
o|hiding unexported module binding: chicken.compiler.c-platform#lset-union/eq? 
o|hiding unexported module binding: chicken.compiler.c-platform#lset-intersection/eq? 
o|hiding unexported module binding: chicken.compiler.c-platform#list-tabulate 
o|hiding unexported module binding: chicken.compiler.c-platform#lset<=/eq? 
o|hiding unexported module binding: chicken.compiler.c-platform#lset=/eq? 
o|hiding unexported module binding: chicken.compiler.c-platform#length+ 
o|hiding unexported module binding: chicken.compiler.c-platform#find 
o|hiding unexported module binding: chicken.compiler.c-platform#find-tail 
o|hiding unexported module binding: chicken.compiler.c-platform#iota 
o|hiding unexported module binding: chicken.compiler.c-platform#make-list 
o|hiding unexported module binding: chicken.compiler.c-platform#posq 
o|hiding unexported module binding: chicken.compiler.c-platform#posv 
o|hiding unexported module binding: chicken.compiler.c-platform#constant577 
o|hiding unexported module binding: chicken.compiler.c-platform#constant581 
o|hiding unexported module binding: chicken.compiler.c-platform#constant585 
o|hiding unexported module binding: chicken.compiler.c-platform#setter-map 
S|applied compiler syntax:
S|  for-each		1
S|  foldl		3
S|  map		5
S|  foldr		3
o|eliminated procedure checks: 34 
o|specializations:
o|  1 (scheme#= * *)
o|  1 (chicken.base#add1 fixnum)
o|  1 (scheme#- *)
o|  1 (scheme#negative? *)
o|  1 (scheme#length list)
o|  1 (scheme#memq * list)
o|  14 (scheme#= fixnum fixnum)
o|  1 (scheme#eqv? * *)
o|  5 (##sys#check-list (or pair list) *)
o|  23 (scheme#cdr pair)
o|  8 (scheme#car pair)
(o e)|safe calls: 375 
(o e)|assignments to immediate values: 1 
o|safe globals: (chicken.compiler.c-platform#posv chicken.compiler.c-platform#posq chicken.compiler.c-platform#make-list chicken.compiler.c-platform#iota chicken.compiler.c-platform#find-tail chicken.compiler.c-platform#find chicken.compiler.c-platform#length+ chicken.compiler.c-platform#lset=/eq? chicken.compiler.c-platform#lset<=/eq? chicken.compiler.c-platform#list-tabulate chicken.compiler.c-platform#lset-intersection/eq? chicken.compiler.c-platform#lset-union/eq? chicken.compiler.c-platform#lset-difference/eq? chicken.compiler.c-platform#lset-adjoin/eq? chicken.compiler.c-platform#list-index chicken.compiler.c-platform#last chicken.compiler.c-platform#unzip1 chicken.compiler.c-platform#remove chicken.compiler.c-platform#filter-map chicken.compiler.c-platform#filter chicken.compiler.c-platform#alist-cons chicken.compiler.c-platform#delete-duplicates chicken.compiler.c-platform#fifth chicken.compiler.c-platform#fourth chicken.compiler.c-platform#third chicken.compiler.c-platform#second chicken.compiler.c-platform#first chicken.compiler.c-platform#delete chicken.compiler.c-platform#concatenate chicken.compiler.c-platform#cons* chicken.compiler.c-platform#any chicken.compiler.c-platform#every chicken.compiler.c-platform#append-map chicken.compiler.c-platform#split-at chicken.compiler.c-platform#drop chicken.compiler.c-platform#take chicken.compiler.c-platform#span chicken.compiler.c-platform#partition) 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#partition 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#span 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#drop 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#split-at 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#append-map 
o|inlining procedure: k1938 
o|inlining procedure: k1938 
o|inlining procedure: k1969 
o|inlining procedure: k1969 
o|merged explicitly consed rest parameter: xs203 
o|inlining procedure: k1999 
o|inlining procedure: k1999 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#concatenate 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#fourth 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#fifth 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#delete-duplicates 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#alist-cons 
o|inlining procedure: k2186 
o|inlining procedure: k2186 
o|inlining procedure: k2178 
o|inlining procedure: k2178 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#filter-map 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#remove 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#unzip1 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#list-index 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#lset-intersection/eq? 
o|inlining procedure: k2577 
o|inlining procedure: k2577 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#length+ 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#find 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#find-tail 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#iota 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#make-list 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#posq 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#posv 
o|inlining procedure: k2887 
o|inlining procedure: k2905 
o|inlining procedure: k2919 
o|inlining procedure: k2919 
o|inlining procedure: k2905 
o|inlining procedure: k2887 
o|substituted constant variable: a2945 
o|inlining procedure: k2955 
o|inlining procedure: k2973 
o|inlining procedure: k2973 
o|inlining procedure: k2997 
o|inlining procedure: "(c-platform.scm:312) chicken.compiler.c-platform#first" 
o|inlining procedure: k2997 
o|inlining procedure: k3036 
o|inlining procedure: k3036 
o|inlining procedure: "(c-platform.scm:309) chicken.compiler.c-platform#first" 
o|inlining procedure: k3057 
o|inlining procedure: k3057 
o|inlining procedure: "(c-platform.scm:303) chicken.compiler.c-platform#second" 
o|inlining procedure: "(c-platform.scm:302) chicken.compiler.c-platform#first" 
o|inlining procedure: k2955 
o|substituted constant variable: a3104 
o|inlining procedure: k3117 
o|consed rest parameter at call site: "(c-platform.scm:358) chicken.compiler.c-platform#cons*" 2 
o|inlining procedure: k3172 
o|inlining procedure: k3172 
o|inlining procedure: "(c-platform.scm:360) chicken.compiler.c-platform#first" 
o|inlining procedure: "(c-platform.scm:358) chicken.compiler.c-platform#first" 
o|inlining procedure: k3214 
o|inlining procedure: k3214 
o|consed rest parameter at call site: "(c-platform.scm:373) chicken.compiler.c-platform#cons*" 2 
o|inlining procedure: k3235 
o|substituted constant variable: a3248 
o|inlining procedure: k3249 
o|inlining procedure: k3249 
o|inlining procedure: k3235 
o|substituted constant variable: a3278 
o|contracted procedure: "(c-platform.scm:353) chicken.compiler.c-platform#last" 
o|inlining procedure: k2335 
o|inlining procedure: k2335 
o|inlining procedure: k3117 
o|inlining procedure: k3306 
o|inlining procedure: k3333 
o|inlining procedure: k3333 
o|inlining procedure: "(c-platform.scm:388) chicken.compiler.c-platform#first" 
o|inlining procedure: k3306 
o|substituted constant variable: a3363 
o|inlining procedure: k3384 
o|inlining procedure: k3384 
o|substituted constant variable: a3405 
o|inlining procedure: k3415 
o|inlining procedure: k3433 
o|inlining procedure: k3448 
o|inlining procedure: k3460 
o|substituted constant variable: a3548 
o|inlining procedure: k3460 
o|inlining procedure: "(c-platform.scm:424) chicken.compiler.c-platform#third" 
o|inlining procedure: k3448 
o|inlining procedure: k3433 
o|inlining procedure: k3415 
o|substituted constant variable: a3571 
o|inlining procedure: k4761 
o|inlining procedure: k4782 
o|inlining procedure: "(c-platform.scm:945) chicken.compiler.c-platform#second" 
o|inlining procedure: k4782 
o|inlining procedure: "(c-platform.scm:941) chicken.compiler.c-platform#first" 
o|inlining procedure: "(c-platform.scm:938) chicken.compiler.c-platform#first" 
o|inlining procedure: k4761 
o|inlining procedure: k4868 
o|inlining procedure: k4886 
o|substituted constant variable: a4908 
o|inlining procedure: k4904 
o|inlining procedure: k4918 
o|inlining procedure: k4918 
o|inlining procedure: "(c-platform.scm:974) chicken.compiler.c-platform#second" 
o|inlining procedure: k4904 
o|inlining procedure: "(c-platform.scm:969) chicken.compiler.c-platform#third" 
o|inlining procedure: k4886 
o|inlining procedure: "(c-platform.scm:967) chicken.compiler.c-platform#first" 
o|inlining procedure: "(c-platform.scm:965) chicken.compiler.c-platform#first" 
o|inlining procedure: k4868 
o|substituted constant variable: a4980 
o|inlining procedure: k5043 
o|inlining procedure: k5069 
o|inlining procedure: k5069 
o|inlining procedure: k5043 
o|substituted constant variable: a5075 
o|inlining procedure: k5083 
o|inlining procedure: k5109 
o|inlining procedure: k5109 
o|inlining procedure: k5083 
o|substituted constant variable: a5115 
o|inlining procedure: k5123 
o|inlining procedure: k5141 
o|substituted constant variable: chicken.compiler.c-platform#setter-map 
o|inlining procedure: k5141 
o|inlining procedure: k5123 
o|substituted constant variable: a5180 
o|inlining procedure: k5188 
o|inlining procedure: k5215 
o|inlining procedure: k5215 
o|inlining procedure: k5237 
o|inlining procedure: k5249 
o|inlining procedure: "(c-platform.scm:850) chicken.compiler.c-platform#first" 
o|inlining procedure: "(c-platform.scm:853) chicken.compiler.c-platform#first" 
o|inlining procedure: k5249 
o|inlining procedure: "(c-platform.scm:845) chicken.compiler.c-platform#first" 
o|inlining procedure: k5237 
o|inlining procedure: "(c-platform.scm:839) chicken.compiler.c-platform#second" 
o|inlining procedure: k5188 
o|substituted constant variable: a5302 
o|inlining procedure: k5310 
o|inlining procedure: k5335 
o|inlining procedure: k5335 
o|inlining procedure: "(c-platform.scm:810) chicken.compiler.c-platform#first" 
o|inlining procedure: "(c-platform.scm:808) chicken.compiler.c-platform#third" 
o|inlining procedure: k5310 
o|substituted constant variable: a5363 
o|inlining procedure: k5367 
o|inlining procedure: k5388 
o|inlining procedure: k5388 
o|inlining procedure: k5427 
o|inlining procedure: "(c-platform.scm:337) chicken.compiler.c-platform#first" 
o|inlining procedure: k5427 
o|inlining procedure: k5462 
o|inlining procedure: k5462 
o|inlining procedure: "(c-platform.scm:334) chicken.compiler.c-platform#first" 
o|inlining procedure: k5479 
o|inlining procedure: k5479 
o|inlining procedure: "(c-platform.scm:328) chicken.compiler.c-platform#second" 
o|inlining procedure: "(c-platform.scm:327) chicken.compiler.c-platform#first" 
o|inlining procedure: k5367 
o|substituted constant variable: a5526 
o|inlining procedure: k5538 
o|contracted procedure: "(c-platform.scm:264) g590597" 
o|propagated global variable: g605606 chicken.compiler.support#mark-variable 
o|inlining procedure: k5538 
o|substituted constant variable: chicken.compiler.c-platform#constant581 
o|substituted constant variable: chicken.compiler.c-platform#constant577 
o|substituted constant variable: chicken.compiler.c-platform#constant585 
o|inlining procedure: k5561 
o|contracted procedure: "(c-platform.scm:120) g557566" 
o|inlining procedure: k5561 
o|simplifications: ((if . 1)) 
o|replaced variables: 325 
o|removed binding forms: 528 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#every 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#any 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#first 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#second 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#third 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#filter 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#constant577 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#constant581 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#constant585 
o|substituted constant variable: r28885613 
o|substituted constant variable: r29745616 
o|substituted constant variable: r29985623 
o|substituted constant variable: r30585632 
o|substituted constant variable: r29565643 
o|substituted constant variable: r32505661 
o|substituted constant variable: r32365663 
o|substituted constant variable: r31185666 
o|substituted constant variable: r33075677 
o|substituted constant variable: r33855679 
o|substituted constant variable: r34615684 
o|substituted constant variable: r34495690 
o|substituted constant variable: r34345691 
o|substituted constant variable: r34165692 
o|contracted procedure: "(c-platform.scm:957) chicken.compiler.c-platform#list-tabulate" 
o|substituted constant variable: r25785602 
o|substituted constant variable: r47835700 
o|substituted constant variable: r47625711 
o|substituted constant variable: r49195716 
o|substituted constant variable: r49055722 
o|substituted constant variable: r48875728 
o|substituted constant variable: r48695739 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#setter-map 
o|substituted constant variable: r50705741 
o|substituted constant variable: r50705741 
o|substituted constant variable: r50705743 
o|substituted constant variable: r50705743 
o|substituted constant variable: r50445745 
o|substituted constant variable: r51105747 
o|substituted constant variable: r51105747 
o|substituted constant variable: r51105749 
o|substituted constant variable: r51105749 
o|substituted constant variable: r50845751 
o|substituted constant variable: r51425754 
o|substituted constant variable: r51245755 
o|converted assignments to bindings: (rewrite-call/cc823) 
o|converted assignments to bindings: (rewrite-make-vector806) 
o|substituted constant variable: r52505773 
o|substituted constant variable: r52385779 
o|substituted constant variable: r51895785 
o|substituted constant variable: r53365787 
o|substituted constant variable: r53365787 
o|substituted constant variable: r53365789 
o|substituted constant variable: r53365789 
o|substituted constant variable: r53115801 
o|converted assignments to bindings: (rewrite-c-w-v756) 
o|converted assignments to bindings: (rewrite-c..r727) 
o|converted assignments to bindings: (rewrite-apply683) 
o|substituted constant variable: r54285811 
o|substituted constant variable: r54805820 
o|substituted constant variable: r53685831 
o|converted assignments to bindings: (eqv?-id623) 
o|converted assignments to bindings: (op1612) 
o|substituted constant variable: g596598 
o|substituted constant variable: g563567 
o|simplifications: ((let . 7)) 
o|replaced variables: 29 
o|removed binding forms: 327 
o|replaced variables: 17 
o|removed binding forms: 86 
o|replaced variables: 25 
o|removed binding forms: 17 
o|removed binding forms: 25 
o|simplifications: ((if . 5) (##core#call . 193)) 
o|  call simplifications:
o|    scheme#symbol?	2
o|    scheme#assq
o|    chicken.base#fixnum?	2
o|    scheme#<=
o|    chicken.fixnum#fx>=
o|    chicken.fixnum#fx+
o|    scheme#caddr	3
o|    scheme#list?
o|    scheme#cdr	3
o|    ##sys#check-list
o|    scheme#pair?	6
o|    ##sys#setslot	2
o|    ##sys#slot	8
o|    scheme#cadr	7
o|    scheme#equal?	2
o|    scheme#number?	2
o|    scheme#not	6
o|    scheme#length	14
o|    scheme#eq?	38
o|    scheme#list	59
o|    scheme#null?	2
o|    scheme#car	24
o|    scheme#cons	7
o|contracted procedure: k2002 
o|contracted procedure: k2013 
o|contracted procedure: k2855 
o|contracted procedure: k2942 
o|contracted procedure: k2890 
o|contracted procedure: k2897 
o|contracted procedure: k2901 
o|contracted procedure: k2908 
o|inlining procedure: k2915 
o|inlining procedure: k2915 
o|contracted procedure: k2926 
o|contracted procedure: k2934 
o|contracted procedure: k2930 
o|contracted procedure: k3101 
o|contracted procedure: k2958 
o|contracted procedure: k2961 
o|contracted procedure: k2964 
o|contracted procedure: k2986 
o|contracted procedure: k2990 
o|contracted procedure: k3000 
o|contracted procedure: k3003 
o|contracted procedure: k3016 
o|contracted procedure: k3027 
o|contracted procedure: k3030 
o|contracted procedure: k3043 
o|contracted procedure: k3054 
o|contracted procedure: k3060 
o|contracted procedure: k3066 
o|contracted procedure: k3073 
o|contracted procedure: k3077 
o|contracted procedure: k3120 
o|contracted procedure: k3130 
o|contracted procedure: k3137 
o|contracted procedure: k3145 
o|contracted procedure: k3153 
o|contracted procedure: k3157 
o|contracted procedure: k3160 
o|contracted procedure: k3163 
o|contracted procedure: k3175 
o|contracted procedure: k3178 
o|contracted procedure: k3181 
o|contracted procedure: k3189 
o|contracted procedure: k3197 
o|contracted procedure: k3221 
o|contracted procedure: k3232 
o|contracted procedure: k3280 
o|contracted procedure: k3238 
o|contracted procedure: k3241 
o|contracted procedure: k3259 
o|contracted procedure: k3271 
o|contracted procedure: k3263 
o|contracted procedure: k2348 
o|contracted procedure: k2338 
o|contracted procedure: k3360 
o|contracted procedure: k3309 
o|contracted procedure: k3318 
o|contracted procedure: k3325 
o|contracted procedure: k3329 
o|contracted procedure: k3336 
o|contracted procedure: k3343 
o|contracted procedure: k3353 
o|contracted procedure: k3402 
o|contracted procedure: k3387 
o|contracted procedure: k3394 
o|contracted procedure: k3398 
o|contracted procedure: k3573 
o|contracted procedure: k3418 
o|contracted procedure: k3421 
o|contracted procedure: k3424 
o|contracted procedure: k3430 
o|contracted procedure: k3436 
o|contracted procedure: k3439 
o|contracted procedure: k3454 
o|contracted procedure: k3457 
o|contracted procedure: k3463 
o|contracted procedure: k3469 
o|contracted procedure: k3485 
o|contracted procedure: k3489 
o|contracted procedure: k3501 
o|contracted procedure: k3505 
o|contracted procedure: k3541 
o|contracted procedure: k3513 
o|contracted procedure: k3517 
o|contracted procedure: k3525 
o|contracted procedure: k3529 
o|contracted procedure: k4758 
o|contracted procedure: k4764 
o|contracted procedure: k4767 
o|contracted procedure: k4773 
o|contracted procedure: k4779 
o|contracted procedure: k4785 
o|contracted procedure: k4801 
o|contracted procedure: k4805 
o|contracted procedure: k4813 
o|contracted procedure: k4817 
o|contracted procedure: k4825 
o|contracted procedure: k2580 
o|contracted procedure: k2595 
o|contracted procedure: k4840 
o|contracted procedure: k4982 
o|contracted procedure: k4871 
o|contracted procedure: k4874 
o|contracted procedure: k4880 
o|contracted procedure: k4889 
o|contracted procedure: k4895 
o|contracted procedure: k4909 
o|contracted procedure: k4915 
o|contracted procedure: k4921 
o|contracted procedure: k4927 
o|contracted procedure: k4934 
o|contracted procedure: k4938 
o|contracted procedure: k4969 
o|contracted procedure: k5077 
o|contracted procedure: k5046 
o|contracted procedure: k5053 
o|contracted procedure: k5057 
o|contracted procedure: k5072 
o|contracted procedure: k5065 
o|contracted procedure: k5117 
o|contracted procedure: k5086 
o|contracted procedure: k5093 
o|contracted procedure: k5097 
o|contracted procedure: k5112 
o|contracted procedure: k5105 
o|contracted procedure: k5182 
o|contracted procedure: k5126 
o|contracted procedure: k5129 
o|contracted procedure: k5135 
o|contracted procedure: k5138 
o|contracted procedure: k5147 
o|contracted procedure: k5157 
o|contracted procedure: k5161 
o|contracted procedure: k5169 
o|contracted procedure: k5304 
o|contracted procedure: k5191 
o|contracted procedure: k5194 
o|contracted procedure: k5201 
o|contracted procedure: k5209 
o|inlining procedure: k5205 
o|inlining procedure: k5205 
o|contracted procedure: k5221 
o|contracted procedure: k5231 
o|contracted procedure: k5234 
o|contracted procedure: k5240 
o|contracted procedure: k5264 
o|contracted procedure: k5260 
o|contracted procedure: k5281 
o|contracted procedure: k5277 
o|contracted procedure: k5284 
o|contracted procedure: k5360 
o|contracted procedure: k5313 
o|contracted procedure: k5320 
o|contracted procedure: k5324 
o|contracted procedure: k5332 
o|contracted procedure: k5341 
o|contracted procedure: k5348 
o|contracted procedure: k5523 
o|contracted procedure: k5370 
o|contracted procedure: k5373 
o|contracted procedure: k5376 
o|contracted procedure: k5395 
o|contracted procedure: k5399 
o|contracted procedure: k5416 
o|contracted procedure: k5420 
o|contracted procedure: k5430 
o|contracted procedure: k5433 
o|contracted procedure: k5453 
o|contracted procedure: k5456 
o|contracted procedure: k5476 
o|contracted procedure: k5482 
o|contracted procedure: k5488 
o|contracted procedure: k5495 
o|contracted procedure: k5499 
o|contracted procedure: k5541 
o|contracted procedure: k5551 
o|contracted procedure: k5555 
o|contracted procedure: k5564 
o|contracted procedure: k5567 
o|contracted procedure: k5570 
o|contracted procedure: k5578 
o|contracted procedure: k5586 
o|simplifications: ((let . 17)) 
o|removed binding forms: 177 
o|replaced variables: 15 
o|removed binding forms: 2 
o|removed binding forms: 9 
o|direct leaf routine/allocation: loop327 0 
o|contracted procedure: k3123 
o|converted assignments to bindings: (loop327) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|customizable procedures: (map-loop551569 for-each-loop589607 op1612 k5406 k5409 rewrite-c..r727 k5246 loop422 map-loop693710 chicken.compiler.c-platform#cons* k2976 k2979 loop204) 
o|calls to known targets: 52 
o|identified direct recursive calls: f_1997 1 
o|identified direct recursive calls: f_2333 1 
o|fast box initializations: 5 
o|fast global references: 2 
o|fast global assignments: 1 
o|dropping unused closure argument: f_1991 
o|dropping unused closure argument: f_2333 
o|dropping unused closure argument: f_2883 
o|dropping unused closure argument: f_3298 
*/
/* end of file */

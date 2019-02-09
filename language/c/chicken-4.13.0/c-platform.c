/* Generated from c-platform.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: c-platform.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -extend private-namespace.scm -no-trace -output-file c-platform.c
   unit: platform
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[933];
static double C_possibly_force_alignment;


C_noret_decl(f_2089)
static void C_ccall f_2089(C_word c,C_word *av) C_noret;
C_noret_decl(f_3462)
static void C_ccall f_3462(C_word c,C_word *av) C_noret;
C_noret_decl(f_3465)
static void C_ccall f_3465(C_word c,C_word *av) C_noret;
C_noret_decl(f_3468)
static void C_ccall f_3468(C_word c,C_word *av) C_noret;
C_noret_decl(f_3450)
static void C_ccall f_3450(C_word c,C_word *av) C_noret;
C_noret_decl(f_3453)
static void C_ccall f_3453(C_word c,C_word *av) C_noret;
C_noret_decl(f_3456)
static void C_ccall f_3456(C_word c,C_word *av) C_noret;
C_noret_decl(f_3459)
static void C_ccall f_3459(C_word c,C_word *av) C_noret;
C_noret_decl(f_1956)
static void C_ccall f_1956(C_word c,C_word *av) C_noret;
C_noret_decl(f_1959)
static void C_ccall f_1959(C_word c,C_word *av) C_noret;
C_noret_decl(f_4998)
static void C_ccall f_4998(C_word c,C_word *av) C_noret;
C_noret_decl(f_4590)
static void C_ccall f_4590(C_word c,C_word *av) C_noret;
C_noret_decl(f_4373)
static void C_ccall f_4373(C_word c,C_word *av) C_noret;
C_noret_decl(f_1974)
static void C_ccall f_1974(C_word c,C_word *av) C_noret;
C_noret_decl(f_4344)
static void C_ccall f_4344(C_word c,C_word *av) C_noret;
C_noret_decl(f_3402)
static void C_ccall f_3402(C_word c,C_word *av) C_noret;
C_noret_decl(f_3408)
static void C_ccall f_3408(C_word c,C_word *av) C_noret;
C_noret_decl(f_3405)
static void C_ccall f_3405(C_word c,C_word *av) C_noret;
C_noret_decl(f_4953)
static void C_ccall f_4953(C_word c,C_word *av) C_noret;
C_noret_decl(f_4429)
static void C_ccall f_4429(C_word c,C_word *av) C_noret;
C_noret_decl(f_4316)
static void C_ccall f_4316(C_word c,C_word *av) C_noret;
C_noret_decl(f_4319)
static void C_fcall f_4319(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4784)
static void C_fcall f_4784(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3441)
static void C_ccall f_3441(C_word c,C_word *av) C_noret;
C_noret_decl(f_3447)
static void C_ccall f_3447(C_word c,C_word *av) C_noret;
C_noret_decl(f_3444)
static void C_ccall f_3444(C_word c,C_word *av) C_noret;
C_noret_decl(f_3432)
static void C_ccall f_3432(C_word c,C_word *av) C_noret;
C_noret_decl(f_4458)
static void C_ccall f_4458(C_word c,C_word *av) C_noret;
C_noret_decl(f_3435)
static void C_ccall f_3435(C_word c,C_word *av) C_noret;
C_noret_decl(f_3438)
static void C_ccall f_3438(C_word c,C_word *av) C_noret;
C_noret_decl(f_2559)
static void C_ccall f_2559(C_word c,C_word *av) C_noret;
C_noret_decl(f_3420)
static void C_ccall f_3420(C_word c,C_word *av) C_noret;
C_noret_decl(f_3429)
static void C_ccall f_3429(C_word c,C_word *av) C_noret;
C_noret_decl(f_3423)
static void C_ccall f_3423(C_word c,C_word *av) C_noret;
C_noret_decl(f_3426)
static void C_ccall f_3426(C_word c,C_word *av) C_noret;
C_noret_decl(f_2562)
static void C_ccall f_2562(C_word c,C_word *av) C_noret;
C_noret_decl(f_2565)
static void C_ccall f_2565(C_word c,C_word *av) C_noret;
C_noret_decl(f_2568)
static void C_ccall f_2568(C_word c,C_word *av) C_noret;
C_noret_decl(f_3411)
static void C_ccall f_3411(C_word c,C_word *av) C_noret;
C_noret_decl(f_3417)
static void C_ccall f_3417(C_word c,C_word *av) C_noret;
C_noret_decl(f_3414)
static void C_ccall f_3414(C_word c,C_word *av) C_noret;
C_noret_decl(f_1912)
static void C_ccall f_1912(C_word c,C_word *av) C_noret;
C_noret_decl(f_4745)
static void C_ccall f_4745(C_word c,C_word *av) C_noret;
C_noret_decl(f_4488)
static void C_fcall f_4488(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3869)
static void C_ccall f_3869(C_word c,C_word *av) C_noret;
C_noret_decl(f_3899)
static void C_ccall f_3899(C_word c,C_word *av) C_noret;
C_noret_decl(f_4894)
static void C_ccall f_4894(C_word c,C_word *av) C_noret;
C_noret_decl(f_1752)
static void C_ccall f_1752(C_word c,C_word *av) C_noret;
C_noret_decl(f_1755)
static void C_ccall f_1755(C_word c,C_word *av) C_noret;
C_noret_decl(f_1757)
static void C_ccall f_1757(C_word c,C_word *av) C_noret;
C_noret_decl(f_3875)
static void C_ccall f_3875(C_word c,C_word *av) C_noret;
C_noret_decl(f_3872)
static void C_ccall f_3872(C_word c,C_word *av) C_noret;
C_noret_decl(f_3878)
static void C_ccall f_3878(C_word c,C_word *av) C_noret;
C_noret_decl(f_4768)
static void C_ccall f_4768(C_word c,C_word *av) C_noret;
C_noret_decl(f_5401)
static void C_ccall f_5401(C_word c,C_word *av) C_noret;
C_noret_decl(f_5371)
static void C_ccall f_5371(C_word c,C_word *av) C_noret;
C_noret_decl(f_4403)
static void C_ccall f_4403(C_word c,C_word *av) C_noret;
C_noret_decl(f_5369)
static void C_ccall f_5369(C_word c,C_word *av) C_noret;
C_noret_decl(f_1997)
static void C_ccall f_1997(C_word c,C_word *av) C_noret;
C_noret_decl(f_3531)
static void C_ccall f_3531(C_word c,C_word *av) C_noret;
C_noret_decl(f_3537)
static void C_ccall f_3537(C_word c,C_word *av) C_noret;
C_noret_decl(f_3534)
static void C_ccall f_3534(C_word c,C_word *av) C_noret;
C_noret_decl(f_5399)
static void C_ccall f_5399(C_word c,C_word *av) C_noret;
C_noret_decl(f_1964)
static void C_ccall f_1964(C_word c,C_word *av) C_noret;
C_noret_decl(f_4790)
static void C_fcall f_4790(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1962)
static void C_ccall f_1962(C_word c,C_word *av) C_noret;
C_noret_decl(f_3522)
static void C_ccall f_3522(C_word c,C_word *av) C_noret;
C_noret_decl(f_3528)
static void C_ccall f_3528(C_word c,C_word *av) C_noret;
C_noret_decl(f_3525)
static void C_ccall f_3525(C_word c,C_word *av) C_noret;
C_noret_decl(f_1744)
static void C_ccall f_1744(C_word c,C_word *av) C_noret;
C_noret_decl(f_3552)
static void C_ccall f_3552(C_word c,C_word *av) C_noret;
C_noret_decl(f_3555)
static void C_ccall f_3555(C_word c,C_word *av) C_noret;
C_noret_decl(f_3558)
static void C_ccall f_3558(C_word c,C_word *av) C_noret;
C_noret_decl(f_3543)
static void C_ccall f_3543(C_word c,C_word *av) C_noret;
C_noret_decl(f_3540)
static void C_ccall f_3540(C_word c,C_word *av) C_noret;
C_noret_decl(f_4821)
static void C_fcall f_4821(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3546)
static void C_ccall f_3546(C_word c,C_word *av) C_noret;
C_noret_decl(f_3549)
static void C_ccall f_3549(C_word c,C_word *av) C_noret;
C_noret_decl(f_5251)
static void C_ccall f_5251(C_word c,C_word *av) C_noret;
C_noret_decl(f_4824)
static void C_fcall f_4824(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2940)
static void C_ccall f_2940(C_word c,C_word *av) C_noret;
C_noret_decl(f_2943)
static void C_ccall f_2943(C_word c,C_word *av) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946(C_word c,C_word *av) C_noret;
C_noret_decl(f_2949)
static void C_ccall f_2949(C_word c,C_word *av) C_noret;
C_noret_decl(f_3510)
static void C_ccall f_3510(C_word c,C_word *av) C_noret;
C_noret_decl(f_3519)
static void C_ccall f_3519(C_word c,C_word *av) C_noret;
C_noret_decl(f_3513)
static void C_ccall f_3513(C_word c,C_word *av) C_noret;
C_noret_decl(f_3516)
static void C_ccall f_3516(C_word c,C_word *av) C_noret;
C_noret_decl(f_5196)
static void C_ccall f_5196(C_word c,C_word *av) C_noret;
C_noret_decl(f_5477)
static void C_ccall f_5477(C_word c,C_word *av) C_noret;
C_noret_decl(f_5249)
static void C_ccall f_5249(C_word c,C_word *av) C_noret;
C_noret_decl(f_3501)
static void C_ccall f_3501(C_word c,C_word *av) C_noret;
C_noret_decl(f_4861)
static void C_ccall f_4861(C_word c,C_word *av) C_noret;
C_noret_decl(f_3507)
static void C_ccall f_3507(C_word c,C_word *av) C_noret;
C_noret_decl(f_3504)
static void C_ccall f_3504(C_word c,C_word *av) C_noret;
C_noret_decl(f_5180)
static void C_fcall f_5180(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3297)
static void C_ccall f_3297(C_word c,C_word *av) C_noret;
C_noret_decl(f_3294)
static void C_ccall f_3294(C_word c,C_word *av) C_noret;
C_noret_decl(f_3291)
static void C_ccall f_3291(C_word c,C_word *av) C_noret;
C_noret_decl(f_2931)
static void C_ccall f_2931(C_word c,C_word *av) C_noret;
C_noret_decl(f_2937)
static void C_ccall f_2937(C_word c,C_word *av) C_noret;
C_noret_decl(f_2934)
static void C_ccall f_2934(C_word c,C_word *av) C_noret;
C_noret_decl(f_3285)
static void C_ccall f_3285(C_word c,C_word *av) C_noret;
C_noret_decl(f_3288)
static void C_ccall f_3288(C_word c,C_word *av) C_noret;
C_noret_decl(f_3282)
static void C_ccall f_3282(C_word c,C_word *av) C_noret;
C_noret_decl(f_5451)
static void C_ccall f_5451(C_word c,C_word *av) C_noret;
C_noret_decl(f_2982)
static void C_ccall f_2982(C_word c,C_word *av) C_noret;
C_noret_decl(C_platform_toplevel)
C_externexport void C_ccall C_platform_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_2988)
static void C_ccall f_2988(C_word c,C_word *av) C_noret;
C_noret_decl(f_2985)
static void C_ccall f_2985(C_word c,C_word *av) C_noret;
C_noret_decl(f_5447)
static void C_ccall f_5447(C_word c,C_word *av) C_noret;
C_noret_decl(f_3279)
static void C_ccall f_3279(C_word c,C_word *av) C_noret;
C_noret_decl(f_3276)
static void C_ccall f_3276(C_word c,C_word *av) C_noret;
C_noret_decl(f_3273)
static void C_ccall f_3273(C_word c,C_word *av) C_noret;
C_noret_decl(f_3270)
static void C_ccall f_3270(C_word c,C_word *av) C_noret;
C_noret_decl(f_5292)
static void C_ccall f_5292(C_word c,C_word *av) C_noret;
C_noret_decl(f_2952)
static void C_ccall f_2952(C_word c,C_word *av) C_noret;
C_noret_decl(f_2955)
static void C_ccall f_2955(C_word c,C_word *av) C_noret;
C_noret_decl(f_2958)
static void C_ccall f_2958(C_word c,C_word *av) C_noret;
C_noret_decl(f_2922)
static void C_ccall f_2922(C_word c,C_word *av) C_noret;
C_noret_decl(f_2925)
static void C_ccall f_2925(C_word c,C_word *av) C_noret;
C_noret_decl(f_2928)
static void C_ccall f_2928(C_word c,C_word *av) C_noret;
C_noret_decl(f_5657)
static void C_ccall f_5657(C_word c,C_word *av) C_noret;
C_noret_decl(f_4657)
static void C_ccall f_4657(C_word c,C_word *av) C_noret;
C_noret_decl(f_3561)
static void C_ccall f_3561(C_word c,C_word *av) C_noret;
C_noret_decl(f_3564)
static void C_ccall f_3564(C_word c,C_word *av) C_noret;
C_noret_decl(f_3567)
static void C_ccall f_3567(C_word c,C_word *av) C_noret;
C_noret_decl(f_5642)
static void C_ccall f_5642(C_word c,C_word *av) C_noret;
C_noret_decl(f_2455)
static void C_ccall f_2455(C_word c,C_word *av) C_noret;
C_noret_decl(f_3916)
static void C_ccall f_3916(C_word c,C_word *av) C_noret;
C_noret_decl(f_5632)
static void C_fcall f_5632(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4615)
static void C_ccall f_4615(C_word c,C_word *av) C_noret;
C_noret_decl(f_2406)
static void C_ccall f_2406(C_word c,C_word *av) C_noret;
C_noret_decl(f_2403)
static void C_ccall f_2403(C_word c,C_word *av) C_noret;
C_noret_decl(f_2337)
static void C_ccall f_2337(C_word c,C_word *av) C_noret;
C_noret_decl(f_2409)
static void C_ccall f_2409(C_word c,C_word *av) C_noret;
C_noret_decl(f_2340)
static void C_ccall f_2340(C_word c,C_word *av) C_noret;
C_noret_decl(f_2342)
static void C_ccall f_2342(C_word c,C_word *av) C_noret;
C_noret_decl(f_2577)
static void C_ccall f_2577(C_word c,C_word *av) C_noret;
C_noret_decl(f_2574)
static void C_ccall f_2574(C_word c,C_word *av) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571(C_word c,C_word *av) C_noret;
C_noret_decl(f_5061)
static void C_ccall f_5061(C_word c,C_word *av) C_noret;
C_noret_decl(f_3576)
static void C_ccall f_3576(C_word c,C_word *av) C_noret;
C_noret_decl(f_3573)
static void C_ccall f_3573(C_word c,C_word *av) C_noret;
C_noret_decl(f_3570)
static void C_ccall f_3570(C_word c,C_word *av) C_noret;
C_noret_decl(f_2589)
static void C_ccall f_2589(C_word c,C_word *av) C_noret;
C_noret_decl(f_2586)
static void C_ccall f_2586(C_word c,C_word *av) C_noret;
C_noret_decl(f_2583)
static void C_ccall f_2583(C_word c,C_word *av) C_noret;
C_noret_decl(f_3976)
static void C_ccall f_3976(C_word c,C_word *av) C_noret;
C_noret_decl(f_2580)
static void C_ccall f_2580(C_word c,C_word *av) C_noret;
C_noret_decl(f_3972)
static void C_ccall f_3972(C_word c,C_word *av) C_noret;
C_noret_decl(f_1773)
static void C_fcall f_1773(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3579)
static void C_ccall f_3579(C_word c,C_word *av) C_noret;
C_noret_decl(f_2595)
static void C_ccall f_2595(C_word c,C_word *av) C_noret;
C_noret_decl(f_2598)
static void C_ccall f_2598(C_word c,C_word *av) C_noret;
C_noret_decl(f_2592)
static void C_ccall f_2592(C_word c,C_word *av) C_noret;
C_noret_decl(f_5043)
static void C_fcall f_5043(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3964)
static void C_ccall f_3964(C_word c,C_word *av) C_noret;
C_noret_decl(f_3968)
static void C_ccall f_3968(C_word c,C_word *av) C_noret;
C_noret_decl(f_1785)
static void C_fcall f_1785(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1782)
static void C_fcall f_1782(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2916)
static void C_ccall f_2916(C_word c,C_word *av) C_noret;
C_noret_decl(f_2913)
static void C_ccall f_2913(C_word c,C_word *av) C_noret;
C_noret_decl(f_3597)
static void C_ccall f_3597(C_word c,C_word *av) C_noret;
C_noret_decl(f_2910)
static void C_ccall f_2910(C_word c,C_word *av) C_noret;
C_noret_decl(f_3591)
static void C_ccall f_3591(C_word c,C_word *av) C_noret;
C_noret_decl(f_3594)
static void C_ccall f_3594(C_word c,C_word *av) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word *av) C_noret;
C_noret_decl(f_3588)
static void C_ccall f_3588(C_word c,C_word *av) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word *av) C_noret;
C_noret_decl(f_3582)
static void C_ccall f_3582(C_word c,C_word *av) C_noret;
C_noret_decl(f_3489)
static void C_ccall f_3489(C_word c,C_word *av) C_noret;
C_noret_decl(f_3486)
static void C_ccall f_3486(C_word c,C_word *av) C_noret;
C_noret_decl(f_3483)
static void C_ccall f_3483(C_word c,C_word *av) C_noret;
C_noret_decl(f_3480)
static void C_ccall f_3480(C_word c,C_word *av) C_noret;
C_noret_decl(f_3477)
static void C_ccall f_3477(C_word c,C_word *av) C_noret;
C_noret_decl(f_4695)
static C_word C_fcall f_4695(C_word *a,C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3474)
static void C_ccall f_3474(C_word c,C_word *av) C_noret;
C_noret_decl(f_3471)
static void C_ccall f_3471(C_word c,C_word *av) C_noret;
C_noret_decl(f_5004)
static void C_ccall f_5004(C_word c,C_word *av) C_noret;
C_noret_decl(f_5002)
static void C_ccall f_5002(C_word c,C_word *av) C_noret;
C_noret_decl(f_4692)
static void C_ccall f_4692(C_word c,C_word *av) C_noret;
C_noret_decl(f_3021)
static void C_ccall f_3021(C_word c,C_word *av) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024(C_word c,C_word *av) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word *av) C_noret;
C_noret_decl(f_2721)
static void C_ccall f_2721(C_word c,C_word *av) C_noret;
C_noret_decl(f_2724)
static void C_ccall f_2724(C_word c,C_word *av) C_noret;
C_noret_decl(f_2727)
static void C_ccall f_2727(C_word c,C_word *av) C_noret;
C_noret_decl(f_2730)
static void C_ccall f_2730(C_word c,C_word *av) C_noret;
C_noret_decl(f_2733)
static void C_ccall f_2733(C_word c,C_word *av) C_noret;
C_noret_decl(f_2736)
static void C_ccall f_2736(C_word c,C_word *av) C_noret;
C_noret_decl(f_2739)
static void C_ccall f_2739(C_word c,C_word *av) C_noret;
C_noret_decl(f_4027)
static void C_ccall f_4027(C_word c,C_word *av) C_noret;
C_noret_decl(f_5536)
static void C_fcall f_5536(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2970)
static void C_ccall f_2970(C_word c,C_word *av) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word *av) C_noret;
C_noret_decl(f_2976)
static void C_ccall f_2976(C_word c,C_word *av) C_noret;
C_noret_decl(f_2973)
static void C_ccall f_2973(C_word c,C_word *av) C_noret;
C_noret_decl(f_3003)
static void C_ccall f_3003(C_word c,C_word *av) C_noret;
C_noret_decl(f_3000)
static void C_ccall f_3000(C_word c,C_word *av) C_noret;
C_noret_decl(f_3006)
static void C_ccall f_3006(C_word c,C_word *av) C_noret;
C_noret_decl(f_3009)
static void C_ccall f_3009(C_word c,C_word *av) C_noret;
C_noret_decl(f_4040)
static void C_ccall f_4040(C_word c,C_word *av) C_noret;
C_noret_decl(f_2742)
static void C_ccall f_2742(C_word c,C_word *av) C_noret;
C_noret_decl(f_4043)
static void C_ccall f_4043(C_word c,C_word *av) C_noret;
C_noret_decl(f_4046)
static void C_ccall f_4046(C_word c,C_word *av) C_noret;
C_noret_decl(f_2745)
static void C_ccall f_2745(C_word c,C_word *av) C_noret;
C_noret_decl(f_2748)
static void C_ccall f_2748(C_word c,C_word *av) C_noret;
C_noret_decl(f_2841)
static void C_ccall f_2841(C_word c,C_word *av) C_noret;
C_noret_decl(f_2844)
static void C_ccall f_2844(C_word c,C_word *av) C_noret;
C_noret_decl(f_2847)
static void C_ccall f_2847(C_word c,C_word *av) C_noret;
C_noret_decl(f_3030)
static void C_ccall f_3030(C_word c,C_word *av) C_noret;
C_noret_decl(f_3033)
static void C_ccall f_3033(C_word c,C_word *av) C_noret;
C_noret_decl(f_3036)
static void C_ccall f_3036(C_word c,C_word *av) C_noret;
C_noret_decl(f_3039)
static void C_ccall f_3039(C_word c,C_word *av) C_noret;
C_noret_decl(f_4052)
static void C_ccall f_4052(C_word c,C_word *av) C_noret;
C_noret_decl(f_2751)
static void C_ccall f_2751(C_word c,C_word *av) C_noret;
C_noret_decl(f_2757)
static void C_ccall f_2757(C_word c,C_word *av) C_noret;
C_noret_decl(f_4055)
static void C_ccall f_4055(C_word c,C_word *av) C_noret;
C_noret_decl(f_4049)
static void C_ccall f_4049(C_word c,C_word *av) C_noret;
C_noret_decl(f_2754)
static void C_ccall f_2754(C_word c,C_word *av) C_noret;
C_noret_decl(f_2850)
static void C_ccall f_2850(C_word c,C_word *av) C_noret;
C_noret_decl(f_2853)
static void C_ccall f_2853(C_word c,C_word *av) C_noret;
C_noret_decl(f_2856)
static void C_ccall f_2856(C_word c,C_word *av) C_noret;
C_noret_decl(f_2859)
static void C_ccall f_2859(C_word c,C_word *av) C_noret;
C_noret_decl(f_5552)
static void C_ccall f_5552(C_word c,C_word *av) C_noret;
C_noret_decl(f_2991)
static void C_ccall f_2991(C_word c,C_word *av) C_noret;
C_noret_decl(f_2997)
static void C_ccall f_2997(C_word c,C_word *av) C_noret;
C_noret_decl(f_2994)
static void C_ccall f_2994(C_word c,C_word *av) C_noret;
C_noret_decl(f_3060)
static void C_ccall f_3060(C_word c,C_word *av) C_noret;
C_noret_decl(f_2306)
static void C_ccall f_2306(C_word c,C_word *av) C_noret;
C_noret_decl(f_2305)
static void C_ccall f_2305(C_word c,C_word *av) C_noret;
C_noret_decl(f_2302)
static void C_ccall f_2302(C_word c,C_word *av) C_noret;
C_noret_decl(f_3069)
static void C_ccall f_3069(C_word c,C_word *av) C_noret;
C_noret_decl(f_3063)
static void C_ccall f_3063(C_word c,C_word *av) C_noret;
C_noret_decl(f_2760)
static void C_ccall f_2760(C_word c,C_word *av) C_noret;
C_noret_decl(f_3066)
static void C_ccall f_3066(C_word c,C_word *av) C_noret;
C_noret_decl(f_4061)
static void C_ccall f_4061(C_word c,C_word *av) C_noret;
C_noret_decl(f_4067)
static void C_ccall f_4067(C_word c,C_word *av) C_noret;
C_noret_decl(f_4064)
static void C_ccall f_4064(C_word c,C_word *av) C_noret;
C_noret_decl(f_2769)
static void C_ccall f_2769(C_word c,C_word *av) C_noret;
C_noret_decl(f_2763)
static void C_ccall f_2763(C_word c,C_word *av) C_noret;
C_noret_decl(f_4058)
static void C_ccall f_4058(C_word c,C_word *av) C_noret;
C_noret_decl(f_2766)
static void C_ccall f_2766(C_word c,C_word *av) C_noret;
C_noret_decl(f_2823)
static void C_ccall f_2823(C_word c,C_word *av) C_noret;
C_noret_decl(f_2820)
static void C_ccall f_2820(C_word c,C_word *av) C_noret;
C_noret_decl(f_2826)
static void C_ccall f_2826(C_word c,C_word *av) C_noret;
C_noret_decl(f_2829)
static void C_ccall f_2829(C_word c,C_word *av) C_noret;
C_noret_decl(f_3495)
static void C_ccall f_3495(C_word c,C_word *av) C_noret;
C_noret_decl(f_3498)
static void C_ccall f_3498(C_word c,C_word *av) C_noret;
C_noret_decl(f_3492)
static void C_ccall f_3492(C_word c,C_word *av) C_noret;
C_noret_decl(f_2961)
static void C_ccall f_2961(C_word c,C_word *av) C_noret;
C_noret_decl(f_2967)
static void C_ccall f_2967(C_word c,C_word *av) C_noret;
C_noret_decl(f_2964)
static void C_ccall f_2964(C_word c,C_word *av) C_noret;
C_noret_decl(f_3012)
static void C_ccall f_3012(C_word c,C_word *av) C_noret;
C_noret_decl(f_3015)
static void C_ccall f_3015(C_word c,C_word *av) C_noret;
C_noret_decl(f_2772)
static void C_ccall f_2772(C_word c,C_word *av) C_noret;
C_noret_decl(f_3018)
static void C_ccall f_3018(C_word c,C_word *av) C_noret;
C_noret_decl(f_2778)
static void C_ccall f_2778(C_word c,C_word *av) C_noret;
C_noret_decl(f_2775)
static void C_ccall f_2775(C_word c,C_word *av) C_noret;
C_noret_decl(f_2832)
static void C_ccall f_2832(C_word c,C_word *av) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word *av) C_noret;
C_noret_decl(f_2838)
static void C_ccall f_2838(C_word c,C_word *av) C_noret;
C_noret_decl(f_3042)
static void C_ccall f_3042(C_word c,C_word *av) C_noret;
C_noret_decl(f_3048)
static void C_ccall f_3048(C_word c,C_word *av) C_noret;
C_noret_decl(f_3045)
static void C_ccall f_3045(C_word c,C_word *av) C_noret;
C_noret_decl(f_2907)
static void C_ccall f_2907(C_word c,C_word *av) C_noret;
C_noret_decl(f_2901)
static void C_ccall f_2901(C_word c,C_word *av) C_noret;
C_noret_decl(f_2904)
static void C_ccall f_2904(C_word c,C_word *av) C_noret;
C_noret_decl(f_3072)
static void C_ccall f_3072(C_word c,C_word *av) C_noret;
C_noret_decl(f_3078)
static void C_ccall f_3078(C_word c,C_word *av) C_noret;
C_noret_decl(f_3075)
static void C_ccall f_3075(C_word c,C_word *av) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237(C_word c,C_word *av) C_noret;
C_noret_decl(f_3051)
static void C_ccall f_3051(C_word c,C_word *av) C_noret;
C_noret_decl(f_3057)
static void C_ccall f_3057(C_word c,C_word *av) C_noret;
C_noret_decl(f_3054)
static void C_ccall f_3054(C_word c,C_word *av) C_noret;
C_noret_decl(f_4030)
static void C_ccall f_4030(C_word c,C_word *av) C_noret;
C_noret_decl(f_4034)
static void C_ccall f_4034(C_word c,C_word *av) C_noret;
C_noret_decl(f_4037)
static void C_ccall f_4037(C_word c,C_word *av) C_noret;
C_noret_decl(f_3084)
static void C_ccall f_3084(C_word c,C_word *av) C_noret;
C_noret_decl(f_3087)
static void C_ccall f_3087(C_word c,C_word *av) C_noret;
C_noret_decl(f_3081)
static void C_ccall f_3081(C_word c,C_word *av) C_noret;
C_noret_decl(f_3132)
static void C_ccall f_3132(C_word c,C_word *av) C_noret;
C_noret_decl(f_3135)
static void C_ccall f_3135(C_word c,C_word *av) C_noret;
C_noret_decl(f_3138)
static void C_ccall f_3138(C_word c,C_word *av) C_noret;
C_noret_decl(f_5598)
static void C_ccall f_5598(C_word c,C_word *av) C_noret;
C_noret_decl(f_2706)
static void C_ccall f_2706(C_word c,C_word *av) C_noret;
C_noret_decl(f_2703)
static void C_ccall f_2703(C_word c,C_word *av) C_noret;
C_noret_decl(f_2700)
static void C_ccall f_2700(C_word c,C_word *av) C_noret;
C_noret_decl(f_3120)
static void C_ccall f_3120(C_word c,C_word *av) C_noret;
C_noret_decl(f_3123)
static void C_ccall f_3123(C_word c,C_word *av) C_noret;
C_noret_decl(f_3126)
static void C_ccall f_3126(C_word c,C_word *av) C_noret;
C_noret_decl(f_3129)
static void C_ccall f_3129(C_word c,C_word *av) C_noret;
C_noret_decl(f_2709)
static void C_ccall f_2709(C_word c,C_word *av) C_noret;
C_noret_decl(f_2718)
static void C_ccall f_2718(C_word c,C_word *av) C_noret;
C_noret_decl(f_2715)
static void C_ccall f_2715(C_word c,C_word *av) C_noret;
C_noret_decl(f_2712)
static void C_ccall f_2712(C_word c,C_word *av) C_noret;
C_noret_decl(f_2126)
static void C_ccall f_2126(C_word c,C_word *av) C_noret;
C_noret_decl(f_2376)
static void C_ccall f_2376(C_word c,C_word *av) C_noret;
C_noret_decl(f_2213)
static void C_ccall f_2213(C_word c,C_word *av) C_noret;
C_noret_decl(f_1633)
static void C_ccall f_1633(C_word c,C_word *av) C_noret;
C_noret_decl(f_1658)
static void C_ccall f_1658(C_word c,C_word *av) C_noret;
C_noret_decl(f_1655)
static void C_ccall f_1655(C_word c,C_word *av) C_noret;
C_noret_decl(f_2201)
static void C_ccall f_2201(C_word c,C_word *av) C_noret;
C_noret_decl(f_2781)
static void C_ccall f_2781(C_word c,C_word *av) C_noret;
C_noret_decl(f_2787)
static void C_ccall f_2787(C_word c,C_word *av) C_noret;
C_noret_decl(f_2805)
static void C_ccall f_2805(C_word c,C_word *av) C_noret;
C_noret_decl(f_2808)
static void C_ccall f_2808(C_word c,C_word *av) C_noret;
C_noret_decl(f_2784)
static void C_ccall f_2784(C_word c,C_word *av) C_noret;
C_noret_decl(f_2802)
static void C_ccall f_2802(C_word c,C_word *av) C_noret;
C_noret_decl(f_2631)
static void C_ccall f_2631(C_word c,C_word *av) C_noret;
C_noret_decl(f_5529)
static void C_ccall f_5529(C_word c,C_word *av) C_noret;
C_noret_decl(f_2634)
static void C_ccall f_2634(C_word c,C_word *av) C_noret;
C_noret_decl(f_5527)
static void C_ccall f_5527(C_word c,C_word *av) C_noret;
C_noret_decl(f_2637)
static void C_ccall f_2637(C_word c,C_word *av) C_noret;
C_noret_decl(f_2790)
static void C_ccall f_2790(C_word c,C_word *av) C_noret;
C_noret_decl(f_2799)
static void C_ccall f_2799(C_word c,C_word *av) C_noret;
C_noret_decl(f_2796)
static void C_ccall f_2796(C_word c,C_word *av) C_noret;
C_noret_decl(f_2817)
static void C_ccall f_2817(C_word c,C_word *av) C_noret;
C_noret_decl(f_3150)
static void C_ccall f_3150(C_word c,C_word *av) C_noret;
C_noret_decl(f_2793)
static void C_ccall f_2793(C_word c,C_word *av) C_noret;
C_noret_decl(f_2811)
static void C_ccall f_2811(C_word c,C_word *av) C_noret;
C_noret_decl(f_2814)
static void C_ccall f_2814(C_word c,C_word *av) C_noret;
C_noret_decl(f_3159)
static void C_ccall f_3159(C_word c,C_word *av) C_noret;
C_noret_decl(f_3156)
static void C_ccall f_3156(C_word c,C_word *av) C_noret;
C_noret_decl(f_3153)
static void C_ccall f_3153(C_word c,C_word *av) C_noret;
C_noret_decl(f_3141)
static void C_ccall f_3141(C_word c,C_word *av) C_noret;
C_noret_decl(f_3147)
static void C_ccall f_3147(C_word c,C_word *av) C_noret;
C_noret_decl(f_3144)
static void C_ccall f_3144(C_word c,C_word *av) C_noret;
C_noret_decl(f_3171)
static void C_ccall f_3171(C_word c,C_word *av) C_noret;
C_noret_decl(f_3177)
static void C_ccall f_3177(C_word c,C_word *av) C_noret;
C_noret_decl(f_3174)
static void C_ccall f_3174(C_word c,C_word *av) C_noret;
C_noret_decl(f_4236)
static void C_ccall f_4236(C_word c,C_word *av) C_noret;
C_noret_decl(f_3162)
static void C_ccall f_3162(C_word c,C_word *av) C_noret;
C_noret_decl(f_3168)
static void C_ccall f_3168(C_word c,C_word *av) C_noret;
C_noret_decl(f_3165)
static void C_ccall f_3165(C_word c,C_word *av) C_noret;
C_noret_decl(f_2670)
static void C_ccall f_2670(C_word c,C_word *av) C_noret;
C_noret_decl(f_2679)
static void C_ccall f_2679(C_word c,C_word *av) C_noret;
C_noret_decl(f_2673)
static void C_ccall f_2673(C_word c,C_word *av) C_noret;
C_noret_decl(f_2676)
static void C_ccall f_2676(C_word c,C_word *av) C_noret;
C_noret_decl(f_2488)
static void C_ccall f_2488(C_word c,C_word *av) C_noret;
C_noret_decl(f_2484)
static void C_ccall f_2484(C_word c,C_word *av) C_noret;
C_noret_decl(f_3111)
static void C_ccall f_3111(C_word c,C_word *av) C_noret;
C_noret_decl(f_3117)
static void C_ccall f_3117(C_word c,C_word *av) C_noret;
C_noret_decl(f_3114)
static void C_ccall f_3114(C_word c,C_word *av) C_noret;
C_noret_decl(f_3195)
static void C_ccall f_3195(C_word c,C_word *av) C_noret;
C_noret_decl(f_3192)
static void C_ccall f_3192(C_word c,C_word *av) C_noret;
C_noret_decl(f_3198)
static void C_ccall f_3198(C_word c,C_word *av) C_noret;
C_noret_decl(f_2643)
static void C_ccall f_2643(C_word c,C_word *av) C_noret;
C_noret_decl(f_2640)
static void C_ccall f_2640(C_word c,C_word *av) C_noret;
C_noret_decl(f_2646)
static void C_ccall f_2646(C_word c,C_word *av) C_noret;
C_noret_decl(f_2649)
static void C_ccall f_2649(C_word c,C_word *av) C_noret;
C_noret_decl(f_3732)
static void C_ccall f_3732(C_word c,C_word *av) C_noret;
C_noret_decl(f_3734)
static void C_ccall f_3734(C_word c,C_word *av) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word *av) C_noret;
C_noret_decl(f_3105)
static void C_ccall f_3105(C_word c,C_word *av) C_noret;
C_noret_decl(f_3108)
static void C_ccall f_3108(C_word c,C_word *av) C_noret;
C_noret_decl(f_3183)
static void C_ccall f_3183(C_word c,C_word *av) C_noret;
C_noret_decl(f_3189)
static void C_ccall f_3189(C_word c,C_word *av) C_noret;
C_noret_decl(f_2020)
static void C_ccall f_2020(C_word c,C_word *av) C_noret;
C_noret_decl(f_3186)
static void C_ccall f_3186(C_word c,C_word *av) C_noret;
C_noret_decl(f_2022)
static void C_fcall f_2022(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2652)
static void C_ccall f_2652(C_word c,C_word *av) C_noret;
C_noret_decl(f_3180)
static void C_ccall f_3180(C_word c,C_word *av) C_noret;
C_noret_decl(f_2655)
static void C_ccall f_2655(C_word c,C_word *av) C_noret;
C_noret_decl(f_2658)
static void C_ccall f_2658(C_word c,C_word *av) C_noret;
C_noret_decl(f_3720)
static void C_ccall f_3720(C_word c,C_word *av) C_noret;
C_noret_decl(f_3723)
static void C_ccall f_3723(C_word c,C_word *av) C_noret;
C_noret_decl(f_3726)
static void C_ccall f_3726(C_word c,C_word *av) C_noret;
C_noret_decl(f_3729)
static void C_ccall f_3729(C_word c,C_word *av) C_noret;
C_noret_decl(f_2622)
static void C_ccall f_2622(C_word c,C_word *av) C_noret;
C_noret_decl(f_2625)
static void C_ccall f_2625(C_word c,C_word *av) C_noret;
C_noret_decl(f_2628)
static void C_ccall f_2628(C_word c,C_word *av) C_noret;
C_noret_decl(f_2880)
static void C_ccall f_2880(C_word c,C_word *av) C_noret;
C_noret_decl(f_3754)
static void C_ccall f_3754(C_word c,C_word *av) C_noret;
C_noret_decl(f_3621)
static void C_ccall f_3621(C_word c,C_word *av) C_noret;
C_noret_decl(f_2889)
static void C_ccall f_2889(C_word c,C_word *av) C_noret;
C_noret_decl(f_2883)
static void C_ccall f_2883(C_word c,C_word *av) C_noret;
C_noret_decl(f_3624)
static void C_ccall f_3624(C_word c,C_word *av) C_noret;
C_noret_decl(f_2886)
static void C_ccall f_2886(C_word c,C_word *av) C_noret;
C_noret_decl(f_3627)
static void C_ccall f_3627(C_word c,C_word *av) C_noret;
C_noret_decl(f_1612)
static void C_ccall f_1612(C_word c,C_word *av) C_noret;
C_noret_decl(f_2892)
static void C_ccall f_2892(C_word c,C_word *av) C_noret;
C_noret_decl(f_2898)
static void C_ccall f_2898(C_word c,C_word *av) C_noret;
C_noret_decl(f_2895)
static void C_ccall f_2895(C_word c,C_word *av) C_noret;
C_noret_decl(f_2862)
static void C_ccall f_2862(C_word c,C_word *av) C_noret;
C_noret_decl(f_2868)
static void C_ccall f_2868(C_word c,C_word *av) C_noret;
C_noret_decl(f_2865)
static void C_ccall f_2865(C_word c,C_word *av) C_noret;
C_noret_decl(f_2871)
static void C_ccall f_2871(C_word c,C_word *av) C_noret;
C_noret_decl(f_2877)
static void C_ccall f_2877(C_word c,C_word *av) C_noret;
C_noret_decl(f_3769)
static void C_ccall f_3769(C_word c,C_word *av) C_noret;
C_noret_decl(f_2874)
static void C_ccall f_2874(C_word c,C_word *av) C_noret;
C_noret_decl(f_4082)
static void C_ccall f_4082(C_word c,C_word *av) C_noret;
C_noret_decl(f_3663)
static void C_ccall f_3663(C_word c,C_word *av) C_noret;
C_noret_decl(f_3666)
static void C_ccall f_3666(C_word c,C_word *av) C_noret;
C_noret_decl(f_3660)
static void C_ccall f_3660(C_word c,C_word *av) C_noret;
C_noret_decl(f_4079)
static void C_ccall f_4079(C_word c,C_word *av) C_noret;
C_noret_decl(f_4076)
static void C_ccall f_4076(C_word c,C_word *av) C_noret;
C_noret_decl(f_3669)
static void C_ccall f_3669(C_word c,C_word *av) C_noret;
C_noret_decl(f_5129)
static void C_ccall f_5129(C_word c,C_word *av) C_noret;
C_noret_decl(f_2047)
static void C_ccall f_2047(C_word c,C_word *av) C_noret;
C_noret_decl(f_4093)
static void C_ccall f_4093(C_word c,C_word *av) C_noret;
C_noret_decl(f_4091)
static void C_ccall f_4091(C_word c,C_word *av) C_noret;
C_noret_decl(f_3651)
static void C_ccall f_3651(C_word c,C_word *av) C_noret;
C_noret_decl(f_3657)
static void C_ccall f_3657(C_word c,C_word *av) C_noret;
C_noret_decl(f_3654)
static void C_ccall f_3654(C_word c,C_word *av) C_noret;
C_noret_decl(f_4085)
static void C_ccall f_4085(C_word c,C_word *av) C_noret;
C_noret_decl(f_4088)
static void C_ccall f_4088(C_word c,C_word *av) C_noret;
C_noret_decl(f_3642)
static void C_ccall f_3642(C_word c,C_word *av) C_noret;
C_noret_decl(f_3645)
static void C_ccall f_3645(C_word c,C_word *av) C_noret;
C_noret_decl(f_3648)
static void C_ccall f_3648(C_word c,C_word *av) C_noret;
C_noret_decl(f_1674)
static void C_ccall f_1674(C_word c,C_word *av) C_noret;
C_noret_decl(f_1672)
static void C_fcall f_1672(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1670)
static void C_ccall f_1670(C_word c,C_word *av) C_noret;
C_noret_decl(f_3630)
static void C_ccall f_3630(C_word c,C_word *av) C_noret;
C_noret_decl(f_2299)
static void C_ccall f_2299(C_word c,C_word *av) C_noret;
C_noret_decl(f_3633)
static void C_ccall f_3633(C_word c,C_word *av) C_noret;
C_noret_decl(f_2296)
static void C_ccall f_2296(C_word c,C_word *av) C_noret;
C_noret_decl(f_3636)
static void C_ccall f_3636(C_word c,C_word *av) C_noret;
C_noret_decl(f_2293)
static void C_ccall f_2293(C_word c,C_word *av) C_noret;
C_noret_decl(f_3639)
static void C_ccall f_3639(C_word c,C_word *av) C_noret;
C_noret_decl(f_2290)
static void C_ccall f_2290(C_word c,C_word *av) C_noret;
C_noret_decl(f_3240)
static void C_ccall f_3240(C_word c,C_word *av) C_noret;
C_noret_decl(f_3243)
static void C_ccall f_3243(C_word c,C_word *av) C_noret;
C_noret_decl(f_3246)
static void C_ccall f_3246(C_word c,C_word *av) C_noret;
C_noret_decl(f_3249)
static void C_ccall f_3249(C_word c,C_word *av) C_noret;
C_noret_decl(f_2003)
static void C_ccall f_2003(C_word c,C_word *av) C_noret;
C_noret_decl(f_3231)
static void C_ccall f_3231(C_word c,C_word *av) C_noret;
C_noret_decl(f_3234)
static void C_ccall f_3234(C_word c,C_word *av) C_noret;
C_noret_decl(f_3237)
static void C_ccall f_3237(C_word c,C_word *av) C_noret;
C_noret_decl(f_2278)
static void C_ccall f_2278(C_word c,C_word *av) C_noret;
C_noret_decl(f_2190)
static void C_ccall f_2190(C_word c,C_word *av) C_noret;
C_noret_decl(f_1667)
static void C_ccall f_1667(C_word c,C_word *av) C_noret;
C_noret_decl(f_2195)
static void C_fcall f_2195(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2193)
static void C_ccall f_2193(C_word c,C_word *av) C_noret;
C_noret_decl(f_2607)
static void C_ccall f_2607(C_word c,C_word *av) C_noret;
C_noret_decl(f_2604)
static void C_ccall f_2604(C_word c,C_word *av) C_noret;
C_noret_decl(f_2601)
static void C_ccall f_2601(C_word c,C_word *av) C_noret;
C_noret_decl(f_1664)
static void C_ccall f_1664(C_word c,C_word *av) C_noret;
C_noret_decl(f_1661)
static void C_ccall f_1661(C_word c,C_word *av) C_noret;
C_noret_decl(f_2287)
static void C_ccall f_2287(C_word c,C_word *av) C_noret;
C_noret_decl(f_2281)
static void C_ccall f_2281(C_word c,C_word *av) C_noret;
C_noret_decl(f_2284)
static void C_ccall f_2284(C_word c,C_word *av) C_noret;
C_noret_decl(f_2619)
static void C_ccall f_2619(C_word c,C_word *av) C_noret;
C_noret_decl(f_2616)
static void C_ccall f_2616(C_word c,C_word *av) C_noret;
C_noret_decl(f_2613)
static void C_ccall f_2613(C_word c,C_word *av) C_noret;
C_noret_decl(f_2610)
static void C_ccall f_2610(C_word c,C_word *av) C_noret;
C_noret_decl(f_2067)
static void C_ccall f_2067(C_word c,C_word *av) C_noret;
C_noret_decl(f_4073)
static void C_ccall f_4073(C_word c,C_word *av) C_noret;
C_noret_decl(f_4070)
static void C_ccall f_4070(C_word c,C_word *av) C_noret;
C_noret_decl(f_3342)
static void C_ccall f_3342(C_word c,C_word *av) C_noret;
C_noret_decl(f_3345)
static void C_ccall f_3345(C_word c,C_word *av) C_noret;
C_noret_decl(f_3348)
static void C_ccall f_3348(C_word c,C_word *av) C_noret;
C_noret_decl(f_1609)
static void C_ccall f_1609(C_word c,C_word *av) C_noret;
C_noret_decl(f_1606)
static void C_ccall f_1606(C_word c,C_word *av) C_noret;
C_noret_decl(f_2070)
static void C_fcall f_2070(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3396)
static void C_ccall f_3396(C_word c,C_word *av) C_noret;
C_noret_decl(f_3393)
static void C_ccall f_3393(C_word c,C_word *av) C_noret;
C_noret_decl(f_3390)
static void C_ccall f_3390(C_word c,C_word *av) C_noret;
C_noret_decl(f_3717)
static void C_ccall f_3717(C_word c,C_word *av) C_noret;
C_noret_decl(f_3330)
static void C_ccall f_3330(C_word c,C_word *av) C_noret;
C_noret_decl(f_3714)
static void C_ccall f_3714(C_word c,C_word *av) C_noret;
C_noret_decl(f_3333)
static void C_ccall f_3333(C_word c,C_word *av) C_noret;
C_noret_decl(f_3711)
static void C_ccall f_3711(C_word c,C_word *av) C_noret;
C_noret_decl(f_3336)
static void C_ccall f_3336(C_word c,C_word *av) C_noret;
C_noret_decl(f_3339)
static void C_ccall f_3339(C_word c,C_word *av) C_noret;
C_noret_decl(f_4161)
static void C_ccall f_4161(C_word c,C_word *av) C_noret;
C_noret_decl(f_4168)
static void C_ccall f_4168(C_word c,C_word *av) C_noret;
C_noret_decl(f_3399)
static void C_ccall f_3399(C_word c,C_word *av) C_noret;
C_noret_decl(f_3708)
static void C_ccall f_3708(C_word c,C_word *av) C_noret;
C_noret_decl(f_3705)
static void C_ccall f_3705(C_word c,C_word *av) C_noret;
C_noret_decl(f_3363)
static void C_ccall f_3363(C_word c,C_word *av) C_noret;
C_noret_decl(f_3360)
static void C_ccall f_3360(C_word c,C_word *av) C_noret;
C_noret_decl(f_3702)
static void C_ccall f_3702(C_word c,C_word *av) C_noret;
C_noret_decl(f_3366)
static void C_ccall f_3366(C_word c,C_word *av) C_noret;
C_noret_decl(f_3369)
static void C_ccall f_3369(C_word c,C_word *av) C_noret;
C_noret_decl(f_3093)
static void C_ccall f_3093(C_word c,C_word *av) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word *av) C_noret;
C_noret_decl(f_3096)
static void C_ccall f_3096(C_word c,C_word *av) C_noret;
C_noret_decl(f_3090)
static void C_ccall f_3090(C_word c,C_word *av) C_noret;
C_noret_decl(f_5173)
static void C_ccall f_5173(C_word c,C_word *av) C_noret;
C_noret_decl(f_5171)
static void C_ccall f_5171(C_word c,C_word *av) C_noret;
C_noret_decl(f_3387)
static void C_ccall f_3387(C_word c,C_word *av) C_noret;
C_noret_decl(f_3381)
static void C_ccall f_3381(C_word c,C_word *av) C_noret;
C_noret_decl(f_3384)
static void C_ccall f_3384(C_word c,C_word *av) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word *av) C_noret;
C_noret_decl(f_3615)
static void C_ccall f_3615(C_word c,C_word *av) C_noret;
C_noret_decl(f_3612)
static void C_ccall f_3612(C_word c,C_word *av) C_noret;
C_noret_decl(f_2682)
static void C_ccall f_2682(C_word c,C_word *av) C_noret;
C_noret_decl(f_2688)
static void C_ccall f_2688(C_word c,C_word *av) C_noret;
C_noret_decl(f_2685)
static void C_ccall f_2685(C_word c,C_word *av) C_noret;
C_noret_decl(f_4566)
static void C_ccall f_4566(C_word c,C_word *av) C_noret;
C_noret_decl(f_3375)
static void C_ccall f_3375(C_word c,C_word *av) C_noret;
C_noret_decl(f_3378)
static void C_ccall f_3378(C_word c,C_word *av) C_noret;
C_noret_decl(f_3372)
static void C_ccall f_3372(C_word c,C_word *av) C_noret;
C_noret_decl(f_5113)
static void C_ccall f_5113(C_word c,C_word *av) C_noret;
C_noret_decl(f_4562)
static void C_ccall f_4562(C_word c,C_word *av) C_noret;
C_noret_decl(f_3222)
static void C_ccall f_3222(C_word c,C_word *av) C_noret;
C_noret_decl(f_3312)
static void C_ccall f_3312(C_word c,C_word *av) C_noret;
C_noret_decl(f_3609)
static void C_ccall f_3609(C_word c,C_word *av) C_noret;
C_noret_decl(f_3228)
static void C_ccall f_3228(C_word c,C_word *av) C_noret;
C_noret_decl(f_3318)
static void C_ccall f_3318(C_word c,C_word *av) C_noret;
C_noret_decl(f_3225)
static void C_ccall f_3225(C_word c,C_word *av) C_noret;
C_noret_decl(f_3315)
static void C_ccall f_3315(C_word c,C_word *av) C_noret;
C_noret_decl(f_3606)
static void C_ccall f_3606(C_word c,C_word *av) C_noret;
C_noret_decl(f_4103)
static void C_ccall f_4103(C_word c,C_word *av) C_noret;
C_noret_decl(f_3603)
static void C_ccall f_3603(C_word c,C_word *av) C_noret;
C_noret_decl(f_3600)
static void C_ccall f_3600(C_word c,C_word *av) C_noret;
C_noret_decl(f_2691)
static void C_ccall f_2691(C_word c,C_word *av) C_noret;
C_noret_decl(f_2697)
static void C_ccall f_2697(C_word c,C_word *av) C_noret;
C_noret_decl(f_2694)
static void C_ccall f_2694(C_word c,C_word *av) C_noret;
C_noret_decl(f_3210)
static void C_ccall f_3210(C_word c,C_word *av) C_noret;
C_noret_decl(f_3219)
static void C_ccall f_3219(C_word c,C_word *av) C_noret;
C_noret_decl(f_3216)
static void C_ccall f_3216(C_word c,C_word *av) C_noret;
C_noret_decl(f_3213)
static void C_ccall f_3213(C_word c,C_word *av) C_noret;
C_noret_decl(f_2661)
static void C_ccall f_2661(C_word c,C_word *av) C_noret;
C_noret_decl(f_2667)
static void C_ccall f_2667(C_word c,C_word *av) C_noret;
C_noret_decl(f_2664)
static void C_ccall f_2664(C_word c,C_word *av) C_noret;
C_noret_decl(f_3201)
static void C_ccall f_3201(C_word c,C_word *av) C_noret;
C_noret_decl(f_3207)
static void C_ccall f_3207(C_word c,C_word *av) C_noret;
C_noret_decl(f_3204)
static void C_ccall f_3204(C_word c,C_word *av) C_noret;
C_noret_decl(f_3261)
static void C_ccall f_3261(C_word c,C_word *av) C_noret;
C_noret_decl(f_3351)
static void C_ccall f_3351(C_word c,C_word *av) C_noret;
C_noret_decl(f_3267)
static void C_ccall f_3267(C_word c,C_word *av) C_noret;
C_noret_decl(f_3357)
static void C_ccall f_3357(C_word c,C_word *av) C_noret;
C_noret_decl(f_3264)
static void C_ccall f_3264(C_word c,C_word *av) C_noret;
C_noret_decl(f_3354)
static void C_ccall f_3354(C_word c,C_word *av) C_noret;
C_noret_decl(f_4538)
static void C_fcall f_4538(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3300)
static void C_ccall f_3300(C_word c,C_word *av) C_noret;
C_noret_decl(f_3252)
static void C_ccall f_3252(C_word c,C_word *av) C_noret;
C_noret_decl(f_3309)
static void C_ccall f_3309(C_word c,C_word *av) C_noret;
C_noret_decl(f_3255)
static void C_ccall f_3255(C_word c,C_word *av) C_noret;
C_noret_decl(f_3303)
static void C_ccall f_3303(C_word c,C_word *av) C_noret;
C_noret_decl(f_3258)
static void C_ccall f_3258(C_word c,C_word *av) C_noret;
C_noret_decl(f_3306)
static void C_ccall f_3306(C_word c,C_word *av) C_noret;
C_noret_decl(f_3822)
static void C_ccall f_3822(C_word c,C_word *av) C_noret;
C_noret_decl(f_3824)
static void C_ccall f_3824(C_word c,C_word *av) C_noret;
C_noret_decl(f_3321)
static void C_ccall f_3321(C_word c,C_word *av) C_noret;
C_noret_decl(f_3696)
static void C_ccall f_3696(C_word c,C_word *av) C_noret;
C_noret_decl(f_3327)
static void C_ccall f_3327(C_word c,C_word *av) C_noret;
C_noret_decl(f_3693)
static void C_ccall f_3693(C_word c,C_word *av) C_noret;
C_noret_decl(f_3690)
static void C_ccall f_3690(C_word c,C_word *av) C_noret;
C_noret_decl(f_3324)
static void C_ccall f_3324(C_word c,C_word *av) C_noret;
C_noret_decl(f_3699)
static void C_ccall f_3699(C_word c,C_word *av) C_noret;
C_noret_decl(f_3880)
static void C_ccall f_3880(C_word c,C_word *av) C_noret;
C_noret_decl(f_3684)
static void C_ccall f_3684(C_word c,C_word *av) C_noret;
C_noret_decl(f_3681)
static void C_ccall f_3681(C_word c,C_word *av) C_noret;
C_noret_decl(f_3687)
static void C_ccall f_3687(C_word c,C_word *av) C_noret;
C_noret_decl(f_3675)
static void C_ccall f_3675(C_word c,C_word *av) C_noret;
C_noret_decl(f_3672)
static void C_ccall f_3672(C_word c,C_word *av) C_noret;
C_noret_decl(f_3678)
static void C_ccall f_3678(C_word c,C_word *av) C_noret;
C_noret_decl(f_4286)
static void C_ccall f_4286(C_word c,C_word *av) C_noret;

C_noret_decl(trf_4319)
static void C_ccall trf_4319(C_word c,C_word *av) C_noret;
static void C_ccall trf_4319(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4319(t0,t1);}

C_noret_decl(trf_4784)
static void C_ccall trf_4784(C_word c,C_word *av) C_noret;
static void C_ccall trf_4784(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4784(t0,t1);}

C_noret_decl(trf_4488)
static void C_ccall trf_4488(C_word c,C_word *av) C_noret;
static void C_ccall trf_4488(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4488(t0,t1);}

C_noret_decl(trf_4790)
static void C_ccall trf_4790(C_word c,C_word *av) C_noret;
static void C_ccall trf_4790(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4790(t0,t1);}

C_noret_decl(trf_4821)
static void C_ccall trf_4821(C_word c,C_word *av) C_noret;
static void C_ccall trf_4821(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4821(t0,t1);}

C_noret_decl(trf_4824)
static void C_ccall trf_4824(C_word c,C_word *av) C_noret;
static void C_ccall trf_4824(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4824(t0,t1);}

C_noret_decl(trf_5180)
static void C_ccall trf_5180(C_word c,C_word *av) C_noret;
static void C_ccall trf_5180(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5180(t0,t1);}

C_noret_decl(trf_5632)
static void C_ccall trf_5632(C_word c,C_word *av) C_noret;
static void C_ccall trf_5632(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5632(t0,t1,t2);}

C_noret_decl(trf_1773)
static void C_ccall trf_1773(C_word c,C_word *av) C_noret;
static void C_ccall trf_1773(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1773(t0,t1);}

C_noret_decl(trf_5043)
static void C_ccall trf_5043(C_word c,C_word *av) C_noret;
static void C_ccall trf_5043(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5043(t0,t1);}

C_noret_decl(trf_1785)
static void C_ccall trf_1785(C_word c,C_word *av) C_noret;
static void C_ccall trf_1785(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1785(t0,t1);}

C_noret_decl(trf_1782)
static void C_ccall trf_1782(C_word c,C_word *av) C_noret;
static void C_ccall trf_1782(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1782(t0,t1);}

C_noret_decl(trf_5536)
static void C_ccall trf_5536(C_word c,C_word *av) C_noret;
static void C_ccall trf_5536(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5536(t0,t1);}

C_noret_decl(trf_2022)
static void C_ccall trf_2022(C_word c,C_word *av) C_noret;
static void C_ccall trf_2022(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2022(t0,t1,t2);}

C_noret_decl(trf_1672)
static void C_ccall trf_1672(C_word c,C_word *av) C_noret;
static void C_ccall trf_1672(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1672(t0,t1,t2,t3);}

C_noret_decl(trf_2195)
static void C_ccall trf_2195(C_word c,C_word *av) C_noret;
static void C_ccall trf_2195(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2195(t0,t1,t2,t3);}

C_noret_decl(trf_2070)
static void C_ccall trf_2070(C_word c,C_word *av) C_noret;
static void C_ccall trf_2070(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2070(t0,t1);}

C_noret_decl(trf_4538)
static void C_ccall trf_4538(C_word c,C_word *av) C_noret;
static void C_ccall trf_4538(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4538(t0,t1);}

/* k2087 in k2068 in k1972 in rewrite-apply in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_2089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_2089,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3460 in k3457 in k3454 in k3451 in k3448 in k3445 in k3442 in k3439 in k3436 in k3433 in k3430 in k3427 in k3424 in k3421 in k3418 in k3415 in k3412 in k3409 in k3406 in k3403 in k3400 in k3397 in ... */
static void C_ccall f_3462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3462,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3465,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:880: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[321];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[322];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3463 in k3460 in k3457 in k3454 in k3451 in k3448 in k3445 in k3442 in k3439 in k3436 in k3433 in k3430 in k3427 in k3424 in k3421 in k3418 in k3415 in k3412 in k3409 in k3406 in k3403 in k3400 in ... */
static void C_ccall f_3465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3465,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3468,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:881: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[319];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[320];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3466 in k3463 in k3460 in k3457 in k3454 in k3451 in k3448 in k3445 in k3442 in k3439 in k3436 in k3433 in k3430 in k3427 in k3424 in k3421 in k3418 in k3415 in k3412 in k3409 in k3406 in k3403 in ... */
static void C_ccall f_3468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3468,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3471,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:882: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[317];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[318];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3448 in k3445 in k3442 in k3439 in k3436 in k3433 in k3430 in k3427 in k3424 in k3421 in k3418 in k3415 in k3412 in k3409 in k3406 in k3403 in k3400 in k3397 in k3394 in k3391 in k3388 in k3385 in ... */
static void C_ccall f_3450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3450,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3453,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:875: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[329];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[330];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fix(2);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3451 in k3448 in k3445 in k3442 in k3439 in k3436 in k3433 in k3430 in k3427 in k3424 in k3421 in k3418 in k3415 in k3412 in k3409 in k3406 in k3403 in k3400 in k3397 in k3394 in k3391 in k3388 in ... */
static void C_ccall f_3453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3453,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3456,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:876: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[327];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[328];
av2[6]=C_SCHEME_TRUE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3454 in k3451 in k3448 in k3445 in k3442 in k3439 in k3436 in k3433 in k3430 in k3427 in k3424 in k3421 in k3418 in k3415 in k3412 in k3409 in k3406 in k3403 in k3400 in k3397 in k3394 in k3391 in ... */
static void C_ccall f_3456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3456,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3459,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:878: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[325];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[326];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3457 in k3454 in k3451 in k3448 in k3445 in k3442 in k3439 in k3436 in k3433 in k3430 in k3427 in k3424 in k3421 in k3418 in k3415 in k3412 in k3409 in k3406 in k3403 in k3400 in k3397 in k3394 in ... */
static void C_ccall f_3459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3459,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3462,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:879: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[323];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[324];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_1956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_1956,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1959,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:400: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[795];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_1959(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_1959,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1962,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4768,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:402: rewrite */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[903];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4996 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_4998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4998,2,av);}
/* c-platform.scm:379: rewrite */
t2=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[904];
av2[3]=C_fix(8);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4588 in a4457 in k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in ... */
static void C_ccall f_4590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4590,2,av);}
t2=((C_word*)t0)[2];
f_4538(t2,C_i_not(t1));}

/* a4372 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in ... */
static void C_ccall f_4373(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4373,6,av);}
a=C_alloc(5);
t6=C_i_length(t5);
t7=C_eqp(C_fix(1),t6);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=C_slot(t8,C_fix(1));
t10=C_eqp(lf[42],t9);
if(C_truep(t10)){
t11=C_slot(t8,C_fix(2));
t12=C_i_car(t11);
t13=t12;
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4403,a[2]=t13,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tweaks.scm:51: ##sys#get */
t15=*((C_word*)lf[52]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=t14;
av2[2]=t13;
av2[3]=lf[53];
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}
else{
t11=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}
else{
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k1972 in rewrite-apply in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_1974(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_1974,2,av);}
a=C_alloc(16);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
t5=C_slot(t2,C_fix(1));
t6=C_eqp(lf[41],t5);
if(C_truep(t6)){
t7=C_a_i_list1(&a,1,C_SCHEME_FALSE);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1997,a[2]=((C_word*)t0)[3],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=((C_word*)t0)[2];
t11=C_u_i_car(t10);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2003,a[2]=t9,a[3]=t11,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2067,a[2]=t2,a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:442: butlast */
t14=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t14;
av2[1]=t13;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t14+1)))(3,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2070,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=C_slot(t4,C_fix(1));
t9=C_eqp(lf[42],t8);
if(C_truep(t9)){
t10=C_i_length(((C_word*)t0)[2]);
t11=C_eqp(C_fix(2),t10);
if(C_truep(t11)){
t12=C_slot(t4,C_fix(2));
t13=C_i_car(t12);
if(C_truep((C_truep(C_eqp(t13,lf[49]))?C_SCHEME_TRUE:(C_truep(C_eqp(t13,lf[50]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2126,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* tweaks.scm:51: ##sys#get */
t15=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t15;
av2[1]=t14;
av2[2]=t13;
av2[3]=lf[53];
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}
else{
t14=t7;
f_2070(t14,C_SCHEME_FALSE);}}
else{
t12=t7;
f_2070(t12,C_SCHEME_FALSE);}}
else{
t10=t7;
f_2070(t10,C_SCHEME_FALSE);}}}

/* k4342 in a4285 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in ... */
static void C_ccall f_4344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4344,2,av);}
t2=((C_word*)t0)[2];
f_4319(t2,C_i_not(t1));}

/* k3400 in k3397 in k3394 in k3391 in k3388 in k3385 in k3382 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3361 in k3358 in k3355 in k3352 in k3349 in k3346 in k3343 in k3340 in k3337 in ... */
static void C_ccall f_3402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3402,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3405,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:841: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[362];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[363];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3406 in k3403 in k3400 in k3397 in k3394 in k3391 in k3388 in k3385 in k3382 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3361 in k3358 in k3355 in k3352 in k3349 in k3346 in k3343 in ... */
static void C_ccall f_3408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3408,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3411,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:843: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[355];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[359];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3403 in k3400 in k3397 in k3394 in k3391 in k3388 in k3385 in k3382 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3361 in k3358 in k3355 in k3352 in k3349 in k3346 in k3343 in k3340 in ... */
static void C_ccall f_3405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3405,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3408,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:842: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[360];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[361];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4951 in a4767 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_4953(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_4953,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
f_4784(t3,C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[4],t2));}

/* k4427 in k4401 in a4372 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in ... */
static void C_ccall f_4429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_4429,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4314 in a4285 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in ... */
static void C_ccall f_4316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_4316,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4317 in a4285 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in ... */
static void C_fcall f_4319(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,2)))){
C_save_and_reclaim_args((void *)trf_4319,2,t0,t1);}
a=C_alloc(19);
if(C_truep(t1)){
/* c-platform.scm:1139: qnode */
t2=*((C_word*)lf[39]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_a_i_list1(&a,1,((C_word*)t0)[3]);
t3=C_a_i_record4(&a,4,lf[35],lf[36],lf[103],t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[6],t4);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k4782 in a4767 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_fcall f_4784(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_4784,2,t0,t1);}
a=C_alloc(15);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4790,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4821,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[6],C_fix(1));
t5=C_eqp(lf[41],t4);
if(C_truep(t5)){
t6=C_slot(((C_word*)t0)[6],C_fix(2));
t7=C_i_car(t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4894,a[2]=t3,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:417: immediate? */
t10=*((C_word*)lf[293]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t6=t3;
f_4821(t6,C_SCHEME_FALSE);}}}

/* k3439 in k3436 in k3433 in k3430 in k3427 in k3424 in k3421 in k3418 in k3415 in k3412 in k3409 in k3406 in k3403 in k3400 in k3397 in k3394 in k3391 in k3388 in k3385 in k3382 in k3379 in k3376 in ... */
static void C_ccall f_3441(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3441,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3444,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:872: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[335];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[336];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3445 in k3442 in k3439 in k3436 in k3433 in k3430 in k3427 in k3424 in k3421 in k3418 in k3415 in k3412 in k3409 in k3406 in k3403 in k3400 in k3397 in k3394 in k3391 in k3388 in k3385 in k3382 in ... */
static void C_ccall f_3447(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3447,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3450,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:874: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[331];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[332];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3442 in k3439 in k3436 in k3433 in k3430 in k3427 in k3424 in k3421 in k3418 in k3415 in k3412 in k3409 in k3406 in k3403 in k3400 in k3397 in k3394 in k3391 in k3388 in k3385 in k3382 in k3379 in ... */
static void C_ccall f_3444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3444,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3447,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:873: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[333];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[334];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fix(2);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3430 in k3427 in k3424 in k3421 in k3418 in k3415 in k3412 in k3409 in k3406 in k3403 in k3400 in k3397 in k3394 in k3391 in k3388 in k3385 in k3382 in k3379 in k3376 in k3373 in k3370 in k3367 in ... */
static void C_ccall f_3432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_3432,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3435,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:869: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[341];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[342];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_TRUE;
av2[8]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* a4457 in k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in k3475 in ... */
static void C_ccall f_4458(C_word c,C_word *av){
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
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_4458,6,av);}
a=C_alloc(18);
t6=C_i_length(t5);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=C_i_cadr(t5);
t9=t8;
t10=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4488,a[2]=t4,a[3]=t1,a[4]=t11,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t13=C_slot(t9,C_fix(1));
t14=C_eqp(lf[41],t13);
if(C_truep(t14)){
t15=C_eqp(*((C_word*)lf[33]+1),lf[32]);
if(C_truep(t15)){
t16=C_slot(t9,C_fix(2));
t17=C_i_car(t16);
t18=t17;
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4538,a[2]=t18,a[3]=t5,a[4]=t12,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t18))){
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4590,a[2]=t19,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:940: big-fixnum? */
t21=*((C_word*)lf[261]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t21;
av2[1]=t20;
av2[2]=t18;
((C_proc)(void*)(*((C_word*)t21+1)))(3,av2);}}
else{
t20=t19;
f_4538(t20,C_SCHEME_FALSE);}}
else{
t19=t12;
f_4488(t19,C_SCHEME_FALSE);}}
else{
t16=t12;
f_4488(t16,C_SCHEME_FALSE);}}
else{
t15=t12;
f_4488(t15,C_SCHEME_FALSE);}}
else{
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3433 in k3430 in k3427 in k3424 in k3421 in k3418 in k3415 in k3412 in k3409 in k3406 in k3403 in k3400 in k3397 in k3394 in k3391 in k3388 in k3385 in k3382 in k3379 in k3376 in k3373 in k3370 in ... */
static void C_ccall f_3435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3435,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3438,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:870: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[339];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[340];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3436 in k3433 in k3430 in k3427 in k3424 in k3421 in k3418 in k3415 in k3412 in k3409 in k3406 in k3403 in k3400 in k3397 in k3394 in k3391 in k3388 in k3385 in k3382 in k3379 in k3376 in k3373 in ... */
static void C_ccall f_3438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_3438,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3441,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:871: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[337];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[338];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_TRUE;
av2[8]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k2557 in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in ... */
static void C_ccall f_2559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2559,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2562,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:528: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[863];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3418 in k3415 in k3412 in k3409 in k3406 in k3403 in k3400 in k3397 in k3394 in k3391 in k3388 in k3385 in k3382 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3361 in k3358 in k3355 in ... */
static void C_ccall f_3420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3420,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3423,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:865: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[351];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[352];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(3);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3427 in k3424 in k3421 in k3418 in k3415 in k3412 in k3409 in k3406 in k3403 in k3400 in k3397 in k3394 in k3391 in k3388 in k3385 in k3382 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in ... */
static void C_ccall f_3429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3429,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3432,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:868: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[343];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[344];
av2[6]=C_SCHEME_TRUE;
av2[7]=lf[345];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3421 in k3418 in k3415 in k3412 in k3409 in k3406 in k3403 in k3400 in k3397 in k3394 in k3391 in k3388 in k3385 in k3382 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3361 in k3358 in ... */
static void C_ccall f_3423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3423,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3426,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:866: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[349];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[350];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(3);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3424 in k3421 in k3418 in k3415 in k3412 in k3409 in k3406 in k3403 in k3400 in k3397 in k3394 in k3391 in k3388 in k3385 in k3382 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3361 in ... */
static void C_ccall f_3426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_3426,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3429,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:867: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[346];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[347];
av2[6]=C_SCHEME_TRUE;
av2[7]=lf[348];
av2[8]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k2560 in k2557 in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in ... */
static void C_ccall f_2562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2562,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2565,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:530: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[49];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[870];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2563 in k2560 in k2557 in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in ... */
static void C_ccall f_2565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2565,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2568,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:531: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[50];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[869];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2566 in k2563 in k2560 in k2557 in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in ... */
static void C_ccall f_2568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2568,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2571,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:532: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[866];
av2[3]=C_fix(13);
av2[4]=C_fix(2);
av2[5]=lf[868];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3409 in k3406 in k3403 in k3400 in k3397 in k3394 in k3391 in k3388 in k3385 in k3382 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3361 in k3358 in k3355 in k3352 in k3349 in k3346 in ... */
static void C_ccall f_3411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3411,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3414,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:844: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[357];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[358];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3415 in k3412 in k3409 in k3406 in k3403 in k3400 in k3397 in k3394 in k3391 in k3388 in k3385 in k3382 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3361 in k3358 in k3355 in k3352 in ... */
static void C_ccall f_3417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_3417,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3420,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4692,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:847: rewrite */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[354];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3412 in k3409 in k3406 in k3403 in k3400 in k3397 in k3394 in k3391 in k3388 in k3385 in k3382 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3361 in k3358 in k3355 in k3352 in k3349 in ... */
static void C_ccall f_3414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3414,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3417,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:845: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[355];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[356];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k1910 in eqv?-id in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_1912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_1912,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
f_1773(t3,C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[4],t2));}

/* k4743 in a4691 in k3415 in k3412 in k3409 in k3406 in k3403 in k3400 in k3397 in k3394 in k3391 in k3388 in k3385 in k3382 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3361 in k3358 in ... */
static void C_ccall f_4745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,1)))){
C_save_and_reclaim((void *)f_4745,2,av);}
a=C_alloc(25);
/* c-platform.scm:861: build */
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=(
  /* c-platform.scm:861: build */
  f_4695(C_a_i(&a,25),((C_word*)t0)[3],((C_word*)t0)[4],t1)
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4486 in a4457 in k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in ... */
static void C_fcall f_4488(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,0,1)))){
C_save_and_reclaim_args((void *)trf_4488,2,t0,t1);}
a=C_alloc(22);
if(C_truep(t1)){
t2=t1;
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],t2);
t4=((C_word*)t0)[3];
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t2=C_eqp(*((C_word*)lf[33]+1),lf[32]);
if(C_truep(t2)){
t3=((C_word*)t0)[5];
t4=C_a_i_record4(&a,4,lf[35],lf[36],lf[257],t3);
t5=C_a_i_list2(&a,2,((C_word*)t0)[2],t4);
t6=((C_word*)t0)[3];
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[4],t5);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t3=C_a_i_list2(&a,2,lf[258],*((C_word*)lf[9]+1));
t4=((C_word*)t0)[5];
t5=C_a_i_record4(&a,4,lf[35],lf[38],t3,t4);
t6=C_a_i_list2(&a,2,((C_word*)t0)[2],t5);
t7=((C_word*)t0)[3];
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[4],t6);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}

/* k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in ... */
static void C_ccall f_3869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3869,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3872,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1053: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[122];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3897 in rewrite-call/cc in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in ... */
static void C_ccall f_3899(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_3899,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_slot(t1,C_fix(1));
t3=C_eqp(lf[57],t2);
if(C_truep(t3)){
t4=C_slot(t1,C_fix(2));
t5=C_i_caddr(t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3916,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:1067: decompose-lambda-list */
t8=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=((C_word*)t0)[5];
av2[2]=t6;
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t4=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4892 in k4782 in a4767 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_4894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4894,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_4821(t3,t2);}
else{
t2=((C_word*)t0)[2];
f_4821(t2,C_i_symbolp(((C_word*)t0)[3]));}}

/* k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_1752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1752,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1755,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4998,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:379: op1 */
f_1672(t3,lf[905],lf[906],lf[907]);}

/* k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_1755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_1755,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1757,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1956,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:399: rewrite */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[797];
av2[3]=C_fix(8);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* eqv?-id in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_1757(C_word c,C_word *av){
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
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_1757,6,av);}
a=C_alloc(15);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(2));
if(C_truep(t7)){
t8=C_i_car(t5);
t9=t8;
t10=C_i_cadr(t5);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1773,a[2]=t1,a[3]=t5,a[4]=t4,a[5]=t11,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
t13=C_slot(t9,C_fix(1));
t14=C_eqp(lf[42],t13);
if(C_truep(t14)){
t15=C_slot(t11,C_fix(1));
t16=C_eqp(lf[42],t15);
if(C_truep(t16)){
t17=C_slot(t9,C_fix(2));
t18=C_slot(t11,C_fix(2));
if(C_truep(C_i_equalp(t17,t18))){
t19=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t20=t19;
t21=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1912,a[2]=t4,a[3]=t12,a[4]=t20,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:391: qnode */
t22=*((C_word*)lf[39]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t22;
av2[1]=t21;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t22+1)))(3,av2);}}
else{
t19=t12;
f_1773(t19,C_SCHEME_FALSE);}}
else{
t17=t12;
f_1773(t17,C_SCHEME_FALSE);}}
else{
t15=t12;
f_1773(t15,C_SCHEME_FALSE);}}
else{
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in ... */
static void C_ccall f_3875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3875,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3878,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1056: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[118];
av2[3]=C_fix(20);
av2[4]=C_fix(2);
av2[5]=lf[119];
av2[6]=C_fix(10);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in ... */
static void C_ccall f_3872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3872,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3875,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1055: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[120];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[121];
av2[6]=C_fix(10);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_ccall f_3878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_3878,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3880,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4027,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:1078: rewrite */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[55];
av2[3]=C_fix(8);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* a4767 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_4768(C_word c,C_word *av){
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
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_4768,6,av);}
a=C_alloc(15);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(2));
if(C_truep(t7)){
t8=C_i_car(t5);
t9=t8;
t10=C_i_cadr(t5);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4784,a[2]=t1,a[3]=t5,a[4]=t4,a[5]=t11,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
t13=C_slot(t9,C_fix(1));
t14=C_eqp(lf[42],t13);
if(C_truep(t14)){
t15=C_slot(t11,C_fix(1));
t16=C_eqp(lf[42],t15);
if(C_truep(t16)){
t17=C_slot(t9,C_fix(2));
t18=C_slot(t11,C_fix(2));
if(C_truep(C_i_equalp(t17,t18))){
t19=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t20=t19;
t21=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4953,a[2]=t4,a[3]=t12,a[4]=t20,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:414: qnode */
t22=*((C_word*)lf[39]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t22;
av2[1]=t21;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t22+1)))(3,av2);}}
else{
t19=t12;
f_4784(t19,C_SCHEME_FALSE);}}
else{
t17=t12;
f_4784(t17,C_SCHEME_FALSE);}}
else{
t15=t12;
f_4784(t15,C_SCHEME_FALSE);}}
else{
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* a5400 in a5291 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5401(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5401,3,av);}
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=C_eqp(lf[41],t4);
if(C_truep(t5)){
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=C_i_car(t7);
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_i_zerop(t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* a5370 in k5397 in a5291 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_5371,4,av);}
a=C_alloc(11);
t4=(C_truep(*((C_word*)lf[34]+1))?lf[922]:lf[923]);
t5=C_a_i_list2(&a,2,t2,t3);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[36],t4,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k4401 in a4372 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in ... */
static void C_ccall f_4403(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4403,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_i_assq(((C_word*)t0)[2],lf[115]);
if(C_truep(t2)){
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4429,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_i_cdr(t2);
/* c-platform.scm:1120: varnode */
t7=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5367 in k5397 in a5291 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5369(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_5369,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1995 in k1972 in rewrite-apply in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_1997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_1997,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in k3475 in k3472 in k3469 in k3466 in ... */
static void C_ccall f_3531(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3531,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3534,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:922: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[266];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[267];
av2[6]=lf[268];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in k3475 in k3472 in ... */
static void C_ccall f_3537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_3537,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3540,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4458,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:925: rewrite */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[262];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in k3475 in k3472 in k3469 in ... */
static void C_ccall f_3534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3534,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3537,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:923: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[263];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[264];
av2[6]=lf[265];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5397 in a5291 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5399(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_5399,2,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_eqp(*((C_word*)lf[33]+1),lf[32]);
if(C_truep(t3)){
t4=C_i_length(t2);
if(C_truep(C_fixnum_greater_or_equal_p(t4,C_fix(2)))){
t5=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5369,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5371,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:304: fold-inner */
t9=*((C_word*)lf[918]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t5=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* rewrite-apply in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_1964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1964,6,av);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t5))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1974,a[2]=t5,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:435: last */
t7=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k4788 in k4782 in a4767 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_fcall f_4790(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,1)))){
C_save_and_reclaim_args((void *)trf_4790,2,t0,t1);}
a=C_alloc(19);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=((C_word*)t0)[3];
t4=C_a_i_record4(&a,4,lf[35],lf[36],lf[901],t3);
t5=C_a_i_list2(&a,2,((C_word*)t0)[4],t4);
t6=((C_word*)t0)[2];
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],t2,t5);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_1962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_1962,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1964,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2190,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:457: rewrite */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[900];
av2[3]=C_fix(8);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in k3475 in k3472 in k3469 in k3466 in k3463 in k3460 in k3457 in ... */
static void C_ccall f_3522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3522,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3525,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:919: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[275];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[276];
av2[6]=lf[277];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in k3475 in k3472 in k3469 in k3466 in k3463 in ... */
static void C_ccall f_3528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3528,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3531,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:921: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[269];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[270];
av2[6]=lf[271];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in k3475 in k3472 in k3469 in k3466 in k3463 in k3460 in ... */
static void C_ccall f_3525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3525,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3528,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:920: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[272];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[273];
av2[6]=lf[274];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k1742 */
static void C_ccall f_1744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,1)))){
C_save_and_reclaim((void *)f_1744,2,av);}
a=C_alloc(22);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_record4(&a,4,lf[35],lf[38],((C_word*)t0)[3],t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[6],t4);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k3550 in k3547 in k3544 in k3541 in k3538 in k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in ... */
static void C_ccall f_3552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3552,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3555,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:957: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[247];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[248];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3553 in k3550 in k3547 in k3544 in k3541 in k3538 in k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in ... */
static void C_ccall f_3555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3555,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3558,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:958: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[245];
av2[3]=C_fix(17);
av2[4]=C_fix(3);
av2[5]=lf[246];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3556 in k3553 in k3550 in k3547 in k3544 in k3541 in k3538 in k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in ... */
static void C_ccall f_3558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3558,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3561,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:959: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[243];
av2[3]=C_fix(17);
av2[4]=C_fix(3);
av2[5]=lf[244];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3541 in k3538 in k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in ... */
static void C_ccall f_3543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3543,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3546,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:954: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[253];
av2[3]=C_fix(17);
av2[4]=C_fix(3);
av2[5]=lf[254];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3538 in k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in k3475 in ... */
static void C_ccall f_3540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3540,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3543,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:953: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[255];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[256];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4819 in k4782 in a4767 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_fcall f_4821(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_4821,2,t0,t1);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4824,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_4824(t3,t1);}
else{
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_eqp(lf[41],t3);
if(C_truep(t4)){
t5=C_slot(((C_word*)t0)[5],C_fix(2));
t6=C_i_car(t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4861,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:420: immediate? */
t9=*((C_word*)lf[293]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t5=t2;
f_4824(t5,C_SCHEME_FALSE);}}}

/* k3544 in k3541 in k3538 in k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in ... */
static void C_ccall f_3546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3546,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3549,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:955: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[251];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[252];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3547 in k3544 in k3541 in k3538 in k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in ... */
static void C_ccall f_3549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3549,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3552,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:956: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[249];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[250];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* a5250 in a5128 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5251(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5251,3,av);}
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=C_eqp(lf[41],t4);
if(C_truep(t5)){
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=C_i_car(t7);
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_eqp(C_fix(1),t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k4822 in k4819 in k4782 in a4767 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_fcall f_4824(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,1)))){
C_save_and_reclaim_args((void *)trf_4824,2,t0,t1);}
a=C_alloc(19);
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
t4=C_a_i_record4(&a,4,lf[35],lf[36],lf[902],t3);
t5=C_a_i_list2(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[4];
f_4790(t6,C_a_i_record4(&a,4,lf[35],lf[37],t2,t5));}
else{
t2=((C_word*)t0)[4];
f_4790(t2,C_SCHEME_FALSE);}}

/* k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in k2902 in k2899 in k2896 in k2893 in k2890 in k2887 in k2884 in k2881 in k2878 in k2875 in ... */
static void C_ccall f_2940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2940,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2943,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:661: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[640];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[641];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in k2902 in k2899 in k2896 in k2893 in k2890 in k2887 in k2884 in k2881 in k2878 in ... */
static void C_ccall f_2943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2943,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2946,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:662: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
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

/* k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in k2902 in k2899 in k2896 in k2893 in k2890 in k2887 in k2884 in k2881 in ... */
static void C_ccall f_2946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2946,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2949,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:663: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
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

/* k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in k2902 in k2899 in k2896 in k2893 in k2890 in k2887 in k2884 in ... */
static void C_ccall f_2949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2949,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2952,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:664: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
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

/* k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in k3475 in k3472 in k3469 in k3466 in k3463 in k3460 in k3457 in k3454 in k3451 in k3448 in k3445 in ... */
static void C_ccall f_3510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3510,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3513,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:915: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[285];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[286];
av2[6]=lf[287];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in k3475 in k3472 in k3469 in k3466 in k3463 in k3460 in k3457 in k3454 in ... */
static void C_ccall f_3519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3519,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3522,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:918: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[278];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[279];
av2[6]=lf[280];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in k3475 in k3472 in k3469 in k3466 in k3463 in k3460 in k3457 in k3454 in k3451 in k3448 in ... */
static void C_ccall f_3513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3513,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3516,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:916: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[283];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[284];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in k3475 in k3472 in k3469 in k3466 in k3463 in k3460 in k3457 in k3454 in k3451 in ... */
static void C_ccall f_3516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3516,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3519,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:917: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[281];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[282];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k5194 in k5178 in a5172 in k5247 in a5128 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_5196,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[36],lf[916],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5475 in k5449 in a5446 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_5477,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5247 in a5128 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5249(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_5249,2,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_eqp(*((C_word*)lf[33]+1),lf[32]);
if(C_truep(t3)){
t4=C_i_length(t2);
if(C_truep(C_fixnum_greater_or_equal_p(t4,C_fix(2)))){
t5=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5171,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5173,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:331: fold-inner */
t9=*((C_word*)lf[918]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t5=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in k3475 in k3472 in k3469 in k3466 in k3463 in k3460 in k3457 in k3454 in k3451 in k3448 in k3445 in k3442 in k3439 in k3436 in ... */
static void C_ccall f_3501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3501,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3504,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:894: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[295];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[296];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4859 in k4819 in k4782 in a4767 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_4861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4861,2,av);}
t2=((C_word*)t0)[2];
f_4824(t2,(C_truep(t1)?t1:C_i_symbolp(((C_word*)t0)[3])));}

/* k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in k3475 in k3472 in k3469 in k3466 in k3463 in k3460 in k3457 in k3454 in k3451 in k3448 in k3445 in k3442 in ... */
static void C_ccall f_3507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3507,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3510,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:914: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[288];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[289];
av2[6]=lf[290];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in k3475 in k3472 in k3469 in k3466 in k3463 in k3460 in k3457 in k3454 in k3451 in k3448 in k3445 in k3442 in k3439 in ... */
static void C_ccall f_3504(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_3504,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3507,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4615,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:896: rewrite */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[294];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k5178 in a5172 in k5247 in a5128 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_fcall f_5180(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_5180,2,t0,t1);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5196,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:334: qnode */
t3=*((C_word*)lf[39]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[36],lf[917],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3295 in k3292 in k3289 in k3286 in k3283 in k3280 in k3277 in k3274 in k3271 in k3268 in k3265 in k3262 in k3259 in k3256 in k3253 in k3250 in k3247 in k3244 in k3241 in k3238 in k3235 in k3232 in ... */
static void C_ccall f_3297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3297,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3300,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:799: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[437];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[438];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3292 in k3289 in k3286 in k3283 in k3280 in k3277 in k3274 in k3271 in k3268 in k3265 in k3262 in k3259 in k3256 in k3253 in k3250 in k3247 in k3244 in k3241 in k3238 in k3235 in k3232 in k3229 in ... */
static void C_ccall f_3294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3294,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3297,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:798: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[439];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[440];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3289 in k3286 in k3283 in k3280 in k3277 in k3274 in k3271 in k3268 in k3265 in k3262 in k3259 in k3256 in k3253 in k3250 in k3247 in k3244 in k3241 in k3238 in k3235 in k3232 in k3229 in k3226 in ... */
static void C_ccall f_3291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3291,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3294,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:797: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[441];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[442];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in k2902 in k2899 in k2896 in k2893 in k2890 in k2887 in k2884 in k2881 in k2878 in k2875 in k2872 in k2869 in k2866 in ... */
static void C_ccall f_2931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2931,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2934,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:658: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[646];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[647];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in k2902 in k2899 in k2896 in k2893 in k2890 in k2887 in k2884 in k2881 in k2878 in k2875 in k2872 in ... */
static void C_ccall f_2937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2937,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2940,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:660: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
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

/* k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in k2902 in k2899 in k2896 in k2893 in k2890 in k2887 in k2884 in k2881 in k2878 in k2875 in k2872 in k2869 in ... */
static void C_ccall f_2934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2934,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2937,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:659: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
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

/* k3283 in k3280 in k3277 in k3274 in k3271 in k3268 in k3265 in k3262 in k3259 in k3256 in k3253 in k3250 in k3247 in k3244 in k3241 in k3238 in k3235 in k3232 in k3229 in k3226 in k3223 in k3220 in ... */
static void C_ccall f_3285(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3285,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3288,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:794: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[435];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[445];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3286 in k3283 in k3280 in k3277 in k3274 in k3271 in k3268 in k3265 in k3262 in k3259 in k3256 in k3253 in k3250 in k3247 in k3244 in k3241 in k3238 in k3235 in k3232 in k3229 in k3226 in k3223 in ... */
static void C_ccall f_3288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3288,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3291,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:796: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[443];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[444];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3280 in k3277 in k3274 in k3271 in k3268 in k3265 in k3262 in k3259 in k3256 in k3253 in k3250 in k3247 in k3244 in k3241 in k3238 in k3235 in k3232 in k3229 in k3226 in k3223 in k3220 in k3217 in ... */
static void C_ccall f_3282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3282,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3285,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:793: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[437];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[446];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k5449 in a5446 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5451(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_5451,2,av);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t1))){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5477,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:257: qnode */
t5=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t2=C_i_cdr(t1);
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=C_u_i_car(t1);
t5=C_a_i_list2(&a,2,((C_word*)t0)[2],t4);
t6=((C_word*)t0)[3];
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],t3,t5);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t3=C_eqp(*((C_word*)lf[33]+1),lf[32]);
if(C_truep(t3)){
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5529,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:265: fold-inner */
t8=*((C_word*)lf[918]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}}

/* k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in ... */
static void C_ccall f_2982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2982,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2985,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:677: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[609];
av2[3]=C_fix(4);
av2[4]=lf[294];
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_platform_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("platform_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_platform_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(10845))){
C_save(t1);
C_rereclaim2(10845*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,933);
lf[0]=C_h_intern(&lf[0],36,"\010compilerdefault-optimization-passes");
lf[1]=C_h_intern(&lf[1],29,"\010compilerdefault-declarations");
lf[2]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014always-bound\376\003\000\000\002\376\001\000\000\022\003sysstandard-input\376\003\000\000\002\376\001\000\000\023\003sysstandard-ou"
"tput\376\003\000\000\002\376\001\000\000\022\003sysstandard-error\376\003\000\000\002\376\001\000\000\023\003sysundefined-value\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022b"
"ound-to-procedure\376\003\000\000\002\376\001\000\000\014\003sysfor-each\376\003\000\000\002\376\001\000\000\007\003sysmap\376\003\000\000\002\376\001\000\000\011\003sysprint\376\003\000\000\002"
"\376\001\000\000\012\003syssetter\376\003\000\000\002\376\001\000\000\013\003syssetslot\376\003\000\000\002\376\001\000\000\020\003sysdynamic-wind\376\003\000\000\002\376\001\000\000\024\003syscall"
"-with-values\376\003\000\000\002\376\001\000\000\017\003sysstart-timer\376\003\000\000\002\376\001\000\000\016\003sysstop-timer\376\003\000\000\002\376\001\000\000\007\003sysgcd\376\003"
"\000\000\002\376\001\000\000\007\003syslcm\376\003\000\000\002\376\001\000\000\020\003sysmake-promise\376\003\000\000\002\376\001\000\000\016\003sysstructure\077\376\003\000\000\002\376\001\000\000\010\003syss"
"lot\376\003\000\000\002\376\001\000\000\023\003sysallocate-vector\376\003\000\000\002\376\001\000\000\020\003syslist->vector\376\003\000\000\002\376\001\000\000\015\003sysblock-re"
"f\376\003\000\000\002\376\001\000\000\016\003sysblock-set!\376\003\000\000\002\376\001\000\000\010\003syslist\376\003\000\000\002\376\001\000\000\010\003syscons\376\003\000\000\002\376\001\000\000\012\003sysappen"
"d\376\003\000\000\002\376\001\000\000\012\003sysvector\376\003\000\000\002\376\001\000\000\031\003sysforeign-char-argument\376\003\000\000\002\376\001\000\000\033\003sysforeign-fi"
"xnum-argument\376\003\000\000\002\376\001\000\000\033\003sysforeign-flonum-argument\376\003\000\000\002\376\001\000\000\011\003syserror\376\003\000\000\002\376\001\000\000\021\003"
"syspeek-c-string\376\003\000\000\002\376\001\000\000\031\003syspeek-nonnull-c-string\376\003\000\000\002\376\001\000\000\032\003syspeek-and-free-c"
"-string\376\003\000\000\002\376\001\000\000\042\003syspeek-and-free-nonnull-c-string\376\003\000\000\002\376\001\000\000\032\003sysforeign-block-a"
"rgument\376\003\000\000\002\376\001\000\000\033\003sysforeign-string-argument\376\003\000\000\002\376\001\000\000\034\003sysforeign-pointer-argume"
"nt\376\003\000\000\002\376\001\000\000\034\003sysforeign-integer-argument\376\003\000\000\002\376\001\000\000\042\003syscall-with-current-continua"
"tion\376\377\016\376\377\016");
lf[3]=C_h_intern(&lf[3],39,"\010compilerdefault-debugging-declarations");
lf[4]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\004coredeclare\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005quote\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004uses\376\003\000\000\002\376\001\000\000\010debu"
"gger\376\377\016\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005quote\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022bound-to-procedure\376\003\000\000\002\376\001\000\000\024\003syspus"
"h-debug-frame\376\003\000\000\002\376\001\000\000\023\003syspop-debug-frame\376\003\000\000\002\376\001\000\000\025\003syscheck-debug-entry\376\003\000\000\002\376\001"
"\000\000\032\003syscheck-debug-assignment\376\003\000\000\002\376\001\000\000\032\003sysregister-debug-lambdas\376\003\000\000\002\376\001\000\000\034\003sysr"
"egister-debug-variables\376\003\000\000\002\376\001\000\000\016\003sysdebug-call\376\377\016\376\377\016\376\377\016\376\377\016");
lf[5]=C_h_intern(&lf[5],39,"\010compilerdefault-profiling-declarations");
lf[6]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\004coredeclare\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004uses\376\003\000\000\002\376\001\000\000\010profiler\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\022bound-to-procedure\376\003\000\000\002\376\001\000\000\021\003sysprofile-entry\376\003\000\000\002\376\001\000\000\020\003sysprofile-exit\376\377\016\376\377\016\376"
"\377\016");
lf[7]=C_h_intern(&lf[7],30,"\010compilerunits-used-by-default");
lf[8]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007library\376\003\000\000\002\376\001\000\000\004eval\376\003\000\000\002\376\001\000\000\016chicken-syntax\376\377\016");
lf[9]=C_h_intern(&lf[9],25,"\010compilerwords-per-flonum");
lf[10]=C_h_intern(&lf[10],27,"\010compilerunlikely-variables");
lf[11]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007unquote\376\003\000\000\002\376\001\000\000\020unquote-splicing\376\377\016");
lf[12]=C_h_intern(&lf[12],27,"\010compilereq-inline-operator");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\005C_eqp");
lf[14]=C_h_intern(&lf[14],34,"\010compilermembership-test-operators");
lf[15]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\010C_i_memq\376B\000\000\005C_eqp\376\003\000\000\002\376\003\000\000\002\376B\000\000\012C_u_i_memq\376B\000\000\005C_eqp\376\003\000\000\002\376\003\000\000\002\376B"
"\000\000\012C_i_member\376B\000\000\012C_i_equalp\376\003\000\000\002\376\003\000\000\002\376B\000\000\010C_i_memv\376B\000\000\010C_i_eqvp\376\377\016");
lf[16]=C_h_intern(&lf[16],32,"\010compilermembership-unfold-limit");
lf[17]=C_h_intern(&lf[17],28,"\010compilertarget-include-file");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\011chicken.h");
lf[19]=C_h_intern(&lf[19],31,"\010compilervalid-compiler-options");
lf[20]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\005-help\376\003\000\000\002\376\001\000\000\001h\376\003\000\000\002\376\001\000\000\004help\376\003\000\000\002\376\001\000\000\007version\376\003\000\000\002\376\001\000\000\007verbose\376\003\000\000\002\376"
"\001\000\000\014explicit-use\376\003\000\000\002\376\001\000\000\010no-trace\376\003\000\000\002\376\001\000\000\013no-warnings\376\003\000\000\002\376\001\000\000\006unsafe\376\003\000\000\002\376\001\000\000"
"\005block\376\003\000\000\002\376\001\000\000\014check-syntax\376\003\000\000\002\376\001\000\000\011to-stdout\376\003\000\000\002\376\001\000\000\025no-usual-integrations\376\003"
"\000\000\002\376\001\000\000\020case-insensitive\376\003\000\000\002\376\001\000\000\016no-lambda-info\376\003\000\000\002\376\001\000\000\007profile\376\003\000\000\002\376\001\000\000\006inlin"
"e\376\003\000\000\002\376\001\000\000\024keep-shadowed-macros\376\003\000\000\002\376\001\000\000\021ignore-repository\376\003\000\000\002\376\001\000\000\021fixnum-arith"
"metic\376\003\000\000\002\376\001\000\000\022disable-interrupts\376\003\000\000\002\376\001\000\000\026optimize-leaf-routines\376\003\000\000\002\376\001\000\000\016compi"
"le-syntax\376\003\000\000\002\376\001\000\000\014tag-pointers\376\003\000\000\002\376\001\000\000\022accumulate-profile\376\003\000\000\002\376\001\000\000\035disable-sta"
"ck-overflow-checks\376\003\000\000\002\376\001\000\000\003raw\376\003\000\000\002\376\001\000\000\012specialize\376\003\000\000\002\376\001\000\000\036emit-external-proto"
"types-first\376\003\000\000\002\376\001\000\000\007release\376\003\000\000\002\376\001\000\000\005local\376\003\000\000\002\376\001\000\000\015inline-global\376\003\000\000\002\376\001\000\000\014anal"
"yze-only\376\003\000\000\002\376\001\000\000\007dynamic\376\003\000\000\002\376\001\000\000\012scrutinize\376\003\000\000\002\376\001\000\000\016no-argc-checks\376\003\000\000\002\376\001\000\000\023n"
"o-procedure-checks\376\003\000\000\002\376\001\000\000)no-procedure-checks-for-toplevel-bindings\376\003\000\000\002\376\001\000\000\006m"
"odule\376\003\000\000\002\376\001\000\000\017no-bound-checks\376\003\000\000\002\376\001\000\000&no-procedure-checks-for-usual-bindings\376\003"
"\000\000\002\376\001\000\000\022no-compiler-syntax\376\003\000\000\002\376\001\000\000\027no-parentheses-synonyms\376\003\000\000\002\376\001\000\000\020no-symbol-e"
"scape\376\003\000\000\002\376\001\000\000\013r5rs-syntax\376\003\000\000\002\376\001\000\000\031emit-all-import-libraries\376\003\000\000\002\376\001\000\000\014strict-ty"
"pes\376\003\000\000\002\376\001\000\000\012clustering\376\003\000\000\002\376\001\000\000\004lfa2\376\003\000\000\002\376\001\000\000\012debug-info\376\003\000\000\002\376\001\000\000\012setup-mode\376\003\000"
"\000\002\376\001\000\000\026no-module-registration\376\377\016");
lf[21]=C_h_intern(&lf[21],45,"\010compilervalid-compiler-options-with-argument");
lf[22]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\005debug\376\003\000\000\002\376\001\000\000\013output-file\376\003\000\000\002\376\001\000\000\014include-path\376\003\000\000\002\376\001\000\000\011heap-size\376\003\000"
"\000\002\376\001\000\000\012stack-size\376\003\000\000\002\376\001\000\000\004unit\376\003\000\000\002\376\001\000\000\004uses\376\003\000\000\002\376\001\000\000\015keyword-style\376\003\000\000\002\376\001\000\000\021re"
"quire-extension\376\003\000\000\002\376\001\000\000\014inline-limit\376\003\000\000\002\376\001\000\000\014profile-name\376\003\000\000\002\376\001\000\000\024parenthesis"
"-synonyms\376\003\000\000\002\376\001\000\000\007prelude\376\003\000\000\002\376\001\000\000\010postlude\376\003\000\000\002\376\001\000\000\010prologue\376\003\000\000\002\376\001\000\000\010epilogue"
"\376\003\000\000\002\376\001\000\000\007nursery\376\003\000\000\002\376\001\000\000\006extend\376\003\000\000\002\376\001\000\000\007feature\376\003\000\000\002\376\001\000\000\012no-feature\376\003\000\000\002\376\001\000\000\005"
"types\376\003\000\000\002\376\001\000\000\023emit-import-library\376\003\000\000\002\376\001\000\000\020emit-inline-file\376\003\000\000\002\376\001\000\000\020static-ext"
"ension\376\003\000\000\002\376\001\000\000\023consult-inline-file\376\003\000\000\002\376\001\000\000\016emit-type-file\376\003\000\000\002\376\001\000\000\012ffi-define\376"
"\003\000\000\002\376\001\000\000\020ffi-include-path\376\377\016");
lf[23]=C_h_intern(&lf[23],34,"\010compilerdefault-standard-bindings");
lf[24]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003not\376\003\000\000\002\376\001\000\000\010boolean\077\376\003\000\000\002\376\001\000\000\005apply\376\003\000\000\002\376\001\000\000\036call-with-current-contin"
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
"\003\000\000\002\376\001\000\000\005floor\376\003\000\000\002\376\001\000\000\007ceiling\376\003\000\000\002\376\001\000\000\010truncate\376\003\000\000\002\376\001\000\000\005round\376\003\000\000\002\376\001\000\000\016exact-"
">inexact\376\003\000\000\002\376\001\000\000\016inexact->exact\376\003\000\000\002\376\001\000\000\003exp\376\003\000\000\002\376\001\000\000\003log\376\003\000\000\002\376\001\000\000\003sin\376\003\000\000\002\376\001\000\000"
"\004expt\376\003\000\000\002\376\001\000\000\004sqrt\376\003\000\000\002\376\001\000\000\003cos\376\003\000\000\002\376\001\000\000\003tan\376\003\000\000\002\376\001\000\000\004asin\376\003\000\000\002\376\001\000\000\004acos\376\003\000\000\002\376\001"
"\000\000\004atan\376\003\000\000\002\376\001\000\000\016number->string\376\003\000\000\002\376\001\000\000\016string->number\376\003\000\000\002\376\001\000\000\011char-ci=\077\376\003\000\000\002\376"
"\001\000\000\011char-ci<\077\376\003\000\000\002\376\001\000\000\011char-ci>\077\376\003\000\000\002\376\001\000\000\012char-ci>=\077\376\003\000\000\002\376\001\000\000\012char-ci<=\077\376\003\000\000\002\376\001\000"
"\000\020char-alphabetic\077\376\003\000\000\002\376\001\000\000\020char-whitespace\077\376\003\000\000\002\376\001\000\000\015char-numeric\077\376\003\000\000\002\376\001\000\000\020cha"
"r-lower-case\077\376\003\000\000\002\376\001\000\000\020char-upper-case\077\376\003\000\000\002\376\001\000\000\013char-upcase\376\003\000\000\002\376\001\000\000\015char-downc"
"ase\376\003\000\000\002\376\001\000\000\007string\077\376\003\000\000\002\376\001\000\000\010string=\077\376\003\000\000\002\376\001\000\000\010string>\077\376\003\000\000\002\376\001\000\000\010string<\077\376\003\000\000\002\376"
"\001\000\000\011string>=\077\376\003\000\000\002\376\001\000\000\011string<=\077\376\003\000\000\002\376\001\000\000\013string-ci=\077\376\003\000\000\002\376\001\000\000\013string-ci<\077\376\003\000\000\002\376"
"\001\000\000\013string-ci>\077\376\003\000\000\002\376\001\000\000\014string-ci<=\077\376\003\000\000\002\376\001\000\000\014string-ci>=\077\376\003\000\000\002\376\001\000\000\015string-appe"
"nd\376\003\000\000\002\376\001\000\000\014string->list\376\003\000\000\002\376\001\000\000\014list->string\376\003\000\000\002\376\001\000\000\007vector\077\376\003\000\000\002\376\001\000\000\014vector-"
">list\376\003\000\000\002\376\001\000\000\014list->vector\376\003\000\000\002\376\001\000\000\006string\376\003\000\000\002\376\001\000\000\004read\376\003\000\000\002\376\001\000\000\011read-char\376\003\000\000"
"\002\376\001\000\000\011substring\376\003\000\000\002\376\001\000\000\014string-fill!\376\003\000\000\002\376\001\000\000\014vector-fill!\376\003\000\000\002\376\001\000\000\013make-string"
"\376\003\000\000\002\376\001\000\000\013make-vector\376\003\000\000\002\376\001\000\000\017open-input-file\376\003\000\000\002\376\001\000\000\020open-output-file\376\003\000\000\002\376\001\000"
"\000\024call-with-input-file\376\003\000\000\002\376\001\000\000\025call-with-output-file\376\003\000\000\002\376\001\000\000\020close-input-port\376"
"\003\000\000\002\376\001\000\000\021close-output-port\376\003\000\000\002\376\001\000\000\006values\376\003\000\000\002\376\001\000\000\020call-with-values\376\003\000\000\002\376\001\000\000\006ve"
"ctor\376\003\000\000\002\376\001\000\000\012procedure\077\376\003\000\000\002\376\001\000\000\004memq\376\003\000\000\002\376\001\000\000\004memv\376\003\000\000\002\376\001\000\000\006member\376\003\000\000\002\376\001\000\000\004as"
"sq\376\003\000\000\002\376\001\000\000\004assv\376\003\000\000\002\376\001\000\000\005assoc\376\003\000\000\002\376\001\000\000\011list-tail\376\003\000\000\002\376\001\000\000\010list-ref\376\003\000\000\002\376\001\000\000\003ab"
"s\376\003\000\000\002\376\001\000\000\013char-ready\077\376\003\000\000\002\376\001\000\000\011peek-char\376\003\000\000\002\376\001\000\000\014list->string\376\003\000\000\002\376\001\000\000\014string-"
">list\376\003\000\000\002\376\001\000\000\022current-input-port\376\003\000\000\002\376\001\000\000\023current-output-port\376\377\016");
lf[25]=C_h_intern(&lf[25],34,"\010compilerdefault-extended-bindings");
lf[26]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\013bitwise-and\376\003\000\000\002\376\001\000\000\012alist-cons\376\003\000\000\002\376\001\000\000\005xcons\376\003\000\000\002\376\001\000\000\013bitwise-ior\376\003\000"
"\000\002\376\001\000\000\013bitwise-xor\376\003\000\000\002\376\001\000\000\013bitwise-not\376\003\000\000\002\376\001\000\000\004add1\376\003\000\000\002\376\001\000\000\004sub1\376\003\000\000\002\376\001\000\000\003fx+"
"\376\003\000\000\002\376\001\000\000\003fx-\376\003\000\000\002\376\001\000\000\003fx\052\376\003\000\000\002\376\001\000\000\003fx/\376\003\000\000\002\376\001\000\000\004fx+\077\376\003\000\000\002\376\001\000\000\004fx-\077\376\003\000\000\002\376\001\000\000\004fx\052"
"\077\376\003\000\000\002\376\001\000\000\004fx/\077\376\003\000\000\002\376\001\000\000\005fxmod\376\003\000\000\002\376\001\000\000\001o\376\003\000\000\002\376\001\000\000\004fp/\077\376\003\000\000\002\376\001\000\000\003fx=\376\003\000\000\002\376\001\000\000\003fx"
">\376\003\000\000\002\376\001\000\000\003fx<\376\003\000\000\002\376\001\000\000\004fx>=\376\003\000\000\002\376\001\000\000\004fx<=\376\003\000\000\002\376\001\000\000\007fixnum\077\376\003\000\000\002\376\001\000\000\005fxneg\376\003\000\000\002\376"
"\001\000\000\005fxmax\376\003\000\000\002\376\001\000\000\005fxmin\376\003\000\000\002\376\001\000\000\010identity\376\003\000\000\002\376\001\000\000\003fp+\376\003\000\000\002\376\001\000\000\003fp-\376\003\000\000\002\376\001\000\000\003fp"
"\052\376\003\000\000\002\376\001\000\000\003fp/\376\003\000\000\002\376\001\000\000\005fpmin\376\003\000\000\002\376\001\000\000\005fpmax\376\003\000\000\002\376\001\000\000\005fpneg\376\003\000\000\002\376\001\000\000\003fp>\376\003\000\000\002\376\001\000"
"\000\003fp<\376\003\000\000\002\376\001\000\000\003fp=\376\003\000\000\002\376\001\000\000\004fp>=\376\003\000\000\002\376\001\000\000\004fp<=\376\003\000\000\002\376\001\000\000\005fxand\376\003\000\000\002\376\001\000\000\005fxnot\376\003\000\000"
"\002\376\001\000\000\005fxior\376\003\000\000\002\376\001\000\000\005fxxor\376\003\000\000\002\376\001\000\000\005fxshr\376\003\000\000\002\376\001\000\000\005fxshl\376\003\000\000\002\376\001\000\000\010bit-set\077\376\003\000\000\002\376"
"\001\000\000\006fxodd\077\376\003\000\000\002\376\001\000\000\007fxeven\077\376\003\000\000\002\376\001\000\000\007fpfloor\376\003\000\000\002\376\001\000\000\011fpceiling\376\003\000\000\002\376\001\000\000\012fptrunc"
"ate\376\003\000\000\002\376\001\000\000\007fpround\376\003\000\000\002\376\001\000\000\005fpsin\376\003\000\000\002\376\001\000\000\005fpcos\376\003\000\000\002\376\001\000\000\005fptan\376\003\000\000\002\376\001\000\000\006fpasi"
"n\376\003\000\000\002\376\001\000\000\006fpacos\376\003\000\000\002\376\001\000\000\006fpatan\376\003\000\000\002\376\001\000\000\007fpatan2\376\003\000\000\002\376\001\000\000\005fpexp\376\003\000\000\002\376\001\000\000\006fpexp"
"t\376\003\000\000\002\376\001\000\000\005fplog\376\003\000\000\002\376\001\000\000\006fpsqrt\376\003\000\000\002\376\001\000\000\005fpabs\376\003\000\000\002\376\001\000\000\012fpinteger\077\376\003\000\000\002\376\001\000\000\020ari"
"thmetic-shift\376\003\000\000\002\376\001\000\000\004void\376\003\000\000\002\376\001\000\000\014flush-output\376\003\000\000\002\376\001\000\000\017thread-specific\376\003\000\000\002\376"
"\001\000\000\024thread-specific-set!\376\003\000\000\002\376\001\000\000\011not-pair\077\376\003\000\000\002\376\001\000\000\005atom\077\376\003\000\000\002\376\001\000\000\012null-list\077\376\003"
"\000\000\002\376\001\000\000\005print\376\003\000\000\002\376\001\000\000\006print\052\376\003\000\000\002\376\001\000\000\005error\376\003\000\000\002\376\001\000\000\014proper-list\077\376\003\000\000\002\376\001\000\000\007call"
"/cc\376\003\000\000\002\376\001\000\000\011blob-size\376\003\000\000\002\376\001\000\000\025u8vector->blob/shared\376\003\000\000\002\376\001\000\000\025s8vector->blob/sh"
"ared\376\003\000\000\002\376\001\000\000\026u16vector->blob/shared\376\003\000\000\002\376\001\000\000\026s16vector->blob/shared\376\003\000\000\002\376\001\000\000\026u3"
"2vector->blob/shared\376\003\000\000\002\376\001\000\000\026s32vector->blob/shared\376\003\000\000\002\376\001\000\000\026f32vector->blob/sh"
"ared\376\003\000\000\002\376\001\000\000\026f64vector->blob/shared\376\003\000\000\002\376\001\000\000\025blob->u8vector/shared\376\003\000\000\002\376\001\000\000\025blo"
"b->s8vector/shared\376\003\000\000\002\376\001\000\000\026blob->u16vector/shared\376\003\000\000\002\376\001\000\000\026blob->s16vector/shar"
"ed\376\003\000\000\002\376\001\000\000\026blob->u32vector/shared\376\003\000\000\002\376\001\000\000\026blob->s32vector/shared\376\003\000\000\002\376\001\000\000\026blob"
"->f32vector/shared\376\003\000\000\002\376\001\000\000\026blob->f64vector/shared\376\003\000\000\002\376\001\000\000\011block-ref\376\003\000\000\002\376\001\000\000\012b"
"lock-set!\376\003\000\000\002\376\001\000\000\017number-of-slots\376\003\000\000\002\376\001\000\000\017substring-index\376\003\000\000\002\376\001\000\000\022substring-i"
"ndex-ci\376\003\000\000\002\376\001\000\000\016hash-table-ref\376\003\000\000\002\376\001\000\000\004any\077\376\003\000\000\002\376\001\000\000\013read-string\376\003\000\000\002\376\001\000\000\013subs"
"tring=\077\376\003\000\000\002\376\001\000\000\016substring-ci=\077\376\003\000\000\002\376\001\000\000\005first\376\003\000\000\002\376\001\000\000\006second\376\003\000\000\002\376\001\000\000\005third\376\003\000"
"\000\002\376\001\000\000\006fourth\376\003\000\000\002\376\001\000\000\024make-record-instance\376\003\000\000\002\376\001\000\000\005foldl\376\003\000\000\002\376\001\000\000\005foldr\376\003\000\000\002\376\001"
"\000\000\017u8vector-length\376\003\000\000\002\376\001\000\000\017s8vector-length\376\003\000\000\002\376\001\000\000\020u16vector-length\376\003\000\000\002\376\001\000\000\020s"
"16vector-length\376\003\000\000\002\376\001\000\000\020u32vector-length\376\003\000\000\002\376\001\000\000\020s32vector-length\376\003\000\000\002\376\001\000\000\020f32"
"vector-length\376\003\000\000\002\376\001\000\000\020f64vector-length\376\003\000\000\002\376\001\000\000\006setter\376\003\000\000\002\376\001\000\000\014u8vector-ref\376\003\000"
"\000\002\376\001\000\000\014s8vector-ref\376\003\000\000\002\376\001\000\000\015u16vector-ref\376\003\000\000\002\376\001\000\000\015s16vector-ref\376\003\000\000\002\376\001\000\000\015u32ve"
"ctor-ref\376\003\000\000\002\376\001\000\000\015s32vector-ref\376\003\000\000\002\376\001\000\000\015f32vector-ref\376\003\000\000\002\376\001\000\000\015f64vector-ref\376\003\000"
"\000\002\376\001\000\000\016f32vector-set!\376\003\000\000\002\376\001\000\000\016f64vector-set!\376\003\000\000\002\376\001\000\000\015u8vector-set!\376\003\000\000\002\376\001\000\000\015s8"
"vector-set!\376\003\000\000\002\376\001\000\000\016u16vector-set!\376\003\000\000\002\376\001\000\000\016s16vector-set!\376\003\000\000\002\376\001\000\000\016u32vector-s"
"et!\376\003\000\000\002\376\001\000\000\016s32vector-set!\376\003\000\000\002\376\001\000\000\014locative-ref\376\003\000\000\002\376\001\000\000\015locative-set!\376\003\000\000\002\376\001\000"
"\000\020locative->object\376\003\000\000\002\376\001\000\000\011locative\077\376\003\000\000\002\376\001\000\000\017pointer->object\376\003\000\000\002\376\001\000\000\007flonum\077\376"
"\003\000\000\002\376\001\000\000\007finite\077\376\003\000\000\002\376\001\000\000\020address->pointer\376\003\000\000\002\376\001\000\000\020pointer->address\376\003\000\000\002\376\001\000\000\010po"
"inter+\376\003\000\000\002\376\001\000\000\011pointer=\077\376\003\000\000\002\376\001\000\000\016pointer-u8-ref\376\003\000\000\002\376\001\000\000\016pointer-s8-ref\376\003\000\000\002\376\001"
"\000\000\017pointer-u16-ref\376\003\000\000\002\376\001\000\000\017pointer-s16-ref\376\003\000\000\002\376\001\000\000\017pointer-u32-ref\376\003\000\000\002\376\001\000\000\017po"
"inter-s32-ref\376\003\000\000\002\376\001\000\000\017pointer-f32-ref\376\003\000\000\002\376\001\000\000\017pointer-f64-ref\376\003\000\000\002\376\001\000\000\017pointer"
"-u8-set!\376\003\000\000\002\376\001\000\000\017pointer-s8-set!\376\003\000\000\002\376\001\000\000\020pointer-u16-set!\376\003\000\000\002\376\001\000\000\020pointer-s16"
"-set!\376\003\000\000\002\376\001\000\000\020pointer-u32-set!\376\003\000\000\002\376\001\000\000\020pointer-s32-set!\376\003\000\000\002\376\001\000\000\020pointer-f32-s"
"et!\376\003\000\000\002\376\001\000\000\020pointer-f64-set!\376\003\000\000\002\376\001\000\000\022current-error-port\376\003\000\000\002\376\001\000\000\016current-threa"
"d\376\003\000\000\002\376\001\000\000\006printf\376\003\000\000\002\376\001\000\000\007sprintf\376\003\000\000\002\376\001\000\000\006format\376\003\000\000\002\376\001\000\000\007fprintf\376\003\000\000\002\376\001\000\000\013get"
"-keyword\376\377\016");
lf[27]=C_h_intern(&lf[27],26,"\010compilerinternal-bindings");
lf[28]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010\003sysslot\376\003\000\000\002\376\001\000\000\013\003syssetslot\376\003\000\000\002\376\001\000\000\015\003sysblock-ref\376\003\000\000\002\376\001\000\000\016\003sysbloc"
"k-set!\376\003\000\000\002\376\001\000\000\042\003syscall-with-current-continuation\376\003\000\000\002\376\001\000\000\010\003syssize\376\003\000\000\002\376\001\000\000\010\003s"
"ysbyte\376\003\000\000\002\376\001\000\000\013\003syssetbyte\376\003\000\000\002\376\001\000\000\014\003syspointer\077\376\003\000\000\002\376\001\000\000\026\003sysgeneric-structure"
"\077\376\003\000\000\002\376\001\000\000\016\003sysstructure\077\376\003\000\000\002\376\001\000\000\023\003syscheck-structure\376\003\000\000\002\376\001\000\000\017\003syscheck-exact\376"
"\003\000\000\002\376\001\000\000\020\003syscheck-number\376\003\000\000\002\376\001\000\000\016\003syscheck-list\376\003\000\000\002\376\001\000\000\016\003syscheck-pair\376\003\000\000\002\376\001"
"\000\000\020\003syscheck-string\376\003\000\000\002\376\001\000\000\020\003syscheck-symbol\376\003\000\000\002\376\001\000\000\021\003syscheck-boolean\376\003\000\000\002\376\001\000"
"\000\022\003syscheck-locative\376\003\000\000\002\376\001\000\000\016\003syscheck-port\376\003\000\000\002\376\001\000\000\024\003syscheck-input-port\376\003\000\000\002\376"
"\001\000\000\025\003syscheck-output-port\376\003\000\000\002\376\001\000\000\023\003syscheck-open-port\376\003\000\000\002\376\001\000\000\016\003syscheck-char\376\003"
"\000\000\002\376\001\000\000\020\003syscheck-vector\376\003\000\000\002\376\001\000\000\025\003syscheck-byte-vector\376\003\000\000\002\376\001\000\000\010\003syslist\376\003\000\000\002\376\001"
"\000\000\010\003syscons\376\003\000\000\002\376\001\000\000\024\003syscall-with-values\376\003\000\000\002\376\001\000\000\020\003sysfits-in-int\077\376\003\000\000\002\376\001\000\000\031\003sy"
"sfits-in-unsigned-int\077\376\003\000\000\002\376\001\000\000\033\003sysflonum-in-fixnum-range\077\376\003\000\000\002\376\001\000\000\011\003sysfudge\376\003"
"\000\000\002\376\001\000\000\016\003sysimmediate\077\376\003\000\000\002\376\001\000\000\022\003syscontext-switch\376\003\000\000\002\376\001\000\000\022\003sysmake-structure\376\003"
"\000\000\002\376\001\000\000\011\003sysapply\376\003\000\000\002\376\001\000\000\020\003sysapply-values\376\003\000\000\002\376\001\000\000\026\003syscontinuation-graft\376\003\000\000\002"
"\376\001\000\000\017\003sysbytevector\077\376\003\000\000\002\376\001\000\000\017\003sysmake-vector\376\003\000\000\002\376\001\000\000\012\003syssetter\376\003\000\000\002\376\001\000\000\007\003sysc"
"ar\376\003\000\000\002\376\001\000\000\007\003syscdr\376\003\000\000\002\376\001\000\000\011\003syspair\077\376\003\000\000\002\376\001\000\000\007\003syseq\077\376\003\000\000\002\376\001\000\000\011\003syslist\077\376\003\000\000\002\376"
"\001\000\000\013\003sysvector\077\376\003\000\000\002\376\001\000\000\010\003syseqv\077\376\003\000\000\002\376\001\000\000\017\003sysget-keyword\376\003\000\000\002\376\001\000\000\031\003sysforeign-"
"char-argument\376\003\000\000\002\376\001\000\000\033\003sysforeign-fixnum-argument\376\003\000\000\002\376\001\000\000\033\003sysforeign-flonum-a"
"rgument\376\003\000\000\002\376\001\000\000\032\003sysforeign-block-argument\376\003\000\000\002\376\001\000\000#\003sysforeign-struct-wrapper-"
"argument\376\003\000\000\002\376\001\000\000\033\003sysforeign-string-argument\376\003\000\000\002\376\001\000\000\034\003sysforeign-pointer-argum"
"ent\376\003\000\000\002\376\001\000\000\010\003sysvoid\376\003\000\000\002\376\001\000\000\034\003sysforeign-integer-argument\376\003\000\000\002\376\001\000\000%\003sysforeign"
"-unsigned-integer-argument\376\003\000\000\002\376\001\000\000\017\003syspeek-fixnum\376\003\000\000\002\376\001\000\000\014\003syssetislot\376\003\000\000\002\376\001"
"\000\000\020\003syspoke-integer\376\003\000\000\002\376\001\000\000\016\003syspermanent\077\376\003\000\000\002\376\001\000\000\012\003sysvalues\376\003\000\000\002\376\001\000\000\017\003syspok"
"e-double\376\003\000\000\002\376\001\000\000\021\003sysintern-symbol\376\003\000\000\002\376\001\000\000\017\003sysmake-symbol\376\003\000\000\002\376\001\000\000\021\003sysnull-p"
"ointer\077\376\003\000\000\002\376\001\000\000\015\003syspeek-byte\376\003\000\000\002\376\001\000\000\020\003sysfile-exists\077\376\377\016");
lf[29]=C_h_intern(&lf[29],30,"\010compilernon-foldable-bindings");
lf[30]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006vector\376\003\000\000\002\376\001\000\000\004cons\376\003\000\000\002\376\001\000\000\004list\376\003\000\000\002\376\001\000\000\006string\376\003\000\000\002\376\001\000\000\013make-vecto"
"r\376\003\000\000\002\376\001\000\000\013make-string\376\003\000\000\002\376\001\000\000\016string->symbol\376\003\000\000\002\376\001\000\000\006values\376\003\000\000\002\376\001\000\000\022current-"
"input-port\376\003\000\000\002\376\001\000\000\023current-output-port\376\003\000\000\002\376\001\000\000\011read-char\376\003\000\000\002\376\001\000\000\012write-char\376\003"
"\000\000\002\376\001\000\000\006printf\376\003\000\000\002\376\001\000\000\007fprintf\376\003\000\000\002\376\001\000\000\006format\376\003\000\000\002\376\001\000\000\005apply\376\003\000\000\002\376\001\000\000\036call-wit"
"h-current-continuation\376\003\000\000\002\376\001\000\000\010set-car!\376\003\000\000\002\376\001\000\000\010set-cdr!\376\003\000\000\002\376\001\000\000\012write-char\376\003"
"\000\000\002\376\001\000\000\007newline\376\003\000\000\002\376\001\000\000\005write\376\003\000\000\002\376\001\000\000\007display\376\003\000\000\002\376\001\000\000\011peek-char\376\003\000\000\002\376\001\000\000\013char"
"-ready\077\376\003\000\000\002\376\001\000\000\004read\376\003\000\000\002\376\001\000\000\011read-char\376\003\000\000\002\376\001\000\000\010for-each\376\003\000\000\002\376\001\000\000\003map\376\003\000\000\002\376\001\000\000"
"\013string-set!\376\003\000\000\002\376\001\000\000\013vector-set!\376\003\000\000\002\376\001\000\000\014string-fill!\376\003\000\000\002\376\001\000\000\014vector-fill!\376\003\000"
"\000\002\376\001\000\000\017open-input-file\376\003\000\000\002\376\001\000\000\020open-output-file\376\003\000\000\002\376\001\000\000\020close-input-port\376\003\000\000\002\376"
"\001\000\000\021close-output-port\376\003\000\000\002\376\001\000\000\024call-with-input-port\376\003\000\000\002\376\001\000\000\025call-with-output-po"
"rt\376\003\000\000\002\376\001\000\000\020call-with-values\376\003\000\000\002\376\001\000\000\004eval\376\003\000\000\002\376\001\000\000\010\003sysslot\376\003\000\000\002\376\001\000\000\013\003syssetslo"
"t\376\003\000\000\002\376\001\000\000\042\003syscall-with-current-continuation\376\003\000\000\002\376\001\000\000\011\003sysfudge\376\003\000\000\002\376\001\000\000\014flush-"
"output\376\003\000\000\002\376\001\000\000\005print\376\003\000\000\002\376\001\000\000\004void\376\003\000\000\002\376\001\000\000\025u8vector->blob/shared\376\003\000\000\002\376\001\000\000\025s8ve"
"ctor->blob/shared\376\003\000\000\002\376\001\000\000\026u16vector->blob/shared\376\003\000\000\002\376\001\000\000\026s16vector->blob/share"
"d\376\003\000\000\002\376\001\000\000\026u32vector->blob/shared\376\003\000\000\002\376\001\000\000\026f32vector->blob/shared\376\003\000\000\002\376\001\000\000\026f64ve"
"ctor->blob/shared\376\003\000\000\002\376\001\000\000\026s32vector->blob/shared\376\003\000\000\002\376\001\000\000\013read-string\376\003\000\000\002\376\001\000\000\014"
"read-string!\376\003\000\000\002\376\001\000\000\001o\376\003\000\000\002\376\001\000\000\020address->pointer\376\003\000\000\002\376\001\000\000\020pointer->address\376\003\000\000\002"
"\376\001\000\000\022\003sysmake-structure\376\003\000\000\002\376\001\000\000\006print\052\376\003\000\000\002\376\001\000\000\017\003sysmake-vector\376\003\000\000\002\376\001\000\000\011\003sysap"
"ply\376\003\000\000\002\376\001\000\000\014\003syssetislot\376\003\000\000\002\376\001\000\000\015\003sysblock-ref\376\003\000\000\002\376\001\000\000\010\003sysbyte\376\003\000\000\002\376\001\000\000\013\003sys"
"setbyte\376\003\000\000\002\376\001\000\000\017\003sysget-keyword\376\003\000\000\002\376\001\000\000\013get-keyword\376\003\000\000\002\376\001\000\000\017u8vector-length\376\003"
"\000\000\002\376\001\000\000\017s8vector-length\376\003\000\000\002\376\001\000\000\020u16vector-length\376\003\000\000\002\376\001\000\000\020s16vector-length\376\003\000\000\002"
"\376\001\000\000\020u32vector-length\376\003\000\000\002\376\001\000\000\020s32vector-length\376\003\000\000\002\376\001\000\000\020f32vector-length\376\003\000\000\002\376\001"
"\000\000\020f64vector-length\376\003\000\000\002\376\001\000\000\020\003sysapply-values\376\003\000\000\002\376\001\000\000\012\003syssetter\376\003\000\000\002\376\001\000\000\006sette"
"r\376\003\000\000\002\376\001\000\000\016f32vector-set!\376\003\000\000\002\376\001\000\000\016f64vector-set!\376\003\000\000\002\376\001\000\000\014u8vector-ref\376\003\000\000\002\376\001\000\000"
"\014s8vector-ref\376\003\000\000\002\376\001\000\000\015u16vector-ref\376\003\000\000\002\376\001\000\000\015s16vector-ref\376\003\000\000\002\376\001\000\000\015u32vector-r"
"ef\376\003\000\000\002\376\001\000\000\015s32vector-ref\376\003\000\000\002\376\001\000\000\015u8vector-set!\376\003\000\000\002\376\001\000\000\015s8vector-set!\376\003\000\000\002\376\001\000\000"
"\016u16vector-set!\376\003\000\000\002\376\001\000\000\016s16vector-set!\376\003\000\000\002\376\001\000\000\016u32vector-set!\376\003\000\000\002\376\001\000\000\016s32vect"
"or-set!\376\003\000\000\002\376\001\000\000\021\003sysintern-symbol\376\003\000\000\002\376\001\000\000\017\003sysmake-symbol\376\003\000\000\002\376\001\000\000\024make-record"
"-instance\376\003\000\000\002\376\001\000\000\005error\376\003\000\000\002\376\001\000\000\016\003sysblock-set!\376\003\000\000\002\376\001\000\000\022current-error-port\376\003\000\000"
"\002\376\001\000\000\016current-thread\376\003\000\000\002\376\001\000\000\016pointer-u8-ref\376\003\000\000\002\376\001\000\000\017pointer-u8-set!\376\003\000\000\002\376\001\000\000\016p"
"ointer-s8-ref\376\003\000\000\002\376\001\000\000\017pointer-s8-set!\376\003\000\000\002\376\001\000\000\017pointer-u16-ref\376\003\000\000\002\376\001\000\000\020pointer"
"-u16-set!\376\003\000\000\002\376\001\000\000\017pointer-s16-ref\376\003\000\000\002\376\001\000\000\020pointer-s16-set!\376\003\000\000\002\376\001\000\000\017pointer-u3"
"2-ref\376\003\000\000\002\376\001\000\000\020pointer-u32-set!\376\003\000\000\002\376\001\000\000\017pointer-s32-ref\376\003\000\000\002\376\001\000\000\020pointer-s32-se"
"t!\376\003\000\000\002\376\001\000\000\017pointer-f32-ref\376\003\000\000\002\376\001\000\000\020pointer-f32-set!\376\003\000\000\002\376\001\000\000\017pointer-f64-ref\376\003"
"\000\000\002\376\001\000\000\020pointer-f64-set!\376\377\016");
lf[31]=C_h_intern(&lf[31],26,"\010compilerfoldable-bindings");
lf[32]=C_h_intern(&lf[32],6,"fixnum");
lf[33]=C_h_intern(&lf[33],11,"number-type");
lf[34]=C_h_intern(&lf[34],6,"unsafe");
lf[35]=C_h_intern(&lf[35],4,"node");
lf[36]=C_h_intern(&lf[36],11,"\004coreinline");
lf[37]=C_h_intern(&lf[37],9,"\004corecall");
lf[38]=C_h_intern(&lf[38],20,"\004coreinline_allocate");
lf[39]=C_h_intern(&lf[39],14,"\010compilerqnode");
lf[40]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\005C_eqp\376\377\016");
lf[41]=C_h_intern(&lf[41],5,"quote");
lf[42]=C_h_intern(&lf[42],13,"\004corevariable");
lf[43]=C_h_intern(&lf[43],5,"cons\052");
lf[44]=C_h_intern(&lf[44],3,"map");
lf[45]=C_h_intern(&lf[45],6,"append");
lf[46]=C_h_intern(&lf[46],7,"butlast");
lf[47]=C_h_intern(&lf[47],9,"\004coreproc");
lf[48]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\007C_apply\376\003\000\000\002\376\377\006\001\376\377\016");
lf[49]=C_h_intern(&lf[49],6,"values");
lf[50]=C_h_intern(&lf[50],10,"\003sysvalues");
lf[51]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\016C_apply_values\376\003\000\000\002\376\377\006\001\376\377\016");
lf[52]=C_h_intern(&lf[52],7,"\003sysget");
lf[53]=C_h_intern(&lf[53],18,"\010compilerintrinsic");
lf[54]=C_h_intern(&lf[54],4,"last");
lf[55]=C_h_intern(&lf[55],30,"call-with-current-continuation");
lf[56]=C_h_intern(&lf[56],16,"\010compilerrewrite");
lf[57]=C_h_intern(&lf[57],11,"\004corelambda");
lf[58]=C_h_intern(&lf[58],3,"let");
lf[59]=C_h_intern(&lf[59],16,"\010compilervarnode");
lf[60]=C_h_intern(&lf[60],6,"gensym");
lf[61]=C_h_intern(&lf[61],2,"f_");
lf[62]=C_h_intern(&lf[62],18,"\010compilerdebugging");
lf[63]=C_h_intern(&lf[63],1,"o");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000)removing single-valued `call-with-values\047");
lf[65]=C_h_intern(&lf[65],1,"r");
lf[66]=C_h_intern(&lf[66],12,"\010compilerget");
lf[67]=C_h_intern(&lf[67],5,"value");
lf[68]=C_h_intern(&lf[68],14,"\004coreundefined");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\014C_a_i_vector");
lf[70]=C_h_intern(&lf[70],13,"list-tabulate");
lf[71]=C_h_intern(&lf[71],16,"inline-transient");
lf[72]=C_h_intern(&lf[72],8,"assigned");
lf[73]=C_h_intern(&lf[73],10,"references");
lf[74]=C_h_intern(&lf[74],30,"\010compilerdecompose-lambda-list");
lf[75]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012C_a_i_cons\376\003\000\000\002\376\377\001\000\000\000\003\376\377\016");
lf[76]=C_h_intern(&lf[76],5,"xcons");
lf[77]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012C_a_i_cons\376\003\000\000\002\376\377\001\000\000\000\003\376\377\016");
lf[78]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012C_a_i_cons\376\003\000\000\002\376\377\001\000\000\000\003\376\377\016");
lf[79]=C_h_intern(&lf[79],10,"alist-cons");
lf[80]=C_h_intern(&lf[80],15,"\003sysget-keyword");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_get_keyword");
lf[82]=C_h_intern(&lf[82],11,"get-keyword");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_get_keyword");
lf[84]=C_h_intern(&lf[84],18,"substring-index-ci");
lf[85]=C_h_intern(&lf[85],22,"\003syssubstring-index-ci");
lf[86]=C_h_intern(&lf[86],15,"substring-index");
lf[87]=C_h_intern(&lf[87],19,"\003syssubstring-index");
lf[88]=C_h_intern(&lf[88],14,"substring-ci=\077");
lf[89]=C_h_intern(&lf[89],18,"\003syssubstring-ci=\077");
lf[90]=C_h_intern(&lf[90],11,"substring=\077");
lf[91]=C_h_intern(&lf[91],15,"\003syssubstring=\077");
lf[92]=C_h_intern(&lf[92],11,"read-string");
lf[93]=C_h_intern(&lf[93],20,"\003sysread-string/port");
lf[94]=C_h_intern(&lf[94],18,"\003sysstandard-input");
lf[95]=C_h_intern(&lf[95],10,"write-char");
lf[96]=C_h_intern(&lf[96],19,"\003syswrite-char/port");
lf[97]=C_h_intern(&lf[97],19,"\003sysstandard-output");
lf[98]=C_h_intern(&lf[98],9,"read-char");
lf[99]=C_h_intern(&lf[99],18,"\003sysread-char/port");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000\016C_u_i_bit_setp");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000\014C_i_bit_setp");
lf[102]=C_h_intern(&lf[102],8,"bit-set\077");
lf[103]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\006C_anyp\376\377\016");
lf[104]=C_h_intern(&lf[104],6,"global");
lf[105]=C_h_intern(&lf[105],4,"any\077");
lf[106]=C_h_intern(&lf[106],18,"current-error-port");
lf[107]=C_h_intern(&lf[107],18,"\003sysstandard-error");
lf[108]=C_h_intern(&lf[108],19,"current-output-port");
lf[109]=C_h_intern(&lf[109],18,"current-input-port");
lf[110]=C_h_intern(&lf[110],14,"current-thread");
lf[111]=C_h_intern(&lf[111],18,"\003syscurrent-thread");
lf[112]=C_h_intern(&lf[112],8,"\003sysvoid");
lf[113]=C_h_intern(&lf[113],19,"\003sysundefined-value");
lf[114]=C_h_intern(&lf[114],4,"void");
lf[115]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003car\376\001\000\000\010set-car!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003cdr\376\001\000\000\010set-cdr!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016has"
"h-table-ref\376\001\000\000\017hash-table-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011block-ref\376\001\000\000\012block-set!\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\014locative-ref\376\001\000\000\015locative-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014u8vector-ref\376\001\000\000\015u8vector-set!"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014s8vector-ref\376\001\000\000\015s8vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015u16vector-ref\376\001\000\000\016u1"
"6vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015s16vector-ref\376\001\000\000\016s16vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015u32vec"
"tor-ref\376\001\000\000\016u32vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015s32vector-ref\376\001\000\000\016s32vector-set!\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\015f32vector-ref\376\001\000\000\016f32vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015f64vector-ref\376\001\000\000\016f64vect"
"or-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016pointer-u8-ref\376\001\000\000\017pointer-u8-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016pointer-s"
"8-ref\376\001\000\000\017pointer-s8-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017pointer-u16-ref\376\001\000\000\020pointer-u16-set!\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\017pointer-s16-ref\376\001\000\000\020pointer-s16-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017pointer-u32-ref\376\001\000"
"\000\020pointer-u32-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017pointer-s32-ref\376\001\000\000\020pointer-s32-set!\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\017pointer-f32-ref\376\001\000\000\020pointer-f32-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017pointer-f64-ref\376\001\000\000\020point"
"er-f64-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012string-ref\376\001\000\000\013string-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012vector-ref\376\001\000"
"\000\013vector-set!\376\377\016");
lf[116]=C_h_intern(&lf[116],10,"\003syssetter");
lf[117]=C_h_intern(&lf[117],7,"call/cc");
lf[118]=C_h_intern(&lf[118],20,"thread-specific-set!");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_setslot");
lf[120]=C_h_intern(&lf[120],15,"thread-specific");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[122]=C_h_intern(&lf[122],15,"\003sysmake-vector");
lf[123]=C_h_intern(&lf[123],11,"make-vector");
lf[124]=C_h_intern(&lf[124],22,"f64vector->blob/shared");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[126]=C_h_intern(&lf[126],22,"f32vector->blob/shared");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[128]=C_h_intern(&lf[128],22,"s32vector->blob/shared");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[130]=C_h_intern(&lf[130],22,"u32vector->blob/shared");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[132]=C_h_intern(&lf[132],22,"s16vector->blob/shared");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[134]=C_h_intern(&lf[134],22,"u16vector->blob/shared");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[136]=C_h_intern(&lf[136],21,"s8vector->blob/shared");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[138]=C_h_intern(&lf[138],21,"u8vector->blob/shared");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[140]=C_h_intern(&lf[140],10,"null-list\077");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_null_list_p");
lf[142]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_nullp");
lf[143]=C_h_intern(&lf[143],5,"atom\077");
lf[144]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_not_pair_p");
lf[145]=C_h_intern(&lf[145],9,"not-pair\077");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_not_pair_p");
lf[147]=C_h_intern(&lf[147],16,"f64vector-length");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_64vector_length");
lf[149]=C_h_intern(&lf[149],16,"f32vector-length");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_32vector_length");
lf[151]=C_h_intern(&lf[151],16,"s32vector-length");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_32vector_length");
lf[153]=C_h_intern(&lf[153],16,"u32vector-length");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_32vector_length");
lf[155]=C_h_intern(&lf[155],16,"s16vector-length");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_16vector_length");
lf[157]=C_h_intern(&lf[157],16,"u16vector-length");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_16vector_length");
lf[159]=C_h_intern(&lf[159],15,"s8vector-length");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_i_8vector_length");
lf[161]=C_h_intern(&lf[161],15,"u8vector-length");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_i_8vector_length");
lf[163]=C_h_intern(&lf[163],14,"f64vector-set!");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_f64vector_set");
lf[165]=C_h_intern(&lf[165],14,"f32vector-set!");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_f32vector_set");
lf[167]=C_h_intern(&lf[167],14,"s32vector-set!");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_s32vector_set");
lf[169]=C_h_intern(&lf[169],14,"u32vector-set!");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_u32vector_set");
lf[171]=C_h_intern(&lf[171],14,"s16vector-set!");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_s16vector_set");
lf[173]=C_h_intern(&lf[173],14,"u16vector-set!");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_u16vector_set");
lf[175]=C_h_intern(&lf[175],13,"s8vector-set!");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\022C_u_i_s8vector_set");
lf[177]=C_h_intern(&lf[177],13,"u8vector-set!");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\022C_u_i_u8vector_set");
lf[179]=C_h_intern(&lf[179],13,"s32vector-ref");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\025C_a_u_i_s32vector_ref");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_s32vector_ref");
lf[182]=C_h_intern(&lf[182],13,"u32vector-ref");
lf[183]=C_decode_literal(C_heaptop,"\376B\000\000\025C_a_u_i_u32vector_ref");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_u32vector_ref");
lf[185]=C_h_intern(&lf[185],13,"f64vector-ref");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\025C_a_u_i_f64vector_ref");
lf[187]=C_h_intern(&lf[187],13,"f32vector-ref");
lf[188]=C_decode_literal(C_heaptop,"\376B\000\000\025C_a_u_i_f32vector_ref");
lf[189]=C_h_intern(&lf[189],13,"s16vector-ref");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_s16vector_ref");
lf[191]=C_h_intern(&lf[191],13,"u16vector-ref");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_u16vector_ref");
lf[193]=C_h_intern(&lf[193],12,"s8vector-ref");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\022C_u_i_s8vector_ref");
lf[195]=C_h_intern(&lf[195],12,"u8vector-ref");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\022C_u_i_u8vector_ref");
lf[197]=C_h_intern(&lf[197],9,"blob-size");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\014C_block_size");
lf[199]=C_h_intern(&lf[199],37,"\003sysforeign-unsigned-integer-argument");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000&C_i_foreign_unsigned_integer_argumentp");
lf[201]=C_h_intern(&lf[201],28,"\003sysforeign-integer-argument");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\035C_i_foreign_integer_argumentp");
lf[203]=C_h_intern(&lf[203],28,"\003sysforeign-pointer-argument");
lf[204]=C_decode_literal(C_heaptop,"\376B\000\000\035C_i_foreign_pointer_argumentp");
lf[205]=C_h_intern(&lf[205],27,"\003sysforeign-string-argument");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\034C_i_foreign_string_argumentp");
lf[207]=C_h_intern(&lf[207],35,"\003sysforeign-struct-wrapper-argument");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000$C_i_foreign_struct_wrapper_argumentp");
lf[209]=C_h_intern(&lf[209],26,"\003sysforeign-block-argument");
lf[210]=C_decode_literal(C_heaptop,"\376B\000\000\033C_i_foreign_block_argumentp");
lf[211]=C_h_intern(&lf[211],27,"\003sysforeign-flonum-argument");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000\034C_i_foreign_flonum_argumentp");
lf[213]=C_h_intern(&lf[213],25,"\003sysforeign-char-argument");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000\032C_i_foreign_char_argumentp");
lf[215]=C_h_intern(&lf[215],27,"\003sysforeign-fixnum-argument");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000\034C_i_foreign_fixnum_argumentp");
lf[217]=C_h_intern(&lf[217],13,"locative-set!");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_locative_set");
lf[219]=C_h_intern(&lf[219],16,"locative->object");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\026C_i_locative_to_object");
lf[221]=C_h_intern(&lf[221],14,"\003sysimmediate\077");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\006C_immp");
lf[223]=C_h_intern(&lf[223],17,"\003sysnull-pointer\077");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\017C_null_pointerp");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000\017C_null_pointerp");
lf[226]=C_h_intern(&lf[226],14,"\003syspermanent\077");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\014C_permanentp");
lf[228]=C_h_intern(&lf[228],27,"\003sysflonum-in-fixnum-range\077");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000\032C_flonum_in_fixnum_range_p");
lf[230]=C_h_intern(&lf[230],25,"\003sysfits-in-unsigned-int\077");
lf[231]=C_decode_literal(C_heaptop,"\376B\000\000\030C_fits_in_unsigned_int_p");
lf[232]=C_h_intern(&lf[232],16,"\003sysfits-in-int\077");
lf[233]=C_decode_literal(C_heaptop,"\376B\000\000\017C_fits_in_int_p");
lf[234]=C_h_intern(&lf[234],9,"\003sysfudge");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\007C_fudge");
lf[236]=C_h_intern(&lf[236],11,"string-ci=\077");
lf[237]=C_decode_literal(C_heaptop,"\376B\000\000\025C_i_string_ci_equal_p");
lf[238]=C_h_intern(&lf[238],8,"string=\077");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_string_equal_p");
lf[240]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_i_string_equal_p");
lf[241]=C_h_intern(&lf[241],15,"\003syspoke-double");
lf[242]=C_decode_literal(C_heaptop,"\376B\000\000\015C_poke_double");
lf[243]=C_h_intern(&lf[243],16,"\003syspoke-integer");
lf[244]=C_decode_literal(C_heaptop,"\376B\000\000\016C_poke_integer");
lf[245]=C_h_intern(&lf[245],12,"\003syssetislot");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_set_i_slot");
lf[247]=C_h_intern(&lf[247],15,"pointer->object");
lf[248]=C_decode_literal(C_heaptop,"\376B\000\000\023C_pointer_to_object");
lf[249]=C_h_intern(&lf[249],13,"\003syspeek-byte");
lf[250]=C_decode_literal(C_heaptop,"\376B\000\000\013C_peek_byte");
lf[251]=C_h_intern(&lf[251],15,"\003syspeek-fixnum");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\015C_peek_fixnum");
lf[253]=C_h_intern(&lf[253],11,"\003syssetbyte");
lf[254]=C_decode_literal(C_heaptop,"\376B\000\000\011C_setbyte");
lf[255]=C_h_intern(&lf[255],8,"\003sysbyte");
lf[256]=C_decode_literal(C_heaptop,"\376B\000\000\011C_subbyte");
lf[257]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\033C_i_fixnum_arithmetic_shift\376\377\016");
lf[258]=C_decode_literal(C_heaptop,"\376B\000\000\026C_a_i_arithmetic_shift");
lf[259]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\024C_fixnum_shift_right\376\377\016");
lf[260]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\023C_fixnum_shift_left\376\377\016");
lf[261]=C_h_intern(&lf[261],20,"\010compilerbig-fixnum\077");
lf[262]=C_h_intern(&lf[262],16,"arithmetic-shift");
lf[263]=C_h_intern(&lf[263],5,"fxmod");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\017C_fixnum_modulo");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\000\021C_u_fixnum_modulo");
lf[266]=C_h_intern(&lf[266],3,"fx/");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\017C_fixnum_divide");
lf[268]=C_decode_literal(C_heaptop,"\376B\000\000\021C_u_fixnum_divide");
lf[269]=C_h_intern(&lf[269],5,"fxior");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000\013C_fixnum_or");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000\015C_u_fixnum_or");
lf[272]=C_h_intern(&lf[272],5,"fxand");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_and");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\016C_u_fixnum_and");
lf[275]=C_h_intern(&lf[275],5,"fxxor");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_xor");
lf[277]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_xor");
lf[278]=C_h_intern(&lf[278],5,"fxneg");
lf[279]=C_decode_literal(C_heaptop,"\376B\000\000\017C_fixnum_negate");
lf[280]=C_decode_literal(C_heaptop,"\376B\000\000\021C_u_fixnum_negate");
lf[281]=C_h_intern(&lf[281],5,"fxshr");
lf[282]=C_decode_literal(C_heaptop,"\376B\000\000\024C_fixnum_shift_right");
lf[283]=C_h_intern(&lf[283],5,"fxshl");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\023C_fixnum_shift_left");
lf[285]=C_h_intern(&lf[285],3,"fx-");
lf[286]=C_decode_literal(C_heaptop,"\376B\000\000\023C_fixnum_difference");
lf[287]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_fixnum_difference");
lf[288]=C_h_intern(&lf[288],3,"fx+");
lf[289]=C_decode_literal(C_heaptop,"\376B\000\000\015C_fixnum_plus");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\017C_u_fixnum_plus");
lf[291]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\016C_i_set_i_slot\376\377\016");
lf[292]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\013C_i_setslot\376\377\016");
lf[293]=C_h_intern(&lf[293],19,"\010compilerimmediate\077");
lf[294]=C_h_intern(&lf[294],11,"\003syssetslot");
lf[295]=C_h_intern(&lf[295],15,"pointer-f64-ref");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000\027C_a_u_i_pointer_f64_ref");
lf[297]=C_h_intern(&lf[297],15,"pointer-f32-ref");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\000\027C_a_u_i_pointer_f32_ref");
lf[299]=C_h_intern(&lf[299],15,"pointer-s32-ref");
lf[300]=C_decode_literal(C_heaptop,"\376B\000\000\027C_a_u_i_pointer_s32_ref");
lf[301]=C_h_intern(&lf[301],15,"pointer-u32-ref");
lf[302]=C_decode_literal(C_heaptop,"\376B\000\000\027C_a_u_i_pointer_u32_ref");
lf[303]=C_h_intern(&lf[303],16,"pointer-f64-set!");
lf[304]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_f64_set");
lf[305]=C_h_intern(&lf[305],16,"pointer-f32-set!");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_f32_set");
lf[307]=C_h_intern(&lf[307],16,"pointer-s32-set!");
lf[308]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_s32_set");
lf[309]=C_h_intern(&lf[309],16,"pointer-u32-set!");
lf[310]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_u32_set");
lf[311]=C_h_intern(&lf[311],16,"pointer-s16-set!");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_s16_set");
lf[313]=C_h_intern(&lf[313],16,"pointer-u16-set!");
lf[314]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_u16_set");
lf[315]=C_h_intern(&lf[315],15,"pointer-s8-set!");
lf[316]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_i_pointer_s8_set");
lf[317]=C_h_intern(&lf[317],15,"pointer-u8-set!");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_i_pointer_u8_set");
lf[319]=C_h_intern(&lf[319],15,"pointer-s16-ref");
lf[320]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_s16_ref");
lf[321]=C_h_intern(&lf[321],15,"pointer-u16-ref");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_u16_ref");
lf[323]=C_h_intern(&lf[323],14,"pointer-s8-ref");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_i_pointer_s8_ref");
lf[325]=C_h_intern(&lf[325],14,"pointer-u8-ref");
lf[326]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_i_pointer_u8_ref");
lf[327]=C_h_intern(&lf[327],12,"locative-ref");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\022C_a_i_locative_ref");
lf[329]=C_h_intern(&lf[329],8,"pointer+");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000\023C_a_u_i_pointer_inc");
lf[331]=C_h_intern(&lf[331],16,"pointer->address");
lf[332]=C_decode_literal(C_heaptop,"\376B\000\000\030C_a_i_pointer_to_address");
lf[333]=C_h_intern(&lf[333],16,"address->pointer");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000\030C_a_i_address_to_pointer");
lf[335]=C_h_intern(&lf[335],6,"string");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000\014C_a_i_string");
lf[337]=C_h_intern(&lf[337],18,"\003sysmake-structure");
lf[338]=C_decode_literal(C_heaptop,"\376B\000\000\014C_a_i_record");
lf[339]=C_h_intern(&lf[339],10,"\003sysvector");
lf[340]=C_decode_literal(C_heaptop,"\376B\000\000\014C_a_i_vector");
lf[341]=C_h_intern(&lf[341],6,"vector");
lf[342]=C_decode_literal(C_heaptop,"\376B\000\000\014C_a_i_vector");
lf[343]=C_h_intern(&lf[343],8,"\003syslist");
lf[344]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_list");
lf[345]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\000\376\003\000\000\002\376\377\001\000\000\000\003\376\377\016");
lf[346]=C_h_intern(&lf[346],4,"list");
lf[347]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_list");
lf[348]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\000\376\003\000\000\002\376\377\001\000\000\000\003\376\377\016");
lf[349]=C_h_intern(&lf[349],8,"\003syscons");
lf[350]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_cons");
lf[351]=C_h_intern(&lf[351],4,"cons");
lf[352]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_cons");
lf[353]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\026C_a_i_string_to_number\376\003\000\000\002\376\377\001\000\000\000\004\376\377\016");
lf[354]=C_h_intern(&lf[354],14,"string->number");
lf[355]=C_h_intern(&lf[355],7,"fpround");
lf[356]=C_decode_literal(C_heaptop,"\376B\000\000\022C_a_i_flonum_floor");
lf[357]=C_h_intern(&lf[357],9,"fpceiling");
lf[358]=C_decode_literal(C_heaptop,"\376B\000\000\024C_a_i_flonum_ceiling");
lf[359]=C_decode_literal(C_heaptop,"\376B\000\000\022C_a_i_flonum_round");
lf[360]=C_h_intern(&lf[360],10,"fptruncate");
lf[361]=C_decode_literal(C_heaptop,"\376B\000\000\025C_a_i_flonum_truncate");
lf[362]=C_h_intern(&lf[362],5,"fpabs");
lf[363]=C_decode_literal(C_heaptop,"\376B\000\000\020C_a_i_flonum_abs");
lf[364]=C_h_intern(&lf[364],6,"fpsqrt");
lf[365]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_flonum_sqrt");
lf[366]=C_h_intern(&lf[366],5,"fplog");
lf[367]=C_decode_literal(C_heaptop,"\376B\000\000\020C_a_i_flonum_log");
lf[368]=C_h_intern(&lf[368],6,"fpexpt");
lf[369]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_flonum_expt");
lf[370]=C_h_intern(&lf[370],5,"fpexp");
lf[371]=C_decode_literal(C_heaptop,"\376B\000\000\020C_a_i_flonum_exp");
lf[372]=C_h_intern(&lf[372],7,"fpatan2");
lf[373]=C_decode_literal(C_heaptop,"\376B\000\000\022C_a_i_flonum_atan2");
lf[374]=C_h_intern(&lf[374],6,"fpatan");
lf[375]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_flonum_atan");
lf[376]=C_h_intern(&lf[376],6,"fpacos");
lf[377]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_flonum_acos");
lf[378]=C_h_intern(&lf[378],6,"fpasin");
lf[379]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_flonum_asin");
lf[380]=C_h_intern(&lf[380],5,"fptan");
lf[381]=C_decode_literal(C_heaptop,"\376B\000\000\020C_a_i_flonum_tan");
lf[382]=C_h_intern(&lf[382],5,"fpcos");
lf[383]=C_decode_literal(C_heaptop,"\376B\000\000\020C_a_i_flonum_cos");
lf[384]=C_h_intern(&lf[384],5,"fpsin");
lf[385]=C_decode_literal(C_heaptop,"\376B\000\000\020C_a_i_flonum_sin");
lf[386]=C_h_intern(&lf[386],8,"truncate");
lf[387]=C_h_intern(&lf[387],6,"flonum");
lf[388]=C_h_intern(&lf[388],7,"ceiling");
lf[389]=C_h_intern(&lf[389],5,"floor");
lf[390]=C_h_intern(&lf[390],7,"fpfloor");
lf[391]=C_h_intern(&lf[391],7,"fxeven\077");
lf[392]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_fixnumevenp");
lf[393]=C_h_intern(&lf[393],6,"fxodd\077");
lf[394]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_fixnumoddp");
lf[395]=C_h_intern(&lf[395],4,"odd\077");
lf[396]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_oddp");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_oddp");
lf[398]=C_h_intern(&lf[398],5,"even\077");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_evenp");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_evenp");
lf[401]=C_h_intern(&lf[401],9,"remainder");
lf[402]=C_decode_literal(C_heaptop,"\376B\000\000\017C_fixnum_modulo");
lf[403]=C_decode_literal(C_heaptop,"\376B\000\000\017C_fixnum_modulo");
lf[404]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_fixnumoddp");
lf[405]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_fixnumoddp");
lf[406]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_fixnumevenp");
lf[407]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_fixnumevenp");
lf[408]=C_h_intern(&lf[408],15,"\003sysmake-symbol");
lf[409]=C_decode_literal(C_heaptop,"\376B\000\000\015C_make_symbol");
lf[410]=C_h_intern(&lf[410],17,"\003sysintern-symbol");
lf[411]=C_decode_literal(C_heaptop,"\376B\000\000\022C_string_to_symbol");
lf[412]=C_h_intern(&lf[412],18,"\003syscontext-switch");
lf[413]=C_decode_literal(C_heaptop,"\376B\000\000\020C_context_switch");
lf[414]=C_h_intern(&lf[414],14,"return-to-host");
lf[415]=C_decode_literal(C_heaptop,"\376B\000\000\020C_return_to_host");
lf[416]=C_h_intern(&lf[416],23,"\003sysensure-heap-reserve");
lf[417]=C_decode_literal(C_heaptop,"\376B\000\000\025C_ensure_heap_reserve");
lf[418]=C_h_intern(&lf[418],19,"\003sysallocate-vector");
lf[419]=C_decode_literal(C_heaptop,"\376B\000\000\021C_allocate_vector");
lf[420]=C_h_intern(&lf[420],34,"\003syscall-with-current-continuation");
lf[421]=C_decode_literal(C_heaptop,"\376B\000\000\011C_call_cc");
lf[422]=C_h_intern(&lf[422],14,"number->string");
lf[423]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\001\376\377\001\000\000\000\002");
lf[424]=C_decode_literal(C_heaptop,"\376B\000\000\022C_number_to_string");
lf[425]=C_h_intern(&lf[425],1,"-");
lf[426]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\001\376\377\006\000");
lf[427]=C_decode_literal(C_heaptop,"\376B\000\000\007C_minus");
lf[428]=C_h_intern(&lf[428],1,"/");
lf[429]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\001\376\377\006\000");
lf[430]=C_decode_literal(C_heaptop,"\376B\000\000\010C_divide");
lf[431]=C_h_intern(&lf[431],1,"+");
lf[432]=C_decode_literal(C_heaptop,"\376B\000\000\006C_plus");
lf[433]=C_h_intern(&lf[433],1,"\052");
lf[434]=C_decode_literal(C_heaptop,"\376B\000\000\007C_times");
lf[435]=C_h_intern(&lf[435],2,"<=");
lf[436]=C_decode_literal(C_heaptop,"\376B\000\000\021C_less_or_equal_p");
lf[437]=C_h_intern(&lf[437],2,">=");
lf[438]=C_decode_literal(C_heaptop,"\376B\000\000\024C_greater_or_equal_p");
lf[439]=C_h_intern(&lf[439],1,"<");
lf[440]=C_decode_literal(C_heaptop,"\376B\000\000\007C_lessp");
lf[441]=C_h_intern(&lf[441],1,">");
lf[442]=C_decode_literal(C_heaptop,"\376B\000\000\012C_greaterp");
lf[443]=C_h_intern(&lf[443],1,"=");
lf[444]=C_decode_literal(C_heaptop,"\376B\000\000\011C_nequalp");
lf[445]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_less_or_equalp");
lf[446]=C_decode_literal(C_heaptop,"\376B\000\000\025C_i_greater_or_equalp");
lf[447]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_lessp");
lf[448]=C_decode_literal(C_heaptop,"\376B\000\000\014C_i_greaterp");
lf[449]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_nequalp");
lf[450]=C_h_intern(&lf[450],14,"exact->inexact");
lf[451]=C_decode_literal(C_heaptop,"\376B\000\000\026C_a_i_exact_to_inexact");
lf[452]=C_decode_literal(C_heaptop,"\376B\000\000\014C_a_i_divide");
lf[453]=C_decode_literal(C_heaptop,"\376B\000\000\013C_a_i_minus");
lf[454]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_plus");
lf[455]=C_decode_literal(C_heaptop,"\376B\000\000\013C_a_i_times");
lf[456]=C_h_intern(&lf[456],3,"lcm");
lf[457]=C_h_intern(&lf[457],3,"gcd");
lf[458]=C_h_intern(&lf[458],8,"identity");
lf[459]=C_h_intern(&lf[459],7,"\003syslcm");
lf[460]=C_h_intern(&lf[460],7,"\003sysgcd");
lf[461]=C_h_intern(&lf[461],11,"vector-set!");
lf[462]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_vector_set");
lf[463]=C_h_intern(&lf[463],12,"list->string");
lf[464]=C_h_intern(&lf[464],16,"\003syslist->string");
lf[465]=C_h_intern(&lf[465],12,"string->list");
lf[466]=C_h_intern(&lf[466],16,"\003sysstring->list");
lf[467]=C_h_intern(&lf[467],13,"string-append");
lf[468]=C_h_intern(&lf[468],17,"\003sysstring-append");
lf[469]=C_h_intern(&lf[469],9,"substring");
lf[470]=C_h_intern(&lf[470],13,"\003syssubstring");
lf[471]=C_h_intern(&lf[471],20,"make-record-instance");
lf[472]=C_h_intern(&lf[472],14,"\003sysblock-set!");
lf[473]=C_h_intern(&lf[473],10,"block-set!");
lf[474]=C_h_intern(&lf[474],7,"\003sysmap");
lf[475]=C_h_intern(&lf[475],8,"for-each");
lf[476]=C_h_intern(&lf[476],12,"\003sysfor-each");
lf[477]=C_h_intern(&lf[477],6,"setter");
lf[478]=C_decode_literal(C_heaptop,"\376B\000\000\030C_fixnum_less_or_equal_p");
lf[479]=C_decode_literal(C_heaptop,"\376B\000\000\030C_flonum_less_or_equal_p");
lf[480]=C_decode_literal(C_heaptop,"\376B\000\000\033C_fixnum_greater_or_equal_p");
lf[481]=C_decode_literal(C_heaptop,"\376B\000\000\033C_flonum_greater_or_equal_p");
lf[482]=C_decode_literal(C_heaptop,"\376B\000\000\016C_fixnum_lessp");
lf[483]=C_decode_literal(C_heaptop,"\376B\000\000\016C_flonum_lessp");
lf[484]=C_decode_literal(C_heaptop,"\376B\000\000\021C_fixnum_greaterp");
lf[485]=C_decode_literal(C_heaptop,"\376B\000\000\021C_flonum_greaterp");
lf[486]=C_decode_literal(C_heaptop,"\376B\000\000\005C_eqp");
lf[487]=C_decode_literal(C_heaptop,"\376B\000\000\012C_i_equalp");
lf[488]=C_h_intern(&lf[488],14,"\003syscheck-char");
lf[489]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_check_char_2");
lf[490]=C_h_intern(&lf[490],19,"\003syscheck-structure");
lf[491]=C_decode_literal(C_heaptop,"\376B\000\000\025C_i_check_structure_2");
lf[492]=C_h_intern(&lf[492],16,"\003syscheck-vector");
lf[493]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_check_vector_2");
lf[494]=C_h_intern(&lf[494],21,"\003syscheck-byte-vector");
lf[495]=C_decode_literal(C_heaptop,"\376B\000\000\026C_i_check_bytevector_2");
lf[496]=C_h_intern(&lf[496],16,"\003syscheck-string");
lf[497]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_check_string_2");
lf[498]=C_h_intern(&lf[498],16,"\003syscheck-symbol");
lf[499]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_check_symbol_2");
lf[500]=C_h_intern(&lf[500],18,"\003syscheck-locative");
lf[501]=C_decode_literal(C_heaptop,"\376B\000\000\024C_i_check_locative_2");
lf[502]=C_h_intern(&lf[502],17,"\003syscheck-boolean");
lf[503]=C_decode_literal(C_heaptop,"\376B\000\000\023C_i_check_boolean_2");
lf[504]=C_h_intern(&lf[504],14,"\003syscheck-pair");
lf[505]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_check_pair_2");
lf[506]=C_h_intern(&lf[506],14,"\003syscheck-list");
lf[507]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_check_list_2");
lf[508]=C_h_intern(&lf[508],16,"\003syscheck-number");
lf[509]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_check_number_2");
lf[510]=C_h_intern(&lf[510],15,"\003syscheck-exact");
lf[511]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_check_exact_2");
lf[512]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_check_char");
lf[513]=C_decode_literal(C_heaptop,"\376B\000\000\023C_i_check_structure");
lf[514]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_check_vector");
lf[515]=C_decode_literal(C_heaptop,"\376B\000\000\024C_i_check_bytevector");
lf[516]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_check_string");
lf[517]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_check_symbol");
lf[518]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_check_locative");
lf[519]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_check_boolean");
lf[520]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_check_pair");
lf[521]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_check_list");
lf[522]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_check_number");
lf[523]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_check_exact");
lf[524]=C_h_intern(&lf[524],14,"inexact->exact");
lf[525]=C_decode_literal(C_heaptop,"\376B\000\000\024C_i_inexact_to_exact");
lf[526]=C_h_intern(&lf[526],13,"string-length");
lf[527]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_string_length");
lf[528]=C_h_intern(&lf[528],17,"\003sysvector-length");
lf[529]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_vector_length");
lf[530]=C_h_intern(&lf[530],13,"vector-length");
lf[531]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_vector_length");
lf[532]=C_h_intern(&lf[532],13,"integer->char");
lf[533]=C_decode_literal(C_heaptop,"\376B\000\000\020C_make_character");
lf[534]=C_decode_literal(C_heaptop,"\376B\000\000\007C_unfix");
lf[535]=C_h_intern(&lf[535],13,"char->integer");
lf[536]=C_decode_literal(C_heaptop,"\376B\000\000\005C_fix");
lf[537]=C_decode_literal(C_heaptop,"\376B\000\000\020C_character_code");
lf[538]=C_decode_literal(C_heaptop,"\376B\000\000\005C_fix");
lf[539]=C_decode_literal(C_heaptop,"\376B\000\000\015C_header_size");
lf[540]=C_decode_literal(C_heaptop,"\376B\000\000\005C_fix");
lf[541]=C_decode_literal(C_heaptop,"\376B\000\000\015C_header_size");
lf[542]=C_h_intern(&lf[542],9,"negative\077");
lf[543]=C_decode_literal(C_heaptop,"\376B\000\000\017C_u_i_negativep");
lf[544]=C_decode_literal(C_heaptop,"\376B\000\000\015C_i_negativep");
lf[545]=C_decode_literal(C_heaptop,"\376B\000\000\016C_flonum_lessp");
lf[546]=C_decode_literal(C_heaptop,"\376B\000\000\016C_fixnum_lessp");
lf[547]=C_h_intern(&lf[547],9,"positive\077");
lf[548]=C_decode_literal(C_heaptop,"\376B\000\000\017C_u_i_positivep");
lf[549]=C_decode_literal(C_heaptop,"\376B\000\000\015C_i_positivep");
lf[550]=C_decode_literal(C_heaptop,"\376B\000\000\021C_flonum_greaterp");
lf[551]=C_decode_literal(C_heaptop,"\376B\000\000\021C_fixnum_greaterp");
lf[552]=C_h_intern(&lf[552],5,"zero\077");
lf[553]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_zerop");
lf[554]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_zerop");
lf[555]=C_decode_literal(C_heaptop,"\376B\000\000\005C_eqp");
lf[556]=C_h_intern(&lf[556],4,"atan");
lf[557]=C_decode_literal(C_heaptop,"\376B\000\000\013C_a_i_atan2");
lf[558]=C_h_intern(&lf[558],4,"sqrt");
lf[559]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_sqrt");
lf[560]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_atan");
lf[561]=C_h_intern(&lf[561],4,"acos");
lf[562]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_acos");
lf[563]=C_h_intern(&lf[563],4,"asin");
lf[564]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_asin");
lf[565]=C_h_intern(&lf[565],3,"log");
lf[566]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i_log");
lf[567]=C_h_intern(&lf[567],3,"tan");
lf[568]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i_tan");
lf[569]=C_h_intern(&lf[569],3,"cos");
lf[570]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i_cos");
lf[571]=C_h_intern(&lf[571],3,"sin");
lf[572]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i_sin");
lf[573]=C_h_intern(&lf[573],3,"exp");
lf[574]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i_exp");
lf[575]=C_h_intern(&lf[575],5,"fpneg");
lf[576]=C_decode_literal(C_heaptop,"\376B\000\000\023C_a_i_flonum_negate");
lf[577]=C_h_intern(&lf[577],4,"fp/\077");
lf[578]=C_decode_literal(C_heaptop,"\376B\000\000\035C_a_i_flonum_quotient_checked");
lf[579]=C_h_intern(&lf[579],3,"fp/");
lf[580]=C_decode_literal(C_heaptop,"\376B\000\000\025C_a_i_flonum_quotient");
lf[581]=C_h_intern(&lf[581],3,"fp\052");
lf[582]=C_decode_literal(C_heaptop,"\376B\000\000\022C_a_i_flonum_times");
lf[583]=C_h_intern(&lf[583],3,"fp-");
lf[584]=C_decode_literal(C_heaptop,"\376B\000\000\027C_a_i_flonum_difference");
lf[585]=C_h_intern(&lf[585],3,"fp+");
lf[586]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_flonum_plus");
lf[587]=C_h_intern(&lf[587],11,"bitwise-not");
lf[588]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_bitwise_not");
lf[589]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_not");
lf[590]=C_h_intern(&lf[590],11,"bitwise-ior");
lf[591]=C_decode_literal(C_heaptop,"\376B\000\000\013C_fixnum_or");
lf[592]=C_decode_literal(C_heaptop,"\376B\000\000\015C_u_fixnum_or");
lf[593]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_bitwise_ior");
lf[594]=C_h_intern(&lf[594],11,"bitwise-and");
lf[595]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_and");
lf[596]=C_decode_literal(C_heaptop,"\376B\000\000\016C_u_fixnum_and");
lf[597]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_bitwise_and");
lf[598]=C_h_intern(&lf[598],11,"bitwise-xor");
lf[599]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_xor");
lf[600]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_xor");
lf[601]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_bitwise_xor");
lf[602]=C_h_intern(&lf[602],3,"abs");
lf[603]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i_abs");
lf[604]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_abs");
lf[605]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_abs");
lf[606]=C_h_intern(&lf[606],8,"set-cdr!");
lf[607]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_set_cdr");
lf[608]=C_decode_literal(C_heaptop,"\376B\000\000\015C_u_i_set_cdr");
lf[609]=C_h_intern(&lf[609],8,"set-car!");
lf[610]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_set_car");
lf[611]=C_decode_literal(C_heaptop,"\376B\000\000\015C_u_i_set_car");
lf[612]=C_h_intern(&lf[612],6,"member");
lf[613]=C_decode_literal(C_heaptop,"\376B\000\000\012C_i_member");
lf[614]=C_h_intern(&lf[614],5,"assoc");
lf[615]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_assoc");
lf[616]=C_h_intern(&lf[616],4,"memq");
lf[617]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_memq");
lf[618]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_memq");
lf[619]=C_h_intern(&lf[619],4,"assq");
lf[620]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_assq");
lf[621]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_assq");
lf[622]=C_h_intern(&lf[622],4,"memv");
lf[623]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_memv");
lf[624]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_memq");
lf[625]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_memq");
lf[626]=C_h_intern(&lf[626],4,"assv");
lf[627]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_assv");
lf[628]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_assq");
lf[629]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_assq");
lf[630]=C_h_intern(&lf[630],15,"number-of-slots");
lf[631]=C_decode_literal(C_heaptop,"\376B\000\000\014C_block_size");
lf[632]=C_h_intern(&lf[632],9,"block-ref");
lf[633]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[634]=C_h_intern(&lf[634],15,"\003sysbytevector\077");
lf[635]=C_decode_literal(C_heaptop,"\376B\000\000\015C_bytevectorp");
lf[636]=C_h_intern(&lf[636],14,"\003sysstructure\077");
lf[637]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_structurep");
lf[638]=C_h_intern(&lf[638],9,"list-tail");
lf[639]=C_decode_literal(C_heaptop,"\376B\000\000\015C_i_list_tail");
lf[640]=C_h_intern(&lf[640],13,"char-downcase");
lf[641]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_char_downcase");
lf[642]=C_h_intern(&lf[642],11,"char-upcase");
lf[643]=C_decode_literal(C_heaptop,"\376B\000\000\021C_u_i_char_upcase");
lf[644]=C_h_intern(&lf[644],16,"char-lower-case\077");
lf[645]=C_decode_literal(C_heaptop,"\376B\000\000\026C_u_i_char_lower_casep");
lf[646]=C_h_intern(&lf[646],16,"char-upper-case\077");
lf[647]=C_decode_literal(C_heaptop,"\376B\000\000\026C_u_i_char_upper_casep");
lf[648]=C_h_intern(&lf[648],16,"char-whitespace\077");
lf[649]=C_decode_literal(C_heaptop,"\376B\000\000\026C_u_i_char_whitespacep");
lf[650]=C_h_intern(&lf[650],16,"char-alphabetic\077");
lf[651]=C_decode_literal(C_heaptop,"\376B\000\000\026C_u_i_char_alphabeticp");
lf[652]=C_h_intern(&lf[652],13,"char-numeric\077");
lf[653]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_char_numericp");
lf[654]=C_h_intern(&lf[654],5,"fpmin");
lf[655]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_flonum_min");
lf[656]=C_h_intern(&lf[656],5,"fpmax");
lf[657]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_flonum_max");
lf[658]=C_h_intern(&lf[658],5,"fxmin");
lf[659]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_fixnum_min");
lf[660]=C_h_intern(&lf[660],5,"fxmax");
lf[661]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_fixnum_max");
lf[662]=C_h_intern(&lf[662],4,"fp<=");
lf[663]=C_decode_literal(C_heaptop,"\376B\000\000\030C_flonum_less_or_equal_p");
lf[664]=C_h_intern(&lf[664],4,"fp>=");
lf[665]=C_decode_literal(C_heaptop,"\376B\000\000\033C_flonum_greater_or_equal_p");
lf[666]=C_h_intern(&lf[666],3,"fp<");
lf[667]=C_decode_literal(C_heaptop,"\376B\000\000\016C_flonum_lessp");
lf[668]=C_h_intern(&lf[668],3,"fp>");
lf[669]=C_decode_literal(C_heaptop,"\376B\000\000\021C_flonum_greaterp");
lf[670]=C_h_intern(&lf[670],3,"fp=");
lf[671]=C_decode_literal(C_heaptop,"\376B\000\000\017C_flonum_equalp");
lf[672]=C_h_intern(&lf[672],4,"fx<=");
lf[673]=C_decode_literal(C_heaptop,"\376B\000\000\030C_fixnum_less_or_equal_p");
lf[674]=C_h_intern(&lf[674],4,"fx>=");
lf[675]=C_decode_literal(C_heaptop,"\376B\000\000\033C_fixnum_greater_or_equal_p");
lf[676]=C_h_intern(&lf[676],3,"fx<");
lf[677]=C_decode_literal(C_heaptop,"\376B\000\000\016C_fixnum_lessp");
lf[678]=C_h_intern(&lf[678],3,"fx>");
lf[679]=C_decode_literal(C_heaptop,"\376B\000\000\021C_fixnum_greaterp");
lf[680]=C_h_intern(&lf[680],3,"fx=");
lf[681]=C_decode_literal(C_heaptop,"\376B\000\000\005C_eqp");
lf[682]=C_h_intern(&lf[682],4,"fx/\077");
lf[683]=C_decode_literal(C_heaptop,"\376B\000\000\025C_i_o_fixnum_quotient");
lf[684]=C_h_intern(&lf[684],4,"fx\052\077");
lf[685]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_o_fixnum_times");
lf[686]=C_h_intern(&lf[686],4,"fx-\077");
lf[687]=C_decode_literal(C_heaptop,"\376B\000\000\027C_i_o_fixnum_difference");
lf[688]=C_h_intern(&lf[688],4,"fx+\077");
lf[689]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_o_fixnum_plus");
lf[690]=C_h_intern(&lf[690],3,"fx\052");
lf[691]=C_decode_literal(C_heaptop,"\376B\000\000\016C_fixnum_times");
lf[692]=C_h_intern(&lf[692],5,"fxnot");
lf[693]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_not");
lf[694]=C_h_intern(&lf[694],8,"\003syssize");
lf[695]=C_decode_literal(C_heaptop,"\376B\000\000\014C_block_size");
lf[696]=C_h_intern(&lf[696],13,"\003sysblock-ref");
lf[697]=C_decode_literal(C_heaptop,"\376B\000\000\015C_i_block_ref");
lf[698]=C_h_intern(&lf[698],8,"\003sysslot");
lf[699]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[700]=C_h_intern(&lf[700],7,"char<=\077");
lf[701]=C_decode_literal(C_heaptop,"\376B\000\000\030C_i_char_less_or_equal_p");
lf[702]=C_decode_literal(C_heaptop,"\376B\000\000\032C_u_i_char_less_or_equal_p");
lf[703]=C_h_intern(&lf[703],7,"char>=\077");
lf[704]=C_decode_literal(C_heaptop,"\376B\000\000\033C_i_char_greater_or_equal_p");
lf[705]=C_decode_literal(C_heaptop,"\376B\000\000\035C_u_i_char_greater_or_equal_p");
lf[706]=C_h_intern(&lf[706],6,"char<\077");
lf[707]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_char_lessp");
lf[708]=C_decode_literal(C_heaptop,"\376B\000\000\020C_u_i_char_lessp");
lf[709]=C_h_intern(&lf[709],6,"char>\077");
lf[710]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_char_greaterp");
lf[711]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_char_greaterp");
lf[712]=C_h_intern(&lf[712],6,"char=\077");
lf[713]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_char_equalp");
lf[714]=C_decode_literal(C_heaptop,"\376B\000\000\021C_u_i_char_equalp");
lf[715]=C_h_intern(&lf[715],10,"vector-ref");
lf[716]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_vector_ref");
lf[717]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[718]=C_h_intern(&lf[718],11,"string-set!");
lf[719]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_string_set");
lf[720]=C_decode_literal(C_heaptop,"\376B\000\000\014C_setsubchar");
lf[721]=C_h_intern(&lf[721],10,"string-ref");
lf[722]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_string_ref");
lf[723]=C_decode_literal(C_heaptop,"\376B\000\000\011C_subchar");
lf[724]=C_h_intern(&lf[724],11,"eof-object\077");
lf[725]=C_decode_literal(C_heaptop,"\376B\000\000\006C_eofp");
lf[726]=C_h_intern(&lf[726],12,"proper-list\077");
lf[727]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_listp");
lf[728]=C_h_intern(&lf[728],5,"list\077");
lf[729]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_listp");
lf[730]=C_h_intern(&lf[730],8,"inexact\077");
lf[731]=C_decode_literal(C_heaptop,"\376B\000\000\016C_u_i_inexactp");
lf[732]=C_decode_literal(C_heaptop,"\376B\000\000\014C_i_inexactp");
lf[733]=C_decode_literal(C_heaptop,"\376B\000\000\012C_nfixnump");
lf[734]=C_h_intern(&lf[734],6,"exact\077");
lf[735]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_exactp");
lf[736]=C_decode_literal(C_heaptop,"\376B\000\000\012C_i_exactp");
lf[737]=C_decode_literal(C_heaptop,"\376B\000\000\011C_fixnump");
lf[738]=C_h_intern(&lf[738],22,"\003sysgeneric-structure\077");
lf[739]=C_decode_literal(C_heaptop,"\376B\000\000\014C_structurep");
lf[740]=C_h_intern(&lf[740],8,"pointer\077");
lf[741]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_safe_pointerp");
lf[742]=C_h_intern(&lf[742],12,"\003syspointer\077");
lf[743]=C_decode_literal(C_heaptop,"\376B\000\000\015C_anypointerp");
lf[744]=C_h_intern(&lf[744],10,"fpinteger\077");
lf[745]=C_decode_literal(C_heaptop,"\376B\000\000\020C_u_i_fpintegerp");
lf[746]=C_h_intern(&lf[746],7,"finite\077");
lf[747]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_finitep");
lf[748]=C_h_intern(&lf[748],7,"fixnum\077");
lf[749]=C_decode_literal(C_heaptop,"\376B\000\000\011C_fixnump");
lf[750]=C_h_intern(&lf[750],7,"flonum\077");
lf[751]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_flonump");
lf[752]=C_h_intern(&lf[752],8,"integer\077");
lf[753]=C_decode_literal(C_heaptop,"\376B\000\000\014C_i_integerp");
lf[754]=C_h_intern(&lf[754],5,"real\077");
lf[755]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_numberp");
lf[756]=C_h_intern(&lf[756],9,"rational\077");
lf[757]=C_decode_literal(C_heaptop,"\376B\000\000\015C_i_rationalp");
lf[758]=C_h_intern(&lf[758],8,"complex\077");
lf[759]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_numberp");
lf[760]=C_h_intern(&lf[760],7,"number\077");
lf[761]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_numberp");
lf[762]=C_h_intern(&lf[762],8,"boolean\077");
lf[763]=C_decode_literal(C_heaptop,"\376B\000\000\012C_booleanp");
lf[764]=C_h_intern(&lf[764],5,"port\077");
lf[765]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_portp");
lf[766]=C_h_intern(&lf[766],10,"procedure\077");
lf[767]=C_decode_literal(C_heaptop,"\376B\000\000\014C_i_closurep");
lf[768]=C_h_intern(&lf[768],9,"\003syspair\077");
lf[769]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_pairp");
lf[770]=C_h_intern(&lf[770],5,"pair\077");
lf[771]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_pairp");
lf[772]=C_h_intern(&lf[772],11,"\003sysvector\077");
lf[773]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_vectorp");
lf[774]=C_h_intern(&lf[774],7,"vector\077");
lf[775]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_vectorp");
lf[776]=C_h_intern(&lf[776],7,"symbol\077");
lf[777]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_symbolp");
lf[778]=C_h_intern(&lf[778],9,"locative\077");
lf[779]=C_decode_literal(C_heaptop,"\376B\000\000\015C_i_locativep");
lf[780]=C_h_intern(&lf[780],7,"string\077");
lf[781]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_stringp");
lf[782]=C_h_intern(&lf[782],5,"char\077");
lf[783]=C_decode_literal(C_heaptop,"\376B\000\000\007C_charp");
lf[784]=C_h_intern(&lf[784],3,"not");
lf[785]=C_decode_literal(C_heaptop,"\376B\000\000\007C_i_not");
lf[786]=C_h_intern(&lf[786],6,"length");
lf[787]=C_decode_literal(C_heaptop,"\376B\000\000\012C_i_length");
lf[788]=C_h_intern(&lf[788],9,"\003sysnull\077");
lf[789]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_nullp");
lf[790]=C_h_intern(&lf[790],5,"null\077");
lf[791]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_nullp");
lf[792]=C_h_intern(&lf[792],8,"list-ref");
lf[793]=C_decode_literal(C_heaptop,"\376B\000\000\014C_i_list_ref");
lf[794]=C_decode_literal(C_heaptop,"\376B\000\000\016C_u_i_list_ref");
lf[795]=C_h_intern(&lf[795],8,"\003syseqv\077");
lf[796]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_eqvp");
lf[797]=C_h_intern(&lf[797],4,"eqv\077");
lf[798]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_eqvp");
lf[799]=C_h_intern(&lf[799],7,"\003syseq\077");
lf[800]=C_decode_literal(C_heaptop,"\376B\000\000\005C_eqp");
lf[801]=C_h_intern(&lf[801],3,"eq\077");
lf[802]=C_decode_literal(C_heaptop,"\376B\000\000\005C_eqp");
lf[803]=C_h_intern(&lf[803],3,"cdr");
lf[804]=C_decode_literal(C_heaptop,"\376B\000\000\007C_i_cdr");
lf[805]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[806]=C_h_intern(&lf[806],6,"cddddr");
lf[807]=C_decode_literal(C_heaptop,"\376B\000\000\012C_i_cddddr");
lf[808]=C_h_intern(&lf[808],5,"cdddr");
lf[809]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_cdddr");
lf[810]=C_h_intern(&lf[810],4,"cddr");
lf[811]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_cddr");
lf[812]=C_h_intern(&lf[812],4,"cdar");
lf[813]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_cdar");
lf[814]=C_h_intern(&lf[814],4,"caar");
lf[815]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_caar");
lf[816]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cddddr");
lf[817]=C_h_intern(&lf[817],6,"cdddar");
lf[818]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cdddar");
lf[819]=C_h_intern(&lf[819],6,"cddadr");
lf[820]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cddadr");
lf[821]=C_h_intern(&lf[821],6,"cddaar");
lf[822]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cddaar");
lf[823]=C_h_intern(&lf[823],6,"cdaddr");
lf[824]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cdaddr");
lf[825]=C_h_intern(&lf[825],6,"cdadar");
lf[826]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cdadar");
lf[827]=C_h_intern(&lf[827],6,"cdaadr");
lf[828]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cdaadr");
lf[829]=C_h_intern(&lf[829],6,"cdaaar");
lf[830]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cdaaar");
lf[831]=C_h_intern(&lf[831],6,"cadddr");
lf[832]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cadddr");
lf[833]=C_h_intern(&lf[833],6,"caddar");
lf[834]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_caddar");
lf[835]=C_h_intern(&lf[835],6,"cadadr");
lf[836]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cadadr");
lf[837]=C_h_intern(&lf[837],6,"cadaar");
lf[838]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cadaar");
lf[839]=C_h_intern(&lf[839],6,"caaddr");
lf[840]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_caaddr");
lf[841]=C_h_intern(&lf[841],6,"caadar");
lf[842]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_caadar");
lf[843]=C_h_intern(&lf[843],6,"caaaar");
lf[844]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_caaaar");
lf[845]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_cdddr");
lf[846]=C_h_intern(&lf[846],5,"cddar");
lf[847]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_cddar");
lf[848]=C_h_intern(&lf[848],5,"cdadr");
lf[849]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_cdadr");
lf[850]=C_h_intern(&lf[850],5,"cdaar");
lf[851]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_cdaar");
lf[852]=C_h_intern(&lf[852],5,"caddr");
lf[853]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_caddr");
lf[854]=C_h_intern(&lf[854],5,"cadar");
lf[855]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_cadar");
lf[856]=C_h_intern(&lf[856],5,"caaar");
lf[857]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_caaar");
lf[858]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_cddr");
lf[859]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_cdar");
lf[860]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_caar");
lf[861]=C_h_intern(&lf[861],22,"\003syscontinuation-graft");
lf[862]=C_decode_literal(C_heaptop,"\376B\000\000\024C_continuation_graft");
lf[863]=C_h_intern(&lf[863],20,"\003syscall-with-values");
lf[864]=C_decode_literal(C_heaptop,"\376B\000\000\022C_call_with_values");
lf[865]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_call_with_values");
lf[866]=C_h_intern(&lf[866],16,"call-with-values");
lf[867]=C_decode_literal(C_heaptop,"\376B\000\000\022C_call_with_values");
lf[868]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_call_with_values");
lf[869]=C_decode_literal(C_heaptop,"\376B\000\000\010C_values");
lf[870]=C_decode_literal(C_heaptop,"\376B\000\000\010C_values");
lf[871]=C_h_intern(&lf[871],6,"fourth");
lf[872]=C_decode_literal(C_heaptop,"\376B\000\000\012C_i_cadddr");
lf[873]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cadddr");
lf[874]=C_h_intern(&lf[874],5,"third");
lf[875]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_caddr");
lf[876]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_caddr");
lf[877]=C_h_intern(&lf[877],6,"second");
lf[878]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_cadr");
lf[879]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_cadr");
lf[880]=C_h_intern(&lf[880],5,"first");
lf[881]=C_decode_literal(C_heaptop,"\376B\000\000\007C_i_car");
lf[882]=C_decode_literal(C_heaptop,"\376B\000\000\011C_u_i_car");
lf[883]=C_decode_literal(C_heaptop,"\376B\000\000\012C_i_cadddr");
lf[884]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cadddr");
lf[885]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_caddr");
lf[886]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_caddr");
lf[887]=C_h_intern(&lf[887],4,"cadr");
lf[888]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_cadr");
lf[889]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_cadr");
lf[890]=C_h_intern(&lf[890],7,"\003syscdr");
lf[891]=C_decode_literal(C_heaptop,"\376B\000\000\007C_i_cdr");
lf[892]=C_decode_literal(C_heaptop,"\376B\000\000\011C_u_i_cdr");
lf[893]=C_h_intern(&lf[893],7,"\003syscar");
lf[894]=C_decode_literal(C_heaptop,"\376B\000\000\007C_i_car");
lf[895]=C_decode_literal(C_heaptop,"\376B\000\000\011C_u_i_car");
lf[896]=C_h_intern(&lf[896],3,"car");
lf[897]=C_decode_literal(C_heaptop,"\376B\000\000\007C_i_car");
lf[898]=C_decode_literal(C_heaptop,"\376B\000\000\011C_u_i_car");
lf[899]=C_h_intern(&lf[899],9,"\003sysapply");
lf[900]=C_h_intern(&lf[900],5,"apply");
lf[901]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012C_i_equalp\376\377\016");
lf[902]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\005C_eqp\376\377\016");
lf[903]=C_h_intern(&lf[903],6,"equal\077");
lf[904]=C_h_intern(&lf[904],4,"sub1");
lf[905]=C_decode_literal(C_heaptop,"\376B\000\000\021C_fixnum_decrease");
lf[906]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_fixnum_decrease");
lf[907]=C_decode_literal(C_heaptop,"\376B\000\000\013C_a_i_minus");
lf[908]=C_h_intern(&lf[908],4,"add1");
lf[909]=C_decode_literal(C_heaptop,"\376B\000\000\021C_fixnum_increase");
lf[910]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_fixnum_increase");
lf[911]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_plus");
lf[912]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\024C_fixnum_shift_right\376\377\016");
lf[913]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\017C_fixnum_divide\376\377\016");
lf[914]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012C_quotient\376\003\000\000\002\376\377\006\001\376\377\016");
lf[915]=C_h_intern(&lf[915],8,"quotient");
lf[916]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\024C_fixnum_shift_right\376\377\016");
lf[917]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\017C_fixnum_divide\376\377\016");
lf[918]=C_h_intern(&lf[918],19,"\010compilerfold-inner");
lf[919]=C_h_intern(&lf[919],6,"remove");
lf[920]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\021C_u_fixnum_negate\376\377\016");
lf[921]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\017C_fixnum_negate\376\377\016");
lf[922]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\025C_u_fixnum_difference\376\377\016");
lf[923]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\023C_fixnum_difference\376\377\016");
lf[924]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\023C_fixnum_shift_left\376\377\016");
lf[925]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\016C_fixnum_times\376\377\016");
lf[926]=C_decode_literal(C_heaptop,"\376B\000\000\015C_fixnum_plus");
lf[927]=C_decode_literal(C_heaptop,"\376B\000\000\017C_u_fixnum_plus");
lf[928]=C_h_intern(&lf[928],8,"\003sysput!");
lf[929]=C_h_intern(&lf[929],13,"\010compilerpure");
lf[930]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010\003sysslot\376\003\000\000\002\376\001\000\000\015\003sysblock-ref\376\003\000\000\002\376\001\000\000\010\003syssize\376\003\000\000\002\376\001\000\000\010\003sysbyte\376\003\000"
"\000\002\376\001\000\000\014\003syspointer\077\376\003\000\000\002\376\001\000\000\026\003sysgeneric-structure\077\376\003\000\000\002\376\001\000\000\020\003sysfits-in-int\077\376\003\000"
"\000\002\376\001\000\000\031\003sysfits-in-unsigned-int\077\376\003\000\000\002\376\001\000\000\033\003sysflonum-in-fixnum-range\077\376\003\000\000\002\376\001\000\000\011\003"
"sysfudge\376\003\000\000\002\376\001\000\000\016\003sysimmediate\077\376\003\000\000\002\376\001\000\000\017\003sysbytevector\077\376\003\000\000\002\376\001\000\000\011\003syspair\077\376\003\000\000"
"\002\376\001\000\000\007\003syseq\077\376\003\000\000\002\376\001\000\000\011\003syslist\077\376\003\000\000\002\376\001\000\000\013\003sysvector\077\376\003\000\000\002\376\001\000\000\010\003syseqv\077\376\003\000\000\002\376\001\000\000"
"\017\003sysget-keyword\376\003\000\000\002\376\001\000\000\010\003sysvoid\376\003\000\000\002\376\001\000\000\016\003syspermanent\077\376\377\016");
lf[931]=C_h_intern(&lf[931],15,"lset-difference");
lf[932]=C_h_intern(&lf[932],10,"lset-union");
C_register_lf2(lf,933,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1606,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k2986 in k2983 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in ... */
static void C_ccall f_2988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2988,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2991,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:679: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[609];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[610];
av2[6]=lf[611];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2983 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in ... */
static void C_ccall f_2985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2985,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2988,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:678: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[606];
av2[3]=C_fix(4);
av2[4]=lf[294];
av2[5]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* a5446 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5447(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5447,6,av);}
a=C_alloc(6);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5451,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5598,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:252: remove */
t8=*((C_word*)lf[919]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k3277 in k3274 in k3271 in k3268 in k3265 in k3262 in k3259 in k3256 in k3253 in k3250 in k3247 in k3244 in k3241 in k3238 in k3235 in k3232 in k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in ... */
static void C_ccall f_3279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3279,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3282,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:792: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[439];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[447];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3274 in k3271 in k3268 in k3265 in k3262 in k3259 in k3256 in k3253 in k3250 in k3247 in k3244 in k3241 in k3238 in k3235 in k3232 in k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in ... */
static void C_ccall f_3276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3276,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3279,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:791: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[441];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[448];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3271 in k3268 in k3265 in k3262 in k3259 in k3256 in k3253 in k3250 in k3247 in k3244 in k3241 in k3238 in k3235 in k3232 in k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in k3208 in ... */
static void C_ccall f_3273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3273,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3276,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:790: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[443];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[449];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3268 in k3265 in k3262 in k3259 in k3256 in k3253 in k3250 in k3247 in k3244 in k3241 in k3238 in k3235 in k3232 in k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in k3208 in k3205 in ... */
static void C_ccall f_3270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3270,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3273,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:788: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[450];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[451];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(4);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* a5291 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5292(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_5292,6,av);}
a=C_alloc(19);
if(C_truep(C_i_nullp(t5))){
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_i_cdr(t5);
t7=C_i_nullp(t6);
t8=(C_truep(t7)?C_eqp(*((C_word*)lf[33]+1),lf[32]):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_a_i_list1(&a,1,C_SCHEME_TRUE);
if(C_truep(*((C_word*)lf[34]+1))){
t10=t5;
t11=C_a_i_record4(&a,4,lf[35],lf[36],lf[920],t10);
t12=C_a_i_list2(&a,2,t4,t11);
t13=t1;
t14=t13;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],t9,t12);
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
t10=t5;
t11=C_a_i_record4(&a,4,lf[35],lf[36],lf[921],t10);
t12=C_a_i_list2(&a,2,t4,t11);
t13=t1;
t14=t13;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],t9,t12);
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}}
else{
t9=t5;
t10=C_u_i_car(t9);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5399,a[2]=t10,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t12=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5401,tmp=(C_word)a,a+=2,tmp);
t13=t5;
t14=C_u_i_cdr(t13);
/* c-platform.scm:293: remove */
t15=*((C_word*)lf[919]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=t11;
av2[2]=t12;
av2[3]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}}}

/* k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in k2902 in k2899 in k2896 in k2893 in k2890 in k2887 in ... */
static void C_ccall f_2952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2952,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2955,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:665: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[632];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[633];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in k2902 in k2899 in k2896 in k2893 in k2890 in ... */
static void C_ccall f_2955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2955,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2958,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:666: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[630];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[631];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2956 in k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in k2902 in k2899 in k2896 in k2893 in ... */
static void C_ccall f_2958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_2958,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2961,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:668: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[626];
av2[3]=C_fix(14);
av2[4]=lf[32];
av2[5]=C_fix(2);
av2[6]=lf[628];
av2[7]=lf[629];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in k2902 in k2899 in k2896 in k2893 in k2890 in k2887 in k2884 in k2881 in k2878 in k2875 in k2872 in k2869 in k2866 in k2863 in k2860 in k2857 in ... */
static void C_ccall f_2922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2922,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2925,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:655: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[652];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[653];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in k2902 in k2899 in k2896 in k2893 in k2890 in k2887 in k2884 in k2881 in k2878 in k2875 in k2872 in k2869 in k2866 in k2863 in k2860 in ... */
static void C_ccall f_2925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2925,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2928,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:656: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[650];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[651];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in k2902 in k2899 in k2896 in k2893 in k2890 in k2887 in k2884 in k2881 in k2878 in k2875 in k2872 in k2869 in k2866 in k2863 in ... */
static void C_ccall f_2928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2928,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2931,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:657: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[648];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[649];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5655 in k1610 in k1607 in k1604 */
static void C_ccall f_5657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5657,2,av);}
/* c-platform.scm:222: lset-difference */
t2=*((C_word*)lf[931]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[801]+1);
av2[3]=t1;
av2[4]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4655 in a4614 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in k3475 in k3472 in k3469 in k3466 in k3463 in k3460 in k3457 in k3454 in k3451 in k3448 in k3445 in ... */
static void C_ccall f_4657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,1)))){
C_save_and_reclaim((void *)f_4657,2,av);}
a=C_alloc(16);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_a_i_record4(&a,4,lf[35],lf[36],lf[291],t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];
t3=C_a_i_record4(&a,4,lf[35],lf[36],lf[292],t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3559 in k3556 in k3553 in k3550 in k3547 in k3544 in k3541 in k3538 in k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in ... */
static void C_ccall f_3561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3561,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3564,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:960: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[241];
av2[3]=C_fix(17);
av2[4]=C_fix(3);
av2[5]=lf[242];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3562 in k3559 in k3556 in k3553 in k3550 in k3547 in k3544 in k3541 in k3538 in k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in ... */
static void C_ccall f_3564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3564,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3567,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:961: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
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

/* k3565 in k3562 in k3559 in k3556 in k3553 in k3550 in k3547 in k3544 in k3541 in k3538 in k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in ... */
static void C_ccall f_3567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3567,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3570,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:962: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[236];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[237];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k5640 in for-each-loop42 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5642,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5632(t3,((C_word*)t0)[4],t2);}

/* k2453 in k2482 in k2486 in k2407 in k2404 in k2401 in k2374 in rewrite-c-w-v in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in ... */
static void C_ccall f_2455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,1)))){
C_save_and_reclaim((void *)f_2455,2,av);}
a=C_alloc(22);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[3],t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[58],((C_word*)t0)[6],t4);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* a3915 in k3897 in rewrite-call/cc in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in ... */
static void C_ccall f_3916(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3916,5,av);}
a=C_alloc(7);
if(C_truep(C_i_nequalp(t3,C_fix(2)))){
t5=(C_truep(t4)?t4:C_i_cadr(((C_word*)t0)[2]));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3976,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:1072: get */
t8=*((C_word*)lf[66]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[5];
av2[3]=t6;
av2[4]=lf[73];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* for-each-loop42 in k1631 in k1610 in k1607 in k1604 */
static void C_fcall f_5632(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_5632,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5642,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_list(&a,1,C_SCHEME_TRUE);
if(C_truep(C_i_nullp(t5))){
/* tweaks.scm:54: ##sys#put! */
t6=*((C_word*)lf[928]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[929];
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t6=C_i_car(t5);
/* tweaks.scm:54: ##sys#put! */
t7=*((C_word*)lf[928]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[929];
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a4614 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in k3475 in k3472 in k3469 in k3466 in k3463 in k3460 in k3457 in k3454 in k3451 in k3448 in k3445 in k3442 in ... */
static void C_ccall f_4615(C_word c,C_word *av){
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
C_word t18;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,2)))){
C_save_and_reclaim((void *)f_4615,6,av);}
a=C_alloc(25);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(3));
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=t8;
t10=C_i_caddr(t5);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4657,a[2]=t5,a[3]=t4,a[4]=t1,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
t12=C_slot(t10,C_fix(1));
t13=C_eqp(lf[41],t12);
if(C_truep(t13)){
t14=C_slot(t10,C_fix(2));
t15=C_i_car(t14);
/* c-platform.scm:909: immediate? */
t16=*((C_word*)lf[293]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=t11;
av2[2]=t15;
((C_proc)(void*)(*((C_word*)t16+1)))(3,av2);}}
else{
t14=t5;
t15=C_a_i_record4(&a,4,lf[35],lf[36],lf[292],t14);
t16=C_a_i_list2(&a,2,t4,t15);
t17=t1;
t18=t17;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t18;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],t9,t16);
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}}
else{
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k2404 in k2401 in k2374 in rewrite-c-w-v in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in ... */
static void C_ccall f_2406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2406,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2409,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_slot(((C_word*)t0)[7],C_fix(2));
/* c-platform.scm:515: debugging */
t5=*((C_word*)lf[62]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[63];
av2[3]=lf[64];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k2401 in k2374 in rewrite-c-w-v in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in ... */
static void C_ccall f_2403(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2403,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2406,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* c-platform.scm:514: gensym */
t4=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[65];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in ... */
static void C_ccall f_2337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2337,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2340,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:496: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[50];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2407 in k2404 in k2401 in k2374 in rewrite-c-w-v in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in ... */
static void C_ccall f_2409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_2409,2,av);}
a=C_alloc(12);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2488,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t3,a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
/* c-platform.scm:520: gensym */
t5=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[61];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in ... */
static void C_ccall f_2340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_2340,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2342,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2559,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:527: rewrite */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[866];
av2[3]=C_fix(8);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* rewrite-c-w-v in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in ... */
static void C_ccall f_2342(C_word c,C_word *av){
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
C_word t18;
C_word t19;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2342,6,av);}
a=C_alloc(6);
t6=C_i_length(t5);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=t8;
t10=C_i_cadr(t5);
t11=t10;
t12=C_slot(t9,C_fix(1));
t13=C_eqp(lf[42],t12);
if(C_truep(t13)){
t14=C_slot(t11,C_fix(1));
t15=C_eqp(lf[42],t14);
if(C_truep(t15)){
t16=C_slot(t11,C_fix(2));
t17=C_i_car(t16);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2376,a[2]=t11,a[3]=t4,a[4]=t9,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:508: get */
t19=*((C_word*)lf[66]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t19;
av2[1]=t18;
av2[2]=t2;
av2[3]=t17;
av2[4]=lf[67];
((C_proc)(void*)(*((C_word*)t19+1)))(5,av2);}}
else{
t18=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t18;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}}
else{
t16=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}}
else{
t14=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}}
else{
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k2575 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in ... */
static void C_ccall f_2577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2577,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2580,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:535: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[863];
av2[3]=C_fix(13);
av2[4]=C_fix(2);
av2[5]=lf[864];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in ... */
static void C_ccall f_2574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2574,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2577,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:534: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[863];
av2[3]=C_fix(13);
av2[4]=C_fix(2);
av2[5]=lf[865];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2569 in k2566 in k2563 in k2560 in k2557 in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in ... */
static void C_ccall f_2571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2571,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2574,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:533: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[866];
av2[3]=C_fix(13);
av2[4]=C_fix(2);
av2[5]=lf[867];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5059 in k5041 in a5003 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,1)))){
C_save_and_reclaim((void *)f_5061,2,av);}
a=C_alloc(22);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_record4(&a,4,lf[35],lf[36],lf[912],t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k3574 in k3571 in k3568 in k3565 in k3562 in k3559 in k3556 in k3553 in k3550 in k3547 in k3544 in k3541 in k3538 in k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in ... */
static void C_ccall f_3576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3576,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3579,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:965: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[230];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[231];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3571 in k3568 in k3565 in k3562 in k3559 in k3556 in k3553 in k3550 in k3547 in k3544 in k3541 in k3538 in k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in ... */
static void C_ccall f_3573(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3573,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3576,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:964: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[232];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[233];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3568 in k3565 in k3562 in k3559 in k3556 in k3553 in k3550 in k3547 in k3544 in k3541 in k3538 in k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in ... */
static void C_ccall f_3570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3570,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3573,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:963: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[234];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[235];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k2587 in k2584 in k2581 in k2578 in k2575 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in ... */
static void C_ccall f_2589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2589,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2592,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:540: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[810];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[858];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2584 in k2581 in k2578 in k2575 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in ... */
static void C_ccall f_2586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2586,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2589,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:539: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[812];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[859];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2581 in k2578 in k2575 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in ... */
static void C_ccall f_2583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2583,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2586,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:538: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[814];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[860];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3974 in a3915 in k3897 in rewrite-call/cc in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in ... */
static void C_ccall f_3976(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3976,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3972,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:1073: get */
t3=*((C_word*)lf[66]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
av2[4]=lf[72];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k2578 in k2575 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in ... */
static void C_ccall f_2580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2580,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2583,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:536: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[861];
av2[3]=C_fix(13);
av2[4]=C_fix(2);
av2[5]=lf[862];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3970 in k3974 in a3915 in k3897 in rewrite-call/cc in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in ... */
static void C_ccall f_3972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3972,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3968,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:1074: get */
t3=*((C_word*)lf[66]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
av2[4]=lf[71];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k1771 in eqv?-id in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_fcall f_1773(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1773,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1782,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[6],C_fix(1));
t4=C_eqp(lf[41],t3);
if(C_truep(t4)){
t5=C_slot(((C_word*)t0)[6],C_fix(2));
t6=C_i_car(t5);
t7=C_i_flonump(t6);
t8=t2;
f_1782(t8,C_i_not(t7));}
else{
t5=t2;
f_1782(t5,C_SCHEME_FALSE);}}}

/* k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in k3559 in k3556 in k3553 in k3550 in k3547 in k3544 in k3541 in k3538 in k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in ... */
static void C_ccall f_3579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3579,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3582,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:966: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[228];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[229];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k2593 in k2590 in k2587 in k2584 in k2581 in k2578 in k2575 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in ... */
static void C_ccall f_2595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2595,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2598,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:542: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[854];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[855];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2596 in k2593 in k2590 in k2587 in k2584 in k2581 in k2578 in k2575 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in ... */
static void C_ccall f_2598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2598,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2601,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:543: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[852];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[853];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2590 in k2587 in k2584 in k2581 in k2578 in k2575 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in ... */
static void C_ccall f_2592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2592,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2595,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:541: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[856];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[857];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5041 in a5003 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_fcall f_5043(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,2)))){
C_save_and_reclaim_args((void *)trf_5043,2,t0,t1);}
a=C_alloc(16);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5061,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:354: qnode */
t5=*((C_word*)lf[39]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];
t3=C_a_i_record4(&a,4,lf[35],lf[36],lf[913],t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3962 in k3966 in k3970 in k3974 in a3915 in k3897 in rewrite-call/cc in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in ... */
static void C_ccall f_3964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,1)))){
C_save_and_reclaim((void *)f_3964,2,av);}
a=C_alloc(14);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[4];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3966 in k3970 in k3974 in a3915 in k3897 in rewrite-call/cc in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in ... */
static void C_ccall f_3968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3968,2,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3964,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:1077: qnode */
t5=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k1783 in k1780 in k1771 in eqv?-id in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_fcall f_1785(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,1)))){
C_save_and_reclaim_args((void *)trf_1785,2,t0,t1);}
a=C_alloc(19);
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
t4=C_a_i_record4(&a,4,lf[35],lf[36],lf[40],t3);
t5=C_a_i_list2(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[4];
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],t2,t5);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1780 in k1771 in eqv?-id in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_fcall f_1782(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1782,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_1785(t3,t1);}
else{
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_eqp(lf[41],t3);
if(C_truep(t4)){
t5=C_slot(((C_word*)t0)[5],C_fix(2));
t6=C_i_car(t5);
t7=C_i_flonump(t6);
t8=t2;
f_1785(t8,C_i_not(t7));}
else{
t5=t2;
f_1785(t5,C_SCHEME_FALSE);}}}

/* k2914 in k2911 in k2908 in k2905 in k2902 in k2899 in k2896 in k2893 in k2890 in k2887 in k2884 in k2881 in k2878 in k2875 in k2872 in k2869 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in ... */
static void C_ccall f_2916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2916,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2919,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:653: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[656];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[657];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2911 in k2908 in k2905 in k2902 in k2899 in k2896 in k2893 in k2890 in k2887 in k2884 in k2881 in k2878 in k2875 in k2872 in k2869 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in ... */
static void C_ccall f_2913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2913,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2916,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:652: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[658];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[659];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3595 in k3592 in k3589 in k3586 in k3583 in k3580 in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in k3559 in k3556 in k3553 in k3550 in k3547 in k3544 in k3541 in k3538 in k3535 in k3532 in ... */
static void C_ccall f_3597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3597,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3600,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:972: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[215];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[216];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k2908 in k2905 in k2902 in k2899 in k2896 in k2893 in k2890 in k2887 in k2884 in k2881 in k2878 in k2875 in k2872 in k2869 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2845 in ... */
static void C_ccall f_2910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2910,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2913,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:651: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[660];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[661];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3589 in k3586 in k3583 in k3580 in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in k3559 in k3556 in k3553 in k3550 in k3547 in k3544 in k3541 in k3538 in k3535 in k3532 in k3529 in k3526 in ... */
static void C_ccall f_3591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3591,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3594,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:970: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[219];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[220];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3592 in k3589 in k3586 in k3583 in k3580 in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in k3559 in k3556 in k3553 in k3550 in k3547 in k3544 in k3541 in k3538 in k3535 in k3532 in k3529 in ... */
static void C_ccall f_3594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3594,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3597,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:971: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[217];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[218];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k2917 in k2914 in k2911 in k2908 in k2905 in k2902 in k2899 in k2896 in k2893 in k2890 in k2887 in k2884 in k2881 in k2878 in k2875 in k2872 in k2869 in k2866 in k2863 in k2860 in k2857 in k2854 in ... */
static void C_ccall f_2919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2919,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2922,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:654: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[654];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[655];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3586 in k3583 in k3580 in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in k3559 in k3556 in k3553 in k3550 in k3547 in k3544 in k3541 in k3538 in k3535 in k3532 in k3529 in k3526 in k3523 in ... */
static void C_ccall f_3588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3588,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3591,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:969: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[221];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[222];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3583 in k3580 in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in k3559 in k3556 in k3553 in k3550 in k3547 in k3544 in k3541 in k3538 in k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in ... */
static void C_ccall f_3585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3585,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3588,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:968: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[223];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[224];
av2[6]=lf[225];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3580 in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in k3559 in k3556 in k3553 in k3550 in k3547 in k3544 in k3541 in k3538 in k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in ... */
static void C_ccall f_3582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3582,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3585,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:967: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[226];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[227];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3487 in k3484 in k3481 in k3478 in k3475 in k3472 in k3469 in k3466 in k3463 in k3460 in k3457 in k3454 in k3451 in k3448 in k3445 in k3442 in k3439 in k3436 in k3433 in k3430 in k3427 in k3424 in ... */
static void C_ccall f_3489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3489,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3492,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:889: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[303];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[304];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3484 in k3481 in k3478 in k3475 in k3472 in k3469 in k3466 in k3463 in k3460 in k3457 in k3454 in k3451 in k3448 in k3445 in k3442 in k3439 in k3436 in k3433 in k3430 in k3427 in k3424 in k3421 in ... */
static void C_ccall f_3486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3486,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3489,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:888: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[305];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[306];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3481 in k3478 in k3475 in k3472 in k3469 in k3466 in k3463 in k3460 in k3457 in k3454 in k3451 in k3448 in k3445 in k3442 in k3439 in k3436 in k3433 in k3430 in k3427 in k3424 in k3421 in k3418 in ... */
static void C_ccall f_3483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3483,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3486,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:887: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[307];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[308];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3478 in k3475 in k3472 in k3469 in k3466 in k3463 in k3460 in k3457 in k3454 in k3451 in k3448 in k3445 in k3442 in k3439 in k3436 in k3433 in k3430 in k3427 in k3424 in k3421 in k3418 in k3415 in ... */
static void C_ccall f_3480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3480,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3483,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:886: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[309];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[310];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3475 in k3472 in k3469 in k3466 in k3463 in k3460 in k3457 in k3454 in k3451 in k3448 in k3445 in k3442 in k3439 in k3436 in k3433 in k3430 in k3427 in k3424 in k3421 in k3418 in k3415 in k3412 in ... */
static void C_ccall f_3477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3477,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3480,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:885: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[311];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[312];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* build in a4691 in k3415 in k3412 in k3409 in k3406 in k3403 in k3400 in k3397 in k3394 in k3391 in k3388 in k3385 in k3382 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3361 in k3358 in ... */
static C_word C_fcall f_4695(C_word *a,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;{}
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=C_a_i_list2(&a,2,t1,t2);
t5=C_a_i_record4(&a,4,lf[35],lf[38],lf[353],t4);
t6=C_a_i_list2(&a,2,((C_word*)t0)[2],t5);
return(C_a_i_record4(&a,4,lf[35],lf[37],t3,t6));}

/* k3472 in k3469 in k3466 in k3463 in k3460 in k3457 in k3454 in k3451 in k3448 in k3445 in k3442 in k3439 in k3436 in k3433 in k3430 in k3427 in k3424 in k3421 in k3418 in k3415 in k3412 in k3409 in ... */
static void C_ccall f_3474(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3474,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3477,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:884: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[313];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[314];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3469 in k3466 in k3463 in k3460 in k3457 in k3454 in k3451 in k3448 in k3445 in k3442 in k3439 in k3436 in k3433 in k3430 in k3427 in k3424 in k3421 in k3418 in k3415 in k3412 in k3409 in k3406 in ... */
static void C_ccall f_3471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3471,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3474,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:883: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[315];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[316];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* a5003 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5004(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_5004,6,av);}
a=C_alloc(12);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(2));
if(C_truep(t7)){
t8=C_eqp(lf[32],*((C_word*)lf[33]+1));
if(C_truep(t8)){
t9=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t10=t9;
t11=C_i_cadr(t5);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5043,a[2]=t5,a[3]=t4,a[4]=t1,a[5]=t10,tmp=(C_word)a,a+=6,tmp);
t13=C_slot(t11,C_fix(1));
t14=C_eqp(lf[41],t13);
if(C_truep(t14)){
t15=C_slot(t11,C_fix(2));
t16=C_i_car(t15);
t17=t12;
f_5043(t17,C_eqp(C_fix(2),t16));}
else{
t15=t12;
f_5043(t15,C_SCHEME_FALSE);}}
else{
t9=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5113,a[2]=t1,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t12=C_a_i_record4(&a,4,lf[35],lf[47],lf[914],C_SCHEME_END_OF_LIST);
/* c-platform.scm:358: cons* */
t13=*((C_word*)lf[43]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=t11;
av2[2]=t12;
av2[3]=t4;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}}
else{
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5000 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5002,2,av);}
/* c-platform.scm:378: rewrite */
t2=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[908];
av2[3]=C_fix(8);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a4691 in k3415 in k3412 in k3409 in k3406 in k3403 in k3400 in k3397 in k3394 in k3391 in k3388 in k3385 in k3382 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3361 in k3358 in k3355 in ... */
static void C_ccall f_4692(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_4692,6,av);}
a=C_alloc(28);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4695,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t7=C_i_length(t5);
switch(t7){
case C_fix(1):
t8=C_i_car(t5);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4745,a[2]=t1,a[3]=t6,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:861: qnode */
t11=*((C_word*)lf[39]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=t10;
av2[2]=C_fix(10);
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}
case C_fix(2):
t8=C_i_car(t5);
t9=C_i_cadr(t5);
/* c-platform.scm:862: build */
t10=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=(
  /* c-platform.scm:862: build */
  f_4695(C_a_i(&a,25),t6,t8,t9)
);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}
default:
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3019 in k3016 in k3013 in k3010 in k3007 in k3004 in k3001 in k2998 in k2995 in k2992 in k2989 in k2986 in k2983 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in ... */
static void C_ccall f_3021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3021,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3024,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:694: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[579];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[580];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3022 in k3019 in k3016 in k3013 in k3010 in k3007 in k3004 in k3001 in k2998 in k2995 in k2992 in k2989 in k2986 in k2983 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in ... */
static void C_ccall f_3024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3024,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3027,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:695: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[577];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[578];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3025 in k3022 in k3019 in k3016 in k3013 in k3010 in k3007 in k3004 in k3001 in k2998 in k2995 in k2992 in k2989 in k2986 in k2983 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in ... */
static void C_ccall f_3027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3027,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3030,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:696: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[575];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[576];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in k2659 in k2656 in ... */
static void C_ccall f_2721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2721,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2724,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:588: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[774];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[775];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in k2659 in ... */
static void C_ccall f_2724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2724,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2727,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:589: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
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

/* k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in ... */
static void C_ccall f_2727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2727,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2730,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:590: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
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

/* k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in ... */
static void C_ccall f_2730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2730,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2733,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:591: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
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

/* k2731 in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in ... */
static void C_ccall f_2733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2733,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2736,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:592: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
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

/* k2734 in k2731 in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in ... */
static void C_ccall f_2736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2736,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2739,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:593: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
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

/* k2737 in k2734 in k2731 in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in ... */
static void C_ccall f_2739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2739,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2742,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:594: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[762];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[763];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in ... */
static void C_ccall f_4027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4027,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4030,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1079: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[117];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5534 in a5528 in k5449 in a5446 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_fcall f_5536(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_5536,2,t0,t1);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5552,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:268: qnode */
t3=*((C_word*)lf[39]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[36],lf[925],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2968 in k2965 in k2962 in k2959 in k2956 in k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in ... */
static void C_ccall f_2970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2970,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2973,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:672: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[619];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[620];
av2[6]=lf[621];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in ... */
static void C_ccall f_2979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2979,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2982,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:675: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[612];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[613];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in ... */
static void C_ccall f_2976(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2976,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2979,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:674: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[614];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[615];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in ... */
static void C_ccall f_2973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2973,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2976,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:673: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[616];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[617];
av2[6]=lf[618];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3001 in k2998 in k2995 in k2992 in k2989 in k2986 in k2983 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in ... */
static void C_ccall f_3003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_3003,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3006,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:686: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[594];
av2[3]=C_fix(21);
av2[4]=C_fix(-1);
av2[5]=lf[595];
av2[6]=lf[596];
av2[7]=lf[597];
av2[8]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k2998 in k2995 in k2992 in k2989 in k2986 in k2983 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in ... */
static void C_ccall f_3000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_3000,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3003,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:685: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[598];
av2[3]=C_fix(21);
av2[4]=C_fix(0);
av2[5]=lf[599];
av2[6]=lf[600];
av2[7]=lf[601];
av2[8]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k3004 in k3001 in k2998 in k2995 in k2992 in k2989 in k2986 in k2983 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in k2953 in k2950 in k2947 in k2944 in k2941 in ... */
static void C_ccall f_3006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_3006,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3009,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:687: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[590];
av2[3]=C_fix(21);
av2[4]=C_fix(0);
av2[5]=lf[591];
av2[6]=lf[592];
av2[7]=lf[593];
av2[8]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k3007 in k3004 in k3001 in k2998 in k2995 in k2992 in k2989 in k2986 in k2983 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in k2953 in k2950 in k2947 in k2944 in ... */
static void C_ccall f_3009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_3009,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3012,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:689: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[587];
av2[3]=C_fix(22);
av2[4]=C_fix(1);
av2[5]=lf[588];
av2[6]=C_SCHEME_TRUE;
av2[7]=*((C_word*)lf[9]+1);
av2[8]=lf[589];
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in ... */
static void C_ccall f_4040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4040,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4043,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1124: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[110];
av2[3]=C_fix(3);
av2[4]=lf[111];
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k2740 in k2737 in k2734 in k2731 in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in ... */
static void C_ccall f_2742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2742,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2745,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:595: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[760];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[761];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in ... */
static void C_ccall f_4043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4043,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4046,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1125: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[109];
av2[3]=C_fix(3);
av2[4]=lf[94];
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in ... */
static void C_ccall f_4046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4046,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4049,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1126: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[108];
av2[3]=C_fix(3);
av2[4]=lf[97];
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k2743 in k2740 in k2737 in k2734 in k2731 in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in ... */
static void C_ccall f_2745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2745,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2748,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:596: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[758];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[759];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2746 in k2743 in k2740 in k2737 in k2734 in k2731 in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in ... */
static void C_ccall f_2748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2748,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2751,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:597: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[756];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[757];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2839 in k2836 in k2833 in k2830 in k2827 in k2824 in k2821 in k2818 in k2815 in k2812 in k2809 in k2806 in k2803 in k2800 in k2797 in k2794 in k2791 in k2788 in k2785 in k2782 in k2779 in k2776 in ... */
static void C_ccall f_2841(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2841,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2844,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:628: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[703];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[705];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2824 in k2821 in k2818 in k2815 in k2812 in k2809 in k2806 in k2803 in k2800 in k2797 in k2794 in k2791 in k2788 in k2785 in k2782 in k2779 in ... */
static void C_ccall f_2844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2844,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2847,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:629: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[703];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[704];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2824 in k2821 in k2818 in k2815 in k2812 in k2809 in k2806 in k2803 in k2800 in k2797 in k2794 in k2791 in k2788 in k2785 in k2782 in ... */
static void C_ccall f_2847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2847,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2850,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:630: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[700];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[702];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3028 in k3025 in k3022 in k3019 in k3016 in k3013 in k3010 in k3007 in k3004 in k3001 in k2998 in k2995 in k2992 in k2989 in k2986 in k2983 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in ... */
static void C_ccall f_3030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3030,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3033,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:698: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[573];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[574];
av2[6]=C_SCHEME_TRUE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3031 in k3028 in k3025 in k3022 in k3019 in k3016 in k3013 in k3010 in k3007 in k3004 in k3001 in k2998 in k2995 in k2992 in k2989 in k2986 in k2983 in k2980 in k2977 in k2974 in k2971 in k2968 in ... */
static void C_ccall f_3033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3033,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3036,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:699: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[571];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[572];
av2[6]=C_SCHEME_TRUE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3034 in k3031 in k3028 in k3025 in k3022 in k3019 in k3016 in k3013 in k3010 in k3007 in k3004 in k3001 in k2998 in k2995 in k2992 in k2989 in k2986 in k2983 in k2980 in k2977 in k2974 in k2971 in ... */
static void C_ccall f_3036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3036,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3039,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:700: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[569];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[570];
av2[6]=C_SCHEME_TRUE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3037 in k3034 in k3031 in k3028 in k3025 in k3022 in k3019 in k3016 in k3013 in k3010 in k3007 in k3004 in k3001 in k2998 in k2995 in k2992 in k2989 in k2986 in k2983 in k2980 in k2977 in k2974 in ... */
static void C_ccall f_3039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3039,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3042,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:701: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[567];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[568];
av2[6]=C_SCHEME_TRUE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in ... */
static void C_ccall f_4052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4052,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4055,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4286,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1129: rewrite */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[105];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2749 in k2746 in k2743 in k2740 in k2737 in k2734 in k2731 in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in ... */
static void C_ccall f_2751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2751,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2754,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:598: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[754];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[755];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2755 in k2752 in k2749 in k2746 in k2743 in k2740 in k2737 in k2734 in k2731 in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in ... */
static void C_ccall f_2757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2757,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2760,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:600: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[750];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[751];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in ... */
static void C_ccall f_4055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4055,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4058,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4236,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1144: rewrite */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[102];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in ... */
static void C_ccall f_4049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4049,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4052,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1127: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[106];
av2[3]=C_fix(3);
av2[4]=lf[107];
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k2752 in k2749 in k2746 in k2743 in k2740 in k2737 in k2734 in k2731 in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in ... */
static void C_ccall f_2754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2754,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2757,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:599: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[752];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[753];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2824 in k2821 in k2818 in k2815 in k2812 in k2809 in k2806 in k2803 in k2800 in k2797 in k2794 in k2791 in k2788 in k2785 in ... */
static void C_ccall f_2850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2850,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2853,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:631: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[700];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[701];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2824 in k2821 in k2818 in k2815 in k2812 in k2809 in k2806 in k2803 in k2800 in k2797 in k2794 in k2791 in k2788 in ... */
static void C_ccall f_2853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2853,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2856,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:632: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[698];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[699];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2854 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2824 in k2821 in k2818 in k2815 in k2812 in k2809 in k2806 in k2803 in k2800 in k2797 in k2794 in k2791 in ... */
static void C_ccall f_2856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2856,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2859,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:633: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[696];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[697];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2857 in k2854 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2824 in k2821 in k2818 in k2815 in k2812 in k2809 in k2806 in k2803 in k2800 in k2797 in k2794 in ... */
static void C_ccall f_2859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2859,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2862,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:634: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[694];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[695];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5550 in k5534 in a5528 in k5449 in a5446 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_5552,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[36],lf[924],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2989 in k2986 in k2983 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in ... */
static void C_ccall f_2991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2991,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2994,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:680: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[606];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[607];
av2[6]=lf[608];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2995 in k2992 in k2989 in k2986 in k2983 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in ... */
static void C_ccall f_2997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_2997,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3000,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:683: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[602];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[603];
av2[6]=C_SCHEME_TRUE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k2992 in k2989 in k2986 in k2983 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in ... */
static void C_ccall f_2994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_2994,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2997,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:682: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[602];
av2[3]=C_fix(14);
av2[4]=lf[32];
av2[5]=C_fix(1);
av2[6]=lf[604];
av2[7]=lf[605];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3058 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in k3028 in k3025 in k3022 in k3019 in k3016 in k3013 in k3010 in k3007 in k3004 in k3001 in k2998 in k2995 in ... */
static void C_ccall f_3060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3060,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3063,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:709: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[552];
av2[3]=C_fix(5);
av2[4]=lf[555];
av2[5]=C_fix(0);
av2[6]=lf[32];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* rvalues in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in ... */
static void C_ccall f_2306(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_2306,6,av);}
a=C_alloc(11);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(1));
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=C_a_i_cons(&a,2,t4,t5);
t10=t1;
t11=t10;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],t8,t9);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in ... */
static void C_ccall f_2305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_2305,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2306,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2337,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:495: rewrite */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[49];
av2[3]=C_fix(8);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in ... */
static void C_ccall f_2302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2302,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2305,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:488: rewrite-c..r */
f_2195(t2,lf[871],lf[872],lf[873]);}

/* k3067 in k3064 in k3061 in k3058 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in k3028 in k3025 in k3022 in k3019 in k3016 in k3013 in k3010 in k3007 in k3004 in ... */
static void C_ccall f_3069(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3069,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3072,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:712: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[547];
av2[3]=C_fix(5);
av2[4]=lf[551];
av2[5]=C_fix(0);
av2[6]=lf[32];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3061 in k3058 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in k3028 in k3025 in k3022 in k3019 in k3016 in k3013 in k3010 in k3007 in k3004 in k3001 in k2998 in ... */
static void C_ccall f_3063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3063,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3066,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:710: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[552];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[554];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2758 in k2755 in k2752 in k2749 in k2746 in k2743 in k2740 in k2737 in k2734 in k2731 in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in ... */
static void C_ccall f_2760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2760,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2763,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:601: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
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

/* k3064 in k3061 in k3058 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in k3028 in k3025 in k3022 in k3019 in k3016 in k3013 in k3010 in k3007 in k3004 in k3001 in ... */
static void C_ccall f_3066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3066,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3069,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:711: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[552];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[553];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in ... */
static void C_ccall f_4061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4061,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4064,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1157: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[95];
av2[3]=C_fix(23);
av2[4]=C_fix(1);
av2[5]=lf[96];
av2[6]=lf[97];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in ... */
static void C_ccall f_4067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4067,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4070,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1159: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[90];
av2[3]=C_fix(23);
av2[4]=C_fix(2);
av2[5]=lf[91];
av2[6]=C_fix(0);
av2[7]=C_fix(0);
av2[8]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in ... */
static void C_ccall f_4064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4064,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4067,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1158: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[92];
av2[3]=C_fix(23);
av2[4]=C_fix(1);
av2[5]=lf[93];
av2[6]=lf[94];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2767 in k2764 in k2761 in k2758 in k2755 in k2752 in k2749 in k2746 in k2743 in k2740 in k2737 in k2734 in k2731 in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in ... */
static void C_ccall f_2769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2769,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2772,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:604: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
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

/* k2761 in k2758 in k2755 in k2752 in k2749 in k2746 in k2743 in k2740 in k2737 in k2734 in k2731 in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in ... */
static void C_ccall f_2763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2763,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2766,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:602: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[746];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[747];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in ... */
static void C_ccall f_4058(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4058,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4061,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1156: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[98];
av2[3]=C_fix(23);
av2[4]=C_fix(0);
av2[5]=lf[99];
av2[6]=lf[94];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2764 in k2761 in k2758 in k2755 in k2752 in k2749 in k2746 in k2743 in k2740 in k2737 in k2734 in k2731 in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in ... */
static void C_ccall f_2766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2766,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2769,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:603: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[744];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[745];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2821 in k2818 in k2815 in k2812 in k2809 in k2806 in k2803 in k2800 in k2797 in k2794 in k2791 in k2788 in k2785 in k2782 in k2779 in k2776 in k2773 in k2770 in k2767 in k2764 in k2761 in k2758 in ... */
static void C_ccall f_2823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2823,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2826,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:622: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[712];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[714];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2818 in k2815 in k2812 in k2809 in k2806 in k2803 in k2800 in k2797 in k2794 in k2791 in k2788 in k2785 in k2782 in k2779 in k2776 in k2773 in k2770 in k2767 in k2764 in k2761 in k2758 in k2755 in ... */
static void C_ccall f_2820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2820,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2823,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:621: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[715];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[716];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2824 in k2821 in k2818 in k2815 in k2812 in k2809 in k2806 in k2803 in k2800 in k2797 in k2794 in k2791 in k2788 in k2785 in k2782 in k2779 in k2776 in k2773 in k2770 in k2767 in k2764 in k2761 in ... */
static void C_ccall f_2826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2826,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2829,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:623: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[712];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[713];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2827 in k2824 in k2821 in k2818 in k2815 in k2812 in k2809 in k2806 in k2803 in k2800 in k2797 in k2794 in k2791 in k2788 in k2785 in k2782 in k2779 in k2776 in k2773 in k2770 in k2767 in k2764 in ... */
static void C_ccall f_2829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2829,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2832,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:624: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[709];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[711];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in k3475 in k3472 in k3469 in k3466 in k3463 in k3460 in k3457 in k3454 in k3451 in k3448 in k3445 in k3442 in k3439 in k3436 in k3433 in k3430 in ... */
static void C_ccall f_3495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3495,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3498,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:892: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
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

/* k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in k3475 in k3472 in k3469 in k3466 in k3463 in k3460 in k3457 in k3454 in k3451 in k3448 in k3445 in k3442 in k3439 in k3436 in k3433 in ... */
static void C_ccall f_3498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3498,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3501,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:893: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[297];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[298];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3490 in k3487 in k3484 in k3481 in k3478 in k3475 in k3472 in k3469 in k3466 in k3463 in k3460 in k3457 in k3454 in k3451 in k3448 in k3445 in k3442 in k3439 in k3436 in k3433 in k3430 in k3427 in ... */
static void C_ccall f_3492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3492,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3495,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:891: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
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
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k2959 in k2956 in k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in k2902 in k2899 in k2896 in ... */
static void C_ccall f_2961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2961,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2964,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:669: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
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

/* k2965 in k2962 in k2959 in k2956 in k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in k2902 in ... */
static void C_ccall f_2967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2967,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2970,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:671: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
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

/* k2962 in k2959 in k2956 in k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in k2902 in k2899 in ... */
static void C_ccall f_2964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_2964,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2967,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:670: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[622];
av2[3]=C_fix(14);
av2[4]=lf[32];
av2[5]=C_fix(2);
av2[6]=lf[624];
av2[7]=lf[625];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3010 in k3007 in k3004 in k3001 in k2998 in k2995 in k2992 in k2989 in k2986 in k2983 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in k2953 in k2950 in k2947 in ... */
static void C_ccall f_3012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3012,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3015,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:691: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[585];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[586];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3013 in k3010 in k3007 in k3004 in k3001 in k2998 in k2995 in k2992 in k2989 in k2986 in k2983 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in k2953 in k2950 in ... */
static void C_ccall f_3015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3015,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3018,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:692: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[583];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[584];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k2770 in k2767 in k2764 in k2761 in k2758 in k2755 in k2752 in k2749 in k2746 in k2743 in k2740 in k2737 in k2734 in k2731 in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in ... */
static void C_ccall f_2772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2772,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2775,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:605: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
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

/* k3016 in k3013 in k3010 in k3007 in k3004 in k3001 in k2998 in k2995 in k2992 in k2989 in k2986 in k2983 in k2980 in k2977 in k2974 in k2971 in k2968 in k2965 in k2962 in k2959 in k2956 in k2953 in ... */
static void C_ccall f_3018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3018,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3021,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:693: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[581];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[582];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k2776 in k2773 in k2770 in k2767 in k2764 in k2761 in k2758 in k2755 in k2752 in k2749 in k2746 in k2743 in k2740 in k2737 in k2734 in k2731 in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in ... */
static void C_ccall f_2778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2778,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2781,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:607: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[734];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[737];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2773 in k2770 in k2767 in k2764 in k2761 in k2758 in k2755 in k2752 in k2749 in k2746 in k2743 in k2740 in k2737 in k2734 in k2731 in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in ... */
static void C_ccall f_2775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2775,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2778,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:606: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
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

/* k2830 in k2827 in k2824 in k2821 in k2818 in k2815 in k2812 in k2809 in k2806 in k2803 in k2800 in k2797 in k2794 in k2791 in k2788 in k2785 in k2782 in k2779 in k2776 in k2773 in k2770 in k2767 in ... */
static void C_ccall f_2832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2832,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2835,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:625: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[709];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[710];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2833 in k2830 in k2827 in k2824 in k2821 in k2818 in k2815 in k2812 in k2809 in k2806 in k2803 in k2800 in k2797 in k2794 in k2791 in k2788 in k2785 in k2782 in k2779 in k2776 in k2773 in k2770 in ... */
static void C_ccall f_2835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2835,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2838,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:626: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[706];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[708];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2836 in k2833 in k2830 in k2827 in k2824 in k2821 in k2818 in k2815 in k2812 in k2809 in k2806 in k2803 in k2800 in k2797 in k2794 in k2791 in k2788 in k2785 in k2782 in k2779 in k2776 in k2773 in ... */
static void C_ccall f_2838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2838,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2841,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:627: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[706];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[707];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3040 in k3037 in k3034 in k3031 in k3028 in k3025 in k3022 in k3019 in k3016 in k3013 in k3010 in k3007 in k3004 in k3001 in k2998 in k2995 in k2992 in k2989 in k2986 in k2983 in k2980 in k2977 in ... */
static void C_ccall f_3042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3042,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3045,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:702: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[565];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[566];
av2[6]=C_SCHEME_TRUE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in k3028 in k3025 in k3022 in k3019 in k3016 in k3013 in k3010 in k3007 in k3004 in k3001 in k2998 in k2995 in k2992 in k2989 in k2986 in k2983 in ... */
static void C_ccall f_3048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3048,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3051,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:704: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[561];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[562];
av2[6]=C_SCHEME_TRUE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3043 in k3040 in k3037 in k3034 in k3031 in k3028 in k3025 in k3022 in k3019 in k3016 in k3013 in k3010 in k3007 in k3004 in k3001 in k2998 in k2995 in k2992 in k2989 in k2986 in k2983 in k2980 in ... */
static void C_ccall f_3045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3045,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3048,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:703: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[563];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[564];
av2[6]=C_SCHEME_TRUE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k2905 in k2902 in k2899 in k2896 in k2893 in k2890 in k2887 in k2884 in k2881 in k2878 in k2875 in k2872 in k2869 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2845 in k2842 in ... */
static void C_ccall f_2907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2907,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2910,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:650: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[662];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[663];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2899 in k2896 in k2893 in k2890 in k2887 in k2884 in k2881 in k2878 in k2875 in k2872 in k2869 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in ... */
static void C_ccall f_2901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2901,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2904,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:648: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[666];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[667];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2902 in k2899 in k2896 in k2893 in k2890 in k2887 in k2884 in k2881 in k2878 in k2875 in k2872 in k2869 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2845 in k2842 in k2839 in ... */
static void C_ccall f_2904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2904,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2907,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:649: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[664];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[665];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3070 in k3067 in k3064 in k3061 in k3058 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in k3028 in k3025 in k3022 in k3019 in k3016 in k3013 in k3010 in k3007 in ... */
static void C_ccall f_3072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3072,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3075,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:713: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[547];
av2[3]=C_fix(5);
av2[4]=lf[550];
av2[5]=C_fix(0);
av2[6]=lf[387];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3076 in k3073 in k3070 in k3067 in k3064 in k3061 in k3058 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in k3028 in k3025 in k3022 in k3019 in k3016 in k3013 in ... */
static void C_ccall f_3078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3078,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3081,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:715: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[547];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[548];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3073 in k3070 in k3067 in k3064 in k3061 in k3058 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in k3028 in k3025 in k3022 in k3019 in k3016 in k3013 in k3010 in ... */
static void C_ccall f_3075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3075,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3078,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:714: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[547];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[549];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2235 in a2212 in a2200 in rewrite-c..r in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_2237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_2237,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in k3028 in k3025 in k3022 in k3019 in k3016 in k3013 in k3010 in k3007 in k3004 in k3001 in k2998 in k2995 in k2992 in k2989 in k2986 in ... */
static void C_ccall f_3051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3051,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3054,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:705: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[556];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[560];
av2[6]=C_SCHEME_TRUE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in k3028 in k3025 in k3022 in k3019 in k3016 in k3013 in k3010 in k3007 in k3004 in k3001 in k2998 in k2995 in k2992 in ... */
static void C_ccall f_3057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3057,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3060,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:707: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[556];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[557];
av2[6]=C_SCHEME_TRUE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in k3028 in k3025 in k3022 in k3019 in k3016 in k3013 in k3010 in k3007 in k3004 in k3001 in k2998 in k2995 in k2992 in k2989 in ... */
static void C_ccall f_3054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3054,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3057,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:706: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[558];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[559];
av2[6]=C_SCHEME_TRUE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in ... */
static void C_ccall f_4030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4030,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4034,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4373,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1108: rewrite */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[116];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4032 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in ... */
static void C_ccall f_4034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4034,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4037,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1122: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[114];
av2[3]=C_fix(3);
av2[4]=lf[113];
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4035 in k4032 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in ... */
static void C_ccall f_4037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4037,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4040,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1123: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[112];
av2[3]=C_fix(3);
av2[4]=lf[113];
av2[5]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3082 in k3079 in k3076 in k3073 in k3070 in k3067 in k3064 in k3061 in k3058 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in k3028 in k3025 in k3022 in k3019 in ... */
static void C_ccall f_3084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3084,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3087,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:717: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[542];
av2[3]=C_fix(5);
av2[4]=lf[545];
av2[5]=C_fix(0);
av2[6]=lf[387];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3085 in k3082 in k3079 in k3076 in k3073 in k3070 in k3067 in k3064 in k3061 in k3058 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in k3028 in k3025 in k3022 in ... */
static void C_ccall f_3087(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3087,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3090,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:718: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[542];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[544];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3079 in k3076 in k3073 in k3070 in k3067 in k3064 in k3061 in k3058 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in k3028 in k3025 in k3022 in k3019 in k3016 in ... */
static void C_ccall f_3081(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3081,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3084,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:716: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[542];
av2[3]=C_fix(5);
av2[4]=lf[546];
av2[5]=C_fix(0);
av2[6]=lf[32];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3130 in k3127 in k3124 in k3121 in k3118 in k3115 in k3112 in k3109 in k3106 in k3103 in k3100 in k3097 in k3094 in k3091 in k3088 in k3085 in k3082 in k3079 in k3076 in k3073 in k3070 in k3067 in ... */
static void C_ccall f_3132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3132,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3135,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:736: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[500];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[518];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3133 in k3130 in k3127 in k3124 in k3121 in k3118 in k3115 in k3112 in k3109 in k3106 in k3103 in k3100 in k3097 in k3094 in k3091 in k3088 in k3085 in k3082 in k3079 in k3076 in k3073 in k3070 in ... */
static void C_ccall f_3135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3135,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3138,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:737: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[498];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[517];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3136 in k3133 in k3130 in k3127 in k3124 in k3121 in k3118 in k3115 in k3112 in k3109 in k3106 in k3103 in k3100 in k3097 in k3094 in k3091 in k3088 in k3085 in k3082 in k3079 in k3076 in k3073 in ... */
static void C_ccall f_3138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3138,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3141,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:738: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[496];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[516];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* a5597 in a5446 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5598(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5598,3,av);}
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=C_eqp(lf[41],t4);
if(C_truep(t5)){
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=C_i_car(t7);
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_eqp(C_fix(1),t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_2706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2706,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2709,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:583: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[784];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[785];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in ... */
static void C_ccall f_2703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2703,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2706,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:582: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[786];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[787];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in ... */
static void C_ccall f_2700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2700,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2703,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:581: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[788];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[789];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3118 in k3115 in k3112 in k3109 in k3106 in k3103 in k3100 in k3097 in k3094 in k3091 in k3088 in k3085 in k3082 in k3079 in k3076 in k3073 in k3070 in k3067 in k3064 in k3061 in k3058 in k3055 in ... */
static void C_ccall f_3120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3120,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3123,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:732: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[508];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[522];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3121 in k3118 in k3115 in k3112 in k3109 in k3106 in k3103 in k3100 in k3097 in k3094 in k3091 in k3088 in k3085 in k3082 in k3079 in k3076 in k3073 in k3070 in k3067 in k3064 in k3061 in k3058 in ... */
static void C_ccall f_3123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3123,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3126,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:733: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[506];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[521];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3124 in k3121 in k3118 in k3115 in k3112 in k3109 in k3106 in k3103 in k3100 in k3097 in k3094 in k3091 in k3088 in k3085 in k3082 in k3079 in k3076 in k3073 in k3070 in k3067 in k3064 in k3061 in ... */
static void C_ccall f_3126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3126,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3129,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:734: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[504];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[520];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3127 in k3124 in k3121 in k3118 in k3115 in k3112 in k3109 in k3106 in k3103 in k3100 in k3097 in k3094 in k3091 in k3088 in k3085 in k3082 in k3079 in k3076 in k3073 in k3070 in k3067 in k3064 in ... */
static void C_ccall f_3129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3129,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3132,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:735: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[502];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[519];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in ... */
static void C_ccall f_2709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2709,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2712,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:584: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[782];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[783];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in k2659 in k2656 in k2653 in ... */
static void C_ccall f_2718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2718,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2721,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:587: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[776];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[777];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in k2659 in k2656 in k2653 in k2650 in ... */
static void C_ccall f_2715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2715,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2718,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:586: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[778];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[779];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in k2659 in k2656 in k2653 in k2650 in k2647 in ... */
static void C_ccall f_2712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2712,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2715,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:585: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[780];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[781];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2124 in k1972 in rewrite-apply in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_2126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,1)))){
C_save_and_reclaim((void *)f_2126,2,av);}
a=C_alloc(22);
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=C_a_i_record4(&a,4,lf[35],lf[47],lf[51],C_SCHEME_END_OF_LIST);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_a_i_list3(&a,3,t3,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[4];
f_2070(t6,C_a_i_record4(&a,4,lf[35],lf[37],t2,t5));}
else{
t2=((C_word*)t0)[4];
f_2070(t2,C_SCHEME_FALSE);}}

/* k2374 in rewrite-c-w-v in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in ... */
static void C_ccall f_2376(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2376,2,av);}
a=C_alloc(7);
t2=t1;
if(C_truep(t2)){
t3=C_slot(t2,C_fix(1));
t4=C_eqp(lf[57],t3);
if(C_truep(t4)){
t5=C_slot(t2,C_fix(2));
t6=C_i_caddr(t5);
if(C_truep(C_i_listp(t6))){
t7=C_i_length(t6);
t8=C_eqp(C_fix(2),t7);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2403,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:513: gensym */
t10=*((C_word*)lf[60]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t9=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}
else{
t7=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t5=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a2212 in a2200 in rewrite-c..r in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_2213(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,2)))){
C_save_and_reclaim((void *)f_2213,3,av);}
a=C_alloc(27);
t3=C_i_car(((C_word*)t0)[2]);
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2237,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(C_truep(*((C_word*)lf[34]+1))?((C_word*)t0)[4]:C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,((C_word*)t0)[4]);
t9=((C_word*)t0)[2];
t10=C_a_i_record4(&a,4,lf[35],lf[36],t8,t9);
t11=C_a_i_list2(&a,2,((C_word*)t0)[3],t10);
t12=t1;
t13=t12;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],t5,t11);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[5])){
t8=C_a_i_list1(&a,1,((C_word*)t0)[5]);
t9=((C_word*)t0)[2];
t10=C_a_i_record4(&a,4,lf[35],lf[36],t8,t9);
t11=C_a_i_list2(&a,2,((C_word*)t0)[3],t10);
t12=t1;
t13=t12;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],t5,t11);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
/* c-platform.scm:477: return */
t8=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t6;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}}

/* k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_1633(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1633,2,av);}
a=C_alloc(8);
t2=C_mutate2((C_word*)lf[31]+1 /* (set! ##compiler#foldable-bindings ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1655,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5632,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_5632(t7,t3,lf[930]);}

/* k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_1658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_1658,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1661,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5447,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:243: rewrite */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[433];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_1655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_1655,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1658,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:241: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[431];
av2[3]=C_fix(19);
av2[4]=C_fix(0);
av2[5]=lf[926];
av2[6]=lf[927];
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* a2200 in rewrite-c..r in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_2201(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2201,6,av);}
a=C_alloc(6);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(1));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2213,a[2]=t5,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:468: call-with-current-continuation */
t9=*((C_word*)lf[55]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t1;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k2779 in k2776 in k2773 in k2770 in k2767 in k2764 in k2761 in k2758 in k2755 in k2752 in k2749 in k2746 in k2743 in k2740 in k2737 in k2734 in k2731 in k2728 in k2725 in k2722 in k2719 in k2716 in ... */
static void C_ccall f_2781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2781,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2784,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:608: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[734];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[736];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2785 in k2782 in k2779 in k2776 in k2773 in k2770 in k2767 in k2764 in k2761 in k2758 in k2755 in k2752 in k2749 in k2746 in k2743 in k2740 in k2737 in k2734 in k2731 in k2728 in k2725 in k2722 in ... */
static void C_ccall f_2787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2787,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2790,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:610: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[730];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[733];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2803 in k2800 in k2797 in k2794 in k2791 in k2788 in k2785 in k2782 in k2779 in k2776 in k2773 in k2770 in k2767 in k2764 in k2761 in k2758 in k2755 in k2752 in k2749 in k2746 in k2743 in k2740 in ... */
static void C_ccall f_2805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2805,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2808,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:616: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[721];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[723];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2806 in k2803 in k2800 in k2797 in k2794 in k2791 in k2788 in k2785 in k2782 in k2779 in k2776 in k2773 in k2770 in k2767 in k2764 in k2761 in k2758 in k2755 in k2752 in k2749 in k2746 in k2743 in ... */
static void C_ccall f_2808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2808,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2811,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:617: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[721];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[722];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2782 in k2779 in k2776 in k2773 in k2770 in k2767 in k2764 in k2761 in k2758 in k2755 in k2752 in k2749 in k2746 in k2743 in k2740 in k2737 in k2734 in k2731 in k2728 in k2725 in k2722 in k2719 in ... */
static void C_ccall f_2784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2784,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2787,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:609: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[734];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[735];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2800 in k2797 in k2794 in k2791 in k2788 in k2785 in k2782 in k2779 in k2776 in k2773 in k2770 in k2767 in k2764 in k2761 in k2758 in k2755 in k2752 in k2749 in k2746 in k2743 in k2740 in k2737 in ... */
static void C_ccall f_2802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2802,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2805,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:615: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
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

/* k2629 in k2626 in k2623 in k2620 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2599 in k2596 in k2593 in k2590 in k2587 in k2584 in k2581 in k2578 in k2575 in k2572 in k2569 in k2566 in ... */
static void C_ccall f_2631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2631,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2634,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:554: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[831];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[832];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* a5528 in k5449 in a5446 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5529(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5529,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5536,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=t3;
t6=C_slot(t5,C_fix(1));
t7=C_eqp(lf[41],t6);
if(C_truep(t7)){
t8=t3;
t9=C_slot(t8,C_fix(2));
t10=C_i_car(t9);
t11=t4;
f_5536(t11,C_eqp(C_fix(2),t10));}
else{
t8=t4;
f_5536(t8,C_SCHEME_FALSE);}}

/* k2632 in k2629 in k2626 in k2623 in k2620 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2599 in k2596 in k2593 in k2590 in k2587 in k2584 in k2581 in k2578 in k2575 in k2572 in k2569 in ... */
static void C_ccall f_2634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2634,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2637,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:555: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[829];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[830];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5525 in k5449 in a5446 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_5527,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2635 in k2632 in k2629 in k2626 in k2623 in k2620 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2599 in k2596 in k2593 in k2590 in k2587 in k2584 in k2581 in k2578 in k2575 in k2572 in ... */
static void C_ccall f_2637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2637,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2640,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:556: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[827];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[828];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2788 in k2785 in k2782 in k2779 in k2776 in k2773 in k2770 in k2767 in k2764 in k2761 in k2758 in k2755 in k2752 in k2749 in k2746 in k2743 in k2740 in k2737 in k2734 in k2731 in k2728 in k2725 in ... */
static void C_ccall f_2790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2790,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2793,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:611: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[730];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[732];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2797 in k2794 in k2791 in k2788 in k2785 in k2782 in k2779 in k2776 in k2773 in k2770 in k2767 in k2764 in k2761 in k2758 in k2755 in k2752 in k2749 in k2746 in k2743 in k2740 in k2737 in k2734 in ... */
static void C_ccall f_2799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2799,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2802,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:614: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
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

/* k2794 in k2791 in k2788 in k2785 in k2782 in k2779 in k2776 in k2773 in k2770 in k2767 in k2764 in k2761 in k2758 in k2755 in k2752 in k2749 in k2746 in k2743 in k2740 in k2737 in k2734 in k2731 in ... */
static void C_ccall f_2796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2796,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2799,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:613: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
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

/* k2815 in k2812 in k2809 in k2806 in k2803 in k2800 in k2797 in k2794 in k2791 in k2788 in k2785 in k2782 in k2779 in k2776 in k2773 in k2770 in k2767 in k2764 in k2761 in k2758 in k2755 in k2752 in ... */
static void C_ccall f_2817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2817,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2820,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:620: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[715];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[717];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3148 in k3145 in k3142 in k3139 in k3136 in k3133 in k3130 in k3127 in k3124 in k3121 in k3118 in k3115 in k3112 in k3109 in k3106 in k3103 in k3100 in k3097 in k3094 in k3091 in k3088 in k3085 in ... */
static void C_ccall f_3150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3150,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3153,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:742: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[488];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[512];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2791 in k2788 in k2785 in k2782 in k2779 in k2776 in k2773 in k2770 in k2767 in k2764 in k2761 in k2758 in k2755 in k2752 in k2749 in k2746 in k2743 in k2740 in k2737 in k2734 in k2731 in k2728 in ... */
static void C_ccall f_2793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2793,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2796,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:612: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[730];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[731];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2809 in k2806 in k2803 in k2800 in k2797 in k2794 in k2791 in k2788 in k2785 in k2782 in k2779 in k2776 in k2773 in k2770 in k2767 in k2764 in k2761 in k2758 in k2755 in k2752 in k2749 in k2746 in ... */
static void C_ccall f_2811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2811,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2814,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:618: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[718];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[720];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2812 in k2809 in k2806 in k2803 in k2800 in k2797 in k2794 in k2791 in k2788 in k2785 in k2782 in k2779 in k2776 in k2773 in k2770 in k2767 in k2764 in k2761 in k2758 in k2755 in k2752 in k2749 in ... */
static void C_ccall f_2814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2814,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2817,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:619: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[718];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[719];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3157 in k3154 in k3151 in k3148 in k3145 in k3142 in k3139 in k3136 in k3133 in k3130 in k3127 in k3124 in k3121 in k3118 in k3115 in k3112 in k3109 in k3106 in k3103 in k3100 in k3097 in k3094 in ... */
static void C_ccall f_3159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3159,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3162,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:745: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[506];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[507];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3154 in k3151 in k3148 in k3145 in k3142 in k3139 in k3136 in k3133 in k3130 in k3127 in k3124 in k3121 in k3118 in k3115 in k3112 in k3109 in k3106 in k3103 in k3100 in k3097 in k3094 in k3091 in ... */
static void C_ccall f_3156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3156,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3159,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:744: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[508];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[509];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3151 in k3148 in k3145 in k3142 in k3139 in k3136 in k3133 in k3130 in k3127 in k3124 in k3121 in k3118 in k3115 in k3112 in k3109 in k3106 in k3103 in k3100 in k3097 in k3094 in k3091 in k3088 in ... */
static void C_ccall f_3153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3153,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3156,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:743: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[510];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[511];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3139 in k3136 in k3133 in k3130 in k3127 in k3124 in k3121 in k3118 in k3115 in k3112 in k3109 in k3106 in k3103 in k3100 in k3097 in k3094 in k3091 in k3088 in k3085 in k3082 in k3079 in k3076 in ... */
static void C_ccall f_3141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3141,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3144,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:739: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[494];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[515];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3145 in k3142 in k3139 in k3136 in k3133 in k3130 in k3127 in k3124 in k3121 in k3118 in k3115 in k3112 in k3109 in k3106 in k3103 in k3100 in k3097 in k3094 in k3091 in k3088 in k3085 in k3082 in ... */
static void C_ccall f_3147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3147,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3150,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:741: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[490];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[513];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3142 in k3139 in k3136 in k3133 in k3130 in k3127 in k3124 in k3121 in k3118 in k3115 in k3112 in k3109 in k3106 in k3103 in k3100 in k3097 in k3094 in k3091 in k3088 in k3085 in k3082 in k3079 in ... */
static void C_ccall f_3144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3144,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3147,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:740: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[492];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[514];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3169 in k3166 in k3163 in k3160 in k3157 in k3154 in k3151 in k3148 in k3145 in k3142 in k3139 in k3136 in k3133 in k3130 in k3127 in k3124 in k3121 in k3118 in k3115 in k3112 in k3109 in k3106 in ... */
static void C_ccall f_3171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3171,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3174,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:749: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[498];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[499];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3175 in k3172 in k3169 in k3166 in k3163 in k3160 in k3157 in k3154 in k3151 in k3148 in k3145 in k3142 in k3139 in k3136 in k3133 in k3130 in k3127 in k3124 in k3121 in k3118 in k3115 in k3112 in ... */
static void C_ccall f_3177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3177,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3180,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:751: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[494];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[495];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3172 in k3169 in k3166 in k3163 in k3160 in k3157 in k3154 in k3151 in k3148 in k3145 in k3142 in k3139 in k3136 in k3133 in k3130 in k3127 in k3124 in k3121 in k3118 in k3115 in k3112 in k3109 in ... */
static void C_ccall f_3174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3174,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3177,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:750: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[496];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[497];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* a4235 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in ... */
static void C_ccall f_4236(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,1)))){
C_save_and_reclaim((void *)f_4236,6,av);}
a=C_alloc(22);
t6=C_i_length(t5);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=C_eqp(*((C_word*)lf[33]+1),lf[32]);
t10=(C_truep(t9)?C_a_i_list1(&a,1,lf[100]):C_a_i_list1(&a,1,lf[101]));
t11=t5;
t12=C_a_i_record4(&a,4,lf[35],lf[36],t10,t11);
t13=C_a_i_list2(&a,2,t4,t12);
t14=t1;
t15=t14;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],t8,t13);
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}
else{
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3160 in k3157 in k3154 in k3151 in k3148 in k3145 in k3142 in k3139 in k3136 in k3133 in k3130 in k3127 in k3124 in k3121 in k3118 in k3115 in k3112 in k3109 in k3106 in k3103 in k3100 in k3097 in ... */
static void C_ccall f_3162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3162,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3165,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:746: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[504];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[505];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3166 in k3163 in k3160 in k3157 in k3154 in k3151 in k3148 in k3145 in k3142 in k3139 in k3136 in k3133 in k3130 in k3127 in k3124 in k3121 in k3118 in k3115 in k3112 in k3109 in k3106 in k3103 in ... */
static void C_ccall f_3168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3168,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3171,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:748: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[500];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[501];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3163 in k3160 in k3157 in k3154 in k3151 in k3148 in k3145 in k3142 in k3139 in k3136 in k3133 in k3130 in k3127 in k3124 in k3121 in k3118 in k3115 in k3112 in k3109 in k3106 in k3103 in k3100 in ... */
static void C_ccall f_3165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3165,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3168,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:747: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[502];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[503];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2668 in k2665 in k2662 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k2632 in k2629 in k2626 in k2623 in k2620 in k2617 in k2614 in k2611 in k2608 in k2605 in ... */
static void C_ccall f_2670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2670,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2673,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:568: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[806];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[807];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k2632 in k2629 in k2626 in k2623 in k2620 in k2617 in k2614 in ... */
static void C_ccall f_2679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2679,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2682,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:573: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[801];
av2[3]=C_fix(1);
av2[4]=C_fix(2);
av2[5]=lf[802];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k2671 in k2668 in k2665 in k2662 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k2632 in k2629 in k2626 in k2623 in k2620 in k2617 in k2614 in k2611 in k2608 in ... */
static void C_ccall f_2673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_2673,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2676,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:570: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[803];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[805];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k2674 in k2671 in k2668 in k2665 in k2662 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k2632 in k2629 in k2626 in k2623 in k2620 in k2617 in k2614 in k2611 in ... */
static void C_ccall f_2676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2676,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2679,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:571: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[803];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[804];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2486 in k2407 in k2404 in k2401 in k2374 in rewrite-c-w-v in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in ... */
static void C_ccall f_2488(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,2)))){
C_save_and_reclaim((void *)f_2488,2,av);}
a=C_alloc(28);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=C_a_i_list4(&a,4,t1,C_SCHEME_FALSE,t2,C_fix(0));
t4=t3;
t5=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2484,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-platform.scm:523: varnode */
t8=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k2482 in k2486 in k2407 in k2404 in k2401 in k2374 in rewrite-c-w-v in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in ... */
static void C_ccall f_2484(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,2)))){
C_save_and_reclaim((void *)f_2484,2,av);}
a=C_alloc(32);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[4],t2);
t4=C_a_i_list1(&a,1,t3);
t5=C_a_i_record4(&a,4,lf[35],lf[57],((C_word*)t0)[5],t4);
t6=t5;
t7=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2455,a[2]=((C_word*)t0)[6],a[3]=t8,a[4]=t6,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:526: varnode */
t10=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k3109 in k3106 in k3103 in k3100 in k3097 in k3094 in k3091 in k3088 in k3085 in k3082 in k3079 in k3076 in k3073 in k3070 in k3067 in k3064 in k3061 in k3058 in k3055 in k3052 in k3049 in k3046 in ... */
static void C_ccall f_3111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3111,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3114,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:728: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[526];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[527];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3115 in k3112 in k3109 in k3106 in k3103 in k3100 in k3097 in k3094 in k3091 in k3088 in k3085 in k3082 in k3079 in k3076 in k3073 in k3070 in k3067 in k3064 in k3061 in k3058 in k3055 in k3052 in ... */
static void C_ccall f_3117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3117,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3120,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:731: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[510];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[523];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3112 in k3109 in k3106 in k3103 in k3100 in k3097 in k3094 in k3091 in k3088 in k3085 in k3082 in k3079 in k3076 in k3073 in k3070 in k3067 in k3064 in k3061 in k3058 in k3055 in k3052 in k3049 in ... */
static void C_ccall f_3114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3114,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3117,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:729: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[524];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[525];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 in k3166 in k3163 in k3160 in k3157 in k3154 in k3151 in k3148 in k3145 in k3142 in k3139 in k3136 in k3133 in k3130 in ... */
static void C_ccall f_3195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3195,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3198,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:758: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[439];
av2[3]=C_fix(9);
av2[4]=lf[482];
av2[5]=lf[483];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 in k3166 in k3163 in k3160 in k3157 in k3154 in k3151 in k3148 in k3145 in k3142 in k3139 in k3136 in k3133 in k3130 in k3127 in ... */
static void C_ccall f_3192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3192,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3195,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:757: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[441];
av2[3]=C_fix(9);
av2[4]=lf[484];
av2[5]=lf[485];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 in k3166 in k3163 in k3160 in k3157 in k3154 in k3151 in k3148 in k3145 in k3142 in k3139 in k3136 in k3133 in ... */
static void C_ccall f_3198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3198,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3201,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:759: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[437];
av2[3]=C_fix(9);
av2[4]=lf[480];
av2[5]=lf[481];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k2641 in k2638 in k2635 in k2632 in k2629 in k2626 in k2623 in k2620 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2599 in k2596 in k2593 in k2590 in k2587 in k2584 in k2581 in k2578 in ... */
static void C_ccall f_2643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2643,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2646,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:558: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[823];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[824];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2638 in k2635 in k2632 in k2629 in k2626 in k2623 in k2620 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2599 in k2596 in k2593 in k2590 in k2587 in k2584 in k2581 in k2578 in k2575 in ... */
static void C_ccall f_2640(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2640,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2643,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:557: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[825];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[826];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2644 in k2641 in k2638 in k2635 in k2632 in k2629 in k2626 in k2623 in k2620 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2599 in k2596 in k2593 in k2590 in k2587 in k2584 in k2581 in ... */
static void C_ccall f_2646(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2646,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2649,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:559: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[821];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[822];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2647 in k2644 in k2641 in k2638 in k2635 in k2632 in k2629 in k2626 in k2623 in k2620 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2599 in k2596 in k2593 in k2590 in k2587 in k2584 in ... */
static void C_ccall f_2649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2649,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2652,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:560: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[819];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[820];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3667 in ... */
static void C_ccall f_3732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_3732,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3734,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3869,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:1052: rewrite */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[123];
av2[3]=C_fix(8);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* rewrite-make-vector in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in ... */
static void C_ccall f_3734(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3734,6,av);}
a=C_alloc(6);
t6=C_i_length(t5);
if(C_truep(C_i_pairp(t5))){
t7=t5;
t8=C_u_i_car(t7);
t9=C_slot(t8,C_fix(1));
t10=C_eqp(lf[41],t9);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3754,a[2]=t8,a[3]=t5,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:1034: gensym */
t12=*((C_word*)lf[60]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t11=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}
else{
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k3100 in k3097 in k3094 in k3091 in k3088 in k3085 in k3082 in k3079 in k3076 in k3073 in k3070 in k3067 in k3064 in k3061 in k3058 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in ... */
static void C_ccall f_3102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3102,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3105,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:724: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[532];
av2[3]=C_fix(6);
av2[4]=lf[533];
av2[5]=lf[534];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3103 in k3100 in k3097 in k3094 in k3091 in k3088 in k3085 in k3082 in k3079 in k3076 in k3073 in k3070 in k3067 in k3064 in k3061 in k3058 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in ... */
static void C_ccall f_3105(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3105,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3108,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:726: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[530];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[531];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3106 in k3103 in k3100 in k3097 in k3094 in k3091 in k3088 in k3085 in k3082 in k3079 in k3076 in k3073 in k3070 in k3067 in k3064 in k3061 in k3058 in k3055 in k3052 in k3049 in k3046 in k3043 in ... */
static void C_ccall f_3108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3108,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3111,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:727: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[528];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[529];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3181 in k3178 in k3175 in k3172 in k3169 in k3166 in k3163 in k3160 in k3157 in k3154 in k3151 in k3148 in k3145 in k3142 in k3139 in k3136 in k3133 in k3130 in k3127 in k3124 in k3121 in k3118 in ... */
static void C_ccall f_3183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3183,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3186,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:753: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[490];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[491];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 in k3166 in k3163 in k3160 in k3157 in k3154 in k3151 in k3148 in k3145 in k3142 in k3139 in k3136 in k3133 in k3130 in k3127 in k3124 in ... */
static void C_ccall f_3189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3189,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3192,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:756: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[443];
av2[3]=C_fix(9);
av2[4]=lf[486];
av2[5]=lf[487];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k2018 in k2065 in k1972 in rewrite-apply in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_2020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2020,2,av);}
/* c-platform.scm:442: append */
t2=*((C_word*)lf[45]+1);{
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

/* k3184 in k3181 in k3178 in k3175 in k3172 in k3169 in k3166 in k3163 in k3160 in k3157 in k3154 in k3151 in k3148 in k3145 in k3142 in k3139 in k3136 in k3133 in k3130 in k3127 in k3124 in k3121 in ... */
static void C_ccall f_3186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3186,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3189,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:754: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[488];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[489];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* map-loop432 in k2065 in k1972 in rewrite-apply in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_fcall f_2022(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2022,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2047,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* c-platform.scm:442: g438 */
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

/* k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k2632 in k2629 in k2626 in k2623 in k2620 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2599 in k2596 in k2593 in k2590 in k2587 in ... */
static void C_ccall f_2652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2652,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2655,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:561: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[817];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[818];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3178 in k3175 in k3172 in k3169 in k3166 in k3163 in k3160 in k3157 in k3154 in k3151 in k3148 in k3145 in k3142 in k3139 in k3136 in k3133 in k3130 in k3127 in k3124 in k3121 in k3118 in k3115 in ... */
static void C_ccall f_3180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3180,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3183,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:752: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[492];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[493];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k2632 in k2629 in k2626 in k2623 in k2620 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2599 in k2596 in k2593 in k2590 in ... */
static void C_ccall f_2655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2655,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2658,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:562: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[806];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[816];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k2632 in k2629 in k2626 in k2623 in k2620 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2599 in k2596 in k2593 in ... */
static void C_ccall f_2658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2658,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2661,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:564: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[814];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[815];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3667 in k3664 in k3661 in k3658 in k3655 in ... */
static void C_ccall f_3720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3720,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3723,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1021: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[130];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[131];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3667 in k3664 in k3661 in k3658 in ... */
static void C_ccall f_3723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3723,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3726,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1022: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[128];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[129];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3667 in k3664 in k3661 in ... */
static void C_ccall f_3726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3726,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3729,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1023: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[126];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[127];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3667 in k3664 in ... */
static void C_ccall f_3729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3729,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3732,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1024: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[124];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[125];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k2620 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2599 in k2596 in k2593 in k2590 in k2587 in k2584 in k2581 in k2578 in k2575 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in ... */
static void C_ccall f_2622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2622,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2625,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:551: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[837];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[838];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2623 in k2620 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2599 in k2596 in k2593 in k2590 in k2587 in k2584 in k2581 in k2578 in k2575 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void C_ccall f_2625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2625,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2628,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:552: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[835];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[836];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2626 in k2623 in k2620 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2599 in k2596 in k2593 in k2590 in k2587 in k2584 in k2581 in k2578 in k2575 in k2572 in k2569 in k2566 in k2563 in ... */
static void C_ccall f_2628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2628,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2631,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:553: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[833];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[834];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2878 in k2875 in k2872 in k2869 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2824 in k2821 in k2818 in k2815 in ... */
static void C_ccall f_2880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2880,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2883,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:641: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[680];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[681];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3752 in rewrite-make-vector in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in ... */
static void C_ccall f_3754(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3754,2,av);}
a=C_alloc(7);
t2=t1;
t3=C_slot(((C_word*)t0)[2],C_fix(2));
t4=C_i_car(t3);
t5=t4;
if(C_truep(C_fixnump(t5))){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3769,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:1037: <= */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t6;
av2[2]=C_fix(0);
av2[3]=t5;
av2[4]=C_fix(32);
C_less_or_equal_p(5,av2);}}
else{
t6=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3619 in k3616 in k3613 in k3610 in k3607 in k3604 in k3601 in k3598 in k3595 in k3592 in k3589 in k3586 in k3583 in k3580 in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in k3559 in k3556 in ... */
static void C_ccall f_3621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3621,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3624,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:980: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[199];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[200];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k2887 in k2884 in k2881 in k2878 in k2875 in k2872 in k2869 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2824 in ... */
static void C_ccall f_2889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2889,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2892,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:644: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[674];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[675];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2881 in k2878 in k2875 in k2872 in k2869 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2824 in k2821 in k2818 in ... */
static void C_ccall f_2883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2883,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2886,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:642: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[678];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[679];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3622 in k3619 in k3616 in k3613 in k3610 in k3607 in k3604 in k3601 in k3598 in k3595 in k3592 in k3589 in k3586 in k3583 in k3580 in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in k3559 in ... */
static void C_ccall f_3624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3624,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3627,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:982: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[197];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[198];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2884 in k2881 in k2878 in k2875 in k2872 in k2869 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2824 in k2821 in ... */
static void C_ccall f_2886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2886,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2889,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:643: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[676];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[677];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3625 in k3622 in k3619 in k3616 in k3613 in k3610 in k3607 in k3604 in k3601 in k3598 in k3595 in k3592 in k3589 in k3586 in k3583 in k3580 in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in ... */
static void C_ccall f_3627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3627,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3630,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:984: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[195];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[196];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k1610 in k1607 in k1604 */
static void C_ccall f_1612(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1612,2,av);}
a=C_alloc(6);
t2=C_set_block_item(lf[0] /* ##compiler#default-optimization-passes */,0,C_fix(3));
t3=C_mutate2((C_word*)lf[1]+1 /* (set! ##compiler#default-declarations ...) */,lf[2]);
t4=C_mutate2((C_word*)lf[3]+1 /* (set! ##compiler#default-debugging-declarations ...) */,lf[4]);
t5=C_mutate2((C_word*)lf[5]+1 /* (set! ##compiler#default-profiling-declarations ...) */,lf[6]);
t6=C_mutate2((C_word*)lf[7]+1 /* (set! ##compiler#units-used-by-default ...) */,lf[8]);
t7=C_set_block_item(lf[9] /* ##compiler#words-per-flonum */,0,C_fix(4));
t8=C_mutate2((C_word*)lf[10]+1 /* (set! ##compiler#unlikely-variables ...) */,lf[11]);
t9=C_mutate2((C_word*)lf[12]+1 /* (set! ##compiler#eq-inline-operator ...) */,lf[13]);
t10=C_mutate2((C_word*)lf[14]+1 /* (set! ##compiler#membership-test-operators ...) */,lf[15]);
t11=C_set_block_item(lf[16] /* ##compiler#membership-unfold-limit */,0,C_fix(20));
t12=C_mutate2((C_word*)lf[17]+1 /* (set! ##compiler#target-include-file ...) */,lf[18]);
t13=C_mutate2((C_word*)lf[19]+1 /* (set! ##compiler#valid-compiler-options ...) */,lf[20]);
t14=C_mutate2((C_word*)lf[21]+1 /* (set! ##compiler#valid-compiler-options-with-argument ...) */,lf[22]);
t15=C_mutate2((C_word*)lf[23]+1 /* (set! ##compiler#default-standard-bindings ...) */,lf[24]);
t16=C_mutate2((C_word*)lf[25]+1 /* (set! ##compiler#default-extended-bindings ...) */,lf[26]);
t17=C_mutate2((C_word*)lf[27]+1 /* (set! ##compiler#internal-bindings ...) */,lf[28]);
t18=C_mutate2((C_word*)lf[29]+1 /* (set! ##compiler#non-foldable-bindings ...) */,lf[30]);
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1633,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5657,a[2]=t19,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:224: lset-union */
t21=*((C_word*)lf[932]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t21;
av2[1]=t20;
av2[2]=*((C_word*)lf[801]+1);
av2[3]=*((C_word*)lf[23]+1);
av2[4]=*((C_word*)lf[25]+1);
((C_proc)(void*)(*((C_word*)t21+1)))(5,av2);}}

/* k2890 in k2887 in k2884 in k2881 in k2878 in k2875 in k2872 in k2869 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in ... */
static void C_ccall f_2892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2892,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2895,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:645: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[672];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[673];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2896 in k2893 in k2890 in k2887 in k2884 in k2881 in k2878 in k2875 in k2872 in k2869 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in ... */
static void C_ccall f_2898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2898,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2901,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:647: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[668];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[669];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2893 in k2890 in k2887 in k2884 in k2881 in k2878 in k2875 in k2872 in k2869 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in ... */
static void C_ccall f_2895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2895,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2898,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:646: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[670];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[671];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2860 in k2857 in k2854 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2824 in k2821 in k2818 in k2815 in k2812 in k2809 in k2806 in k2803 in k2800 in k2797 in ... */
static void C_ccall f_2862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2862,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2865,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:635: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[692];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[693];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2824 in k2821 in k2818 in k2815 in k2812 in k2809 in k2806 in k2803 in ... */
static void C_ccall f_2868(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2868,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2871,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:637: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[688];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[689];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2824 in k2821 in k2818 in k2815 in k2812 in k2809 in k2806 in k2803 in k2800 in ... */
static void C_ccall f_2865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2865,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2868,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:636: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[690];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[691];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2869 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2824 in k2821 in k2818 in k2815 in k2812 in k2809 in k2806 in ... */
static void C_ccall f_2871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2871,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2874,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:638: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[686];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[687];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2875 in k2872 in k2869 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2824 in k2821 in k2818 in k2815 in k2812 in ... */
static void C_ccall f_2877(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2877,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2880,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:640: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[682];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[683];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3767 in k3752 in rewrite-make-vector in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in ... */
static void C_ccall f_3769(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,3)))){
C_save_and_reclaim((void *)f_3769,2,av);}
a=C_alloc(32);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_i_cadr(((C_word*)t0)[2]):C_a_i_record4(&a,4,lf[35],lf[68],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST));
t6=t5;
t7=C_a_i_list1(&a,1,((C_word*)t0)[3]);
t8=t7;
t9=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t10=t9;
t11=C_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(1));
t12=C_a_i_list2(&a,2,lf[69],t11);
t13=t12;
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3822,a[2]=t13,a[3]=((C_word*)t0)[5],a[4]=t10,a[5]=t6,a[6]=((C_word*)t0)[6],a[7]=t8,tmp=(C_word)a,a+=8,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3824,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1051: list-tabulate */
t16=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t16;
av2[1]=t14;
av2[2]=((C_word*)t0)[4];
av2[3]=t15;
((C_proc)(void*)(*((C_word*)t16+1)))(4,av2);}}
else{
t2=((C_word*)t0)[6];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2872 in k2869 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2824 in k2821 in k2818 in k2815 in k2812 in k2809 in ... */
static void C_ccall f_2874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2874,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2877,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:639: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[684];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[685];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in k3873 in k3870 in ... */
static void C_ccall f_4082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4082,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4085,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1165: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[80];
av2[3]=C_fix(7);
av2[4]=C_fix(2);
av2[5]=lf[81];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3661 in k3658 in k3655 in k3652 in k3649 in k3646 in k3643 in k3640 in k3637 in k3634 in k3631 in k3628 in k3625 in k3622 in k3619 in k3616 in k3613 in k3610 in k3607 in k3604 in k3601 in k3598 in ... */
static void C_ccall f_3663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3663,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3666,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:999: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[169];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[170];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3664 in k3661 in k3658 in k3655 in k3652 in k3649 in k3646 in k3643 in k3640 in k3637 in k3634 in k3631 in k3628 in k3625 in k3622 in k3619 in k3616 in k3613 in k3610 in k3607 in k3604 in k3601 in ... */
static void C_ccall f_3666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3666,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3669,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1000: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[167];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[168];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3658 in k3655 in k3652 in k3649 in k3646 in k3643 in k3640 in k3637 in k3634 in k3631 in k3628 in k3625 in k3622 in k3619 in k3616 in k3613 in k3610 in k3607 in k3604 in k3601 in k3598 in k3595 in ... */
static void C_ccall f_3660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3660,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3663,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:998: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[171];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[172];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in ... */
static void C_ccall f_4079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4079,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4082,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1164: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[82];
av2[3]=C_fix(7);
av2[4]=C_fix(2);
av2[5]=lf[83];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in ... */
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
/* c-platform.scm:1162: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[84];
av2[3]=C_fix(23);
av2[4]=C_fix(2);
av2[5]=lf[85];
av2[6]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3667 in k3664 in k3661 in k3658 in k3655 in k3652 in k3649 in k3646 in k3643 in k3640 in k3637 in k3634 in k3631 in k3628 in k3625 in k3622 in k3619 in k3616 in k3613 in k3610 in k3607 in k3604 in ... */
static void C_ccall f_3669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3669,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3672,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1001: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[165];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[166];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* a5128 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5129(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5129,6,av);}
a=C_alloc(7);
t6=C_i_length(t5);
if(C_truep(C_fixnum_greater_or_equal_p(t6,C_fix(2)))){
t7=C_i_car(t5);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5249,a[2]=t8,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5251,tmp=(C_word)a,a+=2,tmp);
t11=t5;
t12=C_u_i_cdr(t11);
/* c-platform.scm:320: remove */
t13=*((C_word*)lf[919]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=t9;
av2[2]=t10;
av2[3]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(4,av2);}}
else{
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k2045 in map-loop432 in k2065 in k1972 in rewrite-apply in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_2047(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2047,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2022(t6,((C_word*)t0)[5],t5);}

/* a4092 in k4086 in k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in ... */
static void C_ccall f_4093(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4093,6,av);}
a=C_alloc(5);
t6=C_i_length(t5);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4103,a[2]=t5,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:1187: gensym */
t9=*((C_word*)lf[60]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k4089 in k4086 in k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in ... */
static void C_ccall f_4091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4091,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3649 in k3646 in k3643 in k3640 in k3637 in k3634 in k3631 in k3628 in k3625 in k3622 in k3619 in k3616 in k3613 in k3610 in k3607 in k3604 in k3601 in k3598 in k3595 in k3592 in k3589 in k3586 in ... */
static void C_ccall f_3651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3651,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3654,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:995: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[177];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[178];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3655 in k3652 in k3649 in k3646 in k3643 in k3640 in k3637 in k3634 in k3631 in k3628 in k3625 in k3622 in k3619 in k3616 in k3613 in k3610 in k3607 in k3604 in k3601 in k3598 in k3595 in k3592 in ... */
static void C_ccall f_3657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3657,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3660,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:997: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[173];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[174];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3652 in k3649 in k3646 in k3643 in k3640 in k3637 in k3634 in k3631 in k3628 in k3625 in k3622 in k3619 in k3616 in k3613 in k3610 in k3607 in k3604 in k3601 in k3598 in k3595 in k3592 in k3589 in ... */
static void C_ccall f_3654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3654,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3657,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:996: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[175];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[176];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in k3873 in ... */
static void C_ccall f_4085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4085,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4088,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4168,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1167: rewrite */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[79];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4086 in k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in ... */
static void C_ccall f_4088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4088,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4091,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4093,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1183: rewrite */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[76];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3640 in k3637 in k3634 in k3631 in k3628 in k3625 in k3622 in k3619 in k3616 in k3613 in k3610 in k3607 in k3604 in k3601 in k3598 in k3595 in k3592 in k3589 in k3586 in k3583 in k3580 in k3577 in ... */
static void C_ccall f_3642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3642,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3645,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:990: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[185];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[186];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3643 in k3640 in k3637 in k3634 in k3631 in k3628 in k3625 in k3622 in k3619 in k3616 in k3613 in k3610 in k3607 in k3604 in k3601 in k3598 in k3595 in k3592 in k3589 in k3586 in k3583 in k3580 in ... */
static void C_ccall f_3645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_3645,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3648,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:992: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[182];
av2[3]=C_fix(22);
av2[4]=C_fix(2);
av2[5]=lf[183];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
av2[8]=lf[184];
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k3646 in k3643 in k3640 in k3637 in k3634 in k3631 in k3628 in k3625 in k3622 in k3619 in k3616 in k3613 in k3610 in k3607 in k3604 in k3601 in k3598 in k3595 in k3592 in k3589 in k3586 in k3583 in ... */
static void C_ccall f_3648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_3648,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3651,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:993: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[179];
av2[3]=C_fix(22);
av2[4]=C_fix(2);
av2[5]=lf[180];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
av2[8]=lf[181];
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* f_1674 in op1 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_1674(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_1674,6,av);}
a=C_alloc(22);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(1));
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=t8;
t10=C_eqp(lf[32],*((C_word*)lf[33]+1));
if(C_truep(t10)){
if(C_truep(*((C_word*)lf[34]+1))){
t11=((C_word*)t0)[2];
t12=C_a_i_list1(&a,1,t11);
t13=t5;
t14=C_a_i_record4(&a,4,lf[35],lf[36],t12,t13);
t15=C_a_i_list2(&a,2,t4,t14);
t16=t1;
t17=t16;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t17;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],t9,t15);
((C_proc)(void*)(*((C_word*)t17+1)))(2,av2);}}
else{
t11=((C_word*)t0)[3];
t12=C_a_i_list1(&a,1,t11);
t13=t5;
t14=C_a_i_record4(&a,4,lf[35],lf[36],t12,t13);
t15=C_a_i_list2(&a,2,t4,t14);
t16=t1;
t17=t16;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t17;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],t9,t15);
((C_proc)(void*)(*((C_word*)t17+1)))(2,av2);}}}
else{
t11=C_a_i_list2(&a,2,((C_word*)t0)[4],C_fix(4));
t12=t11;
t13=C_i_car(t5);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1744,a[2]=t14,a[3]=t12,a[4]=t4,a[5]=t1,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:377: qnode */
t16=*((C_word*)lf[39]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=t15;
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t16+1)))(3,av2);}}}
else{
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* op1 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_fcall f_1672(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,6)))){
C_save_and_reclaim_args((void *)trf_1672,4,t1,t2,t3,t4);}
a=C_alloc(5);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1674,a[2]=t3,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_1670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_1670,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1672,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1752,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5002,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:378: op1 */
f_1672(t4,lf[909],lf[910],lf[911]);}

/* k3628 in k3625 in k3622 in k3619 in k3616 in k3613 in k3610 in k3607 in k3604 in k3601 in k3598 in k3595 in k3592 in k3589 in k3586 in k3583 in k3580 in k3577 in k3574 in k3571 in k3568 in k3565 in ... */
static void C_ccall f_3630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3630,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3633,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:985: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[193];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[194];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in ... */
static void C_ccall f_2299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2299,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2302,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:487: rewrite-c..r */
f_2195(t2,lf[874],lf[875],lf[876]);}

/* k3631 in k3628 in k3625 in k3622 in k3619 in k3616 in k3613 in k3610 in k3607 in k3604 in k3601 in k3598 in k3595 in k3592 in k3589 in k3586 in k3583 in k3580 in k3577 in k3574 in k3571 in k3568 in ... */
static void C_ccall f_3633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3633,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3636,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:986: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[191];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[192];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in ... */
static void C_ccall f_2296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2296,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2299,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:486: rewrite-c..r */
f_2195(t2,lf[877],lf[878],lf[879]);}

/* k3634 in k3631 in k3628 in k3625 in k3622 in k3619 in k3616 in k3613 in k3610 in k3607 in k3604 in k3601 in k3598 in k3595 in k3592 in k3589 in k3586 in k3583 in k3580 in k3577 in k3574 in k3571 in ... */
static void C_ccall f_3636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3636,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3639,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:987: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[189];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[190];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in ... */
static void C_ccall f_2293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2293,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2296,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:485: rewrite-c..r */
f_2195(t2,lf[880],lf[881],lf[882]);}

/* k3637 in k3634 in k3631 in k3628 in k3625 in k3622 in k3619 in k3616 in k3613 in k3610 in k3607 in k3604 in k3601 in k3598 in k3595 in k3592 in k3589 in k3586 in k3583 in k3580 in k3577 in k3574 in ... */
static void C_ccall f_3639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3639,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3642,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:989: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[187];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[188];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k2288 in k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 in ... */
static void C_ccall f_2290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2290,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2293,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:484: rewrite-c..r */
f_2195(t2,lf[831],lf[883],lf[884]);}

/* k3238 in k3235 in k3232 in k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in k3208 in k3205 in k3202 in k3199 in k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in ... */
static void C_ccall f_3240(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3240,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3243,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:776: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[457];
av2[3]=C_fix(12);
av2[4]=lf[460];
av2[5]=C_SCHEME_TRUE;
av2[6]=C_fix(2);
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3241 in k3238 in k3235 in k3232 in k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in k3208 in k3205 in k3202 in k3199 in k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in ... */
static void C_ccall f_3243(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3243,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3246,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:777: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[456];
av2[3]=C_fix(12);
av2[4]=lf[459];
av2[5]=C_SCHEME_TRUE;
av2[6]=C_fix(2);
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3244 in k3241 in k3238 in k3235 in k3232 in k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in k3208 in k3205 in k3202 in k3199 in k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in ... */
static void C_ccall f_3246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3246,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3249,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:778: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[458];
av2[3]=C_fix(12);
av2[4]=C_SCHEME_FALSE;
av2[5]=C_SCHEME_TRUE;
av2[6]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3247 in k3244 in k3241 in k3238 in k3235 in k3232 in k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in k3208 in k3205 in k3202 in k3199 in k3196 in k3193 in k3190 in k3187 in k3184 in ... */
static void C_ccall f_3249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3249,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3252,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:780: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[457];
av2[3]=C_fix(18);
av2[4]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2001 in k1972 in rewrite-apply in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_2003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2003,2,av);}
/* c-platform.scm:440: cons* */
t2=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in k3208 in k3205 in k3202 in k3199 in k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 in k3166 in ... */
static void C_ccall f_3231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3231,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3234,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:771: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[463];
av2[3]=C_fix(11);
av2[4]=C_fix(1);
av2[5]=lf[464];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3232 in k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in k3208 in k3205 in k3202 in k3199 in k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 in ... */
static void C_ccall f_3234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3234,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3237,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:773: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[461];
av2[3]=C_fix(11);
av2[4]=C_fix(3);
av2[5]=lf[294];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3235 in k3232 in k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in k3208 in k3205 in k3202 in k3199 in k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in ... */
static void C_ccall f_3237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3237,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3240,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:774: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[461];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[462];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_2278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2278,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2281,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:480: rewrite-c..r */
f_2195(t2,lf[893],lf[894],lf[895]);}

/* k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_2190(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2190,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2193,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:458: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[899];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_1667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_1667,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1670,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5004,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:338: rewrite */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[915];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* rewrite-c..r in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_fcall f_2195(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,6)))){
C_save_and_reclaim_args((void *)trf_2195,4,t1,t2,t3,t4);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2201,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:462: rewrite */
t6=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(8);
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_2193(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_2193,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2195,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2278,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:479: rewrite-c..r */
f_2195(t3,lf[896],lf[897],lf[898]);}

/* k2605 in k2602 in k2599 in k2596 in k2593 in k2590 in k2587 in k2584 in k2581 in k2578 in k2575 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2338 in k2335 in k2303 in k2300 in k2297 in ... */
static void C_ccall f_2607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2607,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2610,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:546: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[846];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[847];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2602 in k2599 in k2596 in k2593 in k2590 in k2587 in k2584 in k2581 in k2578 in k2575 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in ... */
static void C_ccall f_2604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2604,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2607,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:545: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[848];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[849];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2599 in k2596 in k2593 in k2590 in k2587 in k2584 in k2581 in k2578 in k2575 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2338 in k2335 in k2303 in k2300 in k2297 in k2294 in k2291 in ... */
static void C_ccall f_2601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2601,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2604,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:544: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[850];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[851];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_1664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_1664,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1667,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5129,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:311: rewrite */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[428];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_1661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_1661,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1664,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5292,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:273: rewrite */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[425];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2285 in k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_2287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2287,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2290,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:483: rewrite-c..r */
f_2195(t2,lf[852],lf[885],lf[886]);}

/* k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_2281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2281,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2284,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:481: rewrite-c..r */
f_2195(t2,lf[890],lf[891],lf[892]);}

/* k2282 in k2279 in k2276 in k2191 in k2188 in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_2284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2284,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:482: rewrite-c..r */
f_2195(t2,lf[887],lf[888],lf[889]);}

/* k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2599 in k2596 in k2593 in k2590 in k2587 in k2584 in k2581 in k2578 in k2575 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2338 in ... */
static void C_ccall f_2619(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2619,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2622,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:550: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[839];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[840];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2614 in k2611 in k2608 in k2605 in k2602 in k2599 in k2596 in k2593 in k2590 in k2587 in k2584 in k2581 in k2578 in k2575 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2338 in k2335 in ... */
static void C_ccall f_2616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2616,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2619,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:549: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[841];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[842];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2611 in k2608 in k2605 in k2602 in k2599 in k2596 in k2593 in k2590 in k2587 in k2584 in k2581 in k2578 in k2575 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2338 in k2335 in k2303 in ... */
static void C_ccall f_2613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2613,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2616,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:548: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[843];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[844];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2608 in k2605 in k2602 in k2599 in k2596 in k2593 in k2590 in k2587 in k2584 in k2581 in k2578 in k2575 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2338 in k2335 in k2303 in k2300 in ... */
static void C_ccall f_2610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2610,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2613,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:547: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[808];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[845];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2065 in k1972 in rewrite-apply in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_2067(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_2067,2,av);}
a=C_alloc(17);
t2=C_i_cdr(t1);
t3=t2;
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=*((C_word*)lf[39]+1);
t9=C_slot(((C_word*)t0)[2],C_fix(2));
t10=C_i_car(t9);
t11=C_i_check_list_2(t10,lf[44]);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2020,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2022,a[2]=t6,a[3]=t14,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_2022(t16,t12,t10);}

/* k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in ... */
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
/* c-platform.scm:1161: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[86];
av2[3]=C_fix(23);
av2[4]=C_fix(2);
av2[5]=lf[87];
av2[6]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in ... */
static void C_ccall f_4070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4070,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4073,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1160: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[88];
av2[3]=C_fix(23);
av2[4]=C_fix(2);
av2[5]=lf[89];
av2[6]=C_fix(0);
av2[7]=C_fix(0);
av2[8]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k3340 in k3337 in k3334 in k3331 in k3328 in k3325 in k3322 in k3319 in k3316 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in k3292 in k3289 in k3286 in k3283 in k3280 in k3277 in ... */
static void C_ccall f_3342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3342,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3345,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:817: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[395];
av2[3]=C_fix(14);
av2[4]=lf[32];
av2[5]=C_fix(1);
av2[6]=lf[404];
av2[7]=lf[405];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3343 in k3340 in k3337 in k3334 in k3331 in k3328 in k3325 in k3322 in k3319 in k3316 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in k3292 in k3289 in k3286 in k3283 in k3280 in ... */
static void C_ccall f_3345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3345,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3348,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:818: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[401];
av2[3]=C_fix(14);
av2[4]=lf[32];
av2[5]=C_fix(2);
av2[6]=lf[402];
av2[7]=lf[403];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3346 in k3343 in k3340 in k3337 in k3334 in k3331 in k3328 in k3325 in k3322 in k3319 in k3316 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in k3292 in k3289 in k3286 in k3283 in ... */
static void C_ccall f_3348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3348,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3351,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:820: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[398];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[399];
av2[6]=lf[400];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k1607 in k1604 */
static void C_ccall f_1609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1609,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1612,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k1604 */
static void C_ccall f_1606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1606,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1609,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k2068 in k1972 in rewrite-apply in k1960 in k1957 in k1954 in k1753 in k1750 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_fcall f_2070(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_2070,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2089,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_record4(&a,4,lf[35],lf[47],lf[48],C_SCHEME_END_OF_LIST);
/* c-platform.scm:455: cons* */
t6=*((C_word*)lf[43]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k3394 in k3391 in k3388 in k3385 in k3382 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3361 in k3358 in k3355 in k3352 in k3349 in k3346 in k3343 in k3340 in k3337 in k3334 in k3331 in ... */
static void C_ccall f_3396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3396,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3399,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:839: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[366];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[367];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3391 in k3388 in k3385 in k3382 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3361 in k3358 in k3355 in k3352 in k3349 in k3346 in k3343 in k3340 in k3337 in k3334 in k3331 in k3328 in ... */
static void C_ccall f_3393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3393,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3396,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:838: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[368];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[369];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3388 in k3385 in k3382 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3361 in k3358 in k3355 in k3352 in k3349 in k3346 in k3343 in k3340 in k3337 in k3334 in k3331 in k3328 in k3325 in ... */
static void C_ccall f_3390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3390,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3393,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:837: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[370];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[371];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3667 in k3664 in k3661 in k3658 in k3655 in k3652 in ... */
static void C_ccall f_3717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3717,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3720,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1020: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[132];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[133];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3328 in k3325 in k3322 in k3319 in k3316 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in k3292 in k3289 in k3286 in k3283 in k3280 in k3277 in k3274 in k3271 in k3268 in k3265 in ... */
static void C_ccall f_3330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3330,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3333,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:812: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[412];
av2[3]=C_fix(13);
av2[4]=C_fix(1);
av2[5]=lf[413];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3667 in k3664 in k3661 in k3658 in k3655 in k3652 in k3649 in ... */
static void C_ccall f_3714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3714,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3717,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1019: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[134];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[135];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3331 in k3328 in k3325 in k3322 in k3319 in k3316 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in k3292 in k3289 in k3286 in k3283 in k3280 in k3277 in k3274 in k3271 in k3268 in ... */
static void C_ccall f_3333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3333,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3336,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:813: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[410];
av2[3]=C_fix(13);
av2[4]=C_fix(1);
av2[5]=lf[411];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3667 in k3664 in k3661 in k3658 in k3655 in k3652 in k3649 in k3646 in ... */
static void C_ccall f_3711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3711,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3714,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1018: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[136];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[137];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3334 in k3331 in k3328 in k3325 in k3322 in k3319 in k3316 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in k3292 in k3289 in k3286 in k3283 in k3280 in k3277 in k3274 in k3271 in ... */
static void C_ccall f_3336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3336,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3339,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:814: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[408];
av2[3]=C_fix(13);
av2[4]=C_fix(1);
av2[5]=lf[409];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3337 in k3334 in k3331 in k3328 in k3325 in k3322 in k3319 in k3316 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in k3292 in k3289 in k3286 in k3283 in k3280 in k3277 in k3274 in ... */
static void C_ccall f_3339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3339,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3342,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:816: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[398];
av2[3]=C_fix(14);
av2[4]=lf[32];
av2[5]=C_fix(1);
av2[6]=lf[406];
av2[7]=lf[407];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4159 in k4101 in a4092 in k4086 in k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in ... */
static void C_ccall f_4161(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,1)))){
C_save_and_reclaim((void *)f_4161,2,av);}
a=C_alloc(33);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_record4(&a,4,lf[35],lf[38],lf[75],t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[3],t3);
t5=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[4],t4);
t6=C_a_i_list2(&a,2,((C_word*)t0)[5],t5);
t7=((C_word*)t0)[6];
t8=t7;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[58],((C_word*)t0)[7],t6);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* a4167 in k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in ... */
static void C_ccall f_4168(C_word c,C_word *av){
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
C_word t18;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,c,1)))){
C_save_and_reclaim((void *)f_4168,6,av);}
a=C_alloc(36);
t6=C_i_length(t5);
t7=C_eqp(C_fix(3),t6);
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=C_i_car(t5);
t10=C_i_cadr(t5);
t11=C_a_i_list2(&a,2,t9,t10);
t12=C_a_i_record4(&a,4,lf[35],lf[38],lf[77],t11);
t13=C_i_caddr(t5);
t14=C_a_i_list2(&a,2,t12,t13);
t15=C_a_i_record4(&a,4,lf[35],lf[38],lf[78],t14);
t16=C_a_i_list2(&a,2,t4,t15);
t17=t1;
t18=t17;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t18;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],t8,t16);
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}
else{
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3397 in k3394 in k3391 in k3388 in k3385 in k3382 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3361 in k3358 in k3355 in k3352 in k3349 in k3346 in k3343 in k3340 in k3337 in k3334 in ... */
static void C_ccall f_3399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3399,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3402,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:840: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[364];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[365];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3667 in k3664 in k3661 in k3658 in k3655 in k3652 in k3649 in k3646 in k3643 in ... */
static void C_ccall f_3708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3708,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3711,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1017: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[138];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[139];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3667 in k3664 in k3661 in k3658 in k3655 in k3652 in k3649 in k3646 in k3643 in k3640 in ... */
static void C_ccall f_3705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3705,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3708,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1015: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[140];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[141];
av2[6]=lf[142];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3361 in k3358 in k3355 in k3352 in k3349 in k3346 in k3343 in k3340 in k3337 in k3334 in k3331 in k3328 in k3325 in k3322 in k3319 in k3316 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in ... */
static void C_ccall f_3363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3363,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3366,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:827: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[388];
av2[3]=C_fix(15);
av2[4]=lf[387];
av2[5]=lf[32];
av2[6]=lf[357];
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3358 in k3355 in k3352 in k3349 in k3346 in k3343 in k3340 in k3337 in k3334 in k3331 in k3328 in k3325 in k3322 in k3319 in k3316 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in ... */
static void C_ccall f_3360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3360,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3363,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:826: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[389];
av2[3]=C_fix(15);
av2[4]=lf[387];
av2[5]=lf[32];
av2[6]=lf[390];
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3667 in k3664 in k3661 in k3658 in k3655 in k3652 in k3649 in k3646 in k3643 in k3640 in k3637 in ... */
static void C_ccall f_3702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3702,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3705,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1014: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[143];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[144];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3364 in k3361 in k3358 in k3355 in k3352 in k3349 in k3346 in k3343 in k3340 in k3337 in k3334 in k3331 in k3328 in k3325 in k3322 in k3319 in k3316 in k3313 in k3310 in k3307 in k3304 in k3301 in ... */
static void C_ccall f_3366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3366,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3369,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:828: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[386];
av2[3]=C_fix(15);
av2[4]=lf[387];
av2[5]=lf[32];
av2[6]=lf[360];
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3367 in k3364 in k3361 in k3358 in k3355 in k3352 in k3349 in k3346 in k3343 in k3340 in k3337 in k3334 in k3331 in k3328 in k3325 in k3322 in k3319 in k3316 in k3313 in k3310 in k3307 in k3304 in ... */
static void C_ccall f_3369(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3369,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3372,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:830: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[384];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[385];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3091 in k3088 in k3085 in k3082 in k3079 in k3076 in k3073 in k3070 in k3067 in k3064 in k3061 in k3058 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in k3028 in ... */
static void C_ccall f_3093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3093,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3096,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:721: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[530];
av2[3]=C_fix(6);
av2[4]=lf[540];
av2[5]=lf[541];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3097 in k3094 in k3091 in k3088 in k3085 in k3082 in k3079 in k3076 in k3073 in k3070 in k3067 in k3064 in k3061 in k3058 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in ... */
static void C_ccall f_3099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3099,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3102,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:723: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[535];
av2[3]=C_fix(6);
av2[4]=lf[536];
av2[5]=lf[537];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3094 in k3091 in k3088 in k3085 in k3082 in k3079 in k3076 in k3073 in k3070 in k3067 in k3064 in k3061 in k3058 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in ... */
static void C_ccall f_3096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3096,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3099,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:722: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[526];
av2[3]=C_fix(6);
av2[4]=lf[538];
av2[5]=lf[539];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3088 in k3085 in k3082 in k3079 in k3076 in k3073 in k3070 in k3067 in k3064 in k3061 in k3058 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in k3028 in k3025 in ... */
static void C_ccall f_3090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3090,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3093,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:719: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[542];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[543];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* a5172 in k5247 in a5128 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5173(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5173,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5180,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=t3;
t6=C_slot(t5,C_fix(1));
t7=C_eqp(lf[41],t6);
if(C_truep(t7)){
t8=t3;
t9=C_slot(t8,C_fix(2));
t10=C_i_car(t9);
t11=t4;
f_5180(t11,C_eqp(C_fix(2),t10));}
else{
t8=t4;
f_5180(t8,C_SCHEME_FALSE);}}

/* k5169 in k5247 in a5128 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_5171,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3385 in k3382 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3361 in k3358 in k3355 in k3352 in k3349 in k3346 in k3343 in k3340 in k3337 in k3334 in k3331 in k3328 in k3325 in k3322 in ... */
static void C_ccall f_3387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3387,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3390,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:836: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[372];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[373];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3361 in k3358 in k3355 in k3352 in k3349 in k3346 in k3343 in k3340 in k3337 in k3334 in k3331 in k3328 in k3325 in k3322 in k3319 in k3316 in ... */
static void C_ccall f_3381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3381,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3384,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:834: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[376];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[377];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3382 in k3379 in k3376 in k3373 in k3370 in k3367 in k3364 in k3361 in k3358 in k3355 in k3352 in k3349 in k3346 in k3343 in k3340 in k3337 in k3334 in k3331 in k3328 in k3325 in k3322 in k3319 in ... */
static void C_ccall f_3384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3384,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3387,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:835: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[374];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[375];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3616 in k3613 in k3610 in k3607 in k3604 in k3601 in k3598 in k3595 in k3592 in k3589 in k3586 in k3583 in k3580 in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in k3559 in k3556 in k3553 in ... */
static void C_ccall f_3618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3618,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3621,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:979: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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

/* k3613 in k3610 in k3607 in k3604 in k3601 in k3598 in k3595 in k3592 in k3589 in k3586 in k3583 in k3580 in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in k3559 in k3556 in k3553 in k3550 in ... */
static void C_ccall f_3615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3615,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3618,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:978: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[203];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[204];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3610 in k3607 in k3604 in k3601 in k3598 in k3595 in k3592 in k3589 in k3586 in k3583 in k3580 in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in k3559 in k3556 in k3553 in k3550 in k3547 in ... */
static void C_ccall f_3612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3612,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3615,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:977: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[205];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[206];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k2632 in k2629 in k2626 in k2623 in k2620 in k2617 in ... */
static void C_ccall f_2682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2682,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2685,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:574: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[799];
av2[3]=C_fix(1);
av2[4]=C_fix(2);
av2[5]=lf[800];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k2632 in k2629 in k2626 in k2623 in ... */
static void C_ccall f_2688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2688,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2691,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:576: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[795];
av2[3]=C_fix(1);
av2[4]=C_fix(2);
av2[5]=lf[796];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k2632 in k2629 in k2626 in k2623 in k2620 in ... */
static void C_ccall f_2685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2685,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2688,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:575: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[797];
av2[3]=C_fix(1);
av2[4]=C_fix(2);
av2[5]=lf[798];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4564 in k4536 in a4457 in k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in ... */
static void C_ccall f_4566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4566,2,av);}
/* c-platform.scm:944: qnode */
t2=*((C_word*)lf[39]+1);{
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

/* k3373 in k3370 in k3367 in k3364 in k3361 in k3358 in k3355 in k3352 in k3349 in k3346 in k3343 in k3340 in k3337 in k3334 in k3331 in k3328 in k3325 in k3322 in k3319 in k3316 in k3313 in k3310 in ... */
static void C_ccall f_3375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3375,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3378,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:832: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[380];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[381];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3376 in k3373 in k3370 in k3367 in k3364 in k3361 in k3358 in k3355 in k3352 in k3349 in k3346 in k3343 in k3340 in k3337 in k3334 in k3331 in k3328 in k3325 in k3322 in k3319 in k3316 in k3313 in ... */
static void C_ccall f_3378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3378,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3381,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:833: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[378];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[379];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3370 in k3367 in k3364 in k3361 in k3358 in k3355 in k3352 in k3349 in k3346 in k3343 in k3340 in k3337 in k3334 in k3331 in k3328 in k3325 in k3322 in k3319 in k3316 in k3313 in k3310 in k3307 in ... */
static void C_ccall f_3372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3372,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3375,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:831: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[382];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[383];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k5111 in a5003 in k1665 in k1662 in k1659 in k1656 in k1653 in k1631 in k1610 in k1607 in k1604 */
static void C_ccall f_5113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_5113,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4560 in k4536 in a4457 in k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in ... */
static void C_ccall f_4562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_4562,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
f_4488(t3,C_a_i_record4(&a,4,lf[35],lf[36],lf[259],t2));}

/* k3220 in k3217 in k3214 in k3211 in k3208 in k3205 in k3202 in k3199 in k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 in k3166 in k3163 in k3160 in k3157 in ... */
static void C_ccall f_3222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3222,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3225,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:768: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[469];
av2[3]=C_fix(11);
av2[4]=C_fix(3);
av2[5]=lf[470];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in k3292 in k3289 in k3286 in k3283 in k3280 in k3277 in k3274 in k3271 in k3268 in k3265 in k3262 in k3259 in k3256 in k3253 in k3250 in k3247 in ... */
static void C_ccall f_3312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3312,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3315,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:805: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[425];
av2[3]=C_fix(13);
av2[4]=lf[426];
av2[5]=lf[427];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3607 in k3604 in k3601 in k3598 in k3595 in k3592 in k3589 in k3586 in k3583 in k3580 in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in k3559 in k3556 in k3553 in k3550 in k3547 in k3544 in ... */
static void C_ccall f_3609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3609,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3612,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:976: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[207];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[208];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in k3208 in k3205 in k3202 in k3199 in k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 in k3166 in k3163 in ... */
static void C_ccall f_3228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3228,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3231,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:770: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[465];
av2[3]=C_fix(11);
av2[4]=C_fix(1);
av2[5]=lf[466];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3316 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in k3292 in k3289 in k3286 in k3283 in k3280 in k3277 in k3274 in k3271 in k3268 in k3265 in k3262 in k3259 in k3256 in k3253 in ... */
static void C_ccall f_3318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3318,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3321,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:808: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[420];
av2[3]=C_fix(13);
av2[4]=C_fix(1);
av2[5]=lf[421];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3223 in k3220 in k3217 in k3214 in k3211 in k3208 in k3205 in k3202 in k3199 in k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 in k3166 in k3163 in k3160 in ... */
static void C_ccall f_3225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3225,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3228,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:769: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[467];
av2[3]=C_fix(11);
av2[4]=C_fix(2);
av2[5]=lf[468];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in k3292 in k3289 in k3286 in k3283 in k3280 in k3277 in k3274 in k3271 in k3268 in k3265 in k3262 in k3259 in k3256 in k3253 in k3250 in ... */
static void C_ccall f_3315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3315,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3318,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:807: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[422];
av2[3]=C_fix(13);
av2[4]=lf[423];
av2[5]=lf[424];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3604 in k3601 in k3598 in k3595 in k3592 in k3589 in k3586 in k3583 in k3580 in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in k3559 in k3556 in k3553 in k3550 in k3547 in k3544 in k3541 in ... */
static void C_ccall f_3606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3606,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3609,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:975: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[209];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[210];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4101 in a4092 in k4086 in k4083 in k4080 in k4077 in k4074 in k4071 in k4068 in k4065 in k4062 in k4059 in k4056 in k4053 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in ... */
static void C_ccall f_4103(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_4103,2,av);}
a=C_alloc(14);
t2=C_a_i_list1(&a,1,t1);
t3=t2;
t4=C_i_car(((C_word*)t0)[2]);
t5=t4;
t6=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t7=t6;
t8=C_i_cadr(((C_word*)t0)[2]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4161,a[2]=t9,a[3]=((C_word*)t0)[3],a[4]=t7,a[5]=t5,a[6]=((C_word*)t0)[4],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* c-platform.scm:1198: varnode */
t11=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}

/* k3601 in k3598 in k3595 in k3592 in k3589 in k3586 in k3583 in k3580 in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in k3559 in k3556 in k3553 in k3550 in k3547 in k3544 in k3541 in k3538 in ... */
static void C_ccall f_3603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3603,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3606,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:974: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[211];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[212];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3598 in k3595 in k3592 in k3589 in k3586 in k3583 in k3580 in k3577 in k3574 in k3571 in k3568 in k3565 in k3562 in k3559 in k3556 in k3553 in k3550 in k3547 in k3544 in k3541 in k3538 in k3535 in ... */
static void C_ccall f_3600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3600,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3603,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:973: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[213];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[214];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k2632 in k2629 in k2626 in ... */
static void C_ccall f_2691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2691,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2694,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:578: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[792];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[794];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2695 in k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k2632 in ... */
static void C_ccall f_2697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2697,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2700,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:580: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[790];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[791];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2692 in k2689 in k2686 in k2683 in k2680 in k2677 in k2674 in k2671 in k2668 in k2665 in k2662 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k2632 in k2629 in ... */
static void C_ccall f_2694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2694,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2697,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:579: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[792];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[793];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3208 in k3205 in k3202 in k3199 in k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 in k3166 in k3163 in k3160 in k3157 in k3154 in k3151 in k3148 in k3145 in ... */
static void C_ccall f_3210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3210,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3213,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:764: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[44];
av2[3]=C_fix(11);
av2[4]=C_fix(2);
av2[5]=lf[474];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3217 in k3214 in k3211 in k3208 in k3205 in k3202 in k3199 in k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 in k3166 in k3163 in k3160 in k3157 in k3154 in ... */
static void C_ccall f_3219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3219,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3222,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:767: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[471];
av2[3]=C_fix(11);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[337];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3214 in k3211 in k3208 in k3205 in k3202 in k3199 in k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 in k3166 in k3163 in k3160 in k3157 in k3154 in k3151 in ... */
static void C_ccall f_3216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3216,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3219,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:766: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[472];
av2[3]=C_fix(11);
av2[4]=C_fix(3);
av2[5]=lf[294];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3211 in k3208 in k3205 in k3202 in k3199 in k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 in k3166 in k3163 in k3160 in k3157 in k3154 in k3151 in k3148 in ... */
static void C_ccall f_3213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3213,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3216,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:765: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[473];
av2[3]=C_fix(11);
av2[4]=C_fix(3);
av2[5]=lf[294];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k2632 in k2629 in k2626 in k2623 in k2620 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2599 in k2596 in ... */
static void C_ccall f_2661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2661,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2664,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:565: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[812];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[813];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2665 in k2662 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k2632 in k2629 in k2626 in k2623 in k2620 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in ... */
static void C_ccall f_2667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2667,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2670,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:567: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[808];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[809];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k2662 in k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2638 in k2635 in k2632 in k2629 in k2626 in k2623 in k2620 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2599 in ... */
static void C_ccall f_2664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2664,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2667,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:566: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[810];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[811];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3199 in k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 in k3166 in k3163 in k3160 in k3157 in k3154 in k3151 in k3148 in k3145 in k3142 in k3139 in k3136 in ... */
static void C_ccall f_3201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3201,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3204,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:760: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[435];
av2[3]=C_fix(9);
av2[4]=lf[478];
av2[5]=lf[479];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3205 in k3202 in k3199 in k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 in k3166 in k3163 in k3160 in k3157 in k3154 in k3151 in k3148 in k3145 in k3142 in ... */
static void C_ccall f_3207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3207,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3210,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:763: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[475];
av2[3]=C_fix(11);
av2[4]=C_fix(2);
av2[5]=lf[476];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3202 in k3199 in k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 in k3166 in k3163 in k3160 in k3157 in k3154 in k3151 in k3148 in k3145 in k3142 in k3139 in ... */
static void C_ccall f_3204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3204,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3207,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:762: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[477];
av2[3]=C_fix(11);
av2[4]=C_fix(1);
av2[5]=lf[116];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3259 in k3256 in k3253 in k3250 in k3247 in k3244 in k3241 in k3238 in k3235 in k3232 in k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in k3208 in k3205 in k3202 in k3199 in k3196 in ... */
static void C_ccall f_3261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3261,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3264,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:785: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[431];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[454];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(4);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3349 in k3346 in k3343 in k3340 in k3337 in k3334 in k3331 in k3328 in k3325 in k3322 in k3319 in k3316 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in k3292 in k3289 in k3286 in ... */
static void C_ccall f_3351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3351,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3354,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:821: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[395];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[396];
av2[6]=lf[397];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3265 in k3262 in k3259 in k3256 in k3253 in k3250 in k3247 in k3244 in k3241 in k3238 in k3235 in k3232 in k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in k3208 in k3205 in k3202 in ... */
static void C_ccall f_3267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3267,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3270,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:787: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[428];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[452];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(4);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3355 in k3352 in k3349 in k3346 in k3343 in k3340 in k3337 in k3334 in k3331 in k3328 in k3325 in k3322 in k3319 in k3316 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in k3292 in ... */
static void C_ccall f_3357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3357,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3360,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:824: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[391];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[392];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3262 in k3259 in k3256 in k3253 in k3250 in k3247 in k3244 in k3241 in k3238 in k3235 in k3232 in k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in k3208 in k3205 in k3202 in k3199 in ... */
static void C_ccall f_3264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3264,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3267,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:786: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[425];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[453];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(4);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3352 in k3349 in k3346 in k3343 in k3340 in k3337 in k3334 in k3331 in k3328 in k3325 in k3322 in k3319 in k3316 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in k3292 in k3289 in ... */
static void C_ccall f_3354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3354,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3357,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:823: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[393];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[394];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4536 in a4457 in k3535 in k3532 in k3529 in k3526 in k3523 in k3520 in k3517 in k3514 in k3511 in k3508 in k3505 in k3502 in k3499 in k3496 in k3493 in k3490 in k3487 in k3484 in k3481 in k3478 in ... */
static void C_fcall f_4538(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_4538,2,t0,t1);}
a=C_alloc(11);
if(C_truep(t1)){
if(C_truep(C_i_negativep(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4562,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4566,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:944: - */{
C_word av2[3];
av2[0]=0;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
C_minus(3,av2);}}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
t4=C_a_i_list2(&a,2,t3,((C_word*)t0)[5]);
t5=((C_word*)t0)[4];
f_4488(t5,C_a_i_record4(&a,4,lf[35],lf[36],lf[260],t4));}}
else{
t2=((C_word*)t0)[4];
f_4488(t2,C_SCHEME_FALSE);}}

/* k3298 in k3295 in k3292 in k3289 in k3286 in k3283 in k3280 in k3277 in k3274 in k3271 in k3268 in k3265 in k3262 in k3259 in k3256 in k3253 in k3250 in k3247 in k3244 in k3241 in k3238 in k3235 in ... */
static void C_ccall f_3300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3300,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3303,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:800: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[435];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[436];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3250 in k3247 in k3244 in k3241 in k3238 in k3235 in k3232 in k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in k3208 in k3205 in k3202 in k3199 in k3196 in k3193 in k3190 in k3187 in ... */
static void C_ccall f_3252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3252,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3255,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:781: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[456];
av2[3]=C_fix(18);
av2[4]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3307 in k3304 in k3301 in k3298 in k3295 in k3292 in k3289 in k3286 in k3283 in k3280 in k3277 in k3274 in k3271 in k3268 in k3265 in k3262 in k3259 in k3256 in k3253 in k3250 in k3247 in k3244 in ... */
static void C_ccall f_3309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3309,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3312,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:804: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[428];
av2[3]=C_fix(13);
av2[4]=lf[429];
av2[5]=lf[430];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3253 in k3250 in k3247 in k3244 in k3241 in k3238 in k3235 in k3232 in k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in k3208 in k3205 in k3202 in k3199 in k3196 in k3193 in k3190 in ... */
static void C_ccall f_3255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3255,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3258,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:782: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[346];
av2[3]=C_fix(18);
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3301 in k3298 in k3295 in k3292 in k3289 in k3286 in k3283 in k3280 in k3277 in k3274 in k3271 in k3268 in k3265 in k3262 in k3259 in k3256 in k3253 in k3250 in k3247 in k3244 in k3241 in k3238 in ... */
static void C_ccall f_3303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3303,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3306,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:802: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[433];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[434];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3256 in k3253 in k3250 in k3247 in k3244 in k3241 in k3238 in k3235 in k3232 in k3229 in k3226 in k3223 in k3220 in k3217 in k3214 in k3211 in k3208 in k3205 in k3202 in k3199 in k3196 in k3193 in ... */
static void C_ccall f_3258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3258,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3261,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:784: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[433];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[455];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(4);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k3304 in k3301 in k3298 in k3295 in k3292 in k3289 in k3286 in k3283 in k3280 in k3277 in k3274 in k3271 in k3268 in k3265 in k3262 in k3259 in k3256 in k3253 in k3250 in k3247 in k3244 in k3241 in ... */
static void C_ccall f_3306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3306,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3309,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:803: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[431];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[432];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3820 in k3767 in k3752 in rewrite-make-vector in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_ccall f_3822(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_3822,2,av);}
a=C_alloc(27);
t2=C_a_i_record4(&a,4,lf[35],lf[38],((C_word*)t0)[2],t1);
t3=C_a_i_list2(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_record4(&a,4,lf[35],lf[37],((C_word*)t0)[4],t3);
t5=C_a_i_list2(&a,2,((C_word*)t0)[5],t4);
t6=((C_word*)t0)[6];
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_record4(&a,4,lf[35],lf[58],((C_word*)t0)[7],t5);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* a3823 in k3767 in k3752 in rewrite-make-vector in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_ccall f_3824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3824,3,av);}
/* c-platform.scm:1051: varnode */
t3=*((C_word*)lf[59]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3319 in k3316 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in k3292 in k3289 in k3286 in k3283 in k3280 in k3277 in k3274 in k3271 in k3268 in k3265 in k3262 in k3259 in k3256 in ... */
static void C_ccall f_3321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3321,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3324,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:809: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[418];
av2[3]=C_fix(13);
av2[4]=C_fix(4);
av2[5]=lf[419];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3667 in k3664 in k3661 in k3658 in k3655 in k3652 in k3649 in k3646 in k3643 in k3640 in k3637 in k3634 in k3631 in ... */
static void C_ccall f_3696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3696,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3699,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1011: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[147];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[148];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3325 in k3322 in k3319 in k3316 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in k3292 in k3289 in k3286 in k3283 in k3280 in k3277 in k3274 in k3271 in k3268 in k3265 in k3262 in ... */
static void C_ccall f_3327(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3327,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3330,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:811: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[414];
av2[3]=C_fix(13);
av2[4]=C_fix(0);
av2[5]=lf[415];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3667 in k3664 in k3661 in k3658 in k3655 in k3652 in k3649 in k3646 in k3643 in k3640 in k3637 in k3634 in k3631 in k3628 in ... */
static void C_ccall f_3693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3693,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3696,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1010: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[149];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[150];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3667 in k3664 in k3661 in k3658 in k3655 in k3652 in k3649 in k3646 in k3643 in k3640 in k3637 in k3634 in k3631 in k3628 in k3625 in ... */
static void C_ccall f_3690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3690,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3693,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1009: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[151];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[152];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3322 in k3319 in k3316 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in k3292 in k3289 in k3286 in k3283 in k3280 in k3277 in k3274 in k3271 in k3268 in k3265 in k3262 in k3259 in ... */
static void C_ccall f_3324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3324,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3327,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:810: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[416];
av2[3]=C_fix(13);
av2[4]=C_fix(1);
av2[5]=lf[417];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3667 in k3664 in k3661 in k3658 in k3655 in k3652 in k3649 in k3646 in k3643 in k3640 in k3637 in k3634 in ... */
static void C_ccall f_3699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3699,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3702,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1013: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[145];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[146];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* rewrite-call/cc in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in ... */
static void C_ccall f_3880(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3880,6,av);}
a=C_alloc(6);
t6=C_i_length(t5);
t7=C_eqp(C_fix(1),t6);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=t8;
t10=C_slot(t9,C_fix(1));
t11=C_eqp(lf[42],t10);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3899,a[2]=t9,a[3]=t4,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t13=C_slot(t9,C_fix(2));
t14=C_i_car(t13);
/* c-platform.scm:1064: get */
t15=*((C_word*)lf[66]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=t12;
av2[2]=t2;
av2[3]=t14;
av2[4]=lf[67];
((C_proc)(void*)(*((C_word*)t15+1)))(5,av2);}}
else{
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}
else{
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3682 in k3679 in k3676 in k3673 in k3670 in k3667 in k3664 in k3661 in k3658 in k3655 in k3652 in k3649 in k3646 in k3643 in k3640 in k3637 in k3634 in k3631 in k3628 in k3625 in k3622 in k3619 in ... */
static void C_ccall f_3684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3684,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3687,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1007: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[155];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[156];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3679 in k3676 in k3673 in k3670 in k3667 in k3664 in k3661 in k3658 in k3655 in k3652 in k3649 in k3646 in k3643 in k3640 in k3637 in k3634 in k3631 in k3628 in k3625 in k3622 in k3619 in k3616 in ... */
static void C_ccall f_3681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3681,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3684,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1006: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[157];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[158];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3667 in k3664 in k3661 in k3658 in k3655 in k3652 in k3649 in k3646 in k3643 in k3640 in k3637 in k3634 in k3631 in k3628 in k3625 in k3622 in ... */
static void C_ccall f_3687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3687,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3690,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1008: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[153];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[154];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3673 in k3670 in k3667 in k3664 in k3661 in k3658 in k3655 in k3652 in k3649 in k3646 in k3643 in k3640 in k3637 in k3634 in k3631 in k3628 in k3625 in k3622 in k3619 in k3616 in k3613 in k3610 in ... */
static void C_ccall f_3675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3675,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3678,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1004: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[161];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[162];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3670 in k3667 in k3664 in k3661 in k3658 in k3655 in k3652 in k3649 in k3646 in k3643 in k3640 in k3637 in k3634 in k3631 in k3628 in k3625 in k3622 in k3619 in k3616 in k3613 in k3610 in k3607 in ... */
static void C_ccall f_3672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3672,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3675,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1002: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[163];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[164];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3676 in k3673 in k3670 in k3667 in k3664 in k3661 in k3658 in k3655 in k3652 in k3649 in k3646 in k3643 in k3640 in k3637 in k3634 in k3631 in k3628 in k3625 in k3622 in k3619 in k3616 in k3613 in ... */
static void C_ccall f_3678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3678,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3681,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1005: rewrite */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[159];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[160];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* a4285 in k4050 in k4047 in k4044 in k4041 in k4038 in k4035 in k4032 in k4028 in k4025 in k3876 in k3873 in k3870 in k3867 in k3730 in k3727 in k3724 in k3721 in k3718 in k3715 in k3712 in k3709 in ... */
static void C_ccall f_4286(C_word c,C_word *av){
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
C_word t18;
C_word t19;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_4286,6,av);}
a=C_alloc(18);
t6=C_i_length(t5);
t7=C_eqp(C_fix(1),t6);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=t8;
t10=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4316,a[2]=t4,a[3]=t1,a[4]=t11,tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4319,a[2]=t12,a[3]=t9,a[4]=t4,a[5]=t1,a[6]=t11,tmp=(C_word)a,a+=7,tmp);
t14=C_slot(t9,C_fix(1));
t15=C_eqp(lf[42],t14);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4344,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
t17=C_slot(t9,C_fix(2));
t18=C_i_car(t17);
/* c-platform.scm:1138: get */
t19=*((C_word*)lf[66]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t19;
av2[1]=t16;
av2[2]=t2;
av2[3]=t18;
av2[4]=lf[104];
((C_proc)(void*)(*((C_word*)t19+1)))(5,av2);}}
else{
t16=t13;
f_4319(t16,C_SCHEME_FALSE);}}
else{
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[553] = {
{"f_2089:c_2dplatform_2escm",(void*)f_2089},
{"f_3462:c_2dplatform_2escm",(void*)f_3462},
{"f_3465:c_2dplatform_2escm",(void*)f_3465},
{"f_3468:c_2dplatform_2escm",(void*)f_3468},
{"f_3450:c_2dplatform_2escm",(void*)f_3450},
{"f_3453:c_2dplatform_2escm",(void*)f_3453},
{"f_3456:c_2dplatform_2escm",(void*)f_3456},
{"f_3459:c_2dplatform_2escm",(void*)f_3459},
{"f_1956:c_2dplatform_2escm",(void*)f_1956},
{"f_1959:c_2dplatform_2escm",(void*)f_1959},
{"f_4998:c_2dplatform_2escm",(void*)f_4998},
{"f_4590:c_2dplatform_2escm",(void*)f_4590},
{"f_4373:c_2dplatform_2escm",(void*)f_4373},
{"f_1974:c_2dplatform_2escm",(void*)f_1974},
{"f_4344:c_2dplatform_2escm",(void*)f_4344},
{"f_3402:c_2dplatform_2escm",(void*)f_3402},
{"f_3408:c_2dplatform_2escm",(void*)f_3408},
{"f_3405:c_2dplatform_2escm",(void*)f_3405},
{"f_4953:c_2dplatform_2escm",(void*)f_4953},
{"f_4429:c_2dplatform_2escm",(void*)f_4429},
{"f_4316:c_2dplatform_2escm",(void*)f_4316},
{"f_4319:c_2dplatform_2escm",(void*)f_4319},
{"f_4784:c_2dplatform_2escm",(void*)f_4784},
{"f_3441:c_2dplatform_2escm",(void*)f_3441},
{"f_3447:c_2dplatform_2escm",(void*)f_3447},
{"f_3444:c_2dplatform_2escm",(void*)f_3444},
{"f_3432:c_2dplatform_2escm",(void*)f_3432},
{"f_4458:c_2dplatform_2escm",(void*)f_4458},
{"f_3435:c_2dplatform_2escm",(void*)f_3435},
{"f_3438:c_2dplatform_2escm",(void*)f_3438},
{"f_2559:c_2dplatform_2escm",(void*)f_2559},
{"f_3420:c_2dplatform_2escm",(void*)f_3420},
{"f_3429:c_2dplatform_2escm",(void*)f_3429},
{"f_3423:c_2dplatform_2escm",(void*)f_3423},
{"f_3426:c_2dplatform_2escm",(void*)f_3426},
{"f_2562:c_2dplatform_2escm",(void*)f_2562},
{"f_2565:c_2dplatform_2escm",(void*)f_2565},
{"f_2568:c_2dplatform_2escm",(void*)f_2568},
{"f_3411:c_2dplatform_2escm",(void*)f_3411},
{"f_3417:c_2dplatform_2escm",(void*)f_3417},
{"f_3414:c_2dplatform_2escm",(void*)f_3414},
{"f_1912:c_2dplatform_2escm",(void*)f_1912},
{"f_4745:c_2dplatform_2escm",(void*)f_4745},
{"f_4488:c_2dplatform_2escm",(void*)f_4488},
{"f_3869:c_2dplatform_2escm",(void*)f_3869},
{"f_3899:c_2dplatform_2escm",(void*)f_3899},
{"f_4894:c_2dplatform_2escm",(void*)f_4894},
{"f_1752:c_2dplatform_2escm",(void*)f_1752},
{"f_1755:c_2dplatform_2escm",(void*)f_1755},
{"f_1757:c_2dplatform_2escm",(void*)f_1757},
{"f_3875:c_2dplatform_2escm",(void*)f_3875},
{"f_3872:c_2dplatform_2escm",(void*)f_3872},
{"f_3878:c_2dplatform_2escm",(void*)f_3878},
{"f_4768:c_2dplatform_2escm",(void*)f_4768},
{"f_5401:c_2dplatform_2escm",(void*)f_5401},
{"f_5371:c_2dplatform_2escm",(void*)f_5371},
{"f_4403:c_2dplatform_2escm",(void*)f_4403},
{"f_5369:c_2dplatform_2escm",(void*)f_5369},
{"f_1997:c_2dplatform_2escm",(void*)f_1997},
{"f_3531:c_2dplatform_2escm",(void*)f_3531},
{"f_3537:c_2dplatform_2escm",(void*)f_3537},
{"f_3534:c_2dplatform_2escm",(void*)f_3534},
{"f_5399:c_2dplatform_2escm",(void*)f_5399},
{"f_1964:c_2dplatform_2escm",(void*)f_1964},
{"f_4790:c_2dplatform_2escm",(void*)f_4790},
{"f_1962:c_2dplatform_2escm",(void*)f_1962},
{"f_3522:c_2dplatform_2escm",(void*)f_3522},
{"f_3528:c_2dplatform_2escm",(void*)f_3528},
{"f_3525:c_2dplatform_2escm",(void*)f_3525},
{"f_1744:c_2dplatform_2escm",(void*)f_1744},
{"f_3552:c_2dplatform_2escm",(void*)f_3552},
{"f_3555:c_2dplatform_2escm",(void*)f_3555},
{"f_3558:c_2dplatform_2escm",(void*)f_3558},
{"f_3543:c_2dplatform_2escm",(void*)f_3543},
{"f_3540:c_2dplatform_2escm",(void*)f_3540},
{"f_4821:c_2dplatform_2escm",(void*)f_4821},
{"f_3546:c_2dplatform_2escm",(void*)f_3546},
{"f_3549:c_2dplatform_2escm",(void*)f_3549},
{"f_5251:c_2dplatform_2escm",(void*)f_5251},
{"f_4824:c_2dplatform_2escm",(void*)f_4824},
{"f_2940:c_2dplatform_2escm",(void*)f_2940},
{"f_2943:c_2dplatform_2escm",(void*)f_2943},
{"f_2946:c_2dplatform_2escm",(void*)f_2946},
{"f_2949:c_2dplatform_2escm",(void*)f_2949},
{"f_3510:c_2dplatform_2escm",(void*)f_3510},
{"f_3519:c_2dplatform_2escm",(void*)f_3519},
{"f_3513:c_2dplatform_2escm",(void*)f_3513},
{"f_3516:c_2dplatform_2escm",(void*)f_3516},
{"f_5196:c_2dplatform_2escm",(void*)f_5196},
{"f_5477:c_2dplatform_2escm",(void*)f_5477},
{"f_5249:c_2dplatform_2escm",(void*)f_5249},
{"f_3501:c_2dplatform_2escm",(void*)f_3501},
{"f_4861:c_2dplatform_2escm",(void*)f_4861},
{"f_3507:c_2dplatform_2escm",(void*)f_3507},
{"f_3504:c_2dplatform_2escm",(void*)f_3504},
{"f_5180:c_2dplatform_2escm",(void*)f_5180},
{"f_3297:c_2dplatform_2escm",(void*)f_3297},
{"f_3294:c_2dplatform_2escm",(void*)f_3294},
{"f_3291:c_2dplatform_2escm",(void*)f_3291},
{"f_2931:c_2dplatform_2escm",(void*)f_2931},
{"f_2937:c_2dplatform_2escm",(void*)f_2937},
{"f_2934:c_2dplatform_2escm",(void*)f_2934},
{"f_3285:c_2dplatform_2escm",(void*)f_3285},
{"f_3288:c_2dplatform_2escm",(void*)f_3288},
{"f_3282:c_2dplatform_2escm",(void*)f_3282},
{"f_5451:c_2dplatform_2escm",(void*)f_5451},
{"f_2982:c_2dplatform_2escm",(void*)f_2982},
{"toplevel:c_2dplatform_2escm",(void*)C_platform_toplevel},
{"f_2988:c_2dplatform_2escm",(void*)f_2988},
{"f_2985:c_2dplatform_2escm",(void*)f_2985},
{"f_5447:c_2dplatform_2escm",(void*)f_5447},
{"f_3279:c_2dplatform_2escm",(void*)f_3279},
{"f_3276:c_2dplatform_2escm",(void*)f_3276},
{"f_3273:c_2dplatform_2escm",(void*)f_3273},
{"f_3270:c_2dplatform_2escm",(void*)f_3270},
{"f_5292:c_2dplatform_2escm",(void*)f_5292},
{"f_2952:c_2dplatform_2escm",(void*)f_2952},
{"f_2955:c_2dplatform_2escm",(void*)f_2955},
{"f_2958:c_2dplatform_2escm",(void*)f_2958},
{"f_2922:c_2dplatform_2escm",(void*)f_2922},
{"f_2925:c_2dplatform_2escm",(void*)f_2925},
{"f_2928:c_2dplatform_2escm",(void*)f_2928},
{"f_5657:c_2dplatform_2escm",(void*)f_5657},
{"f_4657:c_2dplatform_2escm",(void*)f_4657},
{"f_3561:c_2dplatform_2escm",(void*)f_3561},
{"f_3564:c_2dplatform_2escm",(void*)f_3564},
{"f_3567:c_2dplatform_2escm",(void*)f_3567},
{"f_5642:c_2dplatform_2escm",(void*)f_5642},
{"f_2455:c_2dplatform_2escm",(void*)f_2455},
{"f_3916:c_2dplatform_2escm",(void*)f_3916},
{"f_5632:c_2dplatform_2escm",(void*)f_5632},
{"f_4615:c_2dplatform_2escm",(void*)f_4615},
{"f_2406:c_2dplatform_2escm",(void*)f_2406},
{"f_2403:c_2dplatform_2escm",(void*)f_2403},
{"f_2337:c_2dplatform_2escm",(void*)f_2337},
{"f_2409:c_2dplatform_2escm",(void*)f_2409},
{"f_2340:c_2dplatform_2escm",(void*)f_2340},
{"f_2342:c_2dplatform_2escm",(void*)f_2342},
{"f_2577:c_2dplatform_2escm",(void*)f_2577},
{"f_2574:c_2dplatform_2escm",(void*)f_2574},
{"f_2571:c_2dplatform_2escm",(void*)f_2571},
{"f_5061:c_2dplatform_2escm",(void*)f_5061},
{"f_3576:c_2dplatform_2escm",(void*)f_3576},
{"f_3573:c_2dplatform_2escm",(void*)f_3573},
{"f_3570:c_2dplatform_2escm",(void*)f_3570},
{"f_2589:c_2dplatform_2escm",(void*)f_2589},
{"f_2586:c_2dplatform_2escm",(void*)f_2586},
{"f_2583:c_2dplatform_2escm",(void*)f_2583},
{"f_3976:c_2dplatform_2escm",(void*)f_3976},
{"f_2580:c_2dplatform_2escm",(void*)f_2580},
{"f_3972:c_2dplatform_2escm",(void*)f_3972},
{"f_1773:c_2dplatform_2escm",(void*)f_1773},
{"f_3579:c_2dplatform_2escm",(void*)f_3579},
{"f_2595:c_2dplatform_2escm",(void*)f_2595},
{"f_2598:c_2dplatform_2escm",(void*)f_2598},
{"f_2592:c_2dplatform_2escm",(void*)f_2592},
{"f_5043:c_2dplatform_2escm",(void*)f_5043},
{"f_3964:c_2dplatform_2escm",(void*)f_3964},
{"f_3968:c_2dplatform_2escm",(void*)f_3968},
{"f_1785:c_2dplatform_2escm",(void*)f_1785},
{"f_1782:c_2dplatform_2escm",(void*)f_1782},
{"f_2916:c_2dplatform_2escm",(void*)f_2916},
{"f_2913:c_2dplatform_2escm",(void*)f_2913},
{"f_3597:c_2dplatform_2escm",(void*)f_3597},
{"f_2910:c_2dplatform_2escm",(void*)f_2910},
{"f_3591:c_2dplatform_2escm",(void*)f_3591},
{"f_3594:c_2dplatform_2escm",(void*)f_3594},
{"f_2919:c_2dplatform_2escm",(void*)f_2919},
{"f_3588:c_2dplatform_2escm",(void*)f_3588},
{"f_3585:c_2dplatform_2escm",(void*)f_3585},
{"f_3582:c_2dplatform_2escm",(void*)f_3582},
{"f_3489:c_2dplatform_2escm",(void*)f_3489},
{"f_3486:c_2dplatform_2escm",(void*)f_3486},
{"f_3483:c_2dplatform_2escm",(void*)f_3483},
{"f_3480:c_2dplatform_2escm",(void*)f_3480},
{"f_3477:c_2dplatform_2escm",(void*)f_3477},
{"f_4695:c_2dplatform_2escm",(void*)f_4695},
{"f_3474:c_2dplatform_2escm",(void*)f_3474},
{"f_3471:c_2dplatform_2escm",(void*)f_3471},
{"f_5004:c_2dplatform_2escm",(void*)f_5004},
{"f_5002:c_2dplatform_2escm",(void*)f_5002},
{"f_4692:c_2dplatform_2escm",(void*)f_4692},
{"f_3021:c_2dplatform_2escm",(void*)f_3021},
{"f_3024:c_2dplatform_2escm",(void*)f_3024},
{"f_3027:c_2dplatform_2escm",(void*)f_3027},
{"f_2721:c_2dplatform_2escm",(void*)f_2721},
{"f_2724:c_2dplatform_2escm",(void*)f_2724},
{"f_2727:c_2dplatform_2escm",(void*)f_2727},
{"f_2730:c_2dplatform_2escm",(void*)f_2730},
{"f_2733:c_2dplatform_2escm",(void*)f_2733},
{"f_2736:c_2dplatform_2escm",(void*)f_2736},
{"f_2739:c_2dplatform_2escm",(void*)f_2739},
{"f_4027:c_2dplatform_2escm",(void*)f_4027},
{"f_5536:c_2dplatform_2escm",(void*)f_5536},
{"f_2970:c_2dplatform_2escm",(void*)f_2970},
{"f_2979:c_2dplatform_2escm",(void*)f_2979},
{"f_2976:c_2dplatform_2escm",(void*)f_2976},
{"f_2973:c_2dplatform_2escm",(void*)f_2973},
{"f_3003:c_2dplatform_2escm",(void*)f_3003},
{"f_3000:c_2dplatform_2escm",(void*)f_3000},
{"f_3006:c_2dplatform_2escm",(void*)f_3006},
{"f_3009:c_2dplatform_2escm",(void*)f_3009},
{"f_4040:c_2dplatform_2escm",(void*)f_4040},
{"f_2742:c_2dplatform_2escm",(void*)f_2742},
{"f_4043:c_2dplatform_2escm",(void*)f_4043},
{"f_4046:c_2dplatform_2escm",(void*)f_4046},
{"f_2745:c_2dplatform_2escm",(void*)f_2745},
{"f_2748:c_2dplatform_2escm",(void*)f_2748},
{"f_2841:c_2dplatform_2escm",(void*)f_2841},
{"f_2844:c_2dplatform_2escm",(void*)f_2844},
{"f_2847:c_2dplatform_2escm",(void*)f_2847},
{"f_3030:c_2dplatform_2escm",(void*)f_3030},
{"f_3033:c_2dplatform_2escm",(void*)f_3033},
{"f_3036:c_2dplatform_2escm",(void*)f_3036},
{"f_3039:c_2dplatform_2escm",(void*)f_3039},
{"f_4052:c_2dplatform_2escm",(void*)f_4052},
{"f_2751:c_2dplatform_2escm",(void*)f_2751},
{"f_2757:c_2dplatform_2escm",(void*)f_2757},
{"f_4055:c_2dplatform_2escm",(void*)f_4055},
{"f_4049:c_2dplatform_2escm",(void*)f_4049},
{"f_2754:c_2dplatform_2escm",(void*)f_2754},
{"f_2850:c_2dplatform_2escm",(void*)f_2850},
{"f_2853:c_2dplatform_2escm",(void*)f_2853},
{"f_2856:c_2dplatform_2escm",(void*)f_2856},
{"f_2859:c_2dplatform_2escm",(void*)f_2859},
{"f_5552:c_2dplatform_2escm",(void*)f_5552},
{"f_2991:c_2dplatform_2escm",(void*)f_2991},
{"f_2997:c_2dplatform_2escm",(void*)f_2997},
{"f_2994:c_2dplatform_2escm",(void*)f_2994},
{"f_3060:c_2dplatform_2escm",(void*)f_3060},
{"f_2306:c_2dplatform_2escm",(void*)f_2306},
{"f_2305:c_2dplatform_2escm",(void*)f_2305},
{"f_2302:c_2dplatform_2escm",(void*)f_2302},
{"f_3069:c_2dplatform_2escm",(void*)f_3069},
{"f_3063:c_2dplatform_2escm",(void*)f_3063},
{"f_2760:c_2dplatform_2escm",(void*)f_2760},
{"f_3066:c_2dplatform_2escm",(void*)f_3066},
{"f_4061:c_2dplatform_2escm",(void*)f_4061},
{"f_4067:c_2dplatform_2escm",(void*)f_4067},
{"f_4064:c_2dplatform_2escm",(void*)f_4064},
{"f_2769:c_2dplatform_2escm",(void*)f_2769},
{"f_2763:c_2dplatform_2escm",(void*)f_2763},
{"f_4058:c_2dplatform_2escm",(void*)f_4058},
{"f_2766:c_2dplatform_2escm",(void*)f_2766},
{"f_2823:c_2dplatform_2escm",(void*)f_2823},
{"f_2820:c_2dplatform_2escm",(void*)f_2820},
{"f_2826:c_2dplatform_2escm",(void*)f_2826},
{"f_2829:c_2dplatform_2escm",(void*)f_2829},
{"f_3495:c_2dplatform_2escm",(void*)f_3495},
{"f_3498:c_2dplatform_2escm",(void*)f_3498},
{"f_3492:c_2dplatform_2escm",(void*)f_3492},
{"f_2961:c_2dplatform_2escm",(void*)f_2961},
{"f_2967:c_2dplatform_2escm",(void*)f_2967},
{"f_2964:c_2dplatform_2escm",(void*)f_2964},
{"f_3012:c_2dplatform_2escm",(void*)f_3012},
{"f_3015:c_2dplatform_2escm",(void*)f_3015},
{"f_2772:c_2dplatform_2escm",(void*)f_2772},
{"f_3018:c_2dplatform_2escm",(void*)f_3018},
{"f_2778:c_2dplatform_2escm",(void*)f_2778},
{"f_2775:c_2dplatform_2escm",(void*)f_2775},
{"f_2832:c_2dplatform_2escm",(void*)f_2832},
{"f_2835:c_2dplatform_2escm",(void*)f_2835},
{"f_2838:c_2dplatform_2escm",(void*)f_2838},
{"f_3042:c_2dplatform_2escm",(void*)f_3042},
{"f_3048:c_2dplatform_2escm",(void*)f_3048},
{"f_3045:c_2dplatform_2escm",(void*)f_3045},
{"f_2907:c_2dplatform_2escm",(void*)f_2907},
{"f_2901:c_2dplatform_2escm",(void*)f_2901},
{"f_2904:c_2dplatform_2escm",(void*)f_2904},
{"f_3072:c_2dplatform_2escm",(void*)f_3072},
{"f_3078:c_2dplatform_2escm",(void*)f_3078},
{"f_3075:c_2dplatform_2escm",(void*)f_3075},
{"f_2237:c_2dplatform_2escm",(void*)f_2237},
{"f_3051:c_2dplatform_2escm",(void*)f_3051},
{"f_3057:c_2dplatform_2escm",(void*)f_3057},
{"f_3054:c_2dplatform_2escm",(void*)f_3054},
{"f_4030:c_2dplatform_2escm",(void*)f_4030},
{"f_4034:c_2dplatform_2escm",(void*)f_4034},
{"f_4037:c_2dplatform_2escm",(void*)f_4037},
{"f_3084:c_2dplatform_2escm",(void*)f_3084},
{"f_3087:c_2dplatform_2escm",(void*)f_3087},
{"f_3081:c_2dplatform_2escm",(void*)f_3081},
{"f_3132:c_2dplatform_2escm",(void*)f_3132},
{"f_3135:c_2dplatform_2escm",(void*)f_3135},
{"f_3138:c_2dplatform_2escm",(void*)f_3138},
{"f_5598:c_2dplatform_2escm",(void*)f_5598},
{"f_2706:c_2dplatform_2escm",(void*)f_2706},
{"f_2703:c_2dplatform_2escm",(void*)f_2703},
{"f_2700:c_2dplatform_2escm",(void*)f_2700},
{"f_3120:c_2dplatform_2escm",(void*)f_3120},
{"f_3123:c_2dplatform_2escm",(void*)f_3123},
{"f_3126:c_2dplatform_2escm",(void*)f_3126},
{"f_3129:c_2dplatform_2escm",(void*)f_3129},
{"f_2709:c_2dplatform_2escm",(void*)f_2709},
{"f_2718:c_2dplatform_2escm",(void*)f_2718},
{"f_2715:c_2dplatform_2escm",(void*)f_2715},
{"f_2712:c_2dplatform_2escm",(void*)f_2712},
{"f_2126:c_2dplatform_2escm",(void*)f_2126},
{"f_2376:c_2dplatform_2escm",(void*)f_2376},
{"f_2213:c_2dplatform_2escm",(void*)f_2213},
{"f_1633:c_2dplatform_2escm",(void*)f_1633},
{"f_1658:c_2dplatform_2escm",(void*)f_1658},
{"f_1655:c_2dplatform_2escm",(void*)f_1655},
{"f_2201:c_2dplatform_2escm",(void*)f_2201},
{"f_2781:c_2dplatform_2escm",(void*)f_2781},
{"f_2787:c_2dplatform_2escm",(void*)f_2787},
{"f_2805:c_2dplatform_2escm",(void*)f_2805},
{"f_2808:c_2dplatform_2escm",(void*)f_2808},
{"f_2784:c_2dplatform_2escm",(void*)f_2784},
{"f_2802:c_2dplatform_2escm",(void*)f_2802},
{"f_2631:c_2dplatform_2escm",(void*)f_2631},
{"f_5529:c_2dplatform_2escm",(void*)f_5529},
{"f_2634:c_2dplatform_2escm",(void*)f_2634},
{"f_5527:c_2dplatform_2escm",(void*)f_5527},
{"f_2637:c_2dplatform_2escm",(void*)f_2637},
{"f_2790:c_2dplatform_2escm",(void*)f_2790},
{"f_2799:c_2dplatform_2escm",(void*)f_2799},
{"f_2796:c_2dplatform_2escm",(void*)f_2796},
{"f_2817:c_2dplatform_2escm",(void*)f_2817},
{"f_3150:c_2dplatform_2escm",(void*)f_3150},
{"f_2793:c_2dplatform_2escm",(void*)f_2793},
{"f_2811:c_2dplatform_2escm",(void*)f_2811},
{"f_2814:c_2dplatform_2escm",(void*)f_2814},
{"f_3159:c_2dplatform_2escm",(void*)f_3159},
{"f_3156:c_2dplatform_2escm",(void*)f_3156},
{"f_3153:c_2dplatform_2escm",(void*)f_3153},
{"f_3141:c_2dplatform_2escm",(void*)f_3141},
{"f_3147:c_2dplatform_2escm",(void*)f_3147},
{"f_3144:c_2dplatform_2escm",(void*)f_3144},
{"f_3171:c_2dplatform_2escm",(void*)f_3171},
{"f_3177:c_2dplatform_2escm",(void*)f_3177},
{"f_3174:c_2dplatform_2escm",(void*)f_3174},
{"f_4236:c_2dplatform_2escm",(void*)f_4236},
{"f_3162:c_2dplatform_2escm",(void*)f_3162},
{"f_3168:c_2dplatform_2escm",(void*)f_3168},
{"f_3165:c_2dplatform_2escm",(void*)f_3165},
{"f_2670:c_2dplatform_2escm",(void*)f_2670},
{"f_2679:c_2dplatform_2escm",(void*)f_2679},
{"f_2673:c_2dplatform_2escm",(void*)f_2673},
{"f_2676:c_2dplatform_2escm",(void*)f_2676},
{"f_2488:c_2dplatform_2escm",(void*)f_2488},
{"f_2484:c_2dplatform_2escm",(void*)f_2484},
{"f_3111:c_2dplatform_2escm",(void*)f_3111},
{"f_3117:c_2dplatform_2escm",(void*)f_3117},
{"f_3114:c_2dplatform_2escm",(void*)f_3114},
{"f_3195:c_2dplatform_2escm",(void*)f_3195},
{"f_3192:c_2dplatform_2escm",(void*)f_3192},
{"f_3198:c_2dplatform_2escm",(void*)f_3198},
{"f_2643:c_2dplatform_2escm",(void*)f_2643},
{"f_2640:c_2dplatform_2escm",(void*)f_2640},
{"f_2646:c_2dplatform_2escm",(void*)f_2646},
{"f_2649:c_2dplatform_2escm",(void*)f_2649},
{"f_3732:c_2dplatform_2escm",(void*)f_3732},
{"f_3734:c_2dplatform_2escm",(void*)f_3734},
{"f_3102:c_2dplatform_2escm",(void*)f_3102},
{"f_3105:c_2dplatform_2escm",(void*)f_3105},
{"f_3108:c_2dplatform_2escm",(void*)f_3108},
{"f_3183:c_2dplatform_2escm",(void*)f_3183},
{"f_3189:c_2dplatform_2escm",(void*)f_3189},
{"f_2020:c_2dplatform_2escm",(void*)f_2020},
{"f_3186:c_2dplatform_2escm",(void*)f_3186},
{"f_2022:c_2dplatform_2escm",(void*)f_2022},
{"f_2652:c_2dplatform_2escm",(void*)f_2652},
{"f_3180:c_2dplatform_2escm",(void*)f_3180},
{"f_2655:c_2dplatform_2escm",(void*)f_2655},
{"f_2658:c_2dplatform_2escm",(void*)f_2658},
{"f_3720:c_2dplatform_2escm",(void*)f_3720},
{"f_3723:c_2dplatform_2escm",(void*)f_3723},
{"f_3726:c_2dplatform_2escm",(void*)f_3726},
{"f_3729:c_2dplatform_2escm",(void*)f_3729},
{"f_2622:c_2dplatform_2escm",(void*)f_2622},
{"f_2625:c_2dplatform_2escm",(void*)f_2625},
{"f_2628:c_2dplatform_2escm",(void*)f_2628},
{"f_2880:c_2dplatform_2escm",(void*)f_2880},
{"f_3754:c_2dplatform_2escm",(void*)f_3754},
{"f_3621:c_2dplatform_2escm",(void*)f_3621},
{"f_2889:c_2dplatform_2escm",(void*)f_2889},
{"f_2883:c_2dplatform_2escm",(void*)f_2883},
{"f_3624:c_2dplatform_2escm",(void*)f_3624},
{"f_2886:c_2dplatform_2escm",(void*)f_2886},
{"f_3627:c_2dplatform_2escm",(void*)f_3627},
{"f_1612:c_2dplatform_2escm",(void*)f_1612},
{"f_2892:c_2dplatform_2escm",(void*)f_2892},
{"f_2898:c_2dplatform_2escm",(void*)f_2898},
{"f_2895:c_2dplatform_2escm",(void*)f_2895},
{"f_2862:c_2dplatform_2escm",(void*)f_2862},
{"f_2868:c_2dplatform_2escm",(void*)f_2868},
{"f_2865:c_2dplatform_2escm",(void*)f_2865},
{"f_2871:c_2dplatform_2escm",(void*)f_2871},
{"f_2877:c_2dplatform_2escm",(void*)f_2877},
{"f_3769:c_2dplatform_2escm",(void*)f_3769},
{"f_2874:c_2dplatform_2escm",(void*)f_2874},
{"f_4082:c_2dplatform_2escm",(void*)f_4082},
{"f_3663:c_2dplatform_2escm",(void*)f_3663},
{"f_3666:c_2dplatform_2escm",(void*)f_3666},
{"f_3660:c_2dplatform_2escm",(void*)f_3660},
{"f_4079:c_2dplatform_2escm",(void*)f_4079},
{"f_4076:c_2dplatform_2escm",(void*)f_4076},
{"f_3669:c_2dplatform_2escm",(void*)f_3669},
{"f_5129:c_2dplatform_2escm",(void*)f_5129},
{"f_2047:c_2dplatform_2escm",(void*)f_2047},
{"f_4093:c_2dplatform_2escm",(void*)f_4093},
{"f_4091:c_2dplatform_2escm",(void*)f_4091},
{"f_3651:c_2dplatform_2escm",(void*)f_3651},
{"f_3657:c_2dplatform_2escm",(void*)f_3657},
{"f_3654:c_2dplatform_2escm",(void*)f_3654},
{"f_4085:c_2dplatform_2escm",(void*)f_4085},
{"f_4088:c_2dplatform_2escm",(void*)f_4088},
{"f_3642:c_2dplatform_2escm",(void*)f_3642},
{"f_3645:c_2dplatform_2escm",(void*)f_3645},
{"f_3648:c_2dplatform_2escm",(void*)f_3648},
{"f_1674:c_2dplatform_2escm",(void*)f_1674},
{"f_1672:c_2dplatform_2escm",(void*)f_1672},
{"f_1670:c_2dplatform_2escm",(void*)f_1670},
{"f_3630:c_2dplatform_2escm",(void*)f_3630},
{"f_2299:c_2dplatform_2escm",(void*)f_2299},
{"f_3633:c_2dplatform_2escm",(void*)f_3633},
{"f_2296:c_2dplatform_2escm",(void*)f_2296},
{"f_3636:c_2dplatform_2escm",(void*)f_3636},
{"f_2293:c_2dplatform_2escm",(void*)f_2293},
{"f_3639:c_2dplatform_2escm",(void*)f_3639},
{"f_2290:c_2dplatform_2escm",(void*)f_2290},
{"f_3240:c_2dplatform_2escm",(void*)f_3240},
{"f_3243:c_2dplatform_2escm",(void*)f_3243},
{"f_3246:c_2dplatform_2escm",(void*)f_3246},
{"f_3249:c_2dplatform_2escm",(void*)f_3249},
{"f_2003:c_2dplatform_2escm",(void*)f_2003},
{"f_3231:c_2dplatform_2escm",(void*)f_3231},
{"f_3234:c_2dplatform_2escm",(void*)f_3234},
{"f_3237:c_2dplatform_2escm",(void*)f_3237},
{"f_2278:c_2dplatform_2escm",(void*)f_2278},
{"f_2190:c_2dplatform_2escm",(void*)f_2190},
{"f_1667:c_2dplatform_2escm",(void*)f_1667},
{"f_2195:c_2dplatform_2escm",(void*)f_2195},
{"f_2193:c_2dplatform_2escm",(void*)f_2193},
{"f_2607:c_2dplatform_2escm",(void*)f_2607},
{"f_2604:c_2dplatform_2escm",(void*)f_2604},
{"f_2601:c_2dplatform_2escm",(void*)f_2601},
{"f_1664:c_2dplatform_2escm",(void*)f_1664},
{"f_1661:c_2dplatform_2escm",(void*)f_1661},
{"f_2287:c_2dplatform_2escm",(void*)f_2287},
{"f_2281:c_2dplatform_2escm",(void*)f_2281},
{"f_2284:c_2dplatform_2escm",(void*)f_2284},
{"f_2619:c_2dplatform_2escm",(void*)f_2619},
{"f_2616:c_2dplatform_2escm",(void*)f_2616},
{"f_2613:c_2dplatform_2escm",(void*)f_2613},
{"f_2610:c_2dplatform_2escm",(void*)f_2610},
{"f_2067:c_2dplatform_2escm",(void*)f_2067},
{"f_4073:c_2dplatform_2escm",(void*)f_4073},
{"f_4070:c_2dplatform_2escm",(void*)f_4070},
{"f_3342:c_2dplatform_2escm",(void*)f_3342},
{"f_3345:c_2dplatform_2escm",(void*)f_3345},
{"f_3348:c_2dplatform_2escm",(void*)f_3348},
{"f_1609:c_2dplatform_2escm",(void*)f_1609},
{"f_1606:c_2dplatform_2escm",(void*)f_1606},
{"f_2070:c_2dplatform_2escm",(void*)f_2070},
{"f_3396:c_2dplatform_2escm",(void*)f_3396},
{"f_3393:c_2dplatform_2escm",(void*)f_3393},
{"f_3390:c_2dplatform_2escm",(void*)f_3390},
{"f_3717:c_2dplatform_2escm",(void*)f_3717},
{"f_3330:c_2dplatform_2escm",(void*)f_3330},
{"f_3714:c_2dplatform_2escm",(void*)f_3714},
{"f_3333:c_2dplatform_2escm",(void*)f_3333},
{"f_3711:c_2dplatform_2escm",(void*)f_3711},
{"f_3336:c_2dplatform_2escm",(void*)f_3336},
{"f_3339:c_2dplatform_2escm",(void*)f_3339},
{"f_4161:c_2dplatform_2escm",(void*)f_4161},
{"f_4168:c_2dplatform_2escm",(void*)f_4168},
{"f_3399:c_2dplatform_2escm",(void*)f_3399},
{"f_3708:c_2dplatform_2escm",(void*)f_3708},
{"f_3705:c_2dplatform_2escm",(void*)f_3705},
{"f_3363:c_2dplatform_2escm",(void*)f_3363},
{"f_3360:c_2dplatform_2escm",(void*)f_3360},
{"f_3702:c_2dplatform_2escm",(void*)f_3702},
{"f_3366:c_2dplatform_2escm",(void*)f_3366},
{"f_3369:c_2dplatform_2escm",(void*)f_3369},
{"f_3093:c_2dplatform_2escm",(void*)f_3093},
{"f_3099:c_2dplatform_2escm",(void*)f_3099},
{"f_3096:c_2dplatform_2escm",(void*)f_3096},
{"f_3090:c_2dplatform_2escm",(void*)f_3090},
{"f_5173:c_2dplatform_2escm",(void*)f_5173},
{"f_5171:c_2dplatform_2escm",(void*)f_5171},
{"f_3387:c_2dplatform_2escm",(void*)f_3387},
{"f_3381:c_2dplatform_2escm",(void*)f_3381},
{"f_3384:c_2dplatform_2escm",(void*)f_3384},
{"f_3618:c_2dplatform_2escm",(void*)f_3618},
{"f_3615:c_2dplatform_2escm",(void*)f_3615},
{"f_3612:c_2dplatform_2escm",(void*)f_3612},
{"f_2682:c_2dplatform_2escm",(void*)f_2682},
{"f_2688:c_2dplatform_2escm",(void*)f_2688},
{"f_2685:c_2dplatform_2escm",(void*)f_2685},
{"f_4566:c_2dplatform_2escm",(void*)f_4566},
{"f_3375:c_2dplatform_2escm",(void*)f_3375},
{"f_3378:c_2dplatform_2escm",(void*)f_3378},
{"f_3372:c_2dplatform_2escm",(void*)f_3372},
{"f_5113:c_2dplatform_2escm",(void*)f_5113},
{"f_4562:c_2dplatform_2escm",(void*)f_4562},
{"f_3222:c_2dplatform_2escm",(void*)f_3222},
{"f_3312:c_2dplatform_2escm",(void*)f_3312},
{"f_3609:c_2dplatform_2escm",(void*)f_3609},
{"f_3228:c_2dplatform_2escm",(void*)f_3228},
{"f_3318:c_2dplatform_2escm",(void*)f_3318},
{"f_3225:c_2dplatform_2escm",(void*)f_3225},
{"f_3315:c_2dplatform_2escm",(void*)f_3315},
{"f_3606:c_2dplatform_2escm",(void*)f_3606},
{"f_4103:c_2dplatform_2escm",(void*)f_4103},
{"f_3603:c_2dplatform_2escm",(void*)f_3603},
{"f_3600:c_2dplatform_2escm",(void*)f_3600},
{"f_2691:c_2dplatform_2escm",(void*)f_2691},
{"f_2697:c_2dplatform_2escm",(void*)f_2697},
{"f_2694:c_2dplatform_2escm",(void*)f_2694},
{"f_3210:c_2dplatform_2escm",(void*)f_3210},
{"f_3219:c_2dplatform_2escm",(void*)f_3219},
{"f_3216:c_2dplatform_2escm",(void*)f_3216},
{"f_3213:c_2dplatform_2escm",(void*)f_3213},
{"f_2661:c_2dplatform_2escm",(void*)f_2661},
{"f_2667:c_2dplatform_2escm",(void*)f_2667},
{"f_2664:c_2dplatform_2escm",(void*)f_2664},
{"f_3201:c_2dplatform_2escm",(void*)f_3201},
{"f_3207:c_2dplatform_2escm",(void*)f_3207},
{"f_3204:c_2dplatform_2escm",(void*)f_3204},
{"f_3261:c_2dplatform_2escm",(void*)f_3261},
{"f_3351:c_2dplatform_2escm",(void*)f_3351},
{"f_3267:c_2dplatform_2escm",(void*)f_3267},
{"f_3357:c_2dplatform_2escm",(void*)f_3357},
{"f_3264:c_2dplatform_2escm",(void*)f_3264},
{"f_3354:c_2dplatform_2escm",(void*)f_3354},
{"f_4538:c_2dplatform_2escm",(void*)f_4538},
{"f_3300:c_2dplatform_2escm",(void*)f_3300},
{"f_3252:c_2dplatform_2escm",(void*)f_3252},
{"f_3309:c_2dplatform_2escm",(void*)f_3309},
{"f_3255:c_2dplatform_2escm",(void*)f_3255},
{"f_3303:c_2dplatform_2escm",(void*)f_3303},
{"f_3258:c_2dplatform_2escm",(void*)f_3258},
{"f_3306:c_2dplatform_2escm",(void*)f_3306},
{"f_3822:c_2dplatform_2escm",(void*)f_3822},
{"f_3824:c_2dplatform_2escm",(void*)f_3824},
{"f_3321:c_2dplatform_2escm",(void*)f_3321},
{"f_3696:c_2dplatform_2escm",(void*)f_3696},
{"f_3327:c_2dplatform_2escm",(void*)f_3327},
{"f_3693:c_2dplatform_2escm",(void*)f_3693},
{"f_3690:c_2dplatform_2escm",(void*)f_3690},
{"f_3324:c_2dplatform_2escm",(void*)f_3324},
{"f_3699:c_2dplatform_2escm",(void*)f_3699},
{"f_3880:c_2dplatform_2escm",(void*)f_3880},
{"f_3684:c_2dplatform_2escm",(void*)f_3684},
{"f_3681:c_2dplatform_2escm",(void*)f_3681},
{"f_3687:c_2dplatform_2escm",(void*)f_3687},
{"f_3675:c_2dplatform_2escm",(void*)f_3675},
{"f_3672:c_2dplatform_2escm",(void*)f_3672},
{"f_3678:c_2dplatform_2escm",(void*)f_3678},
{"f_4286:c_2dplatform_2escm",(void*)f_4286},
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
S|  map		1
S|  for-each		1
o|eliminated procedure checks: 58 
o|specializations:
o|  2 (eqv? (not float) *)
o|  1 (memq * list)
o|  17 (= fixnum fixnum)
o|  3 (>= fixnum fixnum)
o|  3 (cdr pair)
o|  2 (car pair)
o|  6 (first pair)
o|  1 (##sys#check-list (or pair list) *)
(o e)|safe calls: 418 
(o e)|assignments to immediate values: 3 
o|safe globals: (##compiler#non-foldable-bindings ##compiler#internal-bindings ##compiler#default-extended-bindings ##compiler#default-standard-bindings ##compiler#valid-compiler-options-with-argument ##compiler#valid-compiler-options ##compiler#target-include-file ##compiler#membership-unfold-limit ##compiler#membership-test-operators ##compiler#eq-inline-operator ##compiler#unlikely-variables ##compiler#words-per-flonum ##compiler#units-used-by-default ##compiler#default-profiling-declarations ##compiler#default-debugging-declarations ##compiler#default-declarations ##compiler#default-optimization-passes) 
o|Removed `not' forms: 3 
o|inlining procedure: k1676 
o|contracted procedure: "(c-platform.scm:369) g257258" 
o|inlining procedure: k1699 
o|contracted procedure: "(c-platform.scm:374) g262263" 
o|inlining procedure: k1718 
o|inlining procedure: k1718 
o|inlining procedure: k1699 
o|contracted procedure: "(c-platform.scm:375) g267268" 
o|inlining procedure: k1676 
o|substituted constant variable: a1749 
o|inlining procedure: k1759 
o|inlining procedure: k1777 
o|contracted procedure: "(c-platform.scm:396) g323324" 
o|contracted procedure: "(c-platform.scm:398) g328329" 
o|inlining procedure: k1777 
o|inlining procedure: k1811 
o|contracted procedure: "(c-platform.scm:395) g320321" 
o|inlining procedure: k1811 
o|contracted procedure: "(c-platform.scm:394) g317318" 
o|contracted procedure: "(c-platform.scm:393) g313314" 
o|contracted procedure: "(c-platform.scm:392) g310311" 
o|inlining procedure: k1881 
o|contracted procedure: "(c-platform.scm:391) g300301" 
o|contracted procedure: "(c-platform.scm:390) g297298" 
o|contracted procedure: "(c-platform.scm:390) g294295" 
o|inlining procedure: k1881 
o|contracted procedure: "(c-platform.scm:389) g290291" 
o|contracted procedure: "(c-platform.scm:388) g286287" 
o|inlining procedure: k1759 
o|substituted constant variable: a1953 
o|inlining procedure: k1966 
o|contracted procedure: "(c-platform.scm:438) g425426" 
o|inlining procedure: k2024 
o|inlining procedure: k2024 
o|contracted procedure: "(c-platform.scm:442) g449450" 
o|inlining procedure: k2071 
o|inlining procedure: k2071 
o|contracted procedure: "(c-platform.scm:453) g486487" 
o|contracted procedure: "(c-platform.scm:455) g491492" 
o|inlining procedure: k2102 
o|substituted constant variable: a2115 
o|inlining procedure: k2116 
o|contracted procedure: "(c-platform.scm:448) g476477" 
o|contracted procedure: "(c-platform.scm:450) g481482" 
o|inlining procedure: k2116 
o|contracted procedure: "(c-platform.scm:447) g473474" 
o|contracted procedure: "(c-platform.scm:445) g468469" 
o|inlining procedure: k2102 
o|substituted constant variable: a2165 
o|contracted procedure: "(c-platform.scm:443) g463464" 
o|contracted procedure: "(c-platform.scm:437) g422423" 
o|inlining procedure: k1966 
o|inlining procedure: k2203 
o|contracted procedure: "(c-platform.scm:471) g509510" 
o|inlining procedure: k2235 
o|contracted procedure: "(c-platform.scm:475) g519520" 
o|inlining procedure: k2235 
o|contracted procedure: "(c-platform.scm:476) g524525" 
o|inlining procedure: k2203 
o|substituted constant variable: a2275 
o|inlining procedure: k2308 
o|contracted procedure: "(c-platform.scm:494) g545546" 
o|inlining procedure: k2308 
o|substituted constant variable: a2334 
o|inlining procedure: k2344 
o|inlining procedure: k2362 
o|inlining procedure: k2377 
o|inlining procedure: k2389 
o|contracted procedure: "(c-platform.scm:516) g587588" 
o|contracted procedure: "(c-platform.scm:524) g602603" 
o|contracted procedure: "(c-platform.scm:518) g592593" 
o|contracted procedure: "(c-platform.scm:521) g597598" 
o|contracted procedure: "(c-platform.scm:515) g584585" 
o|substituted constant variable: a2502 
o|inlining procedure: k2389 
o|contracted procedure: "(c-platform.scm:510) g577578" 
o|contracted procedure: "(c-platform.scm:509) g573574" 
o|inlining procedure: k2377 
o|contracted procedure: "(c-platform.scm:507) g568569" 
o|inlining procedure: k2362 
o|contracted procedure: "(c-platform.scm:506) g564565" 
o|contracted procedure: "(c-platform.scm:505) g560561" 
o|inlining procedure: k2344 
o|substituted constant variable: a2552 
o|inlining procedure: k3739 
o|inlining procedure: k3758 
o|contracted procedure: "(c-platform.scm:1041) g724725" 
o|contracted procedure: "(c-platform.scm:1045) g729730" 
o|contracted procedure: "(c-platform.scm:1048) g734735" 
o|contracted procedure: "(c-platform.scm:1040) g719720" 
o|inlining procedure: k3758 
o|contracted procedure: "(c-platform.scm:1035) g713714" 
o|contracted procedure: "(c-platform.scm:1033) g708709" 
o|inlining procedure: k3739 
o|inlining procedure: k3882 
o|inlining procedure: k3900 
o|inlining procedure: k3918 
o|contracted procedure: k3930 
o|contracted procedure: k3936 
o|inlining procedure: k3933 
o|inlining procedure: k3933 
o|contracted procedure: k3942 
o|contracted procedure: "(c-platform.scm:1075) g775776" 
o|inlining procedure: k3918 
o|contracted procedure: "(c-platform.scm:1066) g761762" 
o|contracted procedure: "(c-platform.scm:1065) g757758" 
o|inlining procedure: k3900 
o|contracted procedure: "(c-platform.scm:1064) g754755" 
o|contracted procedure: "(c-platform.scm:1063) g750751" 
o|inlining procedure: k3882 
o|substituted constant variable: a4020 
o|inlining procedure: k4095 
o|contracted procedure: "(c-platform.scm:1188) g871872" 
o|contracted procedure: "(c-platform.scm:1192) g876877" 
o|contracted procedure: "(c-platform.scm:1195) g881882" 
o|inlining procedure: k4095 
o|substituted constant variable: a4162 
o|inlining procedure: k4170 
o|contracted procedure: "(c-platform.scm:1171) g850851" 
o|contracted procedure: "(c-platform.scm:1174) g855856" 
o|contracted procedure: "(c-platform.scm:1177) g860861" 
o|inlining procedure: k4170 
o|substituted constant variable: a4230 
o|inlining procedure: k4238 
o|contracted procedure: "(c-platform.scm:1148) g835836" 
o|contracted procedure: "(c-platform.scm:1151) g840841" 
o|inlining procedure: k4274 
o|inlining procedure: k4274 
o|inlining procedure: k4238 
o|substituted constant variable: a4280 
o|inlining procedure: k4288 
o|contracted procedure: "(c-platform.scm:1134) g813814" 
o|inlining procedure: k4314 
o|inlining procedure: k4314 
o|contracted procedure: "(c-platform.scm:1140) g825826" 
o|contracted procedure: "(c-platform.scm:1138) g822823" 
o|contracted procedure: "(c-platform.scm:1137) g819820" 
o|inlining procedure: k4288 
o|substituted constant variable: a4367 
o|inlining procedure: k4375 
o|inlining procedure: k4393 
o|contracted procedure: "(c-platform.scm:1118) g802803" 
o|substituted constant variable: setter-map 
o|inlining procedure: k4393 
o|contracted procedure: "(c-platform.scm:1116) g798799" 
o|contracted procedure: "(c-platform.scm:1115) g794795" 
o|contracted procedure: "(c-platform.scm:1114) g790791" 
o|inlining procedure: k4375 
o|substituted constant variable: a4452 
o|inlining procedure: k4460 
o|contracted procedure: "(c-platform.scm:934) g663664" 
o|inlining procedure: k4489 
o|inlining procedure: k4489 
o|contracted procedure: "(c-platform.scm:949) g689690" 
o|contracted procedure: "(c-platform.scm:950) g694695" 
o|inlining procedure: k4521 
o|inlining procedure: k4533 
o|contracted procedure: "(c-platform.scm:942) g679680" 
o|contracted procedure: "(c-platform.scm:945) g684685" 
o|inlining procedure: k4533 
o|contracted procedure: "(c-platform.scm:939) g675676" 
o|inlining procedure: k4521 
o|contracted procedure: "(c-platform.scm:937) g671672" 
o|inlining procedure: k4460 
o|substituted constant variable: a4609 
o|inlining procedure: k4617 
o|contracted procedure: "(c-platform.scm:902) g639640" 
o|contracted procedure: "(c-platform.scm:905) g644645" 
o|inlining procedure: k4655 
o|contracted procedure: "(c-platform.scm:909) g654655" 
o|inlining procedure: k4655 
o|contracted procedure: "(c-platform.scm:908) g651652" 
o|inlining procedure: k4617 
o|substituted constant variable: a4690 
o|contracted procedure: "(c-platform.scm:853) g622623" 
o|contracted procedure: "(c-platform.scm:856) g627628" 
o|inlining procedure: k4729 
o|inlining procedure: k4729 
o|substituted constant variable: a4764 
o|substituted constant variable: a4766 
o|inlining procedure: k4770 
o|inlining procedure: k4791 
o|inlining procedure: k4791 
o|contracted procedure: "(c-platform.scm:424) g404405" 
o|contracted procedure: "(c-platform.scm:426) g409410" 
o|contracted procedure: "(c-platform.scm:421) g394395" 
o|contracted procedure: "(c-platform.scm:423) g399400" 
o|inlining procedure: k4850 
o|contracted procedure: "(c-platform.scm:419) g388389" 
o|inlining procedure: k4850 
o|contracted procedure: "(c-platform.scm:418) g384385" 
o|inlining procedure: k4895 
o|inlining procedure: k4895 
o|contracted procedure: "(c-platform.scm:416) g377378" 
o|contracted procedure: "(c-platform.scm:415) g373374" 
o|inlining procedure: k4922 
o|contracted procedure: "(c-platform.scm:414) g360361" 
o|contracted procedure: "(c-platform.scm:413) g357358" 
o|contracted procedure: "(c-platform.scm:413) g354355" 
o|inlining procedure: k4922 
o|contracted procedure: "(c-platform.scm:412) g350351" 
o|contracted procedure: "(c-platform.scm:411) g346347" 
o|inlining procedure: k4770 
o|substituted constant variable: a4994 
o|inlining procedure: k5006 
o|contracted procedure: "(c-platform.scm:346) g215216" 
o|inlining procedure: k5038 
o|contracted procedure: "(c-platform.scm:352) g228229" 
o|inlining procedure: k5038 
o|contracted procedure: "(c-platform.scm:355) g233234" 
o|contracted procedure: "(c-platform.scm:351) g225226" 
o|contracted procedure: "(c-platform.scm:350) g222223" 
o|contracted procedure: "(c-platform.scm:356) g238239" 
o|contracted procedure: "(c-platform.scm:358) g243244" 
o|inlining procedure: k5006 
o|substituted constant variable: a5127 
o|inlining procedure: k5131 
o|inlining procedure: k5146 
o|contracted procedure: "(c-platform.scm:327) g186187" 
o|inlining procedure: k5175 
o|contracted procedure: "(c-platform.scm:334) g200201" 
o|inlining procedure: k5175 
o|contracted procedure: "(c-platform.scm:335) g205206" 
o|contracted procedure: "(c-platform.scm:333) g197198" 
o|contracted procedure: "(c-platform.scm:333) g194195" 
o|inlining procedure: k5146 
o|substituted constant variable: a5241 
o|inlining procedure: k5253 
o|contracted procedure: "(c-platform.scm:323) g181182" 
o|inlining procedure: k5253 
o|contracted procedure: "(c-platform.scm:322) g178179" 
o|inlining procedure: k5131 
o|substituted constant variable: a5290 
o|inlining procedure: k5294 
o|inlining procedure: k5294 
o|contracted procedure: "(c-platform.scm:284) g137138" 
o|contracted procedure: "(c-platform.scm:287) g142143" 
o|inlining procedure: k5338 
o|contracted procedure: "(c-platform.scm:300) g158159" 
o|contracted procedure: "(c-platform.scm:306) g165166" 
o|substituted constant variable: a5393 
o|inlining procedure: k5338 
o|inlining procedure: k5403 
o|contracted procedure: "(c-platform.scm:296) g153154" 
o|inlining procedure: k5403 
o|contracted procedure: "(c-platform.scm:295) g150151" 
o|inlining procedure: k5452 
o|contracted procedure: "(c-platform.scm:257) g9495" 
o|inlining procedure: k5452 
o|contracted procedure: "(c-platform.scm:259) g99100" 
o|inlining procedure: k5502 
o|contracted procedure: "(c-platform.scm:261) g104105" 
o|inlining procedure: k5531 
o|contracted procedure: "(c-platform.scm:268) g118119" 
o|inlining procedure: k5531 
o|contracted procedure: "(c-platform.scm:269) g123124" 
o|contracted procedure: "(c-platform.scm:267) g115116" 
o|contracted procedure: "(c-platform.scm:267) g112113" 
o|inlining procedure: k5502 
o|inlining procedure: k5600 
o|contracted procedure: "(c-platform.scm:255) g8788" 
o|inlining procedure: k5600 
o|contracted procedure: "(c-platform.scm:254) g8485" 
o|inlining procedure: k5634 
o|contracted procedure: "(c-platform.scm:227) g4350" 
o|contracted procedure: "(c-platform.scm:228) g5859" 
o|inlining procedure: k5634 
o|simplifications: ((if . 1)) 
o|replaced variables: 520 
o|removed binding forms: 609 
o|substituted constant variable: c259 
o|substituted constant variable: c264 
o|substituted constant variable: c269 
o|substituted constant variable: r16775667 
o|substituted constant variable: c325 
o|substituted constant variable: c330 
o|substituted constant variable: p331 
o|substituted constant variable: r17785670 
o|substituted constant variable: r18125672 
o|substituted constant variable: c302 
o|substituted constant variable: r18825674 
o|substituted constant variable: r17605675 
o|substituted constant variable: c427 
o|substituted constant variable: c488 
o|substituted constant variable: c493 
o|substituted constant variable: p494 
o|substituted constant variable: s495 
o|substituted constant variable: c478 
o|substituted constant variable: c483 
o|substituted constant variable: p484 
o|substituted constant variable: s485 
o|substituted constant variable: r21175683 
o|substituted constant variable: r21035685 
o|substituted constant variable: r19675686 
o|substituted constant variable: c511 
o|substituted constant variable: c521 
o|substituted constant variable: c526 
o|substituted constant variable: r22045692 
o|substituted constant variable: c547 
o|substituted constant variable: r23095694 
o|substituted constant variable: c589 
o|substituted constant variable: c604 
o|substituted constant variable: c594 
o|substituted constant variable: c599 
o|substituted constant variable: r23905699 
o|substituted constant variable: r23785700 
o|substituted constant variable: r23635701 
o|substituted constant variable: r23455702 
o|substituted constant variable: c726 
o|substituted constant variable: c731 
o|substituted constant variable: c736 
o|substituted constant variable: c721 
o|substituted constant variable: p722 
o|substituted constant variable: s723 
o|substituted constant variable: r37595705 
o|substituted constant variable: r37405706 
o|substituted constant variable: r39345710 
o|substituted constant variable: c777 
o|substituted constant variable: r39195712 
o|substituted constant variable: r39015713 
o|substituted constant variable: r38835714 
o|removed side-effect free assignment to unused variable: setter-map 
o|substituted constant variable: c873 
o|substituted constant variable: c878 
o|substituted constant variable: c883 
o|substituted constant variable: p884 
o|substituted constant variable: r40965716 
o|substituted constant variable: c852 
o|substituted constant variable: c857 
o|substituted constant variable: p858 
o|substituted constant variable: c862 
o|substituted constant variable: p863 
o|substituted constant variable: r41715718 
o|substituted constant variable: c837 
o|substituted constant variable: c842 
o|substituted constant variable: r42755720 
o|substituted constant variable: r42755720 
o|substituted constant variable: r42755722 
o|substituted constant variable: r42755722 
o|substituted constant variable: r42395724 
o|substituted constant variable: c815 
o|substituted constant variable: c827 
o|substituted constant variable: p828 
o|substituted constant variable: r42895730 
o|substituted constant variable: c804 
o|substituted constant variable: r43945733 
o|substituted constant variable: r43765734 
o|converted assignments to bindings: (rewrite-call/cc742) 
o|converted assignments to bindings: (rewrite-make-vector699) 
o|substituted constant variable: c665 
o|substituted constant variable: c691 
o|substituted constant variable: p692 
o|substituted constant variable: c696 
o|substituted constant variable: c681 
o|substituted constant variable: p682 
o|substituted constant variable: c686 
o|substituted constant variable: p687 
o|substituted constant variable: r45345742 
o|substituted constant variable: r45225743 
o|substituted constant variable: r44615744 
o|substituted constant variable: c641 
o|substituted constant variable: c646 
o|substituted constant variable: r46565747 
o|substituted constant variable: r46185748 
o|substituted constant variable: c624 
o|substituted constant variable: c629 
o|substituted constant variable: p630 
o|converted assignments to bindings: (build619) 
o|converted assignments to bindings: (rewrite-c-w-v551) 
o|converted assignments to bindings: (rewrite-c..r498) 
o|converted assignments to bindings: (rewrite-apply414) 
o|substituted constant variable: c406 
o|substituted constant variable: c411 
o|substituted constant variable: p412 
o|substituted constant variable: c396 
o|substituted constant variable: c401 
o|substituted constant variable: p402 
o|substituted constant variable: r48515755 
o|substituted constant variable: c362 
o|substituted constant variable: r49235759 
o|substituted constant variable: r47715760 
o|converted assignments to bindings: (eqv?-id274) 
o|converted assignments to bindings: (op1248) 
o|substituted constant variable: c217 
o|substituted constant variable: c230 
o|substituted constant variable: p231 
o|substituted constant variable: c235 
o|substituted constant variable: p236 
o|substituted constant variable: c240 
o|substituted constant variable: c245 
o|substituted constant variable: p246 
o|substituted constant variable: s247 
o|substituted constant variable: r50075766 
o|substituted constant variable: c188 
o|substituted constant variable: c202 
o|substituted constant variable: p203 
o|substituted constant variable: c207 
o|substituted constant variable: p208 
o|substituted constant variable: r51475771 
o|substituted constant variable: r52545773 
o|substituted constant variable: r51325774 
o|substituted constant variable: r52955775 
o|substituted constant variable: c139 
o|substituted constant variable: c144 
o|substituted constant variable: c160 
o|substituted constant variable: c167 
o|substituted constant variable: r53395778 
o|substituted constant variable: r54045780 
o|substituted constant variable: c96 
o|substituted constant variable: c101 
o|substituted constant variable: c106 
o|substituted constant variable: c120 
o|substituted constant variable: p121 
o|substituted constant variable: c125 
o|substituted constant variable: p126 
o|substituted constant variable: r55035786 
o|substituted constant variable: r56015788 
o|substituted constant variable: mark65 
o|substituted constant variable: g4951 
o|simplifications: ((let . 8)) 
o|replaced variables: 84 
o|removed binding forms: 524 
o|removed conditional forms: 1 
o|inlining procedure: k4652 
o|inlining procedure: k4652 
o|inlining procedure: k4652 
o|inlining procedure: k5332 
o|inlining procedure: k5332 
o|inlining procedure: k1638 
o|replaced variables: 151 
o|removed binding forms: 225 
o|substituted constant variable: r46535805 
o|substituted constant variable: r46535805 
o|substituted constant variable: r46535810 
o|substituted constant variable: r46535810 
o|substituted constant variable: r46535815 
o|substituted constant variable: r46535815 
o|substituted constant variable: r53335820 
o|substituted constant variable: r53335820 
o|substituted constant variable: r53335825 
o|substituted constant variable: r53335825 
o|substituted constant variable: r16395830 
o|replaced variables: 5 
o|removed binding forms: 154 
o|removed binding forms: 16 
o|simplifications: ((if . 7) (##core#call . 390)) 
o|  call simplifications:
o|    null?	5
o|    zero?
o|    fx>=	3
o|    symbol?	2
o|    negative?
o|    -
o|    assq
o|    =
o|    fixnum?	2
o|    <=
o|    add1
o|    third	4
o|    proper-list?
o|    cadr	2
o|    cdr	4
o|    ##sys#check-list
o|    pair?	5
o|    cons	5
o|    ##sys#setslot
o|    second	9
o|    equal?	2
o|    ##sys#slot	57
o|    first	23
o|    flonum?	2
o|    not	4
o|    length	22
o|    eq?	59
o|    car	10
o|    list	91
o|    ##sys#make-structure	69
o|contracted procedure: k1746 
o|contracted procedure: k1679 
o|contracted procedure: k1691 
o|contracted procedure: k1695 
o|contracted procedure: k1702 
o|inlining procedure: k1714 
o|inlining procedure: k1714 
o|contracted procedure: k1730 
o|contracted procedure: k1738 
o|contracted procedure: k1734 
o|contracted procedure: k1950 
o|contracted procedure: k1762 
o|contracted procedure: k1765 
o|contracted procedure: k1768 
o|contracted procedure: k1795 
o|contracted procedure: k1808 
o|contracted procedure: k1799 
o|contracted procedure: k1843 
o|contracted procedure: k1814 
o|contracted procedure: k1834 
o|contracted procedure: k1825 
o|contracted procedure: k1821 
o|contracted procedure: k1875 
o|contracted procedure: k1846 
o|contracted procedure: k1866 
o|contracted procedure: k1857 
o|contracted procedure: k1853 
o|contracted procedure: k1946 
o|contracted procedure: k1878 
o|contracted procedure: k1937 
o|contracted procedure: k1884 
o|contracted procedure: k1919 
o|contracted procedure: k1928 
o|contracted procedure: k1890 
o|contracted procedure: k1902 
o|contracted procedure: k1906 
o|contracted procedure: k1969 
o|contracted procedure: k2185 
o|contracted procedure: k1979 
o|contracted procedure: k1991 
o|contracted procedure: k2005 
o|contracted procedure: k2009 
o|contracted procedure: k2061 
o|contracted procedure: k2012 
o|contracted procedure: k2015 
o|contracted procedure: k2027 
o|contracted procedure: k2030 
o|contracted procedure: k2033 
o|contracted procedure: k2041 
o|contracted procedure: k2049 
o|contracted procedure: k2083 
o|contracted procedure: k2096 
o|contracted procedure: k2176 
o|contracted procedure: k2099 
o|contracted procedure: k2167 
o|contracted procedure: k2105 
o|contracted procedure: k2162 
o|contracted procedure: k2108 
o|contracted procedure: k2136 
o|contracted procedure: k2149 
o|contracted procedure: k2153 
o|contracted procedure: k2140 
o|contracted procedure: k2272 
o|contracted procedure: k2206 
o|contracted procedure: k2215 
o|contracted procedure: k2227 
o|contracted procedure: k2231 
o|contracted procedure: k2238 
o|contracted procedure: k2250 
o|contracted procedure: k2265 
o|contracted procedure: k2331 
o|contracted procedure: k2311 
o|contracted procedure: k2323 
o|contracted procedure: k2327 
o|contracted procedure: k2554 
o|contracted procedure: k2347 
o|contracted procedure: k2350 
o|contracted procedure: k2353 
o|contracted procedure: k2549 
o|contracted procedure: k2359 
o|contracted procedure: k2540 
o|contracted procedure: k2365 
o|contracted procedure: k2531 
o|contracted procedure: k2368 
o|contracted procedure: k2522 
o|contracted procedure: k2383 
o|contracted procedure: k2513 
o|contracted procedure: k2386 
o|contracted procedure: k2392 
o|contracted procedure: k2504 
o|contracted procedure: k2398 
o|contracted procedure: k2419 
o|contracted procedure: k2490 
o|contracted procedure: k2457 
o|contracted procedure: k2474 
o|contracted procedure: k2478 
o|contracted procedure: k2470 
o|contracted procedure: k2461 
o|contracted procedure: k2432 
o|contracted procedure: k2445 
o|contracted procedure: k2449 
o|contracted procedure: k2441 
o|contracted procedure: k2423 
o|contracted procedure: k2499 
o|contracted procedure: k3736 
o|contracted procedure: k3742 
o|contracted procedure: k3864 
o|contracted procedure: k3749 
o|contracted procedure: k3855 
o|contracted procedure: k3755 
o|contracted procedure: k3761 
o|contracted procedure: k3833 
o|contracted procedure: k3770 
o|contracted procedure: k3782 
o|contracted procedure: k3799 
o|contracted procedure: k3830 
o|contracted procedure: k3816 
o|contracted procedure: k3812 
o|contracted procedure: k3803 
o|contracted procedure: k3795 
o|contracted procedure: k3786 
o|contracted procedure: k4022 
o|contracted procedure: k3885 
o|contracted procedure: k3888 
o|contracted procedure: k4017 
o|contracted procedure: k3894 
o|contracted procedure: k3995 
o|contracted procedure: k3906 
o|contracted procedure: k3986 
o|contracted procedure: k3909 
o|contracted procedure: k3921 
o|contracted procedure: k3924 
o|contracted procedure: k3954 
o|contracted procedure: k3958 
o|contracted procedure: k4008 
o|contracted procedure: k3999 
o|contracted procedure: k4164 
o|contracted procedure: k4098 
o|contracted procedure: k4113 
o|contracted procedure: k4121 
o|contracted procedure: k4134 
o|contracted procedure: k4155 
o|contracted procedure: k4151 
o|contracted procedure: k4147 
o|contracted procedure: k4138 
o|contracted procedure: k4130 
o|contracted procedure: k4117 
o|contracted procedure: k4232 
o|contracted procedure: k4173 
o|contracted procedure: k4185 
o|contracted procedure: k4223 
o|contracted procedure: k4227 
o|contracted procedure: k4219 
o|contracted procedure: k4211 
o|contracted procedure: k4215 
o|contracted procedure: k4202 
o|contracted procedure: k4198 
o|contracted procedure: k4189 
o|contracted procedure: k4282 
o|contracted procedure: k4241 
o|contracted procedure: k4253 
o|contracted procedure: k4277 
o|contracted procedure: k4270 
o|contracted procedure: k4266 
o|contracted procedure: k4257 
o|contracted procedure: k4369 
o|contracted procedure: k4291 
o|contracted procedure: k4294 
o|contracted procedure: k4306 
o|contracted procedure: k4310 
o|contracted procedure: k4332 
o|contracted procedure: k4364 
o|contracted procedure: k4335 
o|contracted procedure: k4355 
o|contracted procedure: k4346 
o|contracted procedure: k4454 
o|contracted procedure: k4378 
o|contracted procedure: k4381 
o|contracted procedure: k4449 
o|contracted procedure: k4387 
o|contracted procedure: k4440 
o|contracted procedure: k4390 
o|contracted procedure: k4404 
o|contracted procedure: k4419 
o|contracted procedure: k4423 
o|contracted procedure: k4431 
o|contracted procedure: k4611 
o|contracted procedure: k4463 
o|contracted procedure: k4466 
o|contracted procedure: k4478 
o|inlining procedure: k4482 
o|inlining procedure: k4482 
o|contracted procedure: k4495 
o|contracted procedure: k4515 
o|contracted procedure: k4606 
o|contracted procedure: k4518 
o|contracted procedure: k4524 
o|contracted procedure: k4597 
o|contracted procedure: k4527 
o|contracted procedure: k4542 
o|contracted procedure: k4554 
o|contracted procedure: k4576 
o|contracted procedure: k4581 
o|contracted procedure: k4687 
o|contracted procedure: k4620 
o|contracted procedure: k4632 
o|contracted procedure: k4636 
o|contracted procedure: k4649 
o|contracted procedure: k4683 
o|contracted procedure: k4658 
o|contracted procedure: k4674 
o|contracted procedure: k4665 
o|contracted procedure: k4706 
o|contracted procedure: k4723 
o|contracted procedure: k4719 
o|contracted procedure: k4710 
o|contracted procedure: k4726 
o|contracted procedure: k4732 
o|contracted procedure: k4739 
o|contracted procedure: k4749 
o|contracted procedure: k4756 
o|contracted procedure: k4760 
o|contracted procedure: k4991 
o|contracted procedure: k4773 
o|contracted procedure: k4776 
o|contracted procedure: k4779 
o|contracted procedure: k4803 
o|contracted procedure: k4816 
o|contracted procedure: k4807 
o|contracted procedure: k4834 
o|contracted procedure: k4847 
o|contracted procedure: k4838 
o|contracted procedure: k4883 
o|contracted procedure: k4853 
o|contracted procedure: k4874 
o|contracted procedure: k4856 
o|contracted procedure: k4916 
o|contracted procedure: k4886 
o|contracted procedure: k4907 
o|contracted procedure: k4889 
o|contracted procedure: k4987 
o|contracted procedure: k4919 
o|contracted procedure: k4978 
o|contracted procedure: k4925 
o|contracted procedure: k4960 
o|contracted procedure: k4969 
o|contracted procedure: k4931 
o|contracted procedure: k4943 
o|contracted procedure: k4947 
o|contracted procedure: k5124 
o|contracted procedure: k5009 
o|contracted procedure: k5015 
o|contracted procedure: k5027 
o|contracted procedure: k5031 
o|contracted procedure: k5034 
o|contracted procedure: k5053 
o|contracted procedure: k5095 
o|contracted procedure: k5070 
o|contracted procedure: k5086 
o|contracted procedure: k5077 
o|contracted procedure: k5107 
o|contracted procedure: k5120 
o|contracted procedure: k5287 
o|contracted procedure: k5134 
o|contracted procedure: k5243 
o|contracted procedure: k5137 
o|contracted procedure: k5143 
o|contracted procedure: k5238 
o|contracted procedure: k5149 
o|contracted procedure: k5161 
o|contracted procedure: k5165 
o|contracted procedure: k5190 
o|contracted procedure: k5206 
o|contracted procedure: k5234 
o|contracted procedure: k5209 
o|contracted procedure: k5225 
o|contracted procedure: k5216 
o|contracted procedure: k5281 
o|contracted procedure: k5256 
o|contracted procedure: k5272 
o|contracted procedure: k5263 
o|contracted procedure: k5297 
o|contracted procedure: k5443 
o|contracted procedure: k5436 
o|contracted procedure: k5303 
o|contracted procedure: k5315 
o|contracted procedure: k5319 
o|contracted procedure: k5335 
o|contracted procedure: k5341 
o|contracted procedure: k5390 
o|contracted procedure: k5347 
o|contracted procedure: k5359 
o|contracted procedure: k5363 
o|contracted procedure: k5382 
o|contracted procedure: k5386 
o|contracted procedure: k5431 
o|contracted procedure: k5406 
o|contracted procedure: k5422 
o|contracted procedure: k5413 
o|contracted procedure: k5455 
o|contracted procedure: k5467 
o|contracted procedure: k5471 
o|contracted procedure: k5594 
o|contracted procedure: k5481 
o|contracted procedure: k5493 
o|contracted procedure: k5497 
o|contracted procedure: k5505 
o|contracted procedure: k5517 
o|contracted procedure: k5521 
o|contracted procedure: k5546 
o|contracted procedure: k5562 
o|contracted procedure: k5590 
o|contracted procedure: k5565 
o|contracted procedure: k5581 
o|contracted procedure: k5572 
o|contracted procedure: k5628 
o|contracted procedure: k5603 
o|contracted procedure: k5619 
o|contracted procedure: k5610 
o|contracted procedure: k5637 
o|contracted procedure: k5647 
o|contracted procedure: k5651 
o|contracted procedure: k1644 
o|contracted procedure: k1638 
o|simplifications: ((let . 19)) 
o|removed binding forms: 320 
o|inlining procedure: k1699 
o|inlining procedure: k1699 
o|inlining procedure: k1699 
o|inlining procedure: k2235 
o|inlining procedure: k2235 
o|inlining procedure: k4314 
o|inlining procedure: k4489 
o|inlining procedure: k4489 
o|inlining procedure: k4645 
o|inlining procedure: k4645 
o|inlining procedure: k4645 
o|inlining procedure: k5038 
o|inlining procedure: k5038 
o|inlining procedure: k5328 
o|inlining procedure: k5328 
o|replaced variables: 58 
o|removed binding forms: 2 
o|removed binding forms: 43 
o|replaced variables: 2 
o|removed binding forms: 1 
o|direct leaf routine/allocation: build619 25 
o|customizable procedures: (for-each-loop4272 k5534 k5178 k5041 op1248 k4782 k4819 k4822 k4788 rewrite-c..r498 k4536 k4486 k4317 k2068 map-loop432452 k1771 k1780 k1783) 
o|calls to known targets: 58 
o|fast box initializations: 2 
o|dropping unused closure argument: f_1672 
o|dropping unused closure argument: f_2195 
*/
/* end of file */

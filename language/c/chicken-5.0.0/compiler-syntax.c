/* Generated from compiler-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: compiler-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -emit-import-library chicken.compiler.compiler-syntax -output-file compiler-syntax.c
   unit: compiler-syntax
   uses: library eval expand extras support compiler
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_support_toplevel)
C_externimport void C_ccall C_support_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_compiler_toplevel)
C_externimport void C_ccall C_compiler_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[105];
static double C_possibly_force_alignment;


C_noret_decl(f_1679)
static void C_ccall f_1679(C_word c,C_word *av) C_noret;
C_noret_decl(f_1682)
static void C_ccall f_1682(C_word c,C_word *av) C_noret;
C_noret_decl(f_1685)
static void C_ccall f_1685(C_word c,C_word *av) C_noret;
C_noret_decl(f_1688)
static void C_ccall f_1688(C_word c,C_word *av) C_noret;
C_noret_decl(f_1691)
static void C_ccall f_1691(C_word c,C_word *av) C_noret;
C_noret_decl(f_1694)
static void C_ccall f_1694(C_word c,C_word *av) C_noret;
C_noret_decl(f_2775)
static void C_fcall f_2775(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2781)
static C_word C_fcall f_2781(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word *av) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word *av) C_noret;
C_noret_decl(f_2983)
static void C_ccall f_2983(C_word c,C_word *av) C_noret;
C_noret_decl(f_2987)
static void C_fcall f_2987(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2992)
static void C_fcall f_2992(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3001)
static void C_fcall f_3001(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011(C_word c,C_word *av) C_noret;
C_noret_decl(f_3026)
static void C_ccall f_3026(C_word c,C_word *av) C_noret;
C_noret_decl(f_3030)
static void C_ccall f_3030(C_word c,C_word *av) C_noret;
C_noret_decl(f_3034)
static void C_ccall f_3034(C_word c,C_word *av) C_noret;
C_noret_decl(f_3041)
static void C_ccall f_3041(C_word c,C_word *av) C_noret;
C_noret_decl(f_3044)
static void C_ccall f_3044(C_word c,C_word *av) C_noret;
C_noret_decl(f_3047)
static void C_ccall f_3047(C_word c,C_word *av) C_noret;
C_noret_decl(f_3050)
static void C_ccall f_3050(C_word c,C_word *av) C_noret;
C_noret_decl(f_3053)
static void C_ccall f_3053(C_word c,C_word *av) C_noret;
C_noret_decl(f_3056)
static void C_ccall f_3056(C_word c,C_word *av) C_noret;
C_noret_decl(f_3058)
static void C_fcall f_3058(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_3064)
static void C_ccall f_3064(C_word c,C_word *av) C_noret;
C_noret_decl(f_3086)
static void C_fcall f_3086(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3089)
static void C_ccall f_3089(C_word c,C_word *av) C_noret;
C_noret_decl(f_3092)
static void C_fcall f_3092(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3096)
static void C_ccall f_3096(C_word c,C_word *av) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word *av) C_noret;
C_noret_decl(f_3109)
static void C_ccall f_3109(C_word c,C_word *av) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word *av) C_noret;
C_noret_decl(f_3118)
static void C_ccall f_3118(C_word c,C_word *av) C_noret;
C_noret_decl(f_3121)
static void C_ccall f_3121(C_word c,C_word *av) C_noret;
C_noret_decl(f_3124)
static void C_ccall f_3124(C_word c,C_word *av) C_noret;
C_noret_decl(f_3127)
static void C_ccall f_3127(C_word c,C_word *av) C_noret;
C_noret_decl(f_3130)
static void C_ccall f_3130(C_word c,C_word *av) C_noret;
C_noret_decl(f_3133)
static void C_ccall f_3133(C_word c,C_word *av) C_noret;
C_noret_decl(f_3136)
static void C_ccall f_3136(C_word c,C_word *av) C_noret;
C_noret_decl(f_3140)
static void C_ccall f_3140(C_word c,C_word *av) C_noret;
C_noret_decl(f_3143)
static void C_ccall f_3143(C_word c,C_word *av) C_noret;
C_noret_decl(f_3149)
static void C_ccall f_3149(C_word c,C_word *av) C_noret;
C_noret_decl(f_3152)
static void C_ccall f_3152(C_word c,C_word *av) C_noret;
C_noret_decl(f_3155)
static void C_ccall f_3155(C_word c,C_word *av) C_noret;
C_noret_decl(f_3164)
static void C_ccall f_3164(C_word c,C_word *av) C_noret;
C_noret_decl(f_3167)
static void C_ccall f_3167(C_word c,C_word *av) C_noret;
C_noret_decl(f_3170)
static void C_ccall f_3170(C_word c,C_word *av) C_noret;
C_noret_decl(f_3172)
static C_word C_fcall f_3172(C_word t0);
C_noret_decl(f_3182)
static void C_fcall f_3182(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3201)
static void C_fcall f_3201(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3232)
static void C_ccall f_3232(C_word c,C_word *av) C_noret;
C_noret_decl(f_3239)
static C_word C_fcall f_3239(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_3249)
static void C_fcall f_3249(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3258)
static void C_ccall f_3258(C_word c,C_word *av) C_noret;
C_noret_decl(f_3261)
static void C_ccall f_3261(C_word c,C_word *av) C_noret;
C_noret_decl(f_3284)
static void C_ccall f_3284(C_word c,C_word *av) C_noret;
C_noret_decl(f_3313)
static void C_ccall f_3313(C_word c,C_word *av) C_noret;
C_noret_decl(f_3319)
static void C_ccall f_3319(C_word c,C_word *av) C_noret;
C_noret_decl(f_3336)
static void C_ccall f_3336(C_word c,C_word *av) C_noret;
C_noret_decl(f_3353)
static void C_ccall f_3353(C_word c,C_word *av) C_noret;
C_noret_decl(f_3370)
static void C_ccall f_3370(C_word c,C_word *av) C_noret;
C_noret_decl(f_3391)
static void C_ccall f_3391(C_word c,C_word *av) C_noret;
C_noret_decl(f_3412)
static void C_ccall f_3412(C_word c,C_word *av) C_noret;
C_noret_decl(f_3433)
static void C_ccall f_3433(C_word c,C_word *av) C_noret;
C_noret_decl(f_3455)
static void C_ccall f_3455(C_word c,C_word *av) C_noret;
C_noret_decl(f_3458)
static void C_ccall f_3458(C_word c,C_word *av) C_noret;
C_noret_decl(f_3509)
static void C_fcall f_3509(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3581)
static void C_ccall f_3581(C_word c,C_word *av) C_noret;
C_noret_decl(f_3588)
static void C_ccall f_3588(C_word c,C_word *av) C_noret;
C_noret_decl(f_3592)
static void C_ccall f_3592(C_word c,C_word *av) C_noret;
C_noret_decl(f_3606)
static void C_ccall f_3606(C_word c,C_word *av) C_noret;
C_noret_decl(f_3614)
static void C_ccall f_3614(C_word c,C_word *av) C_noret;
C_noret_decl(f_3617)
static void C_ccall f_3617(C_word c,C_word *av) C_noret;
C_noret_decl(f_3619)
static void C_ccall f_3619(C_word c,C_word *av) C_noret;
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
C_noret_decl(f_3735)
static void C_ccall f_3735(C_word c,C_word *av) C_noret;
C_noret_decl(f_3754)
static void C_ccall f_3754(C_word c,C_word *av) C_noret;
C_noret_decl(f_3757)
static void C_ccall f_3757(C_word c,C_word *av) C_noret;
C_noret_decl(f_3760)
static void C_ccall f_3760(C_word c,C_word *av) C_noret;
C_noret_decl(f_3763)
static void C_ccall f_3763(C_word c,C_word *av) C_noret;
C_noret_decl(f_3766)
static void C_ccall f_3766(C_word c,C_word *av) C_noret;
C_noret_decl(f_3769)
static void C_ccall f_3769(C_word c,C_word *av) C_noret;
C_noret_decl(f_3840)
static void C_ccall f_3840(C_word c,C_word *av) C_noret;
C_noret_decl(f_3844)
static void C_ccall f_3844(C_word c,C_word *av) C_noret;
C_noret_decl(f_3853)
static void C_ccall f_3853(C_word c,C_word *av) C_noret;
C_noret_decl(f_3863)
static void C_ccall f_3863(C_word c,C_word *av) C_noret;
C_noret_decl(f_3880)
static void C_ccall f_3880(C_word c,C_word *av) C_noret;
C_noret_decl(f_3884)
static void C_ccall f_3884(C_word c,C_word *av) C_noret;
C_noret_decl(f_3887)
static void C_ccall f_3887(C_word c,C_word *av) C_noret;
C_noret_decl(f_3897)
static void C_ccall f_3897(C_word c,C_word *av) C_noret;
C_noret_decl(f_3909)
static void C_ccall f_3909(C_word c,C_word *av) C_noret;
C_noret_decl(f_3921)
static void C_ccall f_3921(C_word c,C_word *av) C_noret;
C_noret_decl(f_3964)
static void C_ccall f_3964(C_word c,C_word *av) C_noret;
C_noret_decl(f_3974)
static void C_ccall f_3974(C_word c,C_word *av) C_noret;
C_noret_decl(f_3981)
static void C_ccall f_3981(C_word c,C_word *av) C_noret;
C_noret_decl(f_3992)
static void C_ccall f_3992(C_word c,C_word *av) C_noret;
C_noret_decl(f_3994)
static void C_fcall f_3994(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4012)
static void C_ccall f_4012(C_word c,C_word *av) C_noret;
C_noret_decl(f_4028)
static void C_ccall f_4028(C_word c,C_word *av) C_noret;
C_noret_decl(f_4032)
static void C_ccall f_4032(C_word c,C_word *av) C_noret;
C_noret_decl(f_4035)
static void C_ccall f_4035(C_word c,C_word *av) C_noret;
C_noret_decl(f_4038)
static void C_ccall f_4038(C_word c,C_word *av) C_noret;
C_noret_decl(f_4041)
static void C_ccall f_4041(C_word c,C_word *av) C_noret;
C_noret_decl(f_4044)
static void C_ccall f_4044(C_word c,C_word *av) C_noret;
C_noret_decl(f_4047)
static void C_ccall f_4047(C_word c,C_word *av) C_noret;
C_noret_decl(f_4050)
static void C_ccall f_4050(C_word c,C_word *av) C_noret;
C_noret_decl(f_4053)
static void C_ccall f_4053(C_word c,C_word *av) C_noret;
C_noret_decl(f_4056)
static void C_ccall f_4056(C_word c,C_word *av) C_noret;
C_noret_decl(f_4059)
static void C_ccall f_4059(C_word c,C_word *av) C_noret;
C_noret_decl(f_4062)
static void C_ccall f_4062(C_word c,C_word *av) C_noret;
C_noret_decl(f_4065)
static void C_ccall f_4065(C_word c,C_word *av) C_noret;
C_noret_decl(f_4068)
static void C_ccall f_4068(C_word c,C_word *av) C_noret;
C_noret_decl(f_4071)
static void C_ccall f_4071(C_word c,C_word *av) C_noret;
C_noret_decl(f_4080)
static void C_fcall f_4080(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4094)
static void C_ccall f_4094(C_word c,C_word *av) C_noret;
C_noret_decl(f_4117)
static void C_ccall f_4117(C_word c,C_word *av) C_noret;
C_noret_decl(f_4122)
static C_word C_fcall f_4122(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4137)
static void C_ccall f_4137(C_word c,C_word *av) C_noret;
C_noret_decl(f_4152)
static void C_ccall f_4152(C_word c,C_word *av) C_noret;
C_noret_decl(f_4200)
static void C_ccall f_4200(C_word c,C_word *av) C_noret;
C_noret_decl(f_4202)
static void C_fcall f_4202(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4262)
static void C_ccall f_4262(C_word c,C_word *av) C_noret;
C_noret_decl(f_4264)
static void C_fcall f_4264(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4301)
static C_word C_fcall f_4301(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4308)
static void C_ccall f_4308(C_word c,C_word *av) C_noret;
C_noret_decl(f_4310)
static void C_fcall f_4310(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4344)
static void C_fcall f_4344(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4392)
static void C_fcall f_4392(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4446)
static void C_ccall f_4446(C_word c,C_word *av) C_noret;
C_noret_decl(f_4448)
static void C_fcall f_4448(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4516)
static void C_fcall f_4516(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4541)
static void C_ccall f_4541(C_word c,C_word *av) C_noret;
C_noret_decl(f_4555)
static void C_ccall f_4555(C_word c,C_word *av) C_noret;
C_noret_decl(f_4558)
static void C_ccall f_4558(C_word c,C_word *av) C_noret;
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
C_noret_decl(f_4595)
static void C_fcall f_4595(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4609)
static void C_ccall f_4609(C_word c,C_word *av) C_noret;
C_noret_decl(f_4624)
static void C_ccall f_4624(C_word c,C_word *av) C_noret;
C_noret_decl(f_4629)
static C_word C_fcall f_4629(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4644)
static void C_ccall f_4644(C_word c,C_word *av) C_noret;
C_noret_decl(f_4659)
static void C_ccall f_4659(C_word c,C_word *av) C_noret;
C_noret_decl(f_4695)
static void C_ccall f_4695(C_word c,C_word *av) C_noret;
C_noret_decl(f_4697)
static void C_fcall f_4697(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4741)
static void C_ccall f_4741(C_word c,C_word *av) C_noret;
C_noret_decl(f_4743)
static void C_fcall f_4743(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4780)
static C_word C_fcall f_4780(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4787)
static void C_ccall f_4787(C_word c,C_word *av) C_noret;
C_noret_decl(f_4789)
static void C_fcall f_4789(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4823)
static void C_fcall f_4823(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4871)
static void C_fcall f_4871(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4917)
static void C_ccall f_4917(C_word c,C_word *av) C_noret;
C_noret_decl(f_4919)
static void C_fcall f_4919(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4971)
static void C_fcall f_4971(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4996)
static void C_ccall f_4996(C_word c,C_word *av) C_noret;
C_noret_decl(f_5010)
static void C_ccall f_5010(C_word c,C_word *av) C_noret;
C_noret_decl(C_compiler_2dsyntax_toplevel)
C_externexport void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2775)
static void C_ccall trf_2775(C_word c,C_word *av) C_noret;
static void C_ccall trf_2775(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2775(t0,t1);}

C_noret_decl(trf_2987)
static void C_ccall trf_2987(C_word c,C_word *av) C_noret;
static void C_ccall trf_2987(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2987(t0,t1,t2,t3);}

C_noret_decl(trf_2992)
static void C_ccall trf_2992(C_word c,C_word *av) C_noret;
static void C_ccall trf_2992(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2992(t0,t1,t2);}

C_noret_decl(trf_3001)
static void C_ccall trf_3001(C_word c,C_word *av) C_noret;
static void C_ccall trf_3001(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3001(t0,t1,t2);}

C_noret_decl(trf_3058)
static void C_ccall trf_3058(C_word c,C_word *av) C_noret;
static void C_ccall trf_3058(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_3058(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_3086)
static void C_ccall trf_3086(C_word c,C_word *av) C_noret;
static void C_ccall trf_3086(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3086(t0,t1);}

C_noret_decl(trf_3092)
static void C_ccall trf_3092(C_word c,C_word *av) C_noret;
static void C_ccall trf_3092(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3092(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3182)
static void C_ccall trf_3182(C_word c,C_word *av) C_noret;
static void C_ccall trf_3182(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3182(t0,t1);}

C_noret_decl(trf_3201)
static void C_ccall trf_3201(C_word c,C_word *av) C_noret;
static void C_ccall trf_3201(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3201(t0,t1,t2);}

C_noret_decl(trf_3249)
static void C_ccall trf_3249(C_word c,C_word *av) C_noret;
static void C_ccall trf_3249(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3249(t0,t1,t2);}

C_noret_decl(trf_3509)
static void C_ccall trf_3509(C_word c,C_word *av) C_noret;
static void C_ccall trf_3509(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3509(t0,t1,t2);}

C_noret_decl(trf_3994)
static void C_ccall trf_3994(C_word c,C_word *av) C_noret;
static void C_ccall trf_3994(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3994(t0,t1,t2);}

C_noret_decl(trf_4080)
static void C_ccall trf_4080(C_word c,C_word *av) C_noret;
static void C_ccall trf_4080(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4080(t0,t1);}

C_noret_decl(trf_4202)
static void C_ccall trf_4202(C_word c,C_word *av) C_noret;
static void C_ccall trf_4202(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4202(t0,t1,t2);}

C_noret_decl(trf_4264)
static void C_ccall trf_4264(C_word c,C_word *av) C_noret;
static void C_ccall trf_4264(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4264(t0,t1,t2);}

C_noret_decl(trf_4310)
static void C_ccall trf_4310(C_word c,C_word *av) C_noret;
static void C_ccall trf_4310(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4310(t0,t1,t2);}

C_noret_decl(trf_4344)
static void C_ccall trf_4344(C_word c,C_word *av) C_noret;
static void C_ccall trf_4344(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4344(t0,t1,t2,t3);}

C_noret_decl(trf_4392)
static void C_ccall trf_4392(C_word c,C_word *av) C_noret;
static void C_ccall trf_4392(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4392(t0,t1,t2);}

C_noret_decl(trf_4448)
static void C_ccall trf_4448(C_word c,C_word *av) C_noret;
static void C_ccall trf_4448(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4448(t0,t1,t2,t3);}

C_noret_decl(trf_4516)
static void C_ccall trf_4516(C_word c,C_word *av) C_noret;
static void C_ccall trf_4516(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4516(t0,t1,t2);}

C_noret_decl(trf_4595)
static void C_ccall trf_4595(C_word c,C_word *av) C_noret;
static void C_ccall trf_4595(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4595(t0,t1);}

C_noret_decl(trf_4697)
static void C_ccall trf_4697(C_word c,C_word *av) C_noret;
static void C_ccall trf_4697(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4697(t0,t1,t2);}

C_noret_decl(trf_4743)
static void C_ccall trf_4743(C_word c,C_word *av) C_noret;
static void C_ccall trf_4743(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4743(t0,t1,t2);}

C_noret_decl(trf_4789)
static void C_ccall trf_4789(C_word c,C_word *av) C_noret;
static void C_ccall trf_4789(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4789(t0,t1,t2);}

C_noret_decl(trf_4823)
static void C_ccall trf_4823(C_word c,C_word *av) C_noret;
static void C_ccall trf_4823(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4823(t0,t1,t2,t3);}

C_noret_decl(trf_4871)
static void C_ccall trf_4871(C_word c,C_word *av) C_noret;
static void C_ccall trf_4871(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4871(t0,t1,t2);}

C_noret_decl(trf_4919)
static void C_ccall trf_4919(C_word c,C_word *av) C_noret;
static void C_ccall trf_4919(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4919(t0,t1,t2,t3);}

C_noret_decl(trf_4971)
static void C_ccall trf_4971(C_word c,C_word *av) C_noret;
static void C_ccall trf_4971(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4971(t0,t1,t2);}

/* k1677 */
static void C_ccall f_1679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1679,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1682,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1680 in k1677 */
static void C_ccall f_1682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1682,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1685,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k1683 in k1680 in k1677 */
static void C_ccall f_1685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1685,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1688,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_1688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1688,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1691,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_support_toplevel(2,av2);}}

/* k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_1691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1691,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1694,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_compiler_toplevel(2,av2);}}

/* k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_1694(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,5)))){
C_save_and_reclaim((void *)f_1694,2,av);}
a=C_alloc(27);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_mutate(&lf[2] /* (set! chicken.compiler.compiler-syntax#length+ ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2775,tmp=(C_word)a,a+=2,tmp));
t5=C_set_block_item(lf[3] /* chicken.compiler.compiler-syntax#compiler-syntax-statistics */,0,C_SCHEME_END_OF_LIST);
t6=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#compiler-syntax-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2975,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate(&lf[8] /* (set! chicken.compiler.compiler-syntax#r-c-s ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2987,tmp=(C_word)a,a+=2,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3041,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4558,tmp=(C_word)a,a+=2,tmp);
/* compiler-syntax.scm:70: r-c-s */
f_2987(t8,lf[103],t9,lf[104]);}

/* chicken.compiler.compiler-syntax#length+ in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_fcall f_2775(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,0,4)))){
C_save_and_reclaim_args((void *)trf_2775,2,t1,t2);}
a=C_alloc(2);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2781,tmp=(C_word)a,a+=2,tmp);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=(
  f_2781(t2,t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* lp in chicken.compiler.compiler-syntax#length+ in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static C_word C_fcall f_2781(C_word t1,C_word t2,C_word t3){
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
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t4=t1;
t5=C_u_i_cdr(t4);
t6=C_fixnum_plus(t3,C_fix(1));
if(C_truep(C_i_pairp(t5))){
t7=C_u_i_cdr(t5);
t8=C_i_cdr(t2);
t9=C_fixnum_plus(t6,C_fix(1));
t10=C_eqp(t7,t8);
if(C_truep(C_i_not(t10))){
t12=t7;
t13=t8;
t14=t9;
t1=t12;
t2=t13;
t3=t14;
goto loop;}
else{
return(C_SCHEME_FALSE);}}
else{
return(t6);}}
else{
t4=t3;
return(t4);}}

/* ##sys#compiler-syntax-hook in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_2975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_2975,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2979,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:51: chicken.base#alist-ref */
t5=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=*((C_word*)lf[3]+1);
av2[4]=*((C_word*)lf[7]+1);
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}

/* k2977 in compiler-syntax-hook in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_2979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,4)))){
C_save_and_reclaim((void *)f_2979,2,av);}
a=C_alloc(32);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2983,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_s_a_i_plus(&a,2,t1,C_fix(1));
/* compiler-syntax.scm:53: chicken.base#alist-update! */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
av2[4]=*((C_word*)lf[3]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2981 in k2977 in compiler-syntax-hook in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_2983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2983,2,av);}
t2=C_mutate((C_word*)lf[3]+1 /* (set! chicken.compiler.compiler-syntax#compiler-syntax-statistics ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.compiler.compiler-syntax#r-c-s in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_fcall f_2987(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_2987,4,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3026,a[2]=t2,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3034,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:57: ##sys#er-transformer */
t7=*((C_word*)lf[14]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* g545 in k3028 in k3024 in chicken.compiler.compiler-syntax#r-c-s in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_fcall f_2992(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_2992,3,t0,t1,t2);}
/* compiler-syntax.scm:62: ##sys#put! */
t3=*((C_word*)lf[9]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[10];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* for-each-loop544 in k3028 in k3024 in chicken.compiler.compiler-syntax#r-c-s in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_fcall f_3001(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3001,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3011,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* compiler-syntax.scm:60: g545 */
t5=((C_word*)t0)[3];
f_2992(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3009 in for-each-loop544 in k3028 in k3024 in chicken.compiler.compiler-syntax#r-c-s in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3011,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3001(t3,((C_word*)t0)[4],t2);}

/* k3024 in chicken.compiler.compiler-syntax#r-c-s in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3026,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3030,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:59: scheme#append */
t4=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=*((C_word*)lf[12]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3028 in k3024 in chicken.compiler.compiler-syntax#r-c-s in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3030(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_3030,2,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2992,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[3];
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3001,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3001(t9,((C_word*)t0)[4],t5);}

/* k3032 in chicken.compiler.compiler-syntax#r-c-s in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3034,2,av);}
t2=C_i_car(((C_word*)t0)[2]);
/* compiler-syntax.scm:56: ##sys#ensure-transformer */
t3=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_3041,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3044,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4028,tmp=(C_word)a,a+=2,tmp);
/* compiler-syntax.scm:100: r-c-s */
f_2987(t2,lf[98],t3,lf[99]);}

/* k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_3044,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3047,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3964,tmp=(C_word)a,a+=2,tmp);
/* compiler-syntax.scm:142: r-c-s */
f_2987(t2,lf[86],t3,C_SCHEME_END_OF_LIST);}

/* k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3047(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(41,c,5)))){
C_save_and_reclaim((void *)f_3047,2,av);}
a=C_alloc(41);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3050,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3880,tmp=(C_word)a,a+=2,tmp);
t4=C_a_i_cons(&a,2,lf[75],lf[76]);
t5=C_a_i_cons(&a,2,lf[77],lf[78]);
t6=C_a_i_cons(&a,2,lf[38],lf[79]);
t7=C_a_i_cons(&a,2,lf[80],lf[81]);
t8=C_a_i_cons(&a,2,lf[72],lf[26]);
t9=C_a_i_cons(&a,2,lf[71],lf[19]);
t10=C_a_i_list(&a,6,t4,t5,t6,t7,t8,t9);
/* compiler-syntax.scm:149: r-c-s */
f_2987(t2,lf[82],t3,t10);}

/* k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_3050,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3053,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3853,tmp=(C_word)a,a+=2,tmp);
/* compiler-syntax.scm:166: r-c-s */
f_2987(t2,lf[69],t3,lf[70]);}

/* k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_3053,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3056,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3840,tmp=(C_word)a,a+=2,tmp);
/* compiler-syntax.scm:178: r-c-s */
f_2987(t2,lf[66],t3,lf[67]);}

/* k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,8)))){
C_save_and_reclaim((void *)f_3056,2,av);}
a=C_alloc(7);
t2=C_mutate(&lf[15] /* (set! chicken.compiler.compiler-syntax#compile-format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3058,tmp=(C_word)a,a+=2,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3614,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3735,tmp=(C_word)a,a+=2,tmp);
/* compiler-syntax.scm:277: r-c-s */
f_2987(t3,lf[62],t4,lf[63]);}

/* chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_fcall f_3058(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_3058,7,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(8);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3064,a[2]=t5,a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t6,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:189: chicken.base#call/cc */
t9=*((C_word*)lf[44]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t1;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3064,3,av);}
a=C_alloc(10);
t3=C_i_length(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(1)))){
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3606,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:192: chicken.base#symbol-append */
t5=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[43];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_fcall f_3086(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3086,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3089,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
if(C_truep(C_i_stringp(t4))){
t5=((C_word*)t0)[2];
t6=t2;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_u_i_car(t5);
f_3089(2,av2);}}
else{
/* compiler-syntax.scm:197: scheme#cadar */
t5=*((C_word*)lf[41]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[7];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3089(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,5)))){
C_save_and_reclaim((void *)f_3089,2,av);}
a=C_alloc(24);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3092,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_fix(0);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_i_string_length(t2);
t12=t11;
t13=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3164,a[2]=t2,a[3]=t10,a[4]=t5,a[5]=t6,a[6]=t8,a[7]=t12,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:210: r */
t14=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t14;
av2[1]=t13;
av2[2]=lf[40];
((C_proc)(void*)(*((C_word*)t14+1)))(3,av2);}}

/* fail in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_fcall f_3092(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3092,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3096,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:200: chicken.compiler.support#get-line */
t6=*((C_word*)lf[28]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3094 in fail in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3096,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3099,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3109,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:202: chicken.base#open-output-string */
t5=*((C_word*)lf[26]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k3097 in k3094 in fail in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3099,2,av);}
if(C_truep(((C_word*)t0)[2])){
/* compiler-syntax.scm:206: return */
t2=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3107 in k3094 in fail in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3109(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_3109,2,av);}
a=C_alloc(17);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_fix(2),C_SCHEME_TRUE,lf[17]);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3115,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3140,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[7])){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3143,a[2]=t6,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:203: chicken.base#open-output-string */
t8=*((C_word*)lf[26]+1);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
/* compiler-syntax.scm:202: ##sys#print */
t7=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=lf[27];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}

/* k3113 in k3107 in k3094 in fail in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3115,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3118,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:202: ##sys#write-char-0 */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(96);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3116 in k3113 in k3107 in k3094 in fail in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 in ... */
static void C_ccall f_3118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3118,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3121,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:202: ##sys#print */
t3=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3119 in k3116 in k3113 in k3107 in k3094 in fail in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in ... */
static void C_ccall f_3121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3121,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3124,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:202: ##sys#print */
t3=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[23];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3122 in k3119 in k3116 in k3113 in k3107 in k3094 in fail in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_ccall f_3124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3124,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3127,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:202: ##sys#print */
t3=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3125 in k3122 in k3119 in k3116 in k3113 in k3107 in k3094 in fail in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in ... */
static void C_ccall f_3127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3127,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3130,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:202: ##sys#print */
t3=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[22];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3128 in k3125 in k3122 in k3119 in k3116 in k3113 in k3107 in k3094 in fail in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in ... */
static void C_ccall f_3130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3130,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3133,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=t2;
av2[2]=*((C_word*)lf[20]+1);
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
C_apply(6,av2);}}

/* k3131 in k3128 in k3125 in k3122 in k3119 in k3116 in k3113 in k3107 in k3094 in fail in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in ... */
static void C_ccall f_3133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3133,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3136,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:202: chicken.base#get-output-string */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3134 in k3131 in k3128 in k3125 in k3122 in k3119 in k3116 in k3113 in k3107 in k3094 in fail in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in ... */
static void C_ccall f_3136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3136,2,av);}
/* compiler-syntax.scm:201: chicken.base#warning */
t2=*((C_word*)lf[18]+1);{
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

/* k3138 in k3107 in k3094 in fail in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3140,2,av);}
/* compiler-syntax.scm:202: ##sys#print */
t2=*((C_word*)lf[21]+1);{
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
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3141 in k3107 in k3094 in fail in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3143(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3143,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_fix(2),C_SCHEME_TRUE,lf[17]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3149,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:203: ##sys#write-char-0 */
t6=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_make_character(40);
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k3147 in k3141 in k3107 in k3094 in fail in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 in ... */
static void C_ccall f_3149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3149,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3152,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:203: ##sys#print */
t3=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3150 in k3147 in k3141 in k3107 in k3094 in fail in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in ... */
static void C_ccall f_3152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3152,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3155,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:203: ##sys#print */
t3=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[25];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3153 in k3150 in k3147 in k3141 in k3107 in k3094 in fail in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_ccall f_3155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3155,2,av);}
/* compiler-syntax.scm:203: chicken.base#get-output-string */
t2=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3164,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3167,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* compiler-syntax.scm:211: r */
t4=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[39];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3165 in k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3167,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3170,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* compiler-syntax.scm:212: r */
t4=((C_word*)t0)[12];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[38];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3168 in k3165 in k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3170(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(42,c,3)))){
C_save_and_reclaim((void *)f_3170,2,av);}
a=C_alloc(42);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3172,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t12=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3182,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp));
t13=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3201,a[2]=((C_word*)t0)[6],a[3]=t10,tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3239,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp));
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_3249,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[7],a[9]=t8,a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],a[12]=t4,a[13]=t16,a[14]=t10,a[15]=t6,a[16]=t2,tmp=(C_word)a,a+=17,tmp));
t18=((C_word*)t16)[1];
f_3249(t18,((C_word*)t0)[12],C_SCHEME_END_OF_LIST);}

/* fetch in k3168 in k3165 in k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static C_word C_fcall f_3172(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t1=C_i_string_ref(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_set_block_item(((C_word*)t0)[3],0,t2);
return(t1);}

/* next in k3168 in k3165 in k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_fcall f_3182(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3182,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
/* compiler-syntax.scm:219: fail */
t2=((C_word*)t0)[3];
f_3092(t2,t1,C_SCHEME_TRUE,lf[29],C_SCHEME_END_OF_LIST);}
else{
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* endchunk in k3168 in k3165 in k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_fcall f_3201(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_3201,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_i_length(t2);
t4=C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=C_i_car(t2);
t6=C_a_i_list(&a,3,lf[24],t5,((C_word*)t0)[2]);
/* compiler-syntax.scm:225: push */
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=(
  /* compiler-syntax.scm:225: push */
  f_3239(C_a_i(&a,3),((C_word*)((C_word*)t0)[3])[1],t6)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3232,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:228: ##sys#reverse-list->string */
t6=*((C_word*)lf[30]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3230 in endchunk in k3168 in k3165 in k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 in ... */
static void C_ccall f_3232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_3232,2,av);}
a=C_alloc(15);
t2=C_a_i_list(&a,4,lf[21],t1,C_SCHEME_FALSE,((C_word*)t0)[2]);
/* compiler-syntax.scm:225: push */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  /* compiler-syntax.scm:225: push */
  f_3239(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t2)
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* push in k3168 in k3165 in k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static C_word C_fcall f_3239(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t3);}

/* loop in k3168 in k3165 in k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_fcall f_3249(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_3249,3,t0,t1,t2);}
a=C_alloc(12);
t3=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(C_i_greater_or_equalp(t3,((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3258,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[10])[1]))){
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3258(2,av2);}}
else{
/* compiler-syntax.scm:234: fail */
t5=((C_word*)t0)[11];
f_3092(t5,t4,C_SCHEME_FALSE,lf[34],C_SCHEME_END_OF_LIST);}}
else{
t4=(
  /* compiler-syntax.scm:240: fetch */
  f_3172(((C_word*)((C_word*)t0)[12])[1])
);
t5=C_eqp(t4,C_make_character(126));
if(C_truep(t5)){
t6=(
  /* compiler-syntax.scm:242: fetch */
  f_3172(((C_word*)((C_word*)t0)[12])[1])
);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3313,a[2]=t7,a[3]=((C_word*)t0)[13],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[15],a[8]=((C_word*)t0)[16],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[2],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:243: endchunk */
t9=((C_word*)((C_word*)t0)[9])[1];
f_3201(t9,t8,t2);}
else{
t6=C_a_i_cons(&a,2,t4,t2);
/* compiler-syntax.scm:275: loop */
t10=t1;
t11=t6;
t1=t10;
t2=t11;
goto loop;}}}

/* k3256 in loop in k3168 in k3165 in k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 in ... */
static void C_ccall f_3258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3258,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3261,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:235: endchunk */
t3=((C_word*)((C_word*)t0)[8])[1];
f_3201(t3,t2,((C_word*)t0)[9]);}

/* k3259 in k3256 in loop in k3168 in k3165 in k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in ... */
static void C_ccall f_3261(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,2)))){
C_save_and_reclaim((void *)f_3261,2,av);}
a=C_alloc(33);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=C_a_i_list(&a,2,lf[31],((C_word*)t0)[4]);
t6=C_a_i_list(&a,4,lf[32],((C_word*)t0)[2],C_SCHEME_TRUE,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3284,a[2]=t7,a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:238: scheme#reverse */
t9=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)((C_word*)t0)[7])[1];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k3282 in k3259 in k3256 in loop in k3168 in k3165 in k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_ccall f_3284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_3284,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3311 in loop in k3168 in k3165 in k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 in ... */
static void C_ccall f_3313(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_3313,2,av);}
a=C_alloc(16);
t2=C_u_i_char_upcase(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3319,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
switch(t2){
case C_make_character(83):
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3336,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:245: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_3182(t5,t4);
case C_make_character(65):
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3353,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:246: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_3182(t5,t4);
case C_make_character(67):
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3370,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:247: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_3182(t5,t4);
case C_make_character(66):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3391,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:250: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_3182(t5,t4);
case C_make_character(79):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3412,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:254: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_3182(t5,t4);
case C_make_character(88):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3433,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:258: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_3182(t5,t4);
case C_make_character(33):
t4=C_a_i_list(&a,2,lf[35],((C_word*)t0)[5]);
t5=(
  /* compiler-syntax.scm:260: push */
  f_3239(C_a_i(&a,3),((C_word*)((C_word*)t0)[6])[1],t4)
);
/* compiler-syntax.scm:274: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_3249(t6,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
case C_make_character(63):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3455,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:262: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_3182(t5,t4);
case C_make_character(126):
t4=C_a_i_list(&a,3,lf[24],C_make_character(126),((C_word*)t0)[5]);
t5=(
  /* compiler-syntax.scm:265: push */
  f_3239(C_a_i(&a,3),((C_word*)((C_word*)t0)[6])[1],t4)
);
/* compiler-syntax.scm:274: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_3249(t6,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
default:
t4=C_eqp(t2,C_make_character(37));
t5=(C_truep(t4)?t4:C_eqp(t2,C_make_character(78)));
if(C_truep(t5)){
t6=C_a_i_list(&a,3,lf[24],C_make_character(10),((C_word*)t0)[5]);
t7=(
  /* compiler-syntax.scm:266: push */
  f_3239(C_a_i(&a,3),((C_word*)((C_word*)t0)[6])[1],t6)
);
/* compiler-syntax.scm:274: loop */
t8=((C_word*)((C_word*)t0)[3])[1];
f_3249(t8,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_u_i_char_whitespacep(((C_word*)t0)[2]))){
t6=(
  /* compiler-syntax.scm:269: fetch */
  f_3172(((C_word*)((C_word*)t0)[9])[1])
);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3509,a[2]=((C_word*)t0)[9],a[3]=t8,a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3509(t10,t3,t6);}
else{
/* compiler-syntax.scm:273: fail */
t6=((C_word*)t0)[11];
f_3092(t6,t3,C_SCHEME_TRUE,lf[37],C_a_i_list(&a,1,((C_word*)t0)[2]));}}}}

/* k3317 in k3311 in loop in k3168 in k3165 in k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in ... */
static void C_ccall f_3319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3319,2,av);}
/* compiler-syntax.scm:274: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3249(t2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}

/* k3334 in k3311 in loop in k3168 in k3165 in k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in ... */
static void C_ccall f_3336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3336,2,av);}
a=C_alloc(15);
t2=C_a_i_list(&a,4,lf[21],t1,C_SCHEME_TRUE,((C_word*)t0)[2]);
t3=(
  /* compiler-syntax.scm:245: push */
  f_3239(C_a_i(&a,3),((C_word*)((C_word*)t0)[3])[1],t2)
);
/* compiler-syntax.scm:274: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3249(t4,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k3351 in k3311 in loop in k3168 in k3165 in k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in ... */
static void C_ccall f_3353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3353,2,av);}
a=C_alloc(15);
t2=C_a_i_list(&a,4,lf[21],t1,C_SCHEME_FALSE,((C_word*)t0)[2]);
t3=(
  /* compiler-syntax.scm:246: push */
  f_3239(C_a_i(&a,3),((C_word*)((C_word*)t0)[3])[1],t2)
);
/* compiler-syntax.scm:274: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3249(t4,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k3368 in k3311 in loop in k3168 in k3165 in k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in ... */
static void C_ccall f_3370(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_3370,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,lf[24],t1,((C_word*)t0)[2]);
t3=(
  /* compiler-syntax.scm:247: push */
  f_3239(C_a_i(&a,3),((C_word*)((C_word*)t0)[3])[1],t2)
);
/* compiler-syntax.scm:274: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3249(t4,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k3389 in k3311 in loop in k3168 in k3165 in k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in ... */
static void C_ccall f_3391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_3391,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,3,((C_word*)t0)[2],t1,C_fix(2));
t3=C_a_i_list(&a,4,lf[21],t2,C_SCHEME_FALSE,((C_word*)t0)[3]);
t4=(
  /* compiler-syntax.scm:249: push */
  f_3239(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t3)
);
/* compiler-syntax.scm:274: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3249(t5,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* k3410 in k3311 in loop in k3168 in k3165 in k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in ... */
static void C_ccall f_3412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_3412,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,3,((C_word*)t0)[2],t1,C_fix(8));
t3=C_a_i_list(&a,4,lf[21],t2,C_SCHEME_FALSE,((C_word*)t0)[3]);
t4=(
  /* compiler-syntax.scm:253: push */
  f_3239(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t3)
);
/* compiler-syntax.scm:274: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3249(t5,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* k3431 in k3311 in loop in k3168 in k3165 in k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in ... */
static void C_ccall f_3433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_3433,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,3,((C_word*)t0)[2],t1,C_fix(16));
t3=C_a_i_list(&a,4,lf[21],t2,C_SCHEME_FALSE,((C_word*)t0)[3]);
t4=(
  /* compiler-syntax.scm:257: push */
  f_3239(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t3)
);
/* compiler-syntax.scm:274: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3249(t5,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* k3453 in k3311 in loop in k3168 in k3165 in k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in ... */
static void C_ccall f_3455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3455,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3458,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:263: next */
t4=((C_word*)((C_word*)t0)[6])[1];
f_3182(t4,t3);}

/* k3456 in k3453 in k3311 in loop in k3168 in k3165 in k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_ccall f_3458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_3458,2,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,5,lf[36],lf[20],((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=(
  /* compiler-syntax.scm:264: push */
  f_3239(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t2)
);
/* compiler-syntax.scm:274: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3249(t4,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* skip in k3311 in loop in k3168 in k3165 in k3162 in k3087 in k3084 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in ... */
static void C_fcall f_3509(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(29,0,2)))){
C_save_and_reclaim_args((void *)trf_3509,3,t0,t1,t2);}
a=C_alloc(29);
if(C_truep(C_u_i_char_whitespacep(t2))){
t3=(
  /* compiler-syntax.scm:271: fetch */
  f_3172(((C_word*)((C_word*)t0)[2])[1])
);
/* compiler-syntax.scm:271: skip */
t6=t1;
t7=t3;
t1=t6;
t2=t7;
goto loop;}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,C_s_a_i_minus(&a,2,t3,C_fix(1)));
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k3579 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3581,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3588,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:196: scheme#cadar */
t3=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];
f_3086(t2,C_SCHEME_FALSE);}}

/* k3586 in k3579 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3588,2,av);}
t2=((C_word*)t0)[2];
f_3086(t2,C_i_stringp(t1));}

/* k3590 in k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3592,2,av);}
t2=C_i_caar(((C_word*)t0)[2]);
/* compiler-syntax.scm:195: c */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3604 in a3063 in chicken.compiler.compiler-syntax#compile-format-string in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3606(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_3606,2,av);}
a=C_alloc(18);
if(C_truep(C_i_memq(t1,*((C_word*)lf[16]+1)))){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_stringp(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3086,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t5=t4;
f_3086(t5,t3);}
else{
t5=((C_word*)t0)[2];
t6=C_u_i_car(t5);
if(C_truep(C_i_listp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3581,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3592,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[9],a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:195: r */
t9=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[31];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t7=t4;
f_3086(t7,C_SCHEME_FALSE);}}}
else{
t2=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3612 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_3614,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3617,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3619,tmp=(C_word)a,a+=2,tmp);
/* compiler-syntax.scm:299: r-c-s */
f_2987(t2,lf[57],t3,lf[58]);}

/* k3615 in k3612 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3617,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3618 in k3612 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3619(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3619,5,av);}
a=C_alloc(7);
t5=C_i_length(t2);
t6=C_eqp(t5,C_fix(4));
t7=(C_truep(t6)?C_i_memq(lf[45],*((C_word*)lf[16]+1)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_cadr(t2);
t9=t8;
t10=C_i_caddr(t2);
t11=t10;
t12=C_i_cadddr(t2);
t13=t12;
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3638,a[2]=t11,a[3]=t13,a[4]=t9,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:306: r */
t15=t3;{
C_word *av2=av;
av2[0]=t15;
av2[1]=t14;
av2[2]=lf[56];
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}
else{
t8=t2;
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k3636 in a3618 in k3612 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3638,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3641,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:307: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[39];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3639 in k3636 in a3618 in k3612 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3641,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3644,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:308: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[55];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3642 in k3639 in k3636 in a3618 in k3612 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3644,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3647,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:309: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[54];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3645 in k3642 in k3639 in k3636 in a3618 in k3612 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3647,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3650,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:310: chicken.base#gensym */
t4=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3648 in k3645 in k3642 in k3639 in k3636 in a3618 in k3612 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3650,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3653,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:311: chicken.base#gensym */
t4=*((C_word*)lf[52]+1);{
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

/* k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in a3618 in k3612 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_3653,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3656,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:312: chicken.base#gensym */
t4=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in a3618 in k3612 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3656(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(138,c,1)))){
C_save_and_reclaim((void *)f_3656,2,av);}
a=C_alloc(138);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,2,lf[46],lf[47]);
t6=C_a_i_list(&a,3,lf[48],t1,t5);
t7=C_a_i_list(&a,2,lf[49],t6);
t8=C_a_i_list(&a,2,t1,t1);
t9=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[2]);
t10=C_a_i_list(&a,2,t8,t9);
t11=C_a_i_list(&a,2,((C_word*)t0)[5],t1);
t12=C_a_i_list(&a,3,lf[50],t1,C_fix(1));
t13=C_a_i_list(&a,3,lf[50],t1,C_fix(0));
t14=C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[2],t13);
t15=C_a_i_list(&a,4,lf[51],((C_word*)t0)[7],t12,t14);
t16=C_a_i_list(&a,4,((C_word*)t0)[8],t11,t15,((C_word*)t0)[2]);
t17=C_a_i_list(&a,4,((C_word*)t0)[9],((C_word*)t0)[7],t10,t16);
t18=((C_word*)t0)[10];{
C_word *av2=av;
av2[0]=t18;
av2[1]=C_a_i_list(&a,4,((C_word*)t0)[11],t4,t7,t17);
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}

/* a3734 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3735(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3735,5,av);}
a=C_alloc(7);
t5=C_i_length(t2);
t6=C_eqp(t5,C_fix(4));
t7=(C_truep(t6)?C_i_memq(lf[59],*((C_word*)lf[16]+1)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_cadr(t2);
t9=t8;
t10=C_i_caddr(t2);
t11=t10;
t12=C_i_cadddr(t2);
t13=t12;
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3754,a[2]=t13,a[3]=t9,a[4]=t11,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:284: r */
t15=t3;{
C_word *av2=av;
av2[0]=t15;
av2[1]=t14;
av2[2]=lf[56];
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}
else{
t8=t2;
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k3752 in a3734 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3754,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3757,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:285: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[39];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3755 in k3752 in a3734 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3757,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3760,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:286: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[54];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3758 in k3755 in k3752 in a3734 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3760,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3763,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:287: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[55];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3761 in k3758 in k3755 in k3752 in a3734 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3763,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3766,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:288: chicken.base#gensym */
t4=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[61];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3764 in k3761 in k3758 in k3755 in k3752 in a3734 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3766,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3769,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:289: chicken.base#gensym */
t4=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in a3734 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
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
if(C_unlikely(!C_demand(C_calculate_demand(117,c,1)))){
C_save_and_reclaim((void *)f_3769,2,av);}
a=C_alloc(117);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[46],lf[60]);
t5=C_a_i_list(&a,3,lf[48],t1,t4);
t6=C_a_i_list(&a,2,lf[49],t5);
t7=C_a_i_list(&a,2,t1,t1);
t8=C_a_i_list(&a,1,t7);
t9=C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t10=C_a_i_list(&a,3,lf[50],t1,C_fix(0));
t11=C_a_i_list(&a,3,lf[50],t1,C_fix(1));
t12=C_a_i_list(&a,3,lf[51],((C_word*)t0)[4],t11);
t13=C_a_i_list(&a,3,((C_word*)t0)[5],t10,t12);
t14=C_a_i_list(&a,4,((C_word*)t0)[6],t9,t13,((C_word*)t0)[7]);
t15=C_a_i_list(&a,4,((C_word*)t0)[8],((C_word*)t0)[4],t8,t14);
t16=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t16;
av2[1]=C_a_i_list(&a,4,((C_word*)t0)[10],t3,t6,t15);
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}

/* a3839 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,7)))){
C_save_and_reclaim((void *)f_3840,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3844,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cdr(t2);
/* compiler-syntax.scm:185: compile-format-string */
f_3058(t5,lf[64],lf[65],t2,t6,t3,t4);}

/* k3842 in a3839 in k3051 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3844,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a3852 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3853(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,7)))){
C_save_and_reclaim((void *)f_3853,5,av);}
a=C_alloc(4);
t5=C_i_length(t2);
if(C_truep(C_fixnum_greater_or_equal_p(t5,C_fix(3)))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3863,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cadr(t2);
t8=t2;
t9=C_u_i_cdr(t8);
t10=C_u_i_cdr(t9);
/* compiler-syntax.scm:174: compile-format-string */
f_3058(t6,lf[68],t7,t2,t10,t3,t4);}
else{
t6=t2;
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k3861 in a3852 in k3048 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3863,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?t1:((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3879 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3880,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3884,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:156: chicken.base#gensym */
t6=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[40];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3882 in a3879 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3884(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_3884,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3887,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(((C_word*)t0)[4]);
t5=C_eqp(t4,lf[73]);
t6=(C_truep(t5)?lf[74]:lf[17]);
t7=((C_word*)t0)[4];
t8=C_u_i_cdr(t7);
/* compiler-syntax.scm:157: compile-format-string */
f_3058(t3,t6,t2,((C_word*)t0)[4],t8,((C_word*)t0)[3],((C_word*)t0)[5]);}

/* k3885 in k3882 in a3879 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3887,2,av);}
a=C_alloc(6);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3897,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:161: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[39];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[5];
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3895 in k3885 in k3882 in a3879 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3897,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3921,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:161: r */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[72];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3907 in k3919 in k3895 in k3885 in k3882 in a3879 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_3909,2,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,4,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3919 in k3895 in k3885 in k3882 in a3879 in k3045 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3921(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_3921,2,av);}
a=C_alloc(19);
t2=C_a_i_list(&a,1,t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3909,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t5,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:163: r */
t7=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[71];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* a3963 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3964(C_word c,C_word *av){
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
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3964,5,av);}
a=C_alloc(5);
t5=C_i_length(t2);
t6=C_fixnum_greaterp(t5,C_fix(1));
t7=(C_truep(t6)?C_i_memq(lf[83],*((C_word*)lf[16]+1)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3974,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:145: r */
t9=t3;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[85];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t8=t2;
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k3972 in a3963 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3974,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3981,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:146: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[84];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3979 in k3972 in a3963 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3981(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_3981,2,av);}
a=C_alloc(14);
t2=t1;
t3=C_a_i_list(&a,1,((C_word*)t0)[2]);
t4=t3;
t5=C_i_cdr(((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3992,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3994,a[2]=t8,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_3994(t10,t6,t5);}

/* k3990 in k3979 in k3972 in a3963 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_3992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_3992,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* foldr1075 in k3979 in k3972 in a3963 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_fcall f_3994(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3994,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4012,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_slot(t2,C_fix(1));
t8=t5;
t9=t6;
t1=t8;
t2=t9;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4010 in foldr1075 in k3979 in k3972 in a3963 in k3042 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4012,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a4027 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4028(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4028,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4032,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:102: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[39];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k4030 in a4027 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4032,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4035,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:103: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[55];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4035,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4038,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:104: r */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[97];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4038,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4041,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:105: chicken.base#gensym */
t4=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4041,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4044,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:106: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[96];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4044,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4047,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:107: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[95];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4047,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4050,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:108: chicken.base#gensym */
t4=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_4050,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4053,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:109: chicken.base#gensym */
t4=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_4053,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4056,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* compiler-syntax.scm:110: chicken.base#gensym */
t4=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_4056,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4059,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* compiler-syntax.scm:111: r */
t4=((C_word*)t0)[12];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[31];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_4059,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4062,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:112: r */
t4=((C_word*)t0)[13];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[94];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_4062,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4065,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:113: r */
t3=((C_word*)t0)[14];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[84];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_4065,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4068,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:114: r */
t3=((C_word*)t0)[14];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[93];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4066 in k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_4068,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4071,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:115: r */
t4=((C_word*)t0)[14];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[54];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4069 in k4066 in k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 in ... */
static void C_ccall f_4071(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_4071,2,av);}
a=C_alloc(20);
t2=t1;
t3=C_i_cddr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4080,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=t2,a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],tmp=(C_word)a,a+=17,tmp);
if(C_truep(C_i_memq(lf[91],*((C_word*)lf[92]+1)))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4555,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:118: length+ */
f_2775(t6,((C_word*)t0)[2]);}
else{
t6=t5;
f_4080(t6,C_SCHEME_FALSE);}}

/* k4078 in k4069 in k4066 in k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in ... */
static void C_fcall f_4080(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,0,3)))){
C_save_and_reclaim_args((void *)trf_4080,2,t0,t1);}
a=C_alloc(29);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[87]);
t7=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4094,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[2],tmp=(C_word)a,a+=17,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4516,a[2]=t4,a[3]=t9,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4516(t11,t7,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[7];
t3=((C_word*)t0)[10];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4092 in k4078 in k4069 in k4066 in k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_ccall f_4094(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(70,c,4)))){
C_save_and_reclaim((void *)f_4094,2,av);}
a=C_alloc(70);
t2=t1;
t3=C_a_i_list(&a,1,lf[88]);
t4=C_a_i_list(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t5=C_a_i_list(&a,3,((C_word*)t0)[3],t3,t4);
t6=C_a_i_list(&a,2,((C_word*)t0)[4],t5);
t7=C_a_i_list(&a,1,t6);
t8=t7;
t9=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t10=t9;
t11=C_i_cadr(((C_word*)t0)[6]);
t12=C_a_i_list(&a,2,((C_word*)t0)[7],t11);
t13=t12;
t14=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t15=t14;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=((C_word*)t16)[1];
t18=C_i_check_list_2(t2,lf[87]);
t19=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_4446,a[2]=t13,a[3]=t10,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=t8,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[3],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[4],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[5],a[17]=((C_word*)t0)[15],a[18]=t2,tmp=(C_word)a,a+=19,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4448,a[2]=t16,a[3]=t21,a[4]=t17,tmp=(C_word)a,a+=5,tmp));
t23=((C_word*)t21)[1];
f_4448(t23,t19,t2,((C_word*)t0)[16]);}

/* k4115 in k4444 in k4092 in k4078 in k4069 in k4066 in k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in ... */
static void C_ccall f_4117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_4117,2,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* g917 in k4444 in k4092 in k4078 in k4069 in k4066 in k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in ... */
static C_word C_fcall f_4122(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],lf[87]);
t3=C_a_i_list(&a,3,lf[48],t1,t2);
return(C_a_i_list(&a,2,lf[49],t3));}

/* k4135 in k4444 in k4092 in k4078 in k4069 in k4066 in k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in ... */
static void C_ccall f_4137(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_4137,2,av);}
a=C_alloc(29);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4152,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=t2,a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4344,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4344(t11,t7,((C_word*)t0)[15],((C_word*)t0)[15]);}

/* k4150 in k4135 in k4444 in k4092 in k4078 in k4069 in k4066 in k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in ... */
static void C_ccall f_4152(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_4152,2,av);}
a=C_alloc(33);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4301,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4308,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t2,a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4310,a[2]=t7,a[3]=t5,a[4]=t10,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_4310(t12,t8,((C_word*)t0)[16]);}

/* k4198 in k4260 in k4306 in k4150 in k4135 in k4444 in k4092 in k4078 in k4069 in k4066 in k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in ... */
static void C_ccall f_4200(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(57,c,3)))){
C_save_and_reclaim((void *)f_4200,2,av);}
a=C_alloc(57);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[51],t2);
t4=C_a_i_list(&a,5,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t3);
t5=C_a_i_list(&a,3,lf[50],((C_word*)t0)[7],C_fix(1));
t6=C_a_i_list(&a,4,((C_word*)t0)[8],((C_word*)t0)[9],t4,t5);
t7=C_a_i_list(&a,4,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[10],t6);
t8=C_a_i_list(&a,1,t7);
/* compiler-syntax.scm:31: ##sys#append */
t9=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[11];
av2[2]=((C_word*)t0)[12];
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* map-loop1032 in k4260 in k4306 in k4150 in k4135 in k4444 in k4092 in k4078 in k4069 in k4066 in k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in ... */
static void C_fcall f_4202(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_4202,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[50],t3,C_fix(1));
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

/* k4260 in k4306 in k4150 in k4135 in k4444 in k4092 in k4078 in k4069 in k4066 in k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in ... */
static void C_ccall f_4262(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(73,c,3)))){
C_save_and_reclaim((void *)f_4262,2,av);}
a=C_alloc(73);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t4=C_a_i_list(&a,3,((C_word*)t0)[4],t2,t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],t4);
t6=C_a_i_list(&a,1,t5);
t7=t6;
t8=C_a_i_list(&a,4,lf[89],((C_word*)t0)[6],C_fix(1),((C_word*)t0)[5]);
t9=t8;
t10=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);
t11=t10;
t12=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t13=t12;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=((C_word*)t14)[1];
t16=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4200,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=t7,a[5]=t9,a[6]=t11,a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],tmp=(C_word)a,a+=13,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4202,a[2]=t14,a[3]=t18,a[4]=t15,tmp=(C_word)a,a+=5,tmp));
t20=((C_word*)t18)[1];
f_4202(t20,t16,((C_word*)t0)[16]);}

/* map-loop1002 in k4306 in k4150 in k4135 in k4444 in k4092 in k4078 in k4069 in k4066 in k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in ... */
static void C_fcall f_4264(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_4264,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[50],t3,C_fix(0));
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

/* g978 in k4150 in k4135 in k4444 in k4092 in k4078 in k4069 in k4066 in k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in ... */
static C_word C_fcall f_4301(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* k4306 in k4150 in k4135 in k4444 in k4092 in k4078 in k4069 in k4066 in k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in ... */
static void C_ccall f_4308(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,3)))){
C_save_and_reclaim((void *)f_4308,2,av);}
a=C_alloc(32);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4262,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t3,a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4264,a[2]=t6,a[3]=t10,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_4264(t12,t8,((C_word*)t0)[16]);}

/* map-loop972 in k4150 in k4135 in k4444 in k4092 in k4078 in k4069 in k4066 in k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in ... */
static void C_fcall f_4310(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_4310,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* compiler-syntax.scm:128: g978 */
  f_4301(C_a_i(&a,6),((C_word*)t0)[2],t3)
);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t5);
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
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop941 in k4135 in k4444 in k4092 in k4078 in k4069 in k4066 in k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in ... */
static void C_fcall f_4344(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4344,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t12=C_slot(t2,C_fix(1));
t13=C_slot(t3,C_fix(1));
t15=t1;
t16=t12;
t17=t13;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop911 in k4444 in k4092 in k4078 in k4069 in k4066 in k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in ... */
static void C_fcall f_4392(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,0,2)))){
C_save_and_reclaim_args((void *)trf_4392,3,t0,t1,t2);}
a=C_alloc(24);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* compiler-syntax.scm:124: g917 */
  f_4122(C_a_i(&a,21),((C_word*)t0)[2],t3)
);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t5);
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
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4444 in k4092 in k4078 in k4069 in k4066 in k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in k1686 in ... */
static void C_ccall f_4446(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(44,c,3)))){
C_save_and_reclaim((void *)f_4446,2,av);}
a=C_alloc(44);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4117,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4122,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4137,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[15],a[11]=((C_word*)t0)[4],a[12]=((C_word*)t0)[16],a[13]=((C_word*)t0)[17],a[14]=t5,a[15]=((C_word*)t0)[18],tmp=(C_word)a,a+=16,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4392,a[2]=t10,a[3]=t8,a[4]=t13,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_4392(t15,t11,((C_word*)t0)[18]);}

/* map-loop880 in k4092 in k4078 in k4069 in k4066 in k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in k1686 in ... */
static void C_fcall f_4448(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4448,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t12=C_slot(t2,C_fix(1));
t13=C_slot(t3,C_fix(1));
t15=t1;
t16=t12;
t17=t13;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop850 in k4078 in k4069 in k4066 in k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_fcall f_4516(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_4516,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4541,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_list(&a,1,t4);
/* compiler-syntax.scm:119: chicken.base#gensym */
t6=*((C_word*)lf[52]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4539 in map-loop850 in k4078 in k4069 in k4066 in k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in k1686 in ... */
static void C_ccall f_4541(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4541,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4516(t6,((C_word*)t0)[5],t5);}

/* k4553 in k4069 in k4066 in k4063 in k4060 in k4057 in k4054 in k4051 in k4048 in k4045 in k4042 in k4039 in k4036 in k4033 in k4030 in a4027 in k3039 in k1692 in k1689 in k1686 in k1683 in k1680 in ... */
static void C_ccall f_4555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4555,2,av);}
t2=((C_word*)t0)[2];
f_4080(t2,C_i_greaterp(t1,C_fix(2)));}

/* a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4558,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4562,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:72: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[39];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4562,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4565,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:73: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[55];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4565,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4568,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:74: r */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[102];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4568,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4571,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:75: chicken.base#gensym */
t4=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4571,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4574,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:76: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[94];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4574,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4577,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:77: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[31];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4577,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4580,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:78: r */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[93];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_4580,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4583,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:79: r */
t4=((C_word*)t0)[10];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[54];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_4583,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4586,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:80: r */
t4=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[84];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_4586,2,av);}
a=C_alloc(16);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4595,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_memq(lf[101],*((C_word*)lf[92]+1)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5010,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:83: length+ */
f_2775(t5,((C_word*)t0)[2]);}
else{
t5=t4;
f_4595(t5,C_SCHEME_FALSE);}}

/* k4593 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_fcall f_4595(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,0,3)))){
C_save_and_reclaim_args((void *)trf_4595,2,t0,t1);}
a=C_alloc(25);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[87]);
t7=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4609,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[2],tmp=(C_word)a,a+=13,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4971,a[2]=t4,a[3]=t9,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4971(t11,t7,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4607 in k4593 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4609(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_4609,2,av);}
a=C_alloc(31);
t2=t1;
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,((C_word*)t0)[3],t3);
t5=t4;
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=C_i_check_list_2(t2,lf[87]);
t11=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4917,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4919,a[2]=t8,a[3]=t13,a[4]=t9,tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_4919(t15,t11,t2,((C_word*)t0)[12]);}

/* k4622 in k4915 in k4607 in k4593 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4624,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* g682 in k4915 in k4607 in k4593 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static C_word C_fcall f_4629(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],lf[100]);
t3=C_a_i_list(&a,3,lf[48],t1,t2);
return(C_a_i_list(&a,2,lf[49],t3));}

/* k4642 in k4915 in k4607 in k4593 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4644(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_4644,2,av);}
a=C_alloc(24);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4659,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4823,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4823(t11,t7,((C_word*)t0)[10],((C_word*)t0)[10]);}

/* k4657 in k4642 in k4915 in k4607 in k4593 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4659(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_4659,2,av);}
a=C_alloc(28);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4780,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4787,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t2,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4789,a[2]=t7,a[3]=t5,a[4]=t10,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_4789(t12,t8,((C_word*)t0)[11]);}

/* k4693 in k4739 in k4785 in k4657 in k4642 in k4915 in k4607 in k4593 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_ccall f_4695(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,c,3)))){
C_save_and_reclaim((void *)f_4695,2,av);}
a=C_alloc(39);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[51],t2);
t4=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,3,((C_word*)t0)[5],((C_word*)t0)[6],t4);
t6=C_a_i_list(&a,4,((C_word*)t0)[7],((C_word*)t0)[2],((C_word*)t0)[8],t5);
t7=C_a_i_list(&a,1,t6);
/* compiler-syntax.scm:31: ##sys#append */
t8=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=((C_word*)t0)[9];
av2[2]=((C_word*)t0)[10];
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* map-loop797 in k4739 in k4785 in k4657 in k4642 in k4915 in k4607 in k4593 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_fcall f_4697(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_4697,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[50],t3,C_fix(1));
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

/* k4739 in k4785 in k4657 in k4642 in k4915 in k4607 in k4593 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in ... */
static void C_ccall f_4741(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_4741,2,av);}
a=C_alloc(26);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4695,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4697,a[2]=t6,a[3]=t10,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_4697(t12,t8,((C_word*)t0)[11]);}

/* map-loop767 in k4785 in k4657 in k4642 in k4915 in k4607 in k4593 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in ... */
static void C_fcall f_4743(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_4743,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[50],t3,C_fix(0));
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

/* g743 in k4657 in k4642 in k4915 in k4607 in k4593 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 in ... */
static C_word C_fcall f_4780(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* k4785 in k4657 in k4642 in k4915 in k4607 in k4593 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 in ... */
static void C_ccall f_4787(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_4787,2,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4741,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4743,a[2]=t6,a[3]=t10,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_4743(t12,t8,((C_word*)t0)[11]);}

/* map-loop737 in k4657 in k4642 in k4915 in k4607 in k4593 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 in ... */
static void C_fcall f_4789(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_4789,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* compiler-syntax.scm:91: g743 */
  f_4780(C_a_i(&a,6),((C_word*)t0)[2],t3)
);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t5);
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
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop706 in k4642 in k4915 in k4607 in k4593 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_fcall f_4823(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4823,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t12=C_slot(t2,C_fix(1));
t13=C_slot(t3,C_fix(1));
t15=t1;
t16=t12;
t17=t13;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop676 in k4915 in k4607 in k4593 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_fcall f_4871(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,0,2)))){
C_save_and_reclaim_args((void *)trf_4871,3,t0,t1,t2);}
a=C_alloc(24);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* compiler-syntax.scm:87: g682 */
  f_4629(C_a_i(&a,21),((C_word*)t0)[2],t3)
);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t5);
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
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4915 in k4607 in k4593 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4917(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,3)))){
C_save_and_reclaim((void *)f_4917,2,av);}
a=C_alloc(35);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4624,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4629,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4644,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[4],a[9]=t4,a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4871,a[2]=t9,a[3]=t7,a[4]=t12,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_4871(t14,t10,((C_word*)t0)[12]);}

/* map-loop645 in k4607 in k4593 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_fcall f_4919(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4919,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t12=C_slot(t2,C_fix(1));
t13=C_slot(t3,C_fix(1));
t15=t1;
t16=t12;
t17=t13;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop615 in k4593 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_fcall f_4971(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_4971,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4996,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_list(&a,1,t4);
/* compiler-syntax.scm:84: chicken.base#gensym */
t6=*((C_word*)lf[52]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4994 in map-loop615 in k4593 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_4996(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4996,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4971(t6,((C_word*)t0)[5],t5);}

/* k5008 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in k4563 in k4560 in a4557 in k1692 in k1689 in k1686 in k1683 in k1680 in k1677 */
static void C_ccall f_5010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5010,2,av);}
t2=((C_word*)t0)[2];
f_4595(t2,C_i_greaterp(t1,C_fix(2)));}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("compiler-syntax"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_compiler_2dsyntax_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(1003))){
C_save(t1);
C_rereclaim2(1003*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,105);
lf[0]=C_h_intern(&lf[0],15, C_text("compiler-syntax"));
lf[1]=C_h_intern(&lf[1],33, C_text("chicken.compiler.compiler-syntax#"));
lf[3]=C_h_intern(&lf[3],59, C_text("chicken.compiler.compiler-syntax#compiler-syntax-statistics"));
lf[4]=C_h_intern(&lf[4],24, C_text("\003syscompiler-syntax-hook"));
lf[5]=C_h_intern(&lf[5],26, C_text("chicken.base#alist-update!"));
lf[6]=C_h_intern(&lf[6],22, C_text("chicken.base#alist-ref"));
lf[7]=C_h_intern(&lf[7],10, C_text("scheme#eq\077"));
lf[9]=C_h_intern(&lf[9],8, C_text("\003sysput!"));
lf[10]=C_h_intern(&lf[10],24, C_text("\010compilercompiler-syntax"));
lf[11]=C_h_intern(&lf[11],13, C_text("scheme#append"));
lf[12]=C_h_intern(&lf[12],29, C_text("\003sysdefault-macro-environment"));
lf[13]=C_h_intern(&lf[13],22, C_text("\003sysensure-transformer"));
lf[14]=C_h_intern(&lf[14],18, C_text("\003syser-transformer"));
lf[16]=C_h_intern(&lf[16],39, C_text("chicken.compiler.core#extended-bindings"));
lf[17]=C_h_intern(&lf[17],6, C_text("format"));
lf[18]=C_h_intern(&lf[18],20, C_text("chicken.base#warning"));
lf[19]=C_h_intern(&lf[19],30, C_text("chicken.base#get-output-string"));
lf[20]=C_h_intern(&lf[20],22, C_text("chicken.format#fprintf"));
lf[21]=C_h_intern(&lf[21],9, C_text("\003sysprint"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002, "));
lf[23]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024\047, in format string "));
lf[24]=C_h_intern(&lf[24],16, C_text("\003syswrite-char-0"));
lf[25]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002) "));
lf[26]=C_h_intern(&lf[26],31, C_text("chicken.base#open-output-string"));
lf[27]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[28]=C_h_intern(&lf[28],33, C_text("chicken.compiler.support#get-line"));
lf[29]=C_decode_literal(C_heaptop,C_text("\376B\000\000/too few arguments to formatted output procedure"));
lf[30]=C_h_intern(&lf[30],24, C_text("\003sysreverse-list->string"));
lf[31]=C_h_intern(&lf[31],5, C_text("quote"));
lf[32]=C_h_intern(&lf[32],21, C_text("\003syscheck-output-port"));
lf[33]=C_h_intern(&lf[33],14, C_text("scheme#reverse"));
lf[34]=C_decode_literal(C_heaptop,C_text("\376B\000\0000too many arguments to formatted output procedure"));
lf[35]=C_h_intern(&lf[35],16, C_text("\003sysflush-output"));
lf[36]=C_h_intern(&lf[36],9, C_text("\003sysapply"));
lf[37]=C_decode_literal(C_heaptop,C_text("\376B\000\000$illegal format-string character `~c\047"));
lf[38]=C_h_intern(&lf[38],14, C_text("number->string"));
lf[39]=C_h_intern(&lf[39],3, C_text("let"));
lf[40]=C_h_intern(&lf[40],3, C_text("out"));
lf[41]=C_h_intern(&lf[41],12, C_text("scheme#cadar"));
lf[42]=C_h_intern(&lf[42],26, C_text("chicken.base#symbol-append"));
lf[43]=C_h_intern(&lf[43],15, C_text("chicken.format#"));
lf[44]=C_h_intern(&lf[44],20, C_text("chicken.base#call/cc"));
lf[45]=C_h_intern(&lf[45],18, C_text("chicken.base#foldl"));
lf[46]=C_h_intern(&lf[46],10, C_text("\004corequote"));
lf[47]=C_h_intern(&lf[47],5, C_text("foldl"));
lf[48]=C_h_intern(&lf[48],14, C_text("\003syscheck-list"));
lf[49]=C_h_intern(&lf[49],10, C_text("\004corecheck"));
lf[50]=C_h_intern(&lf[50],8, C_text("\003sysslot"));
lf[51]=C_h_intern(&lf[51],8, C_text("\004coreapp"));
lf[52]=C_h_intern(&lf[52],19, C_text("chicken.base#gensym"));
lf[53]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005foldl"));
lf[54]=C_h_intern(&lf[54],5, C_text("pair\077"));
lf[55]=C_h_intern(&lf[55],2, C_text("if"));
lf[56]=C_h_intern(&lf[56],4, C_text("let\052"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\022chicken.base#foldl\376\377\016"));
lf[58]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005pair\077\376\001\000\000\014scheme#pair\077\376\377\016"));
lf[59]=C_h_intern(&lf[59],18, C_text("chicken.base#foldr"));
lf[60]=C_h_intern(&lf[60],5, C_text("foldr"));
lf[61]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005foldr"));
lf[62]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\022chicken.base#foldr\376\377\016"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005pair\077\376\001\000\000\014scheme#pair\077\376\377\016"));
lf[64]=C_h_intern(&lf[64],6, C_text("printf"));
lf[65]=C_h_intern(&lf[65],19, C_text("\003sysstandard-output"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\025chicken.format#printf\376\377\016"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007display\376\001\000\000\016scheme#display\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005write\376\001\000\000\014scheme#write\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\016number->string\376\001\000\000\025scheme#number->string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012write-char\376\001"
"\000\000\021scheme#write-char\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022open-output-string\376\001\000\000\037chicken.base#open-outp"
"ut-string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021get-output-string\376\001\000\000\036chicken.base#get-output-string\376\377\016"));
lf[68]=C_h_intern(&lf[68],7, C_text("fprintf"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\026chicken.format#fprintf\376\377\016"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007display\376\001\000\000\016scheme#display\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005write\376\001\000\000\014scheme#write\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\016number->string\376\001\000\000\025scheme#number->string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012write-char\376\001"
"\000\000\021scheme#write-char\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022open-output-string\376\001\000\000\037chicken.base#open-outp"
"ut-string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021get-output-string\376\001\000\000\036chicken.base#get-output-string\376\377\016"));
lf[71]=C_h_intern(&lf[71],17, C_text("get-output-string"));
lf[72]=C_h_intern(&lf[72],18, C_text("open-output-string"));
lf[73]=C_h_intern(&lf[73],22, C_text("chicken.format#sprintf"));
lf[74]=C_h_intern(&lf[74],7, C_text("sprintf"));
lf[75]=C_h_intern(&lf[75],7, C_text("display"));
lf[76]=C_h_intern(&lf[76],14, C_text("scheme#display"));
lf[77]=C_h_intern(&lf[77],5, C_text("write"));
lf[78]=C_h_intern(&lf[78],12, C_text("scheme#write"));
lf[79]=C_h_intern(&lf[79],21, C_text("scheme#number->string"));
lf[80]=C_h_intern(&lf[80],10, C_text("write-char"));
lf[81]=C_h_intern(&lf[81],17, C_text("scheme#write-char"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\026chicken.format#sprintf\376\003\000\000\002\376\001\000\000\025chicken.format#format\376\377\016"));
lf[83]=C_h_intern(&lf[83],14, C_text("chicken.base#o"));
lf[84]=C_h_intern(&lf[84],6, C_text("lambda"));
lf[85]=C_h_intern(&lf[85],3, C_text("tmp"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016chicken.base#o\376\377\016"));
lf[87]=C_h_intern(&lf[87],3, C_text("map"));
lf[88]=C_h_intern(&lf[88],14, C_text("\004coreundefined"));
lf[89]=C_h_intern(&lf[89],11, C_text("\003syssetslot"));
lf[90]=C_h_intern(&lf[90],10, C_text("\003sysappend"));
lf[91]=C_h_intern(&lf[91],10, C_text("scheme#map"));
lf[92]=C_h_intern(&lf[92],39, C_text("chicken.compiler.core#standard-bindings"));
lf[93]=C_h_intern(&lf[93],3, C_text("and"));
lf[94]=C_h_intern(&lf[94],5, C_text("begin"));
lf[95]=C_h_intern(&lf[95],4, C_text("set!"));
lf[96]=C_h_intern(&lf[96],4, C_text("cons"));
lf[97]=C_h_intern(&lf[97],8, C_text("map-loop"));
lf[98]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\012scheme#map\376\003\000\000\002\376\001\000\000\007\003sysmap\376\377\016"));
lf[99]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005pair\077\376\001\000\000\014scheme#pair\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004cons\376\001\000\000\013scheme#cons\376\377\016"));
lf[100]=C_h_intern(&lf[100],8, C_text("for-each"));
lf[101]=C_h_intern(&lf[101],15, C_text("scheme#for-each"));
lf[102]=C_h_intern(&lf[102],13, C_text("for-each-loop"));
lf[103]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\017scheme#for-each\376\003\000\000\002\376\001\000\000\014\003sysfor-each\376\377\016"));
lf[104]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005pair\077\376\001\000\000\014scheme#pair\077\376\377\016"));
C_register_lf2(lf,105,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1679,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[172] = {
{C_text("f_1679:compiler_2dsyntax_2escm"),(void*)f_1679},
{C_text("f_1682:compiler_2dsyntax_2escm"),(void*)f_1682},
{C_text("f_1685:compiler_2dsyntax_2escm"),(void*)f_1685},
{C_text("f_1688:compiler_2dsyntax_2escm"),(void*)f_1688},
{C_text("f_1691:compiler_2dsyntax_2escm"),(void*)f_1691},
{C_text("f_1694:compiler_2dsyntax_2escm"),(void*)f_1694},
{C_text("f_2775:compiler_2dsyntax_2escm"),(void*)f_2775},
{C_text("f_2781:compiler_2dsyntax_2escm"),(void*)f_2781},
{C_text("f_2975:compiler_2dsyntax_2escm"),(void*)f_2975},
{C_text("f_2979:compiler_2dsyntax_2escm"),(void*)f_2979},
{C_text("f_2983:compiler_2dsyntax_2escm"),(void*)f_2983},
{C_text("f_2987:compiler_2dsyntax_2escm"),(void*)f_2987},
{C_text("f_2992:compiler_2dsyntax_2escm"),(void*)f_2992},
{C_text("f_3001:compiler_2dsyntax_2escm"),(void*)f_3001},
{C_text("f_3011:compiler_2dsyntax_2escm"),(void*)f_3011},
{C_text("f_3026:compiler_2dsyntax_2escm"),(void*)f_3026},
{C_text("f_3030:compiler_2dsyntax_2escm"),(void*)f_3030},
{C_text("f_3034:compiler_2dsyntax_2escm"),(void*)f_3034},
{C_text("f_3041:compiler_2dsyntax_2escm"),(void*)f_3041},
{C_text("f_3044:compiler_2dsyntax_2escm"),(void*)f_3044},
{C_text("f_3047:compiler_2dsyntax_2escm"),(void*)f_3047},
{C_text("f_3050:compiler_2dsyntax_2escm"),(void*)f_3050},
{C_text("f_3053:compiler_2dsyntax_2escm"),(void*)f_3053},
{C_text("f_3056:compiler_2dsyntax_2escm"),(void*)f_3056},
{C_text("f_3058:compiler_2dsyntax_2escm"),(void*)f_3058},
{C_text("f_3064:compiler_2dsyntax_2escm"),(void*)f_3064},
{C_text("f_3086:compiler_2dsyntax_2escm"),(void*)f_3086},
{C_text("f_3089:compiler_2dsyntax_2escm"),(void*)f_3089},
{C_text("f_3092:compiler_2dsyntax_2escm"),(void*)f_3092},
{C_text("f_3096:compiler_2dsyntax_2escm"),(void*)f_3096},
{C_text("f_3099:compiler_2dsyntax_2escm"),(void*)f_3099},
{C_text("f_3109:compiler_2dsyntax_2escm"),(void*)f_3109},
{C_text("f_3115:compiler_2dsyntax_2escm"),(void*)f_3115},
{C_text("f_3118:compiler_2dsyntax_2escm"),(void*)f_3118},
{C_text("f_3121:compiler_2dsyntax_2escm"),(void*)f_3121},
{C_text("f_3124:compiler_2dsyntax_2escm"),(void*)f_3124},
{C_text("f_3127:compiler_2dsyntax_2escm"),(void*)f_3127},
{C_text("f_3130:compiler_2dsyntax_2escm"),(void*)f_3130},
{C_text("f_3133:compiler_2dsyntax_2escm"),(void*)f_3133},
{C_text("f_3136:compiler_2dsyntax_2escm"),(void*)f_3136},
{C_text("f_3140:compiler_2dsyntax_2escm"),(void*)f_3140},
{C_text("f_3143:compiler_2dsyntax_2escm"),(void*)f_3143},
{C_text("f_3149:compiler_2dsyntax_2escm"),(void*)f_3149},
{C_text("f_3152:compiler_2dsyntax_2escm"),(void*)f_3152},
{C_text("f_3155:compiler_2dsyntax_2escm"),(void*)f_3155},
{C_text("f_3164:compiler_2dsyntax_2escm"),(void*)f_3164},
{C_text("f_3167:compiler_2dsyntax_2escm"),(void*)f_3167},
{C_text("f_3170:compiler_2dsyntax_2escm"),(void*)f_3170},
{C_text("f_3172:compiler_2dsyntax_2escm"),(void*)f_3172},
{C_text("f_3182:compiler_2dsyntax_2escm"),(void*)f_3182},
{C_text("f_3201:compiler_2dsyntax_2escm"),(void*)f_3201},
{C_text("f_3232:compiler_2dsyntax_2escm"),(void*)f_3232},
{C_text("f_3239:compiler_2dsyntax_2escm"),(void*)f_3239},
{C_text("f_3249:compiler_2dsyntax_2escm"),(void*)f_3249},
{C_text("f_3258:compiler_2dsyntax_2escm"),(void*)f_3258},
{C_text("f_3261:compiler_2dsyntax_2escm"),(void*)f_3261},
{C_text("f_3284:compiler_2dsyntax_2escm"),(void*)f_3284},
{C_text("f_3313:compiler_2dsyntax_2escm"),(void*)f_3313},
{C_text("f_3319:compiler_2dsyntax_2escm"),(void*)f_3319},
{C_text("f_3336:compiler_2dsyntax_2escm"),(void*)f_3336},
{C_text("f_3353:compiler_2dsyntax_2escm"),(void*)f_3353},
{C_text("f_3370:compiler_2dsyntax_2escm"),(void*)f_3370},
{C_text("f_3391:compiler_2dsyntax_2escm"),(void*)f_3391},
{C_text("f_3412:compiler_2dsyntax_2escm"),(void*)f_3412},
{C_text("f_3433:compiler_2dsyntax_2escm"),(void*)f_3433},
{C_text("f_3455:compiler_2dsyntax_2escm"),(void*)f_3455},
{C_text("f_3458:compiler_2dsyntax_2escm"),(void*)f_3458},
{C_text("f_3509:compiler_2dsyntax_2escm"),(void*)f_3509},
{C_text("f_3581:compiler_2dsyntax_2escm"),(void*)f_3581},
{C_text("f_3588:compiler_2dsyntax_2escm"),(void*)f_3588},
{C_text("f_3592:compiler_2dsyntax_2escm"),(void*)f_3592},
{C_text("f_3606:compiler_2dsyntax_2escm"),(void*)f_3606},
{C_text("f_3614:compiler_2dsyntax_2escm"),(void*)f_3614},
{C_text("f_3617:compiler_2dsyntax_2escm"),(void*)f_3617},
{C_text("f_3619:compiler_2dsyntax_2escm"),(void*)f_3619},
{C_text("f_3638:compiler_2dsyntax_2escm"),(void*)f_3638},
{C_text("f_3641:compiler_2dsyntax_2escm"),(void*)f_3641},
{C_text("f_3644:compiler_2dsyntax_2escm"),(void*)f_3644},
{C_text("f_3647:compiler_2dsyntax_2escm"),(void*)f_3647},
{C_text("f_3650:compiler_2dsyntax_2escm"),(void*)f_3650},
{C_text("f_3653:compiler_2dsyntax_2escm"),(void*)f_3653},
{C_text("f_3656:compiler_2dsyntax_2escm"),(void*)f_3656},
{C_text("f_3735:compiler_2dsyntax_2escm"),(void*)f_3735},
{C_text("f_3754:compiler_2dsyntax_2escm"),(void*)f_3754},
{C_text("f_3757:compiler_2dsyntax_2escm"),(void*)f_3757},
{C_text("f_3760:compiler_2dsyntax_2escm"),(void*)f_3760},
{C_text("f_3763:compiler_2dsyntax_2escm"),(void*)f_3763},
{C_text("f_3766:compiler_2dsyntax_2escm"),(void*)f_3766},
{C_text("f_3769:compiler_2dsyntax_2escm"),(void*)f_3769},
{C_text("f_3840:compiler_2dsyntax_2escm"),(void*)f_3840},
{C_text("f_3844:compiler_2dsyntax_2escm"),(void*)f_3844},
{C_text("f_3853:compiler_2dsyntax_2escm"),(void*)f_3853},
{C_text("f_3863:compiler_2dsyntax_2escm"),(void*)f_3863},
{C_text("f_3880:compiler_2dsyntax_2escm"),(void*)f_3880},
{C_text("f_3884:compiler_2dsyntax_2escm"),(void*)f_3884},
{C_text("f_3887:compiler_2dsyntax_2escm"),(void*)f_3887},
{C_text("f_3897:compiler_2dsyntax_2escm"),(void*)f_3897},
{C_text("f_3909:compiler_2dsyntax_2escm"),(void*)f_3909},
{C_text("f_3921:compiler_2dsyntax_2escm"),(void*)f_3921},
{C_text("f_3964:compiler_2dsyntax_2escm"),(void*)f_3964},
{C_text("f_3974:compiler_2dsyntax_2escm"),(void*)f_3974},
{C_text("f_3981:compiler_2dsyntax_2escm"),(void*)f_3981},
{C_text("f_3992:compiler_2dsyntax_2escm"),(void*)f_3992},
{C_text("f_3994:compiler_2dsyntax_2escm"),(void*)f_3994},
{C_text("f_4012:compiler_2dsyntax_2escm"),(void*)f_4012},
{C_text("f_4028:compiler_2dsyntax_2escm"),(void*)f_4028},
{C_text("f_4032:compiler_2dsyntax_2escm"),(void*)f_4032},
{C_text("f_4035:compiler_2dsyntax_2escm"),(void*)f_4035},
{C_text("f_4038:compiler_2dsyntax_2escm"),(void*)f_4038},
{C_text("f_4041:compiler_2dsyntax_2escm"),(void*)f_4041},
{C_text("f_4044:compiler_2dsyntax_2escm"),(void*)f_4044},
{C_text("f_4047:compiler_2dsyntax_2escm"),(void*)f_4047},
{C_text("f_4050:compiler_2dsyntax_2escm"),(void*)f_4050},
{C_text("f_4053:compiler_2dsyntax_2escm"),(void*)f_4053},
{C_text("f_4056:compiler_2dsyntax_2escm"),(void*)f_4056},
{C_text("f_4059:compiler_2dsyntax_2escm"),(void*)f_4059},
{C_text("f_4062:compiler_2dsyntax_2escm"),(void*)f_4062},
{C_text("f_4065:compiler_2dsyntax_2escm"),(void*)f_4065},
{C_text("f_4068:compiler_2dsyntax_2escm"),(void*)f_4068},
{C_text("f_4071:compiler_2dsyntax_2escm"),(void*)f_4071},
{C_text("f_4080:compiler_2dsyntax_2escm"),(void*)f_4080},
{C_text("f_4094:compiler_2dsyntax_2escm"),(void*)f_4094},
{C_text("f_4117:compiler_2dsyntax_2escm"),(void*)f_4117},
{C_text("f_4122:compiler_2dsyntax_2escm"),(void*)f_4122},
{C_text("f_4137:compiler_2dsyntax_2escm"),(void*)f_4137},
{C_text("f_4152:compiler_2dsyntax_2escm"),(void*)f_4152},
{C_text("f_4200:compiler_2dsyntax_2escm"),(void*)f_4200},
{C_text("f_4202:compiler_2dsyntax_2escm"),(void*)f_4202},
{C_text("f_4262:compiler_2dsyntax_2escm"),(void*)f_4262},
{C_text("f_4264:compiler_2dsyntax_2escm"),(void*)f_4264},
{C_text("f_4301:compiler_2dsyntax_2escm"),(void*)f_4301},
{C_text("f_4308:compiler_2dsyntax_2escm"),(void*)f_4308},
{C_text("f_4310:compiler_2dsyntax_2escm"),(void*)f_4310},
{C_text("f_4344:compiler_2dsyntax_2escm"),(void*)f_4344},
{C_text("f_4392:compiler_2dsyntax_2escm"),(void*)f_4392},
{C_text("f_4446:compiler_2dsyntax_2escm"),(void*)f_4446},
{C_text("f_4448:compiler_2dsyntax_2escm"),(void*)f_4448},
{C_text("f_4516:compiler_2dsyntax_2escm"),(void*)f_4516},
{C_text("f_4541:compiler_2dsyntax_2escm"),(void*)f_4541},
{C_text("f_4555:compiler_2dsyntax_2escm"),(void*)f_4555},
{C_text("f_4558:compiler_2dsyntax_2escm"),(void*)f_4558},
{C_text("f_4562:compiler_2dsyntax_2escm"),(void*)f_4562},
{C_text("f_4565:compiler_2dsyntax_2escm"),(void*)f_4565},
{C_text("f_4568:compiler_2dsyntax_2escm"),(void*)f_4568},
{C_text("f_4571:compiler_2dsyntax_2escm"),(void*)f_4571},
{C_text("f_4574:compiler_2dsyntax_2escm"),(void*)f_4574},
{C_text("f_4577:compiler_2dsyntax_2escm"),(void*)f_4577},
{C_text("f_4580:compiler_2dsyntax_2escm"),(void*)f_4580},
{C_text("f_4583:compiler_2dsyntax_2escm"),(void*)f_4583},
{C_text("f_4586:compiler_2dsyntax_2escm"),(void*)f_4586},
{C_text("f_4595:compiler_2dsyntax_2escm"),(void*)f_4595},
{C_text("f_4609:compiler_2dsyntax_2escm"),(void*)f_4609},
{C_text("f_4624:compiler_2dsyntax_2escm"),(void*)f_4624},
{C_text("f_4629:compiler_2dsyntax_2escm"),(void*)f_4629},
{C_text("f_4644:compiler_2dsyntax_2escm"),(void*)f_4644},
{C_text("f_4659:compiler_2dsyntax_2escm"),(void*)f_4659},
{C_text("f_4695:compiler_2dsyntax_2escm"),(void*)f_4695},
{C_text("f_4697:compiler_2dsyntax_2escm"),(void*)f_4697},
{C_text("f_4741:compiler_2dsyntax_2escm"),(void*)f_4741},
{C_text("f_4743:compiler_2dsyntax_2escm"),(void*)f_4743},
{C_text("f_4780:compiler_2dsyntax_2escm"),(void*)f_4780},
{C_text("f_4787:compiler_2dsyntax_2escm"),(void*)f_4787},
{C_text("f_4789:compiler_2dsyntax_2escm"),(void*)f_4789},
{C_text("f_4823:compiler_2dsyntax_2escm"),(void*)f_4823},
{C_text("f_4871:compiler_2dsyntax_2escm"),(void*)f_4871},
{C_text("f_4917:compiler_2dsyntax_2escm"),(void*)f_4917},
{C_text("f_4919:compiler_2dsyntax_2escm"),(void*)f_4919},
{C_text("f_4971:compiler_2dsyntax_2escm"),(void*)f_4971},
{C_text("f_4996:compiler_2dsyntax_2escm"),(void*)f_4996},
{C_text("f_5010:compiler_2dsyntax_2escm"),(void*)f_5010},
{C_text("toplevel:compiler_2dsyntax_2escm"),(void*)C_compiler_2dsyntax_toplevel},
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
o|hiding unexported module binding: chicken.compiler.compiler-syntax#partition 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#span 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#take 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#drop 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#split-at 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#append-map 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#every 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#any 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#cons* 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#concatenate 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#delete 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#first 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#second 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#third 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#fourth 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#fifth 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#delete-duplicates 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#alist-cons 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#filter 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#filter-map 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#remove 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#unzip1 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#last 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#list-index 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#lset-difference/eq? 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#lset-union/eq? 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#lset-intersection/eq? 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#list-tabulate 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#lset<=/eq? 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#lset=/eq? 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#length+ 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#find 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#find-tail 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#iota 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#make-list 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#posq 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#posv 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#r-c-s 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#define-internal-compiler-syntax 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#compile-format-string 
S|applied compiler syntax:
S|  sprintf		2
S|  for-each		1
S|  foldl		3
S|  map		17
S|  foldr		4
o|eliminated procedure checks: 220 
o|specializations:
o|  1 (chicken.base#sub1 *)
o|  11 (scheme#eqv? (or eof null fixnum char boolean symbol) *)
o|  1 (scheme#>= * *)
o|  1 (scheme#= fixnum fixnum)
o|  2 (##sys#check-output-port * * *)
o|  1 (scheme#cddr (pair * pair))
o|  2 (scheme#>= fixnum fixnum)
o|  2 (scheme#> * *)
o|  1 (chicken.base#add1 *)
o|  1 (scheme#eqv? * *)
o|  19 (##sys#check-list (or pair list) *)
o|  24 (scheme#cdr pair)
o|  10 (scheme#car pair)
(o e)|safe calls: 532 
(o e)|assignments to immediate values: 2 
o|safe globals: (chicken.compiler.compiler-syntax#r-c-s ##sys#compiler-syntax-hook chicken.compiler.compiler-syntax#compiler-syntax-statistics chicken.compiler.compiler-syntax#posv chicken.compiler.compiler-syntax#posq chicken.compiler.compiler-syntax#make-list chicken.compiler.compiler-syntax#iota chicken.compiler.compiler-syntax#find-tail chicken.compiler.compiler-syntax#find chicken.compiler.compiler-syntax#length+ chicken.compiler.compiler-syntax#lset=/eq? chicken.compiler.compiler-syntax#lset<=/eq? chicken.compiler.compiler-syntax#list-tabulate chicken.compiler.compiler-syntax#lset-intersection/eq? chicken.compiler.compiler-syntax#lset-union/eq? chicken.compiler.compiler-syntax#lset-difference/eq? chicken.compiler.compiler-syntax#lset-adjoin/eq? chicken.compiler.compiler-syntax#list-index chicken.compiler.compiler-syntax#last chicken.compiler.compiler-syntax#unzip1 chicken.compiler.compiler-syntax#remove chicken.compiler.compiler-syntax#filter-map chicken.compiler.compiler-syntax#filter chicken.compiler.compiler-syntax#alist-cons chicken.compiler.compiler-syntax#delete-duplicates chicken.compiler.compiler-syntax#fifth chicken.compiler.compiler-syntax#fourth chicken.compiler.compiler-syntax#third chicken.compiler.compiler-syntax#second chicken.compiler.compiler-syntax#first chicken.compiler.compiler-syntax#delete chicken.compiler.compiler-syntax#concatenate chicken.compiler.compiler-syntax#cons* chicken.compiler.compiler-syntax#any chicken.compiler.compiler-syntax#every chicken.compiler.compiler-syntax#append-map chicken.compiler.compiler-syntax#split-at chicken.compiler.compiler-syntax#drop chicken.compiler.compiler-syntax#take chicken.compiler.compiler-syntax#span chicken.compiler.compiler-syntax#partition) 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#partition 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#span 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#drop 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#split-at 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#append-map 
o|inlining procedure: k2076 
o|inlining procedure: k2076 
o|inlining procedure: k2107 
o|inlining procedure: k2107 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#cons* 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#concatenate 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#first 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#second 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#third 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#fourth 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#fifth 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#delete-duplicates 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#alist-cons 
o|inlining procedure: k2324 
o|inlining procedure: k2324 
o|inlining procedure: k2316 
o|inlining procedure: k2316 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#filter-map 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#remove 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#unzip1 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#last 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#list-index 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#lset-intersection/eq? 
o|inlining procedure: k2715 
o|inlining procedure: k2715 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#lset=/eq? 
o|inlining procedure: k2783 
o|inlining procedure: k2806 
o|inlining procedure: k2806 
o|inlining procedure: k2783 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#find 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#find-tail 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#iota 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#make-list 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#posq 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#posv 
o|inlining procedure: k3003 
o|inlining procedure: k3003 
o|inlining procedure: k3066 
o|merged explicitly consed rest parameter: args1137 
o|inlining procedure: k3100 
o|inlining procedure: k3100 
o|substituted constant variable: a3111 
o|substituted constant variable: a3112 
o|substituted constant variable: a3145 
o|substituted constant variable: a3146 
o|inlining procedure: k3138 
o|inlining procedure: k3138 
o|inlining procedure: k3184 
o|consed rest parameter at call site: "(compiler-syntax.scm:219) fail1134" 3 
o|inlining procedure: k3184 
o|inlining procedure: k3203 
o|inlining procedure: k3213 
o|inlining procedure: k3213 
o|substituted constant variable: a3233 
o|inlining procedure: k3203 
o|inlining procedure: k3078 
o|inlining procedure: k3251 
o|consed rest parameter at call site: "(compiler-syntax.scm:234) fail1134" 3 
o|inlining procedure: k3251 
o|inlining procedure: k3317 
o|inlining procedure: k3317 
o|inlining procedure: k3354 
o|inlining procedure: k3354 
o|inlining procedure: k3392 
o|inlining procedure: k3392 
o|inlining procedure: k3434 
o|inlining procedure: k3434 
o|inlining procedure: k3466 
o|inlining procedure: k3466 
o|inlining procedure: k3495 
o|inlining procedure: k3511 
o|inlining procedure: k3511 
o|inlining procedure: k3495 
o|consed rest parameter at call site: "(compiler-syntax.scm:273) fail1134" 3 
o|substituted constant variable: a3533 
o|substituted constant variable: a3535 
o|substituted constant variable: a3537 
o|substituted constant variable: a3539 
o|substituted constant variable: a3541 
o|substituted constant variable: a3543 
o|substituted constant variable: a3545 
o|substituted constant variable: a3547 
o|substituted constant variable: a3549 
o|substituted constant variable: a3551 
o|substituted constant variable: a3553 
o|inlining procedure: k3078 
o|inlining procedure: k3570 
o|inlining procedure: k3570 
o|inlining procedure: k3066 
o|substituted constant variable: a3611 
o|inlining procedure: k3621 
o|inlining procedure: k3621 
o|inlining procedure: k3737 
o|inlining procedure: k3737 
o|inlining procedure: k3845 
o|inlining procedure: k3845 
o|inlining procedure: k3855 
o|inlining procedure: k3855 
o|substituted constant variable: a3878 
o|inlining procedure: k3888 
o|inlining procedure: k3888 
o|inlining procedure: k3966 
o|inlining procedure: k3996 
o|inlining procedure: k3996 
o|inlining procedure: k3966 
o|inlining procedure: k4075 
o|inlining procedure: k4204 
o|contracted procedure: "(compiler-syntax.scm:138) g10381047" 
o|inlining procedure: k4204 
o|inlining procedure: k4266 
o|contracted procedure: "(compiler-syntax.scm:132) g10081017" 
o|inlining procedure: k4266 
o|inlining procedure: k4312 
o|inlining procedure: k4312 
o|inlining procedure: k4346 
o|inlining procedure: k4346 
o|inlining procedure: k4394 
o|inlining procedure: k4394 
o|inlining procedure: k4450 
o|inlining procedure: k4450 
o|inlining procedure: k4518 
o|contracted procedure: "(compiler-syntax.scm:119) g856865" 
o|inlining procedure: k4518 
o|inlining procedure: k4075 
o|substituted constant variable: a4556 
o|inlining procedure: k4590 
o|inlining procedure: k4699 
o|contracted procedure: "(compiler-syntax.scm:97) g803812" 
o|inlining procedure: k4699 
o|inlining procedure: k4745 
o|contracted procedure: "(compiler-syntax.scm:94) g773782" 
o|inlining procedure: k4745 
o|inlining procedure: k4791 
o|inlining procedure: k4791 
o|inlining procedure: k4825 
o|inlining procedure: k4825 
o|inlining procedure: k4873 
o|inlining procedure: k4873 
o|inlining procedure: k4921 
o|inlining procedure: k4921 
o|inlining procedure: k4973 
o|contracted procedure: "(compiler-syntax.scm:84) g621630" 
o|inlining procedure: k4973 
o|inlining procedure: k4590 
o|substituted constant variable: a5011 
o|replaced variables: 349 
o|removed binding forms: 176 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#every 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#any 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#filter 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#list-tabulate 
o|substituted constant variable: r28075024 
o|substituted constant variable: r31395033 
o|substituted constant variable: r31395033 
o|converted assignments to bindings: (fail1134) 
o|substituted constant variable: r30795068 
o|substituted constant variable: r35715070 
o|substituted constant variable: r30675071 
o|simplifications: ((let . 1)) 
o|replaced variables: 3 
o|removed binding forms: 389 
o|replaced variables: 10 
o|removed binding forms: 13 
o|removed binding forms: 10 
o|simplifications: ((if . 10) (##core#call . 319)) 
o|  call simplifications:
o|    scheme#cddr	2
o|    ##sys#check-list	4
o|    ##sys#setslot	14
o|    chicken.fixnum#fx>
o|    scheme#list	5
o|    chicken.fixnum#fx=	2
o|    scheme#cadr	5
o|    scheme#caddr	2
o|    scheme#cadddr	2
o|    chicken.fixnum#fx>=	2
o|    scheme#memq	6
o|    scheme#list?
o|    scheme#caar
o|    scheme#string?	3
o|    scheme#string-length
o|    scheme#char-upcase
o|    scheme#char-whitespace?	2
o|    ##sys#cons	24
o|    scheme#length	6
o|    ##sys#list	95
o|    scheme#null?	2
o|    scheme#string-ref
o|    ##sys#apply
o|    scheme#car	5
o|    scheme#cons	31
o|    ##sys#slot	54
o|    scheme#pair?	23
o|    scheme#cdr	4
o|    chicken.fixnum#fx+	3
o|    scheme#eq?	15
o|    scheme#not
o|contracted procedure: k2786 
o|contracted procedure: k2790 
o|contracted procedure: k2796 
o|contracted procedure: k2800 
o|contracted procedure: k2803 
o|contracted procedure: k2816 
o|contracted procedure: k2809 
o|contracted procedure: k2989 
o|contracted procedure: k3006 
o|contracted procedure: k3016 
o|contracted procedure: k3020 
o|contracted procedure: k3036 
o|contracted procedure: k3608 
o|contracted procedure: k3069 
o|contracted procedure: k3075 
o|contracted procedure: k3600 
o|contracted procedure: k3081 
o|contracted procedure: k3159 
o|contracted procedure: k3174 
o|contracted procedure: k3178 
o|contracted procedure: k3187 
o|contracted procedure: k3193 
o|contracted procedure: k3197 
o|contracted procedure: k3206 
o|contracted procedure: k3235 
o|contracted procedure: k3216 
o|contracted procedure: k3223 
o|inlining procedure: k3213 
o|inlining procedure: k3213 
o|contracted procedure: k3242 
o|contracted procedure: k3290 
o|contracted procedure: k3270 
o|contracted procedure: k3286 
o|contracted procedure: k3278 
o|contracted procedure: k3274 
o|contracted procedure: k3266 
o|contracted procedure: k3293 
o|contracted procedure: k3305 
o|contracted procedure: k3314 
o|contracted procedure: k3323 
o|contracted procedure: k3330 
o|contracted procedure: k3340 
o|contracted procedure: k3347 
o|contracted procedure: k3357 
o|contracted procedure: k3364 
o|contracted procedure: k3374 
o|contracted procedure: k3385 
o|contracted procedure: k3381 
o|contracted procedure: k3395 
o|contracted procedure: k3406 
o|contracted procedure: k3402 
o|contracted procedure: k3416 
o|contracted procedure: k3427 
o|contracted procedure: k3423 
o|contracted procedure: k3437 
o|contracted procedure: k3444 
o|contracted procedure: k3450 
o|contracted procedure: k3463 
o|contracted procedure: k3469 
o|contracted procedure: k3476 
o|contracted procedure: k3482 
o|contracted procedure: k3485 
o|contracted procedure: k3492 
o|contracted procedure: k3498 
o|contracted procedure: k3514 
o|contracted procedure: k3558 
o|contracted procedure: k3561 
o|contracted procedure: k3573 
o|contracted procedure: k3594 
o|contracted procedure: k3731 
o|contracted procedure: k3724 
o|contracted procedure: k3624 
o|contracted procedure: k3627 
o|contracted procedure: k3630 
o|contracted procedure: k3633 
o|contracted procedure: k3717 
o|contracted procedure: k3721 
o|contracted procedure: k3661 
o|contracted procedure: k3713 
o|contracted procedure: k3709 
o|contracted procedure: k3665 
o|contracted procedure: k3701 
o|contracted procedure: k3705 
o|contracted procedure: k3673 
o|contracted procedure: k3681 
o|contracted procedure: k3689 
o|contracted procedure: k3697 
o|contracted procedure: k3693 
o|contracted procedure: k3685 
o|contracted procedure: k3677 
o|contracted procedure: k3669 
o|contracted procedure: k3836 
o|contracted procedure: k3829 
o|contracted procedure: k3740 
o|contracted procedure: k3743 
o|contracted procedure: k3746 
o|contracted procedure: k3749 
o|contracted procedure: k3826 
o|contracted procedure: k3774 
o|contracted procedure: k3822 
o|contracted procedure: k3818 
o|contracted procedure: k3778 
o|contracted procedure: k3814 
o|contracted procedure: k3786 
o|contracted procedure: k3794 
o|contracted procedure: k3802 
o|contracted procedure: k3810 
o|contracted procedure: k3806 
o|contracted procedure: k3798 
o|contracted procedure: k3790 
o|contracted procedure: k3782 
o|contracted procedure: k3849 
o|contracted procedure: k3875 
o|contracted procedure: k3858 
o|contracted procedure: k3868 
o|contracted procedure: k3915 
o|contracted procedure: k3911 
o|contracted procedure: k3899 
o|contracted procedure: k3903 
o|contracted procedure: k3932 
o|contracted procedure: k3928 
o|contracted procedure: k3923 
o|contracted procedure: k3940 
o|contracted procedure: k3944 
o|contracted procedure: k3948 
o|contracted procedure: k3952 
o|contracted procedure: k3956 
o|contracted procedure: k3960 
o|contracted procedure: k3936 
o|contracted procedure: k4024 
o|contracted procedure: k4017 
o|contracted procedure: k3969 
o|contracted procedure: k3983 
o|contracted procedure: k3987 
o|contracted procedure: k3999 
o|contracted procedure: k4006 
o|contracted procedure: k4014 
o|contracted procedure: k4072 
o|contracted procedure: k4081 
o|contracted procedure: k4089 
o|contracted procedure: k4508 
o|contracted procedure: k4512 
o|contracted procedure: k4504 
o|contracted procedure: k4500 
o|contracted procedure: k4099 
o|contracted procedure: k4426 
o|contracted procedure: k4496 
o|contracted procedure: k4434 
o|contracted procedure: k4438 
o|contracted procedure: k4441 
o|contracted procedure: k4430 
o|contracted procedure: k4111 
o|contracted procedure: k4107 
o|contracted procedure: k4103 
o|contracted procedure: k4119 
o|contracted procedure: k4132 
o|contracted procedure: k4128 
o|contracted procedure: k4147 
o|contracted procedure: k4298 
o|contracted procedure: k4158 
o|contracted procedure: k4252 
o|contracted procedure: k4244 
o|contracted procedure: k4248 
o|contracted procedure: k4240 
o|contracted procedure: k4236 
o|contracted procedure: k4170 
o|contracted procedure: k4174 
o|contracted procedure: k4178 
o|contracted procedure: k4190 
o|contracted procedure: k4186 
o|contracted procedure: k4182 
o|contracted procedure: k4162 
o|contracted procedure: k4166 
o|contracted procedure: k4154 
o|contracted procedure: k4143 
o|contracted procedure: k4139 
o|contracted procedure: k4207 
o|contracted procedure: k4229 
o|contracted procedure: k4225 
o|contracted procedure: k4210 
o|contracted procedure: k4213 
o|contracted procedure: k4221 
o|contracted procedure: k4269 
o|contracted procedure: k4291 
o|contracted procedure: k4287 
o|contracted procedure: k4272 
o|contracted procedure: k4275 
o|contracted procedure: k4283 
o|contracted procedure: k4315 
o|contracted procedure: k4318 
o|contracted procedure: k4321 
o|contracted procedure: k4329 
o|contracted procedure: k4337 
o|contracted procedure: k4385 
o|contracted procedure: k4349 
o|contracted procedure: k4375 
o|contracted procedure: k4379 
o|contracted procedure: k4371 
o|contracted procedure: k4352 
o|contracted procedure: k4355 
o|contracted procedure: k4363 
o|contracted procedure: k4367 
o|contracted procedure: k4397 
o|contracted procedure: k4400 
o|contracted procedure: k4403 
o|contracted procedure: k4411 
o|contracted procedure: k4419 
o|contracted procedure: k4489 
o|contracted procedure: k4453 
o|contracted procedure: k4479 
o|contracted procedure: k4483 
o|contracted procedure: k4475 
o|contracted procedure: k4456 
o|contracted procedure: k4459 
o|contracted procedure: k4467 
o|contracted procedure: k4471 
o|contracted procedure: k4521 
o|contracted procedure: k4524 
o|contracted procedure: k4527 
o|contracted procedure: k4535 
o|contracted procedure: k4543 
o|contracted procedure: k4549 
o|contracted procedure: k4587 
o|contracted procedure: k4596 
o|contracted procedure: k4604 
o|contracted procedure: k4967 
o|contracted procedure: k4905 
o|contracted procedure: k4909 
o|contracted procedure: k4912 
o|contracted procedure: k4618 
o|contracted procedure: k4614 
o|contracted procedure: k4626 
o|contracted procedure: k4639 
o|contracted procedure: k4635 
o|contracted procedure: k4654 
o|contracted procedure: k4777 
o|contracted procedure: k4665 
o|contracted procedure: k4731 
o|contracted procedure: k4673 
o|contracted procedure: k4685 
o|contracted procedure: k4681 
o|contracted procedure: k4677 
o|contracted procedure: k4669 
o|contracted procedure: k4661 
o|contracted procedure: k4650 
o|contracted procedure: k4646 
o|contracted procedure: k4702 
o|contracted procedure: k4724 
o|contracted procedure: k4720 
o|contracted procedure: k4705 
o|contracted procedure: k4708 
o|contracted procedure: k4716 
o|contracted procedure: k4748 
o|contracted procedure: k4770 
o|contracted procedure: k4766 
o|contracted procedure: k4751 
o|contracted procedure: k4754 
o|contracted procedure: k4762 
o|contracted procedure: k4794 
o|contracted procedure: k4797 
o|contracted procedure: k4800 
o|contracted procedure: k4808 
o|contracted procedure: k4816 
o|contracted procedure: k4864 
o|contracted procedure: k4828 
o|contracted procedure: k4854 
o|contracted procedure: k4858 
o|contracted procedure: k4850 
o|contracted procedure: k4831 
o|contracted procedure: k4834 
o|contracted procedure: k4842 
o|contracted procedure: k4846 
o|contracted procedure: k4876 
o|contracted procedure: k4879 
o|contracted procedure: k4882 
o|contracted procedure: k4890 
o|contracted procedure: k4898 
o|contracted procedure: k4960 
o|contracted procedure: k4924 
o|contracted procedure: k4950 
o|contracted procedure: k4954 
o|contracted procedure: k4946 
o|contracted procedure: k4927 
o|contracted procedure: k4930 
o|contracted procedure: k4938 
o|contracted procedure: k4942 
o|contracted procedure: k4976 
o|contracted procedure: k4979 
o|contracted procedure: k4982 
o|contracted procedure: k4990 
o|contracted procedure: k4998 
o|contracted procedure: k5004 
o|simplifications: ((let . 35)) 
o|removed binding forms: 290 
o|replaced variables: 94 
o|removed binding forms: 1 
o|removed binding forms: 59 
o|direct leaf routine/allocation: lp427 0 
o|direct leaf routine/allocation: fetch1174 0 
o|direct leaf routine/allocation: push1177 3 
o|direct leaf routine/allocation: g917926 21 
o|direct leaf routine/allocation: g978987 6 
o|direct leaf routine/allocation: g682691 21 
o|direct leaf routine/allocation: g743752 6 
o|converted assignments to bindings: (lp427) 
o|contracted procedure: "(compiler-syntax.scm:240) k3299" 
o|contracted procedure: "(compiler-syntax.scm:242) k3308" 
o|inlining procedure: "(compiler-syntax.scm:245) k3317" 
o|inlining procedure: "(compiler-syntax.scm:246) k3317" 
o|inlining procedure: "(compiler-syntax.scm:247) k3317" 
o|inlining procedure: "(compiler-syntax.scm:249) k3317" 
o|inlining procedure: "(compiler-syntax.scm:253) k3317" 
o|inlining procedure: "(compiler-syntax.scm:257) k3317" 
o|inlining procedure: "(compiler-syntax.scm:260) k3317" 
o|inlining procedure: "(compiler-syntax.scm:264) k3317" 
o|inlining procedure: "(compiler-syntax.scm:265) k3317" 
o|inlining procedure: "(compiler-syntax.scm:266) k3317" 
o|contracted procedure: "(compiler-syntax.scm:269) k3505" 
o|contracted procedure: "(compiler-syntax.scm:271) k3521" 
o|contracted procedure: "(compiler-syntax.scm:128) k4333" 
o|contracted procedure: "(compiler-syntax.scm:124) k4415" 
o|contracted procedure: "(compiler-syntax.scm:91) k4812" 
o|contracted procedure: "(compiler-syntax.scm:87) k4894" 
o|simplifications: ((let . 1)) 
o|removed binding forms: 8 
o|customizable procedures: (k4593 map-loop615633 map-loop645664 map-loop676697 map-loop706725 map-loop737758 map-loop767788 map-loop797818 chicken.compiler.compiler-syntax#length+ k4078 map-loop850868 map-loop880899 map-loop911932 map-loop941960 map-loop972993 map-loop10021023 map-loop10321053 foldr10751078 chicken.compiler.compiler-syntax#compile-format-string chicken.compiler.compiler-syntax#r-c-s k3084 skip1244 next1175 loop1190 endchunk1176 fail1134 g545552 for-each-loop544555) 
o|calls to known targets: 84 
o|identified direct recursive calls: f_2781 1 
o|identified direct recursive calls: f_3509 1 
o|identified direct recursive calls: f_3249 1 
o|identified direct recursive calls: f_3994 1 
o|identified direct recursive calls: f_4202 1 
o|identified direct recursive calls: f_4264 1 
o|identified direct recursive calls: f_4310 1 
o|identified direct recursive calls: f_4344 1 
o|identified direct recursive calls: f_4392 1 
o|identified direct recursive calls: f_4448 1 
o|identified direct recursive calls: f_4697 1 
o|identified direct recursive calls: f_4743 1 
o|identified direct recursive calls: f_4789 1 
o|identified direct recursive calls: f_4823 1 
o|identified direct recursive calls: f_4871 1 
o|identified direct recursive calls: f_4919 1 
o|fast box initializations: 22 
o|fast global references: 13 
o|fast global assignments: 3 
o|dropping unused closure argument: f_2775 
o|dropping unused closure argument: f_2781 
o|dropping unused closure argument: f_2987 
o|dropping unused closure argument: f_3058 
*/
/* end of file */

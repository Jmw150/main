/* Generated from c-backend.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: c-backend.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -extend private-namespace.scm -no-trace -output-file c-backend.c
   unit: backend
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[861];
static double C_possibly_force_alignment;


#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub2111(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word lit=(C_word )(C_a0);
return(C_header_size(lit));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub2107(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word lit=(C_word )(C_a0);

#ifdef C_SIXTY_FOUR
return((C_header_bits(lit) >> (24 + 32)) & 0xff);
#else
return((C_header_bits(lit) >> 24) & 0xff);
#endif

C_ret:
#undef return

return C_r;}

C_noret_decl(f_6067)
static void C_ccall f_6067(C_word c,C_word *av) C_noret;
C_noret_decl(f_10958)
static void C_ccall f_10958(C_word c,C_word *av) C_noret;
C_noret_decl(f_10934)
static void C_ccall f_10934(C_word c,C_word *av) C_noret;
C_noret_decl(f_10932)
static void C_ccall f_10932(C_word c,C_word *av) C_noret;
C_noret_decl(f_5102)
static void C_fcall f_5102(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10991)
static void C_ccall f_10991(C_word c,C_word *av) C_noret;
C_noret_decl(f_8090)
static void C_fcall f_8090(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5112)
static void C_ccall f_5112(C_word c,C_word *av) C_noret;
C_noret_decl(f_5118)
static void C_ccall f_5118(C_word c,C_word *av) C_noret;
C_noret_decl(f_6446)
static void C_fcall f_6446(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8082)
static void C_ccall f_8082(C_word c,C_word *av) C_noret;
C_noret_decl(f_6430)
static void C_ccall f_6430(C_word c,C_word *av) C_noret;
C_noret_decl(f_6421)
static void C_ccall f_6421(C_word c,C_word *av) C_noret;
C_noret_decl(f_7433)
static void C_ccall f_7433(C_word c,C_word *av) C_noret;
C_noret_decl(f_7436)
static void C_ccall f_7436(C_word c,C_word *av) C_noret;
C_noret_decl(f_7443)
static void C_ccall f_7443(C_word c,C_word *av) C_noret;
C_noret_decl(f_4204)
static void C_ccall f_4204(C_word c,C_word *av) C_noret;
C_noret_decl(f_4200)
static void C_ccall f_4200(C_word c,C_word *av) C_noret;
C_noret_decl(f_7419)
static void C_ccall f_7419(C_word c,C_word *av) C_noret;
C_noret_decl(f_7409)
static void C_fcall f_7409(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7404)
static void C_ccall f_7404(C_word c,C_word *av) C_noret;
C_noret_decl(f_10378)
static void C_ccall f_10378(C_word c,C_word *av) C_noret;
C_noret_decl(f_10372)
static void C_ccall f_10372(C_word c,C_word *av) C_noret;
C_noret_decl(f_10375)
static void C_ccall f_10375(C_word c,C_word *av) C_noret;
C_noret_decl(f_2601)
static void C_fcall f_2601(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10366)
static void C_ccall f_10366(C_word c,C_word *av) C_noret;
C_noret_decl(f_3587)
static void C_ccall f_3587(C_word c,C_word *av) C_noret;
C_noret_decl(f_2628)
static void C_ccall f_2628(C_word c,C_word *av) C_noret;
C_noret_decl(f_2626)
static void C_ccall f_2626(C_word c,C_word *av) C_noret;
C_noret_decl(f_3984)
static void C_ccall f_3984(C_word c,C_word *av) C_noret;
C_noret_decl(f_8627)
static void C_ccall f_8627(C_word c,C_word *av) C_noret;
C_noret_decl(f_8629)
static void C_fcall f_8629(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4881)
static void C_ccall f_4881(C_word c,C_word *av) C_noret;
C_noret_decl(f_8654)
static void C_ccall f_8654(C_word c,C_word *av) C_noret;
C_noret_decl(f_3596)
static void C_ccall f_3596(C_word c,C_word *av) C_noret;
C_noret_decl(f_3593)
static void C_ccall f_3593(C_word c,C_word *av) C_noret;
C_noret_decl(f_3260)
static void C_ccall f_3260(C_word c,C_word *av) C_noret;
C_noret_decl(f_4899)
static void C_ccall f_4899(C_word c,C_word *av) C_noret;
C_noret_decl(f_3599)
static void C_ccall f_3599(C_word c,C_word *av) C_noret;
C_noret_decl(f_3439)
static void C_ccall f_3439(C_word c,C_word *av) C_noret;
C_noret_decl(f_3430)
static void C_ccall f_3430(C_word c,C_word *av) C_noret;
C_noret_decl(f_3256)
static void C_ccall f_3256(C_word c,C_word *av) C_noret;
C_noret_decl(f_4863)
static void C_fcall f_4863(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2611)
static void C_ccall f_2611(C_word c,C_word *av) C_noret;
C_noret_decl(f_4860)
static void C_fcall f_4860(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3466)
static void C_ccall f_3466(C_word c,C_word *av) C_noret;
C_noret_decl(f_3469)
static void C_ccall f_3469(C_word c,C_word *av) C_noret;
C_noret_decl(f_10396)
static void C_ccall f_10396(C_word c,C_word *av) C_noret;
C_noret_decl(f_10390)
static void C_ccall f_10390(C_word c,C_word *av) C_noret;
C_noret_decl(f_4264)
static void C_ccall f_4264(C_word c,C_word *av) C_noret;
C_noret_decl(f_10399)
static void C_ccall f_10399(C_word c,C_word *av) C_noret;
C_noret_decl(f_4261)
static void C_ccall f_4261(C_word c,C_word *av) C_noret;
C_noret_decl(f_4878)
static void C_ccall f_4878(C_word c,C_word *av) C_noret;
C_noret_decl(f_10643)
static void C_ccall f_10643(C_word c,C_word *av) C_noret;
C_noret_decl(f_2796)
static void C_ccall f_2796(C_word c,C_word *av) C_noret;
C_noret_decl(f_2799)
static void C_ccall f_2799(C_word c,C_word *av) C_noret;
C_noret_decl(f_4845)
static void C_ccall f_4845(C_word c,C_word *av) C_noret;
C_noret_decl(f_4848)
static void C_ccall f_4848(C_word c,C_word *av) C_noret;
C_noret_decl(f_10983)
static void C_ccall f_10983(C_word c,C_word *av) C_noret;
C_noret_decl(f_10987)
static void C_ccall f_10987(C_word c,C_word *av) C_noret;
C_noret_decl(f_10970)
static void C_ccall f_10970(C_word c,C_word *av) C_noret;
C_noret_decl(f_10973)
static void C_ccall f_10973(C_word c,C_word *av) C_noret;
C_noret_decl(f_10976)
static void C_ccall f_10976(C_word c,C_word *av) C_noret;
C_noret_decl(f_10979)
static void C_ccall f_10979(C_word c,C_word *av) C_noret;
C_noret_decl(f_8817)
static void C_ccall f_8817(C_word c,C_word *av) C_noret;
C_noret_decl(f_8601)
static void C_ccall f_8601(C_word c,C_word *av) C_noret;
C_noret_decl(f_8605)
static void C_ccall f_8605(C_word c,C_word *av) C_noret;
C_noret_decl(f_8819)
static void C_fcall f_8819(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8609)
static void C_ccall f_8609(C_word c,C_word *av) C_noret;
C_noret_decl(f_4820)
static void C_ccall f_4820(C_word c,C_word *av) C_noret;
C_noret_decl(f_4823)
static void C_ccall f_4823(C_word c,C_word *av) C_noret;
C_noret_decl(f11805)
static void C_ccall f11805(C_word c,C_word *av) C_noret;
C_noret_decl(f_5303)
static void C_ccall f_5303(C_word c,C_word *av) C_noret;
C_noret_decl(f_5300)
static void C_ccall f_5300(C_word c,C_word *av) C_noret;
C_noret_decl(f_4829)
static void C_ccall f_4829(C_word c,C_word *av) C_noret;
C_noret_decl(f_4826)
static void C_ccall f_4826(C_word c,C_word *av) C_noret;
C_noret_decl(f_10287)
static void C_ccall f_10287(C_word c,C_word *av) C_noret;
C_noret_decl(f_10284)
static void C_ccall f_10284(C_word c,C_word *av) C_noret;
C_noret_decl(f11817)
static void C_ccall f11817(C_word c,C_word *av) C_noret;
C_noret_decl(f11813)
static void C_ccall f11813(C_word c,C_word *av) C_noret;
C_noret_decl(f_5355)
static void C_ccall f_5355(C_word c,C_word *av) C_noret;
C_noret_decl(f_5352)
static void C_ccall f_5352(C_word c,C_word *av) C_noret;
C_noret_decl(f_5358)
static void C_ccall f_5358(C_word c,C_word *av) C_noret;
C_noret_decl(f_10278)
static void C_ccall f_10278(C_word c,C_word *av) C_noret;
C_noret_decl(f_4802)
static void C_fcall f_4802(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5324)
static void C_ccall f_5324(C_word c,C_word *av) C_noret;
C_noret_decl(f_5321)
static void C_fcall f_5321(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10266)
static void C_ccall f_10266(C_word c,C_word *av) C_noret;
C_noret_decl(f_10260)
static void C_ccall f_10260(C_word c,C_word *av) C_noret;
C_noret_decl(f_10263)
static void C_ccall f_10263(C_word c,C_word *av) C_noret;
C_noret_decl(f_4817)
static void C_ccall f_4817(C_word c,C_word *av) C_noret;
C_noret_decl(f_10254)
static void C_ccall f_10254(C_word c,C_word *av) C_noret;
C_noret_decl(f_3308)
static void C_ccall f_3308(C_word c,C_word *av) C_noret;
C_noret_decl(f_4189)
static void C_ccall f_4189(C_word c,C_word *av) C_noret;
C_noret_decl(f_10719)
static void C_ccall f_10719(C_word c,C_word *av) C_noret;
C_noret_decl(f_10652)
static void C_fcall f_10652(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8671)
static void C_fcall f_8671(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8678)
static void C_ccall f_8678(C_word c,C_word *av) C_noret;
C_noret_decl(f_4196)
static void C_ccall f_4196(C_word c,C_word *av) C_noret;
C_noret_decl(f_4127)
static void C_ccall f_4127(C_word c,C_word *av) C_noret;
C_noret_decl(f_5758)
static void C_ccall f_5758(C_word c,C_word *av) C_noret;
C_noret_decl(f_4121)
static void C_ccall f_4121(C_word c,C_word *av) C_noret;
C_noret_decl(f_4124)
static void C_ccall f_4124(C_word c,C_word *av) C_noret;
C_noret_decl(f_8695)
static void C_ccall f_8695(C_word c,C_word *av) C_noret;
C_noret_decl(f_4139)
static void C_ccall f_4139(C_word c,C_word *av) C_noret;
C_noret_decl(f_3312)
static void C_ccall f_3312(C_word c,C_word *av) C_noret;
C_noret_decl(f_5767)
static void C_fcall f_5767(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10290)
static void C_ccall f_10290(C_word c,C_word *av) C_noret;
C_noret_decl(f_8688)
static void C_fcall f_8688(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3342)
static void C_ccall f_3342(C_word c,C_word *av) C_noret;
C_noret_decl(f_9257)
static void C_fcall f_9257(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5774)
static void C_fcall f_5774(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5477)
static void C_ccall f_5477(C_word c,C_word *av) C_noret;
C_noret_decl(f_3339)
static void C_ccall f_3339(C_word c,C_word *av) C_noret;
C_noret_decl(f_9284)
static void C_fcall f_9284(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5707)
static void C_ccall f_5707(C_word c,C_word *av) C_noret;
C_noret_decl(f_4151)
static void C_ccall f_4151(C_word c,C_word *av) C_noret;
C_noret_decl(f_7145)
static void C_ccall f_7145(C_word c,C_word *av) C_noret;
C_noret_decl(f_5714)
static void C_ccall f_5714(C_word c,C_word *av) C_noret;
C_noret_decl(f_5492)
static void C_ccall f_5492(C_word c,C_word *av) C_noret;
C_noret_decl(f_5499)
static void C_ccall f_5499(C_word c,C_word *av) C_noret;
C_noret_decl(f_9227)
static void C_ccall f_9227(C_word c,C_word *av) C_noret;
C_noret_decl(f_9229)
static void C_fcall f_9229(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7158)
static void C_ccall f_7158(C_word c,C_word *av) C_noret;
C_noret_decl(f_5483)
static void C_ccall f_5483(C_word c,C_word *av) C_noret;
C_noret_decl(f_5486)
static void C_ccall f_5486(C_word c,C_word *av) C_noret;
C_noret_decl(f_5480)
static void C_ccall f_5480(C_word c,C_word *av) C_noret;
C_noret_decl(f_5489)
static void C_ccall f_5489(C_word c,C_word *av) C_noret;
C_noret_decl(f_2564)
static void C_fcall f_2564(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4109)
static void C_ccall f_4109(C_word c,C_word *av) C_noret;
C_noret_decl(f_7121)
static void C_ccall f_7121(C_word c,C_word *av) C_noret;
C_noret_decl(f_5736)
static void C_fcall f_5736(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7124)
static void C_ccall f_7124(C_word c,C_word *av) C_noret;
C_noret_decl(f_8844)
static void C_ccall f_8844(C_word c,C_word *av) C_noret;
C_noret_decl(f_3545)
static void C_fcall f_3545(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9860)
static void C_fcall f_9860(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9601)
static void C_ccall f_9601(C_word c,C_word *av) C_noret;
C_noret_decl(f_4118)
static void C_ccall f_4118(C_word c,C_word *av) C_noret;
C_noret_decl(f_4115)
static void C_ccall f_4115(C_word c,C_word *av) C_noret;
C_noret_decl(f_7135)
static void C_fcall f_7135(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4112)
static void C_ccall f_4112(C_word c,C_word *av) C_noret;
C_noret_decl(f_7102)
static void C_ccall f_7102(C_word c,C_word *av) C_noret;
C_noret_decl(f_8253)
static void C_fcall f_8253(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7115)
static void C_ccall f_7115(C_word c,C_word *av) C_noret;
C_noret_decl(f_2587)
static void C_ccall f_2587(C_word c,C_word *av) C_noret;
C_noret_decl(f_10335)
static void C_ccall f_10335(C_word c,C_word *av) C_noret;
C_noret_decl(f_10338)
static void C_ccall f_10338(C_word c,C_word *av) C_noret;
C_noret_decl(f_10332)
static void C_ccall f_10332(C_word c,C_word *av) C_noret;
C_noret_decl(f_2596)
static void C_ccall f_2596(C_word c,C_word *av) C_noret;
C_noret_decl(f_10326)
static void C_ccall f_10326(C_word c,C_word *av) C_noret;
C_noret_decl(f_10314)
static void C_ccall f_10314(C_word c,C_word *av) C_noret;
C_noret_decl(f_2574)
static void C_ccall f_2574(C_word c,C_word *av) C_noret;
C_noret_decl(f_10311)
static void C_ccall f_10311(C_word c,C_word *av) C_noret;
C_noret_decl(f_10302)
static void C_ccall f_10302(C_word c,C_word *av) C_noret;
C_noret_decl(f_10308)
static void C_ccall f_10308(C_word c,C_word *av) C_noret;
C_noret_decl(f_4752)
static void C_ccall f_4752(C_word c,C_word *av) C_noret;
C_noret_decl(f_7084)
static void C_ccall f_7084(C_word c,C_word *av) C_noret;
C_noret_decl(f_4749)
static void C_ccall f_4749(C_word c,C_word *av) C_noret;
C_noret_decl(f_4746)
static void C_ccall f_4746(C_word c,C_word *av) C_noret;
C_noret_decl(f_6773)
static void C_ccall f_6773(C_word c,C_word *av) C_noret;
C_noret_decl(f_4764)
static void C_fcall f_4764(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7092)
static void C_fcall f_7092(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4755)
static void C_ccall f_4755(C_word c,C_word *av) C_noret;
C_noret_decl(f_6761)
static void C_ccall f_6761(C_word c,C_word *av) C_noret;
C_noret_decl(f_6777)
static void C_ccall f_6777(C_word c,C_word *av) C_noret;
C_noret_decl(f_4774)
static void C_ccall f_4774(C_word c,C_word *av) C_noret;
C_noret_decl(f_7062)
static void C_ccall f_7062(C_word c,C_word *av) C_noret;
C_noret_decl(f_10741)
static void C_ccall f_10741(C_word c,C_word *av) C_noret;
C_noret_decl(f_9858)
static void C_ccall f_9858(C_word c,C_word *av) C_noret;
C_noret_decl(f_6755)
static void C_ccall f_6755(C_word c,C_word *av) C_noret;
C_noret_decl(f_6752)
static void C_ccall f_6752(C_word c,C_word *av) C_noret;
C_noret_decl(f_4780)
static void C_ccall f_4780(C_word c,C_word *av) C_noret;
C_noret_decl(f_4777)
static void C_ccall f_4777(C_word c,C_word *av) C_noret;
C_noret_decl(f_5575)
static void C_ccall f_5575(C_word c,C_word *av) C_noret;
C_noret_decl(f_6212)
static void C_ccall f_6212(C_word c,C_word *av) C_noret;
C_noret_decl(f_4710)
static void C_ccall f_4710(C_word c,C_word *av) C_noret;
C_noret_decl(f_4714)
static void C_ccall f_4714(C_word c,C_word *av) C_noret;
C_noret_decl(f_4463)
static void C_ccall f_4463(C_word c,C_word *av) C_noret;
C_noret_decl(f_4466)
static void C_ccall f_4466(C_word c,C_word *av) C_noret;
C_noret_decl(f_6730)
static void C_ccall f_6730(C_word c,C_word *av) C_noret;
C_noret_decl(f_6734)
static void C_ccall f_6734(C_word c,C_word *av) C_noret;
C_noret_decl(f_6241)
static void C_ccall f_6241(C_word c,C_word *av) C_noret;
C_noret_decl(f_6737)
static void C_ccall f_6737(C_word c,C_word *av) C_noret;
C_noret_decl(f_6244)
static void C_ccall f_6244(C_word c,C_word *av) C_noret;
C_noret_decl(f_4433)
static void C_ccall f_4433(C_word c,C_word *av) C_noret;
C_noret_decl(f_10242)
static void C_ccall f_10242(C_word c,C_word *av) C_noret;
C_noret_decl(f_5638)
static void C_ccall f_5638(C_word c,C_word *av) C_noret;
C_noret_decl(f_6723)
static void C_ccall f_6723(C_word c,C_word *av) C_noret;
C_noret_decl(f_6727)
static void C_ccall f_6727(C_word c,C_word *av) C_noret;
C_noret_decl(f_4733)
static void C_fcall f_4733(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3417)
static void C_ccall f_3417(C_word c,C_word *av) C_noret;
C_noret_decl(f_4441)
static void C_ccall f_4441(C_word c,C_word *av) C_noret;
C_noret_decl(f_10239)
static void C_ccall f_10239(C_word c,C_word *av) C_noret;
C_noret_decl(f_10236)
static void C_ccall f_10236(C_word c,C_word *av) C_noret;
C_noret_decl(f_10230)
static void C_ccall f_10230(C_word c,C_word *av) C_noret;
C_noret_decl(f_3657)
static void C_ccall f_3657(C_word c,C_word *av) C_noret;
C_noret_decl(f_4743)
static void C_fcall f_4743(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3442)
static void C_ccall f_3442(C_word c,C_word *av) C_noret;
C_noret_decl(f_6226)
static void C_ccall f_6226(C_word c,C_word *av) C_noret;
C_noret_decl(f_6782)
static void C_ccall f_6782(C_word c,C_word *av) C_noret;
C_noret_decl(f_3644)
static void C_ccall f_3644(C_word c,C_word *av) C_noret;
C_noret_decl(f_5650)
static void C_fcall f_5650(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3641)
static void C_ccall f_3641(C_word c,C_word *av) C_noret;
C_noret_decl(f_10215)
static void C_fcall f_10215(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3638)
static void C_ccall f_3638(C_word c,C_word *av) C_noret;
C_noret_decl(f_6202)
static void C_fcall f_6202(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3426)
static void C_fcall f_3426(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3423)
static void C_ccall f_3423(C_word c,C_word *av) C_noret;
C_noret_decl(f_3420)
static void C_fcall f_3420(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5582)
static void C_ccall f_5582(C_word c,C_word *av) C_noret;
C_noret_decl(f_3791)
static void C_ccall f_3791(C_word c,C_word *av) C_noret;
C_noret_decl(f_3797)
static void C_fcall f_3797(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4704)
static void C_fcall f_4704(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6746)
static void C_ccall f_6746(C_word c,C_word *av) C_noret;
C_noret_decl(f_6743)
static void C_ccall f_6743(C_word c,C_word *av) C_noret;
C_noret_decl(f_6740)
static void C_ccall f_6740(C_word c,C_word *av) C_noret;
C_noret_decl(f_6758)
static void C_ccall f_6758(C_word c,C_word *av) C_noret;
C_noret_decl(f_6749)
static void C_ccall f_6749(C_word c,C_word *av) C_noret;
C_noret_decl(f_6566)
static void C_ccall f_6566(C_word c,C_word *av) C_noret;
C_noret_decl(f_5297)
static void C_ccall f_5297(C_word c,C_word *av) C_noret;
C_noret_decl(f_5291)
static void C_ccall f_5291(C_word c,C_word *av) C_noret;
C_noret_decl(f_5294)
static void C_ccall f_5294(C_word c,C_word *av) C_noret;
C_noret_decl(f_7982)
static void C_ccall f_7982(C_word c,C_word *av) C_noret;
C_noret_decl(f_7985)
static void C_ccall f_7985(C_word c,C_word *av) C_noret;
C_noret_decl(f_6592)
static void C_fcall f_6592(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5285)
static void C_ccall f_5285(C_word c,C_word *av) C_noret;
C_noret_decl(f_6791)
static void C_ccall f_6791(C_word c,C_word *av) C_noret;
C_noret_decl(f_5288)
static void C_ccall f_5288(C_word c,C_word *av) C_noret;
C_noret_decl(f_6795)
static void C_ccall f_6795(C_word c,C_word *av) C_noret;
C_noret_decl(f_5282)
static void C_ccall f_5282(C_word c,C_word *av) C_noret;
C_noret_decl(f_7994)
static void C_ccall f_7994(C_word c,C_word *av) C_noret;
C_noret_decl(f_7997)
static void C_ccall f_7997(C_word c,C_word *av) C_noret;
C_noret_decl(f_5232)
static void C_ccall f_5232(C_word c,C_word *av) C_noret;
C_noret_decl(f_3782)
static void C_ccall f_3782(C_word c,C_word *av) C_noret;
C_noret_decl(f_3785)
static void C_ccall f_3785(C_word c,C_word *av) C_noret;
C_noret_decl(f_3788)
static void C_ccall f_3788(C_word c,C_word *av) C_noret;
C_noret_decl(f_6529)
static void C_fcall f_6529(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5222)
static void C_fcall f_5222(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7970)
static void C_ccall f_7970(C_word c,C_word *av) C_noret;
C_noret_decl(f_7979)
static void C_ccall f_7979(C_word c,C_word *av) C_noret;
C_noret_decl(f_7976)
static void C_ccall f_7976(C_word c,C_word *av) C_noret;
C_noret_decl(f_7973)
static void C_ccall f_7973(C_word c,C_word *av) C_noret;
C_noret_decl(f_5254)
static void C_ccall f_5254(C_word c,C_word *av) C_noret;
C_noret_decl(f_5258)
static void C_ccall f_5258(C_word c,C_word *av) C_noret;
C_noret_decl(f_7182)
static void C_ccall f_7182(C_word c,C_word *av) C_noret;
C_noret_decl(f_7185)
static void C_ccall f_7185(C_word c,C_word *av) C_noret;
C_noret_decl(f_7188)
static void C_ccall f_7188(C_word c,C_word *av) C_noret;
C_noret_decl(f_6554)
static void C_fcall f_6554(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6556)
static void C_fcall f_6556(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5245)
static void C_fcall f_5245(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5249)
static void C_ccall f_5249(C_word c,C_word *av) C_noret;
C_noret_decl(f_7191)
static void C_ccall f_7191(C_word c,C_word *av) C_noret;
C_noret_decl(f_7197)
static void C_ccall f_7197(C_word c,C_word *av) C_noret;
C_noret_decl(f_7194)
static void C_ccall f_7194(C_word c,C_word *av) C_noret;
C_noret_decl(f_3874)
static void C_ccall f_3874(C_word c,C_word *av) C_noret;
C_noret_decl(f_7160)
static void C_fcall f_7160(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7164)
static void C_ccall f_7164(C_word c,C_word *av) C_noret;
C_noret_decl(f_7167)
static void C_ccall f_7167(C_word c,C_word *av) C_noret;
C_noret_decl(f_8176)
static void C_ccall f_8176(C_word c,C_word *av) C_noret;
C_noret_decl(f_8174)
static void C_ccall f_8174(C_word c,C_word *av) C_noret;
C_noret_decl(f_8178)
static void C_fcall f_8178(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7170)
static void C_ccall f_7170(C_word c,C_word *av) C_noret;
C_noret_decl(f_7176)
static void C_ccall f_7176(C_word c,C_word *av) C_noret;
C_noret_decl(f_7179)
static void C_ccall f_7179(C_word c,C_word *av) C_noret;
C_noret_decl(f_8162)
static void C_ccall f_8162(C_word c,C_word *av) C_noret;
C_noret_decl(f_6539)
static void C_ccall f_6539(C_word c,C_word *av) C_noret;
C_noret_decl(f_8183)
static void C_fcall f_8183(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3500)
static void C_ccall f_3500(C_word c,C_word *av) C_noret;
C_noret_decl(f_6515)
static void C_ccall f_6515(C_word c,C_word *av) C_noret;
C_noret_decl(f_3555)
static void C_ccall f_3555(C_word c,C_word *av) C_noret;
C_noret_decl(f_3815)
static void C_ccall f_3815(C_word c,C_word *av) C_noret;
C_noret_decl(f_3810)
static void C_ccall f_3810(C_word c,C_word *av) C_noret;
C_noret_decl(f_3508)
static void C_fcall f_3508(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word *av) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011(C_word c,C_word *av) C_noret;
C_noret_decl(f_3017)
static void C_ccall f_3017(C_word c,C_word *av) C_noret;
C_noret_decl(f_10041)
static void C_ccall f_10041(C_word c,C_word *av) C_noret;
C_noret_decl(f_8517)
static void C_ccall f_8517(C_word c,C_word *av) C_noret;
C_noret_decl(f_5279)
static void C_ccall f_5279(C_word c,C_word *av) C_noret;
C_noret_decl(f_3077)
static void C_ccall f_3077(C_word c,C_word *av) C_noret;
C_noret_decl(f_5276)
static void C_ccall f_5276(C_word c,C_word *av) C_noret;
C_noret_decl(f_5273)
static void C_ccall f_5273(C_word c,C_word *av) C_noret;
C_noret_decl(f_5270)
static void C_ccall f_5270(C_word c,C_word *av) C_noret;
C_noret_decl(f_7305)
static void C_ccall f_7305(C_word c,C_word *av) C_noret;
C_noret_decl(f_7302)
static void C_ccall f_7302(C_word c,C_word *av) C_noret;
C_noret_decl(f_10056)
static void C_ccall f_10056(C_word c,C_word *av) C_noret;
C_noret_decl(f_8502)
static void C_fcall f_8502(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5267)
static void C_ccall f_5267(C_word c,C_word *av) C_noret;
C_noret_decl(f_5264)
static void C_fcall f_5264(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5261)
static void C_ccall f_5261(C_word c,C_word *av) C_noret;
C_noret_decl(f_3518)
static void C_ccall f_3518(C_word c,C_word *av) C_noret;
C_noret_decl(f_6506)
static void C_ccall f_6506(C_word c,C_word *av) C_noret;
C_noret_decl(f_8521)
static void C_fcall f_8521(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10089)
static void C_ccall f_10089(C_word c,C_word *av) C_noret;
C_noret_decl(f_10086)
static void C_ccall f_10086(C_word c,C_word *av) C_noret;
C_noret_decl(f_10080)
static void C_ccall f_10080(C_word c,C_word *av) C_noret;
C_noret_decl(f_4333)
static void C_ccall f_4333(C_word c,C_word *av) C_noret;
C_noret_decl(f_10092)
static void C_ccall f_10092(C_word c,C_word *av) C_noret;
C_noret_decl(f_3494)
static void C_ccall f_3494(C_word c,C_word *av) C_noret;
C_noret_decl(f_3497)
static void C_ccall f_3497(C_word c,C_word *av) C_noret;
C_noret_decl(f_4351)
static void C_ccall f_4351(C_word c,C_word *av) C_noret;
C_noret_decl(f_4354)
static void C_ccall f_4354(C_word c,C_word *av) C_noret;
C_noret_decl(f_3723)
static void C_ccall f_3723(C_word c,C_word *av) C_noret;
C_noret_decl(f_6412)
static void C_ccall f_6412(C_word c,C_word *av) C_noret;
C_noret_decl(f_6415)
static void C_ccall f_6415(C_word c,C_word *av) C_noret;
C_noret_decl(f_3473)
static void C_fcall f_3473(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3472)
static void C_ccall f_3472(C_word c,C_word *av) C_noret;
C_noret_decl(f_3477)
static void C_ccall f_3477(C_word c,C_word *av) C_noret;
C_noret_decl(f_6418)
static void C_ccall f_6418(C_word c,C_word *av) C_noret;
C_noret_decl(f_3148)
static void C_ccall f_3148(C_word c,C_word *av) C_noret;
C_noret_decl(f_3716)
static void C_ccall f_3716(C_word c,C_word *av) C_noret;
C_noret_decl(f_3892)
static void C_ccall f_3892(C_word c,C_word *av) C_noret;
C_noret_decl(f_7293)
static void C_ccall f_7293(C_word c,C_word *av) C_noret;
C_noret_decl(f_7296)
static void C_ccall f_7296(C_word c,C_word *av) C_noret;
C_noret_decl(f_7299)
static void C_ccall f_7299(C_word c,C_word *av) C_noret;
C_noret_decl(f_7260)
static void C_ccall f_7260(C_word c,C_word *av) C_noret;
C_noret_decl(f_3881)
static void C_ccall f_3881(C_word c,C_word *av) C_noret;
C_noret_decl(f_3888)
static void C_ccall f_3888(C_word c,C_word *av) C_noret;
C_noret_decl(f_7266)
static void C_ccall f_7266(C_word c,C_word *av) C_noret;
C_noret_decl(f_7263)
static void C_ccall f_7263(C_word c,C_word *av) C_noret;
C_noret_decl(f_3736)
static void C_ccall f_3736(C_word c,C_word *av) C_noret;
C_noret_decl(f_3486)
static void C_ccall f_3486(C_word c,C_word *av) C_noret;
C_noret_decl(f_3480)
static void C_ccall f_3480(C_word c,C_word *av) C_noret;
C_noret_decl(f_10029)
static void C_ccall f_10029(C_word c,C_word *av) C_noret;
C_noret_decl(f_8490)
static void C_fcall f_8490(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7272)
static void C_ccall f_7272(C_word c,C_word *av) C_noret;
C_noret_decl(f_7275)
static void C_ccall f_7275(C_word c,C_word *av) C_noret;
C_noret_decl(f_10035)
static void C_ccall f_10035(C_word c,C_word *av) C_noret;
C_noret_decl(f_10038)
static void C_ccall f_10038(C_word c,C_word *av) C_noret;
C_noret_decl(f_3958)
static void C_ccall f_3958(C_word c,C_word *av) C_noret;
C_noret_decl(f_3952)
static void C_ccall f_3952(C_word c,C_word *av) C_noret;
C_noret_decl(f_7245)
static void C_ccall f_7245(C_word c,C_word *av) C_noret;
C_noret_decl(f_7248)
static void C_ccall f_7248(C_word c,C_word *av) C_noret;
C_noret_decl(f_10002)
static void C_ccall f_10002(C_word c,C_word *av) C_noret;
C_noret_decl(f_10008)
static void C_ccall f_10008(C_word c,C_word *av) C_noret;
C_noret_decl(f_3949)
static void C_ccall f_3949(C_word c,C_word *av) C_noret;
C_noret_decl(f_3945)
static void C_fcall f_3945(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3138)
static void C_fcall f_3138(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3941)
static void C_ccall f_3941(C_word c,C_word *av) C_noret;
C_noret_decl(f_3944)
static void C_ccall f_3944(C_word c,C_word *av) C_noret;
C_noret_decl(f_7254)
static void C_ccall f_7254(C_word c,C_word *av) C_noret;
C_noret_decl(f_10011)
static void C_ccall f_10011(C_word c,C_word *av) C_noret;
C_noret_decl(f_4422)
static void C_ccall f_4422(C_word c,C_word *av) C_noret;
C_noret_decl(f_10014)
static void C_ccall f_10014(C_word c,C_word *av) C_noret;
C_noret_decl(f_3123)
static void C_ccall f_3123(C_word c,C_word *av) C_noret;
C_noret_decl(f_3129)
static void C_ccall f_3129(C_word c,C_word *av) C_noret;
C_noret_decl(f_3974)
static void C_fcall f_3974(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10062)
static void C_ccall f_10062(C_word c,C_word *av) C_noret;
C_noret_decl(f_10068)
static void C_ccall f_10068(C_word c,C_word *av) C_noret;
C_noret_decl(f_10065)
static void C_ccall f_10065(C_word c,C_word *av) C_noret;
C_noret_decl(f_4984)
static void C_ccall f_4984(C_word c,C_word *av) C_noret;
C_noret_decl(f_4988)
static void C_ccall f_4988(C_word c,C_word *av) C_noret;
C_noret_decl(f_3969)
static void C_ccall f_3969(C_word c,C_word *av) C_noret;
C_noret_decl(f_3966)
static void C_ccall f_3966(C_word c,C_word *av) C_noret;
C_noret_decl(f_4980)
static void C_ccall f_4980(C_word c,C_word *av) C_noret;
C_noret_decl(f_4401)
static void C_ccall f_4401(C_word c,C_word *av) C_noret;
C_noret_decl(f_5433)
static void C_ccall f_5433(C_word c,C_word *av) C_noret;
C_noret_decl(f_4996)
static void C_ccall f_4996(C_word c,C_word *av) C_noret;
C_noret_decl(f_5645)
static void C_ccall f_5645(C_word c,C_word *av) C_noret;
C_noret_decl(f_3617)
static void C_ccall f_3617(C_word c,C_word *av) C_noret;
C_noret_decl(f_5648)
static void C_ccall f_5648(C_word c,C_word *av) C_noret;
C_noret_decl(f_3614)
static void C_ccall f_3614(C_word c,C_word *av) C_noret;
C_noret_decl(f_3611)
static void C_ccall f_3611(C_word c,C_word *av) C_noret;
C_noret_decl(f_4992)
static void C_ccall f_4992(C_word c,C_word *av) C_noret;
C_noret_decl(f_5449)
static void C_ccall f_5449(C_word c,C_word *av) C_noret;
C_noret_decl(f_5617)
static void C_ccall f_5617(C_word c,C_word *av) C_noret;
C_noret_decl(f_3608)
static void C_ccall f_3608(C_word c,C_word *av) C_noret;
C_noret_decl(f_5613)
static void C_ccall f_5613(C_word c,C_word *av) C_noret;
C_noret_decl(f_5453)
static void C_ccall f_5453(C_word c,C_word *av) C_noret;
C_noret_decl(f_5459)
static void C_ccall f_5459(C_word c,C_word *av) C_noret;
C_noret_decl(f_5456)
static void C_ccall f_5456(C_word c,C_word *av) C_noret;
C_noret_decl(f_4949)
static void C_ccall f_4949(C_word c,C_word *av) C_noret;
C_noret_decl(f_5465)
static void C_fcall f_5465(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5462)
static void C_ccall f_5462(C_word c,C_word *av) C_noret;
C_noret_decl(f_3114)
static void C_ccall f_3114(C_word c,C_word *av) C_noret;
C_noret_decl(f_5468)
static void C_fcall f_5468(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3110)
static void C_fcall f_3110(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3663)
static void C_fcall f_3663(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6951)
static void C_fcall f_6951(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5780)
static void C_ccall f_5780(C_word c,C_word *av) C_noret;
C_noret_decl(f_3185)
static void C_ccall f_3185(C_word c,C_word *av) C_noret;
C_noret_decl(f_3182)
static void C_ccall f_3182(C_word c,C_word *av) C_noret;
C_noret_decl(f_6940)
static void C_ccall f_6940(C_word c,C_word *av) C_noret;
C_noret_decl(f_6942)
static void C_ccall f_6942(C_word c,C_word *av) C_noret;
C_noret_decl(f_4413)
static void C_ccall f_4413(C_word c,C_word *av) C_noret;
C_noret_decl(f_4969)
static void C_ccall f_4969(C_word c,C_word *av) C_noret;
C_noret_decl(f_4419)
static void C_ccall f_4419(C_word c,C_word *av) C_noret;
C_noret_decl(f_4416)
static void C_ccall f_4416(C_word c,C_word *av) C_noret;
C_noret_decl(f_6932)
static void C_ccall f_6932(C_word c,C_word *av) C_noret;
C_noret_decl(f_5377)
static void C_ccall f_5377(C_word c,C_word *av) C_noret;
C_noret_decl(f_6051)
static void C_fcall f_6051(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6057)
static void C_ccall f_6057(C_word c,C_word *av) C_noret;
C_noret_decl(f_4908)
static void C_ccall f_4908(C_word c,C_word *av) C_noret;
C_noret_decl(f_5374)
static void C_ccall f_5374(C_word c,C_word *av) C_noret;
C_noret_decl(f_6910)
static void C_ccall f_6910(C_word c,C_word *av) C_noret;
C_noret_decl(f_3627)
static void C_ccall f_3627(C_word c,C_word *av) C_noret;
C_noret_decl(f_4905)
static void C_ccall f_4905(C_word c,C_word *av) C_noret;
C_noret_decl(f_4902)
static void C_ccall f_4902(C_word c,C_word *av) C_noret;
C_noret_decl(f_4489)
static void C_ccall f_4489(C_word c,C_word *av) C_noret;
C_noret_decl(f_4486)
static void C_ccall f_4486(C_word c,C_word *av) C_noret;
C_noret_decl(f_4917)
static void C_ccall f_4917(C_word c,C_word *av) C_noret;
C_noret_decl(f_6901)
static void C_ccall f_6901(C_word c,C_word *av) C_noret;
C_noret_decl(f_6906)
static void C_ccall f_6906(C_word c,C_word *av) C_noret;
C_noret_decl(f_4911)
static void C_ccall f_4911(C_word c,C_word *av) C_noret;
C_noret_decl(f_4914)
static void C_ccall f_4914(C_word c,C_word *av) C_noret;
C_noret_decl(f_4929)
static void C_ccall f_4929(C_word c,C_word *av) C_noret;
C_noret_decl(f_6373)
static void C_ccall f_6373(C_word c,C_word *av) C_noret;
C_noret_decl(f_6376)
static void C_ccall f_6376(C_word c,C_word *av) C_noret;
C_noret_decl(f_7048)
static void C_ccall f_7048(C_word c,C_word *av) C_noret;
C_noret_decl(f_6388)
static void C_fcall f_6388(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7042)
static void C_ccall f_7042(C_word c,C_word *av) C_noret;
C_noret_decl(f_7040)
static void C_ccall f_7040(C_word c,C_word *av) C_noret;
C_noret_decl(f_4939)
static void C_fcall f_4939(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5380)
static void C_ccall f_5380(C_word c,C_word *av) C_noret;
C_noret_decl(f_7058)
static void C_ccall f_7058(C_word c,C_word *av) C_noret;
C_noret_decl(f_7056)
static void C_ccall f_7056(C_word c,C_word *av) C_noret;
C_noret_decl(f_6379)
static void C_ccall f_6379(C_word c,C_word *av) C_noret;
C_noret_decl(f_7026)
static void C_ccall f_7026(C_word c,C_word *av) C_noret;
C_noret_decl(f_6367)
static void C_ccall f_6367(C_word c,C_word *av) C_noret;
C_noret_decl(f_8033)
static void C_fcall f_8033(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8031)
static void C_ccall f_8031(C_word c,C_word *av) C_noret;
C_noret_decl(f_3117)
static void C_ccall f_3117(C_word c,C_word *av) C_noret;
C_noret_decl(f_6342)
static void C_ccall f_6342(C_word c,C_word *av) C_noret;
C_noret_decl(f_9978)
static void C_ccall f_9978(C_word c,C_word *av) C_noret;
C_noret_decl(f_9975)
static void C_fcall f_9975(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10402)
static void C_ccall f_10402(C_word c,C_word *av) C_noret;
C_noret_decl(f_6359)
static void C_ccall f_6359(C_word c,C_word *av) C_noret;
C_noret_decl(f_7032)
static void C_ccall f_7032(C_word c,C_word *av) C_noret;
C_noret_decl(f_7352)
static void C_fcall f_7352(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3109)
static void C_ccall f_3109(C_word c,C_word *av) C_noret;
C_noret_decl(f_7359)
static void C_fcall f_7359(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5394)
static void C_ccall f_5394(C_word c,C_word *av) C_noret;
C_noret_decl(f_6331)
static void C_ccall f_6331(C_word c,C_word *av) C_noret;
C_noret_decl(f_9963)
static void C_ccall f_9963(C_word c,C_word *av) C_noret;
C_noret_decl(f_9960)
static void C_ccall f_9960(C_word c,C_word *av) C_noret;
C_noret_decl(f_8361)
static void C_fcall f_8361(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7362)
static void C_ccall f_7362(C_word c,C_word *av) C_noret;
C_noret_decl(f_8043)
static void C_ccall f_8043(C_word c,C_word *av) C_noret;
C_noret_decl(f_7334)
static void C_ccall f_7334(C_word c,C_word *av) C_noret;
C_noret_decl(f_7330)
static void C_ccall f_7330(C_word c,C_word *av) C_noret;
C_noret_decl(f_6989)
static void C_ccall f_6989(C_word c,C_word *av) C_noret;
C_noret_decl(f_8382)
static void C_fcall f_8382(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9936)
static void C_ccall f_9936(C_word c,C_word *av) C_noret;
C_noret_decl(f_9939)
static void C_ccall f_9939(C_word c,C_word *av) C_noret;
C_noret_decl(f_6979)
static void C_fcall f_6979(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9933)
static void C_ccall f_9933(C_word c,C_word *av) C_noret;
C_noret_decl(f_5057)
static void C_ccall f_5057(C_word c,C_word *av) C_noret;
C_noret_decl(f_9927)
static void C_ccall f_9927(C_word c,C_word *av) C_noret;
C_noret_decl(f_2811)
static void C_ccall f_2811(C_word c,C_word *av) C_noret;
C_noret_decl(f_8012)
static void C_ccall f_8012(C_word c,C_word *av) C_noret;
C_noret_decl(f_5049)
static void C_ccall f_5049(C_word c,C_word *av) C_noret;
C_noret_decl(f_10426)
static void C_ccall f_10426(C_word c,C_word *av) C_noret;
C_noret_decl(f_10423)
static void C_ccall f_10423(C_word c,C_word *av) C_noret;
C_noret_decl(f_10420)
static void C_ccall f_10420(C_word c,C_word *av) C_noret;
C_noret_decl(f_9990)
static void C_ccall f_9990(C_word c,C_word *av) C_noret;
C_noret_decl(f_8006)
static void C_ccall f_8006(C_word c,C_word *av) C_noret;
C_noret_decl(f_8009)
static void C_ccall f_8009(C_word c,C_word *av) C_noret;
C_noret_decl(f_8000)
static void C_ccall f_8000(C_word c,C_word *av) C_noret;
C_noret_decl(f_8003)
static void C_ccall f_8003(C_word c,C_word *av) C_noret;
C_noret_decl(f_5071)
static void C_ccall f_5071(C_word c,C_word *av) C_noret;
C_noret_decl(f_5073)
static void C_fcall f_5073(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10414)
static void C_ccall f_10414(C_word c,C_word *av) C_noret;
C_noret_decl(f_9984)
static void C_ccall f_9984(C_word c,C_word *av) C_noret;
C_noret_decl(f_9987)
static void C_ccall f_9987(C_word c,C_word *av) C_noret;
C_noret_decl(f_5067)
static void C_ccall f_5067(C_word c,C_word *av) C_noret;
C_noret_decl(f_9957)
static void C_ccall f_9957(C_word c,C_word *av) C_noret;
C_noret_decl(f_6602)
static void C_ccall f_6602(C_word c,C_word *av) C_noret;
C_noret_decl(f_9951)
static void C_ccall f_9951(C_word c,C_word *av) C_noret;
C_noret_decl(f_5038)
static void C_ccall f_5038(C_word c,C_word *av) C_noret;
C_noret_decl(f_6675)
static void C_ccall f_6675(C_word c,C_word *av) C_noret;
C_noret_decl(f_6678)
static void C_ccall f_6678(C_word c,C_word *av) C_noret;
C_noret_decl(f_7604)
static void C_fcall f_7604(C_word t0,C_word t1) C_noret;
C_noret_decl(C_backend_toplevel)
C_externexport void C_ccall C_backend_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_3297)
static void C_ccall f_3297(C_word c,C_word *av) C_noret;
C_noret_decl(f_3294)
static void C_ccall f_3294(C_word c,C_word *av) C_noret;
C_noret_decl(f_3291)
static void C_ccall f_3291(C_word c,C_word *av) C_noret;
C_noret_decl(f_4367)
static void C_ccall f_4367(C_word c,C_word *av) C_noret;
C_noret_decl(f_4300)
static void C_ccall f_4300(C_word c,C_word *av) C_noret;
C_noret_decl(f_6310)
static void C_ccall f_6310(C_word c,C_word *av) C_noret;
C_noret_decl(f_6313)
static void C_ccall f_6313(C_word c,C_word *av) C_noret;
C_noret_decl(f_6328)
static void C_ccall f_6328(C_word c,C_word *av) C_noret;
C_noret_decl(f_4309)
static void C_ccall f_4309(C_word c,C_word *av) C_noret;
C_noret_decl(f_6304)
static void C_ccall f_6304(C_word c,C_word *av) C_noret;
C_noret_decl(f_6300)
static void C_ccall f_6300(C_word c,C_word *av) C_noret;
C_noret_decl(f_3766)
static void C_ccall f_3766(C_word c,C_word *av) C_noret;
C_noret_decl(f_7549)
static void C_fcall f_7549(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3762)
static void C_ccall f_3762(C_word c,C_word *av) C_noret;
C_noret_decl(f_6319)
static void C_ccall f_6319(C_word c,C_word *av) C_noret;
C_noret_decl(f_6316)
static void C_ccall f_6316(C_word c,C_word *av) C_noret;
C_noret_decl(f_5552)
static void C_ccall f_5552(C_word c,C_word *av) C_noret;
C_noret_decl(f_5558)
static void C_ccall f_5558(C_word c,C_word *av) C_noret;
C_noret_decl(f_3755)
static void C_ccall f_3755(C_word c,C_word *av) C_noret;
C_noret_decl(f_6307)
static void C_ccall f_6307(C_word c,C_word *av) C_noret;
C_noret_decl(f_6625)
static void C_fcall f_6625(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6628)
static void C_ccall f_6628(C_word c,C_word *av) C_noret;
C_noret_decl(f_5564)
static void C_ccall f_5564(C_word c,C_word *av) C_noret;
C_noret_decl(f_5567)
static void C_ccall f_5567(C_word c,C_word *av) C_noret;
C_noret_decl(f_5097)
static void C_ccall f_5097(C_word c,C_word *av) C_noret;
C_noret_decl(f_5094)
static void C_ccall f_5094(C_word c,C_word *av) C_noret;
C_noret_decl(f_5561)
static void C_ccall f_5561(C_word c,C_word *av) C_noret;
C_noret_decl(f_5091)
static void C_ccall f_5091(C_word c,C_word *av) C_noret;
C_noret_decl(f_3709)
static void C_ccall f_3709(C_word c,C_word *av) C_noret;
C_noret_decl(f_7528)
static void C_fcall f_7528(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6692)
static void C_ccall f_6692(C_word c,C_word *av) C_noret;
C_noret_decl(f_5080)
static void C_ccall f_5080(C_word c,C_word *av) C_noret;
C_noret_decl(f_3779)
static void C_ccall f_3779(C_word c,C_word *av) C_noret;
C_noret_decl(f_3776)
static void C_ccall f_3776(C_word c,C_word *av) C_noret;
C_noret_decl(f_3773)
static void C_ccall f_3773(C_word c,C_word *av) C_noret;
C_noret_decl(f_7537)
static void C_fcall f_7537(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5152)
static void C_ccall f_5152(C_word c,C_word *av) C_noret;
C_noret_decl(f_7507)
static void C_ccall f_7507(C_word c,C_word *av) C_noret;
C_noret_decl(f_7504)
static void C_ccall f_7504(C_word c,C_word *av) C_noret;
C_noret_decl(f_7501)
static void C_ccall f_7501(C_word c,C_word *av) C_noret;
C_noret_decl(f_5142)
static void C_fcall f_5142(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5121)
static void C_ccall f_5121(C_word c,C_word *av) C_noret;
C_noret_decl(f_3214)
static void C_ccall f_3214(C_word c,C_word *av) C_noret;
C_noret_decl(f_4371)
static void C_ccall f_4371(C_word c,C_word *av) C_noret;
C_noret_decl(f_3748)
static void C_ccall f_3748(C_word c,C_word *av) C_noret;
C_noret_decl(f_3740)
static void C_ccall f_3740(C_word c,C_word *av) C_noret;
C_noret_decl(f_6656)
static void C_ccall f_6656(C_word c,C_word *av) C_noret;
C_noret_decl(f_6653)
static void C_ccall f_6653(C_word c,C_word *av) C_noret;
C_noret_decl(f_6659)
static void C_ccall f_6659(C_word c,C_word *av) C_noret;
C_noret_decl(f_5124)
static void C_ccall f_5124(C_word c,C_word *av) C_noret;
C_noret_decl(f_5127)
static void C_ccall f_5127(C_word c,C_word *av) C_noret;
C_noret_decl(f_4383)
static void C_ccall f_4383(C_word c,C_word *av) C_noret;
C_noret_decl(f_4386)
static void C_ccall f_4386(C_word c,C_word *av) C_noret;
C_noret_decl(f_3692)
static void C_ccall f_3692(C_word c,C_word *av) C_noret;
C_noret_decl(f_6271)
static void C_ccall f_6271(C_word c,C_word *av) C_noret;
C_noret_decl(f_3699)
static void C_ccall f_3699(C_word c,C_word *av) C_noret;
C_noret_decl(f_4535)
static void C_ccall f_4535(C_word c,C_word *av) C_noret;
C_noret_decl(f_4532)
static void C_ccall f_4532(C_word c,C_word *av) C_noret;
C_noret_decl(f_7461)
static void C_ccall f_7461(C_word c,C_word *av) C_noret;
C_noret_decl(f_4397)
static void C_ccall f_4397(C_word c,C_word *av) C_noret;
C_noret_decl(f_3683)
static void C_ccall f_3683(C_word c,C_word *av) C_noret;
C_noret_decl(f_3686)
static void C_ccall f_3686(C_word c,C_word *av) C_noret;
C_noret_decl(f_3689)
static void C_ccall f_3689(C_word c,C_word *av) C_noret;
C_noret_decl(f_5408)
static void C_ccall f_5408(C_word c,C_word *av) C_noret;
C_noret_decl(f_8722)
static void C_fcall f_8722(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8729)
static void C_ccall f_8729(C_word c,C_word *av) C_noret;
C_noret_decl(f_4551)
static void C_ccall f_4551(C_word c,C_word *av) C_noret;
C_noret_decl(f_4554)
static void C_ccall f_4554(C_word c,C_word *av) C_noret;
C_noret_decl(f_5410)
static void C_fcall f_5410(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8756)
static void C_fcall f_8756(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5423)
static void C_fcall f_5423(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7495)
static void C_ccall f_7495(C_word c,C_word *av) C_noret;
C_noret_decl(f_7497)
static void C_fcall f_7497(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8746)
static void C_ccall f_8746(C_word c,C_word *av) C_noret;
C_noret_decl(f_4069)
static void C_ccall f_4069(C_word c,C_word *av) C_noret;
C_noret_decl(f_8773)
static void C_fcall f_8773(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6261)
static void C_fcall f_6261(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7472)
static void C_fcall f_7472(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5992)
static void C_ccall f_5992(C_word c,C_word *av) C_noret;
C_noret_decl(f_5995)
static void C_ccall f_5995(C_word c,C_word *av) C_noret;
C_noret_decl(f_7482)
static void C_ccall f_7482(C_word c,C_word *av) C_noret;
C_noret_decl(f_5866)
static void C_ccall f_5866(C_word c,C_word *av) C_noret;
C_noret_decl(f_5863)
static void C_fcall f_5863(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8712)
static void C_ccall f_8712(C_word c,C_word *av) C_noret;
C_noret_decl(f_4053)
static void C_ccall f_4053(C_word c,C_word *av) C_noret;
C_noret_decl(f_5985)
static void C_fcall f_5985(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4059)
static void C_ccall f_4059(C_word c,C_word *av) C_noret;
C_noret_decl(f_4056)
static void C_ccall f_4056(C_word c,C_word *av) C_noret;
C_noret_decl(f_5869)
static void C_ccall f_5869(C_word c,C_word *av) C_noret;
C_noret_decl(f_7451)
static void C_ccall f_7451(C_word c,C_word *av) C_noret;
C_noret_decl(f_5876)
static void C_ccall f_5876(C_word c,C_word *av) C_noret;
C_noret_decl(f_8705)
static void C_fcall f_8705(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4021)
static void C_ccall f_4021(C_word c,C_word *av) C_noret;
C_noret_decl(f_4601)
static void C_ccall f_4601(C_word c,C_word *av) C_noret;
C_noret_decl(f_8739)
static void C_fcall f_8739(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7225)
static void C_ccall f_7225(C_word c,C_word *av) C_noret;
C_noret_decl(f_7229)
static void C_ccall f_7229(C_word c,C_word *av) C_noret;
C_noret_decl(f_7221)
static void C_ccall f_7221(C_word c,C_word *av) C_noret;
C_noret_decl(f_7233)
static void C_ccall f_7233(C_word c,C_word *av) C_noret;
C_noret_decl(f_7239)
static void C_ccall f_7239(C_word c,C_word *av) C_noret;
C_noret_decl(f_5836)
static void C_ccall f_5836(C_word c,C_word *av) C_noret;
C_noret_decl(f_5830)
static void C_ccall f_5830(C_word c,C_word *av) C_noret;
C_noret_decl(f_7209)
static void C_ccall f_7209(C_word c,C_word *av) C_noret;
C_noret_decl(f_7206)
static void C_ccall f_7206(C_word c,C_word *av) C_noret;
C_noret_decl(f_7203)
static void C_ccall f_7203(C_word c,C_word *av) C_noret;
C_noret_decl(f_7200)
static void C_ccall f_7200(C_word c,C_word *av) C_noret;
C_noret_decl(f_7212)
static void C_ccall f_7212(C_word c,C_word *av) C_noret;
C_noret_decl(f_8763)
static void C_ccall f_8763(C_word c,C_word *av) C_noret;
C_noret_decl(f_8796)
static void C_ccall f_8796(C_word c,C_word *av) C_noret;
C_noret_decl(f_8792)
static void C_ccall f_8792(C_word c,C_word *av) C_noret;
C_noret_decl(f_10188)
static void C_ccall f_10188(C_word c,C_word *av) C_noret;
C_noret_decl(f_2854)
static void C_fcall f_2854(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10167)
static void C_ccall f_10167(C_word c,C_word *av) C_noret;
C_noret_decl(f_10161)
static void C_ccall f_10161(C_word c,C_word *av) C_noret;
C_noret_decl(f_4093)
static void C_ccall f_4093(C_word c,C_word *av) C_noret;
C_noret_decl(f_10164)
static void C_ccall f_10164(C_word c,C_word *av) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867(C_word c,C_word *av) C_noret;
C_noret_decl(f_2864)
static void C_ccall f_2864(C_word c,C_word *av) C_noret;
C_noret_decl(f_4099)
static void C_ccall f_4099(C_word c,C_word *av) C_noret;
C_noret_decl(f_10155)
static void C_ccall f_10155(C_word c,C_word *av) C_noret;
C_noret_decl(f_2870)
static void C_ccall f_2870(C_word c,C_word *av) C_noret;
C_noret_decl(f_2808)
static void C_ccall f_2808(C_word c,C_word *av) C_noret;
C_noret_decl(f_8594)
static void C_fcall f_8594(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3374)
static void C_ccall f_3374(C_word c,C_word *av) C_noret;
C_noret_decl(f_3020)
static void C_ccall f_3020(C_word c,C_word *av) C_noret;
C_noret_decl(f_2805)
static void C_ccall f_2805(C_word c,C_word *av) C_noret;
C_noret_decl(f_2802)
static void C_ccall f_2802(C_word c,C_word *av) C_noret;
C_noret_decl(f_3378)
static void C_ccall f_3378(C_word c,C_word *av) C_noret;
C_noret_decl(f_8588)
static void C_ccall f_8588(C_word c,C_word *av) C_noret;
C_noret_decl(f_3086)
static void C_ccall f_3086(C_word c,C_word *av) C_noret;
C_noret_decl(f_3083)
static void C_ccall f_3083(C_word c,C_word *av) C_noret;
C_noret_decl(f_3080)
static void C_ccall f_3080(C_word c,C_word *av) C_noret;
C_noret_decl(f_7516)
static void C_ccall f_7516(C_word c,C_word *av) C_noret;
C_noret_decl(f_7518)
static void C_ccall f_7518(C_word c,C_word *av) C_noret;
C_noret_decl(f_7510)
static void C_ccall f_7510(C_word c,C_word *av) C_noret;
C_noret_decl(f_10192)
static void C_fcall f_10192(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2981)
static void C_ccall f_2981(C_word c,C_word *av) C_noret;
C_noret_decl(f_2984)
static void C_ccall f_2984(C_word c,C_word *av) C_noret;
C_noret_decl(f_2987)
static void C_ccall f_2987(C_word c,C_word *av) C_noret;
C_noret_decl(f_7561)
static void C_fcall f_7561(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7567)
static void C_ccall f_7567(C_word c,C_word *av) C_noret;
C_noret_decl(f_7571)
static void C_fcall f_7571(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5179)
static void C_ccall f_5179(C_word c,C_word *av) C_noret;
C_noret_decl(f_9524)
static void C_fcall f_9524(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3054)
static void C_ccall f_3054(C_word c,C_word *av) C_noret;
C_noret_decl(f_3057)
static void C_ccall f_3057(C_word c,C_word *av) C_noret;
C_noret_decl(f_3051)
static void C_ccall f_3051(C_word c,C_word *av) C_noret;
C_noret_decl(f_2962)
static void C_ccall f_2962(C_word c,C_word *av) C_noret;
C_noret_decl(f_5169)
static void C_fcall f_5169(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2646)
static void C_fcall f_2646(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2649)
static void C_fcall f_2649(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8571)
static void C_ccall f_8571(C_word c,C_word *av) C_noret;
C_noret_decl(f_3048)
static void C_ccall f_3048(C_word c,C_word *av) C_noret;
C_noret_decl(f_8577)
static void C_fcall f_8577(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4011)
static void C_fcall f_4011(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word *av) C_noret;
C_noret_decl(f_5506)
static void C_ccall f_5506(C_word c,C_word *av) C_noret;
C_noret_decl(f_8560)
static void C_fcall f_8560(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5519)
static void C_fcall f_5519(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5517)
static void C_ccall f_5517(C_word c,C_word *av) C_noret;
C_noret_decl(f_6193)
static void C_ccall f_6193(C_word c,C_word *av) C_noret;
C_noret_decl(f_6190)
static void C_ccall f_6190(C_word c,C_word *av) C_noret;
C_noret_decl(f_2959)
static void C_ccall f_2959(C_word c,C_word *av) C_noret;
C_noret_decl(f_5525)
static void C_fcall f_5525(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5008)
static void C_ccall f_5008(C_word c,C_word *av) C_noret;
C_noret_decl(f_6184)
static void C_ccall f_6184(C_word c,C_word *av) C_noret;
C_noret_decl(f_2638)
static void C_ccall f_2638(C_word c,C_word *av) C_noret;
C_noret_decl(f_2632)
static void C_ccall f_2632(C_word c,C_word *av) C_noret;
C_noret_decl(f_2634)
static void C_fcall f_2634(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5535)
static void C_ccall f_5535(C_word c,C_word *av) C_noret;
C_noret_decl(f_9497)
static void C_ccall f_9497(C_word c,C_word *av) C_noret;
C_noret_decl(f_6171)
static void C_ccall f_6171(C_word c,C_word *av) C_noret;
C_noret_decl(f_6858)
static void C_ccall f_6858(C_word c,C_word *av) C_noret;
C_noret_decl(f_9488)
static void C_fcall f_9488(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2935)
static void C_ccall f_2935(C_word c,C_word *av) C_noret;
C_noret_decl(f_2932)
static void C_ccall f_2932(C_word c,C_word *av) C_noret;
C_noret_decl(f_6843)
static void C_ccall f_6843(C_word c,C_word *av) C_noret;
C_noret_decl(f_6160)
static void C_ccall f_6160(C_word c,C_word *av) C_noret;
C_noret_decl(f_6848)
static void C_fcall f_6848(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6164)
static void C_ccall f_6164(C_word c,C_word *av) C_noret;
C_noret_decl(f_2906)
static void C_ccall f_2906(C_word c,C_word *av) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word *av) C_noret;
C_noret_decl(f_5947)
static void C_ccall f_5947(C_word c,C_word *av) C_noret;
C_noret_decl(f_5940)
static void C_fcall f_5940(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6837)
static void C_ccall f_6837(C_word c,C_word *av) C_noret;
C_noret_decl(f_2912)
static void C_ccall f_2912(C_word c,C_word *av) C_noret;
C_noret_decl(f_5951)
static void C_ccall f_5951(C_word c,C_word *av) C_noret;
C_noret_decl(f_3363)
static void C_ccall f_3363(C_word c,C_word *av) C_noret;
C_noret_decl(f_3360)
static void C_ccall f_3360(C_word c,C_word *av) C_noret;
C_noret_decl(f_5675)
static void C_ccall f_5675(C_word c,C_word *av) C_noret;
C_noret_decl(f_5960)
static void C_ccall f_5960(C_word c,C_word *av) C_noret;
C_noret_decl(f_6157)
static void C_ccall f_6157(C_word c,C_word *av) C_noret;
C_noret_decl(f_6819)
static void C_ccall f_6819(C_word c,C_word *av) C_noret;
C_noret_decl(f_4522)
static void C_fcall f_4522(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10851)
static void C_ccall f_10851(C_word c,C_word *av) C_noret;
C_noret_decl(f_3353)
static void C_ccall f_3353(C_word c,C_word *av) C_noret;
C_noret_decl(f_3357)
static void C_ccall f_3357(C_word c,C_word *av) C_noret;
C_noret_decl(f_6154)
static void C_ccall f_6154(C_word c,C_word *av) C_noret;
C_noret_decl(f_6151)
static void C_ccall f_6151(C_word c,C_word *av) C_noret;
C_noret_decl(f_5979)
static void C_ccall f_5979(C_word c,C_word *av) C_noret;
C_noret_decl(f_5975)
static void C_ccall f_5975(C_word c,C_word *av) C_noret;
C_noret_decl(f_6148)
static void C_ccall f_6148(C_word c,C_word *av) C_noret;
C_noret_decl(f_6145)
static void C_fcall f_6145(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6804)
static void C_ccall f_6804(C_word c,C_word *av) C_noret;
C_noret_decl(f_6809)
static void C_fcall f_6809(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5349)
static void C_ccall f_5349(C_word c,C_word *av) C_noret;
C_noret_decl(f_4548)
static void C_ccall f_4548(C_word c,C_word *av) C_noret;
C_noret_decl(f_6142)
static void C_ccall f_6142(C_word c,C_word *av) C_noret;
C_noret_decl(f_9479)
static void C_fcall f_9479(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5909)
static void C_fcall f_5909(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5907)
static void C_ccall f_5907(C_word c,C_word *av) C_noret;
C_noret_decl(f_6139)
static void C_ccall f_6139(C_word c,C_word *av) C_noret;
C_noret_decl(f_6136)
static void C_ccall f_6136(C_word c,C_word *av) C_noret;
C_noret_decl(f_10838)
static void C_ccall f_10838(C_word c,C_word *av) C_noret;
C_noret_decl(f_4545)
static void C_ccall f_4545(C_word c,C_word *av) C_noret;
C_noret_decl(f_10833)
static void C_ccall f_10833(C_word c,C_word *av) C_noret;
C_noret_decl(f_6133)
static void C_ccall f_6133(C_word c,C_word *av) C_noret;
C_noret_decl(f_6130)
static void C_ccall f_6130(C_word c,C_word *av) C_noret;
C_noret_decl(f_5919)
static void C_ccall f_5919(C_word c,C_word *av) C_noret;
C_noret_decl(f_6127)
static void C_ccall f_6127(C_word c,C_word *av) C_noret;
C_noret_decl(f_10867)
static void C_ccall f_10867(C_word c,C_word *av) C_noret;
C_noret_decl(f_4511)
static void C_ccall f_4511(C_word c,C_word *av) C_noret;
C_noret_decl(f_6121)
static void C_ccall f_6121(C_word c,C_word *av) C_noret;
C_noret_decl(f_6124)
static void C_ccall f_6124(C_word c,C_word *av) C_noret;
C_noret_decl(f_5924)
static void C_fcall f_5924(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5013)
static void C_fcall f_5013(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6118)
static void C_ccall f_6118(C_word c,C_word *av) C_noret;
C_noret_decl(f_5011)
static void C_ccall f_5011(C_word c,C_word *av) C_noret;
C_noret_decl(f_10898)
static void C_ccall f_10898(C_word c,C_word *av) C_noret;
C_noret_decl(f_10890)
static void C_ccall f_10890(C_word c,C_word *av) C_noret;
C_noret_decl(f_6115)
static void C_ccall f_6115(C_word c,C_word *av) C_noret;
C_noret_decl(f_6112)
static void C_ccall f_6112(C_word c,C_word *av) C_noret;
C_noret_decl(f_6109)
static void C_ccall f_6109(C_word c,C_word *av) C_noret;
C_noret_decl(f_6106)
static void C_ccall f_6106(C_word c,C_word *av) C_noret;
C_noret_decl(f_8138)
static void C_ccall f_8138(C_word c,C_word *av) C_noret;
C_noret_decl(f_8135)
static void C_ccall f_8135(C_word c,C_word *av) C_noret;
C_noret_decl(f_8132)
static void C_ccall f_8132(C_word c,C_word *av) C_noret;
C_noret_decl(f_6100)
static void C_ccall f_6100(C_word c,C_word *av) C_noret;
C_noret_decl(f_4508)
static void C_ccall f_4508(C_word c,C_word *av) C_noret;
C_noret_decl(f_6103)
static void C_ccall f_6103(C_word c,C_word *av) C_noret;
C_noret_decl(f_4505)
static void C_ccall f_4505(C_word c,C_word *av) C_noret;
C_noret_decl(f_10107)
static void C_ccall f_10107(C_word c,C_word *av) C_noret;
C_noret_decl(f_8126)
static void C_ccall f_8126(C_word c,C_word *av) C_noret;
C_noret_decl(f_8123)
static void C_ccall f_8123(C_word c,C_word *av) C_noret;
C_noret_decl(f_8120)
static void C_ccall f_8120(C_word c,C_word *av) C_noret;
C_noret_decl(f_5689)
static void C_ccall f_5689(C_word c,C_word *av) C_noret;
C_noret_decl(f_6892)
static void C_ccall f_6892(C_word c,C_word *av) C_noret;
C_noret_decl(f_6895)
static void C_ccall f_6895(C_word c,C_word *av) C_noret;
C_noret_decl(f_8147)
static void C_ccall f_8147(C_word c,C_word *av) C_noret;
C_noret_decl(f_8143)
static void C_ccall f_8143(C_word c,C_word *av) C_noret;
C_noret_decl(f_6898)
static void C_ccall f_6898(C_word c,C_word *av) C_noret;
C_noret_decl(f_6885)
static void C_ccall f_6885(C_word c,C_word *av) C_noret;
C_noret_decl(f_6889)
static void C_ccall f_6889(C_word c,C_word *av) C_noret;
C_noret_decl(f_10928)
static void C_ccall f_10928(C_word c,C_word *av) C_noret;
C_noret_decl(f_10920)
static void C_ccall f_10920(C_word c,C_word *av) C_noret;
C_noret_decl(f_10143)
static void C_ccall f_10143(C_word c,C_word *av) C_noret;
C_noret_decl(f_6871)
static void C_ccall f_6871(C_word c,C_word *av) C_noret;
C_noret_decl(f_10140)
static void C_ccall f_10140(C_word c,C_word *av) C_noret;
C_noret_decl(f_4598)
static void C_ccall f_4598(C_word c,C_word *av) C_noret;
C_noret_decl(f_4595)
static void C_ccall f_4595(C_word c,C_word *av) C_noret;
C_noret_decl(f_10137)
static void C_ccall f_10137(C_word c,C_word *av) C_noret;
C_noret_decl(f_10131)
static void C_ccall f_10131(C_word c,C_word *av) C_noret;
C_noret_decl(f_8117)
static void C_ccall f_8117(C_word c,C_word *av) C_noret;
C_noret_decl(f_4592)
static void C_ccall f_4592(C_word c,C_word *av) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word *av) C_noret;
C_noret_decl(f_2544)
static void C_ccall f_2544(C_word c,C_word *av) C_noret;
C_noret_decl(f_8113)
static void C_ccall f_8113(C_word c,C_word *av) C_noret;
C_noret_decl(f_6091)
static void C_ccall f_6091(C_word c,C_word *av) C_noret;
C_noret_decl(f_6097)
static void C_ccall f_6097(C_word c,C_word *av) C_noret;
C_noret_decl(f_6094)
static void C_ccall f_6094(C_word c,C_word *av) C_noret;
C_noret_decl(f_4242)
static void C_ccall f_4242(C_word c,C_word *av) C_noret;
C_noret_decl(f_4245)
static void C_ccall f_4245(C_word c,C_word *av) C_noret;
C_noret_decl(f_8100)
static void C_ccall f_8100(C_word c,C_word *av) C_noret;
C_noret_decl(f_10119)
static void C_ccall f_10119(C_word c,C_word *av) C_noret;
C_noret_decl(f_10116)
static void C_ccall f_10116(C_word c,C_word *av) C_noret;
C_noret_decl(f_6085)
static void C_ccall f_6085(C_word c,C_word *av) C_noret;
C_noret_decl(f_10113)
static void C_ccall f_10113(C_word c,C_word *av) C_noret;
C_noret_decl(f_6088)
static void C_ccall f_6088(C_word c,C_word *av) C_noret;
C_noret_decl(f_4297)
static void C_ccall f_4297(C_word c,C_word *av) C_noret;
C_noret_decl(f_4589)
static void C_ccall f_4589(C_word c,C_word *av) C_noret;
C_noret_decl(f_4586)
static void C_ccall f_4586(C_word c,C_word *av) C_noret;
C_noret_decl(f_10964)
static void C_ccall f_10964(C_word c,C_word *av) C_noret;
C_noret_decl(f_6070)
static void C_ccall f_6070(C_word c,C_word *av) C_noret;
C_noret_decl(f_6073)
static void C_ccall f_6073(C_word c,C_word *av) C_noret;
C_noret_decl(f_2538)
static void C_ccall f_2538(C_word c,C_word *av) C_noret;
C_noret_decl(f_6076)
static void C_ccall f_6076(C_word c,C_word *av) C_noret;
C_noret_decl(f_6079)
static void C_fcall f_6079(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4223)
static void C_ccall f_4223(C_word c,C_word *av) C_noret;
C_noret_decl(f_10967)
static void C_ccall f_10967(C_word c,C_word *av) C_noret;
C_noret_decl(f_2535)
static void C_ccall f_2535(C_word c,C_word *av) C_noret;
C_noret_decl(f_4226)
static void C_ccall f_4226(C_word c,C_word *av) C_noret;
C_noret_decl(f_6061)
static void C_ccall f_6061(C_word c,C_word *av) C_noret;
C_noret_decl(f_6064)
static void C_ccall f_6064(C_word c,C_word *av) C_noret;

C_noret_decl(trf_5102)
static void C_ccall trf_5102(C_word c,C_word *av) C_noret;
static void C_ccall trf_5102(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5102(t0,t1,t2,t3);}

C_noret_decl(trf_8090)
static void C_ccall trf_8090(C_word c,C_word *av) C_noret;
static void C_ccall trf_8090(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8090(t0,t1,t2);}

C_noret_decl(trf_6446)
static void C_ccall trf_6446(C_word c,C_word *av) C_noret;
static void C_ccall trf_6446(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6446(t0,t1);}

C_noret_decl(trf_7409)
static void C_ccall trf_7409(C_word c,C_word *av) C_noret;
static void C_ccall trf_7409(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7409(t0,t1,t2);}

C_noret_decl(trf_2601)
static void C_ccall trf_2601(C_word c,C_word *av) C_noret;
static void C_ccall trf_2601(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2601(t0,t1,t2);}

C_noret_decl(trf_8629)
static void C_ccall trf_8629(C_word c,C_word *av) C_noret;
static void C_ccall trf_8629(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8629(t0,t1,t2);}

C_noret_decl(trf_4863)
static void C_ccall trf_4863(C_word c,C_word *av) C_noret;
static void C_ccall trf_4863(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4863(t0,t1);}

C_noret_decl(trf_4860)
static void C_ccall trf_4860(C_word c,C_word *av) C_noret;
static void C_ccall trf_4860(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4860(t0,t1);}

C_noret_decl(trf_8819)
static void C_ccall trf_8819(C_word c,C_word *av) C_noret;
static void C_ccall trf_8819(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8819(t0,t1,t2);}

C_noret_decl(trf_4802)
static void C_ccall trf_4802(C_word c,C_word *av) C_noret;
static void C_ccall trf_4802(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4802(t0,t1);}

C_noret_decl(trf_5321)
static void C_ccall trf_5321(C_word c,C_word *av) C_noret;
static void C_ccall trf_5321(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5321(t0,t1);}

C_noret_decl(trf_10652)
static void C_ccall trf_10652(C_word c,C_word *av) C_noret;
static void C_ccall trf_10652(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10652(t0,t1);}

C_noret_decl(trf_8671)
static void C_ccall trf_8671(C_word c,C_word *av) C_noret;
static void C_ccall trf_8671(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8671(t0,t1);}

C_noret_decl(trf_5767)
static void C_ccall trf_5767(C_word c,C_word *av) C_noret;
static void C_ccall trf_5767(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5767(t0,t1,t2,t3);}

C_noret_decl(trf_8688)
static void C_ccall trf_8688(C_word c,C_word *av) C_noret;
static void C_ccall trf_8688(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8688(t0,t1);}

C_noret_decl(trf_9257)
static void C_ccall trf_9257(C_word c,C_word *av) C_noret;
static void C_ccall trf_9257(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9257(t0,t1);}

C_noret_decl(trf_5774)
static void C_ccall trf_5774(C_word c,C_word *av) C_noret;
static void C_ccall trf_5774(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5774(t0,t1);}

C_noret_decl(trf_9284)
static void C_ccall trf_9284(C_word c,C_word *av) C_noret;
static void C_ccall trf_9284(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9284(t0,t1);}

C_noret_decl(trf_9229)
static void C_ccall trf_9229(C_word c,C_word *av) C_noret;
static void C_ccall trf_9229(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9229(t0,t1);}

C_noret_decl(trf_2564)
static void C_ccall trf_2564(C_word c,C_word *av) C_noret;
static void C_ccall trf_2564(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2564(t0,t1,t2);}

C_noret_decl(trf_5736)
static void C_ccall trf_5736(C_word c,C_word *av) C_noret;
static void C_ccall trf_5736(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5736(t0,t1,t2,t3);}

C_noret_decl(trf_3545)
static void C_ccall trf_3545(C_word c,C_word *av) C_noret;
static void C_ccall trf_3545(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3545(t0,t1,t2,t3);}

C_noret_decl(trf_9860)
static void C_ccall trf_9860(C_word c,C_word *av) C_noret;
static void C_ccall trf_9860(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9860(t0,t1);}

C_noret_decl(trf_7135)
static void C_ccall trf_7135(C_word c,C_word *av) C_noret;
static void C_ccall trf_7135(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7135(t0,t1,t2);}

C_noret_decl(trf_8253)
static void C_ccall trf_8253(C_word c,C_word *av) C_noret;
static void C_ccall trf_8253(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8253(t0,t1);}

C_noret_decl(trf_4764)
static void C_ccall trf_4764(C_word c,C_word *av) C_noret;
static void C_ccall trf_4764(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4764(t0,t1,t2,t3);}

C_noret_decl(trf_7092)
static void C_ccall trf_7092(C_word c,C_word *av) C_noret;
static void C_ccall trf_7092(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7092(t0,t1,t2);}

C_noret_decl(trf_4733)
static void C_ccall trf_4733(C_word c,C_word *av) C_noret;
static void C_ccall trf_4733(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4733(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4743)
static void C_ccall trf_4743(C_word c,C_word *av) C_noret;
static void C_ccall trf_4743(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4743(t0,t1);}

C_noret_decl(trf_5650)
static void C_ccall trf_5650(C_word c,C_word *av) C_noret;
static void C_ccall trf_5650(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5650(t0,t1,t2);}

C_noret_decl(trf_10215)
static void C_ccall trf_10215(C_word c,C_word *av) C_noret;
static void C_ccall trf_10215(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10215(t0,t1);}

C_noret_decl(trf_6202)
static void C_ccall trf_6202(C_word c,C_word *av) C_noret;
static void C_ccall trf_6202(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6202(t0,t1,t2,t3);}

C_noret_decl(trf_3426)
static void C_ccall trf_3426(C_word c,C_word *av) C_noret;
static void C_ccall trf_3426(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3426(t0,t1);}

C_noret_decl(trf_3420)
static void C_ccall trf_3420(C_word c,C_word *av) C_noret;
static void C_ccall trf_3420(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3420(t0,t1);}

C_noret_decl(trf_3797)
static void C_ccall trf_3797(C_word c,C_word *av) C_noret;
static void C_ccall trf_3797(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3797(t0,t1);}

C_noret_decl(trf_4704)
static void C_ccall trf_4704(C_word c,C_word *av) C_noret;
static void C_ccall trf_4704(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4704(t0,t1,t2,t3);}

C_noret_decl(trf_6592)
static void C_ccall trf_6592(C_word c,C_word *av) C_noret;
static void C_ccall trf_6592(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6592(t0,t1,t2);}

C_noret_decl(trf_6529)
static void C_ccall trf_6529(C_word c,C_word *av) C_noret;
static void C_ccall trf_6529(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6529(t0,t1,t2);}

C_noret_decl(trf_5222)
static void C_ccall trf_5222(C_word c,C_word *av) C_noret;
static void C_ccall trf_5222(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5222(t0,t1,t2);}

C_noret_decl(trf_6554)
static void C_ccall trf_6554(C_word c,C_word *av) C_noret;
static void C_ccall trf_6554(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6554(t0,t1);}

C_noret_decl(trf_6556)
static void C_ccall trf_6556(C_word c,C_word *av) C_noret;
static void C_ccall trf_6556(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6556(t0,t1,t2,t3);}

C_noret_decl(trf_5245)
static void C_ccall trf_5245(C_word c,C_word *av) C_noret;
static void C_ccall trf_5245(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5245(t0,t1);}

C_noret_decl(trf_7160)
static void C_ccall trf_7160(C_word c,C_word *av) C_noret;
static void C_ccall trf_7160(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7160(t0,t1,t2);}

C_noret_decl(trf_8178)
static void C_ccall trf_8178(C_word c,C_word *av) C_noret;
static void C_ccall trf_8178(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8178(t0,t1);}

C_noret_decl(trf_8183)
static void C_ccall trf_8183(C_word c,C_word *av) C_noret;
static void C_ccall trf_8183(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8183(t0,t1,t2);}

C_noret_decl(trf_3508)
static void C_ccall trf_3508(C_word c,C_word *av) C_noret;
static void C_ccall trf_3508(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3508(t0,t1,t2,t3);}

C_noret_decl(trf_8502)
static void C_ccall trf_8502(C_word c,C_word *av) C_noret;
static void C_ccall trf_8502(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8502(t0,t1);}

C_noret_decl(trf_5264)
static void C_ccall trf_5264(C_word c,C_word *av) C_noret;
static void C_ccall trf_5264(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5264(t0,t1);}

C_noret_decl(trf_8521)
static void C_ccall trf_8521(C_word c,C_word *av) C_noret;
static void C_ccall trf_8521(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8521(t0,t1,t2);}

C_noret_decl(trf_3473)
static void C_ccall trf_3473(C_word c,C_word *av) C_noret;
static void C_ccall trf_3473(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3473(t0,t1,t2,t3);}

C_noret_decl(trf_8490)
static void C_ccall trf_8490(C_word c,C_word *av) C_noret;
static void C_ccall trf_8490(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8490(t0,t1);}

C_noret_decl(trf_3945)
static void C_ccall trf_3945(C_word c,C_word *av) C_noret;
static void C_ccall trf_3945(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3945(t0,t1,t2,t3);}

C_noret_decl(trf_3138)
static void C_ccall trf_3138(C_word c,C_word *av) C_noret;
static void C_ccall trf_3138(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3138(t0,t1,t2,t3);}

C_noret_decl(trf_3974)
static void C_ccall trf_3974(C_word c,C_word *av) C_noret;
static void C_ccall trf_3974(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3974(t0,t1,t2,t3);}

C_noret_decl(trf_5465)
static void C_ccall trf_5465(C_word c,C_word *av) C_noret;
static void C_ccall trf_5465(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5465(t0,t1);}

C_noret_decl(trf_5468)
static void C_ccall trf_5468(C_word c,C_word *av) C_noret;
static void C_ccall trf_5468(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5468(t0,t1);}

C_noret_decl(trf_3110)
static void C_ccall trf_3110(C_word c,C_word *av) C_noret;
static void C_ccall trf_3110(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3110(t0,t1,t2,t3);}

C_noret_decl(trf_3663)
static void C_ccall trf_3663(C_word c,C_word *av) C_noret;
static void C_ccall trf_3663(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3663(t0,t1);}

C_noret_decl(trf_6951)
static void C_ccall trf_6951(C_word c,C_word *av) C_noret;
static void C_ccall trf_6951(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6951(t0,t1,t2);}

C_noret_decl(trf_6051)
static void C_ccall trf_6051(C_word c,C_word *av) C_noret;
static void C_ccall trf_6051(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6051(t0,t1);}

C_noret_decl(trf_6388)
static void C_ccall trf_6388(C_word c,C_word *av) C_noret;
static void C_ccall trf_6388(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6388(t0,t1);}

C_noret_decl(trf_4939)
static void C_ccall trf_4939(C_word c,C_word *av) C_noret;
static void C_ccall trf_4939(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4939(t0,t1,t2);}

C_noret_decl(trf_8033)
static void C_ccall trf_8033(C_word c,C_word *av) C_noret;
static void C_ccall trf_8033(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8033(t0,t1,t2,t3);}

C_noret_decl(trf_9975)
static void C_ccall trf_9975(C_word c,C_word *av) C_noret;
static void C_ccall trf_9975(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9975(t0,t1);}

C_noret_decl(trf_7352)
static void C_ccall trf_7352(C_word c,C_word *av) C_noret;
static void C_ccall trf_7352(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_7352(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7359)
static void C_ccall trf_7359(C_word c,C_word *av) C_noret;
static void C_ccall trf_7359(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7359(t0,t1);}

C_noret_decl(trf_8361)
static void C_ccall trf_8361(C_word c,C_word *av) C_noret;
static void C_ccall trf_8361(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8361(t0,t1);}

C_noret_decl(trf_8382)
static void C_ccall trf_8382(C_word c,C_word *av) C_noret;
static void C_ccall trf_8382(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8382(t0,t1);}

C_noret_decl(trf_6979)
static void C_ccall trf_6979(C_word c,C_word *av) C_noret;
static void C_ccall trf_6979(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6979(t0,t1);}

C_noret_decl(trf_5073)
static void C_ccall trf_5073(C_word c,C_word *av) C_noret;
static void C_ccall trf_5073(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5073(t0,t1);}

C_noret_decl(trf_7604)
static void C_ccall trf_7604(C_word c,C_word *av) C_noret;
static void C_ccall trf_7604(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7604(t0,t1);}

C_noret_decl(trf_7549)
static void C_ccall trf_7549(C_word c,C_word *av) C_noret;
static void C_ccall trf_7549(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7549(t0,t1);}

C_noret_decl(trf_6625)
static void C_ccall trf_6625(C_word c,C_word *av) C_noret;
static void C_ccall trf_6625(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6625(t0,t1);}

C_noret_decl(trf_7528)
static void C_ccall trf_7528(C_word c,C_word *av) C_noret;
static void C_ccall trf_7528(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7528(t0,t1);}

C_noret_decl(trf_7537)
static void C_ccall trf_7537(C_word c,C_word *av) C_noret;
static void C_ccall trf_7537(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7537(t0,t1);}

C_noret_decl(trf_5142)
static void C_ccall trf_5142(C_word c,C_word *av) C_noret;
static void C_ccall trf_5142(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5142(t0,t1,t2);}

C_noret_decl(trf_8722)
static void C_ccall trf_8722(C_word c,C_word *av) C_noret;
static void C_ccall trf_8722(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8722(t0,t1);}

C_noret_decl(trf_5410)
static void C_ccall trf_5410(C_word c,C_word *av) C_noret;
static void C_ccall trf_5410(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5410(t0,t1);}

C_noret_decl(trf_8756)
static void C_ccall trf_8756(C_word c,C_word *av) C_noret;
static void C_ccall trf_8756(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8756(t0,t1);}

C_noret_decl(trf_5423)
static void C_ccall trf_5423(C_word c,C_word *av) C_noret;
static void C_ccall trf_5423(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5423(t0,t1,t2,t3);}

C_noret_decl(trf_7497)
static void C_ccall trf_7497(C_word c,C_word *av) C_noret;
static void C_ccall trf_7497(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7497(t0,t1,t2);}

C_noret_decl(trf_8773)
static void C_ccall trf_8773(C_word c,C_word *av) C_noret;
static void C_ccall trf_8773(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8773(t0,t1);}

C_noret_decl(trf_6261)
static void C_ccall trf_6261(C_word c,C_word *av) C_noret;
static void C_ccall trf_6261(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6261(t0,t1,t2);}

C_noret_decl(trf_7472)
static void C_ccall trf_7472(C_word c,C_word *av) C_noret;
static void C_ccall trf_7472(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7472(t0,t1,t2);}

C_noret_decl(trf_5863)
static void C_ccall trf_5863(C_word c,C_word *av) C_noret;
static void C_ccall trf_5863(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5863(t0,t1);}

C_noret_decl(trf_5985)
static void C_ccall trf_5985(C_word c,C_word *av) C_noret;
static void C_ccall trf_5985(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5985(t0,t1,t2,t3);}

C_noret_decl(trf_8705)
static void C_ccall trf_8705(C_word c,C_word *av) C_noret;
static void C_ccall trf_8705(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8705(t0,t1);}

C_noret_decl(trf_8739)
static void C_ccall trf_8739(C_word c,C_word *av) C_noret;
static void C_ccall trf_8739(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8739(t0,t1);}

C_noret_decl(trf_2854)
static void C_ccall trf_2854(C_word c,C_word *av) C_noret;
static void C_ccall trf_2854(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2854(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8594)
static void C_ccall trf_8594(C_word c,C_word *av) C_noret;
static void C_ccall trf_8594(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8594(t0,t1);}

C_noret_decl(trf_10192)
static void C_ccall trf_10192(C_word c,C_word *av) C_noret;
static void C_ccall trf_10192(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10192(t0,t1,t2);}

C_noret_decl(trf_7561)
static void C_ccall trf_7561(C_word c,C_word *av) C_noret;
static void C_ccall trf_7561(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7561(t0,t1);}

C_noret_decl(trf_7571)
static void C_ccall trf_7571(C_word c,C_word *av) C_noret;
static void C_ccall trf_7571(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7571(t0,t1,t2);}

C_noret_decl(trf_9524)
static void C_ccall trf_9524(C_word c,C_word *av) C_noret;
static void C_ccall trf_9524(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9524(t0,t1);}

C_noret_decl(trf_5169)
static void C_ccall trf_5169(C_word c,C_word *av) C_noret;
static void C_ccall trf_5169(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5169(t0,t1,t2);}

C_noret_decl(trf_2646)
static void C_ccall trf_2646(C_word c,C_word *av) C_noret;
static void C_ccall trf_2646(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2646(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2649)
static void C_ccall trf_2649(C_word c,C_word *av) C_noret;
static void C_ccall trf_2649(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2649(t0,t1,t2,t3);}

C_noret_decl(trf_8577)
static void C_ccall trf_8577(C_word c,C_word *av) C_noret;
static void C_ccall trf_8577(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8577(t0,t1);}

C_noret_decl(trf_4011)
static void C_ccall trf_4011(C_word c,C_word *av) C_noret;
static void C_ccall trf_4011(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4011(t0,t1,t2,t3);}

C_noret_decl(trf_8560)
static void C_ccall trf_8560(C_word c,C_word *av) C_noret;
static void C_ccall trf_8560(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8560(t0,t1);}

C_noret_decl(trf_5519)
static void C_ccall trf_5519(C_word c,C_word *av) C_noret;
static void C_ccall trf_5519(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5519(t0,t1);}

C_noret_decl(trf_5525)
static void C_ccall trf_5525(C_word c,C_word *av) C_noret;
static void C_ccall trf_5525(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5525(t0,t1,t2,t3);}

C_noret_decl(trf_2634)
static void C_ccall trf_2634(C_word c,C_word *av) C_noret;
static void C_ccall trf_2634(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2634(t0,t1,t2);}

C_noret_decl(trf_9488)
static void C_ccall trf_9488(C_word c,C_word *av) C_noret;
static void C_ccall trf_9488(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9488(t0,t1);}

C_noret_decl(trf_6848)
static void C_ccall trf_6848(C_word c,C_word *av) C_noret;
static void C_ccall trf_6848(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6848(t0,t1,t2);}

C_noret_decl(trf_5940)
static void C_ccall trf_5940(C_word c,C_word *av) C_noret;
static void C_ccall trf_5940(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5940(t0,t1);}

C_noret_decl(trf_4522)
static void C_ccall trf_4522(C_word c,C_word *av) C_noret;
static void C_ccall trf_4522(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4522(t0,t1,t2,t3);}

C_noret_decl(trf_6145)
static void C_ccall trf_6145(C_word c,C_word *av) C_noret;
static void C_ccall trf_6145(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6145(t0,t1);}

C_noret_decl(trf_6809)
static void C_ccall trf_6809(C_word c,C_word *av) C_noret;
static void C_ccall trf_6809(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6809(t0,t1,t2);}

C_noret_decl(trf_9479)
static void C_ccall trf_9479(C_word c,C_word *av) C_noret;
static void C_ccall trf_9479(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9479(t0,t1);}

C_noret_decl(trf_5909)
static void C_ccall trf_5909(C_word c,C_word *av) C_noret;
static void C_ccall trf_5909(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5909(t0,t1,t2);}

C_noret_decl(trf_5924)
static void C_ccall trf_5924(C_word c,C_word *av) C_noret;
static void C_ccall trf_5924(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5924(t0,t1,t2,t3);}

C_noret_decl(trf_5013)
static void C_ccall trf_5013(C_word c,C_word *av) C_noret;
static void C_ccall trf_5013(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5013(t0,t1,t2);}

C_noret_decl(trf_6079)
static void C_ccall trf_6079(C_word c,C_word *av) C_noret;
static void C_ccall trf_6079(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6079(t0,t1);}

/* k6065 in k6062 in k6059 in a6056 in procedures in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_6067,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6070,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6727,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:754: lambda-literal-callee-signatures */
t5=*((C_word*)lf[486]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k10956 in k2539 in k2536 in k2533 */
static void C_ccall f_10958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10958,2,av);}
a=C_alloc(5);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[329]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10964,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:57: ##sys#print */
t6=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[860];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* a10933 in k10926 in encode-literal in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10934,3,av);}
t3=C_slot(((C_word*)t0)[2],t2);
/* c-backend.scm:1441: encode-literal */
t4=*((C_word*)lf[358]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k10930 in k10926 in encode-literal in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10932(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10932,2,av);}
/* c-backend.scm:1438: cons* */
t2=*((C_word*)lf[858]+1);{
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

/* doloop655 in k5095 in k5092 in k5089 in k5078 in declarations in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5102(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5102,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5112,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t3);
/* c-backend.scm:581: ##sys#lambda-info->string */
t6=*((C_word*)lf[285]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k10989 in k10962 in k10956 in k2539 in k2536 in k2533 */
static void C_ccall f_10991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10991,2,av);}
/* c-backend.scm:57: number->string */
t2=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* for-each-loop1278 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_8090(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8090,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8100,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:1082: g1279 */
t5=((C_word*)t0)[3];
f_7497(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5110 in doloop655 in k5095 in k5092 in k5089 in k5078 in declarations in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5112(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,11)))){
C_save_and_reclaim((void *)f_5112,2,av);}
a=C_alloc(20);
t2=t1;
t3=C_i_string_length(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5118,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=C_a_i_arithmetic_shift(&a,2,t4,C_fix(-16));
t7=C_a_i_arithmetic_shift(&a,2,t4,C_fix(-8));
t8=C_a_i_bitwise_and(&a,2,C_fix(255),t7);
t9=C_fixnum_and(C_fix(255),t4);
/* c-backend.scm:583: gen */
t10=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 12) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(12);
}
av2[0]=t10;
av2[1]=t5;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[283];
av2[4]=((C_word*)t0)[2];
av2[5]=lf[284];
av2[6]=t6;
av2[7]=C_make_character(44);
av2[8]=t8;
av2[9]=C_make_character(44);
av2[10]=t9;
av2[11]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t10+1)))(12,av2);}}

/* k5116 in k5110 in doloop655 in k5095 in k5092 in k5089 in k5078 in declarations in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_5118,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5121,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5169,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5169(t6,t2,C_fix(0));}

/* k6444 in k6416 in k6413 in k6410 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in ... */
static void C_fcall f_6446(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,7)))){
C_save_and_reclaim_args((void *)trf_6446,2,t0,t1);}
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],lf[248]);
if(C_truep(t2)){
if(C_truep(C_i_greaterp(((C_word*)t0)[3],C_fix(2)))){
/* c-backend.scm:857: gen */
t3=*((C_word*)lf[1]+1);{
C_word av2[8];
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[435];
av2[4]=((C_word*)t0)[3];
av2[5]=lf[436];
av2[6]=((C_word*)t0)[3];
av2[7]=lf[437];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}
else{
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6421(2,av2);}}}
else{
/* c-backend.scm:858: gen */
t3=*((C_word*)lf[1]+1);{
C_word av2[8];
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[438];
av2[4]=((C_word*)t0)[3];
av2[5]=lf[439];
av2[6]=((C_word*)t0)[3];
av2[7]=lf[440];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_6421(2,av2);}}}

/* k8080 in k7971 in k7968 in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8082,2,av);}
/* c-backend.scm:1122: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[652];
av2[4]=t1;
av2[5]=lf[653];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k6428 in k6419 in k6416 in k6413 in k6410 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in ... */
static void C_ccall f_6430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6430,2,av);}
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm:863: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[430];
av2[4]=((C_word*)t0)[4];
av2[5]=lf[431];
av2[6]=((C_word*)t0)[5];
av2[7]=lf[432];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}
else{
/* c-backend.scm:863: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[430];
av2[4]=((C_word*)t0)[4];
av2[5]=lf[433];
av2[6]=((C_word*)t0)[5];
av2[7]=lf[432];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}}

/* k6419 in k6416 in k6413 in k6410 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in ... */
static void C_ccall f_6421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6421,2,av);}
a=C_alloc(6);
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm:868: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_make_character(123);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6430,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(*((C_word*)lf[423]+1))){
/* c-backend.scm:862: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[434];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6430(2,av2);}}}}

/* k7431 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_7433,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7436,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7443,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7451,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1044: make-variable-list */
t5=*((C_word*)lf[314]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[571];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k7434 in k7431 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 in ... */
static void C_ccall f_7436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7436,2,av);}
/* c-backend.scm:1045: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[569];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7441 in k7431 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 in ... */
static void C_ccall f_7443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7443,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[1]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* k4202 in k4097 in k4091 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4204,2,av);}
/* c-backend.scm:367: lambda-literal-closure-size */
t2=*((C_word*)lf[159]+1);{
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

/* k4198 in k4097 in k4091 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4200(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4200,2,av);}
a=C_alloc(16);
t2=C_i_zerop(t1);
t3=t2;
t4=C_u_i_car(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4109,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=t4,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* c-backend.scm:369: gen */
t6=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_make_character(40);
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k7417 in doloop1194 in k7402 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in ... */
static void C_ccall f_7419(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7419,2,av);}
a=C_alloc(4);
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7409(t3,((C_word*)t0)[4],t2);}

/* doloop1194 in k7402 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 in ... */
static void C_fcall f_7409(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,7)))){
C_save_and_reclaim_args((void *)trf_7409,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_greater_or_equalp(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7419,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_plus(&a,2,t2,C_fix(3));
/* c-backend.scm:1041: gen */
t5=*((C_word*)lf[1]+1);{
C_word av2[8];
av2[0]=t5;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[561];
av2[4]=t2;
av2[5]=lf[562];
av2[6]=t4;
av2[7]=lf[563];
((C_proc)(void*)(*((C_word*)t5+1)))(8,av2);}}}

/* k7402 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7404,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7409,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_7409(t5,((C_word*)t0)[3],C_fix(0));}

/* k10376 in k10373 in k10370 in k10364 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10378,2,av);}
/* c-backend.scm:1367: get-output-string */
t2=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10370 in k10364 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10372,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10375,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1367: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10373 in k10370 in k10364 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_10375,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10378,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1367: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[837];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* for-each-loop47 in k2594 in gen-list in k2539 in k2536 in k2533 */
static void C_fcall f_2601(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2601,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2611,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:49: display */
t5=*((C_word*)lf[3]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[0]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10364 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10366(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10366,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[329]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10372,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1367: ##sys#print */
t6=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[838];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3585 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_3587,2,av);}
a=C_alloc(11);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3593,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:277: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=((C_word*)t0)[9];
av2[4]=C_make_character(40);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3608,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:282: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(123);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* ##compiler#generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7=av[7];
C_word t8=av[8];
C_word t9=av[9];
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_2628,10,av);}
a=C_alloc(17);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2632,a[2]=t4,a[3]=t11,a[4]=t6,a[5]=t2,a[6]=t3,a[7]=t8,a[8]=t5,a[9]=t1,a[10]=t9,tmp=(C_word)a,a+=11,tmp);
t13=C_a_i_plus(&a,2,*((C_word*)lf[501]+1),C_fix(1));
/* c-backend.scm:67: flonum-print-precision */
t14=*((C_word*)lf[502]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=t12;
av2[2]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(3,av2);}}

/* k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2626(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,c,10)))){
C_save_and_reclaim((void *)f_2626,2,av);}
a=C_alloc(30);
t2=C_mutate2((C_word*)lf[6]+1 /* (set! ##compiler#unique-id ...) */,t1);
t3=C_mutate2((C_word*)lf[7]+1 /* (set! ##compiler#generate-code ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2628,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate2((C_word*)lf[493]+1 /* (set! emit-debug-table ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6773,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate2((C_word*)lf[492]+1 /* (set! emit-procedure-table ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6885,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate2((C_word*)lf[475]+1 /* (set! ##compiler#cleanup ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6942,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate2((C_word*)lf[314]+1 /* (set! ##compiler#make-variable-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7026,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate2((C_word*)lf[318]+1 /* (set! ##compiler#make-argument-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7042,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate2((C_word*)lf[497]+1 /* (set! ##compiler#generate-external-variables ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7058,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate2((C_word*)lf[255]+1 /* (set! ##compiler#generate-foreign-callback-stub-prototypes ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7115,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate2((C_word*)lf[495]+1 /* (set! ##compiler#generate-foreign-stubs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7158,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate2((C_word*)lf[494]+1 /* (set! generate-foreign-callback-stubs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7495,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate2((C_word*)lf[538]+1 /* (set! ##compiler#generate-foreign-callback-header ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8113,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate2((C_word*)lf[202]+1 /* (set! ##compiler#foreign-type-declaration ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8176,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate2((C_word*)lf[201]+1 /* (set! ##compiler#foreign-argument-conversion ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9227,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate2((C_word*)lf[196]+1 /* (set! ##compiler#foreign-result-conversion ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9858,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate2((C_word*)lf[358]+1 /* (set! ##compiler#encode-literal ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10643,tmp=(C_word)a,a+=2,tmp));
t18=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t18;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}

/* k3982 in for-each-loop420 in k3964 in k3956 in k3942 in k3939 in k4067 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3984,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3974(t4,((C_word*)t0)[5],t2,t3);}

/* k8625 in k8603 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8627,2,av);}
/* c-backend.scm:1216: string-intersperse */
t2=*((C_word*)lf[272]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[718];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1626 in k8603 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_8629(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8629,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8654,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[202]+1);
/* c-backend.scm:1217: g1649 */
t6=*((C_word*)lf[202]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[719];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4879 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4881(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_4881,2,av);}
a=C_alloc(20);
t2=C_i_vector_ref(t1,C_fix(1));
t3=t2;
t4=C_i_vector_ref(t1,C_fix(2));
t5=t4;
t6=C_i_vector_ref(t1,C_fix(3));
t7=t6;
t8=C_i_vector_ref(t1,C_fix(4));
t9=C_i_vector_ref(t1,C_fix(5));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4899,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=C_a_i_plus(&a,2,C_fix(1900),t9);
t12=t11;
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4980,a[2]=t10,a[3]=((C_word*)t0)[3],a[4]=t12,a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=t5,a[8]=t7,tmp=(C_word)a,a+=9,tmp);
t14=C_a_i_plus(&a,2,t8,C_fix(1));
/* c-backend.scm:538: pad0 */
f_4863(t13,t14);}

/* k8652 in map-loop1626 in k8603 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8654(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8654,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8629(t6,((C_word*)t0)[5],t5);}

/* k3594 in k3591 in k3585 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3596,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3599,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:279: expr-args */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4704(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3591 in k3585 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_3593,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f11805,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:279: expr-args */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4704(t4,t3,((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
/* c-backend.scm:278: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(116);
av2[3]=((C_word*)t0)[7];
av2[4]=C_make_character(44);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k3258 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3260,2,av);}
/* c-backend.scm:194: c-ify-string */
t2=*((C_word*)lf[73]+1);{
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

/* k4897 in k4879 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4899,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4902,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:544: gen-list */
t3=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=*((C_word*)lf[266]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3597 in k3594 in k3591 in k3585 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3599,2,av);}
/* c-backend.scm:280: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3437 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3439,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3442,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:252: push-args */
t3=((C_word*)((C_word*)t0)[5])[1];
f_4733(t3,t2,((C_word*)t0)[6],((C_word*)t0)[7],lf[98]);}

/* k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3430(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_3430,2,av);}
a=C_alloc(21);
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_eqp(lf[32],t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3439,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:251: gen */
t5=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_make_character(123);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
if(C_truep(((C_word*)t0)[8])){
t4=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3466,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[8],a[14]=((C_word*)t0)[5],a[15]=((C_word*)t0)[2],tmp=(C_word)a,a+=16,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3657,a[2]=((C_word*)t0)[8],a[3]=t4,a[4]=((C_word*)t0)[12],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:256: lambda-literal-id */
t6=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[12];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3663,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[15],a[9]=((C_word*)t0)[16],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t5=C_slot(((C_word*)t0)[2],C_fix(1));
t6=C_eqp(lf[67],t5);
if(C_truep(t6)){
t7=*((C_word*)lf[138]+1);
if(C_truep(*((C_word*)lf[138]+1))){
t8=t4;
f_3663(t8,C_SCHEME_FALSE);}
else{
t8=*((C_word*)lf[143]+1);
t9=t4;
f_3663(t9,(C_truep(*((C_word*)lf[143]+1))?C_SCHEME_FALSE:C_i_not(((C_word*)t0)[16])));}}
else{
t7=t4;
f_3663(t7,C_SCHEME_FALSE);}}}}

/* k3254 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3256,2,av);}
/* c-backend.scm:193: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[70];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[71];
av2[5]=t1;
av2[6]=lf[72];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* pad0 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_4863(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_4863,2,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_lessp(t2,C_fix(10)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4878,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:528: number->string */
t4=*((C_word*)lf[107]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2609 in for-each-loop47 in k2594 in gen-list in k2539 in k2536 in k2533 */
static void C_ccall f_2611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2611,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2601(t3,((C_word*)t0)[4],t2);}

/* header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_4860(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_4860,2,t0,t1);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4863,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4881,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5057,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:530: current-seconds */
t5=*((C_word*)lf[280]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,5)))){
C_save_and_reclaim((void *)f_3466,2,av);}
a=C_alloc(18);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3469,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:258: lambda-literal-temporaries */
t3=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3587,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[14],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[11])){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_3587(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3641,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[15],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:273: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
av2[3]=C_make_character(116);
av2[4]=((C_word*)t0)[12];
av2[5]=C_make_character(61);
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}}

/* k3467 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_3469,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3472,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_a_i_plus(&a,2,t1,((C_word*)t0)[6]);
/* c-backend.scm:259: iota */
t4=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=t3;
av2[4]=C_fix(1);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k10394 in k10388 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10396,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10399,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1368: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10388 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10390(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10390,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[329]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10396,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1368: ##sys#print */
t6=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[840];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4262 in k4259 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4264,2,av);}
/* c-backend.scm:407: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10397 in k10394 in k10388 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_10399,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10402,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1368: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[839];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4259 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4261,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4264,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:406: expr-args */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4704(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k4876 in pad0 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4878,2,av);}
/* ##sys#string-append */
t2=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[253];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* ##compiler#encode-literal in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10643(C_word c,C_word *av){
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
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_10643,3,av);}
a=C_alloc(16);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10652,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10719,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_eqp(C_SCHEME_TRUE,t2);
if(C_truep(t5)){
t6=t1;
t7=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1402: string-append */
t8=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
av2[3]=lf[843];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t6=C_eqp(C_SCHEME_FALSE,t2);
if(C_truep(t6)){
t7=t1;
t8=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1402: string-append */
t9=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
av2[3]=lf[844];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
if(C_truep(C_charp(t2))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10741,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t8=C_fix(C_character_code(t2));
/* c-backend.scm:1406: encode-size */
f_10652(t7,t8);}
else{
if(C_truep(C_i_nullp(t2))){
t7=t1;
t8=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1402: string-append */
t9=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
av2[3]=lf[846];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
if(C_truep(C_eofp(t2))){
t7=t1;
t8=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1402: string-append */
t9=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
av2[3]=lf[847];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t7=*((C_word*)lf[346]+1);
t8=C_eqp(*((C_word*)lf[346]+1),t2);
if(C_truep(t8)){
t9=t1;
t10=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1402: string-append */
t11=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t11;
av2[1]=t9;
av2[2]=t10;
av2[3]=lf[848];
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
if(C_truep(C_fixnump(t2))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10838,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1411: big-fixnum? */
t10=*((C_word*)lf[360]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t9;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
if(C_truep(C_i_numberp(t2))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10851,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1420: number->string */
t10=*((C_word*)lf[107]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t9;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
t9=C_slot(t2,C_fix(1));
t10=t9;
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10867,a[2]=t4,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t12=C_i_string_length(t10);
/* c-backend.scm:1425: encode-size */
f_10652(t11,t12);}
else{
if(C_truep(C_immp(t2))){
/* c-backend.scm:1428: bomb */
t9=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t4;
av2[2]=lf[856];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
if(C_truep(C_byteblockp(t2))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10890,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=t2;
t11=stub2107(C_SCHEME_UNDEFINED,t10);
t12=C_make_character(C_unfix(t11));
t13=C_a_i_string(&a,1,t12);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10898,a[2]=t9,a[3]=t14,tmp=(C_word)a,a+=4,tmp);
t16=t2;
t17=stub2111(C_SCHEME_UNDEFINED,t16);
/* c-backend.scm:1433: encode-size */
f_10652(t15,t17);}
else{
t9=t2;
t10=stub2111(C_SCHEME_UNDEFINED,t9);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10920,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t13=t2;
t14=stub2107(C_SCHEME_UNDEFINED,t13);
t15=C_make_character(C_unfix(t14));
t16=C_a_i_string(&a,1,t15);
t17=t16;
t18=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10928,a[2]=t12,a[3]=t17,a[4]=t2,a[5]=t11,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1440: encode-size */
f_10652(t18,t11);}}}}}}}}}}}}

/* k2794 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2796,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2799,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:100: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k2797 in k2794 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2799,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2802,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:101: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[30];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4843 in push-args in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4845(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4845,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4848,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t1;
t4=((C_word*)t0)[2];
f_4743(t4,C_i_not(t3));}
else{
/* c-backend.scm:494: lambda-literal-direct */
t3=*((C_word*)lf[251]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k4846 in k4843 in push-args in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4848,2,av);}
t2=((C_word*)t0)[2];
f_4743(t2,C_i_not(t1));}

/* k10981 in k10968 in k10965 in k10962 in k10956 in k2539 in k2536 in k2533 */
static void C_ccall f_10983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10983,2,av);}
/* c-backend.scm:57: ##sys#print */
t2=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k10985 in k10962 in k10956 in k2539 in k2536 in k2533 */
static void C_ccall f_10987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10987,2,av);}
/* c-backend.scm:57: ##sys#print */
t2=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k10968 in k10965 in k10962 in k10956 in k2539 in k2536 in k2533 */
static void C_ccall f_10970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_10970,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10973,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10983,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:57: current-seconds */
t4=*((C_word*)lf[280]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10971 in k10968 in k10965 in k10962 in k10956 in k2539 in k2536 in k2533 */
static void C_ccall f_10973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_10973,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10976,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:57: ##sys#write-char-0 */
t3=*((C_word*)lf[331]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(95);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k10974 in k10971 in k10968 in k10965 in k10962 in k10956 in k2539 in k2536 in k2533 */
static void C_ccall f_10976(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10976,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10979,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:57: get-output-string */
t3=*((C_word*)lf[330]+1);{
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

/* k10977 in k10974 in k10971 in k10968 in k10965 in k10962 in k10956 in k2539 in k2536 in k2533 */
static void C_ccall f_10979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10979,2,av);}
/* c-backend.scm:56: string->c-identifier */
t2=*((C_word*)lf[528]+1);{
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

/* k8815 in k8790 in k8771 in k8754 in k8737 in k8720 in k8703 in k8686 in k8669 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in ... */
static void C_ccall f_8817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8817,2,av);}
/* c-backend.scm:1240: string-intersperse */
t2=*((C_word*)lf[272]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[734];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k8599 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8601,2,av);}
/* c-backend.scm:1212: str */
t2=((C_word*)t0)[2];
f_8183(t2,((C_word*)t0)[3],t1);}

/* k8603 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8605(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_8605,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8609,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_cddr(((C_word*)t0)[3]);
t9=C_i_check_list_2(t8,lf[717]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8627,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8629,a[2]=t6,a[3]=t12,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_8629(t14,t10,t8);}

/* map-loop1674 in k8790 in k8771 in k8754 in k8737 in k8720 in k8703 in k8686 in k8669 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in ... */
static void C_fcall f_8819(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8819,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8844,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_eqp(lf[735],t4);
if(C_truep(t5)){
t6=t3;{
C_word av2[2];
av2[0]=t6;
av2[1]=lf[736];
f_8844(2,av2);}}
else{
/* c-backend.scm:1244: foreign-type-declaration */
t6=*((C_word*)lf[202]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[737];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8607 in k8603 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8609,2,av);}
/* c-backend.scm:1213: string-append */
t2=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[715];
av2[4]=t1;
av2[5]=lf[716];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k4818 in k4815 in k4800 in k4747 in k4744 in k4741 in push-args in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4820,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4823,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:511: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[244];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4821 in k4818 in k4815 in k4800 in k4747 in k4744 in k4741 in push-args in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4823,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4826,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:512: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[243];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* f11805 in k3591 in k3585 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f11805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f11805,2,av);}
/* c-backend.scm:280: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[103];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k5301 in k5298 in k5295 in k5292 in k5289 in k5286 in k5283 in k5280 in k5277 in k5274 in k5271 in k5268 in k5265 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in ... */
static void C_ccall f_5303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5303,2,av);}
/* c-backend.scm:633: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k5298 in k5295 in k5292 in k5289 in k5286 in k5283 in k5280 in k5277 in k5274 in k5271 in k5268 in k5265 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in ... */
static void C_ccall f_5300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5300,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5303,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* c-backend.scm:633: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* c-backend.scm:632: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[294];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k4827 in k4824 in k4821 in k4818 in k4815 in k4800 in k4747 in k4744 in k4741 in push-args in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4829,2,av);}
/* c-backend.scm:514: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[240];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4824 in k4821 in k4818 in k4815 in k4800 in k4747 in k4744 in k4741 in push-args in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4826,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4829,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:513: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[241];
av2[4]=((C_word*)t0)[3];
av2[5]=lf[242];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k10285 in k10282 in k10276 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_10287,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10290,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1360: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[831];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10282 in k10276 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10284,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1360: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* f11817 in k4119 in k4116 in k4113 in k4110 in k4107 in k4198 in k4097 in k4091 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f11817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f11817,2,av);}
/* c-backend.scm:388: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f11813 in k4051 in k4067 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f11813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f11813,2,av);}
/* c-backend.scm:354: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k5353 in k5350 in k5347 in k5280 in k5277 in k5274 in k5271 in k5268 in k5265 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5355,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5358,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:614: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[305];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* c-backend.scm:615: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[306];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k5350 in k5347 in k5280 in k5277 in k5274 in k5271 in k5268 in k5265 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5352,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5355,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
/* c-backend.scm:612: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[307];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* c-backend.scm:612: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[308];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k5356 in k5353 in k5350 in k5347 in k5280 in k5277 in k5274 in k5271 in k5268 in k5265 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 in ... */
static void C_ccall f_5358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5358,2,av);}
/* c-backend.scm:616: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10276 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10278(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10278,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[329]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10284,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1360: ##sys#print */
t6=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[832];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4800 in k4747 in k4744 in k4741 in push-args in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_4802(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_4802,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
/* c-backend.scm:505: gen */
t2=*((C_word*)lf[1]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[237];
av2[4]=((C_word*)t0)[3];
av2[5]=lf[238];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
if(C_truep(C_i_greater_or_equalp(((C_word*)t0)[4],((C_word*)t0)[3]))){
/* c-backend.scm:507: gen */
t2=*((C_word*)lf[1]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[239];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4817,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:509: gen */
t3=*((C_word*)lf[1]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[247];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}}

/* k5322 in k5319 in k5289 in k5286 in k5283 in k5280 in k5277 in k5274 in k5271 in k5268 in k5265 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in ... */
static void C_ccall f_5324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5324,2,av);}
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
/* c-backend.scm:626: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_make_character(44);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_5294(2,av2);}}}

/* k5319 in k5289 in k5286 in k5283 in k5280 in k5277 in k5274 in k5271 in k5268 in k5265 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 in ... */
static void C_fcall f_5321(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_5321,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:625: gen */
t3=*((C_word*)lf[1]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[296];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_5294(2,av2);}}}

/* k10264 in k10261 in k10258 in k10252 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10266,2,av);}
/* c-backend.scm:1358: get-output-string */
t2=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10258 in k10252 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10260,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1358: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10261 in k10258 in k10252 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_10263,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10266,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1358: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[829];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4815 in k4800 in k4747 in k4744 in k4741 in push-args in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_4817,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4820,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:510: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[245];
av2[4]=((C_word*)t0)[3];
av2[5]=lf[246];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k10252 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10254(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10254,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[329]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10260,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1358: ##sys#print */
t6=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[830];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3306 in k3289 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3308,2,av);}
/* c-backend.scm:206: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[80];
av2[3]=t1;
av2[4]=lf[81];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4187 in k4107 in k4198 in k4097 in k4091 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4189,2,av);}
/* c-backend.scm:376: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[174];
av2[4]=t1;
av2[5]=lf[175];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k10717 in encode-literal in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,3)))){
C_save_and_reclaim((void *)f_10719,2,av);}
a=C_alloc(2);
t2=((C_word*)t0)[2];
t3=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1402: string-append */
t4=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* encode-size in encode-literal in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_10652(C_word t1,C_word t2){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(28,0,3)))){
C_save_and_reclaim_args((void *)trf_10652,2,t1,t2);}
a=C_alloc(28);
t3=C_a_i_arithmetic_shift(&a,2,t2,C_fix(-24));
if(C_truep(C_u_i_zerop(t3))){
t4=C_a_i_arithmetic_shift(&a,2,t2,C_fix(-16));
t5=C_a_i_bitwise_and(&a,2,C_fix(255),t4);
t6=C_make_character(C_unfix(t5));
t7=C_a_i_arithmetic_shift(&a,2,t2,C_fix(-8));
t8=C_a_i_bitwise_and(&a,2,C_fix(255),t7);
t9=C_make_character(C_unfix(t8));
t10=C_a_i_bitwise_and(&a,2,C_fix(255),t2);
t11=C_make_character(C_unfix(t10));
t12=t1;{
C_word av2[2];
av2[0]=t12;
av2[1]=C_a_i_string(&a,3,t6,t9,t11);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
/* c-backend.scm:1396: quit */
t4=*((C_word*)lf[663]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[842];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k8669 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_8671(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_8671,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8678,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:1221: foreign-type-declaration */
t4=*((C_word*)lf[202]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8688,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[6],C_fix(2));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[3]);
t5=t2;
f_8688(t5,C_eqp(lf[742],t4));}
else{
t4=t2;
f_8688(t4,C_SCHEME_FALSE);}}}

/* k8676 in k8669 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8678,2,av);}
/* c-backend.scm:1221: string-append */
t2=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[721];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4194 in k4107 in k4198 in k4097 in k4091 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4196,2,av);}
/* c-backend.scm:378: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[176];
av2[4]=t1;
av2[5]=lf[177];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k4125 in k4122 in k4119 in k4116 in k4113 in k4110 in k4107 in k4198 in k4097 in k4091 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4127,2,av);}
/* c-backend.scm:388: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5756 in loop in k5705 in k5687 in k5580 in literal-size in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5758,2,av);}
a=C_alloc(4);
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],t1);
/* c-backend.scm:691: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5736(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2);}

/* k4119 in k4116 in k4113 in k4110 in k4107 in k4198 in k4097 in k4091 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4121,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4124,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
/* c-backend.scm:386: expr-args */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4704(t3,t2,((C_word*)t0)[3],((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f11817,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:387: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k4122 in k4119 in k4116 in k4113 in k4110 in k4107 in k4198 in k4097 in k4091 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4124,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4127,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:387: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8693 in k8686 in k8669 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8695,2,av);}
/* c-backend.scm:1223: string-append */
t2=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[722];
av2[3]=t1;
av2[4]=lf[723];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k4137 in k4116 in k4113 in k4110 in k4107 in k4198 in k4097 in k4091 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4139,2,av);}
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
/* c-backend.scm:385: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_make_character(44);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_4121(2,av2);}}}

/* k3310 in k3289 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3312,2,av);}
/* c-backend.scm:206: uncommentify */
t2=*((C_word*)lf[82]+1);{
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

/* gen-lit in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5767(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_5767,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5774,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t2))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5907,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:696: big-fixnum? */
t6=*((C_word*)lf[360]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=t4;
f_5774(t5,C_SCHEME_FALSE);}}

/* k10288 in k10285 in k10282 in k10276 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10290,2,av);}
/* c-backend.scm:1360: get-output-string */
t2=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8686 in k8669 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_8688(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_8688,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1223: ->string */
t4=*((C_word*)lf[507]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8705,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[6],C_fix(2));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
t5=t2;
f_8705(t5,C_eqp(lf[741],t4));}
else{
t4=t2;
f_8705(t4,C_SCHEME_FALSE);}}}

/* k3340 in k3337 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3342,2,av);}
/* c-backend.scm:218: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k9255 in foreign-argument-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_9257(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_9257,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=lf[753];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[629]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[754];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_eqp(((C_word*)t0)[3],lf[630]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[755];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[3],lf[621]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t5;
av2[1]=lf[756];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(((C_word*)t0)[3],lf[615]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9284,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_9284(t7,t5);}
else{
t7=C_eqp(((C_word*)t0)[3],lf[623]);
t8=t6;
f_9284(t8,(C_truep(t7)?t7:C_eqp(((C_word*)t0)[3],lf[588])));}}}}}}

/* k5772 in gen-lit in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5774(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,6)))){
C_save_and_reclaim_args((void *)trf_5774,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
/* c-backend.scm:697: gen */
t2=*((C_word*)lf[1]+1);{
C_word av2[7];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=((C_word*)t0)[3];
av2[4]=lf[344];
av2[5]=((C_word*)t0)[4];
av2[6]=lf[345];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:698: block-variable-literal? */
t3=*((C_word*)lf[342]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k5475 in k5504 in k5466 in k5463 in k5460 in k5457 in k5454 in k5451 in a5448 in trampolines in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_5477,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5480,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:658: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[323];
av2[4]=((C_word*)t0)[4];
av2[5]=lf[324];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3337 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3339,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3342,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:217: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k9282 in k9255 in foreign-argument-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_9284(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9284,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=lf[757];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[619]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[3],lf[620]));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[758];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[3],lf[625]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t5;
av2[1]=lf[759];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(((C_word*)t0)[3],lf[622]);
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=lf[760];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(((C_word*)t0)[3],lf[624]);
if(C_truep(t6)){
t7=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t7;
av2[1]=lf[761];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_eqp(((C_word*)t0)[3],lf[618]);
if(C_truep(t7)){
t8=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t8;
av2[1]=lf[762];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_eqp(((C_word*)t0)[3],lf[616]);
t9=(C_truep(t8)?t8:C_eqp(((C_word*)t0)[3],lf[617]));
if(C_truep(t9)){
t10=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t10;
av2[1]=lf[763];
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t10=C_eqp(((C_word*)t0)[3],lf[748]);
if(C_truep(t10)){
t11=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t11;
av2[1]=lf[764];
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t11=C_eqp(((C_word*)t0)[3],lf[749]);
if(C_truep(t11)){
t12=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t12;
av2[1]=lf[765];
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t12=C_eqp(((C_word*)t0)[3],lf[600]);
if(C_truep(t12)){
t13=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t13;
av2[1]=lf[766];
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t13=C_eqp(((C_word*)t0)[3],lf[602]);
if(C_truep(t13)){
t14=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t14;
av2[1]=lf[767];
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
t14=C_eqp(((C_word*)t0)[3],lf[684]);
if(C_truep(t14)){
t15=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t15;
av2[1]=lf[768];
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}
else{
t15=C_eqp(((C_word*)t0)[3],lf[745]);
if(C_truep(t15)){
t16=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t16;
av2[1]=lf[769];
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}
else{
t16=C_eqp(((C_word*)t0)[3],lf[746]);
if(C_truep(t16)){
t17=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t17;
av2[1]=lf[770];
((C_proc)(void*)(*((C_word*)t17+1)))(2,av2);}}
else{
t17=C_eqp(((C_word*)t0)[3],lf[747]);
if(C_truep(t17)){
t18=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t18;
av2[1]=lf[771];
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}
else{
t18=C_eqp(((C_word*)t0)[3],lf[686]);
if(C_truep(t18)){
t19=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t19;
av2[1]=lf[772];
((C_proc)(void*)(*((C_word*)t19+1)))(2,av2);}}
else{
t19=C_eqp(((C_word*)t0)[3],lf[687]);
if(C_truep(t19)){
t20=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t20;
av2[1]=lf[773];
((C_proc)(void*)(*((C_word*)t20+1)))(2,av2);}}
else{
t20=C_eqp(((C_word*)t0)[3],lf[692]);
if(C_truep(t20)){
t21=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t21;
av2[1]=lf[774];
((C_proc)(void*)(*((C_word*)t21+1)))(2,av2);}}
else{
t21=C_eqp(((C_word*)t0)[3],lf[693]);
if(C_truep(t21)){
t22=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t22;
av2[1]=lf[775];
((C_proc)(void*)(*((C_word*)t22+1)))(2,av2);}}
else{
t22=C_eqp(((C_word*)t0)[3],lf[689]);
if(C_truep(t22)){
t23=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t23;
av2[1]=lf[776];
((C_proc)(void*)(*((C_word*)t23+1)))(2,av2);}}
else{
t23=C_eqp(((C_word*)t0)[3],lf[690]);
if(C_truep(t23)){
t24=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t24;
av2[1]=lf[777];
((C_proc)(void*)(*((C_word*)t24+1)))(2,av2);}}
else{
t24=C_eqp(((C_word*)t0)[3],lf[695]);
if(C_truep(t24)){
t25=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t25;
av2[1]=lf[778];
((C_proc)(void*)(*((C_word*)t25+1)))(2,av2);}}
else{
t25=C_eqp(((C_word*)t0)[3],lf[696]);
if(C_truep(t25)){
t26=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t26;
av2[1]=lf[779];
((C_proc)(void*)(*((C_word*)t26+1)))(2,av2);}}
else{
t26=C_eqp(((C_word*)t0)[3],lf[698]);
if(C_truep(t26)){
t27=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t27;
av2[1]=lf[780];
((C_proc)(void*)(*((C_word*)t27+1)))(2,av2);}}
else{
t27=C_eqp(((C_word*)t0)[3],lf[699]);
if(C_truep(t27)){
t28=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t28;
av2[1]=lf[781];
((C_proc)(void*)(*((C_word*)t28+1)))(2,av2);}}
else{
t28=C_eqp(((C_word*)t0)[3],lf[701]);
if(C_truep(t28)){
t29=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t29;
av2[1]=lf[782];
((C_proc)(void*)(*((C_word*)t29+1)))(2,av2);}}
else{
t29=C_eqp(((C_word*)t0)[3],lf[702]);
if(C_truep(t29)){
t30=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t30;
av2[1]=lf[783];
((C_proc)(void*)(*((C_word*)t30+1)))(2,av2);}}
else{
t30=C_eqp(((C_word*)t0)[3],lf[704]);
if(C_truep(t30)){
t31=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t31;
av2[1]=lf[784];
((C_proc)(void*)(*((C_word*)t31+1)))(2,av2);}}
else{
t31=C_eqp(((C_word*)t0)[3],lf[705]);
if(C_truep(t31)){
t32=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t32;
av2[1]=lf[785];
((C_proc)(void*)(*((C_word*)t32+1)))(2,av2);}}
else{
t32=C_eqp(((C_word*)t0)[3],lf[707]);
if(C_truep(t32)){
t33=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t33;
av2[1]=lf[786];
((C_proc)(void*)(*((C_word*)t33+1)))(2,av2);}}
else{
t33=C_eqp(((C_word*)t0)[3],lf[708]);
if(C_truep(t33)){
t34=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t34;
av2[1]=lf[787];
((C_proc)(void*)(*((C_word*)t34+1)))(2,av2);}}
else{
t34=C_eqp(((C_word*)t0)[3],lf[590]);
t35=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9479,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t34)){
t36=t35;
f_9479(t36,t34);}
else{
t36=C_eqp(((C_word*)t0)[3],lf[612]);
if(C_truep(t36)){
t37=t35;
f_9479(t37,t36);}
else{
t37=C_eqp(((C_word*)t0)[3],lf[613]);
t38=t35;
f_9479(t38,(C_truep(t37)?t37:C_eqp(((C_word*)t0)[3],lf[614])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k5705 in k5687 in k5580 in literal-size in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5707(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_5707,2,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5714,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* c-backend.scm:685: words */
t4=*((C_word*)lf[340]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
if(C_truep(C_structurep(((C_word*)t0)[3]))){
t2=C_block_size(((C_word*)t0)[3]);
t3=t2;
t4=C_a_i_plus(&a,2,C_fix(2),t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5736,a[2]=t3,a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_5736(t8,((C_word*)t0)[2],C_fix(0),t4);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
/* c-backend.scm:673: bomb */
t4=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[339];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}}

/* k4149 in k4113 in k4110 in k4107 in k4198 in k4097 in k4091 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4151,2,av);}
t2=C_i_not(((C_word*)t0)[2]);
if(C_truep(t2)){
if(C_truep(t2)){
/* c-backend.scm:382: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=C_make_character(44);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
f_4118(2,av2);}}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
/* c-backend.scm:382: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=C_make_character(44);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
f_4118(2,av2);}}}}

/* k7143 in for-each-loop1143 in generate-foreign-callback-stub-prototypes in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7145,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7135(t3,((C_word*)t0)[4],t2);}

/* k5712 in k5705 in k5687 in k5580 in literal-size in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_5714,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_plus(&a,2,C_fix(2),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5490 in k5487 in k5484 in k5481 in k5478 in k5475 in k5504 in k5466 in k5463 in k5460 in k5457 in k5454 in k5451 in a5448 in trampolines in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5492,2,av);}
/* c-backend.scm:663: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[317];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k5497 in k5487 in k5484 in k5481 in k5478 in k5475 in k5504 in k5466 in k5463 in k5460 in k5457 in k5454 in k5451 in a5448 in trampolines in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5499(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5499,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[1]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* ##compiler#foreign-argument-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_9227(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_9227,3,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9229,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=t2;
t5=C_eqp(t4,lf[631]);
if(C_truep(t5)){
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=lf[751];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(t4,lf[15]);
t7=(C_truep(t6)?t6:C_eqp(t4,lf[632]));
if(C_truep(t7)){
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=lf[752];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_eqp(t4,lf[635]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9257,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t8)){
t10=t9;
f_9257(t10,t8);}
else{
t10=C_eqp(t4,lf[452]);
if(C_truep(t10)){
t11=t9;
f_9257(t11,t10);}
else{
t11=C_eqp(t4,lf[628]);
if(C_truep(t11)){
t12=t9;
f_9257(t12,t11);}
else{
t12=C_eqp(t4,lf[633]);
if(C_truep(t12)){
t13=t9;
f_9257(t13,t12);}
else{
t13=C_eqp(t4,lf[634]);
t14=t9;
f_9257(t14,(C_truep(t13)?t13:C_eqp(t4,lf[636])));}}}}}}}

/* err in foreign-argument-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_9229(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_9229,2,t0,t1);}
/* c-backend.scm:1255: quit */
t2=*((C_word*)lf[663]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[750];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* ##compiler#generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7158(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_7158,4,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7160,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_check_list_2(t2,lf[57]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7472,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_7472(t9,t1,t2);}

/* k5481 in k5478 in k5475 in k5504 in k5466 in k5463 in k5460 in k5457 in k5454 in k5451 in a5448 in trampolines in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5483,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5486,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:660: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=((C_word*)t0)[4];
av2[4]=C_make_character(40);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5484 in k5481 in k5478 in k5475 in k5504 in k5466 in k5463 in k5460 in k5457 in k5454 in k5451 in a5448 in trampolines in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5486,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5489,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:661: make-argument-list */
t3=*((C_word*)lf[318]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=lf[319];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5478 in k5475 in k5504 in k5466 in k5463 in k5460 in k5457 in k5454 in k5451 in a5448 in trampolines in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5480(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_5480,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5483,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)((C_word*)t0)[3])[1];
t4=C_a_i_minus(&a,2,t3,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5423,a[2]=t3,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_5423(t8,t2,C_fix(0),t4);}

/* k5487 in k5484 in k5481 in k5478 in k5475 in k5504 in k5466 in k5463 in k5460 in k5457 in k5454 in k5451 in a5448 in trampolines in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5489,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5492,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5499,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:662: intersperse */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
av2[3]=C_make_character(44);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* for-each-loop27 in gen in k2539 in k2536 in k2533 */
static void C_fcall f_2564(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2564,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2574,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_eqp(C_SCHEME_TRUE,t4);
if(C_truep(t5)){
/* c-backend.scm:43: newline */
t6=*((C_word*)lf[2]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t3;
av2[2]=*((C_word*)lf[0]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
/* c-backend.scm:44: display */
t6=*((C_word*)lf[3]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[0]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4107 in k4198 in k4097 in k4091 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,7)))){
C_save_and_reclaim((void *)f_4109,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4112,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[12])){
if(C_truep(*((C_word*)lf[147]+1))){
if(C_truep(((C_word*)t0)[13])){
if(C_truep(((C_word*)((C_word*)t0)[14])[1])){
/* c-backend.scm:373: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[169];
av2[4]=((C_word*)t0)[13];
av2[5]=lf[170];
av2[6]=lf[171];
av2[7]=lf[172];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}
else{
/* c-backend.scm:373: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[169];
av2[4]=((C_word*)t0)[13];
av2[5]=lf[170];
av2[6]=lf[173];
av2[7]=lf[172];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4112(2,av2);}}}
else{
if(C_truep(*((C_word*)lf[153]+1))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4189,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:376: backslashify */
t4=*((C_word*)lf[156]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[15];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4196,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:378: uncommentify */
t4=*((C_word*)lf[82]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[15];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4112(2,av2);}}}

/* k7119 in for-each-loop1143 in generate-foreign-callback-stub-prototypes in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7121,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7124,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1011: generate-foreign-callback-header */
t3=*((C_word*)lf[538]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[539];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* loop in k5705 in k5687 in k5580 in literal-size in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5736(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_5736,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_i_greater_or_equalp(t2,((C_word*)t0)[2]))){
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_a_i_plus(&a,2,t2,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5758,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(((C_word*)t0)[4],t2);
/* c-backend.scm:691: literal-size */
t8=((C_word*)((C_word*)t0)[5])[1];{
C_word av2[3];
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
f_5575(3,av2);}}}

/* k7122 in k7119 in for-each-loop1143 in generate-foreign-callback-stub-prototypes in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7124,2,av);}
/* c-backend.scm:1012: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8842 in map-loop1674 in k8790 in k8771 in k8754 in k8737 in k8720 in k8703 in k8686 in k8669 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in ... */
static void C_ccall f_8844(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8844,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8819(t6,((C_word*)t0)[5],t5);}

/* for-each-loop279 in k3470 in k3467 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_3545(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3545,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3555,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* c-backend.scm:258: g280 */
t9=((C_word*)t0)[3];
f_3473(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* err in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_9860(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_9860,2,t0,t1);}
/* c-backend.scm:1325: quit */
t2=*((C_word*)lf[663]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[804];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k9599 in k9522 in k9495 in k9486 in k9477 in k9282 in k9255 in foreign-argument-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_9601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9601,2,av);}
/* c-backend.scm:1314: string-append */
t2=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[799];
av2[3]=t1;
av2[4]=lf[800];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4116 in k4113 in k4110 in k4107 in k4198 in k4097 in k4091 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_4118,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4121,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4121(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4139,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:384: expr */
t4=((C_word*)((C_word*)t0)[7])[1];
f_2649(t4,t3,((C_word*)t0)[8],((C_word*)t0)[5]);}}

/* k4113 in k4110 in k4107 in k4198 in k4097 in k4091 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_4115,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4118,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[9])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4151,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:381: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[167];
av2[3]=((C_word*)t0)[10];
av2[4]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4118(2,av2);}}}

/* for-each-loop1143 in generate-foreign-callback-stub-prototypes in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_7135(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_7135,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7145,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7121,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1010: gen */
t8=*((C_word*)lf[1]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4110 in k4107 in k4198 in k4097 in k4091 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_4112,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4115,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:379: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[168];
av2[4]=((C_word*)t0)[11];
av2[5]=C_make_character(40);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k7100 in for-each-loop1119 in k7060 in generate-external-variables in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7102,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7092(t3,((C_word*)t0)[4],t2);}

/* k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_8253(C_word t0,C_word t1){
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
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_8253,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
/* c-backend.scm:1167: str */
t2=((C_word*)t0)[2];
f_8183(t2,((C_word*)t0)[3],lf[671]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[622]);
if(C_truep(t2)){
/* c-backend.scm:1168: str */
t3=((C_word*)t0)[2];
f_8183(t3,((C_word*)t0)[3],lf[672]);}
else{
t3=C_eqp(((C_word*)t0)[4],lf[628]);
t4=(C_truep(t3)?t3:C_eqp(((C_word*)t0)[4],lf[620]));
if(C_truep(t4)){
/* c-backend.scm:1169: str */
t5=((C_word*)t0)[2];
f_8183(t5,((C_word*)t0)[3],lf[673]);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[625]);
if(C_truep(t5)){
/* c-backend.scm:1170: str */
t6=((C_word*)t0)[2];
f_8183(t6,((C_word*)t0)[3],lf[674]);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[624]);
if(C_truep(t6)){
/* c-backend.scm:1171: str */
t7=((C_word*)t0)[2];
f_8183(t7,((C_word*)t0)[3],lf[675]);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[629]);
if(C_truep(t7)){
/* c-backend.scm:1172: str */
t8=((C_word*)t0)[2];
f_8183(t8,((C_word*)t0)[3],lf[676]);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[618]);
if(C_truep(t8)){
/* c-backend.scm:1173: str */
t9=((C_word*)t0)[2];
f_8183(t9,((C_word*)t0)[3],lf[677]);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[630]);
if(C_truep(t9)){
/* c-backend.scm:1174: str */
t10=((C_word*)t0)[2];
f_8183(t10,((C_word*)t0)[3],lf[678]);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[621]);
if(C_truep(t10)){
/* c-backend.scm:1175: str */
t11=((C_word*)t0)[2];
f_8183(t11,((C_word*)t0)[3],lf[679]);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[588]);
if(C_truep(t11)){
/* c-backend.scm:1176: str */
t12=((C_word*)t0)[2];
f_8183(t12,((C_word*)t0)[3],lf[680]);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[615]);
t13=(C_truep(t12)?t12:C_eqp(((C_word*)t0)[4],lf[623]));
if(C_truep(t13)){
/* c-backend.scm:1177: str */
t14=((C_word*)t0)[2];
f_8183(t14,((C_word*)t0)[3],lf[681]);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[600]);
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8361,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t14)){
t16=t15;
f_8361(t16,t14);}
else{
t16=C_eqp(((C_word*)t0)[4],lf[602]);
if(C_truep(t16)){
t17=t15;
f_8361(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[4],lf[748]);
t18=t15;
f_8361(t18,(C_truep(t17)?t17:C_eqp(((C_word*)t0)[4],lf[749])));}}}}}}}}}}}}}}

/* ##compiler#generate-foreign-callback-stub-prototypes in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7115,3,av);}
a=C_alloc(5);
t3=C_i_check_list_2(t2,lf[57]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7135,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_7135(t7,t1,t2);}

/* ##compiler#gen-list in k2539 in k2536 in k2533 */
static void C_ccall f_2587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2587,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2596,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:50: intersperse */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_make_character(32);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k10333 in k10330 in k10324 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_10335,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10338,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1364: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[835];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10336 in k10333 in k10330 in k10324 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10338,2,av);}
/* c-backend.scm:1364: get-output-string */
t2=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10330 in k10324 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10332,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10335,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1364: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2594 in gen-list in k2539 in k2536 in k2533 */
static void C_ccall f_2596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2596,2,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2601,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_2601(t5,((C_word*)t0)[2],t1);}

/* k10324 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10326(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10326,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[329]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10332,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1364: ##sys#print */
t6=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[836];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10312 in k10309 in k10306 in k10300 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10314,2,av);}
/* c-backend.scm:1362: get-output-string */
t2=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k2572 in for-each-loop27 in gen in k2539 in k2536 in k2533 */
static void C_ccall f_2574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2574,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2564(t3,((C_word*)t0)[4],t2);}

/* k10309 in k10306 in k10300 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_10311,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1362: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[833];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10300 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10302(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10302,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[329]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10308,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1362: ##sys#print */
t6=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[834];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10306 in k10300 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10308,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10311,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1362: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4750 in k4747 in k4744 in k4741 in push-args in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_4752,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4755,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm:515: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[235];
av2[4]=((C_word*)t0)[2];
av2[5]=lf[236];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4755(2,av2);}}}

/* k7082 in for-each-loop1119 in k7060 in generate-external-variables in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7084,2,av);}
/* c-backend.scm:1001: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
av2[5]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k4747 in k4744 in k4741 in push-args in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_4749,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4752,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_not(((C_word*)t0)[7]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4802,a[2]=t2,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t5=t4;
f_4802(t5,t3);}
else{
t5=C_i_lessp(((C_word*)t0)[9],((C_word*)t0)[8]);
t6=t4;
f_4802(t6,(C_truep(t5)?C_eqp(t1,lf[248]):C_SCHEME_FALSE));}}

/* k4744 in k4741 in push-args in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4746,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4749,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:496: lambda-literal-rest-argument-mode */
t4=*((C_word*)lf[249]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* emit-debug-table in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6773,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6777,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:922: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[511];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* doloop550 in k4753 in k4750 in k4747 in k4744 in k4741 in push-args in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_4764(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,5)))){
C_save_and_reclaim_args((void *)trf_4764,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4774,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:519: gen */
t5=*((C_word*)lf[1]+1);{
C_word av2[6];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[233];
av2[4]=t2;
av2[5]=lf[234];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}

/* for-each-loop1119 in k7060 in generate-external-variables in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_7092(C_word t0,C_word t1,C_word t2){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_7092,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7102,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=C_i_vector_ref(t4,C_fix(0));
t7=C_i_vector_ref(t4,C_fix(1));
t8=C_i_vector_ref(t4,C_fix(2));
t9=(C_truep(t8)?lf[536]:lf[537]);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7084,a[2]=t5,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1001: foreign-type-declaration */
t12=*((C_word*)lf[202]+1);{
C_word av2[4];
av2[0]=t12;
av2[1]=t11;
av2[2]=t7;
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t12+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4753 in k4750 in k4747 in k4744 in k4741 in push-args in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4755,2,av);}
a=C_alloc(7);
t2=(C_truep(((C_word*)t0)[2])?C_fix(1):C_fix(0));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4764,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_4764(t6,((C_word*)t0)[5],t2,((C_word*)t0)[6]);}

/* k6759 in k6756 in k6753 in k6750 in k6747 in k6744 in k6741 in k6738 in k6735 in k6732 in k6728 in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6761,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5067,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5071,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:562: get-output-string */
t5=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=*((C_word*)lf[491]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k6775 in emit-debug-table in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6777,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6837,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6871,tmp=(C_word)a,a+=2,tmp);
/* c-backend.scm:931: sort */
t4=*((C_word*)lf[510]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4772 in doloop550 in k4753 in k4750 in k4747 in k4744 in k4741 in push-args in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4774,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4777,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:520: expr */
t4=((C_word*)((C_word*)t0)[6])[1];
f_2649(t4,t2,t3,((C_word*)t0)[7]);}

/* k7060 in generate-external-variables in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7062(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7062,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_i_check_list_2(t2,lf[57]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7092,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_7092(t7,((C_word*)t0)[3],t2);}

/* k10739 in encode-literal in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10741,2,av);}
/* c-backend.scm:1406: string-append */
t2=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[845];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* ##compiler#foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_9858(C_word c,C_word *av){
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
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_9858,4,av);}
a=C_alloc(10);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9860,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t2;
t6=C_eqp(t5,lf[15]);
t7=(C_truep(t6)?t6:C_eqp(t5,lf[632]));
if(C_truep(t7)){
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=lf[805];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_eqp(t5,lf[452]);
t9=(C_truep(t8)?t8:C_eqp(t5,lf[628]));
if(C_truep(t9)){
t10=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=lf[806];
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t10=C_eqp(t5,lf[633]);
t11=(C_truep(t10)?t10:C_eqp(t5,lf[634]));
if(C_truep(t11)){
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=lf[807];
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t12=C_eqp(t5,lf[629]);
if(C_truep(t12)){
t13=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=lf[808];
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t13=C_eqp(t5,lf[630]);
if(C_truep(t13)){
t14=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=lf[809];
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
t14=C_eqp(t5,lf[635]);
if(C_truep(t14)){
t15=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=lf[810];
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}
else{
t15=C_eqp(t5,lf[636]);
if(C_truep(t15)){
t16=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=lf[811];
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}
else{
t16=C_eqp(t5,lf[588]);
t17=(C_truep(t16)?t16:C_eqp(t5,lf[615]));
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9927,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1334: open-output-string */
t19=*((C_word*)lf[334]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t19;
av2[1]=t18;
((C_proc)(void*)(*((C_word*)t19+1)))(2,av2);}}
else{
t18=C_eqp(t5,lf[623]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9951,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1335: open-output-string */
t20=*((C_word*)lf[334]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t20;
av2[1]=t19;
((C_proc)(void*)(*((C_word*)t20+1)))(2,av2);}}
else{
t19=C_eqp(t5,lf[594]);
t20=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9975,a[2]=t1,a[3]=t3,a[4]=t5,a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t19)){
t21=t20;
f_9975(t21,t19);}
else{
t21=C_eqp(t5,lf[590]);
if(C_truep(t21)){
t22=t20;
f_9975(t22,t21);}
else{
t22=C_eqp(t5,lf[602]);
if(C_truep(t22)){
t23=t20;
f_9975(t23,t22);}
else{
t23=C_eqp(t5,lf[612]);
if(C_truep(t23)){
t24=t20;
f_9975(t24,t23);}
else{
t24=C_eqp(t5,lf[608]);
if(C_truep(t24)){
t25=t20;
f_9975(t25,t24);}
else{
t25=C_eqp(t5,lf[613]);
if(C_truep(t25)){
t26=t20;
f_9975(t26,t25);}
else{
t26=C_eqp(t5,lf[614]);
if(C_truep(t26)){
t27=t20;
f_9975(t27,t26);}
else{
t27=C_eqp(t5,lf[609]);
if(C_truep(t27)){
t28=t20;
f_9975(t28,t27);}
else{
t28=C_eqp(t5,lf[610]);
if(C_truep(t28)){
t29=t20;
f_9975(t29,t28);}
else{
t29=C_eqp(t5,lf[611]);
if(C_truep(t29)){
t30=t20;
f_9975(t30,t29);}
else{
t30=C_eqp(t5,lf[626]);
t31=t20;
f_9975(t31,(C_truep(t30)?t30:C_eqp(t5,lf[627])));}}}}}}}}}}}}}}}}}}}}

/* k6753 in k6750 in k6747 in k6744 in k6741 in k6738 in k6735 in k6732 in k6728 in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6755,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6758,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:914: procedures */
t3=((C_word*)((C_word*)t0)[5])[1];
f_6051(t3,t2);}

/* k6750 in k6747 in k6744 in k6741 in k6738 in k6735 in k6732 in k6728 in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6752,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6755,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(*((C_word*)lf[147]+1))){
/* c-backend.scm:913: emit-debug-table */
t3=*((C_word*)lf[493]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6755(2,av2);}}}

/* k4778 in k4775 in k4772 in doloop550 in k4753 in k4750 in k4747 in k4744 in k4741 in push-args in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4780,2,av);}
a=C_alloc(4);
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=((C_word*)((C_word*)t0)[4])[1];
f_4764(t5,((C_word*)t0)[5],t2,t4);}

/* k4775 in k4772 in doloop550 in k4753 in k4750 in k4747 in k4744 in k4741 in push-args in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4777,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:521: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[232];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* literal-size in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5575,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5582,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:676: immediate? */
t4=*((C_word*)lf[343]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6210 in doloop969 in k6191 in k6188 in k6182 in k6155 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in ... */
static void C_ccall f_6212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_6212,2,av);}
a=C_alloc(8);
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=C_a_i_minus(&a,2,((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_6202(t4,((C_word*)t0)[5],t2,t3);}

/* a4709 in expr-args in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4710,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4714,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=C_eqp(t2,((C_word*)t0)[4]);
if(C_truep(t4)){
t5=C_i_car(t2);
/* c-backend.scm:487: expr */
t6=((C_word*)((C_word*)t0)[2])[1];
f_2649(t6,t1,t5,((C_word*)t0)[3]);}
else{
/* c-backend.scm:486: gen */
t5=*((C_word*)lf[1]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t3;
av2[2]=C_make_character(44);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k4712 in a4709 in expr-args in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4714,2,av);}
t2=C_i_car(((C_word*)t0)[2]);
/* c-backend.scm:487: expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2649(t3,((C_word*)t0)[4],t2,((C_word*)t0)[5]);}

/* k4461 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4463,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4466,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:449: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k4464 in k4461 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4466,2,av);}
/* c-backend.scm:450: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[218];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6728 in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6730,2,av);}
a=C_alloc(11);
t2=C_mutate2((C_word*)lf[0]+1 /* (set! ##compiler#output ...) */,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6734,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:905: header */
t4=((C_word*)((C_word*)t0)[12])[1];
f_4860(t4,t3);}

/* k6732 in k6728 in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6734,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6737,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:906: declarations */
t3=((C_word*)((C_word*)t0)[10])[1];
f_5073(t3,t2);}

/* k6239 in k6182 in k6155 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in ... */
static void C_ccall f_6241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6241,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6244,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t2;
av2[2]=*((C_word*)lf[1]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* k6735 in k6732 in k6728 in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6737,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:907: generate-external-variables */
t3=*((C_word*)lf[497]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=*((C_word*)lf[498]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6242 in k6239 in k6182 in k6155 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in ... */
static void C_ccall f_6244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6244,2,av);}
/* c-backend.scm:887: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[376];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4431 in k4414 in k4411 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4433,2,av);}
/* c-backend.scm:440: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[212];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k10240 in k10237 in k10234 in k10228 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10242,2,av);}
/* c-backend.scm:1356: get-output-string */
t2=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k5636 in k5580 in literal-size in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5638,2,av);}
/* c-backend.scm:681: + */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
C_plus(5,av2);}}

/* k6721 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in a6056 in procedures in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6723,2,av);}
t2=((C_word*)t0)[2];
f_6079(t2,C_i_zerop(t1));}

/* k6725 in k6065 in k6062 in k6059 in a6056 in procedures in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6727,2,av);}{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[485]+1);
av2[3]=C_fix(0);
av2[4]=t1;
C_apply(5,av2);}}

/* push-args in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_4733(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,2)))){
C_save_and_reclaim_args((void *)trf_4733,5,t0,t1,t2,t3,t4);}
a=C_alloc(17);
t5=C_i_length(t2);
t6=(C_truep(t4)?C_a_i_plus(&a,2,t5,C_fix(1)):t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4743,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t1,a[6]=t2,a[7]=t7,a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4845,a[2]=t8,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:493: lambda-literal-customizable */
t10=*((C_word*)lf[252]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_3417,2,av);}
a=C_alloc(20);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_3420,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=t2,a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],tmp=(C_word)a,a+=20,tmp);
if(C_truep(((C_word*)t0)[19])){
t4=C_i_cdddr(((C_word*)t0)[18]);
t5=C_i_pairp(t4);
t6=t3;
f_3420(t6,(C_truep(t5)?C_i_cadddr(((C_word*)t0)[18]):C_SCHEME_FALSE));}
else{
t4=t3;
f_3420(t4,C_SCHEME_FALSE);}}

/* k4439 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4441(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4441,2,av);}
/* c-backend.scm:438: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[213];
av2[3]=t1;
av2[4]=lf[214];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k10237 in k10234 in k10228 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_10239,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10242,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1356: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[827];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10234 in k10228 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10236,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10239,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1356: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10228 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10230(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10230,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[329]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10236,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1356: ##sys#print */
t6=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[828];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3655 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3657,2,av);}
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
/* c-backend.scm:257: lambda-literal-looping */
t3=*((C_word*)lf[108]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_3466(2,av2);}}}

/* k4741 in push-args in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_4743(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_4743,2,t0,t1);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:495: lambda-literal-argument-count */
t4=*((C_word*)lf[250]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3440 in k3437 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3442,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_i_car(t2);
/* c-backend.scm:254: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_TRUE;
av2[3]=t3;
av2[4]=C_make_character(40);
av2[5]=((C_word*)t0)[4];
av2[6]=lf[97];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}}

/* k6224 in k6182 in k6155 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in ... */
static void C_ccall f_6226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6226,2,av);}
if(C_truep(C_i_greaterp(((C_word*)t0)[2],C_fix(0)))){
/* c-backend.scm:891: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[374];
av2[4]=((C_word*)t0)[2];
av2[5]=lf[375];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_6160(2,av2);}}}

/* k6780 in for-each-loop1035 in k6835 in k6775 in emit-debug-table in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6782(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6782,2,av);}
a=C_alloc(8);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_i_check_list_2(t2,lf[57]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6804,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6809,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_6809(t8,t4,t2);}

/* k3642 in k3639 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3644,2,av);}
/* c-backend.scm:275: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* map-loop771 in k5643 in k5580 in literal-size in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5650(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5650,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5675,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:681: g777 */
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

/* k3639 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3641,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3644,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:274: expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2649(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_10215(C_word t0,C_word t1){
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
C_word t15;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_10215,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_eqp(t2,lf[601]);
t4=(C_truep(t3)?t3:C_eqp(t2,lf[602]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10230,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1356: open-output-string */
t6=*((C_word*)lf[334]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_eqp(t2,lf[597]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10254,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1358: open-output-string */
t7=*((C_word*)lf[334]+1);{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=C_eqp(t2,lf[604]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10278,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1360: open-output-string */
t8=*((C_word*)lf[334]+1);{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=C_eqp(t2,lf[605]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10302,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1362: open-output-string */
t9=*((C_word*)lf[334]+1);{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t8=C_eqp(t2,lf[606]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10326,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1364: open-output-string */
t10=*((C_word*)lf[334]+1);{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t9=C_eqp(t2,lf[599]);
if(C_truep(t9)){
t10=C_i_cadr(((C_word*)t0)[2]);
/* c-backend.scm:1365: foreign-result-conversion */
t11=*((C_word*)lf[196]+1);{
C_word av2[4];
av2[0]=t11;
av2[1]=((C_word*)t0)[3];
av2[2]=t10;
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
t10=C_eqp(t2,lf[450]);
t11=(C_truep(t10)?t10:C_eqp(t2,lf[600]));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10366,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1367: open-output-string */
t13=*((C_word*)lf[334]+1);{
C_word av2[2];
av2[0]=t13;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t12=C_eqp(t2,lf[603]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10390,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1368: open-output-string */
t14=*((C_word*)lf[334]+1);{
C_word av2[2];
av2[0]=t14;
av2[1]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
t13=C_eqp(t2,lf[740]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10414,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1369: open-output-string */
t15=*((C_word*)lf[334]+1);{
C_word av2[2];
av2[0]=t15;
av2[1]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}
else{
/* c-backend.scm:1370: err */
t14=((C_word*)t0)[5];
f_9860(t14,((C_word*)t0)[3]);}}}}}}}}}}
else{
/* c-backend.scm:1371: err */
t2=((C_word*)t0)[5];
f_9860(t2,((C_word*)t0)[3]);}}

/* k3636 in k3606 in k3585 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3638,2,av);}
/* ##sys#string-append */
t2=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[106];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* doloop969 in k6191 in k6188 in k6182 in k6155 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in ... */
static void C_fcall f_6202(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,5)))){
C_save_and_reclaim_args((void *)trf_6202,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_zerop(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6212,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:882: gen */
t5=*((C_word*)lf[1]+1);{
C_word av2[6];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[365];
av2[4]=t2;
av2[5]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}

/* k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_3426(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,0,7)))){
C_save_and_reclaim_args((void *)trf_3426,2,t0,t1);}
a=C_alloc(20);
t2=t1;
t3=C_u_i_car(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_3430,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=t2,a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
if(C_truep(((C_word*)t0)[16])){
if(C_truep(*((C_word*)lf[147]+1))){
if(C_truep(((C_word*)t0)[17])){
if(C_truep(((C_word*)((C_word*)t0)[18])[1])){
/* c-backend.scm:244: gen */
t5=*((C_word*)lf[1]+1);{
C_word av2[8];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[148];
av2[4]=((C_word*)t0)[17];
av2[5]=lf[149];
av2[6]=lf[150];
av2[7]=lf[151];
((C_proc)(void*)(*((C_word*)t5+1)))(8,av2);}}
else{
/* c-backend.scm:244: gen */
t5=*((C_word*)lf[1]+1);{
C_word av2[8];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[148];
av2[4]=((C_word*)t0)[17];
av2[5]=lf[149];
av2[6]=lf[152];
av2[7]=lf[151];
((C_proc)(void*)(*((C_word*)t5+1)))(8,av2);}}}
else{
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3430(2,av2);}}}
else{
if(C_truep(*((C_word*)lf[153]+1))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3874,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:247: backslashify */
t6=*((C_word*)lf[156]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[19];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3881,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:249: uncommentify */
t6=*((C_word*)lf[82]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[19];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}}
else{
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3430(2,av2);}}}

/* k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,2)))){
C_save_and_reclaim((void *)f_3423,2,av);}
a=C_alloc(26);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_3426,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],tmp=(C_word)a,a+=20,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3888,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3892,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:239: find-lambda */
t6=((C_word*)((C_word*)t0)[19])[1];
f_2634(t6,t5,((C_word*)t0)[8]);}
else{
t4=t3;
f_3426(t4,C_SCHEME_FALSE);}}

/* k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_3420(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,0,2)))){
C_save_and_reclaim_args((void *)trf_3420,2,t0,t1);}
a=C_alloc(20);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_3423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],tmp=(C_word)a,a+=20,tmp);
if(C_truep(t2)){
/* c-backend.scm:238: fifth */
t4=*((C_word*)lf[160]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[19];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_3423(2,av2);}}}

/* k5580 in literal-size in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5582(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_5582,2,av);}
a=C_alloc(15);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_numberp(((C_word*)t0)[3]))){
t2=*((C_word*)lf[335]+1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=*((C_word*)lf[335]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fix(7);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5613,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* c-backend.scm:680: literal-size */
t5=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t4;
f_5575(3,av2);}}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[3];
t3=C_block_size(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5638,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=((C_word*)((C_word*)t0)[4])[1];
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5645,a[2]=t5,a[3]=t8,a[4]=t10,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:681: vector->list */
t12=*((C_word*)lf[338]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5689,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:682: block-variable-literal? */
t3=*((C_word*)lf[342]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}}}}}

/* k3789 in k3786 in k3783 in k3780 in k3777 in k3774 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3791,2,av);}
/* c-backend.scm:329: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[136];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[137];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3795 in k3786 in k3783 in k3780 in k3777 in k3774 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_3797(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3797,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:327: gen */
t2=*((C_word*)lf[1]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[139];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[140];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
/* c-backend.scm:328: gen */
t2=*((C_word*)lf[1]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[141];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[142];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* expr-args in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_4704(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4704,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4710,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:484: pair-for-each */
t5=*((C_word*)lf[231]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t1;
av2[2]=t4;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k6744 in k6741 in k6738 in k6735 in k6732 in k6728 in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_6746,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6749,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:910: generate-foreign-callback-stubs */
t3=*((C_word*)lf[494]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=*((C_word*)lf[256]+1);
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6741 in k6738 in k6735 in k6732 in k6728 in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6743,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:909: prototypes */
t3=((C_word*)((C_word*)t0)[9])[1];
f_5245(t3,t2);}

/* k6738 in k6735 in k6732 in k6728 in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6740,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6743,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:908: generate-foreign-stubs */
t3=*((C_word*)lf[495]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=*((C_word*)lf[496]+1);
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6756 in k6753 in k6750 in k6747 in k6744 in k6741 in k6738 in k6735 in k6732 in k6728 in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6758,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6761,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:915: emit-procedure-table */
t3=*((C_word*)lf[492]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6747 in k6744 in k6741 in k6738 in k6735 in k6732 in k6728 in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6749,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6752,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:911: trampolines */
t3=((C_word*)((C_word*)t0)[7])[1];
f_5410(t3,t2);}

/* k6564 in doloop893 in k6552 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in ... */
static void C_ccall f_6566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_6566,2,av);}
a=C_alloc(8);
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=C_a_i_minus(&a,2,((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_6556(t4,((C_word*)t0)[5],t2,t3);}

/* k5295 in k5292 in k5289 in k5286 in k5283 in k5280 in k5277 in k5274 in k5271 in k5268 in k5265 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in ... */
static void C_ccall f_5297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5297,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5300,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:630: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5289 in k5286 in k5283 in k5280 in k5277 in k5274 in k5271 in k5268 in k5265 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_5291,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5294,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5321,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=C_i_zerop(((C_word*)t0)[6]);
t5=t3;
f_5321(t5,C_i_not(t4));}
else{
t4=t3;
f_5321(t4,C_SCHEME_FALSE);}}

/* k5292 in k5289 in k5286 in k5283 in k5280 in k5277 in k5274 in k5271 in k5268 in k5265 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 in ... */
static void C_ccall f_5294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5294,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5297,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
if(C_truep(((C_word*)t0)[4])){{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t2;
av2[2]=*((C_word*)lf[1]+1);
av2[3]=((C_word*)t0)[5];
C_apply(4,av2);}}
else{
/* c-backend.scm:629: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[295];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
if(C_truep(((C_word*)t0)[3])){{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t2;
av2[2]=*((C_word*)lf[1]+1);
av2[3]=((C_word*)t0)[5];
C_apply(4,av2);}}
else{
/* c-backend.scm:629: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[295];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}

/* k7980 in k7977 in k7974 in k7971 in k7968 in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_7982,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7985,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:1126: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[645];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k7983 in k7980 in k7977 in k7974 in k7971 in k7968 in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7985,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7997,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:1131: reverse */
t3=*((C_word*)lf[644]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* doloop888 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in ... */
static void C_fcall f_6592(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,7)))){
C_save_and_reclaim_args((void *)trf_6592,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_greater_or_equalp(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6602,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:801: gen */
t4=*((C_word*)lf[1]+1);{
C_word av2[8];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[457];
av2[4]=t2;
av2[5]=lf[458];
av2[6]=t2;
av2[7]=lf[459];
((C_proc)(void*)(*((C_word*)t4+1)))(8,av2);}}}

/* k5283 in k5280 in k5277 in k5274 in k5271 in k5268 in k5265 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5285(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5285,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5288,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:622: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(40);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6789 in for-each-loop1048 in k6780 in for-each-loop1035 in k6835 in k6775 in emit-debug-table in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6791,2,av);}
/* c-backend.scm:928: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[505];
av2[3]=t1;
av2[4]=lf[506];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5286 in k5283 in k5280 in k5277 in k5274 in k5271 in k5268 in k5265 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5288,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5291,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5291(2,av2);}}
else{
/* c-backend.scm:623: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[297];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k6793 in for-each-loop1048 in k6780 in for-each-loop1035 in k6835 in k6775 in emit-debug-table in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6795,2,av);}
/* c-backend.scm:928: backslashify */
t2=*((C_word*)lf[156]+1);{
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

/* k5280 in k5277 in k5274 in k5271 in k5268 in k5265 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_5282,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5285,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(lf[298],((C_word*)t0)[7]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5374,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[262]+1))){
/* c-backend.scm:618: string-append */
t5=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=*((C_word*)lf[262]+1);
av2[3]=lf[303];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=lf[304];
f_5374(2,av2);}}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5349,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:610: gen */
t5=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[310];
av2[3]=((C_word*)t0)[7];
av2[4]=lf[311];
av2[5]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}

/* k7992 in for-each-loop1453 in k7998 in k7995 in k7983 in k7980 in k7977 in k7974 in k7971 in k7968 in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_7994,2,av);}
/* c-backend.scm:1129: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[640];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
av2[6]=lf[641];
av2[7]=C_SCHEME_TRUE;
av2[8]=lf[642];
((C_proc)(void*)(*((C_word*)t2+1)))(9,av2);}}

/* k7995 in k7983 in k7980 in k7977 in k7974 in k7971 in k7968 in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7997,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8000,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:1132: reverse */
t4=*((C_word*)lf[644]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5230 in for-each-loop639 in k5078 in declarations in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5232,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5222(t3,((C_word*)t0)[4],t2);}

/* k3780 in k3777 in k3774 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3782,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3810,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3815,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:324: number->string */
t5=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3783 in k3780 in k3777 in k3774 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3785,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3788,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:325: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[144];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3786 in k3783 in k3780 in k3777 in k3774 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3788(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3788,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3791,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=*((C_word*)lf[138]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3797,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(*((C_word*)lf[138]+1))){
t5=t4;
f_3797(t5,*((C_word*)lf[138]+1));}
else{
t5=*((C_word*)lf[143]+1);
if(C_truep(*((C_word*)lf[143]+1))){
t6=*((C_word*)lf[143]+1);
t7=t4;
f_3797(t7,*((C_word*)lf[143]+1));}
else{
t6=t4;
f_3797(t6,((C_word*)t0)[5]);}}}

/* for-each-loop901 in k6504 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in ... */
static void C_fcall f_6529(C_word t0,C_word t1,C_word t2){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,6)))){
C_save_and_reclaim_args((void *)trf_6529,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6539,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6515,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=C_i_cdr(t6);
t9=C_eqp(t8,lf[445]);
if(C_truep(t9)){
t10=C_u_i_car(t6);
/* c-backend.scm:811: gen */
t11=*((C_word*)lf[1]+1);{
C_word av2[7];
av2[0]=t11;
av2[1]=t5;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[446];
av2[4]=C_make_character(32);
av2[5]=t10;
av2[6]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t11+1)))(7,av2);}}
else{
t10=C_eqp(t8,lf[447]);
if(C_truep(t10)){
t11=C_u_i_car(t6);
/* c-backend.scm:811: gen */
t12=*((C_word*)lf[1]+1);{
C_word av2[7];
av2[0]=t12;
av2[1]=t5;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[448];
av2[4]=C_make_character(32);
av2[5]=t11;
av2[6]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t12+1)))(7,av2);}}
else{
t11=C_eqp(t8,lf[15]);
if(C_truep(t11)){
t12=C_u_i_car(t6);
/* c-backend.scm:811: gen */
t13=*((C_word*)lf[1]+1);{
C_word av2[7];
av2[0]=t13;
av2[1]=t5;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[449];
av2[4]=C_make_character(32);
av2[5]=t12;
av2[6]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t13+1)))(7,av2);}}
else{
t12=C_eqp(t8,lf[450]);
if(C_truep(t12)){
t13=C_u_i_car(t6);
/* c-backend.scm:811: gen */
t14=*((C_word*)lf[1]+1);{
C_word av2[7];
av2[0]=t14;
av2[1]=t5;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[451];
av2[4]=C_make_character(32);
av2[5]=t13;
av2[6]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t14+1)))(7,av2);}}
else{
t13=C_eqp(t8,lf[452]);
if(C_truep(t13)){
t14=C_u_i_car(t6);
/* c-backend.scm:811: gen */
t15=*((C_word*)lf[1]+1);{
C_word av2[7];
av2[0]=t15;
av2[1]=t5;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[453];
av2[4]=C_make_character(32);
av2[5]=t14;
av2[6]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t15+1)))(7,av2);}}
else{
t14=C_eqp(t8,lf[12]);
if(C_truep(t14)){
t15=C_u_i_car(t6);
/* c-backend.scm:811: gen */
t16=*((C_word*)lf[1]+1);{
C_word av2[7];
av2[0]=t16;
av2[1]=t5;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[454];
av2[4]=C_make_character(32);
av2[5]=t15;
av2[6]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t16+1)))(7,av2);}}
else{
/* c-backend.scm:746: bomb */
t15=*((C_word*)lf[8]+1);{
C_word av2[4];
av2[0]=t15;
av2[1]=t7;
av2[2]=lf[455];
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}}}}}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* for-each-loop639 in k5078 in declarations in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5222(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,9)))){
C_save_and_reclaim_args((void *)trf_5222,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5232,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:572: gen */
t5=*((C_word*)lf[1]+1);{
C_word av2[10];
av2[0]=t5;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[289];
av2[4]=t4;
av2[5]=lf[290];
av2[6]=C_SCHEME_TRUE;
av2[7]=lf[291];
av2[8]=t4;
av2[9]=lf[292];
((C_proc)(void*)(*((C_word*)t5+1)))(10,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7968 in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7970,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7973,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:1120: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7977 in k7974 in k7971 in k7968 in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,7)))){
C_save_and_reclaim((void *)f_7979,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7982,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_string_equal_p(lf[646],((C_word*)t0)[8]))){
/* c-backend.scm:1124: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(123);
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[647];
av2[5]=((C_word*)t0)[8];
av2[6]=lf[648];
av2[7]=lf[649];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}
else{
/* c-backend.scm:1124: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(123);
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[647];
av2[5]=((C_word*)t0)[8];
av2[6]=lf[648];
av2[7]=lf[650];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}}

/* k7974 in k7971 in k7968 in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7976(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_7976,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7979,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:1123: generate-foreign-callback-header */
t3=*((C_word*)lf[538]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[651];
av2[3]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k7971 in k7968 in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7973,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7976,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[10])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8082,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1122: cleanup */
t4=*((C_word*)lf[475]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_7976(2,av2);}}}

/* a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5254,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5258,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:600: lambda-literal-argument-count */
t5=*((C_word*)lf[250]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5258,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5261,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:601: lambda-literal-customizable */
t4=*((C_word*)lf[252]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7182,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7185,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:1025: foreign-stub-argument-names */
t4=*((C_word*)lf[581]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_7185,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7188,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
f_7188(2,av2);}}
else{
/* c-backend.scm:1025: make-list */
t3=*((C_word*)lf[580]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7188(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_7188,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7191,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:1026: foreign-result-conversion */
t4=*((C_word*)lf[196]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[579];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6552 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in ... */
static void C_fcall f_6554(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_6554,2,t0,t1);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6556,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_6556(t5,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* doloop893 in k6552 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in ... */
static void C_fcall f_6556(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,5)))){
C_save_and_reclaim_args((void *)trf_6556,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_zerop(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6566,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:808: gen */
t5=*((C_word*)lf[1]+1);{
C_word av2[6];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[456];
av2[4]=t2;
av2[5]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}

/* prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5245(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_5245,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5249,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:597: gen */
t3=*((C_word*)lf[1]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_5249,2,av);}
a=C_alloc(2);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5254,tmp=(C_word)a,a+=2,tmp);
/* c-backend.scm:598: ##sys#hash-table-for-each */
t3=*((C_word*)lf[316]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7191,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7194,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* c-backend.scm:1027: foreign-stub-cps */
t4=*((C_word*)lf[578]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[11];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_7197,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7200,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* c-backend.scm:1029: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7194,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7197,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* c-backend.scm:1028: foreign-stub-callback */
t4=*((C_word*)lf[577]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[12];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3872 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3874,2,av);}
/* c-backend.scm:247: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[154];
av2[4]=t1;
av2[5]=lf[155];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_7160(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7160,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7164,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1018: foreign-stub-id */
t4=*((C_word*)lf[587]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7164,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7167,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1019: real-name2 */
t4=*((C_word*)lf[586]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7167,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7170,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1020: foreign-stub-argument-types */
t4=*((C_word*)lf[585]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* ##compiler#foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8176(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_8176,4,av);}
a=C_alloc(14);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8178,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8183,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t6=t2;
t7=C_eqp(t6,lf[631]);
if(C_truep(t7)){
/* c-backend.scm:1162: str */
t8=t5;
f_8183(t8,t1,lf[666]);}
else{
t8=C_eqp(t6,lf[15]);
t9=(C_truep(t8)?t8:C_eqp(t6,lf[635]));
if(C_truep(t9)){
/* c-backend.scm:1163: str */
t10=t5;
f_8183(t10,t1,lf[667]);}
else{
t10=C_eqp(t6,lf[632]);
t11=(C_truep(t10)?t10:C_eqp(t6,lf[636]));
if(C_truep(t11)){
/* c-backend.scm:1164: str */
t12=t5;
f_8183(t12,t1,lf[668]);}
else{
t12=C_eqp(t6,lf[633]);
t13=(C_truep(t12)?t12:C_eqp(t6,lf[616]));
if(C_truep(t13)){
/* c-backend.scm:1165: str */
t14=t5;
f_8183(t14,t1,lf[669]);}
else{
t14=C_eqp(t6,lf[634]);
t15=(C_truep(t14)?t14:C_eqp(t6,lf[617]));
if(C_truep(t15)){
/* c-backend.scm:1166: str */
t16=t5;
f_8183(t16,t1,lf[670]);}
else{
t16=C_eqp(t6,lf[452]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8253,a[2]=t5,a[3]=t1,a[4]=t6,a[5]=t3,a[6]=t2,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t16)){
t18=t17;
f_8253(t18,t16);}
else{
t18=C_eqp(t6,lf[619]);
t19=t17;
f_8253(t19,(C_truep(t18)?t18:C_eqp(t6,lf[12])));}}}}}}}

/* k8172 in k8130 in k8124 in k8121 in k8118 in k8115 in generate-foreign-callback-header in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,9)))){
C_save_and_reclaim((void *)f_8174,2,av);}
/* c-backend.scm:1147: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 10) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(10);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=((C_word*)t0)[3];
av2[4]=C_make_character(32);
av2[5]=t1;
av2[6]=((C_word*)t0)[4];
av2[7]=C_make_character(32);
av2[8]=((C_word*)t0)[5];
av2[9]=C_make_character(40);
((C_proc)(void*)(*((C_word*)t2+1)))(10,av2);}}

/* err in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_8178(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_8178,2,t0,t1);}
/* c-backend.scm:1159: quit */
t2=*((C_word*)lf[663]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[664];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7170,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_i_length(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7176,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:1022: foreign-stub-return-type */
t6=*((C_word*)lf[584]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7176,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7179,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:1023: foreign-stub-name */
t4=*((C_word*)lf[583]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7179,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7182,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:1024: foreign-stub-body */
t4=*((C_word*)lf[582]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8160 in a8142 in k8133 in k8130 in k8124 in k8121 in k8118 in k8115 in generate-foreign-callback-header in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8162,2,av);}
/* c-backend.scm:1150: gen */
t2=*((C_word*)lf[1]+1);{
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

/* k6537 in for-each-loop901 in k6504 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in ... */
static void C_ccall f_6539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6539,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6529(t3,((C_word*)t0)[4],t2);}

/* str in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_8183(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_8183,3,t0,t1,t2);}
/* c-backend.scm:1160: string-append */
t3=*((C_word*)lf[115]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[665];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3498 in k3495 in k3492 in k3484 in k3470 in k3467 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3500,2,av);}
/* c-backend.scm:270: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[99];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k6513 in for-each-loop901 in k6504 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in ... */
static void C_ccall f_6515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_6515,2,av);}
t2=C_u_i_car(((C_word*)t0)[2]);
/* c-backend.scm:811: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_TRUE;
av2[3]=t1;
av2[4]=C_make_character(32);
av2[5]=t2;
av2[6]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3553 in for-each-loop279 in k3470 in k3467 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3555,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3545(t4,((C_word*)t0)[5],t2,t3);}

/* k3813 in k3780 in k3777 in k3774 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3815(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3815,2,av);}
/* ##sys#string-append */
t2=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[145];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3808 in k3780 in k3777 in k3774 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3810,2,av);}
/* c-backend.scm:324: push-args */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4733(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* for-each-loop305 in k3492 in k3484 in k3470 in k3467 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_3508(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,7)))){
C_save_and_reclaim_args((void *)trf_3508,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3518,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* c-backend.scm:267: gen */
t9=*((C_word*)lf[1]+1);{
C_word av2[8];
av2[0]=t9;
av2[1]=t6;
av2[2]=C_SCHEME_TRUE;
av2[3]=C_make_character(116);
av2[4]=t8;
av2[5]=lf[101];
av2[6]=t7;
av2[7]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t9+1)))(8,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k3012 in k3009 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_3014,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3017,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[6]);
t4=C_a_i_plus(&a,2,t3,C_fix(1));
/* c-backend.scm:146: gen */
t5=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=lf[45];
av2[3]=t4;
av2[4]=lf[46];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k3009 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3011,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3014,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:145: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k3015 in k3012 in k3009 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3017,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3020,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:147: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k10039 in k10036 in k10033 in k10027 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10041,2,av);}
/* c-backend.scm:1341: get-output-string */
t2=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8517(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8517,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8521,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1195: g1613 */
t3=t2;
f_8521(t3,((C_word*)t0)[3],t1);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[4]))){
/* c-backend.scm:1198: str */
t2=((C_word*)t0)[5];
f_8183(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
if(C_truep(C_i_listp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[4];
t3=C_u_i_length(t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8560,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t5=C_eqp(C_fix(2),t3);
if(C_truep(t5)){
t6=C_i_car(((C_word*)t0)[4]);
t7=t4;
f_8560(t7,C_u_i_memq(t6,lf[744]));}
else{
t6=t4;
f_8560(t6,C_SCHEME_FALSE);}}
else{
/* c-backend.scm:1249: err */
t2=((C_word*)t0)[6];
f_8178(t2,((C_word*)t0)[3]);}}}}

/* k5277 in k5274 in k5271 in k5268 in k5265 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5279,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5282,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:608: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3075 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3077,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3080,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:159: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k5274 in k5271 in k5268 in k5265 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5276,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5279,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:607: lambda-literal-allocated */
t4=*((C_word*)lf[312]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5271 in k5268 in k5265 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5273,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5276,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:606: lambda-literal-direct */
t3=*((C_word*)lf[251]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5268 in k5265 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5270,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:605: lambda-literal-rest-argument-mode */
t3=*((C_word*)lf[249]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7303 in k7300 in k7297 in k7294 in k7291 in k7261 in k7258 in k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in ... */
static void C_ccall f_7305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7305,2,av);}
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm:1075: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[546];
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[547];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:1077: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[548];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
/* c-backend.scm:1078: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[549];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}}

/* k7300 in k7297 in k7294 in k7291 in k7261 in k7258 in k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in ... */
static void C_ccall f_7302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7302,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7305,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1073: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[550];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k10054 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10056(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10056,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[329]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10062,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1342: ##sys#print */
t6=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[819];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_8502(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_8502,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
/* c-backend.scm:1192: str */
t2=((C_word*)t0)[2];
f_8183(t2,((C_word*)t0)[3],lf[711]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[551]);
if(C_truep(t2)){
/* c-backend.scm:1193: str */
t3=((C_word*)t0)[2];
f_8183(t3,((C_word*)t0)[3],lf[712]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8517,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[6]))){
/* c-backend.scm:1195: ##sys#hash-table-ref */
t4=*((C_word*)lf[10]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[607]+1);
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_8517(2,av2);}}}}}

/* k5265 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5267,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5270,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:604: lambda-literal-rest-argument */
t4=*((C_word*)lf[313]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5264(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_5264,2,t0,t1);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5267,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5394,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t4=C_a_i_minus(&a,2,((C_word*)t0)[6],C_fix(1));
/* c-backend.scm:603: make-variable-list */
t5=*((C_word*)lf[314]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[315];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* c-backend.scm:603: make-variable-list */
t4=*((C_word*)lf[314]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[315];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_5261,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5264,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5408,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:602: lambda-literal-closure-size */
t5=*((C_word*)lf[159]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t3;
f_5264(t4,C_SCHEME_FALSE);}}

/* k3516 in for-each-loop305 in k3492 in k3484 in k3470 in k3467 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3518,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3508(t4,((C_word*)t0)[5],t2,t3);}

/* k6504 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in ... */
static void C_ccall f_6506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6506,2,av);}
a=C_alloc(5);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[57]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6529,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_6529(t6,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* g1613 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_8521(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_8521,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* c-backend.scm:1197: foreign-type-declaration */
t4=*((C_word*)lf[202]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t2;
/* c-backend.scm:1197: foreign-type-declaration */
t4=*((C_word*)lf[202]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k10087 in k10084 in k10078 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_10089,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10092,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1343: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[820];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10084 in k10078 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10086,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10089,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1343: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10078 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10080(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10080,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[329]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10086,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1343: ##sys#print */
t6=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[821];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4331 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4333,2,av);}
t2=C_u_i_car(((C_word*)t0)[2]);
/* c-backend.scm:422: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t2;
av2[4]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10090 in k10087 in k10084 in k10078 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10092,2,av);}
/* c-backend.scm:1343: get-output-string */
t2=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3492 in k3484 in k3470 in k3467 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_3494,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3497,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3508,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_3508(t6,t2,((C_word*)t0)[5],t1);}

/* k3495 in k3492 in k3484 in k3470 in k3467 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3497,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3500,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* c-backend.scm:270: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[99];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* c-backend.scm:269: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[100];
av2[4]=((C_word*)t0)[4];
av2[5]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}

/* k4349 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4351,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4354,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:427: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k4352 in k4349 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4354,2,av);}
/* c-backend.scm:428: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[199];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3721 in k3681 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3723,2,av);}
a=C_alloc(7);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
if(C_truep(((C_word*)t0)[3])){
/* c-backend.scm:306: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[120];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=lf[121];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3736,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3740,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadddr(((C_word*)t0)[5]);
/* c-backend.scm:308: ##sys#symbol->qualified-string */
t6=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k6410 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in ... */
static void C_ccall f_6412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_6412,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6415,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=*((C_word*)lf[138]+1);
if(C_truep(*((C_word*)lf[138]+1))){
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6415(2,av2);}}
else{
t4=*((C_word*)lf[411]+1);
if(C_truep(*((C_word*)lf[411]+1))){
t5=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_6415(2,av2);}}
else{
/* c-backend.scm:852: gen */
t5=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[442];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6415(2,av2);}}}

/* k6413 in k6410 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in ... */
static void C_ccall f_6415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6415,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[10])){
/* c-backend.scm:853: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[441];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6418(2,av2);}}}

/* g280 in k3470 in k3467 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_3473(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,5)))){
C_save_and_reclaim_args((void *)trf_3473,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3477,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:262: gen */
t5=*((C_word*)lf[1]+1);{
C_word av2[6];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
av2[3]=C_make_character(116);
av2[4]=t3;
av2[5]=C_make_character(61);
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}

/* k3470 in k3467 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3472(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3472,2,av);}
a=C_alloc(17);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3473,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3486,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3545,a[2]=t6,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_3545(t8,t4,((C_word*)t0)[8],t2);}

/* k3475 in g280 in k3470 in k3467 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3477,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3480,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:263: expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2649(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k6416 in k6413 in k6410 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in ... */
static void C_ccall f_6418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6418,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6446,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[9])){
t4=*((C_word*)lf[138]+1);
if(C_truep(*((C_word*)lf[138]+1))){
t5=t3;
f_6446(t5,C_SCHEME_FALSE);}
else{
t5=*((C_word*)lf[428]+1);
t6=t3;
f_6446(t6,(C_truep(*((C_word*)lf[428]+1))?C_SCHEME_FALSE:C_i_not(((C_word*)t0)[4])));}}
else{
t4=t3;
f_6446(t4,C_SCHEME_FALSE);}}

/* k3146 in for-each-loop185 in k3121 in k3107 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3148,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3138(t4,((C_word*)t0)[5],t2,t3);}

/* k3714 in k3681 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3716,2,av);}
/* c-backend.scm:301: string-append */
t2=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[118];
av2[3]=t1;
av2[4]=lf[119];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3890 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3892,2,av);}
/* c-backend.scm:239: lambda-literal-closure-size */
t2=*((C_word*)lf[159]+1);{
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

/* k7291 in k7261 in k7258 in k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in ... */
static void C_ccall f_7293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7293,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7296,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:1070: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_make_character(40);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k7294 in k7291 in k7261 in k7258 in k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in ... */
static void C_ccall f_7296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_7296,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7299,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7330,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7334,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1071: make-argument-list */
t5=*((C_word*)lf[318]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[552];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k7297 in k7294 in k7291 in k7261 in k7258 in k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in ... */
static void C_ccall f_7299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7299,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7302,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(((C_word*)t0)[5],lf[551]);
if(C_truep(t3)){
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_7302(2,av2);}}
else{
/* c-backend.scm:1072: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k7258 in k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in ... */
static void C_ccall f_7260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_7260,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:1056: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[554];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_7263(2,av2);}}}

/* k3879 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3881,2,av);}
/* c-backend.scm:249: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[157];
av2[4]=t1;
av2[5]=lf[158];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k3886 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3888,2,av);}
t2=((C_word*)t0)[2];
f_3426(t2,C_i_zerop(t1));}

/* k7264 in k7261 in k7258 in k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in ... */
static void C_ccall f_7266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7266,2,av);}
/* c-backend.scm:1079: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(125);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7261 in k7258 in k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in ... */
static void C_ccall f_7263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_7263,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7266,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7272,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1058: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
av2[3]=((C_word*)t0)[3];
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[545];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7293,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t4=C_eqp(((C_word*)t0)[6],lf[551]);
if(C_truep(t4)){
/* c-backend.scm:1069: gen */
t5=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* c-backend.scm:1068: gen */
t5=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[553];
av2[4]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}}

/* k3734 in k3721 in k3681 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3736,2,av);}
/* c-backend.scm:307: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[122];
av2[3]=((C_word*)((C_word*)t0)[3])[1];
av2[4]=lf[123];
av2[5]=t1;
av2[6]=lf[124];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k3484 in k3470 in k3467 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3486,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3494,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:268: iota */
t4=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=C_fix(1);
av2[4]=C_fix(1);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3478 in k3475 in g280 in k3470 in k3467 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3480,2,av);}
/* c-backend.scm:264: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10027 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10029(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10029,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[329]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10035,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1341: ##sys#print */
t6=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[818];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_8490(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_8490,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
/* c-backend.scm:1190: str */
t2=((C_word*)t0)[2];
f_8183(t2,((C_word*)t0)[3],lf[710]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[609]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8502,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_8502(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[610]);
if(C_truep(t4)){
t5=t3;
f_8502(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[613]);
t6=t3;
f_8502(t6,(C_truep(t5)?t5:C_eqp(((C_word*)t0)[4],lf[614])));}}}}

/* k7270 in k7261 in k7258 in k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in ... */
static void C_ccall f_7272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7272,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7275,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1060: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[544];
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7273 in k7270 in k7261 in k7258 in k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in ... */
static void C_ccall f_7275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7275,2,av);}
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm:1062: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[540];
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[541];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:1064: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[542];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
/* c-backend.scm:1065: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[543];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}}

/* k10033 in k10027 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10035,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10038,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1341: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10036 in k10033 in k10027 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_10038,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10041,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1341: ##sys#write-char-0 */
t3=*((C_word*)lf[331]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(44);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3956 in k3942 in k3939 in k4067 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3958,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3966,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:348: iota */
t4=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(1);
av2[4]=C_fix(1);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3950 in k3947 in g395 in k3942 in k3939 in k4067 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3952,2,av);}
/* c-backend.scm:344: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7243 in k7237 in k7357 in for-each-loop1204 in k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in ... */
static void C_ccall f_7245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_7245,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7248,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1052: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7246 in k7243 in k7237 in k7357 in for-each-loop1204 in k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in ... */
static void C_ccall f_7248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7248,2,av);}
/* c-backend.scm:1052: get-output-string */
t2=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10000 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10002(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10002,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[329]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10008,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1340: ##sys#print */
t6=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[817];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10006 in k10000 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10008,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10011,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1340: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3947 in g395 in k3942 in k3939 in k4067 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3949,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3952,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:343: expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2649(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* g395 in k3942 in k3939 in k4067 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_3945(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,5)))){
C_save_and_reclaim_args((void *)trf_3945,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3949,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:342: gen */
t5=*((C_word*)lf[1]+1);{
C_word av2[6];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
av2[3]=C_make_character(116);
av2[4]=t3;
av2[5]=C_make_character(61);
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}

/* for-each-loop185 in k3121 in k3107 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_3138(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3138,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3148,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* c-backend.scm:167: g186 */
t9=((C_word*)t0)[3];
f_3110(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k3939 in k4067 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_3941,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3944,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_a_i_plus(&a,2,t1,((C_word*)t0)[7]);
/* c-backend.scm:339: iota */
t4=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=t3;
av2[4]=C_fix(1);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3942 in k3939 in k4067 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3944(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_3944,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3945,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3958,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4011,a[2]=t6,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_4011(t8,t4,((C_word*)t0)[6],t2);}

/* k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in ... */
static void C_ccall f_7254(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,5)))){
C_save_and_reclaim((void *)f_7254,2,av);}
a=C_alloc(15);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[57]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7260,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7352,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_7352(t7,t3,((C_word*)t0)[11],t1,((C_word*)t0)[2]);}

/* k10009 in k10006 in k10000 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_10011,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10014,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1340: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[816];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4420 in k4417 in k4414 in k4411 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4422(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4422,2,av);}
/* c-backend.scm:442: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[211];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10012 in k10009 in k10006 in k10000 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10014,2,av);}
/* c-backend.scm:1340: get-output-string */
t2=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3121 in k3107 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3123(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_3123,2,av);}
a=C_alloc(10);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[57]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3129,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3138,a[2]=t5,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3138(t7,t3,((C_word*)t0)[2],t1);}

/* k3127 in k3121 in k3107 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3129,2,av);}
a=C_alloc(4);
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* c-backend.scm:173: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[58];
av2[3]=t2;
av2[4]=lf[59];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* for-each-loop420 in k3964 in k3956 in k3942 in k3939 in k4067 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_3974(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,7)))){
C_save_and_reclaim_args((void *)trf_3974,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3984,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* c-backend.scm:347: gen */
t9=*((C_word*)lf[1]+1);{
C_word av2[8];
av2[0]=t9;
av2[1]=t6;
av2[2]=C_SCHEME_TRUE;
av2[3]=C_make_character(116);
av2[4]=t8;
av2[5]=lf[164];
av2[6]=t7;
av2[7]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t9+1)))(8,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k10060 in k10054 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10062,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10065,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1342: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10066 in k10063 in k10060 in k10054 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10068,2,av);}
/* c-backend.scm:1342: get-output-string */
t2=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10063 in k10060 in k10054 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_10065,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10068,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1342: ##sys#write-char-0 */
t3=*((C_word*)lf[331]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(44);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4982 in k4978 in k4879 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4984,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4988,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:538: pad0 */
f_4863(t3,((C_word*)t0)[8]);}

/* k4986 in k4982 in k4978 in k4879 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4988,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4992,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:538: pad0 */
f_4863(t3,((C_word*)t0)[8]);}

/* k3967 in k3964 in k3956 in k3942 in k3939 in k4067 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3969,2,av);}
/* c-backend.scm:349: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[163];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3964 in k3956 in k3942 in k3939 in k4067 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3966,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3969,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3974,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_3974(t6,t2,((C_word*)t0)[3],t1);}

/* k4978 in k4879 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4980,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4984,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:538: pad0 */
f_4863(t3,((C_word*)t0)[8]);}

/* k4399 in k4395 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4401,2,av);}
/* c-backend.scm:432: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[206];
av2[4]=t1;
av2[5]=lf[207];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k5431 in doloop721 in k5478 in k5475 in k5504 in k5466 in k5463 in k5460 in k5457 in k5454 in k5451 in a5448 in trampolines in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5433,2,av);}
a=C_alloc(8);
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=C_a_i_minus(&a,2,((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_5423(t4,((C_word*)t0)[5],t2,t3);}

/* k4994 in k4990 in k4986 in k4982 in k4978 in k4879 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,20)))){
C_save_and_reclaim((void *)f_4996,2,av);}
/* c-backend.scm:536: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 21) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(21);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[267];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[268];
av2[5]=C_SCHEME_TRUE;
av2[6]=lf[269];
av2[7]=C_SCHEME_TRUE;
av2[8]=lf[270];
av2[9]=((C_word*)t0)[4];
av2[10]=C_make_character(45);
av2[11]=((C_word*)t0)[5];
av2[12]=C_make_character(45);
av2[13]=((C_word*)t0)[6];
av2[14]=C_make_character(32);
av2[15]=((C_word*)t0)[7];
av2[16]=C_make_character(58);
av2[17]=((C_word*)t0)[8];
av2[18]=C_SCHEME_TRUE;
av2[19]=t1;
av2[20]=lf[271];
((C_proc)(void*)(*((C_word*)t2+1)))(21,av2);}}

/* k5643 in k5580 in literal-size in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_5645,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5648,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5650,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_5650(t6,t2,t1);}

/* k3615 in k3612 in k3609 in k3606 in k3585 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3617,2,av);}
/* c-backend.scm:286: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[104];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k5646 in k5643 in k5580 in literal-size in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5648,2,av);}
/* c-backend.scm:681: reduce */
t2=*((C_word*)lf[336]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[337]+1);
av2[3]=C_fix(0);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3612 in k3609 in k3606 in k3585 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3614,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3617,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* c-backend.scm:286: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[104];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* c-backend.scm:285: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_make_character(44);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k3609 in k3606 in k3585 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3611,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3614,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:284: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=((C_word*)t0)[5];
av2[4]=C_make_character(40);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4990 in k4986 in k4982 in k4978 in k4879 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4992(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_4992,2,av);}
a=C_alloc(22);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4996,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5008,a[2]=t3,a[3]=t6,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5049,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:541: chicken-version */
t10=*((C_word*)lf[278]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* a5448 in trampolines in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5449,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5453,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:649: lambda-literal-argument-count */
t5=*((C_word*)lf[250]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5615 in k5611 in k5580 in literal-size in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5617,2,av);}
/* c-backend.scm:680: + */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(3);
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
C_plus(5,av2);}}

/* k3606 in k3585 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_3608,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3611,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3627,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[9])){
/* c-backend.scm:283: push-args */
t4=((C_word*)((C_word*)t0)[6])[1];
f_4733(t4,t2,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3638,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:283: number->string */
t5=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k5611 in k5580 in literal-size in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5613,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5617,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* c-backend.scm:680: literal-size */
t6=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
f_5575(3,av2);}}

/* k5451 in a5448 in trampolines in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5453,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5456,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:650: lambda-literal-rest-argument */
t5=*((C_word*)lf[313]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5457 in k5454 in k5451 in a5448 in trampolines in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5459,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5462,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:652: lambda-literal-customizable */
t3=*((C_word*)lf[252]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5454 in k5451 in a5448 in trampolines in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5456,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5459,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:651: lambda-literal-rest-argument-mode */
t3=*((C_word*)lf[249]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4947 in for-each-loop611 in k4927 in k4912 in k4909 in k4906 in k4903 in k4900 in k4897 in k4879 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4949,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4939(t3,((C_word*)t0)[4],t2);}

/* k5463 in k5460 in k5457 in k5454 in k5451 in a5448 in trampolines in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5465(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_5465,2,t0,t1);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5468,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=C_a_i_minus(&a,2,((C_word*)((C_word*)t0)[4])[1],C_fix(1));
t4=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t3);
t5=t2;
f_5468(t5,t4);}
else{
t3=t2;
f_5468(t3,C_SCHEME_UNDEFINED);}}

/* k5460 in k5457 in k5454 in k5451 in a5448 in trampolines in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_5462,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5465,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5517,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:653: lambda-literal-closure-size */
t5=*((C_word*)lf[159]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t3;
f_5465(t4,C_SCHEME_FALSE);}}

/* k3112 in g186 in k3107 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3114,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3117,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:170: expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2649(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k5466 in k5463 in k5460 in k5457 in k5454 in k5451 in a5448 in trampolines in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5468(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5468,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5506,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:655: lambda-literal-direct */
t3=*((C_word*)lf[251]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* g186 in k3107 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_3110(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3110,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3114,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:169: gen */
t5=*((C_word*)lf[1]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[55];
av2[3]=t3;
av2[4]=lf[56];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_3663(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_3663,2,t0,t1);}
a=C_alloc(14);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=t2;
t4=C_i_car(t3);
t5=t4;
t6=C_i_cadr(t3);
t7=t6;
t8=C_i_caddr(t3);
t9=t8;
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3683,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t11,a[8]=t9,a[9]=t5,a[10]=t7,a[11]=t3,tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:296: gen */
t13=*((C_word*)lf[1]+1);{
C_word av2[4];
av2[0]=t13;
av2[1]=t12;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[135];
((C_proc)(void*)(*((C_word*)t13+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3776,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[2],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:321: gen */
t3=*((C_word*)lf[1]+1);{
C_word av2[6];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=C_make_character(116);
av2[4]=((C_word*)t0)[8];
av2[5]=C_make_character(61);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}

/* loop in cleanup in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_6951(C_word t0,C_word t1,C_word t2){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,2)))){
C_save_and_reclaim_args((void *)trf_6951,3,t0,t1,t2);}
a=C_alloc(16);
if(C_truep(C_i_greater_or_equalp(t2,((C_word*)t0)[2]))){
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=(C_truep(t3)?t3:((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_string_ref(((C_word*)t0)[4],t2);
t4=t3;
t5=C_u_i_char_lessp(t4,C_make_character(32));
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6979,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t5)){
t7=t6;
f_6979(t7,t5);}
else{
t7=C_u_i_char_greaterp(t4,C_make_character(126));
if(C_truep(t7)){
t8=t6;
f_6979(t8,t7);}
else{
if(C_truep(C_u_i_char_equalp(t4,C_make_character(42)))){
t8=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
if(C_truep(C_i_lessp(t2,t8))){
t9=C_a_i_plus(&a,2,t2,C_fix(1));
t10=C_i_string_ref(((C_word*)t0)[4],t9);
t11=C_u_i_char_equalp(C_make_character(47),t10);
t12=t6;
f_6979(t12,t11);}
else{
t9=t6;
f_6979(t9,C_SCHEME_FALSE);}}
else{
t8=t6;
f_6979(t8,C_SCHEME_FALSE);}}}}}

/* k5778 in k5772 in gen-lit in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5780(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_5780,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=*((C_word*)lf[346]+1);
t3=C_eqp(((C_word*)t0)[3],*((C_word*)lf[346]+1));
if(C_truep(t3)){
/* c-backend.scm:700: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=((C_word*)t0)[4];
av2[4]=lf[347];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
if(C_truep(C_booleanp(((C_word*)t0)[3]))){
if(C_truep(((C_word*)t0)[3])){
/* c-backend.scm:702: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=((C_word*)t0)[4];
av2[4]=C_make_character(61);
av2[5]=lf[348];
av2[6]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}}
else{
/* c-backend.scm:702: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=((C_word*)t0)[4];
av2[4]=C_make_character(61);
av2[5]=lf[349];
av2[6]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}}}
else{
if(C_truep(C_charp(((C_word*)t0)[3]))){
t4=C_fix(C_character_code(((C_word*)t0)[3]));
/* c-backend.scm:704: gen */
t5=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=((C_word*)t0)[4];
av2[4]=lf[350];
av2[5]=t4;
av2[6]=lf[351];
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t4=C_slot(((C_word*)t0)[3],C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5830,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:707: c-ify-string */
t7=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[3]))){
/* c-backend.scm:712: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=((C_word*)t0)[4];
av2[4]=lf[356];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=C_immp(((C_word*)t0)[3]);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_lambdainfop(((C_word*)t0)[3]));
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_fixnump(((C_word*)t0)[3]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5863,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t6)){
t8=t7;
f_5863(t8,t6);}
else{
t8=C_immp(((C_word*)t0)[3]);
t9=t7;
f_5863(t9,C_i_not(t8));}}}}}}}}}

/* k3183 in k3180 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3185,2,av);}
/* c-backend.scm:178: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[63];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3180 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3182,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3185,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:177: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k6938 in emit-procedure-table in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,8)))){
C_save_and_reclaim((void *)f_6940,2,av);}
a=C_alloc(4);
t2=C_a_i_plus(&a,2,t1,C_fix(1));
/* c-backend.scm:938: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[529];
av2[5]=C_SCHEME_TRUE;
av2[6]=lf[530];
av2[7]=t2;
av2[8]=lf[531];
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* ##compiler#cleanup in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6942(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6942,3,av);}
a=C_alloc(10);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_i_string_length(t2);
t6=t5;
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6951,a[2]=t6,a[3]=t4,a[4]=t2,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_6951(t10,t1,C_fix(0));}

/* k4411 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4413,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4416,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:439: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k4967 in k4903 in k4900 in k4897 in k4879 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4969,2,av);}
/* c-backend.scm:549: gen-list */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[264]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4417 in k4414 in k4411 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4419(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4419,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4422,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:441: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k4414 in k4411 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4416,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4419,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4433,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:440: foreign-argument-conversion */
t4=*((C_word*)lf[201]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6930 in a6905 in k6887 in emit-procedure-table in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6932(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6932,2,av);}
/* c-backend.scm:942: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[526];
av2[4]=((C_word*)t0)[3];
av2[5]=C_make_character(58);
av2[6]=t1;
av2[7]=lf[527];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}

/* k5375 in k5372 in k5280 in k5277 in k5274 in k5271 in k5268 in k5265 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5377,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5380,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:620: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[300];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* procedures in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_6051(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_6051,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6057,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:749: ##sys#hash-table-for-each */
t3=*((C_word*)lf[316]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a6056 in procedures in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6057,4,av);}
a=C_alloc(11);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6061,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:751: lambda-literal-argument-count */
t5=*((C_word*)lf[250]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4906 in k4903 in k4900 in k4897 in k4879 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4908,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4911,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:550: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[258];
av2[4]=C_SCHEME_TRUE;
av2[5]=C_SCHEME_TRUE;
av2[6]=lf[259];
av2[7]=*((C_word*)lf[260]+1);
av2[8]=lf[261];
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k5372 in k5280 in k5277 in k5274 in k5271 in k5268 in k5265 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_5374,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5377,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:619: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[301];
av2[3]=t2;
av2[4]=lf[302];
av2[5]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}

/* k6908 in a6905 in k6887 in emit-procedure-table in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6910,2,av);}
t2=C_eqp(lf[298],((C_word*)t0)[2]);
if(C_truep(t2)){
if(C_truep(*((C_word*)lf[262]+1))){
/* c-backend.scm:945: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[522];
av2[3]=*((C_word*)lf[262]+1);
av2[4]=lf[523];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
/* c-backend.scm:946: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[524];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
/* c-backend.scm:947: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=lf[525];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k3625 in k3606 in k3585 in k3464 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3627,2,av);}
/* c-backend.scm:283: push-args */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4733(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k4903 in k4900 in k4897 in k4879 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4905,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4908,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[262]+1))){
/* c-backend.scm:546: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[263];
av2[3]=*((C_word*)lf[262]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4969,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:548: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[265];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k4900 in k4897 in k4879 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4902,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4905,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:545: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4487 in k4484 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4489,2,av);}
/* c-backend.scm:455: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4484 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4486,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4489,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:454: expr-args */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4704(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k4915 in k4912 in k4909 in k4906 in k4903 in k4900 in k4897 in k4879 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4917,2,av);}
if(C_truep(*((C_word*)lf[254]+1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* c-backend.scm:557: generate-foreign-callback-stub-prototypes */
t2=*((C_word*)lf[255]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[256]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k6899 in k6896 in k6893 in k6890 in k6887 in emit-procedure-table in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,14)))){
C_save_and_reclaim((void *)f_6901,2,av);}
/* c-backend.scm:952: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 15) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(15);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[512];
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[513];
av2[5]=C_SCHEME_TRUE;
av2[6]=lf[514];
av2[7]=C_SCHEME_TRUE;
av2[8]=lf[515];
av2[9]=C_SCHEME_TRUE;
av2[10]=lf[516];
av2[11]=C_SCHEME_TRUE;
av2[12]=lf[517];
av2[13]=C_SCHEME_TRUE;
av2[14]=lf[518];
((C_proc)(void*)(*((C_word*)t2+1)))(15,av2);}}

/* a6905 in k6887 in emit-procedure-table in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6906,4,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6910,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6932,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:942: string->c-identifier */
t6=*((C_word*)lf[528]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k4909 in k4906 in k4903 in k4900 in k4897 in k4879 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4911,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4914,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[254]+1))){
/* c-backend.scm:552: generate-foreign-callback-stub-prototypes */
t3=*((C_word*)lf[255]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=*((C_word*)lf[256]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4914(2,av2);}}}

/* k4912 in k4909 in k4906 in k4903 in k4900 in k4897 in k4879 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4914,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4917,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(*((C_word*)lf[257]+1)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4929,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:554: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
if(C_truep(*((C_word*)lf[254]+1))){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* c-backend.scm:557: generate-foreign-callback-stub-prototypes */
t3=*((C_word*)lf[255]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[256]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}

/* k4927 in k4912 in k4909 in k4906 in k4903 in k4900 in k4897 in k4879 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4929,2,av);}
a=C_alloc(5);
t2=*((C_word*)lf[257]+1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4939,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4939(t6,((C_word*)t0)[2],*((C_word*)lf[257]+1));}

/* k6371 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in ... */
static void C_ccall f_6373(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6373,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6376,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6388,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=*((C_word*)lf[138]+1);
if(C_truep(*((C_word*)lf[138]+1))){
t5=t3;
f_6388(t5,C_SCHEME_FALSE);}
else{
t5=*((C_word*)lf[428]+1);
if(C_truep(*((C_word*)lf[428]+1))){
t6=t3;
f_6388(t6,C_SCHEME_FALSE);}
else{
t6=C_i_greaterp(((C_word*)t0)[3],C_fix(2));
t7=t3;
f_6388(t7,(C_truep(t6)?C_i_not(((C_word*)t0)[6]):C_SCHEME_FALSE));}}}

/* k6374 in k6371 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in ... */
static void C_ccall f_6376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,9)))){
C_save_and_reclaim((void *)f_6376,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6379,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(*((C_word*)lf[423]+1))){
/* c-backend.scm:847: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[424];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* c-backend.scm:848: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 10) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(10);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[419];
av2[4]=((C_word*)t0)[3];
av2[5]=lf[420];
av2[6]=((C_word*)t0)[4];
av2[7]=lf[421];
av2[8]=((C_word*)t0)[5];
av2[9]=lf[422];
((C_proc)(void*)(*((C_word*)t3+1)))(10,av2);}}}

/* a7047 in make-argument-list in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7048,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7056,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:989: number->string */
t4=*((C_word*)lf[107]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6386 in k6371 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in ... */
static void C_fcall f_6388(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,7)))){
C_save_and_reclaim_args((void *)trf_6388,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:846: gen */
t2=*((C_word*)lf[1]+1);{
C_word av2[8];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[425];
av2[4]=((C_word*)t0)[3];
av2[5]=lf[426];
av2[6]=((C_word*)t0)[3];
av2[7]=lf[427];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_6376(2,av2);}}}

/* ##compiler#make-argument-list in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7042,4,av);}
a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7048,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:987: list-tabulate */
t5=*((C_word*)lf[535]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k7038 in a7031 in make-variable-list in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7040,2,av);}
/* c-backend.scm:984: string-append */
t2=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[534];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* for-each-loop611 in k4927 in k4912 in k4909 in k4906 in k4903 in k4900 in k4897 in k4879 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_4939(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4939,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4949,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:555: gen */
t5=*((C_word*)lf[1]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5378 in k5375 in k5372 in k5280 in k5277 in k5274 in k5271 in k5268 in k5265 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5380,2,av);}
/* c-backend.scm:621: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[299];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* ##compiler#generate-external-variables in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7058(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7058,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7062,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:995: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7054 in a7047 in make-argument-list in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7056,2,av);}
/* c-backend.scm:989: string-append */
t2=*((C_word*)lf[115]+1);{
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

/* k6377 in k6374 in k6371 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in ... */
static void C_ccall f_6379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,9)))){
C_save_and_reclaim((void *)f_6379,2,av);}
/* c-backend.scm:848: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 10) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(10);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[419];
av2[4]=((C_word*)t0)[3];
av2[5]=lf[420];
av2[6]=((C_word*)t0)[4];
av2[7]=lf[421];
av2[8]=((C_word*)t0)[5];
av2[9]=lf[422];
((C_proc)(void*)(*((C_word*)t2+1)))(10,av2);}}

/* ##compiler#make-variable-list in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7026,4,av);}
a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7032,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:982: list-tabulate */
t5=*((C_word*)lf[535]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k6365 in a6358 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in ... */
static void C_ccall f_6367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_6367,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_plus(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop1453 in k7998 in k7995 in k7983 in k7980 in k7977 in k7974 in k7971 in k7968 in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_8033(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_8033,4,t0,t1,t2,t3);}
a=C_alloc(10);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8043,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
t9=t6;
t10=t7;
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7994,a[2]=t9,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1129: foreign-result-conversion */
t12=*((C_word*)lf[196]+1);{
C_word av2[4];
av2[0]=t12;
av2[1]=t11;
av2[2]=t8;
av2[3]=lf[643];
((C_proc)(void*)(*((C_word*)t12+1)))(4,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k8029 in k8001 in k7998 in k7995 in k7983 in k7980 in k7977 in k7974 in k7971 in k7968 in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8031,2,av);}
/* c-backend.scm:1134: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[639];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3115 in k3112 in g186 in k3107 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3117,2,av);}
/* c-backend.scm:171: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(44);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6340 in k6308 in k6305 in k6302 in k6298 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in ... */
static void C_ccall f_6342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6342,2,av);}
if(C_truep(*((C_word*)lf[404]+1))){
/* c-backend.scm:828: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[405];
av2[4]=*((C_word*)lf[404]+1);
av2[5]=lf[406];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_6313(2,av2);}}}

/* k9976 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_9978(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9978,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[329]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9984,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1339: ##sys#print */
t6=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[815];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_9975(C_word t0,C_word t1){
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
C_word t15;
C_word t16;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_9975,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9978,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1339: open-output-string */
t3=*((C_word*)lf[334]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[600]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10002,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1340: open-output-string */
t4=*((C_word*)lf[334]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_eqp(((C_word*)t0)[4],lf[619]);
t4=(C_truep(t3)?t3:C_eqp(((C_word*)t0)[4],lf[620]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10029,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1341: open-output-string */
t6=*((C_word*)lf[334]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_eqp(((C_word*)t0)[4],lf[625]);
t6=(C_truep(t5)?t5:C_eqp(((C_word*)t0)[4],lf[624]));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10056,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1342: open-output-string */
t8=*((C_word*)lf[334]+1);{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=C_eqp(((C_word*)t0)[4],lf[622]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10080,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1343: open-output-string */
t9=*((C_word*)lf[334]+1);{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t8=C_eqp(((C_word*)t0)[4],lf[616]);
t9=(C_truep(t8)?t8:C_eqp(((C_word*)t0)[4],lf[617]));
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1344: open-output-string */
t11=*((C_word*)lf[334]+1);{
C_word av2[2];
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t10=C_eqp(((C_word*)t0)[4],lf[618]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10131,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1345: open-output-string */
t12=*((C_word*)lf[334]+1);{
C_word av2[2];
av2[0]=t12;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t11=C_eqp(((C_word*)t0)[4],lf[621]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10155,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1346: open-output-string */
t13=*((C_word*)lf[334]+1);{
C_word av2[2];
av2[0]=t13;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t12=C_eqp(((C_word*)t0)[4],lf[12]);
if(C_truep(t12)){
t13=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t13;
av2[1]=lf[825];
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t13=C_eqp(((C_word*)t0)[4],lf[551]);
t14=(C_truep(t13)?t13:C_eqp(((C_word*)t0)[4],lf[631]));
if(C_truep(t14)){
t15=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t15;
av2[1]=lf[826];
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}
else{
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10188,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[5]))){
/* c-backend.scm:1350: ##sys#hash-table-ref */
t16=*((C_word*)lf[10]+1);{
C_word av2[4];
av2[0]=t16;
av2[1]=t15;
av2[2]=*((C_word*)lf[607]+1);
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t16+1)))(4,av2);}}
else{
t16=t15;{
C_word av2[2];
av2[0]=t16;
av2[1]=C_SCHEME_FALSE;
f_10188(2,av2);}}}}}}}}}}}}}

/* k10400 in k10397 in k10394 in k10388 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10402,2,av);}
/* c-backend.scm:1368: get-output-string */
t2=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a6358 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in ... */
static void C_ccall f_6359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6359,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6367,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:814: literal-size */
t5=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
f_5575(3,av2);}}

/* a7031 in make-variable-list in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7032,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7040,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:984: number->string */
t4=*((C_word*)lf[107]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* for-each-loop1204 in k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in ... */
static void C_fcall f_7352(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_7352,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7359,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_7359(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_7359(t6,C_SCHEME_FALSE);}}

/* k3107 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_3109,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3110,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3123,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:172: iota */
t5=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(1);
av2[4]=C_fix(1);
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k7357 in for-each-loop1204 in k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in ... */
static void C_fcall f_7359(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,0,2)))){
C_save_and_reclaim_args((void *)trf_7359,2,t0,t1);}
a=C_alloc(20);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7362,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(0));
t4=C_slot(((C_word*)t0)[3],C_fix(0));
t5=C_slot(((C_word*)t0)[4],C_fix(0));
t6=t2;
t7=t3;
t8=t4;
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7221,a[2]=t6,a[3]=t8,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7233,a[2]=t9,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
/* c-backend.scm:1052: symbol->string */
t11=*((C_word*)lf[559]+1);{
C_word av2[3];
av2[0]=t11;
av2[1]=t10;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7239,a[2]=t10,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1052: open-output-string */
t12=*((C_word*)lf[334]+1);{
C_word av2[2];
av2[0]=t12;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5392 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5394,2,av);}
/* c-backend.scm:603: intersperse */
t2=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_make_character(44);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k6329 in k6326 in k6314 in k6311 in k6308 in k6305 in k6302 in k6298 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in ... */
static void C_ccall f_6331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6331,2,av);}
/* c-backend.scm:841: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[383];
av2[4]=((C_word*)t0)[3];
av2[5]=lf[384];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k9961 in k9958 in k9955 in k9949 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_9963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9963,2,av);}
/* c-backend.scm:1335: get-output-string */
t2=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k9958 in k9955 in k9949 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_9960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_9960,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9963,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1335: ##sys#write-char-0 */
t3=*((C_word*)lf[331]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(44);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_8361(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_8361,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
/* c-backend.scm:1178: str */
t2=((C_word*)t0)[2];
f_8183(t2,((C_word*)t0)[3],lf[682]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[626]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[627]));
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[683];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[4],lf[684]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8382,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_8382(t6,t4);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[745]);
if(C_truep(t6)){
t7=t5;
f_8382(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[746]);
t8=t5;
f_8382(t8,(C_truep(t7)?t7:C_eqp(((C_word*)t0)[4],lf[747])));}}}}}

/* k7360 in k7357 in for-each-loop1204 in k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in ... */
static void C_ccall f_7362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7362,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[5])[1];
f_7352(t5,((C_word*)t0)[6],t2,t3,t4);}

/* k8041 in for-each-loop1453 in k7998 in k7995 in k7983 in k7980 in k7977 in k7974 in k7971 in k7968 in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8043,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_8033(t4,((C_word*)t0)[5],t2,t3);}

/* k7332 in k7294 in k7291 in k7261 in k7258 in k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in ... */
static void C_ccall f_7334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7334,2,av);}
/* c-backend.scm:1071: intersperse */
t2=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_make_character(44);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k7328 in k7294 in k7291 in k7261 in k7258 in k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in ... */
static void C_ccall f_7330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7330,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[1]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* k6987 in k6977 in loop in cleanup in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6989,2,av);}
a=C_alloc(4);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_string_set(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3],C_make_character(126));
t4=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* c-backend.scm:976: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6951(t5,((C_word*)t0)[5],t4);}

/* k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_8382(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_8382,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
/* c-backend.scm:1180: str */
t2=((C_word*)t0)[2];
f_8183(t2,((C_word*)t0)[3],lf[685]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[686]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[687]));
if(C_truep(t3)){
/* c-backend.scm:1181: str */
t4=((C_word*)t0)[2];
f_8183(t4,((C_word*)t0)[3],lf[688]);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[689]);
t5=(C_truep(t4)?t4:C_eqp(((C_word*)t0)[4],lf[690]));
if(C_truep(t5)){
/* c-backend.scm:1182: str */
t6=((C_word*)t0)[2];
f_8183(t6,((C_word*)t0)[3],lf[691]);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[692]);
t7=(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[693]));
if(C_truep(t7)){
/* c-backend.scm:1183: str */
t8=((C_word*)t0)[2];
f_8183(t8,((C_word*)t0)[3],lf[694]);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[695]);
t9=(C_truep(t8)?t8:C_eqp(((C_word*)t0)[4],lf[696]));
if(C_truep(t9)){
/* c-backend.scm:1184: str */
t10=((C_word*)t0)[2];
f_8183(t10,((C_word*)t0)[3],lf[697]);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[698]);
t11=(C_truep(t10)?t10:C_eqp(((C_word*)t0)[4],lf[699]));
if(C_truep(t11)){
/* c-backend.scm:1185: str */
t12=((C_word*)t0)[2];
f_8183(t12,((C_word*)t0)[3],lf[700]);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[701]);
t13=(C_truep(t12)?t12:C_eqp(((C_word*)t0)[4],lf[702]));
if(C_truep(t13)){
/* c-backend.scm:1186: str */
t14=((C_word*)t0)[2];
f_8183(t14,((C_word*)t0)[3],lf[703]);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[704]);
t15=(C_truep(t14)?t14:C_eqp(((C_word*)t0)[4],lf[705]));
if(C_truep(t15)){
/* c-backend.scm:1187: str */
t16=((C_word*)t0)[2];
f_8183(t16,((C_word*)t0)[3],lf[706]);}
else{
t16=C_eqp(((C_word*)t0)[4],lf[707]);
t17=(C_truep(t16)?t16:C_eqp(((C_word*)t0)[4],lf[708]));
if(C_truep(t17)){
/* c-backend.scm:1188: str */
t18=((C_word*)t0)[2];
f_8183(t18,((C_word*)t0)[3],lf[709]);}
else{
t18=C_eqp(((C_word*)t0)[4],lf[594]);
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8490,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t18)){
t20=t19;
f_8490(t20,t18);}
else{
t20=C_eqp(((C_word*)t0)[4],lf[590]);
if(C_truep(t20)){
t21=t19;
f_8490(t21,t20);}
else{
t21=C_eqp(((C_word*)t0)[4],lf[608]);
if(C_truep(t21)){
t22=t19;
f_8490(t22,t21);}
else{
t22=C_eqp(((C_word*)t0)[4],lf[612]);
t23=t19;
f_8490(t23,(C_truep(t22)?t22:C_eqp(((C_word*)t0)[4],lf[611])));}}}}}}}}}}}}}

/* k9934 in k9931 in k9925 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_9936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_9936,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9939,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1334: ##sys#write-char-0 */
t3=*((C_word*)lf[331]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(44);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k9937 in k9934 in k9931 in k9925 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_9939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9939,2,av);}
/* c-backend.scm:1334: get-output-string */
t2=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6977 in loop in cleanup in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_6979(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6979,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_i_string_set(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3],C_make_character(126));
t3=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* c-backend.scm:976: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_6951(t4,((C_word*)t0)[5],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6989,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:973: string-copy */
t3=*((C_word*)lf[533]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_i_string_set(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3],((C_word*)t0)[7]);
t3=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* c-backend.scm:976: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_6951(t4,((C_word*)t0)[5],t3);}
else{
t2=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* c-backend.scm:976: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_6951(t3,((C_word*)t0)[5],t2);}}}

/* k9931 in k9925 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_9933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_9933,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9936,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1334: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5055 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5057,2,av);}
/* c-backend.scm:530: ##sys#decode-seconds */
t2=*((C_word*)lf[279]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k9925 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_9927(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9927,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[329]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9933,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1334: ##sys#print */
t6=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[812];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2809 in k2806 in k2803 in k2800 in k2797 in k2794 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2811,2,av);}
/* c-backend.scm:105: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(125);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8010 in k8007 in k8004 in k8001 in k7998 in k7995 in k7983 in k7980 in k7977 in k7974 in k7971 in k7968 in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in ... */
static void C_ccall f_8012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8012,2,av);}
/* c-backend.scm:1137: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[637];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k5047 in k4990 in k4986 in k4982 in k4978 in k4879 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5049,2,av);}
/* c-backend.scm:541: string-split */
t2=*((C_word*)lf[276]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[277];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k10424 in k10421 in k10418 in k10412 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10426,2,av);}
/* c-backend.scm:1369: get-output-string */
t2=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10421 in k10418 in k10412 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_10423,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10426,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1369: ##sys#write-char-0 */
t3=*((C_word*)lf[331]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(44);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k10418 in k10412 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10420,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1369: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k9988 in k9985 in k9982 in k9976 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_9990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9990,2,av);}
/* c-backend.scm:1339: get-output-string */
t2=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8004 in k8001 in k7998 in k7995 in k7983 in k7980 in k7977 in k7974 in k7971 in k7968 in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_8006,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1135: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[638];
av2[3]=((C_word*)t0)[4];
av2[4]=C_make_character(44);
av2[5]=((C_word*)t0)[5];
av2[6]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k8007 in k8004 in k8001 in k7998 in k7995 in k7983 in k7980 in k7977 in k7974 in k7971 in k7968 in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 in ... */
static void C_ccall f_8009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8009,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8012,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_eqp(lf[551],((C_word*)t0)[3]);
if(C_truep(t3)){
/* c-backend.scm:1137: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[637];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* c-backend.scm:1136: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k7998 in k7995 in k7983 in k7980 in k7977 in k7974 in k7971 in k7968 in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_8000,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8003,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8033,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_8033(t6,t2,((C_word*)t0)[6],t1);}

/* k8001 in k7998 in k7995 in k7983 in k7980 in k7977 in k7974 in k7971 in k7968 in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8003,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_eqp(lf[551],((C_word*)t0)[3]);
if(C_truep(t3)){
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_8006(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8031,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1134: foreign-argument-conversion */
t5=*((C_word*)lf[201]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k5069 in k6759 in k6756 in k6753 in k6750 in k6747 in k6744 in k6741 in k6738 in k6735 in k6732 in k6728 in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5071,2,av);}
/* c-backend.scm:561: uncommentify */
t2=*((C_word*)lf[82]+1);{
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

/* declarations in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5073(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_5073,2,t0,t1);}
a=C_alloc(5);
t2=C_i_length(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5080,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:569: gen */
t5=*((C_word*)lf[1]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[293];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k10412 in k10213 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10414(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10414,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[329]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10420,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1369: ##sys#print */
t6=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[841];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9982 in k9976 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_9984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_9984,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9987,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1339: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k9985 in k9982 in k9976 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_9987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9987,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9990,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1339: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[814];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5065 in k6759 in k6756 in k6753 in k6750 in k6747 in k6744 in k6741 in k6738 in k6735 in k6732 in k6728 in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,10)))){
C_save_and_reclaim((void *)f_5067,2,av);}
/* c-backend.scm:560: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 11) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(11);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[488];
av2[5]=C_SCHEME_TRUE;
av2[6]=t1;
av2[7]=lf[489];
av2[8]=C_SCHEME_TRUE;
av2[9]=lf[490];
av2[10]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(11,av2);}}

/* k9955 in k9949 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_9957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_9957,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9960,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1335: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6600 in doloop888 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in ... */
static void C_ccall f_6602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6602,2,av);}
a=C_alloc(4);
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6592(t3,((C_word*)t0)[4],t2);}

/* k9949 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_9951(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9951,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[329]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9957,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1335: ##sys#print */
t6=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[813];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5036 in map-loop573 in k5006 in k4990 in k4986 in k4982 in k4978 in k4879 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5038(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5038,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5013(t6,((C_word*)t0)[5],t5);}

/* k6673 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in ... */
static void C_ccall f_6675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_6675,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6678,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(*((C_word*)lf[262]+1))){
/* c-backend.scm:786: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[465];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
/* c-backend.scm:785: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[466];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k6676 in k6673 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in ... */
static void C_ccall f_6678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6678,2,av);}
/* c-backend.scm:786: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[465];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k7602 in k7565 in k7559 in k7547 in k7535 in k7526 in compute-size in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_7604(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_7604,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1114: string-append */
t2=*((C_word*)lf[115]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[598];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[599]);
if(C_truep(t2)){
t3=C_i_cadr(((C_word*)t0)[5]);
/* c-backend.scm:1115: compute-size */
t4=((C_word*)((C_word*)t0)[6])[1];{
C_word av2[5];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
av2[3]=((C_word*)t0)[7];
av2[4]=((C_word*)t0)[3];
f_7518(5,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_backend_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("backend_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_backend_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(1823))){
C_save(t1);
C_rereclaim2(1823*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,861);
lf[0]=C_h_intern(&lf[0],15,"\010compileroutput");
lf[1]=C_h_intern(&lf[1],12,"\010compilergen");
lf[2]=C_h_intern(&lf[2],7,"newline");
lf[3]=C_h_intern(&lf[3],7,"display");
lf[4]=C_h_intern(&lf[4],17,"\010compilergen-list");
lf[5]=C_h_intern(&lf[5],11,"intersperse");
lf[6]=C_h_intern(&lf[6],18,"\010compilerunique-id");
lf[7]=C_h_intern(&lf[7],22,"\010compilergenerate-code");
lf[8]=C_h_intern(&lf[8],13,"\010compilerbomb");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000\021can\047t find lambda");
lf[10]=C_h_intern(&lf[10],18,"\003syshash-table-ref");
lf[11]=C_h_intern(&lf[11],14,"\004coreimmediate");
lf[12]=C_h_intern(&lf[12],4,"bool");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\015C_SCHEME_TRUE");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\016C_SCHEME_FALSE");
lf[15]=C_h_intern(&lf[15],4,"char");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000\021C_make_character(");
lf[17]=C_h_intern(&lf[17],3,"nil");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\024C_SCHEME_END_OF_LIST");
lf[19]=C_h_intern(&lf[19],3,"fix");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\006C_fix(");
lf[21]=C_h_intern(&lf[21],3,"eof");
lf[22]=C_decode_literal(C_heaptop,"\376B\000\000\024C_SCHEME_END_OF_FILE");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\000\015bad immediate");
lf[24]=C_h_intern(&lf[24],12,"\004coreliteral");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000\013((C_word)li");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[28]=C_h_intern(&lf[28],2,"if");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000\005else{");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\003)){");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000\013if(C_truep(");
lf[32]=C_h_intern(&lf[32],9,"\004coreproc");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000\010(C_word)");
lf[34]=C_h_intern(&lf[34],9,"\004corebind");
lf[35]=C_h_intern(&lf[35],16,"\004corelet_unboxed");
lf[36]=C_h_intern(&lf[36],8,"\004coreref");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\002)[");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\012((C_word\052)");
lf[39]=C_h_intern(&lf[39],10,"\004coreunbox");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\004)[1]");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\012((C_word\052)");
lf[42]=C_h_intern(&lf[42],13,"\004coreupdate_i");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\021C_set_block_item(");
lf[44]=C_h_intern(&lf[44],11,"\004coreupdate");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\002)+");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mutate2(((C_word \052)");
lf[48]=C_h_intern(&lf[48],16,"\004coreupdatebox_i");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\003,0,");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\021C_set_block_item(");
lf[51]=C_h_intern(&lf[51],14,"\004coreupdatebox");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\004)+1,");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mutate2(((C_word \052)");
lf[54]=C_h_intern(&lf[54],12,"\004coreclosure");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\002a[");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\002]=");
lf[57]=C_h_intern(&lf[57],8,"for-each");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\021tmp=(C_word)a,a+=");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\005,tmp)");
lf[60]=C_h_intern(&lf[60],4,"iota");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\023(\052a=C_CLOSURE_TYPE|");
lf[62]=C_h_intern(&lf[62],8,"\004corebox");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\030,tmp=(C_word)a,a+=2,tmp)");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\031(\052a=C_VECTOR_TYPE|1,a[1]=");
lf[65]=C_h_intern(&lf[65],10,"\004corelocal");
lf[66]=C_h_intern(&lf[66],13,"\004coresetlocal");
lf[67]=C_h_intern(&lf[67],11,"\004coreglobal");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\001]");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\017C_retrieve2(lf[");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\011],C_text(");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\002))");
lf[73]=C_h_intern(&lf[73],21,"\010compilerc-ify-string");
lf[74]=C_h_intern(&lf[74],28,"\003syssymbol->qualified-string");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\016\052((C_word\052)lf[");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\004]+1)");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\023C_fast_retrieve(lf[");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\002])");
lf[79]=C_h_intern(&lf[79],14,"\004coresetglobal");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\012 /\052 (set! ");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\011 ...) \052/,");
lf[82]=C_h_intern(&lf[82],21,"\010compileruncommentify");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\016C_mutate2(&lf[");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\001]");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\026C_mutate2((C_word\052)lf[");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\003]+1");
lf[87]=C_h_intern(&lf[87],16,"\004coresetglobal_i");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\005] /\052 ");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\005 \052/ =");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\024C_set_block_item(lf[");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\005] /\052 ");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\006 \052/,0,");
lf[94]=C_h_intern(&lf[94],14,"\004coreundefined");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\022C_SCHEME_UNDEFINED");
lf[96]=C_h_intern(&lf[96],9,"\004corecall");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\007,av2);}");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\012goto loop;");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000\002c=");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000\002=t");
lf[102]=C_h_intern(&lf[102],26,"lambda-literal-temporaries");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[104]=C_decode_literal(C_heaptop,"\376B\000\000\006av2);}");
lf[105]=C_h_intern(&lf[105],17,"\003sysstring-append");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[107]=C_h_intern(&lf[107],14,"number->string");
lf[108]=C_h_intern(&lf[108],22,"lambda-literal-looping");
lf[109]=C_h_intern(&lf[109],17,"lambda-literal-id");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\003tp(");
lf[111]=C_decode_literal(C_heaptop,"\376B\000\000\007,av2);}");
lf[112]=C_h_intern(&lf[112],35,"\010compilerno-global-procedure-checks");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\024(void\052)(\052((C_word\052)(");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\005)+1))");
lf[115]=C_h_intern(&lf[115],13,"string-append");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000\001]");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000\016\052((C_word\052)lf[");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\004]+1)");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\025C_fast_retrieve_proc(");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000\030C_retrieve2_symbol_proc(");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\010,C_text(");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\002))");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\001]");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\025C_fast_retrieve_proc(");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\016\052((C_word\052)lf[");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\004]+1)");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\037C_fast_retrieve_symbol_proc(lf[");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\002])");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\016\052((C_word\052)lf[");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\004]+1)");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\023{C_proc tp=(C_proc)");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\002)(");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\007,av2);}");
lf[138]=C_h_intern(&lf[138],6,"unsafe");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\024(void\052)(\052((C_word\052)t");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\004+1))");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\026C_fast_retrieve_proc(t");
lf[142]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[143]=C_h_intern(&lf[143],28,"\010compilerno-procedure-checks");
lf[144]=C_decode_literal(C_heaptop,"\376B\000\000\011((C_proc)");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\002;{");
lf[147]=C_h_intern(&lf[147],15,"emit-debug-info");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000\032C_debugger(&(C_debug_info[");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\003]),");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\0060,NULL");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\004c,av");
lf[153]=C_h_intern(&lf[153],24,"\010compileremit-trace-info");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\011C_trace(\042");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000\003\042);");
lf[156]=C_h_intern(&lf[156],21,"\010compilerbackslashify");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\003/\052 ");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\003 \052/");
lf[159]=C_h_intern(&lf[159],27,"lambda-literal-closure-size");
lf[160]=C_h_intern(&lf[160],5,"fifth");
lf[161]=C_h_intern(&lf[161],28,"\010compilersource-info->string");
lf[162]=C_h_intern(&lf[162],12,"\004corerecurse");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\012goto loop;");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\002=t");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\003t0,");
lf[166]=C_h_intern(&lf[166],16,"\004coredirect_call");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i(&a,");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\034  C_debugger(&(C_debug_info[");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\003]),");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\0060,NULL");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\002),");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\004c,av");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000\013  C_trace(\042");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000\003\042),");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\005  /\052 ");
lf[177]=C_decode_literal(C_heaptop,"\376B\000\000\003 \052/");
lf[178]=C_h_intern(&lf[178],13,"\004corecallunit");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\012_toplevel(");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\007,av2);}");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000\022C_SCHEME_UNDEFINED");
lf[183]=C_h_intern(&lf[183],11,"\004corereturn");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\007return(");
lf[186]=C_h_intern(&lf[186],11,"\004coreinline");
lf[187]=C_h_intern(&lf[187],16,"\004coredebug-event");
lf[188]=C_decode_literal(C_heaptop,"\376B\000\000\032C_debugger(&(C_debug_info[");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\003]),");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000\0060,NULL");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\004c,av");
lf[193]=C_h_intern(&lf[193],20,"\004coreinline_allocate");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\004(&a,");
lf[195]=C_h_intern(&lf[195],15,"\004coreinline_ref");
lf[196]=C_h_intern(&lf[196],34,"\010compilerforeign-result-conversion");
lf[197]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[198]=C_h_intern(&lf[198],18,"\004coreinline_update");
lf[199]=C_decode_literal(C_heaptop,"\376B\000\000\025),C_SCHEME_UNDEFINED)");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\002=(");
lf[201]=C_h_intern(&lf[201],36,"\010compilerforeign-argument-conversion");
lf[202]=C_h_intern(&lf[202],33,"\010compilerforeign-type-declaration");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[204]=C_h_intern(&lf[204],19,"\004coreinline_loc_ref");
lf[205]=C_decode_literal(C_heaptop,"\376B\000\000\003)))");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\003\052((");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000\021\052)C_data_pointer(");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[210]=C_h_intern(&lf[210],22,"\004coreinline_loc_update");
lf[211]=C_decode_literal(C_heaptop,"\376B\000\000\025),C_SCHEME_UNDEFINED)");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000\003))=");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\000\004((\052(");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000\021\052)C_data_pointer(");
lf[215]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[216]=C_h_intern(&lf[216],16,"\004coreunboxed_ref");
lf[217]=C_h_intern(&lf[217],17,"\004coreunboxed_set!");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\025),C_SCHEME_UNDEFINED)");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\002((");
lf[220]=C_h_intern(&lf[220],19,"\004coreinline_unboxed");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[222]=C_h_intern(&lf[222],11,"\004coreswitch");
lf[223]=C_decode_literal(C_heaptop,"\376B\000\000\010default:");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\005case ");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000\007switch(");
lf[227]=C_h_intern(&lf[227],9,"\004corecond");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\002)\077");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000\011(C_truep(");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000\010bad form");
lf[231]=C_h_intern(&lf[231],13,"pair-for-each");
lf[232]=C_decode_literal(C_heaptop,"\376B\000\000\001;");
lf[233]=C_decode_literal(C_heaptop,"\376B\000\000\004av2[");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\002]=");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\007av2[0]=");
lf[236]=C_decode_literal(C_heaptop,"\376B\000\000\001;");
lf[237]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word av2[");
lf[238]=C_decode_literal(C_heaptop,"\376B\000\000\002];");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000.C_word \052av2=av; /\052 Re-use our own argvector \052/");
lf[240]=C_decode_literal(C_heaptop,"\376B\000\000\001}");
lf[241]=C_decode_literal(C_heaptop,"\376B\000\000\016  av2=C_alloc(");
lf[242]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[243]=C_decode_literal(C_heaptop,"\376B\000\000\010} else {");
lf[244]=C_decode_literal(C_heaptop,"\376B\000\000(  av2=av; /\052 Re-use our own argvector \052/");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000\010if(c >= ");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000\003) {");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000\014C_word \052av2;");
lf[248]=C_h_intern(&lf[248],4,"none");
lf[249]=C_h_intern(&lf[249],33,"lambda-literal-rest-argument-mode");
lf[250]=C_h_intern(&lf[250],29,"lambda-literal-argument-count");
lf[251]=C_h_intern(&lf[251],21,"lambda-literal-direct");
lf[252]=C_h_intern(&lf[252],27,"lambda-literal-customizable");
lf[253]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[254]=C_h_intern(&lf[254],30,"\010compilerexternal-protos-first");
lf[255]=C_h_intern(&lf[255],50,"\010compilergenerate-foreign-callback-stub-prototypes");
lf[256]=C_h_intern(&lf[256],22,"foreign-callback-stubs");
lf[257]=C_h_intern(&lf[257],29,"\010compilerforeign-declarations");
lf[258]=C_decode_literal(C_heaptop,"\376B\000\000\002\052/");
lf[259]=C_decode_literal(C_heaptop,"\376B\000\000\012#include \042");
lf[260]=C_h_intern(&lf[260],28,"\010compilertarget-include-file");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[262]=C_h_intern(&lf[262],18,"\010compilerunit-name");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\011   unit: ");
lf[264]=C_h_intern(&lf[264],19,"\010compilerused-units");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\000\017   used units: ");
lf[266]=C_h_intern(&lf[266],27,"\010compilercompiler-arguments");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\022/\052 Generated from ");
lf[268]=C_decode_literal(C_heaptop,"\376B\000\000\030 by the CHICKEN compiler");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000\031   http://www.call-cc.org");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000\003   ");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000\021   command line: ");
lf[272]=C_h_intern(&lf[272],18,"string-intersperse");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\003   ");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[276]=C_h_intern(&lf[276],12,"string-split");
lf[277]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[278]=C_h_intern(&lf[278],15,"chicken-version");
lf[279]=C_h_intern(&lf[279],18,"\003sysdecode-seconds");
lf[280]=C_h_intern(&lf[280],15,"current-seconds");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000\002};");
lf[282]=C_decode_literal(C_heaptop,"\376B\000\000\002,0");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000\026static C_char C_TLS li");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\026[] C_aligned={C_lihdr(");
lf[285]=C_h_intern(&lf[285],23,"\003syslambda-info->string");
lf[286]=C_decode_literal(C_heaptop,"\376B\000\000)static double C_possibly_force_alignment;");
lf[287]=C_decode_literal(C_heaptop,"\376B\000\000\027static C_TLS C_word lf[");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\002];");
lf[289]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(C_");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\012_toplevel)");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\036C_externimport void C_ccall C_");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\000\047_toplevel(C_word c,C_word \052av) C_noret;");
lf[293]=C_decode_literal(C_heaptop,"\376B\000\000+static C_PTABLE_ENTRY \052create_ptable(void);");
lf[294]=C_decode_literal(C_heaptop,"\376B\000\000\010 C_noret");
lf[295]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word \052av");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word \052a");
lf[297]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word c,");
lf[298]=C_h_intern(&lf[298],8,"toplevel");
lf[299]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[300]=C_decode_literal(C_heaptop,"\376B\000\000\034C_externexport void C_ccall ");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(C_");
lf[302]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[303]=C_decode_literal(C_heaptop,"\376B\000\000\011_toplevel");
lf[304]=C_decode_literal(C_heaptop,"\376B\000\000\010toplevel");
lf[305]=C_decode_literal(C_heaptop,"\376B\000\000\010C_fcall ");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\010C_ccall ");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\007C_word ");
lf[308]=C_decode_literal(C_heaptop,"\376B\000\000\005void ");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000\007static ");
lf[310]=C_decode_literal(C_heaptop,"\376B\000\000\015C_noret_decl(");
lf[311]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[312]=C_h_intern(&lf[312],24,"lambda-literal-allocated");
lf[313]=C_h_intern(&lf[313],28,"lambda-literal-rest-argument");
lf[314]=C_h_intern(&lf[314],27,"\010compilermake-variable-list");
lf[315]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[316]=C_h_intern(&lf[316],23,"\003syshash-table-for-each");
lf[317]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[318]=C_h_intern(&lf[318],27,"\010compilermake-argument-list");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[320]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\004=av[");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\000\002];");
lf[323]=C_decode_literal(C_heaptop,"\376B\000\000\026static void C_ccall tr");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000\026(C_word c,C_word \052av){");
lf[325]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(tr");
lf[326]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000\026static void C_ccall tr");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\036(C_word c,C_word \052av) C_noret;");
lf[329]=C_h_intern(&lf[329],7,"sprintf");
lf[330]=C_h_intern(&lf[330],17,"get-output-string");
lf[331]=C_h_intern(&lf[331],16,"\003syswrite-char-0");
lf[332]=C_h_intern(&lf[332],9,"\003sysprint");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[334]=C_h_intern(&lf[334],18,"open-output-string");
lf[335]=C_h_intern(&lf[335],25,"\010compilerwords-per-flonum");
lf[336]=C_h_intern(&lf[336],6,"reduce");
lf[337]=C_h_intern(&lf[337],1,"+");
lf[338]=C_h_intern(&lf[338],12,"vector->list");
lf[339]=C_decode_literal(C_heaptop,"\376B\000\000\035type of literal not supported");
lf[340]=C_h_intern(&lf[340],14,"\010compilerwords");
lf[341]=C_h_intern(&lf[341],15,"\003sysbytevector\077");
lf[342]=C_h_intern(&lf[342],32,"\010compilerblock-variable-literal\077");
lf[343]=C_h_intern(&lf[343],19,"\010compilerimmediate\077");
lf[344]=C_decode_literal(C_heaptop,"\376B\000\000\007=C_fix(");
lf[345]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[346]=C_h_intern(&lf[346],19,"\003sysundefined-value");
lf[347]=C_decode_literal(C_heaptop,"\376B\000\000\024=C_SCHEME_UNDEFINED;");
lf[348]=C_decode_literal(C_heaptop,"\376B\000\000\015C_SCHEME_TRUE");
lf[349]=C_decode_literal(C_heaptop,"\376B\000\000\016C_SCHEME_FALSE");
lf[350]=C_decode_literal(C_heaptop,"\376B\000\000\022=C_make_character(");
lf[351]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[352]=C_decode_literal(C_heaptop,"\376B\000\000\014C_h_intern(&");
lf[353]=C_decode_literal(C_heaptop,"\376B\000\000\011, C_text(");
lf[354]=C_decode_literal(C_heaptop,"\376B\000\000\003));");
lf[355]=C_decode_literal(C_heaptop,"\376B\000\000\001=");
lf[356]=C_decode_literal(C_heaptop,"\376B\000\000\026=C_SCHEME_END_OF_LIST;");
lf[357]=C_decode_literal(C_heaptop,"\376B\000\000\003));");
lf[358]=C_h_intern(&lf[358],23,"\010compilerencode-literal");
lf[359]=C_decode_literal(C_heaptop,"\376B\000\000#=C_decode_literal(C_heaptop,C_text(");
lf[360]=C_h_intern(&lf[360],20,"\010compilerbig-fixnum\077");
lf[361]=C_h_intern(&lf[361],6,"modulo");
lf[362]=C_h_intern(&lf[362],14,"\003syscopy-bytes");
lf[363]=C_h_intern(&lf[363],11,"make-string");
lf[364]=C_h_intern(&lf[364],19,"lambda-literal-body");
lf[365]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[366]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[367]=C_decode_literal(C_heaptop,"\376B\000\000\023=C_build_rest(&a,c,");
lf[368]=C_decode_literal(C_heaptop,"\376B\000\000\005,av);");
lf[369]=C_decode_literal(C_heaptop,"\376B\000\000\032C_save_and_reclaim((void\052)");
lf[370]=C_decode_literal(C_heaptop,"\376B\000\000\010,c,av);}");
lf[371]=C_decode_literal(C_heaptop,"\376B\000\000\015a=C_alloc((c-");
lf[372]=C_decode_literal(C_heaptop,"\376B\000\000\020)\052C_SIZEOF_PAIR+");
lf[373]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[374]=C_decode_literal(C_heaptop,"\376B\000\000\012a=C_alloc(");
lf[375]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[376]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[377]=C_decode_literal(C_heaptop,"\376B\000\000\042C_save_and_reclaim_args((void \052)tr");
lf[378]=C_decode_literal(C_heaptop,"\376B\000\000\033C_save_and_reclaim((void \052)");
lf[379]=C_decode_literal(C_heaptop,"\376B\000\000\006,av);}");
lf[380]=C_decode_literal(C_heaptop,"\376B\000\000\003av[");
lf[381]=C_decode_literal(C_heaptop,"\376B\000\000\003]=t");
lf[382]=C_decode_literal(C_heaptop,"\376B\000\000\001;");
lf[383]=C_decode_literal(C_heaptop,"\376B\000\000\022C_register_lf2(lf,");
lf[384]=C_decode_literal(C_heaptop,"\376B\000\000\022,create_ptable());");
lf[385]=C_decode_literal(C_heaptop,"\376B\000\000\023C_initialize_lf(lf,");
lf[386]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[387]=C_decode_literal(C_heaptop,"\376B\000\000+C_check_nursery_minimum(C_calculate_demand(");
lf[388]=C_decode_literal(C_heaptop,"\376B\000\000\003,c,");
lf[389]=C_decode_literal(C_heaptop,"\376B\000\000\003));");
lf[390]=C_decode_literal(C_heaptop,"\376B\000\000+if(C_unlikely(!C_demand(C_calculate_demand(");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\000\003,c,");
lf[392]=C_decode_literal(C_heaptop,"\376B\000\000\005)))){");
lf[393]=C_decode_literal(C_heaptop,"\376B\000\000\034C_save_and_reclaim((void\052)C_");
lf[394]=C_decode_literal(C_heaptop,"\376B\000\000\010,c,av);}");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000\027toplevel_initialized=1;");
lf[396]=C_decode_literal(C_heaptop,"\376B\000\000\032if(C_unlikely(!C_demand_2(");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\004))){");
lf[398]=C_decode_literal(C_heaptop,"\376B\000\000\013C_save(t1);");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\015C_rereclaim2(");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\023\052sizeof(C_word),1);");
lf[401]=C_decode_literal(C_heaptop,"\376B\000\000\016t1=C_restore;}");
lf[402]=C_decode_literal(C_heaptop,"\376B\000\000\012a=C_alloc(");
lf[403]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[404]=C_h_intern(&lf[404],26,"\010compilertarget-stack-size");
lf[405]=C_decode_literal(C_heaptop,"\376B\000\000\017C_resize_stack(");
lf[406]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[407]=C_h_intern(&lf[407],25,"\010compilertarget-heap-size");
lf[408]=C_decode_literal(C_heaptop,"\376B\000\000\032C_set_or_change_heap_size(");
lf[409]=C_decode_literal(C_heaptop,"\376B\000\000\004,1);");
lf[410]=C_decode_literal(C_heaptop,"\376B\000\000\027C_heap_size_is_fixed=1;");
lf[411]=C_h_intern(&lf[411],40,"\010compilerdisable-stack-overflow-checking");
lf[412]=C_decode_literal(C_heaptop,"\376B\000\000\033C_disable_overflow_check=1;");
lf[413]=C_decode_literal(C_heaptop,"\376B\000\000$C_register_debug_info(C_debug_info);");
lf[414]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word \052a;");
lf[415]=C_decode_literal(C_heaptop,"\376B\000\000=if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}");
lf[416]=C_decode_literal(C_heaptop,"\376B\000\000\036else C_toplevel_entry(C_text(\042");
lf[417]=C_decode_literal(C_heaptop,"\376B\000\000\004\042));");
lf[418]=C_h_intern(&lf[418],4,"fold");
lf[419]=C_decode_literal(C_heaptop,"\376B\000\000.if(C_unlikely(!C_demand(C_calculate_demand((c-");
lf[420]=C_decode_literal(C_heaptop,"\376B\000\000\021)\052C_SIZEOF_PAIR +");
lf[421]=C_decode_literal(C_heaptop,"\376B\000\000\003,c,");
lf[422]=C_decode_literal(C_heaptop,"\376B\000\000\005)))){");
lf[423]=C_h_intern(&lf[423],28,"\010compilerinsert-timer-checks");
lf[424]=C_decode_literal(C_heaptop,"\376B\000\000\026C_check_for_interrupt;");
lf[425]=C_decode_literal(C_heaptop,"\376B\000\000\005if(c<");
lf[426]=C_decode_literal(C_heaptop,"\376B\000\000\025) C_bad_min_argc_2(c,");
lf[427]=C_decode_literal(C_heaptop,"\376B\000\000\005,t0);");
lf[428]=C_h_intern(&lf[428],23,"\010compilerno-argc-checks");
lf[429]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word \052a;");
lf[430]=C_decode_literal(C_heaptop,"\376B\000\000+if(C_unlikely(!C_demand(C_calculate_demand(");
lf[431]=C_decode_literal(C_heaptop,"\376B\000\000\003,0,");
lf[432]=C_decode_literal(C_heaptop,"\376B\000\000\005)))){");
lf[433]=C_decode_literal(C_heaptop,"\376B\000\000\003,c,");
lf[434]=C_decode_literal(C_heaptop,"\376B\000\000\026C_check_for_interrupt;");
lf[435]=C_decode_literal(C_heaptop,"\376B\000\000\005if(c<");
lf[436]=C_decode_literal(C_heaptop,"\376B\000\000\025) C_bad_min_argc_2(c,");
lf[437]=C_decode_literal(C_heaptop,"\376B\000\000\005,t0);");
lf[438]=C_decode_literal(C_heaptop,"\376B\000\000\006if(c!=");
lf[439]=C_decode_literal(C_heaptop,"\376B\000\000\021) C_bad_argc_2(c,");
lf[440]=C_decode_literal(C_heaptop,"\376B\000\000\005,t0);");
lf[441]=C_decode_literal(C_heaptop,"\376B\000\000\005loop:");
lf[442]=C_decode_literal(C_heaptop,"\376B\000\000\027C_stack_overflow_check;");
lf[443]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word \052a;");
lf[444]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[445]=C_h_intern(&lf[445],6,"fixnum");
lf[446]=C_decode_literal(C_heaptop,"\376B\000\000\003int");
lf[447]=C_h_intern(&lf[447],6,"flonum");
lf[448]=C_decode_literal(C_heaptop,"\376B\000\000\006double");
lf[449]=C_decode_literal(C_heaptop,"\376B\000\000\004char");
lf[450]=C_h_intern(&lf[450],7,"pointer");
lf[451]=C_decode_literal(C_heaptop,"\376B\000\000\006void \052");
lf[452]=C_h_intern(&lf[452],3,"int");
lf[453]=C_decode_literal(C_heaptop,"\376B\000\000\003int");
lf[454]=C_decode_literal(C_heaptop,"\376B\000\000\003int");
lf[455]=C_decode_literal(C_heaptop,"\376B\000\000\024invalid unboxed type");
lf[456]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[457]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[458]=C_decode_literal(C_heaptop,"\376B\000\000\004=av[");
lf[459]=C_decode_literal(C_heaptop,"\376B\000\000\002];");
lf[460]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word tmp;");
lf[461]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[462]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word \052av");
lf[463]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word \052a");
lf[464]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word c,");
lf[465]=C_decode_literal(C_heaptop,"\376B\000\000\017void C_ccall C_");
lf[466]=C_decode_literal(C_heaptop,"\376B\000\000\022C_main_entry_point");
lf[467]=C_decode_literal(C_heaptop,"\376B\000\000(static C_TLS int toplevel_initialized=0;");
lf[468]=C_decode_literal(C_heaptop,"\376B\000\000\010C_fcall ");
lf[469]=C_decode_literal(C_heaptop,"\376B\000\000\010C_ccall ");
lf[470]=C_decode_literal(C_heaptop,"\376B\000\000\007C_word ");
lf[471]=C_decode_literal(C_heaptop,"\376B\000\000\005void ");
lf[472]=C_decode_literal(C_heaptop,"\376B\000\000\007static ");
lf[473]=C_decode_literal(C_heaptop,"\376B\000\000\003/\052 ");
lf[474]=C_decode_literal(C_heaptop,"\376B\000\000\003 \052/");
lf[475]=C_h_intern(&lf[475],16,"\010compilercleanup");
lf[476]=C_h_intern(&lf[476],18,"\010compilerdebugging");
lf[477]=C_h_intern(&lf[477],1,"o");
lf[478]=C_decode_literal(C_heaptop,"\376B\000\000 dropping unused closure argument");
lf[479]=C_decode_literal(C_heaptop,"\376B\000\000\011_toplevel");
lf[480]=C_decode_literal(C_heaptop,"\376B\000\000\010toplevel");
lf[481]=C_h_intern(&lf[481],34,"lambda-literal-unboxed-temporaries");
lf[482]=C_h_intern(&lf[482],23,"lambda-literal-external");
lf[483]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[484]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[485]=C_h_intern(&lf[485],3,"max");
lf[486]=C_h_intern(&lf[486],32,"lambda-literal-callee-signatures");
lf[487]=C_h_intern(&lf[487],18,"\010compilerreal-name");
lf[488]=C_decode_literal(C_heaptop,"\376B\000\000\002/\052");
lf[489]=C_decode_literal(C_heaptop,"\376B\000\000\002\052/");
lf[490]=C_decode_literal(C_heaptop,"\376B\000\000\021/\052 end of file \052/");
lf[491]=C_h_intern(&lf[491],35,"\010compilercollected-debugging-output");
lf[492]=C_h_intern(&lf[492],20,"emit-procedure-table");
lf[493]=C_h_intern(&lf[493],16,"emit-debug-table");
lf[494]=C_h_intern(&lf[494],31,"generate-foreign-callback-stubs");
lf[495]=C_h_intern(&lf[495],31,"\010compilergenerate-foreign-stubs");
lf[496]=C_h_intern(&lf[496],29,"\010compilerforeign-lambda-stubs");
lf[497]=C_h_intern(&lf[497],36,"\010compilergenerate-external-variables");
lf[498]=C_h_intern(&lf[498],27,"\010compilerexternal-variables");
lf[499]=C_h_intern(&lf[499],1,"p");
lf[500]=C_decode_literal(C_heaptop,"\376B\000\000\030code generation phase...");
lf[501]=C_h_intern(&lf[501],31,"flonum-maximum-decimal-exponent");
lf[502]=C_h_intern(&lf[502],22,"flonum-print-precision");
lf[503]=C_decode_literal(C_heaptop,"\376B\000\000\022{0,0,NULL,NULL}};\012");
lf[504]=C_decode_literal(C_heaptop,"\376B\000\000\002},");
lf[505]=C_decode_literal(C_heaptop,"\376B\000\000\010C_text(\042");
lf[506]=C_decode_literal(C_heaptop,"\376B\000\000\003\042),");
lf[507]=C_h_intern(&lf[507],8,"->string");
lf[508]=C_decode_literal(C_heaptop,"\376B\000\000\001{");
lf[509]=C_decode_literal(C_heaptop,"\376B\000\000\003,0,");
lf[510]=C_h_intern(&lf[510],4,"sort");
lf[511]=C_decode_literal(C_heaptop,"\376B\000\000$static C_DEBUG_INFO C_debug_info[]={");
lf[512]=C_decode_literal(C_heaptop,"\376B\000\000\001{");
lf[513]=C_decode_literal(C_heaptop,"\376B\000\000\027#ifdef C_ENABLE_PTABLES");
lf[514]=C_decode_literal(C_heaptop,"\376B\000\000\016return ptable;");
lf[515]=C_decode_literal(C_heaptop,"\376B\000\000\005#else");
lf[516]=C_decode_literal(C_heaptop,"\376B\000\000\014return NULL;");
lf[517]=C_decode_literal(C_heaptop,"\376B\000\000\006#endif");
lf[518]=C_decode_literal(C_heaptop,"\376B\000\000\001}");
lf[519]=C_decode_literal(C_heaptop,"\376B\000\000\052static C_PTABLE_ENTRY \052create_ptable(void)");
lf[520]=C_decode_literal(C_heaptop,"\376B\000\000\006#endif");
lf[521]=C_decode_literal(C_heaptop,"\376B\000\000\015{NULL,NULL}};");
lf[522]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[523]=C_decode_literal(C_heaptop,"\376B\000\000\013_toplevel},");
lf[524]=C_decode_literal(C_heaptop,"\376B\000\000\014C_toplevel},");
lf[525]=C_decode_literal(C_heaptop,"\376B\000\000\002},");
lf[526]=C_decode_literal(C_heaptop,"\376B\000\000\011{C_text(\042");
lf[527]=C_decode_literal(C_heaptop,"\376B\000\000\012\042),(void\052)");
lf[528]=C_h_intern(&lf[528],29,"\010compilerstring->c-identifier");
lf[529]=C_decode_literal(C_heaptop,"\376B\000\000\027#ifdef C_ENABLE_PTABLES");
lf[530]=C_decode_literal(C_heaptop,"\376B\000\000\035static C_PTABLE_ENTRY ptable[");
lf[531]=C_decode_literal(C_heaptop,"\376B\000\000\005] = {");
lf[532]=C_h_intern(&lf[532],19,"\003syshash-table-size");
lf[533]=C_h_intern(&lf[533],11,"string-copy");
lf[534]=C_decode_literal(C_heaptop,"\376B\000\000\007C_word ");
lf[535]=C_h_intern(&lf[535],13,"list-tabulate");
lf[536]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[537]=C_decode_literal(C_heaptop,"\376B\000\000\007static ");
lf[538]=C_h_intern(&lf[538],41,"\010compilergenerate-foreign-callback-header");
lf[539]=C_decode_literal(C_heaptop,"\376B\000\000\017C_externexport ");
lf[540]=C_decode_literal(C_heaptop,"\376B\000\000.C_k=C_restore_callback_continuation2(C_level);");
lf[541]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[542]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[543]=C_decode_literal(C_heaptop,"\376B\000\000\013return C_r;");
lf[544]=C_decode_literal(C_heaptop,"\376B\000\000\015#undef return");
lf[545]=C_decode_literal(C_heaptop,"\376B\000\000\006C_ret:");
lf[546]=C_decode_literal(C_heaptop,"\376B\000\000.C_k=C_restore_callback_continuation2(C_level);");
lf[547]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[548]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[549]=C_decode_literal(C_heaptop,"\376B\000\000\013return C_r;");
lf[550]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[551]=C_h_intern(&lf[551],4,"void");
lf[552]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[553]=C_decode_literal(C_heaptop,"\376B\000\000\004C_r=");
lf[554]=C_decode_literal(C_heaptop,"\376B\000\0003int C_level=C_save_callback_continuation(&C_a,C_k);");
lf[555]=C_decode_literal(C_heaptop,"\376B\000\000\002=(");
lf[556]=C_decode_literal(C_heaptop,"\376B\000\000\003C_a");
lf[557]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[558]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[559]=C_h_intern(&lf[559],14,"symbol->string");
lf[560]=C_decode_literal(C_heaptop,"\376B\000\0002C_word C_r=C_SCHEME_UNDEFINED,\052C_a=(C_word\052)C_buf;");
lf[561]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word C_a");
lf[562]=C_decode_literal(C_heaptop,"\376B\000\000\006=C_av[");
lf[563]=C_decode_literal(C_heaptop,"\376B\000\000\002];");
lf[564]=C_decode_literal(C_heaptop,"\376B\000\000\015C_noret_decl(");
lf[565]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[566]=C_decode_literal(C_heaptop,"\376B\000\000\024static void C_ccall ");
lf[567]=C_decode_literal(C_heaptop,"\376B\000\000\032(C_word C_c,C_word \052C_av){");
lf[568]=C_decode_literal(C_heaptop,"\376B\000\000!C_word C_k=C_av[1],C_buf=C_av[2];");
lf[569]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[570]=C_decode_literal(C_heaptop,"\376B\000\000\014C_word C_buf");
lf[571]=C_decode_literal(C_heaptop,"\376B\000\000\003C_a");
lf[572]=C_decode_literal(C_heaptop,"\376B\000\000 C_regparm static C_word C_fcall ");
lf[573]=C_decode_literal(C_heaptop,"\376B\000\000\042#define return(x) C_cblock C_r = (");
lf[574]=C_decode_literal(C_heaptop,"\376B\000\000\036(x))); goto C_ret; C_cblockend");
lf[575]=C_decode_literal(C_heaptop,"\376B\000\000\010/\052 from ");
lf[576]=C_decode_literal(C_heaptop,"\376B\000\000\003 \052/");
lf[577]=C_h_intern(&lf[577],21,"foreign-stub-callback");
lf[578]=C_h_intern(&lf[578],16,"foreign-stub-cps");
lf[579]=C_decode_literal(C_heaptop,"\376B\000\000\003C_a");
lf[580]=C_h_intern(&lf[580],9,"make-list");
lf[581]=C_h_intern(&lf[581],27,"foreign-stub-argument-names");
lf[582]=C_h_intern(&lf[582],17,"foreign-stub-body");
lf[583]=C_h_intern(&lf[583],17,"foreign-stub-name");
lf[584]=C_h_intern(&lf[584],24,"foreign-stub-return-type");
lf[585]=C_h_intern(&lf[585],27,"foreign-stub-argument-types");
lf[586]=C_h_intern(&lf[586],19,"\010compilerreal-name2");
lf[587]=C_h_intern(&lf[587],15,"foreign-stub-id");
lf[588]=C_h_intern(&lf[588],5,"float");
lf[589]=C_decode_literal(C_heaptop,"\376B\000\000\002+3");
lf[590]=C_h_intern(&lf[590],8,"c-string");
lf[591]=C_decode_literal(C_heaptop,"\376B\000\000\004+2+(");
lf[592]=C_decode_literal(C_heaptop,"\376B\000\000!==NULL\0771:C_bytestowords(C_strlen(");
lf[593]=C_decode_literal(C_heaptop,"\376B\000\000\003)))");
lf[594]=C_h_intern(&lf[594],16,"nonnull-c-string");
lf[595]=C_decode_literal(C_heaptop,"\376B\000\000\033+2+C_bytestowords(C_strlen(");
lf[596]=C_decode_literal(C_heaptop,"\376B\000\000\002))");
lf[597]=C_h_intern(&lf[597],3,"ref");
lf[598]=C_decode_literal(C_heaptop,"\376B\000\000\002+3");
lf[599]=C_h_intern(&lf[599],5,"const");
lf[600]=C_h_intern(&lf[600],9,"c-pointer");
lf[601]=C_h_intern(&lf[601],15,"nonnull-pointer");
lf[602]=C_h_intern(&lf[602],17,"nonnull-c-pointer");
lf[603]=C_h_intern(&lf[603],8,"function");
lf[604]=C_h_intern(&lf[604],8,"instance");
lf[605]=C_h_intern(&lf[605],16,"nonnull-instance");
lf[606]=C_h_intern(&lf[606],12,"instance-ref");
lf[607]=C_h_intern(&lf[607],27,"\010compilerforeign-type-table");
lf[608]=C_h_intern(&lf[608],17,"nonnull-c-string\052");
lf[609]=C_h_intern(&lf[609],25,"nonnull-unsigned-c-string");
lf[610]=C_h_intern(&lf[610],26,"nonnull-unsigned-c-string\052");
lf[611]=C_h_intern(&lf[611],6,"symbol");
lf[612]=C_h_intern(&lf[612],9,"c-string\052");
lf[613]=C_h_intern(&lf[613],17,"unsigned-c-string");
lf[614]=C_h_intern(&lf[614],18,"unsigned-c-string\052");
lf[615]=C_h_intern(&lf[615],6,"double");
lf[616]=C_h_intern(&lf[616],16,"unsigned-integer");
lf[617]=C_h_intern(&lf[617],18,"unsigned-integer32");
lf[618]=C_h_intern(&lf[618],4,"long");
lf[619]=C_h_intern(&lf[619],7,"integer");
lf[620]=C_h_intern(&lf[620],9,"integer32");
lf[621]=C_h_intern(&lf[621],13,"unsigned-long");
lf[622]=C_h_intern(&lf[622],6,"size_t");
lf[623]=C_h_intern(&lf[623],6,"number");
lf[624]=C_h_intern(&lf[624],18,"unsigned-integer64");
lf[625]=C_h_intern(&lf[625],9,"integer64");
lf[626]=C_h_intern(&lf[626],13,"c-string-list");
lf[627]=C_h_intern(&lf[627],14,"c-string-list\052");
lf[628]=C_h_intern(&lf[628],5,"int32");
lf[629]=C_h_intern(&lf[629],5,"short");
lf[630]=C_h_intern(&lf[630],14,"unsigned-short");
lf[631]=C_h_intern(&lf[631],13,"scheme-object");
lf[632]=C_h_intern(&lf[632],13,"unsigned-char");
lf[633]=C_h_intern(&lf[633],12,"unsigned-int");
lf[634]=C_h_intern(&lf[634],14,"unsigned-int32");
lf[635]=C_h_intern(&lf[635],4,"byte");
lf[636]=C_h_intern(&lf[636],13,"unsigned-byte");
lf[637]=C_decode_literal(C_heaptop,"\376B\000\000\002;}");
lf[638]=C_decode_literal(C_heaptop,"\376B\000\000\033C_callback_wrapper((void \052)");
lf[639]=C_decode_literal(C_heaptop,"\376B\000\000\007return ");
lf[640]=C_decode_literal(C_heaptop,"\376B\000\000\002x=");
lf[641]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[642]=C_decode_literal(C_heaptop,"\376B\000\000\012C_save(x);");
lf[643]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[644]=C_h_intern(&lf[644],7,"reverse");
lf[645]=C_decode_literal(C_heaptop,"\376B\000\000\035C_callback_adjust_stack(a,s);");
lf[646]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[647]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word x,s=");
lf[648]=C_decode_literal(C_heaptop,"\376B\000\000\004,\052a=");
lf[649]=C_decode_literal(C_heaptop,"\376B\000\000\020C_stack_pointer;");
lf[650]=C_decode_literal(C_heaptop,"\376B\000\000\013C_alloc(s);");
lf[651]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[652]=C_decode_literal(C_heaptop,"\376B\000\000\010/\052 from ");
lf[653]=C_decode_literal(C_heaptop,"\376B\000\000\003 \052/");
lf[654]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[655]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[656]=C_h_intern(&lf[656],36,"foreign-callback-stub-argument-types");
lf[657]=C_h_intern(&lf[657],33,"foreign-callback-stub-return-type");
lf[658]=C_h_intern(&lf[658],24,"foreign-callback-stub-id");
lf[659]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[660]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[661]=C_h_intern(&lf[661],32,"foreign-callback-stub-qualifiers");
lf[662]=C_h_intern(&lf[662],26,"foreign-callback-stub-name");
lf[663]=C_h_intern(&lf[663],13,"\010compilerquit");
lf[664]=C_decode_literal(C_heaptop,"\376B\000\000\031illegal foreign type `~A\047");
lf[665]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[666]=C_decode_literal(C_heaptop,"\376B\000\000\006C_word");
lf[667]=C_decode_literal(C_heaptop,"\376B\000\000\006C_char");
lf[668]=C_decode_literal(C_heaptop,"\376B\000\000\017unsigned C_char");
lf[669]=C_decode_literal(C_heaptop,"\376B\000\000\014unsigned int");
lf[670]=C_decode_literal(C_heaptop,"\376B\000\000\005C_u32");
lf[671]=C_decode_literal(C_heaptop,"\376B\000\000\003int");
lf[672]=C_decode_literal(C_heaptop,"\376B\000\000\006size_t");
lf[673]=C_decode_literal(C_heaptop,"\376B\000\000\005C_s32");
lf[674]=C_decode_literal(C_heaptop,"\376B\000\000\005C_s64");
lf[675]=C_decode_literal(C_heaptop,"\376B\000\000\005C_u64");
lf[676]=C_decode_literal(C_heaptop,"\376B\000\000\005short");
lf[677]=C_decode_literal(C_heaptop,"\376B\000\000\004long");
lf[678]=C_decode_literal(C_heaptop,"\376B\000\000\016unsigned short");
lf[679]=C_decode_literal(C_heaptop,"\376B\000\000\015unsigned long");
lf[680]=C_decode_literal(C_heaptop,"\376B\000\000\005float");
lf[681]=C_decode_literal(C_heaptop,"\376B\000\000\006double");
lf[682]=C_decode_literal(C_heaptop,"\376B\000\000\006void \052");
lf[683]=C_decode_literal(C_heaptop,"\376B\000\000\011C_char \052\052");
lf[684]=C_h_intern(&lf[684],4,"blob");
lf[685]=C_decode_literal(C_heaptop,"\376B\000\000\017unsigned char \052");
lf[686]=C_h_intern(&lf[686],9,"u16vector");
lf[687]=C_h_intern(&lf[687],17,"nonnull-u16vector");
lf[688]=C_decode_literal(C_heaptop,"\376B\000\000\020unsigned short \052");
lf[689]=C_h_intern(&lf[689],8,"s8vector");
lf[690]=C_h_intern(&lf[690],16,"nonnull-s8vector");
lf[691]=C_decode_literal(C_heaptop,"\376B\000\000\015signed char \052");
lf[692]=C_h_intern(&lf[692],9,"u32vector");
lf[693]=C_h_intern(&lf[693],17,"nonnull-u32vector");
lf[694]=C_decode_literal(C_heaptop,"\376B\000\000\016unsigned int \052");
lf[695]=C_h_intern(&lf[695],9,"s16vector");
lf[696]=C_h_intern(&lf[696],17,"nonnull-s16vector");
lf[697]=C_decode_literal(C_heaptop,"\376B\000\000\007short \052");
lf[698]=C_h_intern(&lf[698],9,"s32vector");
lf[699]=C_h_intern(&lf[699],17,"nonnull-s32vector");
lf[700]=C_decode_literal(C_heaptop,"\376B\000\000\005int \052");
lf[701]=C_h_intern(&lf[701],9,"f32vector");
lf[702]=C_h_intern(&lf[702],17,"nonnull-f32vector");
lf[703]=C_decode_literal(C_heaptop,"\376B\000\000\007float \052");
lf[704]=C_h_intern(&lf[704],9,"f64vector");
lf[705]=C_h_intern(&lf[705],17,"nonnull-f64vector");
lf[706]=C_decode_literal(C_heaptop,"\376B\000\000\010double \052");
lf[707]=C_h_intern(&lf[707],14,"pointer-vector");
lf[708]=C_h_intern(&lf[708],22,"nonnull-pointer-vector");
lf[709]=C_decode_literal(C_heaptop,"\376B\000\000\007void \052\052");
lf[710]=C_decode_literal(C_heaptop,"\376B\000\000\006char \052");
lf[711]=C_decode_literal(C_heaptop,"\376B\000\000\017unsigned char \052");
lf[712]=C_decode_literal(C_heaptop,"\376B\000\000\004void");
lf[713]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[714]=C_decode_literal(C_heaptop,"\376B\000\000\001&");
lf[715]=C_decode_literal(C_heaptop,"\376B\000\000\001<");
lf[716]=C_decode_literal(C_heaptop,"\376B\000\000\002> ");
lf[717]=C_h_intern(&lf[717],3,"map");
lf[718]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[719]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[720]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[721]=C_decode_literal(C_heaptop,"\376B\000\000\006const ");
lf[722]=C_decode_literal(C_heaptop,"\376B\000\000\007struct ");
lf[723]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[724]=C_decode_literal(C_heaptop,"\376B\000\000\006union ");
lf[725]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[726]=C_decode_literal(C_heaptop,"\376B\000\000\005enum ");
lf[727]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[728]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[729]=C_decode_literal(C_heaptop,"\376B\000\000\001&");
lf[730]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[731]=C_decode_literal(C_heaptop,"\376B\000\000\003 (\052");
lf[732]=C_decode_literal(C_heaptop,"\376B\000\000\002)(");
lf[733]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[734]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[735]=C_h_intern(&lf[735],3,"...");
lf[736]=C_decode_literal(C_heaptop,"\376B\000\000\003...");
lf[737]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[738]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[739]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010instance\376\003\000\000\002\376\001\000\000\020nonnull-instance\376\377\016");
lf[740]=C_h_intern(&lf[740],4,"enum");
lf[741]=C_h_intern(&lf[741],5,"union");
lf[742]=C_h_intern(&lf[742],6,"struct");
lf[743]=C_h_intern(&lf[743],8,"template");
lf[744]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\017nonnull-pointer\376\003\000\000\002\376\001\000\000\011c-pointer\376\003\000\000\002\376\001\000\000\016scheme-po"
"inter\376\003\000\000\002\376\001\000\000\026nonnull-scheme-pointer\376\003\000\000\002\376\001\000\000\021nonnull-c-pointer\376\377\016");
lf[745]=C_h_intern(&lf[745],12,"nonnull-blob");
lf[746]=C_h_intern(&lf[746],8,"u8vector");
lf[747]=C_h_intern(&lf[747],16,"nonnull-u8vector");
lf[748]=C_h_intern(&lf[748],14,"scheme-pointer");
lf[749]=C_h_intern(&lf[749],22,"nonnull-scheme-pointer");
lf[750]=C_decode_literal(C_heaptop,"\376B\000\000\042illegal foreign argument type `~A\047");
lf[751]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[752]=C_decode_literal(C_heaptop,"\376B\000\000\031C_character_code((C_word)");
lf[753]=C_decode_literal(C_heaptop,"\376B\000\000\010C_unfix(");
lf[754]=C_decode_literal(C_heaptop,"\376B\000\000\010C_unfix(");
lf[755]=C_decode_literal(C_heaptop,"\376B\000\000\030(unsigned short)C_unfix(");
lf[756]=C_decode_literal(C_heaptop,"\376B\000\000\027C_num_to_unsigned_long(");
lf[757]=C_decode_literal(C_heaptop,"\376B\000\000\013C_c_double(");
lf[758]=C_decode_literal(C_heaptop,"\376B\000\000\015C_num_to_int(");
lf[759]=C_decode_literal(C_heaptop,"\376B\000\000\017C_num_to_int64(");
lf[760]=C_decode_literal(C_heaptop,"\376B\000\000\025(size_t)C_num_to_int(");
lf[761]=C_decode_literal(C_heaptop,"\376B\000\000\020C_num_to_uint64(");
lf[762]=C_decode_literal(C_heaptop,"\376B\000\000\016C_num_to_long(");
lf[763]=C_decode_literal(C_heaptop,"\376B\000\000\026C_num_to_unsigned_int(");
lf[764]=C_decode_literal(C_heaptop,"\376B\000\000\027C_data_pointer_or_null(");
lf[765]=C_decode_literal(C_heaptop,"\376B\000\000\017C_data_pointer(");
lf[766]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[767]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_pointer_nn(");
lf[768]=C_decode_literal(C_heaptop,"\376B\000\000\027C_c_bytevector_or_null(");
lf[769]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_bytevector(");
lf[770]=C_decode_literal(C_heaptop,"\376B\000\000\025C_c_u8vector_or_null(");
lf[771]=C_decode_literal(C_heaptop,"\376B\000\000\015C_c_u8vector(");
lf[772]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_u16vector_or_null(");
lf[773]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_u16vector(");
lf[774]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_u32vector_or_null(");
lf[775]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_u32vector(");
lf[776]=C_decode_literal(C_heaptop,"\376B\000\000\025C_c_s8vector_or_null(");
lf[777]=C_decode_literal(C_heaptop,"\376B\000\000\015C_c_s8vector(");
lf[778]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_s16vector_or_null(");
lf[779]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_s16vector(");
lf[780]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_s32vector_or_null(");
lf[781]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_s32vector(");
lf[782]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_f32vector_or_null(");
lf[783]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_f32vector(");
lf[784]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_f64vector_or_null(");
lf[785]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_f64vector(");
lf[786]=C_decode_literal(C_heaptop,"\376B\000\000\033C_c_pointer_vector_or_null(");
lf[787]=C_decode_literal(C_heaptop,"\376B\000\000\023C_c_pointer_vector(");
lf[788]=C_decode_literal(C_heaptop,"\376B\000\000\021C_string_or_null(");
lf[789]=C_decode_literal(C_heaptop,"\376B\000\000\013C_c_string(");
lf[790]=C_decode_literal(C_heaptop,"\376B\000\000\010C_truep(");
lf[791]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[792]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_pointer_nn(");
lf[793]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[794]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_pointer_nn(");
lf[795]=C_decode_literal(C_heaptop,"\376B\000\000\027C_data_pointer_or_null(");
lf[796]=C_decode_literal(C_heaptop,"\376B\000\000\017C_data_pointer(");
lf[797]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[798]=C_decode_literal(C_heaptop,"\376B\000\000\015C_num_to_int(");
lf[799]=C_decode_literal(C_heaptop,"\376B\000\000\002\052(");
lf[800]=C_decode_literal(C_heaptop,"\376B\000\000\020)C_c_pointer_nn(");
lf[801]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[802]=C_decode_literal(C_heaptop,"\376B\000\000\002\052(");
lf[803]=C_decode_literal(C_heaptop,"\376B\000\000\021\052)C_c_pointer_nn(");
lf[804]=C_decode_literal(C_heaptop,"\376B\000\000 illegal foreign return type `~A\047");
lf[805]=C_decode_literal(C_heaptop,"\376B\000\000\031C_make_character((C_word)");
lf[806]=C_decode_literal(C_heaptop,"\376B\000\000\016C_fix((C_word)");
lf[807]=C_decode_literal(C_heaptop,"\376B\000\000%C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)");
lf[808]=C_decode_literal(C_heaptop,"\376B\000\000\015C_fix((short)");
lf[809]=C_decode_literal(C_heaptop,"\376B\000\000\025C_fix(0xffff&(C_word)");
lf[810]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fix((char)");
lf[811]=C_decode_literal(C_heaptop,"\376B\000\000\023C_fix(0xff&(C_word)");
lf[812]=C_decode_literal(C_heaptop,"\376B\000\000\012C_flonum(&");
lf[813]=C_decode_literal(C_heaptop,"\376B\000\000\012C_number(&");
lf[814]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[815]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[816]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[817]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mpointer_or_false(&");
lf[818]=C_decode_literal(C_heaptop,"\376B\000\000\016C_int_to_num(&");
lf[819]=C_decode_literal(C_heaptop,"\376B\000\000\023C_a_double_to_num(&");
lf[820]=C_decode_literal(C_heaptop,"\376B\000\000\006,(int)");
lf[821]=C_decode_literal(C_heaptop,"\376B\000\000\016C_int_to_num(&");
lf[822]=C_decode_literal(C_heaptop,"\376B\000\000\027C_unsigned_int_to_num(&");
lf[823]=C_decode_literal(C_heaptop,"\376B\000\000\017C_long_to_num(&");
lf[824]=C_decode_literal(C_heaptop,"\376B\000\000\030C_unsigned_long_to_num(&");
lf[825]=C_decode_literal(C_heaptop,"\376B\000\000\012C_mk_bool(");
lf[826]=C_decode_literal(C_heaptop,"\376B\000\000\011((C_word)");
lf[827]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[828]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[829]=C_decode_literal(C_heaptop,"\376B\000\000\011,(void\052)&");
lf[830]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[831]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[832]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mpointer_or_false(&");
lf[833]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[834]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[835]=C_decode_literal(C_heaptop,"\376B\000\000\011,(void\052)&");
lf[836]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[837]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[838]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mpointer_or_false(&");
lf[839]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[840]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[841]=C_decode_literal(C_heaptop,"\376B\000\000\016C_int_to_num(&");
lf[842]=C_decode_literal(C_heaptop,"\376B\000\000=Encoded literal size of ~S is too large (must fit in 24 bits)");
lf[843]=C_decode_literal(C_heaptop,"\376B\000\000\003\377\006\001");
lf[844]=C_decode_literal(C_heaptop,"\376B\000\000\003\377\006\000");
lf[845]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\012");
lf[846]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\016");
lf[847]=C_decode_literal(C_heaptop,"\376B\000\000\002\377>");
lf[848]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\036");
lf[849]=C_decode_literal(C_heaptop,"\376B\000\000\002\377U");
lf[850]=C_decode_literal(C_heaptop,"\376B\000\000\001\000");
lf[851]=C_h_intern(&lf[851],18,"\003sysfixnum->string");
lf[852]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\001");
lf[853]=C_decode_literal(C_heaptop,"\376B\000\000\001U");
lf[854]=C_decode_literal(C_heaptop,"\376B\000\000\001\000");
lf[855]=C_decode_literal(C_heaptop,"\376B\000\000\001\001");
lf[856]=C_decode_literal(C_heaptop,"\376B\000\000\037invalid literal - cannot encode");
lf[857]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[858]=C_h_intern(&lf[858],5,"cons\052");
lf[859]=C_h_intern(&lf[859],6,"random");
lf[860]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
C_register_lf2(lf,861,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2535,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k3295 in k3292 in k3289 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3297,2,av);}
/* c-backend.scm:208: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3292 in k3289 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3294,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3297,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:207: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k3289 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_3291,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3294,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3308,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3312,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:206: ##sys#symbol->qualified-string */
t5=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4365 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4367,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4371,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:426: foreign-argument-conversion */
t4=*((C_word*)lf[201]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4298 in k4295 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4300,2,av);}
/* c-backend.scm:419: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6308 in k6305 in k6302 in k6298 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in ... */
static void C_ccall f_6310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,7)))){
C_save_and_reclaim((void *)f_6310,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(*((C_word*)lf[262]+1))){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6313(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6342,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[407]+1))){
/* c-backend.scm:825: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[408];
av2[4]=*((C_word*)lf[407]+1);
av2[5]=lf[409];
av2[6]=C_SCHEME_TRUE;
av2[7]=lf[410];
((C_proc)(void*)(*((C_word*)t4+1)))(8,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6342(2,av2);}}}}

/* k6311 in k6308 in k6305 in k6302 in k6298 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in ... */
static void C_ccall f_6313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,35)))){
C_save_and_reclaim((void *)f_6313,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:829: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 36) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(36);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[387];
av2[4]=((C_word*)t0)[5];
av2[5]=lf[388];
av2[6]=((C_word*)t0)[6];
av2[7]=lf[389];
av2[8]=C_SCHEME_TRUE;
av2[9]=lf[390];
av2[10]=((C_word*)t0)[5];
av2[11]=lf[391];
av2[12]=((C_word*)t0)[6];
av2[13]=lf[392];
av2[14]=C_SCHEME_TRUE;
av2[15]=lf[393];
av2[16]=((C_word*)t0)[7];
av2[17]=lf[394];
av2[18]=C_SCHEME_TRUE;
av2[19]=lf[395];
av2[20]=C_SCHEME_TRUE;
av2[21]=lf[396];
av2[22]=((C_word*)t0)[8];
av2[23]=lf[397];
av2[24]=C_SCHEME_TRUE;
av2[25]=lf[398];
av2[26]=C_SCHEME_TRUE;
av2[27]=lf[399];
av2[28]=((C_word*)t0)[8];
av2[29]=lf[400];
av2[30]=C_SCHEME_TRUE;
av2[31]=lf[401];
av2[32]=C_SCHEME_TRUE;
av2[33]=lf[402];
av2[34]=((C_word*)t0)[5];
av2[35]=lf[403];
((C_proc)(void*)(*((C_word*)t3+1)))(36,av2);}}

/* k6326 in k6314 in k6311 in k6308 in k6305 in k6302 in k6298 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in ... */
static void C_ccall f_6328(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6328,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6331,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:840: literal-frame */
t3=((C_word*)((C_word*)t0)[4])[1];
f_5519(t3,t2);}

/* k4307 in k4295 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4309,2,av);}
/* c-backend.scm:418: expr-args */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4704(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k6302 in k6298 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in ... */
static void C_ccall f_6304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6304,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6307,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(*((C_word*)lf[147]+1))){
/* c-backend.scm:820: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[413];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6307(2,av2);}}}

/* k6298 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in ... */
static void C_ccall f_6300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,9)))){
C_save_and_reclaim((void *)f_6300,2,av);}
a=C_alloc(9);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_u_i_length(t3);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6304,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:816: gen */
t6=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 10) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(10);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[414];
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[415];
av2[6]=C_SCHEME_TRUE;
av2[7]=lf[416];
av2[8]=((C_word*)t0)[7];
av2[9]=lf[417];
((C_proc)(void*)(*((C_word*)t6+1)))(10,av2);}}

/* k3764 in k3681 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3766,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* c-backend.scm:316: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[131];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[132];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7547 in k7535 in k7526 in compute-size in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_7549(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,7)))){
C_save_and_reclaim_args((void *)trf_7549,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
/* c-backend.scm:1103: string-append */
t2=*((C_word*)lf[115]+1);{
C_word av2[8];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[591];
av2[4]=((C_word*)t0)[4];
av2[5]=lf[592];
av2[6]=((C_word*)t0)[4];
av2[7]=lf[593];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}
else{
t2=C_eqp(((C_word*)t0)[5],lf[594]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7561,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_7561(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[608]);
if(C_truep(t4)){
t5=t3;
f_7561(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[609]);
if(C_truep(t5)){
t6=t3;
f_7561(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[610]);
t7=t3;
f_7561(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[5],lf[611])));}}}}}

/* k3760 in k3681 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3762(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3762,2,av);}
/* c-backend.scm:311: string-append */
t2=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[129];
av2[3]=t1;
av2[4]=lf[130];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6317 in k6314 in k6311 in k6308 in k6305 in k6302 in k6298 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in ... */
static void C_ccall f_6319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6319,2,av);}
/* c-backend.scm:842: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(123);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6314 in k6311 in k6308 in k6305 in k6302 in k6298 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in ... */
static void C_ccall f_6316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_6316,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6319,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_eqp(((C_word*)t0)[3],C_fix(0));
if(C_truep(t3)){
/* c-backend.scm:842: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(123);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6328,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:839: gen */
t5=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[385];
av2[4]=((C_word*)t0)[3];
av2[5]=lf[386];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}

/* k5550 in doloop744 in literal-frame in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_5552,2,av);}
a=C_alloc(8);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[329]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5558,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:670: ##sys#print */
t6=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[333];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5556 in k5550 in doloop744 in literal-frame in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_5558,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5561,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:670: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3753 in k3681 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3755,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* c-backend.scm:312: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[127];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=lf[128];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6305 in k6302 in k6298 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in ... */
static void C_ccall f_6307(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6307,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6310,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(*((C_word*)lf[411]+1))){
/* c-backend.scm:822: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[412];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6310(2,av2);}}}

/* k6623 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in ... */
static void C_fcall f_6625(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_6625,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6628,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:790: gen */
t3=*((C_word*)lf[1]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[463];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_6136(2,av2);}}}

/* k6626 in k6623 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in ... */
static void C_ccall f_6628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6628,2,av);}
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
/* c-backend.scm:791: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_make_character(44);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_6136(2,av2);}}}

/* k5562 in k5559 in k5556 in k5550 in doloop744 in literal-frame in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5564,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5567,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:670: get-output-string */
t3=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5565 in k5562 in k5559 in k5556 in k5550 in doloop744 in literal-frame in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5567,2,av);}
/* c-backend.scm:670: gen-lit */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5767(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k5095 in k5092 in k5089 in k5078 in declarations in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5097,2,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5102,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_5102(t5,((C_word*)t0)[2],C_fix(0),((C_word*)t0)[3]);}

/* k5092 in k5089 in k5078 in declarations in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5094,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5097,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:577: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[286];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5559 in k5556 in k5550 in doloop744 in literal-frame in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5561,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5564,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:670: ##sys#write-char-0 */
t3=*((C_word*)lf[331]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(93);
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5089 in k5078 in declarations in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_5091,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5094,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(((C_word*)t0)[4],C_fix(0));
if(C_truep(t3)){
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5094(2,av2);}}
else{
/* c-backend.scm:576: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[287];
av2[5]=((C_word*)t0)[4];
av2[6]=lf[288];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}}}

/* k3707 in k3681 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3709,2,av);}
/* c-backend.scm:300: string-append */
t2=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[116];
av2[3]=t1;
av2[4]=lf[117];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7526 in compute-size in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_7528(C_word t0,C_word t1){
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
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_7528,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[588]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7537,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_7537(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[615]);
if(C_truep(t4)){
t5=t3;
f_7537(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[600]);
if(C_truep(t5)){
t6=t3;
f_7537(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[616]);
if(C_truep(t6)){
t7=t3;
f_7537(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[617]);
if(C_truep(t7)){
t8=t3;
f_7537(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[618]);
if(C_truep(t8)){
t9=t3;
f_7537(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[619]);
if(C_truep(t9)){
t10=t3;
f_7537(t10,t9);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[620]);
if(C_truep(t10)){
t11=t3;
f_7537(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[621]);
if(C_truep(t11)){
t12=t3;
f_7537(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[622]);
if(C_truep(t12)){
t13=t3;
f_7537(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[602]);
if(C_truep(t13)){
t14=t3;
f_7537(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[623]);
if(C_truep(t14)){
t15=t3;
f_7537(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[4],lf[624]);
if(C_truep(t15)){
t16=t3;
f_7537(t16,t15);}
else{
t16=C_eqp(((C_word*)t0)[4],lf[625]);
if(C_truep(t16)){
t17=t3;
f_7537(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[4],lf[626]);
t18=t3;
f_7537(t18,(C_truep(t17)?t17:C_eqp(((C_word*)t0)[4],lf[627])));}}}}}}}}}}}}}}}}

/* k6690 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in a6056 in ... */
static void C_ccall f_6692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6692,2,av);}
/* c-backend.scm:774: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[473];
av2[3]=t1;
av2[4]=lf[474];
av2[5]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k5078 in declarations in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5080(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5080,2,av);}
a=C_alloc(10);
t2=*((C_word*)lf[264]+1);
t3=C_i_check_list_2(*((C_word*)lf[264]+1),lf[57]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5091,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5222,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_5222(t8,t4,*((C_word*)lf[264]+1));}

/* k3777 in k3774 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3779,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3782,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:323: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[146];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3774 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3776,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3779,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:322: expr */
t3=((C_word*)((C_word*)t0)[9])[1];
f_2649(t3,t2,((C_word*)t0)[10],((C_word*)t0)[8]);}

/* k3771 in k3681 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3773,2,av);}
/* c-backend.scm:315: string-append */
t2=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[133];
av2[3]=t1;
av2[4]=lf[134];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7535 in k7526 in compute-size in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_7537(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_7537,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
/* c-backend.scm:1101: string-append */
t2=*((C_word*)lf[115]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[589];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[590]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7549,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_7549(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[612]);
if(C_truep(t4)){
t5=t3;
f_7549(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[613]);
if(C_truep(t5)){
t6=t3;
f_7549(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[613]);
t7=t3;
f_7549(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[614])));}}}}}

/* k5150 in doloop666 in k5119 in k5116 in k5110 in doloop655 in k5095 in k5092 in k5089 in k5078 in declarations in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5152,2,av);}
a=C_alloc(4);
t2=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5142(t3,((C_word*)t0)[4],t2);}

/* k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7507,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7510,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:1088: foreign-callback-stub-argument-types */
t4=*((C_word*)lf[656]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7504(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7504,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7507,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1087: foreign-callback-stub-return-type */
t4=*((C_word*)lf[657]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7501,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7504,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1086: real-name2 */
t4=*((C_word*)lf[586]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* doloop666 in k5119 in k5116 in k5110 in doloop655 in k5095 in k5092 in k5089 in k5078 in declarations in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5142(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5142,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_zerop(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5152,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:593: gen */
t4=*((C_word*)lf[1]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[282];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k5119 in k5116 in k5110 in doloop655 in k5095 in k5092 in k5089 in k5078 in declarations in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5121(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_5121,2,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5124,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_a_i_plus(&a,2,((C_word*)t0)[6],C_fix(7));
t4=C_a_i_bitwise_and(&a,2,C_fix(16777208),t3);
t5=C_a_i_minus(&a,2,t4,((C_word*)t0)[6]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5142,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_5142(t9,t2,t5);}

/* k3212 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3214,2,av);}
t2=C_i_car(((C_word*)t0)[2]);
/* c-backend.scm:184: expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2649(t3,((C_word*)t0)[4],t2,((C_word*)t0)[5]);}

/* k4369 in k4365 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4371,2,av);}
/* c-backend.scm:426: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(40);
av2[3]=((C_word*)t0)[3];
av2[4]=lf[200];
av2[5]=((C_word*)t0)[4];
av2[6]=C_make_character(41);
av2[7]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}

/* k3746 in k3681 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3748,2,av);}
/* c-backend.scm:304: string-append */
t2=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[125];
av2[3]=t1;
av2[4]=lf[126];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3738 in k3721 in k3681 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3740,2,av);}
/* c-backend.scm:308: c-ify-string */
t2=*((C_word*)lf[73]+1);{
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

/* k6654 in k6651 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in ... */
static void C_ccall f_6656(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6656,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6659,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:779: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[468];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* c-backend.scm:780: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[469];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k6651 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in ... */
static void C_ccall f_6653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6653,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6656,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
/* c-backend.scm:777: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[470];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* c-backend.scm:777: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[471];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k6657 in k6654 in k6651 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in ... */
static void C_ccall f_6659(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6659,2,av);}
/* c-backend.scm:781: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k5122 in k5119 in k5116 in k5110 in doloop655 in k5095 in k5092 in k5089 in k5078 in declarations in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5124,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5127,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:594: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[281];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5125 in k5122 in k5119 in k5116 in k5110 in doloop655 in k5095 in k5092 in k5089 in k5078 in declarations in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5127,2,av);}
a=C_alloc(4);
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=((C_word*)((C_word*)t0)[4])[1];
f_5102(t5,((C_word*)t0)[5],t2,t4);}

/* k4381 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4383,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4386,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:433: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k4384 in k4381 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4386,2,av);}
/* c-backend.scm:434: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[205];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3690 in k3687 in k3684 in k3681 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3692,2,av);}
/* c-backend.scm:319: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[110];
av2[4]=((C_word*)t0)[3];
av2[5]=lf[111];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k6269 in doloop961 in k6155 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in ... */
static void C_ccall f_6271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6271,2,av);}
a=C_alloc(4);
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6261(t3,((C_word*)t0)[4],t2);}

/* k3697 in k3681 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3699,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* c-backend.scm:302: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[113];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=lf[114];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4533 in k4530 in doloop499 in k4509 in k4506 in k4503 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4535,2,av);}
/* c-backend.scm:466: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(125);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4530 in doloop499 in k4509 in k4506 in k4503 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4532,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4535,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:465: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k7459 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7461,2,av);}
/* c-backend.scm:1031: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[575];
av2[4]=t1;
av2[5]=lf[576];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k4395 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4397(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4397,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4401,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:432: foreign-type-declaration */
t4=*((C_word*)lf[202]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[208];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3681 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_3683,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3686,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(*((C_word*)lf[112]+1))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3699,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3709,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:300: number->string */
t5=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3716,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:301: number->string */
t5=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
if(C_truep(((C_word*)t0)[8])){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3723,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[10],a[4]=t2,a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3748,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:304: number->string */
t5=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
if(C_truep(((C_word*)t0)[10])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3755,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3762,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:311: number->string */
t5=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3766,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3773,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:315: number->string */
t5=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}}}

/* k3684 in k3681 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3686,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3689,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:317: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3687 in k3684 in k3681 in k3661 in k3428 in k3424 in k3421 in k3418 in k3415 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3689,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3692,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:318: push-args */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4733(t3,t2,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)((C_word*)t0)[7])[1]);}

/* k5406 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5408,2,av);}
t2=((C_word*)t0)[2];
f_5264(t2,C_i_zerop(t1));}

/* k8720 in k8703 in k8686 in k8669 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_8722(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_8722,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8729,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1227: ->string */
t4=*((C_word*)lf[507]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8739,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[6],C_fix(3));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
t5=t2;
f_8739(t5,C_u_i_memq(t4,lf[739]));}
else{
t4=t2;
f_8739(t4,C_SCHEME_FALSE);}}}

/* k8727 in k8720 in k8703 in k8686 in k8669 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8729,2,av);}
/* c-backend.scm:1227: string-append */
t2=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[726];
av2[3]=t1;
av2[4]=lf[727];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k4549 in k4546 in k4543 in doloop499 in k4509 in k4506 in k4503 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4551,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4554,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:470: expr */
t4=((C_word*)((C_word*)t0)[6])[1];
f_2649(t4,t2,t3,((C_word*)t0)[7]);}

/* k4552 in k4549 in k4546 in k4543 in doloop499 in k4509 in k4506 in k4503 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4554,2,av);}
a=C_alloc(4);
t2=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=C_i_cddr(((C_word*)t0)[3]);
t4=((C_word*)((C_word*)t0)[4])[1];
f_4522(t4,((C_word*)t0)[5],t2,t3);}

/* trampolines in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5410(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,0,4)))){
C_save_and_reclaim_args((void *)trf_5410,2,t0,t1);}
a=C_alloc(2);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5449,tmp=(C_word)a,a+=2,tmp);
/* c-backend.scm:647: ##sys#hash-table-for-each */
t3=*((C_word*)lf[316]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k8754 in k8737 in k8720 in k8703 in k8686 in k8669 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_8756(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8756,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8763,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1231: ->string */
t4=*((C_word*)lf[507]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8773,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t0)[6],C_fix(3)))){
t3=C_i_car(((C_word*)t0)[4]);
t4=t2;
f_8773(t4,C_eqp(lf[603],t3));}
else{
t3=t2;
f_8773(t3,C_SCHEME_FALSE);}}}

/* doloop721 in k5478 in k5475 in k5504 in k5466 in k5463 in k5460 in k5457 in k5454 in k5451 in a5448 in trampolines in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5423(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,7)))){
C_save_and_reclaim_args((void *)trf_5423,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_greater_or_equalp(t2,((C_word*)t0)[2]))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5433,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:645: gen */
t5=*((C_word*)lf[1]+1);{
C_word av2[8];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[320];
av2[4]=t2;
av2[5]=lf[321];
av2[6]=t3;
av2[7]=lf[322];
((C_proc)(void*)(*((C_word*)t5+1)))(8,av2);}}}

/* generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7495(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_7495,4,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7497,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_check_list_2(t2,lf[57]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8090,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_8090(t9,t1,t2);}

/* g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_7497(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7497,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7501,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1085: foreign-callback-stub-id */
t4=*((C_word*)lf[658]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8744 in k8737 in k8720 in k8703 in k8686 in k8669 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8746,2,av);}
/* c-backend.scm:1229: string-append */
t2=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[728];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4067 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4069(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4069,2,av);}
a=C_alloc(8);
t2=C_i_zerop(t1);
t3=t2;
if(C_truep(((C_word*)t0)[2])){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3941,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:338: lambda-literal-temporaries */
t5=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4053,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:351: gen */
t5=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[11];
av2[3]=C_make_character(40);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k8771 in k8754 in k8737 in k8720 in k8703 in k8686 in k8669 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_8773(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8773,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=t3;
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_i_nullp(t8);
t10=(C_truep(t9)?lf[730]:C_i_car(t8));
t11=t10;
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8792,a[2]=((C_word*)t0)[3],a[3]=t11,a[4]=((C_word*)t0)[4],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1237: foreign-type-declaration */
t13=*((C_word*)lf[202]+1);{
C_word av2[4];
av2[0]=t13;
av2[1]=t12;
av2[2]=t2;
av2[3]=lf[738];
((C_proc)(void*)(*((C_word*)t13+1)))(4,av2);}}
else{
/* c-backend.scm:1248: err */
t2=((C_word*)t0)[5];
f_8178(t2,((C_word*)t0)[3]);}}

/* doloop961 in k6155 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in ... */
static void C_fcall f_6261(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,7)))){
C_save_and_reclaim_args((void *)trf_6261,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_greater_or_equalp(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6271,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:874: gen */
t4=*((C_word*)lf[1]+1);{
C_word av2[8];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[380];
av2[4]=t2;
av2[5]=lf[381];
av2[6]=t2;
av2[7]=lf[382];
((C_proc)(void*)(*((C_word*)t4+1)))(8,av2);}}}

/* for-each-loop1166 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_7472(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7472,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7482,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:1015: g1167 */
t5=((C_word*)t0)[3];
f_7160(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5990 in string-like-substring in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_5992,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5995,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:735: ##sys#copy-bytes */
t4=*((C_word*)lf[362]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=((C_word*)t0)[4];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}}

/* k5993 in k5990 in string-like-substring in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5995,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7480 in for-each-loop1166 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7482,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7472(t3,((C_word*)t0)[4],t2);}

/* k5864 in k5861 in k5778 in k5772 in gen-lit in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5866,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5869,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5876,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:717: encode-literal */
t4=*((C_word*)lf[358]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5861 in k5778 in k5772 in gen-lit in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5863(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_5863,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5866,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:716: gen */
t3=*((C_word*)lf[1]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=((C_word*)t0)[5];
av2[4]=lf[359];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[4];
/* c-backend.scm:673: bomb */
t4=*((C_word*)lf[8]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[339];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k8710 in k8703 in k8686 in k8669 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8712,2,av);}
/* c-backend.scm:1225: string-append */
t2=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[724];
av2[3]=t1;
av2[4]=lf[725];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k4051 in k4067 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4053,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4056,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f11813,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:353: expr-args */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4704(t4,t3,((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
/* c-backend.scm:352: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[165];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* string-like-substring in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5985(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_5985,4,t1,t2,t3,t4);}
a=C_alloc(10);
t5=C_a_i_minus(&a,2,t4,t3);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5992,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:734: make-string */
t8=*((C_word*)lf[363]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k4057 in k4054 in k4051 in k4067 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4059,2,av);}
/* c-backend.scm:354: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4054 in k4051 in k4067 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4056,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4059,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:353: expr-args */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4704(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k5867 in k5864 in k5861 in k5778 in k5772 in gen-lit in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5869,2,av);}
/* c-backend.scm:718: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[357];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7449 in k7431 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 in ... */
static void C_ccall f_7451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7451,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,lf[570],t1);
/* c-backend.scm:1044: intersperse */
t3=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=C_make_character(44);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5874 in k5864 in k5861 in k5778 in k5772 in gen-lit in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5876,2,av);}
/* c-backend.scm:717: gen-string-constant */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5909(t2,((C_word*)t0)[3],t1);}

/* k8703 in k8686 in k8669 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_8705(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_8705,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8712,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1225: ->string */
t4=*((C_word*)lf[507]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[6],C_fix(2));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
t5=t2;
f_8722(t5,C_eqp(lf[740],t4));}
else{
t4=t2;
f_8722(t4,C_SCHEME_FALSE);}}}

/* k4019 in for-each-loop394 in k3942 in k3939 in k4067 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4021,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4011(t4,((C_word*)t0)[5],t2,t3);}

/* k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4601,2,av);}
/* c-backend.scm:479: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8737 in k8720 in k8703 in k8686 in k8669 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_8739(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_8739,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1229: ->string */
t4=*((C_word*)lf[507]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8756,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[6],C_fix(3));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
t5=t2;
f_8756(t5,C_eqp(lf[606],t4));}
else{
t4=t2;
f_8756(t4,C_SCHEME_FALSE);}}}

/* k7223 in k7219 in k7357 in for-each-loop1204 in k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in ... */
static void C_ccall f_7225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7225,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7229,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1054: foreign-argument-conversion */
t4=*((C_word*)lf[201]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7227 in k7223 in k7219 in k7357 in for-each-loop1204 in k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in ... */
static void C_ccall f_7229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,10)))){
C_save_and_reclaim((void *)f_7229,2,av);}
/* c-backend.scm:1049: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 11) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(11);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=((C_word*)t0)[3];
av2[4]=lf[555];
av2[5]=((C_word*)t0)[4];
av2[6]=C_make_character(41);
av2[7]=t1;
av2[8]=lf[556];
av2[9]=((C_word*)t0)[5];
av2[10]=lf[557];
((C_proc)(void*)(*((C_word*)t2+1)))(11,av2);}}

/* k7219 in k7357 in for-each-loop1204 in k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in ... */
static void C_ccall f_7221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7221,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7225,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1053: foreign-type-declaration */
t4=*((C_word*)lf[202]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[558];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k7231 in k7357 in for-each-loop1204 in k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in ... */
static void C_ccall f_7233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7233,2,av);}
/* c-backend.scm:1050: foreign-type-declaration */
t2=*((C_word*)lf[202]+1);{
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

/* k7237 in k7357 in for-each-loop1204 in k7252 in k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in ... */
static void C_ccall f_7239(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7239,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[329]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7245,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1052: ##sys#write-char-0 */
t6=*((C_word*)lf[331]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_make_character(116);
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k5834 in k5828 in k5778 in k5772 in gen-lit in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_5836,2,av);}
/* c-backend.scm:710: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[352];
av2[3]=((C_word*)t0)[3];
av2[4]=C_make_character(44);
av2[5]=((C_word*)t0)[4];
av2[6]=lf[353];
av2[7]=((C_word*)t0)[5];
av2[8]=lf[354];
((C_proc)(void*)(*((C_word*)t2+1)))(9,av2);}}

/* k5828 in k5778 in k5772 in gen-lit in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5830(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5830,2,av);}
a=C_alloc(6);
t2=t1;
t3=C_block_size(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5836,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:709: gen */
t6=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_SCHEME_TRUE;
av2[3]=((C_word*)t0)[4];
av2[4]=lf[355];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_7209,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7212,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:1046: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[560];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,11)))){
C_save_and_reclaim((void *)f_7206,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7209,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7404,a[2]=((C_word*)t0)[9],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1036: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 12) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(12);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[564];
av2[4]=((C_word*)t0)[12];
av2[5]=lf[565];
av2[6]=C_SCHEME_TRUE;
av2[7]=lf[566];
av2[8]=((C_word*)t0)[12];
av2[9]=lf[567];
av2[10]=C_SCHEME_TRUE;
av2[11]=lf[568];
((C_proc)(void*)(*((C_word*)t4+1)))(12,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7433,a[2]=t2,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1043: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[572];
av2[4]=((C_word*)t0)[12];
av2[5]=C_make_character(40);
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}

/* k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_7203,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7206,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)t0)[5])){
/* c-backend.scm:1033: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[573];
av2[4]=((C_word*)t0)[11];
av2[5]=lf[574];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_7206(2,av2);}}}

/* k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_7200,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7203,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)t0)[13])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7461,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1031: cleanup */
t4=*((C_word*)lf[475]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[13];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_7203(2,av2);}}}

/* k7210 in k7207 in k7204 in k7201 in k7198 in k7195 in k7192 in k7189 in k7186 in k7183 in k7180 in k7177 in k7174 in k7168 in k7165 in k7162 in g1167 in generate-foreign-stubs in k2624 in k2539 in k2536 in k2533 in ... */
static void C_ccall f_7212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7212,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7254,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:1055: iota */
t4=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8761 in k8754 in k8737 in k8720 in k8703 in k8686 in k8669 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8763,2,av);}
/* c-backend.scm:1231: string-append */
t2=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[729];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8794 in k8790 in k8771 in k8754 in k8737 in k8720 in k8703 in k8686 in k8669 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in ... */
static void C_ccall f_8796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_8796,2,av);}
/* c-backend.scm:1236: string-append */
t2=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[731];
av2[5]=((C_word*)t0)[5];
av2[6]=lf[732];
av2[7]=t1;
av2[8]=lf[733];
((C_proc)(void*)(*((C_word*)t2+1)))(9,av2);}}

/* k8790 in k8771 in k8754 in k8737 in k8720 in k8703 in k8686 in k8669 in k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 in ... */
static void C_ccall f_8792(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_8792,2,av);}
a=C_alloc(21);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8796,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(((C_word*)t0)[5],lf[717]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8817,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8819,a[2]=t6,a[3]=t11,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_8819(t13,t9,((C_word*)t0)[5]);}

/* k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10188(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10188,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10192,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1350: g1980 */
t3=t2;
f_10192(t3,((C_word*)t0)[3],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10215,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[4];
t4=C_u_i_length(t3);
t5=t2;
f_10215(t5,C_fixnum_greater_or_equal_p(t4,C_fix(2)));}
else{
t3=t2;
f_10215(t3,C_SCHEME_FALSE);}}}

/* loop in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_2854(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,5)))){
C_save_and_reclaim_args((void *)trf_2854,5,t0,t1,t2,t3,t4);}
a=C_alloc(8);
if(C_truep(C_i_greaterp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2864,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:113: gen */
t6=*((C_word*)lf[1]+1);{
C_word av2[6];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_SCHEME_TRUE;
av2[3]=C_make_character(116);
av2[4]=t3;
av2[5]=C_make_character(61);
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}
else{
t5=C_i_car(t2);
/* c-backend.scm:117: expr */
t6=((C_word*)((C_word*)t0)[3])[1];
f_2649(t6,t1,t5,t3);}}

/* k10165 in k10162 in k10159 in k10153 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10167,2,av);}
/* c-backend.scm:1346: get-output-string */
t2=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10159 in k10153 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10161,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10164,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1346: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4091 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_4093,2,av);}
a=C_alloc(14);
t2=t1;
t3=C_i_cadddr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4099,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t4,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* c-backend.scm:365: fifth */
t6=*((C_word*)lf[160]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k10162 in k10159 in k10153 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_10164,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10167,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1346: ##sys#write-char-0 */
t3=*((C_word*)lf[331]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(44);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2865 in k2862 in loop in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2867,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2870,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:115: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2862 in loop in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2864,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2867,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* c-backend.scm:114: expr */
t4=((C_word*)((C_word*)t0)[7])[1];
f_2649(t4,t2,t3,((C_word*)t0)[3]);}

/* k4097 in k4091 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4099(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_4099,2,av);}
a=C_alloc(18);
t2=t1;
t3=C_i_zerop(t2);
t4=C_i_not(t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4200,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t5,a[9]=t2,a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],tmp=(C_word)a,a+=15,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4204,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:367: find-lambda */
t8=((C_word*)((C_word*)t0)[13])[1];
f_2634(t8,t7,((C_word*)t0)[8]);}

/* k10153 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10155(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10155,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[329]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10161,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1346: ##sys#print */
t6=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[824];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2868 in k2865 in k2862 in loop in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2870,2,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t5=C_a_i_minus(&a,2,((C_word*)t0)[4],C_fix(1));
/* c-backend.scm:116: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_2854(t6,((C_word*)t0)[6],t3,t4,t5);}

/* k2806 in k2803 in k2800 in k2797 in k2794 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2808,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2811,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_caddr(((C_word*)t0)[3]);
/* c-backend.scm:104: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k8592 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_8594(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_8594,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8601,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8605,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1214: foreign-type-declaration */
t5=*((C_word*)lf[202]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[720];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8671,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[7],C_fix(2));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
t5=t2;
f_8671(t5,C_eqp(lf[599],t4));}
else{
t4=t2;
f_8671(t4,C_SCHEME_FALSE);}}}

/* k3372 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3374,2,av);}
/* c-backend.scm:220: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[91];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[92];
av2[5]=t1;
av2[6]=lf[93];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k3018 in k3015 in k3012 in k3009 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3020,2,av);}
/* c-backend.scm:148: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k2803 in k2800 in k2797 in k2794 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2805,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:103: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(125);
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[29];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2800 in k2797 in k2794 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2802,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2805,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:102: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k3376 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3378,2,av);}
/* c-backend.scm:221: uncommentify */
t2=*((C_word*)lf[82]+1);{
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

/* k8586 in k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8588,2,av);}
/* c-backend.scm:1209: foreign-type-declaration */
t2=*((C_word*)lf[202]+1);{
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

/* k3084 in k3081 in k3078 in k3075 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3086,2,av);}
/* c-backend.scm:162: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3081 in k3078 in k3075 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3083,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3086,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:161: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k3078 in k3075 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3080,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3083,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:160: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[52];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7516(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,5)))){
C_save_and_reclaim((void *)f_7516,2,av);}
a=C_alloc(15);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7518,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7970,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:1119: fold */
t7=*((C_word*)lf[418]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t4)[1];
av2[3]=lf[654];
av2[4]=((C_word*)t0)[6];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(6,av2);}}

/* compute-size in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7518(C_word c,C_word *av){
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
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7518,5,av);}
a=C_alloc(8);
t5=t2;
t6=C_eqp(t5,lf[15]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7528,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t3,a[6]=((C_word*)t0)[2],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;
f_7528(t8,t6);}
else{
t8=C_eqp(t5,lf[452]);
if(C_truep(t8)){
t9=t7;
f_7528(t9,t8);}
else{
t9=C_eqp(t5,lf[628]);
if(C_truep(t9)){
t10=t7;
f_7528(t10,t9);}
else{
t10=C_eqp(t5,lf[629]);
if(C_truep(t10)){
t11=t7;
f_7528(t11,t10);}
else{
t11=C_eqp(t5,lf[12]);
if(C_truep(t11)){
t12=t7;
f_7528(t12,t11);}
else{
t12=C_eqp(t5,lf[551]);
if(C_truep(t12)){
t13=t7;
f_7528(t13,t12);}
else{
t13=C_eqp(t5,lf[630]);
if(C_truep(t13)){
t14=t7;
f_7528(t14,t13);}
else{
t14=C_eqp(t5,lf[631]);
if(C_truep(t14)){
t15=t7;
f_7528(t15,t14);}
else{
t15=C_eqp(t5,lf[632]);
if(C_truep(t15)){
t16=t7;
f_7528(t16,t15);}
else{
t16=C_eqp(t5,lf[633]);
if(C_truep(t16)){
t17=t7;
f_7528(t17,t16);}
else{
t17=C_eqp(t5,lf[634]);
if(C_truep(t17)){
t18=t7;
f_7528(t18,t17);}
else{
t18=C_eqp(t5,lf[635]);
t19=t7;
f_7528(t19,(C_truep(t18)?t18:C_eqp(t5,lf[636])));}}}}}}}}}}}}

/* k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_7510,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_i_length(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7516,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:1090: make-argument-list */
t6=*((C_word*)lf[318]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[655];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* g1980 in k10186 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_10192(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_10192,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* c-backend.scm:1352: foreign-result-conversion */
t4=*((C_word*)lf[196]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t2;
/* c-backend.scm:1352: foreign-result-conversion */
t4=*((C_word*)lf[196]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k2979 in k2976 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2981,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2984,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[6]);
/* c-backend.scm:139: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=C_make_character(44);
av2[3]=t3;
av2[4]=C_make_character(44);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2982 in k2979 in k2976 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2984,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2987,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:140: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k2985 in k2982 in k2979 in k2976 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2987,2,av);}
/* c-backend.scm:141: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7559 in k7547 in k7535 in k7526 in compute-size in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_7561(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,5)))){
C_save_and_reclaim_args((void *)trf_7561,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
/* c-backend.scm:1105: string-append */
t2=*((C_word*)lf[115]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[595];
av2[4]=((C_word*)t0)[4];
av2[5]=lf[596];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7567,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[6]))){
/* c-backend.scm:1107: ##sys#hash-table-ref */
t3=*((C_word*)lf[10]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=*((C_word*)lf[607]+1);
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_7567(2,av2);}}}}

/* k7565 in k7559 in k7547 in k7535 in k7526 in compute-size in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_7567(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_7567,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7571,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1107: g1417 */
t3=t2;
f_7571(t3,((C_word*)t0)[5],t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[6]))){
t2=((C_word*)t0)[6];
t3=C_u_i_car(t2);
t4=C_eqp(t3,lf[597]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7604,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_7604(t6,t4);}
else{
t6=C_eqp(t3,lf[450]);
if(C_truep(t6)){
t7=t5;
f_7604(t7,t6);}
else{
t7=C_eqp(t3,lf[600]);
if(C_truep(t7)){
t8=t5;
f_7604(t8,t7);}
else{
t8=C_eqp(t3,lf[601]);
if(C_truep(t8)){
t9=t5;
f_7604(t9,t8);}
else{
t9=C_eqp(t3,lf[602]);
if(C_truep(t9)){
t10=t5;
f_7604(t10,t9);}
else{
t10=C_eqp(t3,lf[603]);
if(C_truep(t10)){
t11=t5;
f_7604(t11,t10);}
else{
t11=C_eqp(t3,lf[604]);
if(C_truep(t11)){
t12=t5;
f_7604(t12,t11);}
else{
t12=C_eqp(t3,lf[605]);
t13=t5;
f_7604(t13,(C_truep(t12)?t12:C_eqp(t3,lf[606])));}}}}}}}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* g1417 in k7565 in k7559 in k7547 in k7535 in k7526 in compute-size in k7514 in k7508 in k7505 in k7502 in k7499 in g1279 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_7571(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_7571,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* c-backend.scm:1109: compute-size */
t4=((C_word*)((C_word*)t0)[2])[1];{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
f_7518(5,av2);}}
else{
t3=t2;
/* c-backend.scm:1109: compute-size */
t4=((C_word*)((C_word*)t0)[2])[1];{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
f_7518(5,av2);}}}

/* k5177 in doloop661 in k5116 in k5110 in doloop655 in k5095 in k5092 in k5089 in k5078 in declarations in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5179,2,av);}
a=C_alloc(4);
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5169(t3,((C_word*)t0)[4],t2);}

/* k9522 in k9495 in k9486 in k9477 in k9282 in k9255 in foreign-argument-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_9524(C_word t0,C_word t1){
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
C_word t15;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_9524,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_eqp(t2,lf[600]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[791];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(t2,lf[602]);
if(C_truep(t4)){
t5=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t5;
av2[1]=lf[792];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(t2,lf[604]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t6;
av2[1]=lf[793];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(t2,lf[605]);
if(C_truep(t6)){
t7=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t7;
av2[1]=lf[794];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_eqp(t2,lf[748]);
if(C_truep(t7)){
t8=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t8;
av2[1]=lf[795];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_eqp(t2,lf[749]);
if(C_truep(t8)){
t9=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t9;
av2[1]=lf[796];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=C_eqp(t2,lf[603]);
if(C_truep(t9)){
t10=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t10;
av2[1]=lf[797];
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t10=C_eqp(t2,lf[599]);
if(C_truep(t10)){
t11=C_i_cadr(((C_word*)t0)[2]);
/* c-backend.scm:1311: foreign-argument-conversion */
t12=*((C_word*)lf[201]+1);{
C_word av2[3];
av2[0]=t12;
av2[1]=((C_word*)t0)[3];
av2[2]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
t11=C_eqp(t2,lf[740]);
if(C_truep(t11)){
t12=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t12;
av2[1]=lf[798];
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t12=C_eqp(t2,lf[597]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9601,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t14=C_i_cadr(((C_word*)t0)[2]);
/* c-backend.scm:1314: foreign-type-declaration */
t15=*((C_word*)lf[202]+1);{
C_word av2[4];
av2[0]=t15;
av2[1]=t13;
av2[2]=t14;
av2[3]=lf[801];
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}
else{
t13=C_eqp(t2,lf[606]);
if(C_truep(t13)){
t14=C_i_cadr(((C_word*)t0)[2]);
/* c-backend.scm:1317: string-append */
t15=*((C_word*)lf[115]+1);{
C_word av2[5];
av2[0]=t15;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[802];
av2[3]=t14;
av2[4]=lf[803];
((C_proc)(void*)(*((C_word*)t15+1)))(5,av2);}}
else{
/* c-backend.scm:1318: err */
t14=((C_word*)t0)[4];
f_9229(t14,((C_word*)t0)[3]);}}}}}}}}}}}}
else{
/* c-backend.scm:1319: err */
t2=((C_word*)t0)[4];
f_9229(t2,((C_word*)t0)[3]);}}

/* k3052 in k3049 in k3046 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3054,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3057,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:154: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k3055 in k3052 in k3049 in k3046 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3057,2,av);}
/* c-backend.scm:155: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3049 in k3046 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3051,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:153: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[49];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2960 in k2957 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2962,2,av);}
/* c-backend.scm:134: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[40];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* doloop661 in k5116 in k5110 in doloop655 in k5095 in k5092 in k5089 in k5078 in declarations in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5169(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_5169,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_greater_or_equalp(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5179,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_i_string_ref(((C_word*)t0)[4],t2);
t5=C_fix(C_character_code(t4));
/* c-backend.scm:590: gen */
t6=*((C_word*)lf[1]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=C_make_character(44);
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_2646(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,5)))){
C_save_and_reclaim_args((void *)trf_2646,5,t0,t1,t2,t3,t4);}
a=C_alloc(21);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2649,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=t8,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp));
t12=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4704,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t13=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4733,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
/* c-backend.scm:523: expr */
t14=((C_word*)t6)[1];
f_2649(t14,t1,t2,t3);}

/* expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_2649(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,0,6)))){
C_save_and_reclaim_args((void *)trf_2649,4,t0,t1,t2,t3);}
a=C_alloc(24);
t4=t2;
t5=C_slot(t4,C_fix(3));
t6=t5;
t7=t2;
t8=C_slot(t7,C_fix(2));
t9=t8;
t10=t2;
t11=C_slot(t10,C_fix(1));
t12=C_eqp(t11,lf[11]);
if(C_truep(t12)){
t13=C_i_car(t9);
t14=C_eqp(t13,lf[12]);
if(C_truep(t14)){
if(C_truep(C_i_cadr(t9))){
/* c-backend.scm:85: gen */
t15=*((C_word*)lf[1]+1);{
C_word av2[3];
av2[0]=t15;
av2[1]=t1;
av2[2]=lf[13];
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}
else{
/* c-backend.scm:85: gen */
t15=*((C_word*)lf[1]+1);{
C_word av2[3];
av2[0]=t15;
av2[1]=t1;
av2[2]=lf[14];
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}}
else{
t15=C_eqp(t13,lf[15]);
if(C_truep(t15)){
t16=C_i_cadr(t9);
t17=C_fix(C_character_code(t16));
/* c-backend.scm:86: gen */
t18=*((C_word*)lf[1]+1);{
C_word av2[5];
av2[0]=t18;
av2[1]=t1;
av2[2]=lf[16];
av2[3]=t17;
av2[4]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t18+1)))(5,av2);}}
else{
t16=C_eqp(t13,lf[17]);
if(C_truep(t16)){
/* c-backend.scm:87: gen */
t17=*((C_word*)lf[1]+1);{
C_word av2[3];
av2[0]=t17;
av2[1]=t1;
av2[2]=lf[18];
((C_proc)(void*)(*((C_word*)t17+1)))(3,av2);}}
else{
t17=C_eqp(t13,lf[19]);
if(C_truep(t17)){
t18=C_i_cadr(t9);
/* c-backend.scm:88: gen */
t19=*((C_word*)lf[1]+1);{
C_word av2[5];
av2[0]=t19;
av2[1]=t1;
av2[2]=lf[20];
av2[3]=t18;
av2[4]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t19+1)))(5,av2);}}
else{
t18=C_eqp(t13,lf[21]);
if(C_truep(t18)){
/* c-backend.scm:89: gen */
t19=*((C_word*)lf[1]+1);{
C_word av2[3];
av2[0]=t19;
av2[1]=t1;
av2[2]=lf[22];
((C_proc)(void*)(*((C_word*)t19+1)))(3,av2);}}
else{
/* c-backend.scm:90: bomb */
t19=*((C_word*)lf[8]+1);{
C_word av2[3];
av2[0]=t19;
av2[1]=t1;
av2[2]=lf[23];
((C_proc)(void*)(*((C_word*)t19+1)))(3,av2);}}}}}}}
else{
t13=C_eqp(t11,lf[24]);
if(C_truep(t13)){
t14=C_i_car(t9);
if(C_truep(C_i_vectorp(t14))){
t15=C_i_vector_ref(t14,C_fix(0));
/* c-backend.scm:95: gen */
t16=*((C_word*)lf[1]+1);{
C_word av2[5];
av2[0]=t16;
av2[1]=t1;
av2[2]=lf[25];
av2[3]=t15;
av2[4]=lf[26];
((C_proc)(void*)(*((C_word*)t16+1)))(5,av2);}}
else{
t15=C_u_i_car(t9);
/* c-backend.scm:96: gen */
t16=*((C_word*)lf[1]+1);{
C_word av2[5];
av2[0]=t16;
av2[1]=t1;
av2[2]=lf[27];
av2[3]=t15;
av2[4]=C_make_character(93);
((C_proc)(void*)(*((C_word*)t16+1)))(5,av2);}}}
else{
t14=C_eqp(t11,lf[28]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2796,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:99: gen */
t16=*((C_word*)lf[1]+1);{
C_word av2[4];
av2[0]=t16;
av2[1]=t15;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[31];
((C_proc)(void*)(*((C_word*)t16+1)))(4,av2);}}
else{
t15=C_eqp(t11,lf[32]);
if(C_truep(t15)){
t16=C_i_car(t9);
/* c-backend.scm:108: gen */
t17=*((C_word*)lf[1]+1);{
C_word av2[4];
av2[0]=t17;
av2[1]=t1;
av2[2]=lf[33];
av2[3]=t16;
((C_proc)(void*)(*((C_word*)t17+1)))(4,av2);}}
else{
t16=C_eqp(t11,lf[34]);
if(C_truep(t16)){
t17=C_i_car(t9);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2854,a[2]=t19,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t21=((C_word*)t19)[1];
f_2854(t21,t1,t6,t3,t17);}
else{
t17=C_eqp(t11,lf[35]);
if(C_truep(t17)){
t18=C_i_car(t9);
t19=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2906,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:121: gen */
t20=*((C_word*)lf[1]+1);{
C_word av2[5];
av2[0]=t20;
av2[1]=t19;
av2[2]=C_SCHEME_TRUE;
av2[3]=t18;
av2[4]=C_make_character(61);
((C_proc)(void*)(*((C_word*)t20+1)))(5,av2);}}
else{
t18=C_eqp(t11,lf[36]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2932,a[2]=t9,a[3]=t1,a[4]=t6,a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:127: gen */
t20=*((C_word*)lf[1]+1);{
C_word av2[3];
av2[0]=t20;
av2[1]=t19;
av2[2]=lf[38];
((C_proc)(void*)(*((C_word*)t20+1)))(3,av2);}}
else{
t19=C_eqp(t11,lf[39]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2959,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:132: gen */
t21=*((C_word*)lf[1]+1);{
C_word av2[3];
av2[0]=t21;
av2[1]=t20;
av2[2]=lf[41];
((C_proc)(void*)(*((C_word*)t21+1)))(3,av2);}}
else{
t20=C_eqp(t11,lf[42]);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2978,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:137: gen */
t22=*((C_word*)lf[1]+1);{
C_word av2[3];
av2[0]=t22;
av2[1]=t21;
av2[2]=lf[43];
((C_proc)(void*)(*((C_word*)t22+1)))(3,av2);}}
else{
t21=C_eqp(t11,lf[44]);
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3011,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:144: gen */
t23=*((C_word*)lf[1]+1);{
C_word av2[3];
av2[0]=t23;
av2[1]=t22;
av2[2]=lf[47];
((C_proc)(void*)(*((C_word*)t23+1)))(3,av2);}}
else{
t22=C_eqp(t11,lf[48]);
if(C_truep(t22)){
t23=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3048,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:151: gen */
t24=*((C_word*)lf[1]+1);{
C_word av2[3];
av2[0]=t24;
av2[1]=t23;
av2[2]=lf[50];
((C_proc)(void*)(*((C_word*)t24+1)))(3,av2);}}
else{
t23=C_eqp(t11,lf[51]);
if(C_truep(t23)){
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3077,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:158: gen */
t25=*((C_word*)lf[1]+1);{
C_word av2[3];
av2[0]=t25;
av2[1]=t24;
av2[2]=lf[53];
((C_proc)(void*)(*((C_word*)t25+1)))(3,av2);}}
else{
t24=C_eqp(t11,lf[54]);
if(C_truep(t24)){
t25=C_i_car(t9);
t26=t25;
t27=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3109,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t6,a[5]=t26,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:166: gen */
t28=*((C_word*)lf[1]+1);{
C_word av2[5];
av2[0]=t28;
av2[1]=t27;
av2[2]=lf[61];
av2[3]=t26;
av2[4]=C_make_character(44);
((C_proc)(void*)(*((C_word*)t28+1)))(5,av2);}}
else{
t25=C_eqp(t11,lf[62]);
if(C_truep(t25)){
t26=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3182,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:176: gen */
t27=*((C_word*)lf[1]+1);{
C_word av2[3];
av2[0]=t27;
av2[1]=t26;
av2[2]=lf[64];
((C_proc)(void*)(*((C_word*)t27+1)))(3,av2);}}
else{
t26=C_eqp(t11,lf[65]);
if(C_truep(t26)){
t27=C_i_car(t9);
/* c-backend.scm:180: gen */
t28=*((C_word*)lf[1]+1);{
C_word av2[4];
av2[0]=t28;
av2[1]=t1;
av2[2]=C_make_character(116);
av2[3]=t27;
((C_proc)(void*)(*((C_word*)t28+1)))(4,av2);}}
else{
t27=C_eqp(t11,lf[66]);
if(C_truep(t27)){
t28=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3214,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t29=C_i_car(t9);
/* c-backend.scm:183: gen */
t30=*((C_word*)lf[1]+1);{
C_word av2[5];
av2[0]=t30;
av2[1]=t28;
av2[2]=C_make_character(116);
av2[3]=t29;
av2[4]=C_make_character(61);
((C_proc)(void*)(*((C_word*)t30+1)))(5,av2);}}
else{
t28=C_eqp(t11,lf[67]);
if(C_truep(t28)){
t29=C_i_car(t9);
t30=t29;
t31=C_i_cadr(t9);
if(C_truep(C_i_caddr(t9))){
if(C_truep(t31)){
/* c-backend.scm:192: gen */
t32=*((C_word*)lf[1]+1);{
C_word av2[5];
av2[0]=t32;
av2[1]=t1;
av2[2]=lf[68];
av2[3]=t30;
av2[4]=lf[69];
((C_proc)(void*)(*((C_word*)t32+1)))(5,av2);}}
else{
t32=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3256,a[2]=t1,a[3]=t30,tmp=(C_word)a,a+=4,tmp);
t33=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3260,a[2]=t32,tmp=(C_word)a,a+=3,tmp);
t34=C_i_cadddr(t9);
/* c-backend.scm:194: ##sys#symbol->qualified-string */
t35=*((C_word*)lf[74]+1);{
C_word av2[3];
av2[0]=t35;
av2[1]=t33;
av2[2]=t34;
((C_proc)(void*)(*((C_word*)t35+1)))(3,av2);}}}
else{
if(C_truep(t31)){
/* c-backend.scm:196: gen */
t32=*((C_word*)lf[1]+1);{
C_word av2[5];
av2[0]=t32;
av2[1]=t1;
av2[2]=lf[75];
av2[3]=t30;
av2[4]=lf[76];
((C_proc)(void*)(*((C_word*)t32+1)))(5,av2);}}
else{
/* c-backend.scm:197: gen */
t32=*((C_word*)lf[1]+1);{
C_word av2[5];
av2[0]=t32;
av2[1]=t1;
av2[2]=lf[77];
av2[3]=t30;
av2[4]=lf[78];
((C_proc)(void*)(*((C_word*)t32+1)))(5,av2);}}}}
else{
t29=C_eqp(t11,lf[79]);
if(C_truep(t29)){
t30=C_i_car(t9);
t31=C_i_cadr(t9);
t32=C_i_caddr(t9);
t33=t32;
t34=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3291,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t33,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t31)){
/* c-backend.scm:204: gen */
t35=*((C_word*)lf[1]+1);{
C_word av2[5];
av2[0]=t35;
av2[1]=t34;
av2[2]=lf[83];
av2[3]=t30;
av2[4]=lf[84];
((C_proc)(void*)(*((C_word*)t35+1)))(5,av2);}}
else{
/* c-backend.scm:205: gen */
t35=*((C_word*)lf[1]+1);{
C_word av2[5];
av2[0]=t35;
av2[1]=t34;
av2[2]=lf[85];
av2[3]=t30;
av2[4]=lf[86];
((C_proc)(void*)(*((C_word*)t35+1)))(5,av2);}}}
else{
t30=C_eqp(t11,lf[87]);
if(C_truep(t30)){
t31=C_i_car(t9);
t32=t31;
t33=C_i_cadr(t9);
t34=C_i_caddr(t9);
if(C_truep(t33)){
t35=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3339,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t36=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3353,a[2]=t35,a[3]=t32,tmp=(C_word)a,a+=4,tmp);
t37=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3357,a[2]=t36,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:216: ##sys#symbol->qualified-string */
t38=*((C_word*)lf[74]+1);{
C_word av2[3];
av2[0]=t38;
av2[1]=t37;
av2[2]=t34;
((C_proc)(void*)(*((C_word*)t38+1)))(3,av2);}}
else{
t35=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3360,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t36=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3374,a[2]=t35,a[3]=t32,tmp=(C_word)a,a+=4,tmp);
t37=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3378,a[2]=t36,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:221: ##sys#symbol->qualified-string */
t38=*((C_word*)lf[74]+1);{
C_word av2[3];
av2[0]=t38;
av2[1]=t37;
av2[2]=t34;
((C_proc)(void*)(*((C_word*)t38+1)))(3,av2);}}}
else{
t31=C_eqp(t11,lf[94]);
if(C_truep(t31)){
/* c-backend.scm:225: gen */
t32=*((C_word*)lf[1]+1);{
C_word av2[3];
av2[0]=t32;
av2[1]=t1;
av2[2]=lf[95];
((C_proc)(void*)(*((C_word*)t32+1)))(3,av2);}}
else{
t32=C_eqp(t11,lf[96]);
if(C_truep(t32)){
t33=C_i_cdr(t6);
t34=t33;
t35=C_i_length(t34);
t36=t35;
t37=t3;
t38=C_a_i_plus(&a,2,t36,C_fix(1));
t39=t38;
t40=C_i_car(t9);
t41=t40;
t42=C_i_cadr(t9);
t43=t42;
t44=C_u_i_cdr(t9);
t45=C_u_i_cdr(t44);
t46=C_i_pairp(t45);
t47=t46;
t48=(C_truep(t47)?C_i_caddr(t9):C_SCHEME_FALSE);
t49=t48;
t50=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_3417,a[2]=t6,a[3]=t1,a[4]=t39,a[5]=((C_word*)t0)[3],a[6]=t34,a[7]=t3,a[8]=((C_word*)t0)[2],a[9]=t36,a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],a[12]=t37,a[13]=t43,a[14]=t49,a[15]=t41,a[16]=((C_word*)t0)[6],a[17]=((C_word*)t0)[7],a[18]=t9,a[19]=t47,tmp=(C_word)a,a+=20,tmp);
/* c-backend.scm:236: source-info->string */
t51=*((C_word*)lf[161]+1);{
C_word av2[3];
av2[0]=t51;
av2[1]=t50;
av2[2]=t49;
((C_proc)(void*)(*((C_word*)t51+1)))(3,av2);}}
else{
t33=C_eqp(t11,lf[162]);
if(C_truep(t33)){
t34=C_i_length(t6);
t35=t34;
t36=C_a_i_plus(&a,2,t35,C_fix(1));
t37=t36;
t38=C_i_car(t9);
t39=t38;
t40=C_i_cadr(t9);
t41=t40;
t42=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4069,a[2]=t39,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t1,a[6]=t35,a[7]=t6,a[8]=t37,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=t41,tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:336: lambda-literal-closure-size */
t43=*((C_word*)lf[159]+1);{
C_word av2[3];
av2[0]=t43;
av2[1]=t42;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t43+1)))(3,av2);}}
else{
t34=C_eqp(t11,lf[166]);
if(C_truep(t34)){
t35=C_i_cdr(t6);
t36=t35;
t37=C_i_length(t36);
t38=C_a_i_plus(&a,2,t37,C_fix(1));
t39=C_i_car(t9);
t40=t39;
t41=C_i_caddr(t9);
t42=t41;
t43=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4093,a[2]=t9,a[3]=t6,a[4]=t1,a[5]=t36,a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=((C_word*)t0)[2],a[9]=t42,a[10]=t40,a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],tmp=(C_word)a,a+=13,tmp);
/* c-backend.scm:363: source-info->string */
t44=*((C_word*)lf[161]+1);{
C_word av2[3];
av2[0]=t44;
av2[1]=t43;
av2[2]=t42;
((C_proc)(void*)(*((C_word*)t44+1)))(3,av2);}}
else{
t35=C_eqp(t11,lf[178]);
if(C_truep(t35)){
t36=C_i_length(t6);
t37=C_a_i_plus(&a,2,t36,C_fix(1));
t38=t37;
t39=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4223,a[2]=t9,a[3]=t1,a[4]=t38,a[5]=((C_word*)t0)[3],a[6]=t6,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:395: gen */
t40=*((C_word*)lf[1]+1);{
C_word av2[3];
av2[0]=t40;
av2[1]=t39;
av2[2]=C_make_character(123);
((C_proc)(void*)(*((C_word*)t40+1)))(3,av2);}}
else{
t36=C_eqp(t11,lf[183]);
if(C_truep(t36)){
t37=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4242,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:400: gen */
t38=*((C_word*)lf[1]+1);{
C_word av2[4];
av2[0]=t38;
av2[1]=t37;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[185];
((C_proc)(void*)(*((C_word*)t38+1)))(4,av2);}}
else{
t37=C_eqp(t11,lf[186]);
if(C_truep(t37)){
t38=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4261,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t6,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t39=C_i_car(t9);
/* c-backend.scm:405: gen */
t40=*((C_word*)lf[1]+1);{
C_word av2[4];
av2[0]=t40;
av2[1]=t38;
av2[2]=t39;
av2[3]=C_make_character(40);
((C_proc)(void*)(*((C_word*)t40+1)))(4,av2);}}
else{
t38=C_eqp(t11,lf[187]);
if(C_truep(t38)){
t39=C_i_car(t9);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* c-backend.scm:410: gen */
t40=*((C_word*)lf[1]+1);{
C_word av2[7];
av2[0]=t40;
av2[1]=t1;
av2[2]=lf[188];
av2[3]=t39;
av2[4]=lf[189];
av2[5]=lf[190];
av2[6]=lf[191];
((C_proc)(void*)(*((C_word*)t40+1)))(7,av2);}}
else{
/* c-backend.scm:410: gen */
t40=*((C_word*)lf[1]+1);{
C_word av2[7];
av2[0]=t40;
av2[1]=t1;
av2[2]=lf[188];
av2[3]=t39;
av2[4]=lf[189];
av2[5]=lf[192];
av2[6]=lf[191];
((C_proc)(void*)(*((C_word*)t40+1)))(7,av2);}}}
else{
t39=C_eqp(t11,lf[193]);
if(C_truep(t39)){
t40=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4297,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[5],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t41=C_i_car(t9);
t42=C_i_length(t6);
/* c-backend.scm:414: gen */
t43=*((C_word*)lf[1]+1);{
C_word av2[5];
av2[0]=t43;
av2[1]=t40;
av2[2]=t41;
av2[3]=lf[194];
av2[4]=t42;
((C_proc)(void*)(*((C_word*)t43+1)))(5,av2);}}
else{
t40=C_eqp(t11,lf[195]);
if(C_truep(t40)){
t41=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4333,a[2]=t9,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t42=C_i_cadr(t9);
/* c-backend.scm:422: foreign-result-conversion */
t43=*((C_word*)lf[196]+1);{
C_word av2[4];
av2[0]=t43;
av2[1]=t41;
av2[2]=t42;
av2[3]=lf[197];
((C_proc)(void*)(*((C_word*)t43+1)))(4,av2);}}
else{
t41=C_eqp(t11,lf[198]);
if(C_truep(t41)){
t42=C_i_cadr(t9);
t43=t42;
t44=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4351,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t45=C_u_i_car(t9);
t46=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4367,a[2]=t44,a[3]=t45,a[4]=t43,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:426: foreign-type-declaration */
t47=*((C_word*)lf[202]+1);{
C_word av2[4];
av2[0]=t47;
av2[1]=t46;
av2[2]=t43;
av2[3]=lf[203];
((C_proc)(void*)(*((C_word*)t47+1)))(4,av2);}}
else{
t42=C_eqp(t11,lf[204]);
if(C_truep(t42)){
t43=C_i_car(t9);
t44=t43;
t45=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4383,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t46=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4397,a[2]=t45,a[3]=t44,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:432: foreign-result-conversion */
t47=*((C_word*)lf[196]+1);{
C_word av2[4];
av2[0]=t47;
av2[1]=t46;
av2[2]=t44;
av2[3]=lf[209];
((C_proc)(void*)(*((C_word*)t47+1)))(4,av2);}}
else{
t43=C_eqp(t11,lf[210]);
if(C_truep(t43)){
t44=C_i_car(t9);
t45=t44;
t46=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4413,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t45,tmp=(C_word)a,a+=7,tmp);
t47=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4441,a[2]=t46,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:438: foreign-type-declaration */
t48=*((C_word*)lf[202]+1);{
C_word av2[4];
av2[0]=t48;
av2[1]=t47;
av2[2]=t45;
av2[3]=lf[215];
((C_proc)(void*)(*((C_word*)t48+1)))(4,av2);}}
else{
t44=C_eqp(t11,lf[216]);
if(C_truep(t44)){
t45=C_i_car(t9);
/* c-backend.scm:445: gen */
t46=*((C_word*)lf[1]+1);{
C_word av2[3];
av2[0]=t46;
av2[1]=t1;
av2[2]=t45;
((C_proc)(void*)(*((C_word*)t46+1)))(3,av2);}}
else{
t45=C_eqp(t11,lf[217]);
if(C_truep(t45)){
t46=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4463,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t47=C_i_car(t9);
/* c-backend.scm:448: gen */
t48=*((C_word*)lf[1]+1);{
C_word av2[5];
av2[0]=t48;
av2[1]=t46;
av2[2]=lf[219];
av2[3]=t47;
av2[4]=C_make_character(61);
((C_proc)(void*)(*((C_word*)t48+1)))(5,av2);}}
else{
t46=C_eqp(t11,lf[220]);
if(C_truep(t46)){
t47=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4486,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t6,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t48=C_i_car(t9);
/* c-backend.scm:453: gen */
t49=*((C_word*)lf[1]+1);{
C_word av2[4];
av2[0]=t49;
av2[1]=t47;
av2[2]=t48;
av2[3]=lf[221];
((C_proc)(void*)(*((C_word*)t49+1)))(4,av2);}}
else{
t47=C_eqp(t11,lf[222]);
if(C_truep(t47)){
t48=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4505,a[2]=t9,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:458: gen */
t49=*((C_word*)lf[1]+1);{
C_word av2[4];
av2[0]=t49;
av2[1]=t48;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[226];
((C_proc)(void*)(*((C_word*)t49+1)))(4,av2);}}
else{
t48=C_eqp(t11,lf[227]);
if(C_truep(t48)){
t49=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4586,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:473: gen */
t50=*((C_word*)lf[1]+1);{
C_word av2[3];
av2[0]=t50;
av2[1]=t49;
av2[2]=lf[229];
((C_proc)(void*)(*((C_word*)t50+1)))(3,av2);}}
else{
t49=t2;
t50=C_slot(t49,C_fix(1));
/* c-backend.scm:481: bomb */
t51=*((C_word*)lf[8]+1);{
C_word av2[4];
av2[0]=t51;
av2[1]=t1;
av2[2]=lf[230];
av2[3]=t50;
((C_proc)(void*)(*((C_word*)t51+1)))(4,av2);}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k8569 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8571,2,av);}
/* c-backend.scm:1206: foreign-type-declaration */
t2=*((C_word*)lf[202]+1);{
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

/* k3046 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3048,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3051,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:152: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k8575 in k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_8577(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_8577,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8588,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1209: string-append */
t5=*((C_word*)lf[115]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[714];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8594,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[7],C_fix(2)))){
t3=C_i_car(((C_word*)t0)[2]);
t4=t2;
f_8594(t4,C_eqp(lf[743],t3));}
else{
t3=t2;
f_8594(t3,C_SCHEME_FALSE);}}}

/* for-each-loop394 in k3942 in k3939 in k4067 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_4011(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4011,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4021,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* c-backend.scm:338: g395 */
t9=((C_word*)t0)[3];
f_3945(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k2976 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2978,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2981,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:138: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k5504 in k5466 in k5463 in k5460 in k5457 in k5454 in k5451 in a5448 in trampolines in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,10)))){
C_save_and_reclaim((void *)f_5506,2,av);}
a=C_alloc(5);
t2=(C_truep(t1)?C_SCHEME_FALSE:((C_word*)t0)[2]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5477,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:656: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 11) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(11);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[325];
av2[5]=((C_word*)t0)[5];
av2[6]=lf[326];
av2[7]=C_SCHEME_TRUE;
av2[8]=lf[327];
av2[9]=((C_word*)t0)[5];
av2[10]=lf[328];
((C_proc)(void*)(*((C_word*)t4+1)))(11,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8558 in k8515 in k8500 in k8488 in k8380 in k8359 in k8251 in foreign-type-declaration in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_8560(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_8560,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8571,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1206: string-append */
t5=*((C_word*)lf[115]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[713];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8577,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_eqp(C_fix(2),((C_word*)t0)[7]);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[2]);
t5=t2;
f_8577(t5,C_eqp(lf[597],t4));}
else{
t4=t2;
f_8577(t4,C_SCHEME_FALSE);}}}

/* literal-frame in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5519(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_5519,2,t0,t1);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5525,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5525(t5,t1,C_fix(0),((C_word*)t0)[3]);}

/* k5515 in k5460 in k5457 in k5454 in k5451 in a5448 in trampolines in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5517,2,av);}
t2=((C_word*)t0)[2];
f_5465(t2,C_i_zerop(t1));}

/* k6191 in k6188 in k6182 in k6155 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in ... */
static void C_ccall f_6193(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6193,2,av);}
a=C_alloc(9);
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6202,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_6202(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}

/* k6188 in k6182 in k6155 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in ... */
static void C_ccall f_6190(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,7)))){
C_save_and_reclaim((void *)f_6190,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6193,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:878: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[366];
av2[4]=((C_word*)t0)[2];
av2[5]=lf[367];
av2[6]=((C_word*)t0)[2];
av2[7]=lf[368];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k2957 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2959(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2959,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2962,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:133: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* doloop744 in literal-frame in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5525(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_5525,4,t0,t1,t2,t3);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5535,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t3);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5552,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t6,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:670: open-output-string */
t8=*((C_word*)lf[334]+1);{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5006 in k4990 in k4986 in k4982 in k4978 in k4879 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5008,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5011,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5013,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5013(t6,t2,t1);}

/* k6182 in k6155 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in ... */
static void C_ccall f_6184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,11)))){
C_save_and_reclaim((void *)f_6184,2,av);}
a=C_alloc(8);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6190,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:876: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 12) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(12);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[369];
av2[4]=((C_word*)t0)[6];
av2[5]=lf[370];
av2[6]=C_SCHEME_TRUE;
av2[7]=lf[371];
av2[8]=((C_word*)t0)[3];
av2[9]=lf[372];
av2[10]=((C_word*)t0)[7];
av2[11]=lf[373];
((C_proc)(void*)(*((C_word*)t3+1)))(12,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6226,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_truep(((C_word*)t0)[8])?C_i_greaterp(((C_word*)t0)[9],C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6241,a[2]=t2,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:885: gen */
t5=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[377];
av2[4]=((C_word*)t0)[6];
av2[5]=C_make_character(44);
av2[6]=((C_word*)t0)[9];
av2[7]=C_make_character(44);
((C_proc)(void*)(*((C_word*)t5+1)))(8,av2);}}
else{
/* c-backend.scm:889: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[378];
av2[4]=((C_word*)t0)[6];
av2[5]=C_make_character(44);
av2[6]=((C_word*)t0)[3];
av2[7]=lf[379];
((C_proc)(void*)(*((C_word*)t4+1)))(8,av2);}}}}

/* k2636 in find-lambda in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2638,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* c-backend.scm:73: bomb */
t2=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[9];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2632(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(81,c,5)))){
C_save_and_reclaim((void *)f_2632,2,av);}
a=C_alloc(81);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
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
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2634,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp));
t27=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2646,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t28=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4860,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp));
t29=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5073,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp));
t30=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5245,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp));
t31=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5410,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp));
t32=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5519,a[2]=t19,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp));
t33=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5575,a[2]=t17,tmp=(C_word)a,a+=3,tmp));
t34=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5767,a[2]=t21,tmp=(C_word)a,a+=3,tmp));
t35=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5909,a[2]=t23,tmp=(C_word)a,a+=3,tmp));
t36=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5985,tmp=(C_word)a,a+=2,tmp));
t37=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6051,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=t15,a[6]=t17,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp));
t38=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6730,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=t25,a[7]=((C_word*)t0)[10],a[8]=t13,a[9]=((C_word*)t0)[7],a[10]=t11,a[11]=t9,a[12]=t7,tmp=(C_word)a,a+=13,tmp);
/* c-backend.scm:903: debugging */
t39=*((C_word*)lf[476]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t39;
av2[1]=t38;
av2[2]=lf[499];
av2[3]=lf[500];
((C_proc)(void*)(*((C_word*)t39+1)))(4,av2);}}

/* find-lambda in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_2634(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_2634,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2638,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:72: ##sys#hash-table-ref */
t4=*((C_word*)lf[10]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5533 in doloop744 in literal-frame in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5535,2,av);}
a=C_alloc(4);
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=((C_word*)((C_word*)t0)[4])[1];
f_5525(t5,((C_word*)t0)[5],t2,t4);}

/* k9495 in k9486 in k9477 in k9282 in k9255 in foreign-argument-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_9497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_9497,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=t1;
if(C_truep(C_i_vectorp(t3))){
t4=C_i_vector_ref(t3,C_fix(0));
/* c-backend.scm:1301: foreign-argument-conversion */
t5=*((C_word*)lf[201]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* c-backend.scm:1301: foreign-argument-conversion */
t4=*((C_word*)lf[201]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9524,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[3]))){
t3=((C_word*)t0)[3];
t4=C_u_i_length(t3);
t5=t2;
f_9524(t5,C_fixnum_greater_or_equal_p(t4,C_fix(2)));}
else{
t3=t2;
f_9524(t3,C_SCHEME_FALSE);}}}

/* k6169 in k6158 in k6155 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in ... */
static void C_ccall f_6171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6171,2,av);}
a=C_alloc(4);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* c-backend.scm:894: expression */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2646(t3,((C_word*)t0)[5],t1,t2,((C_word*)t0)[6]);}
else{
/* c-backend.scm:894: expression */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2646(t2,((C_word*)t0)[5],t1,((C_word*)t0)[3],((C_word*)t0)[6]);}}

/* k6856 in for-each-loop1035 in k6835 in k6775 in emit-debug-table in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6858,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6848(t3,((C_word*)t0)[4],t2);}

/* k9486 in k9477 in k9282 in k9255 in foreign-argument-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_9488(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_9488,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=lf[789];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[12]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[790];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9497,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
/* c-backend.scm:1299: ##sys#hash-table-ref */
t4=*((C_word*)lf[10]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[607]+1);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_9497(2,av2);}}}}}

/* k2933 in k2930 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2935,2,av);}
a=C_alloc(4);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_plus(&a,2,t2,C_fix(1));
/* c-backend.scm:129: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[37];
av2[3]=t3;
av2[4]=C_make_character(93);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2930 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2932(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2932,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2935,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* c-backend.scm:128: expr */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2649(t4,t2,t3,((C_word*)t0)[6]);}

/* k6841 in k6835 in k6775 in emit-debug-table in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6843,2,av);}
/* c-backend.scm:932: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[503];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k6158 in k6155 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in ... */
static void C_ccall f_6160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6160,2,av);}
a=C_alloc(10);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6164,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6171,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t3,a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:895: lambda-literal-body */
t5=*((C_word*)lf[364]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* for-each-loop1035 in k6835 in k6775 in emit-debug-table in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_6848(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_6848,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6858,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6782,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=C_i_cadr(t6);
/* c-backend.scm:925: gen */
t9=*((C_word*)lf[1]+1);{
C_word av2[6];
av2[0]=t9;
av2[1]=t7;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[508];
av2[4]=t8;
av2[5]=lf[509];
((C_proc)(void*)(*((C_word*)t9+1)))(6,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6162 in k6158 in k6155 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in ... */
static void C_ccall f_6164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6164,2,av);}
/* c-backend.scm:900: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(125);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k2904 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2906,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2909,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* c-backend.scm:122: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k2907 in k2904 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2909,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2912,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:123: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5945 in k5938 in doloop827 in k5917 in gen-string-constant in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5947,2,av);}
/* c-backend.scm:729: gen */
t2=*((C_word*)lf[1]+1);{
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

/* k5938 in doloop827 in k5917 in gen-string-constant in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5940(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_5940,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5947,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5951,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:729: string-like-substring */
f_5985(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k6835 in k6775 in emit-debug-table in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6837(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6837,2,av);}
a=C_alloc(8);
t2=C_i_check_list_2(t1,lf[57]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6843,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6848,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_6848(t7,t3,t1);}

/* k2910 in k2907 in k2904 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_2912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2912,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* c-backend.scm:124: expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2649(t3,((C_word*)t0)[4],t2,((C_word*)t0)[5]);}

/* k5949 in k5938 in doloop827 in k5917 in gen-string-constant in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5951,2,av);}
/* c-backend.scm:729: c-ify-string */
t2=*((C_word*)lf[73]+1);{
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

/* k3361 in k3358 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3363,2,av);}
/* c-backend.scm:223: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3358 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3360,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3363,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:222: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k5673 in map-loop771 in k5643 in k5580 in literal-size in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5675(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5675,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5650(t6,((C_word*)t0)[5],t5);}

/* k5958 in doloop827 in k5917 in gen-string-constant in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5960,2,av);}
a=C_alloc(8);
t2=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(80));
t4=((C_word*)((C_word*)t0)[4])[1];
f_5924(t4,((C_word*)t0)[5],t2,t3);}

/* k6155 in k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in ... */
static void C_ccall f_6157(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_6157,2,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6160,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_eqp(lf[298],((C_word*)t0)[9]);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_not(((C_word*)t0)[10]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6184,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],tmp=(C_word)a,a+=11,tmp);
t6=(C_truep(((C_word*)t0)[15])?C_i_not(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6261,a[2]=((C_word*)t0)[6],a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_6261(t10,t5,C_fix(0));}
else{
t7=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_6184(2,av2);}}}
else{
/* c-backend.scm:892: gen */
t5=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=C_make_character(125);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k6817 in for-each-loop1048 in k6780 in for-each-loop1035 in k6835 in k6775 in emit-debug-table in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6819,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6809(t3,((C_word*)t0)[4],t2);}

/* doloop499 in k4509 in k4506 in k4503 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_4522(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_4522,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_zerop(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4532,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:464: gen */
t5=*((C_word*)lf[1]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[223];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4545,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:467: gen */
t5=*((C_word*)lf[1]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[224];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k10849 in encode-literal in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10851,2,av);}
/* c-backend.scm:1420: string-append */
t2=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[853];
av2[3]=t1;
av2[4]=lf[854];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3351 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3353,2,av);}
/* c-backend.scm:215: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[88];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[89];
av2[5]=t1;
av2[6]=lf[90];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k3355 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_3357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3357,2,av);}
/* c-backend.scm:216: uncommentify */
t2=*((C_word*)lf[82]+1);{
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

/* k6152 in k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in ... */
static void C_ccall f_6154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_6154,2,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6157,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
t3=C_eqp(lf[298],((C_word*)t0)[9]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6300,a[2]=((C_word*)t0)[16],a[3]=t2,a[4]=((C_word*)t0)[17],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[18],a[7]=((C_word*)t0)[19],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6359,a[2]=((C_word*)t0)[20],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:814: fold */
t6=*((C_word*)lf[418]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[16];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6373,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[18],a[6]=((C_word*)t0)[21],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:844: gen */
t5=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[429];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6412,a[2]=((C_word*)t0)[10],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[18],a[7]=((C_word*)t0)[22],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[23],a[10]=((C_word*)t0)[15],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[10])){
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_6412(2,av2);}}
else{
/* c-backend.scm:850: gen */
t5=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[443];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}}}

/* k6149 in k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in ... */
static void C_ccall f_6151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(40,c,5)))){
C_save_and_reclaim((void *)f_6151,2,av);}
a=C_alloc(40);
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6154,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
/* c-backend.scm:803: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[444];
av2[4]=((C_word*)t0)[6];
av2[5]=C_make_character(59);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6506,a[2]=((C_word*)t0)[24],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6554,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[15])){
t5=C_a_i_minus(&a,2,((C_word*)t0)[6],C_fix(1));
t6=t4;
f_6554(t6,C_a_i_plus(&a,2,((C_word*)t0)[11],t5));}
else{
t5=t4;
f_6554(t5,((C_word*)t0)[11]);}}}

/* k5977 in doloop827 in k5917 in gen-string-constant in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5979,2,av);}
/* c-backend.scm:730: c-ify-string */
t2=*((C_word*)lf[73]+1);{
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

/* k5973 in doloop827 in k5917 in gen-string-constant in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5975,2,av);}
/* c-backend.scm:730: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k6146 in k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in ... */
static void C_ccall f_6148(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,3)))){
C_save_and_reclaim((void *)f_6148,2,av);}
a=C_alloc(31);
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_6151,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
t3=(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:((C_word*)t0)[10]);
if(C_truep(t3)){
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6151(2,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6592,a[2]=((C_word*)t0)[6],a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_6592(t7,t2,C_fix(0));}}

/* k6143 in k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in ... */
static void C_fcall f_6145(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,0,3)))){
C_save_and_reclaim_args((void *)trf_6145,2,t0,t1);}
a=C_alloc(25);
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_6148,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
/* c-backend.scm:797: gen */
t3=*((C_word*)lf[1]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[460];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6802 in k6780 in for-each-loop1035 in k6835 in k6775 in emit-debug-table in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6804,2,av);}
/* c-backend.scm:930: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[504];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* for-each-loop1048 in k6780 in for-each-loop1035 in k6835 in k6775 in emit-debug-table in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_6809(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_6809,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6819,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6791,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6795,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:928: ->string */
t8=*((C_word*)lf[507]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5347 in k5280 in k5277 in k5274 in k5271 in k5268 in k5265 in k5262 in k5259 in k5256 in a5253 in k5247 in prototypes in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5349,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:611: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[309];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4546 in k4543 in doloop499 in k4509 in k4506 in k4503 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4548,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4551,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:469: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(58);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6140 in k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in ... */
static void C_ccall f_6142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,2)))){
C_save_and_reclaim((void *)f_6142,2,av);}
a=C_alloc(25);
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_6145,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
t3=C_eqp(((C_word*)t0)[22],lf[248]);
if(C_truep(t3)){
t4=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_FALSE);
t5=t2;
f_6145(t5,t4);}
else{
t4=t2;
f_6145(t4,C_SCHEME_UNDEFINED);}}

/* k9477 in k9282 in k9255 in foreign-argument-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_9479(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9479,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=lf[788];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[594]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9488,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_9488(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[608]);
if(C_truep(t4)){
t5=t3;
f_9488(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[609]);
if(C_truep(t5)){
t6=t3;
f_9488(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[610]);
t7=t3;
f_9488(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[3],lf[611])));}}}}}

/* gen-string-constant in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5909(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_5909,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_block_size(t2);
t4=t3;
t5=C_fixnum_divide(t4,C_fix(80));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5919,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t1,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:724: modulo */
t8=*((C_word*)lf[361]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=t4;
av2[3]=C_fix(80);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k5905 in gen-lit in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5907,2,av);}
t2=((C_word*)t0)[2];
f_5774(t2,C_i_not(t1));}

/* k6137 in k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in ... */
static void C_ccall f_6139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,2)))){
C_save_and_reclaim((void *)f_6139,2,av);}
a=C_alloc(25);
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_6142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
/* c-backend.scm:795: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[461];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6134 in k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in ... */
static void C_ccall f_6136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_6136,2,av);}
a=C_alloc(25);
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_6139,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
if(C_truep(((C_word*)t0)[3])){
if(C_truep(((C_word*)t0)[3])){{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t2;
av2[2]=*((C_word*)lf[1]+1);
av2[3]=((C_word*)t0)[25];
C_apply(4,av2);}}
else{
/* c-backend.scm:794: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[462];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
if(C_truep(((C_word*)t0)[10])){{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t2;
av2[2]=*((C_word*)lf[1]+1);
av2[3]=((C_word*)t0)[25];
C_apply(4,av2);}}
else{
/* c-backend.scm:794: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[462];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}

/* k10836 in encode-literal in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10838(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,3)))){
C_save_and_reclaim((void *)f_10838,2,av);}
a=C_alloc(29);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10833,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];
/* ##sys#fixnum->string */
t4=*((C_word*)lf[851]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=C_a_i_arithmetic_shift(&a,2,((C_word*)t0)[3],C_fix(-24));
t3=C_a_i_bitwise_and(&a,2,C_fix(255),t2);
t4=C_make_character(C_unfix(t3));
t5=C_a_i_arithmetic_shift(&a,2,((C_word*)t0)[3],C_fix(-16));
t6=C_a_i_bitwise_and(&a,2,C_fix(255),t5);
t7=C_make_character(C_unfix(t6));
t8=C_a_i_arithmetic_shift(&a,2,((C_word*)t0)[3],C_fix(-8));
t9=C_a_i_bitwise_and(&a,2,C_fix(255),t8);
t10=C_make_character(C_unfix(t9));
t11=((C_word*)t0)[3];
t12=C_fixnum_and(C_fix(255),t11);
t13=C_make_character(C_unfix(t12));
t14=C_a_i_string(&a,4,t4,t7,t10,t13);
/* ##sys#string-append */
t15=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t15;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[852];
av2[3]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}}

/* k4543 in doloop499 in k4509 in k4506 in k4503 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4545,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4548,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:468: expr */
t4=((C_word*)((C_word*)t0)[6])[1];
f_2649(t4,t2,t3,((C_word*)t0)[7]);}

/* k10831 in k10836 in encode-literal in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10833,2,av);}
/* c-backend.scm:1418: string-append */
t2=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[849];
av2[3]=t1;
av2[4]=lf[850];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6131 in k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in ... */
static void C_ccall f_6133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,2)))){
C_save_and_reclaim((void *)f_6133,2,av);}
a=C_alloc(30);
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_6136,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6625,a[2]=((C_word*)t0)[25],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[10])){
t4=C_i_zerop(((C_word*)t0)[12]);
t5=t3;
f_6625(t5,C_i_not(t4));}
else{
t4=t3;
f_6625(t4,C_SCHEME_FALSE);}}

/* k6128 in k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in ... */
static void C_ccall f_6130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,2)))){
C_save_and_reclaim((void *)f_6130,2,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_6133,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6133(2,av2);}}
else{
/* c-backend.scm:788: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[464];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k5917 in gen-string-constant in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5919,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5924,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_5924(t6,((C_word*)t0)[5],((C_word*)t0)[6],C_fix(0));}

/* k6125 in k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in ... */
static void C_ccall f_6127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,2)))){
C_save_and_reclaim((void *)f_6127,2,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_6130,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
/* c-backend.scm:787: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(40);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k10865 in encode-literal in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10867,2,av);}
/* c-backend.scm:1423: string-append */
t2=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[855];
av2[3]=t1;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4509 in k4506 in k4503 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4511(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4511,2,av);}
a=C_alloc(7);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4522,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4522(t7,((C_word*)t0)[6],t2,t3);}

/* k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in a6056 in procedures in ... */
static void C_ccall f_6121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_6121,2,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_6124,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6692,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:774: cleanup */
t4=*((C_word*)lf[475]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[26];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in a6056 in ... */
static void C_ccall f_6124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,2)))){
C_save_and_reclaim((void *)f_6124,2,av);}
a=C_alloc(32);
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_6127,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
t3=C_eqp(lf[298],((C_word*)t0)[9]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6675,a[2]=t2,a[3]=((C_word*)t0)[19],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:783: gen */
t5=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[467];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6653,a[2]=t2,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:776: gen */
t5=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[472];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* doloop827 in k5917 in gen-string-constant in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5924(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,4)))){
C_save_and_reclaim_args((void *)trf_5924,4,t0,t1,t2,t3);}
a=C_alloc(16);
if(C_truep(C_i_zerop(t2))){
t4=C_eqp(((C_word*)t0)[2],C_fix(0));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5940,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t4)){
t6=t5;
f_5940(t6,t4);}
else{
t6=C_u_i_zerop(((C_word*)t0)[5]);
t7=t5;
f_5940(t7,C_i_not(t6));}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5960,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5975,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5979,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_a_i_plus(&a,2,t3,C_fix(80));
/* c-backend.scm:730: string-like-substring */
f_5985(t6,((C_word*)t0)[4],t3,t7);}}

/* map-loop573 in k5006 in k4990 in k4986 in k4982 in k4978 in k4879 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_5013(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_5013,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5038,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:540: g596 */
t5=*((C_word*)lf[115]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[274];
av2[3]=t4;
av2[4]=lf[275];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6116 in k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in a6056 in procedures in k2630 in ... */
static void C_ccall f_6118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_6118,2,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_6121,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* c-backend.scm:773: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5009 in k5006 in k4990 in k4986 in k4982 in k4978 in k4879 in header in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5011,2,av);}
/* c-backend.scm:539: string-intersperse */
t2=*((C_word*)lf[272]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[273];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k10896 in encode-literal in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10898,2,av);}
/* c-backend.scm:1431: string-append */
t2=*((C_word*)lf[115]+1);{
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

/* k10888 in encode-literal in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10890,2,av);}
/* c-backend.scm:1430: ##sys#string-append */
t2=*((C_word*)lf[105]+1);{
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

/* k6113 in k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in a6056 in procedures in k2630 in generate-code in ... */
static void C_ccall f_6115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_6115,2,av);}
a=C_alloc(27);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_6118,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=t2,a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],tmp=(C_word)a,a+=27,tmp);
if(C_truep(((C_word*)t0)[20])){
/* c-backend.scm:772: debugging */
t4=*((C_word*)lf[476]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[477];
av2[3]=lf[478];
av2[4]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6118(2,av2);}}}

/* k6110 in k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in a6056 in procedures in k2630 in generate-code in k2624 in ... */
static void C_ccall f_6112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_6112,2,av);}
a=C_alloc(26);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_6115,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=t2,a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],tmp=(C_word)a,a+=26,tmp);
if(C_truep(*((C_word*)lf[262]+1))){
/* c-backend.scm:770: string-append */
t4=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[262]+1);
av2[3]=lf[479];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=lf[480];
f_6115(2,av2);}}}

/* k6107 in k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in a6056 in procedures in k2630 in generate-code in k2624 in k2539 in ... */
static void C_ccall f_6109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,2)))){
C_save_and_reclaim((void *)f_6109,2,av);}
a=C_alloc(25);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_6112,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],tmp=(C_word)a,a+=25,tmp);
/* c-backend.scm:768: lambda-literal-unboxed-temporaries */
t4=*((C_word*)lf[481]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6104 in k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in a6056 in procedures in k2630 in generate-code in k2624 in k2539 in k2536 in ... */
static void C_ccall f_6106(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_6106,2,av);}
a=C_alloc(24);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6109,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=t2,a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
/* c-backend.scm:767: lambda-literal-temporaries */
t4=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8136 in k8133 in k8130 in k8124 in k8121 in k8118 in k8115 in generate-foreign-callback-header in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8138,2,av);}
/* c-backend.scm:1153: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8133 in k8130 in k8124 in k8121 in k8118 in k8115 in generate-foreign-callback-header in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8135,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8138,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8143,tmp=(C_word)a,a+=2,tmp);
/* c-backend.scm:1148: pair-for-each */
t4=*((C_word*)lf[231]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k8130 in k8124 in k8121 in k8118 in k8115 in generate-foreign-callback-header in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_8132,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8135,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8174,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1147: foreign-type-declaration */
t5=*((C_word*)lf[202]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[659];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in a6056 in procedures in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_6100,2,av);}
a=C_alloc(22);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_6103,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t2,a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],tmp=(C_word)a,a+=22,tmp);
/* c-backend.scm:765: lambda-literal-direct */
t4=*((C_word*)lf[251]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4506 in k4503 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4508(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4508,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4511,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:460: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[225];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6101 in k6098 in k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in a6056 in procedures in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 in ... */
static void C_ccall f_6103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_6103,2,av);}
a=C_alloc(23);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_6106,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],tmp=(C_word)a,a+=23,tmp);
/* c-backend.scm:766: lambda-literal-rest-argument-mode */
t4=*((C_word*)lf[249]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4503 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4505(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4505,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4508,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:459: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k10105 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10107(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10107,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[329]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10113,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1344: ##sys#print */
t6=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[822];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8124 in k8121 in k8118 in k8115 in generate-foreign-callback-header in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_8126,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_i_length(t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8132,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:1146: make-argument-list */
t5=*((C_word*)lf[318]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[660];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k8121 in k8118 in k8115 in generate-foreign-callback-header in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_8123,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8126,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:1144: foreign-callback-stub-argument-types */
t4=*((C_word*)lf[656]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8118 in k8115 in generate-foreign-callback-header in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_8120,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8123,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:1143: foreign-callback-stub-return-type */
t4=*((C_word*)lf[657]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5687 in k5580 in literal-size in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_5689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5689,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_immp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
/* c-backend.scm:673: bomb */
t4=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[339];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5707,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:685: ##sys#bytevector? */
t3=*((C_word*)lf[341]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}}

/* k6890 in k6887 in emit-procedure-table in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6892,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6895,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:949: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[521];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6893 in k6890 in k6887 in emit-procedure-table in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6895,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6898,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:950: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[520];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k8145 in a8142 in k8133 in k8130 in k8124 in k8121 in k8118 in k8115 in generate-foreign-callback-header in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8147,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
/* c-backend.scm:1151: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=C_make_character(44);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* a8142 in k8133 in k8130 in k8124 in k8121 in k8118 in k8115 in generate-foreign-callback-header in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8143(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8143,4,av);}
a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8147,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8162,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_i_car(t3);
t7=C_i_car(t2);
/* c-backend.scm:1150: foreign-type-declaration */
t8=*((C_word*)lf[202]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t5;
av2[2]=t6;
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k6896 in k6893 in k6890 in k6887 in emit-procedure-table in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6898,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6901,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:951: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[519];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* emit-procedure-table in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6885,4,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6889,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6940,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:939: ##sys#hash-table-size */
t6=*((C_word*)lf[532]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6887 in emit-procedure-table in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6889,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6892,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6906,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:940: ##sys#hash-table-for-each */
t4=*((C_word*)lf[316]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k10926 in encode-literal in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_10928,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10932,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10934,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1441: list-tabulate */
t5=*((C_word*)lf[535]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k10918 in encode-literal in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10920,2,av);}
/* c-backend.scm:1437: string-intersperse */
t2=*((C_word*)lf[272]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[857];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k10141 in k10138 in k10135 in k10129 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10143,2,av);}
/* c-backend.scm:1345: get-output-string */
t2=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a6870 in k6775 in emit-debug-table in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6871,4,av);}
t4=C_i_car(t2);
t5=C_i_car(t3);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_i_lessp(t4,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k10138 in k10135 in k10129 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_10140,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10143,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1345: ##sys#write-char-0 */
t3=*((C_word*)lf[331]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(44);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4596 in k4593 in k4590 in k4587 in k4584 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4598,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4601,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_caddr(((C_word*)t0)[3]);
/* c-backend.scm:478: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k4593 in k4590 in k4587 in k4584 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4595,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4598,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:477: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(58);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k10135 in k10129 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10137,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10140,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1345: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10129 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10131(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10131,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[329]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10137,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1345: ##sys#print */
t6=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[823];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8115 in generate-foreign-callback-header in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8117,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8120,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1142: foreign-callback-stub-qualifiers */
t4=*((C_word*)lf[661]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4590 in k4587 in k4584 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4592,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4595,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:476: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k2539 in k2536 in k2533 */
static void C_ccall f_2541(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2541,2,av);}
a=C_alloc(10);
t2=C_set_block_item(lf[0] /* ##compiler#output */,0,C_SCHEME_FALSE);
t3=C_mutate2((C_word*)lf[1]+1 /* (set! ##compiler#gen ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2544,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate2((C_word*)lf[4]+1 /* (set! ##compiler#gen-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2587,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2626,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10958,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:57: open-output-string */
t7=*((C_word*)lf[334]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* ##compiler#gen in k2539 in k2536 in k2533 */
static void C_ccall f_2544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_2544,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2564,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_2564(t6,t1,t2);}

/* ##compiler#generate-foreign-callback-header in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_8113,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8117,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1141: foreign-callback-stub-name */
t5=*((C_word*)lf[662]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in a6056 in procedures in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_6091,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_6094,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=t2,a[18]=((C_word*)t0)[17],tmp=(C_word)a,a+=19,tmp);
if(C_truep(((C_word*)t0)[16])){
t4=C_i_cdr(((C_word*)t0)[18]);
/* c-backend.scm:762: intersperse */
t5=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=C_make_character(44);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* c-backend.scm:762: intersperse */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[18];
av2[3]=C_make_character(44);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k6095 in k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in a6056 in procedures in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_6097,2,av);}
a=C_alloc(21);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_6100,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=t2,a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],tmp=(C_word)a,a+=21,tmp);
/* c-backend.scm:764: lambda-literal-looping */
t4=*((C_word*)lf[108]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6092 in k6089 in k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in a6056 in procedures in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_6094,2,av);}
a=C_alloc(20);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_6097,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],tmp=(C_word)a,a+=20,tmp);
/* c-backend.scm:763: lambda-literal-external */
t4=*((C_word*)lf[482]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4240 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4242,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4245,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:401: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k4243 in k4240 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4245,2,av);}
/* c-backend.scm:402: gen */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[184];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8098 in for-each-loop1278 in generate-foreign-callback-stubs in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_8100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8100,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8090(t3,((C_word*)t0)[4],t2);}

/* k10117 in k10114 in k10111 in k10105 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10119,2,av);}
/* c-backend.scm:1344: get-output-string */
t2=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10114 in k10111 in k10105 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10116(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_10116,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1344: ##sys#write-char-0 */
t3=*((C_word*)lf[331]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(44);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in a6056 in procedures in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_6085,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_6088,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=t2,tmp=(C_word)a,a+=19,tmp);
/* c-backend.scm:760: make-argument-list */
t4=*((C_word*)lf[318]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[483];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k10111 in k10105 in k9973 in foreign-result-conversion in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_10113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10113,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10116,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1344: ##sys#print */
t3=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6086 in k6083 in k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in a6056 in procedures in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_6088,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_6091,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=t2,tmp=(C_word)a,a+=19,tmp);
if(C_truep(((C_word*)t0)[16])){
t4=C_i_cdr(((C_word*)t0)[18]);
/* c-backend.scm:761: intersperse */
t5=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=C_make_character(44);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* c-backend.scm:761: intersperse */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[18];
av2[3]=C_make_character(44);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k4295 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4297,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4300,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4309,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:417: gen */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_make_character(44);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* c-backend.scm:419: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(41);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k4587 in k4584 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4589,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4592,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:475: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[228];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4584 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4586,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4589,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:474: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2649(t4,t2,t3,((C_word*)t0)[5]);}

/* k10962 in k10956 in k2539 in k2536 in k2533 */
static void C_ccall f_10964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_10964,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10967,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10987,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10991,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:57: random */
t5=*((C_word*)lf[859]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_fix(16777216);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k6068 in k6065 in k6062 in k6059 in a6056 in procedures in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6070,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6073,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* c-backend.scm:755: lambda-literal-rest-argument */
t4=*((C_word*)lf[313]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6071 in k6068 in k6065 in k6062 in k6059 in a6056 in procedures in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_6073,2,av);}
a=C_alloc(17);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6076,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* c-backend.scm:756: lambda-literal-customizable */
t5=*((C_word*)lf[252]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2536 in k2533 */
static void C_ccall f_2538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2538,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2541,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in a6056 in procedures in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_6076,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6079,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6723,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:757: lambda-literal-closure-size */
t5=*((C_word*)lf[159]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t3;
f_6079(t4,C_SCHEME_FALSE);}}

/* k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in a6056 in procedures in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_fcall f_6079(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,0,3)))){
C_save_and_reclaim_args((void *)trf_6079,2,t0,t1);}
a=C_alloc(22);
t2=t1;
t3=(C_truep(t2)?C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1)):C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(0)));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_6085,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t4,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=t2,a[17]=((C_word*)t0)[15],tmp=(C_word)a,a+=18,tmp);
/* c-backend.scm:759: make-variable-list */
t6=*((C_word*)lf[314]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[484];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k4221 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4223,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4226,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:396: push-args */
t3=((C_word*)((C_word*)t0)[5])[1];
f_4733(t3,t2,((C_word*)t0)[6],((C_word*)t0)[7],lf[182]);}

/* k10965 in k10962 in k10956 in k2539 in k2536 in k2533 */
static void C_ccall f_10967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_10967,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10970,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:57: ##sys#write-char-0 */
t3=*((C_word*)lf[331]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(95);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2533 */
static void C_ccall f_2535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2535,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2538,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k4224 in k4221 in expr in expression in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_4226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4226,2,av);}
t2=C_i_car(((C_word*)t0)[2]);
/* c-backend.scm:397: gen */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_TRUE;
av2[3]=lf[179];
av2[4]=t2;
av2[5]=lf[180];
av2[6]=((C_word*)t0)[4];
av2[7]=lf[181];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k6059 in a6056 in procedures in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_6061,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6064,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:752: real-name */
t4=*((C_word*)lf[487]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6062 in k6059 in a6056 in procedures in k2630 in generate-code in k2624 in k2539 in k2536 in k2533 */
static void C_ccall f_6064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6064,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6067,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:753: lambda-literal-allocated */
t4=*((C_word*)lf[312]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[767] = {
{"f_6067:c_2dbackend_2escm",(void*)f_6067},
{"f_10958:c_2dbackend_2escm",(void*)f_10958},
{"f_10934:c_2dbackend_2escm",(void*)f_10934},
{"f_10932:c_2dbackend_2escm",(void*)f_10932},
{"f_5102:c_2dbackend_2escm",(void*)f_5102},
{"f_10991:c_2dbackend_2escm",(void*)f_10991},
{"f_8090:c_2dbackend_2escm",(void*)f_8090},
{"f_5112:c_2dbackend_2escm",(void*)f_5112},
{"f_5118:c_2dbackend_2escm",(void*)f_5118},
{"f_6446:c_2dbackend_2escm",(void*)f_6446},
{"f_8082:c_2dbackend_2escm",(void*)f_8082},
{"f_6430:c_2dbackend_2escm",(void*)f_6430},
{"f_6421:c_2dbackend_2escm",(void*)f_6421},
{"f_7433:c_2dbackend_2escm",(void*)f_7433},
{"f_7436:c_2dbackend_2escm",(void*)f_7436},
{"f_7443:c_2dbackend_2escm",(void*)f_7443},
{"f_4204:c_2dbackend_2escm",(void*)f_4204},
{"f_4200:c_2dbackend_2escm",(void*)f_4200},
{"f_7419:c_2dbackend_2escm",(void*)f_7419},
{"f_7409:c_2dbackend_2escm",(void*)f_7409},
{"f_7404:c_2dbackend_2escm",(void*)f_7404},
{"f_10378:c_2dbackend_2escm",(void*)f_10378},
{"f_10372:c_2dbackend_2escm",(void*)f_10372},
{"f_10375:c_2dbackend_2escm",(void*)f_10375},
{"f_2601:c_2dbackend_2escm",(void*)f_2601},
{"f_10366:c_2dbackend_2escm",(void*)f_10366},
{"f_3587:c_2dbackend_2escm",(void*)f_3587},
{"f_2628:c_2dbackend_2escm",(void*)f_2628},
{"f_2626:c_2dbackend_2escm",(void*)f_2626},
{"f_3984:c_2dbackend_2escm",(void*)f_3984},
{"f_8627:c_2dbackend_2escm",(void*)f_8627},
{"f_8629:c_2dbackend_2escm",(void*)f_8629},
{"f_4881:c_2dbackend_2escm",(void*)f_4881},
{"f_8654:c_2dbackend_2escm",(void*)f_8654},
{"f_3596:c_2dbackend_2escm",(void*)f_3596},
{"f_3593:c_2dbackend_2escm",(void*)f_3593},
{"f_3260:c_2dbackend_2escm",(void*)f_3260},
{"f_4899:c_2dbackend_2escm",(void*)f_4899},
{"f_3599:c_2dbackend_2escm",(void*)f_3599},
{"f_3439:c_2dbackend_2escm",(void*)f_3439},
{"f_3430:c_2dbackend_2escm",(void*)f_3430},
{"f_3256:c_2dbackend_2escm",(void*)f_3256},
{"f_4863:c_2dbackend_2escm",(void*)f_4863},
{"f_2611:c_2dbackend_2escm",(void*)f_2611},
{"f_4860:c_2dbackend_2escm",(void*)f_4860},
{"f_3466:c_2dbackend_2escm",(void*)f_3466},
{"f_3469:c_2dbackend_2escm",(void*)f_3469},
{"f_10396:c_2dbackend_2escm",(void*)f_10396},
{"f_10390:c_2dbackend_2escm",(void*)f_10390},
{"f_4264:c_2dbackend_2escm",(void*)f_4264},
{"f_10399:c_2dbackend_2escm",(void*)f_10399},
{"f_4261:c_2dbackend_2escm",(void*)f_4261},
{"f_4878:c_2dbackend_2escm",(void*)f_4878},
{"f_10643:c_2dbackend_2escm",(void*)f_10643},
{"f_2796:c_2dbackend_2escm",(void*)f_2796},
{"f_2799:c_2dbackend_2escm",(void*)f_2799},
{"f_4845:c_2dbackend_2escm",(void*)f_4845},
{"f_4848:c_2dbackend_2escm",(void*)f_4848},
{"f_10983:c_2dbackend_2escm",(void*)f_10983},
{"f_10987:c_2dbackend_2escm",(void*)f_10987},
{"f_10970:c_2dbackend_2escm",(void*)f_10970},
{"f_10973:c_2dbackend_2escm",(void*)f_10973},
{"f_10976:c_2dbackend_2escm",(void*)f_10976},
{"f_10979:c_2dbackend_2escm",(void*)f_10979},
{"f_8817:c_2dbackend_2escm",(void*)f_8817},
{"f_8601:c_2dbackend_2escm",(void*)f_8601},
{"f_8605:c_2dbackend_2escm",(void*)f_8605},
{"f_8819:c_2dbackend_2escm",(void*)f_8819},
{"f_8609:c_2dbackend_2escm",(void*)f_8609},
{"f_4820:c_2dbackend_2escm",(void*)f_4820},
{"f_4823:c_2dbackend_2escm",(void*)f_4823},
{"f11805:c_2dbackend_2escm",(void*)f11805},
{"f_5303:c_2dbackend_2escm",(void*)f_5303},
{"f_5300:c_2dbackend_2escm",(void*)f_5300},
{"f_4829:c_2dbackend_2escm",(void*)f_4829},
{"f_4826:c_2dbackend_2escm",(void*)f_4826},
{"f_10287:c_2dbackend_2escm",(void*)f_10287},
{"f_10284:c_2dbackend_2escm",(void*)f_10284},
{"f11817:c_2dbackend_2escm",(void*)f11817},
{"f11813:c_2dbackend_2escm",(void*)f11813},
{"f_5355:c_2dbackend_2escm",(void*)f_5355},
{"f_5352:c_2dbackend_2escm",(void*)f_5352},
{"f_5358:c_2dbackend_2escm",(void*)f_5358},
{"f_10278:c_2dbackend_2escm",(void*)f_10278},
{"f_4802:c_2dbackend_2escm",(void*)f_4802},
{"f_5324:c_2dbackend_2escm",(void*)f_5324},
{"f_5321:c_2dbackend_2escm",(void*)f_5321},
{"f_10266:c_2dbackend_2escm",(void*)f_10266},
{"f_10260:c_2dbackend_2escm",(void*)f_10260},
{"f_10263:c_2dbackend_2escm",(void*)f_10263},
{"f_4817:c_2dbackend_2escm",(void*)f_4817},
{"f_10254:c_2dbackend_2escm",(void*)f_10254},
{"f_3308:c_2dbackend_2escm",(void*)f_3308},
{"f_4189:c_2dbackend_2escm",(void*)f_4189},
{"f_10719:c_2dbackend_2escm",(void*)f_10719},
{"f_10652:c_2dbackend_2escm",(void*)f_10652},
{"f_8671:c_2dbackend_2escm",(void*)f_8671},
{"f_8678:c_2dbackend_2escm",(void*)f_8678},
{"f_4196:c_2dbackend_2escm",(void*)f_4196},
{"f_4127:c_2dbackend_2escm",(void*)f_4127},
{"f_5758:c_2dbackend_2escm",(void*)f_5758},
{"f_4121:c_2dbackend_2escm",(void*)f_4121},
{"f_4124:c_2dbackend_2escm",(void*)f_4124},
{"f_8695:c_2dbackend_2escm",(void*)f_8695},
{"f_4139:c_2dbackend_2escm",(void*)f_4139},
{"f_3312:c_2dbackend_2escm",(void*)f_3312},
{"f_5767:c_2dbackend_2escm",(void*)f_5767},
{"f_10290:c_2dbackend_2escm",(void*)f_10290},
{"f_8688:c_2dbackend_2escm",(void*)f_8688},
{"f_3342:c_2dbackend_2escm",(void*)f_3342},
{"f_9257:c_2dbackend_2escm",(void*)f_9257},
{"f_5774:c_2dbackend_2escm",(void*)f_5774},
{"f_5477:c_2dbackend_2escm",(void*)f_5477},
{"f_3339:c_2dbackend_2escm",(void*)f_3339},
{"f_9284:c_2dbackend_2escm",(void*)f_9284},
{"f_5707:c_2dbackend_2escm",(void*)f_5707},
{"f_4151:c_2dbackend_2escm",(void*)f_4151},
{"f_7145:c_2dbackend_2escm",(void*)f_7145},
{"f_5714:c_2dbackend_2escm",(void*)f_5714},
{"f_5492:c_2dbackend_2escm",(void*)f_5492},
{"f_5499:c_2dbackend_2escm",(void*)f_5499},
{"f_9227:c_2dbackend_2escm",(void*)f_9227},
{"f_9229:c_2dbackend_2escm",(void*)f_9229},
{"f_7158:c_2dbackend_2escm",(void*)f_7158},
{"f_5483:c_2dbackend_2escm",(void*)f_5483},
{"f_5486:c_2dbackend_2escm",(void*)f_5486},
{"f_5480:c_2dbackend_2escm",(void*)f_5480},
{"f_5489:c_2dbackend_2escm",(void*)f_5489},
{"f_2564:c_2dbackend_2escm",(void*)f_2564},
{"f_4109:c_2dbackend_2escm",(void*)f_4109},
{"f_7121:c_2dbackend_2escm",(void*)f_7121},
{"f_5736:c_2dbackend_2escm",(void*)f_5736},
{"f_7124:c_2dbackend_2escm",(void*)f_7124},
{"f_8844:c_2dbackend_2escm",(void*)f_8844},
{"f_3545:c_2dbackend_2escm",(void*)f_3545},
{"f_9860:c_2dbackend_2escm",(void*)f_9860},
{"f_9601:c_2dbackend_2escm",(void*)f_9601},
{"f_4118:c_2dbackend_2escm",(void*)f_4118},
{"f_4115:c_2dbackend_2escm",(void*)f_4115},
{"f_7135:c_2dbackend_2escm",(void*)f_7135},
{"f_4112:c_2dbackend_2escm",(void*)f_4112},
{"f_7102:c_2dbackend_2escm",(void*)f_7102},
{"f_8253:c_2dbackend_2escm",(void*)f_8253},
{"f_7115:c_2dbackend_2escm",(void*)f_7115},
{"f_2587:c_2dbackend_2escm",(void*)f_2587},
{"f_10335:c_2dbackend_2escm",(void*)f_10335},
{"f_10338:c_2dbackend_2escm",(void*)f_10338},
{"f_10332:c_2dbackend_2escm",(void*)f_10332},
{"f_2596:c_2dbackend_2escm",(void*)f_2596},
{"f_10326:c_2dbackend_2escm",(void*)f_10326},
{"f_10314:c_2dbackend_2escm",(void*)f_10314},
{"f_2574:c_2dbackend_2escm",(void*)f_2574},
{"f_10311:c_2dbackend_2escm",(void*)f_10311},
{"f_10302:c_2dbackend_2escm",(void*)f_10302},
{"f_10308:c_2dbackend_2escm",(void*)f_10308},
{"f_4752:c_2dbackend_2escm",(void*)f_4752},
{"f_7084:c_2dbackend_2escm",(void*)f_7084},
{"f_4749:c_2dbackend_2escm",(void*)f_4749},
{"f_4746:c_2dbackend_2escm",(void*)f_4746},
{"f_6773:c_2dbackend_2escm",(void*)f_6773},
{"f_4764:c_2dbackend_2escm",(void*)f_4764},
{"f_7092:c_2dbackend_2escm",(void*)f_7092},
{"f_4755:c_2dbackend_2escm",(void*)f_4755},
{"f_6761:c_2dbackend_2escm",(void*)f_6761},
{"f_6777:c_2dbackend_2escm",(void*)f_6777},
{"f_4774:c_2dbackend_2escm",(void*)f_4774},
{"f_7062:c_2dbackend_2escm",(void*)f_7062},
{"f_10741:c_2dbackend_2escm",(void*)f_10741},
{"f_9858:c_2dbackend_2escm",(void*)f_9858},
{"f_6755:c_2dbackend_2escm",(void*)f_6755},
{"f_6752:c_2dbackend_2escm",(void*)f_6752},
{"f_4780:c_2dbackend_2escm",(void*)f_4780},
{"f_4777:c_2dbackend_2escm",(void*)f_4777},
{"f_5575:c_2dbackend_2escm",(void*)f_5575},
{"f_6212:c_2dbackend_2escm",(void*)f_6212},
{"f_4710:c_2dbackend_2escm",(void*)f_4710},
{"f_4714:c_2dbackend_2escm",(void*)f_4714},
{"f_4463:c_2dbackend_2escm",(void*)f_4463},
{"f_4466:c_2dbackend_2escm",(void*)f_4466},
{"f_6730:c_2dbackend_2escm",(void*)f_6730},
{"f_6734:c_2dbackend_2escm",(void*)f_6734},
{"f_6241:c_2dbackend_2escm",(void*)f_6241},
{"f_6737:c_2dbackend_2escm",(void*)f_6737},
{"f_6244:c_2dbackend_2escm",(void*)f_6244},
{"f_4433:c_2dbackend_2escm",(void*)f_4433},
{"f_10242:c_2dbackend_2escm",(void*)f_10242},
{"f_5638:c_2dbackend_2escm",(void*)f_5638},
{"f_6723:c_2dbackend_2escm",(void*)f_6723},
{"f_6727:c_2dbackend_2escm",(void*)f_6727},
{"f_4733:c_2dbackend_2escm",(void*)f_4733},
{"f_3417:c_2dbackend_2escm",(void*)f_3417},
{"f_4441:c_2dbackend_2escm",(void*)f_4441},
{"f_10239:c_2dbackend_2escm",(void*)f_10239},
{"f_10236:c_2dbackend_2escm",(void*)f_10236},
{"f_10230:c_2dbackend_2escm",(void*)f_10230},
{"f_3657:c_2dbackend_2escm",(void*)f_3657},
{"f_4743:c_2dbackend_2escm",(void*)f_4743},
{"f_3442:c_2dbackend_2escm",(void*)f_3442},
{"f_6226:c_2dbackend_2escm",(void*)f_6226},
{"f_6782:c_2dbackend_2escm",(void*)f_6782},
{"f_3644:c_2dbackend_2escm",(void*)f_3644},
{"f_5650:c_2dbackend_2escm",(void*)f_5650},
{"f_3641:c_2dbackend_2escm",(void*)f_3641},
{"f_10215:c_2dbackend_2escm",(void*)f_10215},
{"f_3638:c_2dbackend_2escm",(void*)f_3638},
{"f_6202:c_2dbackend_2escm",(void*)f_6202},
{"f_3426:c_2dbackend_2escm",(void*)f_3426},
{"f_3423:c_2dbackend_2escm",(void*)f_3423},
{"f_3420:c_2dbackend_2escm",(void*)f_3420},
{"f_5582:c_2dbackend_2escm",(void*)f_5582},
{"f_3791:c_2dbackend_2escm",(void*)f_3791},
{"f_3797:c_2dbackend_2escm",(void*)f_3797},
{"f_4704:c_2dbackend_2escm",(void*)f_4704},
{"f_6746:c_2dbackend_2escm",(void*)f_6746},
{"f_6743:c_2dbackend_2escm",(void*)f_6743},
{"f_6740:c_2dbackend_2escm",(void*)f_6740},
{"f_6758:c_2dbackend_2escm",(void*)f_6758},
{"f_6749:c_2dbackend_2escm",(void*)f_6749},
{"f_6566:c_2dbackend_2escm",(void*)f_6566},
{"f_5297:c_2dbackend_2escm",(void*)f_5297},
{"f_5291:c_2dbackend_2escm",(void*)f_5291},
{"f_5294:c_2dbackend_2escm",(void*)f_5294},
{"f_7982:c_2dbackend_2escm",(void*)f_7982},
{"f_7985:c_2dbackend_2escm",(void*)f_7985},
{"f_6592:c_2dbackend_2escm",(void*)f_6592},
{"f_5285:c_2dbackend_2escm",(void*)f_5285},
{"f_6791:c_2dbackend_2escm",(void*)f_6791},
{"f_5288:c_2dbackend_2escm",(void*)f_5288},
{"f_6795:c_2dbackend_2escm",(void*)f_6795},
{"f_5282:c_2dbackend_2escm",(void*)f_5282},
{"f_7994:c_2dbackend_2escm",(void*)f_7994},
{"f_7997:c_2dbackend_2escm",(void*)f_7997},
{"f_5232:c_2dbackend_2escm",(void*)f_5232},
{"f_3782:c_2dbackend_2escm",(void*)f_3782},
{"f_3785:c_2dbackend_2escm",(void*)f_3785},
{"f_3788:c_2dbackend_2escm",(void*)f_3788},
{"f_6529:c_2dbackend_2escm",(void*)f_6529},
{"f_5222:c_2dbackend_2escm",(void*)f_5222},
{"f_7970:c_2dbackend_2escm",(void*)f_7970},
{"f_7979:c_2dbackend_2escm",(void*)f_7979},
{"f_7976:c_2dbackend_2escm",(void*)f_7976},
{"f_7973:c_2dbackend_2escm",(void*)f_7973},
{"f_5254:c_2dbackend_2escm",(void*)f_5254},
{"f_5258:c_2dbackend_2escm",(void*)f_5258},
{"f_7182:c_2dbackend_2escm",(void*)f_7182},
{"f_7185:c_2dbackend_2escm",(void*)f_7185},
{"f_7188:c_2dbackend_2escm",(void*)f_7188},
{"f_6554:c_2dbackend_2escm",(void*)f_6554},
{"f_6556:c_2dbackend_2escm",(void*)f_6556},
{"f_5245:c_2dbackend_2escm",(void*)f_5245},
{"f_5249:c_2dbackend_2escm",(void*)f_5249},
{"f_7191:c_2dbackend_2escm",(void*)f_7191},
{"f_7197:c_2dbackend_2escm",(void*)f_7197},
{"f_7194:c_2dbackend_2escm",(void*)f_7194},
{"f_3874:c_2dbackend_2escm",(void*)f_3874},
{"f_7160:c_2dbackend_2escm",(void*)f_7160},
{"f_7164:c_2dbackend_2escm",(void*)f_7164},
{"f_7167:c_2dbackend_2escm",(void*)f_7167},
{"f_8176:c_2dbackend_2escm",(void*)f_8176},
{"f_8174:c_2dbackend_2escm",(void*)f_8174},
{"f_8178:c_2dbackend_2escm",(void*)f_8178},
{"f_7170:c_2dbackend_2escm",(void*)f_7170},
{"f_7176:c_2dbackend_2escm",(void*)f_7176},
{"f_7179:c_2dbackend_2escm",(void*)f_7179},
{"f_8162:c_2dbackend_2escm",(void*)f_8162},
{"f_6539:c_2dbackend_2escm",(void*)f_6539},
{"f_8183:c_2dbackend_2escm",(void*)f_8183},
{"f_3500:c_2dbackend_2escm",(void*)f_3500},
{"f_6515:c_2dbackend_2escm",(void*)f_6515},
{"f_3555:c_2dbackend_2escm",(void*)f_3555},
{"f_3815:c_2dbackend_2escm",(void*)f_3815},
{"f_3810:c_2dbackend_2escm",(void*)f_3810},
{"f_3508:c_2dbackend_2escm",(void*)f_3508},
{"f_3014:c_2dbackend_2escm",(void*)f_3014},
{"f_3011:c_2dbackend_2escm",(void*)f_3011},
{"f_3017:c_2dbackend_2escm",(void*)f_3017},
{"f_10041:c_2dbackend_2escm",(void*)f_10041},
{"f_8517:c_2dbackend_2escm",(void*)f_8517},
{"f_5279:c_2dbackend_2escm",(void*)f_5279},
{"f_3077:c_2dbackend_2escm",(void*)f_3077},
{"f_5276:c_2dbackend_2escm",(void*)f_5276},
{"f_5273:c_2dbackend_2escm",(void*)f_5273},
{"f_5270:c_2dbackend_2escm",(void*)f_5270},
{"f_7305:c_2dbackend_2escm",(void*)f_7305},
{"f_7302:c_2dbackend_2escm",(void*)f_7302},
{"f_10056:c_2dbackend_2escm",(void*)f_10056},
{"f_8502:c_2dbackend_2escm",(void*)f_8502},
{"f_5267:c_2dbackend_2escm",(void*)f_5267},
{"f_5264:c_2dbackend_2escm",(void*)f_5264},
{"f_5261:c_2dbackend_2escm",(void*)f_5261},
{"f_3518:c_2dbackend_2escm",(void*)f_3518},
{"f_6506:c_2dbackend_2escm",(void*)f_6506},
{"f_8521:c_2dbackend_2escm",(void*)f_8521},
{"f_10089:c_2dbackend_2escm",(void*)f_10089},
{"f_10086:c_2dbackend_2escm",(void*)f_10086},
{"f_10080:c_2dbackend_2escm",(void*)f_10080},
{"f_4333:c_2dbackend_2escm",(void*)f_4333},
{"f_10092:c_2dbackend_2escm",(void*)f_10092},
{"f_3494:c_2dbackend_2escm",(void*)f_3494},
{"f_3497:c_2dbackend_2escm",(void*)f_3497},
{"f_4351:c_2dbackend_2escm",(void*)f_4351},
{"f_4354:c_2dbackend_2escm",(void*)f_4354},
{"f_3723:c_2dbackend_2escm",(void*)f_3723},
{"f_6412:c_2dbackend_2escm",(void*)f_6412},
{"f_6415:c_2dbackend_2escm",(void*)f_6415},
{"f_3473:c_2dbackend_2escm",(void*)f_3473},
{"f_3472:c_2dbackend_2escm",(void*)f_3472},
{"f_3477:c_2dbackend_2escm",(void*)f_3477},
{"f_6418:c_2dbackend_2escm",(void*)f_6418},
{"f_3148:c_2dbackend_2escm",(void*)f_3148},
{"f_3716:c_2dbackend_2escm",(void*)f_3716},
{"f_3892:c_2dbackend_2escm",(void*)f_3892},
{"f_7293:c_2dbackend_2escm",(void*)f_7293},
{"f_7296:c_2dbackend_2escm",(void*)f_7296},
{"f_7299:c_2dbackend_2escm",(void*)f_7299},
{"f_7260:c_2dbackend_2escm",(void*)f_7260},
{"f_3881:c_2dbackend_2escm",(void*)f_3881},
{"f_3888:c_2dbackend_2escm",(void*)f_3888},
{"f_7266:c_2dbackend_2escm",(void*)f_7266},
{"f_7263:c_2dbackend_2escm",(void*)f_7263},
{"f_3736:c_2dbackend_2escm",(void*)f_3736},
{"f_3486:c_2dbackend_2escm",(void*)f_3486},
{"f_3480:c_2dbackend_2escm",(void*)f_3480},
{"f_10029:c_2dbackend_2escm",(void*)f_10029},
{"f_8490:c_2dbackend_2escm",(void*)f_8490},
{"f_7272:c_2dbackend_2escm",(void*)f_7272},
{"f_7275:c_2dbackend_2escm",(void*)f_7275},
{"f_10035:c_2dbackend_2escm",(void*)f_10035},
{"f_10038:c_2dbackend_2escm",(void*)f_10038},
{"f_3958:c_2dbackend_2escm",(void*)f_3958},
{"f_3952:c_2dbackend_2escm",(void*)f_3952},
{"f_7245:c_2dbackend_2escm",(void*)f_7245},
{"f_7248:c_2dbackend_2escm",(void*)f_7248},
{"f_10002:c_2dbackend_2escm",(void*)f_10002},
{"f_10008:c_2dbackend_2escm",(void*)f_10008},
{"f_3949:c_2dbackend_2escm",(void*)f_3949},
{"f_3945:c_2dbackend_2escm",(void*)f_3945},
{"f_3138:c_2dbackend_2escm",(void*)f_3138},
{"f_3941:c_2dbackend_2escm",(void*)f_3941},
{"f_3944:c_2dbackend_2escm",(void*)f_3944},
{"f_7254:c_2dbackend_2escm",(void*)f_7254},
{"f_10011:c_2dbackend_2escm",(void*)f_10011},
{"f_4422:c_2dbackend_2escm",(void*)f_4422},
{"f_10014:c_2dbackend_2escm",(void*)f_10014},
{"f_3123:c_2dbackend_2escm",(void*)f_3123},
{"f_3129:c_2dbackend_2escm",(void*)f_3129},
{"f_3974:c_2dbackend_2escm",(void*)f_3974},
{"f_10062:c_2dbackend_2escm",(void*)f_10062},
{"f_10068:c_2dbackend_2escm",(void*)f_10068},
{"f_10065:c_2dbackend_2escm",(void*)f_10065},
{"f_4984:c_2dbackend_2escm",(void*)f_4984},
{"f_4988:c_2dbackend_2escm",(void*)f_4988},
{"f_3969:c_2dbackend_2escm",(void*)f_3969},
{"f_3966:c_2dbackend_2escm",(void*)f_3966},
{"f_4980:c_2dbackend_2escm",(void*)f_4980},
{"f_4401:c_2dbackend_2escm",(void*)f_4401},
{"f_5433:c_2dbackend_2escm",(void*)f_5433},
{"f_4996:c_2dbackend_2escm",(void*)f_4996},
{"f_5645:c_2dbackend_2escm",(void*)f_5645},
{"f_3617:c_2dbackend_2escm",(void*)f_3617},
{"f_5648:c_2dbackend_2escm",(void*)f_5648},
{"f_3614:c_2dbackend_2escm",(void*)f_3614},
{"f_3611:c_2dbackend_2escm",(void*)f_3611},
{"f_4992:c_2dbackend_2escm",(void*)f_4992},
{"f_5449:c_2dbackend_2escm",(void*)f_5449},
{"f_5617:c_2dbackend_2escm",(void*)f_5617},
{"f_3608:c_2dbackend_2escm",(void*)f_3608},
{"f_5613:c_2dbackend_2escm",(void*)f_5613},
{"f_5453:c_2dbackend_2escm",(void*)f_5453},
{"f_5459:c_2dbackend_2escm",(void*)f_5459},
{"f_5456:c_2dbackend_2escm",(void*)f_5456},
{"f_4949:c_2dbackend_2escm",(void*)f_4949},
{"f_5465:c_2dbackend_2escm",(void*)f_5465},
{"f_5462:c_2dbackend_2escm",(void*)f_5462},
{"f_3114:c_2dbackend_2escm",(void*)f_3114},
{"f_5468:c_2dbackend_2escm",(void*)f_5468},
{"f_3110:c_2dbackend_2escm",(void*)f_3110},
{"f_3663:c_2dbackend_2escm",(void*)f_3663},
{"f_6951:c_2dbackend_2escm",(void*)f_6951},
{"f_5780:c_2dbackend_2escm",(void*)f_5780},
{"f_3185:c_2dbackend_2escm",(void*)f_3185},
{"f_3182:c_2dbackend_2escm",(void*)f_3182},
{"f_6940:c_2dbackend_2escm",(void*)f_6940},
{"f_6942:c_2dbackend_2escm",(void*)f_6942},
{"f_4413:c_2dbackend_2escm",(void*)f_4413},
{"f_4969:c_2dbackend_2escm",(void*)f_4969},
{"f_4419:c_2dbackend_2escm",(void*)f_4419},
{"f_4416:c_2dbackend_2escm",(void*)f_4416},
{"f_6932:c_2dbackend_2escm",(void*)f_6932},
{"f_5377:c_2dbackend_2escm",(void*)f_5377},
{"f_6051:c_2dbackend_2escm",(void*)f_6051},
{"f_6057:c_2dbackend_2escm",(void*)f_6057},
{"f_4908:c_2dbackend_2escm",(void*)f_4908},
{"f_5374:c_2dbackend_2escm",(void*)f_5374},
{"f_6910:c_2dbackend_2escm",(void*)f_6910},
{"f_3627:c_2dbackend_2escm",(void*)f_3627},
{"f_4905:c_2dbackend_2escm",(void*)f_4905},
{"f_4902:c_2dbackend_2escm",(void*)f_4902},
{"f_4489:c_2dbackend_2escm",(void*)f_4489},
{"f_4486:c_2dbackend_2escm",(void*)f_4486},
{"f_4917:c_2dbackend_2escm",(void*)f_4917},
{"f_6901:c_2dbackend_2escm",(void*)f_6901},
{"f_6906:c_2dbackend_2escm",(void*)f_6906},
{"f_4911:c_2dbackend_2escm",(void*)f_4911},
{"f_4914:c_2dbackend_2escm",(void*)f_4914},
{"f_4929:c_2dbackend_2escm",(void*)f_4929},
{"f_6373:c_2dbackend_2escm",(void*)f_6373},
{"f_6376:c_2dbackend_2escm",(void*)f_6376},
{"f_7048:c_2dbackend_2escm",(void*)f_7048},
{"f_6388:c_2dbackend_2escm",(void*)f_6388},
{"f_7042:c_2dbackend_2escm",(void*)f_7042},
{"f_7040:c_2dbackend_2escm",(void*)f_7040},
{"f_4939:c_2dbackend_2escm",(void*)f_4939},
{"f_5380:c_2dbackend_2escm",(void*)f_5380},
{"f_7058:c_2dbackend_2escm",(void*)f_7058},
{"f_7056:c_2dbackend_2escm",(void*)f_7056},
{"f_6379:c_2dbackend_2escm",(void*)f_6379},
{"f_7026:c_2dbackend_2escm",(void*)f_7026},
{"f_6367:c_2dbackend_2escm",(void*)f_6367},
{"f_8033:c_2dbackend_2escm",(void*)f_8033},
{"f_8031:c_2dbackend_2escm",(void*)f_8031},
{"f_3117:c_2dbackend_2escm",(void*)f_3117},
{"f_6342:c_2dbackend_2escm",(void*)f_6342},
{"f_9978:c_2dbackend_2escm",(void*)f_9978},
{"f_9975:c_2dbackend_2escm",(void*)f_9975},
{"f_10402:c_2dbackend_2escm",(void*)f_10402},
{"f_6359:c_2dbackend_2escm",(void*)f_6359},
{"f_7032:c_2dbackend_2escm",(void*)f_7032},
{"f_7352:c_2dbackend_2escm",(void*)f_7352},
{"f_3109:c_2dbackend_2escm",(void*)f_3109},
{"f_7359:c_2dbackend_2escm",(void*)f_7359},
{"f_5394:c_2dbackend_2escm",(void*)f_5394},
{"f_6331:c_2dbackend_2escm",(void*)f_6331},
{"f_9963:c_2dbackend_2escm",(void*)f_9963},
{"f_9960:c_2dbackend_2escm",(void*)f_9960},
{"f_8361:c_2dbackend_2escm",(void*)f_8361},
{"f_7362:c_2dbackend_2escm",(void*)f_7362},
{"f_8043:c_2dbackend_2escm",(void*)f_8043},
{"f_7334:c_2dbackend_2escm",(void*)f_7334},
{"f_7330:c_2dbackend_2escm",(void*)f_7330},
{"f_6989:c_2dbackend_2escm",(void*)f_6989},
{"f_8382:c_2dbackend_2escm",(void*)f_8382},
{"f_9936:c_2dbackend_2escm",(void*)f_9936},
{"f_9939:c_2dbackend_2escm",(void*)f_9939},
{"f_6979:c_2dbackend_2escm",(void*)f_6979},
{"f_9933:c_2dbackend_2escm",(void*)f_9933},
{"f_5057:c_2dbackend_2escm",(void*)f_5057},
{"f_9927:c_2dbackend_2escm",(void*)f_9927},
{"f_2811:c_2dbackend_2escm",(void*)f_2811},
{"f_8012:c_2dbackend_2escm",(void*)f_8012},
{"f_5049:c_2dbackend_2escm",(void*)f_5049},
{"f_10426:c_2dbackend_2escm",(void*)f_10426},
{"f_10423:c_2dbackend_2escm",(void*)f_10423},
{"f_10420:c_2dbackend_2escm",(void*)f_10420},
{"f_9990:c_2dbackend_2escm",(void*)f_9990},
{"f_8006:c_2dbackend_2escm",(void*)f_8006},
{"f_8009:c_2dbackend_2escm",(void*)f_8009},
{"f_8000:c_2dbackend_2escm",(void*)f_8000},
{"f_8003:c_2dbackend_2escm",(void*)f_8003},
{"f_5071:c_2dbackend_2escm",(void*)f_5071},
{"f_5073:c_2dbackend_2escm",(void*)f_5073},
{"f_10414:c_2dbackend_2escm",(void*)f_10414},
{"f_9984:c_2dbackend_2escm",(void*)f_9984},
{"f_9987:c_2dbackend_2escm",(void*)f_9987},
{"f_5067:c_2dbackend_2escm",(void*)f_5067},
{"f_9957:c_2dbackend_2escm",(void*)f_9957},
{"f_6602:c_2dbackend_2escm",(void*)f_6602},
{"f_9951:c_2dbackend_2escm",(void*)f_9951},
{"f_5038:c_2dbackend_2escm",(void*)f_5038},
{"f_6675:c_2dbackend_2escm",(void*)f_6675},
{"f_6678:c_2dbackend_2escm",(void*)f_6678},
{"f_7604:c_2dbackend_2escm",(void*)f_7604},
{"toplevel:c_2dbackend_2escm",(void*)C_backend_toplevel},
{"f_3297:c_2dbackend_2escm",(void*)f_3297},
{"f_3294:c_2dbackend_2escm",(void*)f_3294},
{"f_3291:c_2dbackend_2escm",(void*)f_3291},
{"f_4367:c_2dbackend_2escm",(void*)f_4367},
{"f_4300:c_2dbackend_2escm",(void*)f_4300},
{"f_6310:c_2dbackend_2escm",(void*)f_6310},
{"f_6313:c_2dbackend_2escm",(void*)f_6313},
{"f_6328:c_2dbackend_2escm",(void*)f_6328},
{"f_4309:c_2dbackend_2escm",(void*)f_4309},
{"f_6304:c_2dbackend_2escm",(void*)f_6304},
{"f_6300:c_2dbackend_2escm",(void*)f_6300},
{"f_3766:c_2dbackend_2escm",(void*)f_3766},
{"f_7549:c_2dbackend_2escm",(void*)f_7549},
{"f_3762:c_2dbackend_2escm",(void*)f_3762},
{"f_6319:c_2dbackend_2escm",(void*)f_6319},
{"f_6316:c_2dbackend_2escm",(void*)f_6316},
{"f_5552:c_2dbackend_2escm",(void*)f_5552},
{"f_5558:c_2dbackend_2escm",(void*)f_5558},
{"f_3755:c_2dbackend_2escm",(void*)f_3755},
{"f_6307:c_2dbackend_2escm",(void*)f_6307},
{"f_6625:c_2dbackend_2escm",(void*)f_6625},
{"f_6628:c_2dbackend_2escm",(void*)f_6628},
{"f_5564:c_2dbackend_2escm",(void*)f_5564},
{"f_5567:c_2dbackend_2escm",(void*)f_5567},
{"f_5097:c_2dbackend_2escm",(void*)f_5097},
{"f_5094:c_2dbackend_2escm",(void*)f_5094},
{"f_5561:c_2dbackend_2escm",(void*)f_5561},
{"f_5091:c_2dbackend_2escm",(void*)f_5091},
{"f_3709:c_2dbackend_2escm",(void*)f_3709},
{"f_7528:c_2dbackend_2escm",(void*)f_7528},
{"f_6692:c_2dbackend_2escm",(void*)f_6692},
{"f_5080:c_2dbackend_2escm",(void*)f_5080},
{"f_3779:c_2dbackend_2escm",(void*)f_3779},
{"f_3776:c_2dbackend_2escm",(void*)f_3776},
{"f_3773:c_2dbackend_2escm",(void*)f_3773},
{"f_7537:c_2dbackend_2escm",(void*)f_7537},
{"f_5152:c_2dbackend_2escm",(void*)f_5152},
{"f_7507:c_2dbackend_2escm",(void*)f_7507},
{"f_7504:c_2dbackend_2escm",(void*)f_7504},
{"f_7501:c_2dbackend_2escm",(void*)f_7501},
{"f_5142:c_2dbackend_2escm",(void*)f_5142},
{"f_5121:c_2dbackend_2escm",(void*)f_5121},
{"f_3214:c_2dbackend_2escm",(void*)f_3214},
{"f_4371:c_2dbackend_2escm",(void*)f_4371},
{"f_3748:c_2dbackend_2escm",(void*)f_3748},
{"f_3740:c_2dbackend_2escm",(void*)f_3740},
{"f_6656:c_2dbackend_2escm",(void*)f_6656},
{"f_6653:c_2dbackend_2escm",(void*)f_6653},
{"f_6659:c_2dbackend_2escm",(void*)f_6659},
{"f_5124:c_2dbackend_2escm",(void*)f_5124},
{"f_5127:c_2dbackend_2escm",(void*)f_5127},
{"f_4383:c_2dbackend_2escm",(void*)f_4383},
{"f_4386:c_2dbackend_2escm",(void*)f_4386},
{"f_3692:c_2dbackend_2escm",(void*)f_3692},
{"f_6271:c_2dbackend_2escm",(void*)f_6271},
{"f_3699:c_2dbackend_2escm",(void*)f_3699},
{"f_4535:c_2dbackend_2escm",(void*)f_4535},
{"f_4532:c_2dbackend_2escm",(void*)f_4532},
{"f_7461:c_2dbackend_2escm",(void*)f_7461},
{"f_4397:c_2dbackend_2escm",(void*)f_4397},
{"f_3683:c_2dbackend_2escm",(void*)f_3683},
{"f_3686:c_2dbackend_2escm",(void*)f_3686},
{"f_3689:c_2dbackend_2escm",(void*)f_3689},
{"f_5408:c_2dbackend_2escm",(void*)f_5408},
{"f_8722:c_2dbackend_2escm",(void*)f_8722},
{"f_8729:c_2dbackend_2escm",(void*)f_8729},
{"f_4551:c_2dbackend_2escm",(void*)f_4551},
{"f_4554:c_2dbackend_2escm",(void*)f_4554},
{"f_5410:c_2dbackend_2escm",(void*)f_5410},
{"f_8756:c_2dbackend_2escm",(void*)f_8756},
{"f_5423:c_2dbackend_2escm",(void*)f_5423},
{"f_7495:c_2dbackend_2escm",(void*)f_7495},
{"f_7497:c_2dbackend_2escm",(void*)f_7497},
{"f_8746:c_2dbackend_2escm",(void*)f_8746},
{"f_4069:c_2dbackend_2escm",(void*)f_4069},
{"f_8773:c_2dbackend_2escm",(void*)f_8773},
{"f_6261:c_2dbackend_2escm",(void*)f_6261},
{"f_7472:c_2dbackend_2escm",(void*)f_7472},
{"f_5992:c_2dbackend_2escm",(void*)f_5992},
{"f_5995:c_2dbackend_2escm",(void*)f_5995},
{"f_7482:c_2dbackend_2escm",(void*)f_7482},
{"f_5866:c_2dbackend_2escm",(void*)f_5866},
{"f_5863:c_2dbackend_2escm",(void*)f_5863},
{"f_8712:c_2dbackend_2escm",(void*)f_8712},
{"f_4053:c_2dbackend_2escm",(void*)f_4053},
{"f_5985:c_2dbackend_2escm",(void*)f_5985},
{"f_4059:c_2dbackend_2escm",(void*)f_4059},
{"f_4056:c_2dbackend_2escm",(void*)f_4056},
{"f_5869:c_2dbackend_2escm",(void*)f_5869},
{"f_7451:c_2dbackend_2escm",(void*)f_7451},
{"f_5876:c_2dbackend_2escm",(void*)f_5876},
{"f_8705:c_2dbackend_2escm",(void*)f_8705},
{"f_4021:c_2dbackend_2escm",(void*)f_4021},
{"f_4601:c_2dbackend_2escm",(void*)f_4601},
{"f_8739:c_2dbackend_2escm",(void*)f_8739},
{"f_7225:c_2dbackend_2escm",(void*)f_7225},
{"f_7229:c_2dbackend_2escm",(void*)f_7229},
{"f_7221:c_2dbackend_2escm",(void*)f_7221},
{"f_7233:c_2dbackend_2escm",(void*)f_7233},
{"f_7239:c_2dbackend_2escm",(void*)f_7239},
{"f_5836:c_2dbackend_2escm",(void*)f_5836},
{"f_5830:c_2dbackend_2escm",(void*)f_5830},
{"f_7209:c_2dbackend_2escm",(void*)f_7209},
{"f_7206:c_2dbackend_2escm",(void*)f_7206},
{"f_7203:c_2dbackend_2escm",(void*)f_7203},
{"f_7200:c_2dbackend_2escm",(void*)f_7200},
{"f_7212:c_2dbackend_2escm",(void*)f_7212},
{"f_8763:c_2dbackend_2escm",(void*)f_8763},
{"f_8796:c_2dbackend_2escm",(void*)f_8796},
{"f_8792:c_2dbackend_2escm",(void*)f_8792},
{"f_10188:c_2dbackend_2escm",(void*)f_10188},
{"f_2854:c_2dbackend_2escm",(void*)f_2854},
{"f_10167:c_2dbackend_2escm",(void*)f_10167},
{"f_10161:c_2dbackend_2escm",(void*)f_10161},
{"f_4093:c_2dbackend_2escm",(void*)f_4093},
{"f_10164:c_2dbackend_2escm",(void*)f_10164},
{"f_2867:c_2dbackend_2escm",(void*)f_2867},
{"f_2864:c_2dbackend_2escm",(void*)f_2864},
{"f_4099:c_2dbackend_2escm",(void*)f_4099},
{"f_10155:c_2dbackend_2escm",(void*)f_10155},
{"f_2870:c_2dbackend_2escm",(void*)f_2870},
{"f_2808:c_2dbackend_2escm",(void*)f_2808},
{"f_8594:c_2dbackend_2escm",(void*)f_8594},
{"f_3374:c_2dbackend_2escm",(void*)f_3374},
{"f_3020:c_2dbackend_2escm",(void*)f_3020},
{"f_2805:c_2dbackend_2escm",(void*)f_2805},
{"f_2802:c_2dbackend_2escm",(void*)f_2802},
{"f_3378:c_2dbackend_2escm",(void*)f_3378},
{"f_8588:c_2dbackend_2escm",(void*)f_8588},
{"f_3086:c_2dbackend_2escm",(void*)f_3086},
{"f_3083:c_2dbackend_2escm",(void*)f_3083},
{"f_3080:c_2dbackend_2escm",(void*)f_3080},
{"f_7516:c_2dbackend_2escm",(void*)f_7516},
{"f_7518:c_2dbackend_2escm",(void*)f_7518},
{"f_7510:c_2dbackend_2escm",(void*)f_7510},
{"f_10192:c_2dbackend_2escm",(void*)f_10192},
{"f_2981:c_2dbackend_2escm",(void*)f_2981},
{"f_2984:c_2dbackend_2escm",(void*)f_2984},
{"f_2987:c_2dbackend_2escm",(void*)f_2987},
{"f_7561:c_2dbackend_2escm",(void*)f_7561},
{"f_7567:c_2dbackend_2escm",(void*)f_7567},
{"f_7571:c_2dbackend_2escm",(void*)f_7571},
{"f_5179:c_2dbackend_2escm",(void*)f_5179},
{"f_9524:c_2dbackend_2escm",(void*)f_9524},
{"f_3054:c_2dbackend_2escm",(void*)f_3054},
{"f_3057:c_2dbackend_2escm",(void*)f_3057},
{"f_3051:c_2dbackend_2escm",(void*)f_3051},
{"f_2962:c_2dbackend_2escm",(void*)f_2962},
{"f_5169:c_2dbackend_2escm",(void*)f_5169},
{"f_2646:c_2dbackend_2escm",(void*)f_2646},
{"f_2649:c_2dbackend_2escm",(void*)f_2649},
{"f_8571:c_2dbackend_2escm",(void*)f_8571},
{"f_3048:c_2dbackend_2escm",(void*)f_3048},
{"f_8577:c_2dbackend_2escm",(void*)f_8577},
{"f_4011:c_2dbackend_2escm",(void*)f_4011},
{"f_2978:c_2dbackend_2escm",(void*)f_2978},
{"f_5506:c_2dbackend_2escm",(void*)f_5506},
{"f_8560:c_2dbackend_2escm",(void*)f_8560},
{"f_5519:c_2dbackend_2escm",(void*)f_5519},
{"f_5517:c_2dbackend_2escm",(void*)f_5517},
{"f_6193:c_2dbackend_2escm",(void*)f_6193},
{"f_6190:c_2dbackend_2escm",(void*)f_6190},
{"f_2959:c_2dbackend_2escm",(void*)f_2959},
{"f_5525:c_2dbackend_2escm",(void*)f_5525},
{"f_5008:c_2dbackend_2escm",(void*)f_5008},
{"f_6184:c_2dbackend_2escm",(void*)f_6184},
{"f_2638:c_2dbackend_2escm",(void*)f_2638},
{"f_2632:c_2dbackend_2escm",(void*)f_2632},
{"f_2634:c_2dbackend_2escm",(void*)f_2634},
{"f_5535:c_2dbackend_2escm",(void*)f_5535},
{"f_9497:c_2dbackend_2escm",(void*)f_9497},
{"f_6171:c_2dbackend_2escm",(void*)f_6171},
{"f_6858:c_2dbackend_2escm",(void*)f_6858},
{"f_9488:c_2dbackend_2escm",(void*)f_9488},
{"f_2935:c_2dbackend_2escm",(void*)f_2935},
{"f_2932:c_2dbackend_2escm",(void*)f_2932},
{"f_6843:c_2dbackend_2escm",(void*)f_6843},
{"f_6160:c_2dbackend_2escm",(void*)f_6160},
{"f_6848:c_2dbackend_2escm",(void*)f_6848},
{"f_6164:c_2dbackend_2escm",(void*)f_6164},
{"f_2906:c_2dbackend_2escm",(void*)f_2906},
{"f_2909:c_2dbackend_2escm",(void*)f_2909},
{"f_5947:c_2dbackend_2escm",(void*)f_5947},
{"f_5940:c_2dbackend_2escm",(void*)f_5940},
{"f_6837:c_2dbackend_2escm",(void*)f_6837},
{"f_2912:c_2dbackend_2escm",(void*)f_2912},
{"f_5951:c_2dbackend_2escm",(void*)f_5951},
{"f_3363:c_2dbackend_2escm",(void*)f_3363},
{"f_3360:c_2dbackend_2escm",(void*)f_3360},
{"f_5675:c_2dbackend_2escm",(void*)f_5675},
{"f_5960:c_2dbackend_2escm",(void*)f_5960},
{"f_6157:c_2dbackend_2escm",(void*)f_6157},
{"f_6819:c_2dbackend_2escm",(void*)f_6819},
{"f_4522:c_2dbackend_2escm",(void*)f_4522},
{"f_10851:c_2dbackend_2escm",(void*)f_10851},
{"f_3353:c_2dbackend_2escm",(void*)f_3353},
{"f_3357:c_2dbackend_2escm",(void*)f_3357},
{"f_6154:c_2dbackend_2escm",(void*)f_6154},
{"f_6151:c_2dbackend_2escm",(void*)f_6151},
{"f_5979:c_2dbackend_2escm",(void*)f_5979},
{"f_5975:c_2dbackend_2escm",(void*)f_5975},
{"f_6148:c_2dbackend_2escm",(void*)f_6148},
{"f_6145:c_2dbackend_2escm",(void*)f_6145},
{"f_6804:c_2dbackend_2escm",(void*)f_6804},
{"f_6809:c_2dbackend_2escm",(void*)f_6809},
{"f_5349:c_2dbackend_2escm",(void*)f_5349},
{"f_4548:c_2dbackend_2escm",(void*)f_4548},
{"f_6142:c_2dbackend_2escm",(void*)f_6142},
{"f_9479:c_2dbackend_2escm",(void*)f_9479},
{"f_5909:c_2dbackend_2escm",(void*)f_5909},
{"f_5907:c_2dbackend_2escm",(void*)f_5907},
{"f_6139:c_2dbackend_2escm",(void*)f_6139},
{"f_6136:c_2dbackend_2escm",(void*)f_6136},
{"f_10838:c_2dbackend_2escm",(void*)f_10838},
{"f_4545:c_2dbackend_2escm",(void*)f_4545},
{"f_10833:c_2dbackend_2escm",(void*)f_10833},
{"f_6133:c_2dbackend_2escm",(void*)f_6133},
{"f_6130:c_2dbackend_2escm",(void*)f_6130},
{"f_5919:c_2dbackend_2escm",(void*)f_5919},
{"f_6127:c_2dbackend_2escm",(void*)f_6127},
{"f_10867:c_2dbackend_2escm",(void*)f_10867},
{"f_4511:c_2dbackend_2escm",(void*)f_4511},
{"f_6121:c_2dbackend_2escm",(void*)f_6121},
{"f_6124:c_2dbackend_2escm",(void*)f_6124},
{"f_5924:c_2dbackend_2escm",(void*)f_5924},
{"f_5013:c_2dbackend_2escm",(void*)f_5013},
{"f_6118:c_2dbackend_2escm",(void*)f_6118},
{"f_5011:c_2dbackend_2escm",(void*)f_5011},
{"f_10898:c_2dbackend_2escm",(void*)f_10898},
{"f_10890:c_2dbackend_2escm",(void*)f_10890},
{"f_6115:c_2dbackend_2escm",(void*)f_6115},
{"f_6112:c_2dbackend_2escm",(void*)f_6112},
{"f_6109:c_2dbackend_2escm",(void*)f_6109},
{"f_6106:c_2dbackend_2escm",(void*)f_6106},
{"f_8138:c_2dbackend_2escm",(void*)f_8138},
{"f_8135:c_2dbackend_2escm",(void*)f_8135},
{"f_8132:c_2dbackend_2escm",(void*)f_8132},
{"f_6100:c_2dbackend_2escm",(void*)f_6100},
{"f_4508:c_2dbackend_2escm",(void*)f_4508},
{"f_6103:c_2dbackend_2escm",(void*)f_6103},
{"f_4505:c_2dbackend_2escm",(void*)f_4505},
{"f_10107:c_2dbackend_2escm",(void*)f_10107},
{"f_8126:c_2dbackend_2escm",(void*)f_8126},
{"f_8123:c_2dbackend_2escm",(void*)f_8123},
{"f_8120:c_2dbackend_2escm",(void*)f_8120},
{"f_5689:c_2dbackend_2escm",(void*)f_5689},
{"f_6892:c_2dbackend_2escm",(void*)f_6892},
{"f_6895:c_2dbackend_2escm",(void*)f_6895},
{"f_8147:c_2dbackend_2escm",(void*)f_8147},
{"f_8143:c_2dbackend_2escm",(void*)f_8143},
{"f_6898:c_2dbackend_2escm",(void*)f_6898},
{"f_6885:c_2dbackend_2escm",(void*)f_6885},
{"f_6889:c_2dbackend_2escm",(void*)f_6889},
{"f_10928:c_2dbackend_2escm",(void*)f_10928},
{"f_10920:c_2dbackend_2escm",(void*)f_10920},
{"f_10143:c_2dbackend_2escm",(void*)f_10143},
{"f_6871:c_2dbackend_2escm",(void*)f_6871},
{"f_10140:c_2dbackend_2escm",(void*)f_10140},
{"f_4598:c_2dbackend_2escm",(void*)f_4598},
{"f_4595:c_2dbackend_2escm",(void*)f_4595},
{"f_10137:c_2dbackend_2escm",(void*)f_10137},
{"f_10131:c_2dbackend_2escm",(void*)f_10131},
{"f_8117:c_2dbackend_2escm",(void*)f_8117},
{"f_4592:c_2dbackend_2escm",(void*)f_4592},
{"f_2541:c_2dbackend_2escm",(void*)f_2541},
{"f_2544:c_2dbackend_2escm",(void*)f_2544},
{"f_8113:c_2dbackend_2escm",(void*)f_8113},
{"f_6091:c_2dbackend_2escm",(void*)f_6091},
{"f_6097:c_2dbackend_2escm",(void*)f_6097},
{"f_6094:c_2dbackend_2escm",(void*)f_6094},
{"f_4242:c_2dbackend_2escm",(void*)f_4242},
{"f_4245:c_2dbackend_2escm",(void*)f_4245},
{"f_8100:c_2dbackend_2escm",(void*)f_8100},
{"f_10119:c_2dbackend_2escm",(void*)f_10119},
{"f_10116:c_2dbackend_2escm",(void*)f_10116},
{"f_6085:c_2dbackend_2escm",(void*)f_6085},
{"f_10113:c_2dbackend_2escm",(void*)f_10113},
{"f_6088:c_2dbackend_2escm",(void*)f_6088},
{"f_4297:c_2dbackend_2escm",(void*)f_4297},
{"f_4589:c_2dbackend_2escm",(void*)f_4589},
{"f_4586:c_2dbackend_2escm",(void*)f_4586},
{"f_10964:c_2dbackend_2escm",(void*)f_10964},
{"f_6070:c_2dbackend_2escm",(void*)f_6070},
{"f_6073:c_2dbackend_2escm",(void*)f_6073},
{"f_2538:c_2dbackend_2escm",(void*)f_2538},
{"f_6076:c_2dbackend_2escm",(void*)f_6076},
{"f_6079:c_2dbackend_2escm",(void*)f_6079},
{"f_4223:c_2dbackend_2escm",(void*)f_4223},
{"f_10967:c_2dbackend_2escm",(void*)f_10967},
{"f_2535:c_2dbackend_2escm",(void*)f_2535},
{"f_4226:c_2dbackend_2escm",(void*)f_4226},
{"f_6061:c_2dbackend_2escm",(void*)f_6061},
{"f_6064:c_2dbackend_2escm",(void*)f_6064},
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
S|  map		4
S|  sprintf		21
S|  for-each		18
o|eliminated procedure checks: 132 
o|specializations:
o|  1 (number->string fixnum)
o|  1 (cdddr (pair * (pair * pair)))
o|  3 (>= fixnum fixnum)
o|  1 (> fixnum fixnum)
o|  2 (memq * list)
o|  8 (= fixnum fixnum)
o|  2 (char=? char char)
o|  1 (char>? char char)
o|  1 (char<? char char)
o|  4 (length list)
o|  2 (zero? number)
o|  1 (vector-length vector)
o|  2 (bitwise-and fixnum fixnum)
o|  3 (zero? fixnum)
o|  4 (string-append string string)
o|  5 (car pair)
o|  1 (cddr (pair * pair))
o|  7 (cdr pair)
o|  3 (first pair)
o|  274 (eqv? * (not float))
o|  21 (##sys#check-output-port * * *)
o|  18 (##sys#check-list (or pair list) *)
(o e)|safe calls: 982 
o|safe globals: (##compiler#gen-list ##compiler#gen ##compiler#output) 
o|Removed `not' forms: 19 
o|inlining procedure: k2566 
o|contracted procedure: "(c-backend.scm:39) g2835" 
o|inlining procedure: k2548 
o|inlining procedure: k2548 
o|inlining procedure: k2566 
o|inlining procedure: k2603 
o|contracted procedure: "(c-backend.scm:47) g4855" 
o|inlining procedure: k2603 
o|inlining procedure: k2639 
o|inlining procedure: k2639 
o|inlining procedure: k2675 
o|inlining procedure: k2694 
o|inlining procedure: k2694 
o|inlining procedure: k2700 
o|inlining procedure: k2700 
o|inlining procedure: k2726 
o|inlining procedure: k2726 
o|substituted constant variable: a2752 
o|substituted constant variable: a2754 
o|substituted constant variable: a2756 
o|substituted constant variable: a2758 
o|substituted constant variable: a2760 
o|inlining procedure: k2675 
o|inlining procedure: k2770 
o|inlining procedure: k2770 
o|inlining procedure: k2788 
o|inlining procedure: k2788 
o|inlining procedure: k2840 
o|inlining procedure: k2856 
o|inlining procedure: k2856 
o|inlining procedure: k2840 
o|inlining procedure: k2924 
o|inlining procedure: k2924 
o|inlining procedure: k2970 
o|inlining procedure: k2970 
o|inlining procedure: k3040 
o|inlining procedure: k3040 
o|inlining procedure: k3098 
o|inlining procedure: k3140 
o|inlining procedure: k3140 
o|inlining procedure: k3098 
o|inlining procedure: k3193 
o|inlining procedure: k3193 
o|inlining procedure: k3226 
o|inlining procedure: k3244 
o|inlining procedure: k3244 
o|inlining procedure: k3265 
o|inlining procedure: k3265 
o|inlining procedure: k3226 
o|inlining procedure: k3319 
o|inlining procedure: k3319 
o|inlining procedure: k3388 
o|contracted procedure: "(c-backend.scm:253) g265266" 
o|inlining procedure: k3458 
o|inlining procedure: k3498 
o|inlining procedure: k3498 
o|inlining procedure: k3510 
o|contracted procedure: "(c-backend.scm:266) g306314" 
o|inlining procedure: k3510 
o|inlining procedure: k3547 
o|inlining procedure: k3547 
o|inlining procedure: k3588 
o|inlining procedure: k3588 
o|contracted procedure: k3628 
o|inlining procedure: k3625 
o|inlining procedure: k3625 
o|substituted constant variable: a3634 
o|inlining procedure: k3458 
o|inlining procedure: k3717 
o|inlining procedure: k3717 
o|contracted procedure: "(c-backend.scm:291) g351352" 
o|inlining procedure: k3789 
o|inlining procedure: k3789 
o|propagated global variable: tmp369371 unsafe 
o|propagated global variable: tmp369371 unsafe 
o|propagated global variable: tmp372374 ##compiler#no-procedure-checks 
o|inlining procedure: k3804 
o|propagated global variable: tmp372374 ##compiler#no-procedure-checks 
o|inlining procedure: k3804 
o|substituted constant variable: a3811 
o|contracted procedure: k3822 
o|propagated global variable: r3823 unsafe 
o|inlining procedure: k3819 
o|inlining procedure: k3819 
o|contracted procedure: k3828 
o|propagated global variable: r3829 ##compiler#no-procedure-checks 
o|contracted procedure: "(c-backend.scm:287) g345346" 
o|contracted procedure: "(c-backend.scm:250) g261262" 
o|inlining procedure: k3852 
o|inlining procedure: k3862 
o|inlining procedure: k3862 
o|inlining procedure: k3852 
o|inlining procedure: k3896 
o|inlining procedure: k3896 
o|inlining procedure: k3388 
o|inlining procedure: k3936 
o|inlining procedure: k3976 
o|contracted procedure: "(c-backend.scm:346) g421429" 
o|inlining procedure: k3976 
o|inlining procedure: k4013 
o|inlining procedure: k4013 
o|inlining procedure: k3936 
o|inlining procedure: k4070 
o|inlining procedure: k4140 
o|inlining procedure: k4140 
o|inlining procedure: k4152 
o|inlining procedure: k4152 
o|inlining procedure: k4167 
o|inlining procedure: k4177 
o|inlining procedure: k4177 
o|inlining procedure: k4167 
o|inlining procedure: k4070 
o|inlining procedure: k4234 
o|inlining procedure: k4234 
o|inlining procedure: k4272 
o|inlining procedure: k4286 
o|inlining procedure: k4286 
o|inlining procedure: k4272 
o|inlining procedure: k4298 
o|inlining procedure: k4298 
o|inlining procedure: k4321 
o|inlining procedure: k4321 
o|inlining procedure: k4372 
o|inlining procedure: k4372 
o|inlining procedure: k4442 
o|inlining procedure: k4442 
o|inlining procedure: k4478 
o|inlining procedure: k4478 
o|inlining procedure: k4524 
o|inlining procedure: k4524 
o|inlining procedure: k4578 
o|inlining procedure: k4578 
o|contracted procedure: "(c-backend.scm:481) g519520" 
o|substituted constant variable: a4630 
o|substituted constant variable: a4632 
o|substituted constant variable: a4634 
o|substituted constant variable: a4636 
o|substituted constant variable: a4638 
o|substituted constant variable: a4640 
o|substituted constant variable: a4642 
o|substituted constant variable: a4644 
o|substituted constant variable: a4646 
o|substituted constant variable: a4648 
o|substituted constant variable: a4650 
o|substituted constant variable: a4652 
o|substituted constant variable: a4654 
o|substituted constant variable: a4656 
o|substituted constant variable: a4658 
o|substituted constant variable: a4660 
o|substituted constant variable: a4662 
o|substituted constant variable: a4664 
o|substituted constant variable: a4666 
o|substituted constant variable: a4668 
o|substituted constant variable: a4670 
o|substituted constant variable: a4672 
o|substituted constant variable: a4674 
o|substituted constant variable: a4676 
o|substituted constant variable: a4678 
o|substituted constant variable: a4680 
o|substituted constant variable: a4682 
o|substituted constant variable: a4684 
o|substituted constant variable: a4686 
o|substituted constant variable: a4688 
o|substituted constant variable: a4690 
o|substituted constant variable: a4692 
o|substituted constant variable: a4694 
o|substituted constant variable: a4696 
o|substituted constant variable: a4698 
o|substituted constant variable: a4700 
o|substituted constant variable: a4702 
o|contracted procedure: "(c-backend.scm:81) g130131" 
o|contracted procedure: "(c-backend.scm:80) g121122" 
o|contracted procedure: "(c-backend.scm:79) g118119" 
o|contracted procedure: k4722 
o|inlining procedure: k4766 
o|inlining procedure: k4766 
o|inlining procedure: k4806 
o|inlining procedure: k4806 
o|inlining procedure: k4833 
o|inlining procedure: k4833 
o|inlining procedure: k4846 
o|inlining procedure: k4846 
o|inlining procedure: k4853 
o|inlining procedure: k4853 
o|inlining procedure: k4865 
o|substituted constant variable: a4874 
o|inlining procedure: k4865 
o|inlining procedure: k4918 
o|inlining procedure: k4918 
o|inlining procedure: k4941 
o|contracted procedure: "(c-backend.scm:555) g612619" 
o|inlining procedure: k4941 
o|propagated global variable: g618620 ##compiler#foreign-declarations 
o|inlining procedure: k5015 
o|contracted procedure: "(c-backend.scm:540) g579588" 
o|inlining procedure: k5015 
o|inlining procedure: k5104 
o|inlining procedure: k5104 
o|inlining procedure: k5144 
o|inlining procedure: k5144 
o|inlining procedure: k5171 
o|inlining procedure: k5171 
o|substituted constant variable: a5204 
o|inlining procedure: k5224 
o|contracted procedure: "(c-backend.scm:570) g640647" 
o|inlining procedure: k5224 
o|propagated global variable: g646648 ##compiler#used-units 
o|inlining procedure: k5301 
o|inlining procedure: k5301 
o|inlining procedure: k5325 
o|inlining procedure: k5325 
o|contracted procedure: k5344 
o|inlining procedure: k5356 
o|inlining procedure: k5356 
o|inlining procedure: k5369 
o|inlining procedure: k5369 
o|inlining procedure: k5396 
o|inlining procedure: k5396 
o|inlining procedure: k5469 
o|contracted procedure: "(c-backend.scm:659) restore719" 
o|inlining procedure: k5425 
o|inlining procedure: k5425 
o|inlining procedure: k5469 
o|contracted procedure: k5500 
o|inlining procedure: k5527 
o|inlining procedure: k5527 
o|substituted constant variable: a5554 
o|substituted constant variable: a5555 
o|inlining procedure: k5577 
o|inlining procedure: k5577 
o|inlining procedure: k5589 
o|propagated global variable: r559011202 ##compiler#words-per-flonum 
o|inlining procedure: k5589 
o|inlining procedure: k5601 
o|inlining procedure: k5601 
o|inlining procedure: k5652 
o|inlining procedure: k5652 
o|inlining procedure: k5684 
o|inlining procedure: k5684 
o|inlining procedure: "(c-backend.scm:683) bad-literal97" 
o|inlining procedure: k5699 
o|inlining procedure: k5699 
o|inlining procedure: k5719 
o|inlining procedure: k5738 
o|inlining procedure: k5738 
o|inlining procedure: k5719 
o|inlining procedure: "(c-backend.scm:692) bad-literal97" 
o|inlining procedure: k5769 
o|inlining procedure: k5769 
o|inlining procedure: k5784 
o|inlining procedure: k5784 
o|inlining procedure: k5803 
o|inlining procedure: k5803 
o|inlining procedure: k5806 
o|inlining procedure: k5806 
o|inlining procedure: k5840 
o|inlining procedure: k5840 
o|inlining procedure: k5855 
o|inlining procedure: k5855 
o|inlining procedure: "(c-backend.scm:719) bad-literal97" 
o|contracted procedure: k5887 
o|inlining procedure: k5926 
o|inlining procedure: k5926 
o|inlining procedure: k6173 
o|inlining procedure: k6173 
o|inlining procedure: k6185 
o|inlining procedure: k6204 
o|inlining procedure: k6204 
o|inlining procedure: k6185 
o|inlining procedure: k6263 
o|inlining procedure: k6263 
o|contracted procedure: k6285 
o|contracted procedure: k6323 
o|inlining procedure: k6317 
o|inlining procedure: k6317 
o|inlining procedure: k6343 
o|inlining procedure: k6343 
o|inlining procedure: k6368 
o|contracted procedure: k6392 
o|propagated global variable: r6393 unsafe 
o|contracted procedure: k6398 
o|propagated global variable: r6399 ##compiler#no-argc-checks 
o|inlining procedure: k6395 
o|inlining procedure: k6395 
o|inlining procedure: k6368 
o|contracted procedure: k6425 
o|inlining procedure: k6435 
o|inlining procedure: k6435 
o|inlining procedure: k6447 
o|inlining procedure: k6447 
o|contracted procedure: k6468 
o|propagated global variable: r6469 unsafe 
o|inlining procedure: k6465 
o|inlining procedure: k6465 
o|contracted procedure: k6474 
o|propagated global variable: r6475 ##compiler#no-argc-checks 
o|contracted procedure: k6492 
o|propagated global variable: r6493 unsafe 
o|inlining procedure: k6489 
o|inlining procedure: k6489 
o|contracted procedure: "(c-backend.scm:811) utype102" 
o|inlining procedure: k5999 
o|inlining procedure: k5999 
o|inlining procedure: k6011 
o|inlining procedure: k6011 
o|inlining procedure: k6023 
o|inlining procedure: k6023 
o|substituted constant variable: a6039 
o|substituted constant variable: a6041 
o|substituted constant variable: a6043 
o|substituted constant variable: a6045 
o|substituted constant variable: a6047 
o|substituted constant variable: a6049 
o|inlining procedure: k6531 
o|inlining procedure: k6531 
o|inlining procedure: k6558 
o|inlining procedure: k6558 
o|inlining procedure: k6579 
o|inlining procedure: k6579 
o|inlining procedure: k6594 
o|inlining procedure: k6594 
o|inlining procedure: k6629 
o|inlining procedure: k6629 
o|contracted procedure: k6648 
o|inlining procedure: k6657 
o|inlining procedure: k6657 
o|inlining procedure: k6670 
o|inlining procedure: k6670 
o|inlining procedure: k6700 
o|inlining procedure: k6700 
o|inlining procedure: k6707 
o|inlining procedure: k6707 
o|inlining procedure: k6714 
o|inlining procedure: k6714 
o|contracted procedure: "(c-backend.scm:916) trailer92" 
o|inlining procedure: k6850 
o|contracted procedure: "(c-backend.scm:923) g10361043" 
o|inlining procedure: k6811 
o|contracted procedure: "(c-backend.scm:926) g10491056" 
o|inlining procedure: k6811 
o|inlining procedure: k6850 
o|inlining procedure: k6911 
o|inlining procedure: k6911 
o|inlining procedure: k6953 
o|inlining procedure: k6953 
o|substituted constant variable: a6976 
o|inlining procedure: k6990 
o|inlining procedure: k6990 
o|substituted constant variable: a6997 
o|inlining procedure: k6998 
o|inlining procedure: k6998 
o|substituted constant variable: a7005 
o|inlining procedure: k7006 
o|substituted constant variable: a7012 
o|inlining procedure: k7006 
o|inlining procedure: k7094 
o|contracted procedure: "(c-backend.scm:996) g11201127" 
o|inlining procedure: k7094 
o|inlining procedure: k7137 
o|contracted procedure: "(c-backend.scm:1007) g11441151" 
o|inlining procedure: k7137 
o|inlining procedure: k7264 
o|inlining procedure: k7282 
o|inlining procedure: k7282 
o|inlining procedure: k7264 
o|inlining procedure: k7312 
o|inlining procedure: k7312 
o|contracted procedure: k7335 
o|inlining procedure: k7354 
o|contracted procedure: "(c-backend.scm:1047) g12051214" 
o|inlining procedure: k7231 
o|substituted constant variable: a7241 
o|substituted constant variable: a7242 
o|inlining procedure: k7231 
o|inlining procedure: k7354 
o|inlining procedure: k7393 
o|inlining procedure: k7393 
o|inlining procedure: k7411 
o|inlining procedure: k7411 
o|inlining procedure: k7474 
o|inlining procedure: k7474 
o|inlining procedure: k7520 
o|inlining procedure: k7520 
o|inlining procedure: k7541 
o|inlining procedure: k7541 
o|inlining procedure: k7577 
o|inlining procedure: k7577 
o|inlining procedure: k7568 
o|inlining procedure: k7568 
o|inlining procedure: k7596 
o|inlining procedure: k7596 
o|substituted constant variable: a7622 
o|inlining procedure: k7626 
o|inlining procedure: k7626 
o|inlining procedure: k7638 
o|inlining procedure: k7638 
o|inlining procedure: k7650 
o|inlining procedure: k7650 
o|inlining procedure: k7662 
o|inlining procedure: k7662 
o|substituted constant variable: a7669 
o|substituted constant variable: a7671 
o|substituted constant variable: a7673 
o|substituted constant variable: a7675 
o|substituted constant variable: a7677 
o|substituted constant variable: a7679 
o|substituted constant variable: a7681 
o|substituted constant variable: a7683 
o|substituted constant variable: a7685 
o|inlining procedure: k7695 
o|inlining procedure: k7695 
o|inlining procedure: k7707 
o|inlining procedure: k7707 
o|substituted constant variable: a7714 
o|substituted constant variable: a7716 
o|substituted constant variable: a7718 
o|substituted constant variable: a7720 
o|substituted constant variable: a7722 
o|inlining procedure: k7726 
o|inlining procedure: k7726 
o|inlining procedure: k7738 
o|inlining procedure: k7738 
o|substituted constant variable: a7745 
o|substituted constant variable: a7747 
o|substituted constant variable: a7749 
o|substituted constant variable: a7751 
o|substituted constant variable: a7753 
o|inlining procedure: k7757 
o|inlining procedure: k7757 
o|inlining procedure: k7769 
o|inlining procedure: k7769 
o|inlining procedure: k7781 
o|inlining procedure: k7781 
o|inlining procedure: k7793 
o|inlining procedure: k7793 
o|inlining procedure: k7805 
o|inlining procedure: k7805 
o|inlining procedure: k7817 
o|inlining procedure: k7817 
o|inlining procedure: k7829 
o|inlining procedure: k7829 
o|substituted constant variable: a7842 
o|substituted constant variable: a7844 
o|substituted constant variable: a7846 
o|substituted constant variable: a7848 
o|substituted constant variable: a7850 
o|substituted constant variable: a7852 
o|substituted constant variable: a7854 
o|substituted constant variable: a7856 
o|substituted constant variable: a7858 
o|substituted constant variable: a7860 
o|substituted constant variable: a7862 
o|substituted constant variable: a7864 
o|substituted constant variable: a7866 
o|substituted constant variable: a7868 
o|substituted constant variable: a7870 
o|substituted constant variable: a7872 
o|inlining procedure: k7876 
o|inlining procedure: k7876 
o|inlining procedure: k7888 
o|inlining procedure: k7888 
o|inlining procedure: k7900 
o|inlining procedure: k7900 
o|inlining procedure: k7912 
o|inlining procedure: k7912 
o|inlining procedure: k7924 
o|inlining procedure: k7924 
o|inlining procedure: k7936 
o|inlining procedure: k7936 
o|substituted constant variable: a7943 
o|substituted constant variable: a7945 
o|substituted constant variable: a7947 
o|substituted constant variable: a7949 
o|substituted constant variable: a7951 
o|substituted constant variable: a7953 
o|substituted constant variable: a7955 
o|substituted constant variable: a7957 
o|substituted constant variable: a7959 
o|substituted constant variable: a7961 
o|substituted constant variable: a7963 
o|substituted constant variable: a7965 
o|substituted constant variable: a7967 
o|inlining procedure: k8010 
o|inlining procedure: k8010 
o|inlining procedure: k8035 
o|contracted procedure: "(c-backend.scm:1127) g14541462" 
o|inlining procedure: k8035 
o|inlining procedure: k8070 
o|inlining procedure: k8070 
o|inlining procedure: k8092 
o|inlining procedure: k8092 
o|inlining procedure: k8148 
o|inlining procedure: k8148 
o|inlining procedure: k8188 
o|inlining procedure: k8188 
o|inlining procedure: k8209 
o|inlining procedure: k8209 
o|inlining procedure: k8233 
o|inlining procedure: k8233 
o|inlining procedure: k8257 
o|inlining procedure: k8257 
o|inlining procedure: k8278 
o|inlining procedure: k8278 
o|inlining procedure: k8296 
o|inlining procedure: k8296 
o|inlining procedure: k8314 
o|inlining procedure: k8314 
o|inlining procedure: k8332 
o|inlining procedure: k8332 
o|inlining procedure: k8353 
o|inlining procedure: k8353 
o|inlining procedure: k8374 
o|inlining procedure: k8374 
o|inlining procedure: k8398 
o|inlining procedure: k8398 
o|inlining procedure: k8422 
o|inlining procedure: k8422 
o|inlining procedure: k8446 
o|inlining procedure: k8446 
o|inlining procedure: k8470 
o|inlining procedure: k8470 
o|inlining procedure: k8494 
o|inlining procedure: k8494 
o|inlining procedure: k8527 
o|inlining procedure: k8527 
o|inlining procedure: k8518 
o|inlining procedure: k8518 
o|inlining procedure: k8548 
o|inlining procedure: k8572 
o|inlining procedure: k8572 
o|inlining procedure: k8631 
o|contracted procedure: "(c-backend.scm:1217) g16321641" 
o|propagated global variable: g16491650 ##compiler#foreign-type-declaration 
o|inlining procedure: k8631 
o|inlining procedure: k8666 
o|inlining procedure: k8666 
o|inlining procedure: k8700 
o|inlining procedure: k8700 
o|inlining procedure: k8734 
o|inlining procedure: k8734 
o|inlining procedure: k8768 
o|inlining procedure: k8821 
o|contracted procedure: "(c-backend.scm:1241) g16801689" 
o|inlining procedure: k8803 
o|inlining procedure: k8803 
o|inlining procedure: k8821 
o|inlining procedure: k8768 
o|substituted constant variable: a8872 
o|substituted constant variable: a8884 
o|substituted constant variable: a8892 
o|substituted constant variable: a8894 
o|substituted constant variable: a8906 
o|substituted constant variable: a8918 
o|substituted constant variable: a8930 
o|substituted constant variable: a8942 
o|substituted constant variable: a8954 
o|substituted constant variable: a8965 
o|substituted constant variable: a8974 
o|substituted constant variable: a8975 
o|inlining procedure: k8548 
o|substituted constant variable: a8987 
o|inlining procedure: k8991 
o|inlining procedure: k8991 
o|substituted constant variable: a9004 
o|substituted constant variable: a9006 
o|substituted constant variable: a9008 
o|substituted constant variable: a9010 
o|inlining procedure: k9014 
o|inlining procedure: k9014 
o|inlining procedure: k9026 
o|inlining procedure: k9026 
o|substituted constant variable: a9033 
o|substituted constant variable: a9035 
o|substituted constant variable: a9037 
o|substituted constant variable: a9039 
o|substituted constant variable: a9041 
o|substituted constant variable: a9046 
o|substituted constant variable: a9048 
o|substituted constant variable: a9053 
o|substituted constant variable: a9055 
o|substituted constant variable: a9060 
o|substituted constant variable: a9062 
o|substituted constant variable: a9067 
o|substituted constant variable: a9069 
o|substituted constant variable: a9074 
o|substituted constant variable: a9076 
o|substituted constant variable: a9081 
o|substituted constant variable: a9083 
o|substituted constant variable: a9088 
o|substituted constant variable: a9090 
o|substituted constant variable: a9095 
o|substituted constant variable: a9097 
o|inlining procedure: k9101 
o|inlining procedure: k9101 
o|substituted constant variable: a9114 
o|substituted constant variable: a9116 
o|substituted constant variable: a9118 
o|substituted constant variable: a9120 
o|substituted constant variable: a9125 
o|substituted constant variable: a9127 
o|inlining procedure: k9131 
o|inlining procedure: k9131 
o|substituted constant variable: a9144 
o|substituted constant variable: a9146 
o|substituted constant variable: a9148 
o|substituted constant variable: a9150 
o|substituted constant variable: a9155 
o|substituted constant variable: a9157 
o|substituted constant variable: a9159 
o|substituted constant variable: a9161 
o|substituted constant variable: a9163 
o|substituted constant variable: a9165 
o|substituted constant variable: a9167 
o|substituted constant variable: a9169 
o|substituted constant variable: a9171 
o|substituted constant variable: a9176 
o|substituted constant variable: a9178 
o|substituted constant variable: a9180 
o|inlining procedure: k9184 
o|inlining procedure: k9184 
o|substituted constant variable: a9191 
o|substituted constant variable: a9193 
o|substituted constant variable: a9195 
o|substituted constant variable: a9200 
o|substituted constant variable: a9202 
o|substituted constant variable: a9207 
o|substituted constant variable: a9209 
o|substituted constant variable: a9214 
o|substituted constant variable: a9216 
o|substituted constant variable: a9221 
o|substituted constant variable: a9223 
o|substituted constant variable: a9225 
o|inlining procedure: k9234 
o|inlining procedure: k9234 
o|inlining procedure: k9249 
o|inlining procedure: k9249 
o|inlining procedure: k9264 
o|inlining procedure: k9264 
o|inlining procedure: k9276 
o|inlining procedure: k9276 
o|inlining procedure: k9294 
o|inlining procedure: k9294 
o|inlining procedure: k9306 
o|inlining procedure: k9306 
o|inlining procedure: k9318 
o|inlining procedure: k9318 
o|inlining procedure: k9333 
o|inlining procedure: k9333 
o|inlining procedure: k9345 
o|inlining procedure: k9345 
o|inlining procedure: k9357 
o|inlining procedure: k9357 
o|inlining procedure: k9369 
o|inlining procedure: k9369 
o|inlining procedure: k9381 
o|inlining procedure: k9381 
o|inlining procedure: k9393 
o|inlining procedure: k9393 
o|inlining procedure: k9405 
o|inlining procedure: k9405 
o|inlining procedure: k9417 
o|inlining procedure: k9417 
o|inlining procedure: k9429 
o|inlining procedure: k9429 
o|inlining procedure: k9441 
o|inlining procedure: k9441 
o|inlining procedure: k9453 
o|inlining procedure: k9453 
o|inlining procedure: k9465 
o|inlining procedure: k9465 
o|inlining procedure: k9480 
o|inlining procedure: k9480 
o|inlining procedure: k9498 
o|contracted procedure: "(c-backend.scm:1299) g17661767" 
o|inlining procedure: k9507 
o|inlining procedure: k9507 
o|inlining procedure: k9498 
o|inlining procedure: k9528 
o|inlining procedure: k9528 
o|inlining procedure: k9540 
o|inlining procedure: k9540 
o|inlining procedure: k9552 
o|inlining procedure: k9552 
o|inlining procedure: k9564 
o|inlining procedure: k9564 
o|inlining procedure: k9583 
o|inlining procedure: k9583 
o|inlining procedure: k9606 
o|inlining procedure: k9606 
o|substituted constant variable: a9623 
o|substituted constant variable: a9625 
o|substituted constant variable: a9627 
o|substituted constant variable: a9629 
o|substituted constant variable: a9631 
o|substituted constant variable: a9633 
o|substituted constant variable: a9635 
o|substituted constant variable: a9637 
o|substituted constant variable: a9639 
o|substituted constant variable: a9641 
o|substituted constant variable: a9643 
o|substituted constant variable: a9655 
o|substituted constant variable: a9663 
o|inlining procedure: k9667 
o|inlining procedure: k9667 
o|inlining procedure: k9679 
o|inlining procedure: k9679 
o|substituted constant variable: a9686 
o|substituted constant variable: a9688 
o|substituted constant variable: a9690 
o|substituted constant variable: a9692 
o|substituted constant variable: a9694 
o|inlining procedure: k9698 
o|inlining procedure: k9698 
o|substituted constant variable: a9711 
o|substituted constant variable: a9713 
o|substituted constant variable: a9715 
o|substituted constant variable: a9717 
o|substituted constant variable: a9719 
o|substituted constant variable: a9721 
o|substituted constant variable: a9723 
o|substituted constant variable: a9725 
o|substituted constant variable: a9727 
o|substituted constant variable: a9729 
o|substituted constant variable: a9731 
o|substituted constant variable: a9733 
o|substituted constant variable: a9735 
o|substituted constant variable: a9737 
o|substituted constant variable: a9739 
o|substituted constant variable: a9741 
o|substituted constant variable: a9743 
o|substituted constant variable: a9745 
o|substituted constant variable: a9747 
o|substituted constant variable: a9749 
o|substituted constant variable: a9751 
o|substituted constant variable: a9753 
o|substituted constant variable: a9755 
o|substituted constant variable: a9757 
o|substituted constant variable: a9759 
o|substituted constant variable: a9761 
o|substituted constant variable: a9763 
o|substituted constant variable: a9765 
o|substituted constant variable: a9770 
o|substituted constant variable: a9772 
o|substituted constant variable: a9774 
o|substituted constant variable: a9776 
o|substituted constant variable: a9778 
o|substituted constant variable: a9780 
o|substituted constant variable: a9785 
o|substituted constant variable: a9787 
o|inlining procedure: k9791 
o|inlining procedure: k9791 
o|substituted constant variable: a9798 
o|substituted constant variable: a9800 
o|substituted constant variable: a9802 
o|substituted constant variable: a9804 
o|substituted constant variable: a9806 
o|substituted constant variable: a9808 
o|inlining procedure: k9812 
o|inlining procedure: k9812 
o|inlining procedure: k9824 
o|inlining procedure: k9824 
o|substituted constant variable: a9837 
o|substituted constant variable: a9839 
o|substituted constant variable: a9841 
o|substituted constant variable: a9843 
o|substituted constant variable: a9845 
o|substituted constant variable: a9847 
o|substituted constant variable: a9852 
o|substituted constant variable: a9854 
o|substituted constant variable: a9856 
o|inlining procedure: k9865 
o|inlining procedure: k9865 
o|inlining procedure: k9883 
o|inlining procedure: k9883 
o|inlining procedure: k9898 
o|inlining procedure: k9898 
o|inlining procedure: k9910 
o|inlining procedure: k9910 
o|substituted constant variable: a9929 
o|substituted constant variable: a9930 
o|substituted constant variable: a9953 
o|substituted constant variable: a9954 
o|inlining procedure: k9943 
o|inlining procedure: k9943 
o|substituted constant variable: a9980 
o|substituted constant variable: a9981 
o|substituted constant variable: a10004 
o|substituted constant variable: a10005 
o|inlining procedure: k9994 
o|inlining procedure: k9994 
o|substituted constant variable: a10031 
o|substituted constant variable: a10032 
o|substituted constant variable: a10058 
o|substituted constant variable: a10059 
o|inlining procedure: k10045 
o|inlining procedure: k10045 
o|substituted constant variable: a10082 
o|substituted constant variable: a10083 
o|substituted constant variable: a10109 
o|substituted constant variable: a10110 
o|inlining procedure: k10096 
o|inlining procedure: k10096 
o|substituted constant variable: a10133 
o|substituted constant variable: a10134 
o|substituted constant variable: a10157 
o|substituted constant variable: a10158 
o|inlining procedure: k10147 
o|inlining procedure: k10147 
o|inlining procedure: k10177 
o|inlining procedure: k10177 
o|inlining procedure: k10198 
o|inlining procedure: k10198 
o|inlining procedure: k10210 
o|substituted constant variable: a10232 
o|substituted constant variable: a10233 
o|substituted constant variable: a10256 
o|substituted constant variable: a10257 
o|inlining procedure: k10246 
o|inlining procedure: k10246 
o|substituted constant variable: a10280 
o|substituted constant variable: a10281 
o|substituted constant variable: a10304 
o|substituted constant variable: a10305 
o|inlining procedure: k10294 
o|inlining procedure: k10294 
o|substituted constant variable: a10328 
o|substituted constant variable: a10329 
o|inlining procedure: k10342 
o|inlining procedure: k10342 
o|substituted constant variable: a10368 
o|substituted constant variable: a10369 
o|substituted constant variable: a10392 
o|substituted constant variable: a10393 
o|inlining procedure: k10382 
o|inlining procedure: k10382 
o|substituted constant variable: a10416 
o|substituted constant variable: a10417 
o|substituted constant variable: a10434 
o|substituted constant variable: a10436 
o|substituted constant variable: a10441 
o|substituted constant variable: a10443 
o|substituted constant variable: a10445 
o|substituted constant variable: a10447 
o|substituted constant variable: a10449 
o|substituted constant variable: a10451 
o|substituted constant variable: a10453 
o|substituted constant variable: a10458 
o|substituted constant variable: a10460 
o|inlining procedure: k10210 
o|substituted constant variable: a10472 
o|substituted constant variable: a10483 
o|substituted constant variable: a10485 
o|substituted constant variable: a10487 
o|substituted constant variable: a10489 
o|substituted constant variable: a10491 
o|substituted constant variable: a10496 
o|substituted constant variable: a10498 
o|substituted constant variable: a10500 
o|substituted constant variable: a10505 
o|substituted constant variable: a10507 
o|substituted constant variable: a10512 
o|substituted constant variable: a10514 
o|substituted constant variable: a10516 
o|inlining procedure: k10520 
o|inlining procedure: k10520 
o|inlining procedure: k10532 
o|inlining procedure: k10532 
o|inlining procedure: k10544 
o|inlining procedure: k10544 
o|inlining procedure: k10556 
o|inlining procedure: k10556 
o|inlining procedure: k10568 
o|inlining procedure: k10568 
o|substituted constant variable: a10581 
o|substituted constant variable: a10583 
o|substituted constant variable: a10585 
o|substituted constant variable: a10587 
o|substituted constant variable: a10589 
o|substituted constant variable: a10591 
o|substituted constant variable: a10593 
o|substituted constant variable: a10595 
o|substituted constant variable: a10597 
o|substituted constant variable: a10599 
o|substituted constant variable: a10601 
o|substituted constant variable: a10603 
o|substituted constant variable: a10605 
o|substituted constant variable: a10610 
o|substituted constant variable: a10612 
o|substituted constant variable: a10614 
o|substituted constant variable: a10616 
o|substituted constant variable: a10618 
o|substituted constant variable: a10620 
o|substituted constant variable: a10625 
o|substituted constant variable: a10627 
o|substituted constant variable: a10632 
o|substituted constant variable: a10634 
o|substituted constant variable: a10639 
o|substituted constant variable: a10641 
o|contracted procedure: k10657 
o|inlining procedure: k10654 
o|inlining procedure: k10654 
o|contracted procedure: "(c-backend.scm:1403) finish2105" 
o|inlining procedure: k10723 
o|inlining procedure: k10723 
o|inlining procedure: k10746 
o|inlining procedure: k10746 
o|inlining procedure: k10758 
o|inlining procedure: k10758 
o|contracted procedure: k10773 
o|inlining procedure: k10770 
o|inlining procedure: k10770 
o|substituted constant variable: a10779 
o|substituted constant variable: a10801 
o|inlining procedure: k10839 
o|inlining procedure: k10839 
o|inlining procedure: k10872 
o|inlining procedure: k10872 
o|inlining procedure: "(c-backend.scm:1433) getsize2103" 
o|inlining procedure: "(c-backend.scm:1432) getbits2102" 
o|inlining procedure: "(c-backend.scm:1439) getbits2102" 
o|inlining procedure: "(c-backend.scm:1436) getsize2103" 
o|substituted constant variable: a10960 
o|substituted constant variable: a10961 
o|replaced variables: 2041 
o|removed binding forms: 577 
o|substituted constant variable: r269511001 
o|substituted constant variable: r269511001 
o|substituted constant variable: r269511003 
o|substituted constant variable: r269511003 
o|inlining procedure: k3615 
o|substituted constant variable: r362611056 
o|substituted constant variable: r362611056 
o|propagated global variable: r380511073 ##compiler#no-procedure-checks 
o|substituted constant variable: r382011075 
o|substituted constant variable: r386311078 
o|substituted constant variable: r386311078 
o|substituted constant variable: r386311080 
o|substituted constant variable: r386311080 
o|substituted constant variable: r389711084 
o|substituted constant variable: r417811098 
o|substituted constant variable: r417811098 
o|substituted constant variable: r417811100 
o|substituted constant variable: r417811100 
o|substituted constant variable: r428711107 
o|substituted constant variable: r428711107 
o|substituted constant variable: r428711109 
o|substituted constant variable: r428711109 
o|substituted constant variable: r483411139 
o|substituted constant variable: r485411144 
o|substituted constant variable: r485411144 
o|substituted constant variable: r485411146 
o|substituted constant variable: r485411146 
o|converted assignments to bindings: (pad0563) 
o|substituted constant variable: r537011186 
o|substituted constant variable: r537011186 
o|substituted constant variable: r537011188 
o|substituted constant variable: r537011188 
o|removed side-effect free assignment to unused variable: bad-literal97 
o|substituted constant variable: r557811200 
o|substituted constant variable: r568511208 
o|substituted constant variable: r570011215 
o|substituted constant variable: r580411230 
o|substituted constant variable: r580411230 
o|substituted constant variable: r580411232 
o|substituted constant variable: r580411232 
o|substituted constant variable: r639611270 
o|substituted constant variable: r643611273 
o|substituted constant variable: r643611273 
o|substituted constant variable: r643611275 
o|substituted constant variable: r643611275 
o|substituted constant variable: r646611279 
o|substituted constant variable: r649011281 
o|contracted procedure: "(c-backend.scm:809) g902909" 
o|substituted constant variable: r600011283 
o|substituted constant variable: r601211285 
o|substituted constant variable: r602411287 
o|substituted constant variable: r658011295 
o|substituted constant variable: r658011295 
o|inlining procedure: k6676 
o|substituted constant variable: r667111311 
o|substituted constant variable: r667111311 
o|substituted constant variable: r667111313 
o|substituted constant variable: r667111313 
o|substituted constant variable: r671511323 
o|substituted constant variable: r671511323 
o|substituted constant variable: r671511325 
o|substituted constant variable: r671511325 
o|inlining procedure: k6980 
o|inlining procedure: k6980 
o|substituted constant variable: r700711340 
o|substituted constant variable: r739411366 
o|substituted constant variable: r807111437 
o|substituted constant variable: r807111437 
o|substituted constant variable: r807111439 
o|substituted constant variable: r807111439 
o|substituted constant variable: r880411494 
o|substituted constant variable: r923511511 
o|substituted constant variable: r925011513 
o|substituted constant variable: r926511515 
o|substituted constant variable: r927711517 
o|substituted constant variable: r929511519 
o|substituted constant variable: r930711521 
o|substituted constant variable: r931911523 
o|substituted constant variable: r933411525 
o|substituted constant variable: r934611527 
o|substituted constant variable: r935811529 
o|substituted constant variable: r937011531 
o|substituted constant variable: r938211533 
o|substituted constant variable: r939411535 
o|substituted constant variable: r940611537 
o|substituted constant variable: r941811539 
o|substituted constant variable: r943011541 
o|substituted constant variable: r944211543 
o|substituted constant variable: r945411545 
o|substituted constant variable: r946611547 
o|substituted constant variable: r948111549 
o|substituted constant variable: r952911557 
o|substituted constant variable: r954111559 
o|substituted constant variable: r955311561 
o|substituted constant variable: r956511563 
o|substituted constant variable: r958411565 
o|substituted constant variable: r986611581 
o|substituted constant variable: r988411583 
o|substituted constant variable: r989911585 
o|substituted constant variable: r991111587 
o|substituted constant variable: r1017811599 
o|removed side-effect free assignment to unused variable: getbits2102 
o|removed side-effect free assignment to unused variable: getsize2103 
o|substituted constant variable: r1072411627 
o|substituted constant variable: r1074711629 
o|substituted constant variable: r1075911631 
o|simplifications: ((let . 1)) 
o|replaced variables: 37 
o|removed binding forms: 2041 
o|inlining procedure: k3594 
o|inlining procedure: k4054 
o|inlining procedure: k4122 
o|inlining procedure: k4158 
o|inlining procedure: k4712 
o|inlining procedure: k4915 
o|inlining procedure: k5310 
o|inlining procedure: k5310 
o|inlining procedure: k6377 
o|inlining procedure: k6483 
o|inlining procedure: k6483 
o|inlining procedure: k6614 
o|inlining procedure: k6614 
o|inlining procedure: k6965 
o|inlining procedure: k10900 
o|inlining procedure: k10908 
o|inlining procedure: k10948 
o|converted assignments to bindings: (encode-size2104) 
o|simplifications: ((let . 1)) 
o|replaced variables: 41 
o|removed binding forms: 153 
o|Removed `not' forms: 1 
o|substituted constant variable: r648411860 
o|contracted procedure: k6483 
o|propagated global variable: r6484 ##compiler#disable-stack-overflow-checking 
o|substituted constant variable: r648411861 
o|contracted procedure: k10911 
o|simplifications: ((let . 1)) 
o|replaced variables: 4 
o|removed binding forms: 51 
o|removed conditional forms: 2 
o|removed binding forms: 7 
o|simplifications: ((if . 60) (##core#call . 823)) 
o|  call simplifications:
o|    eof-object?
o|    integer->char	9
o|    string	5
o|    list?	3
o|    fx>
o|    fx>=	3
o|    string=?
o|    string-set!	3
o|    fx/
o|    void	2
o|    boolean?
o|    char?	2
o|    fixnum?	3
o|    string?	2
o|    number?	2
o|    symbol?	7
o|    ##sys#immediate?	4
o|    ##sys#generic-structure?
o|    ##sys#size	5
o|    apply	9
o|    string-length	3
o|    arithmetic-shift	8
o|    string-ref	3
o|    bitwise-and	8
o|    -	5
o|    cons	9
o|    ##sys#setslot	4
o|    <	4
o|    >=	8
o|    null?	6
o|    cddr	3
o|    cdr	5
o|    length	10
o|    cdddr
o|    zero?	14
o|    not	15
o|    third	7
o|    fourth	4
o|    ##sys#check-list	12
o|    +	23
o|    >	5
o|    add1	21
o|    sub1	11
o|    car	38
o|    cadr	21
o|    caddr	2
o|    vector?	6
o|    vector-ref	13
o|    first	37
o|    char->integer	4
o|    second	15
o|    pair?	42
o|    eq?	315
o|    ##sys#slot	76
o|contracted procedure: k2569 
o|contracted procedure: k2579 
o|contracted procedure: k2583 
o|contracted procedure: k2551 
o|contracted procedure: k2606 
o|contracted procedure: k2616 
o|contracted procedure: k2620 
o|contracted procedure: k2656 
o|contracted procedure: k2664 
o|contracted procedure: k2672 
o|contracted procedure: k2678 
o|contracted procedure: k2681 
o|contracted procedure: k2687 
o|contracted procedure: k2697 
o|contracted procedure: k2703 
o|contracted procedure: k2714 
o|contracted procedure: k2710 
o|contracted procedure: k2720 
o|contracted procedure: k2729 
o|contracted procedure: k2736 
o|contracted procedure: k2742 
o|contracted procedure: k2764 
o|contracted procedure: k2767 
o|contracted procedure: k2773 
o|contracted procedure: k2780 
o|contracted procedure: k2791 
o|contracted procedure: k2816 
o|contracted procedure: k2820 
o|contracted procedure: k2824 
o|contracted procedure: k2830 
o|contracted procedure: k2837 
o|contracted procedure: k2843 
o|contracted procedure: k2850 
o|contracted procedure: k2859 
o|contracted procedure: k2877 
o|contracted procedure: k2881 
o|contracted procedure: k2885 
o|contracted procedure: k2892 
o|contracted procedure: k2898 
o|contracted procedure: k2901 
o|contracted procedure: k2917 
o|contracted procedure: k2921 
o|contracted procedure: k2927 
o|contracted procedure: k2944 
o|contracted procedure: k2940 
o|contracted procedure: k2948 
o|contracted procedure: k2954 
o|contracted procedure: k2967 
o|contracted procedure: k2973 
o|contracted procedure: k2992 
o|contracted procedure: k2996 
o|contracted procedure: k3000 
o|contracted procedure: k3006 
o|contracted procedure: k3025 
o|contracted procedure: k3033 
o|contracted procedure: k3029 
o|contracted procedure: k3037 
o|contracted procedure: k3043 
o|contracted procedure: k3062 
o|contracted procedure: k3066 
o|contracted procedure: k3072 
o|contracted procedure: k3091 
o|contracted procedure: k3095 
o|contracted procedure: k3101 
o|contracted procedure: k3104 
o|contracted procedure: k3124 
o|contracted procedure: k3134 
o|contracted procedure: k3168 
o|contracted procedure: k3143 
o|contracted procedure: k3153 
o|contracted procedure: k3157 
o|contracted procedure: k3161 
o|contracted procedure: k3165 
o|contracted procedure: k3177 
o|contracted procedure: k3190 
o|contracted procedure: k3196 
o|contracted procedure: k3203 
o|contracted procedure: k3209 
o|contracted procedure: k3219 
o|contracted procedure: k3223 
o|contracted procedure: k3229 
o|contracted procedure: k3232 
o|contracted procedure: k3235 
o|contracted procedure: k3238 
o|contracted procedure: k3262 
o|contracted procedure: k3277 
o|contracted procedure: k3280 
o|contracted procedure: k3283 
o|contracted procedure: k3286 
o|contracted procedure: k3302 
o|contracted procedure: k3322 
o|contracted procedure: k3325 
o|contracted procedure: k3328 
o|contracted procedure: k3331 
o|contracted procedure: k3347 
o|contracted procedure: k3368 
o|contracted procedure: k3382 
o|contracted procedure: k3391 
o|contracted procedure: k3394 
o|contracted procedure: k3397 
o|contracted procedure: k3400 
o|contracted procedure: k3403 
o|contracted procedure: k3406 
o|contracted procedure: k3409 
o|contracted procedure: k3412 
o|contracted procedure: k3849 
o|contracted procedure: k3434 
o|contracted procedure: k3448 
o|contracted procedure: k3455 
o|contracted procedure: k3538 
o|contracted procedure: k3513 
o|contracted procedure: k3523 
o|contracted procedure: k3527 
o|contracted procedure: k3531 
o|contracted procedure: k3535 
o|contracted procedure: k3575 
o|contracted procedure: k3550 
o|contracted procedure: k3560 
o|contracted procedure: k3564 
o|contracted procedure: k3568 
o|contracted procedure: k3572 
o|contracted procedure: k3582 
o|contracted procedure: k3648 
o|contracted procedure: k3669 
o|contracted procedure: k3672 
o|contracted procedure: k3675 
o|contracted procedure: k3678 
o|contracted procedure: k3742 
o|contracted procedure: k3840 
o|contracted procedure: k3816 
o|contracted procedure: k3906 
o|contracted procedure: k3899 
o|contracted procedure: k3918 
o|contracted procedure: k3921 
o|contracted procedure: k3924 
o|contracted procedure: k3927 
o|contracted procedure: k3930 
o|contracted procedure: k3933 
o|contracted procedure: k4004 
o|contracted procedure: k3979 
o|contracted procedure: k3989 
o|contracted procedure: k3993 
o|contracted procedure: k3997 
o|contracted procedure: k4001 
o|contracted procedure: k4041 
o|contracted procedure: k4016 
o|contracted procedure: k4026 
o|contracted procedure: k4030 
o|contracted procedure: k4034 
o|contracted procedure: k4038 
o|contracted procedure: k4048 
o|contracted procedure: k4073 
o|contracted procedure: k4076 
o|contracted procedure: k4079 
o|contracted procedure: k4082 
o|contracted procedure: k4085 
o|contracted procedure: k4088 
o|contracted procedure: k4094 
o|contracted procedure: k4206 
o|contracted procedure: k4100 
o|contracted procedure: k4103 
o|contracted procedure: k4131 
o|contracted procedure: k4143 
o|contracted procedure: k4155 
o|contracted procedure: k4158 
o|contracted procedure: k4212 
o|contracted procedure: k4215 
o|contracted procedure: k4218 
o|contracted procedure: k4231 
o|contracted procedure: k4237 
o|contracted procedure: k4250 
o|contracted procedure: k4256 
o|contracted procedure: k4269 
o|contracted procedure: k4275 
o|contracted procedure: k4282 
o|contracted procedure: k4292 
o|contracted procedure: k4304 
o|contracted procedure: k4314 
o|contracted procedure: k4318 
o|contracted procedure: k4324 
o|contracted procedure: k4337 
o|contracted procedure: k4343 
o|contracted procedure: k4346 
o|contracted procedure: k4359 
o|contracted procedure: k4375 
o|contracted procedure: k4378 
o|contracted procedure: k4391 
o|contracted procedure: k4405 
o|contracted procedure: k4408 
o|contracted procedure: k4427 
o|contracted procedure: k4435 
o|contracted procedure: k4445 
o|contracted procedure: k4452 
o|contracted procedure: k4458 
o|contracted procedure: k4471 
o|contracted procedure: k4475 
o|contracted procedure: k4481 
o|contracted procedure: k4494 
o|contracted procedure: k4500 
o|contracted procedure: k4516 
o|contracted procedure: k4527 
o|contracted procedure: k4540 
o|contracted procedure: k4559 
o|contracted procedure: k4563 
o|contracted procedure: k4567 
o|contracted procedure: k4571 
o|contracted procedure: k4575 
o|contracted procedure: k4581 
o|contracted procedure: k4606 
o|contracted procedure: k4610 
o|contracted procedure: k4614 
o|contracted procedure: k4626 
o|contracted procedure: k4719 
o|contracted procedure: k4729 
o|contracted procedure: k471911826 
o|contracted procedure: k4735 
o|contracted procedure: k4738 
o|contracted procedure: k4760 
o|contracted procedure: k4769 
o|contracted procedure: k4785 
o|contracted procedure: k4791 
o|contracted procedure: k4797 
o|contracted procedure: k4809 
o|contracted procedure: k4836 
o|contracted procedure: k4868 
o|contracted procedure: k4882 
o|contracted procedure: k4885 
o|contracted procedure: k4888 
o|contracted procedure: k4891 
o|contracted procedure: k4894 
o|contracted procedure: k4924 
o|contracted procedure: k4944 
o|contracted procedure: k4954 
o|contracted procedure: k4958 
o|contracted procedure: k4974 
o|contracted procedure: k4998 
o|contracted procedure: k5018 
o|contracted procedure: k5021 
o|contracted procedure: k5024 
o|contracted procedure: k5032 
o|contracted procedure: k5040 
o|contracted procedure: k5051 
o|contracted procedure: k5075 
o|contracted procedure: k5086 
o|contracted procedure: k5107 
o|contracted procedure: k5113 
o|contracted procedure: k5132 
o|contracted procedure: k5165 
o|contracted procedure: k5161 
o|contracted procedure: k5138 
o|contracted procedure: k5147 
o|contracted procedure: k5157 
o|contracted procedure: k5174 
o|contracted procedure: k5184 
o|contracted procedure: k5192 
o|contracted procedure: k5188 
o|contracted procedure: k5196 
o|contracted procedure: k5207 
o|contracted procedure: k5200 
o|contracted procedure: k5211 
o|contracted procedure: k5214 
o|contracted procedure: k5227 
o|contracted procedure: k5237 
o|contracted procedure: k5241 
o|propagated global variable: g646648 ##compiler#used-units 
o|contracted procedure: k5328 
o|contracted procedure: k5338 
o|contracted procedure: k5388 
o|contracted procedure: k5396 
o|contracted procedure: k5472 
o|contracted procedure: k5419 
o|contracted procedure: k5428 
o|contracted procedure: k5438 
o|contracted procedure: k5442 
o|contracted procedure: k5508 
o|contracted procedure: k5530 
o|contracted procedure: k5540 
o|contracted procedure: k5546 
o|contracted procedure: k5586 
o|contracted procedure: k5592 
o|contracted procedure: k5598 
o|contracted procedure: k5604 
o|contracted procedure: k5625 
o|contracted procedure: k5632 
o|contracted procedure: k5640 
o|contracted procedure: k5655 
o|contracted procedure: k5658 
o|contracted procedure: k5661 
o|contracted procedure: k5669 
o|contracted procedure: k5677 
o|contracted procedure: k5693 
o|contracted procedure: k5716 
o|contracted procedure: k5722 
o|contracted procedure: k5725 
o|contracted procedure: k5732 
o|contracted procedure: k5741 
o|contracted procedure: k5748 
o|contracted procedure: k5752 
o|contracted procedure: k5760 
o|contracted procedure: k5895 
o|contracted procedure: k5787 
o|propagated global variable: r5896 ##sys#undefined-value 
o|contracted procedure: k5796 
o|contracted procedure: k5809 
o|contracted procedure: k5816 
o|contracted procedure: k5822 
o|contracted procedure: k5825 
o|contracted procedure: k5831 
o|contracted procedure: k5843 
o|contracted procedure: k5891 
o|contracted procedure: k5849 
o|contracted procedure: k5858 
o|contracted procedure: k5884 
o|contracted procedure: k5898 
o|contracted procedure: k5911 
o|contracted procedure: k5914 
o|contracted procedure: k5929 
o|contracted procedure: k5935 
o|contracted procedure: k5965 
o|contracted procedure: k5969 
o|contracted procedure: k5981 
o|contracted procedure: k5987 
o|contracted procedure: k6080 
o|contracted procedure: k6173 
o|contracted procedure: k6292 
o|contracted procedure: k6179 
o|contracted procedure: k6198 
o|contracted procedure: k6207 
o|contracted procedure: k6217 
o|contracted procedure: k6221 
o|contracted procedure: k6230 
o|contracted procedure: k6236 
o|contracted procedure: k6254 
o|contracted procedure: k6266 
o|contracted procedure: k6276 
o|contracted procedure: k6295 
o|contracted procedure: k6336 
o|contracted procedure: k6404 
o|contracted procedure: k6450 
o|contracted procedure: k6456 
o|contracted procedure: k6522 
o|contracted procedure: k6534 
o|contracted procedure: k6544 
o|contracted procedure: k6548 
o|contracted procedure: k6519 
o|contracted procedure: k6002 
o|contracted procedure: k6008 
o|contracted procedure: k6014 
o|contracted procedure: k6020 
o|contracted procedure: k6026 
o|contracted procedure: k6032 
o|contracted procedure: k6561 
o|contracted procedure: k6571 
o|contracted procedure: k6575 
o|contracted procedure: k6579 
o|contracted procedure: k6585 
o|contracted procedure: k6597 
o|contracted procedure: k6607 
o|contracted procedure: k6610 
o|contracted procedure: k6632 
o|contracted procedure: k6642 
o|contracted procedure: k6686 
o|contracted procedure: k6700 
o|contracted procedure: k6707 
o|contracted procedure: k6769 
o|contracted procedure: k6838 
o|contracted procedure: k6853 
o|contracted procedure: k6863 
o|contracted procedure: k6867 
o|contracted procedure: k6796 
o|contracted procedure: k6799 
o|contracted procedure: k6814 
o|contracted procedure: k6824 
o|contracted procedure: k6828 
o|contracted procedure: k6832 
o|contracted procedure: k6877 
o|contracted procedure: k6881 
o|contracted procedure: k6914 
o|contracted procedure: k6934 
o|contracted procedure: k6944 
o|contracted procedure: k6956 
o|contracted procedure: k6962 
o|contracted procedure: k6972 
o|contracted procedure: k697211877 
o|contracted procedure: k7022 
o|contracted procedure: k7009 
o|contracted procedure: k7018 
o|contracted procedure: k7014 
o|contracted procedure: k7085 
o|contracted procedure: k7097 
o|contracted procedure: k7107 
o|contracted procedure: k7111 
o|contracted procedure: k7065 
o|contracted procedure: k7068 
o|contracted procedure: k7071 
o|contracted procedure: k7078 
o|contracted procedure: k7128 
o|contracted procedure: k7140 
o|contracted procedure: k7150 
o|contracted procedure: k7154 
o|contracted procedure: k7171 
o|contracted procedure: k7255 
o|contracted procedure: k7321 
o|contracted procedure: k7345 
o|contracted procedure: k7367 
o|contracted procedure: k7371 
o|contracted procedure: k7375 
o|contracted procedure: k7379 
o|contracted procedure: k7383 
o|contracted procedure: k7387 
o|contracted procedure: k7390 
o|contracted procedure: k7396 
o|contracted procedure: k7414 
o|contracted procedure: k7424 
o|contracted procedure: k7428 
o|contracted procedure: k7445 
o|contracted procedure: k7465 
o|contracted procedure: k7477 
o|contracted procedure: k7487 
o|contracted procedure: k7491 
o|contracted procedure: k7511 
o|contracted procedure: k7523 
o|contracted procedure: k7532 
o|contracted procedure: k7544 
o|contracted procedure: k7556 
o|contracted procedure: k7580 
o|contracted procedure: k7577 
o|contracted procedure: k7592 
o|contracted procedure: k7599 
o|contracted procedure: k7611 
o|contracted procedure: k7618 
o|contracted procedure: k7623 
o|contracted procedure: k7629 
o|contracted procedure: k7635 
o|contracted procedure: k7641 
o|contracted procedure: k7647 
o|contracted procedure: k7653 
o|contracted procedure: k7659 
o|contracted procedure: k7686 
o|contracted procedure: k7692 
o|contracted procedure: k7698 
o|contracted procedure: k7704 
o|contracted procedure: k7723 
o|contracted procedure: k7729 
o|contracted procedure: k7735 
o|contracted procedure: k7754 
o|contracted procedure: k7760 
o|contracted procedure: k7766 
o|contracted procedure: k7772 
o|contracted procedure: k7778 
o|contracted procedure: k7784 
o|contracted procedure: k7790 
o|contracted procedure: k7796 
o|contracted procedure: k7802 
o|contracted procedure: k7808 
o|contracted procedure: k7814 
o|contracted procedure: k7820 
o|contracted procedure: k7826 
o|contracted procedure: k7832 
o|contracted procedure: k7873 
o|contracted procedure: k7879 
o|contracted procedure: k7885 
o|contracted procedure: k7891 
o|contracted procedure: k7897 
o|contracted procedure: k7903 
o|contracted procedure: k7909 
o|contracted procedure: k7915 
o|contracted procedure: k7921 
o|contracted procedure: k7927 
o|contracted procedure: k7933 
o|contracted procedure: k8016 
o|contracted procedure: k8022 
o|contracted procedure: k8063 
o|contracted procedure: k8038 
o|contracted procedure: k8048 
o|contracted procedure: k8052 
o|contracted procedure: k8056 
o|contracted procedure: k8060 
o|contracted procedure: k8073 
o|contracted procedure: k8083 
o|contracted procedure: k8095 
o|contracted procedure: k8105 
o|contracted procedure: k8109 
o|contracted procedure: k8127 
o|contracted procedure: k8151 
o|contracted procedure: k8164 
o|contracted procedure: k8168 
o|contracted procedure: k8191 
o|contracted procedure: k8200 
o|contracted procedure: k8203 
o|contracted procedure: k8212 
o|contracted procedure: k8215 
o|contracted procedure: k8224 
o|contracted procedure: k8227 
o|contracted procedure: k8236 
o|contracted procedure: k8239 
o|contracted procedure: k8248 
o|contracted procedure: k8260 
o|contracted procedure: k8269 
o|contracted procedure: k8272 
o|contracted procedure: k8281 
o|contracted procedure: k8290 
o|contracted procedure: k8299 
o|contracted procedure: k8308 
o|contracted procedure: k8317 
o|contracted procedure: k8326 
o|contracted procedure: k8335 
o|contracted procedure: k8344 
o|contracted procedure: k8347 
o|contracted procedure: k8356 
o|contracted procedure: k8368 
o|contracted procedure: k8371 
o|contracted procedure: k8377 
o|contracted procedure: k8389 
o|contracted procedure: k8392 
o|contracted procedure: k8401 
o|contracted procedure: k8404 
o|contracted procedure: k8413 
o|contracted procedure: k8416 
o|contracted procedure: k8425 
o|contracted procedure: k8428 
o|contracted procedure: k8437 
o|contracted procedure: k8440 
o|contracted procedure: k8449 
o|contracted procedure: k8452 
o|contracted procedure: k8461 
o|contracted procedure: k8464 
o|contracted procedure: k8473 
o|contracted procedure: k8476 
o|contracted procedure: k8485 
o|contracted procedure: k8497 
o|contracted procedure: k8509 
o|contracted procedure: k8530 
o|contracted procedure: k8527 
o|contracted procedure: k8542 
o|contracted procedure: k8551 
o|contracted procedure: k8565 
o|contracted procedure: k8582 
o|contracted procedure: k8611 
o|contracted procedure: k8619 
o|contracted procedure: k8622 
o|contracted procedure: k8634 
o|contracted procedure: k8637 
o|contracted procedure: k8640 
o|contracted procedure: k8648 
o|contracted procedure: k8656 
o|contracted procedure: k8663 
o|contracted procedure: k8680 
o|contracted procedure: k8697 
o|contracted procedure: k8714 
o|contracted procedure: k8731 
o|contracted procedure: k8748 
o|contracted procedure: k8765 
o|contracted procedure: k8774 
o|contracted procedure: k8777 
o|contracted procedure: k8852 
o|contracted procedure: k8783 
o|contracted procedure: k8798 
o|contracted procedure: k8812 
o|contracted procedure: k8824 
o|contracted procedure: k8827 
o|contracted procedure: k8830 
o|contracted procedure: k8838 
o|contracted procedure: k8846 
o|contracted procedure: k8806 
o|contracted procedure: k8861 
o|contracted procedure: k8868 
o|contracted procedure: k8873 
o|contracted procedure: k8880 
o|contracted procedure: k8885 
o|contracted procedure: k8889 
o|contracted procedure: k8895 
o|contracted procedure: k8902 
o|contracted procedure: k8907 
o|contracted procedure: k8914 
o|contracted procedure: k8919 
o|contracted procedure: k8926 
o|contracted procedure: k8931 
o|contracted procedure: k8938 
o|contracted procedure: k8943 
o|contracted procedure: k8950 
o|contracted procedure: k8955 
o|contracted procedure: k8962 
o|contracted procedure: k8967 
o|contracted procedure: k8971 
o|contracted procedure: k8980 
o|contracted procedure: k8988 
o|contracted procedure: k8994 
o|contracted procedure: k9011 
o|contracted procedure: k9017 
o|contracted procedure: k9023 
o|contracted procedure: k9098 
o|contracted procedure: k9104 
o|contracted procedure: k9128 
o|contracted procedure: k9134 
o|contracted procedure: k9181 
o|contracted procedure: k9237 
o|contracted procedure: k9243 
o|contracted procedure: k9246 
o|contracted procedure: k9252 
o|contracted procedure: k9261 
o|contracted procedure: k9267 
o|contracted procedure: k9273 
o|contracted procedure: k9279 
o|contracted procedure: k9288 
o|contracted procedure: k9291 
o|contracted procedure: k9297 
o|contracted procedure: k9303 
o|contracted procedure: k9309 
o|contracted procedure: k9315 
o|contracted procedure: k9321 
o|contracted procedure: k9324 
o|contracted procedure: k9330 
o|contracted procedure: k9336 
o|contracted procedure: k9342 
o|contracted procedure: k9348 
o|contracted procedure: k9354 
o|contracted procedure: k9360 
o|contracted procedure: k9366 
o|contracted procedure: k9372 
o|contracted procedure: k9378 
o|contracted procedure: k9384 
o|contracted procedure: k9390 
o|contracted procedure: k9396 
o|contracted procedure: k9402 
o|contracted procedure: k9408 
o|contracted procedure: k9414 
o|contracted procedure: k9420 
o|contracted procedure: k9426 
o|contracted procedure: k9432 
o|contracted procedure: k9438 
o|contracted procedure: k9444 
o|contracted procedure: k9450 
o|contracted procedure: k9456 
o|contracted procedure: k9462 
o|contracted procedure: k9468 
o|contracted procedure: k9474 
o|contracted procedure: k9483 
o|contracted procedure: k9492 
o|contracted procedure: k9510 
o|contracted procedure: k9507 
o|contracted procedure: k9525 
o|contracted procedure: k9531 
o|contracted procedure: k9537 
o|contracted procedure: k9543 
o|contracted procedure: k9549 
o|contracted procedure: k9555 
o|contracted procedure: k9561 
o|contracted procedure: k9567 
o|contracted procedure: k9573 
o|contracted procedure: k9580 
o|contracted procedure: k9586 
o|contracted procedure: k9592 
o|contracted procedure: k9603 
o|contracted procedure: k9609 
o|contracted procedure: k9616 
o|contracted procedure: k9647 
o|contracted procedure: k9656 
o|contracted procedure: k9664 
o|contracted procedure: k9670 
o|contracted procedure: k9676 
o|contracted procedure: k9695 
o|contracted procedure: k9701 
o|contracted procedure: k9788 
o|contracted procedure: k9809 
o|contracted procedure: k9815 
o|contracted procedure: k9821 
o|contracted procedure: k9827 
o|contracted procedure: k9868 
o|contracted procedure: k9871 
o|contracted procedure: k9877 
o|contracted procedure: k9880 
o|contracted procedure: k9886 
o|contracted procedure: k9889 
o|contracted procedure: k9895 
o|contracted procedure: k9901 
o|contracted procedure: k9907 
o|contracted procedure: k9913 
o|contracted procedure: k9919 
o|contracted procedure: k9922 
o|contracted procedure: k9946 
o|contracted procedure: k9970 
o|contracted procedure: k9997 
o|contracted procedure: k10021 
o|contracted procedure: k10024 
o|contracted procedure: k10048 
o|contracted procedure: k10051 
o|contracted procedure: k10075 
o|contracted procedure: k10099 
o|contracted procedure: k10102 
o|contracted procedure: k10126 
o|contracted procedure: k10150 
o|contracted procedure: k10174 
o|contracted procedure: k10180 
o|contracted procedure: k10183 
o|contracted procedure: k10201 
o|contracted procedure: k10198 
o|contracted procedure: k10216 
o|contracted procedure: k10222 
o|contracted procedure: k10225 
o|contracted procedure: k10249 
o|contracted procedure: k10273 
o|contracted procedure: k10297 
o|contracted procedure: k10321 
o|contracted procedure: k10345 
o|contracted procedure: k10352 
o|contracted procedure: k10358 
o|contracted procedure: k10361 
o|contracted procedure: k10385 
o|contracted procedure: k10409 
o|contracted procedure: k10464 
o|contracted procedure: k10473 
o|contracted procedure: k10517 
o|contracted procedure: k10523 
o|contracted procedure: k10529 
o|contracted procedure: k10535 
o|contracted procedure: k10541 
o|contracted procedure: k10547 
o|contracted procedure: k10553 
o|contracted procedure: k10559 
o|contracted procedure: k10565 
o|contracted procedure: k10571 
o|contracted procedure: k10700 
o|contracted procedure: k10695 
o|contracted procedure: k10691 
o|contracted procedure: k10667 
o|contracted procedure: k10687 
o|contracted procedure: k10683 
o|contracted procedure: k10671 
o|contracted procedure: k10679 
o|contracted procedure: k10675 
o|contracted procedure: k10710 
o|contracted procedure: k10720 
o|contracted procedure: k10726 
o|contracted procedure: k10732 
o|contracted procedure: k10743 
o|contracted procedure: k10749 
o|contracted procedure: k10755 
o|contracted procedure: k10952 
o|contracted procedure: k10761 
o|propagated global variable: r10953 ##sys#undefined-value 
o|contracted procedure: k10767 
o|contracted procedure: k10824 
o|contracted procedure: k10820 
o|contracted procedure: k10785 
o|contracted procedure: k10816 
o|contracted procedure: k10812 
o|contracted procedure: k10789 
o|contracted procedure: k10808 
o|contracted procedure: k10804 
o|contracted procedure: k10793 
o|contracted procedure: k10797 
o|contracted procedure: k10781 
o|contracted procedure: k10842 
o|contracted procedure: k10855 
o|contracted procedure: k10858 
o|contracted procedure: k10869 
o|contracted procedure: k10875 
o|contracted procedure: k10904 
o|contracted procedure: k10892 
o|contracted procedure: k10944 
o|contracted procedure: k10922 
o|contracted procedure: k10940 
o|simplifications: ((let . 83)) 
o|removed binding forms: 760 
o|inlining procedure: k6965 
o|inlining procedure: k6965 
o|inlining procedure: k6965 
o|inlining procedure: k10717 
o|inlining procedure: k10717 
o|inlining procedure: k10717 
o|inlining procedure: k10717 
o|inlining procedure: k10717 
o|replaced variables: 210 
o|inlining procedure: k6513 
o|inlining procedure: k6513 
o|inlining procedure: k6513 
o|inlining procedure: k6513 
o|inlining procedure: k6513 
o|inlining procedure: k6513 
o|substituted constant variable: r1071812378 
o|substituted constant variable: r1071812378 
o|substituted constant variable: r1071812382 
o|substituted constant variable: r1071812382 
o|substituted constant variable: r1071812386 
o|substituted constant variable: r1071812386 
o|substituted constant variable: r1071812390 
o|substituted constant variable: r1071812390 
o|substituted constant variable: r1071812394 
o|substituted constant variable: r1071812394 
o|simplifications: ((if . 8)) 
o|removed binding forms: 112 
o|substituted constant variable: r651412444 
o|substituted constant variable: r651412446 
o|substituted constant variable: r651412448 
o|substituted constant variable: r651412450 
o|substituted constant variable: r651412452 
o|substituted constant variable: r651412454 
o|removed binding forms: 10 
o|removed binding forms: 6 
o|customizable procedures: (encode-size2104 k9973 k10213 err1779 g19801981 k9255 k9282 k9477 k9486 k9522 err1701 k8251 k8359 k8380 k8488 k8500 k8558 k8575 k8592 k8669 k8686 k8703 k8720 k8737 k8754 k8771 err1507 map-loop16741692 map-loop16261651 g16131614 str1508 g12791286 for-each-loop12781485 for-each-loop14531467 k7526 k7535 k7547 k7559 k7602 g14171418 g11671174 for-each-loop11661268 doloop11941195 k7357 for-each-loop12041233 for-each-loop11431156 for-each-loop11191133 k6977 loop1090 for-each-loop10481059 for-each-loop10351068 header91 declarations93 prototypes94 trampolines95 procedures103 k6077 k6623 k6143 doloop888889 k6552 doloop893894 for-each-loop901912 k6444 k6386 literal-frame96 doloop961962 doloop969970 expression90 doloop827828 k5938 string-like-substring101 k5772 k5861 gen-string-constant100 loop796 map-loop771788 gen-lit99 doloop744745 k5463 k5466 doloop721722 k5262 k5319 for-each-loop639650 doloop661662 doloop666667 doloop655656 pad0563 map-loop573598 for-each-loop611622 k4741 k4800 doloop550551 doloop499500 g395403 for-each-loop394410 for-each-loop420434 k3418 find-lambda89 k3424 k3661 k3795 expr-args112 g280288 for-each-loop279295 for-each-loop305319 push-args113 g186194 for-each-loop185201 loop146 expr111 for-each-loop4758 for-each-loop2738) 
o|calls to known targets: 422 
o|fast box initializations: 54 
o|dropping unused closure argument: f_4863 
o|dropping unused closure argument: f_10652 
o|dropping unused closure argument: f_5985 
*/
/* end of file */
